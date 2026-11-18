// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149b6d7a0

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGAddAttributeElement::ExecuteInternal(FPCGAddAttributeElement *this,FPCGContext *param_1)

{
  int *piVar1;
  byte *pbVar2;
  UPCGNode *this_00;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  UPCGSettings *pUVar10;
  TObjectPtr<UPCGSettings>_u_0 TVar11;
  longlong lVar12;
  UPCGData *pUVar13;
  UPCGMetadata *this_01;
  FPCGMetadataDomain *pFVar14;
  FPCGMetadataAttributeBase *pFVar15;
  long64 lVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  ulonglong uVar19;
  FObjectPtr_u_0 FVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  uint uVar23;
  FPCGTaggedData *pFVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  FObjectPtr_u_0 *pFVar27;
  FPCGAttributePropertySelector *pFVar28;
  uint uVar29;
  uint uVar30;
  ForElementType<unsigned_int> FVar31;
  longlong lVar32;
  FPCGTaggedData *pFVar33;
  bool bVar34;
  undefined1 auStackY_2f8 [32];
  <lambda_1> local_2a7 [7];
  TObjectPtr<UPCGSettings>_u_0 local_2a0;
  FObjectPtr_u_0 *local_298;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_290;
  FPCGAttributePropertySelector *local_280;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_278;
  TObjectPtr<UPCGSettings>_u_0 local_268;
  FObjectPtr_u_0 local_260;
  UPCGData *local_258;
  int local_250;
  uint uStack_24c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_248;
  undefined4 local_240;
  undefined8 uStack_23c;
  undefined4 uStack_234;
  FName local_230;
  FPCGMetadataDomain *local_228;
  FName FStack_220;
  longlong *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  int local_1f0;
  TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&> local_1ec;
  FPCGMetadataDomainID *local_1d8;
  FPCGMetadataDomainID *pFStack_1d0;
  undefined1 local_1c8 [56];
  TArray<FString,TSizedDefaultAllocator<32>_> local_190;
  undefined1 local_180;
  undefined1 local_178 [40];
  TArray<FString,TSizedDefaultAllocator<32>_> local_150;
  undefined1 local_140;
  FPCGContext *local_138;
  ushort local_130;
  <lambda_1> local_128;
  FString local_118;
  FString local_108;
  FText local_f8;
  FText local_e8;
  FPCGMetadataDomainID *local_d8;
  FPCGMetadataDomainID *pFStack_d0;
  FText local_c8;
  FTextFormat local_b8;
  FObjectPtr_u_0 local_a8;
  UPCGData *local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  int local_50;
  FPCGContext *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  bVar34 = -1 < CpuChannel->Enabled;
  local_298 = (FObjectPtr_u_0 *)param_1;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId388,"FPCGAddAttributeElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateAttribute.cpp"
               ,0x184);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId388);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateAttribute.cpp"
                         ,0x186,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar10 = UPCGNode::GetSettings(this_00), pUVar10 == (UPCGSettings *)0x0)) {
      pFVar33 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAddAttributeSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_2a7[0]);
      if (pFVar33 != (FPCGTaggedData *)0x0) {
        local_268.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar33->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_268.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b6d8f9;
          UE::GC::MarkAsReachable((UObject *)local_268.DebugPtr);
        }
        if (local_268.DebugPtr != (UPCGSettings *)0x0) {
          pUVar9 = UPCGAddAttributeSettings::StaticClass();
          bVar5 = FObjectPtr::IsA(&local_268.ObjectPtr,pUVar9);
          TVar11 = local_268;
          local_2a0 = local_268;
          if (bVar5) goto LAB_149b6d901;
        }
      }
    }
    else {
      pUVar10 = UPCGNode::GetSettings(this_00);
      TVar11.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar10);
      if (TVar11.DebugPtr != (UPCGSettings *)0x0) {
        local_2a0.DebugPtr = TVar11.DebugPtr;
        pUVar9 = UPCGAddAttributeSettings::StaticClass();
        iVar8 = (int)pUVar9->_padding_;
        if ((iVar8 <= *(int *)((TVar11.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar11.DebugPtr)->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
            &pUVar9->_padding_)) goto LAB_149b6d901;
      }
    }
