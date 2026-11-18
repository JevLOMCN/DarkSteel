// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149c0e550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGGetTagsElement::ExecuteInternal(FPCGGetTagsElement *this,FPCGContext *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  UPCGNode *this_00;
  UPCGMetadata *pUVar4;
  uint *puVar5;
  undefined1 *puVar6;
  TOptional<FString>_u_0 *pTVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  code *pcVar10;
  FPCGMetadataDomainID FVar11;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  UClass *pUVar16;
  UPCGSettings *pUVar17;
  FObjectPtr_u_0 FVar18;
  FObjectPtr_u_0 *pFVar19;
  UObject *pUVar20;
  UPCGParamData *pUVar21;
  FName *pFVar22;
  FPCGMetadataDomain *pFVar23;
  FPCGMetadataAttribute<FString> *this_01;
  FPCGMetadataAttribute<FString> *this_02;
  long64 lVar24;
  FScriptContainerElement *pFVar25;
  ulonglong uVar26;
  FPCGTaggedData *pFVar27;
  uint uVar28;
  ForAnyElementType FVar29;
  FPCGDataCollection *pFVar30;
  FPCGMetadataAttribute<FString> *pFVar31;
  undefined1 *puVar32;
  FPCGMetadataAttribute<FString> *pFVar33;
  uint *puVar34;
  TBitArray<FDefaultBitArrayAllocator> *pTVar35;
  ForAnyElementType FVar36;
  uint uVar37;
  TOptional<FString>_u_0 *pTVar38;
  bool bVar39;
  <lambda_1> local_res10;
  undefined1 local_res20 [8];
  FGCScopeGuard local_208;
  undefined1 local_207 [3];
  uint local_204;
  FObjectPtr_u_0 local_200;
  FPCGMetadataDomainID local_1f8;
  uint local_1e8;
  FObjectPtr_u_0 local_1e0;
  FPCGTaggedData *local_1d8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1d0;
  UPCGParamData *local_1c0;
  FString local_1b8;
  FString local_1a8;
  TObjectPtr<UObject> local_198;
  int local_190;
  UPCGParamData *local_188;
  FPCGDataCollection *local_180;
  FPCGTaggedData *local_178;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_170;
  uint uStack_168;
  uint uStack_164;
  undefined1 *local_160;
  undefined4 uStack_158;
  uint uStack_154;
  int local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  TOptional<FString>_u_0 local_108;
  TOptional<FString>_u_0 local_f8;
  TOptional<FString>_u_0 local_e8 [3];
  FName local_b8;
  FPCGMetadataDomainID local_b0;
  FName local_98;
  FPCGMetadataDomainID local_90;
  FName local_78;
  FName local_70;
  FString local_68 [2];
  undefined4 local_3c;
  
  bVar39 = -1 < CpuChannel->Enabled;
  if (bVar39) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId29,"UPCGGetTagsSettings::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetDataInfo.cpp"
               ,0x1d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId29);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetDataInfo.cpp"
                          ,0x1e,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    uVar14 = (*pcVar10)();
    return (bool)uVar14;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar17 = UPCGNode::GetSettings(this_00), pUVar17 == (UPCGSettings *)0x0)) {
      local_res10 = SUB81(param_1,0);
      pFVar19 = (FObjectPtr_u_0 *)
                TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetTagsSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10);
      if (pFVar19 != (FObjectPtr_u_0 *)0x0) {
        local_1e0 = (FObjectPtr_u_0)pFVar19->Handle;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UPCGSettings *)local_1e0.Handle != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable(local_1e0.Handle);
        }
        if ((UPCGSettings *)local_1e0.Handle != (UPCGSettings *)0x0) {
          pUVar16 = UPCGGetTagsSettings::StaticClass();
          bVar13 = FObjectPtr::IsA((FObjectPtr *)&local_1e0,pUVar16);
          if (bVar13) {
            local_200.Handle = local_1e0.Handle;
            goto LAB_149c0e705;
          }
        }
      }
    }
    else {
      pUVar17 = UPCGNode::GetSettings(this_00);
      FVar18.Handle = (UObject *)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar17);
      if ((UPCGSettings *)FVar18.Handle != (UPCGSettings *)0x0) {
        local_200.Handle = FVar18.Handle;
        pUVar16 = UPCGGetTagsSettings::StaticClass();
        iVar15 = (int)pUVar16->_padding_;
        if ((iVar15 <= *(int *)(*(longlong *)&(FVar18.Handle)->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&(FVar18.Handle)->field_0x10 + 0x30) + (longlong)iVar15 * 8
             ) == &pUVar16->_padding_)) goto LAB_149c0e705;
      }
    }
    local_200.Handle = (UObject *)0x0;
  }
  else {
    pUVar16 = UPCGGetTagsSettings::StaticClass();
    bVar13 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar16);
    if (bVar13) {
      local_200 = *(FObjectPtr_u_0 *)&(param_1->SettingsWithOverride).field0_0x0;
    }
    else {
      local_200.Handle = (UObject *)0x0;
    }
  }
