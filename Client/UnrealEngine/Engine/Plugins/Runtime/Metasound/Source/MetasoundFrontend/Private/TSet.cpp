// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 142

// Emplace<FMetasoundAssetBase_const_*_const_&> @ 14ad846f0

FSetElementId __thiscall
TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
::Emplace<FMetasoundAssetBase_const_*_const_&>
          (TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
           *this,FMetasoundAssetBase **param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<FMetasoundAssetBase_const_*> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar6 = ((uint)(*(ulonglong *)local_38.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_38.Pointer >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  bVar4 = TryReplaceExisting(this,uVar6,local_38.Pointer,local_res8,in_R9);
  iVar1 = local_res8[0];
  if (bVar4) {
    *(int *)param_1 = local_res8[0];
  }
  else {
    RehashOrLink(this,uVar6,local_38.Pointer,local_res8[0]);
    *(int *)param_1 = iVar1;
  }
  return (FSetElementId)(int)param_1;
}

// Emplace<FMetasoundFrontendVersion_const_&> @ 14ad84840

FSetElementId __thiscall
TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>::
Emplace<FMetasoundFrontendVersion_const_&>
          (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
           *this,FMetasoundFrontendVersion *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  char *in_R9;
  uint uVar11;
  undefined1 *puVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (longlong *)0x0) {
    lVar3 = *(longlong *)(param_2 + 8);
    *(longlong *)local_48.Pointer = *(longlong *)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = lVar3;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  uVar11 = *(uint *)((longlong)local_48.Pointer + 8);
  iVar1 = *(int *)((longlong)local_48.Pointer + 0xc);
  lVar3 = *(longlong *)local_48.Pointer;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar3);
  uVar5 = uVar5 + (int)((ulonglong)lVar3 >> 0x20);
  iVar4 = *(int *)puVar12;
  iVar2 = *(int *)&(this->Elements).field_0x34;
  bVar13 = false;
  uVar5 = uVar5 * 0x40 + -0x61c88647 + (iVar1 + uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11)
          + (uVar5 >> 2) ^ uVar5;
  uVar11 = local_48.Index;
  if ((iVar4 - iVar2 != 1) && (iVar4 != iVar2)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar8 = *(uint *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (uVar8 != 0xffffffff) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar6 = (longlong)(int)uVar8;
        if (((*(longlong *)(lVar3 + lVar6 * 0x18) == *(longlong *)local_48.Pointer) &&
            (*(int *)(lVar3 + 8 + lVar6 * 0x18) ==
             (int)*(longlong *)((longlong)local_48.Pointer + 8))) &&
           (*(int *)(lVar3 + 0xc + lVar6 * 0x18) == *(int *)((longlong)local_48.Pointer + 0xc))) {
          bVar13 = uVar8 != 0xffffffff;
          if (bVar13) {
            memmove((void *)(lVar3 + (longlong)(int)uVar8 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            uVar11 = uVar8;
          }
          break;
        }
        uVar8 = *(uint *)(lVar3 + 0x10 + lVar6 * 0x18);
      } while (uVar8 != 0xffffffff);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar8 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar5;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(uint *)((longlong)FVar9 + uVar7 * 4) = uVar11;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  (param_1->Name).ComparisonIndex.Value = uVar11;
  return (FSetElementId)(int)param_1;
}

// Emplace<Metasound::Frontend::FAnalyzerAddress_const_&> @ 14ad84c90

FSetElementId __thiscall
TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
::Emplace<Metasound::Frontend::FAnalyzerAddress_const_&>
          (TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
           *this,FAnalyzerAddress *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ForElementType<FSetElementId> FVar13;
  undefined8 *_Dst;
  char *in_R9;
  int iVar14;
  bool bVar15;
  FSparseArrayAllocationInfo local_48;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar14 = 1;
  if (iVar1 == 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar9 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar9 * 0x60 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x60 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar9);
  if (local_48.Pointer != (FAnalyzerAddress *)0x0) {
    *(undefined ***)local_48.Pointer = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
    *(ulong64 *)((longlong)local_48.Pointer + 8) = *(ulong64 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->A = (int)uVar6;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->B = (int)((ulonglong)uVar6 >> 0x20);
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->C = (int)uVar7;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->D = (int)((ulonglong)uVar7 >> 0x20);
    *(FName *)((longlong)local_48.Pointer + 0x20) = *(FName *)(param_2 + 0x20);
    *(FName *)((longlong)local_48.Pointer + 0x28) = *(FName *)(param_2 + 0x28);
    *(FName *)((longlong)local_48.Pointer + 0x30) = *(FName *)(param_2 + 0x30);
    uVar10 = *(uint *)(param_2 + 0x3c);
    uVar12 = *(uint *)(param_2 + 0x40);
    uVar5 = *(uint *)(param_2 + 0x44);
    ((FGuid *)((longlong)local_48.Pointer + 0x38))->A = *(uint *)(param_2 + 0x38);
    ((FGuid *)((longlong)local_48.Pointer + 0x38))->B = uVar10;
    ((FGuid *)((longlong)local_48.Pointer + 0x38))->C = uVar12;
    ((FGuid *)((longlong)local_48.Pointer + 0x38))->D = uVar5;
    *(FName *)((longlong)local_48.Pointer + 0x48) = *(FName *)(param_2 + 0x48);
    *(bool *)((longlong)local_48.Pointer + 0x50) = param_2[0x50];
    *(undefined4 *)&((FAnalyzerAddress *)((longlong)local_48.Pointer + 0x58))->_padding_ =
         0xffffffff;
  }
  pcVar4 = *(code **)(*(longlong *)local_48.Pointer + 0x28);
  if (pcVar4 == Metasound::Frontend::FAnalyzerAddress::GetHash) {
    uVar10 = Metasound::Frontend::FAnalyzerAddress::GetHash(local_48.Pointer);
  }
  else {
    uVar10 = (*pcVar4)();
  }
  iVar1 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar9 = *(int *)&(this->Elements).field_0x34;
  if ((iVar1 - iVar9 != 1) && (iVar1 != iVar9)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & uVar10) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x60 + 0x58 + *(longlong *)&this->Elements))
    {
      bVar8 = Metasound::FTransmissionAddress::operator==
                        ((FTransmissionAddress *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x60),local_48.Pointer);
      if (bVar8) {
        bVar15 = iVar1 != -1;
        if (bVar15) {
          _Dst = (undefined8 *)((longlong)iVar1 * 0x60 + *(longlong *)&this->Elements);
          (**(code **)*_Dst)(_Dst,0);
          memmove(_Dst,local_48.Pointer,0x58);
          TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,local_48.Index,1);
          local_48.Index = iVar1;
        }
        break;
      }
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar15;
  }
  if (bVar15 == false) {
    uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar12) {
      uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar12 < 1) || (iVar14 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)&((FAnalyzerAddress *)((longlong)local_48.Pointer + 0x58))->_padding_ + 4)
           = uVar10;
      FVar13 = (this->Hash).SecondaryData;
      if (FVar13 == (ForElementType<FSetElementId>)0x0) {
        FVar13 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar11 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)&((FAnalyzerAddress *)((longlong)local_48.Pointer + 0x58))->_padding_ =
           *(undefined4 *)((longlong)FVar13 + uVar11 * 4);
      *(int *)((longlong)FVar13 + uVar11 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar14;
      Rehash(this);
    }
  }
  *(int *)&param_1->_padding_ = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_&&,TSharedPtr<Metasound::IReceiver,1>_&&>_> @ 14ad84f20

FSetElementId __thiscall
TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_&&,TSharedPtr<Metasound::IReceiver,1>_&&>_>
          (TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_&&,TSharedPtr<Metasound::IReceiver,1>_&&> *param_1,
          bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  void *_Dst;
  int iVar8;
  char *in_R9;
  int iVar9;
  int iVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar1 = *(longlong *)&this->Elements;
    iVar9 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar1);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar9;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x20 + lVar1) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar2;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = plVar2[1];
    plVar2[1] = 0;
    *plVar2 = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar9 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar8 * 0x20 + lVar1) == *(longlong *)local_48.Pointer) {
          bVar11 = iVar8 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar8 * 0x20 + lVar1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar9 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar1);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar9;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar9;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_&&,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_&&>_> @ 14ad85170

FSetElementId __thiscall
TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FString_&&,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_&&>_>
          (TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_&&,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined1 *in_R9;
  FSparseArrayAllocationInfo local_28;
  
  iVar12 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar12 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar12 = iVar12 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  puVar11 = (undefined8 *)0x0;
  iVar12 = 0;
  if (local_28.Pointer != (undefined8 *)0x0) {
    puVar11 = *(undefined8 **)param_2;
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_28.Pointer = 0;
    *(undefined8 *)local_28.Pointer = *puVar11;
    *puVar11 = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 8) = *(undefined4 *)(puVar11 + 1);
    *(undefined4 *)((longlong)local_28.Pointer + 0xc) = *(undefined4 *)((longlong)puVar11 + 0xc);
    puVar11[1] = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
    puVar11 = local_28.Pointer;
  }
  if (*(int *)(puVar11 + 1) == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)*puVar11;
    iVar12 = *(int *)(puVar11 + 1) + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar8);
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = 0;
  }
  uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (3 < uVar7) {
    uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar10 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar7 < 1) || (iVar10 <= this->HashSize)) {
    uVar5 = this->HashSize - 1U & uVar5;
    *(uint *)((longlong)puVar11 + 0x1c) = uVar5;
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
    *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
    *(int *)((longlong)FVar9 + uVar6 * 4) = local_28.Index;
  }
  else {
    this->HashSize = iVar10;
    Rehash(this);
  }
  *(int *)&param_1->Key = local_28.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&>_> @ 14ad85320

FSetElementId __thiscall
TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&>_>
          (TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  void *_Dst;
  int iVar8;
  char *in_R9;
  int iVar9;
  int iVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar1 = *(longlong *)&this->Elements;
    iVar9 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar1);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar9;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x20 + lVar1) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar2;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = plVar2[1];
    plVar2[1] = 0;
    *plVar2 = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar9 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar8 * 0x20 + lVar1) == *(longlong *)local_48.Pointer) {
          bVar11 = iVar8 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar8 * 0x20 + lVar1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar9 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar1);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar9;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar9;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_&,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>_&&>_> @ 14ad85570

FSetElementId __thiscall
TSet<TTuple<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FName_&,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>_&&>_>
          (TSet<TTuple<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_&,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int iVar11;
  char *in_R9;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar10 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar3;
    *plVar3 = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  lVar2 = *(longlong *)local_48.Pointer;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  iVar10 = *(int *)&(this->Elements).field_0x8;
  bVar12 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar6 = uVar6 + (int)((ulonglong)lVar2 >> 0x20);
  if ((iVar10 - iVar5 != 1) && (iVar10 != iVar5)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar10 * 0x18) == *(longlong *)local_48.Pointer) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            puVar4 = *(undefined8 **)(lVar2 + 8 + (longlong)iVar10 * 0x18);
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4,1);
            }
            memmove((void *)(lVar2 + (longlong)iVar10 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar2 + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FGuid_const_&,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_&&>_> @ 14ad857c0

FSetElementId __thiscall
TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FGuid_const_&,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_&&>_>
          (TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FGuid_const_&,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  void *_Dst;
  int iVar11;
  char *in_R9;
  undefined1 *puVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar6 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar2);
    iVar6 = iVar6 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (FGuid *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    uVar4 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar4;
    uVar4 = *puVar3;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->A = (int)uVar4;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->B = (int)((ulonglong)uVar4 >> 0x20);
    *puVar3 = 0;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->C = 0xffffffff;
  }
  uVar7 = CityHash64(local_48.Pointer,0x10);
  bVar13 = false;
  if (*(int *)puVar12 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FGuid>(this,(uint)uVar7,local_48.Pointer);
    bVar13 = iVar6 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar6 * 0x20 + *(longlong *)&this->Elements);
      UE::Core::Private::Tuple::
      TTupleBaseElement<TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,1,2>
      ::
      ~TTupleBaseElement<TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,1,2>
                ((TTupleBaseElement<TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,1,2>
                  *)((longlong)_Dst + 0x10));
      memmove(_Dst,local_48.Pointer,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar9 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & (uint)uVar7;
      ((FGuid *)((longlong)local_48.Pointer + 0x10))->D = uVar9;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      ((FGuid *)((longlong)local_48.Pointer + 0x10))->C = *(uint *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>_const_&>_> @ 14ad859d0

FSetElementId __thiscall
TSet<TTuple<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FName_const_&,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>_const_&>_>
          (TSet<TTuple<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>_const_&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  void *_Dst;
  int iVar8;
  char *in_R9;
  int iVar9;
  int iVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar1 = *(longlong *)&this->Elements;
    iVar9 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar1);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar9;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x20 + lVar1) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar2;
    lVar1 = plVar2[1];
    *(longlong *)((longlong)local_48.Pointer + 0x10) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar9 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar8 * 0x20 + lVar1) == *(longlong *)local_48.Pointer) {
          bVar11 = iVar8 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar8 * 0x20 + lVar1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar9 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar1);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar9;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar9;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_&&>_> @ 14ad85c20

FSetElementId __thiscall
TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FString_const_&,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_&&>_>
          (TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FString *_Src;
  ulonglong uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  char *in_R9;
  undefined8 *_Dst;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar6 = iVar6 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer == (FString *)0x0) {
    _Src = (FString *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)(param_2 + 8);
    ::FString::FString(local_48.Pointer,*(FString **)param_2);
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)*puVar3;
    *puVar3 = 0;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayNum = -1;
    _Src = local_48.Pointer;
  }
  iVar6 = 0;
  iVar4 = (_Src->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(_Src->Data).AllocatorInstance.Data;
    iVar6 = iVar4 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar9);
  bVar12 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,uVar5,_Src);
    bVar12 = iVar6 != -1;
    if (bVar12) {
      _Dst = (undefined8 *)((longlong)iVar6 * 0x20 + *(longlong *)&this->Elements);
      puVar3 = (undefined8 *)_Dst[2];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,_Src,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      _Src[1].Data.ArrayMax = uVar5;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      _Src[1].Data.ArrayNum = *(int *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<TTuple<FGuid,FName>_const_&>_> @ 14ad85e50

FSetElementId __thiscall
TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<TTuple<FGuid,FName>_const_&>_>
          (TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<TTuple<FGuid,FName>_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  ulonglong uVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  TTuple<FGuid,FName> *_Src;
  undefined1 *puVar11;
  bool bVar12;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar6 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x30) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer == (TTuple<FGuid,FName> *)0x0) {
    _Src = (TTuple<FGuid,FName> *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)param_3;
    uVar4 = puVar3[1];
    *(undefined8 *)local_48.Pointer = *puVar3;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar4;
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = puVar3[2];
    *(undefined8 *)((longlong)local_48.Pointer + 0x18) = 0;
    *(undefined8 *)&((TTuple<FGuid,FName> *)((longlong)local_48.Pointer + 0x18))->field_0x8 = 0;
    DestructItems<Metasound::Frontend::FMetasoundAnalyzerView,int>((FMetasoundAnalyzerView *)0x0,0);
    *(undefined4 *)&((TTuple<FGuid,FName> *)((longlong)local_48.Pointer + 0x18))->field_0x10 =
         0xffffffff;
    _Src = local_48.Pointer;
  }
  bVar12 = false;
  if (*(int *)puVar11 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<TTuple<FGuid,FName>_>(this,(uint)param_2,_Src);
    bVar12 = iVar6 != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)iVar6 * 0x30 + *(longlong *)&this->Elements);
      DestructItems<Metasound::Frontend::FMetasoundAnalyzerView,int>
                (*(FMetasoundAnalyzerView **)((longlong)_Dst + 0x18),*(int *)((longlong)_Dst + 0x20)
                );
      if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x18));
      }
      memmove(_Dst,_Src,0x28);
      TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&_Src[1].field_0x14 = uVar8;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)&_Src[1].field_0x10 = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_48.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<TTuple<FGuid,FName>_> @ 14ad861e0

int __thiscall
TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<TTuple<FGuid,FName>_>
          (TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TTuple<FGuid,FName> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar2 = (longlong)iVar3 * 0x30;
        if ((((*(int *)&param_2->field_0xc == *(int *)(lVar2 + 0xc + lVar1) &&
              *(int *)&param_2->field_0x8 == *(int *)(lVar2 + 8 + lVar1)) &&
             *(int *)&param_2->field_0x4 == *(int *)(lVar2 + 4 + lVar1)) &&
             *(int *)param_2 == *(int *)(lVar2 + lVar1)) &&
           (*(longlong *)(lVar2 + 0x10 + lVar1) == *(longlong *)&param_2->field_0x10)) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar2 + 0x28 + lVar1);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FGuid> @ 14ad862c0

