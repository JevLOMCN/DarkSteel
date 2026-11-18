// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ExecuteInternal @ 149c11ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGMergeAttributesElement::ExecuteInternal(FPCGMergeAttributesElement *this,FPCGContext *param_1)

{
  int *piVar1;
  FName *pFVar2;
  int iVar3;
  UPCGNode *this_00;
  UPCGMetadata *this_01;
  UPCGMetadata *pUVar4;
  code *pcVar5;
  FPCGDataCollection *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  UClass *pUVar12;
  UPCGSettings *pUVar13;
  TObjectPtr<UPCGSettings>_u_0 this_02;
  FPCGTaggedData *pFVar14;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar15;
  UObject *pUVar16;
  UPCGParamData *pUVar17;
  ForElementType<__int64> FVar18;
  FText *this_03;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  FObjectPtr_u_0 *pFVar22;
  longlong lVar23;
  FPCGContext *pFVar24;
  bool bVar25;
  undefined1 auStackY_11b8 [32];
  <lambda_1> local_1168;
  undefined1 local_1167;
  undefined1 local_1166 [6];
  FPCGContext *local_1160;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1158;
  uint local_1148;
  FPCGTaggedData *local_1140;
  FObjectPtr_u_0 *local_1138;
  uint local_1130;
  TObjectPtr<UPCGSettings>_u_0 local_1128;
  FObjectPtr_u_0 local_1120;
  UPCGParamData *local_1118;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1110;
  FPCGMetadataInitializeParams local_1100;
  TObjectPtr<UObject> local_10d8;
  FName local_10d0;
  FPCGDataCollection *local_10c8;
  UPCGParamData *local_10c0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_10b8;
  TArrayView<__int64,int> local_10a8;
  TArrayView<__int64_const_,int> local_1098;
  FString local_1088;
  FString local_1078;
  FText local_1068;
  ForElementType<__int64> local_1058;
  int local_850;
  int local_84c;
  ForElementType<__int64> local_848;
  int local_40 [2];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x149c11b04;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_11b8;
  this_02.DebugPtr = (UPCGSettings *)0x0;
  local_1148 = 0;
  bVar25 = -1 < CpuChannel->Enabled;
  local_1160 = param_1;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId65,"FPCGMergeAttributesElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMergeAttributes.cpp"
               ,0x41);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId65);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMergeAttributes.cpp"
                         ,0x42,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_10c8 = &param_1->OutputData;
  local_1140 = (FPCGTaggedData *)0x0;
  local_1118 = (UPCGParamData *)0x0;
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar12 = UPCGMergeAttributesSettings::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar12);
    if (bVar7) {
      this_02.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    goto LAB_149c11c97;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar13 = UPCGNode::GetSettings(this_00), pUVar13 == (UPCGSettings *)0x0)) {
    pFVar14 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMergeAttributesSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_1168);
    if (pFVar14 != (FPCGTaggedData *)0x0) {
      local_1128.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar14->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSettingsWithDynamicInputs *)local_1128.DebugPtr ==
            (UPCGSettingsWithDynamicInputs *)0x0) goto LAB_149c11c94;
        UE::GC::MarkAsReachable((UObject *)local_1128.DebugPtr);
      }
      if ((UPCGSettingsWithDynamicInputs *)local_1128.DebugPtr !=
          (UPCGSettingsWithDynamicInputs *)0x0) {
        pUVar12 = UPCGMergeAttributesSettings::StaticClass();
        bVar7 = FObjectPtr::IsA(&local_1128.ObjectPtr,pUVar12);
        this_02 = local_1128;
        if (bVar7) goto LAB_149c11c97;
      }
    }
  }
  else {
    pUVar13 = UPCGNode::GetSettings(this_00);
    this_02.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar13);
    if ((UPCGSettingsWithDynamicInputs *)this_02.DebugPtr != (UPCGSettingsWithDynamicInputs *)0x0) {
      pUVar12 = UPCGMergeAttributesSettings::StaticClass();
      iVar10 = (int)pUVar12->_padding_;
      if ((iVar10 <= *(int *)((this_02.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((this_02.DebugPtr)->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
          &pUVar12->_padding_)) goto LAB_149c11c97;
    }
  }
LAB_149c11c94:
  this_02.DebugPtr = (UPCGSettings *)0x0;
LAB_149c11c97:
  if (((UPCGSettingsWithDynamicInputs *)this_02.DebugPtr == (UPCGSettingsWithDynamicInputs *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMergeAttributes.cpp"
                         ,0x4a,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_1158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1158.ArrayNum = 0;
  local_1158.ArrayMax = 0;
  UPCGSettingsWithDynamicInputs::GetNodeDefinedPinLabels
            ((UPCGSettingsWithDynamicInputs *)this_02.DebugPtr,&local_1110);
  iVar10 = local_1110.ArrayNum;
  uVar19 = (ulonglong)local_1110.ArrayNum;
  pFVar2 = (FName *)(local_1110.AllocatorInstance.Data + uVar19 * 8);
  FVar20.Data = local_1110.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar19 != iVar10) {
      local_1167 = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_1167);
    }
    if ((FName *)FVar20.Data == pFVar2) break;
    local_10d0 = *(FName *)FVar20.Data;
    pTVar15 = FPCGDataCollection::GetInputsByPin(&param_1->InputData,&local_10b8,&local_10d0);
    if ((&local_1158 == pTVar15) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    iVar3 = pTVar15->ArrayNum;
    if (iVar3 != 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x78,8,iVar3,&local_1158.AllocatorInstance,&local_1158.ArrayNum,
                         &local_1158.ArrayMax);
      memmove(local_1158.AllocatorInstance.Data + (longlong)iVar9 * 0x78,
              (pTVar15->AllocatorInstance).Data,(longlong)iVar3 * 0x78);
      pTVar15->ArrayNum = 0;
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_10b8.AllocatorInstance.Data,local_10b8.ArrayNum);
    if ((FPCGTaggedData *)local_10b8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_10b8.AllocatorInstance.Data);
    }
    uVar19 = (ulonglong)(uint)local_1110.ArrayNum;
    FVar20.Data = FVar20.Data + 8;
  }
  if (local_1110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1110.AllocatorInstance.Data);
  }
  uVar19 = (ulonglong)local_1158.ArrayNum;
  local_1130 = local_1158.ArrayNum;
  local_1138 = (FObjectPtr_u_0 *)(local_1158.AllocatorInstance.Data + uVar19 * 0x78);
  pFVar22 = local_1138;
  FVar20.Data = local_1158.AllocatorInstance.Data;
  pFVar24 = local_1160;
