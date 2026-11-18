// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// ExecuteInternal @ 149b0eb10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FPCGConvertToAttributeSetElement::ExecuteInternal
          (FPCGConvertToAttributeSetElement *this,FPCGContext *param_1)

{
  int *piVar1;
  uint uVar2;
  UPCGNode *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FPCGMetadataDomainID FVar9;
  FName FVar10;
  UPCGSettings *pUVar11;
  UPCGSettings *pUVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  int iVar16;
  UClass *pUVar17;
  UPCGSettings *pUVar18;
  TObjectPtr<UPCGSettings>_u_0 TVar19;
  UPCGParamData *pUVar20;
  UPCGMetadata *this_01;
  FPCGAttributePropertySelector *pFVar21;
  UPCGMetadata *pUVar22;
  ulonglong uVar23;
  ForAnyElementType FVar24;
  FPCGTaggedData *pFVar25;
  uint uVar26;
  FObjectPtr_u_0 FVar27;
  FPCGAttributePropertySelector *this_02;
  longlong *plVar28;
  ForAnyElementType FVar29;
  uint uVar30;
  bool bVar31;
  <lambda_1> local_res10;
  undefined1 local_res20 [8];
  undefined1 local_448 [8];
  TObjectPtr<UPCGSettings>_u_0 local_440;
  FPCGTaggedData *local_438;
  uint local_430;
  TObjectPtr<UPCGSettings>_u_0 local_428;
  FObjectPtr_u_0 local_420;
  FObjectPtr_u_0 local_418;
  UPCGParamData *local_410;
  FPCGTaggedData *local_408;
  FPCGMetadataInitializeParams local_400;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_3d8;
  FName local_3c8;
  FPCGAttributePropertySelector local_3b8;
  int local_378;
  int local_374;
  UPCGSettings *local_370;
  UPCGSettings *local_368;
  int iStack_360;
  uint uStack_35c;
  longlong *local_358;
  undefined4 uStack_350;
  int iStack_34c;
  int local_348;
  undefined4 uStack_344;
  int iStack_340;
  undefined4 uStack_33c;
  FPCGAttributePropertySelector local_338;
  UPCGSettings *local_2f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f0;
  undefined8 uStack_2d0;
  TObjectPtr<UPCGData_const_>_u_0 local_2c8;
  UPCGParamData *local_2c0;
  FPCGAttributePropertySelector local_2b8;
  undefined **local_278;
  EPCGAttributePropertySelection local_270;
  FName local_26c;
  FName local_264;
  FName local_25c;
  ForAnyElementType local_250;
  int local_248;
  int local_244;
  EPCGExtraProperties local_240;
  undefined8 local_238;
  undefined2 local_230;
  undefined1 local_228 [8];
  TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_u_0 local_220;
  undefined2 local_1d0;
  long64 *local_1c8;
  undefined8 uStack_1c0;
  long64 lStack_1b0;
  bool local_1a8;
  FName local_190;
  FPCGMetadataDomainID FStack_188;
  FPCGAttributeIdentifier local_178;
  long64 *local_158 [2];
  int local_148;
  long64 lStack_140;
  undefined1 local_138 [48];
  int local_108;
  FPCGAttributePropertySelector local_f8;
  undefined1 local_b8 [48];
  int local_88;
  undefined4 local_5c;
  
  bVar6 = false;
  bVar5 = false;
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId42,"FPCGConvertToAttributeSetElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGConvertToAttributeSet.cpp"
               ,0x2a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId42);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGConvertToAttributeSet.cpp"
                          ,0x2b,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    uVar14 = (*pcVar4)();
    return (bool)uVar14;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar17 = UPCGConvertToAttributeSetSettings::StaticClass();
    bVar13 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar17);
    if (bVar13) {
      local_440 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar19 = local_440;
    }
    else {
      local_440.DebugPtr = (UPCGSettings *)0x0;
      TVar19.DebugPtr = local_440.DebugPtr;
    }
    goto LAB_149b0ec64;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar18 = UPCGNode::GetSettings(this_00), pUVar18 == (UPCGSettings *)0x0)) {
    local_res10 = SUB81(param_1,0);
    pFVar25 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGConvertToAttributeSetSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_res10);
    if (pFVar25 != (FPCGTaggedData *)0x0) {
      local_428.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar25->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_428.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b0ec5c;
        UE::GC::MarkAsReachable((UObject *)local_428.DebugPtr);
      }
      if (local_428.DebugPtr != (UPCGSettings *)0x0) {
        pUVar17 = UPCGConvertToAttributeSetSettings::StaticClass();
        bVar13 = FObjectPtr::IsA(&local_428.ObjectPtr,pUVar17);
        TVar19 = local_428;
        local_440 = local_428;
        if (bVar13) goto LAB_149b0ec64;
      }
    }
  }
  else {
    pUVar18 = UPCGNode::GetSettings(this_00);
    TVar19.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar18);
    if (TVar19.DebugPtr != (UPCGSettings *)0x0) {
      local_440.DebugPtr = TVar19.DebugPtr;
      pUVar17 = UPCGConvertToAttributeSetSettings::StaticClass();
      iVar15 = (int)pUVar17->_padding_;
      if ((iVar15 <= *(int *)((TVar19.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar19.DebugPtr)->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
          &pUVar17->_padding_)) goto LAB_149b0ec64;
    }
  }
