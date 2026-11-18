// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FMaterialResourceMemoryWriter @ 147f64b90

FMaterialResourceMemoryWriter * __thiscall
FMaterialResourceMemoryWriter::FMaterialResourceMemoryWriter
          (FMaterialResourceMemoryWriter *this,FArchive *param_1)

{
  byte *pbVar1;
  byte bVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  FMaterialResourceMemoryWriter *pFVar8;
  FName local_res8;
  
  pFVar7 = ::FName::FName(&local_res8,L"FShaderMapMemoryWriter");
  bVar2 = param_1->field_0x29;
  FVar3 = *pFVar7;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)&this->Bytes;
  this->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)FVar3;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,bVar2 & 1);
  this->_padding_ = (longlong)&___7FMaterialResourceMemoryWriter__6B_;
  (this->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bytes).ArrayNum = 0;
  (this->Bytes).ArrayMax = 0;
  (this->Locs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Locs).ArrayNum = 0;
  (this->Locs).ArrayMax = 0;
  *(undefined8 *)&this->Name2Indices = 0;
  *(undefined8 *)&(this->Name2Indices).field_0x8 = 0;
  *(undefined8 *)&(this->Name2Indices).field_0x20 = 0;
  *(undefined4 *)&(this->Name2Indices).field_0x28 = 0;
  *(undefined4 *)&(this->Name2Indices).field_0x2c = 0x80;
  *(undefined4 *)&(this->Name2Indices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Name2Indices).field_0x34 = 0;
  *(undefined8 *)&(this->Name2Indices).field_0x40 = 0;
  *(undefined4 *)&(this->Name2Indices).field_0x48 = 0;
  this->ParentAr = param_1;
  if ((param_1->field_0x28 & 4) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsSaving()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x1507,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FMaterialResourceMemoryWriter *)(*pcVar5)();
      return pFVar8;
    }
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 ^ (*(byte *)((longlong)&this->_padding_ + 2) ^ param_1->field_0x2a) & 1;
  lVar4 = *(longlong *)&param_1->field_0x68;
  if (lVar4 == 0) {
    if (this->_padding_ != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!(InSavePackageData == nullptr && SavePackageData)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\Archive.h"
                         ,0x28e,L"Can\'t turn off cooking once you turn it on!");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FMaterialResourceMemoryWriter *)(*pcVar5)();
        return pFVar8;
      }
    }
  }
  else {
    if (((this->_padding_ & 1) != 0) || ((this->_padding_ & 4) == 0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLoading() && !IsTransacting() && IsSaving()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\Archive.h"
                         ,0x292,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FMaterialResourceMemoryWriter *)(*pcVar5)();
        return pFVar8;
      }
    }
    this->_padding_ = lVar4;
  }
  return this;
}

// ~FMaterialResourceMemoryWriter @ 147f68970

void __thiscall
FMaterialResourceMemoryWriter::~FMaterialResourceMemoryWriter(FMaterialResourceMemoryWriter *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FMaterialResourceMemoryWriter__6B_;
  SerializeToParentArchive(this);
  *(undefined4 *)&(this->Name2Indices).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Name2Indices).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNameEntryId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNameEntryId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNameEntryId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Name2Indices);
  pFVar2 = (this->Locs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Bytes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FArchive::~FArchive((FArchive *)this);
  return;
}

// operator<< @ 147f6a470

FArchive * __thiscall
FMaterialResourceMemoryWriter::operator<<(FMaterialResourceMemoryWriter *this,FName *param_1)