LAB_149c11e00:
  do {
    while( true ) {
      if (local_1158.ArrayNum != (int)uVar19) {
        local_1166[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1166);
      }
      if ((FObjectPtr_u_0 *)FVar20.Data == pFVar22) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_1158.AllocatorInstance.Data,local_1158.ArrayNum);
        if ((FPCGTaggedData *)local_1158.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_1158.AllocatorInstance.Data);
        }
        if (bVar25) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      local_1120 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar20.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) break;
      if (local_1120.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_1120.Handle);
        break;
      }
LAB_149c123ff:
      if ((byte)LogPCG._0_1_ < 2) goto LAB_149c11f38;
      this_03 = FText::AsLocalizable_Advanced_LocText
                          (&local_1068,L"PCGMergeAttributesSettings",L"UnsupportedDataType",
                           L"Unsupported data type in merge attributes");
      FText::ToString(this_03);
      uVar11 = local_1148;
      FPCGContext::GetTaskName(pFVar24,&local_1078);
      FPCGContext::GetExecutionSourceName(pFVar24,&local_1088);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_1088.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1088.Data.AllocatorInstance.Data);
      }
      local_1148 = uVar11 & 0xfffffffc;
      if (local_1078.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1078.Data.AllocatorInstance.Data);
      }
      pFVar22 = local_1138;
      if (local_1068.TextData.Reference == (ITextData *)0x0) goto LAB_149c11f38;
      (**(code **)((longlong)*local_1068.TextData.Reference + 0x10))();
      uVar19 = (ulonglong)local_1130;
      FVar20.Data = FVar20.Data + 0x78;
      pFVar22 = local_1138;
    }
    if (local_1120.Handle == (UObject *)0x0) goto LAB_149c123ff;
    pUVar12 = Z_Construct_UClass_UPCGParamData_NoRegister();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_1120,pUVar12);
    if ((!bVar7) || (local_1120.Handle == (UObject *)0x0)) goto LAB_149c123ff;
    this_01 = *(UPCGMetadata **)&local_1120.Handle[1].field_0x10;
    uVar19 = UPCGMetadata::GetLocalItemCount(this_01);
    pFVar6 = local_10c8;
    if ((longlong)uVar19 < 1) {
      FVar20.Data = FVar20.Data + 0x78;
      uVar19 = (ulonglong)local_1130;
      pFVar24 = local_1160;
      goto LAB_149c11e00;
    }
    if (local_1140 == (FPCGTaggedData *)0x0) {
      pFVar22 = (FObjectPtr_u_0 *)(local_10c8->TaggedData).AllocatorInstance.Data;
      if (((pFVar22 <= FVar20.Data) &&
          (FVar20.Data < pFVar22 + (longlong)(local_10c8->TaggedData).ArrayMax * 0xf)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar10 = (pFVar6->TaggedData).ArrayNum;
      piVar1 = &(pFVar6->TaggedData).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)pFVar6,piVar1);
      }
      (pFVar6->TaggedData).ArrayNum = iVar10 + 1;
      local_1140 = FPCGTaggedData::FPCGTaggedData
                             ((FPCGTaggedData *)
                              ((pFVar6->TaggedData).AllocatorInstance.Data + (longlong)iVar10 * 0x78
                              ),(FPCGTaggedData *)FVar20.Data);
      pFVar22 = local_1138;
      pFVar24 = local_1160;
    }
    else {
      pFVar24 = local_1160;
      pUVar17 = local_1118;
      if (local_1118 == (UPCGParamData *)0x0) {
        bVar7 = IsInGameThread();
        pFVar24 = local_1160;
        if (bVar7) {
          pUVar16 = GetTransientPackageAsObject();
          pUVar17 = NewObject<UPCGParamData>(pUVar16);
          pFVar24 = local_1160;
          local_1118 = pUVar17;
        }
        else {
          if (((local_1160->AsyncState).bIsRunningOnMainThread != false) &&
             (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<4331830188552749348>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                 ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)&local_1168);
          pUVar16 = GetTransientPackageAsObject();
          pUVar17 = NewObject<UPCGParamData>(pUVar16);
          local_1118 = pUVar17;
          FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)&local_1168);
          if ((pUVar17 == (UPCGParamData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                 ,0x12a,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          local_10c0 = pUVar17;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar17 != (UPCGParamData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar17);
          }
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
          Emplace<TObjectPtr<UObject>_>(&pFVar24->AsyncObjects,&local_10d8,(bool *)&local_10c0);
        }
        pUVar4 = (UPCGMetadata *)pUVar17->_padding_;
        local_1100.Parent =
             (UPCGMetadata *)
             (**(code **)(((local_1140->Data).Data.field0_0x0.DebugPtr)->_padding_ + 800))();
        local_1100.DomainMapping.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1100.DomainMapping.ArrayNum = 0;
        local_1100.DomainMapping.ArrayMax = 0;
        local_1100.DomainInitializeParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1100.DomainInitializeParams.ArrayNum = 0;
        local_1100.DomainInitializeParams.ArrayMax = 0;
        UPCGMetadata::InitializeAsCopy(pUVar4,&local_1100);
        DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                  ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                   local_1100.DomainInitializeParams.AllocatorInstance.Data,
                   local_1100.DomainInitializeParams.ArrayNum);
        if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
            local_1100.DomainInitializeParams.AllocatorInstance.Data !=
            (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
          FMemory::Free(local_1100.DomainInitializeParams.AllocatorInstance.Data);
        }
        if (local_1100.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1100.DomainMapping.AllocatorInstance.Data);
        }
        FPCGDataPtrWrapper::operator=(&local_1140->Data,(UPCGData *)pUVar17);
      }
      UPCGMetadata::AddAttributes((UPCGMetadata *)pUVar17->_padding_,this_01);
      local_848.SecondaryData = (ForElementType<__int64>)0x0;
      local_40[0] = 0;
      local_40[1] = 0x100;
      iVar10 = (int)uVar19;
      if (iVar10 < 1) {
        if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar19 & 0xffffffff);
        }
      }
      else {
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                  (8,8,iVar10,&local_848,local_40,local_40 + 1);
      }
      lVar23 = 0;
      do {
        uVar21 = (uint)lVar23;
        uVar11 = 0;
        if ((int)uVar21 < local_40[0]) {
          uVar11 = ~uVar21 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        FVar18 = (ForElementType<__int64>)&local_848;
        if (local_848.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar18 = local_848.SecondaryData;
        }
        *(longlong *)((longlong)FVar18 + (longlong)(int)uVar21 * 8) = lVar23;
        lVar23 = lVar23 + 1;
      } while (lVar23 < (longlong)uVar19);
      local_84c = 0x100;
      local_1058.SecondaryData = (ForElementType<__int64>)0x0;
      local_850 = 0;
      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar19 & 0xffffffff);
      }
      if ((iVar10 == 0x100) ||
         (UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                    (8,8,iVar10,&local_1058,0,&local_84c), 0 < iVar10)) {
        uVar19 = uVar19 & 0xffffffff;
        do {
          FVar18 = (ForElementType<__int64>)&local_1058;
          if (local_1058.SecondaryData != (ForElementType<__int64>)0x0) {
            FVar18 = local_1058.SecondaryData;
          }
          if ((ulonglong)FVar18 < 0x151f7d341) {
            FVar18 = (ForElementType<__int64>)&local_1058;
            if (local_1058.SecondaryData != (ForElementType<__int64>)0x0) {
              FVar18 = local_1058.SecondaryData;
            }
            if ((&PCGInvalidEntryKey < (long64 *)((longlong)FVar18 + (longlong)local_84c * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
          }
          if (local_850 == local_84c) {
            local_850 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                                  (0x808,&local_1058,&local_84c);
          }
          lVar23 = (longlong)local_850;
          FVar18 = (ForElementType<__int64>)&local_1058;
          if (local_1058.SecondaryData != (ForElementType<__int64>)0x0) {
            FVar18 = local_1058.SecondaryData;
          }
          local_850 = local_850 + 1;
          *(undefined8 *)((longlong)FVar18 + lVar23 * 8) = 0xffffffffffffffff;
          uVar19 = uVar19 - 1;
          pFVar24 = local_1160;
        } while (uVar19 != 0);
      }
      iVar10 = local_850;
      pUVar4 = (UPCGMetadata *)pUVar17->_padding_;
      local_10a8.DataPtr = (long64 *)&local_1058;
      if (local_1058.SecondaryData != (ForElementType<__int64>)0x0) {
        local_10a8.DataPtr = (long64 *)local_1058.SecondaryData;
      }
      if ((local_850 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar3 = local_40[0];
      local_10a8.ArrayNum = iVar10;
      local_1098.DataPtr = (long64 *)&local_848;
      if (local_848.SecondaryData != (ForElementType<__int64>)0x0) {
        local_1098.DataPtr = (long64 *)local_848.SecondaryData;
      }
      if ((local_40[0] < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      local_1098.ArrayNum = iVar3;
      UPCGMetadata::SetAttributes(pUVar4,&local_1098,this_01,&local_10a8,pFVar24);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                (&local_1140->Tags,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                 ((longlong)FVar20.Data + 0x10));
      if (local_1058.SecondaryData != (ForElementType<__int64>)0x0) {
        FMemory::Free((void *)local_1058.SecondaryData);
      }
      pFVar22 = local_1138;
      pFVar24 = local_1160;
      if (local_848.SecondaryData != (ForElementType<__int64>)0x0) {
        FMemory::Free((void *)local_848.SecondaryData);
        uVar19 = (ulonglong)local_1130;
        FVar20.Data = FVar20.Data + 0x78;
        pFVar22 = local_1138;
        pFVar24 = local_1160;
        goto LAB_149c11e00;
      }
    }
LAB_149c11f38:
    uVar19 = (ulonglong)local_1130;
    FVar20.Data = FVar20.Data + 0x78;
  } while( true );
}

