// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// CanExecuteOnlyOnMainThread @ 149c5d6a0

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
FPCGVisualizeAttribute::CanExecuteOnlyOnMainThread
          (FPCGVisualizeAttribute *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149c72590

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGVisualizeAttribute::ExecuteInternal(FPCGVisualizeAttribute *this,FPCGContext *param_1)

{
  double *pdVar1;
  UPCGNode *this_00;
  IPCGGraphExecutionSource *pIVar2;
  FName FVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  TSet<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar8;
  float fVar9;
  wchar_t *pwVar10;
  undefined8 uVar11;
  undefined8 this_01;
  FObjectPtr_u_0 FVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  UClass *pUVar18;
  UPCGSettings *pUVar19;
  TObjectPtr<UPCGSettings>_u_0 TVar20;
  FPCGTaggedData *pFVar21;
  UPCGComponent *pUVar22;
  FText *pFVar23;
  AActor *this_02;
  FString *pFVar24;
  FName *pFVar25;
  UPCGDebugDrawComponent *pUVar26;
  UPCGManagedResource *pUVar27;
  void *pvVar28;
  FTextFormat *pFVar29;
  ulonglong uVar30;
  TRefCountPtr<ITextData> TVar31;
  longlong *plVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulong64 uVar35;
  int iVar36;
  uint uVar37;
  FObjectPtr_u_0 *pFVar38;
  FScriptContainerElement *pFVar39;
  TObjectPtr<UPCGMetadata>_u_0 TVar40;
  uint uVar41;
  ForAnyElementType FVar42;
  bool bVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auStackY_4e8 [32];
  <lambda_1> local_4a7 [7];
  ForAnyElementType local_4a0;
  int local_498 [2];
  undefined1 local_490 [8];
  FObjectPtr_u_0 *local_488;
  TObjectPtr<UPCGSettings>_u_0 local_480;
  UPCGDebugDrawComponent *local_478;
  ForAnyElementType local_470;
  undefined8 local_468;
  TStringBuilderBase<wchar_t> local_460;
  undefined1 local_440 [16];
  FPCGContext *local_430;
  FObjectPtr_u_0 *local_428;
  uint local_420;
  uint local_41c;
  TObjectPtr<UPCGSettings>_u_0 local_418;
  FObjectPtr_u_0 local_410;
  TObjectPtr<UPCGMetadata>_u_0 local_408;
  TObjectPtr<UPCGMetadata>_u_0 local_400;
  ulonglong local_3f8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_3f0;
  undefined8 local_3e0;
  FString local_3d8;
  FLinearColor_u_0 local_3c8;
  FPCGAttributePropertySelector local_3b8;
  FString local_378;
  FString local_368;
  UClass *local_358;
  UPCGComponent *local_350;
  UPCGDebugDrawComponent *local_348;
  FString local_340;
  FScriptContainerElement *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  FText local_318;
  FText3d *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  FText local_2f8;
  TArrayView<FString,int> local_2e8;
  FText local_2d8;
  FText local_2c8;
  FString local_2b8;
  TArrayView<FDebugRenderSceneProxy::FText3d,int> local_2a8;
  FText local_298;
  FString local_288;
  FText local_278;
  FText local_268;
  FText local_258;
  FText local_248;
  undefined1 local_238 [16];
  ForAnyElementType local_228;
  FName local_220;
  double local_218;
  double dStack_210;
  double local_208;
  FTextFormat local_200;
  undefined1 local_1e8 [128];
  undefined1 local_168 [128];
  longlong local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  bVar43 = -1 < CpuChannel->Enabled;
  local_430 = param_1;
  if (bVar43) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId22,"FPCGVisualizeAttribute::ExecuteInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVisualizeAttribute.cpp"
               ,0x16);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId22);
  }
  bVar13 = IsInGameThread();
  if ((!bVar13) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVisualizeAttribute.cpp"
                          ,0x17,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    uVar14 = (*pcVar4)();
    return (bool)uVar14;
  }
  FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar19 = UPCGNode::GetSettings(this_00), pUVar19 == (UPCGSettings *)0x0)) {
      pFVar21 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGVisualizeAttributeSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_4a7[0]);
      if (pFVar21 != (FPCGTaggedData *)0x0) {
        local_418.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar21->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_418.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_418.DebugPtr);
        }
        if (local_418.DebugPtr != (UPCGSettings *)0x0) {
          pUVar18 = UPCGVisualizeAttributeSettings::StaticClass();
          bVar13 = FObjectPtr::IsA(&local_418.ObjectPtr,pUVar18);
          if (bVar13) {
            local_480.DebugPtr = local_418.DebugPtr;
            TVar20 = local_418;
            goto LAB_149c72756;
          }
        }
      }
    }
    else {
      pUVar19 = UPCGNode::GetSettings(this_00);
      TVar20.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar19);
      if (TVar20.DebugPtr != (UPCGSettings *)0x0) {
        local_480.DebugPtr = TVar20.DebugPtr;
        pUVar18 = UPCGVisualizeAttributeSettings::StaticClass();
        iVar15 = (int)pUVar18->_padding_;
        if ((iVar15 <= *(int *)((TVar20.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar20.DebugPtr)->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
            &pUVar18->_padding_)) goto LAB_149c72756;
      }
    }
