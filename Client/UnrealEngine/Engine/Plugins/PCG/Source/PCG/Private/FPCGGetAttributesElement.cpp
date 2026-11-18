// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149c09640

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
FPCGGetAttributesElement::ExecuteInternal(FPCGGetAttributesElement *this,FPCGContext *param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UPCGNode *this_00;
  UPCGData *pUVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  code *pcVar7;
  FPCGMetadataDomainID FVar8;
  FPCGMetadataAttribute<FString> *this_01;
  longlong lVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  UClass *pUVar14;
  UPCGSettings *pUVar15;
  TObjectPtr<UPCGSettings>_u_0 TVar16;
  UPCGMetadata *pUVar17;
  UObject *pUVar18;
  UPCGParamData *pUVar19;
  UEnum *pUVar20;
  FName *pFVar21;
  FPCGMetadataDomain *pFVar22;
  FPCGMetadataAttribute<FName> *pFVar23;
  long64 lVar24;
  FName FVar25;
  ulonglong uVar26;
  ForAnyElementType FVar27;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar28;
  FPCGMetadataAttributeBase *pFVar29;
  FPCGTaggedData *pFVar30;
  uint uVar31;
  FPCGMetadataAttribute<FName> *pFVar32;
  bool bVar33;
  <lambda_1> local_res10;
  undefined1 local_res20 [8];
  FGCScopeGuard local_248 [8];
  TObjectPtr<UPCGSettings>_u_0 local_240;
  FPCGMetadataAttribute<FName> *local_238;
  FName local_230;
  undefined1 local_228 [16];
  TArray<FName,TSizedDefaultAllocator<32>_> local_218;
  uint local_208;
  TObjectPtr<UPCGSettings>_u_0 local_200;
  FPCGMetadataAttribute<FName> *local_1f8;
  FPCGMetadataAttribute<FString> *local_1f0;
  FPCGTaggedData *local_1e8;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_1e0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1d0;
  FPCGMetadataAttributeBase *local_1c0;
  FName local_1b8;
  FName local_1b0;
  longlong local_1a8;
  UPCGParamData *local_1a0;
  FString local_198;
  FString local_188;
  UPCGParamData *local_178;
  UEnum *local_170;
  UPCGMetadata *local_168;
  TObjectPtr<UObject> local_160;
  FString *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FName local_148;
  FPCGMetadataDomainID local_140;
  FName local_128;
  FPCGMetadataDomainID local_120;
  FName local_108;
  FPCGMetadataDomainID local_100;
  FName local_e8;
  FName local_e0;
  undefined1 local_d8 [8];
  FName local_d0;
  TArrayView<FString,int> local_c8;
  FName local_b8;
  FPCGMetadataDomainID FStack_b0;
  FPCGAttributeIdentifier local_98;
  FPCGAttributeAccessorKeysEntries local_78;
  
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId98,"UPCGGetTagsSettings::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetDataInfo.cpp"
               ,0x62);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId98);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetDataInfo.cpp"
                          ,99,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar15 = UPCGNode::GetSettings(this_00), pUVar15 == (UPCGSettings *)0x0)) {
      local_res10 = SUB81(param_1,0);
      pFVar30 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetAttributesSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10);
      if (pFVar30 != (FPCGTaggedData *)0x0) {
        local_200.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar30->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_200.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_200.DebugPtr);
        }
        if (local_200.DebugPtr != (UPCGSettings *)0x0) {
          pUVar14 = UPCGGetAttributesSettings::StaticClass();
          bVar10 = FObjectPtr::IsA(&local_200.ObjectPtr,pUVar14);
          if (bVar10) {
            local_240.DebugPtr = local_200.DebugPtr;
            TVar16 = local_200;
            goto LAB_149c09805;
          }
        }
      }
    }
    else {
      pUVar15 = UPCGNode::GetSettings(this_00);
      TVar16.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar15);
      if (TVar16.DebugPtr != (UPCGSettings *)0x0) {
        local_240.DebugPtr = TVar16.DebugPtr;
        pUVar14 = UPCGGetAttributesSettings::StaticClass();
        iVar12 = (int)pUVar14->_padding_;
        if ((iVar12 <= *(int *)((TVar16.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar16.DebugPtr)->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
            &pUVar14->_padding_)) goto LAB_149c09805;
      }
    }
    local_240.DebugPtr = (UPCGSettings *)0x0;
    TVar16.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar14 = UPCGGetAttributesSettings::StaticClass();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar14);
    if (bVar10) {
      local_240 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar16 = local_240;
    }
    else {
      local_240.DebugPtr = (UPCGSettings *)0x0;
      TVar16.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_149c09805:
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_1d0,&PCGPinConstants::DefaultInputLabel);
  uVar26 = (ulonglong)local_1d0.ArrayNum;
  pFVar29 = (FPCGMetadataAttributeBase *)&param_1->OutputData;
  pFVar30 = (FPCGTaggedData *)(local_1d0.AllocatorInstance.Data + uVar26 * 0x78);
  local_208 = local_1d0.ArrayNum;
  FVar27.Data = local_1d0.AllocatorInstance.Data;
  local_1e8 = pFVar30;
  local_1c0 = pFVar29;
  do {
    pFVar32 = (FPCGMetadataAttribute<FName> *)0x0;
    local_228._8_8_ = FVar27.Data;
    if (local_1d0.ArrayNum != (uint)uVar26) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if ((FPCGTaggedData *)FVar27.Data == pFVar30) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum);
      if ((FPCGTaggedData *)local_1d0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_1d0.AllocatorInstance.Data);
      }
      if (bVar33) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    pUVar4 = (((FPCGTaggedData *)FVar27.Data)->Data).Data.field0_0x0.DebugPtr;
    if ((pUVar4 != (UPCGData *)0x0) &&
       (pUVar17 = (UPCGMetadata *)(**(code **)(pUVar4->_padding_ + 800))(), pFVar30 = local_1e8,
       local_168 = pUVar17, pUVar17 != (UPCGMetadata *)0x0)) {
      bVar10 = IsInGameThread();
      if (bVar10) {
        pUVar18 = GetTransientPackageAsObject();
        pUVar19 = NewObject<UPCGParamData>(pUVar18);
        local_1a0 = pUVar19;
      }
      else {
        if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
           (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4331830188552749348>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        FGCScopeGuard::FGCScopeGuard(local_248);
        pUVar18 = GetTransientPackageAsObject();
        pUVar19 = NewObject<UPCGParamData>(pUVar18);
        local_1a0 = pUVar19;
        FGCScopeGuard::~FGCScopeGuard(local_248);
        if ((pUVar19 == (UPCGParamData *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                ,0x12a,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        local_178 = pUVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar19 != (UPCGParamData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar19);
        }
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_160,(bool *)&local_178);
        FVar27.Data = (FScriptContainerElement *)local_228._8_8_;
      }
      if (((pUVar19 == (UPCGParamData *)0x0) || (pUVar19->_padding_ == 0)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParamData && ParamData->Metadata",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetDataInfo.cpp"
                              ,0x79,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      iVar12 = *(int *)&pFVar29->EntryToValueKeyMap;
      piVar1 = (int *)&(pFVar29->EntryToValueKeyMap).field_0x4;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)pFVar29,piVar1);
      }
      *(int *)&pFVar29->EntryToValueKeyMap = iVar12 + 1;
      pFVar30 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)
                             &pFVar29->_padding_)->AllocatorInstance).Data + (longlong)iVar12 * 0x78
                           ),(FPCGTaggedData *)FVar27.Data);
      FPCGDataPtrWrapper::operator=(&pFVar30->Data,(UPCGData *)pUVar19);
      local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.ArrayNum = 0;
      local_218.ArrayMax = 0;
      local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e0.ArrayNum = 0;
      local_1e0.ArrayMax = 0;
      UPCGMetadata::GetAttributes(pUVar17,&local_218,&local_1e0);
      if ((local_218.ArrayNum != local_1e0.ArrayNum) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeNames.Num() == AttributeTypes.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetDataInfo.cpp"
                              ,0x81,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      pUVar20 = StaticEnum<enum_EPCGMetadataTypes>();
      FVar8 = PCGMetadataDomainID::Default;
      pUVar17 = (UPCGMetadata *)pUVar19->_padding_;
      local_1b8.ComparisonIndex.Value = 0;
      local_1b8.Number = 0;
      local_170 = pUVar20;
      pFVar21 = ::FName::FName(&local_d0,"Attribute");
      local_148 = *pFVar21;
      local_140 = FVar8;
      pFVar22 = UPCGMetadata::FindOrCreateMetadataDomain(pUVar17,&local_140);
      pFVar23 = pFVar32;
      if (pFVar22 != (FPCGMetadataDomain *)0x0) {
        pFVar23 = FPCGMetadataDomain::FindOrCreateAttribute<FName>
                            (pFVar22,local_148,&local_1b8,false,false,true);
      }
      FVar8 = PCGMetadataDomainID::Default;
      local_238 = (FPCGMetadataAttribute<FName> *)0x0;
      local_1f8 = pFVar23;
      if ((pUVar20 != (UEnum *)0x0) && ((char)TVar16.DebugPtr[1]._padding_ != '\0')) {
        pUVar17 = (UPCGMetadata *)pUVar19->_padding_;
        local_1b0.ComparisonIndex.Value = 0;
        local_1b0.Number = 0;
        pFVar21 = ::FName::FName(&local_e8,"Type");
        local_128 = *pFVar21;
        local_120 = FVar8;
        pFVar22 = UPCGMetadata::FindOrCreateMetadataDomain(pUVar17,&local_120);
        if (pFVar22 == (FPCGMetadataDomain *)0x0) {
          local_238 = (FPCGMetadataAttribute<FName> *)0x0;
        }
        else {
          local_238 = FPCGMetadataDomain::FindOrCreateAttribute<FName>
                                (pFVar22,local_128,&local_1b0,false,false,true);
        }
      }
      FVar8 = PCGMetadataDomainID::Default;
      local_1f0 = (FPCGMetadataAttribute<FString> *)0x0;
      if (*(char *)((longlong)&TVar16.DebugPtr[1]._padding_ + 1) != '\0') {
        pUVar17 = (UPCGMetadata *)pUVar19->_padding_;
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
        pFVar21 = ::FName::FName(&local_e0,"DefaultValue");
        local_108 = *pFVar21;
        local_100 = FVar8;
        pFVar22 = UPCGMetadata::FindOrCreateMetadataDomain(pUVar17,&local_100);
        if (pFVar22 == (FPCGMetadataDomain *)0x0) {
          local_1f0 = (FPCGMetadataAttribute<FString> *)0x0;
          FVar27.Data = (FScriptContainerElement *)pFVar32;
        }
        else {
          local_1f0 = FPCGMetadataDomain::FindOrCreateAttribute<FString>
                                (pFVar22,local_108,&local_188,false,false,true);
          FVar27.Data = local_188.Data.AllocatorInstance.Data;
        }
        if ((FPCGMetadataAttribute<FName> *)FVar27.Data != (FPCGMetadataAttribute<FName> *)0x0) {
          FMemory::Free(FVar27.Data);
        }
      }
      local_1a8 = 0;
      if (0 < local_218.ArrayNum) {
        pTVar28 = &pFVar23->Values;
        do {
          lVar9 = local_1a8;
          uVar31 = (uint)pFVar32;
          uVar13 = 0;
          if ((int)uVar31 < local_218.ArrayNum) {
            uVar13 = ~uVar31 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          local_230 = *(FName *)(local_218.AllocatorInstance.Data + lVar9 * 8);
          uVar13 = 0;
          if ((int)uVar31 < local_1e0.ArrayNum) {
            uVar13 = ~uVar31 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          lVar24 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar19->_padding_,-1);
          if ((lVar24 == -1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ItemKey != PCGInvalidEntryKey",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                                  ,0x24b,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          AcquireSRWLockExclusive((PSRWLOCK)&pFVar23->ValueLock);
          pFVar21 = (FName *)(pTVar28->AllocatorInstance).Data;
          if (((pFVar21 <= &local_230) && (&local_230 < pFVar21 + (pFVar23->Values).ArrayMax)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          iVar12 = (pFVar23->Values).ArrayNum;
          if (iVar12 == (pFVar23->Values).ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&pTVar28->AllocatorInstance,&(pFVar23->Values).ArrayMax);
          }
          pFVar5 = (pTVar28->AllocatorInstance).Data;
          (pFVar23->Values).ArrayNum = iVar12 + 1;
          *(FName *)(pFVar5 + (longlong)iVar12 * 8) = local_230;
          iVar3 = local_1f8->ValueKeyOffset;
          ReleaseSRWLockExclusive((PSRWLOCK)&pFVar23->ValueLock);
          FPCGMetadataAttributeBase::SetValueFromValueKey
                    ((FPCGMetadataAttributeBase *)local_1f8,lVar24,iVar3 + iVar12,false);
          pFVar32 = local_238;
          if ((local_238 != (FPCGMetadataAttribute<FName> *)0x0) && (local_170 != (UEnum *)0x0)) {
            FVar25 = UEnum::GetNameByValue(local_170,(long64)local_d8);
            if ((lVar24 == -1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ItemKey != PCGInvalidEntryKey",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                                    ,0x24b,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            AcquireSRWLockExclusive((PSRWLOCK)&pFVar32->ValueLock);
            pTVar2 = &pFVar32->Values;
            FVar6 = (FName)(pTVar2->AllocatorInstance).Data;
            if ((((ulonglong)FVar6 <= (ulonglong)FVar25) &&
                ((ulonglong)FVar25 <
                 (ulonglong)((longlong)FVar6 + (longlong)(pFVar32->Values).ArrayMax * 8))) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            iVar12 = (pFVar32->Values).ArrayNum;
            piVar1 = &(pFVar32->Values).ArrayMax;
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&pTVar2->AllocatorInstance,piVar1);
            }
            pFVar5 = (pTVar2->AllocatorInstance).Data;
            (pFVar32->Values).ArrayNum = iVar12 + 1;
            *(undefined8 *)(pFVar5 + (longlong)iVar12 * 8) = *(undefined8 *)FVar25;
            iVar3 = pFVar32->ValueKeyOffset;
            ReleaseSRWLockExclusive((PSRWLOCK)&pFVar32->ValueLock);
            FPCGMetadataAttributeBase::SetValueFromValueKey
                      ((FPCGMetadataAttributeBase *)pFVar32,lVar24,iVar3 + iVar12,false);
          }
          this_01 = local_1f0;
          if (local_1f0 != (FPCGMetadataAttribute<FString> *)0x0) {
            FStack_b0 = PCGMetadataDomainID::Default;
            FVar8 = FStack_b0;
            local_b8 = local_230;
            FStack_b0._0_8_ = PCGMetadataDomainID::Default._0_8_;
            local_98.Name = local_230;
            local_98.MetadataDomain.Flag = FStack_b0.Flag;
            local_98.MetadataDomain._1_3_ = FStack_b0._1_3_;
            local_98.MetadataDomain.CustomFlag = FStack_b0.CustomFlag;
            local_98.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
            FStack_b0 = FVar8;
            pUVar17 = (UPCGMetadata *)UPCGMetadata::GetConstAttribute(local_168,&local_98);
            PCGAttributeAccessorHelpers::CreateConstAccessor
                      ((FPCGMetadataAttributeBase *)local_228,pUVar17,SUB81(local_168,0));
            FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_78,-1);
            local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_198.Data.ArrayNum = 0;
            local_198.Data.ArrayMax = 0;
            if ((IPCGAttributeAccessor *)local_228._0_8_ != (IPCGAttributeAccessor *)0x0) {
              uStack_150 = 1;
              local_c8._12_4_ = uStack_14c;
              local_c8.ArrayNum = 1;
              local_158 = &local_198;
              local_c8.DataPtr = &local_198;
              bVar10 = IPCGAttributeAccessor::GetRange<FString>
                                 ((IPCGAttributeAccessor *)local_228._0_8_,&local_c8,0,
                                  (IPCGAttributeAccessorKeys *)&local_78,
                                  AllowBroadcastAndConstructible);
              if (bVar10) {
                FPCGMetadataAttribute<FString>::SetValue(this_01,lVar24,&local_198);
              }
              if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.Data.AllocatorInstance.Data);
              }
            }
            if (local_78.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_78.ExtractedEntries.AllocatorInstance.Data);
            }
            if ((IPCGAttributeAccessor *)local_228._0_8_ != (IPCGAttributeAccessor *)0x0) {
              (**(code **)*(longlong *)local_228._0_8_)();
            }
          }
          pFVar32 = (FPCGMetadataAttribute<FName> *)(ulonglong)(uVar31 + 1);
          local_1a8 = local_1a8 + 1;
          pUVar19 = local_1a0;
        } while ((int)(uVar31 + 1) < local_218.ArrayNum);
      }
      if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.AllocatorInstance.Data);
      }
      FVar27.Data = (FScriptContainerElement *)local_228._8_8_;
      pFVar29 = local_1c0;
      pFVar30 = local_1e8;
      TVar16 = local_240;
      if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.AllocatorInstance.Data);
        FVar27.Data = (FScriptContainerElement *)local_228._8_8_;
        pFVar29 = local_1c0;
        pFVar30 = local_1e8;
        TVar16 = local_240;
      }
    }
    uVar26 = (ulonglong)local_208;
    FVar27.Data = FVar27.Data + 0x78;
  } while( true );
}

// ExecutionLoopMode @ 149c22850

EPCGElementExecutionLoopMode __thiscall
FPCGGetAttributesElement::ExecutionLoopMode(FPCGGetAttributesElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149c35700

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
FPCGGetAttributesElement::SupportsBasePointDataInputs
          (FPCGGetAttributesElement *this,FPCGContext *param_1)

{
  return true;
}

