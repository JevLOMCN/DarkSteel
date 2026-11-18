// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullReplayStreaming
// Functions: 56

// AddEvent @ 146c86610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNullNetworkReplayStreamer::AddEvent
          (FNullNetworkReplayStreamer *this,uint param_1,FString *param_2,FString *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  if (4 < (byte)LogNullReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNullReplay);
    return;
  }
  return;
}

// AddOrUpdateEvent @ 146c86640

void __thiscall
FNullNetworkReplayStreamer::AddOrUpdateEvent
          (FNullNetworkReplayStreamer *this,FString *param_1,uint param_2,FString *param_3,
          FString *param_4,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_5)

{
  return;
}

// AddUserToReplay @ 146c86650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNullNetworkReplayStreamer::AddUserToReplay(FNullNetworkReplayStreamer *this,FString *param_1)

{
  if (4 < (byte)LogNullReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNullReplay);
    return;
  }
  return;
}

// DeleteFinishedStream @ 146c86680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNullNetworkReplayStreamer::DeleteFinishedStream
          (FNullNetworkReplayStreamer *this,FString *param_1,
          TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  IFileManager *pIVar4;
  wchar_t *pwVar5;
  undefined **local_38;
  undefined4 local_30;
  FReadAccessScope local_28;
  
  local_30 = 6;
  local_38 = &___7FDeleteFinishedStreamResult__6B_;
  bVar2 = IsNamedStreamLive(this,param_1);
  if (bVar2) {
    if (4 < (byte)LogNullReplay._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNullReplay);
    }
  }
  else {
    GetStreamDirectory((FString *)&local_28,param_1);
    bVar2 = FPaths::DirectoryExists((FString *)&local_28);
    if (bVar2) {
      pIVar4 = IFileManager::Get();
      pwVar5 = L"";
      if ((int)local_28.DestructionSentinel.Accessor != 0) {
        pwVar5 = (wchar_t *)local_28.DestructionSentinel._0_8_;
      }
      cVar3 = (**(code **)((longlong)*pIVar4 + 0x68))(pIVar4,pwVar5,0,1);
      if (cVar3 != '\0') {
        local_30 = 0;
      }
    }
    else {
      local_30 = 2;
    }
    if ((wchar_t *)local_28.DestructionSentinel._0_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)local_28.DestructionSentinel._0_8_);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// DeleteFinishedStream @ 146c867a0

void __thiscall
FNullNetworkReplayStreamer::DeleteFinishedStream
          (FNullNetworkReplayStreamer *this,FString *param_1,int param_2,
          TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000146c867a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x148))(this,param_1,param_3);
  return;
}

// DownloadHeader @ 146c867e0

void __thiscall
FNullNetworkReplayStreamer::DownloadHeader
          (FNullNetworkReplayStreamer *this,
          TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy> *param_1
          )

{
  longlong *plVar1;
  undefined **local_38;
  undefined4 local_30;
  FReadAccessScope local_28;
  
  plVar1 = (longlong *)0x0;
  local_38 = &___7FDownloadHeaderResult__6B_;
  local_30 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  if (*(int *)&param_1->field_0x10 != 0) {
    plVar1 = *(longlong **)&param_1->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// EnumerateEvents @ 146c86840

void __thiscall
FNullNetworkReplayStreamer::EnumerateEvents
          (FNullNetworkReplayStreamer *this,FString *param_1,FString *param_2,
          TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000146c86849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xa8))(this,param_2,param_3);
  return;
}

// EnumerateEvents @ 146c86860

void __thiscall
FNullNetworkReplayStreamer::EnumerateEvents
          (FNullNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000146c8686b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xa8))(this,param_2,param_4);
  return;
}

// EnumerateEvents @ 146c86880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNullNetworkReplayStreamer::EnumerateEvents
          (FNullNetworkReplayStreamer *this,FString *param_1,
          TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_48;
  undefined **local_30;
  undefined4 local_28;
  FJsonSerializable local_20;
  FReplayEventListItem *local_18;
  undefined8 local_10;
  
  if (4 < (byte)LogNullReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNullReplay);
  }
  local_28 = 1;
  plVar1 = (longlong *)0x0;
  local_30 = &___7FEnumerateEventsResult__6B_;
  local_18 = (FReplayEventListItem *)0x0;
  local_20 = (FJsonSerializable)&___7FReplayEventList__6B_;
  local_10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_48);
  if (*(int *)&param_2->field_0x10 != 0) {
    plVar1 = *(longlong **)&param_2->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,&local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  local_20 = (FJsonSerializable)&___7FReplayEventList__6B_;
  DestructItems<FReplayEventListItem,int>(local_18,(int)local_10);
  if (local_18 != (FReplayEventListItem *)0x0) {
    FMemory::Free(local_18);
  }
  FJsonSerializable::~FJsonSerializable(&local_20);
  return;
}