int __thiscall
TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FGuid>
          (TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FGuid *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&this->Elements);
        if (((param_2->D == puVar2[3] && param_2->C == puVar2[2]) && param_2->B == puVar2[1]) &&
            param_2->A == *puVar2) {
          return uVar1;
        }
        uVar1 = puVar2[6];
      } while (uVar1 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<FMetasoundFrontendVersion> @ 14ad86370

int __thiscall
TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>::
FindIndexByHash<FMetasoundFrontendVersion>
          (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
           *this,uint param_1,FMetasoundFrontendVersion *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar2 = (longlong)iVar3;
        if (((*(FName *)(lVar1 + lVar2 * 0x18) == param_2->Name) &&
            (*(int *)(lVar1 + 8 + lVar2 * 0x18) == (param_2->Number).Major)) &&
           (*(int *)(lVar1 + 0xc + lVar2 * 0x18) == (param_2->Number).Minor)) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + lVar2 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14ad863e0

int __thiscall
TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      iVar3 = (param_2->Data).ArrayNum;
      lVar4 = (longlong)iVar1 * 0x20;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + lVar4);
      if (iVar2 == iVar3) {
        if (iVar2 < 2) {
          return iVar1;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar4),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar2 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar4 + 0x18 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// RemoveImpl<TTuple<FGuid,FName>_> @ 14ad8f8a0

int __thiscall
TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RemoveImpl<TTuple<FGuid,FName>_>
          (TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TTuple<FGuid,FName> *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while ((lVar8 = (longlong)(int)uVar7 * 0x30,
         ((*(int *)&param_2->field_0xc != *(int *)(lVar8 + 0xc + lVar2) ||
          *(int *)&param_2->field_0x8 != *(int *)(lVar8 + 8 + lVar2)) ||
         *(int *)&param_2->field_0x4 != *(int *)(lVar8 + 4 + lVar2)) ||
         *(int *)param_2 != *(int *)(lVar8 + lVar2) ||
         (*(longlong *)(lVar8 + 0x10 + lVar2) != *(longlong *)&param_2->field_0x10))) {
    uVar7 = *(uint *)(lVar8 + 0x28 + lVar2);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14ad8f9b8;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14ad8f9b8:
  FVar6 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar8 + 0x2c) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar10 = *(uint *)(lVar8 + 0x28);
      TSparseArray<TSparseSetElement<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + 0x28 + (longlong)(int)uVar1 * 0x30);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<Metasound::Frontend::FAnalyzerAddress> @ 14ad8fa60

int __thiscall
TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
::RemoveImpl<Metasound::Frontend::FAnalyzerAddress>
          (TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
           *this,uint param_1,FAnalyzerAddress *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  FTransmissionAddress *this_00;
  undefined1 *puVar8;
  uint *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    this_00 = (FTransmissionAddress *)(*(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x60);
    bVar3 = Metasound::FTransmissionAddress::operator==(this_00,(FTransmissionAddress *)param_2);
    if (bVar3) break;
    uVar6 = *(uint *)(this_00 + 0xb);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar8 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14ad8fb4c;
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
LAB_14ad8fb4c:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x60;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar9 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x5c) * 4);
  while( true ) {
    uVar1 = *puVar9;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar9 = *(uint *)(lVar7 + 0x58);
      TSparseArray<TSparseSetElement<Metasound::Frontend::FAnalyzerAddress>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar9 = (uint *)(*(longlong *)&this->Elements + 0x58 + (longlong)(int)uVar1 * 0x60);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<FName> @ 14ad8fc00

int __thiscall
TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
::RemoveImpl<FName>(TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
                    *this,uint param_1,FName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x20;
    if (*(FName *)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x18);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14ad8fce1;
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
LAB_14ad8fce1:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<FString> @ 14ad8fda0

int __thiscall
TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
::RemoveImpl<FString>
          (TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  ForElementType<FSetElementId> FVar13;
  uint *puVar14;
  bool bVar15;
  
  iVar6 = 0;
  FVar13 = (this->Hash).SecondaryData;
  lVar12 = (longlong)(int)(this->HashSize - 1U & param_1);
  if (FVar13 == (ForElementType<FSetElementId>)0x0) {
    FVar13 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar1 = *(uint *)((longlong)FVar13 + lVar12 * 4);
  puVar14 = (uint *)((longlong)FVar13 + lVar12 * 4);
  do {
    if (uVar1 == 0xffffffff) {
      return iVar6;
    }
    lVar12 = *(longlong *)&this->Elements;
    iVar5 = (param_2->Data).ArrayNum;
    lVar10 = (longlong)(int)uVar1 * 0x20;
    iVar2 = *(int *)(lVar12 + 8 + lVar10);
    if (iVar2 == iVar5) {
      if (1 < iVar2) {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(lVar12 + lVar10),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar15 = iVar5 == 0;
        goto LAB_14ad8fe31;
      }
LAB_14ad8fe44:
      if (((int)uVar1 < 0) || (*(int *)&(this->Elements).field_0x28 <= (int)uVar1)) {
LAB_14ad8fea4:
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Elements.IsValidIndex(ElementIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar15) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
      }
      else {
        if ((*(int *)&(this->Elements).field_0x28 <= (int)uVar1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar15)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        puVar3 = *(undefined1 **)&(this->Elements).field_0x20;
        puVar9 = &(this->Elements).field_0x10;
        if (puVar3 != (undefined1 *)0x0) {
          puVar9 = puVar3;
        }
        uVar7 = uVar1;
        if ((int)uVar1 < 0) {
          uVar7 = uVar1 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0)
        goto LAB_14ad8fea4;
      }
      FVar13 = (this->Hash).SecondaryData;
      lVar10 = *(longlong *)&this->Elements + lVar10;
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar13 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = FVar13;
      }
      puVar11 = (uint *)((longlong)FVar8 + (longlong)*(int *)(lVar10 + 0x1c) * 4);
      while( true ) {
        uVar7 = *puVar11;
        if ((uVar7 == 0xffffffff) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("NextElementIndex != INDEX_NONE",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                ,0x2b5,L"Corrupt hash"), bVar15)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        if (uVar7 == uVar1) break;
        puVar11 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar7 * 0x20);
      }
      *puVar11 = *(uint *)(lVar10 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar1,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar1,1);
      iVar6 = iVar6 + 1;
    }
    else {
      bVar15 = iVar2 + iVar5 == 1;
LAB_14ad8fe31:
      if (bVar15) goto LAB_14ad8fe44;
      puVar14 = (uint *)(lVar12 + 0x18 + lVar10);
    }
    uVar1 = *puVar14;
  } while( true );
}

// TSet<TTuple<FGuid,Metasound::FDataReferenceCollection>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>,FDefaultSetAllocator> @ 14ad95c90

TSet<TTuple<FGuid,Metasound::FDataReferenceCollection>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FGuid,Metasound::FDataReferenceCollection>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>,FDefaultSetAllocator>
::
TSet<TTuple<FGuid,Metasound::FDataReferenceCollection>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>,FDefaultSetAllocator>
          (TSet<TTuple<FGuid,Metasound::FDataReferenceCollection>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<FGuid,Metasound::FDataReferenceCollection>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,0);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator> @ 14ad95dc0

TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
::
TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
          (TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,0);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// operator= @ 14ad9f090

TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator> *
__thiscall
TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>::
operator=(TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
          *this,TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int iVar2;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
    iVar2 = *(int *)&(param_1->Elements).field_0x8;
    TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar2,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
               (int *)&(this->Elements).field_0xc);
    puVar1 = &(param_1->Elements).field_0x10;
    this_00 = &(this->Elements).field_0x10;
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    if (this_00 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar2 != 0) {
      memcpy(*(void **)&this->Elements,*(void **)&param_1->Elements,(longlong)iVar2 * 0x18);
    }
    return this;
  }
  return this;
}

// Array @ 14ada6210

TArray<FMetasoundAssetBase_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
::Array(TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
        *this,TArray<FMetasoundAssetBase_const_*,TSizedDefaultAllocator<32>_>
              *__return_storage_ptr__)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  TArray<FMetasoundAssetBase_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (0 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar12,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  uVar12 = 1;
  iVar13 = iVar10;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar14;
    iVar13 = 0;
    iVar10 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ada62e5;
      uVar4 = puVar14[lVar9 + 1];
    }
    uVar12 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar12 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar13;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_14ada62e5:
  TStack_40._padding_ = CONCAT44(uVar12,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Elements).field_0x28) {
    do {
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar8 = (TArray<FMetasoundAssetBase_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar8;
      }
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar11;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Array @ 14ada6460

TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> * __thiscall
TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
::Array(TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
        *this,TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>
              *__return_storage_ptr__)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar11 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar13 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (0 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,uVar13,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  uVar13 = 1;
  iVar14 = iVar11;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar15;
    iVar14 = 0;
    iVar11 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)iVar11;
      iVar14 = iVar14 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ada6542;
      uVar4 = puVar15[lVar9 + 1];
    }
    uVar13 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar14;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_14ada6542:
  TStack_40._padding_ = CONCAT44(uVar13,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar14;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Elements).field_0x28) {
    do {
      pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar12 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x60 + *(longlong *)&this->Elements);
      if (((pFVar10 <= pFVar12) && (pFVar12 < pFVar10 + (longlong)*piVar1 * 0x58)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
                 (*pcVar5)();
        return pTVar8;
      }
      iVar11 = __return_storage_ptr__->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar11 + 1;
      pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 0x58;
      *(undefined ***)pFVar10 = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
      *(undefined8 *)(pFVar10 + 8) = *(undefined8 *)(pFVar12 + 8);
      uVar6 = *(undefined8 *)(pFVar12 + 0x18);
      *(undefined8 *)(pFVar10 + 0x10) = *(undefined8 *)(pFVar12 + 0x10);
      *(undefined8 *)(pFVar10 + 0x18) = uVar6;
      *(undefined8 *)(pFVar10 + 0x20) = *(undefined8 *)(pFVar12 + 0x20);
      *(undefined8 *)(pFVar10 + 0x28) = *(undefined8 *)(pFVar12 + 0x28);
      *(undefined8 *)(pFVar10 + 0x30) = *(undefined8 *)(pFVar12 + 0x30);
      uVar6 = *(undefined8 *)(pFVar12 + 0x40);
      *(undefined8 *)(pFVar10 + 0x38) = *(undefined8 *)(pFVar12 + 0x38);
      *(undefined8 *)(pFVar10 + 0x40) = uVar6;
      *(undefined8 *)(pFVar10 + 0x48) = *(undefined8 *)(pFVar12 + 0x48);
      pFVar10[0x50] = pFVar12[0x50];
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Includes @ 14adc49e0

bool __thiscall
TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>::
Includes(TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
         *this,TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
               *param_1)

{
  FMetasoundFrontendVersion *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  FName FVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 <
      *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34) {
    return false;
  }
  iStack_38 = 0;
  iVar6 = *(int *)&(param_1->Elements).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  uStack_34 = 1;
  local_20 = iStack_38;
  iStack_24 = iStack_38;
  if (iVar6 != 0) {
    puVar9 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)TStack_60.Array;
    }
    uVar3 = *puVar9;
    while (uVar3 == 0) {
      lVar7 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar6;
      if ((int)((iVar6 + -1 >> 0x1f & 0x1fU) + iVar6 + -1) >> 5 < iStack_38) goto LAB_14adc4a9a;
      uVar3 = puVar9[lVar7 + 1];
    }
    uStack_34 = -uVar3 & uVar3;
    uVar2 = (ulonglong)uStack_34 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_24 = (int)lVar7 + -1 + local_20;
    if (iVar6 < iStack_24) {
      iStack_24 = iVar6;
    }
  }
LAB_14adc4a9a:
  uStack_28 = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = param_1;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < iVar6) {
    do {
      lVar8 = (longlong)TStack_60.CurrentBitIndex;
      lVar7 = *(longlong *)&param_1->Elements;
      iVar6 = *(int *)(lVar7 + 0xc + lVar8 * 0x18);
      pFVar1 = (FMetasoundFrontendVersion *)(lVar7 + lVar8 * 0x18);
      uVar3 = *(uint *)(lVar7 + 8 + lVar8 * 0x18);
      FVar4 = pFVar1->Name;
      uVar5 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      uVar5 = uVar5 + FVar4.Number;
      iVar6 = FindIndexByHash<FMetasoundFrontendVersion>
                        (this,uVar5 * 0x40 +
                              (iVar6 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3) +
                              (uVar5 >> 2) + 0x9e3779b9 ^ uVar5,pFVar1);
      if (iVar6 == -1) {
        return false;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return true;
}

// Rehash @ 14adcce90

void __thiscall
TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
::Rehash(TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14adccf6c;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14adccf6c:
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
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14adcd050

void __thiscall
TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  ulong64 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ForElementType<FSetElementId> FVar9;
  uint *puVar10;
  char *pcVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14adcd127;
        uVar5 = puVar10[lVar7 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14adcd127:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        pcVar11 = (char *)((longlong)local_40.CurrentBitIndex * 0x30 + *(longlong *)&this->Elements)
        ;
        uVar6 = CityHash64(pcVar11,0x10);
        uVar3 = *(undefined8 *)(pcVar11 + 0x10);
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U &
                (uVar5 + (int)((ulonglong)uVar3 >> 0x20) + (uint)uVar6 * 0x40 +
                         ((uint)(uVar6 >> 2) & 0x3fffffff) + 0x9e3779b9 ^ (uint)uVar6);
        *(uint *)(pcVar11 + 0x2c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(pcVar11 + 0x28) = *(undefined4 *)((longlong)FVar9 + uVar8 * 4);
        *(int *)((longlong)FVar9 + uVar8 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14adcd230

void __thiscall
TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14adcd307;
        uVar9 = puVar10[lVar5 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14adcd307:
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
        iVar2 = local_30.CurrentBitIndex;
        pcVar8 = (char *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x20);
        uVar4 = CityHash64(pcVar8,0x10);
        uVar9 = *piVar1 - 1U & (uint)uVar4;
        *(uint *)(pcVar8 + 0x1c) = uVar9;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar8 + 0x18) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14adcd3d0

void __thiscall
TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14adcd4a7;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14adcd4a7:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x1c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14adcd570

void __thiscall
TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14adcd647;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14adcd647:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x1c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14adcd710

void __thiscall
TSet<TTuple<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<Metasound::Frontend::IDataTypeRegistryEntry,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14adcd7e7;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14adcd7e7:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x1c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14adcd8b0

void __thiscall
TSet<TTuple<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_40.Array;
      }
      uVar5 = *puVar9;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14adcd987;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14adcd987:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        uVar3 = *(undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar6 + 0x14) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14adcda60

void __thiscall
TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar5 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar5 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar4 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14adcdb37;
        uVar4 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar5 < iStack_54) {
LAB_14adcdb37:
        iStack_54 = iVar5;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar5) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        puVar10 = (undefined8 *)
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x20);
        iVar5 = *(int *)(puVar10 + 1) + -1;
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar8 = L"";
          iVar5 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar10;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)puVar10 + 0x1c) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14adcdc10

void __thiscall
TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::IInterfaceRegistryEntry,TDefaultDelete<Metasound::Frontend::IInterfaceRegistryEntry>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar5 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar5 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar4 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14adcdce7;
        uVar4 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar5 < iStack_54) {
LAB_14adcdce7:
        iStack_54 = iVar5;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar5) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        puVar10 = (undefined8 *)
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x20);
        iVar5 = *(int *)(puVar10 + 1) + -1;
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar8 = L"";
          iVar5 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar10;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)puVar10 + 0x1c) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14adcddc0

void __thiscall
TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>::
Rehash(TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
       *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  uint *puVar12;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar11 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar11 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar8 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14adcde97;
        uVar11 = puVar12[lVar8 + 1];
      }
      uStack_64 = -uVar11 & uVar11;
      uVar9 = (ulonglong)uStack_64 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_54 = (int)lVar8 + -1 + iStack_50;
      if (iVar3 < iStack_54) {
LAB_14adcde97:
        iStack_54 = iVar3;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar6 = local_40.CurrentBitIndex;
        uVar11 = *(uint *)(*(longlong *)&this->Elements + 8 +
                          (longlong)local_40.CurrentBitIndex * 0x18);
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18);
        iVar3 = *(int *)((longlong)puVar2 + 0xc);
        uVar4 = *puVar2;
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar7 = uVar7 + (int)((ulonglong)uVar4 >> 0x20);
        uVar11 = ((uVar7 >> 2) + (iVar3 + uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11) +
                  uVar7 * 0x40 + -0x61c88647 ^ uVar7) & *piVar1 - 1U;
        *(uint *)((longlong)puVar2 + 0x14) = uVar11;
        FVar5 = (this->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar5;
        }
        uVar9 = (longlong)*piVar1 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar10 + uVar9 * 4);
        *(int *)((longlong)FVar10 + uVar9 * 4) = iVar6;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14adcdfb0

void __thiscall
TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
::Rehash(TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  longlong *plVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14adce087;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14adce087:
        iStack_44 = iVar2;
      }
    }
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        plVar8 = (longlong *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x60);
        uVar4 = (**(code **)(*plVar8 + 0x28))(plVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)plVar8 + 0x5c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(plVar8 + 0xb) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14adce150

void __thiscall
TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
               *this,uint param_1,TSparseSetElement<FMetasoundAssetBase_const_*> *param_2,
              int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0xc = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x8 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RemoveByIndex @ 14adcede0

void __thiscall
TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>,1>,FDefaultSetAllocator>
                *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_14adcee52;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14adcee52:
  FVar4 = (this->Hash).SecondaryData;
  lVar5 = (longlong)param_1 * 0x20 + *(longlong *)&this->Elements;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar4 + (longlong)*(int *)(lVar5 + 0x1c) * 4);
  while( true ) {
    iVar1 = *piVar7;
    if (iVar1 == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iVar1 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + 0x18 + (longlong)iVar1 * 0x20);
  }
  *piVar7 = *(int *)(lVar5 + 0x18);
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<Metasound::Frontend::FInterfaceBindingRegistryEntry,TDefaultDelete<Metasound::Frontend::FInterfaceBindingRegistryEntry>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,param_1,1);
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// TryReplaceExisting @ 14add2890

bool __thiscall
TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<FMetasoundAssetBase_const_*,DefaultKeyFuncs<FMetasoundAssetBase_const_*,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<FMetasoundAssetBase_const_*> *param_2,int *param_3,
          bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  
  iVar12 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar3 != 1) && (iVar12 != iVar3)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      do {
        if (*(longlong *)(*(longlong *)&this->Elements + (longlong)iVar12 * 0x10) ==
            *(longlong *)param_2) {
          bVar14 = iVar12 != -1;
          if (bVar14) {
            puVar1 = &(this->Elements).field_0x10;
            *(longlong *)(*(longlong *)&this->Elements + (longlong)iVar12 * 0x10) =
                 *(longlong *)param_2;
            iVar3 = *param_3;
            lVar4 = *(longlong *)&this->Elements;
            bVar6 = (byte)iVar3 & 0x1f;
            uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar2) & uVar13) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar4 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x10) = iVar3;
            }
            uVar9 = 0xffffffff;
            *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x10) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)(lVar4 + 4 + (longlong)iVar3 * 0x10) = uVar9;
            puVar10 = &(this->Elements).field_0x34;
            *(int *)puVar10 = *(int *)puVar10 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// Union @ 14add2c10

TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator> *
__thiscall
TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>::
Union(TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
      *this,TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
            *__return_storage_ptr__,
     TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
     *param_1)

{
  undefined8 *puVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  FName FVar5;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *pTVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ForElementType<FSetElementId> FVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint *puVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  int iVar24;
  FMetasoundFrontendVersionNumber FVar25;
  FMetasoundFrontendVersion local_res8;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *local_res18;
  uint local_98;
  uint uStack_94;
  undefined8 uStack_90;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  uVar16 = 0;
  uVar10 = 0;
  FVar25.Major = 1;
  FVar25.Minor = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar15 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_res8.Number.Major = 1;
  local_res8.Number.Minor = 0;
  uVar17 = ((*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34) -
           *(int *)&(this->Elements).field_0x34) + *(int *)&(this->Elements).field_0x8;
  local_res8.Name = (FName)this;
  local_res18 = param_1;
  if (uVar17 == 0) goto LAB_14add2ec7;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
  }
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar17);
  uVar18 = 1;
  if (3 < uVar17) {
    uVar14 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar18 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar18 <= __return_storage_ptr__->HashSize))
  goto LAB_14add2ec7;
  __return_storage_ptr__->HashSize = uVar18;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar18 != 0) {
    uVar17 = uVar18;
    if (uVar18 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar17 = 0;
        goto LAB_14add2cf4;
      }
    }
    else {
LAB_14add2cf4:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar17,4);
    }
    if (0 < (int)uVar18) {
      uVar20 = (ulonglong)uVar18;
      uVar14 = uVar16;
      do {
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = FVar2;
        }
        uVar11 = uVar14 & (longlong)(int)uVar18 - 1U;
        uVar14 = uVar14 + 1;
        *(undefined4 *)((longlong)FVar13 + uVar11 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar17 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    TStack_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->Elements).field_0x10;
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    uVar14 = uVar16;
    if (uVar17 != 0) {
      puVar22 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)TStack_60.Array;
      }
      uVar18 = *puVar22;
      uVar20 = uVar16;
      while (uVar18 == 0) {
        uStack_80 = (int)uVar20 + 0x20;
        uVar20 = (ulonglong)uStack_80;
        iVar12 = (int)uVar14;
        local_98 = iVar12 + 1;
        uVar14 = (ulonglong)local_98;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_98)
        goto LAB_14add2de9;
        uVar18 = puVar22[(longlong)iVar12 + 1];
      }
      uStack_94 = -uVar18 & uVar18;
      uVar14 = (ulonglong)uStack_94 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_84 = (int)lVar4 + -1 + uStack_80;
      uVar14 = (ulonglong)uStack_84;
      if ((int)uVar17 < (int)uStack_84) {
LAB_14add2de9:
        uVar14 = (ulonglong)uVar17;
        uStack_84 = uVar17;
      }
    }
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60.CurrentBitIndex = uStack_84;
    TStack_60._28_4_ = uStack_7c;
    TStack_60.BaseBitIndex = uStack_80;
    TStack_60._padding_._0_4_ = local_98;
    TStack_60._padding_._4_4_ = uStack_94;
    if ((int)uVar14 < (int)uVar17) {
      do {
        iVar24 = (int)uVar14;
        uVar17 = *(uint *)(*(longlong *)&__return_storage_ptr__->Elements + 8 +
                          (longlong)iVar24 * 0x18);
        puVar1 = (undefined8 *)
                 (*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar24 * 0x18);
        iVar12 = *(int *)((longlong)puVar1 + 0xc);
        uVar3 = *puVar1;
        uVar18 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar18 = uVar18 + (int)((ulonglong)uVar3 >> 0x20);
        uVar17 = ((uVar18 >> 2) + (iVar12 + uVar17 * 0x40 + (uVar17 >> 2) + 0x9e3779b9 ^ uVar17) +
                  uVar18 * 0x40 + -0x61c88647 ^ uVar18) & __return_storage_ptr__->HashSize - 1U;
        *(uint *)((longlong)puVar1 + 0x14) = uVar17;
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = FVar2;
        }
        uVar14 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)FVar13 + uVar14 * 4);
        *(int *)((longlong)FVar13 + uVar14 * 4) = iVar24;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
        uVar14 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
        FVar25 = local_res8.Number;
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
LAB_14add2ec7:
  FVar5 = local_res8.Name;
  uVar21 = 0;
  uVar17 = *(uint *)((longlong)local_res8.Name + 0x28);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_res8.Name + 0x10);
  uVar9 = FVar25.Major;
  uVar14 = uVar16;
  uVar19 = uVar21;
  uVar7 = uVar9;
  uVar18 = uVar21;
  if (uVar17 != 0) {
    uVar14 = (ulonglong)uVar17;
    pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)local_res8.Name + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)local_res8.Name + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar23 = TStack_60.Array;
    }
    uVar8 = *(uint *)(pTVar23->AllocatorInstance).InlineData;
    uVar20 = uVar16;
    uVar11 = uVar16;
    uVar18 = uVar10;
    uVar19 = uVar10;
    while (uVar8 == 0) {
      iVar12 = (int)uVar20;
      uVar18 = (int)uVar11 + 0x20;
      uVar11 = (ulonglong)uVar18;
      uVar19 = iVar12 + 1;
      uVar20 = (ulonglong)uVar19;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
      goto LAB_14add2f4b;
      uVar8 = *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar12 * 4 + 4);
    }
    uVar7 = -uVar8 & uVar8;
    uVar14 = (ulonglong)uVar7 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar8 = (uVar18 - 1) + (int)lVar4;
    if ((int)uVar17 < (int)uVar8) {
      uVar8 = uVar17;
    }
    uVar14 = (ulonglong)uVar8;
  }
LAB_14add2f4b:
  TStack_60.CurrentBitIndex = (int)uVar14;
  uStack_90 = CONCAT44(uVar7,uVar19);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = uStack_90;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = uVar18;
  if (TStack_60.CurrentBitIndex < (int)uVar17) {
    do {
      Emplace<FMetasoundFrontendVersion_const_&>
                (__return_storage_ptr__,&local_res8,
                 (bool *)(*(longlong *)FVar5 + (longlong)(int)uVar14 * 0x18));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar14 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  pTVar6 = local_res18;
  uVar17 = *(uint *)&(local_res18->Elements).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(local_res18->Elements).field_0x10;
  uVar14 = uVar16;
  if (uVar17 != 0) {
    puVar22 = *(uint **)&(local_res18->Elements).field_0x20;
    uVar14 = (ulonglong)uVar17;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)TStack_60.Array;
    }
    uVar18 = *puVar22;
    uVar20 = uVar16;
    uVar21 = uVar10;
    uVar15 = uVar10;
    while (uVar18 == 0) {
      iVar12 = (int)uVar16;
      uVar21 = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)uVar21;
      uVar15 = iVar12 + 1;
      uVar16 = (ulonglong)uVar15;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_14add3049;
      uVar18 = puVar22[(longlong)iVar12 + 1];
    }
    uVar9 = -uVar18 & uVar18;
    uVar16 = (ulonglong)uVar9 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar10 = (uVar21 - 1) + (int)lVar4;
    if ((int)uVar17 < (int)uVar10) {
      uVar10 = uVar17;
    }
    uVar14 = (ulonglong)uVar10;
  }