LAB_149c0e705:
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_1d0,&PCGPinConstants::DefaultInputLabel);
  uVar26 = (ulonglong)local_1d0.ArrayNum;
  pFVar30 = &param_1->OutputData;
  pFVar27 = (FPCGTaggedData *)(local_1d0.AllocatorInstance.Data + uVar26 * 0x78);
  local_1e8 = local_1d0.ArrayNum;
  FVar36.Data = local_1d0.AllocatorInstance.Data;
  local_180 = pFVar30;
  local_178 = pFVar27;
  do {
    pFVar33 = (FPCGMetadataAttribute<FString> *)0x0;
    local_1d8 = (FPCGTaggedData *)FVar36.Data;
    if (local_1d0.ArrayNum != (uint)uVar26) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if ((FPCGTaggedData *)FVar36.Data == pFVar27) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum);
      if ((FPCGTaggedData *)local_1d0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_1d0.AllocatorInstance.Data);
      }
      if (bVar39) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    if ((((FPCGTaggedData *)FVar36.Data)->Data).Data.field0_0x0.DebugPtr != (UPCGData *)0x0) {
      bVar13 = IsInGameThread();
      if (bVar13) {
        pUVar20 = GetTransientPackageAsObject();
        pUVar21 = NewObject<UPCGParamData>(pUVar20);
        local_1c0 = pUVar21;
      }
      else {
        if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
           (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4331830188552749348>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar13)) {
          pcVar10 = (code *)swi(3);
          uVar14 = (*pcVar10)();
          return (bool)uVar14;
        }
        FGCScopeGuard::FGCScopeGuard(&local_208);
        pUVar20 = GetTransientPackageAsObject();
        pUVar21 = NewObject<UPCGParamData>(pUVar20);
        local_1c0 = pUVar21;
        FGCScopeGuard::~FGCScopeGuard(&local_208);
        if ((pUVar21 == (UPCGParamData *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                ,0x12a,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          uVar14 = (*pcVar10)();
          return (bool)uVar14;
        }
        local_188 = pUVar21;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar21 != (UPCGParamData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar21);
        }
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_198,(bool *)&local_188);
      }
      if (((pUVar21 == (UPCGParamData *)0x0) || (pUVar21->_padding_ == 0)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParamData && ParamData->Metadata",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetDataInfo.cpp"
                              ,0x2d,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar14 = (*pcVar10)();
        return (bool)uVar14;
      }
      iVar15 = (pFVar30->TaggedData).ArrayNum;
      piVar1 = &(pFVar30->TaggedData).ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)pFVar30,piVar1);
      }
      (pFVar30->TaggedData).ArrayNum = iVar15 + 1;
      pFVar27 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((pFVar30->TaggedData).AllocatorInstance.Data + (longlong)iVar15 * 0x78),
                           (FPCGTaggedData *)FVar36.Data);
      FPCGDataPtrWrapper::operator=(&pFVar27->Data,(UPCGData *)pUVar21);
      pUVar4 = (UPCGMetadata *)pUVar21->_padding_;
      local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8 = PCGMetadataDomainID::Default;
      local_1b8.Data.ArrayNum = 0;
      local_1b8.Data.ArrayMax = 0;
      pFVar22 = ::FName::FName(&local_78,"Attribute");
      FVar11 = local_1f8;
      local_b8 = *pFVar22;
      local_b0.Flag = local_1f8.Flag;
      local_b0._1_3_ = local_1f8._1_3_;
      local_b0.CustomFlag = local_1f8.CustomFlag;
      local_b0.DebugName = local_1f8.DebugName;
      local_1f8 = FVar11;
      pFVar23 = UPCGMetadata::FindOrCreateMetadataDomain(pUVar4,&local_b0);
      FVar29.Data = (FScriptContainerElement *)pFVar33;
      this_01 = pFVar33;
      if (pFVar23 != (FPCGMetadataDomain *)0x0) {
        this_01 = FPCGMetadataDomain::FindOrCreateAttribute<FString>
                            (pFVar23,local_b8,&local_1b8,false,false,true);
        FVar29.Data = local_1b8.Data.AllocatorInstance.Data;
      }
      if ((FPCGMetadataAttribute<FString> *)FVar29.Data != (FPCGMetadataAttribute<FString> *)0x0) {
        FMemory::Free(FVar29.Data);
      }
      this_02 = pFVar33;
      if ((char)((UPCGSettings *)(local_200.Handle + 5))->_padding_ != '\0') {
        pUVar4 = (UPCGMetadata *)pUVar21->_padding_;
        local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1f8 = PCGMetadataDomainID::Default;
        local_1a8.Data.ArrayNum = 0;
        local_1a8.Data.ArrayMax = 0;
        pFVar22 = ::FName::FName(&local_70,"Values");
        FVar11 = local_1f8;
        local_98 = *pFVar22;
        local_90.Flag = local_1f8.Flag;
        local_90._1_3_ = local_1f8._1_3_;
        local_90.CustomFlag = local_1f8.CustomFlag;
        local_90.DebugName = local_1f8.DebugName;
        local_1f8 = FVar11;
        pFVar23 = UPCGMetadata::FindOrCreateMetadataDomain(pUVar4,&local_90);
        FVar29.Data = (FScriptContainerElement *)pFVar33;
        if (pFVar23 != (FPCGMetadataDomain *)0x0) {
          this_02 = FPCGMetadataDomain::FindOrCreateAttribute<FString>
                              (pFVar23,local_98,&local_1a8,false,false,true);
          FVar29.Data = local_1a8.Data.AllocatorInstance.Data;
        }
        if ((FPCGMetadataAttribute<FString> *)FVar29.Data != (FPCGMetadataAttribute<FString> *)0x0)
        {
          FMemory::Free(FVar29.Data);
        }
      }
      local_170 = &((FPCGTaggedData *)FVar36.Data)->Tags;
      uStack_168 = 0;
      uVar28 = *(uint *)&(((FPCGTaggedData *)FVar36.Data)->Tags).Elements.field_0x28;
      local_160 = &(((FPCGTaggedData *)FVar36.Data)->Tags).Elements.field_0x10;
      uStack_164 = 1;
      uStack_154 = uStack_168;
      if (uVar28 != 0) {
        puVar5 = *(uint **)&(((FPCGTaggedData *)FVar36.Data)->Tags).Elements.field_0x20;
        puVar34 = (uint *)local_160;
        if (puVar5 != (uint *)0x0) {
          puVar34 = puVar5;
        }
        uVar37 = *puVar34;
        pFVar31 = pFVar33;
        while( true ) {
          uStack_168 = (uint)pFVar31;
          if (uVar37 != 0) break;
          uStack_168 = uStack_168 + 1;
          pFVar31 = (FPCGMetadataAttribute<FString> *)(ulonglong)uStack_168;
          pFVar33 = (FPCGMetadataAttribute<FString> *)(ulonglong)((int)pFVar33 + 0x20);
          uStack_154 = uVar28;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_168)
          goto LAB_149c0ea6e;
          uVar37 = puVar34[(int)uStack_168];
        }
        uStack_164 = -uVar37 & uVar37;
        uVar26 = (ulonglong)uStack_164 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_198.field0_0x0._4_4_ = (undefined4)lVar9;
        uStack_154 = local_198.field0_0x0._4_4_ + -1 + (int)pFVar33;
        if ((int)uVar28 < (int)uStack_154) {
          uStack_154 = uVar28;
        }
      }
