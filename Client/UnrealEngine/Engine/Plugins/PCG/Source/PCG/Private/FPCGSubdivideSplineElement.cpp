// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ExecuteInternal @ 1499ede00

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
FPCGSubdivideSplineElement::ExecuteInternal(FPCGSubdivideSplineElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  UPCGNode *this_00;
  FName FVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UClass *pUVar10;
  UPCGSettings *pUVar11;
  UPCGSubdivisionBaseSettings *pUVar12;
  UPCGBasePointData *this_01;
  FPCGTaggedData *pFVar13;
  FPCGMetadataDomain *pFVar14;
  FString *pFVar15;
  FPCGDataCollection *pFVar16;
  UPCGMetadata *pUVar17;
  bool bVar18;
  undefined1 auStackY_4a8 [32];
  <lambda_1> local_470 [8];
  TObjectPtr<UPCGMetadata>_u_0 local_468;
  undefined1 local_460 [8];
  bool local_458 [8];
  UPCGMetadata *local_450;
  undefined1 local_448 [16];
  undefined1 local_438 [40];
  TObjectPtr<UPCGMetadata>_u_0 local_410;
  TObjectPtr<UPCGMetadata>_u_0 local_408;
  TObjectPtr<UPCGMetadata>_u_0 local_400;
  int local_3f8;
  double local_3f0 [2];
  TObjectPtr<UPCGMetadata>_u_0 local_3e0;
  TObjectPtr<UPCGMetadata>_u_0 local_3d8;
  undefined8 local_3d0;
  FName local_3c8;
  FPCGSubdivideSplineElement *local_3c0;
  FPCGAttributePropertySelector local_3b8;
  double *local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  int *local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  FText local_358;
  TObjectPtr<UPCGMetadata>_u_0 *local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  FText local_338;
  FPCGAttributePropertySelector local_328;
  FName local_2e8;
  FPCGMetadataDomainID local_2e0;
  FName local_2c8;
  FPCGMetadataDomainID local_2c0;
  FName local_2a8;
  FPCGMetadataDomainID local_2a0;
  FName local_288;
  FPCGMetadataDomainID local_280;
  FName local_268;
  FPCGMetadataDomainID local_260;
  TArrayView<double,int> local_248;
  TArrayView<int,int> local_238;
  FString local_228;
  TArrayView<FString,int> local_218;
  FString local_208;
  FPCGAttributePropertySelector local_1f8;
  TVector4<double>_u_0 local_1b8;
  undefined1 local_198 [8];
  TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>
  local_190;
  undefined1 local_140 [64];
  void *local_100;
  ulonglong uStack_f8;
  bool local_f0;
  double local_e8;
  int local_e0 [2];
  double local_d8;
  UPCGPolyLineData *local_d0;
  UPCGBasePointData *local_c8;
  FPCGMetadataAttribute<FName> *pFStack_c0;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *local_b8;
  FPCGMetadataAttribute<int> *pFStack_b0;
  FPCGMetadataAttribute<bool> *local_a8;
  FPCGMetadataAttribute<bool> *pFStack_a0;
  TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  bVar18 = -1 < CpuChannel->Enabled;
  local_3c0 = this;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId326,"FPCGSubdivideSplineElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivideSpline.cpp"
               ,0x146);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId326);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar11 = UPCGNode::GetSettings(this_00), pUVar11 == (UPCGSettings *)0x0)) {
      pFVar13 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSubdivideSplineSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_470[0]);
      if (pFVar13 != (FPCGTaggedData *)0x0) {
        local_438._16_8_ = (pFVar13->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UPCGSubdivisionBaseSettings *)local_438._16_8_ != (UPCGSubdivisionBaseSettings *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)local_438._16_8_);
        }
        if ((UPCGSubdivisionBaseSettings *)local_438._16_8_ != (UPCGSubdivisionBaseSettings *)0x0) {
          pUVar10 = UPCGSubdivideSplineSettings::StaticClass();
          bVar7 = FObjectPtr::IsA((FObjectPtr *)(local_438 + 0x10),pUVar10);
          pUVar12 = (UPCGSubdivisionBaseSettings *)local_438._16_8_;
          if (bVar7) goto LAB_1499edf8c;
        }
      }
    }
    else {
      pUVar11 = UPCGNode::GetSettings(this_00);
      pUVar12 = (UPCGSubdivisionBaseSettings *)
                FPCGDataCollection::GetSettings(&param_1->InputData,pUVar11);
      if (pUVar12 != (UPCGSubdivisionBaseSettings *)0x0) {
        pUVar10 = UPCGSubdivideSplineSettings::StaticClass();
        iVar2 = (int)pUVar10->_padding_;
        if ((iVar2 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar10->_padding_)) goto LAB_1499edf8c;
      }
    }
    pUVar12 = (UPCGSubdivisionBaseSettings *)0x0;
  }
  else {
    pUVar10 = UPCGSubdivideSplineSettings::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar10);
    pUVar12 = (UPCGSubdivisionBaseSettings *)0x0;
    if (bVar7) {
      pUVar12 = (UPCGSubdivisionBaseSettings *)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_1499edf8c:
  if ((pUVar12 == (UPCGSubdivisionBaseSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivideSpline.cpp"
                         ,0x149,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)&local_400.ObjectPtr,
             &PCGPinConstants::DefaultInputLabel);
  local_408.DebugPtr = (UPCGMetadata *)0x0;
  if (pUVar12->bModuleInfoAsInput == false) {
    FPCGSubdivisionBaseElement::GetModulesInfoMap
              ((FPCGSubdivisionBaseElement *)this,
               (TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
                *)&local_98,param_1,&pUVar12->ModulesInfo,(UPCGParamData **)&local_408.DebugPtr);
  }
  else {
    FPCGSubdivisionBaseElement::GetModulesInfoMap
              ((FPCGSubdivisionBaseElement *)this,
               (TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
                *)&local_98,param_1,&pUVar12->ModulesInfoAttributeNames,
               (UPCGParamData **)&local_408.DebugPtr);
  }
  if (*(undefined1 *)((longlong)&pUVar12[1]._padding_ + 1) == '\0') {
    local_3f0[0] = (double)pUVar12[1]._padding_;
  }
  else {
    local_3f0[0] = 0.0;
  }
  local_190.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_190.Elements._48_8_ = _UNK_150631d98;
  local_190.Elements._0_8_ = 0;
  local_190.Elements._8_8_ = 0;
  local_190.Elements._32_8_ = 0;
  local_190.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_190.HashSize = 0;
  local_198 = (undefined1  [8])param_1;
  TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>
               *)(local_198 + 8),&local_98);
  iVar2 = local_3f8;
  local_140._0_8_ = 0;
  local_140._8_8_ = 0;
  local_140._32_8_ = 0;
  local_140._56_8_ = 0;
  local_100 = (void *)0x0;
  local_140._16_8_ = 0;
  local_140._24_8_ = 0;
  uStack_f8 = 0;
  local_140._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_140._48_8_ = _UNK_150631d98;
  local_f0 = SUB81(pUVar12[1]._padding_,0);
  local_e8 = 0.0;
  local_e0[0] = 0;
  pUVar17 = (UPCGMetadata *)
            ((longlong)&(local_400.DebugPtr)->OtherParents + (longlong)local_3f8 * 0x78 + -0x30);
  local_d8 = (double)pUVar12[1]._padding_;
  local_d0 = (UPCGPolyLineData *)0x0;
  local_c8 = (UPCGBasePointData *)0x0;
  pFStack_c0 = (FPCGMetadataAttribute<FName> *)0x0;
  local_b8 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
  pFStack_b0 = (FPCGMetadataAttribute<int> *)0x0;
  local_a8 = (FPCGMetadataAttribute<bool> *)0x0;
  pFStack_a0 = (FPCGMetadataAttribute<bool> *)0x0;
  local_468 = local_400;
  local_450 = pUVar17;
  do {
    while( true ) {
      pFVar16 = &param_1->OutputData;
      if (local_3f8 != iVar2) {
        local_460[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_460);
      }
      if (local_468.DebugPtr == pUVar17) {
        if ((pUVar12->bForwardAttributesFromModulesInfo != false) &&
           ((FPCGCrc)local_408.DebugPtr != (FPCGCrc)0x0)) {
          FPCGSubdivisionBaseElement::MatchAndSetAttributes
                    ((FPCGSubdivisionBaseElement *)local_3c0,
                     (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)&local_400.ObjectPtr,
                     &pFVar16->TaggedData,(UPCGParamData *)local_408.DebugPtr,pUVar12,
                     &PCGMetadataDomainID::Default);
        }
        uStack_f8 = uStack_f8 & 0xffffffff00000000;
        if (local_100 != (void *)0x0) {
          FMemory::Free(local_100);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,PCGGrammar::FTokenizedGrammar>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,PCGGrammar::FTokenizedGrammar>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,PCGGrammar::FTokenizedGrammar>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_140);
        local_190.HashSize = 0;
        if (local_190.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_190.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FPCGSubdivisionSubmodule>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,FPCGSubdivisionSubmodule>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,FPCGSubdivisionSubmodule>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_198 + 8));
        local_98.HashSize = 0;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FPCGSubdivisionSubmodule>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,FPCGSubdivisionSubmodule>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98.Elements);
        DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_400.DebugPtr,local_3f8);
        if (local_400.DebugPtr != (UPCGMetadata *)0x0) {
          FMemory::Free(local_400.DebugPtr);
        }
        if (bVar18) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      local_438._24_8_ = *(undefined8 *)local_468;
      if (UE::GC::GIsIncrementalReachabilityPending == false) break;
      if ((UPCGPolyLineData *)local_438._24_8_ != (UPCGPolyLineData *)0x0) {
        UE::GC::MarkAsReachable((UObject *)local_438._24_8_);
        break;
      }
