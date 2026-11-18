// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149c12580

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

bool __thiscall FPCGMergeElement::ExecuteInternal(FPCGMergeElement *this,FPCGContext *param_1)

{
  int *piVar1;
  FName *pFVar2;
  UPCGNode *this_00;
  longlong *plVar3;
  undefined8 uVar4;
  UPCGMetadata *this_01;
  UPCGMetadata *pUVar5;
  code *pcVar6;
  FPCGContext *this_02;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  EPCGPointNativeProperties EVar11;
  uint uVar12;
  UClass *pUVar13;
  UPCGSettings *pUVar14;
  TObjectPtr<UPCGSettings>_u_0 this_03;
  FPCGTaggedData *pFVar15;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar16;
  FObjectPtr_u_0 *pFVar17;
  FText *this_04;
  ForElementType<__int64> FVar18;
  FString *pFVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  wchar_t *pwVar23;
  FObjectPtr_u_0 *pFVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ForAnyElementType FVar28;
  FObjectPtr_u_0 *pFVar29;
  wchar_t *pwVar30;
  int iVar31;
  longlong lVar32;
  UPCGBasePointData *pUVar33;
  bool bVar34;
  undefined1 auStackY_1238 [32];
  bool local_11e8;
  <lambda_1> local_11e6 [2];
  uint local_11e4;
  undefined1 local_11e0 [4];
  uint local_11dc;
  UPCGBasePointData *local_11d8;
  TArray<UPCGBasePointData_const_*,TSizedDefaultAllocator<32>_> local_11d0;
  FObjectPtr_u_0 local_11c0;
  FPCGContext *local_11b8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_11b0;
  FObjectPtr_u_0 *local_11a0;
  FObjectPtr_u_0 local_1198;
  TObjectPtr<UPCGSettings>_u_0 local_1190;
  FObjectPtr_u_0 local_1188;
  longlong local_1180;
  int local_1178;
  int local_1174;
  int local_1170;
  undefined8 local_1168;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1160;
  FName local_1150;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1148;
  TArrayView<__int64,int> local_1138;
  TArrayView<__int64_const_,int> local_1128;
  longlong local_1118;
  int local_1110;
  int local_110c;
  int local_1108;
  FString local_10f8;
  FString local_10e8;
  FText local_10d8;
  FPCGInitializeFromDataParams local_10c8;
  FString local_1088;
  FString local_1078;
  FString local_1068;
  ForElementType<__int64> local_1058;
  int local_850;
  int local_84c;
  ForElementType<__int64> local_848;
  int local_40;
  int local_3c;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x149c125aa;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1238;
  local_11e4 = 0;
  bVar34 = -1 < CpuChannel->Enabled;
  local_11b8 = param_1;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId59,"FPCGMergeElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMergeElement.cpp"
               ,0x3b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId59);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMergeElement.cpp"
                         ,0x3c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar14 = UPCGNode::GetSettings(this_00), pUVar14 == (UPCGSettings *)0x0)) {
      pFVar15 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMergeSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_11e6[0]);
      if (pFVar15 != (FPCGTaggedData *)0x0) {
        local_1190.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar15->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if ((UPCGSettingsWithDynamicInputs *)local_1190.DebugPtr ==
              (UPCGSettingsWithDynamicInputs *)0x0) goto LAB_149c1271e;
          UE::GC::MarkAsReachable((UObject *)local_1190.DebugPtr);
        }
        if ((UPCGSettingsWithDynamicInputs *)local_1190.DebugPtr !=
            (UPCGSettingsWithDynamicInputs *)0x0) {
          pUVar13 = UPCGMergeSettings::StaticClass();
          bVar7 = FObjectPtr::IsA(&local_1190.ObjectPtr,pUVar13);
          this_03 = local_1190;
          if (bVar7) goto LAB_149c12721;
        }
      }
    }
    else {
      pUVar14 = UPCGNode::GetSettings(this_00);
      this_03.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar14);
      if ((UPCGSettingsWithDynamicInputs *)this_03.DebugPtr != (UPCGSettingsWithDynamicInputs *)0x0)
      {
        pUVar13 = UPCGMergeSettings::StaticClass();
        iVar10 = (int)pUVar13->_padding_;
        if ((iVar10 <= *(int *)((this_03.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((this_03.DebugPtr)->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
            &pUVar13->_padding_)) goto LAB_149c12721;
      }
    }
  }
  else {
    pUVar13 = UPCGMergeSettings::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar13);
    if (bVar7) {
      this_03.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      goto LAB_149c12721;
    }
  }