LAB_14add3049:
  TStack_60.CurrentBitIndex = (int)uVar14;
  uStack_90 = CONCAT44(uVar9,uVar15);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = uStack_90;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = uVar21;
  if (TStack_60.CurrentBitIndex < (int)uVar17) {
    do {
      Emplace<FMetasoundFrontendVersion_const_&>
                (__return_storage_ptr__,&local_res8,
                 (bool *)(*(longlong *)&pTVar6->Elements + (longlong)(int)uVar14 * 0x18));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar14 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Emplace<Metasound::Frontend::FNamedEdge> @ 14add6920

FSetElementId __thiscall
TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
::Emplace<Metasound::Frontend::FNamedEdge>
          (TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
           *this,FNamedEdge *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  bool *in_R9;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x38 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<Metasound::Frontend::FNamedEdge> *)0x0) {
    uVar4 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = uVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 0x30) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar7 = Metasound::Frontend::GetTypeHash(local_38.Pointer);
  bVar5 = TryReplaceExisting(this,uVar7,local_38.Pointer,(int *)local_res8,in_R9);
  if (!bVar5) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)local_38.Pointer + 0x34) = uVar7;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x30) =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(uint *)((longlong)FVar10 + uVar8 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  (param_1->OutputNodeID).A = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FGuid_&&,FMetasoundFrontendEdge_&&>_> @ 14add6ab0

FSetElementId __thiscall
TSet<TTuple<FGuid,FMetasoundFrontendEdge>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FGuid_&&,FMetasoundFrontendEdge_&&>_>
          (TSet<TTuple<FGuid,FMetasoundFrontendEdge>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>,FDefaultSetAllocator>
           *this,TPairInitializer<FGuid_&&,FMetasoundFrontendEdge_&&> *param_1,bool *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  undefined1 *in_R9;
  FSparseArrayAllocationInfo local_28;
  
  iVar2 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar2 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar2 = iVar2 + -1;
    lVar4 = *(longlong *)&this->Elements;
    iVar3 = *(int *)((longlong)iVar7 * 0x58 + 4 + lVar4);
    *(int *)&(this->Elements).field_0x30 = iVar3;
    *(int *)&(this->Elements).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x58 + lVar4) = 0xffffffff;
    }
  }
  TSparseArrayBase<88,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<88,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar7);
  if (local_28.Pointer != (char *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 8);
    uVar6 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_28.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = uVar6;
    uVar6 = puVar5[1];
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = *puVar5;
    *(undefined8 *)((longlong)local_28.Pointer + 0x18) = uVar6;
    uVar6 = puVar5[3];
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = puVar5[2];
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = uVar6;
    uVar6 = puVar5[5];
    *(undefined8 *)((longlong)local_28.Pointer + 0x30) = puVar5[4];
    *(undefined8 *)((longlong)local_28.Pointer + 0x38) = uVar6;
    uVar6 = puVar5[7];
    *(undefined8 *)((longlong)local_28.Pointer + 0x40) = puVar5[6];
    *(undefined8 *)((longlong)local_28.Pointer + 0x48) = uVar6;
    pcVar1 = (char *)((longlong)local_28.Pointer + 0x50);
    pcVar1[0] = -1;
    pcVar1[1] = -1;
    pcVar1[2] = -1;
    pcVar1[3] = -1;
  }
  uVar8 = CityHash64(local_28.Pointer,0x10);
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = 0;
  }
  uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (3 < uVar10) {
    uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
    uVar10 = this->HashSize - 1U & (uint)uVar8;
    *(uint *)((longlong)local_28.Pointer + 0x54) = uVar10;
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
    *(undefined4 *)((longlong)local_28.Pointer + 0x50) =
         *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
    *(int *)((longlong)FVar11 + uVar9 * 4) = local_28.Index;
  }
  else {
    this->HashSize = iVar12;
    Rehash(this);
  }
  *(int *)&param_1->Key = local_28.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TTuple<FName,FName>_const_&,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo_&&>_> @ 14add6c50

FSetElementId __thiscall
TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TTuple<FName,FName>_const_&,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo_&&>_>
          (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TTuple<FName,FName>_const_&,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo_&&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  void *_Dst;
  int iVar9;
  int iVar10;
  char *in_R9;
  int iVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xa8,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar11 = *(int *)((longlong)iVar3 * 0xa8 + 4 + lVar1);
    *(int *)&(this->Elements).field_0x30 = iVar11;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar11 * 0xa8 + lVar1) = 0xffffffff;
    }
  }
  TSparseArrayBase<168,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<168,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    lVar1 = (*(longlong **)param_2)[1];
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = lVar1;
    lVar1 = plVar2[1];
    *(longlong *)((longlong)local_48.Pointer + 0x10) = *plVar2;
    *(longlong *)((longlong)local_48.Pointer + 0x18) = lVar1;
    lVar1 = plVar2[3];
    *(longlong *)((longlong)local_48.Pointer + 0x20) = plVar2[2];
    *(longlong *)((longlong)local_48.Pointer + 0x28) = lVar1;
    *(longlong *)((longlong)local_48.Pointer + 0x30) = plVar2[4];
    *(longlong *)((longlong)local_48.Pointer + 0x38) = plVar2[5];
    FMetasoundFrontendLiteral::FMetasoundFrontendLiteral
              ((FMetasoundFrontendLiteral *)((longlong)local_48.Pointer + 0x40),
               (FMetasoundFrontendLiteral *)(plVar2 + 6));
    *(char *)((longlong)local_48.Pointer + 0x98) = (char)plVar2[0x11];
    *(undefined4 *)((longlong)local_48.Pointer + 0xa0) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  lVar1 = *(longlong *)((longlong)local_48.Pointer + 8);
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  bVar12 = false;
  iVar10 = *(int *)&(this->Elements).field_0x8;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 * 0x40 + -0x61c88647 + (int)((ulonglong)lVar1 >> 0x20) + (uVar4 >> 2) + uVar5 ^
          uVar4;
  iVar11 = local_48.Index;
  if ((iVar10 - iVar3 != 1) && (iVar10 != iVar3)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar6 = (longlong)iVar10 * 0xa8;
        if ((*(longlong *)(lVar6 + lVar1) == *(longlong *)local_48.Pointer) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == *(longlong *)((longlong)local_48.Pointer + 8))) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            _Dst = (void *)((longlong)iVar10 * 0xa8 + lVar1);
            FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral
                      ((FMetasoundFrontendLiteral *)((longlong)_Dst + 0x40));
            memmove(_Dst,local_48.Pointer,0xa0);
            TSparseArrayBase<168,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<168,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar11 = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar6 + 0xa0 + lVar1);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar5) {
      uVar7 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0xa4) = uVar4;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0xa0) =
           *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
      *(int *)((longlong)FVar8 + uVar7 * 4) = iVar11;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar11;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TTuple<FName,FName>_const_&,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo_&&>_> @ 14add6f10

FSetElementId __thiscall
TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TTuple<FName,FName>_const_&,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo_&&>_>
          (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TTuple<FName,FName>_const_&,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  int iVar12;
  char *in_R9;
  void *_Dst;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar11 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar11 = iVar11 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x38 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  plVar9 = (longlong *)0x0;
  if (local_48.Pointer != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_2 + 8);
    lVar2 = (*(longlong **)param_2)[1];
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = lVar2;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = 0;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = *plVar9;
    *plVar9 = 0;
    *(int *)((longlong)local_48.Pointer + 0x18) = (int)plVar9[1];
    *(undefined4 *)((longlong)local_48.Pointer + 0x1c) = *(undefined4 *)((longlong)plVar9 + 0xc);
    plVar9[1] = 0;
    *(longlong *)((longlong)local_48.Pointer + 0x20) = plVar9[2];
    *(longlong *)((longlong)local_48.Pointer + 0x28) = plVar9[3];
    *(undefined4 *)((longlong)local_48.Pointer + 0x30) = 0xffffffff;
    plVar9 = local_48.Pointer;
  }
  lVar2 = *plVar9;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  uVar5 = uVar5 + (int)((ulonglong)lVar2 >> 0x20);
  lVar2 = plVar9[1];
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  iVar11 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 * 0x40 + -0x61c88647 + (int)((ulonglong)lVar2 >> 0x20) + (uVar5 >> 2) + uVar6 ^
          uVar5;
  bVar13 = false;
  if ((iVar11 - iVar4 != 1) && (iVar11 != iVar4)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar11 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar7 = (longlong)iVar11 * 0x38;
        if ((*(longlong *)(lVar7 + lVar2) == *plVar9) &&
           (*(longlong *)(lVar7 + 8 + lVar2) == plVar9[1])) {
          bVar13 = iVar11 != -1;
          if (bVar13) {
            _Dst = (void *)((longlong)iVar11 * 0x38 + lVar2);
            pvVar3 = *(void **)((longlong)_Dst + 0x10);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove(_Dst,plVar9,0x30);
            TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar11;
          }
          break;
        }
        iVar11 = *(int *)(lVar7 + 0x30 + lVar2);
      } while (iVar11 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar8 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar12 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)plVar9 + 0x34) = uVar5;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)(plVar9 + 6) = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// RemoveImpl<TTuple<FName,FName>_> @ 14adda870

int __thiscall
TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
::RemoveImpl<TTuple<FName,FName>_>
          (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,TTuple<FName,FName> *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while ((lVar9 = (longlong)(int)uVar7 * 0xa8, *(longlong *)(lVar9 + lVar2) != *(longlong *)param_2
         || (*(longlong *)(lVar9 + 8 + lVar2) != *(longlong *)&param_2->field_0x8))) {
    uVar7 = *(uint *)(lVar9 + 0xa0 + lVar2);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14adda95f;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14adda95f:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 0xa4) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar8 = *(uint *)(lVar9 + 0xa0);
      TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<168,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<168,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0xa0 + (longlong)(int)uVar1 * 0xa8);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<TTuple<FName,FName>_> @ 14addaa20

int __thiscall
TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
::RemoveImpl<TTuple<FName,FName>_>
          (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,TTuple<FName,FName> *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while ((lVar9 = (longlong)(int)uVar7 * 0x38, *(longlong *)(lVar9 + lVar2) != *(longlong *)param_2
         || (*(longlong *)(lVar9 + 8 + lVar2) != *(longlong *)&param_2->field_0x8))) {
    uVar7 = *(uint *)(lVar9 + 0x30 + lVar2);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14addab09;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14addab09:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 0x34) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar8 = *(uint *)(lVar9 + 0x30);
      TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x30 + (longlong)(int)uVar1 * 0x38);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<FMetasoundFrontendVersion> @ 14addabc0

int __thiscall
TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>::
RemoveImpl<FMetasoundFrontendVersion>
          (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
           *this,uint param_1,FMetasoundFrontendVersion *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while (((lVar8 = (longlong)(int)uVar7 * 0x18, *(FName *)(lVar8 + lVar2) != param_2->Name ||
          (*(int *)(lVar8 + 8 + lVar2) != (param_2->Number).Major)) ||
         (*(int *)(lVar8 + 0xc + lVar2) != (param_2->Number).Minor))) {
    uVar7 = *(uint *)(lVar8 + 0x10 + lVar2);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14addacba;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14addacba:
  FVar6 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar9 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar8 + 0x14) * 4);
  while( true ) {
    uVar1 = *puVar9;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar9 = *(uint *)(lVar8 + 0x10);
      TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar9 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x18 + 0x10);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator> @ 14addc140

TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
::
TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
          (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,0);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator> @ 14addc270

TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
::
TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
          (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,0);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// operator= @ 14addf4a0

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (this != param_1) {
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
      *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
    }
    FVar2 = (this->Hash).SecondaryData;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
    (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
    this->HashSize = param_1->HashSize;
    param_1->HashSize = 0;
  }
  return this;
}

// Intersect @ 14ae02340

TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator> *
__thiscall
TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>::
Intersect(TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
          *this,TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                *__return_storage_ptr__,
         TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
         *param_1)

{
  undefined8 *puVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  FName FVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ForElementType<FSetElementId> FVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  FMetasoundFrontendVersion *pFVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar18;
  int iVar19;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *this_00;
  uint local_98;
  uint uStack_94;
  undefined8 uStack_90;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  this_00 = param_1;
  if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 <
      *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    this_00 = this;
    this = param_1;
  }
  uVar13 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar12 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar15 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar15 == 0) goto LAB_14ae0260b;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
  }
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar15);
  uVar16 = 1;
  if (3 < uVar15) {
    uVar11 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar16 <= __return_storage_ptr__->HashSize))
  goto LAB_14ae0260b;
  __return_storage_ptr__->HashSize = uVar16;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar16 != 0) {
    uVar15 = uVar16;
    if (uVar16 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar15 = 0;
        goto LAB_14ae02439;
      }
    }
    else {
LAB_14ae02439:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar15,4);
    }
    if (0 < (int)uVar16) {
      uVar17 = (ulonglong)uVar16;
      uVar11 = uVar13;
      do {
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar2;
        }
        uVar9 = (longlong)(int)uVar16 - 1U & uVar11;
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)FVar10 + uVar9 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar15 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    TStack_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->Elements).field_0x10;
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    uVar11 = uVar13;
    if (uVar15 != 0) {
      puVar18 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)TStack_60.Array;
      }
      uVar16 = *puVar18;
      uVar17 = uVar13;
      while (uVar16 == 0) {
        uStack_80 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_80;
        iVar8 = (int)uVar11;
        local_98 = iVar8 + 1;
        uVar11 = (ulonglong)local_98;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_98)
        goto LAB_14ae02529;
        uVar16 = puVar18[(longlong)iVar8 + 1];
      }
      uStack_94 = -uVar16 & uVar16;
      uVar11 = (ulonglong)uStack_94 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_84 = (int)lVar5 + -1 + uStack_80;
      uVar11 = (ulonglong)uStack_84;
      if ((int)uVar15 < (int)uStack_84) {
LAB_14ae02529:
        uVar11 = (ulonglong)uVar15;
        uStack_84 = uVar15;
      }
    }
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60.CurrentBitIndex = uStack_84;
    TStack_60._28_4_ = uStack_7c;
    TStack_60.BaseBitIndex = uStack_80;
    TStack_60._padding_._0_4_ = local_98;
    TStack_60._padding_._4_4_ = uStack_94;
    if ((int)uVar11 < (int)uVar15) {
      do {
        iVar19 = (int)uVar11;
        uVar15 = *(uint *)(*(longlong *)&__return_storage_ptr__->Elements + 8 +
                          (longlong)iVar19 * 0x18);
        puVar1 = (undefined8 *)
                 (*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar19 * 0x18);
        iVar8 = *(int *)((longlong)puVar1 + 0xc);
        uVar3 = *puVar1;
        uVar16 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar16 = uVar16 + (int)((ulonglong)uVar3 >> 0x20);
        uVar15 = ((uVar16 >> 2) + (iVar8 + uVar15 * 0x40 + (uVar15 >> 2) + 0x9e3779b9 ^ uVar15) +
                  uVar16 * 0x40 + -0x61c88647 ^ uVar16) & __return_storage_ptr__->HashSize - 1U;
        *(uint *)((longlong)puVar1 + 0x14) = uVar15;
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar2;
        }
        uVar11 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar15;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)FVar10 + uVar11 * 4);
        *(int *)((longlong)FVar10 + uVar11 * 4) = iVar19;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
        uVar11 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
LAB_14ae0260b:
  uVar6 = 1;
  uVar15 = *(uint *)&(this->Elements).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  uVar16 = 0;
  uVar11 = uVar13;
  if (uVar15 != 0) {
    puVar18 = *(uint **)&(this->Elements).field_0x20;
    uVar11 = (ulonglong)uVar15;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_60.Array;
    }
    uVar7 = *puVar18;
    uVar17 = uVar13;
    uVar16 = 0;
    uVar12 = 0;
    while (uVar7 == 0) {
      iVar8 = (int)uVar13;
      uVar16 = (int)uVar17 + 0x20;
      uVar17 = (ulonglong)uVar16;
      uVar12 = iVar8 + 1;
      uVar13 = (ulonglong)uVar12;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_14ae02679;
      uVar7 = puVar18[(longlong)iVar8 + 1];
    }
    uVar6 = -uVar7 & uVar7;
    uVar13 = (ulonglong)uVar6 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar7 = (uVar16 - 1) + (int)lVar5;
    if ((int)uVar15 < (int)uVar7) {
      uVar7 = uVar15;
    }
    uVar11 = (ulonglong)uVar7;
  }
LAB_14ae02679:
  TStack_60.CurrentBitIndex = (int)uVar11;
  uStack_90 = CONCAT44(uVar6,uVar12);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = uStack_90;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = uVar16;
  if (TStack_60.CurrentBitIndex < (int)uVar15) {
    do {
      lVar5 = (longlong)(int)uVar11 * 0x18;
      pFVar14 = (FMetasoundFrontendVersion *)(*(longlong *)&this->Elements + lVar5);
      uVar12 = (pFVar14->Number).Major;
      iVar8 = (pFVar14->Number).Minor;
      FVar4 = pFVar14->Name;
      uVar15 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      uVar15 = uVar15 + FVar4.Number;
      iVar8 = FindIndexByHash<FMetasoundFrontendVersion>
                        (this_00,uVar15 * 0x40 +
                                 ((uVar12 >> 2) + iVar8 + uVar12 * 0x40 + -0x61c88647 ^ uVar12) +
                                 (uVar15 >> 2) + 0x9e3779b9 ^ uVar15,pFVar14);
      if (iVar8 != -1) {
        Emplace<FMetasoundFrontendVersion_const_&>
                  (__return_storage_ptr__,(FMetasoundFrontendVersion *)&stack0x00000018,
                   (bool *)(*(longlong *)&this->Elements + lVar5));
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar11 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Rehash @ 14ae03f50

void __thiscall
TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ForElementType<FSetElementId> FVar9;
  uint *puVar10;
  undefined8 *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ae04027;
        uVar5 = puVar10[lVar7 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14ae04027:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar11 = (undefined8 *)
                  ((longlong)local_40.CurrentBitIndex * 0xa8 + *(longlong *)&this->Elements);
        uVar3 = *puVar11;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        uVar3 = puVar11[1];
        uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U &
                (uVar6 + 0x9e3779b9 + (int)((ulonglong)uVar3 >> 0x20) + uVar5 * 0x40 + (uVar5 >> 2)
                ^ uVar5);
        *(uint *)((longlong)puVar11 + 0xa4) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar11 + 0x14) = *(undefined4 *)((longlong)FVar9 + uVar8 * 4);
        *(int *)((longlong)FVar9 + uVar8 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae04140

void __thiscall
TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ForElementType<FSetElementId> FVar9;
  uint *puVar10;
  undefined8 *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ae04217;
        uVar5 = puVar10[lVar7 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14ae04217:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar11 = (undefined8 *)
                  ((longlong)local_40.CurrentBitIndex * 0x38 + *(longlong *)&this->Elements);
        uVar3 = *puVar11;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        uVar3 = puVar11[1];
        uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U &
                (uVar6 + 0x9e3779b9 + (int)((ulonglong)uVar3 >> 0x20) + uVar5 * 0x40 + (uVar5 >> 2)
                ^ uVar5);
        *(uint *)((longlong)puVar11 + 0x34) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar11 + 6) = *(undefined4 *)((longlong)FVar9 + uVar8 * 4);
        *(int *)((longlong)FVar9 + uVar8 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae04320

void __thiscall
TSet<TTuple<FGuid,FMetasoundFrontendEdge>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FGuid,FMetasoundFrontendEdge>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendEdge,1>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae043f7;
        uVar9 = puVar10[lVar5 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae043f7:
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
        iVar2 = local_30.CurrentBitIndex;
        pcVar8 = (char *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x58);
        uVar4 = CityHash64(pcVar8,0x10);
        uVar9 = *piVar1 - 1U & (uint)uVar4;
        *(uint *)(pcVar8 + 0x54) = uVar9;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar8 + 0x50) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae044c0

void __thiscall
TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
::Rehash(TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FNamedEdge *pFVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae04597;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae04597:
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
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FNamedEdge *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x38);
        uVar4 = Metasound::Frontend::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[1].OutputNodeID.B = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[1].OutputNodeID.A = *(uint *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// TryReplaceExisting @ 14ae0b5a0

bool __thiscall
TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<Metasound::Frontend::FNamedEdge> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  iVar14 = *(int *)&(this->Elements).field_0x8;
  bVar16 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar14 - iVar3 != 1) && (iVar14 != iVar3)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar14 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar14 != -1) {
      do {
        piVar13 = (int *)((longlong)iVar14 * 0x38 + *(longlong *)&this->Elements);
        if ((((((*(int *)&param_2->field_0xc == piVar13[3] &&
                *(int *)&param_2->field_0x8 == piVar13[2]) &&
               *(int *)&param_2->field_0x4 == piVar13[1]) && *(int *)param_2 == *piVar13) &&
             (*(longlong *)(piVar13 + 4) == *(longlong *)&param_2->field_0x10)) &&
            (((piVar13[9] == *(int *)&param_2->field_0x24 &&
              piVar13[7] == *(int *)&param_2->field_0x1c) &&
             piVar13[6] == *(int *)&param_2->field_0x18) &&
             piVar13[8] == *(int *)&param_2->field_0x20)) &&
           (*(longlong *)(piVar13 + 10) == *(longlong *)&param_2->field_0x28)) {
          bVar16 = iVar14 != -1;
          if (bVar16) {
            memmove((void *)((longlong)iVar14 * 0x38 + *(longlong *)&this->Elements),param_2,0x30);
            iVar3 = *param_3;
            lVar4 = *(longlong *)&this->Elements;
            puVar1 = &(this->Elements).field_0x10;
            bVar6 = (byte)iVar3 & 0x1f;
            uVar15 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar2) & uVar15) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x38 + lVar4) = iVar3;
            }
            uVar9 = 0xffffffff;
            puVar11 = (undefined4 *)((longlong)iVar3 * 0x38 + lVar4);
            *puVar11 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar11[1] = uVar9;
            puVar10 = &(this->Elements).field_0x34;
            *(int *)puVar10 = *(int *)puVar10 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar15;
            *param_3 = iVar14;
          }
          goto LAB_14ae0b694;
        }
        iVar14 = piVar13[0xc];
      } while (iVar14 != -1);
    }
    bVar16 = false;
  }
