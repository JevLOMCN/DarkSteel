// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// ExecuteInternal @ 149b0c980

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

bool __thiscall FPCGCollapseElement::ExecuteInternal(FPCGCollapseElement *this,FPCGContext *param_1)

{
  int *piVar1;
  TObjectPtr<UPCGSettings> *this_00;
  UPCGNode *pUVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  FPCGMetadataDomainID FVar6;
  ForAnyElementType FVar7;
  int iVar8;
  TObjectPtr<UPCGSettings>_u_0 *this_01;
  longlong *plVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  UClass *pUVar14;
  FObjectPtr_u_0 FVar15;
  FPCGTaggedData *this_02;
  UPCGBasePointData *pUVar16;
  UPCGSettings *pUVar17;
  FObjectPtr_u_0 FVar18;
  UPCGMetadata *pUVar19;
  FObjectPtr_u_0 *pFVar20;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar21;
  ulonglong uVar22;
  FPCGDataCollection *pFVar23;
  FName *pFVar24;
  FPCGTaggedData *pFVar25;
  FObjectPtr_u_0 FVar26;
  longlong *plVar27;
  uint uVar28;
  ForAnyElementType FVar29;
  FObjectPtr_u_0 FVar30;
  uint uVar31;
  FPCGAttributePropertySelector *pFVar32;
  <lambda_1> <Var33;
  undefined1 auStackY_498 [32];
  <lambda_1> local_447;
  undefined1 local_446;
  undefined1 local_445 [5];
  FObjectPtr_u_0 local_440;
  FObjectPtr_u_0 local_438;
  UPCGBasePointData *local_430;
  FPCGTaggedData *local_428;
  FObjectPtr_u_0 local_420;
  uint local_418;
  TArray<FName,TSizedDefaultAllocator<32>_> local_410;
  FObjectPtr_u_0 local_400;
  FObjectPtr_u_0 local_3f8;
  FObjectPtr_u_0 local_3f0;
  FObjectPtr_u_0 local_3e8;
  FPCGDataCollection *local_3e0;
  FObjectPtr_u_0 local_3d8;
  longlong *local_3d0;
  FPCGTaggedData *local_3c8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_3c0;
  FPCGAttributePropertySelector local_3a8;
  FName local_368;
  FPCGContext *local_360;
  FPCGDataCollection *local_358;
  FName local_350;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_348;
  UPCGData local_338;
  TObjectPtr<UPCGSettings>_u_0 *local_2f0;
  longlong *local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e0;
  undefined8 uStack_2c0;
  FObjectPtr_u_0 local_2b8;
  UPCGBasePointData *local_2b0;
  FPCGAttributePropertySelector local_2a8;
  undefined **local_268;
  EPCGAttributePropertySelection local_260;
  FName local_25c;
  FName local_254;
  FName local_24c;
  ForAnyElementType local_240;
  int local_238;
  int local_234;
  EPCGExtraProperties local_230;
  undefined8 local_228;
  undefined2 local_220;
  longlong local_218;
  int local_210;
  int local_20c;
  int local_208;
  FObjectPtr_u_0 local_200 [2];
  FName local_1f0;
  FPCGMetadataDomainID FStack_1e8;
  FPCGAttributeIdentifier local_1d8;
  FPCGAttributeIdentifier local_1b8;
  FName local_198;
  FPCGMetadataDomainID FStack_190;
  FObjectPtr_u_0 local_178;
  UPCGBasePointData *local_170;
  FPCGAttributePropertySelector local_168;
  FPCGAttributePropertySelector local_128;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined1 local_d8 [48];
  int local_a8;
  undefined4 local_7c;
  TVector<double>_u_0 local_78;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_498;
  <Var33 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  local_360 = param_1;
  if ((bool)<Var33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId64,"FPCGCollapseElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapseElement.cpp"
               ,0x40);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId64);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapseElement.cpp"
                          ,0x41,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  this_00 = &param_1->SettingsWithOverride;
  local_2f0 = &this_00->field0_0x0;
  if ((this_00->field0_0x0).DebugPtr == (UPCGSettings *)0x0) {
    pUVar2 = param_1->Node;
    pFVar23 = &param_1->InputData;
    local_3e0 = pFVar23;
    if ((pUVar2 == (UPCGNode *)0x0) ||
       (pUVar17 = UPCGNode::GetSettings(pUVar2), pUVar17 == (UPCGSettings *)0x0)) {
      pFVar20 = (FObjectPtr_u_0 *)
                TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCollapseSettings>_::__l2::<lambda_1>_>
                          (&pFVar23->TaggedData,local_447);
      if (pFVar20 != (FObjectPtr_u_0 *)0x0) {
        local_400 = (FObjectPtr_u_0)pFVar20->Handle;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UPCGSettings *)local_400.Handle != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable(local_400.Handle);
        }
        if ((UPCGSettings *)local_400.Handle != (UPCGSettings *)0x0) {
          pUVar14 = UPCGCollapseSettings::StaticClass();
          bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_400,pUVar14);
          FVar15 = local_400;
          local_438 = local_400;
          if (bVar10) goto LAB_149b0cb49;
        }
      }
    }
    else {
      pUVar17 = UPCGNode::GetSettings(pUVar2);
      FVar15.Handle = (UObject *)FPCGDataCollection::GetSettings(pFVar23,pUVar17);
      if ((UPCGSettings *)FVar15.Handle != (UPCGSettings *)0x0) {
        local_438.Handle = FVar15.Handle;
        pUVar14 = UPCGCollapseSettings::StaticClass();
        iVar12 = (int)pUVar14->_padding_;
        if ((iVar12 <= *(int *)(*(longlong *)&(FVar15.Handle)->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&(FVar15.Handle)->field_0x10 + 0x30) + (longlong)iVar12 * 8
             ) == &pUVar14->_padding_)) goto LAB_149b0cb49;
      }
    }
    local_438.Handle = (UObject *)0x0;
    FVar15.Handle = local_438.Handle;
  }
  else {
    pUVar14 = UPCGCollapseSettings::StaticClass();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar14);
    local_438.Handle = (UObject *)0x0;
    if (bVar10) {
      local_438.Handle = (UObject *)(this_00->field0_0x0).DebugPtr;
      local_3e0 = &param_1->InputData;
      FVar15.Handle = local_438.Handle;
    }
    else {
      local_3e0 = &param_1->InputData;
      FVar15.Handle = local_438.Handle;
    }
  }