LAB_149b0ec5c:
  local_440.DebugPtr = (UPCGSettings *)0x0;
  TVar19.DebugPtr = local_440.DebugPtr;
LAB_149b0ec64:
  if ((TVar19.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGConvertToAttributeSet.cpp"
                          ,0x2e,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    uVar14 = (*pcVar4)();
    return (bool)uVar14;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_3d8,&PCGPinConstants::DefaultInputLabel);
  uVar8 = _UNK_150631d98;
  uVar7 = ___xmm_00000000ffffffff0000008000000000;
  uVar23 = (ulonglong)local_3d8.ArrayNum;
  local_430 = local_3d8.ArrayNum;
  pFVar25 = (FPCGTaggedData *)(local_3d8.AllocatorInstance.Data + uVar23 * 0x78);
  FVar29.Data = local_3d8.AllocatorInstance.Data;
  local_438 = pFVar25;
  do {
    local_408 = (FPCGTaggedData *)FVar29.Data;
    if (local_3d8.ArrayNum != (uint)uVar23) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if ((FPCGTaggedData *)FVar29.Data == pFVar25) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_3d8.AllocatorInstance.Data,local_3d8.ArrayNum);
      if ((FPCGTaggedData *)local_3d8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_3d8.AllocatorInstance.Data);
      }
      if (bVar31) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    local_420.Handle = (UObject *)(((FPCGTaggedData *)FVar29.Data)->Data).Data.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b0ed0f:
      if ((UPCGData *)local_420.Handle != (UPCGData *)0x0) {
        pUVar17 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
        bVar13 = FObjectPtr::IsA((FObjectPtr *)&local_420,pUVar17);
        if ((bVar13) && ((UPCGData *)local_420.Handle != (UPCGData *)0x0)) {
          local_418.Handle =
               (UObject *)(((FPCGTaggedData *)FVar29.Data)->Data).Data.field0_0x0.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b0ed66:
            if ((UPCGData *)local_418.Handle == (UPCGData *)0x0) goto LAB_149b0edf8;
            pUVar17 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
            bVar13 = FObjectPtr::IsA((FObjectPtr *)&local_418,pUVar17);
            FVar27 = local_418;
            if (!bVar13) goto LAB_149b0edf8;
          }
          else {
            if ((UPCGData *)local_418.Handle != (UPCGData *)0x0) {
              UE::GC::MarkAsReachable(local_418.Handle);
              goto LAB_149b0ed66;
            }
LAB_149b0edf8:
            FVar27.Handle = (UObject *)0x0;
          }
          pUVar22 = *(UPCGMetadata **)&FVar27.Handle[1].field_0x10;
          if ((pUVar22 == (UPCGMetadata *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SourceMetadata",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGConvertToAttributeSet.cpp"
                                  ,0x3c,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
          if ((((int)TVar19.DebugPtr[1]._padding_ !=
                *(int *)((longlong)&TVar19.DebugPtr[1]._padding_ + 4)) ||
              (iVar15 = UPCGMetadata::GetAttributeCount(pUVar22), pFVar25 = local_438, iVar15 != 0))
             && (iVar15 = (**(code **)(*(longlong *)FVar27.Handle + 0x488))(FVar27.Handle),
                pFVar25 = local_438, iVar15 != 0)) {
            pUVar20 = FPCGContext::NewObject_AnyThread<UPCGParamData>(param_1);
            local_410 = pUVar20;
            this_01 = (UPCGMetadata *)(**(code **)(pUVar20->_padding_ + 0x328))(pUVar20);
            if ((this_01 == (UPCGMetadata *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Metadata",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGConvertToAttributeSet.cpp"
                                    ,0x46,L""), bVar13)) {
              pcVar4 = (code *)swi(3);
              uVar14 = (*pcVar4)();
              return (bool)uVar14;
            }
            local_400.DomainMapping.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_400.DomainMapping.ArrayNum = 0;
            local_400.DomainMapping.ArrayMax = 0;
            local_400.DomainInitializeParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0
            ;
            local_400.DomainInitializeParams.ArrayNum = 0;
            local_400.DomainInitializeParams.ArrayMax = 0;
            local_400.Parent = pUVar22;
            local_228 = (undefined1  [8])
                        UPCGMetadata::GetConstMetadataDomain(pUVar22,&PCGMetadataDomainID::Elements)
            ;
            local_220._12_4_ = -1;
            local_220._0_8_ = 0;
            local_220._8_4_ = 0;
            local_220._32_8_ = 0;
            local_220.TypedValue.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_220.TypedValue.HashSize = 0;
            local_1d0._0_1_ = ExcludeAttributes;
            local_1d0._1_1_ = Equal;
            local_1a8 = false;
            local_220._40_8_ = uVar7;
            local_220._48_8_ = uVar8;
            (**(code **)(*(longlong *)FVar27.Handle + 0x538))(FVar27.Handle,local_158);
            iVar15 = local_148;
            iVar16 = (**(code **)(*(longlong *)FVar27.Handle + 0x488))(FVar27.Handle);
            if ((iVar16 != iVar15) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PointData->GetNumPoints() == MetadataEntryRange.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGConvertToAttributeSet.cpp"
                                    ,0x4c,L""), bVar13)) {
              pcVar4 = (code *)swi(3);
              uVar14 = (*pcVar4)();
              return (bool)uVar14;
            }
            local_1a8 = true;
            local_1c8 = local_158[0];
            uStack_1c0 = local_158[1];
            lStack_1b0 = lStack_140;
            iVar15 = local_400.DomainInitializeParams.ArrayNum;
            if (local_400.DomainInitializeParams.ArrayNum ==
                local_400.DomainInitializeParams.ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x898,&local_400.DomainInitializeParams.AllocatorInstance,
                                  &local_400.DomainInitializeParams.ArrayMax);
            }
            local_400.DomainInitializeParams.ArrayNum = iVar15 + 1;
            *(FPCGMetadataDomainID *)
             (local_400.DomainInitializeParams.AllocatorInstance.Data + (longlong)iVar15 * 0x98) =
                 PCGMetadataDomainID::Elements;
            FPCGMetadataDomainInitializeParams::FPCGMetadataDomainInitializeParams
                      ((FPCGMetadataDomainInitializeParams *)
                       (local_400.DomainInitializeParams.AllocatorInstance.Data +
                       (longlong)iVar15 * 0x98 + 0x10),
                       (FPCGMetadataDomainInitializeParams *)local_228);
            UPCGMetadata::InitializeAsCopy(this_01,&local_400);
            if ((int)TVar19.DebugPtr[1]._padding_ !=
                *(int *)((longlong)&TVar19.DebugPtr[1]._padding_ + 4)) {
              local_370 = TVar19.DebugPtr + 1;
              iStack_360 = 0;
              iVar15 = (int)TVar19.DebugPtr[1]._padding_;
              local_358 = &TVar19.DebugPtr[1]._padding_;
              local_348 = 0;
              uStack_35c = 1;
              iStack_34c = 0;
              if (iVar15 != 0) {
                plVar28 = local_358;
                if ((longlong *)TVar19.DebugPtr[1]._padding_ != (longlong *)0x0) {
                  plVar28 = (longlong *)TVar19.DebugPtr[1]._padding_;
                }
                uVar26 = (uint)*plVar28;
                while (uVar26 == 0) {
                  iStack_360 = iStack_360 + 1;
                  local_348 = local_348 + 0x20;
                  iStack_34c = iVar15;
                  if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_360)
                  goto LAB_149b0f07e;
                  uVar26 = *(uint *)((longlong)plVar28 + (longlong)iStack_360 * 4);
                }
                uStack_35c = -uVar26 & uVar26;
                uVar23 = (ulonglong)uStack_35c * 2 + 1;
                lVar3 = 0x3f;
                if (uVar23 != 0) {
                  for (; uVar23 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                  }
                }
                local_378 = (int)lVar3;
                iStack_34c = local_378 + -1 + local_348;
                if (iVar15 < iStack_34c) {
                  iStack_34c = iVar15;
                }
              }
LAB_149b0f07e:
              uVar26 = (uint)TVar19.DebugPtr[1]._padding_;
              pUVar18 = TVar19.DebugPtr + 1;
              uStack_344 = local_5c;
              iStack_340 = (int)TVar19.DebugPtr[1]._padding_ -
                           *(int *)((longlong)&TVar19.DebugPtr[1]._padding_ + 4);
              uVar30 = uVar26 & 0xffffffe0;
              TStack_2f0._padding_ = CONCAT44(uStack_35c,iStack_360);
              uStack_350 = 0xffffffff;
              TStack_2f0.CurrentBitIndex = iStack_34c;
              TStack_2f0.UnvisitedBitMask = 0xffffffff;
              iVar15 = (int)uVar26 >> 5;
              TStack_2f0._28_4_ = local_5c;
              TStack_2f0.BaseBitIndex = local_348;
              uStack_2d0 = CONCAT44(uStack_33c,iStack_340);
              local_368 = local_370;
              local_2f8 = local_370;
              TStack_2f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_358;
              if ((((int)uVar26 < 0) || ((int)TVar19.DebugPtr[1]._padding_ < (int)uVar26)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x7af,L""), bVar13)) {
                pcVar4 = (code *)swi(3);
                uVar14 = (*pcVar4)();
                return (bool)uVar14;
              }
              pUVar11 = local_370;
              FVar29.Data = (FScriptContainerElement *)local_408;
              uVar2 = (uint)TVar19.DebugPtr[1]._padding_;
              if (uVar26 != uVar2) {
                plVar28 = &pUVar18->_padding_;
                if ((longlong *)TVar19.DebugPtr[1]._padding_ != (longlong *)0x0) {
                  plVar28 = (longlong *)TVar19.DebugPtr[1]._padding_;
                }
                uVar26 = -1 << ((byte)uVar26 & 0x1f) &
                         *(uint *)((longlong)plVar28 + (longlong)iVar15 * 4);
                while (uVar26 == 0) {
                  iVar15 = iVar15 + 1;
                  uVar30 = uVar30 + 0x20;
                  uVar26 = uVar2;
                  if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar15)
                  goto LAB_149b0f1a0;
                  uVar26 = *(uint *)((longlong)plVar28 + (longlong)iVar15 * 4);
                }
                uVar23 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
                lVar3 = 0x3f;
                if (uVar23 != 0) {
                  for (; uVar23 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                  }
                }
                local_374 = (int)lVar3;
                uVar26 = local_374 + -1 + uVar30;
                if ((int)uVar2 < (int)uVar26) {
                  uVar26 = uVar2;
                }
              }