{
  FNameEntryId FVar1;
  longlong *plVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [4];
  uint *local_38;
  uint *local_30;
  
  FVar1.Value = (param_1->ComparisonIndex).Value;
  uVar3 = ::GetTypeHash(FVar1);
  local_res8[0] = *(int *)&(this->Name2Indices).field_0x8 - *(int *)&(this->Name2Indices).field_0x34
  ;
  if (local_res8[0] != 0) {
    puVar6 = *(undefined1 **)&(this->Name2Indices).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Name2Indices).field_0x38;
    }
    uVar3 = *(uint *)(puVar6 + (ulonglong)(*(int *)&(this->Name2Indices).field_0x48 - 1U & uVar3) *
                               4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x10 + *(longlong *)&(this->Name2Indices).field_0x0
                         );
        if (*puVar5 == FVar1.Value) {
          puVar4 = puVar5 + 1;
          if (puVar5 == (uint *)0x0) {
            puVar4 = (uint *)0x0;
          }
          if (puVar4 != (uint *)0x0) {
            local_res8[0] = *puVar4;
            goto LAB_147f6a50b;
          }
          break;
        }
        uVar3 = puVar5[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  local_res18[0] = (param_1->ComparisonIndex).Value;
  local_38 = local_res18;
  local_30 = local_res8;
  TSet<TTuple<FNameEntryId,int>,TDefaultMapHashableKeyFuncs<FNameEntryId,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FNameEntryId_&&,int_const_&>_>
            ((TSet<TTuple<FNameEntryId,int>,TDefaultMapHashableKeyFuncs<FNameEntryId,int,0>,FDefaultSetAllocator>
              *)&this->Name2Indices,
             (TPairInitializer<FNameEntryId_&&,int_const_&> *)(local_res18 + 2),(bool *)&local_38);
LAB_147f6a50b:
  plVar2 = (longlong *)this->_padding_;
  local_res10[0] = param_1->Number;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = (longlong *)this->_padding_;
  if (*plVar2 + 4U <= (ulonglong)plVar2[1]) {
    *plVar2 = *plVar2 + 4;
    return (FArchive *)this;
  }
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res10,4);
    return (FArchive *)this;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res10);
  return (FArchive *)this;
}

// GetArchiveName @ 147f792b0

FString * __thiscall
FMaterialResourceMemoryWriter::GetArchiveName
          (FMaterialResourceMemoryWriter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FMaterialResourceMemoryWriter");
  return __return_storage_ptr__;
}

// GetCustomVersions @ 147f79640

FCustomVersionContainer * __thiscall
FMaterialResourceMemoryWriter::GetCustomVersions(FMaterialResourceMemoryWriter *this)

{
  FCustomVersionContainer *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147f7964a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FCustomVersionContainer *)(**(code **)(*(longlong *)this->ParentAr + 0x60))();
  return pFVar1;
}

// SerializeToParentArchive @ 147f87330

void __thiscall
FMaterialResourceMemoryWriter::SerializeToParentArchive(FMaterialResourceMemoryWriter *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  FArchive *this_00;
  code *pcVar4;
  TMap<FNameEntryId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNameEntryId,int,0>_>
  *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FNameEntry *this_01;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  ForAnyElementType local_e8;
  uint local_e0 [3];
  int local_d4;
  TMap<FNameEntryId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNameEntryId,int,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<FNameEntryId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNameEntryId,int,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  this_00 = this->ParentAr;
  if ((((this_00->field_0x28 & 4) == 0) ||
      (((this_00->field_0x2a ^ *(byte *)((longlong)&this->_padding_ + 2)) & 1) != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsSaving() && this->IsByteSwapping() == Ar.IsByteSwapping()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                         ,0x1527,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res18[0] =
       *(int *)&(this->Name2Indices).field_0x8 - *(int *)&(this->Name2Indices).field_0x34;
  local_e8.Data = (FScriptContainerElement *)0x0;
  iVar14 = 0;
  local_e0[1] = 0;
  if ((int)local_res18[0] < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res18[0]);
  }
  local_e0[0] = 0;
  if (local_res18[0] != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_res18[0],&local_e8,0,(int *)(local_e0 + 1));
  }
  uVar13 = local_res18[0];
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_res18[0],&local_e8,(int *)local_e0,(int *)(local_e0 + 1));
  DefaultConstructItems<FNameEntryId,int>(local_e8.Data + (longlong)iVar7 * 4,uVar13);
  puVar1 = &(this->Name2Indices).field_0x10;
  iVar7 = *(int *)&(this->Name2Indices).field_0x28;
  local_d0 = &this->Name2Indices;
  uStack_c4 = 1;
  local_b0 = 0;
  iStack_b4 = local_b0;
  if (iVar7 != 0) {
    puVar16 = *(uint **)&(this->Name2Indices).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    local_b0 = 0;
    iVar14 = 0;
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar14;
      local_b0 = local_b0 + 0x20;
      iVar14 = iVar14 + 1;
      iStack_b4 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147f874ae;
      uVar13 = puVar16[lVar9 + 1];
    }
    uStack_c4 = -uVar13 & uVar13;
    uVar10 = (ulonglong)uStack_c4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_e0[2] = (uint)lVar9;
    iStack_b4 = local_b0 + -1 + local_e0[2];
    if (iVar7 < iStack_b4) {
      iStack_b4 = iVar7;
    }
  }