LAB_149b0cb49:
  FVar30.Handle = (UObject *)0x0;
  if (((UPCGSettings *)FVar15.Handle == (UPCGSettings *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapseElement.cpp"
                          ,0x45,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_3c0,&PCGPinConstants::DefaultInputLabel);
  uVar22 = (ulonglong)local_3c0.ArrayNum;
  pFVar23 = &param_1->OutputData;
  local_428 = (FPCGTaggedData *)(local_3c0.AllocatorInstance.Data + uVar22 * 0x78);
  local_418 = local_3c0.ArrayNum;
  pFVar25 = local_428;
  FVar29.Data = local_3c0.AllocatorInstance.Data;
  local_358 = pFVar23;
LAB_149b0cbab:
  do {
    local_3c8 = (FPCGTaggedData *)FVar29.Data;
    if (local_3c0.ArrayNum != (uint)uVar22) {
      local_446 = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_446);
    }
    if ((FPCGTaggedData *)FVar29.Data == pFVar25) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_3c0.AllocatorInstance.Data,local_3c0.ArrayNum);
      if ((FPCGTaggedData *)local_3c0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_3c0.AllocatorInstance.Data);
      }
      if ((bool)<Var33) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    if ((((FPCGTaggedData *)FVar29.Data)->Data).Data.field0_0x0.DebugPtr != (UPCGData *)0x0) {
      pFVar25 = (FPCGTaggedData *)(pFVar23->TaggedData).AllocatorInstance.Data;
      if ((pFVar25 <= FVar29.Data) && (FVar29.Data < pFVar25 + (pFVar23->TaggedData).ArrayMax)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
      }
      iVar12 = (pFVar23->TaggedData).ArrayNum;
      piVar1 = &(pFVar23->TaggedData).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)pFVar23,piVar1);
      }
      (pFVar23->TaggedData).ArrayNum = iVar12 + 1;
      this_02 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((pFVar23->TaggedData).AllocatorInstance.Data + (longlong)iVar12 * 0x78),
                           (FPCGTaggedData *)FVar29.Data);
      local_3f8.Handle = (UObject *)(((FPCGTaggedData *)FVar29.Data)->Data).Data.field0_0x0.DebugPtr
      ;
      local_338._padding_ = (longlong)this_02;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b0cc90:
        if ((UPCGData *)local_3f8.Handle != (UPCGData *)0x0) {
          pUVar14 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
          bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_3f8,pUVar14);
          if ((bVar10) && ((UPCGData *)local_3f8.Handle != (UPCGData *)0x0)) {
            local_3f0.Handle =
                 (UObject *)(((FPCGTaggedData *)FVar29.Data)->Data).Data.field0_0x0.DebugPtr;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b0ccdf:
              if ((UPCGSettings *)local_3f0.Handle == (UPCGSettings *)0x0) goto LAB_149b0ccfd;
              pUVar14 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
              bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_3f0,pUVar14);
              FVar15 = local_3f0;
              if (!bVar10) goto LAB_149b0ccfd;
            }
            else {
              if ((UPCGSettings *)local_3f0.Handle != (UPCGSettings *)0x0) {
                UE::GC::MarkAsReachable(local_3f0.Handle);
                goto LAB_149b0ccdf;
              }
LAB_149b0ccfd:
              FVar15.Handle = FVar30.Handle;
            }
            local_48 = 0;
            local_47 = 0;
            local_43 = 0;
            local_41 = 0;
            local_78._s_0.X = 0.0;
            local_78._s_0.Y = 0.0;
            local_78._s_0.Z = 0.0;
            uStack_60 = 0;
            local_58 = 0;
            uStack_50 = 0;
            pUVar16 = UPCGSpatialData::ToBasePointData
                                ((UPCGSpatialData *)FVar15.Handle,param_1,
                                 (TBox<double> *)&local_78._s_0);
            FPCGDataPtrWrapper::operator=(&this_02->Data,(UPCGData *)pUVar16);
            pFVar25 = local_428;
            if ((this_02->Data).Data.field0_0x0.DebugPtr ==
                (((FPCGTaggedData *)FVar29.Data)->Data).Data.field0_0x0.DebugPtr)
            goto LAB_149b0d7b7;
            uVar22 = (ulonglong)local_418;
            FVar29.Data = FVar29.Data + 0x78;
            *(undefined1 *)&param_1[1]._padding_ = 1;
            goto LAB_149b0cbab;
          }
        }
      }
      else if ((UPCGData *)local_3f8.Handle != (UPCGData *)0x0) {
        UE::GC::MarkAsReachable(local_3f8.Handle);
        goto LAB_149b0cc90;
      }
      local_3e8.Handle = (UObject *)(((FPCGTaggedData *)FVar29.Data)->Data).Data.field0_0x0.DebugPtr
      ;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b0cd99:
        if ((UPCGSettings *)local_3e8.Handle == (UPCGSettings *)0x0) goto LAB_149b0cdb7;
        pUVar14 = Z_Construct_UClass_UPCGParamData_NoRegister();
        bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_3e8,pUVar14);
        local_420 = local_3e8;
        if (!bVar10) goto LAB_149b0cdb7;
      }
      else {
        if ((UPCGSettings *)local_3e8.Handle != (UPCGSettings *)0x0) {
          UE::GC::MarkAsReachable(local_3e8.Handle);
          goto LAB_149b0cd99;
        }
LAB_149b0cdb7:
        local_420.Handle = FVar30.Handle;
      }
      pFVar25 = local_428;
      if ((UPCGSettings *)local_420.Handle != (UPCGSettings *)0x0) {
        pUVar19 = *(UPCGMetadata **)&local_420.Handle[1].field_0x10;
        uVar22 = UPCGMetadata::GetLocalItemCount(pUVar19);
        if ((uVar22 != 0) ||
           (pFVar23 = local_358, pFVar25 = local_428,
           (char)((UPCGSettings *)(local_438.Handle + 5))->_padding_ == '\0')) {
          pUVar16 = FPCGContext::NewPointData_AnyThread(param_1);
          local_430 = pUVar16;
          if (pUVar16->_padding_ == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("PointData->Metadata",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCollapseElement.cpp"
                                ,0x68,L"");
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              uVar11 = (*pcVar5)();
              return (bool)uVar11;
            }
          }
          UPCGMetadata::Initialize((UPCGMetadata *)pUVar16->_padding_,pUVar19);
          (**(code **)(pUVar16->_padding_ + 0x490))(pUVar16,uVar22 & 0xffffffff,1);
          (**(code **)(pUVar16->_padding_ + 0x498))(pUVar16,0x80);
          (**(code **)(pUVar16->_padding_ + 0x4f8))(pUVar16,&local_218,0);
          FVar15._0_4_ = 0;
          FVar18.Handle = FVar30.Handle;
          FVar26.Handle = FVar30.Handle;
          if (0 < (longlong)uVar22) {
            do {
              uVar31 = FVar18._0_4_;
              uVar13 = FVar15._0_4_;
              if ((int)uVar31 < local_208) {
                uVar13 = ~uVar31 >> 0x1f;
              }
              if (uVar13 == 0) {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar10) {
                  pcVar5 = (code *)swi(3);
                  uVar11 = (*pcVar5)();
                  return (bool)uVar11;
                }
              }
              pFVar20 = local_200;
              if (uVar31 == (int)uVar31 % local_20c) {
                pFVar20 = (FObjectPtr_u_0 *)
                          ((longlong)((int)uVar31 % local_20c) * (longlong)local_210 + local_218);
              }
              FVar18._0_4_ = uVar31 + 1;
              FVar18._4_4_ = 0;
              pFVar20->Handle = (UObject *)FVar26;
              pUVar16 = local_430;
              FVar26 = (FObjectPtr_u_0)(longlong)(int)FVar18._0_4_;
            } while ((longlong)(int)FVar18._0_4_ < (longlong)uVar22);
          }
          this_01 = local_2f0;
          if (local_2f0->DebugPtr == (UPCGSettings *)0x0) {
            pUVar2 = local_360->Node;
            if (pUVar2 != (UPCGNode *)0x0) {
              pUVar17 = UPCGNode::GetSettings(pUVar2);
              if (pUVar17 != (UPCGSettings *)0x0) {
                pUVar17 = UPCGNode::GetSettings(pUVar2);
                FVar18.Handle = (UObject *)FPCGDataCollection::GetSettings(local_3e0,pUVar17);
                if ((UPCGSettings *)FVar18.Handle != (UPCGSettings *)0x0) {
                  local_440.Handle = FVar18.Handle;
                  pUVar14 = UPCGConvertToPointDataSettings::StaticClass();
                  iVar12 = (int)pUVar14->_padding_;
                  if ((iVar12 <= *(int *)(*(longlong *)&(FVar18.Handle)->field_0x10 + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)&(FVar18.Handle)->field_0x10 + 0x30) +
                       (longlong)iVar12 * 8) == &pUVar14->_padding_)) goto LAB_149b0cfa6;
                }
                goto LAB_149b0cf9e;
              }
            }
            pFVar20 = (FObjectPtr_u_0 *)
                      TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                      FindByPredicate<_FPCGDataCollection::GetSettings<UPCGConvertToPointDataSettings>_::__l2::<lambda_1>_>
                                (&local_3e0->TaggedData,<Var33);
            if (pFVar20 != (FObjectPtr_u_0 *)0x0) {
              local_3d8 = (FObjectPtr_u_0)pFVar20->Handle;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                if ((UPCGSettings *)local_3d8.Handle == (UPCGSettings *)0x0) goto LAB_149b0cf9e;
                UE::GC::MarkAsReachable(local_3d8.Handle);
              }
              if ((UPCGSettings *)local_3d8.Handle != (UPCGSettings *)0x0) {
                pUVar14 = UPCGConvertToPointDataSettings::StaticClass();
                bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_3d8,pUVar14);
                if (bVar10) {
                  local_440.Handle = local_3d8.Handle;
                  FVar18 = local_3d8;
                  goto LAB_149b0cfa6;
                }
              }
            }
