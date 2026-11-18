// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 4

// CheckDirtyAndUpdate @ 146d44e00

bool __thiscall FGameplayDebuggerDataPack::CheckDirtyAndUpdate(FGameplayDebuggerDataPack *this)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  void *local_e8;
  undefined8 local_e0;
  FArchiveState local_d8;
  undefined8 local_48;
  void **local_40;
  undefined8 local_38;
  FReadAccessScope local_28;
  
  plVar3 = (longlong *)0x0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_d8._padding_ = 0;
  local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_d8._40_8_ = 0;
  local_d8.ArSerializingDefaults = 0;
  local_d8.ArPortFlags = 0;
  local_d8.ArMaxSerializeSize = 0;
  local_d8.ArUEVer.FileVersionUE4 = 0;
  local_d8.ArUEVer.FileVersionUE5 = 0;
  local_d8.ArLicenseeUEVer = 0;
  local_d8.ArEngineVer.Major = 0;
  local_d8.ArEngineVer.Minor = 0;
  local_d8.ArEngineVer.Patch = 0;
  local_d8.ArEngineVer._6_2_ = 0;
  local_d8.ArEngineVer.Changelist = 0;
  local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_d8.SerializedProperty = (FProperty *)0x0;
  local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_d8.bCustomVersionsAreReset = false;
  local_d8._129_7_ = 0;
  local_d8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_d8);
  local_48 = 0;
  local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_40 = &local_e8;
  local_38 = 0;
  FArchiveState::SetIsSaving(&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
  local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->SerializeDelegate,
             &local_28);
  if (*(int *)&(this->SerializeDelegate).field_0x10 != 0) {
    plVar3 = *(longlong **)&(this->SerializeDelegate).field_0x8;
  }
  (**(code **)(*plVar3 + 0x60))(plVar3,&local_d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  uVar1 = (*FCrc::MemCrc32Func)(local_e8,(int)local_e0,0);
  if ((uVar1 == this->DataCRC) && (this->bIsDirty == 0)) {
    bVar2 = false;
  }
  else {
    this->DataCRC = uVar1;
    bVar2 = true;
  }
  FArchive::~FArchive((FArchive *)&local_d8);
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  return bVar2;
}

// OnPacketRequest @ 146d56150

void __thiscall
FGameplayDebuggerDataPack::OnPacketRequest
          (FGameplayDebuggerDataPack *this,short param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  sVar1 = (this->Header).DataVersion;
  if ((param_1 == sVar1) && (param_2 == (this->Header).DataOffset)) {
    iVar3 = (this->Header).DataSize;
    iVar2 = iVar3;
    if (PacketSize + param_2 < iVar3) {
      iVar2 = PacketSize + param_2;
    }
    this->bReceived = 0;
    (this->Header).DataOffset = iVar2;
    uVar4 = 0;
    if (iVar2 == iVar3) {
      uVar4 = 4;
    }
    *(uint *)&this->field_0x28 = *(uint *)&this->field_0x28 | uVar4;
    return;
  }
  if (sVar1 <= param_1) {
    if ((param_1 == sVar1) && (param_2 < (this->Header).DataOffset)) {
      iVar3 = PacketSize + param_2;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      (this->Header).DataOffset = iVar3;
    }
    return;
  }
  (this->Header).DataOffset = 0;
  return;
}

// OnReplicated @ 146d56730

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall FGameplayDebuggerDataPack::OnReplicated(FGameplayDebuggerDataPack *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  undefined8 uVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  longlong *plVar7;
  uint local_res8 [2];
  FReadAccessScope local_108;
  FReadAccessScope local_f0;
  FMemoryReader local_d8;
  
  if ((this->Header).DataSize == 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ResetDelegate,
               &local_108);
    if (*(int *)&(this->ResetDelegate).field_0x10 == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)&(this->ResetDelegate).field_0x8;
    }
    (**(code **)(*plVar7 + 0x60))(plVar7);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_108);
    return;
  }
  if ((this->Header).bIsCompressed == 0) {
    FMemoryReader::FMemoryReader(&local_d8,&this->Data,false);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->SerializeDelegate,
               &local_f0);
    if (*(int *)&(this->SerializeDelegate).field_0x10 == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)&(this->SerializeDelegate).field_0x8;
    }
    (**(code **)(*plVar7 + 0x60))(plVar7,&local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f0);
    FArchive::~FArchive((FArchive *)&local_d8);
  }
  else {
    pFVar3 = (this->Data).AllocatorInstance.Data;
    plVar7 = (longlong *)0x0;
    iVar1 = (this->Data).ArrayNum;
    iVar2 = *(int *)pFVar3;
    local_108.DestructionSentinel._0_8_ = (FScriptContainerElement *)0x0;
    local_108.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,(ForAnyElementType *)&local_108,
               (int *)&local_108.DestructionSentinel.Accessor,
               (int *)((longlong)&local_108.DestructionSentinel.Accessor + 4));
    uVar5 = local_108.DestructionSentinel._0_8_;
    FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
    local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar6.Value);
    local_res8[1] = 0;
    FVar4.Number = 0;
    FVar4.ComparisonIndex.Value = local_res8[0];
    FCompression::UncompressMemory
              (FVar4,(void *)uVar5,(longlong)iVar2,pFVar3 + 4,(longlong)(iVar1 + -4),
               COMPRESS_NoFlags,0);
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_d8);
    local_d8._padding_ = 0;
    local_d8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_d8.Bytes = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_108;
    local_d8.LimitSize = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)&local_d8,true);
    (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->SerializeDelegate,
               &local_f0);
    if (*(int *)&(this->SerializeDelegate).field_0x10 != 0) {
      plVar7 = *(longlong **)&(this->SerializeDelegate).field_0x8;
    }
    (**(code **)(*plVar7 + 0x60))(plVar7,&local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f0);
    FArchive::~FArchive((FArchive *)&local_d8);
    if ((FScriptContainerElement *)local_108.DestructionSentinel._0_8_ !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_108.DestructionSentinel._0_8_);
    }
  }
  (this->Header).DataOffset = (this->Header).DataSize;
  return;
}