// EnumerateRecentStreams @ 146c86950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNullNetworkReplayStreamer::EnumerateRecentStreams
          (FNullNetworkReplayStreamer *this,FNetworkReplayVersion *param_1,int param_2,
          TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  longlong *plVar1;
  FReadAccessScope local_58;
  undefined **local_40;
  undefined4 local_38;
  FNetworkReplayStreamInfo *local_30;
  undefined8 local_28;
  FString *local_20;
  undefined8 local_18;
  
  if (4 < (byte)LogNullReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNullReplay);
  }
  plVar1 = (longlong *)0x0;
  local_38 = 1;
  local_30 = (FNetworkReplayStreamInfo *)0x0;
  local_40 = &___7FEnumerateStreamsResult__6B_;
  local_28 = 0;
  local_20 = (FString *)0x0;
  local_18 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_58);
  if (*(int *)&param_3->field_0x10 != 0) {
    plVar1 = *(longlong **)&param_3->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  DestructItems<FString,int>(local_20,(int)local_18);
  if (local_20 != (FString *)0x0) {
    FMemory::Free(local_20);
  }
  DestructItems<FNetworkReplayStreamInfo,int>(local_30,(int)local_28);
  if (local_30 != (FNetworkReplayStreamInfo *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// EnumerateStreams @ 146c86a20

void __thiscall
FNullNetworkReplayStreamer::EnumerateStreams
          (FNullNetworkReplayStreamer *this,FNetworkReplayVersion *param_1,int param_2,
          FString *param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4,
          TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
          *param_5)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  size_t sVar8;
  IFileManager *pIVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FNetworkReplayStreamInfo *pFVar16;
  FNetworkReplayStreamInfo *pFVar17;
  undefined1 local_198 [16];
  FNetworkReplayStreamInfo local_188;
  FNetworkReplayStreamInfo *local_148;
  ulonglong local_140;
  undefined **local_138;
  undefined4 local_130;
  ForAnyElementType local_128;
  undefined8 local_120;
  FString *local_118;
  undefined8 local_110;
  uint local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FNullReplayInfo local_d0;
  FString local_a0;
  TStringView<wchar_t> local_90;
  wchar_t *local_80;
  undefined4 local_78;
  undefined1 local_70 [8];
  FString local_68;
  FString local_58;
  FReadAccessScope local_48;
  
  pFVar7 = FPaths::ProjectSavedDir();
  if ((pFVar7->Data).ArrayNum == 0) {
    local_90.DataPtr = L"";
  }
  else {
    local_90.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  local_90.Size = 0;
  if ((FScriptContainerElement *)local_90.DataPtr != (FScriptContainerElement *)0x0) {
    sVar8 = wcslen(local_90.DataPtr);
    local_90.Size = (int)sVar8;
  }
  local_78 = 6;
  local_80 = L"Demos/";
  FPaths::CombineInternal(&local_a0,&local_90,2);
  ::FString::ConcatFC(&local_e0,&local_a0,L"*");
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  local_148 = (FNetworkReplayStreamInfo *)0x0;
  local_140 = 0;
  pIVar9 = IFileManager::Get();
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar13.Data = local_e0.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar9 + 0x80))(pIVar9,&local_148,FVar13.Data,0,1);
  local_138 = &___7FEnumerateStreamsResult__6B_;
  uVar10 = (ulonglong)(int)(uint)local_140;
  pFVar16 = (FNetworkReplayStreamInfo *)(&local_148->Name + uVar10);
  local_130 = 6;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  local_118 = (FString *)0x0;
  local_110 = 0;
  local_108 = (uint)local_140;
  uVar12 = uVar10;
  pFVar17 = local_148;
  do {
    if ((int)uVar10 != (int)uVar12) {
      local_198[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_198);
    }
    if (pFVar17 == pFVar16) {
      local_130 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_5,&local_48);
      if ((*(int *)&param_5->field_0x10 != 0) &&
         (plVar2 = *(longlong **)&param_5->field_0x8, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x68))(plVar2,&local_138);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      DestructItems<FString,int>(local_118,(int)local_110);
      if (local_118 != (FString *)0x0) {
        FMemory::Free(local_118);
      }
      DestructItems<FNetworkReplayStreamInfo,int>
                ((FNetworkReplayStreamInfo *)local_128.Data,(int)local_120);
      if ((FNetworkReplayStreamInfo *)local_128.Data != (FNetworkReplayStreamInfo *)0x0) {
        FMemory::Free(local_128.Data);
      }
      local_138 = &___7FStreamingResultBase__6B_;
      DestructItems<FString,int>(&local_148->Name,(uint)local_140);
      if (local_148 != (FNetworkReplayStreamInfo *)0x0) {
        FMemory::Free(local_148);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      return;
    }
    pFVar7 = GetStreamFullBaseFilename(&local_68,&pFVar17->Name);
    ::FString::ConcatFC(&local_100,pFVar7,L".demo");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_188.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.Timestamp.Ticks = 0;
    local_188.SizeInBytes = 0;
    local_188.Name.Data.ArrayNum = 0;
    local_188.Name.Data.ArrayMax = 0;
    local_188.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.FriendlyName.Data.ArrayNum = 0;
    local_188.FriendlyName.Data.ArrayMax = 0;
    local_188.LengthInMS = 0;
    local_188.NumViewers = 0;
    local_188.Changelist = 0;
    local_188.bIsLive = false;
    local_188.bShouldKeep = false;
    pIVar9 = IFileManager::Get();
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_100.Data.ArrayNum != 0) {
      FVar13.Data = local_100.Data.AllocatorInstance.Data;
    }
    local_188.SizeInBytes = (**(code **)((longlong)*pIVar9 + 0x110))(pIVar9,FVar13.Data);
    ReadReplayInfo(&local_d0,&pFVar17->Name);
    if (local_d0.bIsValid != false) {
      if ((param_1->NetworkVersion == 0) || (param_1->NetworkVersion == local_d0.NetworkVersion)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if ((param_1->Changelist == 0) || (param_1->Changelist == local_d0.Changelist)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((bVar5) && (bVar3)) {
        if (&local_188 != pFVar17) {
          iVar6 = (pFVar17->Name).Data.ArrayNum;
          pFVar14 = (pFVar17->Name).Data.AllocatorInstance.Data;
          local_188.Name.Data.ArrayNum = iVar6;
          if ((iVar6 == 0) && (local_188.Name.Data.ArrayMax == 0)) {
            local_188.Name.Data.ArrayNum = 0;
            local_188.Name.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar6,local_188.Name.Data.ArrayMax,(ForAnyElementType *)&local_188,iVar6,
                       &local_188.Name.Data.ArrayMax);
            if (iVar6 != 0) {
              memcpy(local_188.Name.Data.AllocatorInstance.Data,pFVar14,(longlong)iVar6 * 2);
            }
          }
        }
        pIVar9 = IFileManager::Get();
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_100.Data.ArrayNum != 0) {
          FVar13.Data = local_100.Data.AllocatorInstance.Data;
        }
        puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar9 + 0xd8))(pIVar9,local_70,FVar13.Data)
        ;
        local_188.Timestamp.Ticks = *puVar11;
        pIVar9 = IFileManager::Get();
        pcVar1 = *(code **)((longlong)*pIVar9 + 0x50);
        pFVar7 = GetStreamFullBaseFilename(&local_58,&pFVar17->Name);
        ::FString::ConcatFC(&local_f0,pFVar7,L".final");
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_f0.Data.ArrayNum != 0) {
          FVar13.Data = local_f0.Data.AllocatorInstance.Data;
        }
        cVar4 = (*pcVar1)(pIVar9,FVar13.Data);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        local_188.Changelist = local_d0.Changelist;
        local_188.LengthInMS = local_d0.LengthInMS;
        local_188.bIsLive = cVar4 == '\0';
        iVar6 = local_d0.FriendlyName.Data.ArrayNum + -1;
        if (local_d0.FriendlyName.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        ::FString::AssignRange
                  (&local_188.FriendlyName,
                   (wchar_t *)local_d0.FriendlyName.Data.AllocatorInstance.Data,iVar6);
        if (((local_128.Data <= &local_188) &&
            (&local_188 <
             (FNetworkReplayStreamInfo *)(local_128.Data + (longlong)local_120._4_4_ * 0x40))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar6 = (int)local_120;
        if ((int)local_120 == local_120._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x840,&local_128,(int *)((longlong)&local_120 + 4));
        }
        FVar13.Data = local_188.Name.Data.AllocatorInstance.Data;
        pFVar14 = local_128.Data + (longlong)iVar6 * 0x40;
        local_120 = CONCAT44(local_120._4_4_,iVar6 + 1);
        *(FScriptContainerElement **)&pFVar14->field_0x0 = (FScriptContainerElement *)0x0;
        lVar15 = (longlong)local_188.Name.Data.ArrayNum;
        *(int *)(pFVar14 + 8) = local_188.Name.Data.ArrayNum;
        if (local_188.Name.Data.ArrayNum == 0) {
          *(int *)(pFVar14 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_188.Name.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,
                     local_188.Name.Data.ArrayNum,(int *)(pFVar14 + 0xc));
          memcpy(*(FScriptContainerElement **)&pFVar14->field_0x0,FVar13.Data,lVar15 * 2);
        }
        FVar13.Data = local_188.FriendlyName.Data.AllocatorInstance.Data;
        *(FScriptContainerElement **)(pFVar14 + 0x10) = (FScriptContainerElement *)0x0;
        lVar15 = (longlong)local_188.FriendlyName.Data.ArrayNum;
        *(int *)(pFVar14 + 0x18) = local_188.FriendlyName.Data.ArrayNum;
        if (local_188.FriendlyName.Data.ArrayNum == 0) {
          *(int *)(pFVar14 + 0x1c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_188.FriendlyName.Data.ArrayNum,0,
                     (ForAnyElementType *)(pFVar14 + 0x10),local_188.FriendlyName.Data.ArrayNum,
                     (int *)(pFVar14 + 0x1c));
                    /* WARNING: Load size is inaccurate */
          memcpy(pFVar14[0x10],FVar13.Data,lVar15 * 2);
        }
        *(long64 *)(pFVar14 + 0x20) = local_188.Timestamp.Ticks;
        *(long64 *)(pFVar14 + 0x28) = local_188.SizeInBytes;
        *(int *)(pFVar14 + 0x30) = local_188.LengthInMS;
        *(int *)(pFVar14 + 0x34) = local_188.NumViewers;
        *(int *)(pFVar14 + 0x38) = local_188.Changelist;
        pFVar14[0x3c] = (FScriptContainerElement)local_188.bIsLive;
        pFVar14[0x3d] = (FScriptContainerElement)local_188.bShouldKeep;
      }
    }
    if (local_d0.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.FriendlyName.Data.AllocatorInstance.Data);
    }
    FJsonSerializable::~FJsonSerializable((FJsonSerializable *)&local_d0);
    if (local_188.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.FriendlyName.Data.AllocatorInstance.Data);
    }
    if (local_188.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Name.Data.AllocatorInstance.Data);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    uVar10 = local_140 & 0xffffffff;
    pFVar17 = (FNetworkReplayStreamInfo *)&pFVar17->FriendlyName;
    uVar12 = (ulonglong)local_108;
  } while( true );
}

