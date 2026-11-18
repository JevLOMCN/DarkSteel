// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149c17c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGRandomChoiceElement::ExecuteInternal(FPCGRandomChoiceElement *this,FPCGContext *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  UPCGNode *this_00;
  float fVar3;
  float fVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UClass *pUVar13;
  UPCGSettings *pUVar14;
  TObjectPtr<UPCGSettings>_u_0 TVar15;
  FPCGTaggedData *pFVar16;
  UPCGData *pUVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  uint uVar20;
  FPCGDataCollection *pFVar21;
  uint uVar22;
  FObjectPtr_u_0 FVar23;
  code *pcVar24;
  FPCGTaggedData *pFVar25;
  longlong lVar26;
  ulonglong uVar27;
  bool bVar28;
  float fVar29;
  uint local_348 [2];
  undefined1 local_340 [24];
  int local_328 [2];
  ForAnyElementType local_320;
  undefined8 local_318;
  uint local_310;
  int local_30c;
  TObjectPtr<UPCGMetadata>_u_0 local_308;
  TObjectPtr<UPCGSettings>_u_0 local_300;
  FPCGContext *local_2f8;
  code *local_2f0;
  ulonglong local_2e8;
  TObjectPtr<UPCGSettings>_u_0 local_2e0;
  FObjectPtr_u_0 local_2d8;
  FObjectPtr_u_0 local_2d0;
  FPCGDataCollection *local_2c8;
  longlong local_2c0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_2b8;
  <lambda_1> local_2a8;
  <lambda_1> local_2a0;
  <lambda_1> local_298;
  <lambda_1> local_290;
  <lambda_1> local_288;
  <lambda_1> local_280;
  <lambda_1> local_278;
  <lambda_1> local_270;
  <lambda_1> local_268;
  <lambda_1> local_260;
  <lambda_1> local_258;
  <lambda_1> local_250;
  <lambda_1> local_248;
  FPCGTaggedData *local_240;
  <lambda_1> local_238;
  <lambda_1> local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FScriptContainerElement *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FPCGAttributePropertySelector local_1a8;
  undefined8 local_168;
  longlong lStack_160;
  undefined8 local_158;
  longlong lStack_150;
  FScriptContainerElement *local_148;
  undefined8 uStack_140;
  FString local_138;
  FString local_128;
  FText local_118;
  FText local_108;
  FScriptContainerElement *local_f8;
  undefined8 uStack_f0;
  int *local_e8;
  int local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  FTextFormat local_68 [4];
  
  uVar8 = 0;
  local_340._8_4_ = 0;
  bVar28 = -1 < CpuChannel->Enabled;
  local_2f8 = param_1;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId114,"FPCGRandomChoiceElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGRandomChoice.cpp"
               ,0x72);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId114);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGRandomChoice.cpp"
                         ,0x74,L""), bVar6)) {
    pcVar24 = (code *)swi(3);
    uVar7 = (*pcVar24)();
    return (bool)uVar7;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar13 = UPCGRandomChoiceSettings::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar13);
    if (bVar6) {
      local_300 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar15 = local_300;
    }
    else {
      local_300.DebugPtr = (UPCGSettings *)0x0;
      TVar15.DebugPtr = local_300.DebugPtr;
    }
    goto LAB_149c17d8c;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar14 = UPCGNode::GetSettings(this_00), pUVar14 == (UPCGSettings *)0x0)) {
    pFVar25 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGRandomChoiceSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,(<lambda_1>)local_308._4_1_);
    if (pFVar25 != (FPCGTaggedData *)0x0) {
      local_2e0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar25->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_2e0.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c17d85;
        UE::GC::MarkAsReachable((UObject *)local_2e0.DebugPtr);
      }
      if (local_2e0.DebugPtr != (UPCGSettings *)0x0) {
        pUVar13 = UPCGRandomChoiceSettings::StaticClass();
        bVar6 = FObjectPtr::IsA(&local_2e0.ObjectPtr,pUVar13);
        TVar15 = local_2e0;
        local_300 = local_2e0;
        if (bVar6) goto LAB_149c17d8c;
      }
    }
  }
  else {
    pUVar14 = UPCGNode::GetSettings(this_00);
    TVar15.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar14);
    if (TVar15.DebugPtr != (UPCGSettings *)0x0) {
      local_300.DebugPtr = TVar15.DebugPtr;
      pUVar13 = UPCGRandomChoiceSettings::StaticClass();
      iVar9 = (int)pUVar13->_padding_;
      if ((iVar9 <= *(int *)((TVar15.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar15.DebugPtr)->_padding_ + 0x30) + (longlong)iVar9 * 8)
          == &pUVar13->_padding_)) goto LAB_149c17d8c;
    }
  }