LAB_149c7274e:
    local_480.DebugPtr = (UPCGSettings *)0x0;
    TVar20.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar18 = UPCGVisualizeAttributeSettings::StaticClass();
    bVar13 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar18);
    if (!bVar13) goto LAB_149c7274e;
    local_480 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    TVar20 = local_480;
  }
LAB_149c72756:
  if ((TVar20.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVisualizeAttribute.cpp"
                          ,0x1d,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    uVar14 = (*pcVar4)();
    return (bool)uVar14;
  }
  if ((char)TVar20.DebugPtr[1].CacheLock.CriticalSection.Opaque2[1] != '\0') {
    if (((((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
         (bVar13 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar13)) &&
        (pIVar2 = (param_1->ExecutionSource).InterfaceInstance,
        pIVar2 != (IPCGGraphExecutionSource *)0x0)) &&
       (pUVar22 = (UPCGComponent *)(**(code **)((longlong)*pIVar2 + 8))(), local_350 = pUVar22,
       pUVar22 != (UPCGComponent *)0x0)) {
      pUVar18 = Z_Construct_UClass_UPCGComponent_NoRegister();
      iVar15 = (int)pUVar18->_padding_;
      if ((iVar15 <= *(int *)(pUVar22->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
          &pUVar18->_padding_)) {
        local_400.DebugPtr = (UPCGMetadata *)0x0;
        local_3f8 = 0;
        FPCGDataCollection::GetInputsByPin
                  (&param_1->InputData,&local_3f0,&PCGPinConstants::DefaultInputLabel);
        fVar9 = __real_3b808081;
        uVar30 = (ulonglong)local_3f0.ArrayNum;
        local_41c = local_3f0.ArrayNum;
        pFVar38 = (FObjectPtr_u_0 *)(local_3f0.AllocatorInstance.Data + uVar30 * 0x78);
        uVar34 = uVar30;
        FVar42.Data = local_3f0.AllocatorInstance.Data;
        local_428 = pFVar38;
        while( true ) {
          local_488 = (FObjectPtr_u_0 *)FVar42.Data;
          if ((int)uVar30 != (int)uVar34) {
            local_490[0] = 0;
            `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_490);
          }
          if ((FObjectPtr_u_0 *)FVar42.Data == pFVar38) break;
          local_410 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar42.Data;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c728a2:
            if ((UPCGSpatialData *)local_410.Handle == (UPCGSpatialData *)0x0) goto LAB_149c73683;
            pUVar18 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
            bVar13 = FObjectPtr::IsA((FObjectPtr *)&local_410,pUVar18);
            FVar12 = local_410;
            if ((!bVar13) ||
               (FVar42.Data = (FScriptContainerElement *)local_488,
               (UPCGSpatialData *)local_410.Handle == (UPCGSpatialData *)0x0)) goto LAB_149c73683;
            iVar15 = (**(code **)(*(longlong *)local_410.Handle + 0x488))(local_410.Handle);
            FVar42.Data = (FScriptContainerElement *)local_488;
            if (iVar15 == 0) goto LAB_149c72c7b;
            if (*(longlong *)&FVar12.Handle[1].field_0x10 == 0) {
              pFVar23 = FText::AsLocalizable_Advanced_LocText
                                  (&local_2f8,L"PCGVisualizeAttributeElement",L"InvalidMetadata",
                                   L"Input has no metadata.");
              PCGLog::LogErrorOnGraph(pFVar23,param_1);
              FVar42.Data = (FScriptContainerElement *)local_488;
              if (local_2f8.TextData.Reference == (ITextData *)0x0) goto LAB_149c72c7b;
              (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
              uVar30 = (ulonglong)(uint)local_3f0.ArrayNum;
              FVar42.Data = (FScriptContainerElement *)(local_488 + 0xf);
              uVar34 = (ulonglong)local_41c;
            }
            else {
              FPCGAttributePropertyInputSelector::CopyAndFixLast
                        ((FPCGAttributePropertyInputSelector *)(TVar20.DebugPtr + 1),
                         (FPCGAttributePropertyInputSelector *)&local_3b8,(UPCGData *)FVar12.Handle)
              ;
              PCGAttributeAccessorHelpers::CreateConstAccessor
                        ((UPCGData *)(local_440 + 8),(FPCGAttributePropertySelector *)FVar12.Handle,
                         SUB81(&local_3b8,0));
              PCGAttributeAccessorHelpers::CreateConstKeys
                        ((UPCGData *)local_440,(FPCGAttributePropertySelector *)FVar12.Handle);
              if (((IPCGAttributeAccessor *)local_440._8_8_ == (IPCGAttributeAccessor *)0x0) ||
                 ((IPCGAttributeAccessorKeys *)local_440._0_8_ == (IPCGAttributeAccessorKeys *)0x0))
              {
                pFVar24 = FPCGAttributePropertySelector::ToString(&local_3b8,&local_288,false);
                FText::FromString(&local_278,pFVar24);
                if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_288.Data.AllocatorInstance.Data);
                }
                pFVar23 = FText::AsLocalizable_Advanced_LocText
                                    (&local_258,L"PCGVisualizeAttributeElement",
                                     L"AttributeDoesNotExist",
                                     L"Input attribute/property \'{0}\' does not exist - skipped.");
                pFVar29 = FTextFormat::FTextFormat(&local_200,pFVar23,Default);
                pFVar23 = FText::Format<FText>(&local_268,pFVar29,&local_278);
                PCGLog::LogWarningOnGraph(pFVar23,param_1);
                if (local_268.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
                }
                if (local_258.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
                }
                if ((IPCGAttributeAccessorKeys *)local_440._0_8_ != (IPCGAttributeAccessorKeys *)0x0
                   ) {
                  (**(code **)*(longlong *)local_440._0_8_)(local_440._0_8_,1);
                }
                if ((IPCGAttributeAccessor *)local_440._8_8_ != (IPCGAttributeAccessor *)0x0) {
                  (**(code **)*(longlong *)local_440._8_8_)(local_440._8_8_,1);
                }
                DestructItems<FString,int>
                          ((FString *)local_3b8.ExtraNames.AllocatorInstance.Data,
                           local_3b8.ExtraNames.ArrayNum);
                FVar42.Data = (FScriptContainerElement *)local_488;
                if (local_3b8.ExtraNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
                goto LAB_149c72c7b;
                FMemory::Free(local_3b8.ExtraNames.AllocatorInstance.Data);
                uVar30 = (ulonglong)(uint)local_3f0.ArrayNum;
                FVar42.Data = (FScriptContainerElement *)(local_488 + 0xf);
                uVar34 = (ulonglong)local_41c;
              }
              else {
                local_4a0.Data = (FScriptContainerElement *)0x0;
                local_498[0] = 0;
                local_498[1] = 0;
                uVar16 = (**(code **)(*(longlong *)local_440._0_8_ + 0x10))();
                local_420 = uVar16;
                if (uVar16 != 0) {
                  uVar41 = 0;
                  if (local_498[0] < (int)uVar16) {
                    iVar36 = uVar16 - local_498[0];
                    iVar15 = UE::Core::Private::
                             ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x10,8,iVar36,&local_4a0,local_498,local_498 + 1);
                    memset(local_4a0.Data + (longlong)iVar15 * 0x10,0,(longlong)iVar36 << 4);
LAB_149c72b57:
                    iVar15 = local_498[0];
                  }
                  else {
                    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
                    }
                    iVar15 = local_498[0];
                    if ((int)uVar16 < local_498[0]) {
                      uVar37 = local_498[0] - uVar16;
                      uVar17 = uVar41;
                      if ((int)(uVar37 + uVar16) <= local_498[0]) {
                        uVar17 = ~uVar37 >> 0x1f;
                      }
                      if (uVar17 == 0) {
                        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           );
                        if (bVar13) {
                          pcVar4 = (code *)swi(3);
                          uVar14 = (*pcVar4)();
                          return (bool)uVar14;
                        }
                        iVar15 = local_498[0];
                      }
                      if (uVar37 != 0) {
                        pFVar39 = local_4a0.Data + (longlong)(int)uVar16 * 0x10;
                        DestructItems<FString,int>((FString *)pFVar39,uVar37);
                        iVar15 = (local_498[0] - uVar16) - uVar37;
                        if (iVar15 != 0) {
                          memmove(pFVar39,pFVar39 + (longlong)(int)uVar37 * 0x10,
                                  (longlong)iVar15 << 4);
                        }
                        iVar15 = local_498[0] - uVar37;
                        local_498[0] = iVar15;
                        UE::Core::Private::
                        ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x10,8,&local_4a0,iVar15,local_498 + 1);
                        goto LAB_149c72b57;
                      }
                    }
                  }
                  this_01 = local_440._8_8_;
                  uVar11 = local_440._0_8_;
                  local_328 = local_4a0.Data;
                  if ((iVar15 < 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xeb,L""), bVar13)) {
                    pcVar4 = (code *)swi(3);
                    uVar14 = (*pcVar4)();
                    return (bool)uVar14;
                  }
                  local_2e8._12_4_ = uStack_31c;
                  local_2e8.ArrayNum = iVar15;
                  local_2e8.DataPtr = (FString *)local_328;
                  iStack_320 = iVar15;
                  bVar13 = IPCGAttributeAccessor::GetRange<FString>
                                     ((IPCGAttributeAccessor *)this_01,&local_2e8,0,
                                      (IPCGAttributeAccessorKeys *)uVar11,AllowBroadcast);
                  param_1 = local_430;
                  if (bVar13) {
                    local_478 = (UPCGDebugDrawComponent *)0x0;
                    this_02 = FPCGContext::GetTargetActor
                                        (local_430,(UPCGSpatialData *)FVar12.Handle);
                    if (this_02 != (AActor *)0x0) {
                      pcVar4 = *(code **)(this_02->_padding_ + 0x738);
                      local_358 = Z_Construct_UClass_UPCGDebugDrawComponent_NoRegister();
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (local_358 != (UClass *)0x0)) {
                        UE::GC::MarkAsReachable((UObject *)local_358);
                      }
                      local_478 = (UPCGDebugDrawComponent *)(*pcVar4)(this_02,&local_358);
                      if (local_478 == (UPCGDebugDrawComponent *)0x0) {
                        pFVar23 = FText::AsLocalizable_Advanced_LocText
                                            (&local_2c8,L"PCGVisualizeAttributeElement",
                                             L"PCGDebugDrawComponent",L"PCG Debug Draw Component");
                        pFVar24 = FText::ToString(pFVar23);
                        iVar15 = (pFVar24->Data).ArrayNum;
                        uVar16 = iVar15 - 1;
                        if (iVar15 == 0) {
                          uVar16 = uVar41;
                        }
                        pFVar25 = ::FName::FName(&local_220,uVar16,
                                                 (wchar_t *)(pFVar24->Data).AllocatorInstance.Data,
                                                 0x40);
                        local_3e0 = 0;
                        FVar3 = *pFVar25;
                        if (FVar3 == (FName)0x0) {
                          FObjectInitializer::AssertIfInConstructor
                                    ((UObject *)this_02,
                                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                                    );
                        }
                        pUVar18 = Z_Construct_UClass_UPCGDebugDrawComponent_NoRegister();
                        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                                  ((FStaticConstructObjectParameters *)local_1e8,pUVar18);
                        local_1e8._48_8_ = (FObjectInstancingGraph *)0x0;
                        local_1e8._56_8_ = (UPackage *)0x0;
                        local_1e8._24_4_ = RF_NoFlags;
                        local_1e8._40_8_ = (UObject *)0x0;
                        local_1e8[0x20] = false;
                        local_1e8._8_8_ = this_02;
                        local_1e8._16_8_ = FVar3;
                        pUVar26 = (UPCGDebugDrawComponent *)
                                  StaticConstructObject_Internal
                                            ((FStaticConstructObjectParameters *)local_1e8);
                        if (local_1e8._64_8_ != 0) {
                          plVar32 = (longlong *)(local_1e8 + 0x50);
                          if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
                            plVar32 = (longlong *)local_1e8._104_8_;
                          }
                          (**(code **)(*plVar32 + 0x10))();
                        }
                        local_478 = pUVar26;
                        if (local_2c8.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
                        }
                        UActorComponent::RegisterComponent((UActorComponent *)local_478);
                        AActor::AddInstanceComponent(this_02,(UActorComponent *)local_478);
                        pUVar22 = local_350;
                        FObjectInitializer::AssertIfInConstructor
                                  ((UObject *)local_350,
                                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                                  );
                        pUVar18 = Z_Construct_UClass_UPCGManagedDebugDrawComponent_NoRegister();
                        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                                  ((FStaticConstructObjectParameters *)local_168,pUVar18);
                        local_168._8_8_ = pUVar22;
                        pUVar27 = (UPCGManagedResource *)
                                  StaticConstructObject_Internal
                                            ((FStaticConstructObjectParameters *)local_168);
                        if (local_168._64_8_ != 0) {
                          plVar32 = (longlong *)(local_168 + 0x50);
                          if ((longlong *)local_168._104_8_ != (longlong *)0x0) {
                            plVar32 = (longlong *)local_168._104_8_;
                          }
                          (**(code **)(*plVar32 + 0x10))();
                        }
                        local_348 = local_478;
                        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                           (local_478 != (UPCGDebugDrawComponent *)0x0)) {
                          UE::GC::MarkAsReachable((UObject *)local_478);
                        }
                        FSoftObjectPtr::operator=
                                  ((FSoftObjectPtr *)(pUVar27 + 1),(FObjectPtr)&local_348);
                        UPCGComponent::AddToManagedResources(pUVar22,pUVar27);
                      }
                      (**(code **)(*(longlong *)FVar12.Handle + 0x500))(FVar12.Handle,&local_e8);
                      TVar20 = local_480;
                      local_470.Data = (FScriptContainerElement *)0x0;
                      local_468 = 0;
                      uVar16 = local_480.DebugPtr[1].CacheLock.CriticalSection.Opaque2[0];
                      uVar17 = (**(code **)(*(longlong *)FVar12.Handle + 0x488))(FVar12.Handle);
                      if ((int)uVar17 < (int)uVar16) {
                        uVar16 = uVar17;
                      }
                      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
                        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
                      }
                      if (local_468._4_4_ < (int)uVar16) {
                        UE::Core::Private::
                        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x30,8,uVar16,&local_470,(int)local_468,
                                   (int *)((longlong)&local_468 + 4));
                      }
                      uVar17 = local_420;
                      if (0 < (int)uVar16) {
                        local_408.DebugPtr = (UPCGMetadata *)0x0;
                        iVar15 = 0;
                        do {
                          iVar36 = (int)TVar20.DebugPtr[1]._padding_;
                          pvVar28 = (void *)TVar20.DebugPtr[1]._padding_;
                          local_460.Base = (wchar_t *)0x0;
                          local_460.CurPos = (wchar_t *)0x0;
                          local_460.End = (wchar_t *)0x0;
                          local_460.bIsDynamic = false;
                          local_460.bIsExternal = false;
                          uVar37 = iVar36 - 1;
                          if (iVar36 == 0) {
                            uVar37 = uVar41;
                          }
                          uVar35 = (longlong)(int)uVar37 * 2;
                          if (uVar35 != 0) {
                            TStringBuilderBase<wchar_t>::Extend(&local_460,(longlong)(int)uVar37);
                          }
                          if (uVar37 != 0) {
                            pvVar28 = FGenericPlatformString::Memcpy
                                                (local_460.CurPos,pvVar28,uVar35);
                            local_460.CurPos = (wchar_t *)((longlong)pvVar28 + uVar35);
                          }
                          if ((char)local_480.DebugPtr[1].Seed != '\0') {
                            ::FString::PrintfImpl(&local_378,L"[%d]");
                            FVar42.Data = local_378.Data.AllocatorInstance.Data;
                            uVar37 = uVar41;
                            if (local_378.Data.ArrayNum != 0) {
                              uVar37 = local_378.Data.ArrayNum - 1;
                            }
                            uVar35 = (ulong64)(int)uVar37;
                            if (local_460.End < local_460.CurPos + uVar35) {
                              TStringBuilderBase<wchar_t>::Extend(&local_460,uVar35);
                            }
                            if (uVar37 != 0) {
                              pvVar28 = FGenericPlatformString::Memcpy
                                                  (local_460.CurPos,FVar42.Data,uVar35 * 2);
                              local_460.CurPos = (wchar_t *)((longlong)pvVar28 + uVar35 * 2);
                            }
                            if (local_378.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_378.Data.AllocatorInstance.Data);
                            }
                          }
                          if (*(char *)((longlong)&local_480.DebugPtr[1].Seed + 1) != '\0') {
                            pFVar24 = FPCGAttributePropertySelector::ToString
                                                (&local_3b8,&local_2b8,false);
                            FText::FromString(&local_318,pFVar24);
                            if (local_2b8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                            }
                            FText::ToString(&local_318);
                            ::FString::PrintfImpl(&local_368,L"[%s]");
                            FVar42.Data = local_368.Data.AllocatorInstance.Data;
                            uVar37 = uVar41;
                            if (local_368.Data.ArrayNum != 0) {
                              uVar37 = local_368.Data.ArrayNum - 1;
                            }
                            uVar35 = (ulong64)(int)uVar37;
                            if (local_460.End < local_460.CurPos + uVar35) {
                              TStringBuilderBase<wchar_t>::Extend(&local_460,uVar35);
                            }
                            if (uVar37 != 0) {
                              pvVar28 = FGenericPlatformString::Memcpy
                                                  (local_460.CurPos,FVar42.Data,uVar35 * 2);
                              local_460.CurPos = (wchar_t *)((longlong)pvVar28 + uVar35 * 2);
                            }
                            if (local_368.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_368.Data.AllocatorInstance.Data);
                            }
                            if (local_318.TextData.Reference != (ITextData *)0x0) {
                              (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
                            }
                          }
                          uVar37 = uVar41;
                          if (iVar15 % (int)uVar17 < local_498[0]) {
                            uVar37 = (uint)~(iVar15 % (int)uVar17) >> 0x1f;
                          }
                          if ((uVar37 == 0) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar13)) {
                            pcVar4 = (code *)swi(3);
                            uVar14 = (*pcVar4)();
                            return (bool)uVar14;
                          }
                          if (local_460.End < local_460.CurPos + 1) {
                            TStringBuilderBase<wchar_t>::Extend(&local_460,1);
                          }
                          *local_460.CurPos = L'\0';
                          ::FString::PrintfImpl(&local_3d8,L"%s %s");
                          FVar42.Data = local_3d8.Data.AllocatorInstance.Data;
                          uVar37 = uVar41;
                          if (local_3d8.Data.ArrayNum != 0) {
                            uVar37 = local_3d8.Data.ArrayNum - 1;
                          }
                          uVar35 = (ulong64)(int)uVar37;
                          local_460.CurPos = local_460.Base;
                          if (local_460.End < local_460.Base + uVar35) {
                            TStringBuilderBase<wchar_t>::Extend(&local_460,uVar35);
                          }
                          if (uVar37 != 0) {
                            pvVar28 = FGenericPlatformString::Memcpy
                                                (local_460.CurPos,FVar42.Data,uVar35 * 2);
                            local_460.CurPos = (wchar_t *)((longlong)pvVar28 + uVar35 * 2);
                          }
                          if (local_3d8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
                          }
                          if ((local_d8 <= iVar15) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < NumElements)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                                  ,0x8b,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                 ), bVar13)) {
                            pcVar4 = (code *)swi(3);
                            uVar14 = (*pcVar4)();
                            return (bool)uVar14;
                          }
                          TVar20 = local_480;
                          lVar33 = (longlong)(iVar15 % local_dc) * (longlong)local_e0;
                          pdVar1 = (double *)(lVar33 + 0x20 + local_e8);
                          local_218 = *pdVar1;
                          dStack_210 = pdVar1[1];
                          local_208 = *(double *)(lVar33 + 0x30 + local_e8);
                          dVar7 = local_218 + (double)local_480.DebugPtr[1].OriginalSettings;
                          local_228.Data =
                               (FScriptContainerElement *)
                               (local_208 + (double)local_480.DebugPtr[1].CachedElement.Object);
                          dVar6 = dStack_210 + *(double *)&local_480.DebugPtr[1].bUseSeed;
                          uVar44 = SUB84(dVar6,0);
                          uVar45 = (undefined4)((ulonglong)dVar6 >> 0x20);
                          if (local_460.End < local_460.CurPos + 1) {
                            TStringBuilderBase<wchar_t>::Extend(&local_460,1);
                          }
                          pwVar10 = local_460.Base;
                          *local_460.CurPos = L'\0';
                          iVar36 = (int)local_468;
                          if ((int)local_468 == local_468._4_4_) {
                            iVar36 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x830,&local_470,(int *)((longlong)&local_468 + 4));
                          }
                          local_468 = CONCAT44(local_468._4_4_,iVar36 + 1);
                          pFVar39 = local_470.Data + (longlong)iVar36 * 0x30;
                          local_3c8._s_0.R =
                               FLinearColor::sRGBToLinearTable
                               [*(byte *)((longlong)
                                          &TVar20.DebugPtr[1].CachedElement.SharedReferenceCount.
                                           ReferenceController + 2)];
                          local_3c8._s_0.G =
                               FLinearColor::sRGBToLinearTable
                               [*(byte *)((longlong)
                                          &TVar20.DebugPtr[1].CachedElement.SharedReferenceCount.
                                           ReferenceController + 1)];
                          local_3c8._s_0.B =
                               FLinearColor::sRGBToLinearTable
                               [*(byte *)&TVar20.DebugPtr[1].CachedElement.SharedReferenceCount.
                                          ReferenceController];
                          local_3c8._s_0.A =
                               (float)*(byte *)((longlong)
                                                &TVar20.DebugPtr[1].CachedElement.
                                                 SharedReferenceCount.ReferenceController + 3) *
                               fVar9;
                          ::FString::FString(&local_340,pwVar10);
                          FVar42.Data = local_340.Data.AllocatorInstance.Data;
                          lVar33 = (longlong)local_340.Data.ArrayNum;
                          *(FScriptContainerElement **)&pFVar39->field_0x0 =
                               (FScriptContainerElement *)0x0;
                          *(int *)(pFVar39 + 8) = local_340.Data.ArrayNum;
                          if (local_340.Data.ArrayNum == 0) {
                            *(int *)(pFVar39 + 0xc) = 0;
                          }
                          else {
                            UE::Core::Private::
                            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (2,2,local_340.Data.ArrayNum,0,(ForAnyElementType *)pFVar39,
                                       local_340.Data.ArrayNum,(int *)(pFVar39 + 0xc));
                            memcpy(*(FScriptContainerElement **)&pFVar39->field_0x0,FVar42.Data,
                                   lVar33 * 2);
                          }
                          auVar5._8_4_ = uVar44;
                          auVar5._0_8_ = dVar7;
                          auVar5._12_4_ = uVar45;
                          *(undefined1 (*) [16])(pFVar39 + 0x10) = auVar5;
                          local_238._8_4_ = uVar44;
                          local_238._0_8_ = dVar7;
                          local_238._12_4_ = uVar45;
                          *(FScriptContainerElement **)(pFVar39 + 0x20) = local_228.Data;
                          FLinearColor::ToFColorSRGB((FLinearColor *)&local_3c8._s_0);
                          if (local_340.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_340.Data.AllocatorInstance.Data);
                          }
                          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_460);
                          local_408.DebugPtr =
                               (UPCGMetadata *)((longlong)&(local_408.DebugPtr)->_padding_ + 1);
                          iVar15 = iVar15 + 1;
                          TVar20 = local_480;
                        } while (iVar15 < (int)uVar16);
                      }
                      if ((local_478 == (UPCGDebugDrawComponent *)0x0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("DebugDrawComponent",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVisualizeAttribute.cpp"
                                              ,0x96,L""), bVar13)) {
                        pcVar4 = (code *)swi(3);
                        uVar14 = (*pcVar4)();
                        return (bool)uVar14;
                      }
                      iVar15 = (int)local_468;
                      local_308 = (FText3d *)local_470.Data;
                      if (((int)local_468 < 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("InCount >= 0",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0xeb,L""), bVar13)) {
                        pcVar4 = (code *)swi(3);
                        uVar14 = (*pcVar4)();
                        return (bool)uVar14;
                      }
                      iStack_300 = iVar15;
                      local_2a8._12_4_ = uStack_2fc;
                      local_2a8.ArrayNum = iVar15;
                      local_2a8.DataPtr = local_308;
                      UPCGDebugDrawComponent::AddDebugStrings(local_478,&local_2a8);
                      TArray<UPCGDebugDrawComponent_*,TSizedDefaultAllocator<32>_>::
                      AddUniqueImpl<UPCGDebugDrawComponent_*_const_&>
                                ((TArray<UPCGDebugDrawComponent_*,TSizedDefaultAllocator<32>_> *)
                                 &local_400.ObjectPtr,&local_478);
                      DestructItems<FDebugRenderSceneProxy::FText3d,int>
                                ((FText3d *)local_470.Data,(int)local_468);
                      if ((FText3d *)local_470.Data != (FText3d *)0x0) {
                        FMemory::Free(local_470.Data);
                      }
                      DestructItems<FString,int>((FString *)local_4a0.Data,local_498[0]);
                      if (local_4a0.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_4a0.Data);
                      }
                      if ((IPCGAttributeAccessorKeys *)local_440._0_8_ !=
                          (IPCGAttributeAccessorKeys *)0x0) {
                        (**(code **)*(longlong *)local_440._0_8_)(local_440._0_8_,1);
                      }
                      if ((IPCGAttributeAccessor *)local_440._8_8_ != (IPCGAttributeAccessor *)0x0)
                      {
                        (**(code **)*(longlong *)local_440._8_8_)(local_440._8_8_,1);
                      }
                      DestructItems<FString,int>
                                ((FString *)local_3b8.ExtraNames.AllocatorInstance.Data,
                                 local_3b8.ExtraNames.ArrayNum);
                      pFVar38 = local_428;
                      TVar20 = local_480;
                      FVar42.Data = (FScriptContainerElement *)local_488;
                      param_1 = local_430;
                      if (local_3b8.ExtraNames.AllocatorInstance.Data !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_3b8.ExtraNames.AllocatorInstance.Data);
                        pFVar38 = local_428;
                        TVar20 = local_480;
                        FVar42.Data = (FScriptContainerElement *)local_488;
                        param_1 = local_430;
                      }
                      goto LAB_149c72c7b;
                    }
                    pFVar23 = FText::AsLocalizable_Advanced_LocText
                                        (&local_298,L"PCGVisualizeAttributeElement",L"NoTargetActor"
                                         ,L"Internal error: Could not find target actor.");
                    PCGLog::LogErrorOnGraph(pFVar23,param_1);
                    TVar31.Reference = local_298.TextData.Reference;
                  }
                  else {
                    pFVar23 = FText::AsLocalizable_Advanced_LocText
                                        (&local_2d8,L"PCGVisualizeAttributeElement",L"InvalidValues"
                                         ,L"Could not get the range of attribute values.");
                    param_1 = local_430;
                    PCGLog::LogErrorOnGraph(pFVar23,local_430);
                    TVar31.Reference = local_2d8.TextData.Reference;
                  }
                  if (TVar31.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*TVar31.Reference + 0x10))();
                  }
                  DestructItems<FString,int>((FString *)local_4a0.Data,local_498[0]);
                  if (local_4a0.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_4a0.Data);
                  }
                  if ((IPCGAttributeAccessorKeys *)local_440._0_8_ !=
                      (IPCGAttributeAccessorKeys *)0x0) {
                    (**(code **)*(longlong *)local_440._0_8_)(local_440._0_8_,1);
                  }
                  if ((IPCGAttributeAccessor *)local_440._8_8_ != (IPCGAttributeAccessor *)0x0) {
                    (**(code **)*(longlong *)local_440._8_8_)(local_440._8_8_,1);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_3b8.ExtraNames.AllocatorInstance.Data,
                             local_3b8.ExtraNames.ArrayNum);
                  pFVar38 = local_428;
                  FVar42.Data = (FScriptContainerElement *)local_488;
                  if (local_3b8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_3b8.ExtraNames.AllocatorInstance.Data);
                    pFVar38 = local_428;
                    FVar42.Data = (FScriptContainerElement *)local_488;
                  }
                  goto LAB_149c72c7b;
                }
                DestructItems<FString,int>((FString *)local_4a0.Data,local_498[0]);
                if (local_4a0.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4a0.Data);
                }
                if ((IPCGAttributeAccessorKeys *)local_440._0_8_ != (IPCGAttributeAccessorKeys *)0x0
                   ) {
                  (**(code **)*(longlong *)local_440._0_8_)(local_440._0_8_,1);
                }
                if ((IPCGAttributeAccessor *)local_440._8_8_ != (IPCGAttributeAccessor *)0x0) {
                  (**(code **)*(longlong *)local_440._8_8_)(local_440._8_8_,1);
                }
                DestructItems<FString,int>
                          ((FString *)local_3b8.ExtraNames.AllocatorInstance.Data,
                           local_3b8.ExtraNames.ArrayNum);
                if (local_3b8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3b8.ExtraNames.AllocatorInstance.Data);
                }
                FVar42.Data = (FScriptContainerElement *)(local_488 + 0xf);
                uVar30 = (ulonglong)(uint)local_3f0.ArrayNum;
                uVar34 = (ulonglong)local_41c;
                param_1 = local_430;
              }
            }
          }
          else {
            if ((UPCGSpatialData *)local_410.Handle != (UPCGSpatialData *)0x0) {
              UE::GC::MarkAsReachable(local_410.Handle);
              goto LAB_149c728a2;
            }
LAB_149c73683:
            pFVar23 = FText::AsLocalizable_Advanced_LocText
                                (&local_248,L"PCGVisualizeAttributeElement",L"InvalidInputType",
                                 L"Input data type is not supported, only supports Point Data.");
            PCGLog::LogErrorOnGraph(pFVar23,param_1);
            if (local_248.TextData.Reference == (ITextData *)0x0) {
LAB_149c72c7b:
              uVar30 = (ulonglong)(uint)local_3f0.ArrayNum;
              FVar42.Data = FVar42.Data + 0x78;
              uVar34 = (ulonglong)local_41c;
            }
            else {
              (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
              uVar30 = (ulonglong)(uint)local_3f0.ArrayNum;
              FVar42.Data = FVar42.Data + 0x78;
              uVar34 = (ulonglong)local_41c;
            }
          }
        }
        iVar15 = (int)local_3f8;
        uVar34 = (ulonglong)(int)local_3f8;
        lVar33 = uVar34 * 8;
        pTVar8 = &(local_400.DebugPtr)->OtherParents;
        TVar40 = local_400;
        while( true ) {
          if ((int)uVar34 != iVar15) {
            local_4a7[0] = (<lambda_1>)0x0;
            `TCheckedPointerIterator<UPCGDebugDrawComponent_*,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_4a7);
          }
          if (TVar40.DebugPtr == (UPCGMetadata *)((pTVar8->Hash).InlineData + lVar33 + -0x68))
          break;
          pUVar26 = (UPCGDebugDrawComponent *)(TVar40.DebugPtr)->_padding_;
          if ((pUVar26 == (UPCGDebugDrawComponent *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("DebugDrawComponent",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVisualizeAttribute.cpp"
                                  ,0x9d,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
          UPCGDebugDrawComponent::StartTimer
                    (pUVar26,(float)(double)TVar20.DebugPtr[1].CacheLock.CriticalSection.Opaque1[0])
          ;
          uVar34 = local_3f8 & 0xffffffff;
          TVar40.DebugPtr = (UPCGMetadata *)&(TVar40.DebugPtr)->_padding_;
        }
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_3f0.AllocatorInstance.Data,local_3f0.ArrayNum);
        if ((FPCGTaggedData *)local_3f0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_3f0.AllocatorInstance.Data);
        }
        if (local_400.DebugPtr != (UPCGMetadata *)0x0) {
          FMemory::Free(local_400.DebugPtr);
        }
        goto LAB_149c7379f;
      }
    }
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1698347811071852581>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGVisualizeAttribute.cpp"
                        ,0x25,"SourceComponent");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
  }
LAB_149c7379f:
  if (bVar43) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// IsCacheable @ 149c806a0

bool __thiscall
FPCGVisualizeAttribute::IsCacheable(FPCGVisualizeAttribute *this,UPCGSettings *param_1)

{
  return false;
}

// SupportsBasePointDataInputs @ 149c92950

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
FPCGVisualizeAttribute::SupportsBasePointDataInputs
          (FPCGVisualizeAttribute *this,FPCGContext *param_1)

{
  return true;
}