LAB_1499ee99f:
      local_468.DebugPtr = (UPCGMetadata *)&((local_468.DebugPtr)->OtherParents).HashSize;
    }
    if ((UPCGPolyLineData *)local_438._24_8_ == (UPCGPolyLineData *)0x0) goto LAB_1499ee99f;
    pUVar10 = Z_Construct_UClass_UPCGPolyLineData_NoRegister();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)(local_438 + 0x18),pUVar10);
    uVar5 = local_438._24_8_;
    if ((!bVar7) || ((UPCGPolyLineData *)local_438._24_8_ == (UPCGPolyLineData *)0x0))
    goto LAB_1499ee99f;
    if (*(undefined1 *)((longlong)&pUVar12[1]._padding_ + 1) == '\0') {
LAB_1499ee32a:
      this_01 = FPCGContext::NewPointData_AnyThread(param_1);
      UPCGSpatialData::InitializeFromData
                ((UPCGSpatialData *)this_01,(UPCGSpatialData *)uVar5,(UPCGMetadata *)0x0,true,true);
      (**(code **)(this_01->_padding_ + 0x548))(this_01);
      iVar9 = (param_1->OutputData).TaggedData.ArrayNum;
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)pFVar16,piVar1);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar9 + 1;
      pFVar13 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((pFVar16->TaggedData).AllocatorInstance.Data + (longlong)iVar9 * 0x78),
                           (FPCGTaggedData *)local_468.DebugPtr);
      FPCGDataPtrWrapper::operator=(&pFVar13->Data,(UPCGData *)this_01);
      local_e8 = local_3f0[0];
      local_d0 = (UPCGPolyLineData *)uVar5;
      pUVar17 = (UPCGMetadata *)this_01->_padding_;
      local_c8 = this_01;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UPCGMetadata *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar17);
      }
      FVar3 = pUVar12->SymbolAttributeName;
      local_3f0[1] = 0.0;
      local_3c8.ComparisonIndex.Value = 0;
      local_3c8.Number = 0;
      local_2e0 = PCGMetadataDomainID::Default;
      local_2e8 = FVar3;
      pFVar14 = UPCGMetadata::FindOrCreateMetadataDomain(pUVar17,&local_2e0);
      if (pFVar14 == (FPCGMetadataDomain *)0x0) {
        pFStack_c0 = (FPCGMetadataAttribute<FName> *)0x0;
      }
      else {
        pFStack_c0 = FPCGMetadataDomain::FindOrCreateAttribute<FName>
                               (pFVar14,local_2e8,&local_3c8,false,true,true);
        if (pFStack_c0 != (FPCGMetadataAttribute<FName> *)0x0) {
          FVar3 = pUVar12->DebugColorAttributeName;
          local_1b8._s_0.X = 0.0;
          local_1b8._s_0.Y = 0.0;
          local_1b8._s_0.Z = 0.0;
          local_1b8._s_0.W = 0.0;
          if (pUVar12->bOutputDebugColorAttribute != false) {
            local_2c0 = PCGMetadataDomainID::Default;
            local_2c8 = FVar3;
            pFVar14 = UPCGMetadata::FindOrCreateMetadataDomain(pUVar17,&local_2c0);
            if (pFVar14 == (FPCGMetadataDomain *)0x0) {
              local_b8 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
            }
            else {
              local_b8 = FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector4<double>_>
                                   (pFVar14,local_2c8,(TVector4<double> *)&local_1b8._s_0,false,true
                                    ,true);
              if (local_b8 != (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0)
              goto LAB_1499ee4c7;
            }
            PCGLog::Metadata::LogFailToCreateAttributeError<UE::Math::TVector4<double>_>
                      (FVar3,param_1);
            pUVar17 = local_450;
            goto LAB_1499ee99f;
          }
LAB_1499ee4c7:
          FVar3 = *(FName *)((longlong)&pUVar12[1]._padding_ + 4);
          local_438._8_4_ = 0xffffffff;
          if ((char)pUVar12[1]._padding_ != '\0') {
            local_2a0 = PCGMetadataDomainID::Default;
            local_2a8 = FVar3;
            pFVar14 = UPCGMetadata::FindOrCreateMetadataDomain(pUVar17,&local_2a0);
            if (pFVar14 == (FPCGMetadataDomain *)0x0) {
              pFStack_b0 = (FPCGMetadataAttribute<int> *)0x0;
            }
            else {
              pFStack_b0 = FPCGMetadataDomain::FindOrCreateAttribute<int>
                                     (pFVar14,local_2a8,(int *)(local_438 + 8),false,true,true);
              if (pFStack_b0 != (FPCGMetadataAttribute<int> *)0x0) goto LAB_1499ee53d;
            }
            PCGLog::Metadata::LogFailToCreateAttributeError<int>(FVar3,param_1);
            pUVar17 = local_450;
            goto LAB_1499ee99f;
          }
LAB_1499ee53d:
          FVar3 = (FName)pUVar12[1]._padding_;
          local_458[0] = false;
          if (*(undefined1 *)((longlong)&pUVar12[1]._padding_ + 4) != '\0') {
            local_280 = PCGMetadataDomainID::Default;
            local_288 = FVar3;
            pFVar14 = UPCGMetadata::FindOrCreateMetadataDomain(pUVar17,&local_280);
            if (pFVar14 == (FPCGMetadataDomain *)0x0) {
              local_a8 = (FPCGMetadataAttribute<bool> *)0x0;
            }
            else {
              local_a8 = FPCGMetadataDomain::FindOrCreateAttribute<bool>
                                   (pFVar14,local_288,local_458,false,true,true);
              if (local_a8 != (FPCGMetadataAttribute<bool> *)0x0) goto LAB_1499ee5b0;
            }
            PCGLog::Metadata::LogFailToCreateAttributeError<bool>(FVar3,param_1);
            pUVar17 = local_450;
            goto LAB_1499ee99f;
          }
LAB_1499ee5b0:
          FVar3 = (FName)pUVar12[1]._padding_;
          local_470[0] = (<lambda_1>)0x0;
          if (*(undefined1 *)((longlong)&pUVar12[1]._padding_ + 4) == '\0') {
LAB_1499ee623:
            local_e0[0] = 0;
            if (pUVar12->bUseSeedAttribute != false) {
              FPCGAttributePropertyInputSelector::CopyAndFixLast
                        (&pUVar12->SeedAttribute,(FPCGAttributePropertyInputSelector *)&local_1f8,
                         (UPCGData *)uVar5);
              PCGAttributeAccessorHelpers::CreateConstAccessor
                        ((UPCGData *)(local_438 + 0x20),(FPCGAttributePropertySelector *)uVar5,
                         SUB81(&local_1f8,0));
              PCGAttributeAccessorHelpers::CreateConstKeys
                        ((UPCGData *)&local_3e0.ObjectPtr,(FPCGAttributePropertySelector *)uVar5);
              if (((FPCGCrc)local_438._32_8_ == (FPCGCrc)0x0) ||
                 (local_3e0.DebugPtr == (UPCGMetadata *)0x0)) {
                PCGLog::Metadata::LogFailToCreateAccessorError(&local_1f8,param_1);
              }
              else {
                local_368 = local_e0;
                uStack_360 = 1;
                local_238._12_4_ = uStack_35c;
                local_238.ArrayNum = 1;
                local_238.DataPtr = local_368;
                bVar7 = IPCGAttributeAccessor::GetRange<int>
                                  ((IPCGAttributeAccessor *)local_438._32_8_,&local_238,0,
                                   (IPCGAttributeAccessorKeys *)local_3e0.DebugPtr,
                                   AllowBroadcastAndConstructible);
                uVar6 = local_438._32_8_;
                if (!bVar7) {
                  pFVar15 = FPCGAttributePropertySelector::ToString(&local_1f8,&local_228,false);
                  FText::FromString(&local_358,pFVar15);
                  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_228.Data.AllocatorInstance.Data);
                  }
                  PCGLog::Metadata::LogFailToGetAttributeError<int>
                            (&local_358,(IPCGAttributeAccessor *)uVar6,param_1);
                  if (local_358.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
                  }
                }
              }
              if (local_3e0.DebugPtr != (UPCGMetadata *)0x0) {
                (**(code **)(local_3e0.DebugPtr)->_padding_)(local_3e0.DebugPtr,1);
              }
              if ((FPCGCrc)local_438._32_8_ != (FPCGCrc)0x0) {
                (*(code *)**(undefined8 **)local_438._32_8_)(local_438._32_8_,1);
              }
              DestructItems<FString,int>
                        ((FString *)local_1f8.ExtraNames.AllocatorInstance.Data,
                         local_1f8.ExtraNames.ArrayNum);
              if (local_1f8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f8.ExtraNames.AllocatorInstance.Data);
              }
            }
            if ((pUVar12->GrammarSelection).bGrammarAsAttribute == false) {
              PCGSubdivideSplineHelpers::Process
                        ((FParameters *)local_198,&(pUVar12->GrammarSelection).GrammarString);
              pUVar17 = local_450;
            }
            else {
              FPCGAttributePropertyInputSelector::CopyAndFixLast
                        (&(pUVar12->GrammarSelection).GrammarAttribute,
                         (FPCGAttributePropertyInputSelector *)&local_328,(UPCGData *)uVar5);
              PCGAttributeAccessorHelpers::CreateConstAccessor
                        ((UPCGData *)local_438,(FPCGAttributePropertySelector *)uVar5,
                         SUB81(&local_328,0));
              PCGAttributeAccessorHelpers::CreateConstKeys
                        ((UPCGData *)&local_410.ObjectPtr,(FPCGAttributePropertySelector *)uVar5);
              if (((IPCGAttributeAccessor *)local_438._0_8_ == (IPCGAttributeAccessor *)0x0) ||
                 (local_410.DebugPtr == (UPCGMetadata *)0x0)) {
                PCGLog::Metadata::LogFailToCreateAccessorError(&local_328,param_1);
              }
              else {
                local_348 = &local_3d8;
                uStack_340 = 1;
                local_218._12_4_ = uStack_33c;
                local_218.ArrayNum = 1;
                local_3d8.DebugPtr = (UPCGMetadata *)0x0;
                local_3d0 = 0;
                local_218.DataPtr = (FString *)local_348;
                bVar7 = IPCGAttributeAccessor::GetRange<FString>
                                  ((IPCGAttributeAccessor *)local_438._0_8_,&local_218,0,
                                   (IPCGAttributeAccessorKeys *)local_410.DebugPtr,
                                   AllowBroadcastAndConstructible);
                uVar5 = local_438._0_8_;
                if (bVar7) {
                  PCGSubdivideSplineHelpers::Process
                            ((FParameters *)local_198,(FString *)&local_3d8.ObjectPtr);
                }
                else {
                  pFVar15 = FPCGAttributePropertySelector::ToString(&local_328,&local_208,false);
                  FText::FromString(&local_338,pFVar15);
                  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_208.Data.AllocatorInstance.Data);
                  }
                  PCGLog::Metadata::LogFailToGetAttributeError<int>
                            (&local_338,(IPCGAttributeAccessor *)uVar5,param_1);
                  if (local_338.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_338.TextData.Reference + 0x10))();
                  }
                }
                if (local_3d8.DebugPtr != (UPCGMetadata *)0x0) {
                  FMemory::Free(local_3d8.DebugPtr);
                }
              }
              if (local_410.DebugPtr != (UPCGMetadata *)0x0) {
                (**(code **)(local_410.DebugPtr)->_padding_)(local_410.DebugPtr,1);
              }
              if ((IPCGAttributeAccessor *)local_438._0_8_ != (IPCGAttributeAccessor *)0x0) {
                (**(code **)*(longlong *)local_438._0_8_)(local_438._0_8_,1);
              }
              DestructItems<FString,int>
                        ((FString *)local_328.ExtraNames.AllocatorInstance.Data,
                         local_328.ExtraNames.ArrayNum);
              pUVar17 = local_450;
              if (local_328.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_328.ExtraNames.AllocatorInstance.Data);
                pUVar17 = local_450;
              }
            }
          }
          else {
            local_260 = PCGMetadataDomainID::Default;
            local_268 = FVar3;
            pFVar14 = UPCGMetadata::FindOrCreateMetadataDomain(pUVar17,&local_260);
            if (pFVar14 == (FPCGMetadataDomain *)0x0) {
              pFStack_a0 = (FPCGMetadataAttribute<bool> *)0x0;
            }
            else {
              pFStack_a0 = FPCGMetadataDomain::FindOrCreateAttribute<bool>
                                     (pFVar14,local_268,(bool *)local_470,false,true,true);
              if (pFStack_a0 != (FPCGMetadataAttribute<bool> *)0x0) goto LAB_1499ee623;
            }
            PCGLog::Metadata::LogFailToCreateAttributeError<bool>(FVar3,param_1);
            pUVar17 = local_450;
          }
          goto LAB_1499ee99f;
        }
      }
      PCGLog::Metadata::LogFailToCreateAttributeError<FName>(FVar3,param_1);
      pUVar17 = local_450;
      goto LAB_1499ee99f;
    }
    if ((*(longlong *)(local_438._24_8_ + 0x38) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InputPolyLineData->Metadata",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivideSpline.cpp"
                           ,0x165,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    FPCGAttributePropertyInputSelector::CopyAndFixLast
              ((FPCGAttributePropertyInputSelector *)&pUVar12[1]._padding_,
               (FPCGAttributePropertyInputSelector *)&local_3b8,(UPCGData *)uVar5);
    PCGAttributeAccessorHelpers::CreateConstAccessor
              ((UPCGData *)(local_448 + 8),(FPCGAttributePropertySelector *)uVar5,
               SUB81(&local_3b8,0));
    PCGAttributeAccessorHelpers::CreateConstKeys
              ((UPCGData *)local_448,(FPCGAttributePropertySelector *)uVar5);
    if (((IPCGAttributeAccessor *)local_448._8_8_ == (IPCGAttributeAccessor *)0x0) ||
       ((IPCGAttributeAccessorKeys *)local_448._0_8_ == (IPCGAttributeAccessorKeys *)0x0)) {
      PCGLog::Metadata::LogFailToCreateAccessorError(&local_3b8,param_1);
    }
    else {
      local_378 = local_3f0;
      uStack_370 = 1;
      local_248._12_4_ = uStack_36c;
      local_248.ArrayNum = 1;
      local_248.DataPtr = local_378;
      bVar7 = IPCGAttributeAccessor::GetRange<double>
                        ((IPCGAttributeAccessor *)local_448._8_8_,&local_248,0,
                         (IPCGAttributeAccessorKeys *)local_448._0_8_,AllowBroadcastAndConstructible
                        );
      if (bVar7) {
        if ((IPCGAttributeAccessorKeys *)local_448._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)*(longlong *)local_448._0_8_)(local_448._0_8_,1);
        }
        if ((IPCGAttributeAccessor *)local_448._8_8_ != (IPCGAttributeAccessor *)0x0) {
          (**(code **)*(longlong *)local_448._8_8_)(local_448._8_8_,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_3b8.ExtraNames.AllocatorInstance.Data,
                   local_3b8.ExtraNames.ArrayNum);
        if (local_3b8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.ExtraNames.AllocatorInstance.Data);
        }
        goto LAB_1499ee32a;
      }
      PCGLog::Metadata::LogFailToGetAttributeError(&local_3b8,param_1);
    }
    if ((IPCGAttributeAccessorKeys *)local_448._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
      (**(code **)*(longlong *)local_448._0_8_)(local_448._0_8_,1);
    }
    if ((IPCGAttributeAccessor *)local_448._8_8_ != (IPCGAttributeAccessor *)0x0) {
      (**(code **)*(longlong *)local_448._8_8_)(local_448._8_8_,1);
    }
    DestructItems<FString,int>
              ((FString *)local_3b8.ExtraNames.AllocatorInstance.Data,local_3b8.ExtraNames.ArrayNum)
    ;
    if (local_3b8.ExtraNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
    goto LAB_1499ee99f;
    FMemory::Free(local_3b8.ExtraNames.AllocatorInstance.Data);
    local_468.DebugPtr = (UPCGMetadata *)&((local_468.DebugPtr)->OtherParents).HashSize;
  } while( true );
}

