// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 7

// operator<< @ 14322ba60

FArchive * __thiscall FManifestWriter::operator<<(FManifestWriter *this,FName *param_1)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  FName FVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int local_res8 [4];
  FName *local_28;
  int *local_20;
  
  FVar1 = *param_1;
  this_00 = &this->FNameIndexLookup;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  iVar7 = *(int *)&(this->FNameIndexLookup).field_0x8 - *(int *)&(this->FNameIndexLookup).field_0x34
  ;
  if (iVar7 != 0) {
    puVar6 = *(undefined1 **)&(this->FNameIndexLookup).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->FNameIndexLookup).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->FNameIndexLookup).field_0x48 - 1U &
                              FVar1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x14) == FVar1)
        goto LAB_14322bafe;
        iVar4 = *(int *)(*(longlong *)&this_00->field_0x0 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  local_20 = local_res8;
  local_res8[0] = iVar7;
  local_28 = param_1;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,int_const_&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,int_const_&> *)(local_res8 + 2),
             (bool *)&local_28);
LAB_14322bafe:
  puVar5 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::FindChecked((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                  *)this_00,*param_1);
  puVar2 = *(uint **)this->_padding_;
  if (puVar2 + 1 <= (uint *)((undefined8 *)this->_padding_)[1]) {
    *puVar5 = *puVar2;
    *(longlong *)this->_padding_ = *(longlong *)this->_padding_ + 4;
    return (FArchive *)this;
  }
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,puVar5,4);
    return (FArchive *)this;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)this,puVar5);
  return (FArchive *)this;
}

// Finalize @ 1432503d0

void __thiscall FManifestWriter::Finalize(FManifestWriter *this)

{
  undefined1 *puVar1;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  int local_res18;
  int local_res20;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_198;
  undefined8 local_188;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_118;
  undefined4 local_4c;
  
  local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.ArrayNum = 0;
  local_198.ArrayMax = 0;
  local_188 = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_118);
  local_118._padding_ = 0;
  local_118._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_118.Bytes = &local_198;
  local_118.ArchiveName.ComparisonIndex.Value = 0;
  local_118.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_118,true);
  (**(code **)(local_118._padding_ + 0x108))(&local_118,0);
  local_118._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_res10[0] =
       *(int *)&(this->FNameIndexLookup).field_0x8 - *(int *)&(this->FNameIndexLookup).field_0x34;
  if ((0x32 < (int)local_res10[0]) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumNames <= 50",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Data\\ManifestUObject.cpp"
                          ,0xfe,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (*(uint **)(local_118._padding_ + 8) < *(uint **)local_118._padding_ + 1) {
    if ((local_118._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_118._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_118,local_res10,4);
      }
      else {
        (**(code **)(local_118._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_118,local_res10);
    }
  }
  else {
    local_res10[0] = **(uint **)local_118._padding_;
    *(longlong *)local_118._padding_ = *(longlong *)local_118._padding_ + 4;
  }
  puVar1 = &(this->FNameIndexLookup).field_0x10;
  iStack_178 = 0;
  iVar5 = *(int *)&(this->FNameIndexLookup).field_0x28;
  pTVar2 = &this->FNameIndexLookup;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar5 != 0) {
    puVar16 = *(uint **)&(this->FNameIndexLookup).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    local_160 = 0;
    iStack_178 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_178;
      local_160 = local_160 + 0x20;
      iStack_178 = iStack_178 + 1;
      iStack_164 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_1432505a0;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_174 = -uVar14 & uVar14;
    uVar4 = (ulonglong)uStack_174 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_164 = local_160 + -1 + local_res18;
    if (iVar5 < iStack_164) {
      iStack_164 = iVar5;
    }
  }
LAB_1432505a0:
  uVar14 = *(uint *)&(this->FNameIndexLookup).field_0x28;
  uStack_15c = local_4c;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_158 = *(int *)&(this->FNameIndexLookup).field_0x8 -
               *(int *)&(this->FNameIndexLookup).field_0x34;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_148._28_4_ = local_4c;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = pTVar2;
  local_170 = puVar1;
  local_150 = pTVar2;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar5 < (int)uVar14)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->FNameIndexLookup).field_0x28;
  if (uVar14 != uVar6) {
    puVar15 = *(undefined1 **)&(this->FNameIndexLookup).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1432506b0;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar14 = local_res20 + -1 + uVar13;
    if ((int)uVar6 < (int)uVar14) {
      uVar14 = uVar6;
    }
  }