LAB_149c1271e:
  this_03.DebugPtr = (UPCGSettings *)0x0;
LAB_149c12721:
  if (((UPCGSettingsWithDynamicInputs *)this_03.DebugPtr == (UPCGSettingsWithDynamicInputs *)0x0) ||
     (local_11e8 = false, (char)this_03.DebugPtr[1]._padding_ != '\0')) {
    local_11e8 = true;
  }
  local_11b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_11b0.ArrayNum = 0;
  local_11b0.ArrayMax = 0;
  UPCGSettingsWithDynamicInputs::GetNodeDefinedPinLabels
            ((UPCGSettingsWithDynamicInputs *)this_03.DebugPtr,&local_1160);
  iVar10 = local_1160.ArrayNum;
  uVar20 = (ulonglong)local_1160.ArrayNum;
  pFVar2 = (FName *)(local_1160.AllocatorInstance.Data + uVar20 * 8);
  FVar28.Data = local_1160.AllocatorInstance.Data;
  while( true ) {
    pFVar24 = (FObjectPtr_u_0 *)0x0;
    if ((uint)uVar20 != iVar10) {
      local_11e0[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_11e0);
    }
    if ((FName *)FVar28.Data == pFVar2) break;
    local_1150 = *(FName *)FVar28.Data;
    pTVar16 = FPCGDataCollection::GetInputsByPin(&param_1->InputData,&local_1148,&local_1150);
    if ((&local_11b0 == pTVar16) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar31 = pTVar16->ArrayNum;
    if (iVar31 != 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x78,8,iVar31,&local_11b0.AllocatorInstance,&local_11b0.ArrayNum,
                         &local_11b0.ArrayMax);
      memmove(local_11b0.AllocatorInstance.Data + (longlong)iVar9 * 0x78,
              (pTVar16->AllocatorInstance).Data,(longlong)iVar31 * 0x78);
      pTVar16->ArrayNum = 0;
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_1148.AllocatorInstance.Data,local_1148.ArrayNum);
    if ((FPCGTaggedData *)local_1148.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_1148.AllocatorInstance.Data);
    }
    uVar20 = (ulonglong)(uint)local_1160.ArrayNum;
    FVar28.Data = FVar28.Data + 8;
  }
  uVar20 = (ulonglong)local_11e4;
  if (local_1160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1160.AllocatorInstance.Data);
  }
  this_02 = local_11b8;
  uVar21 = (ulonglong)local_11b0.ArrayNum;
  local_11d8 = (UPCGBasePointData *)0x0;
  local_11e4 = 0;
  local_11d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar29 = (FObjectPtr_u_0 *)(local_11b0.AllocatorInstance.Data + uVar21 * 0x78);
  local_11dc = local_11b0.ArrayNum;
  pFVar17 = pFVar24;
  FVar28.Data = local_11b0.AllocatorInstance.Data;
  local_11d0._8_8_ = uVar20;
  local_11a0 = pFVar29;
  while( true ) {
    if (local_11b0.ArrayNum != (int)uVar21) {
      local_11e6[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_11e6);
    }
    pUVar33 = local_11d8;
    if ((FObjectPtr_u_0 *)FVar28.Data == pFVar29) break;
    local_1188 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar28.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c128d2:
      if (local_1188.Handle == (UObject *)0x0) goto LAB_149c12bbe;
      pUVar13 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_1188,pUVar13);
      if (!bVar7) goto LAB_149c12bbe;
      local_11c0.Handle = local_1188.Handle;
      if (local_1188.Handle == (UObject *)0x0) goto LAB_149c12bc7;
      iVar10 = (**(code **)(*(longlong *)local_1188.Handle + 0x488))();
      if (iVar10 == 0) goto LAB_149c12ca6;
      if (((local_11d0.AllocatorInstance.Data <= &local_11c0) &&
          (&local_11c0 <
           (FObjectPtr_u_0 *)(local_11d0.AllocatorInstance.Data + (longlong)local_11d0.ArrayMax * 8)
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar10 = local_11d0.ArrayNum;
      if (local_11d0.ArrayNum == local_11d0.ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_11d0.AllocatorInstance,&local_11d0.ArrayMax);
      }
      local_11d0.ArrayNum = iVar10 + 1;
      ((FObjectPtr_u_0 *)(local_11d0.AllocatorInstance.Data + (longlong)iVar10 * 8))->Handle =
           (UObject *)local_11c0;
      iVar10 = (**(code **)(*(longlong *)local_11c0.Handle + 0x488))();
      local_11e4 = (int)pFVar24 + iVar10;
      pFVar24 = (FObjectPtr_u_0 *)(ulonglong)local_11e4;
      if (pFVar17 == (FObjectPtr_u_0 *)0x0) {
        pFVar17 = (FObjectPtr_u_0 *)(this_02->OutputData).TaggedData.AllocatorInstance.Data;
        if (((pFVar17 <= FVar28.Data) &&
            (FVar28.Data < pFVar17 + (longlong)(this_02->OutputData).TaggedData.ArrayMax * 0xf)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        iVar10 = (this_02->OutputData).TaggedData.ArrayNum;
        piVar1 = &(this_02->OutputData).TaggedData.ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)&this_02->OutputData,piVar1);
        }
        (this_02->OutputData).TaggedData.ArrayNum = iVar10 + 1;
        pFVar17 = (FObjectPtr_u_0 *)
                  FPCGTaggedData::FPCGTaggedData
                            ((FPCGTaggedData *)
                             ((this_02->OutputData).TaggedData.AllocatorInstance.Data +
                             (longlong)iVar10 * 0x78),(FPCGTaggedData *)FVar28.Data);
LAB_149c12b51:
        if (local_11d8 == (UPCGBasePointData *)0x0) goto LAB_149c12ca6;
      }
      else if (local_11d8 == (UPCGBasePointData *)0x0) {
        local_11d8 = FPCGContext::NewPointData_AnyThread(this_02);
        local_1198 = (FObjectPtr_u_0)pFVar17->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if ((UPCGSpatialData *)local_1198.Handle == (UPCGSpatialData *)0x0) goto LAB_149c1335d;
          UE::GC::MarkAsReachable(local_1198.Handle);
        }
        if ((UPCGSpatialData *)local_1198.Handle == (UPCGSpatialData *)0x0) {
LAB_149c1335d:
          pFVar19 = GetTypeName<UPCGBasePointData_const_>(&local_1068);
          if ((pFVar19->Data).ArrayNum == 0) {
            pwVar30 = L"";
          }
          else {
            pwVar30 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar30);
        }
        pUVar13 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
        bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_1198,pUVar13);
        if ((!bVar7) || ((UPCGSpatialData *)local_1198.Handle == (UPCGSpatialData *)0x0)) {
          pFVar19 = GetTypeName<UPCGBasePointData_const_>(&local_1088);
          pwVar30 = L"";
          if ((pFVar19->Data).ArrayNum == 0) {
            pwVar23 = L"";
          }
          else {
            pwVar23 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
          }
          pFVar19 = GetFullNameForCastLogError<UPCGData_const_>
                              (&local_1078,(UPCGData *)local_1198.Handle);
          if ((pFVar19->Data).ArrayNum != 0) {
            pwVar30 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar30,pwVar23);
        }
        FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                  (&local_10c8,(UPCGSpatialData *)local_1198.Handle);
        local_10c8.bInheritMetadata = local_11e8;
        local_10c8.bInheritSpatialData = false;
        UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)local_11d8,&local_10c8);
        FPCGDataPtrWrapper::operator=((FPCGDataPtrWrapper *)pFVar17,(UPCGData *)local_11d8);
        DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                  ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                   local_10c8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data
                   ,local_10c8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
        if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
            local_10c8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
            (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
          FMemory::Free(local_10c8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance
                        .Data);
        }
        if (local_10c8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_10c8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
        }
        goto LAB_149c12b51;
      }
      if (local_11e8 != false) {
        UPCGMetadata::AddAttributes
                  ((UPCGMetadata *)local_11d8->_padding_,
                   *(UPCGMetadata **)&local_11c0.Handle[1].field_0x10);
      }
      if ((pFVar17 == (FObjectPtr_u_0 *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TargetTaggedData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMergeElement.cpp"
                             ,0x7d,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar17 + 2),
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                 ((longlong)FVar28.Data + 0x10));
      uVar21 = (ulonglong)local_11dc;
      FVar28.Data = FVar28.Data + 0x78;
    }
    else {
      if (local_1188.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_1188.Handle);
        goto LAB_149c128d2;
      }
