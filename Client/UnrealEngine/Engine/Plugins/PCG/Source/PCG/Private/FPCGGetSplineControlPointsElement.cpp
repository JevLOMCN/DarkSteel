// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ExecuteInternal @ 149c0c7b0

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
FPCGGetSplineControlPointsElement::ExecuteInternal
          (FPCGGetSplineControlPointsElement *this,FPCGContext *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  int iVar3;
  UPCGNode *this_00;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  FObjectPtr_u_0 FVar21;
  bool bVar22;
  undefined1 uVar23;
  int iVar24;
  UClass *pUVar25;
  UPCGSettings *pUVar26;
  TObjectPtr<UPCGSettings>_u_0 TVar27;
  UPCGBasePointData *this_01;
  UPCGMetadata *this_02;
  FPCGMetadataDomain *this_03;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar28;
  FText *pFVar29;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this_04;
  undefined8 *puVar30;
  FPCGTaggedData *pFVar31;
  long64 *plVar32;
  longlong *plVar33;
  ulonglong uVar34;
  FObjectPtr_u_0 *pFVar35;
  long64 lVar36;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar37;
  FPCGContext *pFVar38;
  int iVar39;
  longlong lVar40;
  bool bVar41;
  undefined1 auStackY_448 [32];
  <lambda_1> local_3f7 [7];
  TObjectPtr<UPCGSettings>_u_0 local_3f0;
  FObjectPtr_u_0 *local_3e8;
  longlong local_3e0;
  int local_3d8;
  int local_3d4;
  int local_3d0;
  long64 local_3c8;
  FPCGContext *local_3c0;
  int local_3b8;
  uint local_3b4;
  FObjectPtr_u_0 local_3b0;
  TObjectPtr<UPCGSettings>_u_0 local_3a8;
  longlong local_3a0;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *local_398;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_390;
  FObjectPtr_u_0 *local_380;
  undefined1 local_378 [4];
  undefined1 local_374 [4];
  FName local_370;
  FName local_368;
  FPCGMetadataDomain *local_360;
  UPCGBasePointData *local_358;
  longlong local_350;
  int local_348;
  int local_344;
  int local_340;
  int local_33c;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  longlong local_308;
  int local_300;
  FString local_2f8;
  FText local_2e8;
  FString local_2d8;
  FText local_2c8;
  FText local_2b8;
  TSharedRef<FTextFormatData,1> local_2a8;
  FText local_298;
  FText local_288;
  FText local_278;
  TSharedRef<FTextFormatData,1> local_268;
  FText local_258;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_208;
  FText local_1f0;
  FPCGInitializeFromDataParams local_1d8;
  longlong local_198;
  int local_190;
  int local_18c;
  int local_188;
  undefined8 local_178 [12];
  undefined1 local_118 [96];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_448;
  bVar41 = -1 < CpuChannel->Enabled;
  local_3c0 = param_1;
  if (bVar41) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId53,"FPCGGetSplineControlPointsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetSplineControlPoints.cpp"
               ,0x35);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId53);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetSplineControlPoints.cpp"
                          ,0x37,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    uVar23 = (*pcVar7)();
    return (bool)uVar23;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar25 = UPCGGetSplineControlPointsSettings::StaticClass();
    bVar22 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar25);
    pFVar38 = param_1;
    if (bVar22) {
      local_3f0 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar27 = local_3f0;
    }
    else {
      local_3f0.DebugPtr = (UPCGSettings *)0x0;
      TVar27.DebugPtr = (UPCGSettings *)0x0;
    }
    goto LAB_149c0c943;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar26 = UPCGNode::GetSettings(this_00), pUVar26 == (UPCGSettings *)0x0)) {
    pFVar31 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetSplineControlPointsSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_3f7[0]);
    if (pFVar31 != (FPCGTaggedData *)0x0) {
      local_3a8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar31->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_3a8.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c0c937;
        UE::GC::MarkAsReachable((UObject *)local_3a8.DebugPtr);
      }
      if (local_3a8.DebugPtr != (UPCGSettings *)0x0) {
        pUVar25 = UPCGGetSplineControlPointsSettings::StaticClass();
        bVar22 = FObjectPtr::IsA(&local_3a8.ObjectPtr,pUVar25);
        pFVar38 = local_3c0;
        TVar27 = local_3a8;
        local_3f0 = local_3a8;
        if (bVar22) goto LAB_149c0c943;
      }
    }
  }
  else {
    pUVar26 = UPCGNode::GetSettings(this_00);
    TVar27.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar26);
    if (TVar27.DebugPtr != (UPCGSettings *)0x0) {
      local_3f0.DebugPtr = TVar27.DebugPtr;
      pUVar25 = UPCGGetSplineControlPointsSettings::StaticClass();
      iVar24 = (int)pUVar25->_padding_;
      if ((iVar24 <= *(int *)((TVar27.DebugPtr)->_padding_ + 0x38)) &&
         (pFVar38 = local_3c0,
         (longlong *)
         *(undefined1 **)(*(longlong *)((TVar27.DebugPtr)->_padding_ + 0x30) + (longlong)iVar24 * 8)
         == &pUVar25->_padding_)) goto LAB_149c0c943;
    }
  }
