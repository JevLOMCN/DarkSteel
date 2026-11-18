// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149c6c640

/* WARNING: Type propagation algorithm not settling */
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
FPCGSplitSplineElement::ExecuteInternal(FPCGSplitSplineElement *this,FPCGContext *param_1)

{
  FPCGCrc *pFVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  UPCGNode *this_00;
  FObjectPtr_u_0 *pFVar5;
  UPCGData *pUVar6;
  ITextData *pIVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  FObjectPtr_u_0 FVar11;
  long64 *plVar12;
  bool bVar13;
  undefined1 uVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  UClass *pUVar20;
  UPCGSettings *pUVar21;
  TObjectPtr<UPCGSettings>_u_0 TVar22;
  FText *pFVar23;
  FText *pFVar24;
  FTextFormat *pFVar25;
  UObject *pUVar26;
  UPCGSplineData *this_01;
  UPCGMetadata *this_02;
  FPCGMetadataDomain *this_03;
  FPCGMetadataAttribute<int> *pFVar27;
  FPCGTaggedData *pFVar28;
  ulonglong uVar29;
  ForAnyElementType FVar30;
  uint uVar31;
  FObjectPtr_u_0 *pFVar32;
  ForAnyElementType FVar33;
  FScriptContainerElement *pFVar34;
  longlong lVar35;
  TObjectPtr<UPCGMetadata>_u_0 TVar36;
  uint uVar37;
  ulonglong uVar38;
  longlong lVar39;
  bool bVar40;
  float fVar41;
  <lambda_1> local_res10;
  ForAnyElementType local_368;
  undefined8 local_360;
  undefined1 local_358;
  undefined1 local_357;
  FGCScopeGuard local_356 [6];
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> local_350;
  FObjectPtr_u_0 local_340;
  TObjectPtr<UPCGSettings>_u_0 local_338;
  TArray<double,TSizedDefaultAllocator<32>_> local_330;
  uint local_320;
  undefined1 local_31c [4];
  int local_318;
  uint local_314;
  TArray<bool,TSizedDefaultAllocator<32>_> local_310;
  undefined1 local_300 [16];
  FPCGCrc local_2f0;
  undefined1 local_2e8 [16];
  FPCGCrc local_2d8;
  FPCGCrc local_2d0;
  FPCGCrc local_2c8;
  FPCGCrc local_2c0;
  FPCGCrc local_2b8;
  TObjectPtr<UPCGMetadata>_u_0 local_2b0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_2a8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_298;
  FObjectPtr_u_0 local_288;
  TObjectPtr<UPCGSettings>_u_0 local_280;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_278;
  FName local_268;
  undefined1 local_260 [4];
  FName local_25c;
  longlong local_250;
  UPCGSplineData *local_248 [2];
  FPCGAttributePropertySelector local_238;
  FPCGAttributePropertySelector local_1f8;
  long64 *local_1b8;
  int iStack_1b0;
  FSplinePoint *local_1a8;
  int iStack_1a0;
  FTextFormat local_198;
  FText local_188;
  FFormatArgumentValue local_178;
  FText local_158;
  FText local_148;
  TArrayView<__int64_const_,int> local_138;
  TArrayView<FSplinePoint_const_,int> local_128;
  FText local_118;
  undefined1 local_108 [40];
  FString *local_e0;
  int local_d8;
  FText local_c8;
  FText local_b8;
  FTextFormat local_a8;
  FTextFormat local_98 [6];
  
  bVar40 = -1 < CpuChannel->Enabled;
  if (bVar40) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId233,"FPCGSplitSplineElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplitSplines.cpp"
               ,0xe9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId233);
  }
  local_res10 = SUB81(param_1,0);
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar21 = UPCGNode::GetSettings(this_00), pUVar21 == (UPCGSettings *)0x0)) {
      pFVar28 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplitSplinesSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10);
      if (pFVar28 != (FPCGTaggedData *)0x0) {
        local_280.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar28->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_280.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_280.DebugPtr);
        }
        if (local_280.DebugPtr != (UPCGSettings *)0x0) {
          pUVar20 = UPCGSplitSplinesSettings::StaticClass();
          bVar13 = FObjectPtr::IsA(&local_280.ObjectPtr,pUVar20);
          if (bVar13) {
            local_338.DebugPtr = local_280.DebugPtr;
            TVar22 = local_280;
            goto LAB_149c6c7d4;
          }
        }
      }
    }
    else {
      pUVar21 = UPCGNode::GetSettings(this_00);
      TVar22.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar21);
      if (TVar22.DebugPtr != (UPCGSettings *)0x0) {
        local_338.DebugPtr = TVar22.DebugPtr;
        pUVar20 = UPCGSplitSplinesSettings::StaticClass();
        iVar17 = (int)pUVar20->_padding_;
        if ((iVar17 <= *(int *)((TVar22.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar22.DebugPtr)->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
            &pUVar20->_padding_)) goto LAB_149c6c7d4;
      }
    }
    local_338.DebugPtr = (UPCGSettings *)0x0;
    TVar22.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar20 = UPCGSplitSplinesSettings::StaticClass();
    bVar13 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar20);
    if (bVar13) {
      local_338 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar22 = local_338;
    }
    else {
      local_338.DebugPtr = (UPCGSettings *)0x0;
      TVar22.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_149c6c7d4:
  if ((TVar22.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplitSplines.cpp"
                          ,0xec,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_2a8,&PCGPinConstants::DefaultInputLabel);
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_278,&PCGSplitSplineConstants::SplitInfoLabel);
  dVar10 = __real_3eb0c6f7a0000000;
  dVar9 = __real_3ff0000000000000;
  TVar36.DebugPtr = (UPCGMetadata *)&param_1->OutputData;
  local_318 = (int)TVar22.DebugPtr[1]._padding_;
  local_2b0 = TVar36;
  if ((((*(char *)((longlong)&TVar22.DebugPtr[1]._padding_ + 4) == '\0') && (local_318 != 3)) &&
      (local_278.ArrayNum != 1)) && (local_278.ArrayNum != local_2a8.ArrayNum)) {
    PCGLog::InputOutput::LogInvalidCardinalityError
              (PCGPinConstants::DefaultInputLabel,PCGSplitSplineConstants::SplitInfoLabel,param_1);
  }
  else {
    local_320 = 0;
    if (0 < local_2a8.ArrayNum) {
      do {
        uVar37 = local_320;
        uVar29 = 0;
        uVar16 = 0;
        uVar31 = uVar16;
        if ((int)local_320 < local_2a8.ArrayNum) {
          uVar31 = ~local_320 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        pFVar32 = (FObjectPtr_u_0 *)
                  (local_2a8.AllocatorInstance.Data + (longlong)(int)uVar37 * 0x78);
        local_288 = (FObjectPtr_u_0)pFVar32->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c6c94a:
          if ((UPCGSplineData *)local_288.Handle != (UPCGSplineData *)0x0) {
            pUVar20 = Z_Construct_UClass_UPCGSplineData_NoRegister();
            bVar13 = FObjectPtr::IsA((FObjectPtr *)&local_288,pUVar20);
            FVar11 = local_288;
            if ((bVar13) && ((UPCGSplineData *)local_288.Handle != (UPCGSplineData *)0x0)) {
              UPCGSplineData::GetSplinePoints((UPCGSplineData *)local_288.Handle,&local_350);
              (**(code **)(*(longlong *)FVar11.Handle + 0x520))(FVar11.Handle,&local_1b8);
              if ((local_350.ArrayNum != iStack_1b0) &&
                 ((iStack_1b0 != 0 &&
                  (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                      ("SplinePoints.Num() == SplinePointsEntryKeys.Num() || SplinePointsEntryKeys.IsEmpty()"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplitSplines.cpp"
                                       ,0x10d,L""), bVar13)))) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              TVar22 = local_338;
              local_368.Data = (FScriptContainerElement *)0x0;
              local_360 = 0;
              if (local_318 == 3) {
                local_310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_310.ArrayNum = 0;
                local_310.ArrayMax = 0;
                FPCGAttributePropertyInputSelector::CopyAndFixLast
                          ((FPCGAttributePropertyInputSelector *)&local_338.DebugPtr[1]._padding_,
                           (FPCGAttributePropertyInputSelector *)&local_238,
                           (UPCGData *)FVar11.Handle);
                PCGAttributeAccessorHelpers::CreateConstAccessor
                          ((UPCGData *)(local_300 + 8),
                           (FPCGAttributePropertySelector *)FVar11.Handle,SUB81(&local_238,0));
                PCGAttributeAccessorHelpers::CreateConstKeys
                          ((UPCGData *)local_300,(FPCGAttributePropertySelector *)FVar11.Handle);
                if (((IPCGAttributeAccessor *)local_300._8_8_ == (IPCGAttributeAccessor *)0x0) ||
                   ((IPCGAttributeAccessorKeys *)local_300._0_8_ == (IPCGAttributeAccessorKeys *)0x0
                   )) {
                  PCGLog::Metadata::LogFailToCreateAccessorError(&local_238,param_1);
                  if ((IPCGAttributeAccessorKeys *)local_300._0_8_ !=
                      (IPCGAttributeAccessorKeys *)0x0) {
                    (**(code **)*(longlong *)local_300._0_8_)(local_300._0_8_,1);
                  }
                  if ((IPCGAttributeAccessor *)local_300._8_8_ != (IPCGAttributeAccessor *)0x0) {
                    (**(code **)*(longlong *)local_300._8_8_)(local_300._8_8_,1);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_238.ExtraNames.AllocatorInstance.Data,
                             local_238.ExtraNames.ArrayNum);
                  if (local_238.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_238.ExtraNames.AllocatorInstance.Data);
                  }
                }
                else {
                  bVar13 = PCGAttributeAccessorHelpers::
                           ExtractAllValues<bool,TSizedDefaultAllocator<32>_>
                                     ((IPCGAttributeAccessor *)local_300._8_8_,
                                      (IPCGAttributeAccessorKeys *)local_300._0_8_,&local_310,
                                      AllowBroadcastAndConstructible);
                  if (!bVar13) {
                    PCGLog::Metadata::LogFailToGetAttributeError(&local_238,param_1);
                  }
                  if ((IPCGAttributeAccessorKeys *)local_300._0_8_ !=
                      (IPCGAttributeAccessorKeys *)0x0) {
                    (**(code **)*(longlong *)local_300._0_8_)(local_300._0_8_,1);
                  }
                  if ((IPCGAttributeAccessor *)local_300._8_8_ != (IPCGAttributeAccessor *)0x0) {
                    (**(code **)*(longlong *)local_300._8_8_)(local_300._8_8_,1);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_238.ExtraNames.AllocatorInstance.Data,
                             local_238.ExtraNames.ArrayNum);
                  if (local_238.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_238.ExtraNames.AllocatorInstance.Data);
                  }
                  if (bVar13) {
                    if (local_310.ArrayNum == local_350.ArrayNum) {
                      local_340.Handle = FVar11.Handle;
                      FVar30.Data = local_310.AllocatorInstance.Data;
                      if (0 < local_310.ArrayNum) {
                        uVar38 = uVar29;
                        iVar17 = local_310.ArrayNum;
                        do {
                          uVar31 = (uint)uVar29;
                          uVar37 = uVar16;
                          if ((int)uVar31 < iVar17) {
                            uVar37 = ~uVar31 >> 0x1f;
                          }
                          if (uVar37 == 0) {
                            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               );
                            if (bVar13) {
                              pcVar8 = (code *)swi(3);
                              uVar14 = (*pcVar8)();
                              return (bool)uVar14;
                            }
                            iVar17 = local_310.ArrayNum;
                          }
                          if (local_310.AllocatorInstance.Data[uVar38] !=
                              (FScriptContainerElement)0x0) {
                            local_2f0 = (FPCGCrc)(double)(int)uVar31;
                            if (((local_368.Data <= &local_2f0) &&
                                (&local_2f0 <
                                 (FPCGCrc *)(local_368.Data + (longlong)local_360._4_4_ * 8))) &&
                               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar13)) {
                              pcVar8 = (code *)swi(3);
                              uVar14 = (*pcVar8)();
                              return (bool)uVar14;
                            }
                            iVar17 = (int)local_360;
                            if ((int)local_360 == local_360._4_4_) {
                              iVar17 = UE::Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                 (0x808,&local_368,(int *)((longlong)&local_360 + 4)
                                                 );
                            }
                            local_360 = CONCAT44(local_360._4_4_,iVar17 + 1);
                            *(FPCGCrc *)(local_368.Data + (longlong)iVar17 * 8) = local_2f0;
                            iVar17 = local_310.ArrayNum;
                          }
                          uVar29 = (ulonglong)(uVar31 + 1);
                          uVar38 = uVar38 + 1;
                          FVar30.Data = local_310.AllocatorInstance.Data;
                        } while ((int)(uVar31 + 1) < iVar17);
                      }
                      goto LAB_149c6d3c3;
                    }
                    FPCGAttributePropertyInputSelector::CopyAndFixLast
                              ((FPCGAttributePropertyInputSelector *)&TVar22.DebugPtr[1]._padding_,
                               (FPCGAttributePropertyInputSelector *)local_108,
                               (UPCGData *)FVar11.Handle);
                    local_25c.ComparisonIndex.Value = local_108._20_4_;
                    local_25c.Number = local_108._24_4_;
                    pFVar23 = FText::FromName(&local_c8,&local_25c);
                    pFVar24 = FText::AsLocalizable_Advanced_LocText
                                        (&local_148,L"PCGSplitSplinesElement",
                                         L"MismatchInPredicateCardinality",
                                         L"Property {0} is not a proper predicate for splitting the spline."
                                        );
                    pFVar25 = FTextFormat::FTextFormat(local_98,pFVar24,Default);
                    pFVar23 = FText::Format<FText>(&local_158,pFVar25,pFVar23);
                    PCGLog::LogErrorOnGraph(pFVar23,param_1);
                    if (local_158.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
                    }
                    if (local_148.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
                    }
                    pFVar5 = (FObjectPtr_u_0 *)
                             (((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                              &(TVar36.DebugPtr)->_padding_)->AllocatorInstance).Data;
                    if (((pFVar5 <= pFVar32) &&
                        (pFVar32 < pFVar5 + (longlong)
                                            *(int *)((longlong)&(TVar36.DebugPtr)->_padding_ + 4) *
                                            0xf)) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      uVar14 = (*pcVar8)();
                      return (bool)uVar14;
                    }
                    iVar17 = (int)(TVar36.DebugPtr)->_padding_;
                    piVar2 = (int *)((longlong)&(TVar36.DebugPtr)->_padding_ + 4);
                    if (iVar17 == *piVar2) {
                      iVar17 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x878,(ForAnyElementType *)TVar36.DebugPtr,piVar2);
                    }
                    *(int *)&(TVar36.DebugPtr)->_padding_ = iVar17 + 1;
                    FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                                 &(TVar36.DebugPtr)->_padding_)->AllocatorInstance).Data +
                               (longlong)iVar17 * 0x78),(FPCGTaggedData *)pFVar32);
                    DestructItems<FString,int>(local_e0,local_d8);
                    FVar30.Data = local_310.AllocatorInstance.Data;
                    if (local_e0 != (FString *)0x0) {
                      FMemory::Free(local_e0);
                      FVar30.Data = local_310.AllocatorInstance.Data;
                    }
                    goto LAB_149c6cbd1;
                  }
                }
                pFVar5 = (FObjectPtr_u_0 *)
                         (((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                          &(TVar36.DebugPtr)->_padding_)->AllocatorInstance).Data;
                if (((pFVar5 <= pFVar32) &&
                    (pFVar32 < pFVar5 + (longlong)
                                        *(int *)((longlong)&(TVar36.DebugPtr)->_padding_ + 4) * 0xf)
                    ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  uVar14 = (*pcVar8)();
                  return (bool)uVar14;
                }
                iVar17 = (int)(TVar36.DebugPtr)->_padding_;
                piVar2 = (int *)((longlong)&(TVar36.DebugPtr)->_padding_ + 4);
                if (iVar17 == *piVar2) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x878,(ForAnyElementType *)TVar36.DebugPtr,piVar2);
                }
                *(int *)&(TVar36.DebugPtr)->_padding_ = iVar17 + 1;
                FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                             &(TVar36.DebugPtr)->_padding_)->AllocatorInstance).Data +
                           (longlong)iVar17 * 0x78),(FPCGTaggedData *)pFVar32);
                FVar30.Data = local_310.AllocatorInstance.Data;
              }
              else {
                local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_330.ArrayNum = 0;
                local_330.ArrayMax = 0;
                if (*(char *)((longlong)&local_338.DebugPtr[1]._padding_ + 4) != '\0') {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_330.AllocatorInstance,&local_330.ArrayMax);
                  local_330.ArrayNum = iVar17 + 1;
                  *(longlong *)(local_330.AllocatorInstance.Data + (longlong)iVar17 * 8) =
                       TVar22.DebugPtr[1]._padding_;
LAB_149c6cf0b:
                  if (local_318 == 0) {
                    if ((FPCGCrc *)local_368.Data != (FPCGCrc *)0x0) {
                      FMemory::Free(local_368.Data);
                    }
                    local_368.Data = local_330.AllocatorInstance.Data;
                    local_360._0_4_ = local_330.ArrayNum;
                    local_360._4_4_ = local_330.ArrayMax;
                    local_330.ArrayNum = 0;
                    local_330.ArrayMax = 0;
                    local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_340.Handle = FVar11.Handle;
                  }
                  else {
                    local_340.Handle = FVar11.Handle;
                    iVar17 = local_330.ArrayNum;
                    if (local_318 == 1) {
                      uVar29 = (ulonglong)local_330.ArrayNum;
                      pFVar1 = (FPCGCrc *)(local_330.AllocatorInstance.Data + uVar29 * 8);
                      FVar33.Data = local_330.AllocatorInstance.Data;
                      while( true ) {
                        if ((int)uVar29 != iVar17) {
                          local_358 = 0;
                          `TCheckedPointerIterator<double_const_,int,0>::operator!='::__l2::
                          <lambda_1>::operator()(&local_358);
                        }
                        FVar30.Data = local_330.AllocatorInstance.Data;
                        if ((FPCGCrc *)FVar33.Data == pFVar1) break;
                        fVar41 = FPCGSplineStruct::GetInputKeyAtDistanceAlongSpline
                                           ((FPCGSplineStruct *)&FVar11.Handle[6].field_0x20,
                                            (double)*(FPCGCrc *)FVar33.Data);
                        local_2d8 = (FPCGCrc)(double)fVar41;
                        if (((local_368.Data <= &local_2d8) &&
                            (&local_2d8 <
                             (FPCGCrc *)(local_368.Data + (longlong)local_360._4_4_ * 8))) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar13)) {
                          pcVar8 = (code *)swi(3);
                          uVar14 = (*pcVar8)();
                          return (bool)uVar14;
                        }
                        iVar18 = (int)local_360;
                        if ((int)local_360 == local_360._4_4_) {
                          iVar18 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x808,&local_368,(int *)((longlong)&local_360 + 4));
                        }
                        local_360 = CONCAT44(local_360._4_4_,iVar18 + 1);
                        FVar33.Data = FVar33.Data + 8;
                        *(FPCGCrc *)(local_368.Data + (longlong)iVar18 * 8) = local_2d8;
                        uVar29 = local_330._8_8_ & 0xffffffff;
                      }
                    }
                    else if (local_318 == 2) {
                      uVar29 = (ulonglong)local_330.ArrayNum;
                      pFVar1 = (FPCGCrc *)(local_330.AllocatorInstance.Data + uVar29 * 8);
                      FVar33.Data = local_330.AllocatorInstance.Data;
                      while( true ) {
                        if ((int)uVar29 != iVar17) {
                          local_357 = 0;
                          `TCheckedPointerIterator<double_const_,int,0>::operator!='::__l2::
                          <lambda_1>::operator()(&local_357);
                        }
                        FVar30.Data = local_330.AllocatorInstance.Data;
                        if ((FPCGCrc *)FVar33.Data == pFVar1) break;
                        fVar41 = (float)(**(code **)(*(longlong *)FVar11.Handle + 0x4f8))
                                                  (FVar11.Handle,
                                                   (float)(double)*(FPCGCrc *)FVar33.Data);
                        local_2d0 = (FPCGCrc)(double)fVar41;
                        if (((local_368.Data <= &local_2d0) &&
                            (&local_2d0 <
                             (FPCGCrc *)(local_368.Data + (longlong)local_360._4_4_ * 8))) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar13)) {
                          pcVar8 = (code *)swi(3);
                          uVar14 = (*pcVar8)();
                          return (bool)uVar14;
                        }
                        iVar18 = (int)local_360;
                        if ((int)local_360 == local_360._4_4_) {
                          iVar18 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x808,&local_368,(int *)((longlong)&local_360 + 4));
                        }
                        local_360 = CONCAT44(local_360._4_4_,iVar18 + 1);
                        FVar33.Data = FVar33.Data + 8;
                        *(FPCGCrc *)(local_368.Data + (longlong)iVar18 * 8) = local_2d0;
                        uVar29 = local_330._8_8_ & 0xffffffff;
                      }
                    }
                    else {
                      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplitSplines.cpp"
                                          ,0x14e,L"");
                      FVar30.Data = local_330.AllocatorInstance.Data;
                      if (bVar13) {
                        pcVar8 = (code *)swi(3);
                        uVar14 = (*pcVar8)();
                        return (bool)uVar14;
                      }
                    }