LAB_14ae0b694:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar16;
  }
  return bVar16;
}

// UnhashElements @ 14ae0b810

void __thiscall
TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>::
UnhashElements(TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
               *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14ae0b90b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14ae0b90b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ae0ba00;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14ae0ba00:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x14 + (longlong)local_60.CurrentBitIndex * 0x18) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14ae0baa0

void __thiscall
TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
::UnhashElements(TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14ae0bb9b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14ae0bb9b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ae0bc90;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14ae0bc90:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<Metasound::Frontend::FNamedEdge>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x38 + 0x34 + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// Emplace<TKeyInitializer<FMetasoundFrontendVertexHandle_&&>_> @ 14ae10930

FSetElementId __thiscall
TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FMetasoundFrontendVertexHandle_&&>_>
          (TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FMetasoundFrontendVertexHandle_&&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  char *in_R9;
  uint uVar7;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x2c,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x2c + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x2c + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<TTuple<FMetasoundFrontendVertexHandle,int>_> *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    uVar4 = puVar3[1];
    *(undefined8 *)local_38.Pointer = *puVar3;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar4;
    uVar4 = puVar3[3];
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = puVar3[2];
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = uVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x24) = 0xffffffff;
  }
  uVar7 = *(uint *)local_38.Pointer;
  bVar8 = false;
  uVar7 = *(int *)((longlong)local_38.Pointer + 0x1c) + -0x61c88647 + uVar7 * 0x40 + (uVar7 >> 2) ^
          uVar7;
  iVar6 = local_38.Index;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<FMetasoundFrontendVertexHandle>(this,uVar7,local_38.Pointer);
    bVar8 = iVar5 != -1;
    if (bVar8) {
      memmove((void *)((longlong)iVar5 * 0x2c + *(longlong *)&this->Elements),local_38.Pointer,0x24)
      ;
      TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      iVar6 = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar7,local_38.Pointer,iVar6);
  }
  *(int *)&param_1->Key = iVar6;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FMetasoundFrontendVertexHandle_&&,int_const_&>_> @ 14ae10cd0

FSetElementId __thiscall
TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FMetasoundFrontendVertexHandle_&&,int_const_&>_>
          (TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FMetasoundFrontendVertexHandle_&&,int_const_&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  char *in_R9;
  uint uVar8;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if (iVar7 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x2c,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar6 * 0x2c + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x2c + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<TTuple<FMetasoundFrontendVertexHandle,int>_> *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    puVar4 = *(undefined4 **)(param_2 + 8);
    uVar5 = puVar3[1];
    *(undefined8 *)local_38.Pointer = *puVar3;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar5;
    uVar5 = puVar3[3];
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = puVar3[2];
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = uVar5;
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = *puVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 0x24) = 0xffffffff;
  }
  uVar8 = *(uint *)local_38.Pointer;
  bVar9 = false;
  uVar8 = *(int *)((longlong)local_38.Pointer + 0x1c) + -0x61c88647 + uVar8 * 0x40 + (uVar8 >> 2) ^
          uVar8;
  iVar7 = local_38.Index;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FMetasoundFrontendVertexHandle>(this,uVar8,local_38.Pointer);
    bVar9 = iVar6 != -1;
    if (bVar9) {
      memmove((void *)((longlong)iVar6 * 0x2c + *(longlong *)&this->Elements),local_38.Pointer,0x24)
      ;
      TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      iVar7 = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar8,local_38.Pointer,iVar7);
  }
  *(int *)&param_1->Key = iVar7;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_const_&,Metasound::INode_const_*_&&>_> @ 14ae10e60

FSetElementId __thiscall
TSet<TTuple<int,Metasound::INode_const_*>,TDefaultMapHashableKeyFuncs<int,Metasound::INode_const_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<int_const_&,Metasound::INode_const_*_&&>_>
          (TSet<TTuple<int,Metasound::INode_const_*>,TDefaultMapHashableKeyFuncs<int,Metasound::INode_const_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_const_&,Metasound::INode_const_*_&&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *in_R9;
  bool bVar11;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (uint *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(uint *)local_38.Pointer = **(uint **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar3;
    *(uint *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar10 = *(uint *)local_38.Pointer;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar10) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar9 * 0x18) == uVar10) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            memmove((void *)(lVar2 + (longlong)iVar9 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 0x10 + (longlong)iVar9 * 0x18);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar10;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(uint *)((longlong)local_38.Pointer + 0x10) = *(uint *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FMetasoundFrontendGraphClass_const_*_const_&,FMetasoundFrontendGraphClass_const_*_const_&>_> @ 14ae11070

FSetElementId __thiscall
TSet<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,1>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FMetasoundFrontendGraphClass_const_*_const_&,FMetasoundFrontendGraphClass_const_*_const_&>_>
          (TSet<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,1>,FDefaultSetAllocator>
           *this,TPairInitializer<FMetasoundFrontendGraphClass_const_*_const_&,FMetasoundFrontendGraphClass_const_*_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  undefined1 *in_R9;
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (ulonglong *)0x0) {
    puVar4 = *(ulonglong **)(param_2 + 8);
    *(ulonglong *)local_28.Pointer = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_28.Pointer + 8) = *puVar4;
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = 0xffffffff;
  }
  uVar6 = ((uint)(*(ulonglong *)local_28.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_28.Pointer >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = 0;
  }
  uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (3 < uVar8) {
    uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar10 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
    uVar6 = this->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6);
    *(uint *)((longlong)local_28.Pointer + 0x14) = uVar6;
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) =
         *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
    *(int *)((longlong)FVar9 + uVar7 * 4) = local_28.Index;
  }
  else {
    this->HashSize = iVar10;
    Rehash(this);
  }
  *(int *)&param_1->Key = local_28.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FGuid_const_&,FMetasoundFrontendClass_const_*_&&>_> @ 14ae11220

FSetElementId __thiscall
TSet<TTuple<FGuid,FMetasoundFrontendClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendClass_const_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FGuid_const_&,FMetasoundFrontendClass_const_*_&&>_>
          (TSet<TTuple<FGuid,FMetasoundFrontendClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendClass_const_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FGuid_const_&,FMetasoundFrontendClass_const_*_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  char *in_R9;
  undefined1 *puVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar6 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar2);
    iVar6 = iVar6 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (FGuid *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    uVar4 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar4;
    uVar4 = *puVar3;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->A = (int)uVar4;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->B = (int)((ulonglong)uVar4 >> 0x20);
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->C = 0xffffffff;
  }
  uVar7 = CityHash64(local_48.Pointer,0x10);
  bVar13 = false;
  if (*(int *)puVar12 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FGuid>(this,(uint)uVar7,local_48.Pointer);
    bVar13 = iVar6 != -1;
    if (bVar13) {
      memmove((void *)((longlong)iVar6 * 0x20 + *(longlong *)&this->Elements),local_48.Pointer,0x18)
      ;
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar9 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & (uint)uVar7;
      ((FGuid *)((longlong)local_48.Pointer + 0x10))->D = uVar9;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      ((FGuid *)((longlong)local_48.Pointer + 0x10))->C = *(uint *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FGuid_const_&,FMetasoundFrontendGraphClass_const_*_const_&>_> @ 14ae11410

FSetElementId __thiscall
TSet<TTuple<FGuid,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendGraphClass_const_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FGuid_const_&,FMetasoundFrontendGraphClass_const_*_const_&>_>
          (TSet<TTuple<FGuid,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendGraphClass_const_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FGuid_const_&,FMetasoundFrontendGraphClass_const_*_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  char *in_R9;
  undefined1 *puVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar6 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar2);
    iVar6 = iVar6 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (FGuid *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    uVar4 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar4;
    uVar4 = *puVar3;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->A = (int)uVar4;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->B = (int)((ulonglong)uVar4 >> 0x20);
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->C = 0xffffffff;
  }
  uVar7 = CityHash64(local_48.Pointer,0x10);
  bVar13 = false;
  if (*(int *)puVar12 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FGuid>(this,(uint)uVar7,local_48.Pointer);
    bVar13 = iVar6 != -1;
    if (bVar13) {
      memmove((void *)((longlong)iVar6 * 0x20 + *(longlong *)&this->Elements),local_48.Pointer,0x18)
      ;
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar9 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & (uint)uVar7;
      ((FGuid *)((longlong)local_48.Pointer + 0x10))->D = uVar9;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      ((FGuid *)((longlong)local_48.Pointer + 0x10))->C = *(uint *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FGuid_const_&,TSharedPtr<Metasound::IGraph_const_,1>_const_&>_> @ 14ae11600

FSetElementId __thiscall
TSet<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FGuid_const_&,TSharedPtr<Metasound::IGraph_const_,1>_const_&>_>
          (TSet<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FGuid_const_&,TSharedPtr<Metasound::IGraph_const_,1>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>_> *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    uVar5 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar5;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *puVar4;
    lVar3 = puVar4[1];
    *(longlong *)((longlong)local_38.Pointer + 0x18) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar8 = CityHash64(local_38.Pointer,0x10);
  bVar6 = TryReplaceExisting(this,(uint)uVar8,local_38.Pointer,local_res8,in_R9);
  if (!bVar6) {
    uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & (uint)uVar8;
      *(uint *)((longlong)local_38.Pointer + 0x24) = uVar10;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_38.Pointer + 0x20) =
           *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<FMetasoundFrontendVertexHandle_&&>_> @ 14ae117b0

FSetElementId __thiscall
TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FMetasoundFrontendVertexHandle_&&>_>
          (TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FMetasoundFrontendVertexHandle_&&> *param_2,
          bool *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  ulonglong uVar9;
  uint uVar10;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  FMetasoundFrontendVertexHandle *_Src;
  undefined1 *puVar13;
  bool bVar14;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar8 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar7 * 0x38 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar2) = 0xffffffff;
    }
  }
  puVar13 = &(this->Elements).field_0x8;
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar7);
  if (local_48.Pointer == (FMetasoundFrontendVertexHandle *)0x0) {
    _Src = (FMetasoundFrontendVertexHandle *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)param_3;
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    (local_48.Pointer)->A = (int)uVar5;
    (local_48.Pointer)->B = (int)((ulonglong)uVar5 >> 0x20);
    (local_48.Pointer)->C = (int)uVar6;
    (local_48.Pointer)->D = (int)((ulonglong)uVar6 >> 0x20);
    uVar5 = puVar3[2];
    uVar6 = puVar3[3];
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->A = (int)uVar5;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->B = (int)((ulonglong)uVar5 >> 0x20);
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->C = (int)uVar6;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->D = (int)((ulonglong)uVar6 >> 0x20);
    (((FMetasoundFrontendVertexHandle *)((longlong)local_48.Pointer + 0x20))->NodeID).A = 0;
    (((FMetasoundFrontendVertexHandle *)((longlong)local_48.Pointer + 0x20))->NodeID).B = 0;
    (((FMetasoundFrontendVertexHandle *)((longlong)local_48.Pointer + 0x20))->NodeID).C = 0;
    (((FMetasoundFrontendVertexHandle *)((longlong)local_48.Pointer + 0x20))->NodeID).D = 0;
    (((FMetasoundFrontendVertexHandle *)((longlong)local_48.Pointer + 0x20))->VertexID).A =
         0xffffffff;
    _Src = local_48.Pointer;
  }
  bVar14 = false;
  if (*(int *)puVar13 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar8 = FindIndexByHash<FMetasoundFrontendVertexHandle>(this,(uint)param_2,_Src);
    bVar14 = iVar8 != -1;
    if (bVar14) {
      _Dst = (void *)((longlong)iVar8 * 0x38 + *(longlong *)&this->Elements);
      pvVar4 = *(void **)((longlong)_Dst + 0x20);
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      memmove(_Dst,_Src,0x30);
      TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar8;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar14;
  }
  if (bVar14 == false) {
    uVar10 = *(int *)puVar13 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & (uint)param_2;
      _Src[1].VertexID.B = uVar10;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      _Src[1].VertexID.A = *(uint *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_48.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TPairInitializer<FMetasoundFrontendGraphClass_const_*_const_&,int_&&>_> @ 14ae119b0

FSetElementId __thiscall
TSet<TTuple<FMetasoundFrontendGraphClass_const_*,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,int,0>,FDefaultSetAllocator>
::EmplaceByHash<TPairInitializer<FMetasoundFrontendGraphClass_const_*_const_&,int_&&>_>
          (TSet<TTuple<FMetasoundFrontendGraphClass_const_*,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,int,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TPairInitializer<FMetasoundFrontendGraphClass_const_*_const_&,int_&&> *param_2,
          bool *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  bool bVar11;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (longlong *)0x0) {
    puVar3 = *(undefined4 **)(param_3 + 8);
    *(longlong *)local_38.Pointer = **(longlong **)param_3;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *puVar3;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  iVar9 = *(int *)puVar10;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar9 * 0x18) == *(longlong *)local_38.Pointer) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            memmove((void *)(lVar2 + (longlong)iVar9 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 0x10 + (longlong)iVar9 * 0x18);
      } while (iVar9 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar6;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<TTuple<FGuid,FGuid>_> @ 14ae11bd0

int __thiscall
TSet<TTuple<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex,0>,FDefaultSetAllocator>
::FindIndexByHash<TTuple<FGuid,FGuid>_>(void *this,uint param_1,TTuple<FGuid,FGuid> *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)this;
      do {
        lVar1 = (longlong)iVar2 * 0x38;
        if ((((*(int *)&param_2->field_0xc == *(int *)(lVar1 + 0xc + lVar3) &&
              *(int *)&param_2->field_0x8 == *(int *)(lVar1 + 8 + lVar3)) &&
             *(int *)&param_2->field_0x4 == *(int *)(lVar1 + 4 + lVar3)) &&
             *(int *)param_2 == *(int *)(lVar1 + lVar3)) &&
           (((*(int *)(lVar1 + 0x18 + lVar3) == *(int *)&param_2->field_0x18 &&
             *(int *)(lVar1 + 0x1c + lVar3) == *(int *)&param_2->field_0x1c) &&
            *(int *)(lVar1 + 0x14 + lVar3) == *(int *)&param_2->field_0x14) &&
            *(int *)&param_2->field_0x10 == *(int *)(lVar1 + 0x10 + lVar3))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar1 + 0x30 + lVar3);
      } while (iVar2 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FGuid> @ 14ae11cc0

int __thiscall
TSet<TTuple<FGuid,FMetasoundFrontendClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendClass_const_*,0>,FDefaultSetAllocator>
::FindIndexByHash<FGuid>
          (TSet<TTuple<FGuid,FMetasoundFrontendClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendClass_const_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FGuid *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&this->Elements);
        if (((param_2->D == puVar2[3] && param_2->C == puVar2[2]) && param_2->B == puVar2[1]) &&
            param_2->A == *puVar2) {
          return uVar1;
        }
        uVar1 = puVar2[6];
      } while (uVar1 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<FGuid> @ 14ae11d70

int __thiscall
TSet<TTuple<FGuid,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendGraphClass_const_*,0>,FDefaultSetAllocator>
::FindIndexByHash<FGuid>
          (TSet<TTuple<FGuid,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendGraphClass_const_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FGuid *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&this->Elements);
        if (((param_2->D == puVar2[3] && param_2->C == puVar2[2]) && param_2->B == puVar2[1]) &&
            param_2->A == *puVar2) {
          return uVar1;
        }
        uVar1 = puVar2[6];
      } while (uVar1 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<FGuid> @ 14ae11e20

int __thiscall
TSet<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<FGuid>
          (TSet<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,FGuid *param_2)

{
  uint *puVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar2 = *(uint *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar2 * 0x28);
        if (((param_2->D == puVar1[3] &&
             param_2->C == *(uint *)(*(longlong *)&this->Elements + 8 + (longlong)(int)uVar2 * 0x28)
             ) && param_2->B == puVar1[1]) && param_2->A == *puVar1) {
          return uVar2;
        }
        uVar2 = puVar1[8];
      } while (uVar2 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<FMetasoundFrontendVertexHandle> @ 14ae11ec0

int __thiscall
TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
::FindIndexByHash<FMetasoundFrontendVertexHandle>
          (TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
           *this,uint param_1,FMetasoundFrontendVertexHandle *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar2 = (longlong)iVar3 * 0x2c;
        if (((((param_2->NodeID).D == *(uint *)(lVar2 + 0xc + lVar1) &&
              (param_2->NodeID).C == *(uint *)(lVar2 + 8 + lVar1)) &&
             (param_2->NodeID).B == *(uint *)(lVar2 + 4 + lVar1)) &&
             (param_2->NodeID).A == *(uint *)(lVar2 + lVar1)) &&
           (((*(uint *)(lVar2 + 0x18 + lVar1) == (param_2->VertexID).C &&
             *(uint *)(lVar2 + 0x1c + lVar1) == (param_2->VertexID).D) &&
            *(uint *)(lVar2 + 0x14 + lVar1) == (param_2->VertexID).B) &&
            (param_2->VertexID).A == *(uint *)(lVar2 + 0x10 + lVar1))) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar2 + 0x24 + lVar1);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FMetasoundFrontendVertexHandle> @ 14ae11fb0

int __thiscall
TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FMetasoundFrontendVertexHandle>
          (TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FMetasoundFrontendVertexHandle *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar2 = (longlong)iVar3 * 0x38;
        if (((((param_2->NodeID).D == *(uint *)(lVar2 + 0xc + lVar1) &&
              (param_2->NodeID).C == *(uint *)(lVar2 + 8 + lVar1)) &&
             (param_2->NodeID).B == *(uint *)(lVar2 + 4 + lVar1)) &&
             (param_2->NodeID).A == *(uint *)(lVar2 + lVar1)) &&
           (((*(uint *)(lVar2 + 0x18 + lVar1) == (param_2->VertexID).C &&
             *(uint *)(lVar2 + 0x1c + lVar1) == (param_2->VertexID).D) &&
            *(uint *)(lVar2 + 0x14 + lVar1) == (param_2->VertexID).B) &&
            (param_2->VertexID).A == *(uint *)(lVar2 + 0x10 + lVar1))) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar2 + 0x30 + lVar1);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// RemoveImpl<FMetasoundFrontendVertexHandle> @ 14ae15ed0

int __thiscall
TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RemoveImpl<FMetasoundFrontendVertexHandle>
          (TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FMetasoundFrontendVertexHandle *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar8 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar8 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while ((lVar7 = (longlong)(int)uVar8 * 0x38,
         (((param_2->NodeID).D != *(uint *)(lVar7 + 0xc + lVar2) ||
          (param_2->NodeID).C != *(uint *)(lVar7 + 8 + lVar2)) ||
         (param_2->NodeID).B != *(uint *)(lVar7 + 4 + lVar2)) ||
         (param_2->NodeID).A != *(uint *)(lVar7 + lVar2) ||
         (((*(uint *)(lVar7 + 0x18 + lVar2) != (param_2->VertexID).C ||
           *(uint *)(lVar7 + 0x1c + lVar2) != (param_2->VertexID).D) ||
          *(uint *)(lVar7 + 0x14 + lVar2) != (param_2->VertexID).B) ||
          (param_2->VertexID).A != *(uint *)(lVar7 + 0x10 + lVar2)))) {
    uVar8 = *(uint *)(lVar7 + 0x30 + lVar2);
    if (uVar8 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar8 & 0x1f) & 1) != 0) goto LAB_14ae16001;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14ae16001:
  FVar6 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar7 + 0x34) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar8) {
      *puVar10 = *(uint *)(lVar7 + 0x30);
      TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar8,1);
      TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar8,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + 0x30 + (longlong)(int)uVar1 * 0x38);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// Rehash @ 14ae418d0

void __thiscall
TSet<TTuple<int,Metasound::INode_const_*>,TDefaultMapHashableKeyFuncs<int,Metasound::INode_const_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,Metasound::INode_const_*>,TDefaultMapHashableKeyFuncs<int,Metasound::INode_const_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae419ac;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae419ac:
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
        uVar7 = *piVar1 - 1U &
                *(uint *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        lVar4 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        *(uint *)(lVar4 + 0x14) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae41a70

void __thiscall
TSet<TTuple<FMetasoundFrontendGraphClass_const_*,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMetasoundFrontendGraphClass_const_*,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,int,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar4 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae41b4c;
        uVar4 = puVar8[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae41b4c:
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
        lVar5 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        uVar6 = *(ulonglong *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x14) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae41c30

void __thiscall
TSet<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,1>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,1>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar4 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae41d0c;
        uVar4 = puVar8[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae41d0c:
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
        lVar5 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        uVar6 = *(ulonglong *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x14) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae41df0

void __thiscall
TSet<TTuple<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> *pFVar7;
  char *pcVar8;
  uint uVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      pTVar10 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar10 = local_40.Array;
      }
      uVar9 = *(uint *)(pTVar10->AllocatorInstance).InlineData;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar9 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar5 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ae41ec7;
        uVar9 = *(uint *)((pTVar10->AllocatorInstance).InlineData + lVar5 * 4 + 4);
      }
      uStack_64 = -uVar9 & uVar9;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_54 = (int)lVar5 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14ae41ec7:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        pcVar8 = (char *)((longlong)local_40.CurrentBitIndex * 0x38 + *(longlong *)this);
        uVar3 = CityHash64(pcVar8,0x10);
        uVar4 = CityHash64(pcVar8 + 0x10,0x10);
        uVar9 = *piVar1 - 1U &
                ((int)uVar4 + ((uint)(uVar3 >> 2) & 0x3fffffff) + (uint)uVar3 * 0x40 + -0x61c88647 ^
                (uint)uVar3);
        *(uint *)(pcVar8 + 0x34) = uVar9;
        pFVar7 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar7 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar8 + 0x30) = *(undefined4 *)(pFVar7->InlineData + uVar6 * 4);
        *(int *)(pFVar7->InlineData + uVar6 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae41fc0

void __thiscall
TSet<TTuple<FGuid,FMetasoundFrontendClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendClass_const_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FGuid,FMetasoundFrontendClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendClass_const_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae42097;
        uVar9 = puVar10[lVar5 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae42097:
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
        iVar2 = local_30.CurrentBitIndex;
        pcVar8 = (char *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x20);
        uVar4 = CityHash64(pcVar8,0x10);
        uVar9 = *piVar1 - 1U & (uint)uVar4;
        *(uint *)(pcVar8 + 0x1c) = uVar9;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar8 + 0x18) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae42160

void __thiscall
TSet<TTuple<FGuid,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendGraphClass_const_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FGuid,FMetasoundFrontendGraphClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendGraphClass_const_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae42237;
        uVar9 = puVar10[lVar5 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae42237:
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
        iVar2 = local_30.CurrentBitIndex;
        pcVar8 = (char *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x20);
        uVar4 = CityHash64(pcVar8,0x10);
        uVar9 = *piVar1 - 1U & (uint)uVar4;
        *(uint *)(pcVar8 + 0x1c) = uVar9;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar8 + 0x18) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae42300

void __thiscall
TSet<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  ulong64 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint *puVar10;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae423d7;
        uVar9 = puVar10[lVar6 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14ae423d7:
        iStack_44 = iVar3;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        iVar3 = local_30.CurrentBitIndex;
        pcVar2 = (char *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        uVar5 = CityHash64(pcVar2,0x10);
        uVar9 = *piVar1 - 1U & (uint)uVar5;
        *(uint *)(pcVar2 + 0x24) = uVar9;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar2 + 0x20) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar3;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae424a0

void __thiscall
TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae4257c;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae4257c:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x2c + *(longlong *)&this->Elements);
        uVar7 = *puVar8;
        uVar7 = (puVar8[7] + (uVar7 >> 2) + uVar7 * 0x40 + -0x61c88647 ^ uVar7) & *piVar1 - 1U;
        puVar8[10] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[9] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae42650

void __thiscall
TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae4272c;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae4272c:
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
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x38 + *(longlong *)&this->Elements);
        uVar7 = *puVar8;
        uVar7 = (puVar8[7] + (uVar7 >> 2) + uVar7 * 0x40 + -0x61c88647 ^ uVar7) & *piVar1 - 1U;
        puVar8[0xd] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[0xc] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14ae42800

void __thiscall
TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FMetasoundFrontendVertexHandle,int>_> *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x28 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x24 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// TryReplaceExisting @ 14ae47d70

bool __thiscall
TSet<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FGuid,TSharedPtr<Metasound::IGraph_const_,1>_>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  iVar14 = *(int *)&(this->Elements).field_0x8;
  bVar16 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if ((iVar14 - iVar5 != 1) && (iVar14 != iVar5)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar14 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar14 != -1) {
      lVar6 = *(longlong *)&this->Elements;
      do {
        piVar2 = (int *)(lVar6 + (longlong)iVar14 * 0x28);
        if (((*(int *)&param_2->field_0xc == piVar2[3] &&
             *(int *)&param_2->field_0x8 == *(int *)(lVar6 + 8 + (longlong)iVar14 * 0x28)) &&
            *(int *)&param_2->field_0x4 == piVar2[1]) && *(int *)param_2 == *piVar2) {
          bVar16 = iVar14 != -1;
          if (bVar16) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(lVar6 + 0x18 + (longlong)iVar14 * 0x28));
            memmove((void *)(lVar6 + (longlong)iVar14 * 0x28),param_2,0x20);
            iVar5 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar6 = *(longlong *)&this->Elements;
            bVar8 = (byte)iVar5 & 0x1f;
            uVar15 = 1 << bVar8 | 1U >> 0x20 - bVar8;
            if (((iVar5 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar5)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar4 = (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            if (((*(uint *)(puVar12 + lVar4) & uVar15) == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar6 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x28) = iVar5;
            }
            puVar3 = (undefined4 *)(lVar6 + (longlong)iVar5 * 0x28);
            uVar11 = 0xffffffff;
            *puVar3 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar3[1] = uVar11;
            puVar12 = &(this->Elements).field_0x34;
            *(int *)puVar12 = *(int *)puVar12 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar5;
            if (((iVar5 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar5)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            *(uint *)(puVar12 + lVar4) = *(uint *)(puVar12 + lVar4) & ~uVar15;
            *param_3 = iVar14;
          }
          break;
        }
        iVar14 = piVar2[8];
      } while (iVar14 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar16;
  }
  return bVar16;
}

// Emplace<Metasound::FFrontendQueryKey_const_&> @ 14ae4d500

FSetElementId __thiscall
TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
::Emplace<Metasound::FFrontendQueryKey_const_&>
          (TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
           *this,FFrontendQueryKey *param_1,bool *param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  char *in_R9;
  int iVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar7 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer != (FFrontendQueryKey *)0x0) {
    Metasound::FFrontendQueryKey::FFrontendQueryKey(local_48.Pointer,(FFrontendQueryKey *)param_2);
    *(undefined4 *)&(((FFrontendQueryKey *)((longlong)local_48.Pointer + 0x20))->Key)._padding_ =
         0xffffffff;
  }
  iVar7 = *(int *)&(this->Elements).field_0x8;
  bVar4 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar11 = *(uint *)((longlong)local_48.Pointer + 0x18);
  if ((iVar7 - iVar6 != 1) && (iVar7 != iVar6)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar7 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & uVar11) * 4);
        iVar7 != -1; iVar7 = *(int *)((longlong)iVar7 * 0x28 + 0x20 + *(longlong *)&this->Elements))
    {
      bVar4 = Metasound::operator==
                        ((FFrontendQueryKey *)
                         (*(longlong *)&this->Elements + (longlong)iVar7 * 0x28),local_48.Pointer);
      if (bVar4) {
        bVar4 = iVar7 != -1;
        if (bVar4) {
          _Dst = (void *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x28);
          uVar8 = (ulonglong)*(byte *)(*(longlong *)&this->Elements + 0x10 + (longlong)iVar7 * 0x28)
          ;
          if ((3 < uVar8) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            iVar7 = (*pcVar3)();
            return (FSetElementId)iVar7;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar8])(_Dst);
          memmove(_Dst,local_48.Pointer,0x20);
          TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,local_48.Index,1);
          local_48.Index = iVar7;
        }
        goto LAB_14ae4d637;
      }
    }
    bVar4 = false;
  }
LAB_14ae4d637:
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar4;
  }
  if (bVar4 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= this->HashSize)) {
      uVar11 = this->HashSize - 1U & uVar11;
      *(uint *)((longlong)
                &(((FFrontendQueryKey *)((longlong)local_48.Pointer + 0x20))->Key)._padding_ + 4) =
           uVar11;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      *(undefined4 *)&(((FFrontendQueryKey *)((longlong)local_48.Pointer + 0x20))->Key)._padding_ =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&(param_1->Key)._padding_ = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<Metasound::Frontend::FConverterNodeClassRegistryKey_const_&>_> @ 14ae4dc10

FSetElementId __thiscall
TSet<TTuple<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<Metasound::Frontend::FConverterNodeClassRegistryKey_const_&>_>
          (TSet<TTuple<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<Metasound::Frontend::FConverterNodeClassRegistryKey_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  FName FVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  FConverterNodeClassRegistryKey *_Src;
  int iVar11;
  char *in_R9;
  int iVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar11 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar11 = iVar11 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer == (FConverterNodeClassRegistryKey *)0x0) {
    _Src = (FConverterNodeClassRegistryKey *)0x0;
  }
  else {
    FVar4 = (*(FName **)param_2)[1];
    *local_48.Pointer = **(FName **)param_2;
    *(FName *)((longlong)local_48.Pointer + 8) = FVar4;
    (((FConverterNodeClassRegistryKey *)((longlong)local_48.Pointer + 0x10))->FromDataType).
    ComparisonIndex = 0;
    (((FConverterNodeClassRegistryKey *)((longlong)local_48.Pointer + 0x10))->FromDataType).Number =
         0;
    (((FConverterNodeClassRegistryKey *)((longlong)local_48.Pointer + 0x10))->ToDataType).
    ComparisonIndex = 0;
    (((FConverterNodeClassRegistryKey *)((longlong)local_48.Pointer + 0x10))->ToDataType).Number = 0
    ;
    (((FConverterNodeClassRegistryKey *)((longlong)local_48.Pointer + 0x20))->FromDataType).
    ComparisonIndex.Value = 0xffffffff;
    _Src = local_48.Pointer;
  }
  uVar6 = Metasound::Frontend::GetTypeHash(_Src);
  iVar11 = *(int *)&(this->Elements).field_0x8;
  bVar13 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if ((iVar11 - iVar5 != 1) && (iVar11 != iVar5)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar11 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar7 = (longlong)iVar11;
        if ((*(FName *)(lVar2 + lVar7 * 0x28) == _Src->FromDataType) &&
           (*(FName *)(lVar2 + 8 + lVar7 * 0x28) == _Src->ToDataType)) {
          bVar13 = iVar11 != -1;
          if (bVar13) {
            pvVar3 = *(void **)(lVar2 + 0x10 + (longlong)iVar11 * 0x28);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove((void *)(lVar2 + (longlong)iVar11 * 0x28),_Src,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar11;
          }
          break;
        }
        iVar11 = *(int *)(lVar2 + 0x20 + lVar7 * 0x28);
      } while (iVar11 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      _Src[2].FromDataType.Number = uVar6;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      _Src[2].FromDataType.ComparisonIndex.Value = *(uint *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&>_> @ 14ae4de60

FSetElementId __thiscall
TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&>_>
          (TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<void_const_*_&&,TSharedPtr<Audio::IProxyData,1>_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>_> *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar4;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = puVar4[1];
    puVar4[1] = 0;
    *puVar4 = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar7 = ((uint)(*(ulonglong *)local_38.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_38.Pointer >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  bVar5 = TryReplaceExisting(this,uVar7,local_38.Pointer,local_res8,in_R9);
  if (!bVar5) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)local_38.Pointer + 0x1c) = uVar7;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TTuple<FName,FName>_const_&,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo_&&>_> @ 14ae4e030

FSetElementId __thiscall
TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TTuple<FName,FName>_const_&,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo_&&>_>
          (TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TTuple<FName,FName>_const_&,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo_&&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  void *_Dst;
  int iVar9;
  int iVar10;
  char *in_R9;
  int iVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x98,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar11 = *(int *)((longlong)iVar3 * 0x98 + 4 + lVar1);
    *(int *)&(this->Elements).field_0x30 = iVar11;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar11 * 0x98 + lVar1) = 0xffffffff;
    }
  }
  TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    lVar1 = (*(longlong **)param_2)[1];
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = lVar1;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = *plVar2;
    lVar1 = plVar2[1];
    *(longlong *)((longlong)local_48.Pointer + 0x18) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(longlong *)((longlong)local_48.Pointer + 0x20) = plVar2[2];
    *(longlong *)((longlong)local_48.Pointer + 0x28) = plVar2[3];
    FMetasoundFrontendLiteral::FMetasoundFrontendLiteral
              ((FMetasoundFrontendLiteral *)((longlong)local_48.Pointer + 0x30),
               (FMetasoundFrontendLiteral *)(plVar2 + 4));
    *(char *)((longlong)local_48.Pointer + 0x88) = (char)plVar2[0xf];
    *(undefined4 *)((longlong)local_48.Pointer + 0x90) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  lVar1 = *(longlong *)((longlong)local_48.Pointer + 8);
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  bVar12 = false;
  iVar10 = *(int *)&(this->Elements).field_0x8;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 * 0x40 + -0x61c88647 + (int)((ulonglong)lVar1 >> 0x20) + (uVar4 >> 2) + uVar5 ^
          uVar4;
  iVar11 = local_48.Index;
  if ((iVar10 - iVar3 != 1) && (iVar10 != iVar3)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar6 = (longlong)iVar10 * 0x98;
        if ((*(longlong *)(lVar6 + lVar1) == *(longlong *)local_48.Pointer) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == *(longlong *)((longlong)local_48.Pointer + 8))) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            _Dst = (void *)((longlong)iVar10 * 0x98 + lVar1);
            FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral
                      ((FMetasoundFrontendLiteral *)((longlong)_Dst + 0x30));
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x18));
            memmove(_Dst,local_48.Pointer,0x90);
            TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar11 = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar6 + 0x90 + lVar1);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar5) {
      uVar7 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x94) = uVar4;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x90) =
           *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
      *(int *)((longlong)FVar8 + uVar7 * 4) = iVar11;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar11;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TTuple<FName,FName>_const_&,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo_&&>_> @ 14ae4e300

FSetElementId __thiscall
TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TTuple<FName,FName>_const_&,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo_&&>_>
          (TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TTuple<FName,FName>_const_&,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int iVar11;
  char *in_R9;
  void *_Dst;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar10 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x38 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  plVar8 = (longlong *)0x0;
  if (local_48.Pointer != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 8);
    lVar2 = (*(longlong **)param_2)[1];
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = lVar2;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = 0;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = *plVar8;
    *plVar8 = 0;
    *(int *)((longlong)local_48.Pointer + 0x18) = (int)plVar8[1];
    *(undefined4 *)((longlong)local_48.Pointer + 0x1c) = *(undefined4 *)((longlong)plVar8 + 0xc);
    plVar8[1] = 0;
    *(longlong *)((longlong)local_48.Pointer + 0x20) = plVar8[2];
    *(longlong *)((longlong)local_48.Pointer + 0x28) = plVar8[3];
    *(undefined4 *)((longlong)local_48.Pointer + 0x30) = 0xffffffff;
    plVar8 = local_48.Pointer;
  }
  lVar2 = *plVar8;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  uVar4 = uVar4 + (int)((ulonglong)lVar2 >> 0x20);
  lVar2 = plVar8[1];
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  iVar10 = *(int *)&(this->Elements).field_0x8;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 * 0x40 + -0x61c88647 + (int)((ulonglong)lVar2 >> 0x20) + (uVar4 >> 2) + uVar5 ^
          uVar4;
  bVar12 = false;
  if ((iVar10 - iVar3 != 1) && (iVar10 != iVar3)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar6 = (longlong)iVar10 * 0x38;
        if ((*(longlong *)(lVar6 + lVar2) == *plVar8) &&
           (*(longlong *)(lVar6 + 8 + lVar2) == plVar8[1])) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            _Dst = (void *)((longlong)iVar10 * 0x38 + lVar2);
            DestructItems<TSharedRef<Metasound::Frontend::IInputController,1>,int>
                      (*(TSharedRef<Metasound::Frontend::IInputController,1> **)
                        ((longlong)_Dst + 0x10),*(int *)((longlong)_Dst + 0x18));
            if (*(void **)((longlong)_Dst + 0x10) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x10));
            }
            memmove(_Dst,plVar8,0x30);
            TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar6 + 0x30 + lVar2);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar5) {
      uVar7 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar11 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)plVar8 + 0x34) = uVar4;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)(plVar8 + 6) = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<Metasound::FFrontendQueryKey_const_&,FMetasoundFrontendInterface_&&>_> @ 14ae4e5c0

