// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// GetCustomTabName @ 14b9ef3c0

FDS_Text * __thiscall
FDS_ChatCustomData::GetCustomTabName(FDS_ChatCustomData *this,FDS_Text *__return_storage_ptr__)

{
  int iVar1;
  int local_res8 [8];
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_18;
  
  local_res8[0] = this->ChatFilterIndex + 1;
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar1 + 1;
  FDS_TextFormatArg::FDS_TextFormatArg<int_const_&>
            ((FDS_TextFormatArg *)(local_18.AllocatorInstance.Data + (longlong)iVar1 * 0x28),
             local_res8);
  FDS_Text::SetTextFormatFromStringTable(__return_storage_ptr__,StringUi,0xc5dc,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FDS_TextFormatArg *)local_18.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetInputChattingType @ 14b9f0900

EDS_ChattingType __thiscall FDS_ChatCustomData::GetInputChattingType(FDS_ChatCustomData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement FVar5;
  undefined1 local_res10 [8];
  TArray<EDS_ChattingType,TSizedDefaultAllocator<32>_> local_28;
  
  EDS_ChattingTypeValues(&local_28);
  iVar2 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + iVar2;
  uVar3 = local_28._8_8_;
  FVar4.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<enum_EDS_ChattingType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
      uVar3 = local_28._8_8_;
    }
    if (FVar4.Data == pFVar1) break;
    FVar5 = *FVar4.Data;
    if ((this->ChatFilterFlags >> ((ulonglong)(byte)FVar5 & 0x3f) & 1) != 0) goto LAB_14b9f096d;
    FVar4.Data = FVar4.Data + 1;
  }
  FVar5 = (FScriptContainerElement)0x1;
LAB_14b9f096d:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return (EDS_ChattingType)FVar5;
}

// LoadFlag @ 14b9fa4e0

void __thiscall FDS_ChatCustomData::LoadFlag(FDS_ChatCustomData *this,FString *param_1)

{
  ulong64 uVar1;
  
  if ((param_1->Data).ArrayNum < 2) {
    this->ChatFilterFlags = 0;
    return;
  }
  uVar1 = _wtoi64((wchar_t *)(param_1->Data).AllocatorInstance.Data);
  this->ChatFilterFlags = uVar1;
  return;
}

// LoadMark @ 14b9fa520

void __thiscall FDS_ChatCustomData::LoadMark(FDS_ChatCustomData *this,FString *param_1)

{
  int iVar1;
  
  if ((param_1->Data).ArrayNum < 2) {
    this->bIsBookmark = false;
    return;
  }
  iVar1 = _wtoi((wchar_t *)(param_1->Data).AllocatorInstance.Data);
  this->bIsBookmark = 0 < iVar1;
  return;
}

// ToString @ 14ba1e0c0

FString * __thiscall
FDS_ChatCustomData::ToString(FDS_ChatCustomData *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString *pFVar2;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar1 = this->bIsBookmark;
  pFVar2 = DS_Util::FromInt64(&local_38,this->ChatFilterFlags);
  ::FString::PrintfImpl(&local_48,L"Custom%dFlag=");
  ::FString::ConcatFF(&local_18,&local_48,pFVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_48,(uint)(bVar1 == true));
  ::FString::PrintfImpl(&local_38,L"Custom%dMark=");
  ::FString::ConcatFF(&local_28,&local_38,&local_48);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_38,&local_18,L" ");
  ::FString::ConcatFF(__return_storage_ptr__,&local_38,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