LAB_149c0c937:
  local_3f0.DebugPtr = (UPCGSettings *)0x0;
  pFVar38 = local_3c0;
  TVar27.DebugPtr = local_3f0.DebugPtr;
LAB_149c0c943:
  if ((TVar27.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetSplineControlPoints.cpp"
                          ,0x3a,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    uVar23 = (*pcVar7)();
    return (bool)uVar23;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_390,&PCGPinConstants::DefaultInputLabel);
  uVar20 = __real_3f800000;
  uVar34 = (ulonglong)local_390.ArrayNum;
  local_3b4 = local_390.ArrayNum;
  pFVar35 = (FObjectPtr_u_0 *)(local_390.AllocatorInstance.Data + uVar34 * 0x78);
  local_3e8 = (FObjectPtr_u_0 *)local_390.AllocatorInstance.Data;
  local_380 = pFVar35;
  do {
    if (local_390.ArrayNum != (uint)uVar34) {
      local_3f7[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_3f7);
    }
    if (local_3e8 == pFVar35) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_390.AllocatorInstance.Data,local_390.ArrayNum);
      if ((FPCGTaggedData *)local_390.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_390.AllocatorInstance.Data);
      }
      if (bVar41) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    local_3b0 = (FObjectPtr_u_0)local_3e8->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c0c9f5:
      if ((UPCGSpatialData *)local_3b0.Handle != (UPCGSpatialData *)0x0) {
        pUVar25 = Z_Construct_UClass_UPCGPolyLineData_NoRegister();
        bVar22 = FObjectPtr::IsA((FObjectPtr *)&local_3b0,pUVar25);
        FVar21 = local_3b0;
        if ((bVar22) && ((UPCGSpatialData *)local_3b0.Handle != (UPCGSpatialData *)0x0)) {
          iVar24 = (**(code **)(*(longlong *)local_3b0.Handle + 0x4a8))(local_3b0.Handle);
          local_3b8 = iVar24;
          (**(code **)(*(longlong *)FVar21.Handle + 0x520))(FVar21.Handle,&local_308);
          this_01 = FPCGContext::NewPointData_AnyThread(pFVar38);
          local_358 = this_01;
          FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                    (&local_1d8,(UPCGSpatialData *)FVar21.Handle);
          UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_01,&local_1d8);
          (**(code **)(this_01->_padding_ + 0x490))(this_01,iVar24,1);
          (**(code **)(this_01->_padding_ + 0x498))(this_01,0xc1);
          (**(code **)(this_01->_padding_ + 0x548))(this_01,uVar20);
          (**(code **)(this_01->_padding_ + 0x568))(this_01,uVar20);
          this_02 = (UPCGMetadata *)(**(code **)(this_01->_padding_ + 0x328))(this_01);
          this_03 = UPCGMetadata::GetMetadataDomain(this_02,&PCGMetadataDomainID::Elements);
          local_360 = this_03;
          if ((this_03 == (FPCGMetadataDomain *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ElementsMetadataDomain",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetSplineControlPoints.cpp"
                                  ,0x52,L""), bVar22)) {
            pcVar7 = (code *)swi(3);
            uVar23 = (*pcVar7)();
            return (bool)uVar23;
          }
          FVar4 = (FName)TVar27.DebugPtr[1]._padding_;
          local_248._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_248._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_248._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          pFVar28 = FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector<double>_>
                              (this_03,FVar4,(TVector<double> *)&local_248._s_0,true,true,true);
          local_398 = pFVar28;
          if (pFVar28 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
            local_370 = FVar4;
            pFVar29 = FText::FromName(&local_1f0,&local_370);
            PCG::Private::GetTypeName(&local_2f8,5);
            FText::FromString(&local_278,&local_2f8);
            if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
            }
            local_2e8.TextData.Reference = (pFVar29->TextData).Reference;
            if (local_2e8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_2e8.TextData.Reference + 8))
                        (local_2e8.TextData.Reference,local_378);
            }
            local_2e8.Flags = pFVar29->Flags;
            local_268 = PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData;
            if (PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData.SharedReferenceCount
                .ReferenceController.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &(PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData.
                         SharedReferenceCount.ReferenceController.ReferenceController)->
                        SharedReferenceCount;
              *paVar1 = (atomic<int>)((int)*paVar1 + 1);
              UNLOCK();
            }
            pFVar29 = FText::Format<FText,FText>
                                (&local_258,(FTextFormat *)&local_268,&local_2e8,&local_278);
            PCGLog::LogErrorOnGraph(pFVar29,local_3c0);
            if (local_258.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
            }
            if (local_1f0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
            }
          }
          FVar4 = (FName)TVar27.DebugPtr[1]._padding_;
          local_228._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_228._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_228._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          this_04 = FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector<double>_>
                              (this_03,FVar4,(TVector<double> *)&local_228._s_0,true,true,true);
          if (this_04 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
            local_368 = FVar4;
            pFVar29 = FText::FromName(&local_288,&local_368);
            PCG::Private::GetTypeName(&local_2d8,5);
            FText::FromString(&local_2b8,&local_2d8);
            if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
            }
            local_2c8.TextData.Reference = (pFVar29->TextData).Reference;
            if (local_2c8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_2c8.TextData.Reference + 8))
                        (local_2c8.TextData.Reference,local_374);
            }
            local_2c8.Flags = pFVar29->Flags;
            local_2a8 = PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData;
            if (PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData.SharedReferenceCount
                .ReferenceController.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &(PCGLog::Metadata::Format::CreateAttributeFailure.TextFormatData.
                         SharedReferenceCount.ReferenceController.ReferenceController)->
                        SharedReferenceCount;
              *paVar1 = (atomic<int>)((int)*paVar1 + 1);
              UNLOCK();
            }
            pFVar29 = FText::Format<FText,FText>
                                (&local_298,(FTextFormat *)&local_2a8,&local_2c8,&local_2b8);
            PCGLog::LogErrorOnGraph(pFVar29,local_3c0);
            if (local_298.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
            }
            if (local_288.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
            }
          }
          (**(code **)(this_01->_padding_ + 0x4c0))(this_01,&local_198,1);
          (**(code **)(this_01->_padding_ + 0x4f0))(this_01,&local_350,1);
          (**(code **)(this_01->_padding_ + 0x4f8))(this_01,&local_3e0,1);
          iVar39 = 0;
          if (0 < iVar24) {
            local_3a0 = 0;
            do {
              lVar40 = local_3a0;
              puVar30 = (undefined8 *)
                        (**(code **)(*(longlong *)FVar21.Handle + 0x4d0))
                                  (FVar21.Handle,local_118,iVar39,0);
              uVar8 = *puVar30;
              uVar9 = puVar30[1];
              uVar10 = puVar30[2];
              uVar11 = puVar30[3];
              uVar12 = puVar30[4];
              uVar13 = puVar30[5];
              uVar14 = puVar30[6];
              uVar15 = puVar30[7];
              uVar16 = puVar30[8];
              uVar17 = puVar30[9];
              uVar18 = puVar30[10];
              uVar19 = puVar30[0xb];
              if ((local_188 <= iVar39) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar22)) {
                pcVar7 = (code *)swi(3);
                uVar23 = (*pcVar7)();
                return (bool)uVar23;
              }
              if (iVar39 == iVar39 % local_18c) {
                puVar30 = (undefined8 *)
                          ((longlong)(iVar39 % local_18c) * (longlong)local_190 + local_198);
              }
              else {
                puVar30 = local_178;
              }
              *puVar30 = uVar8;
              puVar30[1] = uVar9;
              puVar30[2] = uVar10;
              puVar30[3] = uVar11;
              puVar30[4] = uVar12;
              puVar30[5] = uVar13;
              puVar30[6] = uVar14;
              puVar30[7] = uVar15;
              puVar30[8] = uVar16;
              puVar30[9] = uVar17;
              puVar30[10] = uVar18;
              puVar30[0xb] = uVar19;
              if ((local_188 <= iVar39) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar22)) {
                pcVar7 = (code *)swi(3);
                uVar23 = (*pcVar7)();
                return (bool)uVar23;
              }
              if (iVar39 == iVar39 % local_18c) {
                puVar30 = (undefined8 *)
                          ((longlong)(iVar39 % local_18c) * (longlong)local_190 + local_198);
              }
              else {
                puVar30 = local_178;
              }
              local_208._s_0.X = (double)puVar30[4];
              local_208._s_0.Y = (double)puVar30[5];
              local_208._s_0.Z = (double)puVar30[6];
              iVar24 = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&local_208._s_0);
              if ((local_340 <= iVar39) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar22)) {
                pcVar7 = (code *)swi(3);
                uVar23 = (*pcVar7)();
                return (bool)uVar23;
              }
              if (iVar39 == iVar39 % local_344) {
                *(int *)((longlong)(iVar39 % local_344) * (longlong)local_348 + local_350) = iVar24;
                iVar24 = local_33c;
              }
              local_33c = iVar24;
              if (iVar39 < local_300) {
                lVar36 = *(long64 *)(lVar40 + local_308);
              }
              else {
                lVar36 = -1;
              }
              if ((local_3d0 <= iVar39) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar22)) {
                pcVar7 = (code *)swi(3);
                uVar23 = (*pcVar7)();
                return (bool)uVar23;
              }
              if (iVar39 == iVar39 % local_3d4) {
                plVar32 = (long64 *)
                          ((longlong)(iVar39 % local_3d4) * (longlong)local_3d8 + local_3e0);
              }
              else {
                plVar32 = &local_3c8;
              }
              *plVar32 = lVar36;
              if ((local_3d0 <= iVar39) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar22)) {
                pcVar7 = (code *)swi(3);
                uVar23 = (*pcVar7)();
                return (bool)uVar23;
              }
              if (iVar39 == iVar39 % local_3d4) {
                plVar32 = (long64 *)
                          ((longlong)(iVar39 % local_3d4) * (longlong)local_3d8 + local_3e0);
              }
              else {
                plVar32 = &local_3c8;
              }
              FPCGMetadataDomain::InitializeOnSet
                        (local_360,plVar32,-1,(FPCGMetadataDomain *)0x0,-1,(FPCGMetadataDomain *)0x0
                        );
              if ((pFVar28 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) ||
                 (this_04 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0)) {
                (**(code **)(*(longlong *)FVar21.Handle + 0x500))(FVar21.Handle,iVar39,&local_320);
                if (pFVar28 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
                  if ((local_3d0 <= iVar39) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < NumElements)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                          ,0x8b,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar22)) {
                    pcVar7 = (code *)swi(3);
                    uVar23 = (*pcVar7)();
                    return (bool)uVar23;
                  }
                  if (iVar39 == iVar39 % local_3d4) {
                    plVar33 = (longlong *)
                              ((longlong)(iVar39 % local_3d4) * (longlong)local_3d8 + local_3e0);
                  }
                  else {
                    plVar33 = &local_3c8;
                  }
                  lVar40 = *plVar33;
                  if ((lVar40 == -1) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ItemKey != PCGInvalidEntryKey",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                                          ,0x24b,L""), bVar22)) {
                    pcVar7 = (code *)swi(3);
                    uVar23 = (*pcVar7)();
                    return (bool)uVar23;
                  }
                  AcquireSRWLockExclusive((PSRWLOCK)&pFVar28->ValueLock);
                  pTVar37 = &pFVar28->Values;
                  pFVar5 = (pTVar37->AllocatorInstance).Data;
                  if (((pFVar5 <= (FScriptContainerElement *)&local_338) &&
                      ((FScriptContainerElement *)&local_338 <
                       pFVar5 + (longlong)(pFVar28->Values).ArrayMax * 0x18)) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar22)) {
                    pcVar7 = (code *)swi(3);
                    uVar23 = (*pcVar7)();
                    return (bool)uVar23;
                  }
                  iVar24 = (pFVar28->Values).ArrayNum;
                  piVar2 = &(pFVar28->Values).ArrayMax;
                  if (iVar24 == *piVar2) {
                    iVar24 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x818,&pTVar37->AllocatorInstance,piVar2);
                  }
                  (pFVar28->Values).ArrayNum = iVar24 + 1;
                  pFVar6 = (pTVar37->AllocatorInstance).Data;
                  pFVar5 = pFVar6 + (longlong)iVar24 * 0x18;
                  *(undefined8 *)pFVar5 = local_338;
                  *(undefined8 *)(pFVar5 + 8) = uStack_330;
                  *(undefined8 *)(pFVar6 + (longlong)iVar24 * 0x18 + 0x10) = local_328;
                  iVar3 = local_398->ValueKeyOffset;
                  ReleaseSRWLockExclusive((PSRWLOCK)&pFVar28->ValueLock);
                  FPCGMetadataAttributeBase::SetValueFromValueKey
                            ((FPCGMetadataAttributeBase *)local_398,lVar40,iVar3 + iVar24,false);
                  lVar40 = local_3a0;
                }
                if (this_04 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
                  if ((local_3d0 <= iVar39) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < NumElements)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                          ,0x8b,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar22)) {
                    pcVar7 = (code *)swi(3);
                    uVar23 = (*pcVar7)();
                    return (bool)uVar23;
                  }
                  if (iVar39 == iVar39 % local_3d4) {
                    plVar33 = (longlong *)
                              ((longlong)(iVar39 % local_3d4) * (longlong)local_3d8 + local_3e0);
                  }
                  else {
                    plVar33 = &local_3c8;
                  }
                  lVar40 = *plVar33;
                  if ((lVar40 == -1) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ItemKey != PCGInvalidEntryKey",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                                          ,0x24b,L""), bVar22)) {
                    pcVar7 = (code *)swi(3);
                    uVar23 = (*pcVar7)();
                    return (bool)uVar23;
                  }
                  AcquireSRWLockExclusive((PSRWLOCK)&this_04->ValueLock);
                  pTVar37 = &this_04->Values;
                  pFVar5 = (pTVar37->AllocatorInstance).Data;
                  if (((pFVar5 <= (FScriptContainerElement *)&local_320) &&
                      ((FScriptContainerElement *)&local_320 <
                       pFVar5 + (longlong)(this_04->Values).ArrayMax * 0x18)) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar22)) {
                    pcVar7 = (code *)swi(3);
                    uVar23 = (*pcVar7)();
                    return (bool)uVar23;
                  }
                  iVar24 = (this_04->Values).ArrayNum;
                  piVar2 = &(this_04->Values).ArrayMax;
                  if (iVar24 == *piVar2) {
                    iVar24 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x818,&pTVar37->AllocatorInstance,piVar2);
                  }
                  (this_04->Values).ArrayNum = iVar24 + 1;
                  pFVar6 = (pTVar37->AllocatorInstance).Data;
                  pFVar5 = pFVar6 + (longlong)iVar24 * 0x18;
                  *(undefined8 *)pFVar5 = local_320;
                  *(undefined8 *)(pFVar5 + 8) = uStack_318;
                  *(undefined8 *)(pFVar6 + (longlong)iVar24 * 0x18 + 0x10) = local_310;
                  iVar3 = this_04->ValueKeyOffset;
                  ReleaseSRWLockExclusive((PSRWLOCK)&this_04->ValueLock);
                  FPCGMetadataAttributeBase::SetValueFromValueKey
                            ((FPCGMetadataAttributeBase *)this_04,lVar40,iVar3 + iVar24,false);
                  lVar40 = local_3a0;
                }
              }
              local_3a0 = lVar40 + 8;
              iVar39 = iVar39 + 1;
              pFVar28 = local_398;
              this_01 = local_358;
            } while (iVar39 < local_3b8);
          }
          pFVar38 = local_3c0;
          piVar2 = &(local_3c0->OutputData).TaggedData.ArrayMax;
          iVar24 = (local_3c0->OutputData).TaggedData.ArrayNum;
          if (iVar24 == *piVar2) {
            iVar24 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)&local_3c0->OutputData,piVar2);
          }
          (pFVar38->OutputData).TaggedData.ArrayNum = iVar24 + 1;
          pFVar31 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((pFVar38->OutputData).TaggedData.AllocatorInstance.Data +
                               (longlong)iVar24 * 0x78),(FPCGTaggedData *)local_3e8);
          FPCGDataPtrWrapper::operator=(&pFVar31->Data,(UPCGData *)this_01);
          DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                    ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                     local_1d8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                     Data,local_1d8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
          if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
              local_1d8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
              (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
            FMemory::Free(local_1d8.MetadataInitializeParams.DomainInitializeParams.
                          AllocatorInstance.Data);
          }
          pFVar35 = local_380;
          TVar27 = local_3f0;
          if (local_1d8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
            pFVar35 = local_380;
            TVar27 = local_3f0;
          }
        }
      }
    }
    else if ((UPCGSpatialData *)local_3b0.Handle != (UPCGSpatialData *)0x0) {
      UE::GC::MarkAsReachable(local_3b0.Handle);
      goto LAB_149c0c9f5;
    }
    uVar34 = (ulonglong)local_3b4;
    local_3e8 = local_3e8 + 0xf;
  } while( true );
}