LAB_149b0cf9e:
            local_440.Handle = (UObject *)0x0;
            FVar18.Handle = FVar30.Handle;
          }
          else {
            pUVar14 = UPCGConvertToPointDataSettings::StaticClass();
            bVar10 = FObjectPtr::IsA(&this_01->ObjectPtr,pUVar14);
            if (!bVar10) goto LAB_149b0cf9e;
            local_440.Handle = (UObject *)this_01->DebugPtr;
            FVar18.Handle = local_440.Handle;
          }
LAB_149b0cfa6:
          if ((UPCGSettings *)FVar18.Handle != (UPCGSettings *)0x0) {
            if ((char)((UPCGSettings *)(FVar18.Handle + 5))->_padding_ != '\0') {
              local_410.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_410.ArrayNum = 0;
              local_410.ArrayMax = 0;
              local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_348.ArrayNum = 0;
              local_348.ArrayMax = 0;
              pUVar19 = (UPCGMetadata *)(**(code **)(pUVar16->_padding_ + 800))(pUVar16);
              UPCGMetadata::GetAttributes(pUVar19,&local_410,&local_348);
              iVar12 = local_410.ArrayNum;
              uVar22 = (ulonglong)local_410.ArrayNum;
              pFVar24 = (FName *)(local_410.AllocatorInstance.Data + uVar22 * 8);
              FVar29.Data = local_410.AllocatorInstance.Data;
              while( true ) {
                if ((int)uVar22 != iVar12) {
                  local_445[0] = 0;
                  `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_445);
                }
                if ((FName *)FVar29.Data == pFVar24) break;
                FVar3 = *(FName *)FVar29.Data;
                local_350.ComparisonIndex.Value = 0;
                local_350.Number = 0;
                FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
                          ((FPCGAttributePropertyOutputSelector *)&local_3a8);
                FPCGAttributePropertySelector::SetDomainName(&local_3a8,local_350,true);
                FPCGAttributePropertySelector::SetPropertyName(&local_3a8,FVar3,true);
                DestructItems<FString,int>
                          ((FString *)local_3a8.ExtraNames.AllocatorInstance.Data,
                           local_3a8.ExtraNames.ArrayNum);
                local_3a8.ExtraNames.ArrayNum = 0;
                if (local_3a8.ExtraNames.ArrayMax == 0) {
                  local_3a8.ExtraNames.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,0,local_3a8.ExtraNames.ArrayMax,
                             &local_3a8.ExtraNames.AllocatorInstance,0,
                             &local_3a8.ExtraNames.ArrayMax);
                  ConstructItems<FString,FString,int>
                            (local_3a8.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
                }
                TVar21 = PCGAttributeAccessorHelpers::CreateAccessor
                                   (&local_338,(FPCGAttributePropertySelector *)pUVar16,
                                    SUB81(&local_3a8,0));
                lVar4 = (TVar21.Ptr)->_padding_;
                if ((undefined8 *)local_338._padding_ != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)local_338._padding_)(local_338._padding_,1);
                }
                if (lVar4 != 0) {
                  local_2b8 = local_420;
                  local_2b0 = local_430;
                  local_368.ComparisonIndex.Value = 0;
                  local_368.Number = 0;
                  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
                            ((FPCGAttributePropertyInputSelector *)&local_2a8);
                  FPCGAttributePropertySelector::SetDomainName(&local_2a8,local_368,true);
                  FPCGAttributePropertySelector::SetAttributeName(&local_2a8,FVar3,true);
                  DestructItems<FString,int>
                            ((FString *)local_2a8.ExtraNames.AllocatorInstance.Data,
                             local_2a8.ExtraNames.ArrayNum);
                  local_2a8.ExtraNames.ArrayNum = 0;
                  if (local_2a8.ExtraNames.ArrayMax == 0) {
                    local_2a8.ExtraNames.ArrayMax = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,0,local_2a8.ExtraNames.ArrayMax,
                               &local_2a8.ExtraNames.AllocatorInstance,0,
                               &local_2a8.ExtraNames.ArrayMax);
                    ConstructItems<FString,FString,int>
                              (local_2a8.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
                  }
                  iVar8 = local_3a8.ExtraNames.ArrayNum;
                  FVar7.Data = local_3a8.ExtraNames.AllocatorInstance.Data;
                  local_268 = &___7FPCGAttributePropertySelector__6B_;
                  local_260 = local_3a8.Selection;
                  local_25c = local_3a8.DomainName;
                  local_254 = local_3a8.AttributeName;
                  local_24c = local_3a8.PropertyName;
                  local_240.Data = (FScriptContainerElement *)0x0;
                  local_238 = local_3a8.ExtraNames.ArrayNum;
                  if (local_3a8.ExtraNames.ArrayNum == 0) {
                    local_234 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,local_3a8.ExtraNames.ArrayNum,0,&local_240,
                               local_3a8.ExtraNames.ArrayNum,&local_234);
                    ConstructItems<FString,FString,int>(local_240.Data,(FString *)FVar7.Data,iVar8);
                  }
                  local_230 = local_3a8.ExtraProperty;
                  local_268 = &___7FPCGAttributePropertyOutputSelector__6B_;
                  local_228 = 0;
                  local_220 = 0x1ff;
                  bVar10 = PCGMetadataHelpers::CopyAttribute((FPCGCopyAttributeParams *)&local_2b8);
                  if ((bVar10) && (local_440.Handle[7].field_0x10 != '\0')) {
                    pUVar19 = (UPCGMetadata *)(**(code **)(local_430->_padding_ + 0x328))();
                    FStack_1e8 = PCGMetadataDomainID::Default;
                    FVar6 = FStack_1e8;
                    FStack_1e8._0_8_ = PCGMetadataDomainID::Default._0_8_;
                    local_1d8.MetadataDomain.Flag = FStack_1e8.Flag;
                    local_1d8.MetadataDomain._1_3_ = FStack_1e8._1_3_;
                    local_1d8.MetadataDomain.CustomFlag = FStack_1e8.CustomFlag;
                    local_1d8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
                    local_1f0 = FVar3;
                    FStack_1e8 = FVar6;
                    local_1d8.Name = FVar3;
                    UPCGMetadata::DeleteAttribute(pUVar19,&local_1d8);
                  }
                  DestructItems<FString,int>((FString *)local_240.Data,local_238);
                  if (local_240.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_240.Data);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_2a8.ExtraNames.AllocatorInstance.Data,
                             local_2a8.ExtraNames.ArrayNum);
                  if (local_2a8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_2a8.ExtraNames.AllocatorInstance.Data);
                  }
                }
                DestructItems<FString,int>
                          ((FString *)local_3a8.ExtraNames.AllocatorInstance.Data,
                           local_3a8.ExtraNames.ArrayNum);
                if (local_3a8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3a8.ExtraNames.AllocatorInstance.Data);
                }
                uVar22 = local_410._8_8_ & 0xffffffff;
                FVar29.Data = FVar29.Data + 8;
                pUVar16 = local_430;
              }
              if (local_348.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_348.AllocatorInstance.Data);
              }
              FVar18 = local_440;
              if ((FName *)local_410.AllocatorInstance.Data != (FName *)0x0) {
                FMemory::Free(local_410.AllocatorInstance.Data);
                FVar18 = local_440;
              }
            }
            local_3d0 = &((UPCGSettings *)(FVar18.Handle + 5))->_padding_;
            iVar12 = (int)((UPCGSettings *)(FVar18.Handle + 5))->_padding_;
            FVar29.Data = (FScriptContainerElement *)local_3c8;
            if (iVar12 != *(int *)&FVar18.Handle[6].field_0x1c) {
              uVar13 = *(uint *)&FVar18.Handle[6].field_0x10;
              local_440.Handle = (UObject *)&((UPCGSettings *)(FVar18.Handle + 5))->_padding_;
              local_338._padding_._4_4_ = 1;
              local_338.Crc._4_4_ = FVar15._0_4_;
              local_338.Metadata.field0_0x0._0_4_ = FVar15._0_4_;
              if (uVar13 != 0) {
                plVar27 = (longlong *)local_440;
                if (*(longlong **)&FVar18.Handle[6].field_0x8 != (longlong *)0x0) {
                  plVar27 = *(longlong **)&FVar18.Handle[6].field_0x8;
                }
                uVar31 = (uint)*plVar27;
                FVar15.Handle = FVar30.Handle;
                FVar26.Handle = FVar30.Handle;
                while( true ) {
                  local_338.Metadata.field0_0x0._0_4_ = FVar26._0_4_;
                  if (uVar31 != 0) break;
                  FVar15._0_4_ = FVar15._0_4_ + 1;
                  FVar15._4_4_ = 0;
                  FVar26._0_4_ = local_338.Metadata.field0_0x0._0_4_ + 0x20;
                  FVar26._4_4_ = 0;
                  local_338.Crc._4_4_ = uVar13;
                  local_338.Metadata.field0_0x0._0_4_ = FVar26._0_4_;
                  if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <
                      (int)FVar15._0_4_) goto LAB_149b0d485;
                  uVar31 = *(uint *)((longlong)plVar27 + (longlong)(int)FVar15._0_4_ * 4);
                }
                local_338._padding_._4_4_ = -uVar31 & uVar31;
                uVar22 = (ulonglong)local_338._padding_._4_4_ * 2 + 1;
                lVar4 = 0x3f;
                if (uVar22 != 0) {
                  for (; uVar22 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                  }
                }
                local_338._padding_._0_4_ = (int)lVar4;
                local_338.Crc._4_4_ =
                     (int)local_338._padding_ + -1 + local_338.Metadata.field0_0x0._0_4_;
                if ((int)uVar13 < (int)local_338.Crc._4_4_) {
                  local_338.Crc._4_4_ = uVar13;
                }
              }
LAB_149b0d485:
              local_338._64_4_ = iVar12 - *(int *)&FVar18.Handle[6].field_0x1c;
              uVar31 = *(uint *)&FVar18.Handle[6].field_0x10;
              uVar28 = uVar31 & 0xffffffe0;
              TStack_2e0._padding_ = CONCAT44(local_338._padding_._4_4_,FVar15._0_4_);
              local_338.Crc.Value = 0xffffffff;
              local_338.Metadata.field0_0x0._4_4_ = local_7c;
              TStack_2e0._28_4_ = local_7c;
              TStack_2e0.BaseBitIndex = local_338.Metadata.field0_0x0._0_4_;
              uStack_2c0 = CONCAT44(local_338.CollectionRefCount,local_338._64_4_);
              iVar12 = (int)uVar31 >> 5;
              TStack_2e0.UnvisitedBitMask = 0xffffffff;
              local_338._padding_ = (longlong)local_3d0;
              local_338._padding_._0_4_ = FVar15._0_4_;
              local_338.UID = (ulong64)local_440;
              local_2e8 = local_3d0;
              TStack_2e0.CurrentBitIndex = local_338.Crc._4_4_;
              TStack_2e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_440;
              if (((int)uVar31 < 0) || ((int)uVar13 < (int)uVar31)) {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L"");
                if (bVar10) {
                  pcVar5 = (code *)swi(3);
                  uVar11 = (*pcVar5)();
                  return (bool)uVar11;
                }
              }
              plVar27 = local_3d0;
              FVar15 = local_440;
              uVar13 = (uint)*(longlong *)&(local_440.Handle)->field_0x18;
              if (uVar31 != uVar13) {
                FVar26 = local_440;
                if ((UPCGSettings *)*(FObjectPtr_u_0 *)&(local_440.Handle)->field_0x10 !=
                    (UPCGSettings *)0x0) {
                  FVar26.Handle = *(FObjectPtr_u_0 *)&(local_440.Handle)->field_0x10;
                }
                uVar31 = -1 << ((byte)uVar31 & 0x1f) &
                         *(uint *)((longlong)&(FVar26.Handle)->field_0x0 + (longlong)iVar12 * 4);
                while (uVar31 == 0) {
                  iVar12 = iVar12 + 1;
                  uVar28 = uVar28 + 0x20;
                  uVar31 = uVar13;
                  if ((int)(((int)(uVar13 - 1) >> 0x1f & 0x1fU) + (uVar13 - 1)) >> 5 < iVar12)
                  goto LAB_149b0d5c0;
                  uVar31 = *(uint *)((longlong)&(FVar26.Handle)->field_0x0 + (longlong)iVar12 * 4);
                }
                uVar22 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
                lVar4 = 0x3f;
                if (uVar22 != 0) {
                  for (; uVar22 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                  }
                }
                local_338._padding_._4_4_ = (int)lVar4;
                uVar31 = (uVar28 - 1) + local_338._padding_._4_4_;
                if ((int)uVar13 < (int)uVar31) {
                  uVar31 = uVar13;
                }
              }
LAB_149b0d5c0:
              while( true ) {
                plVar9 = local_2e8;
                if ((int)local_2e8[1] - *(int *)((longlong)local_2e8 + 0x34) != (int)uStack_2c0) {
                  local_447 = (<lambda_1>)0x0;
                  `TSparseArray<TSparseSetElement<TTuple<FPCGAttributePropertyInputSelector,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_447);
                }
                pUVar16 = local_430;
                if (((TStack_2e0.CurrentBitIndex == uVar31) &&
                    ((UObject *)TStack_2e0.Array == FVar15.Handle)) &&
                   (FVar29.Data = (FScriptContainerElement *)local_3c8, plVar9 == plVar27)) break;
                pFVar32 = (FPCGAttributePropertySelector *)
                          ((longlong)TStack_2e0.CurrentBitIndex * 0x88 + *plVar9);
                local_170 = local_430;
                local_178.Handle = local_420.Handle;
                FPCGAttributePropertySelector::FPCGAttributePropertySelector(&local_168,pFVar32);
                local_168._padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
                FPCGAttributePropertySelector::FPCGAttributePropertySelector(&local_128,pFVar32 + 1)
                ;
                local_e8 = 0;
                local_128._padding_ = (longlong)&___7FPCGAttributePropertyOutputSelector__6B_;
                local_e0 = 0x1ff;
                bVar10 = PCGMetadataHelpers::CopyAttribute((FPCGCopyAttributeParams *)&local_178);
                if ((bVar10) && (FVar18.Handle[7].field_0x10 != '\0')) {
                  pUVar19 = (UPCGMetadata *)(**(code **)(pUVar16->_padding_ + 0x328))(pUVar16);
                  FVar6 = PCGMetadataDomainID::Default;
                  pFVar32 = (FPCGAttributePropertySelector *)
                            FPCGAttributePropertyInputSelector::CopyAndFixLast
                                      ((FPCGAttributePropertyInputSelector *)pFVar32,
                                       (FPCGAttributePropertyInputSelector *)local_d8,
                                       (UPCGData *)local_420.Handle);
                  local_1b8.Name = FPCGAttributePropertySelector::GetName(pFVar32);
                  FStack_190 = FVar6;
                  local_1b8.Name = *(FName *)local_1b8.Name;
                  FStack_190._0_8_ = FVar6._0_8_;
                  local_1b8.MetadataDomain.DebugName = FVar6.DebugName;
                  local_1b8.MetadataDomain.Flag = FStack_190.Flag;
                  local_1b8.MetadataDomain._1_3_ = FStack_190._1_3_;
                  local_1b8.MetadataDomain.CustomFlag = FStack_190.CustomFlag;
                  local_198 = local_1b8.Name;
                  FStack_190 = FVar6;
                  UPCGMetadata::DeleteAttribute(pUVar19,&local_1b8);
                  DestructItems<FString,int>((FString *)local_d8._40_8_,local_a8);
                  if ((FString *)local_d8._40_8_ != (FString *)0x0) {
                    FMemory::Free((void *)local_d8._40_8_);
                  }
                }
                DestructItems<FString,int>
                          ((FString *)local_128.ExtraNames.AllocatorInstance.Data,
                           local_128.ExtraNames.ArrayNum);
                if (local_128.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_128.ExtraNames.AllocatorInstance.Data);
                }
                DestructItems<FString,int>
                          ((FString *)local_168.ExtraNames.AllocatorInstance.Data,
                           local_168.ExtraNames.ArrayNum);
                if (local_168.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_168.ExtraNames.AllocatorInstance.Data);
                }
                TStack_2e0.UnvisitedBitMask =
                     TStack_2e0.UnvisitedBitMask & ~TStack_2e0._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e0);
              }
            }
          }
          FPCGDataPtrWrapper::operator=
                    ((FPCGDataPtrWrapper *)local_338._padding_,(UPCGData *)local_430);
          *(undefined1 *)&local_360[1]._padding_ = 1;
          pFVar23 = local_358;
          pFVar25 = local_428;
          param_1 = local_360;
        }
      }
    }
LAB_149b0d7b7:
    uVar22 = (ulonglong)local_418;
    FVar29.Data = FVar29.Data + 0x78;
  } while( true );
}

// ExecutionLoopMode @ 149b11b70

EPCGElementExecutionLoopMode __thiscall
FPCGCollapseElement::ExecutionLoopMode(FPCGCollapseElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// ShouldComputeFullOutputDataCrc @ 149b2cda0

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
FPCGCollapseElement::ShouldComputeFullOutputDataCrc(FPCGCollapseElement *this,FPCGContext *param_1)

{
  if ((param_1 != (FPCGContext *)0x0) && ((char)param_1[1]._padding_ != '\0')) {
    return true;
  }
  return false;
}

// SupportsBasePointDataInputs @ 149b2d1d0

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
FPCGCollapseElement::SupportsBasePointDataInputs(FPCGCollapseElement *this,FPCGContext *param_1)

{
  return true;
}

