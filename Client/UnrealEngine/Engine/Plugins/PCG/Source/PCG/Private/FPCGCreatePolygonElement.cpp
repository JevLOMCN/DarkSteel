// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149c63a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGCreatePolygonElement::ExecuteInternal(FPCGCreatePolygonElement *this,FPCGContext *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  UPCGNode *this_00;
  UPCGData *pUVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  bool bVar19;
  uint uVar20;
  FPCGContext *pFVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 uVar24;
  char cVar25;
  bool bVar26;
  FScriptContainerElement FVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  UClass *pUVar31;
  UPCGSettings *pUVar32;
  UPCGCreatePolygon2DSettings *pUVar33;
  longlong lVar34;
  TMatrix<double> *this_01;
  TQuat<double> *pTVar35;
  FText *pFVar36;
  UObject *pUVar37;
  UPCGPolygon2DData *this_02;
  FPCGTaggedData *pFVar38;
  UPCGMetadata *pUVar39;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar40;
  FObjectPtr_u_0 FVar41;
  undefined8 *puVar42;
  ulonglong uVar43;
  FObjectPtr_u_0 FVar44;
  ForAnyElementType FVar45;
  FScriptContainerElement *pFVar46;
  FObjectPtr_u_0 FVar47;
  uint uVar48;
  FObjectPtr_u_0 FVar49;
  FObjectPtr_u_0 FVar50;
  FObjectPtr_u_0 FVar51;
  FScriptContainerElement *pFVar52;
  FObjectPtr_u_0 FVar53;
  undefined8 *puVar54;
  uint uVar55;
  uint uVar56;
  FObjectPtr_u_0 FVar57;
  FScriptContainerElement *pFVar58;
  uint uVar59;
  FObjectPtr_u_0 FVar60;
  bool bVar61;
  bool bVar62;
  longlong lVar63;
  longlong lVar64;
  double dVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  ulong64 uVar75;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  double dVar76;
  double dVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined4 uVar83;
  undefined4 uVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined4 uVar88;
  undefined4 uVar89;
  undefined1 auStackY_628 [32];
  <lambda_1> local_5d4 [4];
  UPCGCreatePolygon2DSettings *local_5d0;
  uint local_5c8;
  ForAnyElementType local_5c0;
  undefined8 local_5b8;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_5b0;
  TPolygon2<double> local_5a0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_590;
  undefined1 local_580;
  undefined1 local_57f;
  undefined1 local_57e;
  undefined1 local_57d;
  undefined1 local_57c;
  undefined1 local_57b [3];
  undefined1 local_578 [12];
  int iStack_56c;
  FScriptContainerElement local_568;
  ForAnyElementType local_560;
  undefined8 local_558;
  FPCGContext *local_550;
  ForAnyElementType local_548;
  undefined8 local_540;
  uint local_538;
  uint local_534;
  FPCGTaggedData *local_530;
  TArray<int,TSizedDefaultAllocator<32>_> local_528;
  TPolygon2<double> local_518;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> local_508;
  longlong local_4f8;
  undefined1 local_4f0 [16];
  undefined1 local_4e0 [40];
  TObjectPtr<UPCGMetadata>_u_0 local_4b8;
  uint local_4b0;
  FObjectPtr_u_0 local_4a8;
  FObjectPtr_u_0 local_4a0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_498;
  double local_488;
  TVector<double>_u_0 local_480;
  undefined8 local_468;
  undefined8 uStack_460;
  TObjectPtr<UObject> local_458;
  FPCGTaggedData *local_450;
  UPCGPolygon2DData *local_448;
  ulonglong local_440;
  FPCGAttributePropertySelector local_438;
  TVector<double>_u_0 local_3f8;
  double *local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  TGeneralPolygon2<double> *local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  FScriptContainerElement *local_3b8;
  uint uStack_3b0;
  undefined4 uStack_3ac;
  FScriptContainerElement *local_3a8;
  int local_3a0;
  longlong local_398;
  int local_390;
  int local_38c;
  int local_388;
  FPCGAttributePropertySelector local_378;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_338;
  FText local_328;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_318;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_308;
  FText local_2f8;
  TArrayView<double,int> local_2e8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0 [16];
  double local_2a0;
  FPCGAttributeAccessorKeysEntries local_298;
  undefined1 local_268 [16];
  TQuat<double> local_258;
  TTransform<double> local_238;
  longlong local_1d8;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_628;
  bVar61 = -1 < CpuChannel->Enabled;
  local_550 = param_1;
  if (bVar61) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId36,"FPCGSplitSplineElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Polygon\\PCGCreatePolygon2D.cpp"
               ,0x24);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId36);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar32 = UPCGNode::GetSettings(this_00), pUVar32 == (UPCGSettings *)0x0)) {
      pFVar38 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreatePolygon2DSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_5d4[0]);
      if (pFVar38 != (FPCGTaggedData *)0x0) {
        local_5d0 = Cast<UPCGCreatePolygon2DSettings_const_>(&pFVar38->Data);
        goto LAB_149c63b73;
      }
    }
    else {
      pUVar32 = UPCGNode::GetSettings(this_00);
      pUVar33 = (UPCGCreatePolygon2DSettings *)
                FPCGDataCollection::GetSettings(&param_1->InputData,pUVar32);
      if (pUVar33 != (UPCGCreatePolygon2DSettings *)0x0) {
        local_5d0 = pUVar33;
        pUVar31 = UPCGCreatePolygon2DSettings::StaticClass();
        iVar28 = (int)pUVar31->_padding_;
        if ((iVar28 <= *(int *)(pUVar33->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar33->_padding_ + 0x30) + (longlong)iVar28 * 8) ==
            &pUVar31->_padding_)) goto LAB_149c63b73;
      }
    }
    local_5d0 = (UPCGCreatePolygon2DSettings *)0x0;
  }
  else {
    pUVar31 = UPCGCreatePolygon2DSettings::StaticClass();
    bVar23 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar31);
    if (bVar23) {
      local_5d0 = (UPCGCreatePolygon2DSettings *)(param_1->SettingsWithOverride).field0_0x0.DebugPtr
      ;
    }
    else {
      local_5d0 = (UPCGCreatePolygon2DSettings *)0x0;
    }
  }
LAB_149c63b73:
  pUVar33 = local_5d0;
  FVar60.Handle = (UObject *)0x0;
  if ((local_5d0 == (UPCGCreatePolygon2DSettings *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Polygon\\PCGCreatePolygon2D.cpp"
                          ,0x27,L""), bVar23)) {
    pcVar5 = (code *)swi(3);
    uVar24 = (*pcVar5)();
    return (bool)uVar24;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_498,&PCGPinConstants::DefaultInputLabel);
  uVar43 = (ulonglong)local_498.ArrayNum;
  uVar59 = 0;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = __real_3f50624dd2f1a9fc;
  local_590.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_450 = (FPCGTaggedData *)(local_498.AllocatorInstance.Data + uVar43 * 0x78);
  local_590.ArrayNum = 0;
  local_590.ArrayMax = 0;
  local_528.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_528.ArrayNum = 0;
  local_528.ArrayMax = 0;
  local_5b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5b0.ArrayNum = 0;
  local_5b0.ArrayMax = 0;
  local_4b0 = local_498.ArrayNum;
  FVar41.Handle = FVar60.Handle;
  FVar45.Data = local_498.AllocatorInstance.Data;
  do {
    pFVar38 = local_450;
    dVar80 = __real_3f1a36e2e0000000;
    uVar56 = FVar41._0_4_;
    local_530 = (FPCGTaggedData *)FVar45.Data;
    if (local_498.ArrayNum != (uint)uVar43) {
      local_580 = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_580);
      uVar56 = local_590.ArrayMax;
    }
    if ((FPCGTaggedData *)FVar45.Data == pFVar38) {
      if (local_5b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b0.AllocatorInstance.Data);
      }
      if (local_528.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_528.AllocatorInstance.Data);
      }
      if (local_590.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_590.AllocatorInstance.Data);
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_498.AllocatorInstance.Data,local_498.ArrayNum);
      if ((FPCGTaggedData *)local_498.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_498.AllocatorInstance.Data);
      }
      if (bVar61) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    cVar25 = '\0';
    bVar23 = false;
    bVar19 = false;
    bVar26 = false;
    local_590.ArrayNum = 0;
    if (((int)uVar56 < 0) && (uVar56 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&local_590.AllocatorInstance,0,&local_590.ArrayMax);
    }
    bVar62 = (longlong)local_528._8_8_ < 0;
    local_528._8_8_ = local_528._8_8_ & 0xffffffff00000000;
    if (bVar62) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_528.AllocatorInstance,0,&local_528.ArrayMax);
    }
    local_5b0.ArrayNum = 0;
    if (local_5b0.ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_5b0.AllocatorInstance,0,&local_5b0.ArrayMax);
    }
    pFVar38 = local_530;
    local_4a8.Handle = (UObject *)(local_530->Data).Data.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c63cfe:
      if ((UPCGSpatialData *)local_4a8.Handle == (UPCGSpatialData *)0x0) goto LAB_149c63e70;
      pUVar31 = Z_Construct_UClass_UPCGSplineData_NoRegister();
      bVar62 = FObjectPtr::IsA((FObjectPtr *)&local_4a8,pUVar31);
      FVar41 = local_4a8;
      if ((!bVar62) ||
         (local_4e0._16_8_ = local_4a8,
         (UPCGSpatialData *)local_4a8.Handle == (UPCGSpatialData *)0x0)) goto LAB_149c63e70;
      cVar25 = (**(code **)(*(longlong *)local_4a8.Handle + 0x510))(local_4a8.Handle);
      dVar6 = pUVar33->SplineMaxDiscretizationError;
      if (pUVar33->SplineMaxDiscretizationError <= auVar71._0_8_) {
        dVar6 = auVar71._0_8_;
      }
      bVar23 = cVar25 == '\0';
      FPCGSplineStruct::ConvertSplineToPolyLine
                ((FPCGSplineStruct *)&FVar41.Handle[6].field_0x20,World,(float)dVar6,&local_590);
      if ((cVar25 != '\0') && (local_590.ArrayNum != 0)) {
        if (local_590.ArrayNum < 1) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar26) {
            pcVar5 = (code *)swi(3);
            uVar24 = (*pcVar5)();
            return (bool)uVar24;
          }
        }
        iVar28 = (local_590.ArrayNum - (local_590.ArrayNum - 1U)) + -1;
        if (iVar28 != 0) {
          memmove(local_590.AllocatorInstance.Data + (longlong)(int)(local_590.ArrayNum - 1U) * 0x18
                  ,local_590.AllocatorInstance.Data +
                   (longlong)(int)(local_590.ArrayNum - 1U) * 0x18 + 0x18,(longlong)iVar28 * 0x18);
        }
        local_590.ArrayNum = local_590.ArrayNum - 1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&local_590.AllocatorInstance,local_590.ArrayNum,&local_590.ArrayMax);
      }
      lVar34 = (**(code **)(*(longlong *)FVar41.Handle + 0x520))(FVar41.Handle,local_268);
      bVar26 = *(int *)(lVar34 + 8) != 0;
      pUVar33 = local_5d0;
      bVar19 = bVar26;
      goto LAB_149c6424a;
    }
    if ((UPCGSpatialData *)local_4a8.Handle != (UPCGSpatialData *)0x0) {
      UE::GC::MarkAsReachable(local_4a8.Handle);
      goto LAB_149c63cfe;
    }