LAB_147f874ae:
  uVar13 = *(uint *)&(this->Name2Indices).field_0x28;
  uStack_ac = local_54;
  iStack_a8 = *(int *)&(this->Name2Indices).field_0x8 - *(int *)&(this->Name2Indices).field_0x34;
  uVar17 = uVar13 & 0xffffffe0;
  uStack_b8 = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_c4,iVar14);
  TStack_98.CurrentBitIndex = iStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  iStack_c8 = iVar14;
  local_c0 = puVar1;
  local_a0 = local_d0;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar7 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = *(uint *)&(this->Name2Indices).field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(this->Name2Indices).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar17 = uVar17 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147f875bf;
      uVar13 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar10 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_d4 = (int)lVar9;
    uVar13 = local_d4 + -1 + uVar17;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_147f875bf:
  while( true ) {
    pTVar5 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FNameEntryId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_98.CurrentBitIndex == uVar13) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar5 == &this->Name2Indices)) break;
    lVar9 = *(longlong *)pTVar5;
    uVar17 = *(uint *)(lVar9 + 4 + (longlong)TStack_98.CurrentBitIndex * 0x10);
    uVar3 = *(undefined4 *)(lVar9 + (longlong)TStack_98.CurrentBitIndex * 0x10);
    uVar8 = 0;
    if ((int)uVar17 < (int)local_e0[0]) {
      uVar8 = ~uVar17 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)(local_e8.Data + (longlong)(int)uVar17 * 4) = uVar3;
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  puVar16 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar16 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,local_res18);
    }
  }
  else {
    local_res18[0] = *puVar16;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  uVar13 = local_e0[0];
  uVar10 = (ulonglong)(int)local_e0[0];
  pFVar2 = local_e8.Data + uVar10 * 4;
  FVar12.Data = local_e8.Data;
  while( true ) {
    if ((uint)uVar10 != uVar13) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FNameEntryId,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar12.Data == pFVar2) break;
    this_01 = ::FName::GetEntry((FNameEntryId)*(uint *)FVar12.Data);
    FNameEntry::Write(this_01,this_00);
    uVar10 = (ulonglong)local_e0[0];
    FVar12.Data = FVar12.Data + 4;
  }
  TArrayPrivateFriend::Serialize<FMaterialResourceLocOnDisk,TSizedDefaultAllocator<32>_>
            (this_00,&this->Locs);
  local_res20[0] = (this->Bytes).ArrayNum;
  puVar16 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar16 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,local_res20);
    }
  }
  else {
    local_res20[0] = *puVar16;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  lVar9 = (longlong)(int)local_res20[0];
  pcVar4 = *(code **)(*(longlong *)this_00 + 0x188);
  if (((this->Bytes).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (*pcVar4)(this_00,(this->Bytes).AllocatorInstance.Data,lVar9);
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return;
}