FSetElementId __thiscall
TSet<TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<Metasound::FFrontendQueryKey_const_&,FMetasoundFrontendInterface_&&>_>
          (TSet<TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface,0>,FDefaultSetAllocator>
           *this,TPairInitializer<Metasound::FFrontendQueryKey_const_&,FMetasoundFrontendInterface_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>
  *this_00;
  int iVar7;
  uint uVar8;
  char *in_R9;
  undefined1 *puVar9;
  int iVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar7 = 1;
  if (iVar10 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x88,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x88 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x88 + lVar2) = 0xffffffff;
    }
  }
  puVar9 = &(this->Elements).field_0x8;
  TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface> *)0x0) {
    TPairInitializer<Metasound::FFrontendQueryKey_const_&,FMetasoundFrontendInterface_&&>::
    operator<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>_TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>
              ((TPairInitializer<Metasound::FFrontendQueryKey_const_&,FMetasoundFrontendInterface_&&>
                *)param_2,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x80) = 0xffffffff;
  }
  bVar11 = false;
  uVar8 = *(uint *)((longlong)local_48.Pointer + 0x18);
  iVar10 = local_48.Index;
  if (*(int *)puVar9 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar3 = FindIndexByHash<Metasound::FFrontendQueryKey>(this,uVar8,local_48.Pointer);
    bVar11 = iVar3 != -1;
    if (bVar11) {
      this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>
                 *)((longlong)iVar3 * 0x88 + *(longlong *)&this->Elements);
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>
                (this_00);
      memmove(this_00,local_48.Pointer,0x80);
      TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      iVar10 = iVar3;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar5 = *(int *)puVar9 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar5) {
      uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)&((TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface> *)
                ((longlong)local_48.Pointer + 0x80))->field_0x4 = uVar8;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)((longlong)local_48.Pointer + 0x80) =
           *(undefined4 *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar7;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<Metasound::FFrontendQueryKey_const_&,Metasound::Frontend::FNodeClassRegistryKey_&&>_> @ 14ae4e7c0

FSetElementId __thiscall
TSet<TTuple<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<Metasound::FFrontendQueryKey_const_&,Metasound::Frontend::FNodeClassRegistryKey_&&>_>
          (TSet<TTuple<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey,0>,FDefaultSetAllocator>
           *this,TPairInitializer<Metasound::FFrontendQueryKey_const_&,Metasound::Frontend::FNodeClassRegistryKey_&&>
                 *param_1,bool *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  uint uVar13;
  char *in_R9;
  void *_Dst;
  int iVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar14 = 1;
  if (iVar9 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar8 * 0x50);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar8);
  if (local_48.Pointer != (FFrontendQueryKey *)0x0) {
    plVar4 = *(longlong **)(param_2 + 8);
    Metasound::FFrontendQueryKey::FFrontendQueryKey(local_48.Pointer,*(FFrontendQueryKey **)param_2)
    ;
    lVar3 = plVar4[1];
    (((FFrontendQueryKey *)((longlong)local_48.Pointer + 0x20))->Key)._padding_ = *plVar4;
    (((FFrontendQueryKey *)((longlong)local_48.Pointer + 0x20))->Key)._padding_ = lVar3;
    lVar3 = plVar4[3];
    *(longlong *)&(((FFrontendQueryKey *)((longlong)local_48.Pointer + 0x20))->Key).TypeIndex =
         plVar4[2];
    *(longlong *)&((FFrontendQueryKey *)((longlong)local_48.Pointer + 0x20))->Hash = lVar3;
    *(int *)&(((FFrontendQueryKey *)((longlong)local_48.Pointer + 0x40))->Key)._padding_ =
         (int)plVar4[4];
    *(undefined4 *)&(((FFrontendQueryKey *)((longlong)local_48.Pointer + 0x40))->Key)._padding_ =
         0xffffffff;
  }
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar6 = false;
  iVar8 = *(int *)&(this->Elements).field_0x34;
  uVar13 = *(uint *)((longlong)local_48.Pointer + 0x18);
  if ((iVar9 - iVar8 != 1) && (iVar9 != iVar8)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar9 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & uVar13) * 4);
        iVar9 != -1; iVar9 = *(int *)((longlong)iVar9 * 0x50 + 0x48 + *(longlong *)&this->Elements))
    {
      bVar6 = Metasound::operator==
                        ((FFrontendQueryKey *)
                         (*(longlong *)&this->Elements + (longlong)iVar9 * 0x50),local_48.Pointer);
      if (bVar6) {
        bVar6 = iVar9 != -1;
        if (bVar6) {
          _Dst = (void *)((longlong)iVar9 * 0x50 + *(longlong *)&this->Elements);
          bVar1 = *(byte *)((longlong)_Dst + 0x10);
          if ((3 < (ulonglong)bVar1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            iVar9 = (*pcVar5)();
            return (FSetElementId)iVar9;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar1])(_Dst);
          memmove(_Dst,local_48.Pointer,0x48);
          TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,local_48.Index,1);
          local_48.Index = iVar9;
        }
        goto LAB_14ae4e913;
      }
    }
    bVar6 = false;
  }
