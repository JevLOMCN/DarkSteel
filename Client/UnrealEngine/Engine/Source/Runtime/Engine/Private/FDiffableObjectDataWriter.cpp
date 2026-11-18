// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FDiffableObjectDataWriter @ 1488ae1c0

FDiffableObjectDataWriter * __thiscall
UE::Transaction::FDiffableObjectDataWriter::FDiffableObjectDataWriter
          (FDiffableObjectDataWriter *this,FDiffableObject *param_1,
          TArrayView<FProperty_const_*,int> *param_2)

{
  FProperty **ppFVar1;
  int iVar2;
  undefined4 uVar3;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)&___7FSerializedObjectDataWriterCommon_Internal_Transaction_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&param_1->SerializedData;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  ppFVar1 = param_2->DataPtr;
  iVar2 = param_2->ArrayNum;
  uVar3 = *(undefined4 *)&param_2->field_0xc;
  this->DiffableObject = param_1;
  this->_padding_ = (longlong)&___7FDiffableObjectDataWriter_Transaction_UE__6B_;
  (this->PropertiesToSerialize).DataPtr = ppFVar1;
  (this->PropertiesToSerialize).ArrayNum = iVar2;
  *(undefined4 *)&(this->PropertiesToSerialize).field_0xc = uVar3;
  (this->CachedSerializedTaggedPropertyKey).CachedKey.ComparisonIndex = 0;
  (this->CachedSerializedTaggedPropertyKey).CachedKey.Number = 0;
  *(undefined8 *)&(this->CachedSerializedTaggedPropertyKey).LastUpdateCount = 0;
  (this->CachedSerializedTaggedDataEntry).CachedKey.Number = 0;
  (this->CachedSerializedTaggedDataEntry).CachedEntryPtr = (FSerializedTaggedData *)0x0;
  this->bIsPerformingScriptSerialization = false;
  this->bWasUsingTaggedDataKey_UnknownData = false;
  this->bWasUsingTaggedDataKey_ScriptData = false;
  this->TaggedDataKeyIndex_UnknownData = 0;
  this->TaggedDataKeyIndex_ScriptData = 0;
  FArchiveState::SetWantBinaryPropertySerialization((FArchiveState *)this,true);
  return this;
}

// operator<< @ 1488b2fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __thiscall
UE::Transaction::FDiffableObjectDataWriter::operator<<
          (FDiffableObjectDataWriter *this,UObject **param_1)

{
  FName *pFVar1;
  FArchive *pFVar2;
  undefined1 auStack_888 [32];
  FName local_868;
  FName local_860;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_868.ComparisonIndex.Value = 0;
  local_868.Number = 0;
  if ((UObjectBaseUtility *)*param_1 != (UObjectBaseUtility *)0x0) {
    local_858.Base = local_838;
    local_858.bIsDynamic = false;
    local_858.bIsExternal = false;
    local_858.CurPos = local_838;
    local_858.End = local_22;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)*param_1,(UObject *)0x0,&local_858);
    pFVar1 = ::FName::FName(&local_860,
                            (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1),
                            local_858.Base,FNAME_Add);
    local_868 = *pFVar1;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  }
  pFVar2 = (FArchive *)(**(code **)(this->_padding_ + 0x178))(this,&local_868);
  return pFVar2;
}

// operator<< @ 1488b30b0

FArchive * __thiscall
UE::Transaction::FDiffableObjectDataWriter::operator<<
          (FDiffableObjectDataWriter *this,FName *param_1)

{
  longlong *plVar1;
  uint local_res8 [2];
  uint local_res10 [6];
  
  local_res8[0] = (param_1->ComparisonIndex).Value;
  plVar1 = (longlong *)this->_padding_;
  local_res10[0] = param_1->Number;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)this->_padding_;
  if (*plVar1 + 4U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 4;
    return (FArchive *)this;
  }
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res10,4);
    return (FArchive *)this;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res10);
  return (FArchive *)this;
}

// DoesObjectMatchDiffableObject @ 1488bd0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Transaction::FDiffableObjectDataWriter::DoesObjectMatchDiffableObject
          (FDiffableObjectDataWriter *this,UObject *param_1)

{
  FDiffableObject *pFVar1;
  FName FVar2;
  FName FVar3;
  FName *pFVar4;
  undefined1 auStack_888 [32];
  FName local_868 [2];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.Base = local_838;
  local_858.CurPos = local_838;
  local_858.End = local_22;
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,(UObject *)0x0,&local_858);
  pFVar1 = this->DiffableObject;
  pFVar4 = ::FName::FName(local_868,
                          (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1),
                          local_858.Base,FNAME_Add);
  FVar2.ComparisonIndex.Value = *(uint *)&(pFVar1->ObjectInfo).field_0x10;
  FVar2.Number = *(uint *)&(pFVar1->ObjectInfo).field_0x14;
  FVar3 = *pFVar4;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return FVar3 == FVar2;
}