LAB_149b6d8f9:
    local_2a0.DebugPtr = (UPCGSettings *)0x0;
    TVar11.DebugPtr = local_2a0.DebugPtr;
  }
  else {
    pUVar9 = UPCGAddAttributeSettings::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar9);
    if (bVar5) {
      local_2a0 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar11 = local_2a0;
    }
    else {
      local_2a0.DebugPtr = (UPCGSettings *)0x0;
      TVar11.DebugPtr = local_2a0.DebugPtr;
    }
  }
LAB_149b6d901:
  if ((TVar11.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateAttribute.cpp"
                         ,0x189,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (param_1->Node == (UPCGNode *)0x0) {
    bVar5 = false;
  }
  else {
    bVar5 = UPCGNode::IsInputPinConnected
                      (param_1->Node,&PCGCreateAttributeConstants::AttributesLabel);
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_278,&PCGCreateAttributeConstants::AttributesLabel);
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_290,&PCGPinConstants::DefaultInputLabel);
  local_280 = (FPCGAttributePropertySelector *)&TVar11.DebugPtr[1]._padding_;
  FPCGAttributePropertySelector::GetName(local_280);
  if (local_278.ArrayNum == 0) {
    if (bVar5 == false) {
      uVar26 = 0;
      if (0 < local_290.ArrayNum) {
        lVar32 = 0;
        do {
          uVar30 = 0;
          if ((int)uVar26 < local_290.ArrayNum) {
            uVar30 = ~uVar26 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          plVar3 = *(longlong **)(local_290.AllocatorInstance.Data + lVar32);
          if ((plVar3 != (longlong *)0x0) &&
             (lVar12 = (**(code **)(*plVar3 + 800))(plVar3), lVar12 != 0)) {
            pUVar13 = (UPCGData *)(**(code **)(*plVar3 + 0x310))(plVar3,param_1,1);
            if ((pUVar13 == (UPCGData *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("OutputData",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateAttribute.cpp"
                                   ,0x19d,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            this_01 = (UPCGMetadata *)(**(code **)(pUVar13->_padding_ + 0x328))(pUVar13);
            pFVar14 = UPCGMetadata::GetMetadataDomainFromSelector(this_01,local_280);
            param_1 = (FPCGContext *)local_298;
            if (pFVar14 == (FPCGMetadataDomain *)0x0) {
              PCGLog::Metadata::LogInvalidMetadataDomain(local_280,(FPCGContext *)local_298);
            }
            else {
              FStack_220 = local_230;
              local_128.OutputAttributeName = local_230;
              local_228 = pFVar14;
              local_128.Metadata = pFVar14;
              pFVar15 = FPCGMetadataTypesConstantStruct::
                        Dispatcher<_PCGCreateAttribute::ClearOrCreateAttribute_::__l2::<lambda_1>_>
                                  ((FPCGMetadataTypesConstantStruct *)
                                   local_2a0.DebugPtr[1].CacheLock.CriticalSection.Opaque3,
                                   &local_128);
              if (pFVar15 == (FPCGMetadataAttributeBase *)0x0) {
                if (1 < (byte)LogPCG._0_1_) {
                  pFVar17 = FText::FromName(&local_c8,&local_230);
                  pFVar18 = FTextFormat::FTextFormat
                                      (&local_b8,
                                       &PCGCreateAttributeConstants::ErrorCreatingAttributeMessage,
                                       Default);
                  pFVar17 = FText::Format<FText>(&local_f8,pFVar18,pFVar17);
                  FText::ToString(pFVar17);
                  pFVar27 = local_298;
                  FPCGContext::GetTaskName((FPCGContext *)local_298,&local_108);
                  FPCGContext::GetExecutionSourceName((FPCGContext *)pFVar27,&local_118);
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_118.Data.AllocatorInstance.Data);
                  }
                  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_108.Data.AllocatorInstance.Data);
                  }
                  if (local_f8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
                  }
                }
                break;
              }
              lVar16 = FPCGMetadataDomain::GetItemCountForChild(pFVar14);
              if (lVar16 == 0) {
                FPCGMetadataDomain::AddEntry(pFVar14,-1);
              }
              param_1 = (FPCGContext *)local_298;
              uVar30 = 0;
              if ((int)uVar26 < local_290.ArrayNum) {
                uVar30 = ~uVar26 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              pFVar33 = (FPCGTaggedData *)
                        (local_290.AllocatorInstance.Data + (longlong)(int)uVar26 * 0x78);
              if ((((FPCGTaggedData *)((FObjectPtr_u_0 *)((longlong)param_1 + 0x38))->Handle <=
                    pFVar33) &&
                  (pFVar33 < (FPCGTaggedData *)
                             ((FObjectPtr_u_0 *)((longlong)param_1 + 0x38))->Handle +
                             *(int *)((longlong)param_1 + 0x44))) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              iVar8 = *(int *)((longlong)param_1 + 0x40);
              if (iVar8 == *(int *)((longlong)param_1 + 0x44)) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x878,(ForAnyElementType *)((longlong)param_1 + 0x38),
                                   (int *)((longlong)param_1 + 0x44));
              }
              *(int *)((longlong)param_1 + 0x40) = iVar8 + 1;
              pFVar33 = FPCGTaggedData::FPCGTaggedData
                                  ((FPCGTaggedData *)
                                   (((FObjectPtr_u_0 *)((longlong)param_1 + 0x38))->Handle +
                                   (longlong)iVar8 * 3),pFVar33);
              FPCGDataPtrWrapper::operator=(&pFVar33->Data,pUVar13);
            }
          }
          uVar26 = uVar26 + 1;
          lVar32 = lVar32 + 0x78;
        } while ((int)uVar26 < local_290.ArrayNum);
      }
      goto LAB_149b6e59e;
    }
  }
  else {
    if ((local_278.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_1ec._4_8_ = Cast<UPCGParamData>((FPCGDataPtrWrapper *)local_278.AllocatorInstance.Data);
    if ((UPCGParamData *)local_1ec._4_8_ != (UPCGParamData *)0x0) {
      if ((1 < local_278.ArrayNum) && (*(char *)&TVar11.DebugPtr[3].CachedElement.Object == '\0')) {
        pFVar17 = FText::AsLocalizable_Advanced_LocText
                            (&local_e8,L"PCGCreateAttributeElement",L"MultiAttributeWhenNoCopyAll",
                             L"Multiple source param detected in the Attributes pin, but we do not copy all attributes. We will only look into the first source param."
                            );
        PCGLog::LogWarningOnGraph(pFVar17,param_1);
        if (local_e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
        }
      }
      uVar26 = 0;
      if (0 < local_290.ArrayNum) {
        local_280 = (FPCGAttributePropertySelector *)0x0;
        do {
          pFVar28 = local_280;
          uVar30 = 0;
          if ((int)uVar26 < local_290.ArrayNum) {
            uVar30 = ~uVar26 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          plVar3 = *(longlong **)(local_290.AllocatorInstance.Data + (longlong)pFVar28);
          if (plVar3 != (longlong *)0x0) {
            local_258 = (UPCGData *)(**(code **)(*plVar3 + 0x310))(plVar3,param_1,1);
            uVar30 = 0;
            if ((int)uVar26 < local_290.ArrayNum) {
              uVar30 = ~uVar26 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            pFVar33 = (FPCGTaggedData *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
            pFVar24 = (FPCGTaggedData *)
                      (local_290.AllocatorInstance.Data + (longlong)(int)uVar26 * 0x78);
            if (((pFVar33 <= pFVar24) &&
                (pFVar24 < pFVar33 + (param_1->OutputData).TaggedData.ArrayMax)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
            piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
            }
            (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
            pFVar14 = (FPCGMetadataDomain *)
                      FPCGTaggedData::FPCGTaggedData
                                ((FPCGTaggedData *)
                                 ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                                 (longlong)iVar8 * 0x78),pFVar24);
            bVar5 = true;
            local_228 = pFVar14;
            if (*(char *)&TVar11.DebugPtr[3].CachedElement.Object == '\0') {
              local_1c8._0_8_ = (UPCGData *)0x0;
              local_1c8._8_8_ = (UPCGData *)0x0;
              FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
                        ((FPCGAttributePropertyInputSelector *)(local_1c8 + 0x10));
              FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
                        ((FPCGAttributePropertyOutputSelector *)local_178);
              pUVar13 = local_258;
              local_1c8._0_8_ = local_1ec._4_8_;
              local_1c8._24_4_ = *(undefined4 *)&TVar11.DebugPtr[1]._padding_;
              local_1c8._28_8_ = *(undefined8 *)((longlong)&TVar11.DebugPtr[1]._padding_ + 4);
              local_1c8._36_8_ = *(undefined8 *)((longlong)&TVar11.DebugPtr[1]._padding_ + 4);
              local_1c8._44_8_ = *(undefined8 *)((longlong)&TVar11.DebugPtr[1]._padding_ + 4);
              local_138 = (FPCGContext *)0x0;
              local_130 = 0xff;
              local_1c8._8_8_ = local_258;
              TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                        (&local_190,
                         (TArray<FString,TSizedDefaultAllocator<32>_> *)
                         &TVar11.DebugPtr[1]._padding_);
              local_180 = *(undefined1 *)&TVar11.DebugPtr[1]._padding_;
              local_178._8_4_ = *(undefined4 *)&TVar11.DebugPtr[1]._padding_;
              local_178._12_8_ = *(undefined8 *)((longlong)&TVar11.DebugPtr[1]._padding_ + 4);
              local_178._20_8_ = *(undefined8 *)&TVar11.DebugPtr[1].bExecutionDependencyRequired;
              local_178._28_8_ = *(undefined8 *)((longlong)&TVar11.DebugPtr[1].OriginalSettings + 4)
              ;
              TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                        (&local_150,
                         (TArray<FString,TSizedDefaultAllocator<32>_> *)
                         &TVar11.DebugPtr[1].CachedElement);
              local_140 = *(undefined1 *)TVar11.DebugPtr[1].CacheLock.CriticalSection.Opaque1;
              local_130 = local_130 & 0xff;
              local_138 = param_1;
              bVar5 = PCGMetadataHelpers::CopyAttribute((FPCGCopyAttributeParams *)local_1c8);
              DestructItems<FString,int>
                        ((FString *)local_150.AllocatorInstance.Data,local_150.ArrayNum);
              if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_150.AllocatorInstance.Data);
              }
              DestructItems<FString,int>
                        ((FString *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
              if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_190.AllocatorInstance.Data);
              }
            }
            else {
              uVar19 = (ulonglong)local_278.ArrayNum;
              local_2a0._0_4_ = local_278.ArrayNum;
              pFVar27 = (FObjectPtr_u_0 *)(local_278.AllocatorInstance.Data + uVar19 * 0x78);
              FVar25.Data = local_278.AllocatorInstance.Data;
              local_298 = pFVar27;
              while( true ) {
                if (local_278.ArrayNum != (int)uVar19) {
                  local_2a7[0] = (<lambda_1>)0x0;
                  `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_2a7);
                }
                pFVar14 = local_228;
                pUVar13 = local_258;
                if ((FObjectPtr_u_0 *)FVar25.Data == pFVar27) break;
                local_260 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar25.Data;
                if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b6dfee:
                  if (local_260.Handle == (UObject *)0x0) goto LAB_149b6e010;
                  pUVar9 = Z_Construct_UClass_UPCGParamData_NoRegister();
                  bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_260,pUVar9);
                  FVar20 = local_260;
                  if (!bVar7) goto LAB_149b6e010;
                }
                else {
                  if (local_260.Handle != (UObject *)0x0) {
                    UE::GC::MarkAsReachable(local_260.Handle);
                    goto LAB_149b6dfee;
                  }
LAB_149b6e010:
                  FVar20.Handle = (UObject *)0x0;
                }
                if (FVar20.Handle != (UObject *)0x0) {
                  local_a0 = local_258;
                  local_98._0_8_ = (FScriptContainerElement *)0x0;
                  local_78 = (ForElementType<unsigned_int>)0x0;
                  local_70 = 0;
                  local_64 = 0;
                  local_58.Data = (FScriptContainerElement *)0x0;
                  local_50 = 0;
                  local_1d8 = &PCGMetadataDomainID::Default;
                  pFStack_1d0 = &PCGMetadataDomainID::Default;
                  local_98._8_8_ = 0;
                  local_6c = 0x80;
                  local_68 = -1;
                  local_a8 = FVar20;
                  TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::Reserve((TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_98,1);
                  if (local_50 < 1) {
                    local_50 = 1;
                    if ((local_58.Data != (FScriptContainerElement *)0x0) &&
                       (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                  (&local_58,0,0,4), local_58.Data != (FScriptContainerElement *)0x0
                       )) {
                      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                (&local_58,0,0,4);
                    }
                    FVar21.Data = local_60;
                    if (local_58.Data != (FScriptContainerElement *)0x0) {
                      FVar21.Data = local_58.Data;
                    }
                    *(undefined4 *)FVar21.Data = 0xffffffff;
                    pFVar27 = local_298;
                    if (local_50 != 0) {
                      pTStack_248 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
                      uStack_24c = 1;
                      uVar30 = 0;
                      local_250 = 0;
                      uStack_23c = 0;
                      if (local_70 != 0) {
                        FVar31 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                        if (local_78 != (ForElementType<unsigned_int>)0x0) {
                          FVar31 = local_78;
                        }
                        uVar22 = *(uint *)FVar31;
                        local_250 = 0;
                        while (uVar22 == 0) {
                          uVar30 = uVar30 + 0x20;
                          lVar32 = (longlong)local_250;
                          local_250 = local_250 + 1;
                          uStack_23c = (ulonglong)uVar30 << 0x20;
                          if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 <
                              local_250) {
                            uStack_23c = CONCAT44(uVar30,local_70);
                            goto LAB_149b6e1d3;
                          }
                          uVar22 = ((uint *)((longlong)FVar31 + 4))[lVar32];
                        }
                        uStack_24c = -uVar22 & uVar22;
                        uVar19 = (ulonglong)uStack_24c * 2 + 1;
                        lVar32 = 0x3f;
                        if (uVar19 != 0) {
                          for (; uVar19 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                          }
                        }
                        local_1f0 = (int)lVar32;
                        iVar8 = (uVar30 - 1) + local_1f0;
                        if (local_70 < iVar8) {
                          iVar8 = local_70;
                        }
                        uStack_23c._4_4_ = (int)((ulonglong)uStack_23c >> 0x20);
                        uStack_23c = CONCAT44(uStack_23c._4_4_,iVar8);
                      }
LAB_149b6e1d3:
                      local_240 = 0xffffffff;
                      local_218 = (longlong *)local_98;
                      local_210._padding_ = CONCAT44(uStack_24c,local_250);
                      local_210.UnvisitedBitMask = 0xffffffff;
                      local_210.CurrentBitIndex = (int)uStack_23c;
                      local_210.BaseBitIndex = uStack_23c._4_4_;
                      local_210._28_4_ = uStack_234;
                      local_210.Array = pTStack_248;
                      if ((int)uStack_23c < local_70) {
                        do {
                          pbVar2 = (byte *)(*local_218 + (longlong)local_210.CurrentBitIndex * 0x28)
                          ;
                          uVar30 = *(uint *)(pbVar2 + 4);
                          uVar23 = *pbVar2 - uVar30 ^ uVar30 >> 0xd;
                          uVar22 = (-0x61c88647 - uVar23) - uVar30 ^ uVar23 << 8;
                          uVar29 = (uVar30 - uVar23) - uVar22 ^ uVar22 >> 0xd;
                          uVar23 = (uVar23 - uVar29) - uVar22 ^ uVar29 >> 0xc;
                          uVar30 = (uVar22 - uVar23) - uVar29 ^ uVar23 << 0x10;
                          uVar29 = (uVar29 - uVar30) - uVar23 ^ uVar30 >> 5;
                          uVar22 = (uVar23 - uVar29) - uVar30 ^ uVar29 >> 3;
                          uVar30 = (uVar30 - uVar22) - uVar29 ^ uVar22 << 10;
                          uVar30 = ((uVar29 - uVar30) - uVar22 ^ uVar30 >> 0xf) & local_50 - 1U;
                          *(uint *)(pbVar2 + 0x24) = uVar30;
                          FVar21.Data = local_60;
                          if (local_58.Data != (FScriptContainerElement *)0x0) {
                            FVar21.Data = local_58.Data;
                          }
                          lVar32 = (longlong)(int)(local_50 - 1U & uVar30);
                          *(undefined4 *)(pbVar2 + 0x20) = *(undefined4 *)(FVar21.Data + lVar32 * 4)
                          ;
                          *(int *)(FVar21.Data + lVar32 * 4) = local_210.CurrentBitIndex;
                          local_210.UnvisitedBitMask =
                               local_210.UnvisitedBitMask & ~local_210._padding_._4_4_;
                          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                    (&local_210);
                          pFVar27 = local_298;
                        } while (local_210.CurrentBitIndex < (local_210.Array)->NumBits);
                      }
                    }
                  }
                  local_d8 = local_1d8;
                  pFStack_d0 = pFStack_1d0;
                  TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
                  ::
                  Emplace<TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&>_>
                            ((TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
                              *)local_98,&local_1ec,(bool *)&local_d8);
                  local_48 = param_1;
                  if (*(char *)((longlong)&TVar11.DebugPtr[3].CachedElement.Object + 1) == '\0') {
                    PCGMetadataHelpers::FPCGCopyAllAttributesParams::
                    InitializeMappingFromDomainNames
                              ((FPCGCopyAllAttributesParams *)&local_a8,
                               (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                                *)&TVar11.DebugPtr[3].CachedElement.SharedReferenceCount);
                  }
                  else {
                    PCGMetadataHelpers::FPCGCopyAllAttributesParams::InitializeMappingForAllDomains
                              ((FPCGCopyAllAttributesParams *)&local_a8);
                  }
                  if (local_98._8_4_ != local_64) {
                    bVar7 = PCGMetadataHelpers::CopyAllAttributes
                                      ((FPCGCopyAllAttributesParams *)&local_a8);
                    bVar5 = (bool)(bVar5 & bVar7);
                  }
                  local_50 = 0;
                  if (local_58.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_58.Data);
                  }
                  iVar8 = SUB84(local_98._8_8_,4);
                  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
                  if (iVar8 != 0) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x28,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
                  }
                  local_70 = 0;
                  local_64 = 0;
                  local_68 = -1;
                  if (0x80 < local_6c) {
                    local_6c = 0x80;
                    TBitArray<FDefaultBitArrayAllocator>::Realloc
                              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
                  }
                  if (local_78 != (ForElementType<unsigned_int>)0x0) {
                    FMemory::Free((void *)local_78);
                  }
                  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
                    FMemory::Free((void *)local_98._0_8_);
                  }
                }
                uVar19 = (ulonglong)local_2a0.DebugPtr & 0xffffffff;
                FVar25.Data = FVar25.Data + 0x78;
              }
            }
            pFVar28 = local_280;
            if (bVar5 != false) {
              FPCGDataPtrWrapper::operator=((FPCGDataPtrWrapper *)pFVar14,pUVar13);
              pFVar28 = local_280;
            }
          }
          local_280 = (FPCGAttributePropertySelector *)((longlong)pFVar28 + 0x78);
          uVar26 = uVar26 + 1;
        } while ((int)uVar26 < local_290.ArrayNum);
      }
      goto LAB_149b6e59e;
    }
  }
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::operator=
            (&(param_1->OutputData).TaggedData,&local_290);
LAB_149b6e59e:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_290.AllocatorInstance.Data,local_290.ArrayNum);
  if ((FPCGTaggedData *)local_290.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_290.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_278.AllocatorInstance.Data,local_278.ArrayNum);
  if ((FPCGContext *)local_278.AllocatorInstance.Data != (FPCGContext *)0x0) {
    FMemory::Free(local_278.AllocatorInstance.Data);
  }
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149b88ab0

EPCGElementExecutionLoopMode __thiscall
FPCGAddAttributeElement::ExecutionLoopMode(FPCGAddAttributeElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b98850

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
FPCGAddAttributeElement::SupportsBasePointDataInputs
          (FPCGAddAttributeElement *this,FPCGContext *param_1)

{
  return true;
}