// RequestReplication @ 146d5a5c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

bool __thiscall
FGameplayDebuggerDataPack::RequestReplication(FGameplayDebuggerDataPack *this,short param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uVar9;
  FNameEntryId FVar10;
  undefined4 extraout_var;
  longlong *plVar11;
  bool bVar12;
  uint uVar13;
  size_t _Size;
  int local_res8 [2];
  uint local_res18 [4];
  undefined1 local_118 [16];
  FArchiveState local_108;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  FReadAccessScope local_58;
  
  if (this->bNeedsConfirmation != 1 || this->bReceived != 0) {
    plVar11 = (longlong *)0x0;
    local_118._0_8_ = (FScriptContainerElement *)0x0;
    local_118._8_4_ = 0;
    local_118._12_4_ = 0;
    local_res8[0] = 0;
    local_res8[1] = 0;
    local_108._padding_ = 0;
    local_108.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_108.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_108.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_108.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_108._40_8_ = 0;
    local_108.ArSerializingDefaults = 0;
    local_108.ArPortFlags = 0;
    local_108.ArMaxSerializeSize = 0;
    local_108.ArUEVer.FileVersionUE4 = 0;
    local_108.ArUEVer.FileVersionUE5 = 0;
    local_108.ArLicenseeUEVer = 0;
    local_108.ArEngineVer.Major = 0;
    local_108.ArEngineVer.Minor = 0;
    local_108.ArEngineVer.Patch = 0;
    local_108.ArEngineVer._6_2_ = 0;
    local_108.ArEngineVer.Changelist = 0;
    local_108.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_108.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_108.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_108.SerializedProperty = (FProperty *)0x0;
    local_108.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_108.bCustomVersionsAreReset = false;
    local_108._129_7_ = 0;
    local_108.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_108);
    local_78 = 0;
    local_108._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_70 = local_118;
    local_68 = 0;
    FArchiveState::SetIsSaving(&local_108,true);
    (**(code **)(local_108._padding_ + 0x108))(&local_108,0);
    local_108._padding_ = (longlong)&___7FMemoryWriter__6B_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->SerializeDelegate,
               &local_58);
    if (*(int *)&(this->SerializeDelegate).field_0x10 != 0) {
      plVar11 = *(longlong **)&(this->SerializeDelegate).field_0x8;
    }
    (**(code **)(*plVar11 + 0x60))(plVar11,&local_108);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    uVar9 = (*FCrc::MemCrc32Func)((void *)local_118._0_8_,(int)local_118._8_8_,0);
    uVar7 = local_118._0_8_;
    if ((uVar9 == this->DataCRC) && (this->bIsDirty == 0)) {
      bVar12 = false;
    }
    else {
      uVar8 = local_118._8_4_;
      _Size = (size_t)(int)local_118._8_4_;
      bVar12 = PacketSize < (int)local_118._8_4_;
      (this->Header).bIsCompressed = 0;
      puVar2 = &(this->Header).field_0xc;
      *(uint *)puVar2 = *(uint *)puVar2 | (uint)bVar12;
      if (bVar12 == 0) {
        if (this != (FGameplayDebuggerDataPack *)local_118) {
          iVar4 = (this->Data).ArrayMax;
          piVar1 = &(this->Data).ArrayMax;
          (this->Data).ArrayNum = local_118._8_4_;
          if ((local_118._8_4_ == 0) && (iVar4 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_118._8_4_,iVar4,(ForAnyElementType *)this,local_118._8_4_,piVar1);
            if (uVar8 != 0) {
              memcpy((this->Data).AllocatorInstance.Data,(void *)uVar7,_Size);
            }
          }
        }
      }
      else {
        local_res8[0] = (int)((float)(int)local_118._8_4_ * __real_3f8ccccd);
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
                  (&this->Data,(int)((float)(int)local_118._8_4_ * __real_3f8ccccd) + 4,Default);
        uVar7 = local_118._0_8_;
        pFVar5 = (this->Data).AllocatorInstance.Data;
        *(undefined4 *)pFVar5 = uVar8;
        FVar10 = FNameEntryId::FromValidEName((EName)local_res18);
        local_res18[0] = *(uint *)CONCAT44(extraout_var,FVar10.Value);
        local_res18[1] = 0;
        FVar6.Number = 0;
        FVar6.ComparisonIndex.Value = local_res18[0];
        FCompression::CompressMemory
                  (FVar6,pFVar5 + 4,local_res8,(void *)uVar7,uVar8,COMPRESS_BiasMemory,0);
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
                  (&this->Data,local_res8[0] + 4,Default);
      }
      iVar4 = (this->Data).ArrayNum;
      uVar13 = 0;
      bVar12 = true;
      if (PacketSize < iVar4) {
        uVar13 = 2;
      }
      this->DataCRC = uVar9;
      (this->Header).DataOffset = 0;
      (this->Header).DataSize = iVar4;
      (this->Header).SyncCounter = param_1;
      (this->Header).DataVersion = (this->Header).DataVersion + 1;
      puVar3 = &this->field_0x28;
      this->bIsDirty = 0;
      this->bReceived = 0;
      this->bNeedsConfirmation = uVar13 >> 1;
    }
    FArchive::~FArchive((FArchive *)&local_108);
    if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_118._0_8_);
    }
    return bVar12;
  }
  return false;
}