LAB_149c6d3c3:
                    if ((FPCGCrc *)FVar30.Data != (FPCGCrc *)0x0) {
                      FMemory::Free(FVar30.Data);
                    }
                  }
                  cVar15 = (**(code **)(*(longlong *)local_340.Handle + 0x510))(local_340.Handle);
                  if (cVar15 == '\0') {
                    iVar17 = (int)local_360 + -1;
                    if (-1 < iVar17) {
                      lVar39 = (longlong)iVar17;
                      lVar35 = lVar39 * 8;
                      do {
                        if ((local_350.ArrayNum < 1) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar13)) {
                          pcVar8 = (code *)swi(3);
                          uVar14 = (*pcVar8)();
                          return (bool)uVar14;
                        }
                        FVar30.Data = local_350.AllocatorInstance.Data;
                        if (((int)local_360 <= iVar17) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar13)) {
                          pcVar8 = (code *)swi(3);
                          uVar14 = (*pcVar8)();
                          return (bool)uVar14;
                        }
                        if (*(double *)(local_368.Data + lVar35) <= (double)*(float *)FVar30.Data) {
LAB_149c6d76b:
                          if (((int)local_360 <= iVar17) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar13)) {
                            pcVar8 = (code *)swi(3);
                            uVar14 = (*pcVar8)();
                            return (bool)uVar14;
                          }
                          iVar18 = ((int)local_360 - iVar17) + -1;
                          if (1 < iVar18) {
                            iVar18 = 1;
                          }
                          if (iVar18 != 0) {
                            memmove(local_368.Data + lVar39 * 8,
                                    local_368.Data + (longlong)((int)local_360 - iVar18) * 8,
                                    (longlong)iVar18 << 3);
                          }
                          iVar18 = (int)local_360 + -1;
                          local_360 = CONCAT44(local_360._4_4_,iVar18);
                          UE::Core::Private::
                          ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (8,8,&local_368,iVar18,(int *)((longlong)&local_360 + 4));
                        }
                        else {
                          uVar37 = uVar16;
                          if ((int)(local_350.ArrayNum - 1U) < local_350.ArrayNum) {
                            uVar37 = ~(local_350.ArrayNum - 1U) >> 0x1f;
                          }
                          if ((uVar37 == 0) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar13)) {
                            pcVar8 = (code *)swi(3);
                            uVar14 = (*pcVar8)();
                            return (bool)uVar14;
                          }
                          pFVar34 = local_350.AllocatorInstance.Data +
                                    (longlong)(local_350.ArrayNum + -1) * 0x88;
                          if (((int)local_360 <= iVar17) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar13)) {
                            pcVar8 = (code *)swi(3);
                            uVar14 = (*pcVar8)();
                            return (bool)uVar14;
                          }
                          if ((double)*(float *)&pFVar34->field_0x0 <
                              *(double *)(local_368.Data + lVar35) ||
                              (double)*(float *)&pFVar34->field_0x0 ==
                              *(double *)(local_368.Data + lVar35)) goto LAB_149c6d76b;
                        }
                        lVar39 = lVar39 + -1;
                        lVar35 = lVar35 + -8;
                        iVar17 = iVar17 + -1;
                      } while (-1 < iVar17);
                    }
                  }
                  else {
                    iVar17 = (int)local_360 + -1;
                    if (-1 < iVar17) {
                      lVar39 = (longlong)iVar17;
                      lVar35 = lVar39 * 8;
                      do {
                        if ((local_350.ArrayNum < 1) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar13)) {
                          pcVar8 = (code *)swi(3);
                          uVar14 = (*pcVar8)();
                          return (bool)uVar14;
                        }
                        FVar30.Data = local_350.AllocatorInstance.Data;
                        if (((int)local_360 <= iVar17) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar13)) {
                          pcVar8 = (code *)swi(3);
                          uVar14 = (*pcVar8)();
                          return (bool)uVar14;
                        }
                        if (*(double *)(local_368.Data + lVar35) <= (double)*(float *)FVar30.Data &&
                            (double)*(float *)FVar30.Data != *(double *)(local_368.Data + lVar35)) {
LAB_149c6d55d:
                          if (((int)local_360 <= iVar17) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar13)) {
                            pcVar8 = (code *)swi(3);
                            uVar14 = (*pcVar8)();
                            return (bool)uVar14;
                          }
                          iVar18 = ((int)local_360 - iVar17) + -1;
                          if (1 < iVar18) {
                            iVar18 = 1;
                          }
                          if (iVar18 != 0) {
                            memmove(local_368.Data + lVar39 * 8,
                                    local_368.Data + (longlong)((int)local_360 - iVar18) * 8,
                                    (longlong)iVar18 << 3);
                          }
                          iVar18 = (int)local_360 + -1;
                          local_360 = CONCAT44(local_360._4_4_,iVar18);
                          UE::Core::Private::
                          ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (8,8,&local_368,iVar18,(int *)((longlong)&local_360 + 4));
                        }
                        else {
                          uVar37 = uVar16;
                          if ((int)(local_350.ArrayNum - 1U) < local_350.ArrayNum) {
                            uVar37 = ~(local_350.ArrayNum - 1U) >> 0x1f;
                          }
                          if ((uVar37 == 0) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar13)) {
                            pcVar8 = (code *)swi(3);
                            uVar14 = (*pcVar8)();
                            return (bool)uVar14;
                          }
                          pFVar34 = local_350.AllocatorInstance.Data +
                                    (longlong)(local_350.ArrayNum + -1) * 0x88;
                          if (((int)local_360 <= iVar17) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar13)) {
                            pcVar8 = (code *)swi(3);
                            uVar14 = (*pcVar8)();
                            return (bool)uVar14;
                          }
                          if ((double)*(float *)&pFVar34->field_0x0 + dVar9 <
                              *(double *)(local_368.Data + lVar35)) goto LAB_149c6d55d;
                        }
                        lVar39 = lVar39 + -1;
                        lVar35 = lVar35 + -8;
                        iVar17 = iVar17 + -1;
                      } while (-1 < iVar17);
                    }
                  }
                  TVar36 = local_2b0;
                  if ((int)local_360 == 0) {
                    pFVar5 = (FObjectPtr_u_0 *)
                             (((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                              &(local_2b0.DebugPtr)->_padding_)->AllocatorInstance).Data;
                    if (((pFVar5 <= pFVar32) &&
                        (pFVar32 < pFVar5 + (longlong)
                                            *(int *)((longlong)&(local_2b0.DebugPtr)->_padding_ + 4)
                                            * 0xf)) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      uVar14 = (*pcVar8)();
                      return (bool)uVar14;
                    }
                    iVar17 = (int)(TVar36.DebugPtr)->_padding_;
                    piVar2 = (int *)((longlong)&(TVar36.DebugPtr)->_padding_ + 4);
                    if (iVar17 == *piVar2) {
                      iVar17 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x878,(ForAnyElementType *)TVar36.DebugPtr,piVar2);
                    }
                    *(int *)&(TVar36.DebugPtr)->_padding_ = iVar17 + 1;
                    FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                                 &(TVar36.DebugPtr)->_padding_)->AllocatorInstance).Data +
                               (longlong)iVar17 * 0x78),(FPCGTaggedData *)pFVar32);
                    if ((FPCGCrc *)local_368.Data != (FPCGCrc *)0x0) {
                      FMemory::Free(local_368.Data);
                    }
                    if (local_350.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_350.AllocatorInstance.Data);
                    }
                  }
                  else {
                    AlgoImpl::
                    IntroSortInternal<double,int,FIdentityFunctor,TDereferenceWrapper<double,_FPCGSplitSplineElement::ExecuteInternal_::__l17::<lambda_3>_>_>
                              ((double *)local_368.Data,(int)local_360,(FIdentityFunctor)local_res10
                               ,(<lambda_3> *)local_31c);
                    iVar17 = (int)local_360 + -1;
                    iVar18 = (int)local_360;
                    if (0 < iVar17) {
                      uVar37 = (int)local_360 - 2;
                      lVar39 = (longlong)iVar17;
                      lVar35 = lVar39 * 8;
                      do {
                        local_314 = uVar37;
                        if (iVar18 <= iVar17) {
                          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar13) {
                            pcVar8 = (code *)swi(3);
                            uVar14 = (*pcVar8)();
                            return (bool)uVar14;
                          }
                          iVar18 = (int)local_360;
                        }
                        FVar30.Data = local_368.Data;
                        uVar31 = 0;
                        if ((int)uVar37 < iVar18) {
                          uVar31 = ~uVar37 >> 0x1f;
                        }
                        if (uVar31 == 0) {
                          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar13) {
                            pcVar8 = (code *)swi(3);
                            uVar14 = (*pcVar8)();
                            return (bool)uVar14;
                          }
                          iVar18 = (int)local_360;
                        }
                        local_250 = lVar35 + -8;
                        if (*(double *)(FVar30.Data + lVar35) -
                            *(double *)(local_368.Data + local_250) < dVar10) {
LAB_149c6db10:
                          if (iVar18 <= iVar17) {
                            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               );
                            if (bVar13) {
                              pcVar8 = (code *)swi(3);
                              uVar14 = (*pcVar8)();
                              return (bool)uVar14;
                            }
                            iVar18 = (int)local_360;
                          }
                          iVar19 = (iVar18 - iVar17) + -1;
                          if (iVar19 != 0) {
                            memmove(local_368.Data + lVar39 * 8,local_368.Data + lVar39 * 8 + 8,
                                    (longlong)iVar19 << 3);
                            iVar18 = (int)local_360;
                          }
                          local_360 = CONCAT44(local_360._4_4_,iVar18 + -1);
                          UE::Core::Private::
                          ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (8,8,&local_368,iVar18 + -1,(int *)((longlong)&local_360 + 4));
                          iVar18 = (int)local_360;
                        }
                        else if ((cVar15 != '\0') && (iVar17 == iVar18 + -1)) {
                          uVar37 = 0;
                          if ((int)(local_350.ArrayNum - 1U) < local_350.ArrayNum) {
                            uVar37 = ~(local_350.ArrayNum - 1U) >> 0x1f;
                          }
                          if (uVar37 == 0) {
                            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               );
                            if (bVar13) {
                              pcVar8 = (code *)swi(3);
                              uVar14 = (*pcVar8)();
                              return (bool)uVar14;
                            }
                            iVar18 = (int)local_360;
                          }
                          pFVar34 = local_350.AllocatorInstance.Data +
                                    (longlong)(local_350.ArrayNum + -1) * 0x88;
                          if (iVar18 < 1) {
                            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               );
                            if (bVar13) {
                              pcVar8 = (code *)swi(3);
                              uVar14 = (*pcVar8)();
                              return (bool)uVar14;
                            }
                            iVar18 = (int)local_360;
                          }
                          FVar30.Data = local_368.Data;
                          if (iVar18 <= iVar17) {
                            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               );
                            if (bVar13) {
                              pcVar8 = (code *)swi(3);
                              uVar14 = (*pcVar8)();
                              return (bool)uVar14;
                            }
                            iVar18 = (int)local_360;
                          }
                          if (((double)*(FPCGCrc *)FVar30.Data + dVar9 +
                              (double)*(float *)&pFVar34->field_0x0) -
                              *(double *)(local_368.Data + lVar35) < dVar10) goto LAB_149c6db10;
                        }
                        iVar17 = iVar17 + -1;
                        uVar37 = local_314 - 1;
                        lVar39 = lVar39 + -1;
                        lVar35 = local_250;
                        local_314 = uVar37;
                      } while (0 < iVar17);
                    }
                    uVar37 = 0;
                    if (cVar15 == '\0') {
                      if (local_350.ArrayNum < 1) {
                        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar13) {
                          pcVar8 = (code *)swi(3);
                          uVar14 = (*pcVar8)();
                          return (bool)uVar14;
                        }
                        iVar18 = (int)local_360;
                      }
                      local_2c0 = (FPCGCrc)(double)*(float *)local_350.AllocatorInstance.Data;
                      if ((local_368.Data <= &local_2c0) &&
                         (&local_2c0 < (FPCGCrc *)(local_368.Data + (longlong)local_360._4_4_ * 8)))
                      {
                        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           );
                        if (bVar13) {
                          pcVar8 = (code *)swi(3);
                          uVar14 = (*pcVar8)();
                          return (bool)uVar14;
                        }
                        iVar18 = (int)local_360;
                      }
                      if (iVar18 == local_360._4_4_) {
                        iVar18 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x808,&local_368,(int *)((longlong)&local_360 + 4));
                      }
                      local_360 = CONCAT44(local_360._4_4_,iVar18 + 1);
                      memmove((FPCGCrc *)(local_368.Data + 8),local_368.Data,(longlong)iVar18 << 3);
                      *(FPCGCrc *)local_368.Data = local_2c0;
                      uVar31 = 0;
                      if ((int)(local_350.ArrayNum - 1U) < local_350.ArrayNum) {
                        uVar31 = ~(local_350.ArrayNum - 1U) >> 0x1f;
                      }
                      if ((uVar31 == 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar13)) {
                        pcVar8 = (code *)swi(3);
                        uVar14 = (*pcVar8)();
                        return (bool)uVar14;
                      }
                      local_2b8 = (FPCGCrc)(double)*(float *)&local_350.AllocatorInstance.Data
                                                              [(longlong)(local_350.ArrayNum + -1) *
                                                               0x88].field_0x0;
                      if (((local_368.Data <= &local_2b8) &&
                          (&local_2b8 < (FPCGCrc *)(local_368.Data + (longlong)local_360._4_4_ * 8))
                          ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar13)) {
                        pcVar8 = (code *)swi(3);
                        uVar14 = (*pcVar8)();
                        return (bool)uVar14;
                      }
                      iVar17 = (int)local_360;
                      if ((int)local_360 == local_360._4_4_) {
                        iVar17 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x808,&local_368,(int *)((longlong)&local_360 + 4));
                      }
                      local_360 = CONCAT44(local_360._4_4_,iVar17 + 1);
                      *(FPCGCrc *)(local_368.Data + (longlong)iVar17 * 8) = local_2b8;
                    }
                    else {
                      if (iVar18 < 1) {
                        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar13) {
                          pcVar8 = (code *)swi(3);
                          uVar14 = (*pcVar8)();
                          return (bool)uVar14;
                        }
                        iVar18 = (int)local_360;
                      }
                      local_2c8 = *(FPCGCrc *)local_368.Data;
                      if ((local_368.Data <= &local_2c8) &&
                         (&local_2c8 < (FPCGCrc *)(local_368.Data + (longlong)local_360._4_4_ * 8)))
                      {
                        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           );
                        if (bVar13) {
                          pcVar8 = (code *)swi(3);
                          uVar14 = (*pcVar8)();
                          return (bool)uVar14;
                        }
                        iVar18 = (int)local_360;
                      }
                      if (iVar18 == local_360._4_4_) {
                        iVar18 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x808,&local_368,(int *)((longlong)&local_360 + 4));
                      }
                      local_360 = CONCAT44(local_360._4_4_,iVar18 + 1);
                      *(FPCGCrc *)(local_368.Data + (longlong)iVar18 * 8) = local_2c8;
                    }
                    FVar11 = local_340;
                    if (0 < (int)local_360 + -1) {
                      lVar35 = 0;
                      piVar2 = &(param_1->OutputData).TaggedData.ArrayMax;
                      do {
                        uVar31 = 0;
                        if ((int)uVar37 < (int)local_360) {
                          uVar31 = ~uVar37 >> 0x1f;
                        }
                        iVar17 = (int)local_360;
                        if (uVar31 == 0) {
                          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar13) {
                            pcVar8 = (code *)swi(3);
                            uVar14 = (*pcVar8)();
                            return (bool)uVar14;
                          }
                          iVar17 = (int)local_360;
                        }
                        uVar37 = uVar37 + 1;
                        dVar3 = *(double *)(local_368.Data + lVar35);
                        uVar31 = 0;
                        if ((int)uVar37 < iVar17) {
                          uVar31 = ~uVar37 >> 0x1f;
                        }
                        if ((uVar31 == 0) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar13)) {
                          pcVar8 = (code *)swi(3);
                          uVar14 = (*pcVar8)();
                          return (bool)uVar14;
                        }
                        lVar35 = lVar35 + 8;
                        dVar4 = *(double *)(local_368.Data + lVar35);
                        bVar13 = IsInGameThread();
                        if (bVar13) {
                          pUVar26 = GetTransientPackageAsObject();
                          this_01 = NewObject<UPCGSplineData>(pUVar26);
                        }
                        else {
                          if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
                             (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                                 (&bGEnsureHasExecuted<4331830188552749348>,false,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                                  ,0x124,"!AsyncState.bIsRunningOnMainThread"),
                             bVar13)) {
                            pcVar8 = (code *)swi(3);
                            uVar14 = (*pcVar8)();
                            return (bool)uVar14;
                          }
                          FGCScopeGuard::FGCScopeGuard(local_356);
                          pUVar26 = GetTransientPackageAsObject();
                          this_01 = NewObject<UPCGSplineData>(pUVar26);
                          FGCScopeGuard::~FGCScopeGuard(local_356);
                          if ((this_01 == (UPCGSplineData *)0x0) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Object",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                                  ,0x12a,L""), bVar13)) {
                            pcVar8 = (code *)swi(3);
                            uVar14 = (*pcVar8)();
                            return (bool)uVar14;
                          }
                          local_248[0] = this_01;
                          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                             (this_01 != (UPCGSplineData *)0x0)) {
                            UE::GC::MarkAsReachable((UObject *)this_01);
                          }
                          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                          ::Emplace<TObjectPtr<UObject>_>
                                    (&param_1->AsyncObjects,(TObjectPtr<UObject> *)local_260,
                                     (bool *)local_248);
                        }
                        UPCGSpatialData::InitializeFromData
                                  ((UPCGSpatialData *)this_01,(UPCGSpatialData *)FVar11.Handle,
                                   (UPCGMetadata *)0x0,true,true);
                        plVar12 = local_1b8;
                        iVar17 = local_350.ArrayNum;
                        local_1a8 = (FSplinePoint *)local_350.AllocatorInstance.Data;
                        if ((local_350.ArrayNum < 0) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("InCount >= 0",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0xeb,L""), bVar13)) {
                          pcVar8 = (code *)swi(3);
                          uVar14 = (*pcVar8)();
                          return (bool)uVar14;
                        }
                        iStack_1a0 = iVar17;
                        local_128.DataPtr = local_1a8;
                        local_138.DataPtr = plVar12;
                        PCGSplitSpline::SplitSpline
                                  ((UPCGSplineData *)FVar11.Handle,this_01,&local_128,&local_138,
                                   dVar3,dVar4);
                        if ((char)local_338.DebugPtr[1].Seed != '\0') {
                          pUVar21 = local_338.DebugPtr + 1;
                          FPCGAttributePropertySelector::GetName
                                    ((FPCGAttributePropertySelector *)&pUVar21->OriginalSettings);
                          this_02 = (UPCGMetadata *)
                                    (**(code **)(*(longlong *)this_01 + 0x328))(this_01);
                          this_03 = UPCGMetadata::GetMetadataDomainFromSelector
                                              (this_02,(FPCGAttributePropertySelector *)
                                                       &pUVar21->OriginalSettings);
                          if ((this_03 == (FPCGMetadataDomain *)0x0) ||
                             (pFVar27 = FPCGMetadataDomain::FindOrCreateAttribute<int>
                                                  (this_03,local_268,(int *)&local_320,false,true,
                                                   true),
                             pFVar27 == (FPCGMetadataAttribute<int> *)0x0)) {
                            pFVar23 = FText::FromName(&local_b8,&local_268);
                            pFVar24 = FText::AsLocalizable_Advanced_LocText
                                                (&local_118,L"PCGSplitSplinesElement",
                                                 L"FailedCreateIndexAttribute",
                                                 L"Failed to create the index attribute \'{0}\'.");
                            pFVar25 = FTextFormat::FTextFormat(&local_a8,pFVar24,Default);
                            local_178.Type = Text;
                            FText::FText((FText *)&local_178.TextValue,pFVar23);
                            if ((local_178.TextValue.field0_0x0.TypedValue.TextData.Reference ==
                                 (ITextData *)0x0) &&
                               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("IsSet()",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                                  ,0xbd,
                                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                                  ), bVar13)) {
                              pcVar8 = (code *)swi(3);
                              uVar14 = (*pcVar8)();
                              return (bool)uVar14;
                            }
                            local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                            local_298.ArrayNum = 1;
                            UE::Core::Private::
                            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x20,8,1,0,&local_298.AllocatorInstance,1,&local_298.ArrayMax
                                      );
                            ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                                      (local_298.AllocatorInstance.Data,&local_178,1);
                            local_198.TextFormatData.Object = (pFVar25->TextFormatData).Object;
                            local_198.TextFormatData.SharedReferenceCount.ReferenceController =
                                 (pFVar25->TextFormatData).SharedReferenceCount.ReferenceController;
                            if (local_198.TextFormatData.SharedReferenceCount.ReferenceController !=
                                (TReferenceControllerBase<1> *)0x0) {
                              LOCK();
                              (local_198.TextFormatData.SharedReferenceCount.ReferenceController)->
                              SharedReferenceCount =
                                   (atomic<int>)
                                   ((int)(local_198.TextFormatData.SharedReferenceCount.
                                         ReferenceController)->SharedReferenceCount + 1);
                              UNLOCK();
                            }
                            FText::Format(&local_188,&local_198,&local_298);
                            DestructItems<FFormatArgumentValue,int>
                                      ((FFormatArgumentValue *)local_298.AllocatorInstance.Data,
                                       local_298.ArrayNum);
                            if ((FFormatArgumentValue *)local_298.AllocatorInstance.Data !=
                                (FFormatArgumentValue *)0x0) {
                              FMemory::Free(local_298.AllocatorInstance.Data);
                            }
                            if (local_178.TextValue.field0_0x0.TypedValue.TextData.Reference !=
                                (ITextData *)0x0) {
                              (**(code **)((longlong)
                                           *(ITextData *)
                                            local_178.TextValue.field0_0x0.TypedValue.TextData.
                                            Reference + 0x10))();
                            }
                            SharedPointerInternals::TReferenceControllerBase<1>::
                            ReleaseSharedReferenceNoInline
                                      ((pFVar25->TextFormatData).SharedReferenceCount.
                                       ReferenceController);
                            pIVar7 = (pFVar23->TextData).Reference;
                            if (pIVar7 != (ITextData *)0x0) {
                              (**(code **)((longlong)*pIVar7 + 0x10))();
                            }
                            PCGLog::LogErrorOnGraph(&local_188,param_1);
                            if (local_188.TextData.Reference != (ITextData *)0x0) {
                              (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
                            }
                            if (local_118.TextData.Reference != (ITextData *)0x0) {
                              (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
                            }
                          }
                        }
                        TVar36 = local_2b0;
                        pFVar5 = (FObjectPtr_u_0 *)
                                 (((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                                  &(local_2b0.DebugPtr)->_padding_)->AllocatorInstance).Data;
                        if (((pFVar5 <= pFVar32) && (pFVar32 < pFVar5 + (longlong)*piVar2 * 0xf)) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar13)) {
                          pcVar8 = (code *)swi(3);
                          uVar14 = (*pcVar8)();
                          return (bool)uVar14;
                        }
                        iVar17 = (int)(TVar36.DebugPtr)->_padding_;
                        if (iVar17 == *piVar2) {
                          iVar17 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x878,(ForAnyElementType *)TVar36.DebugPtr,piVar2);
                        }
                        *(int *)&(TVar36.DebugPtr)->_padding_ = iVar17 + 1;
                        pFVar28 = FPCGTaggedData::FPCGTaggedData
                                            ((FPCGTaggedData *)
                                             ((((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>
                                                 *)&(TVar36.DebugPtr)->_padding_)->AllocatorInstance
                                              ).Data + (longlong)iVar17 * 0x78),
                                             (FPCGTaggedData *)pFVar32);
                        FPCGDataPtrWrapper::operator=(&pFVar28->Data,(UPCGData *)this_01);
                      } while ((int)uVar37 < (int)local_360 + -1);
                    }
                    if ((FPCGCrc *)local_368.Data != (FPCGCrc *)0x0) {
                      FMemory::Free(local_368.Data);
                    }
                    TVar36 = local_2b0;
                    if (local_350.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_350.AllocatorInstance.Data);
                      TVar36 = local_2b0;
                    }
                  }
                  goto LAB_149c6e42b;
                }
                uVar31 = (int)local_320 % local_278.ArrayNum;
                uVar37 = uVar16;
                if ((int)uVar31 < local_278.ArrayNum) {
                  uVar37 = ~uVar31 >> 0x1f;
                }
                if ((uVar37 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  uVar14 = (*pcVar8)();
                  return (bool)uVar14;
                }
                pUVar6 = *(UPCGData **)
                          &local_278.AllocatorInstance.Data[(longlong)(int)uVar31 * 0x78].field_0x0;
                FPCGAttributePropertyInputSelector::CopyAndFixLast
                          ((FPCGAttributePropertyInputSelector *)&local_338.DebugPtr[1]._padding_,
                           (FPCGAttributePropertyInputSelector *)&local_1f8,pUVar6);
                PCGAttributeAccessorHelpers::CreateConstAccessor
                          ((UPCGData *)(local_2e8 + 8),(FPCGAttributePropertySelector *)pUVar6,
                           SUB81(&local_1f8,0));
                PCGAttributeAccessorHelpers::CreateConstKeys
                          ((UPCGData *)local_2e8,(FPCGAttributePropertySelector *)pUVar6);
                if (((IPCGAttributeAccessor *)local_2e8._8_8_ == (IPCGAttributeAccessor *)0x0) ||
                   ((IPCGAttributeAccessorKeys *)local_2e8._0_8_ == (IPCGAttributeAccessorKeys *)0x0
                   )) {
                  PCGLog::Metadata::LogFailToCreateAccessorError(&local_1f8,param_1);
                  if ((IPCGAttributeAccessorKeys *)local_2e8._0_8_ !=
                      (IPCGAttributeAccessorKeys *)0x0) {
                    (**(code **)*(longlong *)local_2e8._0_8_)(local_2e8._0_8_,1);
                  }
                  if ((IPCGAttributeAccessor *)local_2e8._8_8_ != (IPCGAttributeAccessor *)0x0) {
                    (**(code **)*(longlong *)local_2e8._8_8_)(local_2e8._8_8_,1);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_1f8.ExtraNames.AllocatorInstance.Data,
                             local_1f8.ExtraNames.ArrayNum);
                  if (local_1f8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_1f8.ExtraNames.AllocatorInstance.Data);
                  }
                }
                else {
                  bVar13 = PCGAttributeAccessorHelpers::
                           ExtractAllValues<double,TSizedDefaultAllocator<32>_>
                                     ((IPCGAttributeAccessor *)local_2e8._8_8_,
                                      (IPCGAttributeAccessorKeys *)local_2e8._0_8_,&local_330,
                                      AllowBroadcastAndConstructible);
                  if (!bVar13) {
                    PCGLog::Metadata::LogFailToGetAttributeError(&local_1f8,param_1);
                  }
                  if ((IPCGAttributeAccessorKeys *)local_2e8._0_8_ !=
                      (IPCGAttributeAccessorKeys *)0x0) {
                    (**(code **)*(longlong *)local_2e8._0_8_)(local_2e8._0_8_,1);
                  }
                  if ((IPCGAttributeAccessor *)local_2e8._8_8_ != (IPCGAttributeAccessor *)0x0) {
                    (**(code **)*(longlong *)local_2e8._8_8_)(local_2e8._8_8_,1);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_1f8.ExtraNames.AllocatorInstance.Data,
                             local_1f8.ExtraNames.ArrayNum);
                  if (local_1f8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_1f8.ExtraNames.AllocatorInstance.Data);
                  }
                  if (bVar13) goto LAB_149c6cf0b;
                }
                pFVar5 = (FObjectPtr_u_0 *)
                         (((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                          &(TVar36.DebugPtr)->_padding_)->AllocatorInstance).Data;
                if (((pFVar5 <= pFVar32) &&
                    (pFVar32 < pFVar5 + (longlong)
                                        *(int *)((longlong)&(TVar36.DebugPtr)->_padding_ + 4) * 0xf)
                    ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  uVar14 = (*pcVar8)();
                  return (bool)uVar14;
                }
                iVar17 = (int)(TVar36.DebugPtr)->_padding_;
                piVar2 = (int *)((longlong)&(TVar36.DebugPtr)->_padding_ + 4);
                if (iVar17 == *piVar2) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x878,(ForAnyElementType *)TVar36.DebugPtr,piVar2);
                }
                *(int *)&(TVar36.DebugPtr)->_padding_ = iVar17 + 1;
                FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                             &(TVar36.DebugPtr)->_padding_)->AllocatorInstance).Data +
                           (longlong)iVar17 * 0x78),(FPCGTaggedData *)pFVar32);
                FVar30.Data = local_330.AllocatorInstance.Data;
              }