// GetTaggedDataKey @ 1488c5030

FName __thiscall
UE::Transaction::FDiffableObjectDataWriter::GetTaggedDataKey(FDiffableObjectDataWriter *this)

{
  uint uVar1;
  void *pvVar2;
  bool bVar3;
  FName FVar4;
  undefined8 *puVar5;
  FName in_RDX;
  undefined8 local_res10;
  
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  *(longlong *)in_RDX = 0;
  puVar5 = (undefined8 *)this->_padding_;
  if ((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 9) < 1)) {
LAB_1488c50c9:
    if (this->bIsPerformingScriptSerialization != false) {
      this->bWasUsingTaggedDataKey_ScriptData = true;
      local_res10 = CONCAT44(this->TaggedDataKeyIndex_ScriptData,
                             TaggedDataKey_ScriptData.ComparisonIndex.Value);
      *(longlong *)in_RDX = local_res10;
      goto LAB_1488c510d;
    }
  }
  else {
    uVar1 = *(uint *)(puVar5 + 10);
    if (uVar1 != (this->CachedSerializedTaggedPropertyKey).LastUpdateCount) {
      if ((undefined8 *)puVar5[8] != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)puVar5[8];
      }
      pvVar2 = (void *)*puVar5;
      bVar3 = IsThisNotNull(pvVar2,"FField::GetFName");
      if (bVar3) {
        FVar4 = *(FName *)((longlong)pvVar2 + 0x20);
      }
      (this->CachedSerializedTaggedPropertyKey).CachedKey = FVar4;
      (this->CachedSerializedTaggedPropertyKey).LastUpdateCount = uVar1;
    }
    FVar4 = (this->CachedSerializedTaggedPropertyKey).CachedKey;
    *(FName *)in_RDX = FVar4;
    if (FVar4 == (FName)0x0) goto LAB_1488c50c9;
  }
  if (this->bWasUsingTaggedDataKey_ScriptData != false) {
    this->TaggedDataKeyIndex_ScriptData = this->TaggedDataKeyIndex_ScriptData + 1;
    this->bWasUsingTaggedDataKey_ScriptData = false;
  }
LAB_1488c510d:
  if (*(longlong *)in_RDX == 0) {
    this->bWasUsingTaggedDataKey_UnknownData = true;
    local_res10 = CONCAT44(this->TaggedDataKeyIndex_UnknownData,
                           TaggedDataKey_UnknownData.ComparisonIndex.Value);
    *(longlong *)in_RDX = local_res10;
    return in_RDX;
  }
  if (this->bWasUsingTaggedDataKey_UnknownData != false) {
    this->TaggedDataKeyIndex_UnknownData = this->TaggedDataKeyIndex_UnknownData + 1;
    this->bWasUsingTaggedDataKey_UnknownData = false;
  }
  return in_RDX;
}

// MarkScriptSerializationEnd @ 1488ce630

void __thiscall
UE::Transaction::FDiffableObjectDataWriter::MarkScriptSerializationEnd
          (FDiffableObjectDataWriter *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = DoesObjectMatchDiffableObject(this,param_1);
  if (bVar1) {
    this->bIsPerformingScriptSerialization = false;
  }
  return;
}

// MarkScriptSerializationStart @ 1488ce660

void __thiscall
UE::Transaction::FDiffableObjectDataWriter::MarkScriptSerializationStart
          (FDiffableObjectDataWriter *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = DoesObjectMatchDiffableObject(this,param_1);
  if (bVar1) {
    this->bIsPerformingScriptSerialization = true;
  }
  return;
}

// OnDataSerialized @ 1488cf850

void __thiscall
UE::Transaction::FDiffableObjectDataWriter::OnDataSerialized
          (FDiffableObjectDataWriter *this,long64 param_1,long64 param_2)