LAB_14ae4e913:
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar6;
  }
  if (bVar6 == false) {
    uVar11 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar11) {
      uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar14 <= this->HashSize)) {
      uVar13 = this->HashSize - 1U & uVar13;
      *(uint *)((longlong)
                &(((FFrontendQueryKey *)((longlong)local_48.Pointer + 0x40))->Key)._padding_ + 4) =
           uVar13;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar10 = (longlong)this->HashSize - 1U & (longlong)(int)uVar13;
      *(undefined4 *)&(((FFrontendQueryKey *)((longlong)local_48.Pointer + 0x40))->Key)._padding_ =
           *(undefined4 *)((longlong)FVar12 + uVar10 * 4);
      *(int *)((longlong)FVar12 + uVar10 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar14;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<Metasound::FFrontendQueryKey_const_&,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_&&>_> @ 14ae4ea60

FSetElementId __thiscall
TSet<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<Metasound::FFrontendQueryKey_const_&,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_&&>_>
          (TSet<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<Metasound::FFrontendQueryKey_const_&,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>
  *this_00;
  FFrontendQueryKey *_Src;
  uint uVar10;
  char *in_R9;
  int iVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x38 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer == (FFrontendQueryKey *)0x0) {
    _Src = (FFrontendQueryKey *)0x0;
  }
  else {
    plVar4 = *(longlong **)(param_2 + 8);
    Metasound::FFrontendQueryKey::FFrontendQueryKey(local_48.Pointer,*(FFrontendQueryKey **)param_2)
    ;
    (((FFrontendQueryKey *)((longlong)local_48.Pointer + 0x20))->Key)._padding_ = 0;
    (((FFrontendQueryKey *)((longlong)local_48.Pointer + 0x20))->Key)._padding_ = *plVar4;
    *plVar4 = 0;
    *(int *)&(((FFrontendQueryKey *)((longlong)local_48.Pointer + 0x20))->Key)._padding_ =
         (int)plVar4[1];
    *(undefined4 *)
     ((longlong)&(((FFrontendQueryKey *)((longlong)local_48.Pointer + 0x20))->Key)._padding_ + 4) =
         *(undefined4 *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
    *(undefined4 *)&(((FFrontendQueryKey *)((longlong)local_48.Pointer + 0x20))->Key).TypeIndex =
         0xffffffff;
    _Src = local_48.Pointer;
  }
  iVar1 = *(int *)&(this->Elements).field_0x8;
  bVar12 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar10 = _Src->Hash;
  if ((iVar1 - iVar6 != 1) && (iVar1 != iVar6)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar10) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x38 + 0x30 + *(longlong *)&this->Elements))
    {
      bVar5 = Metasound::operator==
                        ((FFrontendQueryKey *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x38),_Src);
      if (bVar5) {
        bVar12 = iVar1 != -1;
        if (bVar12) {
          this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>
                     *)((longlong)iVar1 * 0x38 + *(longlong *)&this->Elements);
          UE::Core::Private::Tuple::
          TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>
          ::
          ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>
                    (this_00);
          memmove(this_00,_Src,0x30);
          TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,local_48.Index,1);
          local_48.Index = iVar1;
        }
        break;
      }
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)&_Src[1].Key.field_0x14 = uVar10;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)&_Src[1].Key.TypeIndex = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<Metasound::Frontend::FGraphClassRegistryKey_const_&,TSharedPtr<Metasound::FGraph_const_,1>_const_&>_> @ 14ae4ecc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<Metasound::Frontend::FGraphClassRegistryKey_const_&,TSharedPtr<Metasound::FGraph_const_,1>_const_&>_>
          (TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<Metasound::Frontend::FGraphClassRegistryKey_const_&,TSharedPtr<Metasound::FGraph_const_,1>_const_&>
                 *param_1,bool *param_2)

{
  FGraphClassRegistryKey *pFVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FNodeClassRegistryKey *pFVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ForElementType<FSetElementId> FVar14;
  void *_Dst;
  int iVar15;
  char *in_R9;
  undefined1 *puVar16;
  bool bVar17;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar15 = 1;
  if (iVar11 == 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar9 = *(int *)&(this->Elements).field_0x30;
    iVar11 = iVar11 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar9 * 0x50);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  puVar16 = &(this->Elements).field_0x8;
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar9);
  if (local_48.Pointer != (FGraphClassRegistryKey *)0x0) {
    puVar4 = *(undefined8 **)param_2;
    puVar5 = *(undefined8 **)(param_2 + 8);
    uVar6 = *puVar4;
    uVar7 = puVar4[1];
    pFVar8 = local_48.Pointer;
    pFVar8->Type = (char)uVar6;
    *(int3 *)&pFVar8->field_0x1 = (int3)((ulonglong)uVar6 >> 8);
    (pFVar8->ClassName).Namespace.ComparisonIndex = (FNameEntryId)(int)((ulonglong)uVar6 >> 0x20);
    *(undefined8 *)&((local_48.Pointer)->ClassName).Namespace.Number = uVar7;
    uVar6 = puVar4[3];
    *(undefined8 *)&((local_48.Pointer)->ClassName).Name.Number = puVar4[2];
    *(undefined8 *)&((local_48.Pointer)->ClassName).Variant.Number = uVar6;
    uVar6 = puVar4[5];
    *(undefined8 *)&((local_48.Pointer)->Version).Minor = puVar4[4];
    *(undefined8 *)
     &(((FTopLevelAssetPath *)((longlong)local_48.Pointer + 0x24))->PackageName).Number = uVar6;
    *(undefined8 *)&(((FTopLevelAssetPath *)((longlong)local_48.Pointer + 0x24))->AssetName).Number
         = puVar4[6];
    uVar6 = *puVar5;
    pFVar1 = (FGraphClassRegistryKey *)((longlong)local_48.Pointer + 0x38);
    (pFVar1->NodeKey).Type = (char)uVar6;
    *(int3 *)&(pFVar1->NodeKey).field_0x1 = (int3)((ulonglong)uVar6 >> 8);
    (pFVar1->NodeKey).ClassName.Namespace.ComparisonIndex =
         (FNameEntryId)(int)((ulonglong)uVar6 >> 0x20);
    lVar3 = puVar5[1];
    *(longlong *)
     &(((FGraphClassRegistryKey *)((longlong)local_48.Pointer + 0x38))->NodeKey).ClassName.Namespace
      .Number = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    (((FGraphClassRegistryKey *)((longlong)local_48.Pointer + 0x38))->NodeKey).ClassName.Name.Number
         = 0xffffffff;
  }
  uVar10 = Metasound::Frontend::GetTypeHash(local_48.Pointer);
  bVar17 = false;
  if (*(int *)puVar16 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar11 = FindIndexByHash<Metasound::Frontend::FGraphClassRegistryKey>
                       (this,uVar10,local_48.Pointer);
    bVar17 = iVar11 != -1;
    if (bVar17) {
      _Dst = (void *)((longlong)iVar11 * 0x50 + *(longlong *)&this->Elements);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x40));
      memmove(_Dst,local_48.Pointer,0x48);
      TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar11;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar17;
  }
  if (bVar17 == false) {
    uVar13 = *(int *)puVar16 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar13) {
      uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar15 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar13 < 1) || (iVar15 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      (((FGraphClassRegistryKey *)((longlong)local_48.Pointer + 0x38))->NodeKey).ClassName.Variant.
      ComparisonIndex.Value = uVar10;
      FVar14 = (this->Hash).SecondaryData;
      if (FVar14 == (ForElementType<FSetElementId>)0x0) {
        FVar14 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar12 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      (((FGraphClassRegistryKey *)((longlong)local_48.Pointer + 0x38))->NodeKey).ClassName.Name.
      Number = *(uint *)((longlong)FVar14 + uVar12 * 4);
      *(int *)((longlong)FVar14 + uVar12 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar15;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FMetasoundFrontendClassName_const_&,Metasound::Frontend::INodeTemplate_const_*_&&>_> @ 14ae4eef0

FSetElementId __thiscall
TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FMetasoundFrontendClassName_const_&,Metasound::Frontend::INodeTemplate_const_*_&&>_>
          (TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
           *this,TPairInitializer<FMetasoundFrontendClassName_const_&,Metasound::Frontend::INodeTemplate_const_*_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  FName *pFVar4;
  FName *pFVar5;
  FName FVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  undefined1 *in_R9;
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar7);
  if (local_28.Pointer != (FMetasoundFrontendClassName *)0x0) {
    pFVar4 = *(FName **)param_2;
    pFVar5 = *(FName **)(param_2 + 8);
    FVar6 = pFVar4[1];
    *local_28.Pointer = *pFVar4;
    *(FName *)((longlong)local_28.Pointer + 8) = FVar6;
    *(FName *)((longlong)local_28.Pointer + 0x10) = pFVar4[2];
    ((FMetasoundFrontendClassName *)((longlong)local_28.Pointer + 0x18))->Namespace = *pFVar5;
    (((FMetasoundFrontendClassName *)((longlong)local_28.Pointer + 0x18))->Name).ComparisonIndex.
    Value = 0xffffffff;
  }
  uVar8 = ::GetTypeHash(local_28.Pointer);
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = 0;
  }
  uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (3 < uVar10) {
    uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
    uVar8 = this->HashSize - 1U & uVar8;
    (((FMetasoundFrontendClassName *)((longlong)local_28.Pointer + 0x18))->Name).Number = uVar8;
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
    (((FMetasoundFrontendClassName *)((longlong)local_28.Pointer + 0x18))->Name).ComparisonIndex.
    Value = *(uint *)((longlong)FVar11 + uVar9 * 4);
    *(int *)((longlong)FVar11 + uVar9 * 4) = local_28.Index;
  }
  else {
    this->HashSize = iVar12;
    Rehash(this);
  }
  *(int *)&param_1->Key = local_28.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_&&>_> @ 14ae4f080

FSetElementId __thiscall
TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_&&>_>
          (TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  char *in_R9;
  void *_Dst;
  int iVar14;
  bool bVar15;
  FSparseArrayAllocationInfo local_48;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar14 = 1;
  if (iVar13 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar13 = iVar13 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar7 * 0x38 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar7);
  if (local_48.Pointer != (FNodeClassRegistryKey *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    pFVar4 = *(FName **)(param_2 + 8);
    uVar6 = puVar3[1];
    *(undefined8 *)local_48.Pointer = *puVar3;
    *(undefined8 *)
     &(((FMetasoundFrontendClassName *)((longlong)local_48.Pointer + 4))->Namespace).Number = uVar6;
    uVar6 = puVar3[3];
    *(undefined8 *)&(((FMetasoundFrontendClassName *)((longlong)local_48.Pointer + 4))->Name).Number
         = puVar3[2];
    *(undefined8 *)
     &(((FMetasoundFrontendClassName *)((longlong)local_48.Pointer + 4))->Variant).Number = uVar6;
    ((FMetasoundFrontendVersionNumber *)((longlong)local_48.Pointer + 0x1c))->Minor =
         *(int *)(puVar3 + 4);
    (((FNodeClassRegistryKey *)((longlong)local_48.Pointer + 0x24))->ClassName).Namespace = *pFVar4;
    pFVar4->ComparisonIndex = 0;
    pFVar4->Number = 0;
    (((FNodeClassRegistryKey *)((longlong)local_48.Pointer + 0x24))->ClassName).Name.ComparisonIndex
    .Value = 0xffffffff;
  }
  uVar8 = Metasound::Frontend::GetTypeHash(local_48.Pointer);
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar7 != 1) && (iVar13 != iVar7)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & uVar8) * 4);
    if (iVar13 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar9 = (longlong)iVar13 * 0x38;
        if (((((*(EMetasoundFrontendClassType *)(lVar9 + lVar2) ==
                *(EMetasoundFrontendClassType *)local_48.Pointer) &&
              (*(FName *)(lVar9 + 4 + lVar2) ==
               ((FMetasoundFrontendClassName *)((longlong)local_48.Pointer + 4))->Namespace)) &&
             (*(FName *)(lVar9 + 0xc + lVar2) ==
              ((FMetasoundFrontendClassName *)((longlong)local_48.Pointer + 4))->Name)) &&
            ((*(FName *)(lVar9 + 0x14 + lVar2) ==
              ((FMetasoundFrontendClassName *)((longlong)local_48.Pointer + 4))->Variant &&
             (*(int *)(lVar9 + 0x1c + lVar2) ==
              ((FMetasoundFrontendVersionNumber *)((longlong)local_48.Pointer + 0x1c))->Major)))) &&
           (*(int *)(lVar9 + 0x20 + lVar2) ==
            ((FMetasoundFrontendVersionNumber *)((longlong)local_48.Pointer + 0x1c))->Minor)) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            _Dst = (void *)((longlong)iVar13 * 0x38 + lVar2);
            plVar5 = *(longlong **)((longlong)_Dst + 0x28);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
            memmove(_Dst,local_48.Pointer,0x30);
            TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar9 + 0x30 + lVar2);
      } while (iVar13 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar15;
  }
  if (bVar15 == false) {
    uVar11 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar11) {
      uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar14 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      (((FNodeClassRegistryKey *)((longlong)local_48.Pointer + 0x24))->ClassName).Name.Number =
           uVar8;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar10 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      (((FNodeClassRegistryKey *)((longlong)local_48.Pointer + 0x24))->ClassName).Name.
      ComparisonIndex.Value = *(uint *)((longlong)FVar12 + uVar10 * 4);
      *(int *)((longlong)FVar12 + uVar10 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar14;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_const_&>_> @ 14ae4f310

FSetElementId __thiscall
TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_const_&>_>
          (TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
           *this,TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FName *pFVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  undefined1 *in_R9;
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar1 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar8 * 0x40 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar8);
  if (local_28.Pointer != (FNodeClassRegistryKey *)0x0) {
    puVar4 = *(undefined8 **)param_2;
    pFVar5 = *(FName **)(param_2 + 8);
    uVar7 = puVar4[1];
    *(undefined8 *)local_28.Pointer = *puVar4;
    *(undefined8 *)
     &(((FMetasoundFrontendClassName *)((longlong)local_28.Pointer + 4))->Namespace).Number = uVar7;
    uVar7 = puVar4[3];
    *(undefined8 *)&(((FMetasoundFrontendClassName *)((longlong)local_28.Pointer + 4))->Name).Number
         = puVar4[2];
    *(undefined8 *)
     &(((FMetasoundFrontendClassName *)((longlong)local_28.Pointer + 4))->Variant).Number = uVar7;
    ((FMetasoundFrontendVersionNumber *)((longlong)local_28.Pointer + 0x1c))->Minor =
         *(int *)(puVar4 + 4);
    (((FNodeClassRegistryKey *)((longlong)local_28.Pointer + 0x24))->ClassName).Namespace = *pFVar5;
    FVar6 = pFVar5[1];
    (((FNodeClassRegistryKey *)((longlong)local_28.Pointer + 0x24))->ClassName).Name = FVar6;
    if (FVar6 != (FName)0x0) {
      LOCK();
      *(int *)((longlong)FVar6 + 8) = *(int *)((longlong)FVar6 + 8) + 1;
      UNLOCK();
    }
    (((FNodeClassRegistryKey *)((longlong)local_28.Pointer + 0x24))->ClassName).Variant.
    ComparisonIndex.Value = 0xffffffff;
  }
  uVar9 = Metasound::Frontend::GetTypeHash(local_28.Pointer);
  if (in_R9 != (undefined1 *)0x0) {
    *in_R9 = 0;
  }
  uVar11 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar13 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar11 < 1) || (iVar13 <= this->HashSize)) {
    uVar9 = this->HashSize - 1U & uVar9;
    (((FNodeClassRegistryKey *)((longlong)local_28.Pointer + 0x24))->ClassName).Variant.Number =
         uVar9;
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar10 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
    (((FNodeClassRegistryKey *)((longlong)local_28.Pointer + 0x24))->ClassName).Variant.
    ComparisonIndex.Value = *(uint *)((longlong)FVar12 + uVar10 * 4);
    *(int *)((longlong)FVar12 + uVar10 * 4) = local_28.Index;
  }
  else {
    this->HashSize = iVar13;
    Rehash(this);
  }
  *(int *)&param_1->Key = local_28.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_const_&>_> @ 14ae4f4c0

FSetElementId __thiscall
TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_const_&>_>
          (TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FName *pFVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  EMetasoundFrontendClassType *pEVar10;
  ulonglong uVar11;
  uint uVar12;
  ForElementType<FSetElementId> FVar13;
  void *_Dst;
  undefined4 uVar14;
  char *in_R9;
  undefined4 uVar15;
  int iVar16;
  bool bVar17;
  FSparseArrayAllocationInfo local_48;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar16 = 1;
  if (iVar1 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar8 * 0x40 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar8);
  if (local_48.Pointer != (FNodeClassRegistryKey *)0x0) {
    puVar4 = *(undefined8 **)param_2;
    pFVar5 = *(FName **)(param_2 + 8);
    uVar7 = puVar4[1];
    *(undefined8 *)local_48.Pointer = *puVar4;
    *(undefined8 *)
     &(((FMetasoundFrontendClassName *)((longlong)local_48.Pointer + 4))->Namespace).Number = uVar7;
    uVar7 = puVar4[3];
    *(undefined8 *)&(((FMetasoundFrontendClassName *)((longlong)local_48.Pointer + 4))->Name).Number
         = puVar4[2];
    *(undefined8 *)
     &(((FMetasoundFrontendClassName *)((longlong)local_48.Pointer + 4))->Variant).Number = uVar7;
    ((FMetasoundFrontendVersionNumber *)((longlong)local_48.Pointer + 0x1c))->Minor =
         *(int *)(puVar4 + 4);
    (((FNodeClassRegistryKey *)((longlong)local_48.Pointer + 0x24))->ClassName).Namespace = *pFVar5;
    FVar6 = pFVar5[1];
    (((FNodeClassRegistryKey *)((longlong)local_48.Pointer + 0x24))->ClassName).Name = FVar6;
    if (FVar6 != (FName)0x0) {
      LOCK();
      *(int *)((longlong)FVar6 + 8) = *(int *)((longlong)FVar6 + 8) + 1;
      UNLOCK();
    }
    (((FNodeClassRegistryKey *)((longlong)local_48.Pointer + 0x24))->ClassName).Variant.
    ComparisonIndex.Value = 0xffffffff;
  }
  uVar9 = Metasound::Frontend::GetTypeHash(local_48.Pointer);
  iVar1 = *(int *)&(this->Elements).field_0x8;
  bVar17 = false;
  iVar8 = *(int *)&(this->Elements).field_0x34;
  uVar15 = local_48.Index;
  if ((iVar1 - iVar8 != 1) && (iVar1 != iVar8)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar14 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & uVar9) * 4);
    if (uVar14 != 0xffffffff) {
      do {
        pEVar10 = (EMetasoundFrontendClassType *)
                  ((longlong)(int)uVar14 * 0x40 + *(longlong *)&this->Elements);
        if (((((*pEVar10 == *(EMetasoundFrontendClassType *)local_48.Pointer) &&
              (*(FName *)(pEVar10 + 4) ==
               ((FMetasoundFrontendClassName *)((longlong)local_48.Pointer + 4))->Namespace)) &&
             (*(FName *)(pEVar10 + 0xc) ==
              ((FMetasoundFrontendClassName *)((longlong)local_48.Pointer + 4))->Name)) &&
            ((*(FName *)(pEVar10 + 0x14) ==
              ((FMetasoundFrontendClassName *)((longlong)local_48.Pointer + 4))->Variant &&
             (*(undefined4 *)(pEVar10 + 0x1c) ==
              ((FMetasoundFrontendVersionNumber *)((longlong)local_48.Pointer + 0x1c))->Major)))) &&
           (*(undefined4 *)(pEVar10 + 0x20) ==
            ((FMetasoundFrontendVersionNumber *)((longlong)local_48.Pointer + 0x1c))->Minor)) {
          bVar17 = uVar14 != 0xffffffff;
          if (bVar17) {
            _Dst = (void *)((longlong)(int)uVar14 * 0x40 + *(longlong *)&this->Elements);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x30));
            memmove(_Dst,local_48.Pointer,0x38);
            TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            uVar15 = uVar14;
          }
          break;
        }
        uVar14 = *(undefined4 *)(pEVar10 + 0x38);
      } while (uVar14 != 0xffffffff);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar17;
  }
  if (bVar17 == false) {
    uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar12) {
      uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar12 < 1) || (iVar16 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & uVar9;
      (((FNodeClassRegistryKey *)((longlong)local_48.Pointer + 0x24))->ClassName).Variant.Number =
           uVar9;
      FVar13 = (this->Hash).SecondaryData;
      if (FVar13 == (ForElementType<FSetElementId>)0x0) {
        FVar13 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar11 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      (((FNodeClassRegistryKey *)((longlong)local_48.Pointer + 0x24))->ClassName).Variant.
      ComparisonIndex.Value = *(uint *)((longlong)FVar13 + uVar11 * 4);
      *(undefined4 *)((longlong)FVar13 + uVar11 * 4) = uVar15;
    }
    else {
      this->HashSize = iVar16;
      Rehash(this);
    }
  }
  *(undefined4 *)&param_1->Key = uVar15;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&>_> @ 14ae4f750