LAB_149b0f1a0:
              do {
                pUVar12 = local_2f8;
                if ((int)local_2f8->_padding_ - *(int *)((longlong)&local_2f8->_padding_ + 4) !=
                    (int)uStack_2d0) {
                  local_448[0] = 0;
                  `TSparseArray<TSparseSetElement<TTuple<FPCGAttributePropertyInputSelector,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_448);
                }
                FVar10 = PCGMetadataAttributeConstants::SourceNameAttributeName;
                if (((TStack_2f0.CurrentBitIndex == uVar26) &&
                    (TStack_2f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)&pUVar18->_padding_
                    )) && (pUVar20 = local_410, TVar19 = local_440, pUVar12 == pUVar11)) break;
                this_02 = (FPCGAttributePropertySelector *)
                          ((longlong)TStack_2f0.CurrentBitIndex * 0x88 + pUVar12->_padding_);
                if (this_02[1].AttributeName == PCGMetadataAttributeConstants::SourceAttributeName)
                {
                  bVar6 = true;
                  local_3c8.ComparisonIndex.Value = 0;
                  local_3c8.Number = 0;
                  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
                            ((FPCGAttributePropertyOutputSelector *)&local_338);
                  FPCGAttributePropertySelector::SetDomainName(&local_338,local_3c8,true);
                  FPCGAttributePropertySelector::SetAttributeName(&local_338,FVar10,true);
                  DestructItems<FString,int>
                            ((FString *)local_338.ExtraNames.AllocatorInstance.Data,
                             local_338.ExtraNames.ArrayNum);
                  local_338.ExtraNames.ArrayNum = 0;
                  if (local_338.ExtraNames.ArrayMax == 0) {
                    local_338.ExtraNames.ArrayMax = 0;
                    pFVar21 = &local_338;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,0,local_338.ExtraNames.ArrayMax,
                               &local_338.ExtraNames.AllocatorInstance,0,
                               &local_338.ExtraNames.ArrayMax);
                    ConstructItems<FString,FString,int>
                              (local_338.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
                    pFVar21 = &local_338;
                  }
                }
                else {
                  bVar5 = true;
                  FPCGAttributePropertySelector::FPCGAttributePropertySelector
                            (&local_f8,this_02 + 1);
                  local_f8._padding_ = (longlong)&___7FPCGAttributePropertyOutputSelector__6B_;
                  pFVar21 = &local_f8;
                }
                FPCGAttributePropertySelector::FPCGAttributePropertySelector(&local_3b8,pFVar21);
                local_3b8._padding_ = (longlong)&___7FPCGAttributePropertyOutputSelector__6B_;
                if (bVar5) {
                  bVar5 = false;
                  DestructItems<FString,int>
                            ((FString *)local_f8.ExtraNames.AllocatorInstance.Data,
                             local_f8.ExtraNames.ArrayNum);
                  if (local_f8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_f8.ExtraNames.AllocatorInstance.Data);
                  }
                }
                if (bVar6) {
                  bVar6 = false;
                  DestructItems<FString,int>
                            ((FString *)local_338.ExtraNames.AllocatorInstance.Data,
                             local_338.ExtraNames.ArrayNum);
                  if (local_338.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_338.ExtraNames.AllocatorInstance.Data);
                  }
                }
                if ((char)local_440.DebugPtr[1].Seed == '\0') {
                  FPCGAttributePropertyInputSelector::CopyAndFixLast
                            ((FPCGAttributePropertyInputSelector *)this_02,
                             (FPCGAttributePropertyInputSelector *)local_138,
                             (((FPCGTaggedData *)FVar29.Data)->Data).Data.field0_0x0.DebugPtr);
                  pFVar21 = (FPCGAttributePropertySelector *)
                            FPCGAttributePropertyOutputSelector::CopyAndFixSource
                                      ((FPCGAttributePropertyOutputSelector *)&local_3b8,
                                       (FPCGAttributePropertyOutputSelector *)local_b8,
                                       (FPCGAttributePropertyInputSelector *)local_138,
                                       (((FPCGTaggedData *)FVar29.Data)->Data).Data.field0_0x0.
                                       DebugPtr);
                  FPCGAttributePropertySelector::operator=(&local_3b8,pFVar21);
                  DestructItems<FString,int>((FString *)local_b8._40_8_,local_88);
                  if ((FString *)local_b8._40_8_ != (FString *)0x0) {
                    FMemory::Free((void *)local_b8._40_8_);
                  }
                  pUVar22 = (UPCGMetadata *)(**(code **)(local_410->_padding_ + 800))();
                  FVar9 = PCGMetadataDomainID::Default;
                  local_190 = FPCGAttributePropertySelector::GetName(&local_3b8);
                  FStack_188 = FVar9;
                  local_190 = *(FName *)local_190;
                  FStack_188._0_8_ = FVar9._0_8_;
                  local_178.MetadataDomain.DebugName = FVar9.DebugName;
                  local_178.MetadataDomain.Flag = FStack_188.Flag;
                  local_178.MetadataDomain._1_3_ = FStack_188._1_3_;
                  local_178.MetadataDomain.CustomFlag = FStack_188.CustomFlag;
                  FStack_188 = FVar9;
                  local_178.Name = local_190;
                  bVar13 = UPCGMetadata::HasAttribute(pUVar22,&local_178);
                  if (!bVar13) {
                    DestructItems<FString,int>((FString *)local_138._40_8_,local_108);
                    if ((FScriptContainerElement *)local_138._40_8_ !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free((void *)local_138._40_8_);
                    }
                    goto LAB_149b0f43c;
                  }
                  DestructItems<FString,int>((FString *)local_138._40_8_,local_108);
                  FVar24.Data = (FScriptContainerElement *)local_138._40_8_;
                }
                else {
LAB_149b0f43c:
                  local_2c8 = (((FPCGTaggedData *)FVar29.Data)->Data).Data.field0_0x0;
                  local_2c0 = local_410;
                  FPCGAttributePropertySelector::FPCGAttributePropertySelector(&local_2b8,this_02);
                  iVar15 = local_3b8.ExtraNames.ArrayNum;
                  FVar24.Data = local_3b8.ExtraNames.AllocatorInstance.Data;
                  local_2b8._padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
                  local_278 = &___7FPCGAttributePropertySelector__6B_;
                  local_270 = local_3b8.Selection;
                  local_26c = local_3b8.DomainName;
                  local_264 = local_3b8.AttributeName;
                  local_25c = local_3b8.PropertyName;
                  local_250.Data = (FScriptContainerElement *)0x0;
                  local_248 = local_3b8.ExtraNames.ArrayNum;
                  if (local_3b8.ExtraNames.ArrayNum == 0) {
                    local_244 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,local_3b8.ExtraNames.ArrayNum,0,&local_250,
                               local_3b8.ExtraNames.ArrayNum,&local_244);
                    ConstructItems<FString,FString,int>
                              (local_250.Data,(FString *)FVar24.Data,iVar15);
                  }
                  local_240 = local_3b8.ExtraProperty;
                  local_278 = &___7FPCGAttributePropertyOutputSelector__6B_;
                  local_238 = 0;
                  local_230 = 0xff;
                  PCGMetadataHelpers::CopyAttribute((FPCGCopyAttributeParams *)&local_2c8.ObjectPtr)
                  ;
                  DestructItems<FString,int>((FString *)local_250.Data,local_248);
                  if (local_250.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_250.Data);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_2b8.ExtraNames.AllocatorInstance.Data,
                             local_2b8.ExtraNames.ArrayNum);
                  FVar24.Data = local_2b8.ExtraNames.AllocatorInstance.Data;
                }
                if (FVar24.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar24.Data);
                }
                DestructItems<FString,int>
                          ((FString *)local_3b8.ExtraNames.AllocatorInstance.Data,
                           local_3b8.ExtraNames.ArrayNum);
                if (local_3b8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3b8.ExtraNames.AllocatorInstance.Data);
                }
                TStack_2f0.UnvisitedBitMask =
                     TStack_2f0.UnvisitedBitMask & ~TStack_2f0._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f0);
              } while( true );
            }
            piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
            iVar15 = (param_1->OutputData).TaggedData.ArrayNum;
            if (iVar15 == *piVar1) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
            }
            (param_1->OutputData).TaggedData.ArrayNum = iVar15 + 1;
            pFVar25 = FPCGTaggedData::FPCGTaggedData
                                ((FPCGTaggedData *)
                                 ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                                 (longlong)iVar15 * 0x78),(FPCGTaggedData *)FVar29.Data);
            FPCGDataPtrWrapper::operator=(&pFVar25->Data,(UPCGData *)pUVar20);
            if (local_220._12_4_ != -1) {
              local_220.TypedValue.HashSize = 0;
              if (local_220.TypedValue.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_220.TypedValue.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)(local_228 + 8));
            }
            DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                      ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                       local_400.DomainInitializeParams.AllocatorInstance.Data,
                       local_400.DomainInitializeParams.ArrayNum);
            if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                local_400.DomainInitializeParams.AllocatorInstance.Data !=
                (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
              FMemory::Free(local_400.DomainInitializeParams.AllocatorInstance.Data);
            }
            pFVar25 = local_438;
            if (local_400.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_400.DomainMapping.AllocatorInstance.Data);
              pFVar25 = local_438;
            }
          }
        }
      }
    }
    else if ((UPCGData *)local_420.Handle != (UPCGData *)0x0) {
      UE::GC::MarkAsReachable(local_420.Handle);
      goto LAB_149b0ed0f;
    }
    uVar23 = (ulonglong)local_430;
    FVar29.Data = FVar29.Data + 0x78;
  } while( true );
}

// ExecutionLoopMode @ 149b11b90

EPCGElementExecutionLoopMode __thiscall
FPCGConvertToAttributeSetElement::ExecutionLoopMode
          (FPCGConvertToAttributeSetElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// ShouldComputeFullOutputDataCrc @ 149b2cdc0

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
FPCGConvertToAttributeSetElement::ShouldComputeFullOutputDataCrc
          (FPCGConvertToAttributeSetElement *this,FPCGContext *param_1)

{
  return true;
}

// SupportsBasePointDataInputs @ 149b2d1f0

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
FPCGConvertToAttributeSetElement::SupportsBasePointDataInputs
          (FPCGConvertToAttributeSetElement *this,FPCGContext *param_1)

{
  return true;
}