// FlushCheckpoint @ 146c87030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNullNetworkReplayStreamer::FlushCheckpoint(FNullNetworkReplayStreamer *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  IFileManager *pIVar3;
  FString *pFVar4;
  FArchive *pFVar5;
  wchar_t *pwVar6;
  FString local_78;
  FString local_68;
  FString local_58;
  FJsonSerializable local_48;
  FString local_40;
  FScriptContainerElement *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (4 < (byte)LogNullReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNullReplay);
  }
  pwVar6 = L"";
  if ((this->FileAr).Ptr == (FArchive *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FileAr.Get() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\NullNetworkReplayStreaming\\Private\\NullNetworkReplayStreaming.cpp"
                       ,0x218,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar5 = (this->CheckpointAr).Ptr;
  if (pFVar5 != (FArchive *)0x0) {
    (this->CheckpointAr).Ptr = (FArchive *)0x0;
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
  }
  pIVar3 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x20);
  pFVar4 = GetEventFilename(&local_58,&this->CurrentStreamName,this->CurrentCheckpointIndex);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar5 = (FArchive *)(*pcVar1)(pIVar3,pwVar6,0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (pFVar5 == (FArchive *)0x0) {
    this->CurrentCheckpointIndex = this->CurrentCheckpointIndex + 1;
  }
  else {
    local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48 = (FJsonSerializable)&___7FNullCheckpointListItem__6B_;
    local_40.Data.ArrayNum = 0;
    local_40.Data.ArrayMax = 0;
    local_30 = (void *)0x0;
    local_28 = 0;
    local_20 = 0;
    ::FString::operator=(&local_40,L"checkpoint");
    (**(code **)(*(longlong *)(this->FileAr).Ptr + 0x28))();
    ::FString::PrintfImpl(&local_78,L"%lld");
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
    local_30 = local_78.Data.AllocatorInstance.Data;
    local_20 = CONCAT44(param_1,param_1);
    FJsonSerializable::ToJson(&local_48,&local_68,true);
    ::operator<<(pFVar5,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_30 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    FJsonSerializable::~FJsonSerializable(&local_48);
    this->CurrentCheckpointIndex = this->CurrentCheckpointIndex + 1;
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
  }
  return;
}

// GetCheckpointArchive @ 146c87580

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall
FNullNetworkReplayStreamer::GetCheckpointArchive(FNullNetworkReplayStreamer *this)

{
  code *pcVar1;
  bool bVar2;
  FArchive *pFVar3;
  IFileManager *pIVar4;
  FString *pFVar5;
  FArchive *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if ((this->CheckpointAr).Ptr != (FArchive *)0x0) {
    return (this->CheckpointAr).Ptr;
  }
  pwVar7 = L"";
  if (this->StreamerState == Playback) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StreamerState != EReplayStreamerState::Playback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\NullNetworkReplayStreaming\\Private\\NullNetworkReplayStreaming.cpp"
                       ,0x208,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FArchive *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::PrintfImpl(&local_18,L"checkpoint%d");
  if (4 < (byte)LogNullReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNullReplay);
  }
  pIVar4 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar4 + 0x20);
  pFVar5 = GetCheckpointFilename(&local_28,&this->CurrentStreamName,this->CurrentCheckpointIndex);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar6 = (FArchive *)(*pcVar1)(pIVar4,pwVar7,0);
  pFVar3 = (this->CheckpointAr).Ptr;
  if ((pFVar3 != pFVar6) && ((this->CheckpointAr).Ptr = pFVar6, pFVar3 != (FArchive *)0x0)) {
    (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (this->CheckpointAr).Ptr;
}

// GetDemoPath @ 146c877b0

EStreamingOperationResult __thiscall
FNullNetworkReplayStreamer::GetDemoPath(FNullNetworkReplayStreamer *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  size_t sVar3;
  FString local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  pFVar2 = FPaths::ProjectSavedDir();
  if ((pFVar2->Data).ArrayNum == 0) {
    local_28.DataPtr = L"";
  }
  else {
    local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  local_28.Size = 0;
  if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
    sVar3 = wcslen(local_28.DataPtr);
    local_28.Size = (int)sVar3;
  }
  local_10 = 6;
  local_18 = L"Demos/";
  FPaths::CombineInternal(&local_38,&local_28,2);
  if (param_1 != &local_38) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_38.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return Success;
}

// GetHeaderArchive @ 146c87990

FArchive * __thiscall FNullNetworkReplayStreamer::GetHeaderArchive(FNullNetworkReplayStreamer *this)

{
  return (this->HeaderAr).Ptr;
}

// GetMaxFriendlyNameSize @ 146c879a0

uint __thiscall FNullNetworkReplayStreamer::GetMaxFriendlyNameSize(FNullNetworkReplayStreamer *this)

{
  return 0;
}

// GetReplayID @ 146c879b0

FString * __thiscall
FNullNetworkReplayStreamer::GetReplayID
          (FNullNetworkReplayStreamer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->CurrentStreamName);
  return __return_storage_ptr__;
}

// GetReplayStreamerState @ 146c879e0

EReplayStreamerState __thiscall
FNullNetworkReplayStreamer::GetReplayStreamerState(FNullNetworkReplayStreamer *this)

{
  return this->StreamerState;
}

// GetStatId @ 146c879f0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FNullNetworkReplayStreamer::GetStatId(FNullNetworkReplayStreamer *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FNullNetworkReplayStreamer::GetStatId(void)const_::_2_::FStat_FNullNetworkReplayStreamer>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FNullNetworkReplayStreamer ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FNullNetworkReplayStreamer::GetStatId(void)const_::_2_::FStat_FNullNetworkReplayStreamer>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"FNullNetworkReplayStreamer");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FNullNetworkReplayStreamer,*pFVar1,
                   L"FNullNetworkReplayStreamer","STATGROUP_Tickables","STATCAT_Advanced",
                   L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_FNullNetworkReplayStreamer;
  if (StatPtr_FNullNetworkReplayStreamer ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FNullNetworkReplayStreamer::GetStatId(void)const_::_2_::FStat_FNullNetworkReplayStreamer>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FNullNetworkReplayStreamer");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FNullNetworkReplayStreamer::GetStatId(void)const_::_2_::FStat_FNullNetworkReplayStreamer>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FNullNetworkReplayStreamer,*pFVar1,
                         L"FNullNetworkReplayStreamer","STATGROUP_Tickables","STATCAT_Advanced",
                         L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetStreamingArchive @ 146c87f90

FArchive * __thiscall
FNullNetworkReplayStreamer::GetStreamingArchive(FNullNetworkReplayStreamer *this)

{
  return (this->FileAr).Ptr;
}

// GetTickableTickType @ 146c87fa0

ETickableTickType __thiscall
FNullNetworkReplayStreamer::GetTickableTickType(FNullNetworkReplayStreamer *this)

{
  return Always;
}

// GetTotalDemoTime @ 146c87fb0

uint __thiscall FNullNetworkReplayStreamer::GetTotalDemoTime(FNullNetworkReplayStreamer *this)

{
  return (this->ReplayInfo).LengthInMS;
}

// GotoCheckpointIndex @ 146c87fc0

void __thiscall
FNullNetworkReplayStreamer::GotoCheckpointIndex
          (FNullNetworkReplayStreamer *this,int param_1,
          TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> *param_2,
          EReplayCheckpointType param_3)

{
  GotoCheckpointIndexInternal(this,param_1,param_2,-1);
  return;
}

// GotoCheckpointIndexInternal @ 146c87fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNullNetworkReplayStreamer::GotoCheckpointIndexInternal
          (FNullNetworkReplayStreamer *this,int param_1,
          TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> *param_2,
          int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FArchiveState *pFVar4;
  IFileManager *pIVar5;
  FArchive *pFVar6;
  FArchive *pFVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  FArchiveState *pFVar10;
  wchar_t *_Str;
  undefined **local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  int iStack_ac;
  FString local_a8;
  FString local_98;
  FJsonSerializable local_88;
  void *local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined8 local_68;
  undefined8 local_60;
  FString local_58;
  FReadAccessScope local_48;
  
  if (((this->FileAr).Ptr == (FArchive *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileAr.Get() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\NullNetworkReplayStreaming\\Private\\NullNetworkReplayStreaming.cpp"
                         ,0x238,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_c8 = &___7FGotoResult__6B_;
  local_c0 = 6;
  local_b8 = -1;
  local_b0 = 0xfffffffe;
  iStack_ac = -2;
  if (param_1 == -1) {
    pFVar4 = ::operator_new(0x90);
    pFVar10 = (FArchiveState *)0x0;
    if (pFVar4 != (FArchiveState *)0x0) {
      FArchiveState::FArchiveState(pFVar4);
      pFVar4->_padding_ = (longlong)&___7FArchive__6B_;
      pFVar10 = pFVar4;
    }
    pFVar4 = (FArchiveState *)(this->CheckpointAr).Ptr;
    if ((pFVar4 != pFVar10) &&
       ((this->CheckpointAr).Ptr = (FArchive *)pFVar10, pFVar4 != (FArchiveState *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    pFVar7 = (this->FileAr).Ptr;
    (**(code **)(*(longlong *)pFVar7 + 0x1b8))(pFVar7,0);
    local_c0 = 0;
    local_b0 = 0xffffffff;
    iStack_ac = -1;
    local_b8 = (longlong)param_3;
  }
  else {
    GetCheckpointFilename(&local_98,&this->CurrentStreamName,param_1);
    pIVar5 = IFileManager::Get();
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar9.Data = local_98.Data.AllocatorInstance.Data;
    }
    pFVar6 = (FArchive *)(**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,FVar9.Data,0);
    pFVar7 = (this->CheckpointAr).Ptr;
    if ((pFVar7 != pFVar6) && ((this->CheckpointAr).Ptr = pFVar6, pFVar7 != (FArchive *)0x0)) {
      (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
    }
    if ((this->CheckpointAr).Ptr == (FArchive *)0x0) {
      if (4 < (byte)LogNullReplay._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNullReplay);
      }
    }
    else {
      local_c0 = 0;
      local_b8 = (longlong)param_3;
      iStack_ac = param_1;
      GetEventFilename(&local_58,&this->CurrentStreamName,param_1);
      pIVar5 = IFileManager::Get();
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar9.Data = local_58.Data.AllocatorInstance.Data;
      }
      pFVar7 = (FArchive *)(**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,FVar9.Data,0);
      if (pFVar7 != (FArchive *)0x0) {
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.Data.ArrayNum = 0;
        local_a8.Data.ArrayMax = 0;
        ::operator<<(pFVar7,&local_a8);
        local_80 = (void *)0x0;
        local_88 = (FJsonSerializable)&___7FNullCheckpointListItem__6B_;
        local_78 = 0;
        local_70 = (wchar_t *)0x0;
        local_68 = 0;
        local_60 = 0;
        FJsonSerializable::FromJson(&local_88,&local_a8);
        local_b0 = (undefined4)local_60;
        ReopenStreamFileForReading(this);
        pFVar6 = (this->FileAr).Ptr;
        _Str = L"";
        if ((int)local_68 != 0) {
          _Str = local_70;
        }
        pcVar2 = *(code **)(*(longlong *)pFVar6 + 0x1b8);
        lVar8 = _wtoi64(_Str);
        (*pcVar2)(pFVar6,lVar8);
        if (local_70 != (wchar_t *)0x0) {
          FMemory::Free(local_70);
        }
        if (local_80 != (void *)0x0) {
          FMemory::Free(local_80);
        }
        FJsonSerializable::~FJsonSerializable(&local_88);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_48);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  return;
}

// GotoTimeInMS @ 146c88300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNullNetworkReplayStreamer::GotoTimeInMS
          (FNullNetworkReplayStreamer *this,uint param_1,
          TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> *param_2,
          EReplayCheckpointType param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FString *pFVar6;
  size_t sVar7;
  IFileManager *pIVar8;
  FArchive *pFVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auStackY_168 [32];
  ForAnyElementType local_118;
  undefined8 local_110;
  uint local_108;
  uint local_104;
  FNullCheckpointListItem local_100;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> *local_a0;
  FNullNetworkReplayStreamer *local_98;
  FString local_90;
  FString local_80;
  TStringView<wchar_t> local_70;
  wchar_t *local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar13 = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  local_104 = param_1;
  local_a0 = param_2;
  local_98 = this;
  pFVar6 = GetStreamDirectory(&local_80,&this->CurrentStreamName);
  local_70.Size = 0;
  if ((pFVar6->Data).ArrayNum == 0) {
    local_70.DataPtr = L"";
  }
  else {
    local_70.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  if ((FScriptContainerElement *)local_70.DataPtr != (FScriptContainerElement *)0x0) {
    sVar7 = wcslen(local_70.DataPtr);
    local_70.Size = (int)sVar7;
  }
  local_58 = 6;
  local_60 = L"events";
  local_48 = 5;
  local_50 = L"event";
  FPaths::CombineInternal(&local_90,&local_70,3);
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  local_108 = 0;
  uVar11 = uVar13;
  while( true ) {
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_d0,(int)uVar11);
    ::FString::ConcatFF(&local_b0,&local_90,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    pIVar8 = IFileManager::Get();
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar10.Data = local_b0.Data.AllocatorInstance.Data;
    }
    pFVar9 = (FArchive *)(**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,FVar10.Data,0);
    uVar17 = local_104;
    if (pFVar9 == (FArchive *)0x0) break;
    local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.Data.ArrayNum = 0;
    local_c0.Data.ArrayMax = 0;
    ::operator<<(pFVar9,&local_c0);
    local_100._padding_ = (longlong)&___7FNullCheckpointListItem__6B_;
    local_100.Group.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.Group.Data.ArrayNum = 0;
    local_100.Group.Data.ArrayMax = 0;
    local_100.Metadata.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.Metadata.Data.ArrayNum = 0;
    local_100.Metadata.Data.ArrayMax = 0;
    local_100.Time1 = 0;
    local_100.Time2 = 0;
    FJsonSerializable::FromJson((FJsonSerializable *)&local_100,&local_c0);
    if (((local_118.Data <= &local_100) &&
        (&local_100 < (FNullCheckpointListItem *)(local_118.Data + (longlong)local_110._4_4_ * 0x30)
        )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (int)local_110;
    if ((int)local_110 == local_110._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&local_118,(int *)((longlong)&local_110 + 4));
    }
    FVar10.Data = local_100.Group.Data.AllocatorInstance.Data;
    local_110 = CONCAT44(local_110._4_4_,iVar4 + 1);
    pFVar14 = local_118.Data + (longlong)iVar4 * 0x30;
    pFVar1 = pFVar14 + 8;
    *(undefined ***)&pFVar14->field_0x0 = &___7FNullCheckpointListItem__6B_;
    *(FScriptContainerElement **)pFVar1 = (FScriptContainerElement *)0x0;
    lVar19 = (longlong)local_100.Group.Data.ArrayNum;
    *(int *)(pFVar14 + 0x10) = local_100.Group.Data.ArrayNum;
    if (local_100.Group.Data.ArrayNum == 0) {
      *(int *)(pFVar14 + 0x14) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_100.Group.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,
                 local_100.Group.Data.ArrayNum,(int *)(pFVar14 + 0x14));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar1,FVar10.Data,lVar19 * 2);
    }
    FVar10.Data = local_100.Metadata.Data.AllocatorInstance.Data;
    *(undefined8 *)(pFVar14 + 0x18) = 0;
    lVar19 = (longlong)local_100.Metadata.Data.ArrayNum;
    *(int *)(pFVar14 + 0x20) = local_100.Metadata.Data.ArrayNum;
    if (local_100.Metadata.Data.ArrayNum == 0) {
      *(int *)(pFVar14 + 0x24) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_100.Metadata.Data.ArrayNum,0,(ForAnyElementType *)(pFVar14 + 0x18),
                 local_100.Metadata.Data.ArrayNum,(int *)(pFVar14 + 0x24));
                    /* WARNING: Load size is inaccurate */
      memcpy(pFVar14[0x18],FVar10.Data,lVar19 * 2);
    }
    *(uint *)(pFVar14 + 0x28) = local_100.Time1;
    *(uint *)(pFVar14 + 0x2c) = local_100.Time2;
    if (local_100.Metadata.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Metadata.Data.AllocatorInstance.Data);
    }
    if (local_100.Group.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Group.Data.AllocatorInstance.Data);
    }
    FJsonSerializable::~FJsonSerializable((FJsonSerializable *)&local_100);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    local_108 = local_108 + 1;
    uVar11 = (ulonglong)local_108;
    (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  uVar11 = (ulonglong)(int)local_110;
  uVar18 = 0xffffffff;
  uVar16 = 0;
  if ((int)local_110 < 1) {
LAB_146c886e4:
    iVar4 = (int)uVar11;
    uVar15 = uVar13;
    if (0 < iVar4) {
      do {
        uVar12 = (uint)uVar13;
        uVar5 = uVar16;
        if ((int)uVar12 < (int)uVar11) {
          uVar5 = ~uVar12 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar11 = local_110 & 0xffffffff;
        }
        iVar4 = (int)uVar11;
        if (uVar17 < *(uint *)(local_118.Data + uVar15 + 0x28)) {
          uVar18 = uVar12 - 1;
          goto LAB_146c88758;
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar15 = uVar15 + 0x30;
      } while ((int)(uVar12 + 1) < iVar4);
      goto LAB_146c887ba;
    }
  }
  else {
    uVar12 = (int)local_110 - 1;
    uVar5 = uVar16;
    if ((int)uVar12 < (int)local_110) {
      uVar5 = ~uVar12 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = local_110 & 0xffffffff;
    }
    iVar4 = (int)uVar11;
    if (uVar17 < *(uint *)(local_118.Data + (longlong)(int)uVar12 * 0x30 + 0x28))
    goto LAB_146c886e4;
    uVar18 = iVar4 - 1;
  }
LAB_146c88758:
  if (-1 < (int)uVar18) {
    if ((int)uVar18 < iVar4) {
      uVar16 = ~uVar18 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar17 = uVar17 - *(int *)(local_118.Data + (longlong)(int)uVar18 * 0x30 + 0x28);
  }
LAB_146c887ba:
  GotoCheckpointIndexInternal(local_98,uVar18,local_a0,uVar17);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  DestructItems<FNullCheckpointListItem,int>
            ((FNullCheckpointListItem *)local_118.Data,(int)local_110);
  if ((FNullCheckpointListItem *)local_118.Data != (FNullCheckpointListItem *)0x0) {
    FMemory::Free(local_118.Data);
  }
  return;
}

// IsCheckpointTypeSupported @ 146c88870

bool __thiscall
FNullNetworkReplayStreamer::IsCheckpointTypeSupported
          (FNullNetworkReplayStreamer *this,EReplayCheckpointType param_1)

{
  return param_1 == Full;
}

// IsDataAvailable @ 146c88880

bool __thiscall FNullNetworkReplayStreamer::IsDataAvailable(FNullNetworkReplayStreamer *this)

{
  int iVar1;
  FArchive *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  
  if (this->StreamerState != Playback) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("StreamerState == EReplayStreamerState::Playback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\NullNetworkReplayStreaming\\Private\\NullNetworkReplayStreaming.cpp"
                       ,0x11f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar2 = (this->FileAr).Ptr;
  if (pFVar2 != (FArchive *)0x0) {
    iVar1 = (this->ReplayInfo).DemoFileLastOffset;
    lVar6 = (**(code **)(*(longlong *)pFVar2 + 0x28))();
    if (lVar6 < iVar1) {
      return true;
    }
  }
  return false;
}

// IsDataAvailableForTimeRange @ 146c888f0

bool __thiscall
FNullNetworkReplayStreamer::IsDataAvailableForTimeRange
          (FNullNetworkReplayStreamer *this,uint param_1,uint param_2)

{
  return true;
}

// IsLive @ 146c88900

bool __thiscall FNullNetworkReplayStreamer::IsLive(FNullNetworkReplayStreamer *this)

{
  bool bVar1;
  
  bVar1 = IsNamedStreamLive(this,&this->CurrentStreamName);
  return bVar1;
}

// IsLoadingCheckpoint @ 146c88910

bool __thiscall FNullNetworkReplayStreamer::IsLoadingCheckpoint(FNullNetworkReplayStreamer *this)

{
  return false;
}

// IsNamedStreamLive @ 146c88920

bool __thiscall
FNullNetworkReplayStreamer::IsNamedStreamLive(FNullNetworkReplayStreamer *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  IFileManager *pIVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  FString local_28;
  FString local_18;
  
  pIVar3 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x50);
  pFVar4 = GetStreamFullBaseFilename(&local_18,param_1);
  ::FString::ConcatFC(&local_28,pFVar4,L".final");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  cVar2 = (*pcVar1)(pIVar3,FVar5.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return cVar2 == '\0';
}

// IsTickableWhenPaused @ 146c889c0

bool __thiscall FNullNetworkReplayStreamer::IsTickableWhenPaused(FNullNetworkReplayStreamer *this)

{
  return true;
}

// KeepReplay @ 146c889d0

void __thiscall
FNullNetworkReplayStreamer::KeepReplay
          (FNullNetworkReplayStreamer *this,FString *param_1,bool param_2,
          TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  FReadAccessScope local_48;
  undefined **local_30;
  undefined4 local_28;
  FString local_20;
  undefined8 local_10;
  
  plVar4 = (longlong *)0x0;
  local_30 = &___7FKeepReplayResult__6B_;
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_10 = 0;
  pFVar3 = GetStreamDirectory((FString *)&local_48,param_1);
  bVar2 = FPaths::DirectoryExists(pFVar3);
  if ((void *)local_48.DestructionSentinel._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_48.DestructionSentinel._0_8_);
  }
  if (bVar2) {
    local_28 = 0;
    if (&local_20 != param_1) {
      iVar1 = (param_1->Data).ArrayNum;
      _Src = (param_1->Data).AllocatorInstance.Data;
      local_20.Data.ArrayNum = iVar1;
      if ((iVar1 != 0) || (local_20.Data.ArrayMax != 0)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,local_20.Data.ArrayMax,(ForAnyElementType *)&local_20,iVar1,
                   &local_20.Data.ArrayMax);
        if (iVar1 != 0) {
          memcpy(local_20.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
        }
      }
    }
  }
  else {
    local_28 = 2;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_48);
  if (*(int *)&param_3->field_0x10 != 0) {
    plVar4 = *(longlong **)&param_3->field_0x8;
  }
  (**(code **)(*plVar4 + 0x60))(plVar4,&local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

// KeepReplay @ 146c88b00

void __thiscall
FNullNetworkReplayStreamer::KeepReplay
          (FNullNetworkReplayStreamer *this,FString *param_1,bool param_2,int param_3,
          TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000146c88b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x100))();
  return;
}

// RefreshHeader @ 146c88c30

void __thiscall FNullNetworkReplayStreamer::RefreshHeader(FNullNetworkReplayStreamer *this)

{
  return;
}

// RenameReplay @ 146c88c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNullNetworkReplayStreamer::RenameReplay
          (FNullNetworkReplayStreamer *this,FString *param_1,FString *param_2,
          TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  longlong *plVar1;
  undefined **local_38;
  undefined4 local_30;
  FReadAccessScope local_28;
  
  if (4 < (byte)LogNullReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNullReplay);
  }
  local_30 = 1;
  local_38 = &___7FRenameReplayResult__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_28);
  if (*(int *)&param_3->field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&param_3->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// RenameReplay @ 146c88cc0

void __thiscall
FNullNetworkReplayStreamer::RenameReplay
          (FNullNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000146c88cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x120))();
  return;
}

// RenameReplayFriendlyName @ 146c88ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNullNetworkReplayStreamer::RenameReplayFriendlyName
          (FNullNetworkReplayStreamer *this,FString *param_1,FString *param_2,
          TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  longlong *plVar1;
  undefined **local_38;
  undefined4 local_30;
  FReadAccessScope local_28;
  
  if (4 < (byte)LogNullReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNullReplay);
  }
  local_30 = 1;
  local_38 = &___7FRenameReplayResult__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_28);
  if (*(int *)&param_3->field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&param_3->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// RenameReplayFriendlyName @ 146c88d60

void __thiscall
FNullNetworkReplayStreamer::RenameReplayFriendlyName
          (FNullNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000146c88d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x110))();
  return;
}

// ReopenStreamFileForReading @ 146c88d80

void __thiscall
FNullNetworkReplayStreamer::ReopenStreamFileForReading(FNullNetworkReplayStreamer *this)

{
  FArchive *pFVar1;
  FString *pFVar2;
  IFileManager *pIVar3;
  FArchive *pFVar4;
  long64 lVar5;
  ForAnyElementType FVar6;
  FString local_28;
  FString local_18;
  
  pFVar2 = GetStreamFullBaseFilename(&local_18,&this->CurrentStreamName);
  ::FString::ConcatFC(&local_28,pFVar2,L".demo");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pIVar3 = IFileManager::Get();
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  pFVar4 = (FArchive *)(**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,FVar6.Data,4);
  pFVar1 = (this->FileAr).Ptr;
  if ((pFVar1 != pFVar4) && ((this->FileAr).Ptr = pFVar4, pFVar1 != (FArchive *)0x0)) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar1 = (this->FileAr).Ptr;
  if (pFVar1 != (FArchive *)0x0) {
    lVar5 = (**(code **)(*(longlong *)pFVar1 + 0x30))();
    this->LastKnownFileSize = lVar5;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// RequestEventData @ 146c88e40

void __thiscall
FNullNetworkReplayStreamer::RequestEventData
          (FNullNetworkReplayStreamer *this,FString *param_1,FString *param_2,
          TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000146c88e49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xc0))(this,param_2,param_3);
  return;
}

// RequestEventData @ 146c88e60

void __thiscall
FNullNetworkReplayStreamer::RequestEventData
          (FNullNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000146c88e6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xc0))(this,param_2,param_4);
  return;
}

// RequestEventData @ 146c88e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNullNetworkReplayStreamer::RequestEventData
          (FNullNetworkReplayStreamer *this,FString *param_1,
          TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_48;
  undefined **local_30;
  undefined4 local_28;
  void *local_20;
  undefined8 local_18;
  
  if (4 < (byte)LogNullReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNullReplay);
  }
  local_28 = 1;
  plVar1 = (longlong *)0x0;
  local_30 = &___7FRequestEventDataResult__6B_;
  local_20 = (void *)0x0;
  local_18 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_48);
  if (*(int *)&param_2->field_0x10 != 0) {
    plVar1 = *(longlong **)&param_2->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,&local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// RequestEventGroupData @ 146c88f20

void __thiscall
FNullNetworkReplayStreamer::RequestEventGroupData
          (FNullNetworkReplayStreamer *this,FString *param_1,FString *param_2,
          TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000146c88f29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xd8))(this,param_2,param_3);
  return;
}

