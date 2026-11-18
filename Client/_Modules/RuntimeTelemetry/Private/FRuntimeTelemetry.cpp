// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RuntimeTelemetry
// Functions: 7

// operator() @ 14ea1f0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FRuntimeTelemetry::StartSession'::__l2::<lambda_1>::operator()(void *this)

{
  FRuntimeTelemetry *pFVar1;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  if (4 < (byte)LogRuntimeTelemetry._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRuntimeTelemetry);
  }
  pFVar1 = *(FRuntimeTelemetry **)this;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  ::FString::FString(&local_18,L"EnginePreExit");
  FRuntimeTelemetry::RecordEvent_IoStoreOnDemand(pFVar1,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FRuntimeTelemetry **)this;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  ::FString::FString(&local_18,L"EnginePreExit");
  FRuntimeTelemetry::RecordEvent_MemoryLLM(pFVar1,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ea1f1c0

void __thiscall
`FRuntimeTelemetry::RecordEvent_MemoryLLM'::__l5::<lambda_1>::operator()
          (void *this,FString *param_1,FString *param_2,
          TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
          *param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *pTVar5;
  int iVar6;
  FString *pFVar7;
  FString *pFVar8;
  FStudioTelemetry *this_00;
  longlong lVar9;
  FAnalyticsEventAttribute *pFVar10;
  uint *puVar11;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_e8;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  FString local_b0;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  iVar2 = *(int *)&param_3->field_0x28;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_3->field_0x10;
  local_b0.Data.ArrayNum = 0;
  local_90 = 0;
  local_b0.Data.ArrayMax = 1;
  iStack_94 = 0;
  if (iVar2 != 0) {
    puVar11 = *(uint **)&param_3->field_0x20;
    if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
      puVar11 = (uint *)TStack_d0.Array;
    }
    uVar3 = *puVar11;
    while (uVar3 == 0) {
      lVar9 = (longlong)local_b0.Data.ArrayNum;
      local_90 = local_90 + 0x20;
      local_b0.Data.ArrayNum = local_b0.Data.ArrayNum + 1;
      iStack_94 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_b0.Data.ArrayNum)
      goto LAB_14ea1f268;
      uVar3 = puVar11[lVar9 + 1];
    }
    local_b0.Data.ArrayMax = -uVar3 & uVar3;
    uVar1 = (ulonglong)(uint)local_b0.Data.ArrayMax * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_94 = (int)lVar9 + -1 + local_90;
    if (iVar2 < iStack_94) {
      iStack_94 = iVar2;
    }
  }
LAB_14ea1f268:
  uStack_98 = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(local_b0.Data.ArrayMax,local_b0.Data.ArrayNum);
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  TStack_d0._28_4_ = iStack_94;
  TStack_d0.BaseBitIndex = local_90;
  local_d8 = param_3;
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_3;
  local_a0 = (undefined1 *)TStack_d0.Array;
  iStack_8c = iStack_94;
  TStack_d0.CurrentBitIndex = iStack_94;
  if (iStack_94 < iVar2) {
    do {
      iVar6 = TStack_d0.CurrentBitIndex;
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar2 = *(int *)(*(undefined8 **)this + 1);
      pFVar10 = (FAnalyticsEventAttribute *)**(undefined8 **)this;
      local_e8.ArrayNum = iVar2;
      if (iVar2 == 0) {
        local_e8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar2,0,&local_e8.AllocatorInstance,iVar2,&local_e8.ArrayMax);
        ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
                  (local_e8.AllocatorInstance.Data,pFVar10,iVar2);
      }
      if (local_e8.ArrayNum == local_e8.ArrayMax) {
        local_e8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
      }
      lVar9 = (longlong)local_e8.ArrayNum;
      local_e8.ArrayNum = local_e8.ArrayNum + 1;
      pFVar10 = (FAnalyticsEventAttribute *)(local_e8.AllocatorInstance.Data + lVar9 * 0x30);
      pFVar7 = ::FString::FString(&local_70,L"SchemaVersion");
      pFVar8 = FAnalyticsEventAttribute::CheckName(pFVar10,pFVar7);
      (pFVar10->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->AttrName).Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->AttrName).Data.ArrayNum = (pFVar8->Data).ArrayNum;
      (pFVar10->AttrName).Data.ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
      ::FString::PrintfImpl(&pFVar10->AttrValueString,L"%d");
      pFVar10->AttrValueNumber = 0.0;
      pFVar10->AttrValueBool = false;
      pFVar10->AttrType = JsonFragment;
      pFVar4 = (pFVar7->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      if (local_e8.ArrayNum == local_e8.ArrayMax) {
        local_e8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
      }
      pFVar10 = (FAnalyticsEventAttribute *)
                (local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 0x30);
      local_e8.ArrayNum = local_e8.ArrayNum + 1;
      pFVar7 = ::FString::FString(&local_60,L"Context");
      FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>(pFVar10,pFVar7,param_1);
      if (local_e8.ArrayNum == local_e8.ArrayMax) {
        local_e8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
      }
      pFVar10 = (FAnalyticsEventAttribute *)
                (local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 0x30);
      local_e8.ArrayNum = local_e8.ArrayNum + 1;
      pFVar7 = ::FString::FString(&local_50,L"TagSet");
      FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>(pFVar10,pFVar7,param_2);
      pTVar5 = local_d8;
      lVar9 = *(longlong *)local_d8;
      if (local_e8.ArrayNum == local_e8.ArrayMax) {
        local_e8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
      }
      pFVar10 = (FAnalyticsEventAttribute *)
                (local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 0x30);
      local_e8.ArrayNum = local_e8.ArrayNum + 1;
      pFVar7 = ::FString::FString(&local_40,L"Name");
      FAnalyticsEventAttribute::FAnalyticsEventAttribute<FName_const_&>
                (pFVar10,pFVar7,(FName *)(lVar9 + (longlong)iVar6 * 0x18));
      lVar9 = *(longlong *)pTVar5;
      if (local_e8.ArrayNum == local_e8.ArrayMax) {
        local_e8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
      }
      pFVar10 = (FAnalyticsEventAttribute *)
                (local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 0x30);
      local_e8.ArrayNum = local_e8.ArrayNum + 1;
      pFVar7 = ::FString::FString(&local_b0,L"Size");
      FAnalyticsEventAttribute::FAnalyticsEventAttribute<unsigned___int64_const_&>
                (pFVar10,pFVar7,(ulong64 *)(lVar9 + 8 + (longlong)iVar6 * 0x18));
      this_00 = FStudioTelemetry::Get();
      ::FString::FString(&local_80,"Core.Memory.LLM");
      FStudioTelemetry::RecordEvent(this_00,&local_80,&local_e8);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      DestructItems<FAnalyticsEventAttribute,int>
                ((FAnalyticsEventAttribute *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
      if ((FAnalyticsEventAttribute *)local_e8.AllocatorInstance.Data !=
          (FAnalyticsEventAttribute *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
    } while (TStack_d0.CurrentBitIndex < (TStack_d0.Array)->NumBits);
  }
  return;
}

// EndSession @ 14ea1f750

void __thiscall FRuntimeTelemetry::EndSession(FRuntimeTelemetry *this)

{
  return;
}

// Get @ 14ea1f790

FRuntimeTelemetry * __cdecl FRuntimeTelemetry::Get(void)

{
  return &RuntimeTelemetryInstance;
}

// RecordEvent_IoStoreOnDemand @ 14ea1f820

void __thiscall
FRuntimeTelemetry::RecordEvent_IoStoreOnDemand
          (FRuntimeTelemetry *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  char cVar4;
  FStudioTelemetry *pFVar5;
  IOnDemandIoStore *pIVar6;
  FString *pFVar7;
  FString *pFVar8;
  FAnalyticsEventAttribute *pFVar9;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  pFVar5 = FStudioTelemetry::Get();
  bVar3 = FStudioTelemetry::IsSessionRunning(pFVar5);
  if (((bVar3) && (pIVar6 = UE::IoStore::TryGetOnDemandIoStore(), pIVar6 != (IOnDemandIoStore *)0x0)
      ) && (cVar4 = (**(code **)((longlong)*pIVar6 + 0x68))(pIVar6), cVar4 != '\0')) {
    iVar1 = param_2->ArrayNum;
    pFVar9 = (FAnalyticsEventAttribute *)(param_2->AllocatorInstance).Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_38.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar1,0,&local_38.AllocatorInstance,iVar1,&local_38.ArrayMax);
      ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
                (local_38.AllocatorInstance.Data,pFVar9,iVar1);
    }
    (**(code **)((longlong)*pIVar6 + 0x78))(pIVar6,&local_38);
    if (local_38.ArrayNum == local_38.ArrayMax) {
      local_38.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_38.AllocatorInstance,&local_38.ArrayMax);
    }
    pFVar9 = (FAnalyticsEventAttribute *)
             (local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x30);
    local_38.ArrayNum = local_38.ArrayNum + 1;
    pFVar7 = ::FString::FString(&local_28,L"SchemaVersion");
    pFVar8 = FAnalyticsEventAttribute::CheckName(pFVar9,pFVar7);
    (pFVar9->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->AttrName).Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->AttrName).Data.ArrayNum = (pFVar8->Data).ArrayNum;
    (pFVar9->AttrName).Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    ::FString::PrintfImpl(&pFVar9->AttrValueString,L"%d");
    pFVar9->AttrValueNumber = 0.0;
    pFVar9->AttrValueBool = false;
    pFVar9->AttrType = JsonFragment;
    pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (local_38.ArrayNum == local_38.ArrayMax) {
      local_38.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_38.AllocatorInstance,&local_38.ArrayMax);
    }
    pFVar9 = (FAnalyticsEventAttribute *)
             (local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x30);
    local_38.ArrayNum = local_38.ArrayNum + 1;
    pFVar7 = ::FString::FString(&local_28,L"Context");
    FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>(pFVar9,pFVar7,param_1);
    pFVar5 = FStudioTelemetry::Get();
    ::FString::FString(&local_28,"Core.IoStoreOnDemand");
    FStudioTelemetry::RecordEvent(pFVar5,&local_28,&local_38);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar5 = FStudioTelemetry::Get();
    FStudioTelemetry::FlushEvents(pFVar5);
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    if ((FAnalyticsEventAttribute *)local_38.AllocatorInstance.Data !=
        (FAnalyticsEventAttribute *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  pFVar2 = (param_2->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// RecordEvent_MemoryLLM @ 14ea1fa90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRuntimeTelemetry::RecordEvent_MemoryLLM
          (FRuntimeTelemetry *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FStudioTelemetry *this_00;
  FLowLevelMemTracker *pFVar4;
  undefined1 auStackY_168 [32];
  FString local_138;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *local_128 [2];
  undefined1 local_118 [32];
  void *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  void *local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  void *local_88;
  undefined4 local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = FStudioTelemetry::Get();
  bVar3 = FStudioTelemetry::IsSessionRunning(this_00);
  if (bVar3) {
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_4c = 0x80;
    local_48 = 0xffffffff;
    local_44 = 0;
    local_38 = (void *)0x0;
    local_30 = 0;
    pFVar4 = FLowLevelMemTracker::TrackerInstance;
    local_128[0] = param_2;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar4 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::GetTrackedTagsNamesWithAmount
              (pFVar4,(TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
                       *)local_78,Default,None);
    ::FString::FString(&local_138,L"None");
    `FRuntimeTelemetry::RecordEvent_MemoryLLM'::__l5::<lambda_1>::operator()
              (local_128,param_1,&local_138,
               (TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
                *)local_78);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    local_c8._0_8_ = (FScriptContainerElement *)0x0;
    local_c8._8_8_ = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_9c = 0x80;
    local_98 = 0xffffffff;
    local_94 = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    pFVar4 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar4 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::GetTrackedTagsNamesWithAmount
              (pFVar4,(TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
                       *)local_c8,Default,AssetClasses);
    ::FString::FString(&local_138,L"AssetClasses");
    `FRuntimeTelemetry::RecordEvent_MemoryLLM'::__l5::<lambda_1>::operator()
              (local_128,param_1,&local_138,
               (TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
                *)local_c8);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    local_118._0_8_ = (FScriptContainerElement *)0x0;
    local_118._8_8_ = 0;
    local_f8 = (void *)0x0;
    local_f0 = 0;
    local_ec = 0x80;
    local_e8 = 0xffffffff;
    local_e4 = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    pFVar4 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar4 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::GetTrackedTagsNamesWithAmount
              (pFVar4,(TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
                       *)local_118,Default,Assets);
    ::FString::FString(&local_138,L"Assets");
    `FRuntimeTelemetry::RecordEvent_MemoryLLM'::__l5::<lambda_1>::operator()
              (local_128,param_1,&local_138,
               (TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
                *)local_118);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    local_d0 = 0;
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    iVar2 = SUB84(local_118._8_8_,4);
    local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_118,0,(int *)(local_118 + 0xc));
    }
    local_e8 = 0xffffffff;
    local_e4 = 0;
    local_f0 = 0;
    if (0x80 < local_ec) {
      local_ec = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10),0);
    }
    if (local_f8 != (void *)0x0) {
      FMemory::Free(local_f8);
    }
    if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_118._0_8_);
    }
    local_80 = 0;
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    iVar2 = SUB84(local_c8._8_8_,4);
    local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
    }
    local_98 = 0xffffffff;
    local_94 = 0;
    local_a0 = 0;
    if (0x80 < local_9c) {
      local_9c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    local_30 = 0;
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    iVar2 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
    local_44 = 0;
    local_50 = 0;
    local_48 = 0xffffffff;
    if (0x80 < local_4c) {
      local_4c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// StartSession @ 14ea1fe40

void __thiscall FRuntimeTelemetry::StartSession(FRuntimeTelemetry *this)

{
  <lambda_1> local_res10 [3];
  
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FRuntimeTelemetry::StartSession_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEnginePreExit,local_res10);
  return;
}

