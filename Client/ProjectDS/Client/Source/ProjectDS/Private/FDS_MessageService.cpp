// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// ProcessError @ 14bc02560

bool __cdecl FDS_MessageService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReceiveZoneEventMessage @ 14bc0c7b0

void __cdecl FDS_MessageService::ReceiveZoneEventMessage(ServerMessages *param_1)

{
  longlong *plVar1;
  int iVar2;
  FString *pFVar3;
  char *pcVar4;
  longlong *plVar5;
  ZoneEventMessageResponseDefaultTypeInternal *pZVar6;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x97) {
    pZVar6 = *(ZoneEventMessageResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pZVar6 = &server_msg::_ZoneEventMessageResponse_default_instance_;
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  if ((*(ulonglong *)&((Message *)((longlong)pZVar6 + 0x10))->field_0x8 & 1) == 0) {
    plVar5 = (longlong *)&((Message *)((longlong)pZVar6 + 0x10))->field_0x8;
  }
  else {
    plVar5 = (longlong *)(*(ulonglong *)&((Message *)((longlong)pZVar6 + 0x10))->field_0x8 + 7);
  }
  plVar1 = plVar5 + *(int *)((longlong)pZVar6 + 0x20);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    pcVar4 = (char *)*plVar5;
    if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
      pcVar4 = *(char **)pcVar4;
    }
    pFVar3 = DS_Util::ConvertUTF8ToFString(&local_28,pcVar4);
    iVar2 = local_48.ArrayNum;
    if (local_48.ArrayNum == local_48.ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_48.AllocatorInstance,&local_48.ArrayMax);
    }
    local_48.ArrayNum = iVar2 + 1;
    local_38.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (pFVar3->Data).ArrayNum;
    local_38.Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    FStringFormatArg::FStringFormatArg
              ((FStringFormatArg *)(local_48.AllocatorInstance.Data + (longlong)iVar2 * 0x20),
               &local_38);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  UDS_UIMessageManager::OpenMsgByStringUi
            (*(long64 *)((longlong)pZVar6 + 0x30),
             *(EDS_MessageDefineType *)&((Message *)((longlong)pZVar6 + 0x30))->field_0x8,&local_48,
             (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
              *)0x0);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FStringFormatArg *)local_48.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