LAB_149c63e70:
    local_4a0.Handle = (UObject *)(pFVar38->Data).Data.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c63e97:
      if ((UPCGSpatialData *)local_4a0.Handle == (UPCGSpatialData *)0x0) goto LAB_149c63ebb;
      pUVar31 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar62 = FObjectPtr::IsA((FObjectPtr *)&local_4a0,pUVar31);
      FVar41 = local_4a0;
      if (!bVar62) goto LAB_149c63ebb;
    }
    else {
      if ((UPCGSpatialData *)local_4a0.Handle != (UPCGSpatialData *)0x0) {
        UE::GC::MarkAsReachable(local_4a0.Handle);
        goto LAB_149c63e97;
      }
LAB_149c63ebb:
      FVar41.Handle = FVar60.Handle;
    }
    local_4e0._16_8_ = FVar41;
    if ((UPCGSpatialData *)FVar41.Handle == (UPCGSpatialData *)0x0) {
      PCGLog::InputOutput::LogInvalidInputDataError(param_1);
      goto LAB_149c6419e;
    }
    (**(code **)(*(longlong *)FVar41.Handle + 0x500))(FVar41.Handle,&local_1d8);
    if (0 < local_1c8) {
      FVar49.Handle = FVar60.Handle;
      iVar28 = local_1c8;
      if (local_590.ArrayMax < local_1c8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_1c8,&local_590.AllocatorInstance,local_590.ArrayNum,
                   &local_590.ArrayMax);
        iVar28 = local_1c8;
      }
      while (iVar29 = FVar49._0_4_, iVar29 != iVar28) {
        lVar34 = (longlong)(iVar29 % local_1cc) * (longlong)local_1d0;
        puVar54 = (undefined8 *)(lVar34 + 0x20 + local_1d8);
        uVar16 = *puVar54;
        uVar17 = puVar54[1];
        uVar3 = *(undefined8 *)(lVar34 + 0x30 + local_1d8);
        local_2c8 = uVar16;
        uStack_2c0 = uVar17;
        local_2b8 = uVar3;
        if (local_590.ArrayNum == local_590.ArrayMax) {
          local_590.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_590.AllocatorInstance,&local_590.ArrayMax);
        }
        FVar49._0_4_ = iVar29 + 1;
        FVar49._4_4_ = 0;
        *(undefined8 *)(local_590.AllocatorInstance.Data + (longlong)local_590.ArrayNum * 0x18) =
             uVar16;
        *(undefined8 *)(local_590.AllocatorInstance.Data + (longlong)local_590.ArrayNum * 0x18 + 8)
             = uVar17;
        *(undefined8 *)
         (local_590.AllocatorInstance.Data + (longlong)local_590.ArrayNum * 0x18 + 0x10) = uVar3;
        local_590.ArrayNum = local_590.ArrayNum + 1;
      }
      auVar71._8_8_ = 0;
      auVar71._0_8_ = __real_3f50624dd2f1a9fc;
      pFVar38 = local_530;
      dVar80 = __real_3f1a36e2e0000000;
    }
    (**(code **)(*(longlong *)FVar41.Handle + 0x538))(FVar41.Handle,&local_398);
    pUVar33 = local_5d0;
    param_1 = local_550;
    if (local_388 < 1) {
LAB_149c6424a:
      uVar88 = SUB84(pUVar33->OpenPolygonWidth,0);
      uVar89 = (undefined4)((ulonglong)pUVar33->OpenPolygonWidth >> 0x20);
      if (pUVar33->bUsePolygonWidthAttribute != false) {
        local_488 = 0.0;
        pUVar4 = (local_530->Data).Data.field0_0x0.DebugPtr;
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  (&pUVar33->PolygonWidthAttribute,(FPCGAttributePropertyInputSelector *)&local_378,
                   pUVar4);
        PCGAttributeAccessorHelpers::CreateConstAccessor
                  ((UPCGData *)local_4e0,(FPCGAttributePropertySelector *)pUVar4,SUB81(&local_378,0)
                  );
        if ((IPCGAttributeAccessor *)local_4e0._0_8_ == (IPCGAttributeAccessor *)0x0) {
          PCGLog::Metadata::LogFailToCreateAccessorError(&local_378,param_1);
          if ((IPCGAttributeAccessor *)local_4e0._0_8_ != (IPCGAttributeAccessor *)0x0) {
            (**(code **)*(longlong *)local_4e0._0_8_)(local_4e0._0_8_,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_378.ExtraNames.AllocatorInstance.Data,
                     local_378.ExtraNames.ArrayNum);
          if (local_378.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_378.ExtraNames.AllocatorInstance.Data);
          }
        }
        else {
          FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_298,0);
          local_3d8 = &local_488;
          uStack_3d0 = 1;
          local_2e8._12_4_ = uStack_3cc;
          local_2e8.ArrayNum = 1;
          local_2e8.DataPtr = local_3d8;
          bVar62 = IPCGAttributeAccessor::GetRange<double>
                             ((IPCGAttributeAccessor *)local_4e0._0_8_,&local_2e8,0,
                              (IPCGAttributeAccessorKeys *)&local_298,AllowBroadcastAndConstructible
                             );
          if (!bVar62) {
            PCGLog::Metadata::LogFailToGetAttributeError(&local_378,param_1);
          }
          if (local_298.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.ExtractedEntries.AllocatorInstance.Data);
          }
          if ((IPCGAttributeAccessor *)local_4e0._0_8_ != (IPCGAttributeAccessor *)0x0) {
            (**(code **)*(longlong *)local_4e0._0_8_)(local_4e0._0_8_,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_378.ExtraNames.AllocatorInstance.Data,
                     local_378.ExtraNames.ArrayNum);
          if (local_378.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_378.ExtraNames.AllocatorInstance.Data);
          }
          if (bVar62) {
            uVar88 = SUB84(local_488,0);
            uVar89 = (undefined4)((ulonglong)local_488 >> 0x20);
          }
        }
      }
      local_480._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
      local_480._s_0.Y = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
      local_480._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
      local_3f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_3f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_3f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      PolygonTriangulation::ComputePolygonPlane<double>
                (&local_590,(TVector<double> *)&local_480._s_0,(TVector<double> *)&local_3f8._s_0);
      if (local_480._s_0.Y * local_480._s_0.Y + local_480._s_0.X * local_480._s_0.X +
          local_480._s_0.Z * local_480._s_0.Z < dVar80) {
        local_480._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        local_480._s_0.Y = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        local_480._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
      }
      local_238.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_238.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_238.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_238.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_238.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_238.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_238.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_238.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      uVar75 = GlobalVectorConstants::Float1110.m128_u64[1];
      local_238.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_238.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_238.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_238.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      this_01 = UE::Math::TRotationMatrix<double>::MakeFromZ
                          (&local_158,(TVector<double> *)&local_480._s_0);
      pTVar35 = UE::Math::TMatrix<double>::ToQuat(this_01,&local_258);
      uVar43 = (ulonglong)(uint)local_590.ArrayNum;
      local_238.Rotation.XY.m128d_f64[0] = pTVar35->X;
      local_238.Rotation.XY.m128d_f64[1] = pTVar35->Y;
      local_238.Rotation.ZW.m128d_f64[0] = pTVar35->Z;
      local_238.Rotation.ZW.m128d_f64[1] = pTVar35->W;
      local_238.Translation.ZW.m128d_f64[1] = 0.0;
      local_238.Translation.ZW.m128d_f64[0] = local_3f8._s_0.Z;
      local_238.Translation.XY.m128d_f64[0] = local_3f8._s_0.X;
      local_238.Translation.XY.m128d_f64[1] = local_3f8._s_0.Y;
      local_5c0.Data = (FScriptContainerElement *)0x0;
      local_5b8 = 0;
      if (local_590.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar43);
      }
      FVar50.Handle = FVar60.Handle;
      if (0 < local_590.ArrayNum) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_590.ArrayNum,&local_5c0,0,(int *)((longlong)&local_5b8 + 4));
        uVar43 = (ulonglong)(uint)local_590.ArrayNum;
        FVar50.Handle = (UObject *)(local_5b8 & 0xffffffff);
      }
      uVar20 = _UNK_15061cc8c;
      uVar48 = _UNK_15061cc88;
      uVar55 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar56 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      iVar28 = (int)uVar43;
      pFVar46 = local_590.AllocatorInstance.Data + (longlong)iVar28 * 0x18;
      FVar45.Data = local_590.AllocatorInstance.Data;
      while( true ) {
        dVar80 = local_238.Scale3D.XY.m128d_f64[0];
        dVar6 = local_238.Scale3D.XY.m128d_f64[1];
        if ((int)uVar43 != iVar28) {
          local_57f = 0;
          `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_57f);
          FVar50.Handle = (UObject *)(local_5b8 & 0xffffffff);
          dVar80 = local_238.Scale3D.XY.m128d_f64[0];
          dVar6 = local_238.Scale3D.XY.m128d_f64[1];
        }
        pUVar33 = local_5d0;
        local_238.Scale3D.XY.m128d_f64[1]._4_4_ = (uint)((ulonglong)dVar6 >> 0x20);
        local_238.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
        local_238.Scale3D.XY.m128d_f64[0]._4_4_ = (uint)((ulonglong)dVar80 >> 0x20);
        local_238.Scale3D.XY.m128d_f64[0]._0_4_ = SUB84(dVar80,0);
        iVar29 = FVar50._0_4_;
        local_238.Scale3D.XY.m128d_f64[0] = dVar80;
        local_238.Scale3D.XY.m128d_f64[1] = dVar6;
        if (FVar45.Data == pFVar46) break;
        dVar6 = local_238.Rotation.XY.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar7 = local_238.Rotation.XY.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar10 = local_238.Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar76 = local_238.Rotation.ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar65 = *(double *)(FVar45.Data + 0x10) - local_238.Translation.ZW.m128d_f64[0];
        dVar12 = *(double *)FVar45.Data - local_238.Translation.XY.m128d_f64[0];
        dVar13 = *(double *)(FVar45.Data + 8) - local_238.Translation.XY.m128d_f64[1];
        uVar83 = (undefined4)((ulonglong)dVar13 >> 0x20);
        auVar73._8_4_ = SUB84(dVar7,0);
        auVar73._0_8_ = dVar6;
        auVar73._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        auVar8._8_4_ = SUB84(dVar76,0);
        auVar8._0_8_ = dVar10;
        auVar8._12_4_ = (int)((ulonglong)dVar76 >> 0x20);
        auVar74 = blendpd(auVar73,auVar8,2);
        auVar66._8_4_ = SUB84(dVar10,0);
        auVar66._0_8_ = dVar7;
        auVar66._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar85._8_4_ = SUB84(dVar13,0);
        auVar85._0_8_ = dVar12;
        auVar85._12_4_ = uVar83;
        auVar70._8_4_ = SUB84(dVar13,0);
        auVar70._0_8_ = dVar12;
        auVar70._12_4_ = uVar83;
        auVar86._0_8_ = auVar85._8_8_ * dVar6 - dVar7 * dVar12;
        auVar86._8_8_ = dVar65 * dVar7 - auVar66._8_8_ * dVar13;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = dVar65;
        auVar71 = blendpd(auVar70,auVar14,2);
        auVar72._0_8_ = auVar71._0_8_ * dVar10 - auVar74._0_8_ * dVar65;
        auVar72._8_8_ = auVar71._8_8_ * dVar76 - auVar74._8_8_ * 0.0;
        auVar71 = blendpd(auVar86,auVar72,2);
        dVar77 = auVar86._8_8_ + auVar86._8_8_;
        dVar11 = auVar72._0_8_ + auVar72._0_8_;
        uVar83 = SUB84(dVar11,0);
        uVar84 = (undefined4)((ulonglong)dVar11 >> 0x20);
        auVar87._0_8_ = auVar71._0_8_ + auVar71._0_8_;
        auVar87._8_8_ = auVar71._8_8_ + auVar71._8_8_;
        auVar81._8_4_ = uVar83;
        auVar81._0_8_ = dVar77;
        auVar81._12_4_ = uVar84;
        auVar67._8_4_ = uVar83;
        auVar67._0_8_ = dVar77;
        auVar67._12_4_ = uVar84;
        auVar78._8_4_ = uVar83;
        auVar78._0_8_ = dVar77;
        auVar78._12_4_ = uVar84;
        auVar71 = blendpd(auVar78,auVar87,2);
        auVar82._0_8_ = auVar81._8_8_ * dVar6 - dVar77 * dVar7;
        auVar82._8_8_ = auVar87._0_8_ * dVar7 - auVar67._8_8_ * dVar10;
        auVar68._8_4_ = SUB84(auVar87._8_8_,0);
        auVar68._0_8_ = auVar87._0_8_;
        auVar68._12_4_ = (int)((ulonglong)auVar87._8_8_ >> 0x20);
        auVar79._0_8_ = auVar71._0_8_ * dVar10 - auVar87._0_8_ * auVar74._0_8_;
        auVar79._8_8_ = auVar71._8_8_ * dVar76 - auVar68._8_8_ * auVar74._8_8_;
        uVar75 = 0;
        lVar34 = -(ulonglong)
                  ((double)CONCAT44(uVar55 & local_238.Scale3D.XY.m128d_f64[0]._4_4_,
                                    uVar56 & local_238.Scale3D.XY.m128d_f64[0]._0_4_) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar64 = -(ulonglong)
                  ((double)CONCAT44(uVar20 & local_238.Scale3D.XY.m128d_f64[1]._4_4_,
                                    uVar48 & local_238.Scale3D.XY.m128d_f64[1]._0_4_) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        auVar18._8_4_ = local_238.Scale3D.XY.m128d_f64[1]._0_4_;
        auVar18._0_8_ = dVar80;
        auVar18._12_4_ = local_238.Scale3D.XY.m128d_f64[1]._4_4_;
        auVar71 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18);
        auVar69._8_4_ = SUB84(auVar82._8_8_,0);
        auVar69._0_8_ = auVar82._0_8_;
        auVar69._12_4_ = (int)((ulonglong)auVar82._8_8_ >> 0x20);
        auVar9._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar9._0_8_ = local_238.Scale3D.ZW.m128d_f64[0];
        auVar9._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar74 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar9);
        lVar63 = -(ulonglong)
                  ((double)CONCAT44(uVar55 & (uint)((ulonglong)local_238.Scale3D.ZW.m128d_f64[0] >>
                                                   0x20),
                                    uVar56 & SUB84(local_238.Scale3D.ZW.m128d_f64[0],0)) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        dVar80 = (double)CONCAT44(~(uint)((ulonglong)lVar34 >> 0x20) & auVar71._4_4_,
                                  ~(uint)lVar34 & auVar71._0_4_) *
                 (dVar77 * dVar76 + dVar12 + auVar69._8_8_);
        dVar6 = (double)CONCAT44(~(uint)((ulonglong)lVar64 >> 0x20) & auVar71._12_4_,
                                 ~(uint)lVar64 & auVar71._8_4_) *
                (dVar11 * dVar76 + dVar13 + auVar79._0_8_);
        auVar71 = blendpd(auVar82,auVar79,2);
        local_2b0._8_4_ = SUB84(dVar6,0);
        local_2b0._0_8_ = dVar80;
        local_2b0._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        local_2a0 = (double)CONCAT44(~(uint)((ulonglong)lVar63 >> 0x20) & auVar74._4_4_,
                                     ~(uint)lVar63 & auVar74._0_4_) *
                    (auVar87._0_8_ * dVar76 + dVar65 + auVar71._0_8_);
        if (iVar29 == local_5b8._4_4_) {
          iVar29 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_5c0,(int *)((longlong)&local_5b8 + 4));
        }
        local_5b8 = CONCAT44(local_5b8._4_4_,iVar29 + 1U);
        FVar45.Data = FVar45.Data + 0x18;
        *(double *)(local_5c0.Data + (longlong)iVar29 * 0x10) = dVar80;
        *(double *)(local_5c0.Data + (longlong)iVar29 * 0x10 + 8) = dVar6;
        uVar43 = (ulonglong)(uint)local_590.ArrayNum;
        FVar50._4_4_ = 0;
        FVar50._0_4_ = iVar29 + 1U;
      }
      if ((local_5d0->InputType == ForceOpen) || ((bVar23 && (local_5d0->InputType == Automatic))))
      {
        bVar23 = true;
      }
      else {
        bVar23 = false;
      }
      local_578._0_8_ = (FScriptContainerElement *)0x0;
      stack0xfffffffffffffa90 = 0;
      local_560.Data = (FScriptContainerElement *)0x0;
      local_558 = 0;
      if (local_528.ArrayNum == 0) {
        if (((bVar23) && (cVar25 != '\0')) && (iVar29 != 0)) {
          if (iVar29 < 1) {
            bVar62 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar62) {
              pcVar5 = (code *)swi(3);
              uVar24 = (*pcVar5)();
              return (bool)uVar24;
            }
            iVar29 = (uint)local_5b8;
          }
          local_468 = *(undefined8 *)local_5c0.Data;
          uStack_460 = *(undefined8 *)(local_5c0.Data + 8);
          iVar28 = iVar29;
          if ((local_5c0.Data <= (FScriptContainerElement *)&local_468) &&
             ((FScriptContainerElement *)&local_468 <
              local_5c0.Data + (longlong)local_5b8._4_4_ * 0x10)) {
            bVar62 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar62) {
              pcVar5 = (code *)swi(3);
              uVar24 = (*pcVar5)();
              return (bool)uVar24;
            }
            iVar28 = (uint)local_5b8;
          }
          dVar80 = local_238.Scale3D.XY.m128d_f64[0];
          dVar6 = local_238.Scale3D.XY.m128d_f64[1];
          if (iVar28 == local_5b8._4_4_) {
            iVar28 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_5c0,(int *)((longlong)&local_5b8 + 4));
            dVar80 = local_238.Scale3D.XY.m128d_f64[0];
            dVar6 = local_238.Scale3D.XY.m128d_f64[1];
          }
          iVar29 = iVar28 + 1;
          local_5b8 = CONCAT44(local_5b8._4_4_,iVar29);
          *(undefined8 *)(local_5c0.Data + (longlong)iVar28 * 0x10) = local_468;
          *(undefined8 *)(local_5c0.Data + (longlong)iVar28 * 0x10 + 8) = uStack_460;
        }
        FVar45.Data = local_5c0.Data;
        local_4e0._32_4_ = 0;
        local_4e0[0x24] = false;
        local_4e0._37_3_ = 0;
        local_4b8._0_4_ = iVar29;
        local_238.Scale3D.XY.m128d_f64[0] = dVar80;
        local_238.Scale3D.XY.m128d_f64[1] = dVar6;
        if (iVar29 == 0) {
          local_4b8._4_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar29,0,(ForAnyElementType *)(local_4e0 + 0x20),iVar29,
                     (int *)((longlong)&local_4b8.ObjectPtr.field0_0x0 + 4));
          memcpy((void *)local_4e0._32_8_,FVar45.Data,(longlong)iVar29 << 4);
        }
        uVar83 = local_4b8._0_4_;
        uVar3 = local_4e0._32_8_;
        stack0xfffffffffffffa90 = CONCAT44(iStack_56c,local_4b8._0_4_);
        if ((local_4b8._0_4_ == 0) && (iStack_56c == 0)) {
          stack0xfffffffffffffa90 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_4b8._0_4_,iStack_56c,(ForAnyElementType *)local_578,
                     local_4b8._0_4_,&iStack_56c);
          if (uVar83 != 0) {
            memcpy((void *)local_578._0_8_,(void *)uVar3,(longlong)(int)uVar83 << 4);
          }
        }
        local_568 = (FScriptContainerElement)
                    UE::Geometry::TPolygon2<double>::IsClockwise
                              ((TPolygon2<double> *)(local_4e0 + 0x20));
        dVar80 = local_238.Scale3D.XY.m128d_f64[0];
        dVar6 = local_238.Scale3D.XY.m128d_f64[1];
        if ((FPCGCrc)local_4e0._32_8_ != (FPCGCrc)0x0) {
          FMemory::Free((void *)local_4e0._32_8_);
          dVar80 = local_238.Scale3D.XY.m128d_f64[0];
          dVar6 = local_238.Scale3D.XY.m128d_f64[1];
        }
      }
      else {
        if (local_528.ArrayNum != iVar29) {
          pFVar36 = FText::AsLocalizable_Advanced_LocText
                              (&local_328,L"PCGCreatePolygonElement",
                               L"PositionsAndHoleAttributeMismatch",
                               L"There needs to be the same number of hole indices as there are points in the data."
                              );
          param_1 = local_550;
          PCGLog::LogErrorOnGraph(pFVar36,local_550);
          if (local_328.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_328.TextData.Reference + 0x10))();
          }
          DestructItems<UE::Geometry::TPolygon2<double>,int>
                    ((TPolygon2<double> *)local_560.Data,(int)local_558);
          if (local_560.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_560.Data);
          }
          if ((FScriptContainerElement *)local_578._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_578._0_8_);
          }
          if (local_5c0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5c0.Data);
          }
          auVar71._8_8_ = 0;
          auVar71._0_8_ = __real_3f50624dd2f1a9fc;
          goto LAB_149c6419e;
        }
        if (iVar29 != 0) {
          local_534 = 0;
          local_4e0._8_8_ = 0;
          FVar57.Handle = FVar60.Handle;
          do {
            uVar55 = FVar57._0_4_;
            local_5a0.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_5a0.Vertices.ArrayNum = 0;
            local_5a0.Vertices.ArrayMax = 0;
            iVar28 = FVar50._0_4_;
            local_5c8 = uVar55;
            uVar56 = local_534;
            local_4f8 = local_4e0._8_8_;
            if ((int)uVar55 < FVar50._0_4_) {
              local_534 = ~uVar55 >> 0x1f;
              local_4e0._24_8_ = local_4e0._8_8_ * 4;
              lVar34 = local_4e0._8_8_ << 4;
              iVar29 = local_528.ArrayNum;
              while( true ) {
                uVar56 = FVar57._0_4_;
                uVar48 = uVar59;
                if ((int)uVar56 < iVar29) {
                  uVar48 = ~uVar56 >> 0x1f;
                }
                iVar28 = FVar50._0_4_;
                local_238.Scale3D.XY.m128d_f64[0] = dVar80;
                local_238.Scale3D.XY.m128d_f64[1] = dVar6;
                if (uVar48 == 0) {
                  bVar62 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar62) {
                    pcVar5 = (code *)swi(3);
                    uVar24 = (*pcVar5)();
                    return (bool)uVar24;
                  }
                  iVar29 = local_528.ArrayNum;
                  iVar28 = (uint)local_5b8;
                }
                FVar45.Data = local_528.AllocatorInstance.Data;
                uVar48 = uVar59;
                if ((int)uVar55 < iVar29) {
                  uVar48 = local_534;
                }
                dVar80 = local_238.Scale3D.XY.m128d_f64[0];
                dVar6 = local_238.Scale3D.XY.m128d_f64[1];
                if (uVar48 == 0) {
                  bVar62 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar62) {
                    pcVar5 = (code *)swi(3);
                    uVar24 = (*pcVar5)();
                    return (bool)uVar24;
                  }
                  iVar28 = (uint)local_5b8;
                  dVar80 = local_238.Scale3D.XY.m128d_f64[0];
                  dVar6 = local_238.Scale3D.XY.m128d_f64[1];
                }
                if (*(int *)(FVar45.Data + local_4e0._8_8_ * 4) !=
                    *(int *)(local_528.AllocatorInstance.Data + local_4e0._24_8_)) break;
                uVar48 = uVar59;
                if ((int)uVar56 < iVar28) {
                  uVar48 = ~uVar56 >> 0x1f;
                }
                local_238.Scale3D.XY.m128d_f64[0] = dVar80;
                local_238.Scale3D.XY.m128d_f64[1] = dVar6;
                if (uVar48 == 0) {
                  bVar62 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar62) {
                    pcVar5 = (code *)swi(3);
                    uVar24 = (*pcVar5)();
                    return (bool)uVar24;
                  }
                }
                FVar57._0_4_ = uVar56 + 1;
                FVar57._4_4_ = 0;
                local_4e0._8_8_ = local_4e0._8_8_ + 1;
                pFVar46 = local_5c0.Data + lVar34;
                lVar34 = lVar34 + 0x10;
                if ((local_5a0.Vertices.AllocatorInstance.Data <= pFVar46) &&
                   (pFVar46 < local_5a0.Vertices.AllocatorInstance.Data +
                              (longlong)local_5a0.Vertices.ArrayMax * 0x10)) {
                  bVar62 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar62) {
                    pcVar5 = (code *)swi(3);
                    uVar24 = (*pcVar5)();
                    return (bool)uVar24;
                  }
                }
                dVar80 = local_238.Scale3D.XY.m128d_f64[0];
                dVar6 = local_238.Scale3D.XY.m128d_f64[1];
                if (local_5a0.Vertices.ArrayNum == local_5a0.Vertices.ArrayMax) {
                  iVar28 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,(ForAnyElementType *)&local_5a0,
                                      &local_5a0.Vertices.ArrayMax);
                  local_5a0.Vertices.ArrayNum = iVar28;
                  dVar80 = local_238.Scale3D.XY.m128d_f64[0];
                  dVar6 = local_238.Scale3D.XY.m128d_f64[1];
                }
                lVar63 = (longlong)local_5a0.Vertices.ArrayNum;
                local_5a0.Vertices.ArrayNum = local_5a0.Vertices.ArrayNum + 1;
                *(undefined1 (*) [16])(local_5a0.Vertices.AllocatorInstance.Data + lVar63 * 0x10) =
                     *(undefined1 (*) [16])pFVar46;
                FVar50.Handle = (UObject *)(local_5b8 & 0xffffffff);
                iVar28 = (uint)local_5b8;
                uVar56 = FVar57._0_4_;
                if ((int)(uint)local_5b8 <= (int)FVar57._0_4_) break;
                iVar29 = local_528.ArrayNum;
              }
            }
            local_534 = uVar56;
            lVar34 = local_4f8;
            uVar56 = local_5c8;
            if (bVar23) {
              uVar55 = uVar59;
              if ((int)local_5c8 < iVar28) {
                uVar55 = ~local_5c8 >> 0x1f;
              }
              local_238.Scale3D.XY.m128d_f64[0] = dVar80;
              local_238.Scale3D.XY.m128d_f64[1] = dVar6;
              if (uVar55 == 0) {
                bVar62 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar62) {
                  pcVar5 = (code *)swi(3);
                  uVar24 = (*pcVar5)();
                  return (bool)uVar24;
                }
              }
              pFVar46 = local_5c0.Data + lVar34 * 0x10;
              if ((local_5a0.Vertices.AllocatorInstance.Data <= pFVar46) &&
                 (pFVar46 < local_5a0.Vertices.AllocatorInstance.Data +
                            (longlong)local_5a0.Vertices.ArrayMax * 0x10)) {
                bVar62 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar62) {
                  pcVar5 = (code *)swi(3);
                  uVar24 = (*pcVar5)();
                  return (bool)uVar24;
                }
              }
              dVar80 = local_238.Scale3D.XY.m128d_f64[0];
              dVar6 = local_238.Scale3D.XY.m128d_f64[1];
              if (local_5a0.Vertices.ArrayNum == local_5a0.Vertices.ArrayMax) {
                iVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,(ForAnyElementType *)&local_5a0,
                                    &local_5a0.Vertices.ArrayMax);
                local_5a0.Vertices.ArrayNum = iVar28;
                dVar80 = local_238.Scale3D.XY.m128d_f64[0];
                dVar6 = local_238.Scale3D.XY.m128d_f64[1];
              }
              lVar34 = (longlong)local_5a0.Vertices.ArrayNum;
              local_5a0.Vertices.ArrayNum = local_5a0.Vertices.ArrayNum + 1;
              *(undefined1 (*) [16])(local_5a0.Vertices.AllocatorInstance.Data + lVar34 * 0x10) =
                   *(undefined1 (*) [16])pFVar46;
            }
            FVar45.Data = local_5a0.Vertices.AllocatorInstance.Data;
            iVar28 = local_5a0.Vertices.ArrayNum;
            uVar43 = (ulonglong)local_5a0.Vertices.ArrayNum;
            if (uVar56 == 0) {
              stack0xfffffffffffffa90 = CONCAT44(iStack_56c,local_5a0.Vertices.ArrayNum);
              local_238.Scale3D.XY.m128d_f64[0] = dVar80;
              local_238.Scale3D.XY.m128d_f64[1] = dVar6;
              if ((local_5a0.Vertices.ArrayNum == 0) && (iStack_56c == 0)) {
                stack0xfffffffffffffa90 = local_5a0.Vertices._8_8_ & 0xffffffff;
                local_568 = (FScriptContainerElement)
                            UE::Geometry::TPolygon2<double>::IsClockwise(&local_5a0);
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,local_5a0.Vertices.ArrayNum,iStack_56c,
                           (ForAnyElementType *)local_578,local_5a0.Vertices.ArrayNum,&iStack_56c);
                if (iVar28 != 0) {
                  memcpy((void *)local_578._0_8_,FVar45.Data,uVar43 << 4);
                }
                local_568 = (FScriptContainerElement)
                            UE::Geometry::TPolygon2<double>::IsClockwise(&local_5a0);
              }
            }
            else {
              local_518.Vertices.AllocatorInstance.Data = local_5a0.Vertices.AllocatorInstance.Data;
              local_518.Vertices.ArrayMax = local_5a0.Vertices.ArrayMax;
              local_5a0.Vertices.ArrayNum = 0;
              local_5a0.Vertices.ArrayMax = 0;
              local_5a0.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_518.Vertices.ArrayNum = iVar28;
              local_538 = 0;
              local_4e0._24_8_ = 0;
              FVar53.Handle = FVar60.Handle;
              FVar41.Handle = FVar60.Handle;
              uVar22 = uVar43;
              if (0 < iVar28) {
                while( true ) {
                  local_440 = uVar22;
                  uVar56 = uVar59;
                  if ((int)FVar53._0_4_ < (int)uVar43) {
                    uVar56 = ~FVar53._0_4_ >> 0x1f;
                  }
                  local_238.Scale3D.XY.m128d_f64[0] = dVar80;
                  local_238.Scale3D.XY.m128d_f64[1] = dVar6;
                  if (uVar56 == 0) {
                    bVar62 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar62) {
                      pcVar5 = (code *)swi(3);
                      uVar24 = (*pcVar5)();
                      return (bool)uVar24;
                    }
                  }
                  FVar45.Data = local_518.Vertices.AllocatorInstance.Data;
                  pFVar46 = (FScriptContainerElement *)local_578._0_8_;
                  local_5c8 = local_578._8_4_;
                  if ((int)local_578._8_4_ < 0) {
                    bVar62 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L"");
                    if (bVar62) {
                      pcVar5 = (code *)swi(3);
                      uVar24 = (*pcVar5)();
                      return (bool)uVar24;
                    }
                  }
                  if (local_5c8 == 0) goto LAB_149c6521c;
                  uVar56 = local_5c8 - 1;
                  uVar55 = uVar59;
                  if ((int)uVar56 < (int)local_5c8) {
                    uVar55 = ~uVar56 >> 0x1f;
                  }
                  if (uVar55 == 0) {
                    bVar62 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       );
                    if (bVar62) {
                      pcVar5 = (code *)swi(3);
                      uVar24 = (*pcVar5)();
                      return (bool)uVar24;
                    }
                  }
                  auVar71 = *(undefined1 (*) [16])
                             ((undefined8)pFVar46 + (longlong)(int)uVar56 * 0x10);
                  if ((int)local_5c8 < 1) goto LAB_149c6521c;
                  local_4f8 = (longlong)(int)local_5c8;
                  FVar47.Handle = FVar60.Handle;
                  FVar51.Handle = FVar60.Handle;
                  uVar56 = local_5c8;
                  dVar80 = local_238.Scale3D.XY.m128d_f64[0];
                  dVar6 = local_238.Scale3D.XY.m128d_f64[1];
                  do {
                    uVar48 = FVar51._0_4_;
                    uVar55 = uVar59;
                    if ((int)uVar48 < (int)uVar56) {
                      uVar55 = ~uVar48 >> 0x1f;
                    }
                    if (uVar55 == 0) {
                      local_238.Scale3D.XY.m128d_f64[0] = dVar80;
                      local_238.Scale3D.XY.m128d_f64[1] = dVar6;
                      bVar62 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         );
                      uVar56 = local_5c8;
                      dVar80 = local_238.Scale3D.XY.m128d_f64[0];
                      dVar6 = local_238.Scale3D.XY.m128d_f64[1];
                      if (bVar62) {
                        pcVar5 = (code *)swi(3);
                        uVar24 = (*pcVar5)();
                        return (bool)uVar24;
                      }
                    }
                    dVar10 = *(double *)(pFVar46 + 8);
                    dVar7 = *(double *)((longlong)&(FVar41.Handle)->field_0x8 + FVar45.Data);
                    auVar15._4_8_ = uVar75;
                    auVar15._0_4_ = auVar71._4_4_;
                    auVar74._0_8_ = auVar15._0_8_ << 0x20;
                    auVar74._8_4_ = auVar71._8_4_;
                    auVar74._12_4_ = auVar71._12_4_;
                    dVar76 = auVar74._8_8_;
                    uVar75 = auVar71._8_8_;
                    dVar77 = auVar71._0_8_;
                    if (dVar7 < dVar76) {
                      if ((dVar10 <= dVar7) &&
                         ((*(double *)pFVar46 - dVar77) * (dVar7 - dVar76) -
                          (dVar10 - dVar76) *
                          (*(double *)(FVar45.Data + (longlong)&(FVar41.Handle)->field_0x0) - dVar77
                          ) < 0.0)) {
                        FVar47._0_4_ = FVar47._0_4_ - 1;
                        FVar47._4_4_ = 0;
                      }
                    }
                    else if ((dVar7 < dVar10) &&
                            (0.0 < (*(double *)pFVar46 - dVar77) * (dVar7 - dVar76) -
                                   (dVar10 - dVar76) *
                                   (*(double *)(FVar45.Data + (longlong)&(FVar41.Handle)->field_0x0)
                                   - dVar77))) {
                      FVar47._0_4_ = FVar47._0_4_ + 1;
                      FVar47._4_4_ = 0;
                    }
                    auVar71 = *(undefined1 (*) [16])pFVar46;
                    pFVar46 = pFVar46 + 0x10;
                    FVar51._0_4_ = uVar48 + 1;
                    FVar51._4_4_ = 0;
                    local_4f8 = local_4f8 + -1;
                  } while (local_4f8 != 0);
                  local_4f8 = 0;
                  local_238.Scale3D.XY.m128d_f64[0] = dVar80;
                  local_238.Scale3D.XY.m128d_f64[1] = dVar6;
                  if (FVar47._0_4_ == 0) goto LAB_149c6521c;
                  FVar53._0_4_ = local_538 + 1;
                  FVar53._4_4_ = 0;
                  local_4e0._24_8_ = local_4e0._24_8_ + 1;
                  local_538 = FVar53._0_4_;
                  if ((longlong)local_440 <= (longlong)local_4e0._24_8_) break;
                  uVar43 = (ulonglong)(uint)local_518.Vertices.ArrayNum;
                  FVar41 = (FObjectPtr_u_0)&(FVar41.Handle)->field_0x10;
                  uVar22 = local_440;
                }
              }
              local_238.Scale3D.XY.m128d_f64[0] = dVar80;
              local_238.Scale3D.XY.m128d_f64[1] = dVar6;
              bVar62 = UE::Geometry::TPolygon2<double>::Intersects
                                 ((TPolygon2<double> *)local_578,&local_518);
              if (!bVar62) {
                iVar28 = (int)local_558;
                uVar43 = (ulonglong)(int)local_558;
                pFVar46 = local_560.Data + uVar43 * 0x10;
                FVar45.Data = local_560.Data;
                while( true ) {
                  if ((int)uVar43 != iVar28) {
                    local_57e = 0;
                    `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>,int,0>::operator!='::
                    __l2::<lambda_1>::operator()(&local_57e);
                  }
                  if (FVar45.Data == pFVar46) break;
                  bVar62 = UE::Geometry::TPolygon2<double>::Overlaps
                                     (&local_518,(TPolygon2<double> *)FVar45.Data);
                  if (bVar62) goto LAB_149c6521c;
                  uVar43 = local_558 & 0xffffffff;
                  FVar45.Data = FVar45.Data + 0x10;
                }
                FVar27 = (FScriptContainerElement)
                         UE::Geometry::TPolygon2<double>::IsClockwise(&local_518);
                if (local_568 != FVar27) {
                  if ((local_560.Data <= (FScriptContainerElement *)&local_518) &&
                     ((FScriptContainerElement *)&local_518 <
                      local_560.Data + (longlong)local_558._4_4_ * 0x10)) {
                    bVar62 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       );
                    if (bVar62) {
                      pcVar5 = (code *)swi(3);
                      uVar24 = (*pcVar5)();
                      return (bool)uVar24;
                    }
                  }
                  iVar28 = (int)local_558;
                  if ((int)local_558 == local_558._4_4_) {
                    iVar28 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&local_560,(int *)((longlong)&local_558 + 4));
                  }
                  local_558 = CONCAT44(local_558._4_4_,iVar28 + 1);
                  UE::Geometry::TPolygon2<double>::TPolygon2<double>
                            ((TPolygon2<double> *)(local_560.Data + (longlong)iVar28 * 0x10),
                             &local_518);
                }
              }