// RequestEventGroupData @ 146c88f40

void __thiscall
FNullNetworkReplayStreamer::RequestEventGroupData
          (FNullNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000146c88f4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xd8))(this,param_2,param_4);
  return;
}

// RequestEventGroupData @ 146c88f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNullNetworkReplayStreamer::RequestEventGroupData
          (FNullNetworkReplayStreamer *this,FString *param_1,
          TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_58;
  undefined **local_40;
  undefined4 local_38;
  FReplayEventListItem *local_30;
  undefined8 local_28;
  FRequestEventDataResult *local_20;
  undefined8 local_18;
  
  if (4 < (byte)LogNullReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNullReplay);
  }
  plVar1 = (longlong *)0x0;
  local_38 = 1;
  local_30 = (FReplayEventListItem *)0x0;
  local_40 = &___7FRequestEventGroupDataResult__6B_;
  local_28 = 0;
  local_20 = (FRequestEventDataResult *)0x0;
  local_18 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_58);
  if (*(int *)&param_2->field_0x10 != 0) {
    plVar1 = *(longlong **)&param_2->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  DestructItems<FRequestEventDataResult,int>(local_20,(int)local_18);
  if (local_20 != (FRequestEventDataResult *)0x0) {
    FMemory::Free(local_20);
  }
  DestructItems<FReplayEventListItem,int>(local_30,(int)local_28);
  if (local_30 != (FReplayEventListItem *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// SearchEvents @ 146c89030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNullNetworkReplayStreamer::SearchEvents
          (FNullNetworkReplayStreamer *this,FString *param_1,
          TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy> *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_58;
  undefined **local_40;
  undefined4 local_38;
  FNetworkReplayStreamInfo *local_30;
  undefined8 local_28;
  FString *local_20;
  undefined8 local_18;
  
  if (4 < (byte)LogNullReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNullReplay);
  }
  plVar1 = (longlong *)0x0;
  local_38 = 1;
  local_30 = (FNetworkReplayStreamInfo *)0x0;
  local_40 = &___7FSearchEventsResult__6B_;
  local_28 = 0;
  local_20 = (FString *)0x0;
  local_18 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_58);
  if (*(int *)&param_2->field_0x10 != 0) {
    plVar1 = *(longlong **)&param_2->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  DestructItems<FString,int>(local_20,(int)local_18);
  if (local_20 != (FString *)0x0) {
    FMemory::Free(local_20);
  }
  DestructItems<FNetworkReplayStreamInfo,int>(local_30,(int)local_28);
  if (local_30 != (FNetworkReplayStreamInfo *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// SetDemoPath @ 146c89930

EStreamingOperationResult __thiscall
FNullNetworkReplayStreamer::SetDemoPath(FNullNetworkReplayStreamer *this,FString *param_1)

{
  return Unsupported;
}

// SetHighPriorityTimeRange @ 146c89940

void __thiscall
FNullNetworkReplayStreamer::SetHighPriorityTimeRange
          (FNullNetworkReplayStreamer *this,uint param_1,uint param_2)

{
  return;
}

// SetTimeBufferHintSeconds @ 146c89950

void __thiscall
FNullNetworkReplayStreamer::SetTimeBufferHintSeconds(FNullNetworkReplayStreamer *this,float param_1)

{
  return;
}

// StartStreaming @ 146c89960

void __thiscall
FNullNetworkReplayStreamer::StartStreaming
          (FNullNetworkReplayStreamer *this,FStartStreamingParameters *param_1,
          TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy> *param_2
          )

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FArchive *pFVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  FJsonSerializable *pFVar8;
  size_t sVar9;
  FNullReplayInfo *pFVar10;
  IFileManager *pIVar11;
  FArchive *pFVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  int iVar15;
  wchar_t *pwVar16;
  FString local_108;
  undefined1 local_f8 [24];
  int local_e0;
  undefined4 uStack_dc;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  undefined **local_68;
  undefined4 local_60;
  char local_58;
  FReadAccessScope local_50;
  FString local_38;
  
  local_108.Data.ArrayNum = (param_1->CustomName).Data.ArrayNum;
  lVar14 = (longlong)local_108.Data.ArrayNum;
  pFVar2 = (param_1->CustomName).Data.AllocatorInstance.Data;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar15 = 0;
  if (local_108.Data.ArrayNum == 0) {
    local_108.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_108.Data.ArrayNum,0,(ForAnyElementType *)&local_108,local_108.Data.ArrayNum
               ,&local_108.Data.ArrayMax);
    memcpy(local_108.Data.AllocatorInstance.Data,pFVar2,lVar14 * 2);
  }
  local_68 = &___7FStartStreamingResult__6B_;
  local_58 = param_1->bRecord;
  local_60 = 6;
  if ((param_1->CustomName).Data.ArrayNum < 2) {
    if ((bool)local_58 == false) {
      local_60 = 2;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_50);
      if ((*(int *)&param_2->field_0x10 != 0) &&
         (plVar4 = *(longlong **)&param_2->field_0x8, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x68))(plVar4,&local_68);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_50);
      goto LAB_146c8a015;
    }
    pFVar7 = GetAutomaticDemoName(&local_98);
    if (&local_108 != pFVar7) {
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      local_108.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = (pFVar7->Data).ArrayNum;
      local_108.Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  GetStreamDirectory(&local_78,&local_108);
  pFVar7 = GetStreamBaseFilename((FString *)&local_50,&local_108);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  GetStreamBaseFilename(&local_b8,&local_108);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar13.Data = local_b8.Data.AllocatorInstance.Data;
  }
  pFVar8 = (FJsonSerializable *)FPaths::ProjectSavedDir();
  if (*(int *)(pFVar8 + 1) == 0) {
    local_f8._0_8_ = L"";
  }
  else {
    local_f8._0_8_ = *pFVar8;
  }
  local_f8._8_4_ = iVar15;
  if ((FJsonSerializable)local_f8._0_8_ != (FJsonSerializable)0x0) {
    sVar9 = wcslen((wchar_t *)local_f8._0_8_);
    local_f8._8_4_ = (undefined4)sVar9;
  }
  local_e0 = 6;
  local_f8._16_8_ = L"Demos/";
  FPaths::CombineInternal(&local_c8,(TStringView<wchar_t> *)local_f8,2);
  local_f8._0_8_ = L"";
  if (local_c8.Data.ArrayNum != 0) {
    local_f8._0_8_ = local_c8.Data.AllocatorInstance.Data;
  }
  iVar5 = iVar15;
  if ((FJsonSerializable)local_f8._0_8_ != (FJsonSerializable)0x0) {
    sVar9 = wcslen((wchar_t *)local_f8._0_8_);
    iVar5 = (int)sVar9;
  }
  local_f8._8_4_ = iVar5;
  local_f8._16_8_ = FVar13.Data;
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    sVar9 = wcslen((wchar_t *)FVar13.Data);
    iVar15 = (int)sVar9;
  }
  local_e0 = iVar15;
  FPaths::CombineInternal(&local_a8,(TStringView<wchar_t> *)local_f8,2);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  iVar15 = 0;
  local_f8._0_8_ = L"";
  if (local_a8.Data.ArrayNum != 0) {
    local_f8._0_8_ = local_a8.Data.AllocatorInstance.Data;
  }
  iVar5 = iVar15;
  if ((FJsonSerializable)local_f8._0_8_ != (FJsonSerializable)0x0) {
    sVar9 = wcslen((wchar_t *)local_f8._0_8_);
    iVar5 = (int)sVar9;
  }
  iVar6 = iVar15;
  local_f8._8_4_ = iVar5;
  local_f8._16_8_ = pwVar16;
  if ((FScriptContainerElement *)pwVar16 != (FScriptContainerElement *)0x0) {
    sVar9 = wcslen(pwVar16);
    iVar6 = (int)sVar9;
  }
  local_e0 = iVar6;
  FPaths::CombineInternal(&local_98,(TStringView<wchar_t> *)local_f8,2);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((void *)local_50.DestructionSentinel._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_50.DestructionSentinel._0_8_);
  }
  ::FString::ConcatFC(&local_88,&local_98,L".header");
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar7 = GetStreamBaseFilename((FString *)&local_50,&local_108);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  GetStreamBaseFilename(&local_b8,&local_108);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar13.Data = local_b8.Data.AllocatorInstance.Data;
  }
  pFVar8 = (FJsonSerializable *)FPaths::ProjectSavedDir();
  if (*(int *)(pFVar8 + 1) == 0) {
    local_f8._0_8_ = L"";
  }
  else {
    local_f8._0_8_ = *pFVar8;
  }
  iVar5 = iVar15;
  if ((FJsonSerializable)local_f8._0_8_ != (FJsonSerializable)0x0) {
    sVar9 = wcslen((wchar_t *)local_f8._0_8_);
    iVar5 = (int)sVar9;
  }
  local_e0 = 6;
  local_f8._16_8_ = L"Demos/";
  local_f8._8_4_ = iVar5;
  FPaths::CombineInternal(&local_a8,(TStringView<wchar_t> *)local_f8,2);
  local_f8._0_8_ = L"";
  if (local_a8.Data.ArrayNum != 0) {
    local_f8._0_8_ = local_a8.Data.AllocatorInstance.Data;
  }
  iVar5 = iVar15;
  if ((FJsonSerializable)local_f8._0_8_ != (FJsonSerializable)0x0) {
    sVar9 = wcslen((wchar_t *)local_f8._0_8_);
    iVar5 = (int)sVar9;
  }
  iVar6 = iVar15;
  local_f8._8_4_ = iVar5;
  local_f8._16_8_ = FVar13.Data;
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    sVar9 = wcslen((wchar_t *)FVar13.Data);
    iVar6 = (int)sVar9;
  }
  local_e0 = iVar6;
  FPaths::CombineInternal(&local_c8,(TStringView<wchar_t> *)local_f8,2);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  local_f8._0_8_ = L"";
  if (local_c8.Data.ArrayNum != 0) {
    local_f8._0_8_ = local_c8.Data.AllocatorInstance.Data;
  }
  iVar5 = iVar15;
  if ((FJsonSerializable)local_f8._0_8_ != (FJsonSerializable)0x0) {
    sVar9 = wcslen((wchar_t *)local_f8._0_8_);
    iVar5 = (int)sVar9;
  }
  local_f8._8_4_ = iVar5;
  local_f8._16_8_ = pwVar16;
  if ((FScriptContainerElement *)pwVar16 != (FScriptContainerElement *)0x0) {
    sVar9 = wcslen(pwVar16);
    iVar15 = (int)sVar9;
  }
  local_e0 = iVar15;
  FPaths::CombineInternal(&local_98,(TStringView<wchar_t> *)local_f8,2);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((void *)local_50.DestructionSentinel._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_50.DestructionSentinel._0_8_);
  }
  ::FString::ConcatFC(&local_38,&local_98,L".demo");
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  iVar15 = local_108.Data.ArrayNum + -1;
  if (local_108.Data.ArrayNum == 0) {
    iVar15 = 0;
  }
  ::FString::AssignRange
            (&this->CurrentStreamName,(wchar_t *)local_108.Data.AllocatorInstance.Data,iVar15);
  if (param_1->bRecord == false) {
    pFVar10 = ReadReplayInfo((FNullReplayInfo *)local_f8,&this->CurrentStreamName);
    pFVar7 = &(this->ReplayInfo).FriendlyName;
    pFVar1 = &pFVar10->FriendlyName;
    (this->ReplayInfo).LengthInMS = pFVar10->LengthInMS;
    (this->ReplayInfo).NetworkVersion = pFVar10->NetworkVersion;
    (this->ReplayInfo).Changelist = pFVar10->Changelist;
    if (pFVar7 != pFVar1) {
      pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar7->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->ReplayInfo).FriendlyName.Data.ArrayNum = (pFVar10->FriendlyName).Data.ArrayNum;
      (this->ReplayInfo).FriendlyName.Data.ArrayMax = (pFVar10->FriendlyName).Data.ArrayMax;
      (pFVar10->FriendlyName).Data.ArrayNum = 0;
      (pFVar10->FriendlyName).Data.ArrayMax = 0;
    }
    (this->ReplayInfo).DemoFileLastOffset = pFVar10->DemoFileLastOffset;
    (this->ReplayInfo).bIsValid = pFVar10->bIsValid;
    if ((void *)CONCAT44(uStack_dc,local_e0) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(uStack_dc,local_e0));
    }
    FJsonSerializable::~FJsonSerializable((FJsonSerializable *)local_f8);
    ReopenStreamFileForReading(this);
    pIVar11 = IFileManager::Get();
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar13.Data = local_88.Data.AllocatorInstance.Data;
    }
    pFVar12 = (FArchive *)(**(code **)((longlong)*pIVar11 + 0x18))(pIVar11,FVar13.Data,4);
    pFVar3 = (this->HeaderAr).Ptr;
    if ((pFVar3 != pFVar12) && ((this->HeaderAr).Ptr = pFVar12, pFVar3 != (FArchive *)0x0)) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
    this->StreamerState = Playback;
  }
  else {
    pIVar11 = IFileManager::Get();
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar13.Data = local_78.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar11 + 0x68))(pIVar11,FVar13.Data,0,1);
    pIVar11 = IFileManager::Get();
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar13.Data = local_78.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar11 + 0x60))(pIVar11,FVar13.Data,1);
    pIVar11 = IFileManager::Get();
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar13.Data = local_38.Data.AllocatorInstance.Data;
    }
    pFVar12 = (FArchive *)(**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,FVar13.Data,0x10);
    pFVar3 = (this->FileAr).Ptr;
    if ((pFVar3 != pFVar12) && ((this->FileAr).Ptr = pFVar12, pFVar3 != (FArchive *)0x0)) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
    pIVar11 = IFileManager::Get();
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar13.Data = local_88.Data.AllocatorInstance.Data;
    }
    pFVar12 = (FArchive *)(**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,FVar13.Data,0x10);
    pFVar3 = (this->HeaderAr).Ptr;
    if ((pFVar3 != pFVar12) && ((this->HeaderAr).Ptr = pFVar12, pFVar3 != (FArchive *)0x0)) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
    this->StreamerState = Recording;
    this->CurrentCheckpointIndex = 0;
    (this->ReplayInfo).NetworkVersion = (param_1->ReplayVersion).NetworkVersion;
    (this->ReplayInfo).Changelist = (param_1->ReplayVersion).Changelist;
    ::FString::operator=(&(this->ReplayInfo).FriendlyName,&param_1->FriendlyName);
    WriteReplayInfo(&this->CurrentStreamName,&this->ReplayInfo);
  }
  if (((this->FileAr).Ptr != (FArchive *)0x0) && ((this->HeaderAr).Ptr != (FArchive *)0x0)) {
    local_60 = 0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_50);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar4 = *(longlong **)&param_2->field_0x8, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,&local_68);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
