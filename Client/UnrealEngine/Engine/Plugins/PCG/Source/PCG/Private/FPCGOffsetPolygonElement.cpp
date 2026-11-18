// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149cc06e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __thiscall
FPCGOffsetPolygonElement::ExecuteInternal(FPCGOffsetPolygonElement *this,FPCGContext *param_1)

{
  UPCGNode *this_00;
  UPCGData *pUVar1;
  void *_Src;
  FPCGTaggedData *pFVar2;
  code *pcVar3;
  TGeneralPolygon2<double> *pTVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  UPCGSpatialData *pUVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  UClass *pUVar18;
  UPCGSettings *pUVar19;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar20;
  undefined8 *puVar21;
  UPCGMetadata *pUVar22;
  TArray<TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar23;
  UObject *pUVar24;
  UPCGPolygon2DData *this_01;
  FPCGTaggedData *pFVar25;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar26;
  TTransform<double> *pTVar27;
  FText *pFVar28;
  uint uVar29;
  uint uVar30;
  TArrayView<__int64_const_,int> *pTVar31;
  TArrayView<__int64_const_,int> *pTVar32;
  int *piVar33;
  longlong lVar34;
  uint uVar35;
  TArrayView<__int64_const_,int> *pTVar36;
  bool bVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined1 auStackY_428 [32];
  <lambda_1> local_3d7 [3];
  uint local_3d4;
  UPCGSettings *local_3d0;
  uint local_3c8;
  uint local_3c4;
  UPCGSpatialData *local_3c0;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> local_3b8;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_3a8;
  longlong local_398;
  undefined1 local_390 [64];
  uint local_350;
  double local_348;
  undefined1 local_340 [16];
  UPCGPolygon2DData *local_330;
  FName local_328;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_320;
  undefined8 local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  TArray<TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_2f8;
  double *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  TArrayView<__int64_const_,int> local_2c8;
  FPCGAttributePropertySelector local_2b8;
  FPCGInitializeFromDataParams local_278;
  TArrayView<double,int> local_238;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_228;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_218;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_208;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_1f8;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_1e8;
  FText local_1d8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1c8;
  undefined1 local_1b8 [16];
  TArray<TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_1a8;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_198;
  FPCGAttributeAccessorKeysEntries local_188;
  undefined1 local_158 [64];
  void *local_118;
  undefined4 local_110;
  undefined1 local_108 [96];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_428;
  bVar37 = -1 < CpuChannel->Enabled;
  local_390._8_8_ = param_1;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId47,"FPCGOffsetPolygonElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Polygon\\PCGOffsetPolygon2D.cpp"
               ,0x2f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId47);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar19 = UPCGNode::GetSettings(this_00), pUVar19 == (UPCGSettings *)0x0)) {
      pFVar25 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGOffsetPolygon2DSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_3d7[0]);
      if (pFVar25 != (FPCGTaggedData *)0x0) {
        local_390._16_8_ = (pFVar25->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UPCGSettings *)local_390._16_8_ != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_390._16_8_);
        }
        if ((UPCGSettings *)local_390._16_8_ != (UPCGSettings *)0x0) {
          pUVar18 = UPCGOffsetPolygon2DSettings::StaticClass();
          bVar14 = FObjectPtr::IsA((FObjectPtr *)(local_390 + 0x10),pUVar18);
          if (bVar14) {
            local_3d0 = (UPCGSettings *)local_390._16_8_;
            pUVar19 = (UPCGSettings *)local_390._16_8_;
            goto LAB_149cc0880;
          }
        }
      }
    }
    else {
      pUVar19 = UPCGNode::GetSettings(this_00);
      pUVar19 = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar19);
      if (pUVar19 != (UPCGSettings *)0x0) {
        local_3d0 = pUVar19;
        pUVar18 = UPCGOffsetPolygon2DSettings::StaticClass();
        iVar17 = (int)pUVar18->_padding_;
        if ((iVar17 <= *(int *)(pUVar19->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
            &pUVar18->_padding_)) goto LAB_149cc0880;
      }
    }
    local_3d0 = (UPCGSettings *)0x0;
    pUVar19 = (UPCGSettings *)0x0;
  }
  else {
    pUVar18 = UPCGOffsetPolygon2DSettings::StaticClass();
    bVar14 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar18);
    if (bVar14) {
      local_3d0 = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      pUVar19 = local_3d0;
    }
    else {
      local_3d0 = (UPCGSettings *)0x0;
      pUVar19 = (UPCGSettings *)0x0;
    }
  }