FSetElementId __thiscall
TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
          (TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TKeyInitializer<Metasound::Frontend::FNodeClassRegistryKey_const_&> *param_2,bool *param_3
          )

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  char *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar9;
  char *pcVar10;
  int iVar11;
  void *_Dst;
  int iVar12;
  bool bVar13;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar11 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x40 + 4 + lVar2);
    iVar11 = iVar11 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x40 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer == (char *)0x0) {
    pcVar10 = (char *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)param_3;
    uVar4 = puVar3[1];
    *(undefined8 *)local_38.Pointer = *puVar3;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar4;
    uVar4 = puVar3[3];
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = puVar3[2];
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = uVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = *(undefined4 *)(puVar3 + 4);
    pcVar10 = (char *)((longlong)local_38.Pointer + 0x28);
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10[4] = '\0';
    pcVar10[5] = '\0';
    pcVar10[6] = '\0';
    pcVar10[7] = '\0';
    pcVar10 = (char *)((longlong)local_38.Pointer + 0x30);
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10[4] = '\0';
    pcVar10[5] = '\0';
    pcVar10[6] = '\0';
    pcVar10[7] = '\0';
    DestructItems<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,int>
              ((FActiveRegistrationTaskInfo *)0x0,0);
    pcVar10 = (char *)((longlong)local_38.Pointer + 0x38);
    pcVar10[0] = -1;
    pcVar10[1] = -1;
    pcVar10[2] = -1;
    pcVar10[3] = -1;
    pcVar10 = local_38.Pointer;
  }
  iVar11 = *(int *)&(this->Elements).field_0x8;
  bVar13 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if ((iVar11 - iVar5 != 1) && (iVar11 != iVar5)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar11 != -1) {
      do {
        pcVar6 = (char *)((longlong)iVar11 * 0x40 + *(longlong *)&this->Elements);
        if (((((*pcVar6 == *pcVar10) && (*(longlong *)(pcVar6 + 4) == *(longlong *)(pcVar10 + 4)))
             && (*(longlong *)(pcVar6 + 0xc) == *(longlong *)(pcVar10 + 0xc))) &&
            ((*(longlong *)(pcVar6 + 0x14) == *(longlong *)(pcVar10 + 0x14) &&
             (*(int *)(pcVar6 + 0x1c) == *(int *)(pcVar10 + 0x1c))))) &&
           (*(int *)(pcVar6 + 0x20) == *(int *)(pcVar10 + 0x20))) {
          bVar13 = iVar11 != -1;
          if (bVar13) {
            _Dst = (void *)((longlong)iVar11 * 0x40 + *(longlong *)&this->Elements);
            DestructItems<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,int>
                      (*(FActiveRegistrationTaskInfo **)((longlong)_Dst + 0x28),
                       *(int *)((longlong)_Dst + 0x30));
            if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x28));
            }
            memmove(_Dst,pcVar10,0x38);
            TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar11;
          }
          break;
        }
        iVar11 = *(int *)(pcVar6 + 0x38);
      } while (iVar11 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar13;
  }
  if (bVar13 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar12 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & (uint)param_2;
      *(uint *)(pcVar10 + 0x3c) = uVar8;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)(pcVar10 + 0x38) = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<Metasound::FFrontendQueryKey> @ 14ae4fa90

int __thiscall
TSet<TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface,0>,FDefaultSetAllocator>
::FindIndexByHash<Metasound::FFrontendQueryKey>
          (TSet<TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface,0>,FDefaultSetAllocator>
           *this,uint param_1,FFrontendQueryKey *param_2)

{
  int iVar1;
  bool bVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x88 + 0x80 + *(longlong *)&this->Elements))
    {
      bVar2 = Metasound::operator==
                        ((FFrontendQueryKey *)
                         (*(longlong *)&this->Elements + (longlong)iVar1 * 0x88),param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<Metasound::Frontend::FGraphClassRegistryKey> @ 14ae4fb30

int __thiscall
TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<Metasound::Frontend::FGraphClassRegistryKey>
          (TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,FGraphClassRegistryKey *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar2 = (longlong)iVar3;
        if ((((((*(EMetasoundFrontendClassType *)(lVar1 + lVar2 * 0x50) == (param_2->NodeKey).Type)
               && (*(FName *)(lVar1 + 4 + lVar2 * 0x50) == (param_2->NodeKey).ClassName.Namespace))
              && (*(FName *)(lVar1 + 0xc + lVar2 * 0x50) == (param_2->NodeKey).ClassName.Name)) &&
             ((*(FName *)(lVar1 + 0x14 + lVar2 * 0x50) == (param_2->NodeKey).ClassName.Variant &&
              (*(int *)(lVar1 + 0x1c + lVar2 * 0x50) == (param_2->NodeKey).Version.Major)))) &&
            ((*(int *)(lVar1 + 0x20 + lVar2 * 0x50) == (param_2->NodeKey).Version.Minor &&
             ((*(FName *)(lVar1 + 0x24 + lVar2 * 0x50) == (param_2->AssetPath).PackageName &&
              (*(FName *)(lVar1 + 0x2c + lVar2 * 0x50) == (param_2->AssetPath).AssetName)))))) &&
           (*(uint *)(lVar1 + 0x34 + lVar2 * 0x50) == param_2->ObjectID)) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar1 + 0x48 + lVar2 * 0x50);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FMetasoundFrontendClassName> @ 14ae4fc00

int __thiscall
TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
::FindIndexByHash<FMetasoundFrontendClassName>
          (TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
           *this,uint param_1,FMetasoundFrontendClassName *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar2 = (longlong)iVar3;
        if (((*(FName *)(lVar1 + lVar2 * 0x28) == param_2->Namespace) &&
            (*(FName *)(lVar1 + 8 + lVar2 * 0x28) == param_2->Name)) &&
           (*(FName *)(lVar1 + 0x10 + lVar2 * 0x28) == param_2->Variant)) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar1 + 0x20 + lVar2 * 0x28);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey> @ 14ae4fc70

int __thiscall
TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey>
          (TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FNodeClassRegistryKey *param_2)

{
  EMetasoundFrontendClassType *pEVar1;
  undefined4 uVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar2 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pEVar1 = (EMetasoundFrontendClassType *)
                 ((longlong)(int)uVar2 * 0x40 + *(longlong *)&this->Elements);
        if ((((*pEVar1 == param_2->Type) &&
             (*(FName *)(pEVar1 + 4) == (param_2->ClassName).Namespace)) &&
            (*(FName *)(pEVar1 + 0xc) == (param_2->ClassName).Name)) &&
           (((*(FName *)(pEVar1 + 0x14) == (param_2->ClassName).Variant &&
             (*(undefined4 *)(pEVar1 + 0x1c) == (param_2->Version).Major)) &&
            (*(undefined4 *)(pEVar1 + 0x20) == (param_2->Version).Minor)))) {
          return uVar2;
        }
        uVar2 = *(undefined4 *)(pEVar1 + 0x38);
      } while (uVar2 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey> @ 14ae4fd10

int __thiscall
TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
::FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey>
          (TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
           *this,uint param_1,FNodeClassRegistryKey *param_2)

{
  EMetasoundFrontendClassType *pEVar1;
  undefined4 uVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar2 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pEVar1 = (EMetasoundFrontendClassType *)
                 ((longlong)(int)uVar2 * 0x40 + *(longlong *)&this->Elements);
        if ((((*pEVar1 == param_2->Type) &&
             (*(FName *)(pEVar1 + 4) == (param_2->ClassName).Namespace)) &&
            (*(FName *)(pEVar1 + 0xc) == (param_2->ClassName).Name)) &&
           (((*(FName *)(pEVar1 + 0x14) == (param_2->ClassName).Variant &&
             (*(undefined4 *)(pEVar1 + 0x1c) == (param_2->Version).Major)) &&
            (*(undefined4 *)(pEVar1 + 0x20) == (param_2->Version).Minor)))) {
          return uVar2;
        }
        uVar2 = *(undefined4 *)(pEVar1 + 0x38);
      } while (uVar2 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey> @ 14ae4fdb0

int __thiscall
TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey>
          (TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,FNodeClassRegistryKey *param_2)

{
  EMetasoundFrontendClassType *pEVar1;
  undefined4 uVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar2 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pEVar1 = (EMetasoundFrontendClassType *)
                 ((longlong)(int)uVar2 * 0x40 + *(longlong *)&this->Elements);
        if ((((*pEVar1 == param_2->Type) &&
             (*(FName *)(pEVar1 + 4) == (param_2->ClassName).Namespace)) &&
            (*(FName *)(pEVar1 + 0xc) == (param_2->ClassName).Name)) &&
           (((*(FName *)(pEVar1 + 0x14) == (param_2->ClassName).Variant &&
             (*(undefined4 *)(pEVar1 + 0x1c) == (param_2->Version).Major)) &&
            (*(undefined4 *)(pEVar1 + 0x20) == (param_2->Version).Minor)))) {
          return uVar2;
        }
        uVar2 = *(undefined4 *)(pEVar1 + 0x38);
      } while (uVar2 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey> @ 14ae4fe50

int __thiscall
TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<Metasound::Frontend::FNodeClassRegistryKey>
          (TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FNodeClassRegistryKey *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar2 = (longlong)iVar3 * 0x38;
        if ((((*(EMetasoundFrontendClassType *)(lVar2 + lVar1) == param_2->Type) &&
             (*(FName *)(lVar2 + 4 + lVar1) == (param_2->ClassName).Namespace)) &&
            (*(FName *)(lVar2 + 0xc + lVar1) == (param_2->ClassName).Name)) &&
           (((*(FName *)(lVar2 + 0x14 + lVar1) == (param_2->ClassName).Variant &&
             (*(int *)(lVar2 + 0x1c + lVar1) == (param_2->Version).Major)) &&
            (*(int *)(lVar2 + 0x20 + lVar1) == (param_2->Version).Minor)))) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar2 + 0x30 + lVar1);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// Move<TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>_> @ 14ae54540

void __cdecl
TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
::
Move<TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>_>
          (TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
           *param_1,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_2)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (param_1 != param_2) {
    TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&param_1->Elements,0,*(int *)&(param_1->Elements).field_0x8);
    if (*(void **)&param_1->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->Elements);
    }
    _Src = &(param_2->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = *(undefined8 *)&param_2->Elements;
    _Dst = &(param_1->Elements).field_0x10;
    *(undefined8 *)&param_2->Elements = 0;
    *(undefined4 *)&(param_1->Elements).field_0x8 = *(undefined4 *)&(param_2->Elements).field_0x8;
    *(undefined4 *)&(param_1->Elements).field_0xc = *(undefined4 *)&(param_2->Elements).field_0xc;
    *(undefined8 *)&(param_2->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_2->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(param_1->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(param_1->Elements).field_0x20 =
           *(undefined8 *)&(param_2->Elements).field_0x20;
      *(undefined8 *)&(param_2->Elements).field_0x20 = 0;
      *(undefined4 *)&(param_1->Elements).field_0x28 =
           *(undefined4 *)&(param_2->Elements).field_0x28;
      *(undefined4 *)&(param_1->Elements).field_0x2c =
           *(undefined4 *)&(param_2->Elements).field_0x2c;
      *(undefined8 *)&(param_2->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = *(undefined4 *)&(param_2->Elements).field_0x30;
    *(undefined4 *)&(param_1->Elements).field_0x34 = *(undefined4 *)&(param_2->Elements).field_0x34;
    *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  }
  if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(param_1->Hash).InlineData = *(undefined4 *)(param_2->Hash).InlineData;
  }
  FVar2 = (param_1->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (param_1->Hash).SecondaryData = (param_2->Hash).SecondaryData;
  (param_2->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  param_1->HashSize = param_2->HashSize;
  param_2->HashSize = 0;
  return;
}

// RemoveImpl<TTuple<FName,FName>_> @ 14ae54fb0

int __thiscall
TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>,FDefaultSetAllocator>
::RemoveImpl<TTuple<FName,FName>_>
          (TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,TTuple<FName,FName> *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while ((lVar9 = (longlong)(int)uVar7 * 0x98, *(longlong *)(lVar9 + lVar2) != *(longlong *)param_2
         || (*(longlong *)(lVar9 + 8 + lVar2) != *(longlong *)&param_2->field_0x8))) {
    uVar7 = *(uint *)(lVar9 + 0x90 + lVar2);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14ae5509f;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14ae5509f:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 0x94) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar8 = *(uint *)(lVar9 + 0x90);
      TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x90 + (longlong)(int)uVar1 * 0x98);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<TTuple<FName,FName>_> @ 14ae55160

int __thiscall
TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>,FDefaultSetAllocator>
::RemoveImpl<TTuple<FName,FName>_>
          (TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,TTuple<FName,FName> *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while ((lVar9 = (longlong)(int)uVar7 * 0x38, *(longlong *)(lVar9 + lVar2) != *(longlong *)param_2
         || (*(longlong *)(lVar9 + 8 + lVar2) != *(longlong *)&param_2->field_0x8))) {
    uVar7 = *(uint *)(lVar9 + 0x30 + lVar2);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14ae55249;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14ae55249:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 0x34) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar8 = *(uint *)(lVar9 + 0x30);
      TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x30 + (longlong)(int)uVar1 * 0x38);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<Metasound::FFrontendQueryKey> @ 14ae55300

int __thiscall
TSet<TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface,0>,FDefaultSetAllocator>
::RemoveImpl<Metasound::FFrontendQueryKey>
          (TSet<TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface,0>,FDefaultSetAllocator>
           *this,uint param_1,FFrontendQueryKey *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  FFrontendQueryKey *pFVar8;
  undefined1 *puVar9;
  uint *puVar10;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    pFVar8 = (FFrontendQueryKey *)(*(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x88);
    bVar3 = Metasound::operator==(pFVar8,param_2);
    if (bVar3) break;
    uVar6 = (uint)pFVar8[4].Key._padding_;
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14ae553ee;
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
LAB_14ae553ee:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x88;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x84) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar10 = *(uint *)(lVar7 + 0x80);
      TSparseArray<TSparseSetElement<TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + 0x80 + (longlong)(int)uVar1 * 0x88);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<Metasound::FFrontendQueryKey> @ 14ae554a0

int __thiscall
TSet<TTuple<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey,0>,FDefaultSetAllocator>
::RemoveImpl<Metasound::FFrontendQueryKey>
          (TSet<TTuple<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey,0>,FDefaultSetAllocator>
           *this,uint param_1,FFrontendQueryKey *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  FFrontendQueryKey *pFVar8;
  undefined1 *puVar9;
  uint *puVar10;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    pFVar8 = (FFrontendQueryKey *)(*(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x50);
    bVar3 = Metasound::operator==(pFVar8,param_2);
    if (bVar3) break;
    uVar6 = (uint)pFVar8[2].Key._padding_;
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14ae5558c;
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
LAB_14ae5558c:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x50;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x4c) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar10 = *(uint *)(lVar7 + 0x48);
      TSparseArray<TSparseSetElement<TTuple<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + 0x48 + (longlong)(int)uVar1 * 0x50);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<Metasound::FFrontendQueryKey> @ 14ae55640

int __thiscall
TSet<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RemoveImpl<Metasound::FFrontendQueryKey>
          (TSet<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FFrontendQueryKey *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  FFrontendQueryKey *pFVar8;
  undefined1 *puVar9;
  uint *puVar10;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    pFVar8 = (FFrontendQueryKey *)(*(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x38);
    bVar3 = Metasound::operator==(pFVar8,param_2);
    if (bVar3) break;
    uVar6 = *(uint *)&pFVar8[1].Key.TypeIndex;
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14ae55728;
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
LAB_14ae55728:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x38;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x34) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar10 = *(uint *)(lVar7 + 0x30);
      TSparseArray<TSparseSetElement<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + 0x30 + (longlong)(int)uVar1 * 0x38);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<Metasound::Frontend::FGraphClassRegistryKey> @ 14ae557d0

int __thiscall
TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
::RemoveImpl<Metasound::Frontend::FGraphClassRegistryKey>
          (TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,FGraphClassRegistryKey *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar9 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while ((((((lVar7 = (longlong)(int)uVar9 * 0x50,
             *(EMetasoundFrontendClassType *)(lVar7 + lVar2) != (param_2->NodeKey).Type ||
             (*(FName *)(lVar7 + 4 + lVar2) != (param_2->NodeKey).ClassName.Namespace)) ||
            (*(FName *)(lVar7 + 0xc + lVar2) != (param_2->NodeKey).ClassName.Name)) ||
           ((*(FName *)(lVar7 + 0x14 + lVar2) != (param_2->NodeKey).ClassName.Variant ||
            (*(int *)(lVar7 + 0x1c + lVar2) != (param_2->NodeKey).Version.Major)))) ||
          ((*(int *)(lVar7 + 0x20 + lVar2) != (param_2->NodeKey).Version.Minor ||
           ((*(FName *)(lVar7 + 0x24 + lVar2) != (param_2->AssetPath).PackageName ||
            (*(FName *)(lVar7 + 0x2c + lVar2) != (param_2->AssetPath).AssetName)))))) ||
         (*(uint *)(lVar7 + 0x34 + lVar2) != param_2->ObjectID))) {
    uVar9 = *(uint *)(lVar7 + 0x48 + lVar2);
    if (uVar9 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) != 0) goto LAB_14ae55906;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14ae55906:
  FVar6 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar7 + 0x4c) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar9) {
      *puVar8 = *(uint *)(lVar7 + 0x48);
      TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar9,1);
      TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar9,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x48 + (longlong)(int)uVar1 * 0x50);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<FMetasoundFrontendClassName> @ 14ae559c0

int __thiscall
TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
::RemoveImpl<FMetasoundFrontendClassName>
          (TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
           *this,uint param_1,FMetasoundFrontendClassName *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FName *pFVar7;
  ForElementType<FSetElementId> FVar8;
  undefined1 *puVar9;
  uint *puVar10;
  longlong lVar11;
  ForElementType<FSetElementId> FVar12;
  FName *pFVar13;
  
  iVar5 = 0;
  FVar12 = (this->Hash).SecondaryData;
  lVar11 = (longlong)(int)(this->HashSize - 1U & param_1);
  if (FVar12 == (ForElementType<FSetElementId>)0x0) {
    FVar12 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar1 = *(uint *)((longlong)FVar12 + lVar11 * 4);
  pFVar13 = (FName *)((longlong)FVar12 + lVar11 * 4);
  do {
    if (uVar1 == 0xffffffff) {
      return iVar5;
    }
    pFVar7 = (FName *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x28);
    if (((*pFVar7 == param_2->Namespace) && (pFVar7[1] == param_2->Name)) &&
       (pFVar7[2] == param_2->Variant)) {
      if (((int)uVar1 < 0) || (*(int *)&(this->Elements).field_0x28 <= (int)uVar1)) {
LAB_14ae55ab3:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
      }
      else {
        if ((*(int *)&(this->Elements).field_0x28 <= (int)uVar1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
        puVar2 = *(undefined1 **)&(this->Elements).field_0x20;
        puVar9 = &(this->Elements).field_0x10;
        if (puVar2 != (undefined1 *)0x0) {
          puVar9 = puVar2;
        }
        uVar6 = uVar1;
        if ((int)uVar1 < 0) {
          uVar6 = uVar1 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0)
        goto LAB_14ae55ab3;
      }
      FVar12 = (this->Hash).SecondaryData;
      lVar11 = *(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x28;
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar12 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = FVar12;
      }
      puVar10 = (uint *)((longlong)FVar8 + (longlong)*(int *)(lVar11 + 0x24) * 4);
      while( true ) {
        uVar6 = *puVar10;
        if ((uVar6 == 0xffffffff) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextElementIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2b5,L"Corrupt hash"), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
        if (uVar6 == uVar1) break;
        puVar10 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar6 * 0x28 + 0x20);
      }
      *puVar10 = *(uint *)(lVar11 + 0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar1,1);
      iVar5 = iVar5 + 1;
    }
    else {
      pFVar13 = pFVar7 + 4;
    }
    uVar1 = (pFVar13->ComparisonIndex).Value;
  } while( true );
}

// RemoveImpl<Metasound::Frontend::FNodeClassRegistryKey> @ 14ae55b90

int __thiscall
TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RemoveImpl<Metasound::Frontend::FNodeClassRegistryKey>
          (TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FNodeClassRegistryKey *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar9 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while (((((lVar7 = (longlong)(int)uVar9 * 0x40,
            *(EMetasoundFrontendClassType *)(lVar7 + lVar2) != param_2->Type ||
            (*(FName *)(lVar7 + 4 + lVar2) != (param_2->ClassName).Namespace)) ||
           (*(FName *)(lVar7 + 0xc + lVar2) != (param_2->ClassName).Name)) ||
          ((*(FName *)(lVar7 + 0x14 + lVar2) != (param_2->ClassName).Variant ||
           (*(int *)(lVar7 + 0x1c + lVar2) != (param_2->Version).Major)))) ||
         (*(int *)(lVar7 + 0x20 + lVar2) != (param_2->Version).Minor))) {
    uVar9 = *(uint *)(lVar7 + 0x38 + lVar2);
    if (uVar9 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) != 0) goto LAB_14ae55ca2;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14ae55ca2:
  FVar6 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar7 + 0x3c) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar9) {
      *puVar8 = *(uint *)(lVar7 + 0x38);
      TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar9,1);
      TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar9,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x38 + (longlong)(int)uVar1 * 0x40);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<Metasound::Frontend::FNodeClassRegistryKey> @ 14ae55d60

int __thiscall
TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
::RemoveImpl<Metasound::Frontend::FNodeClassRegistryKey>
          (TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,FNodeClassRegistryKey *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar9 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while (((((lVar7 = (longlong)(int)uVar9 * 0x40,
            *(EMetasoundFrontendClassType *)(lVar7 + lVar2) != param_2->Type ||
            (*(FName *)(lVar7 + 4 + lVar2) != (param_2->ClassName).Namespace)) ||
           (*(FName *)(lVar7 + 0xc + lVar2) != (param_2->ClassName).Name)) ||
          ((*(FName *)(lVar7 + 0x14 + lVar2) != (param_2->ClassName).Variant ||
           (*(int *)(lVar7 + 0x1c + lVar2) != (param_2->Version).Major)))) ||
         (*(int *)(lVar7 + 0x20 + lVar2) != (param_2->Version).Minor))) {
    uVar9 = *(uint *)(lVar7 + 0x38 + lVar2);
    if (uVar9 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) != 0) goto LAB_14ae55e72;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14ae55e72:
  FVar6 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar7 + 0x3c) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar9) {
      *puVar8 = *(uint *)(lVar7 + 0x38);
      TSparseArray<TSparseSetElement<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar9,1);
      TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar9,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x38 + (longlong)(int)uVar1 * 0x40);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator> @ 14ae57600

TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
::
TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
          (TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,0);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// Rehash @ 14ae820e0

void __thiscall
TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae821bc;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae821bc:
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
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae822a0

void __thiscall
TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ForElementType<FSetElementId> FVar9;
  uint *puVar10;
  undefined8 *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ae82377;
        uVar5 = puVar10[lVar7 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14ae82377:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar11 = (undefined8 *)
                  ((longlong)local_40.CurrentBitIndex * 0x98 + *(longlong *)&this->Elements);
        uVar3 = *puVar11;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        uVar3 = puVar11[1];
        uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U &
                (uVar6 + 0x9e3779b9 + (int)((ulonglong)uVar3 >> 0x20) + uVar5 * 0x40 + (uVar5 >> 2)
                ^ uVar5);
        *(uint *)((longlong)puVar11 + 0x94) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar11 + 0x12) = *(undefined4 *)((longlong)FVar9 + uVar8 * 4);
        *(int *)((longlong)FVar9 + uVar8 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae82490

void __thiscall
TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ForElementType<FSetElementId> FVar9;
  uint *puVar10;
  undefined8 *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ae82567;
        uVar5 = puVar10[lVar7 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14ae82567:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar11 = (undefined8 *)
                  ((longlong)local_40.CurrentBitIndex * 0x38 + *(longlong *)&this->Elements);
        uVar3 = *puVar11;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        uVar3 = puVar11[1];
        uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U &
                (uVar6 + 0x9e3779b9 + (int)((ulonglong)uVar3 >> 0x20) + uVar5 * 0x40 + (uVar5 >> 2)
                ^ uVar5);
        *(uint *)((longlong)puVar11 + 0x34) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar11 + 6) = *(undefined4 *)((longlong)FVar9 + uVar8 * 4);
        *(int *)((longlong)FVar9 + uVar8 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae82670

void __thiscall
TSet<TTuple<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FConverterNodeClassRegistryKey,Metasound::Frontend::FConverterNodeClassRegistryValue,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  FConverterNodeClassRegistryKey *pFVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar5 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae82747;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14ae82747:
        iStack_44 = iVar3;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        iVar3 = local_30.CurrentBitIndex;
        pFVar2 = (FConverterNodeClassRegistryKey *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        uVar5 = Metasound::Frontend::GetTypeHash(pFVar2);
        uVar5 = *piVar1 - 1U & uVar5;
        pFVar2[2].FromDataType.Number = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        pFVar2[2].FromDataType.ComparisonIndex.Value = *(uint *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar3;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae82800

void __thiscall
TSet<TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae828dc;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae828dc:
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
        lVar4 = (longlong)local_30.CurrentBitIndex * 0x88 + *(longlong *)&this->Elements;
        uVar7 = *piVar1 - 1U & *(uint *)(lVar4 + 0x18);
        *(uint *)(lVar4 + 0x84) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0x80) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae82990

void __thiscall
TSet<TTuple<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae82a6c;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae82a6c:
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
        lVar4 = (longlong)local_30.CurrentBitIndex * 0x50 + *(longlong *)&this->Elements;
        uVar7 = *piVar1 - 1U & *(uint *)(lVar4 + 0x18);
        *(uint *)(lVar4 + 0x4c) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae82b30

void __thiscall
TSet<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae82c0c;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae82c0c:
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
        lVar4 = (longlong)local_30.CurrentBitIndex * 0x38 + *(longlong *)&this->Elements;
        uVar7 = *piVar1 - 1U & *(uint *)(lVar4 + 0x18);
        *(uint *)(lVar4 + 0x34) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae82cc0

void __thiscall
TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FGraphClassRegistryKey,TSharedPtr<Metasound::FGraph_const_,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FGraphClassRegistryKey *pFVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae82d97;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae82d97:
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
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FGraphClassRegistryKey *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x50);
        uVar4 = Metasound::Frontend::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[1].NodeKey.ClassName.Variant.ComparisonIndex.Value = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[1].NodeKey.ClassName.Name.Number = *(uint *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae82e50

void __thiscall
TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,Metasound::Frontend::INodeTemplate_const_*,1>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  FMetasoundFrontendClassName *pFVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar5 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae82f27;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14ae82f27:
        iStack_44 = iVar3;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        iVar3 = local_30.CurrentBitIndex;
        pFVar2 = (FMetasoundFrontendClassName *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        uVar5 = ::GetTypeHash(pFVar2);
        uVar5 = *piVar1 - 1U & uVar5;
        pFVar2[1].Name.Number = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        pFVar2[1].Name.ComparisonIndex.Value = *(uint *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar3;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae82fe0

void __thiscall
TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FNodeClassRegistryKey *pFVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae830b7;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae830b7:
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
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FNodeClassRegistryKey *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x40);
        uVar4 = Metasound::Frontend::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[1].ClassName.Variant.Number = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[1].ClassName.Variant.ComparisonIndex.Value = *(uint *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae83170

void __thiscall
TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeClassRegistryEntry,1>,1>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FNodeClassRegistryKey *pFVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae83247;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae83247:
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
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FNodeClassRegistryKey *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x40);
        uVar4 = Metasound::Frontend::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[1].ClassName.Variant.Number = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[1].ClassName.Variant.ComparisonIndex.Value = *(uint *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae83300

void __thiscall
TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TSharedRef<Metasound::Frontend::INodeTemplateRegistryEntry,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FNodeClassRegistryKey *pFVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae833d7;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae833d7:
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
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FNodeClassRegistryKey *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x40);
        uVar4 = Metasound::Frontend::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[1].ClassName.Variant.Number = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[1].ClassName.Variant.ComparisonIndex.Value = *(uint *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae83490

void __thiscall
TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>_>,TDefaultMapHashableKeyFuncs<Metasound::Frontend::FNodeClassRegistryKey,TUniquePtr<Metasound::Frontend::INodeTemplate_const_,TDefaultDelete<Metasound::Frontend::INodeTemplate_const_>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FNodeClassRegistryKey *pFVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae83567;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae83567:
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
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FNodeClassRegistryKey *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x38);
        uVar4 = Metasound::Frontend::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[1].ClassName.Name.Number = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[1].ClassName.Name.ComparisonIndex.Value = *(uint *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ae83620

void __thiscall
TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
::Rehash(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ae836fc;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ae836fc:
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
        uVar7 = *piVar1 - 1U &
                *(uint *)(*(longlong *)&this->Elements + 0x18 +
                         (longlong)local_30.CurrentBitIndex * 0x28);
        lVar4 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28;
        *(uint *)(lVar4 + 0x24) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Reset @ 14ae88870

void __thiscall
TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
::Reset(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 14ae8d100

bool __thiscall
TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>,TDefaultMapHashableKeyFuncs<void_const_*,TSharedPtr<Audio::IProxyData,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<void_const_*,TSharedPtr<Audio::IProxyData,1>_>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  ForElementType<FSetElementId> FVar11;
  void *_Dst;
  int iVar12;
  uint uVar13;
  bool bVar14;
  
  iVar12 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar3 != 1) && (iVar12 != iVar3)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar12 * 0x20 + lVar4) == *(longlong *)param_2) {
          bVar14 = iVar12 != -1;
          if (bVar14) {
            _Dst = (void *)((longlong)iVar12 * 0x20 + lVar4);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,param_2,0x18);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar4 = *(longlong *)&this->Elements;
            bVar6 = (byte)iVar3 & 0x1f;
            uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar2) & uVar13) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x20 + lVar4) = iVar3;
            }
            uVar9 = 0xffffffff;
            *(undefined4 *)((longlong)iVar3 * 0x20 + lVar4) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)((longlong)iVar3 * 0x20 + 4 + lVar4) = uVar9;
            puVar10 = &(this->Elements).field_0x34;
            *(int *)puVar10 = *(int *)puVar10 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + lVar4);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// UnhashElements @ 14ae8d330

void __thiscall
TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
::UnhashElements(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14ae8d42b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14ae8d42b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ae8d520;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14ae8d520:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x24 + (longlong)local_60.CurrentBitIndex * 0x28) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// Union @ 14ae8d5c0

TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
* __thiscall
TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
::Union(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
        *this,TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
              *__return_storage_ptr__,
       TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
       *param_1)

{
  ForElementType<FSetElementId> FVar1;
  longlong lVar2;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_res18;
  uint local_98;
  uint uStack_94;
  undefined8 uStack_90;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  uVar12 = 0;
  uVar6 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  uVar5 = 1;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar11 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar13 = ((*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34) -
           *(int *)&(this->Elements).field_0x34) + *(int *)&(this->Elements).field_0x8;
  uVar14 = 1;
  local_res18 = param_1;
  if (uVar13 == 0) goto LAB_14ae8d81a;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar13);
  if (3 < uVar13) {
    uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar14 <= __return_storage_ptr__->HashSize))
  goto LAB_14ae8d81a;
  __return_storage_ptr__->HashSize = uVar14;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar13 = 0;
        goto LAB_14ae8d69c;
      }
    }
    else {
LAB_14ae8d69c:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
      uVar10 = uVar12;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar1;
        }
        uVar7 = uVar10 & (longlong)(int)uVar14 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar9 + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar13 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    TStack_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->Elements).field_0x10;
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    uVar10 = uVar12;
    if (uVar13 != 0) {
      puVar19 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)TStack_60.Array;
      }
      uVar14 = *puVar19;
      uVar16 = uVar12;
      while (uVar14 == 0) {
        uStack_80 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_80;
        iVar8 = (int)uVar10;
        local_98 = iVar8 + 1;
        uVar10 = (ulonglong)local_98;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_98)
        goto LAB_14ae8d789;
        uVar14 = puVar19[(longlong)iVar8 + 1];
      }
      uStack_94 = -uVar14 & uVar14;
      uVar10 = (ulonglong)uStack_94 * 2 + 1;
      lVar2 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_84 = (int)lVar2 + -1 + uStack_80;
      uVar10 = (ulonglong)uStack_84;
      if ((int)uVar13 < (int)uStack_84) {
LAB_14ae8d789:
        uVar10 = (ulonglong)uVar13;
        uStack_84 = uVar13;
      }
    }
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60.CurrentBitIndex = uStack_84;
    TStack_60._28_4_ = uStack_7c;
    TStack_60.BaseBitIndex = uStack_80;
    TStack_60._padding_._0_4_ = local_98;
    TStack_60._padding_._4_4_ = uStack_94;
    if ((int)uVar10 < (int)uVar13) {
      do {
        iVar8 = (int)uVar10;
        uVar13 = __return_storage_ptr__->HashSize - 1U &
                 *(uint *)(*(longlong *)&__return_storage_ptr__->Elements + 0x18 +
                          (longlong)iVar8 * 0x28);
        lVar2 = *(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar8 * 0x28;
        *(uint *)(lVar2 + 0x24) = uVar13;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar1;
        }
        uVar10 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)((longlong)FVar9 + uVar10 * 4);
        *(int *)((longlong)FVar9 + uVar10 * 4) = iVar8;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
        uVar10 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
LAB_14ae8d81a:
  uVar13 = *(uint *)&(this->Elements).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  uVar17 = 0;
  uVar10 = uVar12;
  uVar14 = 1;
  uVar15 = uVar17;
  uVar18 = uVar17;
  if (uVar13 != 0) {
    puVar19 = *(uint **)&(this->Elements).field_0x20;
    uVar10 = (ulonglong)uVar13;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_60.Array;
    }
    uVar14 = *puVar19;
    uVar16 = uVar12;
    uVar7 = uVar12;
    uVar18 = uVar6;
    uVar15 = uVar6;
    while (uVar14 == 0) {
      iVar8 = (int)uVar16;
      uVar18 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uVar18;
      uVar15 = iVar8 + 1;
      uVar16 = (ulonglong)uVar15;
      uVar14 = 1;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_14ae8d89d;
      uVar14 = puVar19[(longlong)iVar8 + 1];
    }
    uVar14 = -uVar14 & uVar14;
    uVar10 = (ulonglong)uVar14 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar4 = (uVar18 - 1) + (int)lVar2;
    if ((int)uVar13 < (int)uVar4) {
      uVar4 = uVar13;
    }
    uVar10 = (ulonglong)uVar4;
  }