LAB_146c8a015:
  local_68 = &___7FStreamingResultBase__6B_;
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  return;
}

// StopStreaming @ 146c8a070

void __thiscall FNullNetworkReplayStreamer::StopStreaming(FNullNetworkReplayStreamer *this)

{
  code *pcVar1;
  FArchive *pFVar2;
  IFileManager *pIVar3;
  FString *pFVar4;
  undefined8 *puVar5;
  ForAnyElementType FVar6;
  FString local_28;
  FString local_18;
  
  if (this->StreamerState == Recording) {
    WriteReplayInfo(&this->CurrentStreamName,&this->ReplayInfo);
  }
  pIVar3 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x20);
  pFVar4 = GetStreamFullBaseFilename(&local_18,&this->CurrentStreamName);
  ::FString::ConcatFC(&local_28,pFVar4,L".final");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  puVar5 = (undefined8 *)(*pcVar1)(pIVar3,FVar6.Data,0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar2 = (this->HeaderAr).Ptr;
  if (pFVar2 != (FArchive *)0x0) {
    (this->HeaderAr).Ptr = (FArchive *)0x0;
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  pFVar2 = (this->FileAr).Ptr;
  if (pFVar2 != (FArchive *)0x0) {
    (this->FileAr).Ptr = (FArchive *)0x0;
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  ::FString::Empty(&this->CurrentStreamName);
  this->StreamerState = Idle;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  return;
}

// Tick @ 146c8a170

void __thiscall FNullNetworkReplayStreamer::Tick(FNullNetworkReplayStreamer *this,float param_1)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  FNullReplayInfo local_38;
  
  cVar1 = *(char *)&(this->FileAr).Ptr;
  if (cVar1 == '\x02') {
    ReadReplayInfo(&local_38,(FString *)&this->CheckpointAr);
    if (local_38.bIsValid != false) {
      this->CurrentCheckpointIndex = local_38.LengthInMS;
      *(uint *)&this->field_0x4c = local_38.NetworkVersion;
      *(uint *)&(this->ReplayInfo)._padding_ = local_38.Changelist;
      ::FString::operator=((FString *)&(this->ReplayInfo).LengthInMS,&local_38.FriendlyName);
      *(int *)&(this->ReplayInfo).FriendlyName.Data.AllocatorInstance.Data =
           local_38.DemoFileLastOffset;
      *(bool *)((longlong)&(this->ReplayInfo).FriendlyName.Data.AllocatorInstance.Data + 4) =
           local_38.bIsValid;
    }
    if (local_38.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.FriendlyName.Data.AllocatorInstance.Data);
    }
    FJsonSerializable::~FJsonSerializable((FJsonSerializable *)&local_38);
    lVar6._0_4_ = (this->ReplayInfo).FriendlyName.Data.ArrayNum;
    lVar6._4_4_ = (this->ReplayInfo).FriendlyName.Data.ArrayMax;
    if (lVar6 < *(int *)&(this->ReplayInfo).FriendlyName.Data.AllocatorInstance.Data) {
      uVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
      ReopenStreamFileForReading
                ((FNullNetworkReplayStreamer *)&this[-1].ReplayInfo.DemoFileLastOffset);
      plVar2 = (longlong *)this->_padding_;
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c8a23b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x1b8))(plVar2,uVar5,*(code **)(*plVar2 + 0x1b8));
        return;
      }
    }
  }
  else if ((cVar1 == '\x01') && ((longlong *)this->_padding_ != (longlong *)0x0)) {
    lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
    if (*(int *)&(this->ReplayInfo).FriendlyName.Data.AllocatorInstance.Data < lVar6) {
      lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
      if (lVar6 != (int)lVar6) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar2 = (longlong *)this->_padding_;
      *(int *)&(this->ReplayInfo).FriendlyName.Data.AllocatorInstance.Data = (int)lVar6;
      (**(code **)(*plVar2 + 0x208))();
      WriteReplayInfo((FString *)&this->CheckpointAr,
                      (FNullReplayInfo *)&(this->CurrentStreamName).Data.ArrayNum);
    }
  }
  return;
}