LAB_149c6521c:
              if (local_518.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_518.Vertices.AllocatorInstance.Data);
              }
            }
            dVar80 = local_238.Scale3D.XY.m128d_f64[0];
            dVar6 = local_238.Scale3D.XY.m128d_f64[1];
            if (local_5a0.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5a0.Vertices.AllocatorInstance.Data);
              dVar80 = local_238.Scale3D.XY.m128d_f64[0];
              dVar6 = local_238.Scale3D.XY.m128d_f64[1];
            }
            FVar50.Handle = (UObject *)(local_5b8 & 0xffffffff);
            FVar57._4_4_ = 0;
            FVar57._0_4_ = local_534;
            if (local_534 == (uint)local_5b8) break;
          } while( true );
        }
      }
      if (local_568 != (FScriptContainerElement)0x0) {
        local_238.Scale3D.XY.m128d_f64[0] = dVar80;
        local_238.Scale3D.XY.m128d_f64[1] = dVar6;
        UE::Geometry::TPolygon2<double>::Reverse((TPolygon2<double> *)local_578);
        local_568 = (FScriptContainerElement)(local_568 == (FScriptContainerElement)0x0);
        iVar28 = (int)local_558;
        pFVar46 = local_560.Data + (longlong)(int)local_558 * 0x10;
        FVar45.Data = local_560.Data;
        dVar80 = local_238.Scale3D.XY.m128d_f64[0];
        dVar6 = local_238.Scale3D.XY.m128d_f64[1];
        while( true ) {
          if ((int)local_558 != iVar28) {
            local_57d = 0;
            local_238.Scale3D.XY.m128d_f64[0] = dVar80;
            local_238.Scale3D.XY.m128d_f64[1] = dVar6;
            `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_57d);
            dVar80 = local_238.Scale3D.XY.m128d_f64[0];
            dVar6 = local_238.Scale3D.XY.m128d_f64[1];
          }
          if (FVar45.Data == pFVar46) break;
          puVar54 = *(undefined8 **)FVar45.Data;
          iVar29 = *(int *)(FVar45.Data + 8) / 2;
          lVar34 = (longlong)iVar29;
          if (0 < iVar29) {
            puVar42 = puVar54 + (longlong)(*(int *)(FVar45.Data + 8) + -1) * 2;
            do {
              uVar17 = puVar42[1];
              uVar3 = *puVar54;
              uVar16 = puVar54[1];
              *puVar54 = *puVar42;
              puVar54[1] = uVar17;
              puVar54 = puVar54 + 2;
              *puVar42 = uVar3;
              puVar42[1] = uVar16;
              lVar34 = lVar34 + -1;
              puVar42 = puVar42 + -2;
            } while (lVar34 != 0);
          }
          FVar45.Data = FVar45.Data + 0x10;
        }
      }
      local_548.Data = (FScriptContainerElement *)0x0;
      local_540._0_4_ = 0;
      local_540._4_4_ = 0;
      local_238.Scale3D.XY.m128d_f64[0] = dVar80;
      local_238.Scale3D.XY.m128d_f64[1] = dVar6;
      if (bVar23) {
        local_3c8 = (TGeneralPolygon2<double> *)local_578;
        uStack_3c0 = 1;
        local_318._12_4_ = uStack_3bc;
        local_318.ArrayNum = 1;
        local_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_508.ArrayNum = 0;
        local_508.ArrayMax = 0;
        local_318.DataPtr = local_3c8;
        bVar62 = UE::Geometry::PolygonsOffset
                           ((double)CONCAT44(uVar89,uVar88),&local_318,&local_508,false,
                            __real_4000000000000000,Square,Square,
                            ___xmm_3ff00000000000004024000000000000,_UNK_151bbbc48);
        if (!bVar62) {
          pFVar36 = FText::AsLocalizable_Advanced_LocText
                              (&local_2f8,L"PCGCreatePolygon2DElement",L"ErrorInPolygonOffset",
                               L"Unable to create extruded polygon from open polygon.");
          param_1 = local_550;
          PCGLog::LogWarningOnGraph(pFVar36,local_550);
          if (local_2f8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
          }
          DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                    ((TGeneralPolygon2<double> *)local_508.AllocatorInstance.Data,local_508.ArrayNum
                    );
          if ((TGeneralPolygon2<double> *)local_508.AllocatorInstance.Data !=
              (TGeneralPolygon2<double> *)0x0) {
            FMemory::Free(local_508.AllocatorInstance.Data);
          }
          DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                    ((TGeneralPolygon2<double> *)local_548.Data,(int)local_540);
          if ((TGeneralPolygon2<double> *)local_548.Data != (TGeneralPolygon2<double> *)0x0) {
            FMemory::Free(local_548.Data);
          }
          DestructItems<UE::Geometry::TPolygon2<double>,int>
                    ((TPolygon2<double> *)local_560.Data,(int)local_558);
          if (local_560.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_560.Data);
          }
          if ((FScriptContainerElement *)local_578._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_578._0_8_);
          }
          if (local_5c0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5c0.Data);
          }
          auVar71._8_8_ = 0;
          auVar71._0_8_ = __real_3f50624dd2f1a9fc;
          pUVar33 = local_5d0;
          goto LAB_149c6419e;
        }
        DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                  ((TGeneralPolygon2<double> *)local_548.Data,(int)local_540);
        if ((TGeneralPolygon2<double> *)local_548.Data != (TGeneralPolygon2<double> *)0x0) {
          FMemory::Free(local_548.Data);
        }
        local_548.Data = local_508.AllocatorInstance.Data;
        local_540._0_4_ = local_508.ArrayNum;
        local_540._4_4_ = local_508.ArrayMax;
        local_508.ArrayNum = 0;
        local_508.ArrayMax = 0;
        local_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>((TGeneralPolygon2<double> *)0x0,0)
        ;
        if ((TGeneralPolygon2<double> *)local_508.AllocatorInstance.Data !=
            (TGeneralPolygon2<double> *)0x0) {
          FMemory::Free(local_508.AllocatorInstance.Data);
        }
      }
      else {
        iVar28 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&local_548,(int *)((longlong)&local_540 + 4));
        lVar34 = (longlong)iVar28;
        local_540._0_4_ = iVar28 + 1;
        *(undefined8 *)&local_548.Data[lVar34 * 0x28].field_0x0 = 0;
        *(undefined8 *)&local_548.Data[lVar34 * 0x28].field_0x0 = local_578._0_8_;
        local_578._0_8_ = (FScriptContainerElement *)0x0;
        *(undefined4 *)(local_548.Data + lVar34 * 0x28 + 8) = local_578._8_4_;
        *(int *)(local_548.Data + lVar34 * 0x28 + 0xc) = iStack_56c;
        stack0xfffffffffffffa90 = 0;
        local_548.Data[lVar34 * 0x28 + 0x10] = local_568;
        *(undefined8 *)(local_548.Data + lVar34 * 0x28 + 0x18) = 0;
        *(FScriptContainerElement **)(local_548.Data + lVar34 * 0x28 + 0x18) = local_560.Data;
        local_560.Data = (FScriptContainerElement *)0x0;
        *(int *)(local_548.Data + lVar34 * 0x28 + 0x20) = (int)local_558;
        *(int *)(local_548.Data + lVar34 * 0x28 + 0x24) = local_558._4_4_;
        local_558 = 0;
      }
      iVar28 = (int)local_540;
      pFVar46 = local_548.Data + 0x20;
      pFVar2 = local_548.Data + (longlong)(int)local_540 * 0x28;
      while( true ) {
        if ((int)local_540 != iVar28) {
          local_57b[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::TGeneralPolygon2<double>,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_57b);
        }
        if (pFVar46 + -0x20 == pFVar2) break;
        if (pFVar46[-0x10] != (FScriptContainerElement)0x0) {
          puVar54 = *(undefined8 **)&pFVar46[-0x20].field_0x0;
          iVar29 = *(int *)(pFVar46 + -0x18) / 2;
          lVar34 = (longlong)iVar29;
          if (0 < iVar29) {
            puVar42 = puVar54 + (longlong)(*(int *)(pFVar46 + -0x18) + -1) * 2;
            do {
              uVar17 = puVar42[1];
              uVar3 = *puVar54;
              uVar16 = puVar54[1];
              *puVar54 = *puVar42;
              puVar54[1] = uVar17;
              puVar54 = puVar54 + 2;
              *puVar42 = uVar3;
              puVar42[1] = uVar16;
              lVar34 = lVar34 + -1;
              puVar42 = puVar42 + -2;
            } while (lVar34 != 0);
          }
          pFVar46[-0x10] = (FScriptContainerElement)(pFVar46[-0x10] == (FScriptContainerElement)0x0)
          ;
          iVar29 = *(int *)pFVar46;
          pFVar52 = (((TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *)
                     (pFVar46 + -8))->AllocatorInstance).Data;
          pFVar58 = pFVar52 + (longlong)iVar29 * 0x10;
          while( true ) {
            if (*(int *)pFVar46 != iVar29) {
              local_57c = 0;
              `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_57c);
            }
            if (pFVar52 == pFVar58) break;
            puVar54 = *(undefined8 **)pFVar52;
            iVar30 = *(int *)(pFVar52 + 8) / 2;
            lVar34 = (longlong)iVar30;
            if (0 < iVar30) {
              puVar42 = puVar54 + (longlong)(*(int *)(pFVar52 + 8) + -1) * 2;
              do {
                uVar17 = puVar42[1];
                uVar3 = *puVar54;
                uVar16 = puVar54[1];
                *puVar54 = *puVar42;
                puVar54[1] = uVar17;
                puVar54 = puVar54 + 2;
                *puVar42 = uVar3;
                puVar42[1] = uVar16;
                lVar34 = lVar34 + -1;
                puVar42 = puVar42 + -2;
              } while (lVar34 != 0);
            }
            pFVar52 = pFVar52 + 0x10;
          }
        }
        bVar62 = IsInGameThread();
        pFVar21 = local_550;
        if (bVar62) {
          pUVar37 = GetTransientPackageAsObject();
          this_02 = NewObject<UPCGPolygon2DData>(pUVar37);
        }
        else {
          if ((local_550->AsyncState).bIsRunningOnMainThread != false) {
            bVar62 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4331830188552749348>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                ,0x124,"!AsyncState.bIsRunningOnMainThread");
            if (bVar62) {
              pcVar5 = (code *)swi(3);
              uVar24 = (*pcVar5)();
              return (bool)uVar24;
            }
          }
          FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_5d4);
          pUVar37 = GetTransientPackageAsObject();
          this_02 = NewObject<UPCGPolygon2DData>(pUVar37);
          FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_5d4);
          if (this_02 == (UPCGPolygon2DData *)0x0) {
            bVar62 = ::FDebug::CheckVerifyFailedImpl2
                               ("Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                ,0x12a,L"");
            if (bVar62) {
              pcVar5 = (code *)swi(3);
              uVar24 = (*pcVar5)();
              return (bool)uVar24;
            }
          }
          local_448 = this_02;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_02 != (UPCGPolygon2DData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_02);
          }
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
          Emplace<TObjectPtr<UObject>_>(&pFVar21->AsyncObjects,&local_458,(bool *)&local_448);
        }
        uVar3 = local_4e0._16_8_;
        UPCGSpatialData::InitializeFromData
                  ((UPCGSpatialData *)this_02,(UPCGSpatialData *)local_4e0._16_8_,
                   (UPCGMetadata *)0x0,true,true);
        pFVar21 = local_550;
        pFVar38 = (FPCGTaggedData *)(local_550->OutputData).TaggedData.AllocatorInstance.Data;
        if ((pFVar38 <= local_530) &&
           (local_530 < pFVar38 + (local_550->OutputData).TaggedData.ArrayMax)) {
          bVar62 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar62) {
            pcVar5 = (code *)swi(3);
            uVar24 = (*pcVar5)();
            return (bool)uVar24;
          }
        }
        iVar29 = (pFVar21->OutputData).TaggedData.ArrayNum;
        piVar1 = &(pFVar21->OutputData).TaggedData.ArrayMax;
        if (iVar29 == *piVar1) {
          iVar29 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)&pFVar21->OutputData,piVar1);
        }
        (pFVar21->OutputData).TaggedData.ArrayNum = iVar29 + 1;
        pFVar38 = FPCGTaggedData::FPCGTaggedData
                            ((FPCGTaggedData *)
                             ((pFVar21->OutputData).TaggedData.AllocatorInstance.Data +
                             (longlong)iVar29 * 0x78),local_530);
        FPCGDataPtrWrapper::operator=(&pFVar38->Data,(UPCGData *)this_02);
        if ((bVar23) && (bVar26)) {
          pUVar39 = (UPCGMetadata *)(**(code **)(*(longlong *)this_02 + 0x328))(this_02);
          pTVar40 = PCGPolygon2DProcessingHelpers::ComputeEntryKeysByNearestSegmentSampling
                              (&local_308,(UPCGSpatialData *)uVar3,(double)CONCAT44(uVar89,uVar88),
                               (TGeneralPolygon2<double> *)(pFVar46 + -0x20),&local_238,pUVar39);
          FVar45.Data = local_308.AllocatorInstance.Data;
          if (&local_5b0 != pTVar40) {
            if (local_5b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5b0.AllocatorInstance.Data);
            }
            local_5b0.AllocatorInstance.Data = (pTVar40->AllocatorInstance).Data;
            (pTVar40->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            local_5b0.ArrayNum = pTVar40->ArrayNum;
            local_5b0.ArrayMax = pTVar40->ArrayMax;
            pTVar40->ArrayNum = 0;
            pTVar40->ArrayMax = 0;
            FVar45.Data = local_308.AllocatorInstance.Data;
          }
LAB_149c6586e:
          if (FVar45.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar45.Data);
          }
        }
        else if (bVar19) {
          pUVar39 = (UPCGMetadata *)(**(code **)(*(longlong *)this_02 + 0x328))(this_02);
          iVar29 = local_590.ArrayNum;
          local_3b8 = local_590.AllocatorInstance.Data;
          if (local_590.ArrayNum < 0) {
            bVar62 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L"");
            if (bVar62) {
              pcVar5 = (code *)swi(3);
              uVar24 = (*pcVar5)();
              return (bool)uVar24;
            }
          }
          uStack_3b0 = iVar29;
          local_2d8._12_4_ = uStack_3ac;
          local_2d8.ArrayNum = iVar29;
          local_2d8.DataPtr = (TVector<double> *)local_3b8;
          pTVar40 = PCGPolygon2DProcessingHelpers::ComputeEntryKeysBySampling
                              (&local_338,(UPCGSpatialData *)local_4e0._16_8_,&local_2d8,pUVar39);
          FVar45.Data = local_338.AllocatorInstance.Data;
          if (&local_5b0 != pTVar40) {
            if (local_5b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5b0.AllocatorInstance.Data);
            }
            local_5b0.AllocatorInstance.Data = (pTVar40->AllocatorInstance).Data;
            (pTVar40->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            local_5b0.ArrayNum = pTVar40->ArrayNum;
            local_5b0.ArrayMax = pTVar40->ArrayMax;
            pTVar40->ArrayNum = 0;
            pTVar40->ArrayMax = 0;
            FVar45.Data = local_338.AllocatorInstance.Data;
          }
          goto LAB_149c6586e;
        }
        iVar29 = local_5b0.ArrayNum;
        local_3a8 = local_5b0.AllocatorInstance.Data;
        if (local_5b0.ArrayNum < 0) {
          bVar62 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L"");
          if (bVar62) {
            pcVar5 = (code *)swi(3);
            uVar24 = (*pcVar5)();
            return (bool)uVar24;
          }
        }
        local_3a0 = iVar29;
        FVar41.Handle = (UObject *)&local_3a8;
        if (iVar29 == 0) {
          FVar41.Handle = FVar60.Handle;
        }
        UPCGPolygon2DData::SetPolygon
                  (this_02,(TGeneralPolygon2<double> *)(pFVar46 + -0x20),
                   (TArrayView<__int64_const_,int> *)FVar41.Handle);
        UPCGPolygon2DData::SetTransform(this_02,&local_238,false);
        pFVar46 = pFVar46 + 0x28;
      }
      DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                ((TGeneralPolygon2<double> *)local_548.Data,(int)local_540);
      if ((TGeneralPolygon2<double> *)local_548.Data != (TGeneralPolygon2<double> *)0x0) {
        FMemory::Free(local_548.Data);
      }
      DestructItems<UE::Geometry::TPolygon2<double>,int>
                ((TPolygon2<double> *)local_560.Data,(int)local_558);
      if (local_560.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_560.Data);
      }
      if ((FScriptContainerElement *)local_578._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_578._0_8_);
      }
      if (local_5c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5c0.Data);
      }
      auVar71._8_8_ = 0;
      auVar71._0_8_ = __real_3f50624dd2f1a9fc;
      pUVar33 = local_5d0;
      param_1 = local_550;
    }
    else {
      bVar26 = true;
      if (local_5d0->InputType != ForceOpen) {
        FVar44.Handle = FVar60.Handle;
        iVar28 = local_388;
        if (local_5b0.ArrayMax < local_388) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_388,&local_5b0.AllocatorInstance,local_5b0.ArrayNum,
                     &local_5b0.ArrayMax);
          iVar28 = local_388;
        }
        while (iVar29 = FVar44._0_4_, pFVar38 = local_530, iVar29 != iVar28) {
          pFVar46 = (FScriptContainerElement *)
                    ((longlong)(iVar29 % local_38c) * (longlong)local_390 + local_398);
          if ((local_5b0.AllocatorInstance.Data <= pFVar46) &&
             (pFVar46 < local_5b0.AllocatorInstance.Data + (longlong)local_5b0.ArrayMax * 8)) {
            bVar62 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar62) {
              pcVar5 = (code *)swi(3);
              uVar24 = (*pcVar5)();
              return (bool)uVar24;
            }
          }
          if (local_5b0.ArrayNum == local_5b0.ArrayMax) {
            local_5b0.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_5b0.AllocatorInstance,&local_5b0.ArrayMax);
          }
          FVar44._0_4_ = iVar29 + 1;
          FVar44._4_4_ = 0;
          *(undefined8 *)(local_5b0.AllocatorInstance.Data + (longlong)local_5b0.ArrayNum * 8) =
               *(undefined8 *)pFVar46;
          local_5b0.ArrayNum = local_5b0.ArrayNum + 1;
        }
      }
      param_1 = local_550;
      if (pUVar33->bUseHoleAttribute == false) goto LAB_149c6424a;
      pUVar4 = (pFVar38->Data).Data.field0_0x0.DebugPtr;
      FPCGAttributePropertyInputSelector::CopyAndFixLast
                (&pUVar33->HoleIndexAttribute,(FPCGAttributePropertyInputSelector *)&local_438,
                 pUVar4);
      PCGAttributeAccessorHelpers::CreateConstAccessor
                ((UPCGData *)(local_4f0 + 8),(FPCGAttributePropertySelector *)pUVar4,
                 SUB81(&local_438,0));
      PCGAttributeAccessorHelpers::CreateConstKeys
                ((UPCGData *)local_4f0,(FPCGAttributePropertySelector *)pUVar4);
      param_1 = local_550;
      if (((IPCGAttributeAccessor *)local_4f0._8_8_ == (IPCGAttributeAccessor *)0x0) ||
         ((IPCGAttributeAccessorKeys *)local_4f0._0_8_ == (IPCGAttributeAccessorKeys *)0x0)) {
        PCGLog::Metadata::LogFailToCreateAccessorError(&local_438,local_550);
        if ((IPCGAttributeAccessorKeys *)local_4f0._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)*(longlong *)local_4f0._0_8_)(local_4f0._0_8_,1);
        }
        if ((IPCGAttributeAccessor *)local_4f0._8_8_ != (IPCGAttributeAccessor *)0x0) {
          (**(code **)*(longlong *)local_4f0._8_8_)(local_4f0._8_8_,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_438.ExtraNames.AllocatorInstance.Data,
                   local_438.ExtraNames.ArrayNum);
        if (local_438.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_438.ExtraNames.AllocatorInstance.Data);
        }
      }
      else {
        bVar62 = PCGAttributeAccessorHelpers::ExtractAllValues<int,TSizedDefaultAllocator<32>_>
                           ((IPCGAttributeAccessor *)local_4f0._8_8_,
                            (IPCGAttributeAccessorKeys *)local_4f0._0_8_,&local_528,
                            AllowBroadcastAndConstructible);
        param_1 = local_550;
        if (!bVar62) {
          PCGLog::Metadata::LogFailToGetAttributeError(&local_438,local_550);
        }
        if ((IPCGAttributeAccessorKeys *)local_4f0._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)*(longlong *)local_4f0._0_8_)(local_4f0._0_8_,1);
        }
        if ((IPCGAttributeAccessor *)local_4f0._8_8_ != (IPCGAttributeAccessor *)0x0) {
          (**(code **)*(longlong *)local_4f0._8_8_)(local_4f0._8_8_,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_438.ExtraNames.AllocatorInstance.Data,
                   local_438.ExtraNames.ArrayNum);
        if (local_438.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_438.ExtraNames.AllocatorInstance.Data);
        }
        if (bVar62) goto LAB_149c6424a;
      }
    }
LAB_149c6419e:
    FVar41._4_4_ = 0;
    FVar41._0_4_ = local_590.ArrayMax;
    FVar45.Data = (FScriptContainerElement *)(local_530 + 1);
    uVar43 = (ulonglong)local_4b0;
  } while( true );
}

// ExecutionLoopMode @ 149c75b00

EPCGElementExecutionLoopMode __thiscall
FPCGCreatePolygonElement::ExecutionLoopMode(FPCGCreatePolygonElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149c928b0

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
FPCGCreatePolygonElement::SupportsBasePointDataInputs
          (FPCGCreatePolygonElement *this,FPCGContext *param_1)

{
  return true;
}

