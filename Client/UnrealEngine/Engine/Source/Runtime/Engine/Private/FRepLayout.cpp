// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 89

// DiffProperties<1,1> @ 1484a93a0

bool __thiscall
FRepLayout::DiffProperties<1,1>
          (FRepLayout *this,TArray<FProperty_*,TSizedDefaultAllocator<32>_> *param_1,
          TRepDataBufferBase<1,unsigned_char> param_2,
          TRepDataBufferBase<1,unsigned_char_const_> param_3,EDiffPropertiesFlags param_4)

{
  bool bVar1;
  TDiffPropertiesStackParams<1,1> local_48;
  FDiffPropertiesSharedParams local_30;
  
  local_30.Parents = &this->Parents;
  if (((this->Flags & NoReplicatedProperties) == None) && ((this->Parents).ArrayNum != 0)) {
    local_30.PropertyFlags = param_4 & IncludeConditionalProperties | Sync;
    local_30.DiffFlags = param_4;
    local_30.Cmds = &this->Cmds;
    local_30.NetSerializeLayouts = &this->NetSerializeLayouts;
    local_48.StartCmd = 0;
    local_48.EndCmd = (short)(this->Cmds).ArrayNum - 1;
    local_48.Destination.Data = param_2.Data;
    local_48.Source.Data = param_3.Data;
    local_30.RepNotifies = param_1;
    bVar1 = DiffProperties_r<1,1>(&local_30,&local_48);
    return bVar1;
  }
  return false;
}

// DiffProperties<1,0> @ 1484a9430

bool __thiscall
FRepLayout::DiffProperties<1,0>
          (FRepLayout *this,TArray<FProperty_*,TSizedDefaultAllocator<32>_> *param_1,
          TRepDataBufferBase<1,unsigned_char> param_2,
          TRepDataBufferBase<0,unsigned_char_const_> param_3,EDiffPropertiesFlags param_4)

{
  bool bVar1;
  TDiffPropertiesStackParams<1,0> local_48;
  FDiffPropertiesSharedParams local_30;
  
  local_30.Parents = &this->Parents;
  if (((this->Flags & NoReplicatedProperties) == None) && ((this->Parents).ArrayNum != 0)) {
    local_30.PropertyFlags = param_4 & IncludeConditionalProperties | Sync;
    local_30.DiffFlags = param_4;
    local_30.Cmds = &this->Cmds;
    local_30.NetSerializeLayouts = &this->NetSerializeLayouts;
    local_48.StartCmd = 0;
    local_48.EndCmd = (short)(this->Cmds).ArrayNum - 1;
    local_48.Destination.Data = param_2.Data;
    local_48.Source.Data = param_3.Data;
    local_30.RepNotifies = param_1;
    bVar1 = DiffProperties_r<1,0>(&local_30,&local_48);
    return bVar1;
  }
  return false;
}

// DiffProperties<0,1> @ 1484a94c0

bool __thiscall
FRepLayout::DiffProperties<0,1>
          (FRepLayout *this,TArray<FProperty_*,TSizedDefaultAllocator<32>_> *param_1,
          TRepDataBufferBase<0,unsigned_char> param_2,
          TRepDataBufferBase<1,unsigned_char_const_> param_3,EDiffPropertiesFlags param_4)

{
  bool bVar1;
  TDiffPropertiesStackParams<0,1> local_48;
  FDiffPropertiesSharedParams local_30;
  
  local_30.Parents = &this->Parents;
  if (((this->Flags & NoReplicatedProperties) == None) && ((this->Parents).ArrayNum != 0)) {
    local_30.PropertyFlags = param_4 & IncludeConditionalProperties | Sync;
    local_30.DiffFlags = param_4;
    local_30.Cmds = &this->Cmds;
    local_30.NetSerializeLayouts = &this->NetSerializeLayouts;
    local_48.StartCmd = 0;
    local_48.EndCmd = (short)(this->Cmds).ArrayNum - 1;
    local_48.Destination.Data = param_2.Data;
    local_48.Source.Data = param_3.Data;
    local_30.RepNotifies = param_1;
    bVar1 = DiffProperties_r<0,1>(&local_30,&local_48);
    return bVar1;
  }
  return false;
}

// DiffProperties<0,0> @ 1484a9550

bool __thiscall
FRepLayout::DiffProperties<0,0>
          (FRepLayout *this,TArray<FProperty_*,TSizedDefaultAllocator<32>_> *param_1,
          TRepDataBufferBase<0,unsigned_char> param_2,
          TRepDataBufferBase<0,unsigned_char_const_> param_3,EDiffPropertiesFlags param_4)

{
  bool bVar1;
  TDiffPropertiesStackParams<0,0> local_48;
  FDiffPropertiesSharedParams local_30;
  
  local_30.Parents = &this->Parents;
  if (((this->Flags & NoReplicatedProperties) == None) && ((this->Parents).ArrayNum != 0)) {
    local_30.PropertyFlags = param_4 & IncludeConditionalProperties | Sync;
    local_30.DiffFlags = param_4;
    local_30.Cmds = &this->Cmds;
    local_30.NetSerializeLayouts = &this->NetSerializeLayouts;
    local_48.StartCmd = 0;
    local_48.EndCmd = (short)(this->Cmds).ArrayNum - 1;
    local_48.Destination.Data = param_2.Data;
    local_48.Source.Data = param_3.Data;
    local_30.RepNotifies = param_1;
    bVar1 = DiffProperties_r<0,0>(&local_30,&local_48);
    return bVar1;
  }
  return false;
}

// DiffStableProperties<1,1> @ 1484acf60

bool __thiscall
FRepLayout::DiffStableProperties<1,1>
          (FRepLayout *this,TArray<FProperty_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,
          TRepDataBufferBase<1,unsigned_char> param_3,
          TRepDataBufferBase<1,unsigned_char_const_> param_4)

{
  bool bVar1;
  TDiffStablePropertiesStackParams<1,1> local_48;
  FDiffStablePropertiesSharedParams local_30;
  
  local_30.Parents = &this->Parents;
  local_30.Cmds = &this->Cmds;
  local_30.NetSerializeLayouts = &this->NetSerializeLayouts;
  local_48.Source.Data = param_4.Data;
  local_48.EndCmd = (this->Cmds).ArrayNum + -1;
  local_48.StartCmd = 0;
  local_48.Destination.Data = param_3.Data;
  local_30.RepNotifies = param_1;
  local_30.ObjReferences = param_2;
  bVar1 = DiffStableProperties_r<1,1>(&local_30,&local_48);
  return bVar1;
}

// DiffStableProperties<1,0> @ 1484acfd0

bool __thiscall
FRepLayout::DiffStableProperties<1,0>
          (FRepLayout *this,TArray<FProperty_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,
          TRepDataBufferBase<1,unsigned_char> param_3,
          TRepDataBufferBase<0,unsigned_char_const_> param_4)

{
  bool bVar1;
  TDiffStablePropertiesStackParams<1,0> local_48;
  FDiffStablePropertiesSharedParams local_30;
  
  local_30.Parents = &this->Parents;
  local_30.Cmds = &this->Cmds;
  local_30.NetSerializeLayouts = &this->NetSerializeLayouts;
  local_48.Source.Data = param_4.Data;
  local_48.EndCmd = (this->Cmds).ArrayNum + -1;
  local_48.StartCmd = 0;
  local_48.Destination.Data = param_3.Data;
  local_30.RepNotifies = param_1;
  local_30.ObjReferences = param_2;
  bVar1 = DiffStableProperties_r<1,0>(&local_30,&local_48);
  return bVar1;
}

// DiffStableProperties<0,1> @ 1484ad040

bool __thiscall
FRepLayout::DiffStableProperties<0,1>
          (FRepLayout *this,TArray<FProperty_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,
          TRepDataBufferBase<0,unsigned_char> param_3,
          TRepDataBufferBase<1,unsigned_char_const_> param_4)

{
  bool bVar1;
  TDiffStablePropertiesStackParams<0,1> local_48;
  FDiffStablePropertiesSharedParams local_30;
  
  local_30.Parents = &this->Parents;
  local_30.Cmds = &this->Cmds;
  local_30.NetSerializeLayouts = &this->NetSerializeLayouts;
  local_48.Source.Data = param_4.Data;
  local_48.EndCmd = (this->Cmds).ArrayNum + -1;
  local_48.StartCmd = 0;
  local_48.Destination.Data = param_3.Data;
  local_30.RepNotifies = param_1;
  local_30.ObjReferences = param_2;
  bVar1 = DiffStableProperties_r<0,1>(&local_30,&local_48);
  return bVar1;
}

// DiffStableProperties<0,0> @ 1484ad0b0

bool __thiscall
FRepLayout::DiffStableProperties<0,0>
          (FRepLayout *this,TArray<FProperty_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,
          TRepDataBufferBase<0,unsigned_char> param_3,
          TRepDataBufferBase<0,unsigned_char_const_> param_4)

{
  bool bVar1;
  TDiffStablePropertiesStackParams<0,0> local_48;
  FDiffStablePropertiesSharedParams local_30;
  
  local_30.Parents = &this->Parents;
  local_30.Cmds = &this->Cmds;
  local_30.NetSerializeLayouts = &this->NetSerializeLayouts;
  local_48.Source.Data = param_4.Data;
  local_48.EndCmd = (this->Cmds).ArrayNum + -1;
  local_48.StartCmd = 0;
  local_48.Destination.Data = param_3.Data;
  local_30.RepNotifies = param_1;
  local_30.ObjReferences = param_2;
  bVar1 = DiffStableProperties_r<0,0>(&local_30,&local_48);
  return bVar1;
}

// ValidateWithChecksum<1> @ 1484b8df0

void __thiscall
FRepLayout::ValidateWithChecksum<1>
          (FRepLayout *this,TRepDataBufferBase<1,unsigned_char_const_> param_1,FBitArchive *param_2)

{
  code *pcVar1;
  bool bVar2;
  TIndexedContainerIterator<TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_const_,FRepLayoutCmd_const_,int>
  local_18;
  
  local_18.Container = &this->Cmds;
  local_18.Index = 0;
  ValidateWithChecksum_r<1>(&local_18,param_1,param_2);
  if (local_18.Index != (this->Cmds).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CmdIt.GetIndex() == Cmds.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                       ,0x1306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ValidateWithChecksum<0> @ 1484b8e50

void __thiscall
FRepLayout::ValidateWithChecksum<0>
          (FRepLayout *this,TRepDataBufferBase<0,unsigned_char_const_> param_1,FBitArchive *param_2)

{
  code *pcVar1;
  bool bVar2;
  TIndexedContainerIterator<TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_const_,FRepLayoutCmd_const_,int>
  local_18;
  
  local_18.Container = &this->Cmds;
  local_18.Index = 0;
  ValidateWithChecksum_r<0>(&local_18,param_1,param_2);
  if (local_18.Index != (this->Cmds).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CmdIt.GetIndex() == Cmds.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                       ,0x1306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// FRepLayout @ 1484bc000

FRepLayout * __thiscall FRepLayout::FRepLayout(FRepLayout *this)

{
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7FRepLayout__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Flags = None;
  (this->Parents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parents).ArrayNum = 0;
  (this->Parents).ArrayMax = 0;
  (this->Cmds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cmds).ArrayNum = 0;
  (this->Cmds).ArrayMax = 0;
  (this->BaseHandleToCmdIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseHandleToCmdIndex).ArrayNum = 0;
  (this->BaseHandleToCmdIndex).ArrayMax = 0;
  (this->LifetimeCustomPropertyState).Ptr = (FLifetimeCustomDeltaState *)0x0;
  this->Owner = (UStruct *)0x0;
  (this->SharedInfoRPC).SharedPropertyInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedInfoRPC).SharedPropertyInfo.ArrayNum = 0;
  (this->SharedInfoRPC).SharedPropertyInfo.ArrayMax = 0;
  (this->SharedInfoRPC).SerializedProperties.Ptr = (FNetBitWriter *)0x0;
  (this->SharedInfoRPC).NetTokensPendingExport.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  (this->SharedInfoRPC).NetTokensPendingExport.ArrayNum = 0;
  (this->SharedInfoRPC).NetTokensPendingExport.ArrayMax = 4;
  (this->SharedInfoRPC).bIsValid = false;
  (this->SharedInfoRPCParentsChanged).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->SharedInfoRPCParentsChanged).NumBits = 0;
  (this->SharedInfoRPCParentsChanged).MaxBits = 0x80;
  *(undefined8 *)&this->NetSerializeLayouts = 0;
  *(undefined8 *)&(this->NetSerializeLayouts).field_0x8 = 0;
  *(undefined8 *)&(this->NetSerializeLayouts).field_0x20 = 0;
  *(undefined4 *)&(this->NetSerializeLayouts).field_0x28 = 0;
  *(undefined4 *)&(this->NetSerializeLayouts).field_0x2c = 0x80;
  *(undefined4 *)&(this->NetSerializeLayouts).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NetSerializeLayouts).field_0x34 = 0;
  *(undefined8 *)&(this->NetSerializeLayouts).field_0x40 = 0;
  *(undefined4 *)&(this->NetSerializeLayouts).field_0x48 = 0;
  return this;
}

// ~FRepLayout @ 1484bdb50

void __thiscall FRepLayout::~FRepLayout(FRepLayout *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ForElementType<unsigned_int> FVar4;
  FLifetimeCustomDeltaState *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  
  this->_padding_ = (longlong)&___7FRepLayout__6B_;
  *(undefined4 *)&(this->NetSerializeLayouts).field_0x48 = 0;
  pvVar3 = *(void **)&(this->NetSerializeLayouts).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NetSerializeLayouts);
  FVar4 = (this->SharedInfoRPCParentsChanged).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FRepSerializationSharedInfo::~FRepSerializationSharedInfo(&this->SharedInfoRPC);
  pFVar5 = (this->LifetimeCustomPropertyState).Ptr;
  if (pFVar5 != (FLifetimeCustomDeltaState *)0x0) {
    pFVar6 = (pFVar5->LifetimeCustomDeltaIndexLookup).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar5->LifetimeCustomDeltaProperties).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    ::operator_delete(pFVar5,0x28);
  }
  DestructItems<FHandleToCmdIndex,int>
            ((FHandleToCmdIndex *)(this->BaseHandleToCmdIndex).AllocatorInstance.Data,
             (this->BaseHandleToCmdIndex).ArrayNum);
  pFVar6 = (this->BaseHandleToCmdIndex).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->Cmds).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->Parents).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// AddReferencedObjects @ 1484c2610

void __thiscall FRepLayout::AddReferencedObjects(FRepLayout *this,FReferenceCollector *param_1)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Parents).ArrayNum;
  pFVar3 = (this->Parents).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->Parents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRepParentCmd,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    plVar2 = *(longlong **)pFVar3;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
    pFVar3 = pFVar3 + 0x30;
  }
  return;
}

// BuildChangeList_r @ 1484c4080

void __thiscall
FRepLayout::BuildChangeList_r
          (FRepLayout *this,TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,int param_3,TRepDataBufferBase<0,unsigned_char_const_> param_4,int param_5,
          bool param_6,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_7)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  longlong *plVar9;
  bool bVar10;
  short sVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  short local_88;
  undefined2 local_86;
  undefined2 local_84;
  short local_82;
  undefined2 local_80;
  undefined2 local_7e;
  short local_7c [2];
  FScriptContainerElement *local_78;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_70;
  int local_60;
  longlong *local_58;
  
  do {
    if (param_3 <= param_2) {
      return;
    }
    uVar12 = 0;
    if (param_2 < (this->Cmds).ArrayNum) {
      uVar12 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_78 = (this->Cmds).AllocatorInstance.Data + (longlong)param_2 * 0x20;
    if ((local_78[0x1c] == (FScriptContainerElement)0x1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Cmd.Type != ERepLayoutCmdType::Return",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                            ,0x1a82,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    sVar11 = (short)param_5;
    if (local_78[0x1c] == (FScriptContainerElement)0x0) {
      local_58 = (longlong *)(param_4.Data + *(int *)(local_78 + 0xc));
      lVar17 = *local_58;
      local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 0;
      uVar3 = *(ushort *)(local_78 + 0x14);
      uVar14 = uVar3 - 1;
      uVar12 = 0;
      if ((int)uVar14 < param_1->ArrayNum) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar4 = *(ushort *)(local_78 + 8);
      pTVar5 = *(TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> **)
                ((param_1->AllocatorInstance).Data + (ulonglong)uVar3 * 0x10 + -8);
      local_60 = pTVar5->ArrayNum;
      if ((local_60 < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumHandlesPerElement > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                              ,0x1a91,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar9 = local_58;
      iVar13 = local_60;
      iVar15 = 0;
      if (0 < (int)local_58[1]) {
        iVar16 = 0;
        do {
          BuildChangeList_r(this,pTVar5,param_2 + 1,uVar4 - 1,
                            (uchar *)((int)((uint)*(ushort *)(local_78 + 10) * iVar15) + lVar17),
                            iVar16,param_6,&local_70);
          iVar15 = iVar15 + 1;
          iVar16 = iVar16 + iVar13;
        } while (iVar15 < (int)plVar9[1]);
      }
      pFVar7 = local_78;
      if (local_70.ArrayNum == 0) {
        if (param_6) {
          local_82 = sVar11 + *(short *)(local_78 + 0x14);
          pFVar6 = (param_7->AllocatorInstance).Data;
          if (((pFVar6 <= (FScriptContainerElement *)&local_82) &&
              ((FScriptContainerElement *)&local_82 < pFVar6 + (longlong)param_7->ArrayMax * 2)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar13 = param_7->ArrayNum;
          if (iVar13 == param_7->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,&param_7->AllocatorInstance,&param_7->ArrayMax);
          }
          param_7->ArrayNum = iVar13 + 1;
          local_80 = 0;
          *(short *)((param_7->AllocatorInstance).Data + (longlong)iVar13 * 2) = local_82;
          pFVar6 = (param_7->AllocatorInstance).Data;
          if (((pFVar6 <= (FScriptContainerElement *)&local_80) &&
              ((FScriptContainerElement *)&local_80 < pFVar6 + (longlong)param_7->ArrayMax * 2)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar13 = param_7->ArrayNum;
          if (iVar13 == param_7->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,&param_7->AllocatorInstance,&param_7->ArrayMax);
          }
          param_7->ArrayNum = iVar13 + 1;
          local_7e = 0;
          *(undefined2 *)((param_7->AllocatorInstance).Data + (longlong)iVar13 * 2) = local_80;
          pFVar6 = (param_7->AllocatorInstance).Data;
          if (((pFVar6 <= (FScriptContainerElement *)&local_7e) &&
              ((FScriptContainerElement *)&local_7e < pFVar6 + (longlong)param_7->ArrayMax * 2)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar13 = param_7->ArrayNum;
          if (iVar13 == param_7->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,&param_7->AllocatorInstance,&param_7->ArrayMax);
          }
          param_7->ArrayNum = iVar13 + 1;
          *(undefined2 *)((param_7->AllocatorInstance).Data + (longlong)iVar13 * 2) = local_7e;
        }
      }
      else {
        local_88 = sVar11 + *(short *)(local_78 + 0x14);
        pFVar6 = (param_7->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar6 + (longlong)param_7->ArrayMax * 2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar13 = param_7->ArrayNum;
        piVar1 = &param_7->ArrayNum;
        piVar2 = &param_7->ArrayMax;
        if (iVar13 == param_7->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&param_7->AllocatorInstance,piVar2);
        }
        *piVar1 = iVar13 + 1;
        *(short *)((param_7->AllocatorInstance).Data + (longlong)iVar13 * 2) = local_88;
        pFVar6 = (param_7->AllocatorInstance).Data;
        local_86 = (undefined2)local_70.ArrayNum;
        if (((pFVar6 <= (FScriptContainerElement *)&local_86) &&
            ((FScriptContainerElement *)&local_86 < pFVar6 + (longlong)*piVar2 * 2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar13 = *piVar1;
        if (iVar13 == *piVar2) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&param_7->AllocatorInstance,piVar2);
        }
        *piVar1 = iVar13 + 1;
        *(undefined2 *)((param_7->AllocatorInstance).Data + (longlong)iVar13 * 2) = local_86;
        if ((param_7 == &local_70) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar17 = (longlong)local_70.ArrayNum;
        if (local_70.ArrayNum != 0) {
          iVar13 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (2,2,local_70.ArrayNum,&param_7->AllocatorInstance,piVar1,piVar2);
          memcpy((param_7->AllocatorInstance).Data + (longlong)iVar13 * 2,
                 local_70.AllocatorInstance.Data,lVar17 * 2);
        }
        pFVar6 = (param_7->AllocatorInstance).Data;
        local_84 = 0;
        if (((pFVar6 <= (FScriptContainerElement *)&local_84) &&
            ((FScriptContainerElement *)&local_84 < pFVar6 + (longlong)*piVar2 * 2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar13 = *piVar1;
        if (iVar13 == *piVar2) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&param_7->AllocatorInstance,piVar2);
        }
        *piVar1 = iVar13 + 1;
        *(undefined2 *)((param_7->AllocatorInstance).Data + (longlong)iVar13 * 2) = local_84;
      }
      param_2 = *(ushort *)(pFVar7 + 8) - 1;
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
    }
    else {
      pFVar7 = (param_7->AllocatorInstance).Data;
      local_7c[0] = sVar11 + *(short *)(local_78 + 0x14);
      if (((pFVar7 <= (FScriptContainerElement *)local_7c) &&
          ((FScriptContainerElement *)local_7c < pFVar7 + (longlong)param_7->ArrayMax * 2)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar13 = param_7->ArrayNum;
      if (iVar13 == param_7->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&param_7->AllocatorInstance,&param_7->ArrayMax);
      }
      param_7->ArrayNum = iVar13 + 1;
      *(short *)((param_7->AllocatorInstance).Data + (longlong)iVar13 * 2) = local_7c[0];
    }
    param_2 = param_2 + 1;
  } while( true );
}

// BuildHandleToCmdIndexTable_r @ 1484c4800

void __thiscall
FRepLayout::BuildHandleToCmdIndexTable_r
          (FRepLayout *this,int param_1,int param_2,
          TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong lVar10;
  FScriptContainerElement local_50 [8];
  uint local_48 [2];
  undefined8 local_40;
  
  while( true ) {
    if (param_2 <= param_1) {
      return;
    }
    puVar9 = (undefined8 *)0x0;
    piVar8 = &param_3->ArrayMax;
    uVar4 = 0;
    if (param_1 < (this->Cmds).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->Cmds).AllocatorInstance.Data;
    if ((pFVar1[(longlong)param_1 * 0x20 + 0x1c] == (FScriptContainerElement)0x1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Cmd.Type != ERepLayoutCmdType::Return",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                           ,0x1c1c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar7 = (param_3->AllocatorInstance).Data;
    local_40 = 0;
    local_48[0] = param_1;
    if (((pFVar7 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 < pFVar7 + (longlong)*piVar8 * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    uVar4 = param_3->ArrayNum;
    if (uVar4 == *piVar8) {
      uVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_3->AllocatorInstance,piVar8);
    }
    pFVar7 = (param_3->AllocatorInstance).Data;
    param_3->ArrayNum = uVar4 + 1;
    lVar10 = (longlong)(int)uVar4 * 0x10;
    *(uint *)(pFVar7 + lVar10) = local_48[0];
    *(undefined8 *)(pFVar7 + lVar10 + 8) = local_40;
    local_40 = 0;
    if (pFVar1[(longlong)param_1 * 0x20 + 0x1c] == (FScriptContainerElement)0x0) {
      puVar6 = ::operator_new(0x10);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar9 = puVar6;
      }
      uVar5 = 0;
      if ((int)uVar4 < param_3->ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = (param_3->AllocatorInstance).Data + lVar10 + 8;
      if (pFVar7 == local_50) {
        if (puVar9 != (undefined8 *)0x0) {
          DestructItems<FHandleToCmdIndex,int>((FHandleToCmdIndex *)*puVar9,*(int *)(puVar9 + 1));
          if ((void *)*puVar9 != (void *)0x0) {
            FMemory::Free((void *)*puVar9);
          }
          ::operator_delete(puVar9,0x10);
        }
      }
      else {
        puVar6 = *(undefined8 **)pFVar7;
        *(undefined8 **)pFVar7 = puVar9;
        if (puVar6 != (undefined8 *)0x0) {
          DestructItems<FHandleToCmdIndex,int>((FHandleToCmdIndex *)*puVar6,*(int *)(puVar6 + 1));
          if ((void *)*puVar6 != (void *)0x0) {
            FMemory::Free((void *)*puVar6);
          }
          ::operator_delete(puVar6,0x10);
        }
      }
      uVar5 = 0;
      if ((int)uVar4 < param_3->ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      BuildHandleToCmdIndexTable_r
                (this,param_1 + 1,*(ushort *)(pFVar1 + (longlong)param_1 * 0x20 + 8) - 1,
                 *(TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> **)
                  ((param_3->AllocatorInstance).Data + lVar10 + 8));
      param_1 = *(ushort *)(pFVar1 + (longlong)param_1 * 0x20 + 8) - 1;
    }
    param_1 = param_1 + 1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// BuildSharedSerialization @ 1484c4b40

void __thiscall
FRepLayout::BuildSharedSerialization
          (FRepLayout *this,TRepDataBufferBase<0,unsigned_char_const_> param_1,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          FRepSerializationSharedInfo *param_4,FNetTokenStore *param_5)

{
  FNetBitWriter *pFVar1;
  FNetBitWriter *pFVar2;
  bool bVar3;
  FRepHandleIterator *local_res8;
  FChangelistIterator local_a8;
  FRepHandleIterator local_98;
  FNetTokenExportScope local_48;
  
  bVar3 = GDoPropertyChecksum == 1;
  local_98.ChangelistIterator = &local_a8;
  local_98.Cmds = &this->Cmds;
  local_98.HandleToCmdIndex = &this->BaseHandleToCmdIndex;
  pFVar2 = (FNetBitWriter *)0x0;
  local_a8.ChangedIndex = 0;
  local_98.NumHandlesPerElement = (this->BaseHandleToCmdIndex).ArrayNum;
  local_98.MaxCmdIndex = (this->Cmds).ArrayNum + -1;
  local_98.Owner = this->Owner;
  local_98.ArrayElementSize = 0;
  local_98.MaxArrayIndex = 1;
  local_98.MinCmdIndex = 0;
  local_98.LastSuccessfulCmdIndex = -1;
  local_a8.Changed = param_2;
  if (local_98.MaxCmdIndex < 0) {
    local_res8 = &local_98;
    `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_res8);
  }
  if ((param_4->SerializedProperties).Ptr == (FNetBitWriter *)0x0) {
    pFVar1 = ::operator_new(0xd0);
    if (pFVar1 != (FNetBitWriter *)0x0) {
      pFVar2 = FNetBitWriter::FNetBitWriter(pFVar1,0);
    }
    pFVar1 = (param_4->SerializedProperties).Ptr;
    if ((pFVar1 != pFVar2) &&
       ((param_4->SerializedProperties).Ptr = pFVar2, pFVar1 != (FNetBitWriter *)0x0)) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
  }
  UE::Net::FNetTokenExportScope::FNetTokenExportScope
            (&local_48,(param_4->SerializedProperties).Ptr,param_5,&param_4->NetTokensPendingExport,
             "BuildSharedSerialization");
  BuildSharedSerialization_r(this,&local_98,param_1,param_3,bVar3,0,param_4);
  param_4->bIsValid = true;
  UE::Net::FNetTokenExportScope::~FNetTokenExportScope(&local_48);
  return;
}

// BuildSharedSerializationForRPC @ 1484c4cb0

void __thiscall
FRepLayout::BuildSharedSerializationForRPC
          (FRepLayout *this,TRepDataBufferBase<0,unsigned_char_const_> param_1,
          FNetTokenStore *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  ForElementType<unsigned_int> FVar13;
  uint uVar14;
  longlong lVar15;
  char *pcVar16;
  FNetTokenExportScope local_58;
  
  if ((GNetSharedSerializedData != 0) && ((this->SharedInfoRPC).bIsValid == false)) {
    FRepSerializationSharedInfo::Init(&this->SharedInfoRPC);
    iVar9 = (this->Parents).ArrayNum;
    this_00 = &this->SharedInfoRPCParentsChanged;
    (this->SharedInfoRPCParentsChanged).NumBits = iVar9;
    uVar8 = iVar9 + 0x1f;
    uVar14 = uVar8 >> 5;
    if (uVar8 >> 5 != 0) {
      if ((this->SharedInfoRPCParentsChanged).MaxBits + 0x1fU >> 5 < uVar14) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&this_00->AllocatorInstance,0,uVar14,4);
        (this->SharedInfoRPCParentsChanged).MaxBits = uVar14 << 5;
      }
      FVar11 = (this->SharedInfoRPCParentsChanged).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<unsigned_int>)0x0) {
        FVar11 = (ForElementType<unsigned_int>)this_00;
      }
      memset((void *)FVar11,0,(ulonglong)uVar14 << 2);
      iVar9 = (this->SharedInfoRPCParentsChanged).NumBits;
      uVar14 = iVar9 >> 0x1f & 0x1f;
      uVar8 = iVar9 + uVar14;
      iVar9 = (uVar8 & 0x1f) - uVar14;
      if (iVar9 != 0) {
        FVar11 = (this->SharedInfoRPCParentsChanged).AllocatorInstance.SecondaryData;
        if (FVar11 == (ForElementType<unsigned_int>)0x0) {
          FVar11 = (ForElementType<unsigned_int>)this_00;
        }
        puVar1 = (uint *)((longlong)FVar11 + (longlong)((int)uVar8 >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
      }
    }
    pcVar16 = "BuildSharedSerializationForRPC";
    UE::Net::FNetTokenExportScope::FNetTokenExportScope
              (&local_58,(this->SharedInfoRPC).SerializedProperties.Ptr,param_2,
               &(this->SharedInfoRPC).NetTokensPendingExport,"BuildSharedSerializationForRPC");
    uVar8 = 0;
    if (0 < (this->Parents).ArrayNum) {
      lVar15 = 0;
      uVar14 = 1;
      do {
        uVar12 = ~uVar8 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar8 < (this->Parents).ArrayNum) {
          uVar10 = uVar12;
        }
        if (uVar10 == 0) {
          pcVar16 = (char *)(longlong)(int)uVar8;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if ((*(uint *)(*(longlong *)((this->Parents).AllocatorInstance.Data + lVar15) + 0x38) >> 8 &
            1) == 0) {
          uVar10 = 0;
          if ((int)uVar8 < (this->Parents).ArrayNum) {
            uVar10 = uVar12;
          }
          if (uVar10 == 0) {
            pcVar16 = (char *)(longlong)(int)uVar8;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          lVar3 = *(longlong *)((this->Parents).AllocatorInstance.Data + lVar15);
          if ((lVar3 == 0) || ((*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) >> 0x11 & 1) == 0)) {
            uVar10 = 0;
            if ((int)uVar8 < (this->Parents).ArrayNum) {
              uVar10 = uVar12;
            }
            if (uVar10 == 0) {
              pcVar16 = (char *)(longlong)(int)uVar8;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar4 = *(longlong **)((this->Parents).AllocatorInstance.Data + lVar15);
            uVar10 = 0;
            if ((int)uVar8 < (this->Parents).ArrayNum) {
              uVar10 = uVar12;
            }
            if (uVar10 == 0) {
              pcVar16 = (char *)(longlong)(int)uVar8;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            uVar10 = *(uint *)((this->Parents).AllocatorInstance.Data + lVar15 + 0x10);
            pcVar5 = *(code **)(*plVar4 + 0xb8);
            if (((int)uVar10 < 0) || ((int)plVar4[6] <= (int)uVar10)) {
              pcVar16 = (char *)(ulonglong)uVar10;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if ((param_1.Data == (uchar *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            cVar7 = (*pcVar5)(plVar4,param_1.Data +
                                     (longlong)*(int *)((longlong)plVar4 + 0x44) +
                                     (longlong)(int)uVar10 *
                                     (longlong)*(int *)((longlong)plVar4 + 0x34),0,0,pcVar16);
            if (cVar7 != '\0') goto LAB_1484c50fc;
          }
          if ((((int)uVar8 < 0) || ((this->SharedInfoRPCParentsChanged).NumBits <= (int)uVar8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar11 = (this->SharedInfoRPCParentsChanged).AllocatorInstance.SecondaryData;
          FVar13 = (ForElementType<unsigned_int>)&this->SharedInfoRPCParentsChanged;
          if (FVar11 != (ForElementType<unsigned_int>)0x0) {
            FVar13 = FVar11;
          }
          uVar10 = uVar8;
          if ((int)uVar8 < 0) {
            uVar10 = uVar8 + 0x1f;
          }
          puVar1 = (uint *)((longlong)FVar13 + (longlong)((int)uVar10 >> 5) * 4);
          *puVar1 = *puVar1 | uVar14;
          uVar10 = 0;
          if ((int)uVar8 < (this->Parents).ArrayNum) {
            uVar10 = ~uVar8 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar2 = *(ushort *)((this->Parents).AllocatorInstance.Data + lVar15 + 0x1e);
          uVar10 = 0;
          if ((int)uVar8 < (this->Parents).ArrayNum) {
            uVar10 = ~uVar8 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar16 = (char *)0x0;
          BuildSharedSerializationForRPC_r
                    (this,(uint)*(ushort *)((this->Parents).AllocatorInstance.Data + lVar15 + 0x1c),
                     (uint)uVar2,param_1,0,0,&this->SharedInfoRPC);
        }
LAB_1484c50fc:
        uVar8 = uVar8 + 1;
        uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
        lVar15 = lVar15 + 0x30;
      } while ((int)uVar8 < (this->Parents).ArrayNum);
    }
    (this->SharedInfoRPC).bIsValid = true;
    UE::Net::FNetTokenExportScope::~FNetTokenExportScope(&local_58);
  }
  return;
}

// BuildSharedSerializationForRPC_DynamicArray_r @ 1484c5160

void __thiscall
FRepLayout::BuildSharedSerializationForRPC_DynamicArray_r
          (FRepLayout *this,int param_1,TRepDataBufferBase<0,unsigned_char_const_> param_2,
          int param_3,FRepSerializationSharedInfo *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  
  iVar7 = 0;
  uVar5 = 0;
  if (param_1 < (this->Cmds).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  pFVar6 = (this->Cmds).AllocatorInstance.Data + (longlong)param_1 * 0x20;
  if (((byte)pFVar6[0x1d] & 4) == 0) {
    iVar1 = *(int *)(param_2.Data + 8);
    bVar4 = UE_RepLayout_Private::ValidateArraySize(iVar1,*(FProperty **)pFVar6);
    if ((bVar4) && (lVar2 = *(longlong *)param_2.Data, 0 < iVar1)) {
      do {
        BuildSharedSerializationForRPC_r
                  (this,param_1 + 1,*(ushort *)(pFVar6 + 8) - 1,
                   (uchar *)((int)((uint)*(ushort *)(pFVar6 + 10) * iVar7) + lVar2),iVar7,param_3,
                   param_4);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
  }
  return;
}

// BuildSharedSerializationForRPC_r @ 1484c5270

void __thiscall
FRepLayout::BuildSharedSerializationForRPC_r
          (FRepLayout *this,int param_1,int param_2,
          TRepDataBufferBase<0,unsigned_char_const_> param_3,int param_4,int param_5,
          FRepSerializationSharedInfo *param_6)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FRepLayoutCmd *pFVar9;
  FRepSharedPropertyKey local_50;
  
  while( true ) {
    if (param_2 <= param_1) {
      return;
    }
    uVar6 = 0;
    if (param_1 < (this->Cmds).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    pFVar9 = (FRepLayoutCmd *)((this->Cmds).AllocatorInstance.Data + (longlong)param_1 * 0x20);
    if ((pFVar9->Type == Return) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Cmd.Type != ERepLayoutCmdType::Return",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                           ,0x1b25,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pFVar9->Type == DynamicArray) {
      iVar7 = pFVar9->Offset;
      uVar6 = 0;
      if (param_1 < (this->Cmds).ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = (this->Cmds).AllocatorInstance.Data + (longlong)param_1 * 0x20;
      if (((byte)pFVar8[0x1d] & 4) == 0) {
        iVar2 = *(int *)(param_3.Data + (longlong)iVar7 + 8);
        bVar5 = UE_RepLayout_Private::ValidateArraySize(iVar2,*(FProperty **)pFVar8);
        if (bVar5) {
          lVar3 = *(longlong *)(param_3.Data + iVar7);
          iVar7 = 0;
          if (0 < iVar2) {
            do {
              BuildSharedSerializationForRPC_r
                        (this,param_1 + 1,*(ushort *)(pFVar8 + 8) - 1,
                         (uchar *)((int)((uint)*(ushort *)(pFVar8 + 10) * iVar7) + lVar3),iVar7,
                         param_5 + 1,param_6);
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar2);
          }
        }
      }
      param_1 = pFVar9->EndCmd - 1;
    }
    else {
      uVar1 = pFVar9->ParentIndex;
      if (((this->Parents).ArrayNum <= (int)(uint)uVar1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((*(uint *)(*(longlong *)
                       ((this->Parents).AllocatorInstance.Data + (ulonglong)uVar1 * 0x30) + 0x38) >>
            8 & 1) == 0) && ((pFVar9->Flags & IsSharedSerialization) != None)) {
        local_50.ArrayIndex = param_4;
        local_50.ArrayDepth = param_5;
        local_50.DataPtr = param_3.Data + pFVar9->Offset;
        local_50.CmdIndex = param_1;
        FRepSerializationSharedInfo::WriteSharedProperty
                  (param_6,pFVar9,&local_50,param_1,0,
                   (TRepDataBufferBase<0,unsigned_char_const_>)local_50.DataPtr,false,false);
      }
    }
    param_1 = param_1 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// BuildSharedSerialization_r @ 1484c5520

void __thiscall
FRepLayout::BuildSharedSerialization_r
          (FRepLayout *this,FRepHandleIterator *param_1,
          TRepDataBufferBase<0,unsigned_char_const_> param_2,bool param_3,bool param_4,int param_5,
          FRepSerializationSharedInfo *param_6)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  FChangelistIterator *pFVar4;
  TRepDataBufferBase<0,unsigned_char_const_> TVar5;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> *pTVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  TRepDataBufferBase<0,unsigned_char_const_> TVar13;
  FRepLayoutCmd *pFVar14;
  uint uVar15;
  FRepHandleIterator *local_b0;
  FRepSharedPropertyKey local_a8;
  FRepHandleIterator local_88;
  
  bVar9 = FRepHandleIterator::NextHandle(param_1);
  if (bVar9) {
    do {
      uVar3 = param_1->CmdIndex;
      iVar11 = param_1->ArrayOffset;
      uVar10 = 0;
      if ((int)uVar3 < (this->Cmds).ArrayNum) {
        uVar10 = ~uVar3 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar14 = (FRepLayoutCmd *)((this->Cmds).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20)
      ;
      uVar2 = pFVar14->ParentIndex;
      if (((this->Parents).ArrayNum <= (int)(uint)uVar2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      TVar13.Data = param_2.Data + (longlong)iVar11 + (longlong)pFVar14->Offset;
      if (((byte)(this->Parents).AllocatorInstance.Data[(ulonglong)uVar2 * 0x30 + 0x2c] & 8) == 0) {
        if (pFVar14->Type == DynamicArray) {
          pFVar4 = param_1->ChangelistIterator;
                    /* WARNING: Load size is inaccurate */
          TVar5.Data = *TVar13.Data;
          uVar10 = pFVar4->ChangedIndex;
          pTVar6 = pFVar4->Changed;
          pFVar4->ChangedIndex = uVar10 + 1;
          uVar12 = 0;
          if ((int)uVar10 < pTVar6->ArrayNum) {
            uVar12 = ~uVar10 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar15 = (uint)*(ushort *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar10 * 2);
          uVar2 = pFVar14->RelativeHandle;
          iVar11 = param_1->ChangelistIterator->ChangedIndex;
          uVar12 = uVar2 - 1;
          pTVar7 = param_1->HandleToCmdIndex;
          uVar10 = 0;
          if ((int)uVar12 < pTVar7->ArrayNum) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_88.HandleToCmdIndex =
               *(TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> **)
                ((pTVar7->AllocatorInstance).Data + (ulonglong)uVar2 * 0x10 + -8);
          local_88.ChangelistIterator = param_1->ChangelistIterator;
          local_88.MaxCmdIndex = pFVar14->EndCmd - 1;
          local_88.NumHandlesPerElement = (local_88.HandleToCmdIndex)->ArrayNum;
          local_88.MinCmdIndex = uVar3 + 1;
          local_88.ArrayElementSize = (int)pFVar14->ElementSize;
          local_88.MaxArrayIndex = *(int *)(TVar13.Data + 8);
          local_88.Owner = param_1->Owner;
          local_88.LastSuccessfulCmdIndex = -1;
          local_88.Cmds = &this->Cmds;
          if (local_88.MaxCmdIndex < local_88.MinCmdIndex) {
            local_b0 = &local_88;
            `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_b0);
          }
          BuildSharedSerialization_r(this,&local_88,TVar5,param_3,param_4,param_5 + 1,param_6);
          if (((int)uVar15 < param_1->ChangelistIterator->ChangedIndex - iVar11) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("CmdIndexIterator->ChangelistIterator.ChangedIndex - OldChangedIndex <= ArrayChangedCount"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                 ,0x984,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          param_1->ChangelistIterator->ChangedIndex = iVar11 + uVar15;
          iVar11 = FRepHandleIterator::PeekNextHandle(param_1);
          if ((iVar11 != 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("CmdIndexIterator->PeekNextHandle() == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                 ,0x986,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          piVar1 = &param_1->ChangelistIterator->ChangedIndex;
          *piVar1 = *piVar1 + 1;
        }
        else if ((pFVar14->Flags & IsSharedSerialization) != None) {
          local_a8.ArrayIndex = param_1->ArrayIndex;
          local_a8.CmdIndex = param_1->CmdIndex;
          local_a8.ArrayDepth = param_5;
          local_a8.DataPtr = TVar13.Data;
          FRepSerializationSharedInfo::WriteSharedProperty
                    (param_6,pFVar14,&local_a8,local_a8.CmdIndex,(ushort)param_1->Handle,TVar13,
                     param_3,param_4);
        }
      }
      bVar9 = FRepHandleIterator::NextHandle(param_1);
    } while (bVar9);
  }
  return;
}

// CallRepNotifies @ 1484c5ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRepLayout::CallRepNotifies(FRepLayout *this,FReceivingRepState *param_1,UObject *param_2)

{
  int *piVar1;
  TMap<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FScriptContainerElement *pFVar2;
  uchar uVar3;
  ushort uVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  code *pcVar8;
  FField *pFVar9;
  bool bVar10;
  uint uVar11;
  UFunction *pUVar12;
  uint *puVar13;
  FTlsAutoCleanup *pFVar14;
  void *pvVar15;
  longlong lVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  undefined1 *puVar19;
  void *_Src;
  int iVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res20 [8];
  undefined1 local_15f;
  undefined1 local_15e [6];
  FMemMark local_158;
  TFieldIterator<FProperty> local_130;
  uint local_118;
  FScriptContainerElement *local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  code *local_80;
  undefined1 *local_78;
  code *local_70;
  undefined1 *local_68;
  FString local_58;
  
  if ((param_1->RepNotifies).ArrayNum != 0) {
    if (((this->Flags & NoReplicatedProperties) == None) && ((this->Parents).ArrayNum != 0)) {
      if (!__CsvProfilerStat4674) {
        FCsvProfilerTrace::OutputInlineStatExclusive("Generic_RepNotifies");
        __CsvProfilerStat4674 = true;
      }
      FCsvProfiler::BeginExclusiveStat("Generic_RepNotifies","CSV_Generic_RepNotifies");
      local_118 = (param_1->RepNotifies).ArrayNum;
      uVar17 = (ulonglong)(int)local_118;
      pFVar21 = (param_1->RepNotifies).AllocatorInstance.Data;
      pFVar5 = (param_1->StaticBuffer).Buffer.AllocatorInstance.Data;
      pFVar2 = pFVar21 + uVar17 * 8;
      while( true ) {
        local_110 = pFVar21;
        if ((param_1->RepNotifies).ArrayNum != (int)uVar17) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FProperty_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (pFVar21 == pFVar2) break;
        plVar6 = *(longlong **)pFVar21;
        if ((int)(uint)*(ushort *)(plVar6 + 8) < (this->Parents).ArrayNum) {
          pUVar12 = UObject::FindFunction(param_2,*(FName *)(plVar6 + 0xd));
          if (pUVar12 == (UFunction *)0x0) {
            if (2 < (byte)LogRep._0_1_) {
              local_c8.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
              local_c8.Number = *(uint *)&param_2->field_0x1c;
              ::FName::ToString(&local_c8,&local_b0);
              bVar10 = IsThisNotNull(plVar6,"FField::GetName");
              if (bVar10) {
                ::FName::ToString((FName *)(plVar6 + 4),&local_108);
              }
              else {
                ::FString::FString(&local_108,L"None");
              }
              ::FName::ToString((FName *)(plVar6 + 0xd),&local_58);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            uVar4 = *(ushort *)(plVar6 + 8);
            if (((this->Parents).ArrayNum <= (int)(uint)uVar4) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar3 = pUVar12->NumParms;
            pFVar21 = (this->Parents).AllocatorInstance.Data + (ulonglong)uVar4 * 0x30;
            if (uVar3 == '\0') {
              (**(code **)(*(longlong *)param_2 + 0x260))(param_2);
              if (((*(uint *)(pFVar21 + 0x2c) >> 10 & 1) != 0) &&
                 ((*(uint *)(pFVar21 + 0x2c) >> 7 & 1) == 0)) {
                pFVar18 = (FScriptContainerElement *)
                          (&param_2->field_0x0 + *(int *)(pFVar21 + 0x14));
                pFVar21 = pFVar5 + *(int *)(pFVar21 + 0x18);
                if (pFVar21 != pFVar18) {
                  if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) == 0) {
                    (**(code **)(*plVar6 + 0xf0))(plVar6,pFVar21,pFVar18,(int)plVar6[6]);
                  }
                  else {
                    memcpy(pFVar21,pFVar18,
                           (longlong)*(int *)((longlong)plVar6 + 0x34) * (longlong)(int)plVar6[6]);
                  }
                }
              }
            }
            else if (uVar3 == '\x01') {
              if ((*(uint *)(pFVar21 + 0x2c) >> 3 & 1) == 0) {
                lVar16 = *(longlong *)pFVar21;
                if (((lVar16 == 0) ||
                    ((*(uint *)(*(longlong *)(lVar16 + 8) + 0x18) >> 0x11 & 1) == 0)) ||
                   (*(char *)(lVar16 + 0x73) == -1)) {
                  lVar16 = *(longlong *)param_2;
                }
                else {
                  if ((*(char *)(lVar16 + 0x70) == '\0') &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("FieldSize != 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                          ,0xa4b,L""), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  lVar16 = *(longlong *)param_2;
                }
                (**(code **)(lVar16 + 0x260))(param_2);
                if ((*(uint *)(pFVar21 + 0x2c) >> 4 & 1) == 0) {
                  pFVar18 = (FScriptContainerElement *)
                            (&param_2->field_0x0 + *(int *)(pFVar21 + 0x14));
                  pFVar21 = pFVar5 + *(int *)(pFVar21 + 0x18);
                  if (pFVar21 != pFVar18) {
                    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) == 0) {
                      (**(code **)(*plVar6 + 0xf0))(plVar6,pFVar21,pFVar18,(int)plVar6[6]);
                    }
                    else {
                      memcpy(pFVar21,pFVar18,
                             (longlong)*(int *)((longlong)plVar6 + 0x34) * (longlong)(int)plVar6[6])
                      ;
                    }
                  }
                }
              }
              else {
                (**(code **)(*(longlong *)param_2 + 0x260))(param_2);
              }
            }
            else if (uVar3 == '\x02') {
              if (((*(uint *)(pFVar21 + 0x2c) >> 3 & 1) == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("EnumHasAnyFlags(Parent.Flags, ERepParentFlags::IsCustomDelta)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                      ,0x128c,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              puVar13 = TThreadSingleton<FMemStack>::GetTlsSlot();
              local_78 = &local_15f;
              local_80 = UE::Core::Private::Function::
                         TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                         ::Call;
              pFVar14 = FThreadSingletonInitializer::Get
                                  ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_80,
                                   puVar13);
              local_158.Mem = (FMemStackBase *)(pFVar14 + 2);
              local_158.Top = (local_158.Mem)->Top;
              local_158.SavedChunk = *(FTaggedMemory **)(pFVar14 + 4);
              local_158.bPopped = false;
              local_158.NextTopmostMark = *(FMemMark **)(pFVar14 + 5);
              pFVar14[5] = (FTlsAutoCleanup)&local_158;
              *(int *)(pFVar14 + 6) = *(int *)(pFVar14 + 6) + 1;
              uVar4 = pUVar12->ParmsSize;
              puVar13 = TThreadSingleton<FMemStack>::GetTlsSlot();
              local_68 = local_15e;
              local_70 = UE::Core::Private::Function::
                         TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                         ::Call;
              pFVar14 = FThreadSingletonInitializer::Get
                                  ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_70,
                                   puVar13);
              pvVar15 = FMemStackBase::Alloc((FMemStackBase *)(pFVar14 + 2),(ulonglong)uVar4,0x10);
              memset(pvVar15,0,(ulonglong)uVar4);
              local_130.Field = (FField *)pUVar12->_padding_;
              local_130.InterfaceIndex = -1;
              local_130.bIncludeSuper = true;
              local_130.bIncludeDeprecated = true;
              local_130.bIncludeInterface = false;
              local_130.Struct = (UStruct *)pUVar12;
              TFieldIterator<FProperty>::IterateToNext(&local_130);
              if ((local_130.Field == (FField *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Itr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                      ,0x129b,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar9 = local_130.Field;
              pFVar21 = pFVar5 + *(int *)(pFVar21 + 0x18);
              if (((int)local_130.Field[1]._padding_ < 1) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x2dd,
                                      L"Array index out of bounds: %i from an array of size %i"),
                 bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if ((pvVar15 == (void *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ContainerPtr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x2de,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar18 = (FScriptContainerElement *)
                        ((longlong)*(int *)((longlong)&pFVar9[1].Owner.Container + 4) +
                        (longlong)pvVar15);
              if (pFVar18 != pFVar21) {
                if ((*(uint *)&pFVar9[1].ClassPrivate >> 0x1e & 1) == 0) {
                  (**(code **)(pFVar9->_padding_ + 0xf0))
                            (pFVar9,pFVar18,pFVar21,(int)pFVar9[1]._padding_);
                }
                else {
                  memcpy(pFVar18,pFVar21,
                         (longlong)*(int *)((longlong)&pFVar9[1]._padding_ + 4) *
                         (longlong)(int)pFVar9[1]._padding_);
                }
              }
              local_130.Field = (local_130.Field)->Next;
              TFieldIterator<FProperty>::IterateToNext(&local_130);
              if ((local_130.Field == (FField *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Itr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                      ,0x12a1,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar11 = ((uint)((ulonglong)plVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar6 >> 4))
                       * -0x7a143595;
              uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
              if (*(int *)&(param_1->RepNotifyMetaData).field_0x8 !=
                  *(int *)&(param_1->RepNotifyMetaData).field_0x34) {
                puVar7 = *(undefined1 **)&(param_1->RepNotifyMetaData).field_0x40;
                puVar19 = &(param_1->RepNotifyMetaData).field_0x38;
                if (puVar7 != (undefined1 *)0x0) {
                  puVar19 = puVar7;
                }
                iVar20 = *(int *)(puVar19 +
                                 (ulonglong)
                                 (*(int *)&(param_1->RepNotifyMetaData).field_0x48 - 1U &
                                 (uVar11 >> 0x10 ^ uVar11)) * 4);
                if (iVar20 != -1) {
                  lVar16 = *(longlong *)&param_1->RepNotifyMetaData;
                  do {
                    if (*(longlong **)((longlong)iVar20 * 0x20 + lVar16) == plVar6) {
                      if ((iVar20 != -1) && (lVar16 = (longlong)iVar20 * 0x20 + lVar16, lVar16 != 0)
                         ) {
                        _Src = (void *)(lVar16 + 8);
                        if (_Src != (void *)0x0) goto LAB_1484c64a0;
                        goto LAB_1484c647e;
                      }
                      break;
                    }
                    iVar20 = *(int *)((longlong)iVar20 * 0x20 + 0x18 + lVar16);
                  } while (iVar20 != -1);
                }
              }
              _Src = (void *)0x0;
LAB_1484c647e:
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NotifyMetaData",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                  ,0x12a4,L"");
              if (bVar10) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
LAB_1484c64a0:
              pFVar9 = local_130.Field;
              if (((int)local_130.Field[1]._padding_ < 1) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x2dd,
                                      L"Array index out of bounds: %i from an array of size %i"),
                 bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if ((pvVar15 == (void *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ContainerPtr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x2de,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pvVar15 = (void *)((longlong)*(int *)((longlong)&pFVar9[1].Owner.Container + 4) +
                                (longlong)pvVar15);
              if (pvVar15 != _Src) {
                if ((*(uint *)&pFVar9[1].ClassPrivate >> 0x1e & 1) == 0) {
                  (**(code **)(pFVar9->_padding_ + 0xf0))
                            (pFVar9,pvVar15,_Src,(int)pFVar9[1]._padding_);
                }
                else {
                  memcpy(pvVar15,_Src,
                         (longlong)*(int *)((longlong)&pFVar9[1]._padding_ + 4) *
                         (longlong)(int)pFVar9[1]._padding_);
                }
              }
              (**(code **)(*(longlong *)param_2 + 0x260))(param_2);
              if (local_158.bPopped == false) {
                if (((local_158.Mem)->TopMark != &local_158) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Mem.TopMark == this",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                        ,0x215,L""), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                local_158.bPopped = true;
                (local_158.Mem)->NumMarks = (local_158.Mem)->NumMarks + -1;
                if (local_158.SavedChunk != (local_158.Mem)->TopChunk) {
                  FMemStackBase::FreeChunks(local_158.Mem,local_158.SavedChunk);
                }
                (local_158.Mem)->Top = local_158.Top;
                (local_158.Mem)->TopMark = local_158.NextTopmostMark;
                local_158.Top = (uchar *)0x0;
                if (local_158.bPopped == false) {
                  if (((local_158.Mem)->TopMark != &local_158) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Mem.TopMark == this",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                          ,0x215,L""), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  local_158.bPopped = true;
                  (local_158.Mem)->NumMarks = (local_158.Mem)->NumMarks + -1;
                  if (local_158.SavedChunk != (local_158.Mem)->TopChunk) {
                    FMemStackBase::FreeChunks(local_158.Mem,local_158.SavedChunk);
                  }
                  (local_158.Mem)->Top = local_158.Top;
                  (local_158.Mem)->TopMark = local_158.NextTopmostMark;
                  local_158.Top = (uchar *)0x0;
                }
              }
            }
            else {
              local_c0.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
              local_c0.Number = *(uint *)&param_2->field_0x1c;
              ::FName::ToString(&local_c0,&local_a0);
              bVar10 = IsThisNotNull(plVar6,"FField::GetName");
              if (bVar10) {
                ::FName::ToString((FName *)(plVar6 + 4),&local_f8);
              }
              else {
                ::FString::FString(&local_f8,L"None");
              }
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                  ,0x12af,
                                  L"FRepLayout::CallRepNotifies: Invalid number of parameters for property %s on object %s. NumParms=%d, CustomDelta=%d"
                                 );
              if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              }
              if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              }
              if (bVar10) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
          }
LAB_1484c607c:
          uVar17 = (ulonglong)local_118;
          pFVar21 = local_110 + 8;
        }
        else {
          if ((byte)LogRep._0_1_ < 3) goto LAB_1484c607c;
          local_b8.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
          local_b8.Number = *(uint *)&param_2->field_0x1c;
          ::FName::ToString(&local_b8,&local_90);
          bVar10 = IsThisNotNull(plVar6,"FField::GetName");
          if (bVar10) {
            ::FName::ToString((FName *)(plVar6 + 4),&local_e8);
          }
          else {
            ::FString::FString(&local_e8,L"None");
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          pFVar21 = local_110 + 8;
          uVar17 = (ulonglong)local_118;
        }
      }
      piVar1 = &(param_1->RepNotifies).ArrayMax;
      (param_1->RepNotifies).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(param_1->RepNotifies).AllocatorInstance,0,piVar1);
      }
      this_00 = &param_1->RepNotifyMetaData;
      bVar10 = 1 < *(int *)&(param_1->RepNotifyMetaData).field_0x48;
      if (!bVar10) {
        TSet<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      TSparseArray<TSparseSetElement<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,0,*(int *)&(param_1->RepNotifyMetaData).field_0x8);
      puVar7 = &(param_1->RepNotifyMetaData).field_0xc;
      *(undefined4 *)&(param_1->RepNotifyMetaData).field_0x8 = 0;
      if (*(int *)puVar7 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar7);
      }
      *(undefined4 *)&(param_1->RepNotifyMetaData).field_0x34 = 0;
      *(undefined4 *)&(param_1->RepNotifyMetaData).field_0x30 = 0xffffffff;
      iVar20 = *(int *)&(param_1->RepNotifyMetaData).field_0x2c;
      *(undefined4 *)&(param_1->RepNotifyMetaData).field_0x28 = 0;
      if ((iVar20 < 0) || (0x80 < iVar20)) {
        *(undefined4 *)&(param_1->RepNotifyMetaData).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(param_1->RepNotifyMetaData).field_0x10,
                   0);
      }
      if (bVar10) {
        *(undefined4 *)&(param_1->RepNotifyMetaData).field_0x48 = 1;
        TSet<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)this_00);
      }
      FCsvProfiler::EndExclusiveStat("Generic_RepNotifies");
    }
    else if (1 < (byte)LogRep._0_1_) {
      if (this->Owner == (UStruct *)0x0) {
        ::FString::FString(&local_d8,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this->Owner,&local_d8,(UObject *)0x0);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ClearSharedSerializationForRPC @ 1484c6b60

void __thiscall FRepLayout::ClearSharedSerializationForRPC(FRepLayout *this)

{
  FRepSerializationSharedInfo::Reset(&this->SharedInfoRPC);
  (this->SharedInfoRPCParentsChanged).NumBits = 0;
  return;
}

// CompareProperties @ 1484c7cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

ERepLayoutResult __thiscall
FRepLayout::CompareProperties
          (FRepLayout *this,FSendingRepState *param_1,FRepChangelistState *param_2,
          TRepDataBufferBase<0,unsigned_char_const_> param_3,FReplicationFlags *param_4,bool param_5
          )

{
  int *piVar1;
  uint *puVar2;
  UStruct *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FRepLayout *pFVar9;
  bool bVar10;
  bool bVar11;
  ERepLayoutResult EVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropCompareTime> FVar17;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  ForElementType<unsigned_int> FVar18;
  FName FVar19;
  FNameEntryId FVar20;
  uint uVar21;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar22;
  undefined1 auStackY_1e8 [32];
  undefined2 local_186;
  ERepLayoutResult local_184;
  uint local_180;
  uint uStack_17c;
  FColor_u_0 local_178 [2];
  FRepLayout *local_170;
  FName local_168;
  FName local_160;
  FString local_150;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_140;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128;
  TArray<FRepParentCmd,TSizedDefaultAllocator<32>_> *local_120;
  LARGE_INTEGER local_118;
  FStatMessage local_110;
  FComparePropertiesStackParams local_100;
  FName local_e0;
  FComparePropertiesSharedParams local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_170 = this;
  if (GUseDetailedScopeCounters) {
    FVar17 = StatPtr_STAT_NetReplicateDynamicPropCompareTime;
    if (StatPtr_STAT_NetReplicateDynamicPropCompareTime ==
        (FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropCompareTime>)0x0) {
      pFVar16 = ::FName::FName(&local_e0,"STAT_NetReplicateDynamicPropCompareTime");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropCompareTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_NetReplicateDynamicPropCompareTime,*pFVar16,
                          L"Dynamic Property Compare Time","STATGROUP_Game","STATCAT_Advanced",
                          L"Game",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  else {
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropCompareTime>)
             &TStatId::TStatId_NAME_None;
  }
  FVar19 = *(FName *)FVar17;
  bVar11 = false;
  bVar10 = false;
  local_160.ComparisonIndex.Value = 0;
  local_160.Number = 0;
  bVar6 = false;
  bVar5 = false;
  FVar20 = FVar19.ComparisonIndex.Value;
  uVar21 = FVar19.Number;
  if ((FVar20.Value == 0) && (uVar21 == 0)) {
LAB_1484c7e3f:
    bVar8 = false;
    bVar7 = false;
    FVar19 = local_160;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar11 = false;
      bVar10 = true;
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_168.ComparisonIndex.Value = FVar20.Value;
        local_168.Number = uVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_168,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                   ,0x6f8);
        bVar11 = true;
        bVar10 = true;
        bVar6 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1484c7e3f;
    local_180 = FVar20.Value;
    uStack_17c = uVar21;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar8 = true;
    bVar7 = true;
    bVar10 = bVar5;
    bVar11 = bVar6;
  }
  if (((this->Flags & NoReplicatedProperties) != None) || ((this->Parents).ArrayNum == 0)) {
    EVar12 = Empty;
    bVar5 = bVar10;
    goto LAB_1484c85c3;
  }
  param_2->CompareIndex = param_2->CompareIndex + 1;
  if ((0x3f < param_2->HistoryEnd - param_2->HistoryStart) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(RepChangelistState->HistoryEnd - RepChangelistState->HistoryStart) < FRepChangelistState::MAX_CHANGE_HISTORY"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                          ,0x701,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    EVar12 = (*pcVar4)();
    return EVar12;
  }
  uVar21 = param_2->HistoryEnd & 0x8000003f;
  if ((int)uVar21 < 0) {
    uVar21 = (uVar21 - 1 | 0xffffffc0) + 1;
  }
  if (6 < (byte)LogRepCompares._0_1_) {
    this_00 = this->Owner;
    if ((this_00 == (UStruct *)0x0) || (this_00->_padding_ == 0)) {
      ::FString::FString(&local_150,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_150,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRepCompares);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  pTVar22 = &param_2->ChangeHistory[(int)uVar21].Changed;
  pTVar22->ArrayNum = 0;
  if (pTVar22->ArrayMax != 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,1,&pTVar22->AllocatorInstance,0,&pTVar22->ArrayMax);
  }
  pFVar9 = local_170;
  uVar21 = (param_4->field0_0x0).Value;
  local_d8.bIsInitial = (bool)((byte)(uVar21 >> 1) & 1);
  local_184 = Success;
  local_d8.Flags = local_170->Flags;
  local_d8.bForceFail = (uVar21 & 0x102) == 0x102;
  local_120 = &local_170->Parents;
  local_d8.Cmds = &local_170->Cmds;
  if (param_1 == (FSendingRepState *)0x0) {
    local_d8.RepChangedPropertyTracker = (FRepChangedPropertyTracker *)0x0;
  }
  else {
    local_d8.RepChangedPropertyTracker = (param_1->RepChangedPropertyTracker).Object;
  }
  local_d8.NetSerializeLayouts = &local_170->NetSerializeLayouts;
  local_d8.PushModelState = (FPushModelPerNetDriverState *)0x0;
  local_d8.PushModelProperties = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  local_d8.bValidateProperties = false;
  if (((GNetworkProfiler.bIsTrackingEnabled == false) &&
      (GNetworkProfiler.bShouldTrackingBeEnabled == false)) ||
     (FNetworkProfiler::bIsComparisonTrackingEnabled == false)) {
    local_d8.bIsNetworkProfilerActive = false;
  }
  else {
    local_d8.bIsNetworkProfilerActive = true;
  }
  if ((param_1 == (FSendingRepState *)0x0) ||
     (local_d8.bChangedNetOwner = true, ((uVar21 ^ (param_1->RepFlags).field0_0x0.Value) & 1) == 0))
  {
    local_d8.bChangedNetOwner = false;
  }
  pFVar3 = (param_2->StaticBuffer).Buffer.AllocatorInstance.Data;
  local_d8.bForceCustomPropsActive = (bool)((byte)(uVar21 >> 0xb) & 1);
  local_d8.PropertiesCompared.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d8.bForceCompareProperties = param_5;
  local_100.Result = &local_184;
  local_d8.PropertiesCompared.NumBits = 0;
  local_d8.PropertiesCompared.MaxBits = 0x80;
  local_d8.PropertiesChanged.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d8.PropertiesChanged.NumBits = 0;
  local_d8.PropertiesChanged.MaxBits = 0x80;
  local_100.Data.Data = param_3.Data;
  local_100.ShadowData.Data = (uchar *)pFVar3;
  local_100.Changed = pTVar22;
  local_d8.Parents = local_120;
  local_d8.RepState = param_1;
  local_d8.RepChangelistState = param_2;
  if ((char)uVar21 < '\0') {
    if ((param_1 != (FSendingRepState *)0x0) && ((local_d8.Flags & IsActor) != None)) {
      CompareRoleProperty(&local_d8,&local_100,4,&param_1->SavedRemoteRole);
      CompareRoleProperty(&local_d8,&local_100,8,&(local_d8.RepState)->SavedRole);
      goto LAB_1484c8425;
    }
LAB_1484c8439:
    pFVar9 = local_170;
    if (pTVar22->ArrayNum == 0) {
      EVar12 = Empty;
    }
    else {
      pFVar3 = (pTVar22->AllocatorInstance).Data;
      local_186 = 0;
      piVar1 = &pTVar22->ArrayMax;
      if (((pFVar3 <= (FScriptContainerElement *)&local_186) &&
          ((FScriptContainerElement *)&local_186 < pFVar3 + (longlong)*piVar1 * 2)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        EVar12 = (*pcVar4)();
        return EVar12;
      }
      iVar14 = pTVar22->ArrayNum;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&pTVar22->AllocatorInstance,piVar1);
      }
      pTVar22->ArrayNum = iVar14 + 1;
      pFVar3 = (pTVar22->AllocatorInstance).Data;
      param_2->HistoryEnd = param_2->HistoryEnd + 1;
      *(undefined2 *)(pFVar3 + (longlong)iVar14 * 2) = local_186;
      FRepSerializationSharedInfo::Reset(&param_2->SharedSerialization);
      uVar21 = param_2->HistoryStart;
      EVar12 = local_184;
      if (param_2->HistoryEnd - uVar21 == 0x40) {
        param_2->HistoryStart = uVar21 + 1;
        uVar15 = uVar21 + 1 & 0x8000003f;
        if ((int)uVar15 < 0) {
          uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
        }
        local_140.AllocatorInstance.Data =
             param_2->ChangeHistory[(int)uVar15].Changed.AllocatorInstance.Data;
        pTVar22 = &param_2->ChangeHistory[(int)uVar15].Changed;
        (pTVar22->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_140.ArrayNum = param_2->ChangeHistory[(int)uVar15].Changed.ArrayNum;
        local_140.ArrayMax = param_2->ChangeHistory[(int)uVar15].Changed.ArrayMax;
        param_2->ChangeHistory[(int)uVar15].Changed.ArrayNum = 0;
        param_2->ChangeHistory[(int)uVar15].Changed.ArrayMax = 0;
        uVar21 = uVar21 & 0x8000003f;
        if ((int)uVar21 < 0) {
          uVar21 = (uVar21 - 1 | 0xffffffc0) + 1;
        }
        MergeChangeList(pFVar9,param_3,&param_2->ChangeHistory[(int)uVar21].Changed,&local_140,
                        pTVar22);
        EVar12 = local_184;
        if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.AllocatorInstance.Data);
          EVar12 = local_184;
        }
      }
    }
  }
  else {
    if (local_d8.bIsNetworkProfilerActive == false) {
      local_180 = 0;
    }
    else {
      QueryPerformanceCounter(&local_130);
      local_180 = local_130.s.LowPart;
    }
    if (local_d8.bIsNetworkProfilerActive != false) {
      if (__CsvProfilerStat1854 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
        __CsvProfilerStat1854 = true;
      }
      FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
      local_d8.PropertiesChanged.NumBits = (pFVar9->Parents).ArrayNum;
      uVar21 = local_d8.PropertiesChanged.NumBits + 0x1fU >> 5;
      if (local_d8.PropertiesChanged.NumBits + 0x1fU >> 5 != 0) {
        if (local_d8.PropertiesChanged.MaxBits + 0x1fU >> 5 < uVar21) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&local_d8.PropertiesChanged.AllocatorInstance,0,uVar21,4);
          local_d8.PropertiesChanged.MaxBits = uVar21 << 5;
        }
        FVar18 = (ForElementType<unsigned_int>)&local_d8.PropertiesChanged;
        if (local_d8.PropertiesChanged.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar18 = local_d8.PropertiesChanged.AllocatorInstance.SecondaryData;
        }
        memset((void *)FVar18,0,(ulonglong)uVar21 << 2);
        uVar21 = local_d8.PropertiesChanged.NumBits & 0x8000001f;
        if ((int)uVar21 < 0) {
          uVar21 = (uVar21 - 1 | 0xffffffe0) + 1;
        }
        if (uVar21 != 0) {
          FVar18 = (ForElementType<unsigned_int>)&local_d8.PropertiesChanged;
          if (local_d8.PropertiesChanged.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar18 = local_d8.PropertiesChanged.AllocatorInstance.SecondaryData;
          }
          puVar2 = (uint *)((longlong)FVar18 +
                           (longlong)
                           ((int)(local_d8.PropertiesChanged.NumBits +
                                 (local_d8.PropertiesChanged.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
          *puVar2 = *puVar2 & 0xffffffffU >> (-(char)uVar21 & 0x1fU);
        }
      }
      local_d8.PropertiesCompared.NumBits = (local_170->Parents).ArrayNum;
      uVar21 = local_d8.PropertiesCompared.NumBits + 0x1fU >> 5;
      if (local_d8.PropertiesCompared.NumBits + 0x1fU >> 5 != 0) {
        if (local_d8.PropertiesCompared.MaxBits + 0x1fU >> 5 < uVar21) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&local_d8.PropertiesCompared.AllocatorInstance,0,uVar21,4);
          local_d8.PropertiesCompared.MaxBits = uVar21 << 5;
        }
        FVar18 = (ForElementType<unsigned_int>)&local_d8.PropertiesCompared;
        if (local_d8.PropertiesCompared.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar18 = local_d8.PropertiesCompared.AllocatorInstance.SecondaryData;
        }
        memset((void *)FVar18,0,(ulonglong)uVar21 << 2);
        uVar21 = local_d8.PropertiesCompared.NumBits & 0x8000001f;
        if ((int)uVar21 < 0) {
          uVar21 = (uVar21 - 1 | 0xffffffe0) + 1;
        }
        if (uVar21 != 0) {
          FVar18 = (ForElementType<unsigned_int>)&local_d8.PropertiesCompared;
          if (local_d8.PropertiesCompared.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar18 = local_d8.PropertiesCompared.AllocatorInstance.SecondaryData;
          }
          puVar2 = (uint *)((longlong)FVar18 +
                           (longlong)
                           ((int)(local_d8.PropertiesCompared.NumBits +
                                 (local_d8.PropertiesCompared.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
          *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)uVar21 & 0x1f);
        }
      }
      FCsvProfiler::EndExclusiveStat("NetworkProfiler");
    }
    if ((pFVar3 == (FScriptContainerElement *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StackParams.ShadowData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                            ,0x5ef,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      EVar12 = (*pcVar4)();
      return EVar12;
    }
    iVar14 = 0;
    if (0 < (local_d8.Parents)->ArrayNum) {
      do {
        bVar10 = CompareParentProperty(iVar14,&local_d8,&local_100);
        if (local_d8.bIsNetworkProfilerActive != false) {
          if (((iVar14 < 0) || (local_d8.PropertiesChanged.NumBits <= iVar14)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar11)) {
            pcVar4 = (code *)swi(3);
            EVar12 = (*pcVar4)();
            return EVar12;
          }
          FVar18 = (ForElementType<unsigned_int>)&local_d8.PropertiesChanged;
          if (local_d8.PropertiesChanged.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar18 = local_d8.PropertiesChanged.AllocatorInstance.SecondaryData;
          }
          iVar13 = iVar14;
          if (iVar14 < 0) {
            iVar13 = iVar14 + 0x1f;
          }
          puVar2 = (uint *)((longlong)FVar18 + (longlong)(iVar13 >> 5) * 4);
          uVar21 = 1 << ((byte)iVar14 & 0x1f);
          if (bVar10) {
            *puVar2 = *puVar2 | uVar21;
          }
          else {
            *puVar2 = ~uVar21 & *puVar2;
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < (local_d8.Parents)->ArrayNum);
    }
    if ((local_d8.bIsNetworkProfilerActive != false) &&
       ((GNetworkProfiler.bIsTrackingEnabled != false ||
        (GNetworkProfiler.bShouldTrackingBeEnabled != false)))) {
      if (__CsvProfilerStat1872 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
        __CsvProfilerStat1872 = true;
      }
      FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
      QueryPerformanceCounter(&local_128);
      FNetworkProfiler::
      TrackCompareProperties<FRepParentCmd,FString_(__cdecl*)(FRepParentCmd_const_&)>
                (&GNetworkProfiler,(UObject *)local_170->Owner,local_128.s.LowPart - local_180,
                 &local_d8.PropertiesCompared,&local_d8.PropertiesChanged,local_120,
                 `FRepLayout::CompareProperties'::__l35::FPropertyNameHelper::
                 ConvertParentCmdToPropertyName);
      FCsvProfiler::EndExclusiveStat("NetworkProfiler");
    }
LAB_1484c8425:
    EVar12 = local_184;
    if (local_184 == Success) goto LAB_1484c8439;
  }
  if (local_d8.PropertiesChanged.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d8.PropertiesChanged.AllocatorInstance.SecondaryData);
  }
  bVar11 = bVar6;
  bVar7 = bVar8;
  if (local_d8.PropertiesCompared.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d8.PropertiesCompared.AllocatorInstance.SecondaryData);
  }
LAB_1484c85c3:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
    bVar11 = bVar6;
    bVar7 = bVar8;
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
    bVar7 = bVar8;
  }
  if (((bVar7) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_110.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_110.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_118);
      local_110.StatData.Pad[4] = '\0';
      local_110.StatData.Pad[5] = '\0';
      local_110.StatData.Pad[6] = '\0';
      local_110.StatData.Pad[7] = '\0';
      local_110.StatData.Pad[0] = local_118.s.LowPart._0_1_;
      local_110.StatData.Pad[1] = local_118.s.LowPart._1_1_;
      local_110.StatData.Pad[2] = local_118.s.LowPart._2_1_;
      local_110.StatData.Pad[3] = local_118.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_110);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return EVar12;
}

// ConstructProperties @ 1484cb600

void __thiscall FRepLayout::ConstructProperties(FRepLayout *this,FRepStateStaticBuffer *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Parents).ArrayNum;
  pFVar7 = (this->Parents).AllocatorInstance.Data;
  pFVar2 = (param_1->Buffer).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x30;
LAB_1484cb634:
  do {
    if ((this->Parents).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRepParentCmd_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar6) {
      return;
    }
    if (*(int *)(pFVar7 + 0x10) == 0) {
      if ((param_1->Buffer).ArrayNum <
          *(int *)(*(longlong *)pFVar7 + 0x34) * *(int *)(*(longlong *)pFVar7 + 0x30) +
          *(int *)(pFVar7 + 0x18)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Parent.ShadowOffset + Parent.Property->GetSize()) <= InShadowData.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                           ,0x1cc5,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar3 = *(longlong **)pFVar7;
      if ((*(uint *)(plVar3 + 7) >> 9 & 1) != 0) {
        memset(pFVar2 + *(int *)(pFVar7 + 0x18),0,
               (longlong)*(int *)((longlong)plVar3 + 0x34) * (longlong)(int)plVar3[6]);
        pFVar7 = pFVar7 + 0x30;
        goto LAB_1484cb634;
      }
      (**(code **)(*plVar3 + 0x150))();
    }
    pFVar7 = pFVar7 + 0x30;
  } while( true );
}

// CopyProperties @ 1484cb730

void __thiscall
FRepLayout::CopyProperties
          (FRepLayout *this,FRepStateStaticBuffer *param_1,
          TRepDataBufferBase<0,unsigned_char_const_> param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *_Src;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *_Dst;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Parents).ArrayNum;
  pFVar7 = (this->Parents).AllocatorInstance.Data;
  pFVar2 = (param_1->Buffer).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x30;
LAB_1484cb765:
  do {
    if ((this->Parents).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRepParentCmd_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar6) {
      return;
    }
    if (*(int *)(pFVar7 + 0x10) == 0) {
      if ((param_1->Buffer).ArrayNum <
          *(int *)(*(longlong *)pFVar7 + 0x34) * *(int *)(*(longlong *)pFVar7 + 0x30) +
          *(int *)(pFVar7 + 0x18)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Parent.ShadowOffset + Parent.Property->GetSize()) <= InShadowData.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                           ,0x1cd5,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      _Src = (FScriptContainerElement *)(param_2.Data + *(int *)(pFVar7 + 0x14));
      plVar3 = *(longlong **)pFVar7;
      _Dst = pFVar2 + *(int *)(pFVar7 + 0x18);
      if (_Dst != _Src) {
        if ((*(uint *)(plVar3 + 7) >> 0x1e & 1) != 0) {
          memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar3 + 0x34) * (longlong)(int)plVar3[6]);
          pFVar7 = pFVar7 + 0x30;
          goto LAB_1484cb765;
        }
        (**(code **)(*plVar3 + 0xf0))(plVar3,_Dst,_Src,(int)plVar3[6]);
      }
    }
    pFVar7 = pFVar7 + 0x30;
  } while( true );
}

// CountBytes @ 1484cd0e0

void __thiscall FRepLayout::CountBytes(FRepLayout *this,FArchive *param_1)

{
  TMap<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  FLifetimeCustomDeltaState *pFVar4;
  longlong lVar5;
  uint *puVar6;
  undefined1 local_98 [12];
  uint uStack_8c;
  undefined1 *local_88;
  uint uStack_80;
  int iStack_7c;
  undefined8 local_78;
  FScopeMarker local_70;
  FScopeMarker local_48;
  
  ::FString::FString((FString *)local_98,"FRepLayout::CountBytes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker
            (&local_70,param_1,(FString *)local_98);
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_70);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->Parents).ArrayNum * 0x30,
             (longlong)(this->Parents).ArrayMax * 0x30);
  ::FString::FString((FString *)local_98,"Parents");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_70,(FString *)local_98);
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_70);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->Cmds).ArrayNum << 5,(longlong)(this->Cmds).ArrayMax << 5);
  ::FString::FString((FString *)local_98,"Cmds");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_70,(FString *)local_98);
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_70);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->BaseHandleToCmdIndex).ArrayNum << 4,
             (longlong)(this->BaseHandleToCmdIndex).ArrayMax << 4);
  ::FString::FString((FString *)local_98,"BaseHandleToCmdIndex");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_70,(FString *)local_98);
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_70);
  FRepSerializationSharedInfo::CountBytes(&this->SharedInfoRPC,param_1);
  ::FString::FString((FString *)local_98,"SharedInfoRPC");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_70,(FString *)local_98);
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_70);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)((this->SharedInfoRPCParentsChanged).NumBits + 0x1fU >> 5) << 2);
  ::FString::FString((FString *)local_98,"SharedInfoRPCParentsChanged");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_70,(FString *)local_98);
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_70);
  if ((this->LifetimeCustomPropertyState).Ptr != (FLifetimeCustomDeltaState *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x28,0x28);
    pFVar4 = (this->LifetimeCustomPropertyState).Ptr;
    ::FString::FString((FString *)local_98,"FLifetimeCustomDeltaState::CountBytes");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker
              (&local_48,param_1,(FString *)local_98);
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(pFVar4->LifetimeCustomDeltaProperties).ArrayNum * 0x18,
               (longlong)(pFVar4->LifetimeCustomDeltaProperties).ArrayMax * 0x18);
    ::FString::FString((FString *)local_98,"LifetimeCustomDeltaProperties");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,(FString *)local_98);
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(pFVar4->LifetimeCustomDeltaIndexLookup).ArrayNum * 2);
    ::FString::FString((FString *)local_98,"LifetimeCustomDeltaIndexLookup");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,(FString *)local_98);
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_48);
  }
  ::FString::FString((FString *)local_98,"LifetimeCustomPropertyState");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_70,(FString *)local_98);
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_70);
  this_00 = &this->NetSerializeLayouts;
  TSet<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this_00,param_1);
  iVar2 = *(int *)&(this->NetSerializeLayouts).field_0x28;
  local_88 = &(this->NetSerializeLayouts).field_0x10;
  local_48.Ar._0_4_ = 0;
  local_48.Ar._4_4_ = 1;
  local_48.ScopeStack._0_4_ = 0;
  local_48.ScopeName.Data.ArrayMax = 0;
  if (iVar2 != 0) {
    puVar6 = *(uint **)&(this->NetSerializeLayouts).field_0x20;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)local_88;
    }
    uVar3 = *puVar6;
    while (uVar3 == 0) {
      lVar5 = (longlong)(int)local_48.Ar;
      local_48.ScopeStack._0_4_ = (int)local_48.ScopeStack + 0x20;
      local_48.Ar._0_4_ = (int)local_48.Ar + 1;
      local_48.ScopeName.Data.ArrayMax = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_48.Ar)
      goto LAB_1484cd48c;
      uVar3 = puVar6[lVar5 + 1];
    }
    local_48.Ar._4_4_ = -uVar3 & uVar3;
    uVar1 = (ulonglong)local_48.Ar._4_4_ * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_48.ScopeName.Data.ArrayMax = (int)lVar5 + -1 + (int)local_48.ScopeStack;
    if (iVar2 < local_48.ScopeName.Data.ArrayMax) {
      local_48.ScopeName.Data.ArrayMax = iVar2;
    }
  }
LAB_1484cd48c:
  local_48.ScopeName.Data.ArrayNum = -1;
  local_48.ScopeStack._4_4_ = iStack_7c;
  uStack_80 = 0xffffffff;
  local_78 = CONCAT44(iStack_7c,(int)local_48.ScopeStack);
  local_98._0_8_ = this_00;
  local_48.PreWorkPos = (ulong64)this_00;
  local_48.ScopeName.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_88;
  local_98._8_4_ = (int)local_48.Ar;
  uStack_8c = local_48.Ar._4_4_;
  iStack_7c = local_48.ScopeName.Data.ArrayMax;
  if (local_48.ScopeName.Data.ArrayMax < iVar2) {
    do {
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)
                         *(int *)((longlong)iStack_7c * 0x20 + 0x10 + *(longlong *)local_98._0_8_)
                         << 5,
                 (longlong)*(int *)((longlong)iStack_7c * 0x20 + 0x14 + *(longlong *)local_98._0_8_)
                 << 5);
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_98 + 8));
    } while (iStack_7c < *(int *)(local_88 + 0x18));
  }
  ::FString::FString((FString *)local_98,"NetSerializeLayouts");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_70,(FString *)local_98);
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_70);
  return;
}

// CreateFromClass @ 1484ce800

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FRepLayout,1> * __cdecl
FRepLayout::CreateFromClass
          (TSharedPtr<FRepLayout,1> *__return_storage_ptr__,UClass *param_1,UNetConnection *param_2,
          ECreateRepLayoutFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  FRepLayout *this;
  TSharedPtr<FRepLayout,1> *pTVar3;
  TRawPtrProxy<FRepLayout> local_res8;
  
  this = ::operator_new(0x118);
  if (this == (FRepLayout *)0x0) {
    local_res8.Object = (FRepLayout *)0x0;
  }
  else {
    local_res8.Object = FRepLayout(this);
    if ((((local_res8.Object != (FRepLayout *)0x0) && ((local_res8.Object)->_padding_ != 0)) &&
        ((local_res8.Object)->_padding_ != 0)) && (0 < *(int *)((local_res8.Object)->_padding_ + 8))
       ) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedPtr<FRepLayout,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedPtr<FRepLayout,1>::TSharedPtr<FRepLayout,1><FRepLayout>(__return_storage_ptr__,&local_res8)
  ;
  if (__return_storage_ptr__->Object == (FRepLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FRepLayout,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  InitFromClass(__return_storage_ptr__->Object,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// CreateFromFunction @ 1484ce8f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FRepLayout,1> * __cdecl
FRepLayout::CreateFromFunction
          (TSharedPtr<FRepLayout,1> *__return_storage_ptr__,UFunction *param_1,
          UNetConnection *param_2,ECreateRepLayoutFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  FRepLayout *this;
  TSharedPtr<FRepLayout,1> *pTVar3;
  TRawPtrProxy<FRepLayout> local_res8;
  
  this = ::operator_new(0x118);
  if (this == (FRepLayout *)0x0) {
    local_res8.Object = (FRepLayout *)0x0;
  }
  else {
    local_res8.Object = FRepLayout(this);
    if ((((local_res8.Object != (FRepLayout *)0x0) && ((local_res8.Object)->_padding_ != 0)) &&
        ((local_res8.Object)->_padding_ != 0)) && (0 < *(int *)((local_res8.Object)->_padding_ + 8))
       ) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedPtr<FRepLayout,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedPtr<FRepLayout,1>::TSharedPtr<FRepLayout,1><FRepLayout>(__return_storage_ptr__,&local_res8)
  ;
  if (__return_storage_ptr__->Object == (FRepLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FRepLayout,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  InitFromFunction(__return_storage_ptr__->Object,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// CreateFromStruct @ 1484ce9e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FRepLayout,1> * __cdecl
FRepLayout::CreateFromStruct
          (TSharedPtr<FRepLayout,1> *__return_storage_ptr__,UStruct *param_1,UNetConnection *param_2
          ,ECreateRepLayoutFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  FRepLayout *this;
  TSharedPtr<FRepLayout,1> *pTVar3;
  TRawPtrProxy<FRepLayout> local_res8;
  
  this = ::operator_new(0x118);
  if (this == (FRepLayout *)0x0) {
    local_res8.Object = (FRepLayout *)0x0;
  }
  else {
    local_res8.Object = FRepLayout(this);
    if ((((local_res8.Object != (FRepLayout *)0x0) && ((local_res8.Object)->_padding_ != 0)) &&
        ((local_res8.Object)->_padding_ != 0)) && (0 < *(int *)((local_res8.Object)->_padding_ + 8))
       ) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedPtr<FRepLayout,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedPtr<FRepLayout,1>::TSharedPtr<FRepLayout,1><FRepLayout>(__return_storage_ptr__,&local_res8)
  ;
  if (__return_storage_ptr__->Object == (FRepLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FRepLayout,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  InitFromStruct(__return_storage_ptr__->Object,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// CreateNetfieldExportGroup @ 1484cead0

TSharedPtr<FNetFieldExportGroup,1> * __thiscall
FRepLayout::CreateNetfieldExportGroup
          (FRepLayout *this,TSharedPtr<FNetFieldExportGroup,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FNetFieldExportGroup *pFVar12;
  FNetFieldExportGroup *pFVar13;
  FNetFieldExportGroup *pFVar14;
  TSharedPtr<FNetFieldExportGroup,1> *pTVar15;
  undefined8 *puVar16;
  FNetFieldExportGroup *pFVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  TArray<FNetFieldExport,TSizedDefaultAllocator<32>_> *this_00;
  undefined8 local_res8;
  TSharedPtr<FNetFieldExportGroup,1> *local_res10;
  undefined8 local_res18;
  longlong local_res20;
  FString local_88;
  FScriptContainerElement local_78 [56];
  
  local_res10 = __return_storage_ptr__;
  pFVar12 = ::operator_new(0x30);
  pFVar17 = (FNetFieldExportGroup *)0x0;
  pFVar14 = pFVar17;
  if (pFVar12 != (FNetFieldExportGroup *)0x0) {
    (pFVar12->PathName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar12->PathName).Data.ArrayNum = 0;
    (pFVar12->PathName).Data.ArrayMax = 0;
    pFVar12->PathNameIndex = 0;
    (pFVar12->NetFieldExports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar12->NetFieldExports).ArrayNum = 0;
    (pFVar12->NetFieldExports).ArrayMax = 0;
    pFVar12->bDirtyForReplay = true;
    pFVar14 = pFVar12;
  }
  __return_storage_ptr__->Object = pFVar14;
  pFVar13 = ::operator_new(0x18);
  pFVar12 = pFVar17;
  if (pFVar13 != (FNetFieldExportGroup *)0x0) {
    (pFVar13->PathName).Data.ArrayNum = 1;
    (pFVar13->PathName).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         &
         ___7__TReferenceControllerWithDeleter_VFNetFieldExportGroup__U__DefaultDeleter_VFNetFieldExportGroup___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (pFVar13->PathName).Data.ArrayMax = 1;
    *(FNetFieldExportGroup **)&pFVar13->PathNameIndex = pFVar14;
    pFVar12 = pFVar13;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar12;
  pFVar14 = (FNetFieldExportGroup *)
            UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)this->Owner,&local_88,(UObject *)0x0);
  if ((__return_storage_ptr__->Object == (FNetFieldExportGroup *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar15 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar6)();
    return pTVar15;
  }
  pFVar12 = __return_storage_ptr__->Object;
  if (pFVar12 != pFVar14) {
    pFVar20 = (pFVar12->PathName).Data.AllocatorInstance.Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pFVar12->PathName).Data.AllocatorInstance.Data =
         (pFVar14->PathName).Data.AllocatorInstance.Data;
    (pFVar14->PathName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar12->PathName).Data.ArrayNum = (pFVar14->PathName).Data.ArrayNum;
    (pFVar12->PathName).Data.ArrayMax = (pFVar14->PathName).Data.ArrayMax;
    (pFVar14->PathName).Data.ArrayNum = 0;
    (pFVar14->PathName).Data.ArrayMax = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Object == (FNetFieldExportGroup *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar15 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar6)();
    return pTVar15;
  }
  pFVar14 = __return_storage_ptr__->Object;
  uVar10 = (this->Cmds).ArrayNum;
  this_00 = &pFVar14->NetFieldExports;
  iVar2 = (pFVar14->NetFieldExports).ArrayNum;
  piVar1 = &(pFVar14->NetFieldExports).ArrayNum;
  if (iVar2 < (int)uVar10) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,uVar10 - iVar2,&this_00->AllocatorInstance,piVar1,
                       &(pFVar14->NetFieldExports).ArrayMax);
    DefaultConstructItems<FNetFieldExport,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar9 * 0x28,uVar10 - iVar2);
  }
  else {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((int)uVar10 < iVar2) {
      uVar18 = iVar2 - uVar10;
      if (((int)(uVar10 | uVar18) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar6)();
        return pTVar15;
      }
      if (uVar18 != 0) {
        TArray<FNetFieldExport,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar10,uVar18);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&this_00->AllocatorInstance,*piVar1,&(pFVar14->NetFieldExports).ArrayMax);
      }
    }
  }
  if (0 < (this->Cmds).ArrayNum) {
    local_res20 = 0;
    pFVar14 = pFVar17;
    do {
      uVar18 = (uint)pFVar17;
      uVar19 = ~uVar18 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar18 < (this->Cmds).ArrayNum) {
        uVar10 = uVar19;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar6)();
        return pTVar15;
      }
      uVar10 = 0;
      if (*(longlong *)((this->Cmds).AllocatorInstance.Data + (longlong)&(pFVar14->PathName).Data)
          == 0) {
        local_res18 = 0;
        puVar16 = &local_res18;
      }
      else {
        uVar11 = uVar10;
        if ((int)uVar18 < (this->Cmds).ArrayNum) {
          uVar11 = uVar19;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar6)();
          return pTVar15;
        }
        pvVar4 = *(void **)((this->Cmds).AllocatorInstance.Data +
                           (longlong)&(pFVar14->PathName).Data);
        bVar8 = IsThisNotNull(pvVar4,"FField::GetFName");
        if (bVar8) {
          puVar16 = &local_res8;
          local_res8 = *(undefined8 *)((longlong)pvVar4 + 0x20);
        }
        else {
          local_res8 = 0;
          puVar16 = &local_res8;
        }
      }
      uVar11 = uVar10;
      if ((int)uVar18 < (this->Cmds).ArrayNum) {
        uVar11 = uVar19;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar6)();
        return pTVar15;
      }
      pTVar15 = local_res10;
      uVar5 = *puVar16;
      uVar3 = *(undefined4 *)
               ((this->Cmds).AllocatorInstance.Data +
               (longlong)&(pFVar14->NetFieldExports).AllocatorInstance);
      if ((local_res10->Object == (FNetFieldExportGroup *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar6)();
        return pTVar15;
      }
      pFVar12 = pTVar15->Object;
      if ((int)uVar18 < (pFVar12->NetFieldExports).ArrayNum) {
        uVar10 = uVar19;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar6)();
        return pTVar15;
      }
      lVar7 = local_res20;
      pFVar20 = (pFVar12->NetFieldExports).AllocatorInstance.Data + local_res20;
      if (pFVar20 != local_78) {
        iVar2 = *(int *)(pFVar20 + 0xc);
        *(undefined4 *)&pFVar20[8].field_0x0 = 0;
        if (iVar2 == 0) {
          *(int *)(pFVar20 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,iVar2,(ForAnyElementType *)pFVar20,0,(int *)(pFVar20 + 0xc));
        }
      }
      *(uint *)&pFVar20[0x10].field_0x0 = uVar18;
      pFVar17 = (FNetFieldExportGroup *)(ulonglong)(uVar18 + 1);
      *(undefined4 *)(pFVar20 + 0x14) = uVar3;
      pFVar14 = (FNetFieldExportGroup *)&(pFVar14->NetFieldExports).ArrayNum;
      *(undefined8 *)&pFVar20[0x18].field_0x0 = uVar5;
      *(undefined4 *)&pFVar20[0x20].field_0x0 = 0x100;
      local_res20 = lVar7 + 0x28;
    } while ((int)(uVar18 + 1) < (this->Cmds).ArrayNum);
  }
  return local_res10;
}

// CreateRepState @ 1484cf1c0

TUniquePtr<FRepState,TDefaultDelete<FRepState>_> __thiscall
FRepLayout::CreateRepState
          (FRepLayout *this,TRepDataBufferBase<0,unsigned_char_const_> param_1,
          TSharedPtr<FRepChangedPropertyTracker,1> *param_2,ECreateRepStateFlags param_3)

{
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  TUniquePtr<FReceivingRepState,TDefaultDelete<FReceivingRepState>_> *this_00;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FSendingRepState *pFVar10;
  TUniquePtr<FRepState,TDefaultDelete<FRepState>_> TVar11;
  FRepChangedHistory *pFVar12;
  TSharedRef<FRepLayout_const_,1> *pTVar13;
  FSendingRepState *pFVar14;
  FSendingRepState *pFVar15;
  longlong lVar16;
  ForElementType<unsigned_int> *pFVar17;
  uint uVar18;
  ForAnyElementType FVar19;
  ForElementType<unsigned_int> *this_01;
  FSharedReferencer<1> FVar20;
  undefined4 in_register_0000008c;
  longlong *plVar21;
  int iVar22;
  FRepLayout *pFVar23;
  byte in_stack_00000028;
  TSharedRef<FRepLayout_const_,1> local_68;
  FRepStateStaticBuffer local_58;
  
  plVar21 = (longlong *)CONCAT44(in_register_0000008c,param_3);
  pFVar10 = ::operator_new(0x10);
  pFVar15 = (FSendingRepState *)0x0;
  pFVar14 = pFVar15;
  if (pFVar10 != (FSendingRepState *)0x0) {
    pFVar10->bOpenAckedCalled = false;
    pFVar10->SavedRemoteRole = '\0';
    pFVar10->SavedRole = '\0';
    pFVar10->field_0x3 = 0;
    pFVar10->HistoryStart = 0;
    pFVar10->HistoryEnd = 0;
    pFVar10->NumNaks = 0;
    pFVar14 = pFVar10;
  }
  *(FSendingRepState **)param_1.Data = pFVar14;
  lVar2 = *plVar21;
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x18) != (this->Parents).ArrayNum) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InRepChangedPropertyTracker->GetParentCount() == Parents.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                           ,0x1c97,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar11.Ptr = (FRepState *)(*pcVar5)();
      return (TUniquePtr<FRepState,TDefaultDelete<FRepState>_>)TVar11.Ptr;
    }
    lVar3 = *(longlong *)param_1.Data;
    pFVar10 = ::operator_new(0x4c0);
    pFVar14 = pFVar15;
    if (pFVar10 != (FSendingRepState *)0x0) {
      pFVar10->bOpenAckedCalled = false;
      pFVar10->SavedRemoteRole = '\x04';
      lVar16 = 0x20;
      (pFVar10->SavedRole).Value = '\x04';
      pFVar10->HistoryStart = 0;
      pFVar10->HistoryEnd = 0;
      pFVar10->NumNaks = 0;
      pFVar10->LastChangelistIndex = 0;
      pFVar10->LastCompareIndex = 0;
      pFVar10->CustomDeltaChangeIndex = 0;
      (pFVar10->RepFlags).field0_0x0.Value = 0;
      (pFVar10->RepChangedPropertyTracker).Object = (FRepChangedPropertyTracker *)0x0;
      (pFVar10->RepChangedPropertyTracker).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar12 = pFVar10->ChangeHistory;
      do {
        (pFVar12->OutPacketIdRange).First = -1;
        (pFVar12->OutPacketIdRange).Last = -1;
        (pFVar12->Changed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar12->Changed).ArrayNum = 0;
        (pFVar12->Changed).ArrayMax = 0;
        pFVar12->Resend = false;
        pFVar12 = pFVar12 + 1;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      pTVar1 = &pFVar10->InactiveChangelist;
      (pFVar10->Retirement).ArrayNum = 0;
      (pFVar10->Retirement).ArrayMax = 0;
      (pFVar10->PreOpenAckHistory).ArrayNum = 0;
      (pFVar10->PreOpenAckHistory).ArrayMax = 0;
      (pFVar10->LifetimeChangelist).ArrayNum = 0;
      (pFVar10->LifetimeChangelist).ArrayMax = 0;
      (pFVar10->Retirement).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->PreOpenAckHistory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->LifetimeChangelist).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar10->InactiveChangelist).ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,1,0,&pTVar1->AllocatorInstance,1,&(pFVar10->InactiveChangelist).ArrayMax);
      *(undefined2 *)(pTVar1->AllocatorInstance).Data = 0;
      (pFVar10->InactiveParents).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
      ;
      (pFVar10->InactiveParents).NumBits = 0;
      (pFVar10->InactiveParents).MaxBits = 0x80;
      (pFVar10->RecentCustomDeltaState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->RecentCustomDeltaState).ArrayNum = 0;
      (pFVar10->RecentCustomDeltaState).ArrayMax = 0;
      (pFVar10->CDOCustomDeltaState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->CDOCustomDeltaState).ArrayNum = 0;
      (pFVar10->CDOCustomDeltaState).ArrayMax = 0;
      (pFVar10->CheckpointCustomDeltaState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->CheckpointCustomDeltaState).ArrayNum = 0;
      (pFVar10->CheckpointCustomDeltaState).ArrayMax = 0;
      pFVar14 = pFVar10;
    }
    pFVar10 = *(FSendingRepState **)(lVar3 + 8);
    if (pFVar10 != pFVar14) {
      *(FSendingRepState **)(lVar3 + 8) = pFVar14;
      TDefaultDelete<FSendingRepState>::operator()
                ((TDefaultDelete<FSendingRepState> *)(lVar3 + 8),pFVar10);
    }
    lVar3 = *plVar21;
    lVar16 = *(longlong *)(*(longlong *)param_1.Data + 8);
    lVar4 = plVar21[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    pTVar6 = *(TReferenceControllerBase<1> **)(lVar16 + 0x28);
    *(longlong *)(lVar16 + 0x20) = lVar3;
    *(longlong *)(lVar16 + 0x28) = lVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    RebuildConditionalProperties
              (this,*(FSendingRepState **)(*(longlong *)param_1.Data + 8),(FReplicationFlags)0x0);
    lVar3 = *(longlong *)(*(longlong *)param_1.Data + 8);
    iVar9 = (this->Parents).ArrayNum;
    this_01 = (ForElementType<unsigned_int> *)(lVar3 + 0x470);
    uVar8 = iVar9 + 0x1f;
    *(int *)(lVar3 + 0x488) = iVar9;
    uVar18 = uVar8 >> 5;
    if (uVar8 >> 5 != 0) {
      if (*(int *)(lVar3 + 0x48c) + 0x1fU >> 5 < uVar18) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(this_01,0,uVar18,4);
        *(uint *)(lVar3 + 0x48c) = uVar18 << 5;
      }
      pFVar17 = *(ForElementType<unsigned_int> **)(lVar3 + 0x480);
      if (*(ForElementType<unsigned_int> **)(lVar3 + 0x480) == (ForElementType<unsigned_int> *)0x0)
      {
        pFVar17 = this_01;
      }
      memset(pFVar17,0,(ulonglong)uVar18 << 2);
      uVar18 = *(int *)(lVar3 + 0x488) >> 0x1f & 0x1f;
      uVar8 = *(int *)(lVar3 + 0x488) + uVar18;
      iVar9 = (uVar8 & 0x1f) - uVar18;
      if (iVar9 != 0) {
        pFVar17 = *(ForElementType<unsigned_int> **)(lVar3 + 0x480);
        if (*(ForElementType<unsigned_int> **)(lVar3 + 0x480) == (ForElementType<unsigned_int> *)0x0
           ) {
          pFVar17 = this_01;
        }
        *(uint *)(pFVar17->InlineData + (longlong)((int)uVar8 >> 5) * 4) =
             *(uint *)(pFVar17->InlineData + (longlong)((int)uVar8 >> 5) * 4) &
             0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
      }
    }
  }
  if ((in_stack_00000028 & 1) == 0) {
    pTVar13 = TSharedFromThis<FRepLayout,1>::AsShared
                        ((TSharedFromThis<FRepLayout,1> *)&this->_padding_,&local_68);
    local_58.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Buffer.ArrayNum = 0;
    local_58.Buffer.ArrayMax = 0;
    FVar20.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
    pFVar23 = pTVar13->Object;
    if (FVar20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.RepLayout.Object = pFVar23;
    local_58.RepLayout.SharedReferenceCount.ReferenceController = FVar20.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    FVar19.Data = (FScriptContainerElement *)pFVar15;
    iVar9 = 0;
    iVar22 = 0;
    if (lVar2 == 0) {
      InitRepStateStaticBuffer(this,&local_58,(TRepDataBufferBase<0,unsigned_char_const_>)param_2);
      FVar19.Data = local_58.Buffer.AllocatorInstance.Data;
      FVar20.ReferenceController = local_58.RepLayout.SharedReferenceCount.ReferenceController;
      pFVar23 = local_58.RepLayout.Object;
      iVar9 = local_58.Buffer.ArrayNum;
      iVar22 = local_58.Buffer.ArrayMax;
    }
    this_00 = *(TUniquePtr<FReceivingRepState,TDefaultDelete<FReceivingRepState>_> **)param_1.Data;
    pFVar14 = ::operator_new(0xd0);
    if (pFVar14 != (FSendingRepState *)0x0) {
      *(FScriptContainerElement **)pFVar14 = FVar19.Data;
      pFVar14->HistoryEnd = iVar9;
      pFVar14->NumNaks = iVar22;
      *(FRepLayout **)&pFVar14->LastChangelistIndex = pFVar23;
      *(TReferenceControllerBase<1> **)&pFVar14->CustomDeltaChangeIndex = FVar20.ReferenceController
      ;
      local_58.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Buffer.ArrayNum = 0;
      local_58.Buffer.ArrayMax = 0;
      if (FVar20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar20.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar20.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      (pFVar14->RepChangedPropertyTracker).Object = (FRepChangedPropertyTracker *)0x0;
      (pFVar14->RepChangedPropertyTracker).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar14->ChangeHistory[0].Changed.ArrayNum = 0;
      pFVar14->ChangeHistory[0].Changed.ArrayMax = 0;
      *(undefined4 *)&pFVar14->ChangeHistory[0].Resend = 0;
      *(undefined4 *)&pFVar14->ChangeHistory[0].field_0x1c = 0x80;
      pFVar14->ChangeHistory[1].OutPacketIdRange.First = -1;
      pFVar14->ChangeHistory[1].OutPacketIdRange.Last = 0;
      pFVar14->ChangeHistory[1].Changed.ArrayNum = 0;
      pFVar14->ChangeHistory[1].Changed.ArrayMax = 0;
      *(undefined4 *)&pFVar14->ChangeHistory[1].Resend = 0;
      pFVar14->ChangeHistory[2].OutPacketIdRange.First = 0;
      pFVar14->ChangeHistory[2].OutPacketIdRange.Last = 0;
      pFVar14->ChangeHistory[2].Changed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar14->ChangeHistory[2].Changed.ArrayNum = 0;
      pFVar14->ChangeHistory[2].Changed.ArrayMax = 0;
      *(undefined8 *)&pFVar14->ChangeHistory[2].Resend = 0;
      pFVar14->ChangeHistory[3].Changed.ArrayNum = 0;
      pFVar14->ChangeHistory[3].Changed.ArrayMax = 0;
      *(undefined4 *)&pFVar14->ChangeHistory[3].Resend = 0;
      *(undefined4 *)&pFVar14->ChangeHistory[3].field_0x1c = 0x80;
      pFVar14->ChangeHistory[4].OutPacketIdRange.First = -1;
      pFVar14->ChangeHistory[4].OutPacketIdRange.Last = 0;
      pFVar14->ChangeHistory[4].Changed.ArrayNum = 0;
      pFVar14->ChangeHistory[4].Changed.ArrayMax = 0;
      *(undefined4 *)&pFVar14->ChangeHistory[4].Resend = 0;
      pFVar15 = pFVar14;
    }
    TUniquePtr<FReceivingRepState,TDefaultDelete<FReceivingRepState>_>::Reset
              (this_00,(FReceivingRepState *)pFVar15);
    FRepStateStaticBuffer::~FRepStateStaticBuffer(&local_58);
  }
  return (TUniquePtr<FRepState,TDefaultDelete<FRepState>_>)(FRepState *)param_1.Data;
}

// CreateReplicationChangelistMgr @ 1484cf650

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FReplicationChangelistMgr,1> * __thiscall
FRepLayout::CreateReplicationChangelistMgr
          (FRepLayout *this,TSharedPtr<FReplicationChangelistMgr,1> *__return_storage_ptr__,
          UObject *param_1,ECreateReplicationChangelistMgrFlags param_2)

{
  int *piVar1;
  ushort uVar2;
  FLifetimeCustomDeltaState *pFVar3;
  ForElementType<UE::Net::FNetToken> FVar4;
  FRepSerializationSharedInfo *pFVar5;
  int iVar6;
  FRepLayout *pFVar7;
  TRepDataBufferBase<0,unsigned_char_const_> TVar8;
  FRepLayout *pFVar9;
  TSharedRef<FRepLayout_const_,1> *pTVar10;
  TArray<FRepParentCmd,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  FRepLayout *pFVar13;
  FRepLayout *pFVar14;
  TSharedRef<FRepLayout_const_,1> local_48;
  TSharedRef<FRepLayout_const_,1> local_38;
  
  pFVar13 = (FRepLayout *)0x0;
  pFVar7 = pFVar13;
  if ((((param_2 & SkipDeltaCustomState) == None) &&
      (pFVar3 = (this->LifetimeCustomPropertyState).Ptr, pFVar7 = (FRepLayout *)0x0,
      pFVar3 != (FLifetimeCustomDeltaState *)0x0)) && (pFVar3->NumFastArrayProperties != 0)) {
    pFVar7 = ::operator_new(0x18);
    if (pFVar7 == (FRepLayout *)0x0) {
      pFVar7 = (FRepLayout *)0x0;
    }
    else {
      uVar2 = ((this->LifetimeCustomPropertyState).Ptr)->NumFastArrayProperties;
      piVar1 = (int *)((longlong)&pFVar7->_padding_ + 4);
      *(undefined4 *)&pFVar7->_padding_ = 0;
      pFVar7->_padding_ = 0;
      *piVar1 = 0;
      *(undefined4 *)&pFVar7->_padding_ = 0;
      if (uVar2 != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x90,8,(uint)uVar2,(ForAnyElementType *)&pFVar7->_padding_,
                           (int *)&pFVar7->_padding_,piVar1);
        DefaultConstructItems<FDeltaArrayHistoryState,int>
                  ((void *)((longlong)iVar6 * 0x90 + pFVar7->_padding_),(uint)uVar2);
      }
    }
  }
  TVar8.Data = (uchar *)UObject::GetArchetype(param_1);
  if (((UObject *)TVar8.Data == (UObject *)0x0) &&
     (TVar8.Data = (uchar *)param_1, 1 < (byte)LogRep._0_1_)) {
    if ((param_1 == (UObject *)0x0) || (*(longlong *)&param_1->field_0x10 == 0)) {
      ::FString::FString((FString *)&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)param_1,(FString *)&local_48,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
    if (local_48.Object != (FRepLayout *)0x0) {
      FMemory::Free(local_48.Object);
    }
  }
  pFVar9 = ::operator_new(0x880);
  pFVar14 = pFVar13;
  if (pFVar9 != (FRepLayout *)0x0) {
    pTVar10 = TSharedFromThis<FRepLayout,1>::AsShared
                        ((TSharedFromThis<FRepLayout,1> *)&this->_padding_,&local_38);
    pTVar11 = (TArray<FRepParentCmd,TSizedDefaultAllocator<32>_> *)&pFVar9->_padding_;
    pFVar9->_padding_ = 0;
    lVar12 = 0x40;
    do {
      pTVar11->AllocatorInstance = (FScriptContainerElement *)0xffffffffffffffff;
      *(longlong *)&pTVar11->ArrayNum = 0;
      *(longlong *)(pTVar11 + 1) = 0;
      *(ERepLayoutFlags *)((longlong)(pTVar11 + 1) + 8) = None;
      pTVar11 = pTVar11 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    pFVar9[7].Owner = (UStruct *)pFVar7;
    pFVar9[7].SharedInfoRPC.SharedPropertyInfo.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    pFVar9[7].SharedInfoRPC.SharedPropertyInfo.ArrayNum = 0;
    pFVar9[7].SharedInfoRPC.SharedPropertyInfo.ArrayMax = 0;
    pFVar7 = pTVar10->Object;
    pTVar10 = TSharedFromThis<FRepLayout,1>::AsShared
                        ((TSharedFromThis<FRepLayout,1> *)&pFVar7->_padding_,&local_48);
    pFVar9[7].SharedInfoRPC.SerializedProperties.Ptr = (FNetBitWriter *)0x0;
    pFVar5 = &pFVar9[7].SharedInfoRPC;
    (pFVar5->NetTokensPendingExport).AllocatorInstance.InlineData[0] = '\0';
    (pFVar5->NetTokensPendingExport).AllocatorInstance.InlineData[1] = '\0';
    (pFVar5->NetTokensPendingExport).AllocatorInstance.InlineData[2] = '\0';
    (pFVar5->NetTokensPendingExport).AllocatorInstance.InlineData[3] = '\0';
    (pFVar5->NetTokensPendingExport).AllocatorInstance.InlineData[4] = '\0';
    (pFVar5->NetTokensPendingExport).AllocatorInstance.InlineData[5] = '\0';
    (pFVar5->NetTokensPendingExport).AllocatorInstance.InlineData[6] = '\0';
    (pFVar5->NetTokensPendingExport).AllocatorInstance.InlineData[7] = '\0';
    *(FRepLayout **)
     (pFVar9[7].SharedInfoRPC.NetTokensPendingExport.AllocatorInstance.InlineData + 8) =
         pTVar10->Object;
    FVar4 = (ForElementType<UE::Net::FNetToken>)(pTVar10->SharedReferenceCount).ReferenceController;
    pFVar9[7].SharedInfoRPC.NetTokensPendingExport.AllocatorInstance.SecondaryData = FVar4;
    if (FVar4 != (ForElementType<UE::Net::FNetToken>)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar4 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar4 + 8) + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_48.SharedReferenceCount.ReferenceController._4_4_,
                        local_48.SharedReferenceCount.ReferenceController._0_4_));
    if (((pFVar7->Flags & NoReplicatedProperties) == None) && ((pFVar7->Parents).ArrayNum != 0)) {
      if (pFVar7->ShadowDataBufferSize == 0) {
        if (1 < (byte)LogRep._0_1_) {
          if (pFVar7->Owner == (UStruct *)0x0) {
            ::FString::FString((FString *)&local_48,L"None");
          }
          else {
            UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)pFVar7->Owner,(FString *)&local_48,(UObject *)0x0);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
          if (local_48.Object != (FRepLayout *)0x0) {
            FMemory::Free(local_48.Object);
          }
        }
      }
      else {
        InitRepStateStaticBuffer
                  (pFVar7,(FRepStateStaticBuffer *)&pFVar9[7].SharedInfoRPC.SerializedProperties,
                   TVar8);
      }
    }
    pFVar9[7].SharedInfoRPC.NetTokensPendingExport.ArrayNum = 0;
    pFVar9[7].SharedInfoRPC.NetTokensPendingExport.ArrayMax = 0;
    *(undefined8 *)&pFVar9[7].SharedInfoRPC.bIsValid = 0;
    pFVar7 = pFVar9 + 7;
    (pFVar7->SharedInfoRPCParentsChanged).AllocatorInstance.InlineData[0] = '\0';
    (pFVar7->SharedInfoRPCParentsChanged).AllocatorInstance.InlineData[1] = '\0';
    (pFVar7->SharedInfoRPCParentsChanged).AllocatorInstance.InlineData[2] = '\0';
    (pFVar7->SharedInfoRPCParentsChanged).AllocatorInstance.InlineData[3] = '\0';
    (pFVar7->SharedInfoRPCParentsChanged).AllocatorInstance.InlineData[4] = '\0';
    (pFVar7->SharedInfoRPCParentsChanged).AllocatorInstance.InlineData[5] = '\0';
    (pFVar7->SharedInfoRPCParentsChanged).AllocatorInstance.InlineData[6] = '\0';
    (pFVar7->SharedInfoRPCParentsChanged).AllocatorInstance.InlineData[7] = '\0';
    pFVar9[7].SharedInfoRPCParentsChanged.NumBits = 0;
    pFVar9[7].SharedInfoRPCParentsChanged.MaxBits = 0;
    *(undefined4 *)&pFVar9[7].NetSerializeLayouts = 0;
    *(undefined4 *)&pFVar9[7].NetSerializeLayouts.field_0x4 = 4;
    pFVar9[7].NetSerializeLayouts.field_0x8 = 0;
    pFVar13 = (FRepLayout *)&DAT_00000001;
    pFVar14 = pFVar9;
  }
  local_48.Object = pFVar14;
  TSharedPtr<FReplicationChangelistMgr,1>::
  TSharedPtr<FReplicationChangelistMgr,1><FReplicationChangelistMgr>
            (__return_storage_ptr__,(TRawPtrProxy<FReplicationChangelistMgr> *)&local_48);
  if (pFVar13 != (FRepLayout *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// CreateShadowBuffer @ 1484cf950

/* WARNING: Enum "Type": Some values do not have unique names */

FRepStateStaticBuffer * __thiscall
FRepLayout::CreateShadowBuffer
          (FRepLayout *this,FRepStateStaticBuffer *__return_storage_ptr__,
          TRepDataBufferBase<0,unsigned_char_const_> param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FRepLayout_const_,1> *pTVar2;
  TSharedRef<FRepLayout_const_,1> local_18;
  
  pTVar2 = TSharedFromThis<FRepLayout,1>::AsShared
                     ((TSharedFromThis<FRepLayout,1> *)&this->_padding_,&local_18);
  (__return_storage_ptr__->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Buffer).ArrayNum = 0;
  (__return_storage_ptr__->Buffer).ArrayMax = 0;
  (__return_storage_ptr__->RepLayout).Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->RepLayout).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_18.SharedReferenceCount.ReferenceController._4_4_,
                      local_18.SharedReferenceCount.ReferenceController._0_4_));
  if (((this->Flags & NoReplicatedProperties) == None) && ((this->Parents).ArrayNum != 0)) {
    if (this->ShadowDataBufferSize == 0) {
      if (1 < (byte)LogRep._0_1_) {
        if (this->Owner == (UStruct *)0x0) {
          ::FString::FString((FString *)&local_18,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->Owner,(FString *)&local_18,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        if (local_18.Object != (FRepLayout *)0x0) {
          FMemory::Free(local_18.Object);
          return __return_storage_ptr__;
        }
      }
    }
    else {
      InitRepStateStaticBuffer(this,__return_storage_ptr__,param_1);
    }
  }
  return __return_storage_ptr__;
}

// DeltaSerializeFastArrayProperty @ 1484d0080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

ERepLayoutResult __thiscall
FRepLayout::DeltaSerializeFastArrayProperty
          (FRepLayout *this,FFastArrayDeltaSerializeParams *param_1,
          FReplicationChangelistMgr *param_2)

{
  TArray<FRepParentCmd,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *pTVar2;
  TSet<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>,FDefaultSetAllocator>
  *this_00;
  TMap<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar3;
  uchar *puVar4;
  EArrayPropertyFlags EVar5;
  ushort uVar6;
  ushort uVar7;
  FNetDeltaSerializeInfo *pFVar8;
  FLifetimeCustomDeltaState *pFVar9;
  FBitWriter *pFVar10;
  FCustomDeltaChangelistState *pFVar11;
  FNetFastTArrayBaseState *pFVar12;
  longlong lVar13;
  TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
  *pTVar14;
  ForElementType<int> FVar15;
  code *pcVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  FFastArraySerializer **ppFVar20;
  undefined1 uVar21;
  FRepLayout *pFVar22;
  TRepDataBufferBase<0,unsigned_char_const_> this_01;
  bool bVar23;
  byte bVar24;
  uchar uVar25;
  ERepLayoutResult EVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  TStatId TVar31;
  TSharedPtr<FNetFieldExportGroup,1> *pTVar32;
  int *piVar33;
  uint *puVar34;
  FNetTraceCollector *pFVar35;
  ForElementType<int> FVar36;
  ForElementType<int> FVar37;
  undefined8 uVar38;
  void *pvVar39;
  ForElementType<unsigned_int> FVar40;
  undefined1 *puVar41;
  ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> FVar42;
  ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> FVar43;
  ulonglong uVar44;
  uint *puVar45;
  uint uVar46;
  longlong *plVar47;
  void *pvVar48;
  FNetTraceCollector *pFVar49;
  FScriptContainerElement *pFVar50;
  TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
  *pTVar51;
  FScriptContainerElement *pFVar52;
  FNetTraceCollector *pFVar53;
  ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> FVar54;
  TRepDataBufferBase<0,unsigned_char> TVar55;
  TStatIdData *pTVar56;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar57;
  FNetTraceCollector *pFVar58;
  uint uVar59;
  FScriptContainerElement *pFVar60;
  FScriptArrayHelper_u_8 FVar61;
  TRepDataBufferBase<0,unsigned_char_const_> TVar62;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *this_02;
  ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> FVar63;
  FName FVar64;
  int iVar65;
  undefined1 auStackY_708 [32];
  bool local_696;
  FScriptContainerElement local_695 [5];
  FNetTraceCollector *local_690;
  uint local_688;
  uint local_684;
  undefined2 local_680;
  undefined2 local_67e;
  undefined2 local_67c [2];
  uint local_678;
  FRepLayout *local_670;
  uint local_668;
  int local_664;
  int local_660;
  uint local_65c;
  undefined1 local_658;
  undefined1 local_657;
  int local_654;
  uint local_650;
  FNetBitWriter *local_648;
  ulonglong local_640;
  longlong local_638;
  TRepDataBufferBase<0,unsigned_char_const_> local_630;
  uint local_628 [2];
  FScriptContainerElement *local_620;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_618;
  FScriptContainerElement *local_608;
  FScriptContainerElement *local_600;
  ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> local_5f8;
  uint local_5f0;
  int local_5ec;
  FNetDeltaSerializeInfo *local_5e8;
  FScriptArrayHelper local_5e0;
  int local_5c0 [2];
  TRepDataBufferBase<0,unsigned_char_const_> local_5b8;
  uint local_5b0 [2];
  FNetTraceCollector *local_5a8;
  <lambda_1> local_5a0 [8];
  TArray<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_598;
  FName local_588;
  ERepLayoutResult local_580;
  uint local_57c;
  ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> local_578;
  FName local_570;
  FScriptContainerElement *local_568;
  UObject *local_560;
  FNetFieldExportGroup *local_558;
  TSharedPtr<FNetFieldExportGroup,1> local_548;
  FScriptArrayHelper local_538;
  FColor_u_0 local_518;
  int local_514 [3];
  uint local_508;
  uint local_500;
  int local_4fc;
  ForElementType<int> local_4f8;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_4f0;
  FName local_4e0;
  FScriptArrayHelper local_4d8;
  FName local_4b8;
  FString local_4a8;
  FString local_498;
  FName local_488;
  FName local_480;
  FName local_478;
  FRepHandleIterator *local_470;
  FRepHandleIterator *local_468;
  FPacketIdRange local_460;
  FString local_458;
  FScriptArrayHelper *local_448;
  uint local_440;
  undefined4 local_43c;
  FString local_438;
  TPairInitializer<int_&,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&&> local_428;
  ForAnyElementType local_418;
  FReceivePropertiesStackParams local_410;
  FComparePropertiesStackParams local_3e0;
  FChangelistIterator local_3c0;
  uint *local_3b0;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *local_3a8;
  FChangelistIterator local_3a0;
  FChangelistIterator local_390;
  FNetTraceEventScope<FNetBitReader_&> local_380;
  FRepHandleIterator local_368;
  FRepHandleIterator local_318;
  FRepHandleIterator local_2c8;
  FString local_278;
  FString local_268;
  FString local_250;
  FString local_240;
  FString local_230;
  TSharedPtr<FNetFieldExportGroup,1> local_220;
  FString local_210;
  TSharedPtr<FNetFieldExportGroup,1> local_1f8;
  undefined1 local_1e8 [48];
  FScriptContainerElement *local_1b8;
  undefined8 local_1b0;
  void *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  ForElementType<FSetElementId> local_180;
  int local_170 [2];
  UObject *local_168;
  FNetTraceCollector *local_160;
  ushort local_158;
  FComparePropertiesSharedParams local_148;
  ForElementType<unsigned_int> local_b8;
  uint local_a0;
  int local_9c;
  undefined1 local_98 [16];
  FScriptContainerElement *local_88;
  longlong lStack_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uchar local_60 [4];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_708;
  local_690 = (FNetTraceCollector *)param_1;
  local_670 = this;
  local_630.Data = (uchar *)param_2;
  if (GUseDetailedScopeCounters) {
    TVar31 = FThreadSafeStaticStatInner<FStat_STAT_RepLayout_DeltaSerializeFastArray,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_RepLayout_DeltaSerializeFastArray,1>
                         *)&StatPtr_STAT_RepLayout_DeltaSerializeFastArray);
    pTVar56 = *(TStatIdData **)&(TVar31.StatIdPtr)->Name;
  }
  else {
    pTVar56 = &TStatId::TStatId_NAME_None;
  }
  FVar64 = *(FName *)pTVar56;
  pFVar53 = (FNetTraceCollector *)0x0;
  EVar26 = Success;
  local_4b8.ComparisonIndex.Value = 0;
  local_4b8.Number = 0;
  bVar18 = false;
  bVar17 = false;
  uVar29 = 0;
  if ((FVar64.ComparisonIndex.Value.Value == 0) && (FVar64.Number == 0)) {
LAB_1484d01c4:
    bVar19 = false;
    local_570 = local_4b8;
    FVar64 = local_4b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_518.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_518._s_0,(char *)*(FName *)((longlong)pTVar56 + 0x10));
      bVar18 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_4e0.ComparisonIndex.Value = FVar64.ComparisonIndex.Value.Value;
        local_4e0.Number = FVar64.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_4e0,(wchar_t *)*(FName *)((longlong)pTVar56 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                   ,0x1d9d);
        bVar18 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1484d01c4;
    local_588 = FVar64;
    local_570 = FVar64;
    FThreadStats::AddMessage(FVar64,CycleScopeStart);
    bVar19 = true;
  }
  if (((this->LifetimeCustomPropertyState).Ptr == (FLifetimeCustomDeltaState *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("LifetimeCustomPropertyState",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                          ,0x1da2,L""), bVar23)) {
    pcVar16 = (code *)swi(3);
    EVar26 = (*pcVar16)();
    return EVar26;
  }
  pFVar8 = param_1->DeltaSerializeInfo;
  uVar6 = pFVar8->CustomDeltaIndex;
  pFVar9 = (local_670->LifetimeCustomPropertyState).Ptr;
  local_5e8 = pFVar8;
  if (((pFVar9->LifetimeCustomDeltaProperties).ArrayNum <= (int)(uint)uVar6) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar23)) {
    pcVar16 = (code *)swi(3);
    EVar26 = (*pcVar16)();
    return EVar26;
  }
  pFVar60 = (pFVar9->LifetimeCustomDeltaProperties).AllocatorInstance.Data;
  uVar7 = *(ushort *)(pFVar60 + (ulonglong)uVar6 * 0x18);
  pFVar60 = pFVar60 + (ulonglong)uVar6 * 0x18;
  pTVar1 = &local_670->Parents;
  local_608 = pFVar60;
  if (((local_670->Parents).ArrayNum <= (int)(uint)uVar7) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar23)) {
    pcVar16 = (code *)swi(3);
    EVar26 = (*pcVar16)();
    return EVar26;
  }
  uVar27 = *(uint *)(pFVar60 + 4);
  local_620 = (pTVar1->AllocatorInstance).Data + (ulonglong)uVar7 * 0x30;
  if (uVar27 == 0xffffffff) {
    if (4 < (byte)LogRep._0_1_) {
      ::FName::ToString((FName *)(local_620 + 8),&local_240);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
LAB_1484d2c18:
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
    }
LAB_1484d2c22:
    EVar26 = Error;
    goto LAB_1484d2c27;
  }
  pTVar2 = &local_670->Cmds;
  uVar46 = uVar29;
  if ((int)uVar27 < (local_670->Cmds).ArrayNum) {
    uVar46 = ~uVar27 >> 0x1f;
  }
  local_5a8 = (FNetTraceCollector *)pTVar2;
  if ((uVar46 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar23)) {
    pcVar16 = (code *)swi(3);
    EVar26 = (*pcVar16)();
    return EVar26;
  }
  local_560 = pFVar8->Object;
  pFVar60 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar27 * 0x20;
  local_558 = (FNetFieldExportGroup *)0x0;
  local_650 = (uint)*(ushort *)(pFVar60 + 10);
  local_664 = uVar27 + 1;
  pFVar10 = pFVar8->Writer;
  local_660 = *(ushort *)(pFVar60 + 8) - 1;
  local_588 = (FName)pFVar8->Map;
  FVar54 = *(ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> *)
            ((longlong)&local_560->field_0x0 + (longlong)*(int *)(pFVar60 + 0xc));
  FVar15 = (ForElementType<int>)
           ((longlong)&local_560->field_0x0 + (longlong)*(int *)(pFVar60 + 0xc));
  bVar24 = pFVar8->Connection->bInternalAck;
  local_5b8.Data = *(uchar **)((longlong)local_690->NestingStack + 8);
  local_678 = *(uint *)((longlong)FVar15 + 8);
  local_600 = pFVar60;
  local_578 = FVar54;
  local_4f8 = FVar15;
  if (bVar24 != 0) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)local_670->Owner,&local_4a8,(UObject *)0x0);
    UPackageMapClient::GetNetFieldExportGroup((UPackageMapClient *)local_588,&local_548,&local_4a8);
    local_558 = local_548.Object;
    if (local_548.Object == (FNetFieldExportGroup *)0x0) {
      if (pFVar10 == (FBitWriter *)0x0) {
        if (1 < (byte)LogRep._0_1_) {
          ::FName::ToString((FName *)(local_620 + 8),&local_230);
          local_488 = (FName)local_670->Owner->_padding_;
          ::FName::ToString(&local_488,&local_498);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
          if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_498.Data.AllocatorInstance.Data);
          }
          if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_230.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_548.SharedReferenceCount.ReferenceController);
        local_240.Data.AllocatorInstance.Data = local_4a8.Data.AllocatorInstance.Data;
        goto LAB_1484d2c18;
      }
      if (6 < (byte)LogRepProperties._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRepProperties);
      }
      pTVar32 = CreateNetfieldExportGroup(local_670,&local_220);
      if (&local_548 != pTVar32) {
        local_548.Object = pTVar32->Object;
        pTVar32->Object = (FNetFieldExportGroup *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_548.SharedReferenceCount,&pTVar32->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_220.SharedReferenceCount.ReferenceController);
      local_1f8.Object = local_548.Object;
      local_1f8.SharedReferenceCount.ReferenceController =
           local_548.SharedReferenceCount.ReferenceController;
      if (local_548.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UPackageMapClient::AddNetFieldExportGroup
                ((UPackageMapClient *)local_588,&local_4a8,&local_1f8);
    }
    local_558 = local_548.Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_548.SharedReferenceCount.ReferenceController);
    if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
    }
  }
  if (pFVar10 == (FBitWriter *)0x0) {
    local_578 = (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)
                local_5e8->Reader;
    lVar13 = *(longlong *)pFVar60;
    TVar62.Data = *(uchar **)((longlong)local_690->OffsetStack + 0x60);
    local_4f8 = *(ForElementType<int> *)((longlong)local_690->OffsetStack + 0x68);
    EVar5 = *(EArrayPropertyFlags *)(lVar13 + 0x70);
    local_630.Data = TVar62.Data;
    uVar29 = (**(code **)(**(longlong **)(lVar13 + 0x78) + 0x168))();
    FScriptArrayHelper::FScriptArrayHelper
              (&local_538,Internal,*(FProperty **)(lVar13 + 0x78),(void *)FVar15,
               (*(FProperty **)(lVar13 + 0x78))->ElementSize,uVar29,EVar5);
    FVar54 = local_578;
    this_01.Data = local_5b8.Data;
    local_696 = false;
    local_695[0] = (FScriptContainerElement)0x0;
    local_65c = 0;
    if (0 < (int)*(uint *)((longlong)local_690->OffsetStack + 0x70)) {
      do {
        plVar47 = *(longlong **)((longlong)FVar54 + 8);
        local_668 = 0;
        if ((uint *)plVar47[1] < (uint *)*plVar47 + 1) {
          if ((*(byte *)((longlong)FVar54 + 0x2a) & 1) == 0) {
            (**(code **)(*(longlong *)FVar54 + 0x188))(FVar54,&local_668,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)FVar54,&local_668);
          }
        }
        else {
          local_668 = *(uint *)*plVar47;
          *plVar47 = *plVar47 + 4;
        }
        if (*(int *)((longlong)this_01.Data + 8) != *(int *)((longlong)this_01.Data + 0x34)) {
          pFVar60 = *(FScriptContainerElement **)((longlong)this_01.Data + 0x40);
          pFVar52 = (FScriptContainerElement *)((longlong)this_01.Data + 0x38);
          if (pFVar60 != (FScriptContainerElement *)0x0) {
            pFVar52 = pFVar60;
          }
          uVar29 = *(uint *)(pFVar52 +
                            (ulonglong)(*(int *)((longlong)this_01.Data + 0x48) - 1U & local_668) *
                            4);
          if (uVar29 != 0xffffffff) {
            do {
              puVar34 = (uint *)((longlong)(int)uVar29 * 0x10 +
                                *(longlong *)
                                 (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                  *)this_01.Data);
              if (*puVar34 == local_668) {
                pFVar35 = (FNetTraceCollector *)(puVar34 + 1);
                if (puVar34 == (uint *)0x0) {
                  pFVar35 = pFVar53;
                }
                if (pFVar35 != (FNetTraceCollector *)0x0) {
                  local_688 = pFVar35->NestingStack[0];
                  FVar15 = *(ForElementType<int> *)((longlong)TVar62.Data + 0x20);
                  FVar36 = (ForElementType<int>)TVar62.Data;
                  if (FVar15 != (ForElementType<int>)0x0) {
                    FVar36 = FVar15;
                  }
                  if ((ulonglong)FVar36 <= &local_688) {
                    FVar36 = (ForElementType<int>)TVar62.Data;
                    if (FVar15 != (ForElementType<int>)0x0) {
                      FVar36 = FVar15;
                    }
                    if ((&local_688 <
                         (undefined1 *)
                         ((longlong)FVar36 + (longlong)*(int *)((longlong)TVar62.Data + 0x2c) * 4))
                       && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar23)) {
                      pcVar16 = (code *)swi(3);
                      EVar26 = (*pcVar16)();
                      return EVar26;
                    }
                  }
                  iVar65 = *(int *)((longlong)TVar62.Data + 0x28);
                  if (iVar65 == *(int *)((longlong)TVar62.Data + 0x2cU)) {
                    iVar65 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                       (0x404,(ForElementType<int> *)TVar62.Data,
                                        (int *)((longlong)TVar62.Data + 0x2cU));
                  }
                  *(int *)((longlong)TVar62.Data + 0x28) = iVar65 + 1;
                  if (*(ForElementType<int> *)((longlong)TVar62.Data + 0x20) !=
                      (ForElementType<int>)0x0) {
                    TVar62.Data = (uchar *)*(ForElementType<int> *)((longlong)TVar62.Data + 0x20);
                  }
                  *(uint *)((longlong)TVar62.Data + (longlong)iVar65 * 4) = local_688;
                  if (4 < (byte)LogNetFastTArray._0_1_) {
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
                  }
                  goto LAB_1484d26b7;
                }
                break;
              }
              uVar29 = puVar34[2];
            } while (uVar29 != 0xffffffff);
          }
        }
        local_688 = 0;
        if (4 < (byte)LogNetFastTArray._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
        }
        uVar29 = (local_538.field1_0x8.FreezableArray)->ArrayNum;
        iVar65 = uVar29 + 1;
        (local_538.field1_0x8.FreezableArray)->ArrayNum = iVar65;
        if ((local_538.ArrayFlags & UsesMemoryImageAllocator) == None) {
          if ((local_538.field1_0x8.FreezableArray)->ArrayMax < iVar65) {
            TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow
                      ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)
                       local_538.field1_0x8.HeapArray,uVar29,local_538.ElementSize,
                       local_538.ElementAlignment);
          }
        }
        else if ((local_538.field1_0x8.FreezableArray)->ArrayMax < iVar65) {
          TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow
                    (local_538.field1_0x8.FreezableArray,uVar29,local_538.ElementSize,
                     local_538.ElementAlignment);
        }
        pFVar35 = pFVar53;
        if ((local_538.field1_0x8.FreezableArray)->ArrayNum != 0) {
          uVar44 = (local_538.field1_0x8.FreezableArray)->_padding_;
          if (((local_538.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar44 & 1) != 0)) {
            uVar44 = (longlong)&(local_538.field1_0x8.HeapArray)->field_0x0 +
                     ((longlong)uVar44 >> 0x18);
          }
          pFVar35 = (FNetTraceCollector *)
                    ((longlong)local_538.ElementSize * (longlong)(int)uVar29 + uVar44);
        }
        if (((uint)(int)(local_538.InnerProperty)->PropertyFlags >> 9 & 1) == 0) {
          (**(code **)((local_538.InnerProperty)->_padding_ + 0x150))
                    (local_538.InnerProperty,pFVar35);
        }
        else {
          memset(pFVar35,0,(longlong)local_538.ElementSize);
        }
        local_514[2] = local_668;
        local_688 = uVar29;
        TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
        Emplace<int,int_const_&>
                  ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *
                   )this_01.Data,local_514 + 2,(int *)&local_688);
        FVar36 = local_4f8;
        FVar15 = *(ForElementType<int> *)((longlong)local_4f8 + 0x20);
        FVar37 = local_4f8;
        if (FVar15 != (ForElementType<int>)0x0) {
          FVar37 = FVar15;
        }
        if ((ulonglong)FVar37 <= &local_688) {
          FVar37 = local_4f8;
          if (FVar15 != (ForElementType<int>)0x0) {
            FVar37 = FVar15;
          }
          if ((&local_688 <
               (undefined1 *)((longlong)FVar37 + (longlong)*(int *)((longlong)local_4f8 + 0x2c) * 4)
              ) && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar23)) {
            pcVar16 = (code *)swi(3);
            EVar26 = (*pcVar16)();
            return EVar26;
          }
        }
        iVar65 = *(int *)((longlong)FVar36 + 0x28);
        if (iVar65 == *(int *)((longlong)FVar36 + 0x2c)) {
          iVar65 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (0x404,(ForElementType<int> *)FVar36,(int *)((longlong)FVar36 + 0x2c));
        }
        *(int *)((longlong)FVar36 + 0x28) = iVar65 + 1;
        if (*(ForElementType<int> *)((longlong)FVar36 + 0x20) != (ForElementType<int>)0x0) {
          FVar36 = *(ForElementType<int> *)((longlong)FVar36 + 0x20);
        }
        *(uint *)((longlong)FVar36 + (longlong)iVar65 * 4) = local_688;
LAB_1484d26b7:
        pFVar35 = local_690;
        TVar55.Data = (uchar *)pFVar53;
        if ((local_538.field1_0x8.FreezableArray)->ArrayNum != 0) {
          uVar44 = (local_538.field1_0x8.FreezableArray)->_padding_;
          if (((local_538.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar44 & 1) != 0)) {
            uVar44 = (longlong)&(local_538.field1_0x8.HeapArray)->field_0x0 +
                     ((longlong)uVar44 >> 0x18);
          }
          TVar55.Data = (uchar *)((longlong)local_538.ElementSize * (longlong)(int)local_688 +
                                 uVar44);
        }
        local_508 = local_668;
        local_428.Value = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)TVar55.Data;
        UE::Core::Private::Function::CheckCallable
                  (*(void **)((longlong)local_690->OffsetStack + 0x20));
        puVar34 = *(uint **)((longlong)pFVar35->OffsetStack + 0x48);
        pcVar16 = *(code **)((longlong)pFVar35->OffsetStack + 0x20);
        puVar45 = (uint *)((longlong)pFVar35->OffsetStack + 0x30);
        if (puVar34 != (uint *)0x0) {
          puVar45 = puVar34;
        }
        uVar38 = (**(code **)(*(longlong *)puVar45 + 8))();
        (*pcVar16)(uVar38,&local_428.Value,pFVar35);
        this_00 = (TSet<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>,FDefaultSetAllocator>
                   *)((longlong)this_01.Data + 0xa8);
        local_500 = local_668;
        if (*(int *)((longlong)this_01.Data + 0xa8U + 8) !=
            *(int *)((longlong)this_01.Data + 0xa8U + 0x34)) {
          pFVar60 = *(FScriptContainerElement **)((longlong)this_01.Data + 0xa8U + 0x40);
          pFVar52 = (FScriptContainerElement *)((longlong)this_01.Data + 0xa8U + 0x38);
          if (pFVar60 != (FScriptContainerElement *)0x0) {
            pFVar52 = pFVar60;
          }
          uVar29 = *(uint *)(pFVar52 +
                            (ulonglong)
                            (*(int *)((longlong)this_01.Data + 0xa8U + 0x48) - 1U & local_668) * 4);
          if (uVar29 != 0xffffffff) {
            do {
              puVar34 = (uint *)((longlong)(int)uVar29 * 0x60 + *(longlong *)&this_00->Elements);
              if (*puVar34 == local_668) {
                if (puVar34 != (uint *)0x0) goto LAB_1484d27ec;
                break;
              }
              uVar29 = puVar34[0x16];
            } while (uVar29 != 0xffffffff);
          }
        }
        local_418.Data = (FScriptContainerElement *)&local_500;
        TSet<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<int_&&>_>
                  (this_00,(uint)&local_4fc,(TKeyInitializer<int_&&> *)(ulonglong)local_668,
                   (bool *)&local_418);
        puVar34 = (uint *)((longlong)local_4fc * 0x60 + *(longlong *)&this_00->Elements);
LAB_1484d27ec:
        if (bVar24 == 0) {
          uVar25 = FBitReader::ReadBit((FBitReader *)FVar54);
          if (uVar25 != '\0') {
            local_1e8[0] = false;
            local_1e8._8_8_ = FVar54;
            local_1b8 = (FScriptContainerElement *)0x0;
            pTVar3 = &local_670->NetSerializeLayouts;
            local_1b0 = 0;
            local_1e8[1] = (bool)(~local_670->Flags & 1);
            local_198 = (void *)0x0;
            local_1e8._16_8_ = local_695;
            local_1e8._24_8_ = &local_696;
            local_1e8._32_8_ = &local_670->Parents;
            local_1e8._40_8_ = &local_670->Cmds;
            local_190 = 0;
            local_18c = 0x80;
            local_188 = 0xffffffff;
            local_184 = 0;
            local_180.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_170[0] = 0;
            if ((TMap<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>_>
                 *)&local_1b8 != pTVar3) {
              UE::Core::Private::
              CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                        (&local_180,local_170,
                         (ForElementType<FSetElementId> *)
                         &(local_670->NetSerializeLayouts).field_0x38,
                         *(int *)&(local_670->NetSerializeLayouts).field_0x48);
              TSparseArray<TSparseSetElement<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::operator=((TSparseArray<TSparseSetElement<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)&local_1b8,
                          (TSparseArray<TSparseSetElement<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)pTVar3);
            }
            local_168 = local_560;
            local_410.CmdStart = local_664;
            local_410.CmdEnd = local_660;
            local_160 = (FNetTraceCollector *)0x0;
            local_158 = 0;
            local_410.ShadowData.Data = (uchar *)0x0;
            local_410.RepNotifies = (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)0x0;
            local_410.ArrayElementOffset = 0;
            local_410.CurrentHandle = 0;
            local_410.bShadowDataCopied = false;
            local_410.ObjectData.Data = TVar55.Data;
            local_410.GuidReferences =
                 (TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                  *)(puVar34 + 2);
            FNetTraceEventScope<FNetBitReader_&>::
            FNetTraceEventScope<FNetBitReader_&><_ReadPropertyHandle_::__l2::<lambda_1>_&>
                      (&local_380,local_5a0,(FNetBitReader *)local_1e8._8_8_,
                       (FNetTraceCollector *)0x0,1);
            local_5c0[0] = 0;
            (**(code **)(*(longlong *)local_1e8._8_8_ + 0x1a0))(local_1e8._8_8_,local_5c0);
            if (6 < (byte)LogRepProperties._0_1_) {
              UE::Logging::Private::BasicLog<7>
                        ((FStaticBasicLogRecord *)&PTR_u_ReadPropertyHan_151ae7cb8,
                         (FLogCategoryBase *)&LogRepProperties);
            }
            if (local_1e8[0] != false) {
              local_5f0 = 0xabadf00d;
              plVar47 = *(longlong **)(local_1e8._8_8_ + 8);
              if ((uint *)plVar47[1] < (uint *)*plVar47 + 1) {
                if ((*(byte *)(local_1e8._8_8_ + 0x2a) & 1) == 0) {
                  (**(code **)(*(longlong *)local_1e8._8_8_ + 0x188))(local_1e8._8_8_,&local_5f0,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped((FArchive *)local_1e8._8_8_,&local_5f0);
                }
              }
              else {
                local_5f0 = *(uint *)*plVar47;
                *plVar47 = *plVar47 + 4;
              }
              if ((local_5f0 != 0xabadf00d) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Checksum == 0xABADF00D",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                      ,0x365,L""), bVar23)) {
                pcVar16 = (code *)swi(3);
                EVar26 = (*pcVar16)();
                return EVar26;
              }
            }
            local_158 = (ushort)local_5c0[0];
            if (local_380.EventIndex != 0xffffffff) {
              FNetTrace::EndPacketContentEvent
                        (local_380.Collector,local_380.EventIndex,
                         (uint)(local_380.Stream)->_padding_);
            }
            bVar23 = ReceiveProperties_r((FReceivePropertiesSharedParams *)local_1e8,&local_410);
            if (bVar23) {
              if (local_158 == 0) {
                local_170[0] = 0;
                if (local_180.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_180.SecondaryData);
                }
                TSparseArray<TSparseSetElement<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::Empty((TSparseArray<TSparseSetElement<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&local_1b8,0);
                if (local_198 != (void *)0x0) {
                  FMemory::Free(local_198);
                }
                if (local_1b8 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b8);
                }
                goto LAB_1484d2b37;
              }
              if (1 < (byte)LogRep._0_1_) {
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
              }
            }
            else if (2 < (byte)LogNetFastTArray._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray)
              ;
            }
            local_170[0] = 0;
            if (local_180.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_180.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty((TSparseArray<TSparseSetElement<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&local_1b8,0);
            local_240.Data.AllocatorInstance.Data = local_1b8;
            if (local_198 != (void *)0x0) {
              FMemory::Free(local_198);
              local_240.Data.AllocatorInstance.Data = local_1b8;
            }
            goto LAB_1484d2c18;
          }
        }
        else {
          bVar23 = ReceiveProperties_BackwardsCompatible_r
                             (local_670,(FReceivingRepState *)0x0,local_558,(FNetBitReader *)FVar54,
                              local_664,local_660,(TRepDataBufferBase<1,unsigned_char>)0x0,TVar55,
                              TVar55,(TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                                      *)(puVar34 + 2),(bool *)local_695,&local_696,local_560);
          if (!bVar23) {
            if (2 < (byte)LogNetFastTArray._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray)
              ;
            }
            goto LAB_1484d2c22;
          }
LAB_1484d2b37:
          if ((*(byte *)((longlong)FVar54 + 0x29) & 2) != 0) {
            if (2 < (byte)LogNetFastTArray._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray)
              ;
            }
            goto LAB_1484d2c22;
          }
          local_5e8->bGuidListsChanged = (bool)(local_5e8->bGuidListsChanged | local_696);
          local_5e8->bOutHasMoreUnmapped =
               (bool)(local_5e8->bOutHasMoreUnmapped | (byte)local_695[0]);
        }
        local_65c = local_65c + 1;
        TVar62.Data = local_630.Data;
      } while ((int)local_65c < (int)*(uint *)((longlong)local_690->OffsetStack + 0x70));
    }
    goto LAB_1484d2c27;
  }
  local_648 = (FNetBitWriter *)local_5e8->Writer;
  FVar42 = *(ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> *)
            ((longlong)local_690->OffsetStack + 0x50);
  uVar6 = *(ushort *)(pFVar60 + 0x14);
  uVar46 = uVar6 - 1;
  local_598.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_598.ArrayNum = 0;
  local_598.ArrayMax = 0;
  uVar27 = uVar29;
  if ((int)uVar46 < (local_670->BaseHandleToCmdIndex).ArrayNum) {
    uVar27 = ~uVar46 >> 0x1f;
  }
  local_5f8 = FVar42;
  if ((uVar27 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar23)) {
    pcVar16 = (code *)swi(3);
    EVar26 = (*pcVar16)();
    return EVar26;
  }
  local_5e8 = *(FNetDeltaSerializeInfo **)
               ((local_670->BaseHandleToCmdIndex).AllocatorInstance.Data +
               (ulonglong)uVar6 * 0x10 + -8);
  uVar27 = 0;
  if (bVar24 == 0) {
    if (param_2 != (FReplicationChangelistMgr *)0x0) {
      pFVar11 = (param_2->RepChangelistState).CustomDeltaChangelistState.Ptr;
      uVar46 = *(uint *)(local_608 + 8);
      uVar59 = uVar29;
      if ((int)uVar46 < (pFVar11->ArrayStates).ArrayNum) {
        uVar59 = ~uVar46 >> 0x1f;
      }
      if ((uVar59 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar16 = (code *)swi(3);
        EVar26 = (*pcVar16)();
        return EVar26;
      }
      local_568 = (pFVar11->ArrayStates).AllocatorInstance.Data + (longlong)(int)uVar46 * 0x90;
      pFVar12 = *(FNetFastTArrayBaseState **)((longlong)local_690->OffsetStack + 0x58);
      plVar47 = &pFVar12->_padding_;
      pFVar35 = (FNetTraceCollector *)pFVar12->_padding_;
      pFVar49 = pFVar53;
      pFVar58 = pFVar35;
      if (pFVar35 != (FNetTraceCollector *)0x0) {
        iVar65 = *(int *)((longlong)pFVar35->NestingStack + 8);
        do {
          pFVar58 = pFVar53;
          if (iVar65 == 0) goto LAB_1484d071c;
          ppFVar20 = (FFastArraySerializer **)((longlong)pFVar35->NestingStack + 8);
          LOCK();
          iVar28 = *(int *)ppFVar20;
          bVar23 = iVar65 == iVar28;
          if (bVar23) {
            *(int *)ppFVar20 = iVar65 + 1;
            iVar28 = iVar65;
          }
          UNLOCK();
          iVar65 = iVar28;
        } while (!bVar23);
        pFVar49 = (FNetTraceCollector *)*plVar47;
        pFVar58 = pFVar35;
      }
LAB_1484d071c:
      pFVar35 = (FNetTraceCollector *)((longlong)pFVar49->NestingStack + 8);
      if (pFVar49 == (FNetTraceCollector *)0x0) {
        pFVar35 = pFVar53;
      }
      local_690 = pFVar58;
      if ((pFVar35 != (FNetTraceCollector *)plVar47) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x67f,L""), bVar23)) {
        pcVar16 = (code *)swi(3);
        EVar26 = (*pcVar16)();
        return EVar26;
      }
      if (pFVar49 == (FNetTraceCollector *)0x0) {
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar23) {
          pcVar16 = (code *)swi(3);
          EVar26 = (*pcVar16)();
          return EVar26;
        }
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L"");
        if (bVar23) {
          pcVar16 = (code *)swi(3);
          EVar26 = (*pcVar16)();
          return EVar26;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar58 != (FNetTraceCollector *)0x0) {
        LOCK();
        ppFVar20 = (FFastArraySerializer **)((longlong)pFVar58->NestingStack + 8);
        *(int *)ppFVar20 = *(int *)ppFVar20 + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar58);
      pFVar52 = local_568;
      local_57c = *(uint *)((longlong)pFVar49->NestingStack + 0x18);
      local_65c = *(uint *)(local_568 + 0x88);
      *(uint *)((longlong)pFVar49->NestingStack + 0x1c) = local_65c;
      local_638 = CONCAT44(local_638._4_4_,local_65c - local_57c);
      uVar46 = local_65c & 0x1f;
      local_630.Data =
           (uchar *)(*(longlong *)((longlong)local_630.Data + 0x820) +
                    (longlong)*(int *)(pFVar60 + 0x10));
      local_654 = local_65c - *(int *)(local_568 + 0x84);
      if ((*(int *)(local_568 + 8) <= (int)uVar46) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar16 = (code *)swi(3);
        EVar26 = (*pcVar16)();
        return EVar26;
      }
      local_5b8.Data = (uchar *)((ulonglong)uVar46 * 0x50 + *(longlong *)pFVar52);
      if ((*(int *)(pFVar52 + 0x28) <= (int)uVar46) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar23)) {
        pcVar16 = (code *)swi(3);
        EVar26 = (*pcVar16)();
        return EVar26;
      }
      pFVar60 = pFVar52 + 0x10;
      if (*(FScriptContainerElement **)(pFVar52 + 0x20) != (FScriptContainerElement *)0x0) {
        pFVar60 = *(FScriptContainerElement **)(pFVar52 + 0x20);
      }
      local_640 = 0;
      uVar59 = 1 << (sbyte)uVar46;
      FVar42 = local_5f8;
      if ((*(uint *)pFVar60 & uVar59) == 0) {
        if ((*(int *)(pFVar52 + 0x28) <= (int)uVar46) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar23)) {
          pcVar16 = (code *)swi(3);
          EVar26 = (*pcVar16)();
          return EVar26;
        }
        pFVar60 = local_600;
        pFVar50 = pFVar52 + 0x10;
        if (*(FScriptContainerElement **)(pFVar52 + 0x20) != (FScriptContainerElement *)0x0) {
          pFVar50 = *(FScriptContainerElement **)(pFVar52 + 0x20);
        }
        *(uint *)(pFVar50 + local_640) = *(uint *)(pFVar50 + local_640) | uVar59;
        *(uint *)(local_568 + 0x80) = *(uint *)((longlong)pFVar49->NestingStack + 0x70);
        lVar13 = *(longlong *)local_600;
        EVar5 = *(EArrayPropertyFlags *)(lVar13 + 0x70);
        uVar46 = (**(code **)(**(longlong **)(lVar13 + 0x78) + 0x168))();
        TVar62.Data = local_630.Data;
        FScriptArrayHelper::FScriptArrayHelper
                  (&local_5e0,Internal,*(FProperty **)(lVar13 + 0x78),local_630.Data,
                   (*(FProperty **)(lVar13 + 0x78))->ElementSize,uVar46,EVar5);
        local_b8.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_9c = 0x80;
        local_a0 = local_678;
        uVar46 = local_678 + 0x1f >> 5;
        if (local_678 + 0x1f >> 5 != 0) {
          if (4 < uVar46) {
            TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
            ResizeAllocation(&local_b8,0,uVar46,4);
            local_9c = uVar46 << 5;
          }
          FVar40 = (ForElementType<unsigned_int>)&local_b8;
          if (local_b8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar40 = local_b8.SecondaryData;
          }
          if (uVar46 < 9) {
            memset((void *)FVar40,0,(ulonglong)uVar46 << 2);
          }
          else {
            memset((void *)FVar40,0,(ulonglong)uVar46 << 2);
          }
          uVar46 = local_a0 & 0x8000001f;
          if ((int)uVar46 < 0) {
            uVar46 = (uVar46 - 1 | 0xffffffe0) + 1;
          }
          if (uVar46 != 0) {
            FVar40 = (ForElementType<unsigned_int>)&local_b8;
            if (local_b8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar40 = local_b8.SecondaryData;
            }
            puVar34 = (uint *)((longlong)FVar40 +
                              (longlong)((int)(local_a0 + ((int)local_a0 >> 0x1f & 0x1fU)) >> 5) * 4
                              );
            *puVar34 = *puVar34 & 0xffffffffU >> (0x20U - (char)uVar46 & 0x1f);
          }
        }
        lVar13 = *(longlong *)pFVar60;
        local_657 = local_654 == 1;
        EVar5 = *(EArrayPropertyFlags *)(lVar13 + 0x70);
        uVar46 = (**(code **)(**(longlong **)(lVar13 + 0x78) + 0x168))();
        FScriptArrayHelper::FScriptArrayHelper
                  (&local_4d8,Internal,*(FProperty **)(lVar13 + 0x78),(void *)local_4f8,
                   (*(FProperty **)(lVar13 + 0x78))->ElementSize,uVar46,EVar5);
        uVar46 = (local_5e0.field1_0x8.FreezableArray)->ArrayNum;
        local_600 = (FScriptContainerElement *)CONCAT44(local_600._4_4_,uVar46);
        if (((local_678 == 0) || (uVar46 == 0)) || (local_654 == 1)) {
          FScriptArrayHelper::Resize(&local_5e0,local_678);
                    /* WARNING: Load size is inaccurate */
          local_630.Data = *TVar62.Data;
          if (local_654 != 1) goto LAB_1484d1082;
        }
        else {
          this_02 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)(local_568 + 0x30);
          local_98._0_8_ = 0;
          local_98._8_8_ = 0;
          local_78 = 0;
          local_70 = 0;
          local_6c = 0x80;
          local_68 = 0xffffffff;
          local_64 = 0;
          if ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
              local_98 != this_02) {
            local_98._0_8_ = *(undefined8 *)&this_02->Elements;
            *(undefined8 *)&this_02->Elements = 0;
            local_98._8_8_ = *(undefined8 *)(local_568 + 0x38);
            *(longlong *)(local_568 + 0x38) = 0;
            if ((FScriptContainerElement *)&local_88 != local_568 + 0x40) {
              local_78 = *(longlong *)(local_568 + 0x50);
              if (local_78 == 0) {
                local_88 = *(FScriptContainerElement **)(local_568 + 0x40);
                lStack_80 = *(longlong *)(local_568 + 0x48);
              }
              *(longlong *)(local_568 + 0x50) = 0;
              local_70 = *(undefined4 *)(local_568 + 0x58);
              local_6c = *(undefined4 *)(local_568 + 0x5c);
              *(longlong *)(local_568 + 0x58) = 0;
            }
            local_68 = *(undefined4 *)(local_568 + 0x60);
            local_64 = *(undefined4 *)(local_568 + 100);
            *(undefined4 *)(local_568 + 100) = 0;
            *(undefined4 *)(local_568 + 0x60) = 0xffffffff;
          }
          local_58 = *(ForElementType<FSetElementId> *)(local_568 + 0x70);
          if (local_58 == (ForElementType<FSetElementId>)0x0) {
            local_60 = *(uchar (*) [4])(local_568 + 0x68);
          }
          *(longlong *)(local_568 + 0x70) = 0;
          local_50 = *(int *)(local_568 + 0x78);
          *(undefined4 *)(local_568 + 0x78) = 0;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
                    (this_02,local_678);
          local_640 = local_640 & 0xffffffff00000000;
          if (6 < (byte)LogRepProperties._0_1_) {
            ::FName::ToString((FName *)(local_620 + 8),&local_268);
            UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)local_560,&local_278,(UObject *)0x0);
            local_480 = (FName)local_670->Owner->_padding_;
            ::FName::ToString(&local_480,&local_458);
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRepProperties);
            if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_458.Data.AllocatorInstance.Data);
            }
            if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_278.Data.AllocatorInstance.Data);
            }
            if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_268.Data.AllocatorInstance.Data);
            }
            uVar46 = (uint)local_600;
          }
          local_684 = 0;
          pFVar35 = pFVar53;
          FVar61 = local_4d8.field1_0x8;
          if (0 < (int)local_678) {
            do {
              iVar65 = (int)pFVar35;
              if ((int)uVar46 <= iVar65) break;
              pFVar35 = pFVar53;
              if ((FVar61.FreezableArray)->ArrayNum != 0) {
                puVar41 = (undefined1 *)(FVar61.FreezableArray)->_padding_;
                if (((local_4d8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                   (((ulonglong)puVar41 & 1) != 0)) {
                  puVar41 = &(FVar61.HeapArray)->field_0x0 + ((longlong)puVar41 >> 0x18);
                }
                pFVar35 = (FNetTraceCollector *)
                          (puVar41 + (longlong)local_4d8.ElementSize * (longlong)iVar65);
              }
              iVar28 = *(int *)(local_608 + 0x14);
              local_5ec = *(int *)((longlong)pFVar35->NestingStack + (longlong)iVar28);
              pFVar35 = pFVar53;
              if ((local_5e0.field1_0x8.FreezableArray)->ArrayNum != 0) {
                puVar41 = (undefined1 *)(local_5e0.field1_0x8.FreezableArray)->_padding_;
                if (((local_5e0.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                   (((ulonglong)puVar41 & 1) != 0)) {
                  puVar41 = &(local_5e0.field1_0x8.HeapArray)->field_0x0 +
                            ((longlong)puVar41 >> 0x18);
                }
                pFVar35 = (FNetTraceCollector *)
                          (puVar41 + (longlong)local_5e0.ElementSize * (longlong)iVar65);
              }
              TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
              Emplace<int_const_&,int_&>
                        ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                          *)this_02,&local_5ec,(int *)&local_684);
              if (6 < (byte)LogRepProperties._0_1_) {
                UE::Logging::Private::BasicLog<7>
                          (&::LOG_Static,(FLogCategoryBase *)&LogRepProperties);
              }
              uVar21 = LogRepProperties._0_1_;
              if (local_5ec == *(int *)((longlong)pFVar35->NestingStack + (longlong)iVar28)) {
LAB_1484d0ea6:
                uVar46 = (uint)local_600;
              }
              else {
                piVar33 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                          ::Find((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                  *)local_98,local_5ec);
                uVar46 = local_684;
                if (piVar33 != (int *)0x0) {
                  iVar65 = (uint)local_640 + *piVar33;
                  if (6 < (byte)uVar21) {
                    UE::Logging::Private::BasicLog<7>
                              (&::LOG_Static,(FLogCategoryBase *)&LogRepProperties);
                  }
                  if ((iVar65 <= (int)local_684) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("FixedShadowIndex > Index",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                          ,0x1e8d,L""), bVar23)) {
                    pcVar16 = (code *)swi(3);
                    EVar26 = (*pcVar16)();
                    return EVar26;
                  }
                  if ((local_5e0.ArrayFlags & UsesMemoryImageAllocator) == None) {
                    pvVar39 = (void *)((longlong)(int)local_684 * (longlong)local_5e0.ElementSize +
                                      (local_5e0.field1_0x8.FreezableArray)->_padding_);
                    pvVar48 = (void *)((longlong)iVar65 * (longlong)local_5e0.ElementSize +
                                      (local_5e0.field1_0x8.FreezableArray)->_padding_);
                  }
                  else {
                    puVar41 = (undefined1 *)(local_5e0.field1_0x8.FreezableArray)->_padding_;
                    if (((ulonglong)puVar41 & 1) != 0) {
                      puVar41 = &(local_5e0.field1_0x8.HeapArray)->field_0x0 +
                                ((longlong)puVar41 >> 0x18);
                    }
                    pvVar39 = puVar41 + (longlong)(int)local_684 * (longlong)local_5e0.ElementSize;
                    pvVar48 = puVar41 + (longlong)iVar65 * (longlong)local_5e0.ElementSize;
                  }
                  FGenericPlatformMemory::Memswap(pvVar39,pvVar48,(longlong)local_5e0.ElementSize);
                  goto LAB_1484d0ea6;
                }
                if ((((int)local_684 < 0) || ((int)local_a0 <= (int)local_684)) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar23)) {
                  pcVar16 = (code *)swi(3);
                  EVar26 = (*pcVar16)();
                  return EVar26;
                }
                uVar59 = local_684;
                FVar40 = (ForElementType<unsigned_int>)&local_b8;
                if (local_b8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                  FVar40 = local_b8.SecondaryData;
                }
                uVar30 = uVar46;
                if ((int)uVar46 < 0) {
                  uVar30 = uVar46 + 0x1f;
                }
                puVar34 = (uint *)((longlong)FVar40 + (longlong)((int)uVar30 >> 5) * 4);
                *puVar34 = *puVar34 | 1 << ((byte)uVar46 & 0x1f);
                if ((((int)local_684 < 0) ||
                    ((local_5e0.field1_0x8.FreezableArray)->ArrayNum < (int)local_684)) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index <= Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                        ,0x110b,L""), bVar23)) {
                  pcVar16 = (code *)swi(3);
                  EVar26 = (*pcVar16)();
                  return EVar26;
                }
                local_448 = &local_5e0;
                local_440 = uVar59;
                local_43c = 1;
                FScriptArrayHelper::
                WithScriptArray<_FScriptArrayHelper::InsertValues_::__l2::<lambda_1>_>
                          (&local_5e0,(<lambda_1> *)&local_448);
                FScriptArrayHelper::ConstructItems(&local_5e0,uVar59,1);
                pFVar35 = pFVar53;
                if ((local_5e0.field1_0x8.FreezableArray)->ArrayNum != 0) {
                  puVar41 = (undefined1 *)(local_5e0.field1_0x8.FreezableArray)->_padding_;
                  if (((local_5e0.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                     (((ulonglong)puVar41 & 1) != 0)) {
                    puVar41 = &(local_5e0.field1_0x8.HeapArray)->field_0x0 +
                              ((longlong)puVar41 >> 0x18);
                  }
                  pFVar35 = (FNetTraceCollector *)
                            (puVar41 + (longlong)local_5e0.ElementSize * (longlong)(int)local_684);
                }
                uVar46 = (uint)local_600 + 1;
                local_600 = (FScriptContainerElement *)CONCAT44(local_600._4_4_,uVar46);
                *(int *)((longlong)pFVar35->NestingStack + (longlong)*(int *)(local_608 + 0x14)) =
                     local_5ec;
                local_640 = CONCAT44(local_640._4_4_,(uint)local_640 + 1);
                FVar61 = local_4d8.field1_0x8;
                if (6 < (byte)LogRepProperties._0_1_) {
                  UE::Logging::Private::BasicLog<7>
                            (&::LOG_Static,(FLogCategoryBase *)&LogRepProperties);
                  FVar61 = local_4d8.field1_0x8;
                }
              }
              local_684 = local_684 + 1;
              pFVar35 = (FNetTraceCollector *)(ulonglong)local_684;
            } while ((int)local_684 < (int)local_678);
          }
          uVar59 = local_678;
          local_50 = 0;
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_58);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98);
          FScriptArrayHelper::Resize(&local_5e0,uVar59);
                    /* WARNING: Load size is inaccurate */
          local_630.Data = *local_630.Data;
LAB_1484d1082:
          TVar62.Data = local_630.Data;
          if ((int)local_678 <= (int)uVar46) goto LAB_1484d132c;
        }
        TVar62.Data = local_630.Data;
        uVar59 = local_678;
        if ((6 < (byte)LogRepProperties._0_1_) && (local_654 == 1)) {
          ::FName::ToString((FName *)(local_620 + 8),&local_250);
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_560,&local_210,(UObject *)0x0)
          ;
          local_478 = (FName)local_670->Owner->_padding_;
          ::FName::ToString(&local_478,&local_438);
          uVar59 = local_678;
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRepProperties);
          if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_438.Data.AllocatorInstance.Data);
          }
          if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
          }
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          uVar46 = (uint)local_600;
        }
        pFVar52 = local_568;
        pFVar60 = local_608;
        uVar30 = local_678;
        pFVar35 = (FNetTraceCollector *)(ulonglong)uVar46;
        if (local_654 == 1) {
          pFVar35 = pFVar53;
        }
        local_628[0] = (uint)pFVar35;
        if ((int)local_628[0] < (int)uVar59) {
          do {
            uVar46 = local_628[0];
            pFVar49 = pFVar53;
            if ((local_4d8.field1_0x8.FreezableArray)->ArrayNum != 0) {
              puVar41 = (undefined1 *)(local_4d8.field1_0x8.FreezableArray)->_padding_;
              if (((local_4d8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                 (((ulonglong)puVar41 & 1) != 0)) {
                puVar41 = &(local_4d8.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar41 >> 0x18)
                ;
              }
              pFVar49 = (FNetTraceCollector *)
                        (puVar41 + (longlong)local_4d8.ElementSize * (longlong)(int)pFVar35);
            }
            local_514[0] = *(int *)((longlong)pFVar49->NestingStack +
                                   (longlong)*(int *)(pFVar60 + 0x14));
            pFVar49 = pFVar53;
            if ((local_5e0.field1_0x8.FreezableArray)->ArrayNum != 0) {
              puVar41 = (undefined1 *)(local_5e0.field1_0x8.FreezableArray)->_padding_;
              if (((local_5e0.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                 (((ulonglong)puVar41 & 1) != 0)) {
                puVar41 = &(local_5e0.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar41 >> 0x18)
                ;
              }
              pFVar49 = (FNetTraceCollector *)
                        (puVar41 + (longlong)local_5e0.ElementSize * (longlong)(int)pFVar35);
            }
            *(int *)((longlong)pFVar49->NestingStack + (longlong)*(int *)(pFVar60 + 0x14)) =
                 local_514[0];
            if ((((int)local_628[0] < 0) || ((int)local_a0 <= (int)local_628[0])) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar23)) {
              pcVar16 = (code *)swi(3);
              EVar26 = (*pcVar16)();
              return EVar26;
            }
            FVar40 = (ForElementType<unsigned_int>)&local_b8;
            if (local_b8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar40 = local_b8.SecondaryData;
            }
            uVar59 = uVar46;
            if ((int)uVar46 < 0) {
              uVar59 = uVar46 + 0x1f;
            }
            puVar34 = (uint *)((longlong)FVar40 + (longlong)((int)uVar59 >> 5) * 4);
            *puVar34 = *puVar34 | 1 << ((byte)uVar46 & 0x1f);
            if (6 < (byte)LogRep._0_1_) {
              UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
            }
            TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
            Emplace<int_const_&,int_&>
                      ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        *)(pFVar52 + 0x30),local_514,(int *)local_628);
            local_628[0] = local_628[0] + 1;
            pFVar35 = (FNetTraceCollector *)(ulonglong)local_628[0];
            FVar54 = local_578;
            TVar62.Data = local_630.Data;
            FVar64 = local_570;
          } while ((int)local_628[0] < (int)uVar30);
        }
LAB_1484d132c:
        local_618.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar46 = *(int *)((longlong)local_5f8 + 0x48);
        local_618.ArrayNum = 0;
        local_618.ArrayMax = 0;
        local_640 = CONCAT44(local_640._4_4_,uVar46);
        FVar63 = local_5f8;
        if (*(ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> *)
             ((longlong)local_5f8 + 0x40) !=
            (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0) {
          FVar63 = *(ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> *)
                    ((longlong)local_5f8 + 0x40);
        }
        local_578 = (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)
                    ((longlong)FVar63 + (longlong)(int)uVar46 * 8);
        do {
          FVar43 = local_578;
          FVar42 = local_5f8;
          if (*(uint *)((longlong)local_5f8 + 0x48) != uVar46) {
            local_658 = 0;
            `TCheckedPointerIterator<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_658);
          }
          if (FVar63 == FVar43) {
            if (local_618.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_618.AllocatorInstance.Data);
            }
            if (local_b8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_b8.SecondaryData);
            }
            break;
          }
          bVar23 = local_618.ArrayMax != 1;
          local_618._8_8_ = (ulonglong)(uint)local_618.ArrayMax << 0x20;
          if (bVar23) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,1,&local_618.AllocatorInstance,0,&local_618.ArrayMax);
          }
          uVar46 = *(uint *)FVar63;
          iVar65 = local_650 * uVar46;
          if (UE::Net::Private::bDeltaInitialFastArrayElements == false) {
            if (local_654 != 1) {
              if ((((int)uVar46 < 0) || ((int)local_a0 <= (int)uVar46)) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar23)) {
                pcVar16 = (code *)swi(3);
                EVar26 = (*pcVar16)();
                return EVar26;
              }
              FVar40 = (ForElementType<unsigned_int>)&local_b8;
              if (local_b8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar40 = local_b8.SecondaryData;
              }
              uVar59 = uVar46 & 0x1f;
              if ((int)uVar46 < 0) {
                uVar46 = uVar46 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar40 + (longlong)((int)uVar46 >> 5) * 4) >> uVar59 & 1) ==
                  0) goto LAB_1484d1443;
            }
            local_148.bForceFail = true;
          }
          else {
LAB_1484d1443:
            local_148.bForceFail = false;
          }
          local_148.bIsInitial = (bool)local_657;
          local_148.RepState = (FSendingRepState *)0x0;
          local_148.RepChangelistState = (FRepChangelistState *)0x0;
          local_148.RepChangedPropertyTracker = (FRepChangedPropertyTracker *)0x0;
          local_148.PushModelState = (FPushModelPerNetDriverState *)0x0;
          local_148.Flags = local_670->Flags;
          local_148.Parents = &local_670->Parents;
          local_148.Cmds = (TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *)local_5a8;
          local_148.NetSerializeLayouts = &local_670->NetSerializeLayouts;
          local_148.PushModelProperties = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
          local_148.bValidateProperties = false;
          local_148.bIsNetworkProfilerActive = false;
          local_148.bChangedNetOwner = false;
          local_148.bForceCustomPropsActive = false;
          local_148.bForceCompareProperties = false;
          local_3e0.Data.Data = (uchar *)((longlong)iVar65 + (longlong)FVar54);
          local_148.PropertiesCompared.AllocatorInstance.SecondaryData =
               (ForElementType<unsigned_int>)0x0;
          puVar4 = TVar62.Data + (longlong)iVar65;
          local_3e0.Changed = &local_618;
          local_148.PropertiesCompared.NumBits = 0;
          local_3e0.Result = &local_580;
          local_148.PropertiesCompared.MaxBits = 0x80;
          local_148.PropertiesChanged.AllocatorInstance.SecondaryData =
               (ForElementType<unsigned_int>)0x0;
          local_148.PropertiesChanged.NumBits = 0;
          local_148.PropertiesChanged.MaxBits = 0x80;
          local_580 = Success;
          local_3e0.ShadowData.Data = puVar4;
          CompareProperties_r(&local_148,&local_3e0,(ushort)local_664,(ushort)local_660,0);
          if (local_580 == FatalError) goto LAB_1484d1673;
          if (local_618.ArrayNum != 0) {
            local_680 = 0;
            iVar65 = local_618.ArrayNum;
            if ((local_618.AllocatorInstance.Data <= (FScriptContainerElement *)&local_680) &&
               ((FScriptContainerElement *)&local_680 <
                local_618.AllocatorInstance.Data + (longlong)local_618.ArrayMax * 2)) {
              bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar23) {
                pcVar16 = (code *)swi(3);
                EVar26 = (*pcVar16)();
                return EVar26;
              }
              iVar65 = local_618.ArrayNum;
            }
            if (iVar65 == local_618.ArrayMax) {
              iVar65 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x202,&local_618.AllocatorInstance,&local_618.ArrayMax);
            }
            local_618.ArrayNum = iVar65 + 1;
            *(undefined2 *)(local_618.AllocatorInstance.Data + (longlong)iVar65 * 2) = local_680;
            local_3a8 = &local_618;
            local_3b0 = (uint *)((longlong)FVar63 + 4);
            TSet<TTuple<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<int_&,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&&>_>
                      ((TSet<TTuple<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)local_5b8.Data,&local_428,(bool *)&local_3b0);
            *(uint *)(puVar4 + *(int *)(local_608 + 0x14)) = *(uint *)((longlong)FVar63 + 4);
          }
          if (local_148.PropertiesChanged.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_148.PropertiesChanged.AllocatorInstance.SecondaryData);
          }
          if (local_148.PropertiesCompared.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_148.PropertiesCompared.AllocatorInstance.SecondaryData);
          }
          FVar63 = (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)
                   ((longlong)FVar63 + 8);
          uVar46 = (uint)local_640;
        } while( true );
      }
      uVar46 = local_57c;
      if (((UE::Net::Private::bDeltaInitialFastArrayElements != false) || (local_57c != 0)) &&
         ((int)local_638 - 1U < 0x1e)) {
        TArray<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
        SetNum(&local_598,*(uint *)((longlong)FVar42 + 0x48),Default);
        uVar46 = uVar46 + 1;
        local_640 = CONCAT44(local_640._4_4_,uVar46);
        if (uVar46 <= local_65c) {
          do {
            pFVar60 = local_568;
            if ((*(int *)(local_568 + 8) <= (int)(uVar46 & 0x1f)) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar16 = (code *)swi(3);
              EVar26 = (*pcVar16)();
              return EVar26;
            }
            FVar63 = local_5f8;
            uVar59 = *(uint *)((longlong)FVar42 + 0x48);
            pFVar60 = (FScriptContainerElement *)
                      ((ulonglong)(uVar46 & 0x1f) * 0x50 + *(longlong *)pFVar60);
            local_608 = pFVar60;
            if (0 < (int)uVar59) {
              local_638 = 0;
              local_620 = (FScriptContainerElement *)0x0;
              pFVar35 = pFVar53;
              do {
                pFVar52 = local_620;
                uVar30 = (uint)pFVar35;
                uVar46 = uVar29;
                if ((int)uVar30 < (int)uVar59) {
                  uVar46 = ~uVar30 >> 0x1f;
                }
                if ((uVar46 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar16 = (code *)swi(3);
                  EVar26 = (*pcVar16)();
                  return EVar26;
                }
                FVar42 = FVar63;
                if (*(ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> *)
                     ((longlong)FVar63 + 0x40) !=
                    (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0) {
                  FVar42 = *(ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>
                             *)((longlong)FVar63 + 0x40);
                }
                local_5b8.Data = (uchar *)(pFVar52 + (longlong)FVar42);
                if (*(int *)(pFVar60 + 8) != *(int *)(pFVar60 + 0x34)) {
                  pFVar50 = pFVar60 + 0x38;
                  if (*(FScriptContainerElement **)(pFVar60 + 0x40) !=
                      (FScriptContainerElement *)0x0) {
                    pFVar50 = *(FScriptContainerElement **)(pFVar60 + 0x40);
                  }
                  uVar46 = *(uint *)(pFVar50 +
                                    (ulonglong)
                                    (*(int *)(pFVar60 + 0x48) - 1U &
                                    *(uint *)(pFVar52 + 4 + (longlong)FVar42)) * 4);
                  if (uVar46 != 0xffffffff) {
                    do {
                      puVar34 = (uint *)((longlong)(int)uVar46 * 0x20 + *(longlong *)pFVar60);
                      if (*puVar34 == *(uint *)(pFVar52 + 4 + (longlong)FVar42)) {
                        pFVar35 = (FNetTraceCollector *)(puVar34 + 2);
                        if (puVar34 == (uint *)0x0) {
                          pFVar35 = pFVar53;
                        }
                        pFVar60 = local_608;
                        if ((pFVar35 != (FNetTraceCollector *)0x0) &&
                           (1 < (int)*(uint *)((longlong)pFVar35->NestingStack + 8))) {
                          uVar46 = uVar27;
                          if ((int)uVar30 < local_598.ArrayNum) {
                            uVar46 = ~uVar30 >> 0x1f;
                          }
                          if ((uVar46 == 0) &&
                             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar23)) {
                            pcVar16 = (code *)swi(3);
                            EVar26 = (*pcVar16)();
                            return EVar26;
                          }
                          pTVar57 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                                    (local_598.AllocatorInstance.Data + local_638);
                          piVar33 = &pTVar57->ArrayMax;
                          local_4f0.AllocatorInstance.Data = (pTVar57->AllocatorInstance).Data;
                          (pTVar57->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                          local_4f0.ArrayNum = pTVar57->ArrayNum;
                          local_4f0.ArrayMax = *piVar33;
                          *piVar33 = 0;
                          pTVar57->ArrayNum = 0;
                          UE::Core::Private::
                          ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (2,2,1,(ForAnyElementType *)pTVar57,0,piVar33);
                          pFVar22 = local_670;
                          local_368.ChangelistIterator = &local_3a0;
                          local_630.Data =
                               (uchar *)((longlong)
                                         (int)(local_650 *
                                              *(int *)(
                                                  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                                  *)local_5b8.Data) + (longlong)FVar54);
                          local_3a0.ChangedIndex = 0;
                          local_368.Cmds =
                               (TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *)local_5a8;
                          local_368.HandleToCmdIndex =
                               (TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> *)local_5e8;
                          local_368.NumHandlesPerElement = *(int *)&local_5e8->Reader;
                          local_368.Owner = local_670->Owner;
                          local_368.ArrayElementSize = local_650;
                          local_368.MaxArrayIndex = 1;
                          local_368.MinCmdIndex = local_664;
                          local_368.MaxCmdIndex = local_660;
                          local_368.LastSuccessfulCmdIndex = -1;
                          local_3a0.Changed =
                               (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)pFVar35;
                          if (local_660 < local_664) {
                            local_470 = &local_368;
                            `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()
                                      (&local_470);
                          }
                          if (local_4f0.ArrayNum == 0) {
                            PruneChangeList_r(pFVar22,&local_368,local_630,pTVar57);
                          }
                          else {
                            local_390.ChangedIndex = 0;
                            local_390.Changed = &local_4f0;
                            local_318.ChangelistIterator = &local_390;
                            local_318.Cmds =
                                 (TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *)local_5a8;
                            local_318.HandleToCmdIndex =
                                 (TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> *)local_5e8;
                            local_318.NumHandlesPerElement = *(int *)&local_5e8->Reader;
                            local_318.Owner = pFVar22->Owner;
                            local_318.ArrayElementSize = local_650;
                            local_318.MaxArrayIndex = 1;
                            local_318.MinCmdIndex = local_664;
                            local_318.MaxCmdIndex = local_660;
                            local_318.LastSuccessfulCmdIndex = -1;
                            if (local_660 < local_664) {
                              local_468 = &local_318;
                              `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()
                                        (&local_468);
                            }
                            MergeChangeList_r(pFVar22,&local_368,&local_318,local_630,pTVar57);
                          }
                          pFVar60 = (pTVar57->AllocatorInstance).Data;
                          local_67e = 0;
                          if (((pFVar60 <= (FScriptContainerElement *)&local_67e) &&
                              ((FScriptContainerElement *)&local_67e <
                               pFVar60 + (longlong)*piVar33 * 2)) &&
                             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar23)) {
                            pcVar16 = (code *)swi(3);
                            EVar26 = (*pcVar16)();
                            return EVar26;
                          }
                          iVar65 = pTVar57->ArrayNum;
                          if (iVar65 == *piVar33) {
                            iVar65 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x202,(ForAnyElementType *)pTVar57,piVar33);
                          }
                          pTVar57->ArrayNum = iVar65 + 1;
                          *(undefined2 *)((pTVar57->AllocatorInstance).Data + (longlong)iVar65 * 2)
                               = local_67e;
                          pFVar52 = local_620;
                          pFVar60 = local_608;
                          if (local_4f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_4f0.AllocatorInstance.Data);
                            pFVar52 = local_620;
                            pFVar60 = local_608;
                          }
                        }
                        break;
                      }
                      uVar46 = puVar34[6];
                    } while (uVar46 != 0xffffffff);
                  }
                }
                uVar59 = *(uint *)((longlong)FVar63 + 0x48);
                local_620 = pFVar52 + 8;
                local_638 = local_638 + 0x10;
                pFVar35 = (FNetTraceCollector *)(ulonglong)(uVar30 + 1);
              } while ((int)(uVar30 + 1) < (int)uVar59);
              FVar42 = local_5f8;
              uVar46 = (uint)local_640;
            }
            uVar46 = uVar46 + 1;
            local_640 = CONCAT44(local_640._4_4_,uVar46);
            FVar64 = local_570;
          } while (uVar46 <= local_65c);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_690);
      FVar42 = local_5f8;
    }
    if (local_598.ArrayNum == 0) {
      TArray<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                (&local_598,*(uint *)((longlong)FVar42 + 0x48),Default);
      FVar63 = local_5f8;
      uVar29 = *(uint *)((longlong)FVar42 + 0x48);
      pFVar35 = pFVar53;
      pFVar49 = pFVar53;
      pFVar58 = pFVar53;
      if (0 < (int)uVar29) {
        do {
          uVar59 = (uint)pFVar58;
          uVar46 = uVar27;
          if ((int)uVar59 < (int)uVar29) {
            uVar46 = ~uVar59 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar16 = (code *)swi(3);
            EVar26 = (*pcVar16)();
            return EVar26;
          }
          FVar42 = FVar63;
          if (*(ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> *)
               ((longlong)FVar63 + 0x40) !=
              (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0) {
            FVar42 = *(ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> *)
                      ((longlong)FVar63 + 0x40);
          }
          local_5b8.Data =
               (uchar *)((longlong)
                         (int)(local_650 * *(uint *)((longlong)FVar42 + (longlong)pFVar35 * 8)) +
                        (longlong)FVar54);
          uVar29 = uVar27;
          if ((int)uVar59 < local_598.ArrayNum) {
            uVar29 = ~uVar59 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar16 = (code *)swi(3);
            EVar26 = (*pcVar16)();
            return EVar26;
          }
          pTVar57 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                    (local_598.AllocatorInstance.Data + (longlong)pFVar49);
          BuildChangeList_r(local_670,
                            (TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> *)local_5e8,
                            local_664,local_660,local_5b8,0,true,pTVar57);
          if (pTVar57->ArrayNum != 0) {
            pFVar60 = (pTVar57->AllocatorInstance).Data;
            local_67c[0] = 0;
            if (((pFVar60 <= (FScriptContainerElement *)local_67c) &&
                ((FScriptContainerElement *)local_67c < pFVar60 + (longlong)pTVar57->ArrayMax * 2))
               && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar23)) {
              pcVar16 = (code *)swi(3);
              EVar26 = (*pcVar16)();
              return EVar26;
            }
            iVar65 = pTVar57->ArrayNum;
            if (iVar65 == pTVar57->ArrayMax) {
              iVar65 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x202,(ForAnyElementType *)pTVar57,&pTVar57->ArrayMax);
            }
            pTVar57->ArrayNum = iVar65 + 1;
            *(undefined2 *)((pTVar57->AllocatorInstance).Data + (longlong)iVar65 * 2) = local_67c[0]
            ;
          }
          uVar29 = *(uint *)((longlong)FVar63 + 0x48);
          pFVar35 = (FNetTraceCollector *)((longlong)pFVar35->NestingStack + 1);
          FVar42 = local_5f8;
          pFVar49 = (FNetTraceCollector *)((longlong)pFVar49->NestingStack + 0x10);
          FVar64 = local_570;
          pFVar58 = (FNetTraceCollector *)(ulonglong)(uVar59 + 1);
        } while ((int)(uVar59 + 1) < (int)uVar29);
      }
    }
  }
  FVar63 = local_5f8;
  GNetworkProfiler.IgnorePropertyCount = GNetworkProfiler.IgnorePropertyCount + 1;
  if (0 < *(int *)((longlong)FVar42 + 0x48)) {
    local_690 = (FNetTraceCollector *)0x0;
    local_620 = (FScriptContainerElement *)0x0;
    pFVar35 = pFVar53;
    do {
      local_65c = 0xffffffff;
      pFVar49 = pFVar53;
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar49 = (local_648->TraceCollector).Ptr;
      }
      local_5a8 = pFVar49;
      if (pFVar49 != (FNetTraceCollector *)0x0) {
        local_65c = FNetTrace::BeginPacketContentEvent(pFVar49,NameId,(uint)local_648->_padding_);
        uVar44 = (ulonglong)local_65c;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ChangedElement = UE::Net::CreatePersistentNetDebugName(L"ChangedElement",0xe);
          _Init_thread_footer(&::_TSS0);
        }
        uVar29 = FNetTrace::TraceName(ChangedElement);
        pTVar14 = *(TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
                    **)&((ForElementType<FNetTracePacketContentEvent> *)
                        ((longlong)&pFVar49->Events + 0x1000))->field_0x0;
        pTVar51 = &pFVar49->Events;
        if (pTVar14 !=
            (TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
             *)0x0) {
          pTVar51 = pTVar14;
        }
        *(uint *)((pTVar51->AllocatorInstance).InlineData + uVar44 * 0x10) = uVar29;
      }
      uVar46 = (uint)pFVar35;
      uVar29 = uVar27;
      if ((int)uVar46 < *(int *)((longlong)FVar63 + 0x48)) {
        uVar29 = ~uVar46 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar16 = (code *)swi(3);
        EVar26 = (*pcVar16)();
        return EVar26;
      }
      pFVar35 = local_690;
      FVar42 = FVar63;
      if (*(ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> *)
           ((longlong)FVar63 + 0x40) !=
          (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0) {
        FVar42 = *(ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> *)
                  ((longlong)FVar63 + 0x40);
      }
      lVar13 = (longlong)local_690 * 8;
      uVar29 = uVar27;
      if ((int)uVar46 < (int)*(uint *)((longlong)FVar63 + 0x48)) {
        uVar29 = ~uVar46 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar16 = (code *)swi(3);
        EVar26 = (*pcVar16)();
        return EVar26;
      }
      FVar43 = FVar63;
      if (*(ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> *)
           ((longlong)FVar63 + 0x40) !=
          (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0) {
        FVar43 = *(ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> *)
                  ((longlong)FVar63 + 0x40);
      }
      local_5b0[0] = ((uint *)((longlong)FVar43 + 4))[(longlong)pFVar35 * 2];
      plVar47 = (longlong *)local_648->_padding_;
      if ((uint *)plVar47[1] < (uint *)*plVar47 + 1) {
        if ((local_648->_padding_ & 0x10000) == 0) {
          (**(code **)(local_648->_padding_ + 0x188))(local_648,local_5b0,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_648,local_5b0);
        }
      }
      else {
        local_5b0[0] = *(uint *)*plVar47;
        *plVar47 = *plVar47 + 4;
      }
      TVar62.Data = (uchar *)((longlong)(int)(local_650 * *(uint *)((longlong)FVar42 + lVar13)) +
                             (longlong)FVar54);
      if (bVar24 == 0) {
        uVar29 = uVar27;
        if ((int)uVar46 < local_598.ArrayNum) {
          uVar29 = ~uVar46 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          EVar26 = (*pcVar16)();
          return EVar26;
        }
        pTVar57 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                  (local_598.AllocatorInstance.Data + (longlong)local_620);
        iVar65 = *(int *)&pTVar57->ArrayNum;
        FBitWriter::WriteBit((FBitWriter *)local_648,1 < iVar65);
        pFVar22 = local_670;
        pFVar35 = local_690;
        pFVar49 = local_5a8;
        if (1 < iVar65) {
          local_2c8.ChangelistIterator = &local_3c0;
          local_2c8.Cmds = &local_670->Cmds;
          local_2c8.HandleToCmdIndex =
               (TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> *)local_5e8;
          local_3c0.ChangedIndex = 0;
          local_2c8.NumHandlesPerElement = *(int *)&local_5e8->Reader;
          local_2c8.ArrayElementSize = local_650;
          local_2c8.Owner = local_670->Owner;
          local_2c8.MaxArrayIndex = 1;
          local_2c8.MinCmdIndex = local_664;
          local_2c8.MaxCmdIndex = local_660;
          local_2c8.LastSuccessfulCmdIndex = -1;
          local_3c0.Changed = pTVar57;
          if (local_660 < local_664) {
            local_460 = (FPacketIdRange)&local_2c8;
            `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_460);
          }
          SendProperties_r(pFVar22,(FSendingRepState *)0x0,local_648,false,&local_2c8,TVar62,1,
                           (FRepSerializationSharedInfo *)0x0,Handle);
          uVar29 = 0xffffffff;
          pFVar58 = pFVar53;
          if (GNetTraceRuntimeVerbosity != 0) {
            pFVar58 = (local_648->TraceCollector).Ptr;
          }
          uVar59 = (uint)local_648->_padding_;
          if (pFVar58 != (FNetTraceCollector *)0x0) {
            uVar29 = FNetTrace::BeginPacketContentEvent(pFVar58,NameId,uVar59);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              PropertyHandle = UE::Net::CreatePersistentNetDebugName(L"PropertyHandle",0xe);
              _Init_thread_footer(&::_TSS0);
            }
            uVar30 = FNetTrace::TraceName(PropertyHandle);
            pTVar14 = *(TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
                        **)&((ForElementType<FNetTracePacketContentEvent> *)
                            ((longlong)&pFVar58->Events + 0x1000))->field_0x0;
            pTVar51 = &pFVar58->Events;
            if (pTVar14 !=
                (TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
              pTVar51 = pTVar14;
            }
            *(uint *)((pTVar51->AllocatorInstance).InlineData + (ulonglong)uVar29 * 0x10) = uVar30;
          }
          local_514[1] = 0;
          (**(code **)(local_648->_padding_ + 0x1a0))(local_648,local_514 + 1);
          if (6 < (byte)LogRepProperties._0_1_) {
            UE::Logging::Private::BasicLog<7>
                      ((FStaticBasicLogRecord *)&PTR_u_WritePropertyHa_151ae5800,
                       (FLogCategoryBase *)&LogRepProperties);
          }
          if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
             (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
            if (__CsvProfilerStat1943 == false) {
              FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
              __CsvProfilerStat1943 = true;
            }
            FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
            FNetworkProfiler::TrackWritePropertyHandle
                      (&GNetworkProfiler,(short)local_648->_padding_ - (short)uVar59,
                       (UNetConnection *)0x0);
            FCsvProfiler::EndExclusiveStat("NetworkProfiler");
          }
          pFVar35 = local_690;
          pFVar49 = local_5a8;
          if (uVar29 != 0xffffffff) {
            FNetTrace::EndPacketContentEvent(pFVar58,uVar29,(uint)local_648->_padding_);
            pFVar35 = local_690;
            pFVar49 = local_5a8;
          }
        }
      }
      else {
        SendAllProperties_BackwardsCompatible_r
                  (local_670,(FSendingRepState *)0x0,local_648,false,(UPackageMapClient *)local_588,
                   local_558,local_664,local_660,TVar62);
      }
      if (local_65c != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar49,local_65c,(uint)local_648->_padding_);
      }
      local_620 = local_620 + 0x10;
      local_690 = (FNetTraceCollector *)((longlong)pFVar35 + 1);
      pFVar35 = (FNetTraceCollector *)(ulonglong)(uVar46 + 1);
      FVar64 = local_570;
    } while ((int)(uVar46 + 1) < (int)*(uint *)((longlong)FVar63 + 0x48));
  }
  EVar26 = *(byte *)((longlong)&local_648->_padding_ + 1) & Error;
  GNetworkProfiler.IgnorePropertyCount = GNetworkProfiler.IgnorePropertyCount - 1;
  goto LAB_1484d22ac;
LAB_1484d1673:
  if (local_148.PropertiesChanged.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_148.PropertiesChanged.AllocatorInstance.SecondaryData);
  }
  if (local_148.PropertiesCompared.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_148.PropertiesCompared.AllocatorInstance.SecondaryData);
  }
  if (local_618.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_618.AllocatorInstance.Data);
  }
  if (local_b8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_690);
  EVar26 = FatalError;
LAB_1484d22ac:
  DestructItems<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)local_598.AllocatorInstance.Data,
             local_598.ArrayNum);
  if ((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)local_598.AllocatorInstance.Data !=
      (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_598.AllocatorInstance.Data);
  }
LAB_1484d2c27:
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(FVar64,CycleScopeEnd);
  }
  return EVar26;
}

// DestructProperties @ 1484d4710

void __thiscall FRepLayout::DestructProperties(FRepLayout *this,FRepStateStaticBuffer *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Parents).ArrayNum;
  pFVar8 = (this->Parents).AllocatorInstance.Data;
  pFVar3 = (param_1->Buffer).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x30;
  while( true ) {
    if ((this->Parents).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRepParentCmd_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    if (*(int *)(pFVar8 + 0x10) == 0) {
      if ((param_1->Buffer).ArrayNum <
          *(int *)(*(longlong *)pFVar8 + 0x34) * *(int *)(*(longlong *)pFVar8 + 0x30) +
          *(int *)(pFVar8 + 0x18)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Parent.ShadowOffset + Parent.Property->GetSize()) <= InShadowData.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                           ,0x1ce5,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      plVar4 = *(longlong **)pFVar8;
      if ((plVar4[7] & 0x1000000000U) == 0) {
        (**(code **)(*plVar4 + 0x138))(plVar4,pFVar3 + *(int *)(pFVar8 + 0x18));
      }
    }
    pFVar8 = pFVar8 + 0x30;
  }
  piVar1 = &(param_1->Buffer).ArrayMax;
  (param_1->Buffer).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)param_1,0,piVar1);
  }
  return;
}

// FilterChangeList @ 1484d6820

void __thiscall
FRepLayout::FilterChangeList
          (FRepLayout *this,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_4)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ForElementType<unsigned_int> FVar10;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *pTVar15;
  longlong lVar16;
  FRepHandleIterator *local_res8;
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *local_res10;
  ForElementType<unsigned_int> local_res18;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *local_res20;
  undefined2 local_b8;
  ushort local_b6;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0 [4];
  FChangelistIterator local_a8;
  FRepHandleIterator local_98;
  
  pTVar15 = &this->Cmds;
  local_a8.ChangedIndex = 0;
  local_98.ChangelistIterator = &local_a8;
  local_98.HandleToCmdIndex = &this->BaseHandleToCmdIndex;
  local_98.NumHandlesPerElement = (this->BaseHandleToCmdIndex).ArrayNum;
  local_98.MaxCmdIndex = (this->Cmds).ArrayNum + -1;
  local_98.Owner = this->Owner;
  local_98.ArrayElementSize = 0;
  local_98.MaxArrayIndex = 1;
  local_98.MinCmdIndex = 0;
  local_98.LastSuccessfulCmdIndex = -1;
  local_res10 = pTVar15;
  local_res18 = (ForElementType<unsigned_int>)param_2;
  local_res20 = param_3;
  local_a8.Changed = param_1;
  local_98.Cmds = pTVar15;
  if (local_98.MaxCmdIndex < 0) {
    local_res8 = &local_98;
    `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_res8);
  }
  piVar13 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax != 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,1,&param_3->AllocatorInstance,0,piVar13);
  }
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax != 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,1,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  bVar6 = FRepHandleIterator::NextHandle(&local_98);
  if (bVar6) {
    do {
      iVar9 = local_98.CmdIndex;
      uVar7 = 0;
      if (local_98.CmdIndex < pTVar15->ArrayNum) {
        uVar7 = (uint)~local_98.CmdIndex >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (pTVar15->AllocatorInstance).Data;
      uVar1 = *(ushort *)(pFVar2 + (longlong)iVar9 * 0x20 + 0x16);
      if ((*(int *)((longlong)param_2 + 0x18) <= (int)(uint)uVar1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar10 = (ForElementType<unsigned_int>)param_2;
      if (*(ForElementType<unsigned_int> *)((longlong)param_2 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar10 = *(ForElementType<unsigned_int> *)((longlong)param_2 + 0x10);
      }
      pTVar11 = param_4;
      if ((*(uint *)((longlong)FVar10 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
        pTVar11 = param_3;
      }
      local_b8 = (undefined2)local_98.Handle;
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar3 + (longlong)pTVar11->ArrayMax * 2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = pTVar11->ArrayNum;
      if (iVar8 == pTVar11->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
      }
      pTVar5 = local_a8.Changed;
      pTVar11->ArrayNum = iVar8 + 1;
      *(undefined2 *)((pTVar11->AllocatorInstance).Data + (longlong)iVar8 * 2) = local_b8;
      if (pFVar2[(longlong)iVar9 * 0x20 + 0x1c] == (FScriptContainerElement)0x0) {
        lVar16 = (longlong)local_a8.ChangedIndex;
        uVar7 = 0;
        if (local_a8.ChangedIndex < (local_a8.Changed)->ArrayNum) {
          uVar7 = (uint)~local_a8.ChangedIndex >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (pTVar11->AllocatorInstance).Data;
        uVar1 = *(ushort *)((pTVar5->AllocatorInstance).Data + lVar16 * 2);
        local_b6 = uVar1;
        if (((pFVar2 <= (FScriptContainerElement *)&local_b6) &&
            ((FScriptContainerElement *)&local_b6 < pFVar2 + (longlong)pTVar11->ArrayMax * 2)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = pTVar11->ArrayNum;
        if (iVar9 == pTVar11->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x202,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
        }
        iVar8 = 0;
        pTVar11->ArrayNum = iVar9 + 1;
        *(ushort *)((pTVar11->AllocatorInstance).Data + (longlong)iVar9 * 2) = local_b6;
        if (uVar1 != 0) {
          do {
            pTVar5 = local_a8.Changed;
            uVar14 = local_a8.ChangedIndex + 1U + iVar8;
            uVar7 = 0;
            if ((int)uVar14 < (local_a8.Changed)->ArrayNum) {
              uVar7 = ~uVar14 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar14 * 2;
            pFVar3 = (pTVar11->AllocatorInstance).Data;
            if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)pTVar11->ArrayMax * 2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar9 = pTVar11->ArrayNum;
            if (iVar9 == pTVar11->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x202,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
            }
            pTVar11->ArrayNum = iVar9 + 1;
            iVar8 = iVar8 + 1;
            *(undefined2 *)((pTVar11->AllocatorInstance).Data + (longlong)iVar9 * 2) =
                 *(undefined2 *)pFVar2;
          } while (iVar8 < (int)(uint)uVar1);
        }
        pFVar2 = (pTVar11->AllocatorInstance).Data;
        local_b4 = 0;
        if (((pFVar2 <= (FScriptContainerElement *)&local_b4) &&
            ((FScriptContainerElement *)&local_b4 < pFVar2 + (longlong)pTVar11->ArrayMax * 2)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = pTVar11->ArrayNum;
        if (iVar9 == pTVar11->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x202,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
        }
        pTVar11->ArrayNum = iVar9 + 1;
        *(undefined2 *)((pTVar11->AllocatorInstance).Data + (longlong)iVar9 * 2) = local_b4;
        FRepHandleIterator::JumpOverArray(&local_98);
        param_3 = local_res20;
        param_2 = (TBitArray<FDefaultBitArrayAllocator> *)local_res18;
      }
      bVar6 = FRepHandleIterator::NextHandle(&local_98);
      pTVar15 = local_res10;
    } while (bVar6);
    piVar13 = &param_3->ArrayMax;
  }
  piVar12 = &param_4->ArrayMax;
  pFVar2 = (param_3->AllocatorInstance).Data;
  local_b2 = 0;
  if (((pFVar2 <= (FScriptContainerElement *)&local_b2) &&
      ((FScriptContainerElement *)&local_b2 < pFVar2 + (longlong)*piVar13 * 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = param_3->ArrayNum;
  if (iVar9 == *piVar13) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,&param_3->AllocatorInstance,piVar13);
  }
  param_3->ArrayNum = iVar9 + 1;
  local_b0[0] = 0;
  *(undefined2 *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 2) = local_b2;
  pFVar2 = (param_4->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_b0) &&
      ((FScriptContainerElement *)local_b0 < pFVar2 + (longlong)*piVar12 * 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = param_4->ArrayNum;
  if (iVar9 == *piVar12) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,&param_4->AllocatorInstance,piVar12);
  }
  param_4->ArrayNum = iVar9 + 1;
  *(undefined2 *)((param_4->AllocatorInstance).Data + (longlong)iVar9 * 2) = local_b0[0];
  return;
}

// FilterChangeListToActive @ 1484d6e90

void __thiscall
FRepLayout::FilterChangeListToActive
          (FRepLayout *this,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  longlong lVar13;
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *pTVar14;
  FRepHandleIterator *local_res8;
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *local_res10;
  ForElementType<unsigned_int> local_res18;
  undefined2 local_a8;
  ushort local_a6;
  undefined2 local_a4;
  undefined2 local_a2;
  FChangelistIterator local_a0;
  FRepHandleIterator local_88;
  
  pTVar14 = &this->Cmds;
  local_88.ChangelistIterator = &local_a0;
  local_a0.ChangedIndex = 0;
  local_88.HandleToCmdIndex = &this->BaseHandleToCmdIndex;
  local_88.NumHandlesPerElement = (this->BaseHandleToCmdIndex).ArrayNum;
  local_88.MaxCmdIndex = (this->Cmds).ArrayNum + -1;
  local_88.Owner = this->Owner;
  local_88.ArrayElementSize = 0;
  local_88.MaxArrayIndex = 1;
  local_88.MinCmdIndex = 0;
  local_88.LastSuccessfulCmdIndex = -1;
  local_res10 = pTVar14;
  local_res18 = (ForElementType<unsigned_int>)param_2;
  local_a0.Changed = param_1;
  local_88.Cmds = pTVar14;
  if (local_88.MaxCmdIndex < 0) {
    local_res8 = &local_88;
    `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_res8);
  }
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax != 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,1,&param_3->AllocatorInstance,0,piVar1);
  }
  bVar7 = FRepHandleIterator::NextHandle(&local_88);
  if (bVar7) {
    do {
      iVar10 = local_88.CmdIndex;
      uVar8 = 0;
      if (local_88.CmdIndex < pTVar14->ArrayNum) {
        uVar8 = (uint)~local_88.CmdIndex >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (pTVar14->AllocatorInstance).Data;
      uVar2 = *(ushort *)(pFVar3 + (longlong)iVar10 * 0x20 + 0x16);
      if ((*(int *)((longlong)param_2 + 0x18) <= (int)(uint)uVar2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar11 = (ForElementType<unsigned_int>)param_2;
      if (*(ForElementType<unsigned_int> *)((longlong)param_2 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar11 = *(ForElementType<unsigned_int> *)((longlong)param_2 + 0x10);
      }
      if ((*(uint *)((longlong)FVar11 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0) {
        pFVar4 = (param_3->AllocatorInstance).Data;
        local_a8 = (undefined2)local_88.Handle;
        if (((pFVar4 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 < pFVar4 + (longlong)*piVar1 * 2)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = param_3->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x202,&param_3->AllocatorInstance,piVar1);
        }
        pTVar6 = local_a0.Changed;
        param_3->ArrayNum = iVar9 + 1;
        *(undefined2 *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 2) = local_a8;
        if (pFVar3[(longlong)iVar10 * 0x20 + 0x1c] == (FScriptContainerElement)0x0) {
          lVar13 = (longlong)local_a0.ChangedIndex;
          uVar8 = 0;
          if (local_a0.ChangedIndex < (local_a0.Changed)->ArrayNum) {
            uVar8 = (uint)~local_a0.ChangedIndex >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (param_3->AllocatorInstance).Data;
          uVar2 = *(ushort *)((pTVar6->AllocatorInstance).Data + lVar13 * 2);
          local_a6 = uVar2;
          if (((pFVar3 <= (FScriptContainerElement *)&local_a6) &&
              ((FScriptContainerElement *)&local_a6 < pFVar3 + (longlong)*piVar1 * 2)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar10 = param_3->ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,&param_3->AllocatorInstance,piVar1);
          }
          iVar9 = 0;
          param_3->ArrayNum = iVar10 + 1;
          *(ushort *)((param_3->AllocatorInstance).Data + (longlong)iVar10 * 2) = local_a6;
          if (uVar2 != 0) {
            do {
              pTVar6 = local_a0.Changed;
              uVar12 = local_a0.ChangedIndex + 1U + iVar9;
              uVar8 = 0;
              if ((int)uVar12 < (local_a0.Changed)->ArrayNum) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar3 = (pTVar6->AllocatorInstance).Data + (longlong)(int)uVar12 * 2;
              pFVar4 = (param_3->AllocatorInstance).Data;
              if (((pFVar4 <= pFVar3) && (pFVar3 < pFVar4 + (longlong)*piVar1 * 2)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar10 = param_3->ArrayNum;
              if (iVar10 == *piVar1) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x202,&param_3->AllocatorInstance,piVar1);
              }
              param_3->ArrayNum = iVar10 + 1;
              iVar9 = iVar9 + 1;
              *(undefined2 *)((param_3->AllocatorInstance).Data + (longlong)iVar10 * 2) =
                   *(undefined2 *)pFVar3;
              pTVar14 = local_res10;
            } while (iVar9 < (int)(uint)uVar2);
          }
          pFVar3 = (param_3->AllocatorInstance).Data;
          local_a4 = 0;
          if (((pFVar3 <= (FScriptContainerElement *)&local_a4) &&
              ((FScriptContainerElement *)&local_a4 < pFVar3 + (longlong)*piVar1 * 2)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar10 = param_3->ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,&param_3->AllocatorInstance,piVar1);
          }
          param_3->ArrayNum = iVar10 + 1;
          *(undefined2 *)((param_3->AllocatorInstance).Data + (longlong)iVar10 * 2) = local_a4;
          FRepHandleIterator::JumpOverArray(&local_88);
          param_2 = (TBitArray<FDefaultBitArrayAllocator> *)local_res18;
        }
      }
      else if (pFVar3[(longlong)iVar10 * 0x20 + 0x1c] == (FScriptContainerElement)0x0) {
        FRepHandleIterator::JumpOverArray(&local_88);
      }
      bVar7 = FRepHandleIterator::NextHandle(&local_88);
    } while (bVar7);
  }
  pFVar3 = (param_3->AllocatorInstance).Data;
  local_a2 = 0;
  if (((pFVar3 <= (FScriptContainerElement *)&local_a2) &&
      ((FScriptContainerElement *)&local_a2 < pFVar3 + (longlong)*piVar1 * 2)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = param_3->ArrayNum;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&param_3->AllocatorInstance,piVar1);
  }
  param_3->ArrayNum = iVar10 + 1;
  *(undefined2 *)((param_3->AllocatorInstance).Data + (longlong)iVar10 * 2) = local_a2;
  return;
}

// FindCompatibleProperty @ 1484d75b0

int __thiscall
FRepLayout::FindCompatibleProperty(FRepLayout *this,int param_1,int param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  while( true ) {
    if (param_2 <= param_1) {
      return -1;
    }
    uVar4 = 0;
    if (param_1 < (this->Cmds).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    pFVar1 = (this->Cmds).AllocatorInstance.Data;
    if ((pFVar1[(longlong)param_1 * 0x20 + 0x1c] == (FScriptContainerElement)0x1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Cmd.Type != ERepLayoutCmdType::Return",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                           ,0xf43,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    if (*(uint *)(pFVar1 + (longlong)param_1 * 0x20 + 0x18) == param_3) {
      return param_1;
    }
    if (pFVar1[(longlong)param_1 * 0x20 + 0x1c] == (FScriptContainerElement)0x0) {
      param_1 = *(ushort *)(pFVar1 + (longlong)param_1 * 0x20 + 8) - 1;
    }
    param_1 = param_1 + 1;
  }
  pcVar2 = (code *)swi(3);
  iVar5 = (*pcVar2)();
  return iVar5;
}

// GatherGuidReferences @ 1484d7770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRepLayout::GatherGuidReferences
          (FRepLayout *this,FReceivingRepState *param_1,FNetDeltaSerializeInfo *param_2,
          TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *param_3,
          int *param_4)

{
  ushort uVar1;
  FLifetimeCustomDeltaState *pFVar2;
  UObject *pUVar3;
  longlong lVar4;
  UObjectBaseUtility *this_00;
  undefined8 *puVar5;
  uint *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint local_res8;
  FBitWriter *local_e8;
  FBitReader *local_e0;
  TSharedPtr<INetDeltaBaseState,1> *local_d8;
  INetDeltaBaseState *local_d0;
  UPackageMap *local_c8;
  UNetConnection *local_c0;
  void *local_b8;
  UStruct *local_b0;
  INetSerializeCB *local_a8;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  undefined1 local_98;
  UObject *local_90;
  UObject *local_88;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *local_80;
  int *local_78;
  FNetworkGUID *local_70;
  ushort local_68;
  FString local_60;
  FString local_48;
  
  if (((this->Flags & NoReplicatedProperties) == None) && ((this->Parents).ArrayNum != 0)) {
    GatherGuidReferences_r(this,&param_1->GuidReferencesMap,param_3,param_4);
    pFVar2 = (this->LifetimeCustomPropertyState).Ptr;
    if (pFVar2 != (FLifetimeCustomDeltaState *)0x0) {
      pUVar3 = param_2->Object;
      uVar10 = (uint)(ushort)(pFVar2->LifetimeCustomDeltaProperties).ArrayNum;
      local_res8 = 0;
      if (uVar10 != 0) {
        do {
          pFVar2 = (this->LifetimeCustomPropertyState).Ptr;
          if (((pFVar2->LifetimeCustomDeltaProperties).ArrayNum <= (int)(local_res8 & 0xffff)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar1 = *(ushort *)
                   ((pFVar2->LifetimeCustomDeltaProperties).AllocatorInstance.Data +
                   (ulonglong)(local_res8 & 0xffff) * 0x18);
          if (((this->Parents).ArrayNum <= (int)(uint)uVar1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar13 = (this->Parents).AllocatorInstance.Data + (ulonglong)uVar1 * 0x30;
          lVar4 = *(longlong *)pFVar13;
          this_00 = *(UObjectBaseUtility **)(lVar4 + 0x70);
          if (this_00[4].field_0x14 == '\0') {
            UObjectBaseUtility::GetPathName(this_00,&local_48,(UObject *)0x0);
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("bPrepareCppStructOpsCompleted",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x8f6,
                               L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s"
                              );
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          puVar5 = *(undefined8 **)&this_00[4].field_0x18;
          local_e8 = param_2->Writer;
          local_e0 = param_2->Reader;
          local_d8 = param_2->NewState;
          local_d0 = param_2->OldState;
          local_c8 = param_2->Map;
          local_c0 = param_2->Connection;
          local_b8 = param_2->Data;
          local_b0 = param_2->Struct;
          local_a8 = param_2->NetSerializeCB;
          local_a0 = param_2->bUpdateUnmappedObjects;
          local_9f = param_2->bOutSomeObjectsWereMapped;
          local_9e = param_2->bCalledPreNetReceive;
          local_9d = param_2->bOutHasMoreUnmapped;
          local_9c = param_2->bGuidListsChanged;
          local_9b = param_2->bIsWritingOnClient;
          local_9a = param_2->bIsInitializingBaseFromDefault;
          local_99 = param_2->bSupportsFastArrayDeltaStructSerialization;
          local_98 = param_2->bInternalAck;
          local_90 = param_2->Object;
          local_88 = param_2->CustomDeltaObject;
          local_80 = param_2->GatherGuidReferences;
          local_78 = param_2->TrackedGuidMemoryBytes;
          local_70 = param_2->MoveGuidToUnmapped;
          local_68 = param_2->CustomDeltaIndex;
          ::FString::FString(&local_60,&param_2->DebugName);
          local_b0 = *(UStruct **)(lVar4 + 0x70);
          local_68 = (ushort)local_res8;
          puVar11 = &pUVar3->field_0x0 + *(int *)(pFVar13 + 0x14);
          puVar6 = (uint *)*puVar5;
          local_b8 = puVar11;
          if ((*(byte *)((longlong)puVar6 + 0x15) & 1) != 0) {
            if (((*puVar6 & 0x80) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!!(this->Flags & FuncFlag)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                   ,0x660,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar12 = 0;
            for (uVar9 = *puVar6 & 0x7f; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
              uVar12 = uVar12 + 1;
            }
            (**(code **)(puVar6 + (ulonglong)uVar12 * 2 + 6))(&local_e8,puVar11);
          }
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          local_res8 = local_res8 + 1;
        } while ((int)local_res8 < (int)uVar10);
      }
    }
  }
  return;
}

// GatherGuidReferencesForFastArray @ 1484d7ac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRepLayout::GatherGuidReferencesForFastArray
          (FRepLayout *this,FFastArrayDeltaSerializeParams *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ushort uVar3;
  int iVar4;
  FLifetimeCustomDeltaState *pFVar5;
  FFastArraySerializer *pFVar6;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *pTVar7;
  int *piVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  FFastArrayDeltaSerializeParams *local_res10;
  int local_res18 [2];
  int local_res20;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  pFVar5 = (this->LifetimeCustomPropertyState).Ptr;
  uVar3 = param_1->DeltaSerializeInfo->CustomDeltaIndex;
  local_res10 = param_1;
  if (((pFVar5->LifetimeCustomDeltaProperties).ArrayNum <= (int)(uint)uVar3) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((this->Parents).ArrayNum <=
       (int)(uint)*(ushort *)
                   ((pFVar5->LifetimeCustomDeltaProperties).AllocatorInstance.Data +
                   (ulonglong)uVar3 * 0x18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar6 = param_1->ArraySerializer;
  iVar16 = 0;
  uVar11 = 1;
  iVar18 = 0;
  puVar1 = &(pFVar6->GuidReferencesMap_StructDelta).field_0x10;
  pTVar7 = param_1->DeltaSerializeInfo->GatherGuidReferences;
  local_res18[0] = 0;
  iVar4 = *(int *)&(pFVar6->GuidReferencesMap_StructDelta).field_0x28;
  iVar12 = 0;
  if (iVar4 != 0) {
    puVar19 = *(uint **)&(pFVar6->GuidReferencesMap_StructDelta).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar15 = *puVar19;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar12 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1484d7c0d;
      uVar15 = puVar19[lVar13 + 1];
    }
    uVar11 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    iVar12 = iVar18 + -1 + local_res20;
    if (iVar4 < iVar12) {
      iVar12 = iVar4;
    }
  }
LAB_1484d7c0d:
  uVar15 = *(uint *)&(pFVar6->GuidReferencesMap_StructDelta).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar11,iVar16);
  TStack_98.CurrentBitIndex = iVar12;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = iVar18;
  uStack_78 = CONCAT44(uStack_a4,
                       *(int *)&(pFVar6->GuidReferencesMap_StructDelta).field_0x8 -
                       *(int *)&(pFVar6->GuidReferencesMap_StructDelta).field_0x34);
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar11 = *(uint *)&(pFVar6->GuidReferencesMap_StructDelta).field_0x28;
  if (uVar15 != uVar11) {
    puVar17 = *(undefined1 **)&(pFVar6->GuidReferencesMap_StructDelta).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      uVar14 = uVar14 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_1484d7d10;
      uVar15 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar14;
    if ((int)uVar11 < (int)uVar15) {
      uVar15 = uVar11;
    }
  }
LAB_1484d7d10:
  while( true ) {
    if (*(int *)&(pFVar6->GuidReferencesMap_StructDelta).field_0x8 -
        *(int *)&(pFVar6->GuidReferencesMap_StructDelta).field_0x34 != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_98.CurrentBitIndex == uVar15) &&
       (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    GatherGuidReferences_r
              (this,(TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                     *)(*(longlong *)&pFVar6->GuidReferencesMap_StructDelta + 8 +
                       (longlong)TStack_98.CurrentBitIndex * 0x60),pTVar7,local_res18);
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  piVar8 = local_res10->DeltaSerializeInfo->TrackedGuidMemoryBytes;
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + local_res18[0];
  }
  return;
}

// GatherGuidReferences_r @ 1484d7da0

void __thiscall
FRepLayout::GatherGuidReferences_r
          (FRepLayout *this,
          TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
          *param_1,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *param_2,
          int *param_3)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
  *pTVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  ForElementType<unsigned_int> FVar12;
  undefined1 local_a8 [8];
  ForElementType<unsigned_int> local_a0;
  TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int local_68;
  int local_64;
  TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
  *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_58;
  undefined8 uStack_38;
  
  iVar2 = *(int *)&param_1->field_0x28;
  local_a0 = (ForElementType<unsigned_int>)&param_1->field_0x10;
  local_78 = 0;
  iStack_90 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar11 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar11 = (uint *)local_a0;
    }
    uVar10 = *puVar11;
    while (uVar10 == 0) {
      lVar7 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1484d7e5d;
      uVar10 = (puVar11 + 1)[lVar7];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_68 = (int)lVar7;
    iStack_7c = local_78 + -1 + local_68;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_1484d7e5d:
  iStack_70 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uVar10 = *(uint *)&param_1->field_0x28;
  uStack_80 = 0xffffffff;
  TStack_58.CurrentBitIndex = iStack_7c;
  TStack_58.UnvisitedBitMask = 0xffffffff;
  TStack_58._padding_ = CONCAT44(uStack_8c,iStack_90);
  uVar9 = uVar10 & 0xffffffe0;
  iVar8 = (int)uVar10 >> 5;
  TStack_58._28_4_ = iStack_7c;
  TStack_58.BaseBitIndex = local_78;
  uStack_38 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = (undefined1 *)local_a0;
  iStack_74 = iStack_7c;
  local_60 = param_1;
  TStack_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a0;
  if ((((int)uVar10 < 0) || (iVar2 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = *(int *)((longlong)local_a0 + 0x18);
  if (uVar10 != uVar6) {
    FVar12 = *(ForElementType<unsigned_int> *)((longlong)local_a0 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_a0 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_a0;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)((longlong)FVar12 + (longlong)iVar8 * 4);
    while (uVar10 == 0) {
      lVar7 = (longlong)iVar8;
      uVar9 = uVar9 + 0x20;
      iVar8 = iVar8 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1484d7f61;
      uVar10 = *(uint *)((undefined1 *)((longlong)FVar12 + 4) + lVar7 * 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_64 = (int)lVar7;
    uVar10 = local_64 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1484d7f61:
  do {
    pTVar4 = local_60;
    if (*(int *)&local_60->field_0x8 - *(int *)&local_60->field_0x34 != (int)uStack_38) {
      local_a8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_a8);
    }
    if (((TStack_58.CurrentBitIndex == uVar10) &&
        ((ForElementType<unsigned_int>)TStack_58.Array == local_a0)) && (pTVar4 == param_1)) {
      return;
    }
    lVar7 = *(longlong *)pTVar4 + (longlong)TStack_58.CurrentBitIndex * 0xe0;
    if (*(longlong *)(lVar7 + 200) == 0) {
      *param_3 = *param_3 + *(int *)(lVar7 + 0xc0);
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>
                (param_2,(TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                         (lVar7 + 0x18));
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>
                (param_2,(TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                         (lVar7 + 0x68));
    }
    else {
      uVar9 = *(uint *)(lVar7 + 0xc);
      uVar6 = 0;
      if ((int)uVar9 < (this->Cmds).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((this->Cmds).AllocatorInstance.Data[(longlong)(int)uVar9 * 0x20 + 0x1c] !=
           (FScriptContainerElement)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Cmds[GuidReferences.CmdIndex].Type == ERepLayoutCmdType::DynamicArray"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                             ,0x1075,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      GatherGuidReferences_r
                (this,*(TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                        **)(lVar7 + 200),param_2,param_3);
    }
    TStack_58.UnvisitedBitMask = TStack_58.UnvisitedBitMask & ~TStack_58._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_58);
  } while( true );
}

// GenerateChecksum @ 1484d80b0

uint __thiscall FRepLayout::GenerateChecksum(FRepLayout *this,FRepState *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TIndexedContainerIterator<TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_const_,FRepLayoutCmd_const_,int>
  local_d8;
  FBitWriter local_c8;
  
  FBitWriter::FBitWriter(&local_c8,0x400,true);
  local_d8.Container = &this->Cmds;
  local_d8.Index = 0;
  ValidateWithChecksum_r<1>
            (&local_d8,
             (TRepDataBufferBase<1,unsigned_char_const_>)
             (((param_1->ReceivingRepState).Ptr)->StaticBuffer).Buffer.AllocatorInstance.Data,
             (FBitArchive *)&local_c8);
  if (local_d8.Index != (this->Cmds).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CmdIt.GetIndex() == Cmds.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                       ,0x1306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if ((local_c8._padding_._1_1_ & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsError()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                       ,0x49,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = (*FCrc::MemCrc32Func)
                    (local_c8.Buffer.AllocatorInstance.Data,(int)(local_c8.Num + 7 >> 3),0);
  FBitWriter::~FBitWriter(&local_c8);
  return uVar3;
}

// GetCustomDeltaIndexFromPropertyRepIndex @ 1484d83e0

ushort __thiscall
FRepLayout::GetCustomDeltaIndexFromPropertyRepIndex(FRepLayout *this,ushort param_1)

{
  ushort uVar1;
  
  uVar1 = FLifetimeCustomDeltaState::GetCustomDeltaIndexFromPropertyRepIndex
                    ((this->LifetimeCustomPropertyState).Ptr,param_1);
  return uVar1;
}

// GetLifetimeCustomDeltaProperty @ 1484d88a0

FProperty * __thiscall FRepLayout::GetLifetimeCustomDeltaProperty(FRepLayout *this,ushort param_1)

{
  ushort uVar1;
  FLifetimeCustomDeltaState *pFVar2;
  code *pcVar3;
  bool bVar4;
  FProperty *pFVar5;
  
  pFVar2 = (this->LifetimeCustomPropertyState).Ptr;
  if ((pFVar2->LifetimeCustomDeltaProperties).ArrayNum <= (int)(uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FProperty *)(*pcVar3)();
      return pFVar5;
    }
  }
  uVar1 = *(ushort *)
           ((pFVar2->LifetimeCustomDeltaProperties).AllocatorInstance.Data +
           (ulonglong)param_1 * 0x18);
  if ((this->Parents).ArrayNum <= (int)(uint)uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FProperty *)(*pcVar3)();
      return pFVar5;
    }
  }
  return *(FProperty **)((this->Parents).AllocatorInstance.Data + (ulonglong)uVar1 * 0x30);
}

// GetLifetimeCustomDeltaPropertyCondition @ 1484d8960

ELifetimeCondition __thiscall
FRepLayout::GetLifetimeCustomDeltaPropertyCondition(FRepLayout *this,ushort param_1)

{
  ushort uVar1;
  FLifetimeCustomDeltaState *pFVar2;
  code *pcVar3;
  bool bVar4;
  ELifetimeCondition EVar5;
  
  pFVar2 = (this->LifetimeCustomPropertyState).Ptr;
  if ((pFVar2->LifetimeCustomDeltaProperties).ArrayNum <= (int)(uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  uVar1 = *(ushort *)
           ((pFVar2->LifetimeCustomDeltaProperties).AllocatorInstance.Data +
           (ulonglong)param_1 * 0x18);
  if ((this->Parents).ArrayNum <= (int)(uint)uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  return *(ELifetimeCondition *)
          ((this->Parents).AllocatorInstance.Data + (ulonglong)uVar1 * 0x30 + 0x20);
}

// GetLifetimeCustomDeltaPropertyRepIndex @ 1484d8a20

ushort __thiscall
FRepLayout::GetLifetimeCustomDeltaPropertyRepIndex(FRepLayout *this,ushort param_1)

{
  FLifetimeCustomDeltaState *pFVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  
  pFVar1 = (this->LifetimeCustomPropertyState).Ptr;
  if ((pFVar1->LifetimeCustomDeltaProperties).ArrayNum <= (int)(uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return *(ushort *)
          ((pFVar1->LifetimeCustomDeltaProperties).AllocatorInstance.Data +
          (ulonglong)param_1 * 0x18);
}

// GetNumLifetimeCustomDeltaProperties @ 1484d9320

ushort __thiscall FRepLayout::GetNumLifetimeCustomDeltaProperties(FRepLayout *this)

{
  FLifetimeCustomDeltaState *pFVar1;
  
  pFVar1 = (this->LifetimeCustomPropertyState).Ptr;
  if (pFVar1 != (FLifetimeCustomDeltaState *)0x0) {
    return (ushort)(pFVar1->LifetimeCustomDeltaProperties).ArrayNum;
  }
  return 0;
}

// GetReferencerName @ 1484d9f10

FString * __thiscall FRepLayout::GetReferencerName(FRepLayout *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FRepLayout");
  return __return_storage_ptr__;
}

// InitChangedTracker @ 1484dc7b0

void __thiscall FRepLayout::InitChangedTracker(FRepLayout *this,FRepChangedPropertyTracker *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName local_res8 [4];
  FString local_18;
  
  if ((param_1->ActiveState).CurrentState.NumBits != (this->Parents).ArrayNum) {
    if (this->Owner == (UStruct *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res8[0] = (FName)this->Owner->_padding_;
      ::FName::ToString(local_res8,&local_18);
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChangedTracker->GetParentCount() == Parents.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                       ,0x1c59,
                       L"InitChangedTracker: Mismatched replicated parent properties for: %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// InitFromClass @ 1484dc860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRepLayout::InitFromClass
          (FRepLayout *this,UClass *param_1,UNetConnection *param_2,ECreateRepLayoutFlags param_3)

{
  TArray<FRepParentCmd,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *pTVar2;
  ushort uVar3;
  void *pvVar4;
  UObject *pUVar5;
  FField *this_00;
  UStruct *this_01;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  UClass *pUVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  uint uVar12;
  FNameEntryId FVar13;
  int iVar14;
  TStatId TVar15;
  UClass *pUVar16;
  UScriptStruct *pUVar17;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  UFunction *pUVar18;
  FLifetimeCustomDeltaState *pFVar19;
  UStruct *this_02;
  FProperty *pFVar20;
  FName *pFVar21;
  FString *pFVar22;
  ulonglong uVar23;
  wchar_t *pwVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  ForAnyElementType FVar27;
  FScriptContainerElement *pFVar28;
  int *piVar29;
  wchar_t *pwVar30;
  FLifetimeCustomDeltaState *pFVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  FRepLayout *pFVar35;
  FRepLayout *this_03;
  uint uVar36;
  ulonglong uVar37;
  uint uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  int iVar41;
  undefined1 auStackY_448 [32];
  char local_3f8;
  <lambda_2> local_3f7 [3];
  uint local_3f4;
  UClass *local_3f0;
  undefined2 local_3e8;
  char local_3e6;
  int local_3e4;
  uint local_3e0;
  FRepLayout *local_3d8;
  TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> local_3d0;
  int local_3c0;
  ForAnyElementType local_3b8;
  uint local_3b0 [4];
  longlong local_3a0;
  FProperty *local_398;
  ushort local_390;
  undefined2 uStack_38e;
  uint uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  int local_380;
  int iStack_37c;
  ECreateRepLayoutFlags local_378;
  longlong local_370;
  longlong local_368;
  undefined2 local_360;
  undefined2 uStack_35e;
  uint uStack_35c;
  uint uStack_358;
  int iStack_354;
  int local_350;
  int iStack_34c;
  FName local_348;
  byte local_340;
  undefined8 local_338;
  uint local_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  uint local_320;
  undefined4 uStack_31c;
  UNetConnection *local_318;
  FString local_310;
  undefined1 local_300 [32];
  int iStack_2e0;
  int iStack_2dc;
  uint local_2d8;
  int iStack_2d4;
  FName FStack_2d0;
  bool local_2c8;
  undefined7 uStack_2c7;
  longlong *local_2b8;
  undefined1 auStack_2b0 [16];
  uint uStack_2a0;
  int iStack_29c;
  longlong local_298;
  TSet<TTuple<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_290;
  TSet<TTuple<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_288;
  undefined2 local_280;
  undefined1 local_278 [8];
  FScriptContainerElement *local_270;
  undefined4 local_268;
  FString local_260;
  FString local_250;
  undefined1 local_240 [16];
  UNetConnection *local_230;
  uint local_228;
  FScriptContainerElement *local_220;
  undefined2 local_218;
  TSet<TTuple<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_210;
  <lambda_1> local_208;
  FScriptContainerElement **local_1f8;
  longlong local_1f0;
  UClass **local_1e8;
  uint *local_1e0;
  FScriptContainerElement *local_1d8;
  FRepLayout *local_1d0;
  FString local_1c8;
  FName local_1b8;
  FName local_1b0 [2];
  FString local_1a0;
  source_location local_188;
  FString local_168;
  FString local_158;
  FString local_148;
  FInitFromPropertyStackParams local_138;
  undefined1 local_108 [32];
  longlong local_e8;
  TSet<TTuple<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TSet<TTuple<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_448;
  local_380 = 0x51aea8c0;
  iStack_37c = 1;
  uStack_388 = 0x51ae4c70;
  uStack_384 = 1;
  local_390 = 0x17c6;
  uStack_38e = 0;
  uStack_38c = 2;
  local_3f0 = param_1;
  local_3d8 = this;
  local_378 = param_3;
  local_318 = param_2;
  TVar15 = FThreadSafeStaticStatInner<FStat_STAT_RepLayout_InitFromObjectClass,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_RepLayout_InitFromObjectClass,1> *)
                      &StatPtr_STAT_RepLayout_InitFromObjectClass);
  local_188._Line._2_2_ = uStack_38e;
  local_188._Line._0_2_ = local_390;
  local_188._Column = uStack_38c;
  local_188._File = (char *)CONCAT44(uStack_384,uStack_388);
  local_188._Function = (char *)CONCAT44(iStack_37c,local_380);
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_348,*(TStatIdData **)&(TVar15.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_188);
  pUVar16 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar16 == (UClass *)0x0) {
    local_3f8 = '\0';
  }
  else {
    iVar14 = (int)pUVar16->_padding_;
    if (((int)local_3f0->_padding_ < iVar14) ||
       ((longlong *)*(undefined1 **)(local_3f0->_padding_ + (longlong)iVar14 * 8) !=
        &pUVar16->_padding_)) {
      local_3f8 = '\0';
    }
    else {
      local_3f8 = '\x01';
    }
    if (local_3f8 != '\0') {
      this->Flags = this->Flags | IsActor;
    }
  }
  uVar36 = 0;
  local_3c0 = -1;
  local_3e4 = 0;
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  local_3e0 = 0xffffffff;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  UClass::SetUpRuntimeReplicationData(local_3f0);
  pTVar1 = &this->Parents;
  uVar12 = (local_3f0->ClassReps).ArrayNum;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar29 = &(this->Parents).ArrayMax;
  (this->Parents).ArrayNum = 0;
  if (*piVar29 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar12,&pTVar1->AllocatorInstance,0,piVar29);
  }
  pFVar35 = this;
  if (0 < (local_3f0->ClassReps).ArrayNum) {
    local_370 = 0;
    do {
      lVar34 = local_370;
      pUVar16 = local_3f0;
      local_3e6 = local_3f8;
      uVar38 = ~uVar36 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar36 < (local_3f0->ClassReps).ArrayNum) {
        uVar12 = uVar38;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar9 = local_3f0;
      pFVar20 = *(FProperty **)((pUVar16->ClassReps).AllocatorInstance.Data + lVar34 * 0x10);
      uVar12 = 0;
      if ((int)uVar36 < (local_3f0->ClassReps).ArrayNum) {
        uVar12 = uVar38;
      }
      local_398 = pFVar20;
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar14 = *(int *)((pUVar9->ClassReps).AllocatorInstance.Data + lVar34 * 0x10 + 8);
      if (pFVar20 == (FProperty *)0x0) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_3f0,&local_1a0,(UObject *)0x0);
        ::FString::PrintfImpl(&local_310,L"Class: %s | Index: %d");
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        pUVar16 = local_3f0;
        if ((int)uVar36 < 1) {
          if ((int)uVar36 < (local_3f0->ClassReps).ArrayNum + -1) {
            uVar36 = uVar36 + 1;
            uVar12 = 0;
            if ((int)uVar36 < (local_3f0->ClassReps).ArrayNum) {
              uVar12 = ~uVar36 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            GetPathNameSafe(&local_158,
                            *(FField **)
                             ((pUVar16->ClassReps).AllocatorInstance.Data +
                             (longlong)(int)uVar36 * 0x10),(UObject *)0x0);
            ::FString::PrintfImpl(&local_250,L" | NextClassRepProperty: %s");
            if (local_250.Data.ArrayNum == 0) {
              local_250.Data.ArrayNum = 0;
            }
            else {
              local_250.Data.ArrayNum = local_250.Data.ArrayNum + -1;
            }
            ::FString::AppendChars
                      (&local_310,(wchar_t *)local_250.Data.AllocatorInstance.Data,
                       local_250.Data.ArrayNum);
            if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_250.Data.AllocatorInstance.Data);
            }
            goto LAB_1484dd60b;
          }
        }
        else {
          uVar36 = uVar36 - 1;
          uVar12 = 0;
          if ((int)uVar36 < (local_3f0->ClassReps).ArrayNum) {
            uVar12 = ~uVar36 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          GetPathNameSafe(&local_168,
                          *(FField **)
                           ((pUVar16->ClassReps).AllocatorInstance.Data +
                           (longlong)(int)uVar36 * 0x10),(UObject *)0x0);
          ::FString::PrintfImpl(&local_260,L" | PreviousClassRepProperty: %s");
          if (local_260.Data.ArrayNum == 0) {
            local_260.Data.ArrayNum = 0;
          }
          else {
            local_260.Data.ArrayNum = local_260.Data.ArrayNum + -1;
          }
          ::FString::AppendChars
                    (&local_310,(wchar_t *)local_260.Data.AllocatorInstance.Data,
                     local_260.Data.ArrayNum);
          local_158.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
          if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_260.Data.AllocatorInstance.Data);
            local_158.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
          }
LAB_1484dd60b:
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
        }
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                            ,0x17ea,
                            L"Encountered an invalid property while creating RepLayout. This should never happen! %s"
                           );
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        goto LAB_1484de532;
      }
      if (((pFVar20->PropertyFlags & CPF_Net) == CPF_None) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Property->PropertyFlags & CPF_Net",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                              ,0x17ef,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = (this->Parents).ArrayNum;
      if (uVar12 == (this->Parents).ArrayMax) {
        uVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&pTVar1->AllocatorInstance,&(this->Parents).ArrayMax);
      }
      (this->Parents).ArrayNum = uVar12 + 1;
      pFVar26 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x30;
      *(FProperty **)pFVar26 = pFVar20;
      bVar11 = IsThisNotNull(pFVar20,"FField::GetFName");
      if (bVar11) {
        local_368 = pFVar20->_padding_;
      }
      else {
        local_368 = 0;
      }
      uVar12 = uVar12 & 0xffff;
      *(longlong *)(pFVar26 + 8) = local_368;
      *(int *)(pFVar26 + 0x10) = iVar14;
      *(undefined4 *)(pFVar26 + 0x18) = 0;
      *(undefined8 *)(pFVar26 + 0x1c) = 0;
      *(undefined4 *)(pFVar26 + 0x24) = 0;
      *(undefined4 *)(pFVar26 + 0x28) = 0xffffffff;
      *(undefined4 *)(pFVar26 + 0x2c) = 0;
      if ((uVar12 != uVar36) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParentHandle == i",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                              ,0x17f3,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar32 = 0;
      if ((int)uVar36 < (this->Parents).ArrayNum) {
        uVar32 = uVar38;
      }
      if ((uVar32 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar26 = (pTVar1->AllocatorInstance).Data;
      lVar34 = local_370 * 0x30;
      uVar32 = 0;
      if ((int)uVar36 < (this->Parents).ArrayNum) {
        uVar32 = uVar38;
      }
      if ((uVar32 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((uint)*(ushort *)(*(longlong *)((pTVar1->AllocatorInstance).Data + lVar34) + 0x40) +
           *(int *)(pFVar26 + lVar34 + 0x10) != uVar36) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Parents[i].Property->RepIndex + Parents[i].ArrayIndex == i",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                              ,0x17f4,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar25 = iVar14 * local_398->ElementSize;
      local_240._8_8_ = &local_3d8->Cmds;
      local_230 = local_318;
      local_228 = uVar12;
      if (((this->Parents).ArrayNum <= (int)uVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_210 = &local_a8;
      local_218 = 0;
      local_3a0 = (longlong)(int)uVar12 * 0x30;
      local_220 = (pTVar1->AllocatorInstance).Data + local_3a0;
      if (GbTrackNetSerializeObjectReferences == false) {
        local_210 = (TSet<TTuple<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                     *)0x0;
      }
      local_2d8 = 0;
      local_300._24_8_ = local_398;
      iStack_2dc = local_3e4;
      FStack_2d0.ComparisonIndex.Value = 0;
      FStack_2d0.Number = 0;
      local_2c8 = false;
      iVar41 = (local_3d8->Cmds).ArrayNum;
      iStack_2e0 = iVar25;
      iStack_2d4 = iVar14;
      if (((this->Parents).ArrayNum <= (int)uVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_138.RelativeHandle = iStack_2dc;
      local_138.Offset = iStack_2e0;
      local_138.StaticArrayIndex = iStack_2d4;
      local_138.ParentChecksum = local_2d8;
      local_138.Property = (FProperty *)local_300._24_8_;
      local_138._33_7_ = uStack_2c7;
      local_138.bNetSerializeStructWithObjects = local_2c8;
      *(short *)((pTVar1->AllocatorInstance).Data + local_3a0 + 0x1c) = (short)iVar41;
      local_138.RecursingNetSerializeStruct = FStack_2d0;
      local_3e4 = InitFromProperty_r<0>((FInitFromPropertySharedParams *)(local_240 + 8),&local_138)
      ;
      iVar14 = (local_3d8->Cmds).ArrayNum;
      if (((this->Parents).ArrayNum <= (int)uVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(short *)((pTVar1->AllocatorInstance).Data + local_3a0 + 0x1e) = (short)iVar14;
      if (((this->Parents).ArrayNum <= (int)uVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar33 = local_3a0;
      pFVar26 = (pTVar1->AllocatorInstance).Data + local_3a0 + 0x2c;
      *(uint *)pFVar26 = *(uint *)pFVar26 | 2;
      iVar14 = local_398->Offset_Internal;
      if (((this->Parents).ArrayNum <= (int)uVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(int *)((pTVar1->AllocatorInstance).Data + lVar33 + 0x14) = iVar25 + iVar14;
      uVar32 = 0;
      if ((int)uVar36 < (this->Parents).ArrayNum) {
        uVar32 = uVar38;
      }
      if ((uVar32 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar26 = (pTVar1->AllocatorInstance).Data;
      uVar32 = 0;
      if ((int)uVar36 < (this->Parents).ArrayNum) {
        uVar32 = uVar38;
      }
      if ((uVar32 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(ushort *)((pTVar1->AllocatorInstance).Data + lVar34 + 0x1c) <
          *(ushort *)(pFVar26 + lVar34 + 0x1e)) {
        uVar32 = 0;
        if ((int)uVar36 < (this->Parents).ArrayNum) {
          uVar32 = uVar38;
        }
        if ((uVar32 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar35 = local_3d8;
        uVar3 = *(ushort *)((pTVar1->AllocatorInstance).Data + lVar34 + 0x1c);
        if (((local_3d8->Cmds).ArrayNum <= (int)(uint)uVar3) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((*(int *)((pFVar35->Cmds).AllocatorInstance.Data + (ulonglong)uVar3 * 0x20 + 0xc) <
             local_3c0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Cmds[Parents[i].CmdStart].Offset >= LastOffset",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                ,0x1814,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar32 = 0;
        if ((int)uVar36 < (this->Parents).ArrayNum) {
          uVar32 = uVar38;
        }
        if ((uVar32 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar3 = *(ushort *)((pTVar1->AllocatorInstance).Data + lVar34 + 0x1c);
        if (((pFVar35->Cmds).ArrayNum <= (int)(uint)uVar3) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_3c0 = *(int *)((pFVar35->Cmds).AllocatorInstance.Data + (ulonglong)uVar3 * 0x20 + 0xc)
        ;
        lVar33 = local_3a0;
      }
      if (((this->Parents).ArrayNum <= (int)uVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar26 = (pTVar1->AllocatorInstance).Data + lVar33;
      lVar34 = *(longlong *)pFVar26;
      if ((lVar34 != 0) && ((*(uint *)(*(longlong *)(lVar34 + 8) + 0x18) >> 0x14 & 1) != 0)) {
        lVar34 = *(longlong *)(lVar34 + 0x70);
        uVar38 = *(uint *)(pFVar26 + 0x2c);
        *(uint *)(pFVar26 + 0x2c) = uVar38 | 0x20;
        if ((*(uint *)(lVar34 + 0xb0) >> 0x14 & 1) != 0) {
          *(uint *)(pFVar26 + 0x2c) = uVar38 | 0x28;
          pUVar17 = FFastArraySerializer::StaticStruct();
          if (pUVar17 != (UScriptStruct *)0x0) {
            iVar14 = (int)pUVar17->_padding_;
            if ((*(int *)(lVar34 + 0x38) < iVar14) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar34 + 0x30) + (longlong)iVar14 * 8) !=
                &pUVar17->_padding_)) {
              bVar11 = false;
            }
            else {
              bVar11 = true;
            }
            if (bVar11) {
              *(uint *)(pFVar26 + 0x2c) = *(uint *)(pFVar26 + 0x2c) | 0x80;
            }
          }
        }
        local_3f8 = local_3e6;
        if ((*(uint *)(lVar34 + 0xb0) >> 10 & 1) != 0) {
          *(uint *)(pFVar26 + 0x2c) = *(uint *)(pFVar26 + 0x2c) | 0x10;
        }
      }
      if ((*(uint *)(*(longlong *)pFVar26 + 0x38) >> 9 & 1) != 0) {
        *(uint *)(pFVar26 + 0x2c) = *(uint *)(pFVar26 + 0x2c) | 0x40;
      }
      if (((uint)(int)local_398->PropertyFlags >> 0xe & 1) != 0) {
        if (((this->Parents).ArrayNum <= (int)uVar12) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar26 = (pTVar1->AllocatorInstance).Data + lVar33 + 0x2c;
        *(uint *)pFVar26 = *(uint *)pFVar26 | 4;
      }
      if (((this->Parents).ArrayNum <= (int)uVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((*(uint *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x30 + 0x2c) >> 3 &
          1) != 0) {
        local_3e0 = uVar12;
      }
      if (local_218._1_1_ != '\0') {
        if (((this->Parents).ArrayNum <= (int)uVar12) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar26 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x30 + 0x2c;
        *(uint *)pFVar26 = *(uint *)pFVar26 | 0x200;
      }
      if ((char)local_218 != '\0') {
        if (((this->Parents).ArrayNum <= (int)uVar12) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar26 = (pTVar1->AllocatorInstance).Data + (ulonglong)uVar12 * 0x30 + 0x2c;
        *(uint *)pFVar26 = *(uint *)pFVar26 | 0x100;
      }
      uVar36 = uVar36 + 1;
      local_370 = local_370 + 1;
      pFVar35 = local_3d8;
    } while ((int)uVar36 < (local_3f0->ClassReps).ArrayNum);
  }
  if (local_3f8 != '\0') {
    if (((pFVar35->Parents).ArrayNum < 5) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pvVar4 = *(void **)((pFVar35->Parents).AllocatorInstance.Data + 0xc0);
    bVar11 = IsThisNotNull(pvVar4,"FField::GetFName");
    if (bVar11) {
      uVar23 = *(ulonglong *)((longlong)pvVar4 + 0x20);
    }
    else {
      local_338 = 0;
      uVar23 = 0;
    }
    FVar13 = FNameEntryId::FromValidEName((EName)local_278);
    uStack_32c = 0;
    local_330 = *(uint *)CONCAT44(extraout_var,FVar13.Value);
    if ((uVar23 != local_330) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bIsObjectActor || Parents[(int32)AActor::ENetFields_Private::RemoteRole].Property->GetFName() == NAME_RemoteRole"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                            ,0x1833,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((pFVar35->Parents).ArrayNum < 9) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pvVar4 = *(void **)((pFVar35->Parents).AllocatorInstance.Data + 0x180);
    bVar11 = IsThisNotNull(pvVar4,"FField::GetFName");
    if (bVar11) {
      uVar23 = *(ulonglong *)((longlong)pvVar4 + 0x20);
    }
    else {
      local_328 = 0;
      uVar23 = 0;
    }
    FVar13 = FNameEntryId::FromValidEName((int)local_240 + FloatProperty);
    uStack_31c = 0;
    local_320 = *(uint *)CONCAT44(extraout_var_00,FVar13.Value);
    if ((uVar23 != local_320) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bIsObjectActor || Parents[(int32)AActor::ENetFields_Private::Role].Property->GetFName() == NAME_Role"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                            ,0x1836,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar14 = (pFVar35->Cmds).ArrayNum;
  pTVar2 = &pFVar35->Cmds;
  if (iVar14 == (pFVar35->Cmds).ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar2->AllocatorInstance,&(pFVar35->Cmds).ArrayMax);
  }
  (pFVar35->Cmds).ArrayNum = iVar14 + 1;
  pFVar26 = (pTVar2->AllocatorInstance).Data;
  lVar34 = (longlong)iVar14 * 0x20;
  *(undefined8 *)(pFVar26 + lVar34) = 0;
  *(undefined8 *)(pFVar26 + lVar34 + 8) = 0;
  *(undefined8 *)(pFVar26 + lVar34 + 0x10) = 0;
  *(undefined8 *)(pFVar26 + lVar34 + 0x10 + 8) = 0;
  pFVar26[lVar34 + 0x1c] = (FScriptContainerElement)0x1;
  this_03 = pFVar35;
  if (0 < (int)(local_a8.Elements._8_4_ - local_a8.Elements._52_4_)) {
    TSet<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Empty((TSet<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&pFVar35->NetSerializeLayouts,local_a8.Elements._8_4_ - local_a8.Elements._52_4_);
    TSet<TTuple<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_108,&local_a8);
    local_288 = &local_a8;
    local_280 = 0;
    stack0xfffffffffffffd58 = local_108._16_16_;
    local_2b8 = (longlong *)local_108._0_8_;
    auStack_2b0._0_8_ = local_108._8_8_;
    local_298 = local_e8;
    pTStack_290 = pTStack_e0;
    iVar14 = local_108._28_4_;
    if (iVar14 < *(int *)(local_108._16_8_ + 0x18)) {
      do {
        lVar34 = *local_2b8;
        uVar12 = *(uint *)((longlong)iVar14 * 0x20 + lVar34);
        uVar36 = 0;
        if ((int)uVar12 < (pFVar35->Cmds).ArrayNum) {
          uVar36 = ~uVar12 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_270 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x20;
        local_1f8 = &local_270;
        local_1f0 = lVar34 + 8 + (longlong)iVar14 * 0x20;
        TSet<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FRepLayoutCmd_*_&&,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_&&>_>
                  ((TSet<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)&pFVar35->NetSerializeLayouts,
                   (TPairInitializer<FRepLayoutCmd_*_&&,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_&&>
                    *)local_240,(bool *)&local_1f8);
        uStack_2a0 = uStack_2a0 & ~auStack_2b0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2b0);
        this_03 = local_3d8;
        iVar14 = iStack_29c;
      } while (iStack_29c < *(int *)(auStack_2b0._8_8_ + 0x18));
      if (((char)local_280 != '\0') && (local_280._1_1_ != '\0')) {
        uVar12 = *(int *)&(local_288->Elements).field_0x8 -
                 *(int *)&(local_288->Elements).field_0x34;
        if (uVar12 < 4) {
          iVar14 = 1;
        }
        else {
          uVar23 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
          lVar34 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          local_268 = (undefined4)lVar34;
          iVar14 = 1 << ((byte)lVar34 & 0x1f);
        }
        if (((0 < (int)uVar12) && (local_288->HashSize < iVar14)) || (iVar14 < local_288->HashSize))
        {
          local_288->HashSize = iVar14;
          TSet<TTuple<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::Rehash(local_288);
        }
      }
    }
    TSet<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Shrink((TSet<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this_03->NetSerializeLayouts);
  }
  uVar12 = (this_03->Parents).ArrayNum;
  local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3d0.ArrayNum = 0;
  local_3d0.ArrayMax = 0;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (0 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar12,&local_3d0.AllocatorInstance,0,&local_3d0.ArrayMax);
  }
  pUVar16 = local_3f0;
  if ((local_3f0->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(local_3f0);
  }
  pUVar5 = (pUVar16->ClassDefaultObject).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar5 + 0x1e8))(pUVar5,&local_3d0);
  local_3b0[2] = (local_3f0->ClassReps).ArrayNum;
  local_3b8.Data = (FScriptContainerElement *)0x0;
  local_3b0[1] = 0;
  local_3b0[0] = 0;
  uVar12 = local_3b0[2] + 0x1f >> 5;
  if (local_3b0[2] + 0x1f >> 5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar12,&local_3b8,0,(int *)(local_3b0 + 1));
  }
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,uVar12,&local_3b8,(int *)local_3b0,(int *)(local_3b0 + 1));
  memset(local_3b8.Data + (longlong)iVar14 * 4,0,(ulonglong)uVar12 << 2);
  iVar14 = local_3d0.ArrayNum;
  uVar23 = (ulonglong)local_3d0.ArrayNum;
  pFVar31 = (FLifetimeCustomDeltaState *)(local_3d0.AllocatorInstance.Data + uVar23 * 0x18);
  FVar27.Data = local_3d0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar23 != iVar14) {
      local_3f7[0] = (<lambda_2>)0x0;
      `TCheckedPointerIterator<FLifetimeProperty,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_3f7);
    }
    FVar10.Data = local_3b8.Data;
    if ((FLifetimeCustomDeltaState *)FVar27.Data == pFVar31) break;
    uVar3 = *(ushort *)
             &(((FLifetimeCustomDeltaState *)FVar27.Data)->LifetimeCustomDeltaProperties).
              AllocatorInstance.Data;
    if ((local_3b0[2] <= uVar3) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < BitCount",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                            ,0x2a2,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(uint *)(FVar10.Data + (ulonglong)(uVar3 >> 5) * 4) =
         *(uint *)(FVar10.Data + (ulonglong)(uVar3 >> 5) * 4) | 1 << (uVar3 & 0x1f);
    FVar27.Data = (FScriptContainerElement *)
                  &(((FLifetimeCustomDeltaState *)FVar27.Data)->LifetimeCustomDeltaIndexLookup).
                   ArrayNum;
    uVar23 = local_3d0._8_8_ & 0xffffffff;
  }
  local_208.LifetimeProps = &local_3d0;
  local_208.InObjectClass = local_3f0;
  UE::Net::FNetBitArrayHelper::ForAllUnsetBits<_FRepLayout::InitFromClass_::__l89::<lambda_1>_&>
            ((uint *)local_3b8.Data,local_3b0[0],local_3b0[2],&local_208);
  if (local_3b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data);
  }
  uVar12 = local_3e0;
  if ((UE::Net::bReplicateCustomDeltaPropertiesInRepIndexOrder != false) &&
     (local_3e0 != 0xffffffff)) {
    AlgoImpl::
    IntroSortInternal<FLifetimeProperty,int,_FRepLayout::InitFromClass_::__l96::<lambda_2>,TLess<unsigned_short>_>
              ((FLifetimeProperty *)local_3d0.AllocatorInstance.Data,local_3d0.ArrayNum,local_3f7[0]
               ,(TLess<unsigned_short>)local_3f7[0]);
  }
  uVar8 = _UNK_15060db28;
  uVar7 = ___xmm_ffffffffffffffffffffffffffffffff;
  iVar25 = 0;
  local_3e4 = 0;
  local_3f4 = 0;
  local_300._0_2_ = 0;
  local_300._4_8_ = 0;
  local_300[0xc] = 0;
  local_300._16_8_ = (FScriptContainerElement *)0x0;
  iVar14 = 0;
  if (0 < (local_3f0->ClassReps).ArrayNum) {
    do {
      pUVar16 = local_3f0;
      lVar34 = (longlong)(int)local_3f4;
      uVar36 = 0;
      if ((int)local_3f4 < (local_3f0->ClassReps).ArrayNum) {
        uVar36 = ~local_3f4 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar25 = iVar14;
      if (((int)local_3f4 < 0) || ((this_03->Parents).ArrayNum <= (int)local_3f4)) {
        local_1e8 = &local_3f0;
        local_1e0 = &local_3f4;
        local_1d8 = (pUVar16->ClassReps).AllocatorInstance.Data + lVar34 * 0x10;
        local_1d0 = this_03;
        bVar11 = `FRepLayout::InitFromClass'::__l98::<lambda_3>::operator()(&local_1e8);
        if (bVar11) goto LAB_1484ddc2c;
      }
      else {
LAB_1484ddc2c:
        lVar34 = (longlong)(int)local_3f4;
        uVar36 = 0;
        if ((int)local_3f4 < (this_03->Parents).ArrayNum) {
          uVar36 = ~local_3f4 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar26 = (this_03->Parents).AllocatorInstance.Data + lVar34 * 0x30;
        FVar27.Data = local_3d0.AllocatorInstance.Data;
        while ((pFVar31 = (FLifetimeCustomDeltaState *)0x0,
               (FLifetimeCustomDeltaState *)FVar27.Data !=
               (FLifetimeCustomDeltaState *)
               (local_3d0.AllocatorInstance.Data + (longlong)local_3d0.ArrayNum * 0x18) &&
               (pFVar31 = (FLifetimeCustomDeltaState *)FVar27.Data,
               *(ushort *)
                &(((FLifetimeCustomDeltaState *)FVar27.Data)->LifetimeCustomDeltaProperties).
                 AllocatorInstance.Data != local_3f4))) {
          FVar27.Data = (FScriptContainerElement *)
                        &(((FLifetimeCustomDeltaState *)FVar27.Data)->LifetimeCustomDeltaIndexLookup
                         ).ArrayNum;
        }
        local_300._0_2_ = (undefined2)local_3f4;
        pFVar19 = (FLifetimeCustomDeltaState *)local_300;
        if (pFVar31 != (FLifetimeCustomDeltaState *)0x0) {
          pFVar19 = pFVar31;
        }
        iVar41 = *(int *)((longlong)&(pFVar19->LifetimeCustomDeltaProperties).AllocatorInstance.Data
                         + 4);
        if (iVar41 != 0xf) {
          *(int *)(pFVar26 + 0x20) = iVar41;
          *(int *)(pFVar26 + 0x24) = (pFVar19->LifetimeCustomDeltaProperties).ArrayNum;
          pUVar18 = UClass::FindFunctionByName
                              (local_3f0,*(FName *)(*(longlong *)pFVar26 + 0x68),IncludeSuper);
          if (pUVar18 != (UFunction *)0x0) {
            *(uint *)(pFVar26 + 0x28) = (uint)pUVar18->NumParms;
          }
          uVar36 = *(uint *)(pFVar26 + 0x2c);
          if ((uVar36 >> 3 & 1) == 0) {
            *(uint *)(pFVar26 + 0x2c) = uVar36 | 1;
            iVar25 = *(int *)(pFVar26 + 0x20);
            if (iVar25 == 0) {
              *(uint *)(pFVar26 + 0x2c) = uVar36 & 0xfffffffd | 1;
            }
            else if (iVar25 == 1) {
              this_03->Flags = this_03->Flags | HasInitialOnlyProperties;
            }
            else if (iVar25 == 0xe) {
              this_03->Flags = this_03->Flags | HasDynamicConditionProperties;
            }
            if ((*(uint *)(pFVar26 + 0x2c) & 0x300) != 0) {
              this_03->Flags = this_03->Flags | HasObjectOrNetSerializeProperties;
            }
            local_3e4 = iVar14 + 1;
            iVar25 = local_3e4;
          }
          else {
            if ((this_03->LifetimeCustomPropertyState).Ptr == (FLifetimeCustomDeltaState *)0x0) {
              pFVar19 = ::operator_new(0x28);
              pFVar31 = (FLifetimeCustomDeltaState *)0x0;
              if (pFVar19 != (FLifetimeCustomDeltaState *)0x0) {
                (pFVar19->LifetimeCustomDeltaProperties).AllocatorInstance.Data =
                     (FScriptContainerElement *)0x0;
                (pFVar19->LifetimeCustomDeltaProperties).ArrayNum = 0;
                (pFVar19->LifetimeCustomDeltaProperties).ArrayMax = 0;
                (pFVar19->LifetimeCustomDeltaIndexLookup).AllocatorInstance.Data =
                     (FScriptContainerElement *)0x0;
                (pFVar19->LifetimeCustomDeltaIndexLookup).ArrayNum = 0;
                piVar29 = &(pFVar19->LifetimeCustomDeltaIndexLookup).ArrayMax;
                *piVar29 = 0;
                pFVar19->NumFastArrayProperties = 0;
                if (((int)uVar12 < 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("HighestCustomDeltaRepIndex >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                        ,400,L""), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar12 = uVar12 + 1;
                uVar23 = (ulonglong)uVar12;
                local_3e8 = 0xffff;
                if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
                }
                (pFVar19->LifetimeCustomDeltaIndexLookup).ArrayNum = 0;
                if (*piVar29 != uVar12) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,uVar12,&(pFVar19->LifetimeCustomDeltaIndexLookup).AllocatorInstance
                             ,0,piVar29);
                }
                pFVar31 = pFVar19;
                if (0 < (int)uVar12) {
                  do {
                    pFVar28 = (pFVar19->LifetimeCustomDeltaIndexLookup).AllocatorInstance.Data;
                    if (((pFVar28 <= (FScriptContainerElement *)&local_3e8) &&
                        ((FScriptContainerElement *)&local_3e8 <
                         pFVar28 + (longlong)(pFVar19->LifetimeCustomDeltaIndexLookup).ArrayMax * 2)
                        ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar11)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar14 = (pFVar19->LifetimeCustomDeltaIndexLookup).ArrayNum;
                    if (iVar14 == (pFVar19->LifetimeCustomDeltaIndexLookup).ArrayMax) {
                      iVar14 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x202,&(pFVar19->LifetimeCustomDeltaIndexLookup).
                                                 AllocatorInstance,
                                          &(pFVar19->LifetimeCustomDeltaIndexLookup).ArrayMax);
                    }
                    (pFVar19->LifetimeCustomDeltaIndexLookup).ArrayNum = iVar14 + 1;
                    *(undefined2 *)
                     ((pFVar19->LifetimeCustomDeltaIndexLookup).AllocatorInstance.Data +
                     (longlong)iVar14 * 2) = local_3e8;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
              }
              pFVar19 = (this_03->LifetimeCustomPropertyState).Ptr;
              if ((pFVar19 != pFVar31) &&
                 ((this_03->LifetimeCustomPropertyState).Ptr = pFVar31,
                 pFVar19 != (FLifetimeCustomDeltaState *)0x0)) {
                pFVar28 = (pFVar19->LifetimeCustomDeltaIndexLookup).AllocatorInstance.Data;
                if (pFVar28 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar28);
                }
                pFVar28 = (pFVar19->LifetimeCustomDeltaProperties).AllocatorInstance.Data;
                if (pFVar28 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar28);
                }
                ::operator_delete(pFVar19,0x28);
              }
            }
            if ((*(uint *)(pFVar26 + 0x2c) >> 7 & 1) != 0) {
              uVar12 = (uint)*(ushort *)(pFVar26 + 0x1c);
              if (*(ushort *)(pFVar26 + 0x1c) < *(ushort *)(pFVar26 + 0x1e)) {
                do {
                  uVar36 = 0;
                  if ((int)uVar12 < (this_03->Cmds).ArrayNum) {
                    uVar36 = ~uVar12 >> 0x1f;
                  }
                  if ((uVar36 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pFVar28 = (this_03->Cmds).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
                  if (pFVar28[0x1c] == (FScriptContainerElement)0x0) {
                    this_00 = *(FField **)(*(longlong *)pFVar28 + 0x78);
                    if ((this_00 != (FField *)0x0) &&
                       (((uint)(int)this_00->ClassPrivate->CastFlags >> 0x14 & 1) != 0)) {
                      this_01 = (UStruct *)this_00[2].Owner.Container.Field;
                      pUVar17 = FFastArraySerializerItem::StaticStruct();
                      if (pUVar17 != (UScriptStruct *)0x0) {
                        iVar14 = (int)pUVar17->_padding_;
                        if (((int)this_01->_padding_ < iVar14) ||
                           ((longlong *)*(undefined1 **)(this_01->_padding_ + (longlong)iVar14 * 8)
                            != &pUVar17->_padding_)) {
                          bVar11 = false;
                        }
                        else {
                          bVar11 = true;
                        }
                        if (bVar11) {
                          piVar29 = (int *)(*(longlong *)
                                             ((longlong)ThreadLocalStoragePointer +
                                             (ulonglong)_tls_index * 8) + 0x9d4c);
                          if ((*piVar29 < DAT_15523e568) &&
                             (_Init_thread_header(&DAT_15523e568), DAT_15523e568 == -1)) {
                            ::FName::FName(&DAT_15523e560,L"DeltaFlags");
                            _Init_thread_footer(&DAT_15523e568);
                          }
                          if ((*piVar29 < DAT_15523e578) &&
                             (_Init_thread_header(&DAT_15523e578), DAT_15523e578 == -1)) {
                            pFVar21 = ::FName::FName(&local_1b8,0x13,L"ArrayReplicationKey",
                                                     FNAME_Add);
                            DAT_15523e570 = *pFVar21;
                            _Init_thread_footer(&DAT_15523e578);
                          }
                          if ((*piVar29 < DAT_15523e588) &&
                             (_Init_thread_header(&DAT_15523e588), DAT_15523e588 == -1)) {
                            pFVar21 = ::FName::FName(local_1b0,0xd,L"ReplicationID",FNAME_Add);
                            DAT_15523e580 = *pFVar21;
                            _Init_thread_footer(&DAT_15523e588);
                          }
                          this_02 = FField::GetOwnerStruct(this_00);
                          if (this_02 == (UStruct *)0x0) {
                            pFVar22 = GetTypeName<UScriptStruct>(&local_b8);
                            if ((pFVar22->Data).ArrayNum == 0) {
                              pwVar30 = L"";
                            }
                            else {
                              pwVar30 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
                            }
                    /* WARNING: Subroutine does not return */
                            CastLogError(L"nullptr",pwVar30);
                          }
                          pUVar16 = Z_Construct_UClass_UScriptStruct_NoRegister();
                          iVar14 = (int)pUVar16->_padding_;
                          if ((*(int *)(this_02->_padding_ + 0x38) < iVar14) ||
                             ((longlong *)
                              *(undefined1 **)
                               (*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
                              &pUVar16->_padding_)) {
                            pFVar22 = GetTypeName<UScriptStruct>(&local_d8);
                            pwVar30 = L"";
                            if ((pFVar22->Data).ArrayNum == 0) {
                              pwVar24 = L"";
                            }
                            else {
                              pwVar24 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
                            }
                            pFVar22 = GetFullNameForCastLogError<UStruct>(&local_c8,this_02);
                            if ((pFVar22->Data).ArrayNum != 0) {
                              pwVar30 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
                            }
                    /* WARNING: Subroutine does not return */
                            CastLogError(pwVar30,pwVar24);
                          }
                          pFVar31 = (local_3d8->LifetimeCustomPropertyState).Ptr;
                          pFVar20 = UStruct::FindPropertyByName(this_01,DAT_15523e580);
                          iVar14 = pFVar20->Offset_Internal;
                          pFVar20 = UStruct::FindPropertyByName(this_02,DAT_15523e570);
                          iVar25 = pFVar20->Offset_Internal;
                          pFVar20 = UStruct::FindPropertyByName(this_02,DAT_15523e560);
                          this_03 = local_3d8;
                          uVar36 = local_3f4;
                          iStack_354 = pFVar20->Offset_Internal;
                          uVar38 = local_3f4 & 0xffff;
                          local_360 = (undefined2)local_3f4;
                          uStack_358 = (uint)((local_3d8->LifetimeCustomPropertyState).Ptr)->
                                             NumFastArrayProperties;
                          uVar32 = local_3f4 & 0xffff;
                          uStack_35c = uVar12;
                          local_350 = iVar25;
                          iStack_34c = iVar14;
                          if (((pFVar31->LifetimeCustomDeltaIndexLookup).ArrayNum <= (int)uVar38) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar11)) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          if ((*(short *)((pFVar31->LifetimeCustomDeltaIndexLookup).
                                          AllocatorInstance.Data + (ulonglong)uVar38 * 2) != -1) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("static_cast<uint16>(INDEX_NONE) == LifetimeCustomDeltaIndexLookup[ToAdd.PropertyRepIndex]"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                                  ,0x1b4,L""), bVar11)) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          if (uStack_358 != 0xffffffff) {
                            pFVar31->NumFastArrayProperties = pFVar31->NumFastArrayProperties + 1;
                          }
                          iVar14 = (pFVar31->LifetimeCustomDeltaProperties).ArrayNum;
                          if (((pFVar31->LifetimeCustomDeltaIndexLookup).ArrayNum <=
                               (int)(uVar36 & 0xffff)) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar11)) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          piVar29 = &(pFVar31->LifetimeCustomDeltaProperties).ArrayMax;
                          *(short *)((pFVar31->LifetimeCustomDeltaIndexLookup).AllocatorInstance.
                                     Data + (ulonglong)uVar32 * 2) = (short)iVar14;
                          iVar14 = (pFVar31->LifetimeCustomDeltaProperties).ArrayNum;
                          if (iVar14 == *piVar29) {
                            iVar14 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x418,(ForAnyElementType *)pFVar31,piVar29);
                          }
                          uVar39 = CONCAT44(uStack_35c,CONCAT22(uStack_35e,local_360));
                          uVar40 = CONCAT44(iStack_354,uStack_358);
                          (pFVar31->LifetimeCustomDeltaProperties).ArrayNum = iVar14 + 1;
                          pFVar26 = (pFVar31->LifetimeCustomDeltaProperties).AllocatorInstance.Data;
                          iVar25 = local_350;
                          iVar41 = iStack_34c;
                          goto LAB_1484de367;
                        }
                      }
                    }
                    uVar12 = *(ushort *)(pFVar28 + 8) - 1;
                  }
                  uVar12 = uVar12 + 1;
                } while ((int)uVar12 < (int)(uint)*(ushort *)(pFVar26 + 0x1e));
              }
              if (2 < (byte)LogRep._0_1_) {
                ::FName::ToString((FName *)(pFVar26 + 8),&local_148);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
                if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_148.Data.AllocatorInstance.Data);
                }
              }
            }
            uVar12 = local_3f4;
            uVar23 = (ulonglong)local_3f4;
            pFVar31 = (this_03->LifetimeCustomPropertyState).Ptr;
            local_390 = (ushort)local_3f4;
            uVar37 = (ulonglong)local_390;
            iStack_37c = -1;
            uStack_38c = (uint)uVar7;
            uStack_388 = (undefined4)((ulonglong)uVar7 >> 0x20);
            uStack_384 = (undefined4)uVar8;
            local_380 = (int)((ulonglong)uVar8 >> 0x20);
            if (((pFVar31->LifetimeCustomDeltaIndexLookup).ArrayNum <= (int)(uVar23 & 0xffff)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((*(short *)((pFVar31->LifetimeCustomDeltaIndexLookup).AllocatorInstance.Data +
                           (uVar23 & 0xffff) * 2) != -1) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("static_cast<uint16>(INDEX_NONE) == LifetimeCustomDeltaIndexLookup[ToAdd.PropertyRepIndex]"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                    ,0x1b4,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar14 = (pFVar31->LifetimeCustomDeltaProperties).ArrayNum;
            if (((pFVar31->LifetimeCustomDeltaIndexLookup).ArrayNum <= (int)(uVar12 & 0xffff)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            piVar29 = &(pFVar31->LifetimeCustomDeltaProperties).ArrayMax;
            *(short *)((pFVar31->LifetimeCustomDeltaIndexLookup).AllocatorInstance.Data + uVar37 * 2
                      ) = (short)iVar14;
            iVar14 = (pFVar31->LifetimeCustomDeltaProperties).ArrayNum;
            if (iVar14 == *piVar29) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x418,(ForAnyElementType *)pFVar31,piVar29);
            }
            uVar39 = CONCAT44(uStack_38c,CONCAT22(uStack_38e,local_390));
            uVar40 = CONCAT44(uStack_384,uStack_388);
            (pFVar31->LifetimeCustomDeltaProperties).ArrayNum = iVar14 + 1;
            pFVar26 = (pFVar31->LifetimeCustomDeltaProperties).AllocatorInstance.Data;
            iVar25 = local_380;
            iVar41 = iStack_37c;
LAB_1484de367:
            *(undefined8 *)(pFVar26 + (longlong)iVar14 * 0x18) = uVar39;
            *(undefined8 *)(pFVar26 + (longlong)iVar14 * 0x18 + 8) = uVar40;
            *(ulonglong *)(pFVar26 + (longlong)iVar14 * 0x18 + 0x10) = CONCAT44(iVar41,iVar25);
            iVar25 = local_3e4;
          }
        }
      }
      local_3f4 = local_3f4 + 1;
      uVar12 = local_3e0;
      iVar14 = iVar25;
    } while ((int)local_3f4 < (local_3f0->ClassReps).ArrayNum);
  }
  if (local_3f8 != '\0') {
    if (((this_03->Parents).ArrayNum < 5) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar14 = *(int *)((this_03->Parents).AllocatorInstance.Data + 0xe0);
    if (iVar14 != 0xf) {
      if ((iVar14 != 0) && (2 < (byte)LogRep._0_1_)) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_3f0,&local_1c8,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
      }
      if (((this_03->Parents).ArrayNum < 5) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar26 = (this_03->Parents).AllocatorInstance.Data + 0xec;
      *(uint *)pFVar26 = *(uint *)pFVar26 | 2;
      if (((this_03->Parents).ArrayNum < 5) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)((this_03->Parents).AllocatorInstance.Data + 0xe0) = 0;
    }
  }
  if ((iVar25 == 0) &&
     ((this_03->LifetimeCustomPropertyState).Ptr == (FLifetimeCustomDeltaState *)0x0)) {
    this_03->Flags = this_03->Flags | NoReplicatedProperties;
  }
  if ((local_318 == (UNetConnection *)0x0) || ((local_378 & MaySendProperties) != None)) {
    BuildHandleToCmdIndexTable_r
              (this_03,0,(this_03->Cmds).ArrayNum + -1,&this_03->BaseHandleToCmdIndex);
  }
  BuildShadowOffsets<0>
            ((UStruct *)local_3f0,&this_03->Parents,&this_03->Cmds,&this_03->ShadowDataBufferSize);
  this_03->Owner = (UStruct *)local_3f0;
  local_310.Data.AllocatorInstance.Data = local_3d0.AllocatorInstance.Data;
LAB_1484de532:
  if ((FLifetimeCustomDeltaState *)local_310.Data.AllocatorInstance.Data !=
      (FLifetimeCustomDeltaState *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  local_a8.HashSize = 0;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
  if ((local_340 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_340 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_340 & 4) != 0) {
    FThreadStats::AddMessage(local_348,CycleScopeEnd);
  }
  return;
}

// InitFromFunction @ 1484de740

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRepLayout::InitFromFunction
          (FRepLayout *this,UFunction *param_1,UNetConnection *param_2,ECreateRepLayoutFlags param_3
          )

{
  TArray<FRepParentCmd,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  FProperty *pFVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  int local_f8;
  TFieldIterator<FProperty> local_f0;
  FName local_d8;
  FProperty *local_d0;
  int iStack_c8;
  int iStack_c4;
  uint local_c0;
  int iStack_bc;
  FName FStack_b8;
  bool local_b0;
  undefined7 uStack_af;
  FInitFromPropertySharedParams local_a8;
  FInitFromPropertyStackParams local_78;
  
  local_f8 = 0;
  if (param_1 == (UFunction *)0x0) {
    local_f0.Field = (FField *)0x0;
  }
  else {
    local_f0.Field = (FField *)param_1->_padding_;
  }
  local_f0.InterfaceIndex = -1;
  local_f0.bIncludeSuper = true;
  local_f0.bIncludeDeprecated = true;
  local_f0.bIncludeInterface = false;
  local_f0.Struct = (UStruct *)param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_f0);
  pFVar4 = (FProperty *)local_f0.Field;
  do {
    local_f0.Field = (FField *)pFVar4;
    if ((pFVar4 == (FProperty *)0x0) ||
       (iVar11 = 0, (pFVar4->PropertyFlags & (CPF_ReturnParm|CPF_Parm)) != CPF_Parm)) {
      iVar11 = (this->Cmds).ArrayNum;
      piVar8 = &(this->Cmds).ArrayMax;
      if (iVar11 == *piVar8) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&(this->Cmds).AllocatorInstance,piVar8);
      }
      (this->Cmds).ArrayNum = iVar11 + 1;
      pFVar10 = (this->Cmds).AllocatorInstance.Data;
      lVar9 = (longlong)iVar11 * 0x20;
      *(undefined8 *)(pFVar10 + lVar9) = 0;
      *(undefined8 *)(pFVar10 + lVar9 + 8) = 0;
      *(undefined8 *)(pFVar10 + lVar9 + 0x10) = 0;
      *(undefined8 *)(pFVar10 + lVar9 + 0x10 + 8) = 0;
      pFVar10[lVar9 + 0x1c] = (FScriptContainerElement)0x1;
      if ((param_2 == (UNetConnection *)0x0) || ((param_3 & MaySendProperties) != None)) {
        BuildHandleToCmdIndexTable_r(this,0,(this->Cmds).ArrayNum + -1,&this->BaseHandleToCmdIndex);
      }
      BuildShadowOffsets<1>
                ((UStruct *)param_1,&this->Parents,&this->Cmds,&this->ShadowDataBufferSize);
      this->Owner = (UStruct *)param_1;
      return;
    }
    if (0 < pFVar4->ArrayDim) {
      pTVar1 = &this->Parents;
      do {
        piVar8 = &(this->Parents).ArrayMax;
        uVar7 = (this->Parents).ArrayNum;
        if (uVar7 == *piVar8) {
          uVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&pTVar1->AllocatorInstance,piVar8);
        }
        pFVar10 = (pTVar1->AllocatorInstance).Data;
        (this->Parents).ArrayNum = uVar7 + 1;
        lVar9 = (longlong)(int)uVar7;
        *(FProperty **)(pFVar10 + lVar9 * 0x30) = pFVar4;
        bVar6 = IsThisNotNull(pFVar4,"FField::GetFName");
        if (bVar6) {
          local_d8 = *(FName *)&pFVar4->_padding_;
        }
        else {
          local_d8.ComparisonIndex.Value = 0;
          local_d8.Number = 0;
        }
        *(FName *)(pFVar10 + lVar9 * 0x30 + 8) = local_d8;
        local_a8.Cmds = &this->Cmds;
        *(int *)(pFVar10 + lVar9 * 0x30 + 0x10) = iVar11;
        *(undefined4 *)(pFVar10 + lVar9 * 0x30 + 0x18) = 0;
        *(undefined8 *)(pFVar10 + lVar9 * 0x30 + 0x1c) = 0;
        *(undefined4 *)(pFVar10 + lVar9 * 0x30 + 0x24) = 0;
        *(undefined4 *)(pFVar10 + lVar9 * 0x30 + 0x28) = 0xffffffff;
        *(undefined4 *)(pFVar10 + lVar9 * 0x30 + 0x2c) = 0;
        uVar7 = uVar7 & 0xffff;
        local_a8.ServerConnection = param_2;
        local_a8.ParentIndex = uVar7;
        if (((this->Parents).ArrayNum <= (int)uVar7) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->Cmds).ArrayNum;
        lVar9 = (ulonglong)uVar7 * 0x30;
        local_a8.Parent = (FRepParentCmd *)((pTVar1->AllocatorInstance).Data + lVar9);
        local_a8.bHasObjectProperties = false;
        local_a8.bHasNetSerializeProperties = false;
        local_a8.NetSerializeLayouts =
             (TMap<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>_>
              *)0x0;
        iStack_c8 = iVar11 * pFVar4->ElementSize;
        local_c0 = 0;
        FStack_b8.ComparisonIndex.Value = 0;
        FStack_b8.Number = 0;
        iStack_c4 = local_f8;
        local_b0 = false;
        local_d0 = pFVar4;
        iStack_bc = iVar11;
        if (((this->Parents).ArrayNum <= (int)uVar7) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_78.RelativeHandle = iStack_c4;
        local_78.Offset = iStack_c8;
        local_78.StaticArrayIndex = iStack_bc;
        local_78.ParentChecksum = local_c0;
        local_78.Property = local_d0;
        local_78._33_7_ = uStack_af;
        local_78.bNetSerializeStructWithObjects = local_b0;
        *(short *)((pTVar1->AllocatorInstance).Data + lVar9 + 0x1c) = (short)iVar5;
        local_78.RecursingNetSerializeStruct = FStack_b8;
        local_f8 = InitFromProperty_r<1>(&local_a8,&local_78);
        iVar5 = (this->Cmds).ArrayNum;
        if (((this->Parents).ArrayNum <= (int)uVar7) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(short *)((pTVar1->AllocatorInstance).Data + lVar9 + 0x1e) = (short)iVar5;
        iVar5 = pFVar4->Offset_Internal;
        if (((this->Parents).ArrayNum <= (int)uVar7) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(int *)((pTVar1->AllocatorInstance).Data + lVar9 + 0x14) = iVar5;
        if (((this->Parents).ArrayNum <= (int)uVar7) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10 = (pTVar1->AllocatorInstance).Data + lVar9;
        lVar9 = *(longlong *)pFVar10;
        if ((lVar9 != 0) && ((*(uint *)(*(longlong *)(lVar9 + 8) + 0x18) >> 0x14 & 1) != 0)) {
          lVar2 = *(longlong *)(lVar9 + 0x70);
          uVar7 = *(uint *)(pFVar10 + 0x2c);
          *(uint *)(pFVar10 + 0x2c) = uVar7 | 0x20;
          if ((*(uint *)(lVar2 + 0xb0) >> 10 & 1) != 0) {
            *(uint *)(pFVar10 + 0x2c) = uVar7 | 0x30;
          }
        }
        if ((*(uint *)(lVar9 + 0x38) >> 9 & 1) != 0) {
          *(uint *)(pFVar10 + 0x2c) = *(uint *)(pFVar10 + 0x2c) | 0x40;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < pFVar4->ArrayDim);
    }
    local_f0.Field = (FField *)pFVar4->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_f0);
    pFVar4 = (FProperty *)local_f0.Field;
  } while( true );
}

// InitFromStruct @ 1484debb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRepLayout::InitFromStruct
          (FRepLayout *this,UStruct *param_1,UNetConnection *param_2,ECreateRepLayoutFlags param_3)

{
  TArray<FRepParentCmd,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  FProperty *pFVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  int local_f8;
  TFieldIterator<FProperty> local_f0;
  FName local_d8;
  FProperty *local_d0;
  int iStack_c8;
  int iStack_c4;
  uint local_c0;
  int iStack_bc;
  FName FStack_b8;
  bool local_b0;
  undefined7 uStack_af;
  FInitFromPropertySharedParams local_a8;
  FInitFromPropertyStackParams local_78;
  
  local_f8 = 0;
  if (param_1 == (UStruct *)0x0) {
    local_f0.Field = (FField *)0x0;
  }
  else {
    local_f0.Field = param_1->ChildProperties;
  }
  local_f0.InterfaceIndex = -1;
  local_f0.bIncludeSuper = true;
  local_f0.bIncludeDeprecated = true;
  local_f0.bIncludeInterface = false;
  local_f0.Struct = param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_f0);
  pFVar4 = (FProperty *)local_f0.Field;
  do {
    local_f0.Field = (FField *)pFVar4;
    if (pFVar4 == (FProperty *)0x0) {
      iVar11 = (this->Cmds).ArrayNum;
      piVar8 = &(this->Cmds).ArrayMax;
      if (iVar11 == *piVar8) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&(this->Cmds).AllocatorInstance,piVar8);
      }
      (this->Cmds).ArrayNum = iVar11 + 1;
      pFVar10 = (this->Cmds).AllocatorInstance.Data;
      lVar9 = (longlong)iVar11 * 0x20;
      *(undefined8 *)(pFVar10 + lVar9) = 0;
      *(undefined8 *)(pFVar10 + lVar9 + 8) = 0;
      *(undefined8 *)(pFVar10 + lVar9 + 0x10) = 0;
      *(undefined8 *)(pFVar10 + lVar9 + 0x10 + 8) = 0;
      pFVar10[lVar9 + 0x1c] = (FScriptContainerElement)0x1;
      if ((param_2 == (UNetConnection *)0x0) || ((param_3 & MaySendProperties) != None)) {
        BuildHandleToCmdIndexTable_r(this,0,(this->Cmds).ArrayNum + -1,&this->BaseHandleToCmdIndex);
      }
      BuildShadowOffsets<2>(param_1,&this->Parents,&this->Cmds,&this->ShadowDataBufferSize);
      this->Owner = param_1;
      return;
    }
    iVar11 = 0;
    if (((pFVar4->PropertyFlags & CPF_RepSkip) == CPF_None) && (0 < pFVar4->ArrayDim)) {
      pTVar1 = &this->Parents;
      do {
        piVar8 = &(this->Parents).ArrayMax;
        uVar7 = (this->Parents).ArrayNum;
        if (uVar7 == *piVar8) {
          uVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&pTVar1->AllocatorInstance,piVar8);
        }
        pFVar10 = (pTVar1->AllocatorInstance).Data;
        (this->Parents).ArrayNum = uVar7 + 1;
        lVar9 = (longlong)(int)uVar7;
        *(FProperty **)(pFVar10 + lVar9 * 0x30) = pFVar4;
        bVar6 = IsThisNotNull(pFVar4,"FField::GetFName");
        if (bVar6) {
          local_d8 = *(FName *)&pFVar4->_padding_;
        }
        else {
          local_d8.ComparisonIndex.Value = 0;
          local_d8.Number = 0;
        }
        *(FName *)(pFVar10 + lVar9 * 0x30 + 8) = local_d8;
        local_a8.Cmds = &this->Cmds;
        *(int *)(pFVar10 + lVar9 * 0x30 + 0x10) = iVar11;
        *(undefined4 *)(pFVar10 + lVar9 * 0x30 + 0x18) = 0;
        *(undefined8 *)(pFVar10 + lVar9 * 0x30 + 0x1c) = 0;
        *(undefined4 *)(pFVar10 + lVar9 * 0x30 + 0x24) = 0;
        *(undefined4 *)(pFVar10 + lVar9 * 0x30 + 0x28) = 0xffffffff;
        *(undefined4 *)(pFVar10 + lVar9 * 0x30 + 0x2c) = 0;
        uVar7 = uVar7 & 0xffff;
        local_a8.ServerConnection = param_2;
        local_a8.ParentIndex = uVar7;
        if (((this->Parents).ArrayNum <= (int)uVar7) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->Cmds).ArrayNum;
        lVar9 = (ulonglong)uVar7 * 0x30;
        local_a8.Parent = (FRepParentCmd *)((pTVar1->AllocatorInstance).Data + lVar9);
        local_a8.bHasObjectProperties = false;
        local_a8.bHasNetSerializeProperties = false;
        local_a8.NetSerializeLayouts =
             (TMap<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>_>
              *)0x0;
        iStack_c8 = iVar11 * pFVar4->ElementSize;
        local_c0 = 0;
        FStack_b8.ComparisonIndex.Value = 0;
        FStack_b8.Number = 0;
        iStack_c4 = local_f8;
        local_b0 = false;
        local_d0 = pFVar4;
        iStack_bc = iVar11;
        if (((this->Parents).ArrayNum <= (int)uVar7) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_78.RelativeHandle = iStack_c4;
        local_78.Offset = iStack_c8;
        local_78.StaticArrayIndex = iStack_bc;
        local_78.ParentChecksum = local_c0;
        local_78.Property = local_d0;
        local_78._33_7_ = uStack_af;
        local_78.bNetSerializeStructWithObjects = local_b0;
        *(short *)((pTVar1->AllocatorInstance).Data + lVar9 + 0x1c) = (short)iVar5;
        local_78.RecursingNetSerializeStruct = FStack_b8;
        local_f8 = InitFromProperty_r<2>(&local_a8,&local_78);
        iVar5 = (this->Cmds).ArrayNum;
        if (((this->Parents).ArrayNum <= (int)uVar7) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(short *)((pTVar1->AllocatorInstance).Data + lVar9 + 0x1e) = (short)iVar5;
        iVar5 = pFVar4->Offset_Internal;
        if (((this->Parents).ArrayNum <= (int)uVar7) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(int *)((pTVar1->AllocatorInstance).Data + lVar9 + 0x14) = iVar5;
        if (((this->Parents).ArrayNum <= (int)uVar7) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10 = (pTVar1->AllocatorInstance).Data + lVar9;
        lVar9 = *(longlong *)pFVar10;
        if ((lVar9 != 0) && ((*(uint *)(*(longlong *)(lVar9 + 8) + 0x18) >> 0x14 & 1) != 0)) {
          lVar2 = *(longlong *)(lVar9 + 0x70);
          uVar7 = *(uint *)(pFVar10 + 0x2c);
          *(uint *)(pFVar10 + 0x2c) = uVar7 | 0x20;
          if ((*(uint *)(lVar2 + 0xb0) >> 10 & 1) != 0) {
            *(uint *)(pFVar10 + 0x2c) = uVar7 | 0x30;
          }
        }
        if ((*(uint *)(lVar9 + 0x38) >> 9 & 1) != 0) {
          *(uint *)(pFVar10 + 0x2c) = *(uint *)(pFVar10 + 0x2c) | 0x40;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < pFVar4->ArrayDim);
    }
    local_f0.Field = (FField *)pFVar4->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_f0);
    pFVar4 = (FProperty *)local_f0.Field;
  } while( true );
}

// InitRepStateStaticBuffer @ 1484df290

void __thiscall
FRepLayout::InitRepStateStaticBuffer
          (FRepLayout *this,FRepStateStaticBuffer *param_1,
          TRepDataBufferBase<0,unsigned_char_const_> param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *_Src;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *_Dst;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  piVar1 = &(param_1->Buffer).ArrayNum;
  if ((param_1->Buffer).ArrayNum != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShadowData.Buffer.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                       ,0x1cb5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar2 = this->ShadowDataBufferSize;
  iVar7 = *piVar1;
  if (iVar7 < (int)uVar2) {
    iVar6 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (1,1,uVar2 - iVar7,(ForAnyElementType *)param_1,piVar1,
                       &(param_1->Buffer).ArrayMax);
    memset((param_1->Buffer).AllocatorInstance.Data + iVar6,0,(longlong)(int)(uVar2 - iVar7));
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar7) {
      uVar10 = iVar7 - uVar2;
      if ((int)(uVar10 | uVar2) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar10 != 0) {
        pFVar8 = (param_1->Buffer).AllocatorInstance.Data + (int)uVar2;
        iVar7 = (*piVar1 - uVar2) - uVar10;
        if (iVar7 != 0) {
          memmove(pFVar8,pFVar8 + (int)uVar10,(longlong)iVar7);
        }
        *piVar1 = *piVar1 - uVar10;
        UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (1,1,(ForAnyElementType *)param_1,*piVar1,&(param_1->Buffer).ArrayMax);
      }
    }
  }
  pFVar8 = (this->Parents).AllocatorInstance.Data;
  pFVar11 = (param_1->Buffer).AllocatorInstance.Data;
  iVar7 = (this->Parents).ArrayNum;
  pFVar9 = pFVar8 + (longlong)iVar7 * 0x30;
LAB_1484df3d8:
  do {
    if ((this->Parents).ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRepParentCmd_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    if (*(int *)(pFVar8 + 0x10) == 0) {
      if (*piVar1 < *(int *)(*(longlong *)pFVar8 + 0x34) * *(int *)(*(longlong *)pFVar8 + 0x30) +
                    *(int *)(pFVar8 + 0x18)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Parent.ShadowOffset + Parent.Property->GetSize()) <= InShadowData.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                           ,0x1cc5,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar3 = *(longlong **)pFVar8;
      if ((*(uint *)(plVar3 + 7) >> 9 & 1) != 0) {
        memset(pFVar11 + *(int *)(pFVar8 + 0x18),0,
               (longlong)*(int *)((longlong)plVar3 + 0x34) * (longlong)(int)plVar3[6]);
        pFVar8 = pFVar8 + 0x30;
        goto LAB_1484df3d8;
      }
      (**(code **)(*plVar3 + 0x150))();
    }
    pFVar8 = pFVar8 + 0x30;
  } while( true );
  pFVar8 = (param_1->Buffer).AllocatorInstance.Data;
  iVar7 = (this->Parents).ArrayNum;
  pFVar11 = (this->Parents).AllocatorInstance.Data;
  pFVar9 = pFVar11 + (longlong)iVar7 * 0x30;
LAB_1484df4a0:
  do {
    if ((this->Parents).ArrayNum != iVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRepParentCmd_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar11 == pFVar9) {
      return;
    }
    if (*(int *)(pFVar11 + 0x10) == 0) {
      if (*piVar1 < *(int *)(*(longlong *)pFVar11 + 0x34) * *(int *)(*(longlong *)pFVar11 + 0x30) +
                    *(int *)(pFVar11 + 0x18)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Parent.ShadowOffset + Parent.Property->GetSize()) <= InShadowData.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                           ,0x1cd5,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      _Src = (FScriptContainerElement *)(param_2.Data + *(int *)(pFVar11 + 0x14));
      plVar3 = *(longlong **)pFVar11;
      _Dst = pFVar8 + *(int *)(pFVar11 + 0x18);
      if (_Dst != _Src) {
        if ((*(uint *)(plVar3 + 7) >> 0x1e & 1) != 0) {
          memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar3 + 0x34) * (longlong)(int)plVar3[6]);
          pFVar11 = pFVar11 + 0x30;
          goto LAB_1484df4a0;
        }
        (**(code **)(*plVar3 + 0xf0))(plVar3,_Dst,_Src,(int)plVar3[6]);
      }
    }
    pFVar11 = pFVar11 + 0x30;
  } while( true );
}

// MergeChangeList @ 1484e22b0

void __thiscall
FRepLayout::MergeChangeList
          (FRepLayout *this,TRepDataBufferBase<0,unsigned_char_const_> param_1,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FRepHandleIterator *local_res8;
  FRepHandleIterator *local_res18;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *local_res20;
  undefined2 local_168 [4];
  FRepHandleIterator *local_160;
  FChangelistIterator local_158;
  FChangelistIterator local_148;
  FChangelistIterator local_138;
  FRepHandleIterator local_128;
  FRepHandleIterator local_d8;
  FRepHandleIterator local_88;
  
  local_res20 = param_3;
  if ((param_2->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dirty1.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                         ,0x132a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax != 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,1,&param_4->AllocatorInstance,0,piVar1);
  }
  if (((this->Flags & NoReplicatedProperties) == None) && ((this->Parents).ArrayNum != 0)) {
    iVar7 = (this->Cmds).ArrayNum;
    pTVar2 = &this->Cmds;
    pTVar3 = &this->BaseHandleToCmdIndex;
    if (local_res20->ArrayNum == 0) {
      local_128.ChangelistIterator = &local_158;
      local_128.MaxCmdIndex = iVar7 + -1;
      local_158.ChangedIndex = 0;
      local_128.NumHandlesPerElement = (this->BaseHandleToCmdIndex).ArrayNum;
      local_128.Owner = this->Owner;
      local_128.ArrayElementSize = 0;
      local_128.MaxArrayIndex = 1;
      local_128.MinCmdIndex = 0;
      local_128.LastSuccessfulCmdIndex = -1;
      local_158.Changed = param_2;
      local_128.Cmds = pTVar2;
      local_128.HandleToCmdIndex = pTVar3;
      if (local_128.MaxCmdIndex < 0) {
        local_res8 = &local_128;
        `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_res8);
      }
      PruneChangeList_r(this,&local_128,param_1,param_4);
    }
    else {
      local_88.ChangelistIterator = &local_148;
      local_88.MaxCmdIndex = iVar7 + -1;
      local_148.ChangedIndex = 0;
      local_88.NumHandlesPerElement = (this->BaseHandleToCmdIndex).ArrayNum;
      local_88.Owner = this->Owner;
      local_88.ArrayElementSize = 0;
      local_88.MaxArrayIndex = 1;
      local_88.MinCmdIndex = 0;
      local_88.LastSuccessfulCmdIndex = -1;
      local_148.Changed = param_2;
      local_88.Cmds = pTVar2;
      local_88.HandleToCmdIndex = pTVar3;
      if (local_88.MaxCmdIndex < 0) {
        local_res18 = &local_88;
        `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_res18);
      }
      local_138.Changed = local_res20;
      local_d8.MaxCmdIndex = (this->Cmds).ArrayNum + -1;
      local_d8.ChangelistIterator = &local_138;
      local_138.ChangedIndex = 0;
      local_d8.NumHandlesPerElement = (this->BaseHandleToCmdIndex).ArrayNum;
      local_d8.Owner = this->Owner;
      local_d8.ArrayElementSize = 0;
      local_d8.MaxArrayIndex = 1;
      local_d8.MinCmdIndex = 0;
      local_d8.LastSuccessfulCmdIndex = -1;
      local_d8.Cmds = pTVar2;
      local_d8.HandleToCmdIndex = pTVar3;
      if (local_d8.MaxCmdIndex < 0) {
        local_160 = &local_d8;
        `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_160);
      }
      MergeChangeList_r(this,&local_88,&local_d8,param_1,param_4);
    }
  }
  pFVar4 = (param_4->AllocatorInstance).Data;
  local_168[0] = 0;
  if (((pFVar4 <= (FScriptContainerElement *)local_168) &&
      ((FScriptContainerElement *)local_168 < pFVar4 + (longlong)*piVar1 * 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = param_4->ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,&param_4->AllocatorInstance,piVar1);
  }
  param_4->ArrayNum = iVar7 + 1;
  *(undefined2 *)((param_4->AllocatorInstance).Data + (longlong)iVar7 * 2) = local_168[0];
  return;
}

// MergeChangeList_r @ 1484e25a0

void __thiscall
FRepLayout::MergeChangeList_r
          (FRepLayout *this,FRepHandleIterator *param_1,FRepHandleIterator *param_2,
          TRepDataBufferBase<0,unsigned_char_const_> param_3,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  TRepDataBufferBase<0,unsigned_char_const_> TVar6;
  FChangelistIterator *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  FRepHandleIterator *pFVar15;
  FRepHandleIterator *pFVar16;
  int iVar17;
  TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> *pTVar18;
  ushort local_1d8;
  ushort local_1d6;
  ushort local_1d4;
  undefined2 local_1d2;
  FRepHandleIterator *local_1d0;
  FRepHandleIterator *local_1c8;
  uint local_1c0;
  uchar *local_1b8;
  int local_1b0;
  uint local_1ac;
  int local_1a8;
  uint local_1a4;
  FScriptContainerElement *local_1a0;
  FRepHandleIterator *local_198;
  FRepHandleIterator *local_190;
  FRepHandleIterator *local_188;
  FRepHandleIterator *local_180;
  FRepHandleIterator local_178;
  FRepHandleIterator local_128;
  FRepHandleIterator local_d8;
  FRepHandleIterator local_88;
  
  while( true ) {
    uVar11 = param_1->ChangelistIterator->ChangedIndex;
    pTVar4 = param_1->ChangelistIterator->Changed;
    uVar14 = 0;
    if ((int)uVar11 < pTVar4->ArrayNum) {
      uVar14 = ~uVar11 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar2 = *(ushort *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar11 * 2);
    uVar11 = param_2->ChangelistIterator->ChangedIndex;
    pTVar4 = param_2->ChangelistIterator->Changed;
    uVar14 = 0;
    if ((int)uVar11 < pTVar4->ArrayNum) {
      uVar14 = ~uVar11 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar3 = *(ushort *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar11 * 2);
    if (uVar2 == 0) break;
    if (uVar3 == 0) goto LAB_1484e30b7;
    local_1c8 = (FRepHandleIterator *)0x0;
    local_1d0 = (FRepHandleIterator *)0x0;
    pFVar15 = param_1;
    if (uVar2 < uVar3) {
      bVar9 = FRepHandleIterator::NextHandle(param_1);
      if (!bVar9) {
        return;
      }
      pFVar5 = (param_4->AllocatorInstance).Data;
      local_1d8 = uVar2;
      if (((pFVar5 <= (FScriptContainerElement *)&local_1d8) &&
          ((FScriptContainerElement *)&local_1d8 < pFVar5 + (longlong)param_4->ArrayMax * 2)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar10 = param_4->ArrayNum;
      if (iVar10 == param_4->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar10 + 1;
      *(ushort *)((param_4->AllocatorInstance).Data + (longlong)iVar10 * 2) = local_1d8;
      uVar11 = param_1->CmdIndex;
      iVar10 = param_1->ArrayOffset;
      pFVar16 = (FRepHandleIterator *)0x0;
      local_1c8 = param_1;
    }
    else {
      pFVar16 = param_2;
      if (uVar3 < uVar2) {
        bVar9 = FRepHandleIterator::NextHandle(param_2);
        if (!bVar9) {
          return;
        }
        pFVar5 = (param_4->AllocatorInstance).Data;
        local_1d6 = uVar3;
        if (((pFVar5 <= (FScriptContainerElement *)&local_1d6) &&
            ((FScriptContainerElement *)&local_1d6 < pFVar5 + (longlong)param_4->ArrayMax * 2)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = param_4->ArrayNum;
        if (iVar10 == param_4->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar10 + 1;
        *(ushort *)((param_4->AllocatorInstance).Data + (longlong)iVar10 * 2) = local_1d6;
        uVar11 = param_2->CmdIndex;
        iVar10 = param_2->ArrayOffset;
        pFVar15 = (FRepHandleIterator *)0x0;
        local_1d0 = param_2;
      }
      else {
        if ((uVar2 != uVar3) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextHandle1 == NextHandle2",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                               ,0x9d2,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        bVar9 = FRepHandleIterator::NextHandle(param_1);
        if (!bVar9) {
          return;
        }
        bVar9 = FRepHandleIterator::NextHandle(param_2);
        if (!bVar9) {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3278201614795540954>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                             ,0x9da,"RepHandleIterator2.NextHandle()");
          if (!bVar9) {
            return;
          }
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((param_1->CmdIndex != param_2->CmdIndex) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("RepHandleIterator1.CmdIndex == RepHandleIterator2.CmdIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                               ,0x9e0,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar5 = (param_4->AllocatorInstance).Data;
        local_1d4 = uVar2;
        if (((pFVar5 <= (FScriptContainerElement *)&local_1d4) &&
            ((FScriptContainerElement *)&local_1d4 < pFVar5 + (longlong)param_4->ArrayMax * 2)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = param_4->ArrayNum;
        if (iVar10 == param_4->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar10 + 1;
        *(ushort *)((param_4->AllocatorInstance).Data + (longlong)iVar10 * 2) = local_1d4;
        uVar11 = param_1->CmdIndex;
        iVar10 = param_1->ArrayOffset;
        local_1d0 = param_2;
        local_1c8 = param_1;
      }
    }
    uVar14 = 0;
    if ((int)uVar11 < (this->Cmds).ArrayNum) {
      uVar14 = ~uVar11 >> 0x1f;
    }
    local_1c0 = uVar11;
    if ((uVar14 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar13 = (longlong)(int)uVar11 * 0x20;
    pFVar5 = (this->Cmds).AllocatorInstance.Data;
    local_1a0 = pFVar5 + lVar13;
    if (pFVar5[lVar13 + 0x1c] == (FScriptContainerElement)0x0) {
      local_1b8 = param_3.Data + (longlong)iVar10 + (longlong)*(int *)(pFVar5 + lVar13 + 0xc);
                    /* WARNING: Load size is inaccurate */
      TVar6.Data = *local_1b8;
      if (pFVar15 != (FRepHandleIterator *)0x0) {
        pFVar7 = pFVar15->ChangelistIterator;
        uVar11 = pFVar7->ChangedIndex;
        pTVar4 = pFVar7->Changed;
        pFVar7->ChangedIndex = uVar11 + 1;
        uVar14 = 0;
        if ((int)uVar11 < pTVar4->ArrayNum) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_1a4 = (uint)*(ushort *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar11 * 2);
        local_1a8 = local_1c8->ChangelistIterator->ChangedIndex;
      }
      if (pFVar16 != (FRepHandleIterator *)0x0) {
        pFVar7 = pFVar16->ChangelistIterator;
        uVar11 = pFVar7->ChangedIndex;
        pTVar4 = pFVar7->Changed;
        pFVar7->ChangedIndex = uVar11 + 1;
        uVar14 = 0;
        if ((int)uVar11 < pTVar4->ArrayNum) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_1ac = (uint)*(ushort *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar11 * 2);
        local_1b0 = pFVar16->ChangelistIterator->ChangedIndex;
      }
      uVar11 = param_4->ArrayNum;
      if (uVar11 == param_4->ArrayMax) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      pFVar5 = local_1a0;
      param_4->ArrayNum = uVar11 + 1;
      uVar2 = *(ushort *)(local_1a0 + 0x14);
      uVar14 = uVar2 - 1;
      if (local_1c8 == (FRepHandleIterator *)0x0) {
        pTVar18 = local_1d0->HandleToCmdIndex;
      }
      else {
        pTVar18 = local_1c8->HandleToCmdIndex;
      }
      uVar12 = 0;
      if ((int)uVar14 < pTVar18->ArrayNum) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar15 = local_1d0;
      iVar17 = local_1c0 + 1;
      pTVar18 = *(TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> **)
                 ((pTVar18->AllocatorInstance).Data + (ulonglong)uVar2 * 0x10 + -8);
      iVar10 = *(ushort *)(pFVar5 + 8) - 1;
      if (local_1c8 == (FRepHandleIterator *)0x0) {
        local_178.ChangelistIterator = local_1d0->ChangelistIterator;
        local_178.Cmds = &this->Cmds;
        local_178.NumHandlesPerElement = pTVar18->ArrayNum;
        local_178.ArrayElementSize = (int)*(ushort *)(pFVar5 + 10);
        local_178.LastSuccessfulCmdIndex = -1;
        local_178.MaxArrayIndex = *(int *)(local_1b8 + 8);
        local_178.Owner = local_1d0->Owner;
        local_178.HandleToCmdIndex = pTVar18;
        local_178.MinCmdIndex = iVar17;
        local_178.MaxCmdIndex = iVar10;
        if (iVar10 < iVar17) {
          local_198 = &local_178;
          `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_198);
        }
        PruneChangeList_r(this,&local_178,TVar6,param_4);
      }
      else {
        pFVar7 = local_1c8->ChangelistIterator;
        if (local_1d0 == (FRepHandleIterator *)0x0) {
          local_128.Cmds = &this->Cmds;
          local_128.NumHandlesPerElement = pTVar18->ArrayNum;
          local_128.ArrayElementSize = (int)*(ushort *)(pFVar5 + 10);
          local_128.LastSuccessfulCmdIndex = -1;
          local_128.MaxArrayIndex = *(int *)(local_1b8 + 8);
          local_128.Owner = local_1c8->Owner;
          local_128.ChangelistIterator = pFVar7;
          local_128.HandleToCmdIndex = pTVar18;
          local_128.MinCmdIndex = iVar17;
          local_128.MaxCmdIndex = iVar10;
          if (iVar10 < iVar17) {
            local_190 = &local_128;
            `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_190);
          }
          PruneChangeList_r(this,&local_128,TVar6,param_4);
          pFVar15 = local_1d0;
        }
        else {
          local_88.Cmds = &this->Cmds;
          local_88.NumHandlesPerElement = pTVar18->ArrayNum;
          local_88.ArrayElementSize = (int)*(ushort *)(pFVar5 + 10);
          local_88.LastSuccessfulCmdIndex = -1;
          local_88.MaxArrayIndex = *(int *)(local_1b8 + 8);
          local_88.Owner = local_1c8->Owner;
          local_88.ChangelistIterator = pFVar7;
          local_88.HandleToCmdIndex = pTVar18;
          local_88.MinCmdIndex = iVar17;
          local_88.MaxCmdIndex = iVar10;
          if (iVar10 < iVar17) {
            local_188 = &local_88;
            `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_188);
          }
          pFVar15 = local_1d0;
          local_d8.MaxCmdIndex = *(ushort *)(pFVar5 + 8) - 1;
          local_d8.ChangelistIterator = local_1d0->ChangelistIterator;
          local_d8.Cmds = &this->Cmds;
          local_d8.NumHandlesPerElement = pTVar18->ArrayNum;
          local_d8.ArrayElementSize = (int)*(ushort *)(pFVar5 + 10);
          local_d8.LastSuccessfulCmdIndex = -1;
          local_d8.MaxArrayIndex = *(int *)(local_1b8 + 8);
          local_d8.Owner = local_1d0->Owner;
          local_d8.HandleToCmdIndex = pTVar18;
          local_d8.MinCmdIndex = iVar17;
          if (local_d8.MaxCmdIndex < iVar17) {
            local_180 = &local_d8;
            `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_180);
          }
          MergeChangeList_r(this,&local_88,&local_d8,TVar6,param_4);
        }
      }
      iVar10 = param_4->ArrayNum;
      uVar14 = 0;
      if ((int)uVar11 < param_4->ArrayNum) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_1d2 = 0;
      *(ushort *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar11 * 2) =
           (short)iVar10 + ~(ushort)uVar11;
      pFVar5 = (param_4->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_1d2) &&
          ((FScriptContainerElement *)&local_1d2 < pFVar5 + (longlong)param_4->ArrayMax * 2)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar10 = param_4->ArrayNum;
      if (iVar10 == param_4->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      uVar11 = local_1ac;
      iVar17 = local_1b0;
      param_4->ArrayNum = iVar10 + 1;
      *(undefined2 *)((param_4->AllocatorInstance).Data + (longlong)iVar10 * 2) = local_1d2;
      if (pFVar15 != (FRepHandleIterator *)0x0) {
        if (((int)local_1ac < pFVar15->ChangelistIterator->ChangedIndex - local_1b0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CmdIndexIterator->ChangelistIterator.ChangedIndex - OldChangedIndex <= ArrayChangedCount"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                               ,0x984,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar15->ChangelistIterator->ChangedIndex = iVar17 + uVar11;
        iVar10 = FRepHandleIterator::PeekNextHandle(pFVar15);
        if ((iVar10 != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CmdIndexIterator->PeekNextHandle() == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                               ,0x986,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        piVar1 = &pFVar15->ChangelistIterator->ChangedIndex;
        *piVar1 = *piVar1 + 1;
      }
      uVar11 = local_1a4;
      iVar10 = local_1a8;
      pFVar15 = local_1c8;
      if (local_1c8 != (FRepHandleIterator *)0x0) {
        if (((int)local_1a4 < local_1c8->ChangelistIterator->ChangedIndex - local_1a8) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CmdIndexIterator->ChangelistIterator.ChangedIndex - OldChangedIndex <= ArrayChangedCount"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                               ,0x984,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar15->ChangelistIterator->ChangedIndex = iVar10 + uVar11;
        iVar10 = FRepHandleIterator::PeekNextHandle(pFVar15);
        if ((iVar10 != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CmdIndexIterator->PeekNextHandle() == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                               ,0x986,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        piVar1 = &pFVar15->ChangelistIterator->ChangedIndex;
        *piVar1 = *piVar1 + 1;
      }
    }
  }
  param_1 = param_2;
  if (uVar3 == 0) {
    return;
  }
LAB_1484e30b7:
  PruneChangeList_r(this,param_1,param_3,param_4);
  return;
}

// MoveMappedObjectToUnmapped @ 1484e3260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FRepLayout::MoveMappedObjectToUnmapped
          (FRepLayout *this,FReceivingRepState *param_1,FNetDeltaSerializeInfo *param_2,
          FNetworkGUID *param_3)

{
  ushort uVar1;
  FLifetimeCustomDeltaState *pFVar2;
  UObject *pUVar3;
  longlong lVar4;
  UObjectBaseUtility *this_00;
  undefined8 *puVar5;
  uint *puVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  void *pvVar14;
  uint uVar15;
  ushort uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  FString local_e0;
  FNetDeltaSerializeInfo local_c8;
  
  if (((this->Flags & NoReplicatedProperties) != None) || ((this->Parents).ArrayNum == 0)) {
    return false;
  }
  bVar8 = MoveMappedObjectToUnmapped_r(this,&param_1->GuidReferencesMap,param_3,param_2->Object);
  pFVar2 = (this->LifetimeCustomPropertyState).Ptr;
  if (pFVar2 == (FLifetimeCustomDeltaState *)0x0) {
    return bVar8;
  }
  pUVar3 = param_2->Object;
  if (pUVar3 != (UObject *)0x0) {
    uVar17 = 0;
    uVar12 = (uint)(ushort)(pFVar2->LifetimeCustomDeltaProperties).ArrayNum;
    if (uVar12 != 0) {
      do {
        pFVar2 = (this->LifetimeCustomPropertyState).Ptr;
        uVar16 = (ushort)uVar17;
        if (((pFVar2->LifetimeCustomDeltaProperties).ArrayNum <= (int)(uVar17 & 0xffff)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        uVar1 = *(ushort *)
                 ((pFVar2->LifetimeCustomDeltaProperties).AllocatorInstance.Data +
                 (uVar17 & 0xffff) * 0x18);
        if (((this->Parents).ArrayNum <= (int)(uint)uVar1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar18 = (this->Parents).AllocatorInstance.Data + (ulonglong)uVar1 * 0x30;
        lVar4 = *(longlong *)pFVar18;
        this_00 = *(UObjectBaseUtility **)(lVar4 + 0x70);
        if (this_00[4].field_0x14 == '\0') {
          UObjectBaseUtility::GetPathName(this_00,&local_e0,(UObject *)0x0);
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("bPrepareCppStructOpsCompleted",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x8f6,
                             L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s"
                            );
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
        }
        puVar5 = *(undefined8 **)&this_00[4].field_0x18;
        FNetDeltaSerializeInfo::FNetDeltaSerializeInfo(&local_c8,param_2);
        local_c8.Struct = *(UStruct **)(lVar4 + 0x70);
        pvVar14 = &pUVar3->field_0x0 + *(int *)(pFVar18 + 0x14);
        local_c8.bOutHasMoreUnmapped = false;
        local_c8.bOutSomeObjectsWereMapped = false;
        puVar6 = (uint *)*puVar5;
        local_c8.Data = pvVar14;
        local_c8.CustomDeltaIndex = uVar16;
        if ((*(byte *)((longlong)puVar6 + 0x15) & 1) != 0) {
          if (((*puVar6 & 0x80) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("!!(this->Flags & FuncFlag)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0x660,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          uVar15 = 0;
          for (uVar13 = *puVar6 & 0x7f; uVar13 != 0; uVar13 = uVar13 & uVar13 - 1) {
            uVar15 = uVar15 + 1;
          }
          cVar11 = (**(code **)(puVar6 + (ulonglong)uVar15 * 2 + 6))(&local_c8,pvVar14);
          if (cVar11 != '\0') {
            bVar8 = true;
          }
        }
        param_2->bOutSomeObjectsWereMapped =
             (bool)(param_2->bOutSomeObjectsWereMapped | local_c8.bOutSomeObjectsWereMapped);
        param_2->bOutHasMoreUnmapped =
             (bool)(param_2->bOutHasMoreUnmapped | local_c8.bOutHasMoreUnmapped);
        if (local_c8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.DebugName.Data.AllocatorInstance.Data);
        }
        uVar13 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar13;
      } while ((int)uVar13 < (int)uVar12);
    }
  }
  return bVar8;
}

// MoveMappedObjectToUnmappedForFastArray @ 1484e3590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FRepLayout::MoveMappedObjectToUnmappedForFastArray
          (FRepLayout *this,FFastArrayDeltaSerializeParams *param_1)

{
  undefined1 *puVar1;
  TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>
  *pTVar2;
  ulonglong uVar3;
  ushort uVar4;
  int iVar5;
  FLifetimeCustomDeltaState *pFVar6;
  FFastArraySerializer *pFVar7;
  FNetworkGUID *pFVar8;
  code *pcVar9;
  TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>
  *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  undefined1 local_res10 [8];
  int local_res18;
  TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>
  *local_res20;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  pFVar6 = (this->LifetimeCustomPropertyState).Ptr;
  uVar4 = param_1->DeltaSerializeInfo->CustomDeltaIndex;
  if (((pFVar6->LifetimeCustomDeltaProperties).ArrayNum <= (int)(uint)uVar4) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  if (((this->Parents).ArrayNum <=
       (int)(uint)*(ushort *)
                   ((pFVar6->LifetimeCustomDeltaProperties).AllocatorInstance.Data +
                   (ulonglong)uVar4 * 0x18)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  pFVar7 = param_1->ArraySerializer;
  iVar19 = 0;
  bVar11 = false;
  uVar14 = 1;
  iVar21 = 0;
  puVar1 = &(pFVar7->GuidReferencesMap_StructDelta).field_0x10;
  iVar5 = *(int *)&(pFVar7->GuidReferencesMap_StructDelta).field_0x28;
  pTVar2 = &pFVar7->GuidReferencesMap_StructDelta;
  pFVar8 = param_1->DeltaSerializeInfo->MoveGuidToUnmapped;
  iVar15 = 0;
  if (iVar5 != 0) {
    puVar22 = *(uint **)&(pFVar7->GuidReferencesMap_StructDelta).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar18 = *puVar22;
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar19;
      iVar21 = iVar21 + 0x20;
      iVar19 = iVar19 + 1;
      iVar15 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1484e36de;
      uVar18 = puVar22[lVar16 + 1];
    }
    uVar14 = -uVar18 & uVar18;
    uVar3 = (ulonglong)uVar14 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res18 = (int)lVar16;
    iVar15 = iVar21 + -1 + local_res18;
    if (iVar5 < iVar15) {
      iVar15 = iVar5;
    }
  }
LAB_1484e36de:
  uVar18 = *(uint *)&(pFVar7->GuidReferencesMap_StructDelta).field_0x28;
  uVar17 = uVar18 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar14,iVar19);
  TStack_98.CurrentBitIndex = iVar15;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar18 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = iVar21;
  uStack_78 = CONCAT44(uStack_a4,
                       *(int *)&(pFVar7->GuidReferencesMap_StructDelta).field_0x8 -
                       *(int *)&(pFVar7->GuidReferencesMap_StructDelta).field_0x34);
  local_res20 = pTVar2;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  pTVar10 = local_res20;
  uVar14 = *(uint *)&(pFVar7->GuidReferencesMap_StructDelta).field_0x28;
  if (uVar18 != uVar14) {
    puVar20 = *(undefined1 **)&(pFVar7->GuidReferencesMap_StructDelta).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar19;
      uVar17 = uVar17 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_1484e37e1;
      uVar18 = *(uint *)(puVar20 + lVar16 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar18 = (int)lVar16 + -1 + uVar17;
    if ((int)uVar14 < (int)uVar18) {
      uVar18 = uVar14;
    }
  }
LAB_1484e37e1:
  while( true ) {
    if (*(int *)&(pFVar7->GuidReferencesMap_StructDelta).field_0x8 -
        *(int *)&(pFVar7->GuidReferencesMap_StructDelta).field_0x34 != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_98.CurrentBitIndex == uVar18) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar2 == pTVar10))
    break;
    bVar13 = MoveMappedObjectToUnmapped_r
                       (this,(TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                              *)(*(longlong *)pTVar2 + 8 +
                                (longlong)TStack_98.CurrentBitIndex * 0x60),pFVar8,
                        param_1->DeltaSerializeInfo->Object);
    bVar11 = (bool)(bVar11 | bVar13);
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  return bVar11;
}

// MoveMappedObjectToUnmapped_r @ 1484e3870

bool __thiscall
FRepLayout::MoveMappedObjectToUnmapped_r
          (FRepLayout *this,
          TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
          *param_1,FNetworkGUID *param_2,UObject *param_3)

{
  ulonglong uVar1;
  ulong64 uVar2;
  code *pcVar3;
  TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
  *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  undefined1 local_c8 [4];
  uint local_c4;
  TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  TBitArray<FDefaultBitArrayAllocator> *local_88;
  TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar9 = *(int *)&param_1->field_0x28;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  local_a0 = 0;
  bVar7 = false;
  iStack_b8 = 0;
  uStack_b4 = 1;
  iStack_a4 = 0;
  if (iVar9 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)pTVar20;
    }
    uVar17 = *puVar16;
    while (uVar17 == 0) {
      lVar10 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar9;
      if ((int)((iVar9 + -1 >> 0x1f & 0x1fU) + iVar9 + -1) >> 5 < iStack_b8) goto LAB_1484e392d;
      uVar17 = puVar16[lVar10 + 1];
    }
    uStack_b4 = -uVar17 & uVar17;
    uVar1 = (ulonglong)uStack_b4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_90 = (int)lVar10;
    iStack_a4 = local_a0 + -1 + local_90;
    if (iVar9 < iStack_a4) {
      iStack_a4 = iVar9;
    }
  }
LAB_1484e392d:
  uVar17 = *(uint *)&param_1->field_0x28;
  iStack_98 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_b4,iStack_b8);
  uStack_a8 = 0xffffffff;
  TStack_78.CurrentBitIndex = iStack_a4;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_78._28_4_ = iStack_a4;
  TStack_78.BaseBitIndex = local_a0;
  uStack_58 = CONCAT44(uStack_94,iStack_98);
  local_c4 = uVar17;
  local_c0 = param_1;
  local_b0 = (undefined1 *)pTVar20;
  iStack_9c = iStack_a4;
  local_88 = pTVar20;
  local_80 = param_1;
  TStack_78.Array = pTVar20;
  if ((((int)uVar17 < 0) || (iVar9 < (int)uVar17)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  uVar8 = *(uint *)&param_1->field_0x28;
  if (uVar17 != uVar8) {
    puVar11 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar11 = (undefined1 *)pTVar20;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar10 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar8;
      local_c4 = uVar8;
      if ((int)(((int)(uVar8 - 1) >> 0x1f & 0x1fU) + (uVar8 - 1)) >> 5 < iVar14) goto LAB_1484e3a30;
      uVar17 = *(uint *)(puVar11 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_8c = (int)lVar10;
    uVar17 = local_8c + -1 + uVar15;
    local_c4 = uVar17;
    if ((int)uVar8 < (int)uVar17) {
      uVar17 = uVar8;
      local_c4 = uVar8;
    }
  }
LAB_1484e3a30:
  do {
    pTVar4 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      local_c8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_c8);
    }
    if (((TStack_78.CurrentBitIndex == uVar17) && (TStack_78.Array == pTVar20)) &&
       (pTVar4 == param_1)) {
      return bVar7;
    }
    lVar10 = (longlong)TStack_78.CurrentBitIndex * 0xe0 + *(longlong *)pTVar4;
    if (*(longlong *)(lVar10 + 200) == 0) {
      uVar2 = (param_2->field0_0x0).ObjectId;
      uVar15 = (int)(uVar2 >> 0x20) * 0x17 + (int)uVar2;
      uVar17 = local_c4;
      if (*(int *)(lVar10 + 0x70) != *(int *)(lVar10 + 0x9c)) {
        lVar19 = lVar10 + 0xa0;
        lVar18 = *(longlong *)(lVar10 + 0xa8);
        lVar13 = lVar19;
        if (lVar18 != 0) {
          lVar13 = lVar18;
        }
        iVar9 = *(int *)(lVar13 + (ulonglong)(*(int *)(lVar10 + 0xb0) - 1U & uVar15) * 4);
        if (iVar9 != -1) {
          lVar13 = *(longlong *)(lVar10 + 0x68);
          do {
            if (*(ulong64 *)(lVar13 + (longlong)iVar9 * 0x10) == uVar2) {
              lVar12 = lVar19;
              if (lVar18 != 0) {
                lVar12 = lVar18;
              }
              uVar17 = *(uint *)(lVar12 + ((longlong)*(int *)(lVar10 + 0xb0) - 1U &
                                          (longlong)(int)uVar15) * 4);
              goto joined_r0x0001484e3bc4;
            }
            iVar9 = *(int *)(lVar13 + 8 + (longlong)iVar9 * 0x10);
          } while (iVar9 != -1);
        }
      }
    }
    else {
      uVar15 = *(uint *)(lVar10 + 0xc);
      uVar8 = 0;
      if ((int)uVar15 < (this->Cmds).ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (((this->Cmds).AllocatorInstance.Data[(longlong)(int)uVar15 * 0x20 + 0x1c] !=
           (FScriptContainerElement)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Cmds[GuidReferences.CmdIndex].Type == ERepLayoutCmdType::DynamicArray"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                             ,0x10b0,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      bVar5 = MoveMappedObjectToUnmapped_r
                        (this,*(TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                                **)(lVar10 + 200),param_2,param_3);
      if (bVar5) {
        bVar7 = true;
      }
    }
LAB_1484e3b90:
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    pTVar20 = local_88;
  } while( true );
joined_r0x0001484e3bc4:
  if (uVar17 != 0xffffffff) {
    lVar18 = (longlong)(int)uVar17 * 0x10;
    if (*(ulong64 *)(lVar18 + lVar13) != uVar2) goto code_r0x0001484e3be1;
    if (((int)uVar17 < 0) || (*(int *)(lVar10 + 0x90) <= (int)uVar17)) {
LAB_1484e3c50:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Elements.IsValidIndex(ElementIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    else {
      if ((*(int *)(lVar10 + 0x90) <= (int)uVar17) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      lVar13 = lVar10 + 0x78;
      if (*(longlong *)(lVar10 + 0x88) != 0) {
        lVar13 = *(longlong *)(lVar10 + 0x88);
      }
      uVar15 = uVar17;
      if ((int)uVar17 < 0) {
        uVar15 = uVar17 + 0x1f;
      }
      if ((*(uint *)(lVar13 + (longlong)((int)uVar15 >> 5) * 4) >> (uVar17 & 0x1f) & 1) == 0)
      goto LAB_1484e3c50;
    }
    lVar18 = *(longlong *)(lVar10 + 0x68) + lVar18;
    if (*(longlong *)(lVar10 + 0xa8) != 0) {
      lVar19 = *(longlong *)(lVar10 + 0xa8);
    }
    puVar16 = (uint *)(lVar19 + (longlong)*(int *)(lVar18 + 0xc) * 4);
    while( true ) {
      uVar15 = *puVar16;
      if ((uVar15 == 0xffffffff) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("NextElementIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2b5,L"Corrupt hash"), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (uVar15 == uVar17) break;
      puVar16 = (uint *)(*(longlong *)(lVar10 + 0x68) + 8 + (longlong)(int)uVar15 * 0x10);
    }
    *puVar16 = *(uint *)(lVar18 + 8);
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized
              ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(lVar10 + 0x68),uVar17,1);
  }
  goto LAB_1484e3cee;
code_r0x0001484e3be1:
  uVar17 = *(uint *)(lVar18 + lVar13 + 8);
  goto joined_r0x0001484e3bc4;
LAB_1484e3cee:
  FGuidReferences::AddUnmappedGUID
            ((FGuidReferences *)(lVar10 + 8),(FNetworkGUID)param_2->field0_0x0);
  bVar7 = true;
  uVar17 = local_c4;
  goto LAB_1484e3b90;
}

// PostSendCustomDeltaProperties @ 1484e5510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRepLayout::PostSendCustomDeltaProperties
          (FRepLayout *this,UObject *param_1,UNetConnection *param_2,
          FReplicationChangelistMgr *param_3,
          TArray<TSharedPtr<INetDeltaBaseState,1>,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

// PreSendCustomDeltaProperties @ 1484e5570

/* WARNING: Removing unreachable block (ram,0x0001484e588c) */
/* WARNING: Removing unreachable block (ram,0x0001484e59d3) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRepLayout::PreSendCustomDeltaProperties
          (FRepLayout *this,UObject *param_1,UNetConnection *param_2,
          FReplicationChangelistMgr *param_3,uint param_4,
          TArray<TSharedPtr<INetDeltaBaseState,1>,TSizedDefaultAllocator<32>_> *param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  FLifetimeCustomDeltaState *pFVar5;
  FCustomDeltaChangelistState *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ForElementType<unsigned_int> *pFVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  ForElementType<unsigned_int> *this_00;
  TSet<TTuple<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_01;
  FScriptContainerElement *pFVar15;
  ushort uVar16;
  longlong lVar17;
  
  if (((param_2->bInternalAck == 0) &&
      (pFVar5 = (this->LifetimeCustomPropertyState).Ptr, pFVar5->NumFastArrayProperties != 0)) &&
     (pFVar6 = (param_3->RepChangelistState).CustomDeltaChangelistState.Ptr,
     pFVar6->LastReplicationFrame != param_4)) {
    lVar17 = 0;
    pFVar6->LastReplicationFrame = param_4;
    uVar3 = (ushort)(pFVar5->LifetimeCustomDeltaProperties).ArrayNum;
    uVar16 = 0;
    if (uVar3 != 0) {
      do {
        if (((pFVar5->LifetimeCustomDeltaProperties).ArrayNum <= (int)(uint)uVar16) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar14 = (pFVar5->LifetimeCustomDeltaProperties).AllocatorInstance.Data + lVar17;
        if (*(int *)(pFVar14 + 4) != -1) {
          uVar4 = *(ushort *)pFVar14;
          uVar10 = *(uint *)(pFVar14 + 8);
          if (((this->Parents).ArrayNum <= (int)(uint)uVar4) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar9 = *(int *)((this->Parents).AllocatorInstance.Data + (ulonglong)uVar4 * 0x30 + 0x14);
          bVar2 = (&param_1->field_0x0)[(longlong)*(int *)(pFVar14 + 0xc) + (longlong)iVar9];
          if (((bVar2 & 4) != 0) || (((bVar2 & 1) == 0 && ((bVar2 & 2) != 0)))) {
            uVar12 = 0;
            if ((int)uVar10 < (pFVar6->ArrayStates).ArrayNum) {
              uVar12 = ~uVar10 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar15 = (pFVar6->ArrayStates).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x90;
            if (*(int *)&pFVar15[0x80].field_0x0 !=
                *(int *)(&param_1->field_0x0 + (longlong)*(int *)(pFVar14 + 0x10) + (longlong)iVar9)
               ) {
              if (*(int *)&pFVar15[8].field_0x0 == 0) {
                iVar9 = UE::Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x50,8,0x20,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 8),
                                   (int *)(pFVar15 + 0xc));
                DefaultConstructItems<FDeltaArrayHistoryItem,int>
                          (*(FScriptContainerElement **)&pFVar15->field_0x0 + (longlong)iVar9 * 0x50
                           ,0x20);
                iVar9 = *(int *)(pFVar15 + 0x2c);
                this_00 = (ForElementType<unsigned_int> *)(pFVar15 + 0x10);
                *(undefined4 *)&pFVar15[0x28].field_0x0 = 0x20;
                if ((iVar9 + 0x1fU & 0xffffffe0) < 0x20) {
                  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
                  ForElementType<unsigned_int>::ResizeAllocation(this_00,0,1,4);
                  *(undefined4 *)(pFVar15 + 0x2c) = 0x20;
                }
                pFVar11 = this_00;
                if (*(ForElementType<unsigned_int> **)&pFVar15[0x20].field_0x0 !=
                    (ForElementType<unsigned_int> *)0x0) {
                  pFVar11 = *(ForElementType<unsigned_int> **)&pFVar15[0x20].field_0x0;
                }
                pFVar11->InlineData[0] = '\0';
                pFVar11->InlineData[1] = '\0';
                pFVar11->InlineData[2] = '\0';
                pFVar11->InlineData[3] = '\0';
                uVar12 = *(int *)&pFVar15[0x28].field_0x0 >> 0x1f & 0x1f;
                uVar10 = *(int *)&pFVar15[0x28].field_0x0 + uVar12;
                iVar9 = (uVar10 & 0x1f) - uVar12;
                if (iVar9 != 0) {
                  if (*(ForElementType<unsigned_int> **)&pFVar15[0x20].field_0x0 !=
                      (ForElementType<unsigned_int> *)0x0) {
                    this_00 = *(ForElementType<unsigned_int> **)&pFVar15[0x20].field_0x0;
                  }
                  *(uint *)(this_00->InlineData + (longlong)((int)uVar10 >> 5) * 4) =
                       *(uint *)(this_00->InlineData + (longlong)((int)uVar10 >> 5) * 4) &
                       0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
                }
              }
              uVar10 = *(uint *)&pFVar15[0x88].field_0x0;
              uVar12 = *(uint *)(pFVar15 + 0x84);
              uVar13 = uVar10 & 0x1f;
              if ((*(int *)&pFVar15[8].field_0x0 <= (int)uVar13) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if ((*(int *)&pFVar15[0x28].field_0x0 <= (int)uVar13) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar14 = pFVar15 + 0x10;
              if (*(FScriptContainerElement **)&pFVar15[0x20].field_0x0 !=
                  (FScriptContainerElement *)0x0) {
                pFVar14 = *(FScriptContainerElement **)&pFVar15[0x20].field_0x0;
              }
              if (uVar10 != uVar12) {
                if ((*(uint *)pFVar14 >> uVar13 & 1) == 0) goto LAB_1484e59f4;
                if (0x1f < uVar10 - uVar12) {
                  *(int *)(pFVar15 + 0x84) = *(int *)(pFVar15 + 0x84) + 1;
                }
              }
              uVar10 = *(int *)&pFVar15[0x88].field_0x0 + 1;
              *(uint *)&pFVar15[0x88].field_0x0 = uVar10;
              uVar10 = uVar10 & 0x1f;
              if ((*(int *)&pFVar15[8].field_0x0 <= (int)uVar10) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              this_01 = (TSet<TTuple<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         *)(*(FScriptContainerElement **)&pFVar15->field_0x0 +
                           (ulonglong)uVar10 * 0x50);
              bVar8 = 1 < this_01->HashSize;
              if (!bVar8) {
                TSet<TTuple<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::UnhashElements(this_01);
              }
              TSparseArray<TSparseSetElement<TTuple<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)this_01,0,*(int *)&(this_01->Elements).field_0x8);
              puVar1 = &(this_01->Elements).field_0xc;
              *(undefined4 *)&(this_01->Elements).field_0x8 = 0;
              if (*(int *)puVar1 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
              }
              *(undefined4 *)&(this_01->Elements).field_0x30 = 0xffffffff;
              *(undefined4 *)&(this_01->Elements).field_0x34 = 0;
              iVar9 = *(int *)&(this_01->Elements).field_0x2c;
              *(undefined4 *)&(this_01->Elements).field_0x28 = 0;
              if ((iVar9 < 0) || (0x80 < iVar9)) {
                *(undefined4 *)&(this_01->Elements).field_0x2c = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)&(this_01->Elements).field_0x10,0
                          );
              }
              if (bVar8) {
                this_01->HashSize = 1;
                TSet<TTuple<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::Rehash(this_01);
              }
              if ((*(int *)&pFVar15[0x28].field_0x0 <= (int)uVar10) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar14 = pFVar15 + 0x10;
              if (*(FScriptContainerElement **)&pFVar15[0x20].field_0x0 !=
                  (FScriptContainerElement *)0x0) {
                pFVar14 = *(FScriptContainerElement **)&pFVar15[0x20].field_0x0;
              }
              *(uint *)pFVar14 = *(uint *)pFVar14 & ~(1 << (sbyte)uVar10);
            }
          }
        }
LAB_1484e59f4:
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 0x18;
      } while (uVar16 < uVar3);
    }
  }
  return;
}

// PruneChangeList @ 1484e7970

void __thiscall
FRepLayout::PruneChangeList
          (FRepLayout *this,TRepDataBufferBase<0,unsigned_char_const_> param_1,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRepHandleIterator *local_res8;
  undefined2 local_88 [4];
  FChangelistIterator local_80;
  FRepHandleIterator local_68;
  
  if (param_2->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Changed.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                       ,0x1316,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (*piVar1 != 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,1,&param_3->AllocatorInstance,0,piVar1);
  }
  if (((this->Flags & NoReplicatedProperties) == None) && ((this->Parents).ArrayNum != 0)) {
    local_68.ChangelistIterator = &local_80;
    local_68.MaxCmdIndex = (this->Cmds).ArrayNum + -1;
    local_68.Cmds = &this->Cmds;
    local_68.HandleToCmdIndex = &this->BaseHandleToCmdIndex;
    local_80.ChangedIndex = 0;
    local_68.NumHandlesPerElement = (this->BaseHandleToCmdIndex).ArrayNum;
    local_68.Owner = this->Owner;
    local_68.ArrayElementSize = 0;
    local_68.MaxArrayIndex = 1;
    local_68.MinCmdIndex = 0;
    local_68.LastSuccessfulCmdIndex = -1;
    local_80.Changed = param_2;
    if (local_68.MaxCmdIndex < 0) {
      local_res8 = &local_68;
      `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_res8);
    }
    PruneChangeList_r(this,&local_68,param_1,param_3);
  }
  pFVar2 = (param_3->AllocatorInstance).Data;
  local_88[0] = 0;
  if ((pFVar2 <= (FScriptContainerElement *)local_88) &&
     ((FScriptContainerElement *)local_88 < pFVar2 + (longlong)*piVar1 * 2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_3->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,&param_3->AllocatorInstance,piVar1);
  }
  param_3->ArrayNum = iVar5 + 1;
  *(undefined2 *)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 2) = local_88[0];
  return;
}

// PruneChangeList_r @ 1484e7b70

void __thiscall
FRepLayout::PruneChangeList_r
          (FRepLayout *this,FRepHandleIterator *param_1,
          TRepDataBufferBase<0,unsigned_char_const_> param_2,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FChangelistIterator *pFVar2;
  TRepDataBufferBase<0,unsigned_char_const_> TVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  undefined2 local_b8;
  undefined2 local_b6;
  uint local_b4;
  int local_b0;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *local_a8;
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *local_a0;
  TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> *local_98;
  uchar *local_90;
  FRepHandleIterator *local_88 [2];
  FRepHandleIterator local_78;
  
  bVar8 = FRepHandleIterator::NextHandle(param_1);
  if (bVar8) {
    local_a0 = &this->Cmds;
    do {
      pTVar7 = local_a0;
      piVar14 = &param_3->ArrayMax;
      local_b8 = (undefined2)param_1->Handle;
      pFVar1 = (param_3->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar1 + (longlong)*piVar14 * 2)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = param_3->ArrayNum;
      if (iVar9 == *piVar14) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,&param_3->AllocatorInstance,piVar14);
      }
      param_3->ArrayNum = iVar9 + 1;
      *(undefined2 *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 2) = local_b8;
      uVar12 = param_1->CmdIndex;
      iVar9 = param_1->ArrayOffset;
      uVar10 = 0;
      if ((int)uVar12 < pTVar7->ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (pTVar7->AllocatorInstance).Data;
      if (pFVar1[(longlong)(int)uVar12 * 0x20 + 0x1c] == (FScriptContainerElement)0x0) {
        pFVar2 = param_1->ChangelistIterator;
        local_90 = param_2.Data +
                   (longlong)iVar9 + (longlong)*(int *)(pFVar1 + (longlong)(int)uVar12 * 0x20 + 0xc)
        ;
        uVar10 = pFVar2->ChangedIndex;
        local_a8 = pFVar2->Changed;
                    /* WARNING: Load size is inaccurate */
        TVar3.Data = *local_90;
        pFVar2->ChangedIndex = uVar10 + 1;
        uVar11 = 0;
        if ((int)uVar10 < local_a8->ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = param_3->ArrayNum;
        local_a8 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                   CONCAT44(local_a8._4_4_,
                            (uint)*(ushort *)
                                   ((local_a8->AllocatorInstance).Data + (longlong)(int)uVar10 * 2))
        ;
        local_b0 = param_1->ChangelistIterator->ChangedIndex;
        if (uVar11 == param_3->ArrayMax) {
          uVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = uVar11 + 1;
        local_98 = param_1->HandleToCmdIndex;
        local_b4 = (uint)*(ushort *)(pFVar1 + (longlong)(int)uVar12 * 0x20 + 0x14);
        uVar13 = *(ushort *)(pFVar1 + (longlong)(int)uVar12 * 0x20 + 0x14) - 1;
        uVar10 = 0;
        if ((int)uVar13 < local_98->ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78.HandleToCmdIndex =
             *(TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> **)
              ((local_98->AllocatorInstance).Data + (longlong)(int)local_b4 * 0x10 + -8);
        local_78.ChangelistIterator = param_1->ChangelistIterator;
        local_78.MaxArrayIndex = *(int *)(local_90 + 8);
        local_78.Cmds = local_a0;
        local_78.NumHandlesPerElement = (local_78.HandleToCmdIndex)->ArrayNum;
        local_78.MinCmdIndex = uVar12 + 1;
        local_78.MaxCmdIndex = *(ushort *)(pFVar1 + (longlong)(int)uVar12 * 0x20 + 8) - 1;
        local_78.ArrayElementSize = (int)*(ushort *)(pFVar1 + (longlong)(int)uVar12 * 0x20 + 10);
        local_78.Owner = param_1->Owner;
        local_78.LastSuccessfulCmdIndex = -1;
        if (local_78.MaxCmdIndex < local_78.MinCmdIndex) {
          local_88[0] = &local_78;
          `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(local_88);
        }
        PruneChangeList_r(this,&local_78,TVar3,param_3);
        iVar9 = param_3->ArrayNum;
        uVar12 = 0;
        if ((int)uVar11 < iVar9) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_b6 = 0;
        *(short *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar11 * 2) =
             ((short)iVar9 - (short)uVar11) + -1;
        pFVar1 = (param_3->AllocatorInstance).Data;
        piVar14 = &param_3->ArrayMax;
        if (((pFVar1 <= (FScriptContainerElement *)&local_b6) &&
            ((FScriptContainerElement *)&local_b6 < pFVar1 + (longlong)*piVar14 * 2)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = param_3->ArrayNum;
        if (iVar9 == *piVar14) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x202,&param_3->AllocatorInstance,piVar14);
        }
        iVar5 = local_b0;
        iVar6 = (int)local_a8;
        param_3->ArrayNum = iVar9 + 1;
        *(undefined2 *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 2) = local_b6;
        if (((int)local_a8 < param_1->ChangelistIterator->ChangedIndex - local_b0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CmdIndexIterator->ChangelistIterator.ChangedIndex - OldChangedIndex <= ArrayChangedCount"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                               ,0x984,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        param_1->ChangelistIterator->ChangedIndex = iVar5 + iVar6;
        iVar9 = FRepHandleIterator::PeekNextHandle(param_1);
        if ((iVar9 != 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CmdIndexIterator->PeekNextHandle() == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                               ,0x986,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        piVar14 = &param_1->ChangelistIterator->ChangedIndex;
        *piVar14 = *piVar14 + 1;
      }
      bVar8 = FRepHandleIterator::NextHandle(param_1);
    } while (bVar8);
  }
  return;
}

// RebuildConditionalProperties @ 1484e85f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRepLayout::RebuildConditionalProperties
          (FRepLayout *this,FSendingRepState *param_1,FReplicationFlags param_2)

{
  FRepChangedPropertyTracker *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_NetRebuildConditionalTime> FVar10;
  short *psVar11;
  ForElementType<unsigned_int> FVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStackY_e8 [32];
  FName local_80;
  FColor_u_0 local_78 [2];
  FName local_70;
  FName local_68;
  FName local_58;
  FReplicationFlags local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  iVar14 = 0;
  FVar10 = StatPtr_STAT_NetRebuildConditionalTime;
  if (StatPtr_STAT_NetRebuildConditionalTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetRebuildConditionalTime>)0x0) {
    pFVar9 = ::FName::FName(&local_58,"STAT_NetRebuildConditionalTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_NetRebuildConditionalTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetRebuildConditionalTime,*pFVar9
                        ,L"Rebuild Conditionals","STATGROUP_Game","STATCAT_Advanced",L"Game",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  local_80 = *(FName *)FVar10;
  bVar3 = false;
  bVar4 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  bVar6 = false;
  bVar7 = false;
  if ((local_80.ComparisonIndex.Value.Value != 0) || (local_80.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_78[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_78[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar4 = true;
      bVar6 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_70.ComparisonIndex.Value = local_80.ComparisonIndex.Value.Value;
        local_70.Number = local_80.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_70,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                   ,0x1c3b);
        bVar3 = true;
        bVar4 = true;
        bVar6 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_80,CycleScopeStart);
      bVar6 = true;
      goto LAB_1484e877b;
    }
  }
  bVar4 = bVar7;
  bVar3 = bVar6;
  bVar6 = false;
  local_80 = local_68;
LAB_1484e877b:
  (param_1->RepFlags).field0_0x0._s_0 = (FReplicationFlags_u_0_s_0)param_2.field0_0x0;
  UE::Net::BuildConditionMapFromRepFlags(local_50);
  if (((this->Flags & HasDynamicConditionProperties) == None) ||
     (pFVar1 = (param_1->RepChangedPropertyTracker).Object,
     pFVar1 == (FRepChangedPropertyTracker *)0x0)) {
    uVar15 = 0;
    uVar16 = 1;
    if (0 < (param_1->InactiveParents).NumBits) {
      do {
        uVar13 = 0;
        if ((int)uVar15 < (this->Parents).ArrayNum) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar13 = *(uint *)((this->Parents).AllocatorInstance.Data +
                          (longlong)(int)uVar15 * 0x30 + 0x20);
        if ((((int)uVar13 < 0) || (0x10 < uVar13)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StaticBitArray.h"
                               ,0xaf,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar12 = (param_1->InactiveParents).AllocatorInstance.SecondaryData;
        if (FVar12 == (ForElementType<unsigned_int>)0x0) {
          FVar12 = (ForElementType<unsigned_int>)&param_1->InactiveParents;
        }
        uVar8 = *(uint *)((longlong)FVar12 + (longlong)iVar14 * 4);
        if ((*(ulonglong *)(local_50 + (ulonglong)(uVar13 >> 6) * 2) >> (uVar13 & 0x3f) & 1) == 0) {
          uVar8 = uVar8 | uVar16;
        }
        else {
          uVar8 = uVar8 & ~uVar16;
        }
        uVar13 = uVar16 * 2;
        *(uint *)((longlong)FVar12 + (longlong)iVar14 * 4) = uVar8;
        uVar15 = uVar15 + 1;
        iVar5 = iVar14 + 1;
        if (uVar13 != 0) {
          iVar5 = iVar14;
        }
        iVar14 = iVar5;
        uVar16 = 1;
        if (uVar13 != 0) {
          uVar16 = uVar13;
        }
      } while ((int)uVar15 < (param_1->InactiveParents).NumBits);
    }
  }
  else {
    uVar15 = 0;
    uVar16 = 1;
    if (0 < (param_1->InactiveParents).NumBits) {
      do {
        uVar13 = 0;
        if ((int)uVar15 < (this->Parents).ArrayNum) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar13 = *(uint *)((this->Parents).AllocatorInstance.Data +
                          (longlong)(int)uVar15 * 0x30 + 0x20);
        if (uVar13 == 0xe) {
          psVar11 = TMapBase<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
                    ::Find((TMapBase<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
                            *)&(pFVar1->ActiveState).DynamicConditions,(ushort)uVar15);
          if (psVar11 == (short *)0x0) {
            uVar13 = 0xe;
          }
          else {
            uVar13 = (uint)*psVar11;
          }
        }
        if ((((int)uVar13 < 0) || (0x10 < uVar13)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StaticBitArray.h"
                               ,0xaf,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar12 = (param_1->InactiveParents).AllocatorInstance.SecondaryData;
        if (FVar12 == (ForElementType<unsigned_int>)0x0) {
          FVar12 = (ForElementType<unsigned_int>)&param_1->InactiveParents;
        }
        uVar8 = *(uint *)((longlong)FVar12 + (longlong)iVar14 * 4);
        if ((*(ulonglong *)(local_50 + (ulonglong)(uVar13 >> 6) * 2) >> (uVar13 & 0x3f) & 1) == 0) {
          uVar8 = uVar16 | uVar8;
        }
        else {
          uVar8 = ~uVar16 & uVar8;
        }
        uVar13 = uVar16 * 2;
        *(uint *)((longlong)FVar12 + (longlong)iVar14 * 4) = uVar8;
        uVar15 = uVar15 + 1;
        iVar5 = iVar14 + 1;
        if (uVar13 != 0) {
          iVar5 = iVar14;
        }
        iVar14 = iVar5;
        uVar16 = 1;
        if (uVar13 != 0) {
          uVar16 = uVar13;
        }
      } while ((int)uVar15 < (param_1->InactiveParents).NumBits);
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(local_80,CycleScopeEnd);
  }
  return;
}

// ReceiveCustomDeltaProperty @ 1484e8a90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FRepLayout::ReceiveCustomDeltaProperty
          (FRepLayout *this,FReceivingRepState *param_1,FNetDeltaSerializeInfo *param_2,
          FStructProperty *param_3)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UScriptStruct *this_00;
  FScriptContainerElement *pFVar4;
  FBitReader *pFVar5;
  code *pcVar6;
  uchar uVar7;
  undefined1 uVar8;
  ushort uVar9;
  uint uVar10;
  FString *pFVar11;
  uint uVar12;
  void *pvVar13;
  bool bVar14;
  uint local_res18 [2];
  ICppStructOps *local_res20;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  uVar10 = UNetConnection::GetNetworkCustomVersion
                     (param_2->Connection,&FEngineNetworkCustomVersion::Guid);
  if (uVar10 < 0xb) {
    bVar14 = false;
  }
  else {
    uVar7 = FBitReader::ReadBit(param_2->Reader);
    bVar14 = uVar7 != '\0';
  }
  param_2->bSupportsFastArrayDeltaStructSerialization = bVar14;
  iVar2 = (int)param_3->_padding_;
  local_res18[0] = 0;
  if (iVar2 != 1) {
    if ((iVar2 < 2) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Property->ArrayDim >= 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                            ,0x11fd,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    (**(code **)(param_2->Reader->_padding_ + 0x1a0))(param_2->Reader,local_res18);
    if ((uint)param_3->_padding_ <= local_res18[0]) {
      if ((byte)LogRep._0_1_ < 2) {
        return false;
      }
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)param_2->Object,&local_a8,(UObject *)0x0,None);
      bVar14 = IsThisNotNull(param_3,"FField::GetName");
      if (bVar14) {
        ::FName::ToString((FName *)&param_3->_padding_,&local_b8);
      }
      else {
        ::FString::FString(&local_b8,L"None");
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
      local_68.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        local_68.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      }
      goto LAB_1484e8bee;
    }
  }
  uVar12 = (ushort)param_3->_padding_ + local_res18[0];
  uVar10 = 0;
  if ((int)uVar12 < (this->Parents).ArrayNum) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pFVar3 = (this->Parents).AllocatorInstance.Data;
  if (((byte)pFVar3[(longlong)(int)uVar12 * 0x30 + 0x2c] & 8) == 0) {
    if ((byte)LogNet._0_1_ < 2) {
      return false;
    }
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)param_2->Object,&local_88,(UObject *)0x0,None);
    ::FName::ToString((FName *)(pFVar3 + (longlong)(int)uVar12 * 0x30 + 8),&local_98);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    local_68.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
      local_68.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    }
  }
  else {
    this_00 = (param_3->Struct).field0_0x0.DebugPtr;
    local_res20 = UScriptStruct::GetCppStructOps(this_00);
    if ((local_res20 == (ICppStructOps *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("CppStructOps",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                            ,0x1215,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar11 = ::FName::ToString((FName *)(pFVar3 + (longlong)(int)uVar12 * 0x30 + 8),&local_78);
    pFVar1 = &param_2->DebugName;
    if (pFVar1 != pFVar11) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->DebugName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
      (param_2->DebugName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    param_2->Struct = (UStruct *)this_00;
    uVar9 = FLifetimeCustomDeltaState::GetCustomDeltaIndexFromPropertyRepIndex
                      ((this->LifetimeCustomPropertyState).Ptr,
                       (short)local_res18[0] + (short)param_3->_padding_);
    param_2->CustomDeltaIndex = uVar9;
    pvVar13 = &param_2->Object->field_0x0 + *(int *)(pFVar3 + (longlong)(int)uVar12 * 0x30 + 0x14);
    param_2->Data = pvVar13;
    bVar14 = UScriptStruct::ICppStructOps::NetDeltaSerialize(local_res20,param_2,pvVar13);
    if (!bVar14) {
      return false;
    }
    pFVar5 = param_2->Reader;
    if ((pFVar5->_padding_ & 0x200) == 0) {
      if (pFVar5->Num == pFVar5->Pos) {
        if (*(int *)(pFVar3 + (longlong)(int)uVar12 * 0x30 + 0x28) != -1) {
          UE_RepLayout_Private::QueueRepNotifyForCustomDeltaProperty
                    (param_1,param_2,(FProperty *)param_3,local_res18[0]);
        }
        return true;
      }
      if ((byte)LogNet._0_1_ < 2) {
        return false;
      }
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)param_2->Object,&local_58,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
    else {
      if ((byte)LogNet._0_1_ < 2) {
        return false;
      }
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)param_2->Object,&local_68,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
LAB_1484e8bee:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return false;
}

// ReceiveProperties @ 1484e8ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FRepLayout::ReceiveProperties
          (FRepLayout *this,UActorChannel *param_1,UClass *param_2,FReceivingRepState *param_3,
          UObject *param_4,FNetBitReader *param_5,bool *param_6,bool *param_7,
          EReceivePropertiesFlags param_8)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  uchar uVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  FNetTraceCollector *pFVar11;
  FNetBitReader *pFVar12;
  undefined1 auStackY_1a8 [32];
  uint local_158;
  undefined4 local_154;
  uint local_150;
  FNetBitReader *local_148;
  FNetTraceCollector *local_140;
  bool *local_138;
  UActorChannel *local_130;
  FReceivePropertiesStackParams local_128;
  FString local_f8;
  undefined1 local_e8 [48];
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ForElementType<FSetElementId> local_80;
  int local_70 [2];
  UObject *local_68;
  FNetTraceCollector *local_60;
  ushort local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_148 = param_5;
  local_138 = param_7;
  local_130 = param_1;
  if ((param_2 != (UClass *)this->Owner) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObjectClass == Owner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                         ,0xed7,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  local_150 = 0xffffffff;
  local_140 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    local_140 = *(FNetTraceCollector **)(param_1->_padding_ + 0x1ec0);
  }
  if (local_140 != (FNetTraceCollector *)0x0) {
    local_150 = FNetTrace::BeginPacketContentEvent(local_140,NameId,(uint)local_148->_padding_);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      Properties = UE::Net::CreatePersistentNetDebugName(L"Properties",10);
      _Init_thread_footer(&::_TSS0);
    }
    uVar8 = FNetTrace::TraceName(Properties);
    FVar10 = (local_140->Events).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar10 = (ForElementType<FNetTracePacketContentEvent>)&local_140->Events;
    }
    *(uint *)((longlong)FVar10 + (ulonglong)local_150 * 0x10) = uVar8;
  }
  pFVar12 = local_148;
  if (((UNetConnection *)param_1->_padding_)->bInternalAck != 0) {
    bVar5 = ReceiveProperties_BackwardsCompatible
                      (this,(UNetConnection *)param_1->_padding_,param_3,
                       (TRepDataBufferBase<0,unsigned_char>)param_4,local_148,param_6,
                       (bool)((undefined1)param_8 & RepNotifies),param_7,param_4);
    goto LAB_1484e942d;
  }
  uVar7 = FBitReader::ReadBit((FBitReader *)local_148);
  if (6 < (byte)LogRepProperties._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this->Owner,&local_f8,(UObject *)0x0);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRepProperties);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  *param_6 = false;
  if ((((this->Flags & NoReplicatedProperties) != None) || ((this->Parents).ArrayNum == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                         ,0xef0,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  local_e8._32_8_ = &this->Parents;
  if (((param_8 & SkipRoleSwap) != None) || (local_e8[1] = false, (this->Flags & IsActor) == None))
  {
    local_e8[1] = true;
  }
  local_e8._24_8_ = local_138;
  local_e8._40_8_ = &this->Cmds;
  local_e8._8_8_ = local_148;
  local_e8._16_8_ = param_6;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_b8._8_8_ = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_80.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_70[0] = 0;
  local_e8[0] = uVar7 != '\0';
  if ((TMap<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>_>
       *)local_b8 != &this->NetSerializeLayouts) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&local_80,local_70,
               (ForElementType<FSetElementId> *)&(this->NetSerializeLayouts).field_0x38,
               *(int *)&(this->NetSerializeLayouts).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_b8,
                (TSparseArray<TSparseSetElement<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->NetSerializeLayouts);
  }
  uVar4 = local_e8._8_8_;
  local_68 = param_4;
  local_128.ObjectData.Data = (uchar *)param_4;
  local_128.CmdStart = 0;
  local_60 = *(FNetTraceCollector **)(local_130->_padding_ + 0x1ec0);
  local_128.ShadowData.Data = (uchar *)(param_3->StaticBuffer).Buffer.AllocatorInstance.Data;
  local_128.GuidReferences = &param_3->GuidReferencesMap;
  local_128.CmdEnd = (this->Cmds).ArrayNum + -1;
  local_58 = 0;
  if ((param_8 & RepNotifies) == None) {
    local_128.RepNotifies = (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)0x0;
  }
  else {
    local_128.RepNotifies = &param_3->RepNotifies;
  }
  local_128.ArrayElementOffset = 0;
  pFVar11 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar11 = local_60;
  }
  local_128.CurrentHandle = 0;
  local_128.bShadowDataCopied = false;
  uVar8 = 0xffffffff;
  if (pFVar11 != (FNetTraceCollector *)0x0) {
    uVar8 = FNetTrace::BeginPacketContentEvent
                      (pFVar11,NameId,(uint)*(longlong *)(local_e8._8_8_ + 0xa8));
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      PropertyHandle = UE::Net::CreatePersistentNetDebugName(L"PropertyHandle",0xe);
      _Init_thread_footer(&::_TSS0);
    }
    uVar9 = FNetTrace::TraceName(PropertyHandle);
    FVar10 = (pFVar11->Events).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar11->Events;
    }
    *(uint *)((longlong)FVar10 + (ulonglong)uVar8 * 0x10) = uVar9;
  }
  local_154 = 0;
  (**(code **)(*(longlong *)local_e8._8_8_ + 0x1a0))(local_e8._8_8_,&local_154);
  if (6 < (byte)LogRepProperties._0_1_) {
    UE::Logging::Private::BasicLog<7>
              ((FStaticBasicLogRecord *)&PTR_u_ReadPropertyHan_151ae7cb8,
               (FLogCategoryBase *)&LogRepProperties);
  }
  if (local_e8[0] != false) {
    local_158 = 0xabadf00d;
    plVar1 = *(longlong **)(local_e8._8_8_ + 8);
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((*(longlong *)(local_e8._8_8_ + 0x28) & 0x10000) == 0) {
        (**(code **)(*(longlong *)local_e8._8_8_ + 0x188))(local_e8._8_8_,&local_158,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)local_e8._8_8_,&local_158);
      }
    }
    else {
      local_158 = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    if ((local_158 != 0xabadf00d) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Checksum == 0xABADF00D",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                           ,0x365,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  local_58 = (ushort)local_154;
  if (uVar8 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar11,uVar8,(uint)*(longlong *)(uVar4 + 0xa8));
  }
  bVar5 = ReceiveProperties_r((FReceivePropertiesSharedParams *)local_e8,&local_128);
  if (bVar5) {
    if (local_58 != 0) {
      if (1 < (byte)LogRep._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
      }
      goto LAB_1484e9391;
    }
    bVar5 = true;
  }
  else {
LAB_1484e9391:
    bVar5 = false;
  }
  local_70[0] = 0;
  if (local_80.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_80.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b8,0,local_b8._8_4_);
  iVar3 = SUB84(local_b8._8_8_,4);
  local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
  }
  local_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  pFVar12 = local_148;
  if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
    pFVar12 = local_148;
  }
LAB_1484e942d:
  if (local_150 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(local_140,local_150,(uint)pFVar12->_padding_);
  }
  return bVar5;
}

// ReceivePropertiesForRPC @ 1484e9510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRepLayout::ReceivePropertiesForRPC
          (FRepLayout *this,UObject *param_1,UFunction *param_2,UActorChannel *param_3,
          FNetBitReader *param_4,TRepDataBufferBase<0,unsigned_char> param_5,
          TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *param_6)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  longlong *plVar4;
  UPackageMap *pUVar5;
  longlong lVar6;
  void *pvVar7;
  code *pcVar8;
  UObject *pUVar9;
  UActorChannel *pUVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  longlong lVar21;
  bool local_res8 [8];
  UObject *local_res10;
  UFunction *local_res18;
  UActorChannel *local_res20;
  bool local_108;
  bool local_107 [7];
  longlong local_100;
  int *local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  FName local_c8;
  longlong local_c0;
  FNetTraceCollector *local_b8;
  FName local_b0;
  FName local_a8;
  TSharedPtr<FNetFieldExportGroup,1> local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((param_2 != (UFunction *)this->Owner) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Function == Owner",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                          ,0x1bb0,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((this->Flags & NoReplicatedProperties) == None) &&
     (iVar3 = (this->Parents).ArrayNum, iVar3 != 0)) {
    uVar14 = 0;
    uVar12 = 0;
    uVar16 = uVar14;
    uVar17 = uVar14;
    if (0 < iVar3) {
      do {
        uVar15 = (uint)uVar16;
        uVar18 = ~uVar15 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar15 < (this->Parents).ArrayNum) {
          uVar13 = uVar18;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(int *)((this->Parents).AllocatorInstance.Data + uVar17 + 0x10) == 0) {
          uVar13 = 0;
          if ((int)uVar15 < (this->Parents).ArrayNum) {
            uVar13 = uVar18;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (((byte)(this->Parents).AllocatorInstance.Data[uVar17 + 0x2c] & 0x40) == 0) {
            uVar13 = uVar12;
            if ((int)uVar15 < (this->Parents).ArrayNum) {
              uVar13 = uVar18;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            plVar4 = *(longlong **)((this->Parents).AllocatorInstance.Data + uVar17);
            uVar13 = uVar12;
            if ((int)uVar15 < (this->Parents).ArrayNum) {
              uVar13 = uVar18;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((*(uint *)(plVar4 + 7) >> 9 & 1) == 0) {
              (**(code **)(*plVar4 + 0x150))(plVar4);
            }
            else {
              memset(param_5.Data + *(int *)((this->Parents).AllocatorInstance.Data + uVar17 + 0x14)
                     ,0,(longlong)*(int *)((longlong)plVar4 + 0x34) * (longlong)(int)plVar4[6]);
            }
          }
        }
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 0x30;
      } while ((int)(uVar15 + 1) < (this->Parents).ArrayNum);
    }
    pUVar10 = local_res20;
    piVar20 = &(this->Parents).ArrayNum;
    local_f8 = piVar20;
    if ((*(byte *)(local_res20->_padding_ + 0xfc) & 1) == 0) {
      UPackageMap::ResetTrackedGuids(param_4->PackageMap,true);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`FRepLayout::ReceivePropertiesForRPC'::__l46::_dynamic_atexit_destructor_for__Empty__
              );
        _Init_thread_footer(&::_TSS0);
      }
      local_b8 = *(FNetTraceCollector **)(pUVar10->_padding_ + 0x1ec0);
      if (0 < *piVar20) {
        local_100 = 0;
        do {
          lVar21 = local_100;
          uVar18 = (uint)uVar14;
          uVar15 = ~uVar18 >> 0x1f;
          uVar13 = uVar12;
          if ((int)uVar18 < (this->Parents).ArrayNum) {
            uVar13 = uVar15;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)((this->Parents).AllocatorInstance.Data + lVar21);
          if ((lVar6 == 0) || ((*(uint *)(*(longlong *)(lVar6 + 8) + 0x18) >> 0x11 & 1) == 0)) {
            if ((param_4->_padding_ & 0x200) == 0) {
              local_c0 = param_4->_padding_;
              if (local_c0 < param_4->_padding_) {
                uVar19 = (uint)(local_c0 >> 3);
                uVar13 = uVar12;
                if ((int)uVar19 < (int)param_4->_padding_) {
                  uVar13 = ~uVar19 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                bVar1 = *(byte *)((longlong)(int)uVar19 + param_4->_padding_);
                param_4->_padding_ = param_4->_padding_ + 1;
                lVar21 = local_100;
                if (('\x01' << ((byte)local_c0 & 7) & bVar1) != 0) goto LAB_1484e9ad2;
              }
              else {
                FBitReader::SetOverflowed((FBitReader *)param_4,1);
              }
            }
          }
          else {
LAB_1484e9ad2:
            local_108 = false;
            uVar13 = uVar12;
            if ((int)uVar18 < (this->Parents).ArrayNum) {
              uVar13 = uVar15;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar2 = *(ushort *)((this->Parents).AllocatorInstance.Data + lVar21 + 0x1e);
            uVar13 = uVar12;
            if ((int)uVar18 < (this->Parents).ArrayNum) {
              uVar13 = uVar15;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            SerializeProperties_r
                      (this,(FBitArchive *)param_4,param_4->PackageMap,
                       (uint)*(ushort *)((this->Parents).AllocatorInstance.Data + local_100 + 0x1c),
                       (uint)uVar2,param_5,&local_108,0,0,&::Empty,local_b8,local_res10);
            if ((param_4->_padding_ & 0x200) != 0) {
              return;
            }
            if ((local_108 != false) && (4 < (byte)LogRepTraffic._0_1_)) {
              uVar13 = uVar12;
              if ((int)uVar18 < (this->Parents).ArrayNum) {
                uVar13 = uVar15;
              }
              if ((uVar13 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pvVar7 = *(void **)((this->Parents).AllocatorInstance.Data + local_100);
              bVar11 = IsThisNotNull(pvVar7,"FField::GetName");
              if (bVar11) {
                ::FName::ToString((FName *)((longlong)pvVar7 + 0x20),&local_e0);
              }
              else {
                ::FString::FString(&local_e0,L"None");
              }
              local_b0 = (FName)local_res18->_padding_;
              ::FName::ToString(&local_b0,local_60);
              local_a8.ComparisonIndex.Value = *(uint *)&local_res10->field_0x18;
              local_a8.Number = *(uint *)&local_res10->field_0x1c;
              ::FName::ToString(&local_a8,&local_70);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRepTraffic);
              if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_70.Data.AllocatorInstance.Data);
              }
              if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
              }
              if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e0.Data.AllocatorInstance.Data);
              }
            }
          }
          local_100 = local_100 + 0x30;
          uVar14 = (ulonglong)(uVar18 + 1);
        } while ((int)(uVar18 + 1) < *local_f8);
      }
      pUVar5 = param_4->PackageMap;
      if (0 < *(int *)&(pUVar5->TrackedUnmappedNetGuids).Elements.field_0x8 -
              *(int *)&(pUVar5->TrackedUnmappedNetGuids).Elements.field_0x34) {
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
                  (param_6,&pUVar5->TrackedUnmappedNetGuids);
      }
      UPackageMap::ResetTrackedGuids(param_4->PackageMap,false);
    }
    else {
      local_107[0] = false;
      UPackageMap::ResetTrackedGuids(param_4->PackageMap,true);
      lVar21 = pUVar10->_padding_;
      FBitReader::ReadBit((FBitReader *)param_4);
      local_res8[0] = false;
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this->Owner,&local_f0,(UObject *)0x0);
      UPackageMapClient::GetNetFieldExportGroup
                (*(UPackageMapClient **)(lVar21 + 0x68),&local_a0,&local_f0);
      if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
        UE::Logging::Private::BasicLog<7>
                  (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
      }
      pUVar9 = local_res10;
      ReceiveProperties_BackwardsCompatible_r
                (this,(FReceivingRepState *)0x0,local_a0.Object,param_4,0,(this->Cmds).ArrayNum + -1
                 ,(TRepDataBufferBase<1,unsigned_char>)0x0,param_5,param_5,
                 (TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                  *)0x0,local_res8,local_107,local_res10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.SharedReferenceCount.ReferenceController);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      pUVar5 = param_4->PackageMap;
      if (0 < *(int *)&(pUVar5->TrackedUnmappedNetGuids).Elements.field_0x8 -
              *(int *)&(pUVar5->TrackedUnmappedNetGuids).Elements.field_0x34) {
        local_res8[0] = true;
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
                  (param_6,&pUVar5->TrackedUnmappedNetGuids);
      }
      UPackageMap::ResetTrackedGuids(param_4->PackageMap,false);
      if ((local_res8[0] != false) && (4 < (byte)LogRepTraffic._0_1_)) {
        local_d0 = (FName)local_res18->_padding_;
        ::FName::ToString(&local_d0,&local_80);
        local_c8.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
        local_c8.Number = *(uint *)&pUVar9->field_0x1c;
        ::FName::ToString(&local_c8,&local_90);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRepTraffic);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// ReceiveProperties_BackwardsCompatible @ 1484e9de0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FRepLayout::ReceiveProperties_BackwardsCompatible
          (FRepLayout *this,UNetConnection *param_1,FReceivingRepState *param_2,
          TRepDataBufferBase<0,unsigned_char> param_3,FNetBitReader *param_4,bool *param_5,
          bool param_6,bool *param_7,UObject *param_8)

{
  bool bVar1;
  TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
  *pTVar2;
  TRepDataBufferBase<1,unsigned_char> TVar3;
  FString local_28;
  TSharedPtr<FNetFieldExportGroup,1> local_18;
  
  FBitReader::ReadBit((FBitReader *)param_4);
  *param_5 = false;
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this->Owner,&local_28,(UObject *)0x0);
  UPackageMapClient::GetNetFieldExportGroup
            ((UPackageMapClient *)(param_1->PackageMap).field0_0x0.DebugPtr,&local_18,&local_28);
  TVar3.Data = (uchar *)0x0;
  if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat)
    ;
  }
  pTVar2 = &param_2->GuidReferencesMap;
  if (param_2 == (FReceivingRepState *)0x0) {
    pTVar2 = (TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
              *)TVar3.Data;
  }
  if ((param_6) && (param_2 != (FReceivingRepState *)0x0)) {
    TVar3.Data = (uchar *)(param_2->StaticBuffer).Buffer.AllocatorInstance.Data;
  }
  bVar1 = ReceiveProperties_BackwardsCompatible_r
                    (this,param_2,local_18.Object,param_4,0,(this->Cmds).ArrayNum + -1,TVar3,param_3
                     ,param_3,pTVar2,param_5,param_7,param_8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// ReceiveProperties_BackwardsCompatible_r @ 1484e9f50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRepLayout::ReceiveProperties_BackwardsCompatible_r
          (FRepLayout *this,FReceivingRepState *param_1,FNetFieldExportGroup *param_2,
          FNetBitReader *param_3,int param_4,int param_5,TRepDataBufferBase<1,unsigned_char> param_6
          ,TRepDataBufferBase<0,unsigned_char> param_7,TRepDataBufferBase<0,unsigned_char> param_8,
          TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
          *param_9,bool *param_10,bool *param_11,UObject *param_12)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *pTVar4;
  TRepDataBufferBase<0,unsigned_char> TVar5;
  TRepDataBufferBase<1,unsigned_char> TVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  FRepLayoutCmd *pFVar15;
  TRepDataBufferBase<1,unsigned_char> TVar16;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_> *pTVar17;
  uint local_3c8;
  int local_3c4;
  bool local_3c0 [4];
  uint local_3bc;
  uint local_3b8;
  int local_3b4;
  uint local_3b0 [2];
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *local_3a8;
  FRepLayoutCmd *local_3a0;
  uint local_398 [2];
  TRepDataBufferBase<0,unsigned_char> local_390;
  TRepDataBufferBase<1,unsigned_char> local_388;
  TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
  *local_380;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_> *local_378;
  FName local_370;
  FName local_368;
  FName local_360;
  FName local_358;
  FName local_350;
  FName local_348;
  FName local_340;
  FName local_338;
  FName local_330;
  FName local_328;
  FName local_320;
  FName local_318;
  FName local_310;
  FName local_308;
  FName local_300;
  FName local_2f8;
  FName local_2f0;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FNetBitReader local_108;
  
  if (param_2 == (FNetFieldExportGroup *)0x0) {
    local_3b4 = 0;
    (**(code **)(param_3->_padding_ + 0x1a0))(param_3);
    if ((param_3->_padding_ & 0x200) == 0) {
      if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
        UE::Logging::Private::BasicLog<7>
                  ((FStaticBasicLogRecord *)&PTR_u_ReceiveProperti_151ae86b8,
                   (FLogCategoryBase *)&LogRepPropertiesBackCompat);
      }
      if (local_3b4 == 0) {
        return true;
      }
      if ((2 < (byte)LogRep._0_1_) && (bVar7 = FApp::IsUnattended(), !bVar7)) {
        local_368 = (FName)this->Owner->_padding_;
        ::FName::ToString(&local_368,&local_2d8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
      }
      FArchiveState::SetError((FArchiveState *)param_3);
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3278201614795542395>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                         ,0xf7b,"false");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
    }
    else if (2 < (byte)LogRep._0_1_) {
      local_370 = (FName)this->Owner->_padding_;
      ::FName::ToString(&local_370,&local_2e8);
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_ReceiveProperti_151ae8600,
                 (FLogCategoryBase *)&LogRep);
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
        return false;
      }
    }
    return false;
  }
  FNetBitReader::FNetBitReader(&local_108,(UPackageMap *)0x0,(uchar *)0x0,0);
  local_108.PackageMap = param_3->PackageMap;
LAB_1484ea130:
  do {
    local_3c8 = 0;
    (**(code **)(param_3->_padding_ + 0x1a0))(param_3,&local_3c8);
    if ((param_3->_padding_ & 0x200) != 0) {
      if ((byte)LogRep._0_1_ < 3) goto LAB_1484eb67b;
      local_2f0 = (FName)this->Owner->_padding_;
      ::FName::ToString(&local_2f0,&local_1e8);
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_ReceiveProperti_151ae8600,
                 (FLogCategoryBase *)&LogRep);
      local_1f8.Data.AllocatorInstance.Data = local_1e8.Data.AllocatorInstance.Data;
      goto LAB_1484eb671;
    }
    if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
      UE::Logging::Private::BasicLog<7>
                ((FStaticBasicLogRecord *)&PTR_u_ReceiveProperti_151ae86b8,
                 (FLogCategoryBase *)&LogRepPropertiesBackCompat);
    }
    if (local_3c8 == 0) {
      bVar7 = true;
      goto LAB_1484eb67d;
    }
    uVar11 = (param_2->NetFieldExports).ArrayNum;
    uVar13 = local_3c8 - 1;
    local_3c8 = uVar13;
    if (uVar11 <= uVar13) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3278201614795542424>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                         ,0xf98,
                         "NetFieldExportHandle < (uint32)NetFieldExportGroup->NetFieldExports.Num()"
                        );
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      if ((byte)LogRep._0_1_ < 3) goto LAB_1484eb67b;
      local_2f8 = (FName)this->Owner->_padding_;
      ::FName::ToString(&local_2f8,&local_1f8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
      goto LAB_1484eb671;
    }
    uVar9 = 0;
    if ((int)uVar13 < (int)uVar11) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    local_3c4 = *(int *)((param_2->NetFieldExports).AllocatorInstance.Data +
                        (longlong)(int)uVar13 * 0x28 + 0x14);
    uVar11 = 0;
    if (local_3c4 == 0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3278201614795542432>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                         ,4000,"Checksum != 0");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      if ((byte)LogRep._0_1_ < 3) goto LAB_1484eb67b;
      lVar14 = (longlong)(int)local_3c8;
      if ((int)local_3c8 < (param_2->NetFieldExports).ArrayNum) {
        uVar11 = ~local_3c8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      ::FName::ToString((FName *)((param_2->NetFieldExports).AllocatorInstance.Data +
                                 (lVar14 * 5 + 3) * 8),&local_118);
      local_300 = (FName)this->Owner->_padding_;
      ::FName::ToString(&local_300,&local_208);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
      local_1f8.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
        local_1f8.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
      }
      goto LAB_1484eb671;
    }
    local_3b0[0] = 0;
    (**(code **)(param_3->_padding_ + 0x1a0))(param_3,local_3b0);
    if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
    }
    if ((param_3->_padding_ & 0x200) != 0) {
      if ((byte)LogRep._0_1_ < 3) goto LAB_1484eb67b;
      lVar14 = (longlong)(int)local_3c8;
      if ((int)local_3c8 < (param_2->NetFieldExports).ArrayNum) {
        uVar11 = ~local_3c8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      ::FName::ToString((FName *)((param_2->NetFieldExports).AllocatorInstance.Data +
                                 (lVar14 * 5 + 3) * 8),&local_128);
      local_308 = (FName)this->Owner->_padding_;
      ::FName::ToString(&local_308,&local_218);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
      local_1f8.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
        local_1f8.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
      }
      goto LAB_1484eb671;
    }
    FBitReader::ResetData((FBitReader *)&local_108,(FBitReader *)param_3,(ulonglong)local_3b0[0],0);
    if ((param_3->_padding_ & 0x200) != 0) {
      if ((byte)LogRep._0_1_ < 3) goto LAB_1484eb67b;
      lVar14 = (longlong)(int)local_3c8;
      if ((int)local_3c8 < (param_2->NetFieldExports).ArrayNum) {
        uVar11 = ~local_3c8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      ::FName::ToString((FName *)((param_2->NetFieldExports).AllocatorInstance.Data +
                                 (lVar14 * 5 + 3) * 8),&local_138);
      local_310 = (FName)this->Owner->_padding_;
      ::FName::ToString(&local_310,&local_228);
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_ReceiveProperti_151ae8c50,
                 (FLogCategoryBase *)&LogRep);
      local_1f8.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
        local_1f8.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
      }
      goto LAB_1484eb671;
    }
    lVar14 = (longlong)(int)local_3c8;
    uVar13 = 0;
    if ((int)local_3c8 < (param_2->NetFieldExports).ArrayNum) {
      uVar13 = ~local_3c8 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    if ((param_2->NetFieldExports).AllocatorInstance.Data[lVar14 * 0x28 + 0x23] ==
        (FScriptContainerElement)0x0) {
      uVar9 = 0;
      pTVar4 = &this->Cmds;
      for (uVar13 = param_4; local_3a8 = pTVar4, (int)uVar13 < param_5; uVar13 = uVar13 + 1) {
        uVar10 = uVar9;
        if ((int)uVar13 < pTVar4->ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        pFVar2 = (pTVar4->AllocatorInstance).Data;
        if ((pFVar2[(longlong)(int)uVar13 * 0x20 + 0x1c] == (FScriptContainerElement)0x1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Cmd.Type != ERepLayoutCmdType::Return",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                               ,0xf43,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        if (*(int *)(pFVar2 + (longlong)(int)uVar13 * 0x20 + 0x18) == local_3c4) {
          if (uVar13 != 0xffffffff) {
            uVar10 = uVar9;
            if ((int)uVar13 < (this->Cmds).ArrayNum) {
              uVar10 = ~uVar13 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            pFVar15 = (FRepLayoutCmd *)
                      ((local_3a8->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x20);
            local_3a0 = pFVar15;
            if (pFVar15->Type == DynamicArray) {
              local_3b8 = 0;
              FBitReader::SerializeIntPacked((FBitReader *)&local_108,&local_3b8);
              if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
                UE::Logging::Private::BasicLog<7>
                          (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
              }
              if ((local_108._padding_._1_1_ & 2) != 0) {
                if ((byte)LogRep._0_1_ < 3) goto LAB_1484eb67b;
                lVar14 = (longlong)(int)local_3c8;
                if ((int)local_3c8 < (param_2->NetFieldExports).ArrayNum) {
                  uVar11 = ~local_3c8 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  uVar8 = (*pcVar3)();
                  return (bool)uVar8;
                }
                ::FName::ToString((FName *)((param_2->NetFieldExports).AllocatorInstance.Data +
                                           (lVar14 * 5 + 3) * 8),&local_168);
                local_328 = (FName)this->Owner->_padding_;
                ::FName::ToString(&local_328,&local_258);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
                local_1f8.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
                if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_258.Data.AllocatorInstance.Data);
                  local_1f8.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
                }
                goto LAB_1484eb671;
              }
              if (0xffff < local_3b8) {
                if ((byte)LogRep._0_1_ < 3) goto LAB_1484eb67b;
                lVar14 = (longlong)(int)local_3c8;
                if ((int)local_3c8 < (param_2->NetFieldExports).ArrayNum) {
                  uVar11 = ~local_3c8 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  uVar8 = (*pcVar3)();
                  return (bool)uVar8;
                }
                ::FName::ToString((FName *)((param_2->NetFieldExports).AllocatorInstance.Data +
                                           (lVar14 * 5 + 3) * 8),&local_178);
                local_330 = (FName)this->Owner->_padding_;
                ::FName::ToString(&local_330,&local_268);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
                local_1f8.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
                if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_268.Data.AllocatorInstance.Data);
                  local_1f8.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
                }
                goto LAB_1484eb671;
              }
              iVar12 = pFVar15->Offset;
              local_3c0[0] = false;
              local_380 = (TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                           *)(param_8.Data + iVar12);
              local_390.Data = param_8.Data;
              local_388.Data = param_6.Data;
              if (param_6.Data == (uchar *)0x0) {
                local_3a8 = (TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *)0x0;
LAB_1484ea61b:
                local_378 = (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)0x0;
              }
              else {
                local_3a8 = (TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *)
                            (param_6.Data + local_3a0->ShadowOffset);
                if (param_1 == (FReceivingRepState *)0x0) goto LAB_1484ea61b;
                local_378 = &param_1->RepNotifies;
              }
              uVar1 = local_3a0->ParentIndex;
              if (((this->Parents).ArrayNum <= (int)(uint)uVar1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              local_380 = PrepReceivedArray(local_3b8,(FScriptArray *)local_3a8,
                                            (FScriptArray *)local_380,param_9,
                                            (iVar12 - (int)param_7.Data) + (int)param_8.Data,
                                            (FRepParentCmd *)
                                            ((this->Parents).AllocatorInstance.Data +
                                            (ulonglong)uVar1 * 0x30),local_3a0,uVar13,&local_388,
                                            &local_390,local_378,local_3c0,local_108.PackageMap);
              TVar6.Data = local_388.Data;
              TVar5.Data = local_390.Data;
              goto LAB_1484ea6e0;
            }
            if ((param_6.Data == (uchar *)0x0) ||
               (pTVar17 = &param_1->RepNotifies, param_1 == (FReceivingRepState *)0x0)) {
              pTVar17 = (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)0x0;
            }
            bVar7 = ReceivePropertyHelper
                              (&local_108,param_9,(int)param_8.Data - (int)param_7.Data,param_6,
                               param_8,pTVar17,false,&this->Parents,local_3a8,uVar13,false,param_11,
                               (bool)(~this->Flags & 1),&this->NetSerializeLayouts,param_12);
            if (bVar7) {
              *param_10 = true;
            }
            if (local_108._padding_ == local_108._padding_) {
              if ((local_108._padding_._1_1_ & 2) == 0) goto LAB_1484ea130;
              if ((byte)LogRep._0_1_ < 3) goto LAB_1484eb67b;
              lVar14 = (longlong)(int)local_3c8;
              if ((int)local_3c8 < (param_2->NetFieldExports).ArrayNum) {
                uVar11 = ~local_3c8 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              ::FName::ToString((FName *)((param_2->NetFieldExports).AllocatorInstance.Data +
                                         (lVar14 * 5 + 3) * 8),&local_158);
              local_320 = (FName)this->Owner->_padding_;
              ::FName::ToString(&local_320,&local_248);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
              local_1f8.Data.AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
              if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_248.Data.AllocatorInstance.Data);
                local_1f8.Data.AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
              }
            }
            else {
              if ((byte)LogRep._0_1_ < 3) goto LAB_1484eb67b;
              lVar14 = (longlong)(int)local_3c8;
              if ((int)local_3c8 < (param_2->NetFieldExports).ArrayNum) {
                uVar11 = ~local_3c8 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              ::FName::ToString((FName *)((param_2->NetFieldExports).AllocatorInstance.Data +
                                         (lVar14 * 5 + 3) * 8),&local_148);
              local_318 = (FName)this->Owner->_padding_;
              ::FName::ToString(&local_318,&local_238);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
              local_1f8.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
              if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_238.Data.AllocatorInstance.Data);
                local_1f8.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
              }
            }
            goto LAB_1484eb671;
          }
          break;
        }
        if (pFVar2[(longlong)(int)uVar13 * 0x20 + 0x1c] == (FScriptContainerElement)0x0) {
          uVar13 = *(ushort *)(pFVar2 + (longlong)(int)uVar13 * 0x20 + 8) - 1;
        }
        pTVar4 = local_3a8;
      }
      if (2 < (byte)LogRep._0_1_) {
        lVar14 = (longlong)(int)local_3c8;
        uVar11 = uVar9;
        if ((int)local_3c8 < (param_2->NetFieldExports).ArrayNum) {
          uVar11 = ~local_3c8 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        ::FName::ToString((FName *)((param_2->NetFieldExports).AllocatorInstance.Data +
                                   (lVar14 * 5 + 3) * 8),&local_1d8);
        local_360 = (FName)this->Owner->_padding_;
        ::FName::ToString(&local_360,&local_2c8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
        }
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
      }
      lVar14 = (longlong)(int)local_3c8;
      if ((int)local_3c8 < (param_2->NetFieldExports).ArrayNum) {
        uVar9 = ~local_3c8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      (param_2->NetFieldExports).AllocatorInstance.Data[lVar14 * 0x28 + 0x23] =
           (FScriptContainerElement)0x1;
    }
  } while( true );
LAB_1484ea6e0:
  local_3bc = 0;
  FBitReader::SerializeIntPacked((FBitReader *)&local_108,&local_3bc);
  if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat)
    ;
  }
  if ((local_108._padding_._1_1_ & 2) != 0) {
    if ((byte)LogRep._0_1_ < 3) goto LAB_1484eb67b;
    lVar14 = (longlong)(int)local_3c8;
    if ((int)local_3c8 < (param_2->NetFieldExports).ArrayNum) {
      uVar11 = ~local_3c8 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    ::FName::ToString((FName *)((param_2->NetFieldExports).AllocatorInstance.Data +
                               (lVar14 * 5 + 3) * 8),&local_188);
    local_338 = (FName)this->Owner->_padding_;
    ::FName::ToString(&local_338,&local_278);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
    local_1f8.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
      local_1f8.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
    }
    goto LAB_1484eb671;
  }
  if (local_3bc == 0) goto LAB_1484ea884;
  local_3bc = local_3bc - 1;
  if (local_3b8 <= local_3bc) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3278201614795542561>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                       ,0x1021,"Index < ArrayNum");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    if ((byte)LogRep._0_1_ < 3) goto LAB_1484eb67b;
    lVar14 = (longlong)(int)local_3c8;
    if ((int)local_3c8 < (param_2->NetFieldExports).ArrayNum) {
      uVar9 = ~local_3c8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    ::FName::ToString((FName *)((param_2->NetFieldExports).AllocatorInstance.Data +
                               (lVar14 * 5 + 3) * 8),&local_1b8);
    local_350 = (FName)this->Owner->_padding_;
    ::FName::ToString(&local_350,&local_2a8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
    local_1f8.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      local_1f8.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
    }
    goto LAB_1484eb671;
  }
  iVar12 = local_3a0->ElementSize * local_3bc;
  if (((TVar6.Data == (uchar *)0x0) ||
      (local_3a8 == (TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *)0x0)) ||
     (TVar16.Data = TVar6.Data + iVar12, (uint)local_3a8->ArrayNum <= local_3bc)) {
    TVar16.Data = (uchar *)(TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)0x0;
  }
  bVar7 = ReceiveProperties_BackwardsCompatible_r
                    (this,param_1,param_2,&local_108,uVar13 + 1,local_3a0->EndCmd - 1,TVar16,TVar5,
                     (TRepDataBufferBase<0,unsigned_char>)(TVar5.Data + iVar12),local_380,param_10,
                     param_11,param_12);
  if (!bVar7) goto LAB_1484eb67b;
  if ((local_108._padding_._1_1_ & 2) != 0) {
    if ((byte)LogRep._0_1_ < 3) goto LAB_1484eb67b;
    lVar14 = (longlong)(int)local_3c8;
    if ((int)local_3c8 < (param_2->NetFieldExports).ArrayNum) {
      uVar9 = ~local_3c8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    ::FName::ToString((FName *)((param_2->NetFieldExports).AllocatorInstance.Data +
                               (lVar14 * 5 + 3) * 8),&local_1c8);
    local_358 = (FName)this->Owner->_padding_;
    ::FName::ToString(&local_358,&local_2b8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
    local_1f8.Data.AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      local_1f8.Data.AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
    }
    goto LAB_1484eb671;
  }
  goto LAB_1484ea6e0;
LAB_1484ea884:
  if ((local_108._padding_ - local_108._padding_ == 8) &&
     (FBitReader::SerializeIntPacked((FBitReader *)&local_108,local_398), local_398[0] != 0)) {
    if ((byte)LogRep._0_1_ < 3) goto LAB_1484eb67b;
    lVar14 = (longlong)(int)local_3c8;
    if ((int)local_3c8 < (param_2->NetFieldExports).ArrayNum) {
      uVar9 = ~local_3c8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    ::FName::ToString((FName *)((param_2->NetFieldExports).AllocatorInstance.Data +
                               (lVar14 * 5 + 3) * 8),&local_1a8);
    local_348 = (FName)this->Owner->_padding_;
    ::FName::ToString(&local_348,&local_298);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
    local_1f8.Data.AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
      local_1f8.Data.AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    goto LAB_1484eb671;
  }
  if (local_108._padding_ != local_108._padding_) {
    if (2 < (byte)LogRep._0_1_) {
      lVar14 = (longlong)(int)local_3c8;
      if ((int)local_3c8 < (param_2->NetFieldExports).ArrayNum) {
        uVar9 = ~local_3c8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      ::FName::ToString((FName *)((param_2->NetFieldExports).AllocatorInstance.Data +
                                 (lVar14 * 5 + 3) * 8),&local_198);
      local_340 = (FName)this->Owner->_padding_;
      ::FName::ToString(&local_340,&local_288);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
      local_1f8.Data.AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
        local_1f8.Data.AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
      }
LAB_1484eb671:
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
    }
LAB_1484eb67b:
    bVar7 = false;
LAB_1484eb67d:
    FNetBitReader::~FNetBitReader(&local_108);
    return bVar7;
  }
  goto LAB_1484ea130;
}

// ReplicateProperties @ 1484f09c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FRepLayout::ReplicateProperties
          (FRepLayout *this,FSendingRepState *param_1,FRepChangelistState *param_2,
          TRepDataBufferBase<0,unsigned_char_const_> param_3,UClass *param_4,UActorChannel *param_5,
          FNetBitWriter *param_6,FReplicationFlags *param_7)

{
  int *piVar1;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FNetTokenExportContext *this_00;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropTime> FVar17;
  FNetBitWriter *pFVar18;
  FNetBitWriter *pFVar19;
  FName FVar20;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar21;
  uint uVar22;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_210;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_200;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_1f0;
  FNetTokenStore *local_1e0;
  FColor_u_0 local_1d8 [2];
  FRepChangedPropertyTracker *local_1d0;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_1b8;
  FName local_1a8;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_1a0;
  FName local_190;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_180;
  FString local_170;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_160;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_150;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_140;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_130;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_120;
  FName local_110;
  FRepHandleIterator *local_108;
  FChangelistIterator local_100;
  ForElementType<UE::Net::FNetToken> local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FRepHandleIterator local_d8;
  FName local_88 [2];
  TArrayView<UE::Net::FNetToken_const_,int> local_78;
  FNetTokenExportScope local_68;
  
  if (GUseDetailedScopeCounters) {
    FVar17 = StatPtr_STAT_NetReplicateDynamicPropTime;
    if (StatPtr_STAT_NetReplicateDynamicPropTime ==
        (FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropTime>)0x0) {
      pFVar16 = ::FName::FName(local_88,"STAT_NetReplicateDynamicPropTime");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetReplicateDynamicPropTime,
                          *pFVar16,L"Dynamic Property Rep Time","STATGROUP_Game","STATCAT_Advanced",
                          L"Game",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  else {
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropTime>)
             &TStatId::TStatId_NAME_None;
  }
  FVar20 = *(FName *)FVar17;
  bVar8 = false;
  bVar9 = false;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  bVar11 = false;
  bVar12 = false;
  if ((FVar20.ComparisonIndex.Value.Value == 0) && (FVar20.Number == 0)) {
LAB_1484f0b40:
    bVar9 = bVar12;
    bVar8 = bVar11;
    bVar11 = false;
    FVar20 = local_190;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1d8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1d8[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a8.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_1a8.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                   ,0x7bd);
        bVar8 = true;
        bVar9 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1484f0b40;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar11 = true;
  }
  if ((param_4 != (UClass *)this->Owner) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ObjectClass == Owner",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                          ,0x7bf,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return (bool)uVar13;
  }
  if (((this->Flags & NoReplicatedProperties) != None) || ((this->Parents).ArrayNum == 0)) {
    bVar12 = false;
    goto LAB_1484f1753;
  }
  local_1d0 = (param_1->RepChangedPropertyTracker).Object;
  cVar3 = *(char *)(param_5->_padding_ + 0x17c8);
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  if ((FReplicationFlags_u_0)(param_1->RepFlags).field0_0x0.Value !=
      (*(FReplicationFlags *)&(param_7->field0_0x0)._s_0).field0_0x0) {
    RebuildConditionalProperties(this,param_1,*(FReplicationFlags *)&(param_7->field0_0x0)._s_0);
    pTVar21 = &param_1->InactiveChangelist;
    local_1f0.AllocatorInstance.Data = (pTVar21->AllocatorInstance).Data;
    (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_1f0.ArrayNum = (param_1->InactiveChangelist).ArrayNum;
    local_1f0.ArrayMax = (param_1->InactiveChangelist).ArrayMax;
    (param_1->InactiveChangelist).ArrayNum = 0;
    (param_1->InactiveChangelist).ArrayMax = 0;
    local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_200.ArrayNum = 0;
    local_200.ArrayMax = 0;
    FilterChangeList(this,&local_1f0,&param_1->InactiveParents,&local_200,&local_1c8);
    if (cVar3 == '\0') {
      if (pTVar21 != &local_200) {
        pFVar6 = (pTVar21->AllocatorInstance).Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        (pTVar21->AllocatorInstance).Data = local_200.AllocatorInstance.Data;
        (param_1->InactiveChangelist).ArrayNum = local_200.ArrayNum;
        (param_1->InactiveChangelist).ArrayMax = local_200.ArrayMax;
        local_200.ArrayNum = 0;
        local_200.ArrayMax = 0;
        local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
    }
    else if (pTVar21 != &local_1f0) {
      pFVar6 = (pTVar21->AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pTVar21->AllocatorInstance).Data = local_1f0.AllocatorInstance.Data;
      (param_1->InactiveChangelist).ArrayNum = local_1f0.ArrayNum;
      (param_1->InactiveChangelist).ArrayMax = local_1f0.ArrayMax;
      local_1f0.ArrayNum = 0;
      local_1f0.ArrayMax = 0;
      local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.AllocatorInstance.Data);
    }
    if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.AllocatorInstance.Data);
    }
  }
  if (*(char *)(param_5->_padding_ + 0x17c8) == '\x01') {
    if (((*(byte *)(param_5->_padding_ + 0xfc) & 1) == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwningChannel->Connection->IsInternalAck()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                            ,0x7e5,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      uVar13 = (*pcVar7)();
      return (bool)uVar13;
    }
    pTVar21 = &param_1->LifetimeChangelist;
    if (((param_1->LifetimeChangelist).ArrayNum == 0) &&
       (uVar22 = param_2->HistoryStart, (int)uVar22 < param_2->HistoryEnd)) {
      do {
        local_180.AllocatorInstance.Data = (pTVar21->AllocatorInstance).Data;
        (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_180.ArrayNum = (param_1->LifetimeChangelist).ArrayNum;
        local_180.ArrayMax = (param_1->LifetimeChangelist).ArrayMax;
        (param_1->LifetimeChangelist).ArrayNum = 0;
        (param_1->LifetimeChangelist).ArrayMax = 0;
        uVar15 = uVar22 & 0x8000003f;
        if ((int)uVar15 < 0) {
          uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
        }
        MergeChangeList(this,param_3,&param_2->ChangeHistory[(int)uVar15].Changed,&local_180,pTVar21
                       );
        if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.AllocatorInstance.Data);
        }
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < param_2->HistoryEnd);
    }
    if (0 < (param_1->LifetimeChangelist).ArrayNum) {
      local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_210.ArrayNum = 0;
      local_210.ArrayMax = 0;
      PruneChangeList(this,param_3,pTVar21,&local_210);
      if (pTVar21 != &local_210) {
        pFVar6 = (pTVar21->AllocatorInstance).Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        (pTVar21->AllocatorInstance).Data = local_210.AllocatorInstance.Data;
        (param_1->LifetimeChangelist).ArrayNum = local_210.ArrayNum;
        (param_1->LifetimeChangelist).ArrayMax = local_210.ArrayMax;
        local_210.ArrayNum = 0;
        local_210.ArrayMax = 0;
        local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FilterChangeListToActive(this,pTVar21,&param_1->InactiveParents,&local_210);
      if (0 < local_210.ArrayNum) {
        SendProperties_BackwardsCompatible
                  (this,param_1,local_1d0,param_3,(UNetConnection *)param_5->_padding_,param_6,
                   &local_210);
        if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.AllocatorInstance.Data);
        }
        bVar12 = true;
        goto LAB_1484f1740;
      }
      if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.AllocatorInstance.Data);
      }
    }
    bVar12 = false;
  }
  else {
    if ((param_1->HistoryEnd < param_1->HistoryStart) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("RepState->HistoryEnd >= RepState->HistoryStart",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                            ,0x80a,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      uVar13 = (*pcVar7)();
      return (bool)uVar13;
    }
    if ((0x1f < param_1->HistoryEnd - param_1->HistoryStart) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(RepState->HistoryEnd - RepState->HistoryStart) < FSendingRepState::MAX_CHANGE_HISTORY"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                            ,0x80b,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      uVar13 = (*pcVar7)();
      return (bool)uVar13;
    }
    if ((param_1->bOpenAckedCalled == false) || ((param_1->PreOpenAckHistory).ArrayNum < 1)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    iVar4 = param_2->CompareIndex;
    iVar5 = param_1->LastCompareIndex;
    param_1->LastCompareIndex = iVar4;
    if ((((iVar5 != iVar4) && (param_1->LastChangelistIndex != param_2->HistoryEnd)) ||
        (param_1->NumNaks != 0)) || ((bVar12 || (local_1c8.ArrayNum != 0)))) {
      iVar4 = param_1->LastChangelistIndex;
      if (iVar4 <= param_2->HistoryStart) {
        if ((iVar4 != 0) && (5 < (byte)LogRep._0_1_)) {
          if (param_4 == (UClass *)0x0) {
            ::FString::FString(&local_170,L"None");
          }
          else {
            local_110 = (FName)param_4->_padding_;
            ::FName::ToString(&local_110,&local_170);
          }
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
        }
        param_1->LastChangelistIndex = param_2->HistoryStart;
      }
      uVar22 = param_1->HistoryEnd & 0x8000001f;
      if ((int)uVar22 < 0) {
        uVar22 = (uVar22 - 1 | 0xffffffe0) + 1;
      }
      pTVar21 = &param_1->ChangeHistory[(int)uVar22].Changed;
      if ((pTVar21->ArrayNum != 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Changed.Num() == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                              ,0x831,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
      uVar22 = param_1->LastChangelistIndex;
      if ((int)uVar22 < param_2->HistoryEnd) {
        do {
          local_160.AllocatorInstance.Data = (pTVar21->AllocatorInstance).Data;
          (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_160.ArrayNum = pTVar21->ArrayNum;
          local_160.ArrayMax = pTVar21->ArrayMax;
          pTVar21->ArrayNum = 0;
          pTVar21->ArrayMax = 0;
          uVar15 = uVar22 & 0x8000003f;
          if ((int)uVar15 < 0) {
            uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
          }
          MergeChangeList(this,param_3,&param_2->ChangeHistory[(int)uVar15].Changed,&local_160,
                          pTVar21);
          if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.AllocatorInstance.Data);
          }
          uVar22 = uVar22 + 1;
        } while ((int)uVar22 < param_2->HistoryEnd);
      }
      if (0 < local_1c8.ArrayNum) {
        local_150.AllocatorInstance.Data = (pTVar21->AllocatorInstance).Data;
        (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_150.ArrayNum = pTVar21->ArrayNum;
        local_150.ArrayMax = pTVar21->ArrayMax;
        pTVar21->ArrayNum = 0;
        pTVar21->ArrayMax = 0;
        MergeChangeList(this,param_3,&local_1c8,&local_150,pTVar21);
        if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.AllocatorInstance.Data);
        }
      }
      param_1->LastChangelistIndex = param_2->HistoryEnd;
      if (((0 < pTVar21->ArrayNum) || (0 < param_1->NumNaks)) || (bVar12)) {
        param_1->HistoryEnd = param_1->HistoryEnd + 1;
        UpdateChangelistHistory
                  (this,param_1,param_4,param_3,(UNetConnection *)param_5->_padding_,pTVar21);
        if (bVar12) {
          uVar22 = 0;
          if (0 < (param_1->PreOpenAckHistory).ArrayNum) {
            do {
              local_140.AllocatorInstance.Data = (pTVar21->AllocatorInstance).Data;
              (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              local_140.ArrayNum = pTVar21->ArrayNum;
              local_140.ArrayMax = pTVar21->ArrayMax;
              pTVar21->ArrayNum = 0;
              pTVar21->ArrayMax = 0;
              uVar15 = 0;
              if ((int)uVar22 < (param_1->PreOpenAckHistory).ArrayNum) {
                uVar15 = ~uVar22 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar7 = (code *)swi(3);
                uVar13 = (*pcVar7)();
                return (bool)uVar13;
              }
              MergeChangeList(this,param_3,
                              (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                              ((param_1->PreOpenAckHistory).AllocatorInstance.Data +
                              (longlong)(int)uVar22 * 0x20 + 8),&local_140,pTVar21);
              if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_140.AllocatorInstance.Data);
              }
              uVar22 = uVar22 + 1;
            } while ((int)uVar22 < (param_1->PreOpenAckHistory).ArrayNum);
          }
          DestructItems<FRepChangedHistory,int>
                    ((FRepChangedHistory *)(param_1->PreOpenAckHistory).AllocatorInstance.Data,
                     (param_1->PreOpenAckHistory).ArrayNum);
          piVar1 = &(param_1->PreOpenAckHistory).ArrayMax;
          (param_1->PreOpenAckHistory).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,0,&(param_1->PreOpenAckHistory).AllocatorInstance,0,piVar1);
          }
        }
        if ((pTVar21->ArrayNum < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Changed.Num() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                ,0x861,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          uVar13 = (*pcVar7)();
          return (bool)uVar13;
        }
        if ((((*(byte *)(param_5->_padding_ + 0xfc) & 1) == 0) && (GNetSharedSerializedData != 0))
           && ((param_2->SharedSerialization).bIsValid == false)) {
          bVar12 = GDoPropertyChecksum == 1;
          local_1e0 = *(FNetTokenStore **)(*(longlong *)(param_5->_padding_ + 0x58) + 0x9a8);
          local_d8.ChangelistIterator = &local_100;
          local_d8.Cmds = &this->Cmds;
          local_d8.HandleToCmdIndex = &this->BaseHandleToCmdIndex;
          local_100.ChangedIndex = 0;
          local_d8.NumHandlesPerElement = (this->BaseHandleToCmdIndex).ArrayNum;
          local_d8.ArrayElementSize = 0;
          local_d8.MaxCmdIndex = (this->Cmds).ArrayNum + -1;
          local_d8.Owner = this->Owner;
          local_d8.MaxArrayIndex = 1;
          local_d8.MinCmdIndex = 0;
          local_d8.LastSuccessfulCmdIndex = -1;
          local_100.Changed = pTVar21;
          if (local_d8.MaxCmdIndex < 0) {
            local_108 = &local_d8;
            `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_108);
          }
          if ((param_2->SharedSerialization).SerializedProperties.Ptr == (FNetBitWriter *)0x0) {
            pFVar18 = ::operator_new(0xd0);
            pFVar19 = (FNetBitWriter *)0x0;
            if (pFVar18 != (FNetBitWriter *)0x0) {
              pFVar19 = FNetBitWriter::FNetBitWriter(pFVar18,0);
            }
            pFVar18 = (param_2->SharedSerialization).SerializedProperties.Ptr;
            if ((pFVar18 != pFVar19) &&
               ((param_2->SharedSerialization).SerializedProperties.Ptr = pFVar19,
               pFVar18 != (FNetBitWriter *)0x0)) {
              (**(code **)pFVar18->_padding_)(pFVar18,1);
            }
          }
          UE::Net::FNetTokenExportScope::FNetTokenExportScope
                    (&local_68,(param_2->SharedSerialization).SerializedProperties.Ptr,local_1e0,
                     &(param_2->SharedSerialization).NetTokensPendingExport,
                     "BuildSharedSerialization");
          BuildSharedSerialization_r
                    (this,&local_d8,param_3,true,bVar12,0,&param_2->SharedSerialization);
          (param_2->SharedSerialization).bIsValid = true;
          UE::Net::FNetTokenExportScope::~FNetTokenExportScope(&local_68);
        }
        lVar10 = param_6->_padding_;
        local_1a0.AllocatorInstance.Data = (pTVar21->AllocatorInstance).Data;
        (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_1a0.ArrayNum = pTVar21->ArrayNum;
        local_1a0.ArrayMax = pTVar21->ArrayMax;
        pTVar21->ArrayNum = 0;
        pTVar21->ArrayMax = 0;
        local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b8.ArrayNum = 0;
        local_1b8.ArrayMax = 0;
        FilterChangeList(this,&local_1a0,&param_1->InactiveParents,&local_1b8,pTVar21);
        if ((cVar3 == '\0') && (1 < local_1b8.ArrayNum)) {
          pTVar2 = &param_1->InactiveChangelist;
          local_130.AllocatorInstance.Data = (pTVar2->AllocatorInstance).Data;
          (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_130.ArrayNum = (param_1->InactiveChangelist).ArrayNum;
          local_130.ArrayMax = (param_1->InactiveChangelist).ArrayMax;
          (param_1->InactiveChangelist).ArrayNum = 0;
          (param_1->InactiveChangelist).ArrayMax = 0;
          MergeChangeList(this,param_3,&local_1b8,&local_130,pTVar2);
          if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.AllocatorInstance.Data);
          }
        }
        if (((*(byte *)(param_5->_padding_ + 0xfc) & 1) == 0) ||
           (((param_7->field0_0x0).Value & 0x200) != 0)) {
          if ((0 < pTVar21->ArrayNum) &&
             ((SendProperties(this,param_1,local_1d0,param_3,param_4,param_6,pTVar21,
                              &param_2->SharedSerialization,
                              (ESerializePropertyType)((param_7->field0_0x0).Value >> 9) & Name),
              (param_2->SharedSerialization).bIsValid != false &&
              (this_00 = (param_6->NetTokenExportContext).Ptr,
              this_00 != (FNetTokenExportContext *)0x0)))) {
            local_e8 = (param_2->SharedSerialization).NetTokensPendingExport.AllocatorInstance.
                       SecondaryData;
            iVar4 = (param_2->SharedSerialization).NetTokensPendingExport.ArrayNum;
            if (local_e8 == (ForElementType<UE::Net::FNetToken>)0x0) {
              local_e8 = (ForElementType<UE::Net::FNetToken>)
                         &(param_2->SharedSerialization).NetTokensPendingExport;
            }
            if ((iVar4 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              uVar13 = (*pcVar7)();
              return (bool)uVar13;
            }
            local_78._12_4_ = uStack_dc;
            local_78.ArrayNum = iVar4;
            local_78.DataPtr = (FNetToken *)local_e8;
            iStack_e0 = iVar4;
            UE::Net::FNetTokenExportContext::AppendNetTokensPendingExport(this_00,&local_78);
          }
        }
        else {
          pTVar2 = &param_1->LifetimeChangelist;
          local_120.AllocatorInstance.Data = (pTVar2->AllocatorInstance).Data;
          (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_120.ArrayNum = (param_1->LifetimeChangelist).ArrayNum;
          local_120.ArrayMax = (param_1->LifetimeChangelist).ArrayMax;
          (param_1->LifetimeChangelist).ArrayNum = 0;
          (param_1->LifetimeChangelist).ArrayMax = 0;
          MergeChangeList(this,param_3,&local_1a0,&local_120,pTVar2);
          if (0 < pTVar21->ArrayNum) {
            SendProperties_BackwardsCompatible
                      (this,param_1,local_1d0,param_3,(UNetConnection *)param_5->_padding_,param_6,
                       pTVar21);
          }
          if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.AllocatorInstance.Data);
          }
        }
        bVar12 = (longlong)(int)lVar10 != param_6->_padding_;
        if (!bVar12) {
          pTVar21->ArrayNum = 0;
          if (pTVar21->ArrayMax != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,0,&pTVar21->AllocatorInstance,0,&pTVar21->ArrayMax);
          }
          param_1->HistoryEnd = param_1->HistoryEnd + -1;
        }
        if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.AllocatorInstance.Data);
        }
        if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.AllocatorInstance.Data);
        }
      }
      else {
        UpdateChangelistHistory
                  (this,param_1,param_4,param_3,(UNetConnection *)param_5->_padding_,
                   (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)0x0);
        bVar12 = false;
      }
    }
    else {
      UpdateChangelistHistory
                (this,param_1,param_4,param_3,(UNetConnection *)param_5->_padding_,
                 (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)0x0);
      bVar12 = false;
    }
  }
LAB_1484f1740:
  if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
LAB_1484f1753:
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return bVar12;
}

// SanityCheckChangeList @ 1484f28d0

void __thiscall
FRepLayout::SanityCheckChangeList
          (FRepLayout *this,TRepDataBufferBase<0,unsigned_char_const_> param_1,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  SanityCheckChangeList_r(this,0,(this->Cmds).ArrayNum + -1,param_1,param_2,(int *)local_res8,0);
  lVar4 = (longlong)(int)local_res8[0];
  uVar3 = 0;
  if ((int)local_res8[0] < param_2->ArrayNum) {
    uVar3 = ~local_res8[0] >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(short *)((param_2->AllocatorInstance).Data + lVar4 * 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Changed[ChangedIndex] == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                       ,0x1392,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SanityCheckChangeList_DynamicArray_r @ 1484f29a0

void __thiscall
FRepLayout::SanityCheckChangeList_DynamicArray_r
          (FRepLayout *this,int param_1,TRepDataBufferBase<0,unsigned_char_const_> param_2,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = 0;
  if (param_1 < (this->Cmds).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->Cmds).AllocatorInstance.Data;
  uVar10 = *param_4;
  *param_4 = uVar10 + 1;
  uVar8 = 0;
  if ((int)uVar10 < param_3->ArrayNum) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = 0;
  iVar9 = 0;
  uVar1 = *(ushort *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar10 * 2);
  lVar4 = *(longlong *)param_2.Data;
  iVar2 = *param_4;
  if (0 < *(int *)(param_2.Data + 8)) {
    do {
      uVar7 = SanityCheckChangeList_r
                        (this,param_1 + 1,*(ushort *)(pFVar3 + (longlong)param_1 * 0x20 + 8) - 1,
                         (uchar *)((int)((uint)*(ushort *)(pFVar3 + (longlong)param_1 * 0x20 + 10) *
                                        iVar9) + lVar4),param_3,param_4,uVar7);
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_2.Data + 8));
  }
  if ((*param_4 - iVar2 != (uint)uVar1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChangedIndex - OldChangedIndex == ArrayChangedCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                         ,0x135f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = *param_4;
  uVar8 = 0;
  if ((int)uVar10 < param_3->ArrayNum) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(short *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar10 * 2) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Changed[ChangedIndex] == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                         ,0x1360,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *param_4 = *param_4 + 1;
  return;
}

// SanityCheckChangeList_r @ 1484f2bc0

ushort __thiscall
FRepLayout::SanityCheckChangeList_r
          (FRepLayout *this,int param_1,int param_2,
          TRepDataBufferBase<0,unsigned_char_const_> param_3,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_4,int *param_5,ushort param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 <= param_1) {
    return param_6;
  }
  do {
    uVar5 = 0;
    if (param_1 < (this->Cmds).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    pFVar1 = (this->Cmds).AllocatorInstance.Data;
    if ((pFVar1[(longlong)param_1 * 0x20 + 0x1c] == (FScriptContainerElement)0x1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Cmd.Type != ERepLayoutCmdType::Return",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                           ,0x1372,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    uVar5 = *param_5;
    param_6 = param_6 + 1;
    if (pFVar1[(longlong)param_1 * 0x20 + 0x1c] == (FScriptContainerElement)0x0) {
      uVar6 = 0;
      if ((int)uVar5 < param_4->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      if (param_6 == *(ushort *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar5 * 2)) {
        uVar5 = *param_5;
        uVar6 = 0;
        if ((int)uVar5 < param_4->ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
        uVar4 = *(ushort *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar5 * 2);
        *param_5 = *param_5 + 1;
        SanityCheckChangeList_DynamicArray_r
                  (this,param_1,
                   (TRepDataBufferBase<0,unsigned_char_const_>)
                   (param_3.Data + *(int *)(pFVar1 + (longlong)param_1 * 0x20 + 0xc)),param_4,
                   param_5);
        uVar5 = *param_5;
        uVar6 = 0;
        if ((int)uVar5 < param_4->ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
        if (*(short *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar5 * 2) != 0) {
          uVar5 = *param_5;
          uVar6 = 0;
          if ((int)uVar5 < param_4->ArrayNum) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
          if ((*(ushort *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar5 * 2) <= uVar4)
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Changed[ChangedIndex] == 0 || Changed[ChangedIndex] > LastChangedArrayHandle"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                    ,0x137d,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
        }
      }
      param_1 = *(ushort *)(pFVar1 + (longlong)param_1 * 0x20 + 8) - 1;
    }
    else {
      uVar6 = 0;
      if ((int)uVar5 < param_4->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      if (param_6 == *(ushort *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar5 * 2)) {
        uVar5 = *param_5;
        uVar6 = 0;
        if ((int)uVar5 < param_4->ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
        uVar4 = *(ushort *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar5 * 2);
        uVar6 = *param_5 + 1;
        *param_5 = uVar6;
        uVar5 = 0;
        if ((int)uVar6 < param_4->ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
        if (*(short *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar6 * 2) != 0) {
          uVar5 = *param_5;
          uVar6 = 0;
          if ((int)uVar5 < param_4->ArrayNum) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
          if ((*(ushort *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar5 * 2) <= uVar4)
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Changed[ChangedIndex] == 0 || Changed[ChangedIndex] > LastChangedArrayHandle"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                    ,4999,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
        }
      }
    }
    param_1 = param_1 + 1;
    if (param_2 <= param_1) {
      return param_6;
    }
  } while( true );
}

// SendAllProperties_BackwardsCompatible_r @ 1484f3c10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall
FRepLayout::SendAllProperties_BackwardsCompatible_r
          (FRepLayout *this,FSendingRepState *param_1,FNetBitWriter *param_2,bool param_3,
          UPackageMapClient *param_4,FNetFieldExportGroup *param_5,int param_6,int param_7,
          TRepDataBufferBase<0,unsigned_char_const_> param_8)

{
  ERepLayoutCmdType EVar1;
  UStruct *this_00;
  UPackageMap *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ForElementType<FNetTracePacketContentEvent> FVar11;
  ForElementType<FNetTracePacketContentEvent> FVar12;
  FRepLayoutCmd *pFVar13;
  FNetTraceCollector *pFVar14;
  TRepDataBufferBase<0,unsigned_char_const_> TVar15;
  TRepDataBufferBase<0,unsigned_char_const_> TVar16;
  uint uVar17;
  uint local_258;
  undefined4 local_254;
  undefined4 local_250 [2];
  FRepLayoutCmd *local_248;
  int local_240 [2];
  uint local_238;
  uint local_234 [3];
  int local_228;
  uint local_224;
  FString local_220;
  FString local_210;
  FString local_200;
  FNetBitWriter local_1e8;
  FNetBitWriter local_118;
  
  FNetBitWriter::FNetBitWriter(&local_1e8,param_2->PackageMap,0);
  TVar15 = param_8;
  uVar17 = param_6;
  if (param_6 < param_7) {
    do {
      uVar10 = 0;
      if ((int)uVar17 < (this->Cmds).ArrayNum) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar13 = (FRepLayoutCmd *)
                ((this->Cmds).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x20);
      local_248 = pFVar13;
      if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
        UE::Logging::Private::BasicLog<7>
                  (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
      }
      if ((pFVar13->Type == Return) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Cmd.Type != ERepLayoutCmdType::Return",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                             ,0xc85,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EVar1 = pFVar13->Type;
      if ((EVar1 == DynamicArray) && ((pFVar13->Flags & IsEmptyArrayStruct) != None)) {
        uVar17 = pFVar13->EndCmd - 1;
      }
      else {
        UPackageMapClient::TrackNetFieldExport(param_4,param_5,uVar17);
        local_240[0] = uVar17 + 1;
        pFVar14 = (FNetTraceCollector *)0x0;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar14 = (param_2->TraceCollector).Ptr;
        }
        uVar10 = 0xffffffff;
        local_228 = local_240[0];
        if (pFVar14 != (FNetTraceCollector *)0x0) {
          uVar10 = FNetTrace::BeginPacketContentEvent(pFVar14,NameId,(uint)param_2->_padding_);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            PropertyHandle = UE::Net::CreatePersistentNetDebugName(L"PropertyHandle",0xe);
            _Init_thread_footer(&::_TSS0);
          }
          uVar9 = FNetTrace::TraceName(PropertyHandle);
          FVar12 = (pFVar14->Events).AllocatorInstance.SecondaryData;
          FVar11 = (ForElementType<FNetTracePacketContentEvent>)&pFVar14->Events;
          if (FVar12 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar11 = FVar12;
          }
          *(uint *)((longlong)FVar11 + (ulonglong)uVar10 * 0x10) = uVar9;
        }
        lVar6 = param_2->_padding_;
        (**(code **)(param_2->_padding_ + 0x1a0))(param_2,local_240);
        if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
          UE::Logging::Private::BasicLog<7>
                    ((FStaticBasicLogRecord *)&PTR_u_WritePropertyHa_151ae6bb8,
                     (FLogCategoryBase *)&LogRepPropertiesBackCompat);
        }
        if (param_3) {
          plVar3 = (longlong *)param_2->_padding_;
          param_6 = -0x54520ff3;
          if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
            if ((param_2->_padding_ & 0x10000) == 0) {
              (**(code **)(param_2->_padding_ + 0x188))();
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)param_2,(uint *)&param_6);
            }
          }
          else {
            param_6 = *(int *)*plVar3;
            *plVar3 = *plVar3 + 4;
          }
          if ((param_6 != -0x54520ff3) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Checksum == 0xABADF00D",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                 ,0x365,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
           (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
          if (__CsvProfilerStat3018 == false) {
            FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
            __CsvProfilerStat3018 = true;
          }
          FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
          FNetworkProfiler::TrackWritePropertyHandle
                    (&GNetworkProfiler,(short)param_2->_padding_ - (short)(int)lVar6,
                     (UNetConnection *)0x0);
          FCsvProfiler::EndExclusiveStat("NetworkProfiler");
        }
        if (uVar10 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar14,uVar10,(uint)param_2->_padding_);
        }
        TVar16.Data = TVar15.Data + local_248->Offset;
        if (EVar1 == DynamicArray) {
          lVar6 = *(longlong *)TVar16.Data;
          FBitWriter::Reset((FBitWriter *)&local_1e8);
          local_238 = *(uint *)(TVar16.Data + 8);
          FBitWriter::SerializeIntPacked((FBitWriter *)&local_1e8,&local_238);
          if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
            UE::Logging::Private::BasicLog<7>
                      (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
          }
          iVar7 = local_228;
          pFVar13 = local_248;
          uVar17 = 0;
          if (0 < *(int *)(TVar16.Data + 8)) {
            do {
              uVar10 = uVar17 + 1;
              local_234[0] = uVar10;
              FBitWriter::SerializeIntPacked((FBitWriter *)&local_1e8,local_234);
              if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
                UE::Logging::Private::BasicLog<7>
                          (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
              }
              SendAllProperties_BackwardsCompatible_r
                        (this,param_1,&local_1e8,param_3,param_4,param_5,iVar7,pFVar13->EndCmd - 1,
                         (uchar *)((int)(pFVar13->ElementSize * uVar17) + lVar6));
              TVar15 = param_8;
              uVar17 = uVar10;
            } while ((int)uVar10 < *(int *)(TVar16.Data + 8));
          }
          local_224 = 0;
          FBitWriter::SerializeIntPacked((FBitWriter *)&local_1e8,&local_224);
          if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
            UE::Logging::Private::BasicLog<7>
                      (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
          }
          local_254 = (undefined4)local_1e8._padding_;
          (**(code **)(param_2->_padding_ + 0x1a0))(param_2,&local_254);
          pcVar4 = *(code **)(param_2->_padding_ + 400);
          if (((local_1e8._padding_._1_1_ & 2) != 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("!IsError()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                                 ,0x49,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (*pcVar4)(param_2,local_1e8._padding_);
          if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
            UE::Logging::Private::BasicLog<7>
                      (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
          }
          uVar17 = local_248->EndCmd - 1;
        }
        else {
          this_00 = this->Owner;
          if ((0 < GDoReplicationContextString) &&
             (pUVar2 = param_2->PackageMap, pUVar2 != (UPackageMap *)0x0)) {
            FField::GetPathName((FField *)local_248->Property,&local_200,(UObject *)0x0);
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_210,(UObject *)0x0)
            ;
            ::FString::PrintfImpl(&local_220,L"%s - %s");
            ::FString::operator=(&pUVar2->DebugContextString,&local_220);
            if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_220.Data.AllocatorInstance.Data);
            }
            if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_210.Data.AllocatorInstance.Data);
            }
            if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_200.Data.AllocatorInstance.Data);
            }
          }
          lVar6 = param_2->_padding_;
          FNetBitWriter::FNetBitWriter(&local_118,param_2->PackageMap,0);
          (**(code **)(local_248->Property->_padding_ + 200))
                    (local_248->Property,&local_118,local_118.PackageMap,TVar16.Data,0);
          if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
            UE::Logging::Private::BasicLog<7>
                      ((FStaticBasicLogRecord *)&PTR_u_WriteProperty_B_151ae6c38,
                       (FLogCategoryBase *)&LogRepPropertiesBackCompat);
          }
          local_250[0] = (undefined4)local_118._padding_;
          (**(code **)(param_2->_padding_ + 0x1a0))(param_2,local_250);
          pcVar4 = *(code **)(param_2->_padding_ + 400);
          if (((local_118._padding_._1_1_ & 2) != 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("!IsError()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                                 ,0x49,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (*pcVar4)(param_2,local_118._padding_);
          if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
            UE::Logging::Private::BasicLog<7>
                      ((FStaticBasicLogRecord *)&PTR_u_WriteProperty_B_151ae6cd8,
                       (FLogCategoryBase *)&LogRepPropertiesBackCompat);
          }
          lVar5 = param_2->_padding_;
          if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
             (pFVar13 = local_248, GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
            if (__CsvProfilerStat3071 == false) {
              FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
              __CsvProfilerStat3071 = true;
            }
            FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
            pFVar13 = local_248;
            FNetworkProfiler::TrackReplicateProperty
                      (&GNetworkProfiler,local_248->Property,(short)(int)lVar5 - (short)(int)lVar6,
                       (UNetConnection *)0x0);
            FCsvProfiler::EndExclusiveStat("NetworkProfiler");
          }
          if ((0 < GDoReplicationContextString) && (param_2->PackageMap != (UPackageMap *)0x0)) {
            ::FString::Empty(&param_2->PackageMap->DebugContextString);
          }
          if (param_3) {
            SerializeReadWritePropertyChecksum<0>(pFVar13,uVar17,TVar16,(FBitArchive *)param_2);
          }
          FBitWriter::~FBitWriter((FBitWriter *)&local_118);
        }
      }
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < param_7);
  }
  uVar17 = 0xffffffff;
  local_234[1] = 0;
  pFVar14 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar14 = (param_2->TraceCollector).Ptr;
  }
  if (pFVar14 != (FNetTraceCollector *)0x0) {
    uVar17 = FNetTrace::BeginPacketContentEvent(pFVar14,NameId,(uint)param_2->_padding_);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      PropertyHandle = UE::Net::CreatePersistentNetDebugName(L"PropertyHandle",0xe);
      _Init_thread_footer(&::_TSS0);
    }
    uVar10 = FNetTrace::TraceName(PropertyHandle);
    FVar12 = (pFVar14->Events).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar14->Events;
    }
    *(uint *)((longlong)FVar12 + (ulonglong)uVar17 * 0x10) = uVar10;
  }
  lVar6 = param_2->_padding_;
  (**(code **)(param_2->_padding_ + 0x1a0))(param_2,local_234 + 1);
  if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
    UE::Logging::Private::BasicLog<7>
              ((FStaticBasicLogRecord *)&PTR_u_WritePropertyHa_151ae6bb8,
               (FLogCategoryBase *)&LogRepPropertiesBackCompat);
  }
  if (param_3) {
    plVar3 = (longlong *)param_2->_padding_;
    local_258 = 0xabadf00d;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_2->_padding_ & 0x10000) == 0) {
        (**(code **)(param_2->_padding_ + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_2,&local_258);
      }
    }
    else {
      local_258 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    if ((local_258 != 0xabadf00d) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Checksum == 0xABADF00D",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                           ,0x365,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
     (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
    if (__CsvProfilerStat3018 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
      __CsvProfilerStat3018 = true;
    }
    FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
    FNetworkProfiler::TrackWritePropertyHandle
              (&GNetworkProfiler,(short)param_2->_padding_ - (short)(int)lVar6,(UNetConnection *)0x0
              );
    FCsvProfiler::EndExclusiveStat("NetworkProfiler");
  }
  if (uVar17 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar14,uVar17,(uint)param_2->_padding_);
  }
  FBitWriter::~FBitWriter((FBitWriter *)&local_1e8);
  return;
}

// SendCustomDeltaProperty @ 1484f4650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FRepLayout::SendCustomDeltaProperty(FRepLayout *this,FNetDeltaSerializeInfo *param_1,ushort param_2)

{
  FString *pFVar1;
  bool bVar2;
  ushort uVar3;
  FLifetimeCustomDeltaState *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  ICppStructOps *this_00;
  FString *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined4 local_res18 [4];
  FString local_48;
  
  pFVar4 = (this->LifetimeCustomPropertyState).Ptr;
  if ((pFVar4->LifetimeCustomDeltaProperties).ArrayNum <= (int)(uint)param_2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
  }
  pFVar5 = (pFVar4->LifetimeCustomDeltaProperties).AllocatorInstance.Data;
  uVar3 = *(ushort *)(pFVar5 + (ulonglong)param_2 * 0x18);
  if ((this->Parents).ArrayNum <= (int)(uint)uVar3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
  }
  pFVar12 = (this->Parents).AllocatorInstance.Data + (ulonglong)uVar3 * 0x30;
  if (((byte)pFVar12[0x2c] & 8) == 0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3278201614795542974>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                       ,0x11be,"EnumHasAnyFlags(Parent.Flags, ERepParentFlags::IsCustomDelta)");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    return false;
  }
  lVar6 = *(longlong *)pFVar12;
  this_00 = UScriptStruct::GetCppStructOps(*(UScriptStruct **)(lVar6 + 0x70));
  if (this_00 == (ICppStructOps *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("CppStructOps",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                       ,0x11c6,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
  }
  pFVar11 = ::FName::ToString((FName *)(pFVar12 + 8),&local_48);
  pFVar1 = &param_1->DebugName;
  if (pFVar1 != pFVar11) {
    pFVar7 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->DebugName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (param_1->DebugName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  bVar9 = param_1->bSupportsFastArrayDeltaStructSerialization;
  param_1->Struct = *(UStruct **)(lVar6 + 0x70);
  param_1->CustomDeltaIndex = param_2;
  param_1->Data = &param_1->Object->field_0x0 + *(int *)(pFVar12 + 0x14);
  if (((bVar9 != false) && (((byte)pFVar12[0x2c] & 0x80) != 0)) &&
     (((this->LifetimeCustomPropertyState).Ptr)->NumFastArrayProperties != 0)) {
    bVar9 = *(int *)(pFVar5 + (ulonglong)param_2 * 0x18 + 8) != -1;
  }
  FBitWriter::WriteBit(param_1->Writer,bVar9);
  if (*(int *)(*(longlong *)pFVar12 + 0x30) != 1) {
    local_res18[0] = *(undefined4 *)(pFVar12 + 0x10);
    (**(code **)(param_1->Writer->_padding_ + 0x1a0))(param_1->Writer,local_res18);
  }
  bVar2 = param_1->bSupportsFastArrayDeltaStructSerialization;
  param_1->bSupportsFastArrayDeltaStructSerialization = bVar9;
  bVar9 = UScriptStruct::ICppStructOps::NetDeltaSerialize(this_00,param_1,param_1->Data);
  param_1->bSupportsFastArrayDeltaStructSerialization = bVar2;
  return bVar9;
}

// SendProperties @ 1484f48b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRepLayout::SendProperties
          (FRepLayout *this,FSendingRepState *param_1,FRepChangedPropertyTracker *param_2,
          TRepDataBufferBase<0,unsigned_char_const_> param_3,UClass *param_4,FNetBitWriter *param_5,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_6,
          FRepSerializationSharedInfo *param_7,ESerializePropertyType param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropSendTime> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ForElementType<FNetTracePacketContentEvent> FVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FNetTraceCollector *pFVar16;
  uint local_res8;
  uint uStackX_c;
  FSendingRepState *local_res10;
  uint local_118;
  uint local_114;
  FColor_u_0 local_110 [2];
  FName local_108;
  FName local_100;
  FRepHandleIterator *local_f0;
  FNetTraceCollector *local_e8;
  LARGE_INTEGER local_e0;
  FStatMessage local_d8;
  FChangelistIterator local_c8;
  FBitWriterMark local_b8;
  FRepHandleIterator local_a8;
  FName local_58;
  FString local_50;
  
  FVar12 = StatPtr_STAT_NetReplicateDynamicPropSendTime;
  local_res10 = param_1;
  if (StatPtr_STAT_NetReplicateDynamicPropSendTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropSendTime>)0x0) {
    pFVar11 = ::FName::FName(&local_58,"STAT_NetReplicateDynamicPropSendTime");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropSendTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetReplicateDynamicPropSendTime,
                        *pFVar11,L"Dynamic Property Send Time","STATGROUP_Game","STATCAT_Advanced",
                        L"Game",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar9 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_110[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_110[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar14.Value;
        local_108.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                   ,0xb8e);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar14.Value;
      uStackX_c = uVar9;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_1484f4a09;
    }
  }
  bVar6 = false;
  FVar15 = local_100;
LAB_1484f4a09:
  if (((this->Flags & NoReplicatedProperties) == None) && ((this->Parents).ArrayNum != 0)) {
    plVar3 = &param_5->_padding_;
    local_res8 = CONCAT31(local_res8._1_3_,GDoPropertyChecksum == 1);
    local_118 = 0xffffffff;
    pFVar16 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar16 = (param_5->TraceCollector).Ptr;
    }
    local_e8 = pFVar16;
    if (pFVar16 != (FNetTraceCollector *)0x0) {
      local_118 = FNetTrace::BeginPacketContentEvent(pFVar16,NameId,(uint)*plVar3);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        Properties = UE::Net::CreatePersistentNetDebugName(L"Properties",10);
        _Init_thread_footer(&::_TSS0);
      }
      uVar9 = FNetTrace::TraceName(Properties);
      FVar13 = (pFVar16->Events).AllocatorInstance.SecondaryData;
      if (FVar13 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar13 = (ForElementType<FNetTracePacketContentEvent>)&pFVar16->Events;
      }
      *(uint *)((longlong)FVar13 + (ulonglong)local_118 * 0x10) = uVar9;
    }
    local_b8.Num = *plVar3;
    local_b8.Overflowed = (bool)(*(byte *)((longlong)&param_5->_padding_ + 1) >> 1 & 1);
    FBitWriter::WriteBit((FBitWriter *)param_5,(uchar)local_res8);
    local_114 = (uint)*plVar3;
    if (6 < (byte)LogRepProperties._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this->Owner,&local_50,(UObject *)0x0);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRepProperties);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    local_a8.Cmds = &this->Cmds;
    local_c8.Changed = param_6;
    local_a8.MaxCmdIndex = (this->Cmds).ArrayNum + -1;
    local_a8.ChangelistIterator = &local_c8;
    local_c8.ChangedIndex = 0;
    local_a8.HandleToCmdIndex = &this->BaseHandleToCmdIndex;
    local_a8.NumHandlesPerElement = (this->BaseHandleToCmdIndex).ArrayNum;
    local_a8.Owner = this->Owner;
    local_a8.ArrayElementSize = 0;
    local_a8.MaxArrayIndex = 1;
    local_a8.MinCmdIndex = 0;
    local_a8.LastSuccessfulCmdIndex = -1;
    if (local_a8.MaxCmdIndex < 0) {
      local_f0 = &local_a8;
      `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_f0);
    }
    bVar8 = (bool)(uchar)local_res8;
    SendProperties_r(this,local_res10,param_5,(bool)(uchar)local_res8,&local_a8,param_3,0,param_7,
                     param_8);
    lVar2 = param_5->_padding_;
    if ((int)local_114 == lVar2) {
      FBitWriterMark::Pop(&local_b8,(FBitWriter *)param_5);
    }
    else {
      uVar9 = 0xffffffff;
      pFVar16 = (FNetTraceCollector *)0x0;
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar16 = (param_5->TraceCollector).Ptr;
      }
      if (pFVar16 != (FNetTraceCollector *)0x0) {
        uVar9 = FNetTrace::BeginPacketContentEvent(pFVar16,NameId,(uint)lVar2);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          PropertyHandle = UE::Net::CreatePersistentNetDebugName(L"PropertyHandle",0xe);
          _Init_thread_footer(&::_TSS0);
        }
        uVar10 = FNetTrace::TraceName(PropertyHandle);
        FVar13 = (pFVar16->Events).AllocatorInstance.SecondaryData;
        if (FVar13 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar13 = (ForElementType<FNetTracePacketContentEvent>)&pFVar16->Events;
        }
        *(uint *)((longlong)FVar13 + (ulonglong)uVar9 * 0x10) = uVar10;
      }
      local_114 = 0;
      (**(code **)(param_5->_padding_ + 0x1a0))(param_5,&local_114);
      if (6 < (byte)LogRepProperties._0_1_) {
        UE::Logging::Private::BasicLog<7>
                  ((FStaticBasicLogRecord *)&PTR_u_WritePropertyHa_151ae5800,
                   (FLogCategoryBase *)&LogRepProperties);
      }
      if (bVar8 != false) {
        plVar3 = (longlong *)param_5->_padding_;
        local_res8 = 0xabadf00d;
        if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
          if ((param_5->_padding_ & 0x10000) == 0) {
            (**(code **)(param_5->_padding_ + 0x188))();
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)param_5,&local_res8);
          }
        }
        else {
          local_res8 = *(uint *)*plVar3;
          *plVar3 = *plVar3 + 4;
        }
        if ((local_res8 != 0xabadf00d) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Checksum == 0xABADF00D",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                               ,0x365,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
         (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
        if (__CsvProfilerStat1943 == false) {
          FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
          __CsvProfilerStat1943 = true;
        }
        FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
        FNetworkProfiler::TrackWritePropertyHandle
                  (&GNetworkProfiler,(short)param_5->_padding_ - (short)lVar2,(UNetConnection *)0x0)
        ;
        FCsvProfiler::EndExclusiveStat("NetworkProfiler");
      }
      if (uVar9 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar16,uVar9,(uint)param_5->_padding_);
      }
    }
    if (local_118 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(local_e8,local_118,(uint)param_5->_padding_);
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_d8.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_d8.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_e0);
      local_d8.StatData.Pad[4] = '\0';
      local_d8.StatData.Pad[5] = '\0';
      local_d8.StatData.Pad[6] = '\0';
      local_d8.StatData.Pad[7] = '\0';
      local_d8.StatData.Pad[0] = local_e0.s.LowPart._0_1_;
      local_d8.StatData.Pad[1] = local_e0.s.LowPart._1_1_;
      local_d8.StatData.Pad[2] = local_e0.s.LowPart._2_1_;
      local_d8.StatData.Pad[3] = local_e0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_d8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SendPropertiesForRPC @ 1484f4f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRepLayout::SendPropertiesForRPC
          (FRepLayout *this,UFunction *param_1,UActorChannel *param_2,FNetBitWriter *param_3,
          TRepDataBufferBase<0,unsigned_char_const_> param_4)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ForElementType<unsigned_int> FVar5;
  FNetTraceCollector *pFVar6;
  FNetTokenExportContext *this_00;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  ForElementType<unsigned_int> FVar19;
  FNetBitWriter *pFVar20;
  bool local_res10 [8];
  UActorChannel *local_res18;
  FNetBitWriter *local_res20;
  undefined2 local_88 [2];
  uint local_84;
  longlong local_80;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_78;
  ForElementType<UE::Net::FNetToken> local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<UE::Net::FNetToken_const_,int> local_58;
  
  local_res18 = param_2;
  local_res20 = param_3;
  if ((param_1 != (UFunction *)this->Owner) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Function == Owner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                         ,0x1b6b,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->Flags & NoReplicatedProperties) == None) &&
     (iVar2 = (this->Parents).ArrayNum, iVar2 != 0)) {
    uVar15 = 0;
    uVar18 = 0;
    uVar11 = 0;
    if ((*(byte *)(param_2->_padding_ + 0xfc) & 1) == 0) {
      bVar8 = false;
      if (0 < iVar2) {
        local_84 = 1;
        local_80 = 0;
        do {
          lVar17 = local_80;
          uVar18 = local_84;
          uVar14 = (uint)uVar15;
          uVar13 = uVar11;
          if ((int)uVar14 < (this->Parents).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar4 = *(longlong *)((this->Parents).AllocatorInstance.Data + lVar17);
          if ((lVar4 == 0) || ((*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) >> 0x11 & 1) == 0)) {
            if ((GNetSharedSerializedData == 0) || ((this->SharedInfoRPC).bIsValid == false)) {
LAB_1484f54bc:
              uVar18 = uVar11;
              if ((int)uVar14 < (this->Parents).ArrayNum) {
                uVar18 = ~uVar14 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              plVar3 = *(longlong **)((this->Parents).AllocatorInstance.Data + lVar17);
              uVar18 = uVar11;
              if ((int)uVar14 < (this->Parents).ArrayNum) {
                uVar18 = ~uVar14 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar2 = *(int *)((this->Parents).AllocatorInstance.Data + lVar17 + 0x10);
              pcVar7 = *(code **)(*plVar3 + 0xb8);
              if (((iVar2 < 0) || ((int)plVar3[6] <= iVar2)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x2dd,
                                      L"Array index out of bounds: %i from an array of size %i"),
                 bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if ((param_4.Data == (uchar *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ContainerPtr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x2de,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              cVar9 = (*pcVar7)(plVar3,param_4.Data +
                                       (longlong)*(int *)((longlong)plVar3 + 0x44) +
                                       (longlong)iVar2 * (longlong)*(int *)((longlong)plVar3 + 0x34)
                                ,0,0);
              bVar10 = cVar9 == '\0';
              lVar17 = local_80;
              uVar18 = local_84;
            }
            else {
              uVar13 = uVar11;
              if ((int)uVar14 < (this->Parents).ArrayNum) {
                uVar13 = ~uVar14 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if ((*(uint *)(*(longlong *)((this->Parents).AllocatorInstance.Data + lVar17) + 0x38)
                   >> 8 & 1) != 0) goto LAB_1484f54bc;
              if ((((int)uVar14 < 0) || ((this->SharedInfoRPCParentsChanged).NumBits <= (int)uVar14)
                  ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Index>=0 && Index<NumBits",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                            ,0x5c6,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar5 = (this->SharedInfoRPCParentsChanged).AllocatorInstance.SecondaryData;
              FVar19 = (ForElementType<unsigned_int>)&this->SharedInfoRPCParentsChanged;
              if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                FVar19 = FVar5;
              }
              uVar13 = uVar14;
              if ((int)uVar14 < 0) {
                uVar13 = uVar14 + 0x1f;
              }
              bVar10 = (*(uint *)((longlong)FVar19 + (longlong)((int)uVar13 >> 5) * 4) & uVar18) !=
                       0;
            }
            FBitWriter::WriteBit((FBitWriter *)local_res20,bVar10);
            pFVar20 = local_res20;
            if (bVar10 != false) goto LAB_1484f5619;
          }
          else {
LAB_1484f5619:
            bVar8 = true;
            pFVar6 = (local_res20->TraceCollector).Ptr;
            uVar18 = uVar11;
            if ((int)uVar14 < (this->Parents).ArrayNum) {
              uVar18 = ~uVar14 >> 0x1f;
            }
            local_res10[0] = false;
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar1 = *(ushort *)((this->Parents).AllocatorInstance.Data + lVar17 + 0x1e);
            uVar18 = uVar11;
            if ((int)uVar14 < (this->Parents).ArrayNum) {
              uVar18 = ~uVar14 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar20 = local_res20;
            SerializeProperties_r
                      (this,(FBitArchive *)local_res20,local_res20->PackageMap,
                       (uint)*(ushort *)((this->Parents).AllocatorInstance.Data + lVar17 + 0x1c),
                       (uint)uVar1,(TRepDataBufferBase<0,unsigned_char>)param_4.Data,local_res10,0,0
                       ,&this->SharedInfoRPC,pFVar6,(UObject *)0x0);
            uVar18 = local_84;
          }
          local_84 = uVar18 << 1 | (uint)((int)uVar18 < 0);
          local_80 = lVar17 + 0x30;
          uVar15 = (ulonglong)(uVar14 + 1);
        } while ((int)(uVar14 + 1) < (this->Parents).ArrayNum);
        if (((bVar8) && ((this->SharedInfoRPC).bIsValid != false)) &&
           (this_00 = (pFVar20->NetTokenExportContext).Ptr, this_00 != (FNetTokenExportContext *)0x0
           )) {
          local_68 = (this->SharedInfoRPC).NetTokensPendingExport.AllocatorInstance.SecondaryData;
          iVar2 = (this->SharedInfoRPC).NetTokensPendingExport.ArrayNum;
          if (local_68 == (ForElementType<UE::Net::FNetToken>)0x0) {
            local_68 = (ForElementType<UE::Net::FNetToken>)
                       &(this->SharedInfoRPC).NetTokensPendingExport;
          }
          if ((iVar2 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_58._12_4_ = uStack_5c;
          local_58.ArrayNum = iVar2;
          local_58.DataPtr = (FNetToken *)local_68;
          iStack_60 = iVar2;
          UE::Net::FNetTokenExportContext::AppendNetTokensPendingExport(this_00,&local_58);
        }
      }
    }
    else {
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
      uVar16 = uVar15;
      iVar12 = 0;
      if (0 < iVar2) {
        do {
          uVar14 = (uint)uVar15;
          uVar13 = uVar18;
          if ((int)uVar14 < (this->Parents).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          plVar3 = *(longlong **)((this->Parents).AllocatorInstance.Data + uVar16);
          uVar13 = uVar18;
          if ((int)uVar14 < (this->Parents).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar2 = *(int *)((this->Parents).AllocatorInstance.Data + uVar16 + 0x10);
          pcVar7 = *(code **)(*plVar3 + 0xb8);
          if (((iVar2 < 0) || ((int)plVar3[6] <= iVar2)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((param_4.Data == (uchar *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          cVar9 = (*pcVar7)(plVar3,param_4.Data +
                                   (longlong)*(int *)((longlong)plVar3 + 0x44) +
                                   (longlong)iVar2 * (longlong)*(int *)((longlong)plVar3 + 0x34),0,0
                           );
          if (cVar9 == '\0') {
            uVar13 = uVar18;
            if ((int)uVar14 < (this->Parents).ArrayNum) {
              uVar13 = ~uVar14 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar1 = *(ushort *)((this->Parents).AllocatorInstance.Data + uVar16 + 0x1e);
            uVar13 = uVar11;
            if ((int)uVar14 < (this->Parents).ArrayNum) {
              uVar13 = ~uVar14 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            BuildChangeList_r(this,&this->BaseHandleToCmdIndex,
                              (uint)*(ushort *)
                                     ((this->Parents).AllocatorInstance.Data + uVar16 + 0x1c),
                              (uint)uVar1,param_4,0,false,&local_78);
          }
          uVar15 = (ulonglong)(uVar14 + 1);
          uVar16 = uVar16 + 0x30;
        } while ((int)(uVar14 + 1) < (this->Parents).ArrayNum);
        param_3 = local_res20;
        param_2 = local_res18;
        iVar12 = local_78.ArrayNum;
      }
      local_88[0] = 0;
      if ((local_78.AllocatorInstance.Data <= (FScriptContainerElement *)local_88) &&
         ((FScriptContainerElement *)local_88 <
          local_78.AllocatorInstance.Data + (longlong)local_78.ArrayMax * 2)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = local_78.ArrayNum;
      }
      if (iVar12 == local_78.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&local_78.AllocatorInstance,&local_78.ArrayMax);
      }
      local_78.ArrayNum = iVar12 + 1;
      *(undefined2 *)(local_78.AllocatorInstance.Data + (longlong)iVar12 * 2) = local_88[0];
      SendProperties_BackwardsCompatible
                (this,(FSendingRepState *)0x0,(FRepChangedPropertyTracker *)0x0,param_4,
                 (UNetConnection *)param_2->_padding_,param_3,&local_78);
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SendProperties_BackwardsCompatible @ 1484f57f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRepLayout::SendProperties_BackwardsCompatible
          (FRepLayout *this,FSendingRepState *param_1,FRepChangedPropertyTracker *param_2,
          TRepDataBufferBase<0,unsigned_char_const_> param_3,UNetConnection *param_4,
          FNetBitWriter *param_5,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_6)

{
  int *piVar1;
  UPackageMapClient *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropSendBackCompatTime> FVar9;
  TSharedPtr<FNetFieldExportGroup,1> *pTVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar11;
  bool bVar12;
  FColor_u_0 local_res8 [2];
  FSendingRepState *local_res10;
  FRepChangedPropertyTracker *local_res18;
  TSharedPtr<FNetFieldExportGroup,1> local_138;
  FName local_128;
  FString local_120;
  FName local_110;
  FName local_108;
  LARGE_INTEGER local_f8;
  FStatMessage local_f0;
  FChangelistIterator local_e0;
  FBitWriterMark local_d0;
  FRepHandleIterator local_b8;
  FName local_68;
  TSharedPtr<FNetFieldExportGroup,1> local_60;
  TSharedPtr<FNetFieldExportGroup,1> local_48;
  
  FVar9 = StatPtr_STAT_NetReplicateDynamicPropSendBackCompatTime;
  local_res10 = param_1;
  local_res18 = param_2;
  if (StatPtr_STAT_NetReplicateDynamicPropSendBackCompatTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropSendBackCompatTime>)0x0) {
    pFVar8 = ::FName::FName(&local_68,"STAT_NetReplicateDynamicPropSendBackCompatTime");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropSendBackCompatTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_NetReplicateDynamicPropSendBackCompatTime,*pFVar8,
                       L"Dynamic Property Send BackCompat Time","STATGROUP_Game","STATCAT_Advanced",
                       L"Game",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  if ((FVar11.ComparisonIndex.Value.Value != 0) || (FVar11.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_110.ComparisonIndex.Value = FVar11.ComparisonIndex.Value.Value;
        local_110.Number = FVar11.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_110,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                   ,0xcc5);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_128 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_1484f5943;
    }
  }
  bVar4 = false;
  FVar11 = local_108;
LAB_1484f5943:
  local_d0.Num = param_5->_padding_;
  local_d0.Overflowed = (bool)(*(byte *)((longlong)&param_5->_padding_ + 1) >> 1 & 1);
  bVar12 = GDoPropertyChecksum == 1;
  FBitWriter::WriteBit((FBitWriter *)param_5,bVar12);
  this_00 = (UPackageMapClient *)(param_4->PackageMap).field0_0x0.DebugPtr;
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this->Owner,&local_120,(UObject *)0x0);
  if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat)
    ;
  }
  UPackageMapClient::GetNetFieldExportGroup(this_00,&local_138,&local_120);
  if (local_138.Object == (FNetFieldExportGroup *)0x0) {
    if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
    }
    pTVar10 = CreateNetfieldExportGroup(this,&local_60);
    if (&local_138 != pTVar10) {
      local_138.Object = pTVar10->Object;
      pTVar10->Object = (FNetFieldExportGroup *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_138.SharedReferenceCount,&pTVar10->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.SharedReferenceCount.ReferenceController);
    local_48.Object = local_138.Object;
    local_48.SharedReferenceCount.ReferenceController =
         local_138.SharedReferenceCount.ReferenceController;
    if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UPackageMapClient::AddNetFieldExportGroup(this_00,&local_120,&local_48);
    if ((local_138.Object == (FNetFieldExportGroup *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((((local_138.Object)->NetFieldExports).ArrayNum != (this->Cmds).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NetFieldExportGroup->NetFieldExports.Num() == Cmds.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                         ,0xce0,
                         L"NetFieldExports.Num() does not match number of commands! PathName = %s, NetFieldExportGroup.PathName = %s, Cmds.Num() = %d, NetFieldExports.Num() = %d"
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar6 = param_5->_padding_;
  if (param_6->ArrayNum == 0) {
    if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
    }
    SendAllProperties_BackwardsCompatible_r
              (this,local_res10,param_5,bVar12,this_00,local_138.Object,0,(this->Cmds).ArrayNum + -1
               ,param_3);
  }
  else {
    if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
    }
    local_e0.Changed = param_6;
    local_e0.ChangedIndex = 0;
    local_b8.ChangelistIterator = &local_e0;
    local_b8.Cmds = &this->Cmds;
    local_b8.HandleToCmdIndex = &this->BaseHandleToCmdIndex;
    local_b8.NumHandlesPerElement = (this->BaseHandleToCmdIndex).ArrayNum;
    local_b8.ArrayElementSize = 0;
    local_b8.MaxCmdIndex = (this->Cmds).ArrayNum + -1;
    local_b8.Owner = this->Owner;
    local_b8.MaxArrayIndex = 1;
    local_b8.MinCmdIndex = 0;
    local_b8.LastSuccessfulCmdIndex = -1;
    if (local_b8.MaxCmdIndex < 0) {
      local_128 = (FName)&local_b8;
      `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_128);
    }
    SendProperties_BackwardsCompatible_r
              (this,local_res10,this_00,local_138.Object,local_res18,param_5,bVar12,&local_b8,
               param_3);
  }
  if ((longlong)(int)lVar6 == param_5->_padding_) {
    FBitWriterMark::Pop(&local_d0,(FBitWriter *)param_5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_f0.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_f0.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_f8);
      local_f0.StatData.Pad[4] = '\0';
      local_f0.StatData.Pad[5] = '\0';
      local_f0.StatData.Pad[6] = '\0';
      local_f0.StatData.Pad[7] = '\0';
      local_f0.StatData.Pad[0] = local_f8.s.LowPart._0_1_;
      local_f0.StatData.Pad[1] = local_f8.s.LowPart._1_1_;
      local_f0.StatData.Pad[2] = local_f8.s.LowPart._2_1_;
      local_f0.StatData.Pad[3] = local_f8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_f0);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// SendProperties_BackwardsCompatible_r @ 1484f5d70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall
FRepLayout::SendProperties_BackwardsCompatible_r
          (FRepLayout *this,FSendingRepState *param_1,UPackageMapClient *param_2,
          FNetFieldExportGroup *param_3,FRepChangedPropertyTracker *param_4,FNetBitWriter *param_5,
          bool param_6,FRepHandleIterator *param_7,
          TRepDataBufferBase<0,unsigned_char_const_> param_8)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  longlong *plVar5;
  FProperty *pFVar6;
  FChangelistIterator *pFVar7;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> *pTVar9;
  UStruct *this_00;
  UPackageMap *pUVar10;
  longlong *plVar11;
  code *pcVar12;
  FNetBitWriter *pFVar13;
  longlong lVar14;
  longlong lVar15;
  FNetBitWriter *this_01;
  TRepDataBufferBase<0,unsigned_char_const_> TVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  ForElementType<FNetTracePacketContentEvent> FVar20;
  ForElementType<FNetTracePacketContentEvent> FVar21;
  FNetTraceCollector *pFVar22;
  TRepDataBufferBase<0,unsigned_char_const_> TVar23;
  FRepLayoutCmd *pFVar24;
  FNetTraceCollector *pFVar25;
  ulonglong uVar26;
  FRepHandleIterator *pFVar27;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  uint local_2cc;
  FRepLayoutCmd *local_2c8;
  undefined4 local_2c0 [2];
  int local_2b8;
  int local_2b0 [2];
  undefined4 local_2a8 [2];
  uint local_2a0;
  int local_29c [2];
  FName local_294;
  FNetTraceCollector *local_288;
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *local_280;
  FRepHandleIterator *local_278;
  FNetTraceCollector *local_270;
  FString local_268;
  FRepHandleIterator local_258;
  FString local_208;
  FString local_1f8;
  FNetBitWriter local_1e8;
  FNetBitWriter local_118;
  
  this_01 = param_5;
  local_2b8 = -1;
  FNetBitWriter::FNetBitWriter(&local_1e8,param_5->PackageMap,0);
  local_2a0 = 0xffffffff;
  plVar11 = &this_01->_padding_;
  pFVar22 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar22 = (this_01->TraceCollector).Ptr;
  }
  local_270 = pFVar22;
  if (pFVar22 != (FNetTraceCollector *)0x0) {
    local_2a0 = FNetTrace::BeginPacketContentEvent(pFVar22,NameId,(uint)*plVar11);
    uVar26 = (ulonglong)local_2a0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        Properties = UE::Net::CreatePersistentNetDebugName(L"Properties",10);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar18 = FNetTrace::TraceName(Properties);
    FVar20 = (pFVar22->Events).AllocatorInstance.SecondaryData;
    if (FVar20 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar20 = (ForElementType<FNetTracePacketContentEvent>)&pFVar22->Events;
    }
    *(uint *)((longlong)FVar20 + uVar26 * 0x10) = uVar18;
  }
  pFVar27 = param_7;
  bVar17 = FRepHandleIterator::NextHandle(param_7);
  TVar16 = param_8;
  if (bVar17) {
    local_280 = &this->Cmds;
    do {
      uVar18 = pFVar27->CmdIndex;
      uVar19 = 0;
      if ((int)uVar18 < (this->Cmds).ArrayNum) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      pFVar24 = (FRepLayoutCmd *)
                ((this->Cmds).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x20);
      local_2c8 = pFVar24;
      if ((this->Parents).ArrayNum <= (int)(uint)pFVar24->ParentIndex) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
        UE::Logging::Private::BasicLog<7>
                  (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
      }
      TVar23.Data = TVar16.Data + (longlong)pFVar27->ArrayOffset + (longlong)pFVar24->Offset;
      UPackageMapClient::TrackNetFieldExport(param_2,param_3,pFVar27->CmdIndex);
      if ((0 < pFVar27->ArrayElementSize) && (pFVar27->ArrayIndex != local_2b8)) {
        if (local_2b8 != -1) {
          uVar18 = 0xffffffff;
          local_2c0[0] = 0;
          pFVar22 = (FNetTraceCollector *)0x0;
          if (GNetTraceRuntimeVerbosity != 0) {
            pFVar22 = (this_01->TraceCollector).Ptr;
          }
          if (pFVar22 != (FNetTraceCollector *)0x0) {
            uVar18 = FNetTrace::BeginPacketContentEvent(pFVar22,NameId,(uint)*plVar11);
            if (*(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c
                        ) < ::_TSS0) {
              _Init_thread_header(&::_TSS0);
              if (::_TSS0 == -1) {
                PropertyHandle = UE::Net::CreatePersistentNetDebugName(L"PropertyHandle",0xe);
                _Init_thread_footer(&::_TSS0);
              }
            }
            uVar19 = FNetTrace::TraceName(PropertyHandle);
            FVar20 = (pFVar22->Events).AllocatorInstance.SecondaryData;
            FVar21 = (ForElementType<FNetTracePacketContentEvent>)&pFVar22->Events;
            if (FVar20 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar21 = FVar20;
            }
            *(uint *)((longlong)FVar21 + (ulonglong)uVar18 * 0x10) = uVar19;
          }
          lVar14 = *plVar11;
          (**(code **)(this_01->_padding_ + 0x1a0))(this_01,local_2c0);
          if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
            UE::Logging::Private::BasicLog<7>
                      ((FStaticBasicLogRecord *)&PTR_u_WritePropertyHa_151ae6bb8,
                       (FLogCategoryBase *)&LogRepPropertiesBackCompat);
          }
          if (param_6 != false) {
            plVar5 = (longlong *)this_01->_padding_;
            local_2e0 = 0xabadf00d;
            if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
              if ((this_01->_padding_ & 0x10000) == 0) {
                (**(code **)(this_01->_padding_ + 0x188))();
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)this_01,&local_2e0);
              }
            }
            else {
              local_2e0 = *(uint *)*plVar5;
              *plVar5 = *plVar5 + 4;
            }
            if (local_2e0 != 0xabadf00d) {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Checksum == 0xABADF00D",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                  ,0x365,L"");
              if (bVar17) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
            }
          }
          if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
             (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
            if (__CsvProfilerStat3018 == false) {
              FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
              __CsvProfilerStat3018 = true;
            }
            FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
            FNetworkProfiler::TrackWritePropertyHandle
                      (&GNetworkProfiler,(short)*plVar11 - (short)(int)lVar14,(UNetConnection *)0x0)
            ;
            FCsvProfiler::EndExclusiveStat("NetworkProfiler");
          }
          pFVar27 = param_7;
          if (uVar18 != 0xffffffff) {
            FNetTrace::EndPacketContentEvent(pFVar22,uVar18,(uint)*plVar11);
            pFVar27 = param_7;
          }
        }
        if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
          UE::Logging::Private::BasicLog<7>
                    (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
        }
        local_29c[0] = pFVar27->ArrayIndex + 1;
        (**(code **)(this_01->_padding_ + 0x1a0))(this_01,local_29c);
        local_2b8 = pFVar27->ArrayIndex;
      }
      local_2b0[0] = pFVar27->CmdIndex + 1;
      uVar18 = 0xffffffff;
      pFVar22 = (FNetTraceCollector *)0x0;
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar22 = (this_01->TraceCollector).Ptr;
      }
      if (pFVar22 != (FNetTraceCollector *)0x0) {
        uVar18 = FNetTrace::BeginPacketContentEvent(pFVar22,NameId,(uint)*plVar11);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS0) {
          _Init_thread_header(&::_TSS0);
          if (::_TSS0 == -1) {
            PropertyHandle = UE::Net::CreatePersistentNetDebugName(L"PropertyHandle",0xe);
            _Init_thread_footer(&::_TSS0);
          }
        }
        uVar19 = FNetTrace::TraceName(PropertyHandle);
        FVar20 = (pFVar22->Events).AllocatorInstance.SecondaryData;
        FVar21 = (ForElementType<FNetTracePacketContentEvent>)&pFVar22->Events;
        if (FVar20 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar21 = FVar20;
        }
        *(uint *)((longlong)FVar21 + (ulonglong)uVar18 * 0x10) = uVar19;
      }
      lVar14 = *plVar11;
      (**(code **)(this_01->_padding_ + 0x1a0))(this_01,local_2b0);
      if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
        UE::Logging::Private::BasicLog<7>
                  ((FStaticBasicLogRecord *)&PTR_u_WritePropertyHa_151ae6bb8,
                   (FLogCategoryBase *)&LogRepPropertiesBackCompat);
      }
      if (param_6 != false) {
        plVar5 = (longlong *)this_01->_padding_;
        local_2dc = 0xabadf00d;
        if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
          if ((this_01->_padding_ & 0x10000) == 0) {
            (**(code **)(this_01->_padding_ + 0x188))();
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)this_01,&local_2dc);
          }
        }
        else {
          local_2dc = *(uint *)*plVar5;
          *plVar5 = *plVar5 + 4;
        }
        if (local_2dc != 0xabadf00d) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Checksum == 0xABADF00D",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                              ,0x365,L"");
          if (bVar17) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
      }
      if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
         (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
        if (__CsvProfilerStat3018 == false) {
          FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
          __CsvProfilerStat3018 = true;
        }
        FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
        FNetworkProfiler::TrackWritePropertyHandle
                  (&GNetworkProfiler,(short)*plVar11 - (short)(int)lVar14,(UNetConnection *)0x0);
        FCsvProfiler::EndExclusiveStat("NetworkProfiler");
      }
      if (uVar18 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar22,uVar18,(uint)*plVar11);
      }
      local_2cc = 0xffffffff;
      pFVar22 = (FNetTraceCollector *)0x0;
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar22 = (this_01->TraceCollector).Ptr;
      }
      local_288 = pFVar22;
      pFVar13 = param_5;
      if (pFVar22 != (FNetTraceCollector *)0x0) {
        local_2cc = FNetTrace::BeginPacketContentEvent(pFVar22,NameId,(uint)*plVar11);
        pFVar6 = pFVar24->Property;
        uVar26 = (ulonglong)local_2cc;
        bVar17 = IsThisNotNull(pFVar6,"FField::GetFName");
        if (bVar17) {
          local_294 = (FName)pFVar6->_padding_;
        }
        else {
          local_294.ComparisonIndex.Value = 0;
          local_294.Number = 0;
        }
        uVar18 = FNetTrace::TraceName(local_294);
        FVar20 = (pFVar22->Events).AllocatorInstance.SecondaryData;
        FVar21 = (ForElementType<FNetTracePacketContentEvent>)&pFVar22->Events;
        if (FVar20 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar21 = FVar20;
        }
        *(uint *)((longlong)FVar21 + uVar26 * 0x10) = uVar18;
        pFVar13 = param_5;
      }
      pFVar27 = param_7;
      param_5._4_4_ = (undefined4)((ulonglong)pFVar13 >> 0x20);
      if (pFVar24->Type == DynamicArray) {
        pFVar7 = param_7->ChangelistIterator;
        param_5._0_4_ = *(int *)(TVar23.Data + 8);
                    /* WARNING: Load size is inaccurate */
        TVar23.Data = *TVar23.Data;
        uVar18 = pFVar7->ChangedIndex;
        pTVar8 = pFVar7->Changed;
        pFVar7->ChangedIndex = uVar18 + 1;
        uVar19 = 0;
        if ((int)uVar18 < pTVar8->ArrayNum) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar9 = pFVar27->HandleToCmdIndex;
        uVar2 = *(ushort *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar18 * 2);
        uVar3 = local_2c8->RelativeHandle;
        uVar19 = uVar3 - 1;
        iVar4 = pFVar27->ChangelistIterator->ChangedIndex;
        uVar18 = 0;
        if ((int)uVar19 < pTVar9->ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar27 = param_7;
        local_258.HandleToCmdIndex =
             *(TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> **)
              ((pTVar9->AllocatorInstance).Data + (ulonglong)uVar3 * 0x10 + -8);
        local_258.ChangelistIterator = param_7->ChangelistIterator;
        local_258.MaxCmdIndex = local_2c8->EndCmd - 1;
        local_258.MinCmdIndex = param_7->CmdIndex + 1;
        local_258.Cmds = local_280;
        local_258.NumHandlesPerElement = (local_258.HandleToCmdIndex)->ArrayNum;
        local_258.MaxArrayIndex = (int)param_5;
        local_258.Owner = param_7->Owner;
        local_258.ArrayElementSize = (int)local_2c8->ElementSize;
        local_258.LastSuccessfulCmdIndex = -1;
        if (local_258.MaxCmdIndex < local_258.MinCmdIndex) {
          local_278 = &local_258;
          `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_278);
        }
        if ((local_258.ArrayElementSize < 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayHandleIterator.ArrayElementSize> 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                ,0xc4e,L""), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((local_258.NumHandlesPerElement < 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayHandleIterator.NumHandlesPerElement> 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                ,0xc4f,L""), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FBitWriter::Reset((FBitWriter *)&local_1e8);
        if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
          UE::Logging::Private::BasicLog<7>
                    (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
        }
        FBitWriter::SerializeIntPacked((FBitWriter *)&local_1e8,(uint *)&param_5);
        if ((int)param_5 != 0) {
          if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
            UE::Logging::Private::BasicLog<7>
                      (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
          }
          SendProperties_BackwardsCompatible_r
                    (this,param_1,param_2,param_3,param_4,&local_1e8,param_6,&local_258,TVar23);
        }
        local_29c[1] = 0;
        FBitWriter::SerializeIntPacked((FBitWriter *)&local_1e8,(uint *)(local_29c + 1));
        if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
          UE::Logging::Private::BasicLog<7>
                    (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
        }
        local_2d4 = (undefined4)local_1e8._padding_;
        (**(code **)(this_01->_padding_ + 0x1a0))(this_01,&local_2d4);
        pcVar12 = *(code **)(this_01->_padding_ + 400);
        if (((local_1e8._padding_._1_1_ & 2) != 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("!IsError()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                                ,0x49,L""), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        (*pcVar12)(this_01,local_1e8._padding_);
        if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
          UE::Logging::Private::BasicLog<7>
                    (&::LOG_Static,(FLogCategoryBase *)&LogRepPropertiesBackCompat);
        }
        if ((pFVar27->ChangelistIterator->ChangedIndex - iVar4 != (uint)uVar2) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("HandleIterator.ChangelistIterator.ChangedIndex - OldChangedIndex == ArrayChangedCount"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                ,0xc66,L""), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar18 = pFVar27->ChangelistIterator->ChangedIndex;
        pTVar8 = pFVar27->ChangelistIterator->Changed;
        uVar19 = 0;
        if ((int)uVar18 < pTVar8->ArrayNum) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((*(short *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar18 * 2) != 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("HandleIterator.ChangelistIterator.Changed[HandleIterator.ChangelistIterator.ChangedIndex] == 0"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                ,0xc67,L""), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        piVar1 = &pFVar27->ChangelistIterator->ChangedIndex;
        *piVar1 = *piVar1 + 1;
        if (local_2cc != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(local_288,local_2cc,(uint)*plVar11);
        }
      }
      else {
        iVar4 = param_7->CmdIndex;
        this_00 = this->Owner;
        param_5 = pFVar13;
        if ((0 < GDoReplicationContextString) &&
           (pUVar10 = this_01->PackageMap, pUVar10 != (UPackageMap *)0x0)) {
          FField::GetPathName((FField *)local_2c8->Property,&local_1f8,(UObject *)0x0);
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_208,(UObject *)0x0);
          ::FString::PrintfImpl(&local_268,L"%s - %s");
          ::FString::operator=(&pUVar10->DebugContextString,&local_268);
          if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_268.Data.AllocatorInstance.Data);
          }
          if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Data.AllocatorInstance.Data);
          }
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
        }
        lVar14 = *plVar11;
        FNetBitWriter::FNetBitWriter(&local_118,this_01->PackageMap,0);
        (**(code **)(local_2c8->Property->_padding_ + 200))
                  (local_2c8->Property,&local_118,local_118.PackageMap,TVar23.Data,0);
        if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
          UE::Logging::Private::BasicLog<7>
                    ((FStaticBasicLogRecord *)&PTR_u_WriteProperty_B_151ae6c38,
                     (FLogCategoryBase *)&LogRepPropertiesBackCompat);
        }
        local_2d0 = (undefined4)local_118._padding_;
        (**(code **)(this_01->_padding_ + 0x1a0))(this_01,&local_2d0);
        pcVar12 = *(code **)(this_01->_padding_ + 400);
        if ((local_118._padding_._1_1_ & 2) != 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("!IsError()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                              ,0x49,L"");
          if (bVar17) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        (*pcVar12)(this_01,local_118._padding_);
        if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
          UE::Logging::Private::BasicLog<7>
                    ((FStaticBasicLogRecord *)&PTR_u_WriteProperty_B_151ae6cd8,
                     (FLogCategoryBase *)&LogRepPropertiesBackCompat);
        }
        lVar15 = *plVar11;
        if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
           (pFVar24 = local_2c8, GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
          if (__CsvProfilerStat3071 == false) {
            FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
            __CsvProfilerStat3071 = true;
          }
          FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
          pFVar24 = local_2c8;
          FNetworkProfiler::TrackReplicateProperty
                    (&GNetworkProfiler,local_2c8->Property,(short)(int)lVar15 - (short)(int)lVar14,
                     (UNetConnection *)0x0);
          FCsvProfiler::EndExclusiveStat("NetworkProfiler");
        }
        if ((0 < GDoReplicationContextString) && (this_01->PackageMap != (UPackageMap *)0x0)) {
          ::FString::Empty(&this_01->PackageMap->DebugContextString);
        }
        if (param_6 != false) {
          SerializeReadWritePropertyChecksum<0>(pFVar24,iVar4,TVar23,(FBitArchive *)this_01);
        }
        FBitWriter::~FBitWriter((FBitWriter *)&local_118);
        pFVar27 = param_7;
        if (local_2cc != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(local_288,local_2cc,(uint)*plVar11);
          pFVar27 = param_7;
        }
      }
      bVar17 = FRepHandleIterator::NextHandle(pFVar27);
      pFVar22 = local_270;
    } while (bVar17);
  }
  local_2a8[0] = 0;
  pFVar25 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar25 = (this_01->TraceCollector).Ptr;
  }
  uVar18 = 0xffffffff;
  if (pFVar25 != (FNetTraceCollector *)0x0) {
    uVar18 = FNetTrace::BeginPacketContentEvent(pFVar25,NameId,(uint)this_01->_padding_);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        PropertyHandle = UE::Net::CreatePersistentNetDebugName(L"PropertyHandle",0xe);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar19 = FNetTrace::TraceName(PropertyHandle);
    FVar20 = (pFVar25->Events).AllocatorInstance.SecondaryData;
    if (FVar20 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar20 = (ForElementType<FNetTracePacketContentEvent>)&pFVar25->Events;
    }
    *(uint *)((longlong)FVar20 + (ulonglong)uVar18 * 0x10) = uVar19;
  }
  lVar14 = this_01->_padding_;
  (**(code **)(this_01->_padding_ + 0x1a0))(this_01,local_2a8);
  if (6 < (byte)LogRepPropertiesBackCompat._0_1_) {
    UE::Logging::Private::BasicLog<7>
              ((FStaticBasicLogRecord *)&PTR_u_WritePropertyHa_151ae6bb8,
               (FLogCategoryBase *)&LogRepPropertiesBackCompat);
  }
  if (param_6 != false) {
    plVar11 = (longlong *)this_01->_padding_;
    local_2d8 = 0xabadf00d;
    if ((uint *)plVar11[1] < (uint *)*plVar11 + 1) {
      if ((this_01->_padding_ & 0x10000) == 0) {
        (**(code **)(this_01->_padding_ + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this_01,&local_2d8);
      }
    }
    else {
      local_2d8 = *(uint *)*plVar11;
      *plVar11 = *plVar11 + 4;
    }
    if (local_2d8 != 0xabadf00d) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Checksum == 0xABADF00D",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                          ,0x365,L"");
      if (bVar17) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
     (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
    if (__CsvProfilerStat3018 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
      __CsvProfilerStat3018 = true;
    }
    FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
    FNetworkProfiler::TrackWritePropertyHandle
              (&GNetworkProfiler,(short)this_01->_padding_ - (short)(int)lVar14,
               (UNetConnection *)0x0);
    FCsvProfiler::EndExclusiveStat("NetworkProfiler");
  }
  if (uVar18 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar25,uVar18,(uint)this_01->_padding_);
  }
  if (local_2a0 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar22,local_2a0,(uint)this_01->_padding_);
  }
  FBitWriter::~FBitWriter((FBitWriter *)&local_1e8);
  return;
}

// SendProperties_r @ 1484f6dd0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRepLayout::SendProperties_r
          (FRepLayout *this,FSendingRepState *param_1,FNetBitWriter *param_2,bool param_3,
          FRepHandleIterator *param_4,TRepDataBufferBase<0,unsigned_char_const_> param_5,int param_6
          ,FRepSerializationSharedInfo *param_7,ESerializePropertyType param_8)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  ushort uVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  longlong *plVar6;
  FProperty *pFVar7;
  FChangelistIterator *pFVar8;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> *pTVar10;
  UPackageMap *pUVar11;
  FNetBitWriter *pFVar12;
  code *pcVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  FNetTraceCollector *pFVar22;
  ForElementType<FNetTracePacketContentEvent> FVar23;
  FNetTraceCollector *pFVar24;
  ulonglong uVar25;
  ForAnyElementType FVar26;
  TRepDataBufferBase<0,unsigned_char_const_> TVar27;
  ForAnyElementType FVar28;
  FScriptContainerElement *pFVar29;
  FRepLayoutCmd *pFVar30;
  ushort local_194 [2];
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_180 [2];
  FRepLayoutCmd *local_178;
  uint local_170;
  uint local_16c [3];
  uint local_160;
  FName local_15c;
  FName local_154;
  FName local_14c;
  FName local_144;
  FName local_13c;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_130;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_120;
  FNetTraceCollector *local_110;
  FScriptContainerElement *local_108;
  FBitWriterMark local_100;
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *local_f0;
  FRepHandleIterator *local_e8;
  FNetTraceCollector *local_e0;
  FString local_d8;
  FString local_c8;
  FRepHandleIterator local_b8;
  FString local_68;
  FString local_58;
  
  if ((param_7 == (FRepSerializationSharedInfo *)0x0) ||
     (bVar14 = true, GNetSharedSerializedData == 0)) {
    bVar14 = false;
  }
  bVar17 = FRepHandleIterator::NextHandle(param_4);
  if (bVar17) {
    local_f0 = &this->Cmds;
    do {
      uVar20 = param_4->CmdIndex;
      uVar18 = 0;
      if ((int)uVar20 < (this->Cmds).ArrayNum) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar30 = (FRepLayoutCmd *)
                ((this->Cmds).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x20);
      uVar3 = pFVar30->ParentIndex;
      local_178 = pFVar30;
      if (((this->Parents).ArrayNum <= (int)(uint)uVar3) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      local_108 = (this->Parents).AllocatorInstance.Data + (ulonglong)uVar3 * 0x30;
      if (6 < (byte)LogRepProperties._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRepProperties);
      }
      TVar27.Data = param_5.Data + (longlong)param_4->ArrayOffset + (longlong)pFVar30->Offset;
      if (pFVar30->Type == DynamicArray) {
        if (param_8 == Handle) {
          iVar21 = param_4->Handle;
          uVar18 = 0xffffffff;
          uVar20 = (uint)param_2->_padding_;
          pFVar22 = (FNetTraceCollector *)0x0;
          if (GNetTraceRuntimeVerbosity != 0) {
            pFVar22 = (param_2->TraceCollector).Ptr;
          }
          if (pFVar22 != (FNetTraceCollector *)0x0) {
            uVar18 = FNetTrace::BeginPacketContentEvent(pFVar22,NameId,uVar20);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              PropertyHandle = UE::Net::CreatePersistentNetDebugName(L"PropertyHandle",0xe);
              _Init_thread_footer(&::_TSS0);
            }
            uVar19 = FNetTrace::TraceName(PropertyHandle);
            FVar5 = (pFVar22->Events).AllocatorInstance.SecondaryData;
            FVar23 = (ForElementType<FNetTracePacketContentEvent>)&pFVar22->Events;
            if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar23 = FVar5;
            }
            *(uint *)((longlong)FVar23 + (ulonglong)uVar18 * 0x10) = uVar19;
          }
          local_16c[0] = (uint)(ushort)iVar21;
          (**(code **)(param_2->_padding_ + 0x1a0))(param_2,local_16c);
          if (6 < (byte)LogRepProperties._0_1_) {
            UE::Logging::Private::BasicLog<7>
                      ((FStaticBasicLogRecord *)&PTR_u_WritePropertyHa_151ae5800,
                       (FLogCategoryBase *)&LogRepProperties);
          }
          if (param_3) {
            plVar6 = (longlong *)param_2->_padding_;
            local_18c = 0xabadf00d;
            if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
              if ((param_2->_padding_ & 0x10000) == 0) {
                (**(code **)(param_2->_padding_ + 0x188))();
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)param_2,&local_18c);
              }
            }
            else {
              local_18c = *(uint *)*plVar6;
              *plVar6 = *plVar6 + 4;
            }
            if ((local_18c != 0xabadf00d) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Checksum == 0xABADF00D",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                    ,0x365,L""), bVar17)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
             (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
            if (__CsvProfilerStat1943 == false) {
              FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
              __CsvProfilerStat1943 = true;
            }
            FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
            FNetworkProfiler::TrackWritePropertyHandle
                      (&GNetworkProfiler,(short)param_2->_padding_ - (short)uVar20,
                       (UNetConnection *)0x0);
            FCsvProfiler::EndExclusiveStat("NetworkProfiler");
          }
          if (uVar18 != 0xffffffff) {
            FNetTrace::EndPacketContentEvent(pFVar22,uVar18,(uint)param_2->_padding_);
          }
        }
        else if (param_8 == Name) {
          pFVar7 = pFVar30->Property;
          bVar17 = IsThisNotNull(pFVar7,"FField::GetFName");
          if (bVar17) {
            local_15c = (FName)pFVar7->_padding_;
          }
          else {
            local_15c.ComparisonIndex.Value = 0;
            local_15c.Number = 0;
          }
          WritePropertyName(param_2,&local_15c,param_3);
        }
        local_190 = 0xffffffff;
        pFVar22 = (FNetTraceCollector *)0x0;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar22 = (param_2->TraceCollector).Ptr;
        }
        if (pFVar22 != (FNetTraceCollector *)0x0) {
          local_190 = FNetTrace::BeginPacketContentEvent(pFVar22,NameId,(uint)param_2->_padding_);
          uVar25 = (ulonglong)local_190;
          pFVar7 = local_178->Property;
          bVar17 = IsThisNotNull(pFVar7,"FField::GetFName");
          if (bVar17) {
            local_154 = (FName)pFVar7->_padding_;
          }
          else {
            local_154.ComparisonIndex.Value = 0;
            local_154.Number = 0;
          }
          uVar20 = FNetTrace::TraceName(local_154);
          FVar5 = (pFVar22->Events).AllocatorInstance.SecondaryData;
          FVar23 = (ForElementType<FNetTracePacketContentEvent>)&pFVar22->Events;
          if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar23 = FVar5;
          }
          *(uint *)((longlong)FVar23 + uVar25 * 0x10) = uVar20;
        }
        plVar6 = (longlong *)param_2->_padding_;
        local_194[0] = *(ushort *)(TVar27.Data + 8);
                    /* WARNING: Load size is inaccurate */
        TVar27.Data = *TVar27.Data;
        if ((ushort *)plVar6[1] < (ushort *)*plVar6 + 1) {
          if ((param_2->_padding_ & 0x10000) == 0) {
            (**(code **)(param_2->_padding_ + 0x188))(param_2,local_194,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)param_2,local_194);
          }
        }
        else {
          local_194[0] = *(ushort *)*plVar6;
          *plVar6 = *plVar6 + 2;
        }
        if (6 < (byte)LogRepProperties._0_1_) {
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRepProperties);
        }
        pFVar8 = param_4->ChangelistIterator;
        uVar20 = pFVar8->ChangedIndex;
        pTVar9 = pFVar8->Changed;
        pFVar8->ChangedIndex = uVar20 + 1;
        uVar18 = 0;
        if ((int)uVar20 < pTVar9->ArrayNum) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar3 = *(ushort *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar20 * 2);
        pTVar10 = param_4->HandleToCmdIndex;
        iVar21 = param_4->ChangelistIterator->ChangedIndex;
        uVar4 = local_178->RelativeHandle;
        uVar18 = uVar4 - 1;
        uVar20 = 0;
        if ((int)uVar18 < pTVar10->ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_b8.HandleToCmdIndex =
             *(TArray<FHandleToCmdIndex,TSizedDefaultAllocator<32>_> **)
              ((pTVar10->AllocatorInstance).Data + (ulonglong)uVar4 * 0x10 + -8);
        local_b8.ChangelistIterator = param_4->ChangelistIterator;
        local_b8.MaxCmdIndex = local_178->EndCmd - 1;
        local_b8.MinCmdIndex = param_4->CmdIndex + 1;
        local_b8.Cmds = local_f0;
        local_b8.NumHandlesPerElement = (local_b8.HandleToCmdIndex)->ArrayNum;
        local_b8.MaxArrayIndex = (int)local_194[0];
        local_b8.Owner = param_4->Owner;
        local_b8.ArrayElementSize = (int)local_178->ElementSize;
        local_b8.LastSuccessfulCmdIndex = -1;
        if (local_b8.MaxCmdIndex < local_b8.MinCmdIndex) {
          local_e8 = &local_b8;
          `FRepHandleIterator::FRepHandleIterator'::__l2::<lambda_1>::operator()(&local_e8);
        }
        if ((local_b8.ArrayElementSize < 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayHandleIterator.ArrayElementSize> 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                ,0xb05,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if ((local_b8.NumHandlesPerElement < 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayHandleIterator.NumHandlesPerElement> 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                ,0xb06,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        SendProperties_r(this,param_1,param_2,param_3,&local_b8,TVar27,param_6 + 1,param_7,param_8);
        if ((param_4->ChangelistIterator->ChangedIndex - iVar21 != (uint)uVar3) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("HandleIterator.ChangelistIterator.ChangedIndex - OldChangedIndex == ArrayChangedCount"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                ,0xb0a,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar20 = param_4->ChangelistIterator->ChangedIndex;
        pTVar9 = param_4->ChangelistIterator->Changed;
        uVar18 = 0;
        if ((int)uVar20 < pTVar9->ArrayNum) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if ((*(short *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar20 * 2) != 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("HandleIterator.ChangelistIterator.Changed[HandleIterator.ChangelistIterator.ChangedIndex] == 0"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                ,0xb0b,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar18 = 0xffffffff;
        piVar1 = &param_4->ChangelistIterator->ChangedIndex;
        *piVar1 = *piVar1 + 1;
        uVar20 = (uint)param_2->_padding_;
        pFVar24 = (FNetTraceCollector *)0x0;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar24 = (param_2->TraceCollector).Ptr;
        }
        if (pFVar24 != (FNetTraceCollector *)0x0) {
          uVar18 = FNetTrace::BeginPacketContentEvent(pFVar24,NameId,uVar20);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            PropertyHandle = UE::Net::CreatePersistentNetDebugName(L"PropertyHandle",0xe);
            _Init_thread_footer(&::_TSS0);
          }
          uVar19 = FNetTrace::TraceName(PropertyHandle);
          FVar5 = (pFVar24->Events).AllocatorInstance.SecondaryData;
          FVar23 = (ForElementType<FNetTracePacketContentEvent>)&pFVar24->Events;
          if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar23 = FVar5;
          }
          *(uint *)((longlong)FVar23 + (ulonglong)uVar18 * 0x10) = uVar19;
        }
        local_16c[1] = 0;
        (**(code **)(param_2->_padding_ + 0x1a0))(param_2,local_16c + 1);
        if (6 < (byte)LogRepProperties._0_1_) {
          UE::Logging::Private::BasicLog<7>
                    ((FStaticBasicLogRecord *)&PTR_u_WritePropertyHa_151ae5800,
                     (FLogCategoryBase *)&LogRepProperties);
        }
        if (param_3) {
          plVar6 = (longlong *)param_2->_padding_;
          local_188 = 0xabadf00d;
          if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
            if ((param_2->_padding_ & 0x10000) == 0) {
              (**(code **)(param_2->_padding_ + 0x188))();
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)param_2,&local_188);
            }
          }
          else {
            local_188 = *(uint *)*plVar6;
            *plVar6 = *plVar6 + 4;
          }
          if ((local_188 != 0xabadf00d) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Checksum == 0xABADF00D",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                  ,0x365,L""), bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
        if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
           (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
          if (__CsvProfilerStat1943 == false) {
            FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
            __CsvProfilerStat1943 = true;
          }
          FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
          FNetworkProfiler::TrackWritePropertyHandle
                    (&GNetworkProfiler,(short)param_2->_padding_ - (short)uVar20,
                     (UNetConnection *)0x0);
          FCsvProfiler::EndExclusiveStat("NetworkProfiler");
        }
        if (uVar18 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar24,uVar18,(uint)param_2->_padding_);
        }
        if (local_190 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar22,local_190,(uint)param_2->_padding_);
        }
      }
      else {
        if ((0 < GDoReplicationContextString) &&
           (pUVar11 = param_2->PackageMap, pUVar11 != (UPackageMap *)0x0)) {
          FField::GetPathName((FField *)pFVar30->Property,&local_58,(UObject *)0x0);
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->Owner,&local_68,(UObject *)0x0);
          ::FString::PrintfImpl(&local_c8,L"%s - %s");
          ::FString::operator=(&pUVar11->DebugContextString,&local_c8);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        if ((bVar14) && ((pFVar30->Flags & IsSharedSerialization) != None)) {
          pFVar29 = (param_7->SharedPropertyInfo).AllocatorInstance.Data;
          pFVar2 = pFVar29 + (longlong)(param_7->SharedPropertyInfo).ArrayNum * 0x28;
          for (; pFVar29 != pFVar2; pFVar29 = pFVar29 + 0x28) {
            if ((((*(int *)pFVar29 == param_4->CmdIndex) &&
                 (*(int *)(pFVar29 + 4) == param_4->ArrayIndex)) &&
                (*(int *)(pFVar29 + 8) == param_6)) && (*(uchar **)(pFVar29 + 0x10) == TVar27.Data))
            {
              if (pFVar29 != (FScriptContainerElement *)0x0) {
                if (((param_7->SerializedProperties).Ptr == (FNetBitWriter *)0x0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("SharedInfo->SerializedProperties.IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                        ,0xb29,L""), bVar17)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_170 = 0xffffffff;
                pFVar22 = (FNetTraceCollector *)0x0;
                if (GNetTraceRuntimeVerbosity != 0) {
                  pFVar22 = (param_2->TraceCollector).Ptr;
                }
                local_e0 = pFVar22;
                if (pFVar22 != (FNetTraceCollector *)0x0) {
                  local_170 = FNetTrace::BeginPacketContentEvent
                                        (pFVar22,NameId,(uint)param_2->_padding_);
                  uVar25 = (ulonglong)local_170;
                  pFVar7 = local_178->Property;
                  bVar17 = IsThisNotNull(pFVar7,"FField::GetFName");
                  if (bVar17) {
                    local_14c = (FName)pFVar7->_padding_;
                  }
                  else {
                    local_14c.ComparisonIndex.Value = 0;
                    local_14c.Number = 0;
                  }
                  uVar20 = FNetTrace::TraceName(local_14c);
                  FVar5 = (pFVar22->Events).AllocatorInstance.SecondaryData;
                  FVar23 = (ForElementType<FNetTracePacketContentEvent>)&pFVar22->Events;
                  if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
                    FVar23 = FVar5;
                  }
                  *(uint *)((longlong)FVar23 + uVar25 * 0x10) = uVar20;
                }
                local_190 = 0xffffffff;
                pFVar22 = (FNetTraceCollector *)0x0;
                if (GNetTraceRuntimeVerbosity != 0) {
                  pFVar22 = (param_2->TraceCollector).Ptr;
                }
                local_110 = pFVar22;
                if (pFVar22 != (FNetTraceCollector *)0x0) {
                  local_190 = FNetTrace::BeginPacketContentEvent
                                        (pFVar22,NameId,(uint)param_2->_padding_);
                  uVar25 = (ulonglong)local_190;
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
                  {
                    Shared = UE::Net::CreatePersistentNetDebugName(L"Shared",6);
                    _Init_thread_footer(&::_TSS0);
                  }
                  uVar20 = FNetTrace::TraceName(Shared);
                  FVar5 = (pFVar22->Events).AllocatorInstance.SecondaryData;
                  FVar23 = (ForElementType<FNetTracePacketContentEvent>)&pFVar22->Events;
                  if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
                    FVar23 = FVar5;
                  }
                  *(uint *)((longlong)FVar23 + uVar25 * 0x10) = uVar20;
                }
                if (6 < (byte)LogRepProperties._0_1_) {
                  ::FString::PrintfImpl(&local_d8,L"{Cmd: %u, Index: %u, Depth: %u, Ptr: 0x%08llx}")
                  ;
                  UE::Logging::Private::BasicLog<7>
                            (&::LOG_Static,(FLogCategoryBase *)&LogRepProperties);
                  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                  }
                }
                GNumSharedSerializationHit = GNumSharedSerializationHit + 1;
                if (GNetVerifyShareSerializedData == 0) {
                  pcVar13 = *(code **)(param_2->_padding_ + 0x268);
                  pFVar12 = (param_7->SerializedProperties).Ptr;
                  if (((pFVar12->_padding_ & 0x200) != 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("!IsError()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                                          ,0x49,L""), bVar17)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  (*pcVar13)(param_2,pFVar12->_padding_);
                }
                else {
                  local_100.Num = param_2->_padding_;
                  local_100.Overflowed =
                       (bool)(*(byte *)((longlong)&param_2->_padding_ + 1) >> 1 & 1);
                  if (6 < (byte)LogRepProperties._0_1_) {
                    UE::Logging::Private::BasicLog<7>
                              (&::LOG_Static,(FLogCategoryBase *)&LogRepProperties);
                  }
                  uVar20 = (uint)param_2->_padding_;
                  iVar21 = param_4->Handle;
                  pFVar22 = (FNetTraceCollector *)0x0;
                  if (GNetTraceRuntimeVerbosity != 0) {
                    pFVar22 = (param_2->TraceCollector).Ptr;
                  }
                  uVar18 = 0xffffffff;
                  if (pFVar22 != (FNetTraceCollector *)0x0) {
                    uVar18 = FNetTrace::BeginPacketContentEvent(pFVar22,NameId,uVar20);
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x9d4c) < ::_TSS0) &&
                       (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                      PropertyHandle = UE::Net::CreatePersistentNetDebugName(L"PropertyHandle",0xe);
                      _Init_thread_footer(&::_TSS0);
                    }
                    uVar19 = FNetTrace::TraceName(PropertyHandle);
                    FVar5 = (pFVar22->Events).AllocatorInstance.SecondaryData;
                    FVar23 = (ForElementType<FNetTracePacketContentEvent>)&pFVar22->Events;
                    if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
                      FVar23 = FVar5;
                    }
                    *(uint *)((longlong)FVar23 + (ulonglong)uVar18 * 0x10) = uVar19;
                  }
                  local_16c[2] = (uint)(ushort)iVar21;
                  (**(code **)(param_2->_padding_ + 0x1a0))(param_2,local_16c + 2);
                  if (6 < (byte)LogRepProperties._0_1_) {
                    UE::Logging::Private::BasicLog<7>
                              ((FStaticBasicLogRecord *)&PTR_u_WritePropertyHa_151ae5800,
                               (FLogCategoryBase *)&LogRepProperties);
                  }
                  if (param_3) {
                    plVar6 = (longlong *)param_2->_padding_;
                    local_184 = 0xabadf00d;
                    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
                      if ((param_2->_padding_ & 0x10000) == 0) {
                        (**(code **)(param_2->_padding_ + 0x188))();
                      }
                      else {
                        FArchive::SerializeByteOrderSwapped((FArchive *)param_2,&local_184);
                      }
                    }
                    else {
                      local_184 = *(uint *)*plVar6;
                      *plVar6 = *plVar6 + 4;
                    }
                    if ((local_184 != 0xabadf00d) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Checksum == 0xABADF00D",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                            ,0x365,L""), bVar17)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                  }
                  if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
                     (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
                    if (__CsvProfilerStat1943 == false) {
                      FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
                      __CsvProfilerStat1943 = true;
                    }
                    FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
                    FNetworkProfiler::TrackWritePropertyHandle
                              (&GNetworkProfiler,(short)param_2->_padding_ - (short)uVar20,
                               (UNetConnection *)0x0);
                    FCsvProfiler::EndExclusiveStat("NetworkProfiler");
                  }
                  if (uVar18 != 0xffffffff) {
                    FNetTrace::EndPacketContentEvent(pFVar22,uVar18,(uint)param_2->_padding_);
                  }
                  pFVar30 = local_178;
                  (**(code **)(local_178->Property->_padding_ + 200))
                            (local_178->Property,param_2,param_2->PackageMap,TVar27.Data,0);
                  if (param_3) {
                    SerializeReadWritePropertyChecksum<0>
                              (pFVar30,param_4->CmdIndex,TVar27,(FBitArchive *)param_2);
                  }
                  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_130.ArrayNum = 0;
                  local_130.ArrayMax = 0;
                  FBitWriterMark::Copy(&local_100,(FBitWriter *)param_2,&local_130);
                  FBitWriterMark::Pop(&local_100,(FBitWriter *)param_2);
                  iVar21 = *(int *)(pFVar29 + 0x18);
                  pcVar13 = *(code **)(param_2->_padding_ + 0x268);
                  pFVar12 = (param_7->SerializedProperties).Ptr;
                  if (((pFVar12->_padding_ & 0x200) != 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("!IsError()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                                          ,0x49,L""), bVar17)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  (*pcVar13)(param_2,pFVar12->_padding_,iVar21);
                  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_120.ArrayNum = 0;
                  local_120.ArrayMax = 0;
                  FBitWriterMark::Copy(&local_100,(FBitWriter *)param_2,&local_120);
                  FVar28.Data = local_120.AllocatorInstance.Data;
                  FVar26.Data = local_130.AllocatorInstance.Data;
                  if (((local_130.ArrayNum != local_120.ArrayNum) ||
                      ((local_130.ArrayNum != 0 &&
                       (iVar21 = memcmp(local_130.AllocatorInstance.Data,
                                        local_120.AllocatorInstance.Data,
                                        (longlong)local_130.ArrayNum), iVar21 != 0)))) &&
                     (1 < (byte)LogRep._0_1_)) {
                    UE::Logging::Private::BasicLog<2>
                              ((FStaticBasicLogRecord *)&PTR_u_Shared_serializ_151ae6858,
                               (FLogCategoryBase *)&LogRep);
                    FVar26.Data = local_130.AllocatorInstance.Data;
                    FVar28.Data = local_120.AllocatorInstance.Data;
                  }
                  if (FVar28.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar28.Data);
                    FVar26.Data = local_130.AllocatorInstance.Data;
                  }
                  pFVar22 = local_110;
                  if (FVar26.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar26.Data);
                    pFVar22 = local_110;
                  }
                }
                if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
                   (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
                  if (__CsvProfilerStat2900 == false) {
                    FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
                    __CsvProfilerStat2900 = true;
                  }
                  FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
                  FNetworkProfiler::TrackReplicateProperty
                            (&GNetworkProfiler,*(FProperty **)local_108,*(ushort *)(pFVar29 + 0x24),
                             (UNetConnection *)0x0);
                  FCsvProfiler::EndExclusiveStat("NetworkProfiler");
                }
                if (local_190 != 0xffffffff) {
                  FNetTrace::EndPacketContentEvent(pFVar22,local_190,(uint)param_2->_padding_);
                }
                pFVar22 = local_e0;
                uVar20 = local_170;
                if (local_170 == 0xffffffff) goto LAB_1484f821b;
                goto LAB_1484f820f;
              }
              break;
            }
          }
        }
        GNumSharedSerializationMiss = GNumSharedSerializationMiss + 1;
        if (param_8 == Handle) {
          iVar21 = param_4->Handle;
          uVar18 = 0xffffffff;
          uVar20 = (uint)param_2->_padding_;
          pFVar22 = (FNetTraceCollector *)0x0;
          if (GNetTraceRuntimeVerbosity != 0) {
            pFVar22 = (param_2->TraceCollector).Ptr;
          }
          if (pFVar22 != (FNetTraceCollector *)0x0) {
            uVar18 = FNetTrace::BeginPacketContentEvent(pFVar22,NameId,uVar20);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              PropertyHandle = UE::Net::CreatePersistentNetDebugName(L"PropertyHandle",0xe);
              _Init_thread_footer(&::_TSS0);
            }
            uVar19 = FNetTrace::TraceName(PropertyHandle);
            FVar5 = (pFVar22->Events).AllocatorInstance.SecondaryData;
            FVar23 = (ForElementType<FNetTracePacketContentEvent>)&pFVar22->Events;
            if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar23 = FVar5;
            }
            *(uint *)((longlong)FVar23 + (ulonglong)uVar18 * 0x10) = uVar19;
          }
          local_160 = (uint)(ushort)iVar21;
          (**(code **)(param_2->_padding_ + 0x1a0))(param_2,&local_160);
          if (6 < (byte)LogRepProperties._0_1_) {
            UE::Logging::Private::BasicLog<7>
                      ((FStaticBasicLogRecord *)&PTR_u_WritePropertyHa_151ae5800,
                       (FLogCategoryBase *)&LogRepProperties);
          }
          if (param_3) {
            plVar6 = (longlong *)param_2->_padding_;
            local_180[0] = 0xabadf00d;
            if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
              if ((param_2->_padding_ & 0x10000) == 0) {
                (**(code **)(param_2->_padding_ + 0x188))();
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)param_2,local_180);
              }
            }
            else {
              local_180[0] = *(uint *)*plVar6;
              *plVar6 = *plVar6 + 4;
            }
            if ((local_180[0] != 0xabadf00d) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Checksum == 0xABADF00D",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                    ,0x365,L""), bVar17)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
             (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
            if (__CsvProfilerStat1943 == false) {
              FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
              __CsvProfilerStat1943 = true;
            }
            FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
            FNetworkProfiler::TrackWritePropertyHandle
                      (&GNetworkProfiler,(short)param_2->_padding_ - (short)uVar20,
                       (UNetConnection *)0x0);
            FCsvProfiler::EndExclusiveStat("NetworkProfiler");
          }
          pFVar30 = local_178;
          if (uVar18 != 0xffffffff) {
            FNetTrace::EndPacketContentEvent(pFVar22,uVar18,(uint)param_2->_padding_);
            pFVar30 = local_178;
          }
        }
        else if (param_8 == Name) {
          pFVar7 = pFVar30->Property;
          bVar17 = IsThisNotNull(pFVar7,"FField::GetFName");
          if (bVar17) {
            local_144 = (FName)pFVar7->_padding_;
          }
          else {
            local_144.ComparisonIndex.Value = 0;
            local_144.Number = 0;
          }
          WritePropertyName(param_2,&local_144,param_3);
        }
        else if (1 < (byte)LogRep._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        }
        uVar20 = 0xffffffff;
        pFVar22 = (FNetTraceCollector *)0x0;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar22 = (param_2->TraceCollector).Ptr;
        }
        if (pFVar22 != (FNetTraceCollector *)0x0) {
          uVar20 = FNetTrace::BeginPacketContentEvent(pFVar22,NameId,(uint)param_2->_padding_);
          pFVar7 = pFVar30->Property;
          bVar17 = IsThisNotNull(pFVar7,"FField::GetFName");
          if (bVar17) {
            local_13c = (FName)pFVar7->_padding_;
          }
          else {
            local_13c.ComparisonIndex.Value = 0;
            local_13c.Number = 0;
          }
          uVar18 = FNetTrace::TraceName(local_13c);
          FVar5 = (pFVar22->Events).AllocatorInstance.SecondaryData;
          FVar23 = (ForElementType<FNetTracePacketContentEvent>)&pFVar22->Events;
          if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar23 = FVar5;
          }
          *(uint *)((longlong)FVar23 + (ulonglong)uVar20 * 0x10) = uVar18;
        }
        lVar15 = param_2->_padding_;
        (**(code **)(local_178->Property->_padding_ + 200))
                  (local_178->Property,param_2,param_2->PackageMap,TVar27.Data,0);
        if (6 < (byte)LogRepProperties._0_1_) {
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRepProperties);
        }
        lVar16 = param_2->_padding_;
        if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
           (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
          if (__CsvProfilerStat2929 == false) {
            FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
            __CsvProfilerStat2929 = true;
          }
          FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
          FNetworkProfiler::TrackReplicateProperty
                    (&GNetworkProfiler,*(FProperty **)local_108,
                     (short)(int)lVar16 - (short)(int)lVar15,(UNetConnection *)0x0);
          FCsvProfiler::EndExclusiveStat("NetworkProfiler");
        }
        if (param_3) {
          SerializeReadWritePropertyChecksum<0>
                    (local_178,param_4->CmdIndex,TVar27,(FBitArchive *)param_2);
        }
        if (uVar20 != 0xffffffff) {
LAB_1484f820f:
          FNetTrace::EndPacketContentEvent(pFVar22,uVar20,(uint)param_2->_padding_);
        }
LAB_1484f821b:
        if ((0 < GDoReplicationContextString) && (param_2->PackageMap != (UPackageMap *)0x0)) {
          ::FString::Empty(&param_2->PackageMap->DebugContextString);
        }
      }
      bVar17 = FRepHandleIterator::NextHandle(param_4);
    } while (bVar17);
  }
  return;
}

// SerializeObjectReplicatedProperties @ 1484f9920

void __thiscall
FRepLayout::SerializeObjectReplicatedProperties
          (FRepLayout *this,UObject *param_1,FBitArchive *param_2)

{
  ushort uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool local_res8 [8];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FRepLayout::SerializeObjectReplicatedProperties'::__l2::
           _dynamic_atexit_destructor_for__Empty__);
    _Init_thread_footer(&::_TSS0);
  }
  uVar10 = 0;
  uVar8 = uVar10;
  uVar11 = uVar10;
  if (0 < (this->Parents).ArrayNum) {
    do {
      uVar7 = (uint)uVar8;
      uVar9 = ~uVar7 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar7 < (this->Parents).ArrayNum) {
        uVar5 = uVar9;
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
      uVar8 = *(ulonglong *)((this->Parents).AllocatorInstance.Data + uVar11);
      if ((uVar8 == 0) || ((*(uint *)(*(longlong *)(uVar8 + 8) + 0x18) >> 0x14 & 1) == 0)) {
        uVar8 = uVar10;
      }
      uVar6 = 0;
      uVar5 = uVar6;
      if ((int)uVar7 < (this->Parents).ArrayNum) {
        uVar5 = uVar9;
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
      lVar2 = *(longlong *)((this->Parents).AllocatorInstance.Data + uVar11);
      if (((lVar2 == 0) || ((*(uint *)(*(longlong *)(lVar2 + 8) + 0x18) >> 0x10 & 1) == 0)) &&
         (uVar8 == 0)) {
        local_res8[0] = false;
        uVar5 = uVar6;
        if ((int)uVar7 < (this->Parents).ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar1 = *(ushort *)((this->Parents).AllocatorInstance.Data + uVar11 + 0x1e);
        if ((int)uVar7 < (this->Parents).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        SerializeProperties_r
                  (this,param_2,(UPackageMap *)0x0,
                   (uint)*(ushort *)((this->Parents).AllocatorInstance.Data + uVar11 + 0x1c),
                   (uint)uVar1,(TRepDataBufferBase<0,unsigned_char>)param_1,local_res8,0,0,&::Empty,
                   (FNetTraceCollector *)0x0,(UObject *)0x0);
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar11 = uVar11 + 0x30;
    } while ((int)(uVar7 + 1) < (this->Parents).ArrayNum);
  }
  return;
}

// SerializePropertiesForStruct @ 1484f9bd0

void __thiscall
FRepLayout::SerializePropertiesForStruct
          (FRepLayout *this,UStruct *param_1,FBitArchive *param_2,UPackageMap *param_3,
          TRepDataBufferBase<0,unsigned_char> param_4,bool *param_5,UObject *param_6)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((param_1 != this->Owner) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct == Owner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                         ,0x1c04,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FRepLayout::SerializePropertiesForStruct'::__l2::_dynamic_atexit_destructor_for__Empty__
          );
    _Init_thread_footer(&::_TSS0);
  }
  uVar5 = 0;
  if (0 < (this->Parents).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Parents).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(ushort *)((this->Parents).AllocatorInstance.Data + lVar6 + 0x1e);
      uVar4 = 0;
      if ((int)uVar5 < (this->Parents).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      SerializeProperties_r
                (this,param_2,param_3,
                 (uint)*(ushort *)((this->Parents).AllocatorInstance.Data + lVar6 + 0x1c),
                 (uint)uVar1,param_4,param_5,0,0,&::Empty,(FNetTraceCollector *)0x0,param_6);
      if ((param_2->field_0x29 & 2) != 0) {
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x30;
    } while ((int)uVar5 < (this->Parents).ArrayNum);
  }
  return;
}

// SerializeProperties_DynamicArray_r @ 1484f9de0

void __thiscall
FRepLayout::SerializeProperties_DynamicArray_r
          (FRepLayout *this,FBitArchive *param_1,UPackageMap *param_2,int param_3,
          TRepDataBufferBase<0,unsigned_char> param_4,bool *param_5,int param_6,
          FRepSerializationSharedInfo *param_7,FNetTraceCollector *param_8,UObject *param_9)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  ushort local_res20 [4];
  FScriptArrayHelper local_58;
  
  iVar8 = 0;
  uVar7 = 0;
  if (param_3 < (this->Cmds).ArrayNum) {
    uVar7 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar9 = (this->Cmds).AllocatorInstance.Data + (longlong)param_3 * 0x20;
  if (((byte)pFVar9[0x1d] & 4) == 0) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    local_res20[0] = *(ushort *)(param_4.Data + 8);
    if ((ushort *)plVar3[1] < (ushort *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(ushort *)*plVar3;
      *plVar3 = *plVar3 + 2;
    }
    uVar7 = (uint)local_res20[0];
    if ((param_1->field_0x28 & 1) == 0) {
      uVar7 = *(uint *)(param_4.Data + 8);
    }
    bVar6 = UE_RepLayout_Private::ValidateArraySize(uVar7,*(FProperty **)pFVar9);
    if (!bVar6) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x29 & 2) == 0) {
      if (((param_1->field_0x28 & 1) != 0) && ((uint)local_res20[0] != *(uint *)(param_4.Data + 8)))
      {
        lVar4 = *(longlong *)pFVar9;
        EVar1 = *(EArrayPropertyFlags *)(lVar4 + 0x70);
        local_58.ElementAlignment = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x168))();
        local_58.InnerProperty = *(FProperty **)(lVar4 + 0x78);
        local_58.ElementSize = (local_58.InnerProperty)->ElementSize;
        local_58.field1_0x8 = (FScriptArrayHelper_u_8)param_4.Data;
        local_58.ArrayFlags = EVar1;
        if ((local_58.ElementSize < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementSize > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1177,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((local_58.InnerProperty == (FProperty *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InnerProperty",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1178,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar2 = (local_58.field1_0x8.FreezableArray)->ArrayNum;
        uVar7 = (uint)local_res20[0];
        if (iVar2 < (int)(uint)local_res20[0]) {
          FScriptArrayHelper::AddValues(&local_58,uVar7 - iVar2);
        }
        else if ((int)(uint)local_res20[0] < iVar2) {
          FScriptArrayHelper::RemoveValues(&local_58,uVar7,iVar2 - uVar7);
        }
      }
      lVar4 = *(longlong *)param_4.Data;
      if (0 < *(int *)(param_4.Data + 8)) {
        do {
          if ((param_1->field_0x29 & 2) != 0) {
            return;
          }
          SerializeProperties_r
                    (this,param_1,param_2,param_3 + 1,*(ushort *)(pFVar9 + 8) - 1,
                     (uchar *)((int)((uint)*(ushort *)(pFVar9 + 10) * iVar8) + lVar4),param_5,iVar8,
                     param_6,param_7,param_8,param_9);
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(param_4.Data + 8));
      }
    }
  }
  return;
}

// SerializeProperties_r @ 1484fa0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRepLayout::SerializeProperties_r
          (FRepLayout *this,FBitArchive *param_1,UPackageMap *param_2,int param_3,int param_4,
          TRepDataBufferBase<0,unsigned_char> param_5,bool *param_6,int param_7,int param_8,
          FRepSerializationSharedInfo *param_9,FNetTraceCollector *param_10,UObject *param_11)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  FNetBitWriter *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ForElementType<FNetTracePacketContentEvent> FVar12;
  ForAnyElementType FVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  FNetTraceCollector *pFVar17;
  byte bVar18;
  FString *pFVar19;
  FScriptContainerElement *pFVar20;
  FName local_b8;
  FName local_b0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_a8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FBitWriterMark local_78;
  FScriptContainerElement *local_68;
  FString local_60;
  FString local_50;
  
  do {
    if ((param_4 <= param_3) || ((param_1->field_0x29 & 2) != 0)) {
      return;
    }
    uVar9 = 0;
    if (param_3 < (this->Cmds).ArrayNum) {
      uVar9 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar20 = (this->Cmds).AllocatorInstance.Data + (longlong)param_3 * 0x20;
    local_68 = pFVar20;
    if ((pFVar20[0x1c] == (FScriptContainerElement)0x1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Cmd.Type != ERepLayoutCmdType::Return",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                           ,0x1a14,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pFVar20[0x1c] == (FScriptContainerElement)0x0) {
      uVar9 = 0xffffffff;
      pFVar17 = (FNetTraceCollector *)0x0;
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar17 = param_10;
      }
      if (pFVar17 != (FNetTraceCollector *)0x0) {
        uVar9 = FNetTrace::BeginPacketContentEvent
                          (pFVar17,NameId,
                           *(uint *)(&param_1->field_0x0 +
                                    ((ulonglong)((byte)~param_1->field_0x28 & 4) | 0x50) * 2) &
                           ((byte)param_1->field_0x29 >> 1 & 1) - 1);
        pvVar3 = *(void **)pFVar20;
        bVar7 = IsThisNotNull(pvVar3,"FField::GetFName");
        if (bVar7) {
          local_b8 = *(FName *)((longlong)pvVar3 + 0x20);
        }
        else {
          local_b8.ComparisonIndex.Value = 0;
          local_b8.Number = 0;
        }
        uVar10 = FNetTrace::TraceName(local_b8);
        FVar4 = (pFVar17->Events).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
        if (FVar4 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar12 = FVar4;
        }
        *(uint *)((longlong)FVar12 + (ulonglong)uVar9 * 0x10) = uVar10;
      }
      SerializeProperties_DynamicArray_r
                (this,param_1,param_2,param_3,
                 (TRepDataBufferBase<0,unsigned_char>)(param_5.Data + *(int *)(pFVar20 + 0xc)),
                 param_6,param_8 + 1,param_9,param_10,param_11);
      param_3 = *(ushort *)(pFVar20 + 8) - 1;
      if (uVar9 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent
                  (pFVar17,uVar9,
                   *(uint *)(&param_1->field_0x0 +
                            ((ulonglong)((byte)~param_1->field_0x28 & 4) | 0x50) * 2) &
                   ((byte)param_1->field_0x29 >> 1 & 1) - 1);
      }
    }
    else {
      if ((0 < GDoReplicationContextString) && (param_2 != (UPackageMap *)0x0)) {
        FField::GetPathName(*(FField **)pFVar20,&local_50,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this->Owner,&local_60,(UObject *)0x0);
        ::FString::PrintfImpl(&local_88,L"%s - %s");
        FVar16.Data = local_88.Data.AllocatorInstance.Data;
        pFVar19 = &param_2->DebugContextString;
        if (pFVar19 != &local_88) {
          piVar1 = &(param_2->DebugContextString).Data.ArrayMax;
          iVar11 = *piVar1;
          iVar14 = local_88.Data.ArrayNum;
          (param_2->DebugContextString).Data.ArrayNum = iVar14;
          if ((iVar14 == 0) && (iVar11 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar14,iVar11,(ForAnyElementType *)pFVar19,iVar14,piVar1);
            if (iVar14 != 0) {
              memcpy((pFVar19->Data).AllocatorInstance.Data,FVar16.Data,(longlong)iVar14 * 2);
            }
          }
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      pFVar15 = (FScriptContainerElement *)0x0;
      if (((GNetSharedSerializedData != 0) && ((param_1->field_0x28 & 4) != 0)) &&
         (((byte)pFVar20[0x1d] & 1) != 0)) {
        pFVar15 = (param_9->SharedPropertyInfo).AllocatorInstance.Data;
        pFVar2 = pFVar15 + (longlong)(param_9->SharedPropertyInfo).ArrayNum * 0x28;
        for (; pFVar15 != pFVar2; pFVar15 = pFVar15 + 0x28) {
          if (((*(uint *)pFVar15 == param_3) && (*(uint *)(pFVar15 + 4) == param_7)) &&
             ((*(uint *)(pFVar15 + 8) == param_8 &&
              (*(uchar **)(pFVar15 + 0x10) == param_5.Data + *(int *)(pFVar20 + 0xc)))))
          goto LAB_1484fa426;
        }
        pFVar15 = (FScriptContainerElement *)0x0;
      }
LAB_1484fa426:
      bVar18 = param_1->field_0x28;
      if (((bVar18 & 1) != 0) && (param_2 != (UPackageMap *)0x0)) {
        (**(code **)(param_2->_padding_ + 0x318))();
        bVar18 = param_1->field_0x28;
      }
      if (pFVar15 == (FScriptContainerElement *)0x0) {
        uVar9 = 0xffffffff;
        pFVar17 = (FNetTraceCollector *)0x0;
        if (GNetTraceRuntimeVerbosity != 0) {
          pFVar17 = param_10;
        }
        if (pFVar17 != (FNetTraceCollector *)0x0) {
          uVar9 = FNetTrace::BeginPacketContentEvent
                            (pFVar17,NameId,
                             *(uint *)(&param_1->field_0x0 +
                                      ((ulonglong)((byte)~bVar18 & 4) | 0x50) * 2) &
                             ((byte)param_1->field_0x29 >> 1 & 1) - 1);
          pvVar3 = *(void **)pFVar20;
          bVar7 = IsThisNotNull(pvVar3,"FField::GetFName");
          if (bVar7) {
            local_b0 = *(FName *)((longlong)pvVar3 + 0x20);
          }
          else {
            local_b0.ComparisonIndex.Value = 0;
            local_b0.Number = 0;
          }
          uVar10 = FNetTrace::TraceName(local_b0);
          FVar4 = (pFVar17->Events).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar17->Events;
          if (FVar4 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar12 = FVar4;
          }
          *(uint *)((longlong)FVar12 + (ulonglong)uVar9 * 0x10) = uVar10;
        }
        GNumSharedSerializationMiss = GNumSharedSerializationMiss + 1;
        cVar8 = (**(code **)(**(longlong **)pFVar20 + 200))
                          (*(longlong **)pFVar20,param_1,param_2,
                           param_5.Data + *(int *)(pFVar20 + 0xc),0);
        if (cVar8 == '\0') {
          *param_6 = true;
        }
        if (uVar9 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent
                    (pFVar17,uVar9,
                     *(uint *)(&param_1->field_0x0 +
                              ((ulonglong)((byte)~param_1->field_0x28 & 4) | 0x50) * 2) &
                     ((byte)param_1->field_0x29 >> 1 & 1) - 1);
        }
      }
      else {
        if (((param_9->SerializedProperties).Ptr == (FNetBitWriter *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("SharedInfo.SerializedProperties.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                               ,0x1a3b,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        GNumSharedSerializationHit = GNumSharedSerializationHit + 1;
        if ((GNetVerifyShareSerializedData == 0) || ((param_1->field_0x28 & 4) == 0)) {
          uVar9 = *(uint *)(pFVar15 + 0x24);
          uVar10 = *(uint *)(pFVar15 + 0x20);
          pFVar5 = (param_9->SerializedProperties).Ptr;
          pcVar6 = *(code **)(*(longlong *)param_1 + 0x268);
          if (((pFVar5->_padding_ & 0x200) != 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!IsError()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                                 ,0x49,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (*pcVar6)(param_1,pFVar5->_padding_,uVar10,(longlong)(int)uVar9);
          pFVar20 = local_68;
        }
        else {
          local_78.Num = *(long64 *)&param_1[1].field_0x10;
          local_78.Overflowed = (bool)((byte)param_1->field_0x29 >> 1 & 1);
          (**(code **)(**(longlong **)pFVar20 + 200))
                    (*(longlong **)pFVar20,param_1,param_2,param_5.Data + *(int *)(pFVar20 + 0xc),0)
          ;
          local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.ArrayNum = 0;
          local_a8.ArrayMax = 0;
          FBitWriterMark::Copy(&local_78,(FBitWriter *)param_1,&local_a8);
          FBitWriterMark::Pop(&local_78,(FBitWriter *)param_1);
          uVar9 = *(uint *)(pFVar15 + 0x24);
          uVar10 = *(uint *)(pFVar15 + 0x20);
          pcVar6 = *(code **)(*(longlong *)param_1 + 0x268);
          pFVar5 = (param_9->SerializedProperties).Ptr;
          if (((pFVar5->_padding_ & 0x200) != 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!IsError()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                                 ,0x49,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (*pcVar6)(param_1,pFVar5->_padding_,uVar10,(longlong)(int)uVar9);
          local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.ArrayNum = 0;
          local_98.ArrayMax = 0;
          FBitWriterMark::Copy(&local_78,(FBitWriter *)param_1,&local_98);
          FVar13.Data = local_98.AllocatorInstance.Data;
          FVar16.Data = local_a8.AllocatorInstance.Data;
          if (((local_a8.ArrayNum != local_98.ArrayNum) ||
              ((local_a8.ArrayNum != 0 &&
               (iVar11 = memcmp(local_a8.AllocatorInstance.Data,local_98.AllocatorInstance.Data,
                                (longlong)local_a8.ArrayNum), iVar11 != 0)))) &&
             (1 < (byte)LogRep._0_1_)) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
            FVar13.Data = local_98.AllocatorInstance.Data;
            FVar16.Data = local_a8.AllocatorInstance.Data;
          }
          if (FVar13.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar13.Data);
            FVar16.Data = local_a8.AllocatorInstance.Data;
          }
          pFVar20 = local_68;
          if (FVar16.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar16.Data);
            pFVar20 = local_68;
          }
        }
      }
      if (((param_1->field_0x28 & 1) != 0) && (param_2 != (UPackageMap *)0x0)) {
        (**(code **)(param_2->_padding_ + 800))(param_2,*(undefined8 *)pFVar20);
      }
      if ((0 < GDoReplicationContextString) && (param_2 != (UPackageMap *)0x0)) {
        ::FString::Empty(&param_2->DebugContextString);
      }
    }
    param_3 = param_3 + 1;
  } while( true );
}

// UpdateChangelistHistory @ 1484fec80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRepLayout::UpdateChangelistHistory
          (FRepLayout *this,FSendingRepState *param_1,UClass *param_2,
          TRepDataBufferBase<0,unsigned_char_const_> param_3,UNetConnection *param_4,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FName local_70;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  void *local_48 [2];
  
  if ((param_1->HistoryEnd < param_1->HistoryStart) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RepState->HistoryEnd >= RepState->HistoryStart",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                         ,0x8a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = param_1->HistoryEnd - param_1->HistoryStart;
  iVar2 = param_4->OutAckPacketId;
  if ((iVar8 == 0x20) && (5 < (byte)LogRep._0_1_)) {
    (**(code **)(param_4->_padding_ + 0x2e0))(param_4,local_48);
    local_70 = (FName)param_2->_padding_;
    ::FName::ToString(&local_70,&local_58);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  uVar6 = param_1->HistoryStart;
  iVar7 = param_1->HistoryEnd;
  if (param_4->ResendAllDataState == SinceCheckpoint) {
    if ((int)uVar6 < iVar7 + -1) {
      do {
        uVar5 = uVar6 & 0x8000001f;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
        }
        if ((param_1->ChangeHistory[(int)uVar5].Changed.ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("HistoryItem.Changed.Num() > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                               ,0x8bf,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        param_1->ChangeHistory[(int)uVar5].OutPacketIdRange.First = -1;
        param_1->ChangeHistory[(int)uVar5].OutPacketIdRange.Last = -1;
        piVar1 = &param_1->ChangeHistory[(int)uVar5].Changed.ArrayMax;
        param_1->ChangeHistory[(int)uVar5].Changed.ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,0,&param_1->ChangeHistory[(int)uVar5].Changed.AllocatorInstance,0,piVar1);
        }
        param_1->ChangeHistory[(int)uVar5].Resend = false;
        uVar6 = uVar6 + 1;
        param_1->HistoryStart = param_1->HistoryStart + 1;
        iVar7 = param_1->HistoryEnd;
      } while ((int)uVar6 < iVar7 + -1);
    }
  }
  else if ((int)uVar6 < iVar7) {
    do {
      uVar5 = uVar6 & 0x8000001f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
      }
      if (param_1->ChangeHistory[(int)uVar5].OutPacketIdRange.First == -1) break;
      if ((param_1->ChangeHistory[(int)uVar5].Changed.ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("HistoryItem.Changed.Num() > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                             ,0x8d5,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar2 < param_1->ChangeHistory[(int)uVar5].OutPacketIdRange.Last) {
        if (param_1->ChangeHistory[(int)uVar5].Resend != false) goto LAB_1484feefe;
        if (iVar8 == 0x20) goto LAB_1484feeee;
      }
      else {
LAB_1484feeee:
        if ((param_1->ChangeHistory[(int)uVar5].Resend != false) || (iVar8 == 0x20)) {
LAB_1484feefe:
          if ((param_5 == (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("OutMerged != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                 ,0x8dc,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_68.AllocatorInstance.Data = (param_5->AllocatorInstance).Data;
          (param_5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_68.ArrayNum = param_5->ArrayNum;
          local_68.ArrayMax = param_5->ArrayMax;
          param_5->ArrayNum = 0;
          param_5->ArrayMax = 0;
          MergeChangeList(this,param_3,&param_1->ChangeHistory[(int)uVar5].Changed,&local_68,param_5
                         );
          if (param_1->ChangeHistory[(int)uVar5].Resend != false) {
            param_1->NumNaks = param_1->NumNaks + -1;
          }
          if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.AllocatorInstance.Data);
          }
        }
        param_1->ChangeHistory[(int)uVar5].OutPacketIdRange.First = -1;
        param_1->ChangeHistory[(int)uVar5].OutPacketIdRange.Last = -1;
        piVar1 = &param_1->ChangeHistory[(int)uVar5].Changed.ArrayMax;
        param_1->ChangeHistory[(int)uVar5].Changed.ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,0,&param_1->ChangeHistory[(int)uVar5].Changed.AllocatorInstance,0,piVar1);
        }
        param_1->ChangeHistory[(int)uVar5].Resend = false;
        param_1->HistoryStart = param_1->HistoryStart + 1;
      }
      iVar7 = param_1->HistoryEnd;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar7);
  }
  iVar7 = iVar7 - param_1->HistoryStart;
  if ((0x1f < iVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewHistoryCount < FSendingRepState::MAX_CHANGE_HISTORY",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                         ,0x8f3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = param_1->HistoryStart & 0x8000001f;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
  }
  param_1->HistoryStart = uVar6;
  param_1->HistoryEnd = uVar6 + iVar7;
  if ((param_1->NumNaks != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RepState->NumNaks == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                         ,0x8f9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// UpdateChangelistMgr @ 1484ff090

/* WARNING: Enum "Type": Some values do not have unique names */

ERepLayoutResult __thiscall
FRepLayout::UpdateChangelistMgr
          (FRepLayout *this,FSendingRepState *param_1,FReplicationChangelistMgr *param_2,
          UObject *param_3,uint param_4,FReplicationFlags *param_5,bool param_6)

{
  FName FVar1;
  ERepLayoutResult EVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_NetSkippedDynamicProps> FVar4;
  FReplicationFlags_u_0 local_18;
  uint uStack_14;
  
  EVar2 = Success;
  if (param_6) {
LAB_1484ff0eb:
    EVar2 = CompareProperties(this,param_1,&param_2->RepChangelistState,
                              (TRepDataBufferBase<0,unsigned_char_const_>)param_3,param_5,param_6);
    if (((EVar2 != FatalError) &&
        (param_2->LastReplicationFrame = param_4, GShareInitialCompareState != 0)) &&
       ((*(byte *)&param_5->field0_0x0 & 2) != 0)) {
      param_2->LastInitialReplicationFrame = param_4;
    }
    return EVar2;
  }
  if (GShareInitialCompareState == 0) {
    if ((((GShareShadowState != 0) && ((*(byte *)&param_5->field0_0x0 & 2) == 0)) &&
        (1 < param_1->LastCompareIndex)) && (param_2->LastReplicationFrame == param_4)) {
      if (FThreadStats::bPrimaryEnable) {
        FVar4 = StatPtr_STAT_NetSkippedDynamicProps;
        if (StatPtr_STAT_NetSkippedDynamicProps ==
            (FThreadSafeStaticStat<FStat_STAT_NetSkippedDynamicProps>)0x0) {
          pFVar3 = ::FName::FName((FName *)&local_18._s_0,"STAT_NetSkippedDynamicProps");
          FVar4 = (FThreadSafeStaticStat<FStat_STAT_NetSkippedDynamicProps>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetSkippedDynamicProps,
                             *pFVar3,L"Skipped Dynamic Props","STATGROUP_Game","STATCAT_Advanced",
                             L"Game",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar1 = *(FName *)FVar4;
        local_18.Value = (uint)FVar1.ComparisonIndex.Value;
        uStack_14 = FVar1.Number;
        FThreadStats::AddMessage<__int64>(FVar1,Add,1,false);
      }
      return Success;
    }
    goto LAB_1484ff0eb;
  }
  if ((GShareShadowState == 0) || (param_2->LastReplicationFrame != param_4)) goto LAB_1484ff0eb;
  if (((param_5->field0_0x0).Value & 2) == 0) {
    if (param_1->LastCompareIndex != 0) goto LAB_1484ff152;
  }
  else if (param_2->LastInitialReplicationFrame != param_4) goto LAB_1484ff0eb;
  local_18.Value = (param_5->field0_0x0).Value | 0x80;
  EVar2 = CompareProperties(this,param_1,&param_2->RepChangelistState,
                            (TRepDataBufferBase<0,unsigned_char_const_>)param_3,
                            (FReplicationFlags *)&local_18._s_0,false);
LAB_1484ff152:
  if (FThreadStats::bPrimaryEnable == false) {
    return EVar2;
  }
  FVar4 = StatPtr_STAT_NetSkippedDynamicProps;
  if (StatPtr_STAT_NetSkippedDynamicProps ==
      (FThreadSafeStaticStat<FStat_STAT_NetSkippedDynamicProps>)0x0) {
    pFVar3 = ::FName::FName((FName *)&local_18._s_0,"STAT_NetSkippedDynamicProps");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_NetSkippedDynamicProps>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetSkippedDynamicProps,*pFVar3,
                       L"Skipped Dynamic Props","STATGROUP_Game","STATCAT_Advanced",L"Game",true,
                       true,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar4;
  local_18.Value = (uint)FVar1.ComparisonIndex.Value;
  uStack_14 = FVar1.Number;
  FThreadStats::AddMessage<__int64>(FVar1,Add,1,false);
  return EVar2;
}

// UpdateUnmappedGuidsForFastArray @ 1484ff410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRepLayout::UpdateUnmappedGuidsForFastArray
          (FRepLayout *this,FFastArrayDeltaSerializeParams *param_1)

{
  ushort uVar1;
  ushort uVar2;
  FNetDeltaSerializeInfo *pFVar3;
  FLifetimeCustomDeltaState *pFVar4;
  FScriptContainerElement *pFVar5;
  FFastArraySerializer *pFVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ForElementType<int> FVar9;
  longlong *plVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  ForElementType<int> FVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  uint *puVar20;
  longlong *plVar21;
  undefined1 *puVar22;
  TRepDataBufferBase<0,unsigned_char> TVar23;
  uint uVar24;
  uint *puVar25;
  ForElementType<int> FVar26;
  bool local_res10 [8];
  bool local_res18 [8];
  uint local_res20;
  uint local_e8 [4];
  longlong *local_d8;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  TSet<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>,FDefaultSetAllocator>
  *local_a8;
  char local_a0;
  char cStack_9f;
  UObject *local_98;
  uchar *local_90;
  FString local_88;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  if (((this->LifetimeCustomPropertyState).Ptr == (FLifetimeCustomDeltaState *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("LifetimeCustomPropertyState",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                          ,0x2042,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar3 = param_1->DeltaSerializeInfo;
  pFVar4 = (this->LifetimeCustomPropertyState).Ptr;
  uVar1 = pFVar3->CustomDeltaIndex;
  if (((pFVar4->LifetimeCustomDeltaProperties).ArrayNum <= (int)(uint)uVar1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar5 = (pFVar4->LifetimeCustomDeltaProperties).AllocatorInstance.Data;
  uVar2 = *(ushort *)(pFVar5 + (ulonglong)uVar1 * 0x18);
  if (((this->Parents).ArrayNum <= (int)(uint)uVar2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar24 = *(uint *)(pFVar5 + (ulonglong)uVar1 * 0x18 + 4);
  if (uVar24 == 0xffffffff) {
    if (4 < (byte)LogRep._0_1_) {
      ::FName::ToString((FName *)((this->Parents).AllocatorInstance.Data +
                                 (ulonglong)uVar2 * 0x30 + 8),&local_88);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    uVar13 = 0;
    if ((int)uVar24 < (this->Cmds).ArrayNum) {
      uVar13 = ~uVar24 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar5 = (this->Cmds).AllocatorInstance.Data;
    pFVar6 = param_1->ArraySerializer;
    local_res20 = (uint)*(ushort *)(pFVar5 + (longlong)(int)uVar24 * 0x20 + 10);
    local_98 = pFVar3->Object;
    lVar7 = *(longlong *)
             (&local_98->field_0x0 + *(int *)(pFVar5 + (longlong)(int)uVar24 * 0x20 + 0xc));
    TSet<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>,FDefaultSetAllocator>
                *)&pFVar6->GuidReferencesMap_StructDelta);
    local_a0 = '\0';
    cStack_9f = '\0';
    stack0xffffffffffffff38 = local_78._16_16_;
    local_d8 = (longlong *)local_78._0_8_;
    auStack_d0._0_8_ = local_78._8_8_;
    local_b8 = local_58;
    pTStack_b0 = pTStack_50;
    uVar19 = local_78._24_8_ >> 0x20;
    uVar24 = local_78._28_4_;
    local_a8 = (TSet<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>,FDefaultSetAllocator>
                *)&pFVar6->GuidReferencesMap_StructDelta;
    if ((int)uVar24 < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        puVar25 = (uint *)((longlong)(int)uVar19 * 0x60 + *local_d8);
        uVar13 = *puVar25;
        if (*(int *)&(pFVar6->ItemMap).field_0x8 != *(int *)&(pFVar6->ItemMap).field_0x34) {
          puVar8 = *(undefined1 **)&(pFVar6->ItemMap).field_0x40;
          puVar22 = &(pFVar6->ItemMap).field_0x38;
          if (puVar8 != (undefined1 *)0x0) {
            puVar22 = puVar8;
          }
          uVar14 = *(uint *)(puVar22 +
                            (ulonglong)(*(int *)&(pFVar6->ItemMap).field_0x48 - 1U & uVar13) * 4);
          if (uVar14 != 0xffffffff) {
            do {
              puVar20 = (uint *)((longlong)(int)uVar14 * 0x10 + *(longlong *)&pFVar6->ItemMap);
              if (*puVar20 == uVar13) {
                puVar16 = puVar20 + 1;
                if (puVar20 == (uint *)0x0) {
                  puVar16 = (uint *)0x0;
                }
                if (puVar16 != (uint *)0x0) {
                  local_e8[0] = *puVar16;
                  local_res10[0] = false;
                  local_res18[0] = false;
                  TVar23.Data = (uchar *)((int)(local_e8[0] * local_res20) + lVar7);
                  UpdateUnmappedObjects_r
                            (this,(FReceivingRepState *)0x0,
                             (TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                              *)(puVar25 + 2),local_98,pFVar3->Connection,
                             (TRepDataBufferBase<1,unsigned_char>)0x0,TVar23,local_res20,
                             &param_1->DeltaSerializeInfo->bCalledPreNetReceive,local_res10,
                             local_res18);
                  if (local_res10[0] != false) {
                    FVar26 = (ForElementType<int>)param_1->ReadChangedElements;
                    if (FVar26 != (ForElementType<int>)0x0) {
                      FVar9 = *(ForElementType<int> *)((longlong)FVar26 + 0x20);
                      FVar17 = FVar26;
                      if (FVar9 != (ForElementType<int>)0x0) {
                        FVar17 = FVar9;
                      }
                      if ((ulonglong)FVar17 <= local_e8) {
                        FVar17 = FVar26;
                        if (FVar9 != (ForElementType<int>)0x0) {
                          FVar17 = FVar9;
                        }
                        if ((local_e8 <
                             (uint *)((longlong)FVar17 +
                                     (longlong)*(int *)((longlong)FVar26 + 0x2c) * 4)) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar12)) {
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                      }
                      iVar15 = *(int *)((longlong)FVar26 + 0x28);
                      if (iVar15 == *(int *)((longlong)FVar26 + 0x2c)) {
                        iVar15 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                           (0x404,(ForElementType<int> *)FVar26,
                                            (int *)((longlong)FVar26 + 0x2c));
                      }
                      *(int *)((longlong)FVar26 + 0x28) = iVar15 + 1;
                      if (*(ForElementType<int> *)((longlong)FVar26 + 0x20) !=
                          (ForElementType<int>)0x0) {
                        FVar26 = *(ForElementType<int> *)((longlong)FVar26 + 0x20);
                      }
                      *(uint *)((longlong)FVar26 + (longlong)iVar15 * 4) = local_e8[0];
                    }
                    local_90 = TVar23.Data;
                    UE::Core::Private::Function::CheckCallable
                              (*(void **)&param_1->PostReplicatedChange);
                    plVar10 = *(longlong **)&(param_1->PostReplicatedChange).field_0x28;
                    pcVar11 = *(code **)&param_1->PostReplicatedChange;
                    plVar21 = (longlong *)&(param_1->PostReplicatedChange).field_0x10;
                    if (plVar10 != (longlong *)0x0) {
                      plVar21 = plVar10;
                    }
                    uVar18 = (**(code **)(*plVar21 + 8))();
                    (*pcVar11)(uVar18,&local_90,param_1);
                  }
                  pFVar3->bOutHasMoreUnmapped = (bool)(pFVar3->bOutHasMoreUnmapped | local_res18[0])
                  ;
                  pFVar3->bOutSomeObjectsWereMapped =
                       (bool)(pFVar3->bOutSomeObjectsWereMapped | local_res10[0]);
                  goto LAB_1484ff6ab;
                }
                break;
              }
              uVar14 = puVar20[2];
            } while (uVar14 != 0xffffffff);
          }
        }
        TSet<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_b0,uVar24);
        local_a0 = '\x01';
LAB_1484ff6ab:
        uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
        uVar19 = (ulonglong)uStack_bc;
        uVar24 = uStack_bc;
      } while ((int)uStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
      if ((local_a0 != '\0') && (cStack_9f != '\0')) {
        uVar24 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34;
        if (uVar24 < 4) {
          iVar15 = 1;
        }
        else {
          uVar19 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
          lVar7 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar15 = 1 << ((byte)lVar7 & 0x1f);
        }
        if (((0 < (int)uVar24) && (local_a8->HashSize < iVar15)) || (iVar15 < local_a8->HashSize)) {
          local_a8->HashSize = iVar15;
          TSet<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>,FDefaultSetAllocator>
          ::Rehash(local_a8);
        }
      }
    }
  }
  return;
}

// UpdateUnmappedObjects @ 1484ff900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRepLayout::UpdateUnmappedObjects
          (FRepLayout *this,FReceivingRepState *param_1,UPackageMap *param_2,UObject *param_3,
          FNetDeltaSerializeInfo *param_4,bool *param_5,bool *param_6,bool *param_7)

{
  ushort uVar1;
  FLifetimeCustomDeltaState *pFVar2;
  UObject *pUVar3;
  FProperty *pFVar4;
  UObjectBaseUtility *this_00;
  undefined8 *puVar5;
  uint *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FString *pFVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 *puVar14;
  FBitWriter *local_f8;
  FBitReader *local_f0;
  TSharedPtr<INetDeltaBaseState,1> *local_e8;
  INetDeltaBaseState *local_e0;
  UPackageMap *local_d8;
  UNetConnection *local_d0;
  void *local_c8;
  UStruct *local_c0;
  INetSerializeCB *local_b8;
  undefined1 local_b0;
  byte local_af;
  byte local_ae;
  byte local_ad;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined1 local_a8;
  UObject *local_a0;
  UObject *local_98;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *local_90;
  int *local_88;
  FNetworkGUID *local_80;
  ushort local_78;
  FString local_70;
  FString local_58;
  FString local_48;
  
  *param_6 = false;
  *param_7 = false;
  *param_5 = false;
  if (((this->Flags & NoReplicatedProperties) == None) && ((this->Parents).ArrayNum != 0)) {
    UpdateUnmappedObjects_r
              (this,param_1,&param_1->GuidReferencesMap,param_3,param_4->Connection,
               (TRepDataBufferBase<1,unsigned_char>)
               (param_1->StaticBuffer).Buffer.AllocatorInstance.Data,
               (TRepDataBufferBase<0,unsigned_char>)param_3,this->Owner->PropertiesSize,param_5,
               param_6,param_7);
    param_4->bCalledPreNetReceive = *param_5;
    pFVar2 = (this->LifetimeCustomPropertyState).Ptr;
    if (pFVar2 != (FLifetimeCustomDeltaState *)0x0) {
      pUVar3 = param_4->Object;
      uVar11 = (uint)(ushort)(pFVar2->LifetimeCustomDeltaProperties).ArrayNum;
      param_6._0_4_ = 0;
      if (uVar11 != 0) {
        do {
          pFVar2 = (this->LifetimeCustomPropertyState).Ptr;
          if (((pFVar2->LifetimeCustomDeltaProperties).ArrayNum <= (int)((uint)param_6 & 0xffff)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar1 = *(ushort *)
                   ((pFVar2->LifetimeCustomDeltaProperties).AllocatorInstance.Data +
                   (ulonglong)((uint)param_6 & 0xffff) * 0x18);
          if (((this->Parents).ArrayNum <= (int)(uint)uVar1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar13 = (this->Parents).AllocatorInstance.Data + (ulonglong)uVar1 * 0x30;
          pFVar4 = *(FProperty **)pFVar13;
          this_00 = (UObjectBaseUtility *)pFVar4[1]._padding_;
          if (this_00[4].field_0x14 == '\0') {
            UObjectBaseUtility::GetPathName(this_00,&local_58,(UObject *)0x0);
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("bPrepareCppStructOpsCompleted",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x8f6,
                               L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s"
                              );
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          puVar5 = *(undefined8 **)&this_00[4].field_0x18;
          local_f8 = param_4->Writer;
          local_f0 = param_4->Reader;
          local_e8 = param_4->NewState;
          local_e0 = param_4->OldState;
          local_d8 = param_4->Map;
          local_d0 = param_4->Connection;
          local_c8 = param_4->Data;
          local_c0 = param_4->Struct;
          local_b8 = param_4->NetSerializeCB;
          local_b0 = param_4->bUpdateUnmappedObjects;
          local_af = param_4->bOutSomeObjectsWereMapped;
          local_ae = param_4->bCalledPreNetReceive;
          local_ad = param_4->bOutHasMoreUnmapped;
          local_ac = param_4->bGuidListsChanged;
          local_ab = param_4->bIsWritingOnClient;
          local_aa = param_4->bIsInitializingBaseFromDefault;
          local_a9 = param_4->bSupportsFastArrayDeltaStructSerialization;
          local_a8 = param_4->bInternalAck;
          local_a0 = param_4->Object;
          local_98 = param_4->CustomDeltaObject;
          local_90 = param_4->GatherGuidReferences;
          local_88 = param_4->TrackedGuidMemoryBytes;
          local_80 = param_4->MoveGuidToUnmapped;
          local_78 = param_4->CustomDeltaIndex;
          ::FString::FString(&local_70,&param_4->DebugName);
          pFVar10 = ::FName::ToString((FName *)(pFVar13 + 8),&local_48);
          if (&local_70 != pFVar10) {
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
            local_70.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
            (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_70.Data.ArrayNum = (pFVar10->Data).ArrayNum;
            local_70.Data.ArrayMax = (pFVar10->Data).ArrayMax;
            (pFVar10->Data).ArrayNum = 0;
            (pFVar10->Data).ArrayMax = 0;
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          local_c0 = (UStruct *)pFVar4[1]._padding_;
          local_af = 0;
          local_ad = 0;
          local_78 = (ushort)(uint)param_6;
          puVar14 = &pUVar3->field_0x0 + *(int *)(pFVar13 + 0x14);
          puVar6 = (uint *)*puVar5;
          local_c8 = puVar14;
          if ((*(byte *)((longlong)puVar6 + 0x15) & 1) != 0) {
            if (((*puVar6 & 0x80) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!!(this->Flags & FuncFlag)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                   ,0x660,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar12 = 0;
            for (uVar9 = *puVar6 & 0x7f; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
              uVar12 = uVar12 + 1;
            }
            (**(code **)(puVar6 + (ulonglong)uVar12 * 2 + 6))(&local_f8,puVar14);
            if ((local_af != 0) && (*(int *)(pFVar13 + 0x28) != -1)) {
              UE_RepLayout_Private::QueueRepNotifyForCustomDeltaProperty
                        (param_1,param_4,pFVar4,*(uint *)(pFVar13 + 0x10));
            }
          }
          param_4->bOutHasMoreUnmapped = (bool)(param_4->bOutHasMoreUnmapped | local_ad);
          param_4->bOutSomeObjectsWereMapped = (bool)(param_4->bOutSomeObjectsWereMapped | local_af)
          ;
          param_4->bCalledPreNetReceive = (bool)(param_4->bCalledPreNetReceive | local_ae);
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          param_6._0_4_ = (uint)param_6 + 1;
        } while ((int)(uint)param_6 < (int)uVar11);
      }
    }
  }
  return;
}

// UpdateUnmappedObjects_r @ 1484ffd50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRepLayout::UpdateUnmappedObjects_r
          (FRepLayout *this,FReceivingRepState *param_1,
          TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
          *param_2,UObject *param_3,UNetConnection *param_4,
          TRepDataBufferBase<1,unsigned_char> param_5,TRepDataBufferBase<0,unsigned_char> param_6,
          int param_7,bool *param_8,bool *param_9,bool *param_10)

{
  uchar *_Src;
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  longlong lVar11;
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  FProperty *pFVar14;
  wchar_t *pwVar15;
  uint uVar16;
  FProperty *pFVar17;
  uint uVar18;
  FRepLayoutCmd *pFVar19;
  FProperty *pFVar20;
  int iVar21;
  FGuidReferences *this_00;
  uchar *_Dst;
  double *pdVar22;
  FRepLayoutCmd *pFVar23;
  ulonglong *puVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  double *pdVar28;
  ulonglong *puVar29;
  TRepDataBufferBase<1,unsigned_char> TVar30;
  FString local_220;
  FString local_210;
  longlong *local_1f8;
  undefined1 auStack_1f0 [16];
  uint uStack_1e0;
  uint uStack_1dc;
  longlong local_1d8;
  TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
  *pTStack_1d0;
  TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
  *local_1c8;
  char local_1c0;
  char cStack_1bf;
  FString local_1b8;
  FString local_1a8;
  FName local_198;
  FName local_190;
  longlong local_188;
  longlong local_180;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  undefined1 local_138 [32];
  longlong local_118;
  TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
  *pTStack_110;
  FNetBitReader local_108;
  
  TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_138,
             (TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
              *)param_2);
  local_1c0 = '\0';
  cStack_1bf = '\0';
  stack0xfffffffffffffe18 = local_138._16_16_;
  local_1f8 = (longlong *)local_138._0_8_;
  auStack_1f0._0_8_ = local_138._8_8_;
  local_1d8 = local_118;
  pTStack_1d0 = pTStack_110;
  uVar13 = local_138._24_8_ >> 0x20;
  if (local_138._28_4_ < *(int *)(local_138._16_8_ + 0x18)) {
    pFVar17 = (FProperty *)0x0;
    local_1c8 = (TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
                 *)param_2;
    do {
      local_188 = *local_1f8;
      uVar18 = *(uint *)((longlong)(int)uVar13 * 0xe0 + local_188);
      if ((int)uVar18 < param_7) {
        local_180 = (longlong)(int)uStack_1dc * 0xe0;
        uVar16 = 0;
        this_00 = (FGuidReferences *)(local_180 + 8 + local_188);
        uVar25 = this_00->CmdIndex;
        uVar8 = uVar16;
        if ((int)uVar25 < (this->Cmds).ArrayNum) {
          uVar8 = ~uVar25 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar8 = this_00->ParentIndex;
        pFVar19 = (FRepLayoutCmd *)
                  ((this->Cmds).AllocatorInstance.Data + (longlong)(int)uVar25 * 0x20);
        uVar25 = uVar16;
        if ((int)uVar8 < (this->Parents).ArrayNum) {
          uVar25 = ~uVar8 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (this->Parents).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x30;
        if ((param_5.Data == (uchar *)0x0) || (*(int *)(pFVar9 + 0x28) == -1)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        iVar27 = (pFVar19->ShadowOffset - pFVar19->Offset) + uVar18;
        if (this_00->Array ==
            (TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
             *)0x0) {
          pFVar20 = (FProperty *)(ulonglong)uVar18;
          bVar6 = FGuidReferences::UpdateUnmappedGUIDs
                            (this_00,(param_4->PackageMap).field0_0x0.DebugPtr,param_3,
                             pFVar19->Property,uVar18);
          if (bVar6) {
            if (*param_8 == false) {
              (**(code **)(*(longlong *)param_3 + 0x220))();
              *param_8 = true;
            }
            *param_9 = true;
            if (bVar5) {
              _Src = param_6.Data + (int)uVar18;
              _Dst = param_5.Data + iVar27;
              if (6 < (byte)LogRepCompares._0_1_) {
                pFVar14 = pFVar19->Property;
                if (pFVar14 == (FProperty *)0x0) {
                  pwVar15 = L"none";
LAB_148500135:
                  ::FString::FString(&local_220,pwVar15);
                }
                else {
                  bVar6 = IsThisNotNull(pFVar14,"FField::GetName");
                  if (!bVar6) {
                    pwVar15 = L"None";
                    goto LAB_148500135;
                  }
                  ::FName::ToString((FName *)&pFVar14->_padding_,&local_220);
                }
                UE::Logging::Private::BasicLog<7>
                          ((FStaticBasicLogRecord *)&PTR_u_StoreProperty___151ae5188,
                           (FLogCategoryBase *)&LogRepCompares);
                if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_220.Data.AllocatorInstance.Data);
                }
              }
              if ((GbWithObjectValidationCheck != false) &&
                 ((pFVar19->Type == PropertyObject ||
                  ((byte)(pFVar19->Type - PropertySoftObject) < 2)))) {
                pFVar14 = pFVar19->Property;
                if ((pFVar14 == (FProperty *)0x0) ||
                   ((*(uint *)(pFVar14->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CastResult",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                     ,0x472,L"CastFieldChecked failed with 0x%016llx");
                  pFVar20 = pFVar14;
                  if (bVar6) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                else {
                  lVar10 = (**(code **)(pFVar14->_padding_ + 0x1f8))(pFVar14,_Dst);
                  if (((lVar10 != 0) && ((*(uint *)(lVar10 + 8) >> 0x1e & 1) != 0)) &&
                     (2 < (byte)LogRepCompares._0_1_)) {
                    GetFullNameSafe(&local_158,(FField *)pFVar19->Property);
                    local_198 = *(FName *)(lVar10 + 0x18);
                    ::FName::ToString(&local_198,&local_178);
                    UE::Logging::Private::BasicLog<3>
                              ((FStaticBasicLogRecord *)&PTR_u_Destination_Obj_151ae51d0,
                               (FLogCategoryBase *)&LogRepCompares);
                    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_178.Data.AllocatorInstance.Data);
                    }
                    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_158.Data.AllocatorInstance.Data);
                    }
                  }
                  lVar10 = (**(code **)(pFVar14->_padding_ + 0x1f8))(pFVar14,_Src);
                  if (((lVar10 != 0) && ((*(uint *)(lVar10 + 8) >> 0x1e & 1) != 0)) &&
                     (2 < (byte)LogRepCompares._0_1_)) {
                    GetFullNameSafe(&local_148,(FField *)pFVar19->Property);
                    local_190 = *(FName *)(lVar10 + 0x18);
                    ::FName::ToString(&local_190,&local_168);
                    UE::Logging::Private::BasicLog<3>
                              ((FStaticBasicLogRecord *)&PTR_u_Source_Object___151ae5298,
                               (FLogCategoryBase *)&LogRepCompares);
                    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_168.Data.AllocatorInstance.Data);
                    }
                    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_148.Data.AllocatorInstance.Data);
                    }
                  }
                }
              }
              pFVar14 = pFVar19->Property;
              if (_Dst != _Src) {
                if (((uint)(int)pFVar14->PropertyFlags >> 0x1e & 1) == 0) {
                  (**(code **)(pFVar14->_padding_ + 0xf0))(pFVar14,_Dst,_Src,1,pFVar20);
                }
                else {
                  memcpy(_Dst,_Src,(longlong)pFVar14->ElementSize);
                }
              }
            }
            FNetBitReader::FNetBitReader
                      (&local_108,(param_4->PackageMap).field0_0x0.DebugPtr,
                       (uchar *)(this_00->Buffer).AllocatorInstance.Data,
                       (longlong)this_00->NumBufferBits);
            UNetConnection::SetNetVersionsOnArchive(param_4,(FArchive *)&local_108);
            pdVar22 = (double *)(param_6.Data + (int)uVar18);
            (**(code **)(pFVar19->Property->_padding_ + 200))
                      (pFVar19->Property,&local_108,(param_4->PackageMap).field0_0x0.DebugPtr,
                       pdVar22,0);
            if ((bVar5) && (param_1 != (FReceivingRepState *)0x0)) {
              if (*(int *)(pFVar9 + 0x24) != 1) {
                pdVar28 = (double *)(param_5.Data + iVar27);
                switch(pFVar19->Type) {
                case Property:
                case PropertyBool:
                case PropertySoftObject:
                case PropertyInterface:
                  cVar7 = (**(code **)(pFVar19->Property->_padding_ + 0xb8))
                                    (pFVar19->Property,pdVar28,pdVar22,0);
                  break;
                case PropertyFloat:
                  if (*(float *)pdVar22 == *(float *)pdVar28) {
                    cVar7 = '\x01';
                  }
                  else {
LAB_148500473:
                    cVar7 = '\0';
                  }
                  break;
                case PropertyInt:
                case PropertyUInt32:
                  cVar7 = *(float *)pdVar28 == *(float *)pdVar22;
                  break;
                case PropertyByte:
                case PropertyNativeBool:
                  cVar7 = *(char *)pdVar28 == *(char *)pdVar22;
                  break;
                case PropertyName:
                case PropertyUInt64:
                  cVar7 = *pdVar28 == *pdVar22;
                  break;
                case PropertyObject:
                  pFVar20 = pFVar19->Property;
                  if (((pFVar20 == (FProperty *)0x0) ||
                      ((*(uint *)(pFVar20->_padding_ + 0x18) >> 0x1a & 1) == 0)) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("CastResult",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                         ,0x472,L"CastFieldChecked failed with 0x%016llx"),
                     pFVar20 = pFVar17, bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  lVar10 = (**(code **)(pFVar20->_padding_ + 0x1f8))(pFVar20,pdVar28);
                  lVar11 = (**(code **)(pFVar20->_padding_ + 0x1f8))(pFVar20,pdVar22);
                  cVar7 = lVar10 == lVar11;
                  break;
                case PropertyVector:
                case PropertyRotator:
                case PropertyVector100:
                case PropertyVectorNormal:
                case PropertyVector10:
                case PropertyVectorQ:
                  if (((*pdVar22 != *pdVar28) || (pdVar22[1] != pdVar28[1])) ||
                     (pdVar22[2] != pdVar28[2])) goto LAB_148500473;
                  cVar7 = '\x01';
                  break;
                case PropertyPlane:
                  cVar7 = CompareValue<UE::Math::TPlane<double>_>(pdVar28,pdVar22);
                  break;
                case PropertyNetId:
                  cVar7 = CompareValue<FUniqueNetIdRepl>(pdVar28,pdVar22);
                  break;
                case RepMovement:
                  cVar7 = CompareValue<FRepMovement>(pdVar28,pdVar22);
                  break;
                case PropertyString:
                  cVar7 = CompareValue<FString>(pdVar28,pdVar22);
                  break;
                case PropertyWeakObject:
                  if (((pFVar19->Property == (FProperty *)0x0) ||
                      ((*(uint *)(pFVar19->Property->_padding_ + 0x18) >> 0x1b & 1) == 0)) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("CastResult",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                         ,0x472,L"CastFieldChecked failed with 0x%016llx"), bVar5))
                  {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if ((SUB84(*pdVar28,0) != SUB84(*pdVar22,0)) ||
                     ((int)((ulonglong)*pdVar28 >> 0x20) != (int)((ulonglong)*pdVar22 >> 0x20)))
                  goto LAB_148500473;
                  cVar7 = '\x01';
                  break;
                case NetSerializeStructWithObjectReferences:
                  pTVar12 = TMapBase<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>_>
                            ::FindChecked((TMapBase<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRepLayoutCmd_*,TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_>,0>_>
                                           *)&this->NetSerializeLayouts,pFVar19);
                  iVar27 = pTVar12->ArrayNum;
                  pFVar20 = pFVar17;
                  if (0 < iVar27) {
                    do {
                      uVar25 = (uint)pFVar20;
                      uVar18 = uVar16;
                      if ((int)uVar25 < pTVar12->ArrayNum) {
                        uVar18 = ~uVar25 >> 0x1f;
                      }
                      if ((uVar18 == 0) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar5)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      pFVar23 = (FRepLayoutCmd *)
                                ((pTVar12->AllocatorInstance).Data + (longlong)(int)uVar25 * 0x20);
                      if ((pFVar23->Type == Return) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Cmd.Type != ERepLayoutCmdType::Return",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                             ,0x2ff,L""), bVar5)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      if (6 < (byte)LogRepCompares._0_1_) {
                        pFVar20 = pFVar23->Property;
                        if (pFVar20 == (FProperty *)0x0) {
                          pwVar15 = L"none";
LAB_1485006f2:
                          ::FString::FString(&local_210,pwVar15);
                        }
                        else {
                          bVar5 = IsThisNotNull(pFVar20,"FField::GetName");
                          if (!bVar5) {
                            pwVar15 = L"None";
                            goto LAB_1485006f2;
                          }
                          ::FName::ToString((FName *)&pFVar20->_padding_,&local_210);
                        }
                        ::LexToString(pFVar23->Type);
                        UE::Logging::Private::BasicLog<7>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogRepCompares);
                        if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_210.Data.AllocatorInstance.Data);
                        }
                      }
                      lVar10 = (longlong)pFVar23->Offset;
                      if (pFVar23->Type != DynamicArray) {
                        bVar5 = PropertiesAreIdenticalNative
                                          (pFVar23,(void *)((longlong)pdVar28 + lVar10),
                                           (void *)((longlong)pdVar22 + lVar10),
                                           &this->NetSerializeLayouts);
                        if (bVar5) goto LAB_14850097b;
LAB_14850098d:
                        cVar7 = '\0';
                        goto LAB_1485009bc;
                      }
                      pFVar20 = pFVar23->Property;
                      lVar4 = pFVar20[1]._padding_;
                      (**(code **)(*(longlong *)pFVar20[1]._padding_ + 0x168))();
                      lVar11 = pFVar20[1]._padding_;
                      puVar24 = (ulonglong *)(lVar10 + (longlong)pdVar28);
                      iVar21 = *(int *)(lVar11 + 0x34);
                      if ((iVar21 < 1) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("ElementSize > 0",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                             ,0x1177,L""), bVar5)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      if ((lVar11 == 0) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("InnerProperty",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                             ,0x1178,L""), bVar5)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      pFVar20 = pFVar23->Property;
                      iVar2 = pFVar23->Offset;
                      lVar11 = pFVar20[1]._padding_;
                      (**(code **)(*(longlong *)pFVar20[1]._padding_ + 0x168))();
                      lVar10 = pFVar20[1]._padding_;
                      puVar29 = (ulonglong *)((longlong)iVar2 + (longlong)pdVar22);
                      iVar2 = *(int *)(lVar10 + 0x34);
                      if ((iVar2 < 1) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("ElementSize > 0",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                             ,0x1177,L""), bVar5)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      if ((lVar10 == 0) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("InnerProperty",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                             ,0x1178,L""), bVar5)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      pFVar20 = pFVar17;
                      if ((int)puVar24[1] != (int)puVar29[1]) goto LAB_14850098d;
                      while( true ) {
                        iVar26 = (int)pFVar20;
                        if ((int)puVar24[1] <= iVar26) break;
                        pFVar20 = pFVar17;
                        if ((int)puVar29[1] != 0) {
                          uVar13 = *puVar29;
                          if (((lVar11 & 1) != 0) && ((uVar13 & 1) != 0)) {
                            uVar13 = ((longlong)uVar13 >> 0x18) + (longlong)puVar29;
                          }
                          pFVar20 = (FProperty *)((longlong)iVar2 * (longlong)iVar26 + uVar13);
                        }
                        pFVar14 = pFVar17;
                        if ((int)puVar24[1] != 0) {
                          uVar13 = *puVar24;
                          if (((lVar4 & 1) != 0) && ((uVar13 & 1) != 0)) {
                            uVar13 = ((longlong)uVar13 >> 0x18) + (longlong)puVar24;
                          }
                          pFVar14 = (FProperty *)((longlong)iVar21 * (longlong)iVar26 + uVar13);
                        }
                        bVar5 = CompareNetSerializeStructWithObjectProperties
                                          (pTVar12,&this->NetSerializeLayouts,uVar25 + 1,
                                           pFVar23->EndCmd - 1,pFVar14,pFVar20);
                        if (!bVar5) goto LAB_14850098d;
                        pFVar20 = (FProperty *)(ulonglong)(iVar26 + 1);
                      }
                      uVar25 = pFVar23->EndCmd - 1;
LAB_14850097b:
                      pFVar20 = (FProperty *)(ulonglong)(uVar25 + 1);
                    } while ((int)(uVar25 + 1) < iVar27);
                  }
                  cVar7 = '\x01';
                  break;
                default:
                  pFVar20 = pFVar19->Property;
                  bVar5 = IsThisNotNull(pFVar20,"FField::GetName");
                  if (bVar5) {
                    ::FName::ToString((FName *)&pFVar20->_padding_,&local_1a8);
                  }
                  else {
                    ::FString::FString(&local_1a8,L"None");
                  }
                  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRep);
                  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                  }
                  goto LAB_148500ab2;
                }
LAB_1485009bc:
                if (cVar7 != '\0') {
                  if ((3 < (byte)LogRep._0_1_) && (LogSkippedRepNotifies != 0)) {
                    pFVar20 = pFVar19->Property;
                    bVar5 = IsThisNotNull(pFVar20,"FField::GetName");
                    if (bVar5) {
                      ::FName::ToString((FName *)&pFVar20->_padding_,&local_1b8);
                    }
                    else {
                      ::FString::FString(&local_1b8,L"None");
                    }
                    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
                    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                    }
                  }
                  goto LAB_148500ac5;
                }
              }
LAB_148500ab2:
              TArray<FProperty_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FProperty_*_const_&>
                        (&param_1->RepNotifies,(FProperty **)pFVar9);
            }
LAB_148500ac5:
            FNetBitReader::~FNetBitReader(&local_108);
          }
          iVar27 = *(int *)(local_180 + 0x20 + local_188);
          iVar21 = *(int *)(local_180 + 0x4c + local_188);
          if (iVar27 - iVar21 < 1) {
            if ((iVar27 == iVar21) &&
               (*(int *)(local_180 + 0x70 + local_188) == *(int *)(local_180 + 0x9c + local_188))) {
              TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
              ::RemoveByIndex(pTStack_1d0,uStack_1dc);
              local_1c0 = '\x01';
            }
          }
          else {
            *param_10 = true;
          }
        }
        else {
          if ((pFVar19->Type != DynamicArray) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Cmd.Type == ERepLayoutCmdType::DynamicArray",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                                 ,0x111f,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
                    /* WARNING: Load size is inaccurate */
          if (bVar5) {
            uVar1 = pFVar19->ElementSize;
                    /* WARNING: Load size is inaccurate */
            TVar30.Data = param_5.Data[iVar27];
            iVar21 = *(int *)(param_6.Data + (longlong)(int)uVar18 + 8);
            if ((int)(*(int *)(param_5.Data + (longlong)iVar27 + 8) * (uint)uVar1) <
                (int)(*(int *)(param_6.Data + (longlong)(int)uVar18 + 8) * (uint)uVar1)) {
              iVar21 = *(int *)(param_5.Data + (longlong)iVar27 + 8);
            }
            iVar21 = iVar21 * (uint)uVar1;
          }
          else {
            iVar21 = (uint)pFVar19->ElementSize * *(int *)(param_6.Data + (longlong)(int)uVar18 + 8)
            ;
            TVar30.Data = (uchar *)0x0;
          }
          UpdateUnmappedObjects_r
                    (this,param_1,this_00->Array,param_3,param_4,TVar30,
                     (TRepDataBufferBase<0,unsigned_char>)param_6.Data[(int)uVar18],iVar21,param_8,
                     param_9,param_10);
        }
      }
      else {
        if (6 < (byte)LogRep._0_1_) {
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        }
        TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_1d0,uStack_1dc);
        local_1c0 = '\x01';
      }
      uStack_1e0 = uStack_1e0 & ~auStack_1f0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1f0);
      uVar13 = (ulonglong)uStack_1dc;
    } while ((int)uStack_1dc < *(int *)(auStack_1f0._8_8_ + 0x18));
    if ((local_1c0 != '\0') && (cStack_1bf != '\0')) {
      iVar27 = 1;
      uVar18 = *(int *)&(local_1c8->Elements).field_0x8 - *(int *)&(local_1c8->Elements).field_0x34;
      if (3 < uVar18) {
        uVar13 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar27 = 1 << ((byte)lVar10 & 0x1f);
      }
      if (((0 < (int)uVar18) && (local_1c8->HashSize < iVar27)) || (iVar27 < local_1c8->HashSize)) {
        local_1c8->HashSize = iVar27;
        TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
        ::Rehash(local_1c8);
      }
    }
  }
  return;
}

// operator() @ 15052c500

bool __thiscall `FRepLayout::InitFromClass'::__l98::<lambda_3>::operator()(void *this)

{
  void *pvVar1;
  UObjectBaseUtility *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  wchar_t *pwVar7;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar5 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3278201614795544706>);
  if (bVar4) {
    pvVar1 = (void *)**(undefined8 **)((longlong)this + 0x10);
    if (pvVar1 == (void *)0x0) {
      pwVar7 = L"none";
LAB_15052c58e:
      ::FString::FString(&local_38,pwVar7);
    }
    else {
      bVar5 = IsThisNotNull(pvVar1,"FField::GetName");
      if (!bVar5) {
        pwVar7 = L"None";
        goto LAB_15052c58e;
      }
      ::FName::ToString((FName *)((longlong)pvVar1 + 0x20),&local_38);
    }
    this_00 = (UObjectBaseUtility *)**(undefined8 **)this;
    if ((this_00 == (UObjectBaseUtility *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(this_00,&local_28,(UObject *)0x0,None);
    }
    bVar3 = true;
    bVar5 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3278201614795544706>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15052c642;
    }
  }
  bVar4 = false;
LAB_15052c642:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  return false;
}