LAB_149cc0880:
  pTVar36 = (TArrayView<__int64_const_,int> *)0x0;
  if ((pUVar19 == (UPCGSettings *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Polygon\\PCGOffsetPolygon2D.cpp"
                          ,0x32,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    uVar15 = (*pcVar3)();
    return (bool)uVar15;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_390 + 0x38),
             &PCGPinConstants::DefaultInputLabel);
  uVar35 = 0;
  local_390._48_4_ = 0;
  local_390[0x34] = false;
  local_390._53_3_ = 0;
  local_3c4 = 0;
  pTVar31 = pTVar36;
  if (*(undefined1 *)((longlong)&pUVar19[1]._padding_ + 5) == '\0') {
LAB_149cc0977:
    uVar38 = (uint)pTVar31;
  }
  else {
    FLazyName::Resolve(&PCGOffsetPolygon2D::OffsetPinLabel);
    pTVar20 = FPCGDataCollection::GetInputsByPin(&param_1->InputData,&local_320,&local_328);
    if (&local_1c8 != pTVar20) {
      DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)0x0,0);
      local_390._48_8_ = (pTVar20->AllocatorInstance).Data;
      (pTVar20->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_3c4 = pTVar20->ArrayNum;
      pTVar31 = (TArrayView<__int64_const_,int> *)(ulonglong)local_3c4;
      pTVar20->ArrayNum = 0;
      pTVar20->ArrayMax = 0;
    }
    uVar38 = (uint)pTVar31;
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_320.AllocatorInstance.Data,local_320.ArrayNum);
    if ((FPCGTaggedData *)local_320.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_320.AllocatorInstance.Data);
    }
    if (uVar38 == 1) goto LAB_149cc0977;
    if (uVar38 != local_350) {
      FLazyName::Resolve(&PCGOffsetPolygon2D::OffsetPinLabel);
      PCGLog::InputOutput::LogInvalidCardinalityError
                (PCGPinConstants::DefaultInputLabel,(FName)local_340._4_8_,param_1);
      goto LAB_149cc1328;
    }
  }
  dVar7 = __real_4000000000000000;
  dVar6 = __real_bff0000000000000;
  dVar5 = __real_3ff0000000000000;
  local_3d4 = 0;
  if (0 < (int)local_350) {
    uVar40 = (uint)__xmm_80000000000000008000000000000000;
    uVar41 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_398 = 0;
    pTVar31 = pTVar36;
    do {
      lVar34 = local_398;
      uVar30 = (uint)pTVar31;
      uVar38 = uVar35;
      if ((int)uVar30 < (int)local_350) {
        uVar38 = ~uVar30 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar3 = (code *)swi(3);
        uVar15 = (*pcVar3)();
        return (bool)uVar15;
      }
      pFVar25 = (FPCGTaggedData *)
                ((((TSet<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)(local_390._56_8_ + 0x30))->Hash).InlineData + lVar34 + -0x68);
      local_390._24_8_ = (pFVar25->Data).Data.field0_0x0.DebugPtr;
      local_390._32_8_ = pFVar25;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149cc0a79:
        if ((UPCGSpatialData *)local_390._24_8_ == (UPCGSpatialData *)0x0) goto LAB_149cc13fb;
        pUVar18 = Z_Construct_UClass_UPCGPolygon2DData_NoRegister();
        bVar14 = FObjectPtr::IsA((FObjectPtr *)(local_390 + 0x18),pUVar18);
        if ((!bVar14) ||
           (local_3c0 = (UPCGSpatialData *)local_390._24_8_, lVar34 = local_398,
           (UPCGSpatialData *)local_390._24_8_ == (UPCGSpatialData *)0x0)) goto LAB_149cc13fb;
        pTVar4 = (TGeneralPolygon2<double> *)
                 &(((UPCGSpatialData *)(local_390._24_8_ + 0x98))->CachedLastSelector).field_0x20;
        uVar38 = (uint)pUVar19[1]._padding_;
        uVar39 = (uint)((ulonglong)pUVar19[1]._padding_ >> 0x20);
        iStack_300 = 1;
        local_3b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3b8.ArrayNum = 0;
        local_3b8.ArrayMax = 0;
        local_308 = pTVar4;
        if (*(undefined1 *)((longlong)&pUVar19[1]._padding_ + 5) != '\0') {
          uVar29 = (int)uVar30 % (int)local_3c4;
          uVar16 = uVar35;
          if ((int)uVar29 < (int)local_3c4) {
            uVar16 = ~uVar29 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar3 = (code *)swi(3);
            uVar15 = (*pcVar3)();
            return (bool)uVar15;
          }
          pUVar1 = (((FPCGTaggedData *)((longlong)(int)uVar29 * 0x78 + local_390._48_8_))->Data).
                   Data.field0_0x0.DebugPtr;
          local_348 = 0.0;
          FPCGAttributePropertyInputSelector::CopyAndFixLast
                    ((FPCGAttributePropertyInputSelector *)&pUVar19[1]._padding_,
                     (FPCGAttributePropertyInputSelector *)&local_2b8,pUVar1);
          PCGAttributeAccessorHelpers::CreateConstAccessor
                    ((UPCGData *)local_390,(FPCGAttributePropertySelector *)pUVar1,
                     SUB81(&local_2b8,0));
          if ((IPCGAttributeAccessor *)local_390._0_8_ == (IPCGAttributeAccessor *)0x0) {
            PCGLog::Metadata::LogFailToCreateAccessorError(&local_2b8,param_1);
            if ((IPCGAttributeAccessor *)local_390._0_8_ != (IPCGAttributeAccessor *)0x0) {
              (**(code **)*(longlong *)local_390._0_8_)(local_390._0_8_,1);
            }
            DestructItems<FString,int>
                      ((FString *)local_2b8.ExtraNames.AllocatorInstance.Data,
                       local_2b8.ExtraNames.ArrayNum);
            if (local_2b8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b8.ExtraNames.AllocatorInstance.Data);
            }
          }
          else {
            FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_188,0);
            local_2e8 = &local_348;
            uStack_2e0 = 1;
            local_238._12_4_ = uStack_2dc;
            local_238.ArrayNum = 1;
            local_238.DataPtr = local_2e8;
            bVar14 = IPCGAttributeAccessor::GetRange<double>
                               ((IPCGAttributeAccessor *)local_390._0_8_,&local_238,0,
                                (IPCGAttributeAccessorKeys *)&local_188,
                                AllowBroadcastAndConstructible);
            if (!bVar14) {
              PCGLog::Metadata::LogFailToGetAttributeError(&local_2b8,param_1);
            }
            if (local_188.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_188.ExtractedEntries.AllocatorInstance.Data);
            }
            if ((IPCGAttributeAccessor *)local_390._0_8_ != (IPCGAttributeAccessor *)0x0) {
              (**(code **)*(longlong *)local_390._0_8_)(local_390._0_8_,1);
            }
            DestructItems<FString,int>
                      ((FString *)local_2b8.ExtraNames.AllocatorInstance.Data,
                       local_2b8.ExtraNames.ArrayNum);
            if (local_2b8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b8.ExtraNames.AllocatorInstance.Data);
            }
            if (bVar14) {
              uVar38 = SUB84(local_348,0);
              uVar39 = (uint)((ulonglong)local_348 >> 0x20);
            }
          }
        }
        uVar13 = uStack_2fc;
        iVar12 = iStack_300;
        pUVar8 = local_3c0;
        iVar17 = (int)pUVar19[1]._padding_;
        uVar10 = (undefined4)local_308;
        uVar11 = local_308._4_4_;
        if (iVar17 == 0) {
          local_228.DataPtr._0_4_ = (undefined4)local_308;
          local_228.DataPtr._4_4_ = local_308._4_4_;
          local_228.ArrayNum = iStack_300;
          local_228._12_4_ = uStack_2fc;
          bVar14 = UE::Geometry::PolygonsOffset
                             ((double)CONCAT44(uVar39,uVar38),&local_228,&local_3b8,false,dVar7,
                              Square,Polygon,dVar6,dVar5);
        }
        else {
          if (iVar17 == 1) {
            uVar38 = uVar38 ^ uVar40;
            uVar39 = uVar39 ^ uVar41;
          }
          local_218.DataPtr._0_4_ = (undefined4)local_308;
          local_218.DataPtr._4_4_ = local_308._4_4_;
          local_218.ArrayNum = iStack_300;
          local_218._12_4_ = uStack_2fc;
          bVar14 = UE::Geometry::PolygonsOffsets
                             ((double)CONCAT44(uVar39,uVar38),
                              (double)CONCAT44(uVar39 ^ uVar41,uVar38 ^ uVar40),&local_218,
                              &local_3b8,false,dVar7,Square,Polygon,dVar6,dVar5);
        }
        if (bVar14 == false) {
          pFVar28 = FText::AsLocalizable_Advanced_LocText
                              (&local_1d8,L"PCGOffsetPolygon2D",L"OperationFailed",
                               L"Polygon offset operation failed.");
          PCGLog::LogWarningOnGraph(pFVar28,param_1);
          if (local_1d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
          }
        }
        else {
          local_3c8 = 0;
          local_390._40_8_ =
               (TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
                *)0x0;
          local_3a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3a8.ArrayNum = 0;
          local_3a8.ArrayMax = 0;
          local_158._0_8_ = 0;
          local_158._8_8_ = 0;
          local_158._32_8_ = 0;
          local_158._40_4_ = 0;
          local_158._44_4_ = 0x80;
          local_158._48_4_ = 0xffffffff;
          local_158._52_4_ = 0;
          local_118 = (void *)0x0;
          local_110 = 0;
          pTVar31 = pTVar36;
          if (*(undefined1 *)((longlong)&pUVar19[1]._padding_ + 4) != '\0') {
            puVar21 = (undefined8 *)(**(code **)(pUVar8->_padding_ + 0x520))(pUVar8,local_1b8);
            iVar17 = *(int *)(puVar21 + 1);
            _Src = (void *)*puVar21;
            local_3a8.ArrayNum = iVar17;
            if ((iVar17 == 0) && (local_3a8.ArrayMax == 0)) {
              local_3a8.ArrayNum = 0;
              local_3a8.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar17,local_3a8.ArrayMax,&local_3a8.AllocatorInstance,iVar17,
                         &local_3a8.ArrayMax);
              if (iVar17 != 0) {
                memcpy(local_3a8.AllocatorInstance.Data,_Src,(longlong)iVar17 << 3);
              }
            }
            pUVar22 = (UPCGMetadata *)(**(code **)(local_3c0->_padding_ + 800))();
            PCGPolygon2DProcessingHelpers::AddToPolyMetadataInfoMap
                      ((TMap<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>,0>_>
                        *)local_158,pTVar4,pUVar22,&local_3a8);
            local_2d8 = 0;
            uStack_2d0 = 0;
            local_208._8_8_ = (ulonglong)uStack_2cc << 0x20;
            local_208.DataPtr = (TGeneralPolygon2<double> *)0x0;
            local_1f8.DataPtr._0_4_ = uVar10;
            local_1f8.DataPtr._4_4_ = uVar11;
            local_1f8.ArrayNum = iVar12;
            local_1f8._12_4_ = uVar13;
            pTVar23 = PCGPolygon2DProcessingHelpers::BuildVertexMapping
                                (&local_2f8,&local_3b8,&local_1f8,&local_208);
            if (&local_1a8 != pTVar23) {
              DestructItems<TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
                          *)0x0,0);
              local_390._40_8_ = (pTVar23->AllocatorInstance).Data;
              (pTVar23->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              local_3c8 = pTVar23->ArrayNum;
              pTVar31 = (TArrayView<__int64_const_,int> *)(ulonglong)local_3c8;
              pTVar23->ArrayNum = 0;
              pTVar23->ArrayMax = 0;
            }
            DestructItems<TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>,int>
                      ((TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
                        *)local_2f8.AllocatorInstance.Data,local_2f8.ArrayNum);
            pFVar25 = (FPCGTaggedData *)local_390._32_8_;
            if ((TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
                 *)local_2f8.AllocatorInstance.Data !=
                (TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
                 *)0x0) {
              FMemory::Free(local_2f8.AllocatorInstance.Data);
              pFVar25 = (FPCGTaggedData *)local_390._32_8_;
            }
          }
          uVar9 = local_390._8_8_;
          pTVar32 = pTVar36;
          uVar38 = (uint)pTVar31;
          if (0 < local_3b8.ArrayNum) {
            do {
              bVar14 = IsInGameThread();
              if (bVar14) {
                pUVar24 = GetTransientPackageAsObject();
                this_01 = NewObject<UPCGPolygon2DData>(pUVar24);
              }
              else {
                if ((((FPCGAsyncState *)(uVar9 + 0x88))->bIsRunningOnMainThread != false) &&
                   (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<4331830188552749348>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                        ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar14)) {
                  pcVar3 = (code *)swi(3);
                  uVar15 = (*pcVar3)();
                  return (bool)uVar15;
                }
                FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_3d7);
                pUVar24 = GetTransientPackageAsObject();
                this_01 = NewObject<UPCGPolygon2DData>(pUVar24);
                FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_3d7);
                if ((this_01 == (UPCGPolygon2DData *)0x0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Object",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                        ,0x12a,L""), bVar14)) {
                  pcVar3 = (code *)swi(3);
                  uVar15 = (*pcVar3)();
                  return (bool)uVar15;
                }
                local_330 = this_01;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (this_01 != (UPCGPolygon2DData *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)this_01);
                }
                TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                ::Emplace<TObjectPtr<UObject>_>
                          ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                            *)(uVar9 + 0x1d0),(TObjectPtr<UObject> *)local_340,(bool *)&local_330);
              }
              piVar33 = &(((FPCGDataCollection *)(uVar9 + 0x38))->TaggedData).ArrayMax;
              FPCGInitializeFromDataParams::FPCGInitializeFromDataParams(&local_278,local_3c0);
              local_278.bInheritMetadata = *(bool *)((longlong)&pUVar19[1]._padding_ + 4);
              local_278.bInheritSpatialData = true;
              local_278.bInheritAttributes = local_278.bInheritMetadata;
              UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_01,&local_278);
              pFVar2 = (FPCGTaggedData *)
                       (((FPCGDataCollection *)(uVar9 + 0x38))->TaggedData).AllocatorInstance.Data;
              if (((pFVar2 <= pFVar25) && (pFVar25 < pFVar2 + *piVar33)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar3 = (code *)swi(3);
                uVar15 = (*pcVar3)();
                return (bool)uVar15;
              }
              iVar17 = (((FPCGDataCollection *)(uVar9 + 0x38))->TaggedData).ArrayNum;
              if (iVar17 == *piVar33) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x878,(ForAnyElementType *)(uVar9 + 0x38),piVar33);
              }
              (((FPCGDataCollection *)(uVar9 + 0x38))->TaggedData).ArrayNum = iVar17 + 1;
              pFVar25 = FPCGTaggedData::FPCGTaggedData
                                  ((FPCGTaggedData *)
                                   ((((FPCGDataCollection *)(uVar9 + 0x38))->TaggedData).
                                    AllocatorInstance.Data + (longlong)iVar17 * 0x78),pFVar25);
              FPCGDataPtrWrapper::operator=(&pFVar25->Data,(UPCGData *)this_01);
              uVar30 = (uint)pTVar32;
              pTVar31 = pTVar36;
              uVar38 = uVar35;
              if (*(undefined1 *)((longlong)&local_3d0[1]._padding_ + 4) != '\0') {
                if ((int)uVar30 < (int)local_3c8) {
                  uVar38 = ~uVar30 >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar3 = (code *)swi(3);
                  uVar15 = (*pcVar3)();
                  return (bool)uVar15;
                }
                pUVar22 = (UPCGMetadata *)(**(code **)(*(longlong *)this_01 + 0x328))(this_01);
                pTVar26 = PCGPolygon2DProcessingHelpers::ComputeEntryKeysAndInitializeAttributes
                                    (&local_1e8,pUVar22,
                                     (TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
                                      *)(local_390._40_8_ + (longlong)(int)uVar30 * 0x10),
                                     (TMap<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>,0>_>
                                      *)local_158);
                pTVar32 = pTVar36;
                if (&local_198 != pTVar26) {
                  pTVar31 = (TArrayView<__int64_const_,int> *)(pTVar26->AllocatorInstance).Data;
                  (pTVar26->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                  pTVar32 = (TArrayView<__int64_const_,int> *)(ulonglong)(uint)pTVar26->ArrayNum;
                  pTVar26->ArrayNum = 0;
                  pTVar26->ArrayMax = 0;
                }
                uVar38 = (uint)pTVar32;
                if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1e8.AllocatorInstance.Data);
                }
              }
              local_2c8.DataPtr = (long64 *)pTVar31;
              if (((int)uVar38 < 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar14)) {
                pcVar3 = (code *)swi(3);
                uVar15 = (*pcVar3)();
                return (bool)uVar15;
              }
              pTVar32 = &local_2c8;
              if (uVar38 == 0) {
                pTVar32 = pTVar36;
              }
              uVar39 = uVar35;
              if ((int)uVar30 < local_3b8.ArrayNum) {
                uVar39 = ~uVar30 >> 0x1f;
              }
              local_2c8.ArrayNum = uVar38;
              if ((uVar39 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar3 = (code *)swi(3);
                uVar15 = (*pcVar3)();
                return (bool)uVar15;
              }
              UPCGPolygon2DData::SetPolygon
                        (this_01,(TGeneralPolygon2<double> *)
                                 (local_3b8.AllocatorInstance.Data + (longlong)(int)uVar30 * 0x28),
                         pTVar32);
              pTVar27 = (TTransform<double> *)
                        (**(code **)(local_3c0->_padding_ + 0x498))(local_3c0,local_108);
              UPCGPolygon2DData::SetTransform(this_01,pTVar27,false);
              if (pTVar31 != (TArrayView<__int64_const_,int> *)0x0) {
                FMemory::Free(pTVar31);
              }
              DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                        ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                         local_278.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance
                         .Data,local_278.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
              if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                  local_278.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data
                  != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
                FMemory::Free(local_278.MetadataInitializeParams.DomainInitializeParams.
                              AllocatorInstance.Data);
              }
              if (local_278.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_278.MetadataInitializeParams.DomainMapping.AllocatorInstance.
                              Data);
              }
              pFVar25 = (FPCGTaggedData *)local_390._32_8_;
              pTVar32 = (TArrayView<__int64_const_,int> *)(ulonglong)(uVar30 + 1);
              pUVar19 = local_3d0;
              uVar38 = local_3c8;
            } while ((int)(uVar30 + 1) < local_3b8.ArrayNum);
          }
          local_110 = 0;
          if (local_118 != (void *)0x0) {
            FMemory::Free(local_118);
          }
          TSparseArray<TSparseSetElement<TTuple<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::TGeneralPolygon2<double>_const_*,TTuple<UPCGMetadata_const_*,TArray<__int64,TSizedDefaultAllocator<32>_>_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_158);
          if (local_3a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3a8.AllocatorInstance.Data);
          }
          uVar9 = local_390._40_8_;
          DestructItems<TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
                      *)local_390._40_8_,uVar38);
          param_1 = (FPCGContext *)local_390._8_8_;
          uVar30 = local_3d4;
          if ((TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
               *)uVar9 !=
              (TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
               *)0x0) {
            FMemory::Free((void *)uVar9);
            param_1 = (FPCGContext *)local_390._8_8_;
            uVar30 = local_3d4;
          }
        }
        DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                  ((TGeneralPolygon2<double> *)local_3b8.AllocatorInstance.Data,local_3b8.ArrayNum);
        if ((TGeneralPolygon2<double> *)local_3b8.AllocatorInstance.Data !=
            (TGeneralPolygon2<double> *)0x0) {
          FMemory::Free(local_3b8.AllocatorInstance.Data);
        }
      }
      else {
        if ((UPCGSpatialData *)local_390._24_8_ != (UPCGSpatialData *)0x0) {
          UE::GC::MarkAsReachable((UObject *)local_390._24_8_);
          goto LAB_149cc0a79;
        }
LAB_149cc13fb:
        PCGLog::InputOutput::LogInvalidInputDataError(param_1);
        local_398 = lVar34;
      }
      local_3d4 = uVar30 + 1;
      pTVar31 = (TArrayView<__int64_const_,int> *)(ulonglong)local_3d4;
      local_398 = local_398 + 0x78;
      uVar38 = local_3c4;
    } while ((int)local_3d4 < (int)local_350);
  }
LAB_149cc1328:
  uVar9 = local_390._48_8_;
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_390._48_8_,uVar38);
  if ((FPCGCrc)uVar9 != (FPCGCrc)0x0) {
    FMemory::Free((void *)uVar9);
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_390._56_8_,local_350);
  if ((UPCGMetadata *)local_390._56_8_ != (UPCGMetadata *)0x0) {
    FMemory::Free((void *)local_390._56_8_);
  }
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149cc4ef0

EPCGElementExecutionLoopMode __thiscall
FPCGOffsetPolygonElement::ExecutionLoopMode(FPCGOffsetPolygonElement *this,UPCGSettings *param_1)

{
  return PrimaryPinAndBroadcastablePins;
}