LAB_149c0ea6e:
      uVar28 = *(uint *)&(((FPCGTaggedData *)FVar36.Data)->Tags).Elements.field_0x28;
      pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)
                &(((FPCGTaggedData *)FVar36.Data)->Tags).Elements.field_0x10;
      uStack_14c = local_3c;
      iStack_148 = *(int *)&(((FPCGTaggedData *)FVar36.Data)->Tags).Elements.field_0x8 -
                   *(int *)&(((FPCGTaggedData *)FVar36.Data)->Tags).Elements.field_0x34;
      uVar37 = uVar28 & 0xffffffe0;
      TStack_138._padding_ = CONCAT44(uStack_164,uStack_168);
      uStack_158 = 0xffffffff;
      TStack_138.CurrentBitIndex = uStack_154;
      TStack_138.UnvisitedBitMask = 0xffffffff;
      local_150 = (int)pFVar33;
      iVar15 = (int)uVar28 >> 5;
      TStack_138._28_4_ = local_3c;
      TStack_138.BaseBitIndex = local_150;
      uStack_118 = CONCAT44(uStack_144,iStack_148);
      local_1f8._0_8_ = pTVar35;
      local_204 = uVar28;
      local_140 = local_170;
      TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_160;
      if ((((int)uVar28 < 0) ||
          (*(int *)&(((FPCGTaggedData *)FVar36.Data)->Tags).Elements.field_0x28 < (int)uVar28)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar14 = (*pcVar10)();
        return (bool)uVar14;
      }
      uVar3 = *(uint *)&(((FPCGTaggedData *)FVar36.Data)->Tags).Elements.field_0x28;
      if (uVar28 != uVar3) {
        puVar6 = *(undefined1 **)&(((FPCGTaggedData *)FVar36.Data)->Tags).Elements.field_0x20;
        puVar32 = (undefined1 *)pTVar35;
        if (puVar6 != (undefined1 *)0x0) {
          puVar32 = puVar6;
        }
        uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar32 + (longlong)iVar15 * 4);
        while (uVar28 == 0) {
          iVar15 = iVar15 + 1;
          uVar37 = uVar37 + 0x20;
          local_204 = uVar3;
          uVar28 = uVar3;
          if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar15)
          goto LAB_149c0eb91;
          uVar28 = *(uint *)(puVar32 + (longlong)iVar15 * 4);
        }
        uVar26 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_190 = (int)lVar9;
        local_204 = local_190 + -1 + uVar37;
        uVar28 = local_204;
        if ((int)uVar3 < (int)local_204) {
          local_204 = uVar3;
          uVar28 = uVar3;
        }
      }