LAB_149c6cbd1:
              if ((FPCGCrc *)FVar30.Data != (FPCGCrc *)0x0) {
                FMemory::Free(FVar30.Data);
              }
              if ((FPCGCrc *)local_368.Data != (FPCGCrc *)0x0) {
                FMemory::Free(local_368.Data);
              }
              if (local_350.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_350.AllocatorInstance.Data);
              }
            }
          }
        }
        else if ((UPCGSplineData *)local_288.Handle != (UPCGSplineData *)0x0) {
          UE::GC::MarkAsReachable(local_288.Handle);
          goto LAB_149c6c94a;
        }
LAB_149c6e42b:
        local_320 = local_320 + 1;
      } while ((int)local_320 < local_2a8.ArrayNum);
    }
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_278.AllocatorInstance.Data,local_278.ArrayNum);
  if ((FPCGTaggedData *)local_278.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_278.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_2a8.AllocatorInstance.Data,local_2a8.ArrayNum);
  if ((FPCGTaggedData *)local_2a8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_2a8.AllocatorInstance.Data);
  }
  if (bVar40) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149c75b50

EPCGElementExecutionLoopMode __thiscall
FPCGSplitSplineElement::ExecutionLoopMode(FPCGSplitSplineElement *this,UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UPCGSettings *)0x0) {
    pUVar2 = UPCGSplitSplinesSettings::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) &&
       ((*(char *)((longlong)&param_1[1]._padding_ + 4) != '\0' || ((int)param_1[1]._padding_ == 3))
       )) {
      return SinglePrimaryPin;
    }
  }
  return NotALoop;
}