LAB_149c17d85:
  local_300.DebugPtr = (UPCGSettings *)0x0;
  TVar15.DebugPtr = local_300.DebugPtr;
LAB_149c17d8c:
  if ((TVar15.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGRandomChoice.cpp"
                         ,0x77,L""), bVar6)) {
    pcVar24 = (code *)swi(3);
    uVar7 = (*pcVar24)();
    return (bool)uVar7;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_2b8,&PCGPinConstants::DefaultInputLabel);
  fVar4 = __real_bf000000;
  fVar3 = __real_3f800000;
  pFVar21 = &param_1->OutputData;
  local_308._0_4_ = 0;
  local_2c8 = pFVar21;
  if (0 < local_2b8.ArrayNum) {
    local_2c0 = 0;
    do {
      lVar26 = local_2c0;
      uVar20 = 0;
      if ((int)local_308._0_4_ < local_2b8.ArrayNum) {
        uVar20 = (uint)~local_308._0_4_ >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar24 = (code *)swi(3);
        uVar7 = (*pcVar24)();
        return (bool)uVar7;
      }
      pFVar25 = (FPCGTaggedData *)(local_2b8.AllocatorInstance.Data + lVar26 * 0x78);
      local_240 = pFVar25;
      local_348[0] = FPCGContext::GetSeed(param_1);
      local_2d8.Handle = (UObject *)(pFVar25->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c17ea8:
        if ((UPCGData *)local_2d8.Handle == (UPCGData *)0x0) goto LAB_149c17f31;
        pUVar13 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_2d8,pUVar13);
        FVar23 = local_2d8;
        if (!bVar6) goto LAB_149c17f31;
      }
      else {
        if ((UPCGData *)local_2d8.Handle != (UPCGData *)0x0) {
          UE::GC::MarkAsReachable(local_2d8.Handle);
          goto LAB_149c17ea8;
        }
LAB_149c17f31:
        FVar23.Handle = (UObject *)0x0;
      }
      if ((UPCGData *)FVar23.Handle == (UPCGData *)0x0) {
        local_2d0.Handle = (UObject *)(pFVar25->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c18000:
          if ((UPCGData *)local_2d0.Handle != (UPCGData *)0x0) {
            pUVar13 = Z_Construct_UClass_UPCGParamData_NoRegister();
            bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_2d0,pUVar13);
            if ((bVar6) && ((UPCGData *)local_2d0.Handle != (UPCGData *)0x0)) {
              if (*(UPCGMetadata **)&local_2d0.Handle[1].field_0x10 == (UPCGMetadata *)0x0) {
                local_2e8 = 0;
              }
              else {
                local_2e8 = UPCGMetadata::GetLocalItemCount
                                      (*(UPCGMetadata **)&local_2d0.Handle[1].field_0x10);
              }
              pcVar24 = PCGRandomChoice::ChooseParamData;
              local_2f0 = PCGRandomChoice::ChooseParamData;
              uVar27 = local_2e8;
              goto LAB_149c18058;
            }
          }
        }
        else if ((UPCGData *)local_2d0.Handle != (UPCGData *)0x0) {
          UE::GC::MarkAsReachable(local_2d0.Handle);
          goto LAB_149c18000;
        }
        if (5 < (byte)LogPCG._0_1_) {
          pFVar18 = FText::AsLocalizable_Advanced_LocText
                              (&local_108,L"PCGRandomChoiceElement",L"InvalidData",
                               L"Input {0} is not a supported data");
          pFVar19 = FTextFormat::FTextFormat(local_68,pFVar18,Default);
          pFVar18 = FText::Format<int>(&local_118,pFVar19,local_308._0_4_);
          FText::ToString(pFVar18);
          FPCGContext::GetTaskName(param_1,&local_128);
          FPCGContext::GetExecutionSourceName(param_1,&local_138);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          uVar8 = uVar8 & 0xfffffffc;
          local_340._8_4_ = uVar8;
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          if (local_118.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
          }
          pFVar21 = local_2c8;
          if (local_108.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
            pFVar21 = local_2c8;
          }
        }
      }
      else {
        (**(code **)(*(longlong *)FVar23.Handle + 0x530))(FVar23.Handle);
        uVar8 = (**(code **)(*(longlong *)FVar23.Handle + 0x488))(FVar23.Handle);
        pcVar24 = PCGRandomChoice::ChoosePointData;
        uVar27 = (ulonglong)uVar8;
        local_2f0 = PCGRandomChoice::ChoosePointData;
        local_2e8 = uVar27;
        if (*(char *)((longlong)&TVar15.DebugPtr[1]._padding_ + 5) == '\0') {
          if (0 < (int)uVar8) {
            if ((local_d8 < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < NumElements)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                   ,0x8b,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar24 = (code *)swi(3);
              uVar7 = (*pcVar24)();
              return (bool)uVar7;
            }
            local_348[0] = PCGHelpers::ComputeSeed(local_348[0],*local_e8);
            goto LAB_149c18058;
          }
        }
        else {
LAB_149c18058:
          if ((0 < (int)uVar27) && (*(char *)((longlong)&TVar15.DebugPtr[1]._padding_ + 5) != '\0'))
          {
            FPCGAttributePropertyInputSelector::CopyAndFixLast
                      ((FPCGAttributePropertyInputSelector *)&TVar15.DebugPtr[1]._padding_,
                       (FPCGAttributePropertyInputSelector *)&local_1a8,
                       (pFVar25->Data).Data.field0_0x0.DebugPtr);
            PCGAttributeAccessorHelpers::CreateConstAccessor
                      ((UPCGData *)local_340,
                       (FPCGAttributePropertySelector *)(pFVar25->Data).Data.field0_0x0.DebugPtr,
                       SUB81(&local_1a8,0));
            PCGAttributeAccessorHelpers::CreateConstKeys
                      ((UPCGData *)(local_340 + 0x10),
                       (FPCGAttributePropertySelector *)(pFVar25->Data).Data.field0_0x0.DebugPtr);
            if (((IPCGAttributeAccessor *)local_340._0_8_ == (IPCGAttributeAccessor *)0x0) ||
               ((IPCGAttributeAccessorKeys *)local_340._16_8_ == (IPCGAttributeAccessorKeys *)0x0))
            {
              PCGLog::Metadata::LogFailToCreateAccessorError(&local_1a8,param_1);
              if ((IPCGAttributeAccessorKeys *)local_340._16_8_ != (IPCGAttributeAccessorKeys *)0x0)
              {
                (**(code **)*(longlong *)local_340._16_8_)(local_340._16_8_,1);
              }
              if ((IPCGAttributeAccessor *)local_340._0_8_ != (IPCGAttributeAccessor *)0x0) {
                (**(code **)*(longlong *)local_340._0_8_)(local_340._0_8_,1);
              }
              DestructItems<FString,int>
                        ((FString *)local_1a8.ExtraNames.AllocatorInstance.Data,
                         local_1a8.ExtraNames.ArrayNum);
              uVar8 = local_340._8_4_;
              if (local_1a8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1a8.ExtraNames.AllocatorInstance.Data);
                uVar8 = local_340._8_4_;
              }
              goto LAB_149c18fef;
            }
            switch(*(short *)(local_340._0_8_ + 10)) {
            case 0:
              local_2a0 = (<lambda_1>)local_348;
              iVar9 = -1;
              if ((char)TVar15.DebugPtr[1].Seed != '\0') {
                iVar9 = 1;
              }
              PCGMetadataElementCommon::
              ApplyOnAccessorRange<float,_PCGMetadataElementCommon::ApplyOnAccessor<float,__FPCGRandomChoiceElement::ExecuteInternal_::__l51::<lambda_1>::operator()<float>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)local_340._16_8_,
                         (IPCGAttributeAccessor *)local_340._0_8_,&local_2a0,StrictType,0x100,iVar9)
              ;
              break;
            case 1:
              local_268 = (<lambda_1>)local_348;
              iVar9 = -1;
              if ((char)TVar15.DebugPtr[1].Seed != '\0') {
                iVar9 = 1;
              }
              PCGMetadataElementCommon::
              ApplyOnAccessorRange<double,_PCGMetadataElementCommon::ApplyOnAccessor<double,__FPCGRandomChoiceElement::ExecuteInternal_::__l51::<lambda_1>::operator()<double>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)local_340._16_8_,
                         (IPCGAttributeAccessor *)local_340._0_8_,&local_268,StrictType,0x100,iVar9)
              ;
              break;
            case 2:
              local_238 = (<lambda_1>)local_348;
              iVar9 = -1;
              if ((char)TVar15.DebugPtr[1].Seed != '\0') {
                iVar9 = 1;
              }
              PCGMetadataElementCommon::
              ApplyOnAccessorRange<int,_PCGMetadataElementCommon::ApplyOnAccessor<int,__FPCGRandomChoiceElement::ExecuteInternal_::__l51::<lambda_1>::operator()<int>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)local_340._16_8_,
                         (IPCGAttributeAccessor *)local_340._0_8_,&local_238,StrictType,0x100,iVar9)
              ;
              break;
            case 3:
              local_2a8 = (<lambda_1>)local_348;
              iVar9 = -1;
              if ((char)TVar15.DebugPtr[1].Seed != '\0') {
                iVar9 = 1;
              }
              PCGMetadataElementCommon::
              ApplyOnAccessorRange<__int64,_PCGMetadataElementCommon::ApplyOnAccessor<__int64,__FPCGRandomChoiceElement::ExecuteInternal_::__l51::<lambda_1>::operator()<__int64>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)local_340._16_8_,
                         (IPCGAttributeAccessor *)local_340._0_8_,&local_2a8,StrictType,0x100,iVar9)
              ;
              break;
            case 4:
              local_298 = (<lambda_1>)local_348;
              iVar9 = -1;
              if ((char)TVar15.DebugPtr[1].Seed != '\0') {
                iVar9 = 1;
              }
              local_a0 = 0;
              uStack_98 = 0;
              PCGMetadataElementCommon::
              ApplyOnAccessorRange<UE::Math::TVector2<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TVector2<double>,__FPCGRandomChoiceElement::ExecuteInternal_::__l51::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)local_340._16_8_,
                         (IPCGAttributeAccessor *)local_340._0_8_,&local_298,StrictType,0x100,iVar9)
              ;
              break;
            case 5:
              local_c0 = 0;
              local_290 = (<lambda_1>)local_348;
              iVar9 = -1;
              if ((char)TVar15.DebugPtr[1].Seed != '\0') {
                iVar9 = 1;
              }
              local_d0 = 0;
              uStack_c8 = 0;
              PCGMetadataElementCommon::
              ApplyOnAccessorRange<UE::Math::TVector<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TVector<double>,__FPCGRandomChoiceElement::ExecuteInternal_::__l51::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)local_340._16_8_,
                         (IPCGAttributeAccessor *)local_340._0_8_,&local_290,StrictType,0x100,iVar9)
              ;
              break;
            case 6:
              local_288 = (<lambda_1>)local_348;
              iVar9 = -1;
              if ((char)TVar15.DebugPtr[1].Seed != '\0') {
                iVar9 = 1;
              }
              PCGMetadataElementCommon::
              ApplyOnAccessorRange<UE::Math::TVector4<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TVector4<double>,__FPCGRandomChoiceElement::ExecuteInternal_::__l51::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)local_340._16_8_,
                         (IPCGAttributeAccessor *)local_340._0_8_,&local_288,StrictType,0x100,iVar9)
              ;
              break;
            case 7:
              local_280 = (<lambda_1>)local_348;
              local_88 = 0;
              uStack_80 = 0;
              iVar9 = -1;
              if ((char)TVar15.DebugPtr[1].Seed != '\0') {
                iVar9 = 1;
              }
              local_78 = 0;
              uStack_70 = 0;
              PCGMetadataElementCommon::
              ApplyOnAccessorRange<UE::Math::TQuat<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TQuat<double>,__FPCGRandomChoiceElement::ExecuteInternal_::__l51::<lambda_1>::operator()<UE::Math::TQuat<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)local_340._16_8_,
                         (IPCGAttributeAccessor *)local_340._0_8_,&local_280,StrictType,0x100,iVar9)
              ;
              break;
            case 8:
              local_278 = (<lambda_1>)local_348;
              iVar9 = -1;
              if ((char)TVar15.DebugPtr[1].Seed != '\0') {
                iVar9 = 1;
              }
              PCGMetadataElementCommon::
              ApplyOnAccessorRange<UE::Math::TTransform<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TTransform<double>,__FPCGRandomChoiceElement::ExecuteInternal_::__l51::<lambda_1>::operator()<UE::Math::TTransform<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)local_340._16_8_,
                         (IPCGAttributeAccessor *)local_340._0_8_,&local_278,StrictType,0x100,iVar9)
              ;
              break;
            case 9:
              local_270 = (<lambda_1>)local_348;
              iVar9 = -1;
              if ((char)TVar15.DebugPtr[1].Seed != '\0') {
                iVar9 = 1;
              }
              PCGMetadataElementCommon::
              ApplyOnAccessorRange<FString,_PCGMetadataElementCommon::ApplyOnAccessor<FString,__FPCGRandomChoiceElement::ExecuteInternal_::__l51::<lambda_1>::operator()<FString>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)local_340._16_8_,
                         (IPCGAttributeAccessor *)local_340._0_8_,&local_270,StrictType,0x100,iVar9)
              ;
              break;
            case 10:
              local_230 = (<lambda_1>)local_348;
              iVar9 = -1;
              if ((char)TVar15.DebugPtr[1].Seed != '\0') {
                iVar9 = 1;
              }
              PCGMetadataElementCommon::
              ApplyOnAccessorRange<bool,_PCGMetadataElementCommon::ApplyOnAccessor<bool,__FPCGRandomChoiceElement::ExecuteInternal_::__l51::<lambda_1>::operator()<bool>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)local_340._16_8_,
                         (IPCGAttributeAccessor *)local_340._0_8_,&local_230,StrictType,0x100,iVar9)
              ;
              break;
            case 0xb:
              local_a8 = 0;
              local_260 = (<lambda_1>)local_348;
              iVar9 = -1;
              if ((char)TVar15.DebugPtr[1].Seed != '\0') {
                iVar9 = 1;
              }
              local_b8 = 0;
              uStack_b0 = 0;
              PCGMetadataElementCommon::
              ApplyOnAccessorRange<UE::Math::TRotator<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TRotator<double>,__FPCGRandomChoiceElement::ExecuteInternal_::__l51::<lambda_1>::operator()<UE::Math::TRotator<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)local_340._16_8_,
                         (IPCGAttributeAccessor *)local_340._0_8_,&local_260,StrictType,0x100,iVar9)
              ;
              break;
            case 0xc:
              local_258 = (<lambda_1>)local_348;
              iVar9 = -1;
              if ((char)TVar15.DebugPtr[1].Seed != '\0') {
                iVar9 = 1;
              }
              PCGMetadataElementCommon::
              ApplyOnAccessorRange<FName,_PCGMetadataElementCommon::ApplyOnAccessor<FName,__FPCGRandomChoiceElement::ExecuteInternal_::__l51::<lambda_1>::operator()<FName>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)local_340._16_8_,
                         (IPCGAttributeAccessor *)local_340._0_8_,&local_258,StrictType,0x100,iVar9)
              ;
              break;
            case 0xd:
              local_228 = 0;
              local_220 = 0;
              local_218 = 0;
              local_210 = 0;
              local_250 = (<lambda_1>)local_348;
              iVar9 = -1;
              if ((char)TVar15.DebugPtr[1].Seed != '\0') {
                iVar9 = 1;
              }
              PCGMetadataElementCommon::
              ApplyOnAccessorRange<FSoftObjectPath,_PCGMetadataElementCommon::ApplyOnAccessor<FSoftObjectPath,__FPCGRandomChoiceElement::ExecuteInternal_::__l51::<lambda_1>::operator()<FSoftObjectPath>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)local_340._16_8_,
                         (IPCGAttributeAccessor *)local_340._0_8_,&local_250,StrictType,0x100,iVar9)
              ;
              break;
            case 0xe:
              local_208 = 0;
              local_200 = 0;
              local_1f8 = 0;
              local_1f0 = 0;
              local_248 = (<lambda_1>)local_348;
              iVar9 = -1;
              if ((char)TVar15.DebugPtr[1].Seed != '\0') {
                iVar9 = 1;
              }
              PCGMetadataElementCommon::
              ApplyOnAccessorRange<FSoftClassPath,_PCGMetadataElementCommon::ApplyOnAccessor<FSoftClassPath,__FPCGRandomChoiceElement::ExecuteInternal_::__l51::<lambda_1>::operator()<FSoftClassPath>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)local_340._16_8_,
                         (IPCGAttributeAccessor *)local_340._0_8_,&local_248,StrictType,0x100,iVar9)
              ;
            }
            if ((IPCGAttributeAccessorKeys *)local_340._16_8_ != (IPCGAttributeAccessorKeys *)0x0) {
              (**(code **)*(longlong *)local_340._16_8_)(local_340._16_8_,1);
            }
            if ((IPCGAttributeAccessor *)local_340._0_8_ != (IPCGAttributeAccessor *)0x0) {
              (**(code **)*(longlong *)local_340._0_8_)(local_340._0_8_,1);
            }
            DestructItems<FString,int>
                      ((FString *)local_1a8.ExtraNames.AllocatorInstance.Data,
                       local_1a8.ExtraNames.ArrayNum);
            if (local_1a8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.ExtraNames.AllocatorInstance.Data);
            }
          }
        }
        iVar9 = (int)uVar27;
        if ((pcVar24 == (code *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ChooseFunc",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGRandomChoice.cpp"
                               ,0xb4,L""), bVar6)) {
          pcVar24 = (code *)swi(3);
          uVar7 = (*pcVar24)();
          return (bool)uVar7;
        }
        if ((char)TVar15.DebugPtr[1]._padding_ == '\0') {
          fVar29 = *(float *)&TVar15.DebugPtr[1]._padding_;
          if (fVar3 <= *(float *)&TVar15.DebugPtr[1]._padding_) {
            fVar29 = fVar3;
          }
          if (fVar29 <= 0.0) {
            fVar29 = 0.0;
          }
          iVar11 = -((int)ROUND(fVar4 - (fVar29 + fVar29) * (float)iVar9) >> 1);
        }
        else {
          iVar11 = *(int *)((longlong)&TVar15.DebugPtr[1]._padding_ + 4);
          iVar12 = iVar9;
          if (iVar11 < iVar9) {
            iVar12 = iVar11;
          }
          iVar11 = 0;
          if (0 < iVar12) {
            iVar11 = iVar12;
          }
        }
        local_30c = iVar11;
        if (iVar11 == 0) {
          if (*(char *)((longlong)&TVar15.DebugPtr[1]._padding_ + 4) != '\0') {
            pFVar16 = (FPCGTaggedData *)(pFVar21->TaggedData).AllocatorInstance.Data;
            if (((pFVar16 <= pFVar25) && (pFVar25 < pFVar16 + (pFVar21->TaggedData).ArrayMax)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar24 = (code *)swi(3);
              uVar7 = (*pcVar24)();
              return (bool)uVar7;
            }
            iVar9 = (pFVar21->TaggedData).ArrayNum;
            piVar1 = &(pFVar21->TaggedData).ArrayMax;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x878,(ForAnyElementType *)pFVar21,piVar1);
            }
            (pFVar21->TaggedData).ArrayNum = iVar9 + 1;
            pFVar16 = FPCGTaggedData::FPCGTaggedData
                                ((FPCGTaggedData *)
                                 ((pFVar21->TaggedData).AllocatorInstance.Data +
                                 (longlong)iVar9 * 0x78),pFVar25);
            pFVar16->Pin = PCGRandomChoiceConstants::DiscardedEntriesLabel;
          }
          pFVar16 = (FPCGTaggedData *)(pFVar21->TaggedData).AllocatorInstance.Data;
          if (((pFVar16 <= pFVar25) && (pFVar25 < pFVar16 + (pFVar21->TaggedData).ArrayMax)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar24 = (code *)swi(3);
            uVar7 = (*pcVar24)();
            return (bool)uVar7;
          }
          iVar9 = (pFVar21->TaggedData).ArrayNum;
          piVar1 = &(pFVar21->TaggedData).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,(ForAnyElementType *)pFVar21,piVar1);
          }
          (pFVar21->TaggedData).ArrayNum = iVar9 + 1;
          pFVar16 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((pFVar21->TaggedData).AllocatorInstance.Data +
                               (longlong)iVar9 * 0x78),pFVar25);
          param_1 = local_2f8;
          local_1e8 = 0;
          uStack_1e0 = 0;
          lStack_160 = (ulonglong)uStack_1dc << 0x20;
          local_168 = 0;
          pUVar17 = (UPCGData *)
                    (*local_2f0)((pFVar25->Data).Data.field0_0x0.DebugPtr,&local_168,local_2f8);
          FPCGDataPtrWrapper::operator=(&pFVar16->Data,pUVar17);
          pFVar16->Pin = PCGRandomChoiceConstants::ChosenEntriesLabel;
          uVar8 = local_340._8_4_;
        }
        else if (iVar11 == iVar9) {
          pFVar16 = (FPCGTaggedData *)(pFVar21->TaggedData).AllocatorInstance.Data;
          if (((pFVar16 <= pFVar25) && (pFVar25 < pFVar16 + (pFVar21->TaggedData).ArrayMax)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar24 = (code *)swi(3);
            uVar7 = (*pcVar24)();
            return (bool)uVar7;
          }
          iVar9 = (pFVar21->TaggedData).ArrayNum;
          if (iVar9 == (pFVar21->TaggedData).ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,(ForAnyElementType *)pFVar21,&(pFVar21->TaggedData).ArrayMax);
          }
          (pFVar21->TaggedData).ArrayNum = iVar9 + 1;
          pFVar16 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((pFVar21->TaggedData).AllocatorInstance.Data +
                               (longlong)iVar9 * 0x78),pFVar25);
          pFVar16->Pin = PCGRandomChoiceConstants::ChosenEntriesLabel;
          param_1 = local_2f8;
          uVar8 = local_340._8_4_;
          if (*(char *)((longlong)&TVar15.DebugPtr[1]._padding_ + 4) != '\0') {
            pFVar16 = (FPCGTaggedData *)(pFVar21->TaggedData).AllocatorInstance.Data;
            if (((pFVar16 <= pFVar25) && (pFVar25 < pFVar16 + (pFVar21->TaggedData).ArrayMax)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar24 = (code *)swi(3);
              uVar7 = (*pcVar24)();
              return (bool)uVar7;
            }
            iVar9 = (pFVar21->TaggedData).ArrayNum;
            if (iVar9 == (pFVar21->TaggedData).ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x878,(ForAnyElementType *)pFVar21,&(pFVar21->TaggedData).ArrayMax)
              ;
            }
            (pFVar21->TaggedData).ArrayNum = iVar9 + 1;
            pFVar16 = FPCGTaggedData::FPCGTaggedData
                                ((FPCGTaggedData *)
                                 ((pFVar21->TaggedData).AllocatorInstance.Data +
                                 (longlong)iVar9 * 0x78),pFVar25);
            param_1 = local_2f8;
            local_1d8 = 0;
            uStack_1d0 = 0;
            lStack_150 = (ulonglong)uStack_1cc << 0x20;
            local_158 = 0;
            pUVar17 = (UPCGData *)
                      (*local_2f0)((pFVar25->Data).Data.field0_0x0.DebugPtr,&local_158,local_2f8);
            FPCGDataPtrWrapper::operator=(&pFVar16->Data,pUVar17);
            pFVar16->Pin = PCGRandomChoiceConstants::DiscardedEntriesLabel;
            uVar8 = local_340._8_4_;
          }
        }
        else {
          iVar12 = 0;
          local_310 = local_348[0];
          local_320.Data = (FScriptContainerElement *)0x0;
          local_318 = 0;
          if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar27 & 0xffffffff);
          }
          local_328[0] = 0;
          if (0 < iVar9) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar9,&local_320,0,(int *)((longlong)&local_318 + 4));
            do {
              if (((local_320.Data <= (FScriptContainerElement *)local_328) &&
                  ((FScriptContainerElement *)local_328 <
                   local_320.Data + (longlong)local_318._4_4_ * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar24 = (code *)swi(3);
                uVar7 = (*pcVar24)();
                return (bool)uVar7;
              }
              iVar10 = (int)local_318;
              if ((int)local_318 == local_318._4_4_) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_320,(int *)((longlong)&local_318 + 4));
              }
              iVar12 = iVar10 + 1;
              local_318 = CONCAT44(local_318._4_4_,iVar12);
              *(int *)(local_320.Data + (longlong)iVar10 * 4) = local_328[0];
              local_328[0] = local_328[0] + 1;
            } while (local_328[0] < iVar9);
          }
          uVar8 = 0;
          if (0 < iVar11) {
            lVar26 = 0;
            uVar20 = local_310;
            iVar9 = (int)local_2e8;
            do {
              if (iVar9 < 1) {
                iVar11 = 0;
              }
              else {
                uVar20 = uVar20 * 0xbb38435 + 0x3619636b;
                iVar11 = (int)(((float)(uVar20 >> 9 | 0x3f800000) - fVar3) * (float)iVar9);
                local_310 = uVar20;
              }
              uVar22 = iVar11 + uVar8;
              if (uVar22 != uVar8) {
                uVar20 = 0;
                if ((int)uVar22 < iVar12) {
                  uVar20 = ~uVar22 >> 0x1f;
                }
                if (uVar20 == 0) {
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar6) {
                    pcVar24 = (code *)swi(3);
                    uVar7 = (*pcVar24)();
                    return (bool)uVar7;
                  }
                  iVar12 = (int)local_318;
                }
                FVar5.Data = local_320.Data;
                if ((iVar12 <= (int)uVar8) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar24 = (code *)swi(3);
                  uVar7 = (*pcVar24)();
                  return (bool)uVar7;
                }
                uVar2 = *(undefined4 *)(local_320.Data + lVar26);
                *(undefined4 *)(local_320.Data + lVar26) =
                     *(undefined4 *)(FVar5.Data + (longlong)(int)uVar22 * 4);
                *(undefined4 *)(FVar5.Data + (longlong)(int)uVar22 * 4) = uVar2;
                uVar20 = local_310;
                iVar12 = (int)local_318;
              }
              uVar8 = uVar8 + 1;
              iVar9 = iVar9 + -1;
              lVar26 = lVar26 + 4;
            } while ((int)uVar8 < local_30c);
            iVar9 = (int)local_2e8;
            pFVar21 = local_2c8;
            pFVar25 = local_240;
            iVar11 = local_30c;
          }
          pFVar16 = (FPCGTaggedData *)(pFVar21->TaggedData).AllocatorInstance.Data;
          if (((pFVar16 <= pFVar25) && (pFVar25 < pFVar16 + (pFVar21->TaggedData).ArrayMax)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar24 = (code *)swi(3);
            uVar7 = (*pcVar24)();
            return (bool)uVar7;
          }
          iVar12 = (pFVar21->TaggedData).ArrayNum;
          piVar1 = &(pFVar21->TaggedData).ArrayMax;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)pFVar21,piVar1);
          }
          (pFVar21->TaggedData).ArrayNum = iVar12 + 1;
          pFVar16 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((pFVar21->TaggedData).AllocatorInstance.Data +
                               (longlong)iVar12 * 0x78),pFVar25);
          local_1c8 = local_320.Data;
          iStack_1c0 = iVar11;
          if ((iVar11 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar24 = (code *)swi(3);
            uVar7 = (*pcVar24)();
            return (bool)uVar7;
          }
          uStack_f0 = CONCAT44(uStack_1bc,iStack_1c0);
          local_f8 = local_1c8;
          pUVar17 = (UPCGData *)
                    (*local_2f0)((pFVar25->Data).Data.field0_0x0.DebugPtr,&local_f8,local_2f8);
          FPCGDataPtrWrapper::operator=(&pFVar16->Data,pUVar17);
          TVar15 = local_300;
          pFVar16->Pin = PCGRandomChoiceConstants::ChosenEntriesLabel;
          param_1 = local_2f8;
          if (*(char *)((longlong)&local_300.DebugPtr[1]._padding_ + 4) != '\0') {
            pFVar16 = (FPCGTaggedData *)(pFVar21->TaggedData).AllocatorInstance.Data;
            if (((pFVar16 <= pFVar25) && (pFVar25 < pFVar16 + (pFVar21->TaggedData).ArrayMax)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar24 = (code *)swi(3);
              uVar7 = (*pcVar24)();
              return (bool)uVar7;
            }
            iVar12 = (pFVar21->TaggedData).ArrayNum;
            if (iVar12 == (pFVar21->TaggedData).ArrayMax) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,(ForAnyElementType *)pFVar21,&(pFVar21->TaggedData).ArrayMax
                                 );
            }
            (pFVar21->TaggedData).ArrayNum = iVar12 + 1;
            pFVar16 = FPCGTaggedData::FPCGTaggedData
                                ((FPCGTaggedData *)
                                 ((pFVar21->TaggedData).AllocatorInstance.Data +
                                 (longlong)iVar12 * 0x78),pFVar25);
            iStack_1b0 = iVar9 - iVar11;
            local_1b8 = local_320.Data + (longlong)iVar11 * 4;
            if ((iStack_1b0 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), bVar6)) {
              pcVar24 = (code *)swi(3);
              uVar7 = (*pcVar24)();
              return (bool)uVar7;
            }
            param_1 = local_2f8;
            uStack_140 = CONCAT44(uStack_1ac,iStack_1b0);
            local_148 = local_1b8;
            pUVar17 = (UPCGData *)
                      (*local_2f0)((pFVar25->Data).Data.field0_0x0.DebugPtr,&local_148,local_2f8);
            FPCGDataPtrWrapper::operator=(&pFVar16->Data,pUVar17);
            pFVar16->Pin = PCGRandomChoiceConstants::DiscardedEntriesLabel;
          }
          uVar8 = local_340._8_4_;
          if (local_320.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_320.Data);
            uVar8 = local_340._8_4_;
          }
        }
      }
LAB_149c18fef:
      local_308._0_4_ = local_308._0_4_ + 1;
      local_2c0 = local_2c0 + 1;
    } while ((int)local_308._0_4_ < local_2b8.ArrayNum);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_2b8.AllocatorInstance.Data,local_2b8.ArrayNum);
  if ((FPCGTaggedData *)local_2b8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149c228d0

EPCGElementExecutionLoopMode __thiscall
FPCGRandomChoiceElement::ExecutionLoopMode(FPCGRandomChoiceElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149c35840

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
FPCGRandomChoiceElement::SupportsBasePointDataInputs
          (FPCGRandomChoiceElement *this,FPCGContext *param_1)

{
  return true;
}