LAB_149c12bbe:
      local_11c0.Handle = (UObject *)0x0;
LAB_149c12bc7:
      if (1 < (byte)LogPCG._0_1_) {
        this_04 = FText::AsLocalizable_Advanced_LocText
                            (&local_10d8,L"PCGMergeElement",L"UnsupportedDataType",
                             L"Unsupported data type in merge");
        FText::ToString(this_04);
        FPCGContext::GetTaskName(this_02,&local_10e8);
        FPCGContext::GetExecutionSourceName(this_02,&local_10f8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_10f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_10f8.Data.AllocatorInstance.Data);
        }
        if (local_10e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_10e8.Data.AllocatorInstance.Data);
        }
        if (local_10d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_10d8.TextData.Reference + 0x10))();
        }
        pFVar24 = (FObjectPtr_u_0 *)(ulonglong)local_11e4;
        pFVar29 = local_11a0;
      }
LAB_149c12ca6:
      uVar21 = (ulonglong)local_11dc;
      FVar28.Data = FVar28.Data + 0x78;
    }
  }
  if (local_11d8 != (UPCGBasePointData *)0x0) {
    (**(code **)(local_11d8->_padding_ + 0x490))(local_11d8,pFVar24,1);
    pcVar6 = *(code **)(pUVar33->_padding_ + 0x498);
    EVar11 = UPCGBasePointData::GetPropertiesToAllocateFromPointData(&local_11d0);
    (*pcVar6)(pUVar33,EVar11);
    local_11dc = 0;
    local_11e4 = 0;
    if (0 < local_11d0.ArrayNum) {
      local_11a0 = (FObjectPtr_u_0 *)0x0;
      do {
        pFVar24 = local_11a0;
        uVar27 = local_11dc;
        uVar26 = local_11e4;
        uVar12 = 0;
        if ((int)local_11e4 < local_11d0.ArrayNum) {
          uVar12 = ~local_11e4 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        plVar3 = *(longlong **)((longlong)pFVar24 + local_11d0.AllocatorInstance.Data);
        uVar12 = (**(code **)(*plVar3 + 0x488))(plVar3);
        if (((int)uVar12 < 1) &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7085502243650142063>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMergeElement.cpp"
                               ,0x91,"NumSourcePoints > 0"), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        (**(code **)(*plVar3 + 0x638))(plVar3,pUVar33,0,uVar27);
        if ((local_11e8 == false) || (uVar26 != 0)) {
          (**(code **)(pUVar33->_padding_ + 0x4f8))(pUVar33,&local_1180);
          pUVar33 = local_11d8;
          for (uVar25 = uVar27; local_11d8 = pUVar33, (int)uVar25 < (int)(uVar27 + uVar12);
              uVar25 = uVar25 + 1) {
            uVar26 = 0;
            if ((int)uVar25 < local_1170) {
              uVar26 = ~uVar25 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < NumElements)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                   ,0x8b,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            if (uVar25 == (int)uVar25 % local_1174) {
              puVar22 = (undefined8 *)
                        ((longlong)((int)uVar25 % local_1174) * (longlong)local_1178 + local_1180);
            }
            else {
              puVar22 = &local_1168;
            }
            *puVar22 = 0xffffffffffffffff;
            uVar26 = local_11e4;
            pUVar33 = local_11d8;
          }
          if ((((local_11e8 != false) && (pUVar33->_padding_ != 0)) &&
              ((UPCGMetadata *)plVar3[7] != (UPCGMetadata *)0x0)) &&
             (iVar10 = UPCGMetadata::GetAttributeCount((UPCGMetadata *)plVar3[7]), 0 < iVar10)) {
            local_3c = 0x100;
            local_848.SecondaryData = (ForElementType<__int64>)0x0;
            local_40 = 0;
            if ((int)uVar12 < 1) {
              if ((int)uVar12 < 0) goto LAB_149c1338b;
            }
            else {
              UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                        (8,8,uVar12,&local_848,&local_40,&local_3c);
            }
            (**(code **)(*plVar3 + 0x538))(plVar3,&local_1118);
            uVar26 = 0;
            if (0 < local_40) {
              lVar32 = 0;
              do {
                uVar27 = 0;
                if ((int)uVar26 < local_1108) {
                  uVar27 = ~uVar26 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < NumElements)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                       ,0x8b,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                uVar4 = *(undefined8 *)
                         ((longlong)((int)uVar26 % local_110c) * (longlong)local_1110 + local_1118);
                uVar27 = 0;
                if ((int)uVar26 < local_40) {
                  uVar27 = ~uVar26 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                FVar18 = (ForElementType<__int64>)&local_848;
                if (local_848.SecondaryData != (ForElementType<__int64>)0x0) {
                  FVar18 = local_848.SecondaryData;
                }
                uVar26 = uVar26 + 1;
                *(undefined8 *)((longlong)FVar18 + lVar32) = uVar4;
                lVar32 = lVar32 + 8;
                uVar27 = local_11dc;
              } while ((int)uVar26 < local_40);
            }
            local_1058.SecondaryData = (ForElementType<__int64>)0x0;
            local_850 = 0;
            local_84c = 0x100;
            if ((int)uVar12 < 1) {
              if ((int)uVar12 < 0) {
LAB_149c1338b:
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
              }
            }
            else {
              UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                        (8,8,uVar12,&local_1058,&local_850,&local_84c);
            }
            uVar26 = 0;
            if (0 < local_850) {
              lVar32 = 0;
              do {
                uVar25 = 0;
                if ((int)uVar26 < local_850) {
                  uVar25 = ~uVar26 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                FVar18 = (ForElementType<__int64>)&local_1058;
                if (local_1058.SecondaryData != (ForElementType<__int64>)0x0) {
                  FVar18 = local_1058.SecondaryData;
                }
                uVar26 = uVar26 + 1;
                *(undefined8 *)(lVar32 + (longlong)FVar18) = 0xffffffffffffffff;
                lVar32 = lVar32 + 8;
              } while ((int)uVar26 < local_850);
            }
            iVar10 = local_850;
            this_01 = (UPCGMetadata *)local_11d8->_padding_;
            local_1138.DataPtr = (long64 *)&local_1058;
            if (local_1058.SecondaryData != (ForElementType<__int64>)0x0) {
              local_1138.DataPtr = (long64 *)local_1058.SecondaryData;
            }
            if ((local_850 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            iVar31 = local_40;
            pUVar5 = (UPCGMetadata *)plVar3[7];
            local_1128.DataPtr = (long64 *)&local_848;
            if (local_848.SecondaryData != (ForElementType<__int64>)0x0) {
              local_1128.DataPtr = (long64 *)local_848.SecondaryData;
            }
            local_1138.ArrayNum = iVar10;
            if ((local_40 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            local_1128.ArrayNum = iVar31;
            UPCGMetadata::SetAttributes(this_01,&local_1128,pUVar5,&local_1138,local_11b8);
            if (0 < local_850) {
              lVar32 = 0;
              iVar31 = -uVar27;
              iVar10 = 0;
              do {
                uVar26 = 0;
                if (iVar10 < local_850) {
                  uVar26 = ~(iVar31 + uVar27) >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                FVar18 = (ForElementType<__int64>)&local_1058;
                if (local_1058.SecondaryData != (ForElementType<__int64>)0x0) {
                  FVar18 = local_1058.SecondaryData;
                }
                uVar4 = *(undefined8 *)(lVar32 + (longlong)FVar18);
                uVar26 = 0;
                if ((int)uVar27 < local_1170) {
                  uVar26 = ~uVar27 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < NumElements)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                       ,0x8b,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                if (uVar27 == (int)uVar27 % local_1174) {
                  puVar22 = (undefined8 *)
                            ((longlong)((int)uVar27 % local_1174) * (longlong)local_1178 +
                            local_1180);
                }
                else {
                  puVar22 = &local_1168;
                }
                uVar27 = uVar27 + 1;
                *puVar22 = uVar4;
                lVar32 = lVar32 + 8;
                iVar10 = iVar10 + 1;
              } while ((int)(iVar31 + uVar27) < local_850);
            }
            if (local_1058.SecondaryData != (ForElementType<__int64>)0x0) {
              FMemory::Free((void *)local_1058.SecondaryData);
            }
            pUVar33 = local_11d8;
            uVar26 = local_11e4;
            uVar27 = local_11dc;
            if (local_848.SecondaryData != (ForElementType<__int64>)0x0) {
              FMemory::Free((void *)local_848.SecondaryData);
              pUVar33 = local_11d8;
              uVar26 = local_11e4;
              uVar27 = local_11dc;
            }
          }
        }
        local_11dc = uVar27 + uVar12;
        local_11a0 = local_11a0 + 1;
        local_11e4 = uVar26 + 1;
      } while ((int)local_11e4 < local_11d0.ArrayNum);
    }
  }
  if ((FObjectPtr_u_0 *)local_11d0.AllocatorInstance.Data != (FObjectPtr_u_0 *)0x0) {
    FMemory::Free(local_11d0.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_11b0.AllocatorInstance.Data,local_11b0.ArrayNum);
  if ((FPCGTaggedData *)local_11b0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_11b0.AllocatorInstance.Data);
  }
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149c35790

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
FPCGMergeElement::SupportsBasePointDataInputs(FPCGMergeElement *this,FPCGContext *param_1)

{
  return true;
}