{
  uint uVar1;
  void *pvVar2;
  FDiffableObject *pFVar3;
  longlong lVar4;
  bool bVar5;
  FSerializedTaggedData *pFVar6;
  TTuple<FName,UE::Transaction::FSerializedTaggedData> *pTVar7;
  long64 lVar8;
  FName FVar9;
  longlong lVar10;
  undefined8 *puVar11;
  FName local_20;
  
  puVar11 = (undefined8 *)this->_padding_;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  if ((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 9) < 1)) {
    local_20.ComparisonIndex.Value = 0;
    local_20.Number = 0;
  }
  else {
    uVar1 = *(uint *)(puVar11 + 10);
    if (uVar1 != (this->CachedSerializedTaggedPropertyKey).LastUpdateCount) {
      if ((undefined8 *)puVar11[8] != (undefined8 *)0x0) {
        puVar11 = (undefined8 *)puVar11[8];
      }
      pvVar2 = (void *)*puVar11;
      bVar5 = IsThisNotNull(pvVar2,"FField::GetFName");
      if (bVar5) {
        FVar9 = *(FName *)((longlong)pvVar2 + 0x20);
      }
      (this->CachedSerializedTaggedPropertyKey).CachedKey = FVar9;
      (this->CachedSerializedTaggedPropertyKey).LastUpdateCount = uVar1;
    }
    local_20 = (this->CachedSerializedTaggedPropertyKey).CachedKey;
    FVar9 = (FName)((ulonglong)local_20 >> 0x20);
  }
  if ((FVar9 == (FName)0x0 && ((ulonglong)local_20 & 0xffffffff) == 0) &&
     (this->bIsPerformingScriptSerialization != false)) {
    this->bWasUsingTaggedDataKey_ScriptData = true;
    local_20.Number = this->TaggedDataKeyIndex_ScriptData;
    local_20.ComparisonIndex.Value = TaggedDataKey_ScriptData.ComparisonIndex.Value;
  }
  else if (this->bWasUsingTaggedDataKey_ScriptData != false) {
    this->TaggedDataKeyIndex_ScriptData = this->TaggedDataKeyIndex_ScriptData + 1;
    this->bWasUsingTaggedDataKey_ScriptData = false;
  }
  if (local_20 == (FName)0x0) {
    this->bWasUsingTaggedDataKey_UnknownData = true;
    local_20.Number = this->TaggedDataKeyIndex_UnknownData;
    local_20.ComparisonIndex.Value = TaggedDataKey_UnknownData.ComparisonIndex.Value;
  }
  else if (this->bWasUsingTaggedDataKey_UnknownData != false) {
    this->TaggedDataKeyIndex_UnknownData = this->TaggedDataKeyIndex_UnknownData + 1;
    this->bWasUsingTaggedDataKey_UnknownData = false;
  }
  if (local_20 != (FName)0x0) {
    pFVar3 = this->DiffableObject;
    if ((this->CachedSerializedTaggedDataEntry).CachedKey != local_20) {
      (this->CachedSerializedTaggedDataEntry).CachedKey = local_20;
      pFVar6 = TSortedMap<FName,UE::Transaction::FSerializedTaggedData,TSizedDefaultAllocator<32>,FNameFastLess>
               ::Find(&pFVar3->SerializedTaggedData,local_20);
      if (pFVar6 == (FSerializedTaggedData *)0x0) {
        pTVar7 = TSortedMap<FName,UE::Transaction::FSerializedTaggedData,TSizedDefaultAllocator<32>,FNameFastLess>
                 ::AllocateMemoryForEmplace<FName_const_&>(&pFVar3->SerializedTaggedData,&local_20);
        *(uint *)&pTVar7->field_0x0 = local_20.ComparisonIndex.Value;
        *(uint *)&pTVar7->field_0x4 = local_20.Number;
        pFVar6 = (FSerializedTaggedData *)&pTVar7->field_0x8;
        *(undefined8 *)pFVar6 = 0xffffffffffffffff;
        *(undefined8 *)&pTVar7->field_0x10 = 0;
      }
      (this->CachedSerializedTaggedDataEntry).CachedEntryPtr = pFVar6;
    }
    pFVar6 = (this->CachedSerializedTaggedDataEntry).CachedEntryPtr;
    lVar4 = pFVar6->DataOffset;
    if (lVar4 == -1) {
      pFVar6->DataOffset = param_1;
      pFVar6->DataSize = param_2;
    }
    else {
      lVar8 = param_1;
      if (lVar4 < param_1) {
        lVar8 = lVar4;
      }
      pFVar6->DataOffset = lVar8;
      lVar4 = (param_1 - lVar8) + param_2;
      lVar10 = pFVar6->DataSize;
      if (pFVar6->DataSize < lVar4) {
        lVar10 = lVar4;
      }
      pFVar6->DataSize = lVar10;
    }
  }
  return;
}

// ShouldSkipProperty @ 1488e01c0

bool __thiscall
UE::Transaction::FDiffableObjectDataWriter::ShouldSkipProperty
          (FDiffableObjectDataWriter *this,FProperty *param_1)

{
  FProperty **ppFVar1;
  int iVar2;
  FProperty **ppFVar3;
  
  iVar2 = (this->PropertiesToSerialize).ArrayNum;
  if (iVar2 < 1) {
LAB_1488e01f1:
    if ((param_1->PropertyFlags & (CPF_NonTransactional|CPF_Deprecated)) == CPF_None) {
      return false;
    }
  }
  else {
    ppFVar3 = (this->PropertiesToSerialize).DataPtr;
    ppFVar1 = ppFVar3 + iVar2;
    for (; ppFVar3 != ppFVar1; ppFVar3 = ppFVar3 + 1) {
      if (*ppFVar3 == param_1) goto LAB_1488e01f1;
    }
  }
  return true;
}

