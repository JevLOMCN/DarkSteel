// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149b79a50

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
FPCGDeleteAttributesElement::ExecuteInternal(FPCGDeleteAttributesElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  UPCGData *pUVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  UPCGMetadata *this_01;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  UClass *pUVar11;
  UPCGSettings *pUVar12;
  TObjectPtr<UPCGSettings>_u_0 TVar13;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar14;
  FName *pFVar15;
  UPCGMetadata *this_02;
  FPCGMetadataDomain *pFVar16;
  FPCGMetadataDomain *pFVar17;
  FPCGMetadataDomain *this_03;
  FPCGTaggedData *pFVar18;
  ulonglong uVar19;
  wchar_t *pwVar20;
  ForAnyElementType FVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  bool bVar27;
  undefined1 auStackY_298 [32];
  <lambda_1> local_247;
  undefined1 local_246;
  undefined1 local_245 [5];
  TObjectPtr<UPCGSettings>_u_0 local_240;
  int local_238;
  UPCGMetadata *local_230;
  FPCGAttributePropertySelector local_228;
  uint local_1e8;
  TObjectPtr<UPCGSettings>_u_0 local_1e0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1d8;
  undefined8 local_1c8;
  FPCGTaggedData *local_1c0;
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [80];
  EPCGMetadataFilterMode local_160;
  EPCGStringMatchingOperator local_15f;
  bool local_138;
  undefined8 *local_128;
  uint local_120;
  FName local_118;
  UPCGMetadata *local_110;
  FPCGContext *local_108;
  UPCGData *local_100;
  FPCGTaggedData *local_f8;
  FScriptContainerElement *local_f0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  FPCGMetadataDomainID local_c8;
  FPCGMetadataDomainID local_b8;
  FName local_a8 [2];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_238 = 0;
  bVar27 = -1 < CpuChannel->Enabled;
  local_108 = param_1;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId137,"FPCGDeleteAttributesElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDeleteAttributesElement.cpp"
               ,0x89);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId137);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDeleteAttributesElement.cpp"
                         ,0x8b,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar12 = UPCGNode::GetSettings(this_00), pUVar12 == (UPCGSettings *)0x0)) {
      pFVar18 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDeleteAttributesSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_247);
      if (pFVar18 != (FPCGTaggedData *)0x0) {
        local_1e0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar18->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_1e0.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b79b9f;
          UE::GC::MarkAsReachable((UObject *)local_1e0.DebugPtr);
        }
        if (local_1e0.DebugPtr != (UPCGSettings *)0x0) {
          pUVar11 = UPCGDeleteAttributesSettings::StaticClass();
          bVar8 = FObjectPtr::IsA(&local_1e0.ObjectPtr,pUVar11);
          if (bVar8) {
            local_240.DebugPtr = local_1e0.DebugPtr;
            TVar13 = local_1e0;
            goto LAB_149b79ba7;
          }
        }
      }
    }
    else {
      pUVar12 = UPCGNode::GetSettings(this_00);
      TVar13.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar12);
      if (TVar13.DebugPtr != (UPCGSettings *)0x0) {
        local_240.DebugPtr = TVar13.DebugPtr;
        pUVar11 = UPCGDeleteAttributesSettings::StaticClass();
        iVar10 = (int)pUVar11->_padding_;
        if ((iVar10 <= *(int *)((TVar13.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar13.DebugPtr)->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
            &pUVar11->_padding_)) goto LAB_149b79ba7;
      }
    }
  }
  else {
    pUVar11 = UPCGDeleteAttributesSettings::StaticClass();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar11);
    if (bVar8) {
      local_240 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar13 = local_240;
      goto LAB_149b79ba7;
    }
  }
LAB_149b79b9f:
  local_240.DebugPtr = (UPCGSettings *)0x0;
  TVar13.DebugPtr = (UPCGSettings *)0x0;