LAB_1432506b0:
  while( true ) {
    pTVar9 = local_150;
    if (*(int *)&local_150->field_0x8 - *(int *)&local_150->field_0x34 != (int)uStack_128) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_148.CurrentBitIndex == uVar14) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    break;
    puVar16 = (uint *)(*(longlong *)pTVar9 + (longlong)TStack_148.CurrentBitIndex * 0x14 + 8);
    (**(code **)(local_118._padding_ + 0x178))(&local_118);
    if (*(uint **)(local_118._padding_ + 8) < *(uint **)local_118._padding_ + 1) {
      if ((local_118._padding_ & 0x10000U) == 0) {
        (**(code **)(local_118._padding_ + 0x188))(&local_118,puVar16,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_118,puVar16);
      }
    }
    else {
      *puVar16 = **(uint **)local_118._padding_;
      *(longlong *)local_118._padding_ = *(longlong *)local_118._padding_ + 4;
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  }
  pTVar3 = &this->Bytes;
  if ((&local_198 == pTVar3) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar5 = (this->Bytes).ArrayNum;
  if (iVar5 != 0) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar5,&local_198.AllocatorInstance,&local_198.ArrayNum,
                        &local_198.ArrayMax);
    memcpy(local_198.AllocatorInstance.Data + iVar12,(pTVar3->AllocatorInstance).Data,
           (longlong)iVar5);
  }
  if (pTVar3 != &local_198) {
    pFVar7 = (pTVar3->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar3->AllocatorInstance).Data = local_198.AllocatorInstance.Data;
    (this->Bytes).ArrayNum = local_198.ArrayNum;
    (this->Bytes).ArrayMax = local_198.ArrayMax;
    local_198.ArrayNum = 0;
    local_198.ArrayMax = 0;
    local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  FArchive::~FArchive((FArchive *)&local_118);
  if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AllocatorInstance.Data);
  }
  return;
}

// GetArchiveName @ 143254280

FString * __thiscall
FManifestWriter::GetArchiveName(FManifestWriter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FManifestWriter");
  return __return_storage_ptr__;
}

// Seek @ 143267de0

void __thiscall FManifestWriter::Seek(FManifestWriter *this,long64 param_1)

{
  this->Offset = param_1;
  return;
}

// Serialize @ 1432687b0

void __thiscall FManifestWriter::Serialize(FManifestWriter *this,void *param_1,long64 param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((param_2 != 0) && ((this->_padding_ & 0x200) == 0)) {
    piVar1 = &(this->Bytes).ArrayNum;
    lVar6 = (this->Offset - (longlong)*piVar1) + param_2;
    if (0 < lVar6) {
      if (0x7ffffffe < *piVar1 + lVar6) {
        FArchiveState::SetError((FArchiveState *)this);
        return;
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)lVar6,&(this->Bytes).AllocatorInstance,piVar1,&(this->Bytes).ArrayMax);
    }
    if (((longlong)(this->Bytes).ArrayNum < this->Offset + param_2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset + Num) <= Bytes.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Data\\ManifestUObject.cpp"
                           ,0xee,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar2 = (uint)this->Offset;
    uVar5 = 0;
    if ((int)uVar2 < *piVar1) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    memcpy((this->Bytes).AllocatorInstance.Data + (int)uVar2,param_1,param_2);
    this->Offset = this->Offset + param_2;
  }
  return;
}

// Tell @ 143269c00

long64 __thiscall FManifestWriter::Tell(FManifestWriter *this)

{
  return this->Offset;
}

// TotalSize @ 14326b250

long64 __thiscall FManifestWriter::TotalSize(FManifestWriter *this)

{
  return (longlong)(this->Bytes).ArrayNum;
}