LAB_149c0eb91:
      while( true ) {
        pTVar12 = local_140;
        if (*(int *)&(local_140->Elements).field_0x8 - *(int *)&(local_140->Elements).field_0x34 !=
            (int)uStack_118) {
          local_207[0] = 0;
          `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_207);
        }
        if (((TStack_138.CurrentBitIndex == uVar28) && (TStack_138.Array == pTVar35)) &&
           (pFVar27 = local_178, pFVar30 = local_180,
           FVar36.Data = (FScriptContainerElement *)local_1d8, pTVar12 == &local_1d8->Tags)) break;
        PCG::Private::ParseTag
                  ((FParseTagResult *)&local_108.TypedValue,
                   (FString *)
                   (*(longlong *)&pTVar12->Elements + (longlong)TStack_138.CurrentBitIndex * 0x18));
        if (1 < local_108.TypedValue.Data.ArrayNum) {
          lVar24 = UPCGMetadata::AddEntry((UPCGMetadata *)local_1c0->_padding_,-1);
          pTVar38 = &local_f8;
          if (local_f8.TypedValue.Data.ArrayMax == -1) {
            pTVar38 = &local_108;
          }
          if ((lVar24 == -1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ItemKey != PCGInvalidEntryKey",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                                  ,0x24b,L""), bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar14 = (*pcVar10)();
            return (bool)uVar14;
          }
          iVar15 = FPCGMetadataAttribute<FString>::FindValue<FString,0>
                             (this_01,&pTVar38->TypedValue);
          if (iVar15 == -2) {
            AcquireSRWLockExclusive((PSRWLOCK)&this_01->ValueLock);
            pTVar2 = &this_01->Values;
            pTVar7 = (TOptional<FString>_u_0 *)(pTVar2->AllocatorInstance).Data;
            if (((pTVar7 <= pTVar38) &&
                (pTVar38 < (TOptional<FString>_u_0 *)
                           (&pTVar7->bIsSet + (longlong)(this_01->Values).ArrayMax * 0x10))) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar10 = (code *)swi(3);
              uVar14 = (*pcVar10)();
              return (bool)uVar14;
            }
            iVar15 = (this_01->Values).ArrayNum;
            piVar1 = &(this_01->Values).ArrayMax;
            if (iVar15 == *piVar1) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar2->AllocatorInstance,piVar1);
            }
            (this_01->Values).ArrayNum = iVar15 + 1;
            ::FString::FString((FString *)
                               ((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 0x10),
                               &pTVar38->TypedValue);
            iVar15 = this_01->ValueKeyOffset + iVar15;
            ReleaseSRWLockExclusive((PSRWLOCK)&this_01->ValueLock);
          }
          FPCGMetadataAttributeBase::SetValueFromValueKey
                    ((FPCGMetadataAttributeBase *)this_01,lVar24,iVar15,false);
          if (this_02 != (FPCGMetadataAttribute<FString> *)0x0) {
            if (local_e8[0].TypedValue.Data.ArrayMax == -1) {
              pFVar25 = (FScriptContainerElement *)::FString::FString(local_68,"true");
              if ((lVar24 == -1) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ItemKey != PCGInvalidEntryKey",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                                      ,0x24b,L""), bVar13)) {
                pcVar10 = (code *)swi(3);
                uVar14 = (*pcVar10)();
                return (bool)uVar14;
              }
              iVar15 = FPCGMetadataAttribute<FString>::FindValue<FString,0>
                                 (this_02,(FString *)pFVar25);
              if (iVar15 == -2) {
                AcquireSRWLockExclusive((PSRWLOCK)&this_02->ValueLock);
                pTVar2 = &this_02->Values;
                pFVar8 = (pTVar2->AllocatorInstance).Data;
                if (((pFVar8 <= pFVar25) &&
                    (pFVar25 < pFVar8 + (longlong)(this_02->Values).ArrayMax * 0x10)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar10 = (code *)swi(3);
                  uVar14 = (*pcVar10)();
                  return (bool)uVar14;
                }
                iVar15 = (this_02->Values).ArrayNum;
                piVar1 = &(this_02->Values).ArrayMax;
                if (iVar15 == *piVar1) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&pTVar2->AllocatorInstance,piVar1);
                }
                (this_02->Values).ArrayNum = iVar15 + 1;
                ::FString::FString((FString *)
                                   ((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 0x10),
                                   (FString *)pFVar25);
                iVar15 = this_02->ValueKeyOffset + iVar15;
                ReleaseSRWLockExclusive((PSRWLOCK)&this_02->ValueLock);
              }
              FPCGMetadataAttributeBase::SetValueFromValueKey
                        ((FPCGMetadataAttributeBase *)this_02,lVar24,iVar15,false);
              if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
              }
            }
            else {
              if ((lVar24 == -1) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ItemKey != PCGInvalidEntryKey",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                                      ,0x24b,L""), bVar13)) {
                pcVar10 = (code *)swi(3);
                uVar14 = (*pcVar10)();
                return (bool)uVar14;
              }
              iVar15 = FPCGMetadataAttribute<FString>::FindValue<FString,0>
                                 (this_02,&local_e8[0].TypedValue);
              if (iVar15 == -2) {
                AcquireSRWLockExclusive((PSRWLOCK)&this_02->ValueLock);
                pTVar2 = &this_02->Values;
                pTVar38 = (TOptional<FString>_u_0 *)(pTVar2->AllocatorInstance).Data;
                if (((pTVar38 <= local_e8) &&
                    (local_e8 <
                     (TOptional<FString>_u_0 *)
                     (&pTVar38->bIsSet + (longlong)(this_02->Values).ArrayMax * 0x10))) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar10 = (code *)swi(3);
                  uVar14 = (*pcVar10)();
                  return (bool)uVar14;
                }
                iVar15 = (this_02->Values).ArrayNum;
                piVar1 = &(this_02->Values).ArrayMax;
                if (iVar15 == *piVar1) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&pTVar2->AllocatorInstance,piVar1);
                }
                (this_02->Values).ArrayNum = iVar15 + 1;
                ::FString::FString((FString *)
                                   ((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 0x10),
                                   &local_e8[0].TypedValue);
                iVar15 = this_02->ValueKeyOffset + iVar15;
                ReleaseSRWLockExclusive((PSRWLOCK)&this_02->ValueLock);
              }
              FPCGMetadataAttributeBase::SetValueFromValueKey
                        ((FPCGMetadataAttributeBase *)this_02,lVar24,iVar15,false);
            }
          }
          pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)local_1f8._0_8_;
        }
        if ((local_e8[0].TypedValue.Data.ArrayMax != -1) &&
           ((FScriptContainerElement *)local_e8[0]._0_8_ != (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_e8[0]._0_8_);
        }
        if ((local_f8.TypedValue.Data.ArrayMax != -1) &&
           (local_f8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_f8.TypedValue.Data.AllocatorInstance.Data);
        }
        if (local_108.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_108.TypedValue.Data.AllocatorInstance.Data);
        }
        TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
        uVar28 = local_204;
      }
    }
    uVar26 = (ulonglong)local_1e8;
    FVar36.Data = FVar36.Data + 0x78;
  } while( true );
}

// ExecutionLoopMode @ 149c22870

EPCGElementExecutionLoopMode __thiscall
FPCGGetTagsElement::ExecutionLoopMode(FPCGGetTagsElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149c35720

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
FPCGGetTagsElement::SupportsBasePointDataInputs(FPCGGetTagsElement *this,FPCGContext *param_1)

{
  return true;
}