LAB_149b79ba7:
  lVar4 = TVar13.DebugPtr[1]._padding_;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  bVar8 = (char)TVar13.DebugPtr[1]._padding_ == '\0';
  if (bVar8) {
    pTVar14 = PCGHelpers::GetStringArrayFromCommaSeparatedList
                        (&local_e8,(FString *)&TVar13.DebugPtr[1]._padding_);
  }
  else {
    pTVar14 = PCGHelpers::GetStringArrayFromCommaSeparatedString
                        (&local_d8,(FString *)&TVar13.DebugPtr[1]._padding_,param_1);
  }
  pFVar23 = (pTVar14->AllocatorInstance).Data;
  (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_238 = pTVar14->ArrayNum;
  lVar24 = (longlong)local_238;
  pTVar14->ArrayNum = 0;
  pTVar14->ArrayMax = 0;
  local_f0 = pFVar23;
  if ((bVar8) &&
     (DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum),
     local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if ((!bVar8) &&
     (DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum),
     local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  pFVar22 = pFVar23 + lVar24 * 0x10;
  for (; pFVar23 != pFVar22; pFVar23 = pFVar23 + 0x10) {
    if (*(int *)(pFVar23 + 8) == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = *(wchar_t **)&pFVar23->field_0x0;
    }
    pFVar15 = ::FName::FName(local_a8,pwVar20);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&local_98,&local_118,(bool *)pFVar15);
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_1d8,&PCGPinConstants::DefaultInputLabel);
  uVar5 = _UNK_150631d98;
  lVar24 = ___xmm_00000000ffffffff0000008000000000;
  uVar19 = (ulonglong)local_1d8.ArrayNum;
  local_1e8 = local_1d8.ArrayNum;
  local_f8 = (FPCGTaggedData *)(local_1d8.AllocatorInstance.Data + uVar19 * 0x78);
  FVar21.Data = local_1d8.AllocatorInstance.Data;
LAB_149b79d9e:
  do {
    while( true ) {
      pFVar18 = local_f8;
      local_1c0 = (FPCGTaggedData *)FVar21.Data;
      if (local_1d8.ArrayNum != (uint)uVar19) {
        local_246 = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_246);
      }
      if ((FPCGTaggedData *)FVar21.Data == pFVar18) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
        if ((FPCGTaggedData *)local_1d8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_1d8.AllocatorInstance.Data);
        }
        pFVar23 = local_f0;
        DestructItems<FString,int>((FString *)local_f0,local_238);
        if (pFVar23 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar23);
        }
        local_98.HashSize = 0;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98.Elements);
        if (bVar27) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      pUVar2 = (((FPCGTaggedData *)FVar21.Data)->Data).Data.field0_0x0.DebugPtr;
      this_02 = (UPCGMetadata *)(**(code **)(pUVar2->_padding_ + 800))(pUVar2);
      local_230 = this_02;
      if (this_02 != (UPCGMetadata *)0x0) break;
      PCGLog::Metadata::LogInvalidMetadata(param_1);
      uVar19 = (ulonglong)local_1e8;
      FVar21.Data = FVar21.Data + 0x78;
    }
    local_228._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
    local_1c8 = 0;
    local_228.Selection = Attribute;
    local_228.DomainName.ComparisonIndex.Value = 0;
    local_228.DomainName.Number = 0;
    local_228.AttributeName.ComparisonIndex.Value = 0;
    local_228.AttributeName.Number = 0;
    local_228.PropertyName.ComparisonIndex.Value = 0;
    local_228.PropertyName.Number = 0;
    local_228.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.ExtraNames.ArrayNum = 0;
    local_228.ExtraNames.ArrayMax = 0;
    local_228.ExtraProperty = Index;
    FPCGAttributePropertySelector::SetDomainName
              (&local_228,*(FName *)((longlong)&TVar13.DebugPtr[1]._padding_ + 4),true);
    FPCGAttributePropertySelector::SetAttributeName(&local_228,(FName)0x0,true);
    DestructItems<FString,int>
              ((FString *)local_228.ExtraNames.AllocatorInstance.Data,local_228.ExtraNames.ArrayNum)
    ;
    iVar10 = local_228.ExtraNames.ArrayMax;
    local_228.ExtraNames._8_8_ = (ulonglong)(uint)local_228.ExtraNames.ArrayMax << 0x20;
    if (iVar10 == 0) {
      local_228.ExtraNames.ArrayNum = 0;
      local_228.ExtraNames.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,iVar10,&local_228.ExtraNames.AllocatorInstance,0,
                 &local_228.ExtraNames.ArrayMax);
      ConstructItems<FString,FString,int>
                (local_228.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
    }
    (**(code **)(pUVar2->_padding_ + 0x348))(pUVar2,&local_c8,&local_228);
    if (local_c8.Flag == Invalid) {
      PCGLog::Metadata::LogInvalidMetadataDomain(&local_228,param_1);
LAB_149b79ecb:
      DestructItems<FString,int>
                ((FString *)local_228.ExtraNames.AllocatorInstance.Data,
                 local_228.ExtraNames.ArrayNum);
      if (local_228.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.ExtraNames.AllocatorInstance.Data);
        uVar19 = (ulonglong)local_1e8;
        FVar21.Data = FVar21.Data + 0x78;
        goto LAB_149b79d9e;
      }
    }
    else {
      pFVar16 = UPCGMetadata::GetConstMetadataDomain(this_02,&local_c8);
      if (pFVar16 == (FPCGMetadataDomain *)0x0) goto LAB_149b79ecb;
      local_100 = (UPCGData *)(**(code **)(pUVar2->_padding_ + 0x310))(pUVar2,param_1,0);
      if (local_100 == (UPCGData *)0x0) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6569401561565364413>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDeleteAttributesElement.cpp"
                           ,0xbd,"OutputData");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        goto LAB_149b79ecb;
      }
      local_110 = (UPCGMetadata *)(**(code **)(local_100->_padding_ + 0x328))(local_100);
      (**(code **)(pUVar2->_padding_ + 0x340))(pUVar2,&local_128);
      this_01 = local_110;
      uVar7 = local_120;
      uVar19 = (ulonglong)(int)local_120;
      puVar25 = local_128 + uVar19 * 2;
      puVar26 = local_128;
      while( true ) {
        if ((uint)uVar19 != uVar7) {
          local_245[0] = 0;
          `TCheckedPointerIterator<FPCGMetadataDomainID,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_245);
        }
        if (puVar26 == puVar25) break;
        local_b8._0_8_ = *puVar26;
        local_b8.DebugName = *(FName *)(puVar26 + 1);
        pFVar17 = UPCGMetadata::GetConstMetadataDomain(this_02,&local_b8);
        if (pFVar17 == (FPCGMetadataDomain *)0x0) {
LAB_149b7a1dd:
          uVar19 = (ulonglong)local_120;
          puVar26 = puVar26 + 2;
        }
        else {
          this_03 = UPCGMetadata::GetMetadataDomain(this_01,&local_b8);
          if ((this_03 == (FPCGMetadataDomain *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("OutDomain",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDeleteAttributesElement.cpp"
                                 ,0xce,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          if (pFVar16 == pFVar17) {
            local_1b0._0_8_ = (FScriptContainerElement *)0x0;
            local_15f = *(EPCGStringMatchingOperator *)
                         ((longlong)&local_240.DebugPtr[1]._padding_ + 4);
            local_1b0._32_8_ = (void *)0x0;
            local_1b0._40_8_ = lVar24;
            local_1b0._48_8_ = uVar5;
            local_1b0._64_8_ = (ForElementType<FSetElementId>)0x0;
            local_138 = false;
            local_1b0._72_4_ = 0;
            local_1b0._8_8_ = 0xffffffff00000000;
            local_1b8 = (undefined1  [8])pFVar16;
            local_160 = (int)lVar4 != 1;
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,(ForAnyElementType *)local_1b0,0,(int *)(local_1b0 + 0xc));
            uVar6 = local_1b0._44_4_;
            local_1b0._48_8_ = 0xffffffff;
            local_1b0._40_8_ = (ulonglong)(uint)local_1b0._44_4_ << 0x20;
            if (0x80 < (uint)uVar6) {
              local_1b0._40_8_ = 0x8000000000;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_1b0 + 0x10),0);
            }
            if ((void *)local_1b0._32_8_ != (void *)0x0) {
              FMemory::Free((void *)local_1b0._32_8_);
            }
            if ((FScriptContainerElement *)local_1b0._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_1b0._0_8_);
            }
            local_1b0._0_8_ = (FScriptContainerElement *)0x0;
            local_1b0._8_8_ = 0;
            local_1b0._32_8_ = (void *)0x0;
            local_1b0._40_8_ = lVar24;
            local_1b0._48_8_ = uVar5;
            local_1b0._64_8_ = (ForElementType<FSetElementId>)0x0;
            local_1b0._72_4_ = 0;
            TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                      ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_1b0,
                       &local_98);
            if ((local_1b0._12_4_ == -1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  ), bVar8)) {
              pcVar3 = (code *)swi(3);
              uVar9 = (*pcVar3)();
              return (bool)uVar9;
            }
            FPCGMetadataDomain::Initialize(this_03,(FPCGMetadataDomainInitializeParams *)local_1b8);
            this_02 = local_230;
            if (local_1b0._12_4_ != -1) {
              local_1b0._72_4_ = 0;
              iVar10 = local_1b0._12_4_;
              if ((ForElementType<FSetElementId>)local_1b0._64_8_ !=
                  (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_1b0._64_8_);
                iVar10 = local_1b0._12_4_;
              }
              local_1b0._8_8_ = local_1b0._8_8_ & 0xffffffff00000000;
              if (iVar10 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,4,0,(ForAnyElementType *)local_1b0,0,(int *)(local_1b0 + 0xc));
              }
              uVar6 = local_1b0._44_4_;
              local_1b0._48_8_ = 0xffffffff;
              local_1b0._40_8_ = (ulonglong)(uint)local_1b0._44_4_ << 0x20;
              if (0x80 < (uint)uVar6) {
                local_1b0._40_8_ = 0x8000000000;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_1b0 + 0x10),0);
              }
              if ((void *)local_1b0._32_8_ != (void *)0x0) {
                FMemory::Free((void *)local_1b0._32_8_);
              }
              this_02 = local_230;
              if ((FScriptContainerElement *)local_1b0._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_1b0._0_8_);
                this_02 = local_230;
              }
            }
            goto LAB_149b7a1dd;
          }
          FPCGMetadataDomain::Initialize(this_03,pFVar17);
          uVar19 = (ulonglong)local_120;
          puVar26 = puVar26 + 2;
          this_02 = local_230;
        }
      }
      if (local_128 != (undefined8 *)0x0) {
        FMemory::Free(local_128);
      }
      param_1 = local_108;
      FVar21.Data = (FScriptContainerElement *)local_1c0;
      pFVar18 = (FPCGTaggedData *)(local_108->OutputData).TaggedData.AllocatorInstance.Data;
      if (((pFVar18 <= local_1c0) &&
          (local_1c0 < pFVar18 + (local_108->OutputData).TaggedData.ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      iVar10 = (param_1->OutputData).TaggedData.ArrayNum;
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar10 + 1;
      pFVar18 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                           (longlong)iVar10 * 0x78),(FPCGTaggedData *)FVar21.Data);
      FPCGDataPtrWrapper::operator=(&pFVar18->Data,local_100);
      DestructItems<FString,int>
                ((FString *)local_228.ExtraNames.AllocatorInstance.Data,
                 local_228.ExtraNames.ArrayNum);
      TVar13 = local_240;
      if (local_228.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.ExtraNames.AllocatorInstance.Data);
        TVar13 = local_240;
      }
    }
    FVar21.Data = FVar21.Data + 0x78;
    uVar19 = (ulonglong)local_1e8;
  } while( true );
}

// ExecutionLoopMode @ 149b88b10

EPCGElementExecutionLoopMode __thiscall
FPCGDeleteAttributesElement::ExecutionLoopMode
          (FPCGDeleteAttributesElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149b98920

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
FPCGDeleteAttributesElement::SupportsBasePointDataInputs
          (FPCGDeleteAttributesElement *this,FPCGContext *param_1)

{
  return true;
}