// UpdatePlaybackTime @ 146c8a2d0

void __thiscall
FNullNetworkReplayStreamer::UpdatePlaybackTime(FNullNetworkReplayStreamer *this,uint param_1)

{
  return;
}

// UpdateReplayInfoIfValid @ 146c8a2e0

void __thiscall
FNullNetworkReplayStreamer::UpdateReplayInfoIfValid(FNullNetworkReplayStreamer *this)

{
  FNullReplayInfo local_38;
  
  ReadReplayInfo(&local_38,&this->CurrentStreamName);
  if (local_38.bIsValid != false) {
    (this->ReplayInfo).LengthInMS = local_38.LengthInMS;
    (this->ReplayInfo).NetworkVersion = local_38.NetworkVersion;
    (this->ReplayInfo).Changelist = local_38.Changelist;
    ::FString::operator=(&(this->ReplayInfo).FriendlyName,&local_38.FriendlyName);
    (this->ReplayInfo).DemoFileLastOffset = local_38.DemoFileLastOffset;
    (this->ReplayInfo).bIsValid = local_38.bIsValid;
  }
  if (local_38.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.FriendlyName.Data.AllocatorInstance.Data);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)&local_38);
  return;
}

// UpdateTotalDemoTime @ 146c8a360

void __thiscall
FNullNetworkReplayStreamer::UpdateTotalDemoTime(FNullNetworkReplayStreamer *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->StreamerState == Recording) {
    (this->ReplayInfo).LengthInMS = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("StreamerState == EReplayStreamerState::Recording",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\NullNetworkReplayStreaming\\Private\\NullNetworkReplayStreaming.cpp"
                     ,0x118,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->ReplayInfo).LengthInMS = param_1;
  return;
}

