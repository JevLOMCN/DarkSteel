// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ExecuteInternal @ 1499e3d00

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

bool __thiscall
FPCGDuplicateCrossSectionsElement::ExecuteInternal
          (FPCGDuplicateCrossSectionsElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *pFVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  UPCGNode *this_00;
  code *pcVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  int iVar14;
  UClass *pUVar15;
  UPCGSettings *pUVar16;
  TObjectPtr<UPCGSettings>_u_0 TVar17;
  FInterpCurveVector *pFVar18;
  FString *pFVar19;
  FText *pFVar20;
  TTuple<FName,FPCGSubdivisionSubmodule> *pTVar21;
  UPCGSplineData *this_01;
  longlong lVar22;
  UPCGMetadata *this_02;
  FPCGMetadataDomain *this_03;
  FPCGTaggedData *pFVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  FPCGMetadataDomainID *pFVar26;
  int iVar27;
  FPCGDuplicateCrossSectionsElement *this_04;
  FObjectPtr_u_0 *pFVar28;
  FObjectPtr_u_0 FVar29;
  TObjectPtr<UPCGMetadata>_u_0 TVar30;
  FObjectPtr_u_0 *pFVar31;
  FPCGContext *pFVar32;
  bool bVar33;
  double dVar34;
  undefined1 unaff_XMM6 [16];
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  uint uVar39;
  undefined4 uVar40;
  undefined1 auStackY_588 [32];
  <lambda_1> local_536;
  undefined1 local_535 [5];
  FObjectPtr_u_0 *local_530;
  int local_528 [2];
  undefined1 local_520 [16];
  UPCGParamData *local_510;
  FPCGDuplicateCrossSectionsElement *local_508;
  undefined1 local_500 [16];
  FPCGCrc local_4f0;
  TObjectPtr<UPCGMetadata>_u_0 local_4e8;
  ulonglong local_4e0;
  uint local_4d8;
  uint local_4d4;
  int local_4d0 [2];
  TObjectPtr<UPCGSettings>_u_0 local_4c8;
  FObjectPtr_u_0 local_4c0;
  undefined1 local_4b8 [24];
  uint local_4a0;
  double local_498;
  UPCGSettings *pUStack_490;
  FPCGCrc local_488;
  TObjectPtr<UPCGMetadata>_u_0 local_480;
  UPCGMetadata *local_478;
  FObjectPtr_u_0 *local_470;
  TVector<double>_u_0 local_468;
  FPCGCrc local_450;
  FTokenizedGrammar local_448;
  FName local_428;
  FPCGContext *local_420;
  double local_418 [2];
  FPCGAttributePropertySelector local_408;
  TVector<double> *local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  FText local_3b8;
  int *local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  FText local_398;
  TVector4<double>_u_0 local_388;
  TArrayView<UE::Math::TVector<double>,int> local_368;
  FString local_358;
  TArrayView<int,int> local_348;
  FText local_338;
  FString local_328;
  FPCGAttributePropertySelector local_318;
  TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>
  local_2d8;
  undefined1 local_288 [264];
  void *local_180;
  void *local_168;
  void *local_150;
  ForAnyElementType local_130;
  FSpline local_120;
  ForAnyElementType local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_588;
  bVar33 = -1 < CpuChannel->Enabled;
  local_508 = this;
  local_420 = param_1;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId74,"FPCGDuplicateCrossSectionsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGDuplicateCrossSections.cpp"
               ,0x4a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId74);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGDuplicateCrossSections.cpp"
                          ,0x4c,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar16 = UPCGNode::GetSettings(this_00), pUVar16 == (UPCGSettings *)0x0)) {
      pFVar23 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDuplicateCrossSectionsSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_536);
      if (pFVar23 != (FPCGTaggedData *)0x0) {
        local_4c8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar23->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UPCGSubdivisionBaseSettings *)local_4c8.DebugPtr != (UPCGSubdivisionBaseSettings *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)local_4c8.DebugPtr);
        }
        if ((UPCGSubdivisionBaseSettings *)local_4c8.DebugPtr != (UPCGSubdivisionBaseSettings *)0x0)
        {
          pUVar15 = UPCGDuplicateCrossSectionsSettings::StaticClass();
          bVar11 = FObjectPtr::IsA(&local_4c8.ObjectPtr,pUVar15);
          TVar17 = local_4c8;
          if (bVar11) goto LAB_1499e3ee1;
        }
      }
    }
    else {
      pUVar16 = UPCGNode::GetSettings(this_00);
      TVar17.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar16);
      if ((UPCGSubdivisionBaseSettings *)TVar17.DebugPtr != (UPCGSubdivisionBaseSettings *)0x0) {
        pUVar15 = UPCGDuplicateCrossSectionsSettings::StaticClass();
        iVar27 = (int)pUVar15->_padding_;
        if ((iVar27 <= *(int *)((TVar17.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar17.DebugPtr)->_padding_ + 0x30) + (longlong)iVar27 * 8) ==
            &pUVar15->_padding_)) goto LAB_1499e3ee1;
      }
    }
    TVar17.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar15 = UPCGDuplicateCrossSectionsSettings::StaticClass();
    bVar11 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar15);
    TVar17.DebugPtr = (UPCGSettings *)0x0;
    if (bVar11) {
      TVar17.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_1499e3ee1:
  if (((UPCGSubdivisionBaseSettings *)TVar17.DebugPtr == (UPCGSubdivisionBaseSettings *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGDuplicateCrossSections.cpp"
                          ,0x4f,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_4b8 + 0x10),
             &PCGPinConstants::DefaultInputLabel);
  this_04 = local_508;
  pFVar1 = &param_1->OutputData;
  local_510 = (UPCGParamData *)0x0;
  if (*(bool *)&TVar17.DebugPtr[1]._padding_ == false) {
    FPCGSubdivisionBaseElement::GetModulesInfoMap
              ((FPCGSubdivisionBaseElement *)local_508,
               (TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
                *)&local_2d8,param_1,
               (TArray<FPCGSubdivisionSubmodule,TSizedDefaultAllocator<32>_> *)
               &TVar17.DebugPtr[1]._padding_,&local_510);
  }
  else {
    FPCGSubdivisionBaseElement::GetModulesInfoMap
              ((FPCGSubdivisionBaseElement *)local_508,
               (TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
                *)&local_2d8,param_1,
               (FPCGSubdivisionModuleAttributeNames *)&TVar17.DebugPtr[1]._padding_,&local_510);
  }
  dVar9 = __real_3e45798ee2308c3a;
  dVar8 = __real_3ff0000000000000;
  if (((char)TVar17.DebugPtr[2]._padding_ == '\0') ||
     (bVar11 = true, local_510 == (UPCGParamData *)0x0)) {
    bVar11 = false;
  }
  uVar24 = (ulonglong)(int)local_4a0;
  local_4d4 = local_4a0;
  local_530 = (FObjectPtr_u_0 *)(local_4b8._16_8_ + uVar24 * 0xf * 8);
  pFVar28 = local_530;
  pFVar31 = (FObjectPtr_u_0 *)local_4b8._16_8_;
  pFVar32 = param_1;
  do {
    while( true ) {
      iVar27 = 0;
      local_470 = pFVar31;
      if (local_4a0 != (uint)uVar24) {
        local_535[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_535);
      }
      if (pFVar31 == pFVar28) {
        if (bVar11) {
          pFVar26 = &PCGMetadataDomainID::Elements;
          if ((char)TVar17.DebugPtr[2].CachedOverridableParams.ArrayNum != '\0') {
            pFVar26 = &PCGMetadataDomainID::Data;
          }
          FPCGSubdivisionBaseElement::MatchAndSetAttributes
                    ((FPCGSubdivisionBaseElement *)local_508,
                     (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_4b8 + 0x10),
                     &pFVar1->TaggedData,local_510,(UPCGSubdivisionBaseSettings *)TVar17.DebugPtr,
                     pFVar26);
        }
        local_2d8.HashSize = 0;
        if (local_2d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_2d8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FPCGSubdivisionSubmodule>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,FPCGSubdivisionSubmodule>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_2d8.Elements);
        DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_4b8._16_8_,local_4a0);
        if ((FObjectPtr_u_0 *)local_4b8._16_8_ != (FObjectPtr_u_0 *)0x0) {
          FMemory::Free((void *)local_4b8._16_8_);
        }
        if (bVar33) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      local_4c0 = (FObjectPtr_u_0)pFVar31->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending == false) break;
      if ((UPCGSpatialData *)local_4c0.Handle != (UPCGSpatialData *)0x0) {
        UE::GC::MarkAsReachable(local_4c0.Handle);
        break;
      }
LAB_1499e44b6:
      pFVar31 = pFVar31 + 0xf;
      uVar24 = (ulonglong)local_4d4;
      this_04 = local_508;
    }
    if ((UPCGSpatialData *)local_4c0.Handle == (UPCGSpatialData *)0x0) goto LAB_1499e44b6;
    pUVar15 = Z_Construct_UClass_UPCGSplineData_NoRegister();
    bVar13 = FObjectPtr::IsA((FObjectPtr *)&local_4c0,pUVar15);
    FVar29 = local_4c0;
    if (((!bVar13) ||
        (local_4b8._8_8_ = local_4c0, pFVar28 = local_530,
        (UPCGSpatialData *)local_4c0.Handle == (UPCGSpatialData *)0x0)) ||
       (pFVar18 = FPCGSplineStruct::GetSplinePointsPosition
                            ((FPCGSplineStruct *)&local_4c0.Handle[6].field_0x20),
       pFVar28 = local_530, *(int *)&pFVar18->field_0x8 < 2)) goto LAB_1499e44b6;
    local_498 = *(double *)&TVar17.DebugPtr[2].Seed;
    pUStack_490 = TVar17.DebugPtr[2].OriginalSettings;
    local_488 = *(FPCGCrc *)&TVar17.DebugPtr[2].bUseSeed;
    if ((char)TVar17.DebugPtr[2]._padding_ == '\0') {
LAB_1499e4210:
      uVar35 = SUB84(local_498,0);
      uVar36 = (undefined4)((ulonglong)local_498 >> 0x20);
      uVar37 = SUB84(pUStack_490,0);
      uVar38 = (undefined4)((ulonglong)pUStack_490 >> 0x20);
      uVar39 = local_488.Value;
      uVar40 = local_488._4_4_;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_498 * local_498 + (double)pUStack_490 * (double)pUStack_490 +
                     (double)local_488 * (double)local_488;
      unaff_XMM6 = sqrtpd(unaff_XMM6,auVar7);
      dVar34 = unaff_XMM6._0_8_;
      pFVar28 = local_530;
      if (dVar34 <= dVar9) goto LAB_1499e44b6;
      local_528[0] = 0;
      if (*(char *)(TVar17.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 2) != '\0') {
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  ((FPCGAttributePropertyInputSelector *)&TVar17.DebugPtr[1].CachedOverridableParams
                   ,(FPCGAttributePropertyInputSelector *)&local_318,(UPCGData *)FVar29.Handle);
        PCGAttributeAccessorHelpers::CreateConstAccessor
                  ((UPCGData *)local_4b8,(FPCGAttributePropertySelector *)FVar29.Handle,
                   SUB81(&local_318,0));
        PCGAttributeAccessorHelpers::CreateConstKeys
                  ((UPCGData *)&local_480.ObjectPtr,(FPCGAttributePropertySelector *)FVar29.Handle);
        if (((IPCGAttributeAccessor *)local_4b8._0_8_ == (IPCGAttributeAccessor *)0x0) ||
           (local_480.DebugPtr == (UPCGMetadata *)0x0)) {
          PCGLog::Metadata::LogFailToCreateAccessorError(&local_318,pFVar32);
        }
        else {
          local_3a8 = local_528;
          uStack_3a0 = 1;
          local_348._12_4_ = uStack_39c;
          local_348.ArrayNum = 1;
          local_348.DataPtr = local_3a8;
          bVar13 = IPCGAttributeAccessor::GetRange<int>
                             ((IPCGAttributeAccessor *)local_4b8._0_8_,&local_348,0,
                              (IPCGAttributeAccessorKeys *)local_480.DebugPtr,
                              AllowBroadcastAndConstructible);
          uVar10 = local_4b8._0_8_;
          if (!bVar13) {
            pFVar19 = FPCGAttributePropertySelector::ToString(&local_318,&local_328,false);
            FText::FromString(&local_398,pFVar19);
            if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_328.Data.AllocatorInstance.Data);
            }
            PCGLog::Metadata::LogFailToGetAttributeError<int>
                      (&local_398,(IPCGAttributeAccessor *)uVar10,pFVar32);
            FVar29 = (FObjectPtr_u_0)local_4b8._8_8_;
            if (local_398.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_398.TextData.Reference + 0x10))();
              FVar29 = (FObjectPtr_u_0)local_4b8._8_8_;
            }
          }
        }
        if (local_480.DebugPtr != (UPCGMetadata *)0x0) {
          (**(code **)(local_480.DebugPtr)->_padding_)(local_480.DebugPtr,1);
        }
        if ((IPCGAttributeAccessor *)local_4b8._0_8_ != (IPCGAttributeAccessor *)0x0) {
          (**(code **)*(longlong *)local_4b8._0_8_)(local_4b8._0_8_,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_318.ExtraNames.AllocatorInstance.Data,
                   local_318.ExtraNames.ArrayNum);
        if (local_318.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.ExtraNames.AllocatorInstance.Data);
        }
        uVar35 = SUB84(local_498,0);
        uVar36 = (undefined4)((ulonglong)local_498 >> 0x20);
        uVar37 = SUB84(pUStack_490,0);
        uVar38 = (undefined4)((ulonglong)pUStack_490 >> 0x20);
        uVar39 = local_488.Value;
        uVar40 = local_488._4_4_;
      }
      local_418[0] = 0.0;
      dVar6 = dVar8 / dVar34;
      FPCGSubdivisionBaseElement::GetTokenizedGrammar
                ((FPCGSubdivisionBaseElement *)this_04,&local_448,pFVar32,(UPCGData *)FVar29.Handle,
                 (UPCGSubdivisionBaseSettings *)TVar17.DebugPtr,
                 (TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
                  *)&local_2d8,local_418);
      if ((local_448.ModuleGrammar.Object == (FTokenizedModule *)0x0) ||
         ((local_448.ModuleGrammar.Object)->bIsValid == false)) {
LAB_1499e449f:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_448.ModuleGrammar.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_448.ParsedGrammar.SharedReferenceCount.ReferenceController);
        pFVar28 = local_530;
        goto LAB_1499e44b6;
      }
      local_450.Value = 0;
      local_450.bValid = false;
      local_450._5_3_ = 0;
      local_4e8.DebugPtr = (UPCGMetadata *)0x0;
      local_4e0 = 0;
      bVar13 = PCGSubdivisionBase::Subdivide<PCGGrammar::FTokenizedModule>
                         (local_448.ModuleGrammar.Object,dVar34,
                          (TArray<PCGSubdivisionBase::TModuleInstance<PCGGrammar::FTokenizedModule>,TSizedDefaultAllocator<32>_>
                           *)&local_4e8.ObjectPtr,(double *)&local_450,pFVar32,local_528[0]);
      if (!bVar13) {
        pFVar20 = FText::AsLocalizable_Advanced_LocText
                            (&local_338,L"PCGDuplicateCrossSectionsElement",L"SubdivideFailed",
                             L"Grammar doesn\'t fit.");
        PCGLog::LogErrorOnGraph(pFVar20,pFVar32);
        if (local_338.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_338.TextData.Reference + 0x10))();
        }
        if (local_4e8.DebugPtr != (UPCGMetadata *)0x0) {
          FMemory::Free(local_4e8.DebugPtr);
        }
        goto LAB_1499e449f;
      }
      uVar25 = (ulonglong)(int)(uint)local_4e0;
      dVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      local_4f0 = (FPCGCrc)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_4d8 = (uint)local_4e0;
      local_478 = (UPCGMetadata *)
                  ((longlong)&((local_4e8.DebugPtr)->OtherParents).Hash + uVar25 * 0x18 + -0x68);
      uVar24 = uVar25;
      TVar30 = local_4e8;
      unaff_XMM6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
      while( true ) {
        local_500 = unaff_XMM6;
        if ((int)uVar25 != (int)uVar24) {
          local_536 = (<lambda_1>)0x0;
          `TCheckedPointerIterator<PCGSubdivisionBase::TModuleInstance<PCGGrammar::FTokenizedModule>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_536);
        }
        if (TVar30.DebugPtr == local_478) break;
        local_428 = *(FName *)(*(longlong *)((TVar30.DebugPtr)->_padding_ + 0x10) + 0x18);
        pTVar21 = TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>
                  ::Find(&local_2d8,local_428);
        if ((pTVar21 == (TTuple<FName,FPCGSubdivisionSubmodule> *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar13)) {
          pcVar5 = (code *)swi(3);
          uVar12 = (*pcVar5)();
          return (bool)uVar12;
        }
        dVar3 = *(double *)((longlong)TVar30 + 8);
        dVar4 = *(double *)&pTVar21->field_0x18;
        local_468._s_0.X =
             (dVar3 + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X) *
             (double)CONCAT44(uVar36,uVar35) * dVar6 * dVar4;
        local_468._s_0.Y =
             (dVar3 + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y) *
             (double)CONCAT44(uVar38,uVar37) * dVar6 * dVar4;
        local_468._s_0.Z =
             (dVar3 + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z) *
             (double)CONCAT44(uVar40,uVar39) * dVar6 * dVar4;
        FPCGSplineStruct::FPCGSplineStruct
                  ((FPCGSplineStruct *)local_288,(FPCGSplineStruct *)&FVar29.Handle[6].field_0x20);
        dVar3 = (double)local_288._56_8_ + 0.0;
        local_288._32_8_ = unaff_XMM6._0_8_ + (double)local_288._32_8_;
        local_288._40_8_ = unaff_XMM6._8_8_ + (double)local_288._40_8_;
        local_288._56_4_ = SUB84(dVar3,0);
        local_288._48_8_ = (double)local_4f0 + (double)local_288._48_8_;
        local_288._60_4_ = (int)((ulonglong)dVar3 >> 0x20);
        this_01 = FPCGContext::NewObject_AnyThread<UPCGSplineData>(pFVar32);
        UPCGSplineData::Initialize(this_01,(FPCGSplineStruct *)local_288);
        UPCGSpatialData::InitializeFromData
                  ((UPCGSpatialData *)this_01,(UPCGSpatialData *)FVar29.Handle,(UPCGMetadata *)0x0,
                   true,true);
        lVar22 = (**(code **)(*(longlong *)this_01 + 0x328))(this_01);
        if ((lVar22 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("NewSplineData->MutableMetadata()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGDuplicateCrossSections.cpp"
                                ,0xc0,L""), bVar13)) {
          pcVar5 = (code *)swi(3);
          uVar12 = (*pcVar5)();
          return (bool)uVar12;
        }
        if ((char)TVar17.DebugPtr[2].CachedOverridableParams.ArrayNum == '\0') {
          this_02 = (UPCGMetadata *)(**(code **)(*(longlong *)this_01 + 0x328))(this_01);
          pFVar26 = &PCGMetadataDomainID::Elements;
        }
        else {
          this_02 = (UPCGMetadata *)(**(code **)(*(longlong *)this_01 + 0x328))();
          pFVar26 = &PCGMetadataDomainID::Data;
        }
        this_03 = UPCGMetadata::GetMetadataDomain(this_02,pFVar26);
        if ((this_03 == (FPCGMetadataDomain *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("MetadataDomain",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGDuplicateCrossSections.cpp"
                                ,0xc6,L""), bVar13)) {
          pcVar5 = (code *)swi(3);
          uVar12 = (*pcVar5)();
          return (bool)uVar12;
        }
        FPCGMetadataDomain::FindOrCreateAttribute<FName>
                  (this_03,*(FName *)((longlong)&TVar17.DebugPtr[2]._padding_ + 4),&local_428,false,
                   false,true);
        if ((!bVar11) && (*(char *)((longlong)&TVar17.DebugPtr[2]._padding_ + 4) != '\0')) {
          local_388._s_0.X = (double)*(undefined8 *)&pTVar21->field_0x30;
          local_388._s_0.Y = (double)*(undefined8 *)&pTVar21->field_0x38;
          local_388._s_0.Z = (double)*(undefined8 *)&pTVar21->field_0x40;
          local_388._s_0.W = dVar8;
          FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector4<double>_>
                    (this_03,(FName)TVar17.DebugPtr[2]._padding_,(TVector4<double> *)&local_388._s_0
                     ,false,false,true);
        }
        if (*(char *)((longlong)&TVar17.DebugPtr[2]._padding_ + 4) != '\0') {
          FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector<double>_>
                    (this_03,(FName)TVar17.DebugPtr[2]._padding_,(TVector<double> *)&local_468._s_0,
                     false,false,true);
        }
        if ((!bVar11) && ((char)TVar17.DebugPtr[2]._padding_ != '\0')) {
          FPCGMetadataDomain::FindOrCreateAttribute<bool>
                    (this_03,*(FName *)((longlong)&TVar17.DebugPtr[2]._padding_ + 4),
                     (bool *)&pTVar21->field_0x20,false,false,true);
        }
        if (*(char *)((longlong)&TVar17.DebugPtr[2].CachedOverridableParams.ArrayNum + 1) != '\0') {
          local_4d0[0] = iVar27;
          FPCGMetadataDomain::FindOrCreateAttribute<int>
                    (this_03,*(FName *)&TVar17.DebugPtr[2].CachedOverridableParams.ArrayMax,
                     local_4d0,false,false,true);
          iVar27 = iVar27 + 1;
        }
        pFVar31 = local_470;
        pFVar28 = (FObjectPtr_u_0 *)(pFVar1->TaggedData).AllocatorInstance.Data;
        if (((pFVar28 <= local_470) &&
            (local_470 < pFVar28 + (longlong)(param_1->OutputData).TaggedData.ArrayMax * 0xf)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          uVar12 = (*pcVar5)();
          return (bool)uVar12;
        }
        iVar14 = (param_1->OutputData).TaggedData.ArrayNum;
        piVar2 = &(param_1->OutputData).TaggedData.ArrayMax;
        if (iVar14 == *piVar2) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)pFVar1,piVar2);
        }
        (param_1->OutputData).TaggedData.ArrayNum = iVar14 + 1;
        pFVar23 = FPCGTaggedData::FPCGTaggedData
                            ((FPCGTaggedData *)
                             ((pFVar1->TaggedData).AllocatorInstance.Data + (longlong)iVar14 * 0x78)
                             ,(FPCGTaggedData *)pFVar31);
        FPCGDataPtrWrapper::operator=(&pFVar23->Data,(UPCGData *)this_01);
        local_4f0 = (FPCGCrc)((double)local_4f0 + local_468._s_0.Z);
        dVar34 = dVar34 + local_468._s_0.X;
        local_500._8_8_ = (double)local_500._8_8_ + local_468._s_0.Y;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data);
        }
        FSpline::~FSpline(&local_120);
        if (local_130.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data);
        }
        if (local_150 != (void *)0x0) {
          FMemory::Free(local_150);
        }
        if (local_168 != (void *)0x0) {
          FMemory::Free(local_168);
        }
        if (local_180 != (void *)0x0) {
          FMemory::Free(local_180);
        }
        if ((void *)local_288._240_8_ != (void *)0x0) {
          FMemory::Free((void *)local_288._240_8_);
        }
        uVar25 = local_4e0 & 0xffffffff;
        TVar30.DebugPtr = (UPCGMetadata *)&(TVar30.DebugPtr)->_padding_;
        uVar24 = (ulonglong)local_4d8;
        unaff_XMM6._8_8_ = local_500._8_8_;
        unaff_XMM6._0_8_ = dVar34;
        FVar29 = (FObjectPtr_u_0)local_4b8._8_8_;
        pFVar32 = local_420;
      }
      if (local_4e8.DebugPtr != (UPCGMetadata *)0x0) {
        FMemory::Free(local_4e8.DebugPtr);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_448.ModuleGrammar.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_448.ParsedGrammar.SharedReferenceCount.ReferenceController);
      pFVar31 = pFVar31 + 0xf;
      uVar24 = (ulonglong)local_4d4;
      this_04 = local_508;
      pFVar28 = local_530;
    }
    else {
      FPCGAttributePropertyInputSelector::CopyAndFixLast
                ((FPCGAttributePropertyInputSelector *)&TVar17.DebugPtr[2].CachedElement,
                 (FPCGAttributePropertyInputSelector *)&local_408,(UPCGData *)FVar29.Handle);
      PCGAttributeAccessorHelpers::CreateConstAccessor
                ((UPCGData *)local_520,(FPCGAttributePropertySelector *)FVar29.Handle,
                 SUB81(&local_408,0));
      PCGAttributeAccessorHelpers::CreateConstKeys
                ((UPCGData *)(local_520 + 8),(FPCGAttributePropertySelector *)FVar29.Handle);
      if (((IPCGAttributeAccessor *)local_520._0_8_ == (IPCGAttributeAccessor *)0x0) ||
         ((IPCGAttributeAccessorKeys *)local_520._8_8_ == (IPCGAttributeAccessorKeys *)0x0)) {
        PCGLog::Metadata::LogFailToCreateAccessorError(&local_408,pFVar32);
      }
      else {
        local_3c8 = (TVector<double> *)&local_498;
        uStack_3c0 = 1;
        local_368._12_4_ = uStack_3bc;
        local_368.ArrayNum = 1;
        local_368.DataPtr = local_3c8;
        bVar13 = IPCGAttributeAccessor::GetRange<UE::Math::TVector<double>_>
                           ((IPCGAttributeAccessor *)local_520._0_8_,&local_368,0,
                            (IPCGAttributeAccessorKeys *)local_520._8_8_,
                            AllowBroadcastAndConstructible);
        uVar10 = local_520._0_8_;
        if (bVar13) {
          if ((IPCGAttributeAccessorKeys *)local_520._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
            (**(code **)*(longlong *)local_520._8_8_)(local_520._8_8_,1);
          }
          if ((IPCGAttributeAccessor *)local_520._0_8_ != (IPCGAttributeAccessor *)0x0) {
            (**(code **)*(longlong *)local_520._0_8_)(local_520._0_8_,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_408.ExtraNames.AllocatorInstance.Data,
                     local_408.ExtraNames.ArrayNum);
          if (local_408.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_408.ExtraNames.AllocatorInstance.Data);
          }
          goto LAB_1499e4210;
        }
        pFVar19 = FPCGAttributePropertySelector::ToString(&local_408,&local_358,false);
        FText::FromString(&local_3b8,pFVar19);
        if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_358.Data.AllocatorInstance.Data);
        }
        PCGLog::Metadata::LogFailToGetAttributeError<UE::Math::TVector<double>_>
                  (&local_3b8,(IPCGAttributeAccessor *)uVar10,pFVar32);
        if (local_3b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
        }
      }
      if ((IPCGAttributeAccessorKeys *)local_520._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
        (**(code **)*(longlong *)local_520._8_8_)(local_520._8_8_,1);
      }
      if ((IPCGAttributeAccessor *)local_520._0_8_ != (IPCGAttributeAccessor *)0x0) {
        (**(code **)*(longlong *)local_520._0_8_)(local_520._0_8_,1);
      }
      DestructItems<FString,int>
                ((FString *)local_408.ExtraNames.AllocatorInstance.Data,
                 local_408.ExtraNames.ArrayNum);
      pFVar28 = local_530;
      if (local_408.ExtraNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_1499e44b6;
      FMemory::Free(local_408.ExtraNames.AllocatorInstance.Data);
      uVar24 = (ulonglong)local_4d4;
      pFVar31 = pFVar31 + 0xf;
      this_04 = local_508;
      pFVar28 = local_530;
    }
  } while( true );
}