LAB_14ae8d89d:
  TStack_60.CurrentBitIndex = (int)uVar10;
  uStack_90 = CONCAT44(uVar14,uVar15);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = uStack_90;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = uVar18;
  if (TStack_60.CurrentBitIndex < (int)uVar13) {
    do {
      Emplace<Metasound::FFrontendQueryKey_const_&>
                (__return_storage_ptr__,(FFrontendQueryKey *)&stack0x00000008,
                 (bool *)(*(longlong *)&this->Elements + (longlong)(int)uVar10 * 0x28));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar10 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  pTVar3 = local_res18;
  uVar13 = *(uint *)&(local_res18->Elements).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(local_res18->Elements).field_0x10;
  uVar10 = uVar12;
  if (uVar13 != 0) {
    puVar19 = *(uint **)&(local_res18->Elements).field_0x20;
    uVar10 = (ulonglong)uVar13;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_60.Array;
    }
    uVar14 = *puVar19;
    uVar16 = uVar12;
    uVar17 = uVar6;
    uVar11 = uVar6;
    while (uVar14 == 0) {
      iVar8 = (int)uVar12;
      uVar17 = (int)uVar16 + 0x20;
      uVar16 = (ulonglong)uVar17;
      uVar11 = iVar8 + 1;
      uVar12 = (ulonglong)uVar11;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
      goto LAB_14ae8d999;
      uVar14 = puVar19[(longlong)iVar8 + 1];
    }
    uVar5 = -uVar14 & uVar14;
    uVar12 = (ulonglong)uVar5 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar6 = (uVar17 - 1) + (int)lVar2;
    if ((int)uVar13 < (int)uVar6) {
      uVar6 = uVar13;
    }
    uVar10 = (ulonglong)uVar6;
  }
LAB_14ae8d999:
  TStack_60.CurrentBitIndex = (int)uVar10;
  uStack_90 = CONCAT44(uVar5,uVar11);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = uStack_90;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = uVar17;
  if (TStack_60.CurrentBitIndex < (int)uVar13) {
    do {
      Emplace<Metasound::FFrontendQueryKey_const_&>
                (__return_storage_ptr__,(FFrontendQueryKey *)&local_res18,
                 (bool *)(*(longlong *)&pTVar3->Elements + (longlong)(int)uVar10 * 0x28));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar10 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Emplace<TPairInitializer<Metasound::FAddressRouter::FTransmissionAddressKey_&&,TSharedRef<Metasound::IDataChannel,1>_&&>_> @ 14aefbc80

FSetElementId __thiscall
TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<Metasound::FAddressRouter::FTransmissionAddressKey_&&,TSharedRef<Metasound::IDataChannel,1>_&&>_>
          (TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<Metasound::FAddressRouter::FTransmissionAddressKey_&&,TSharedRef<Metasound::IDataChannel,1>_&&>
                 *param_1,bool *param_2)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  char *in_R9;
  int iVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer != (longlong *)0x0) {
    lVar3 = *(longlong *)param_2;
    plVar8 = *(longlong **)(param_2 + 8);
    *(undefined ***)local_48.Pointer = &___7FTransmissionAddressKey_FAddressRouter_Metasound__6B_;
    (**(code **)(**(longlong **)(lVar3 + 8) + 0x18))
              (*(longlong **)(lVar3 + 8),(longlong *)((longlong)local_48.Pointer + 8));
    *(longlong *)((longlong)local_48.Pointer + 0x10) = *plVar8;
    lVar3 = plVar8[1];
    *(longlong *)((longlong)local_48.Pointer + 0x18) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x20) = 0xffffffff;
  }
  uVar7 = (**(code **)(*(longlong *)local_48.Pointer + 0x28))(local_48.Pointer);
  iVar1 = *(int *)&(this->Elements).field_0x8;
  bVar13 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if ((iVar1 - iVar6 != 1) && (iVar1 != iVar6)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & uVar7) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 0x20 + (longlong)iVar1 * 0x28))
    {
      plVar8 = (longlong *)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x28);
      cVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,local_48.Pointer);
      if (cVar5 != '\0') {
        bVar13 = iVar1 != -1;
        if (bVar13) {
          _Dst = (void *)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x28);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)
                      (*(longlong *)&this->Elements + 0x18 + (longlong)iVar1 * 0x28));
          puVar4 = *(undefined8 **)((longlong)_Dst + 8);
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
          }
          memmove(_Dst,local_48.Pointer,0x20);
          TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,local_48.Index,1);
          local_48.Index = iVar1;
        }
        goto LAB_14aefbded;
      }
    }
    bVar13 = false;
  }
LAB_14aefbded:
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)local_48.Pointer + 0x24) = uVar7;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_48.Pointer + 0x20) =
           *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<unsigned_int_const_&,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>_&&>_> @ 14aefbf00

FSetElementId __thiscall
TSet<TTuple<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<unsigned_int_const_&,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>_&&>_>
          (TSet<TTuple<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<unsigned_int_const_&,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  uint uVar11;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>_>_>
       *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar4;
    *puVar4 = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  uVar11 = *(uint *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar5 = TryReplaceExisting(this,uVar11,local_38.Pointer,local_res8,in_R9);
  if (!bVar5) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar11 = this->HashSize - 1U & uVar11;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar11;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// RemoveImpl<Metasound::FAddressRouter::FTransmissionAddressKey> @ 14af21820

int __thiscall
TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
::RemoveImpl<Metasound::FAddressRouter::FTransmissionAddressKey>
          (TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,FTransmissionAddressKey *param_2)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  uint *puVar11;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    plVar9 = (longlong *)(*(longlong *)&this->Elements + (longlong)(int)uVar7 * 0x28);
    cVar3 = (**(code **)(*plVar9 + 0x30))(plVar9,param_2);
    if (cVar3 != '\0') break;
    uVar7 = *(uint *)(plVar9 + 4);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14af21915;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
LAB_14af21915:
  FVar6 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + (longlong)(int)uVar7 * 0x28;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar11 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar8 + 0x24) * 4);
  while( true ) {
    uVar1 = *puVar11;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar11 = *(uint *)(lVar8 + 0x20);
      TSparseArray<TSparseSetElement<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar11 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x28 + 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar5 = (*pcVar2)();
  return iVar5;
}

// operator= @ 14af43120

TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
                  *param_1)

{
  uint uVar1;
  ForElementType<FSetElementId> _Dst;
  ForElementType<FSetElementId> _Src;
  uint uVar2;
  
  if (this == param_1) {
    return this;
  }
  uVar1 = param_1->HashSize;
  uVar2 = uVar1;
  if (uVar1 < 2) {
    if ((this->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14af4317b;
    uVar2 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(this->Hash).SecondaryData,0,uVar2,4);
LAB_14af4317b:
  _Src = (param_1->Hash).SecondaryData;
  _Dst = (this->Hash).SecondaryData;
  if (uVar1 != 0) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      _Src = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    if (_Dst == (ForElementType<FSetElementId>)0x0) {
      _Dst = (ForElementType<FSetElementId>)&this->Hash;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)(int)uVar1 << 2);
  }
  this->HashSize = uVar1;
  TSparseArray<TSparseSetElement<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=(&this->Elements,&param_1->Elements);
  return this;
}

// Rehash @ 14afb4c90

void __thiscall
TSet<TTuple<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14afb4d6c;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14afb4d6c:
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
        uVar7 = *piVar1 - 1U &
                *(uint *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        lVar4 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        *(uint *)(lVar4 + 0x14) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14afb4e30

void __thiscall
TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar4 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14afb4f07;
        uVar4 = puVar8[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14afb4f07:
        iStack_44 = iVar2;
      }
    }
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        lVar5 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28;
        uVar4 = (**(code **)(*(longlong *)
                              (*(longlong *)&this->Elements +
                              (longlong)local_30.CurrentBitIndex * 0x28) + 0x28))(lVar5);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)(lVar5 + 0x24) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// TryReplaceExisting @ 14afc0210

bool __thiscall
TSet<TTuple<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<unsigned_int,TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  iVar14 = *(int *)&(this->Elements).field_0x8;
  bVar16 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar14 - iVar4 != 1) && (iVar14 != iVar4)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar14 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar14 != -1) {
      lVar5 = *(longlong *)&this->Elements;
      do {
        if (*(int *)(lVar5 + (longlong)iVar14 * 0x18) == *(int *)param_2) {
          bVar16 = iVar14 != -1;
          if (bVar16) {
            pvVar6 = *(void **)(lVar5 + 8 + (longlong)iVar14 * 0x18);
            if (pvVar6 != (void *)0x0) {
              if (*(void **)((longlong)pvVar6 + 8) != (void *)0x0) {
                FMemory::Free(*(void **)((longlong)pvVar6 + 8));
              }
              ::operator_delete(pvVar6,0x20);
            }
            memmove((void *)(lVar5 + (longlong)iVar14 * 0x18),param_2,0x10);
            iVar4 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar5 = *(longlong *)&this->Elements;
            bVar8 = (byte)iVar4 & 0x1f;
            uVar15 = 1 << bVar8 | 1U >> 0x20 - bVar8;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            if (((*(uint *)(puVar12 + lVar3) & uVar15) == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x18) = iVar4;
            }
            puVar2 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x18);
            uVar11 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar11;
            puVar12 = &(this->Elements).field_0x34;
            *(int *)puVar12 = *(int *)puVar12 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar4;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            *(uint *)(puVar12 + lVar3) = *(uint *)(puVar12 + lVar3) & ~uVar15;
            *param_3 = iVar14;
          }
          break;
        }
        iVar14 = *(int *)(lVar5 + 0x10 + (longlong)iVar14 * 0x18);
      } while (iVar14 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar16;
  }
  return bVar16;
}

