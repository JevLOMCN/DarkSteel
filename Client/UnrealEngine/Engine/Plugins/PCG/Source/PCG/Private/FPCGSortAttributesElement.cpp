// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 149c1df00

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
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGSortAttributesElement::ExecuteInternal(FPCGSortAttributesElement *this,FPCGContext *param_1)

{
  undefined1 *puVar1;
  UPCGNode *this_00;
  TObjectPtr<UPCGMetadata>_u_0 TVar2;
  FPCGTaggedData *pFVar3;
  code *pcVar4;
  longlong lVar5;
  <lambda_24> <Var6;
  <lambda_25> <Var7;
  ForAnyElementType FVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  UClass *pUVar14;
  UPCGSettings *pUVar15;
  TObjectPtr<UPCGSettings>_u_0 TVar16;
  TObjectPtr<UPCGMetadata>_u_0 this_01;
  FText *pFVar17;
  FString *pFVar18;
  FText *pFVar19;
  FTextFormat *pFVar20;
  UPCGMetadata *pUVar21;
  UPCGMetadata *this_02;
  ulonglong uVar22;
  FPCGMetadataInitializeParams *pFVar23;
  TObjectPtr<UPCGMetadata>_u_0 TVar24;
  FPCGTaggedData *pFVar25;
  uint uVar26;
  bool bVar27;
  undefined1 auStackY_3a8 [32];
  uint local_358;
  undefined1 local_350 [16];
  undefined8 local_340;
  TObjectPtr<UPCGSettings>_u_0 local_338;
  undefined1 local_330 [16];
  FPCGCrc local_320;
  TObjectPtr<UPCGMetadata>_u_0 local_318;
  TObjectPtr<UPCGSettings>_u_0 local_310;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_308;
  TObjectPtr<UPCGMetadata>_u_0 local_2f8;
  longlong local_2f0;
  FPCGAttributePropertySelector local_2e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_2a8;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  TArrayView<int_const_,int> local_258;
  TSharedPtr<FCulture,1> local_248;
  TSharedPtr<FCulture,1> local_238;
  FText local_228;
  FString local_218;
  FString local_208;
  FText local_1f8;
  FText local_1e8;
  FString local_1d8;
  FText local_1c8;
  FString local_1b8;
  FString local_1a8;
  FText local_198;
  FText local_188;
  FString local_178;
  FString local_168;
  FPCGMetadataInitializeParams local_158;
  FText local_130;
  FPCGInitializeFromDataParams local_118;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  FTextFormat local_a8;
  FText local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  FText local_58;
  FTextFormat local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_330._8_4_ = 0;
  bVar27 = -1 < CpuChannel->Enabled;
  local_318 = (TObjectPtr<UPCGMetadata>_u_0)param_1;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId53,"FPCGSortAttributesElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSortAttributes.cpp"
               ,0x35);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId53);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSortAttributes.cpp"
                         ,0x37,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar14 = UPCGSortAttributesSettings::StaticClass();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar14);
    if (bVar9) {
      local_338 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar16 = local_338;
    }
    else {
      local_338.DebugPtr = (UPCGSettings *)0x0;
      TVar16.DebugPtr = local_338.DebugPtr;
    }
    goto LAB_149c1e050;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar15 = UPCGNode::GetSettings(this_00), pUVar15 == (UPCGSettings *)0x0)) {
    pFVar25 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSortAttributesSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_330[0xc]);
    if (pFVar25 != (FPCGTaggedData *)0x0) {
      local_310.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar25->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_310.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c1e049;
        UE::GC::MarkAsReachable((UObject *)local_310.DebugPtr);
      }
      if (local_310.DebugPtr != (UPCGSettings *)0x0) {
        pUVar14 = UPCGSortAttributesSettings::StaticClass();
        bVar9 = FObjectPtr::IsA(&local_310.ObjectPtr,pUVar14);
        TVar16 = local_310;
        local_338 = local_310;
        if (bVar9) goto LAB_149c1e050;
      }
    }
  }
  else {
    pUVar15 = UPCGNode::GetSettings(this_00);
    TVar16.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar15);
    if (TVar16.DebugPtr != (UPCGSettings *)0x0) {
      local_338.DebugPtr = TVar16.DebugPtr;
      pUVar14 = UPCGSortAttributesSettings::StaticClass();
      iVar13 = (int)pUVar14->_padding_;
      if ((iVar13 <= *(int *)((TVar16.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar16.DebugPtr)->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
          &pUVar14->_padding_)) goto LAB_149c1e050;
    }
  }
LAB_149c1e049:
  local_338.DebugPtr = (UPCGSettings *)0x0;
  TVar16.DebugPtr = local_338.DebugPtr;
LAB_149c1e050:
  if ((TVar16.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSortAttributes.cpp"
                         ,0x3a,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_308,&PCGPinConstants::DefaultInputLabel);
  local_358 = 0;
  if (0 < local_308.ArrayNum) {
    local_2f0 = 0;
    uVar26 = 0;
    do {
      lVar5 = local_2f0;
      bVar9 = -1 < CpuChannel->Enabled;
      if (bVar9) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId65,"FPCGSortAttributesElement::InputLoop",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSortAttributes.cpp"
                   ,0x41);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId65);
      }
      uVar12 = 0;
      if ((int)local_358 < local_308.ArrayNum) {
        uVar12 = ~local_358 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      pFVar25 = (FPCGTaggedData *)(local_308.AllocatorInstance.Data + lVar5 * 0x78);
      TVar2.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar25->Data).Data.field0_0x0.DebugPtr;
      if ((UPCGBasePointData *)TVar2.DebugPtr == (UPCGBasePointData *)0x0)
      goto joined_r0x000149c1e9d7;
      FPCGAttributePropertyInputSelector::CopyAndFixLast
                ((FPCGAttributePropertyInputSelector *)(local_338.DebugPtr + 1),
                 (FPCGAttributePropertyInputSelector *)&local_2e8,(UPCGData *)TVar2.DebugPtr);
      PCGAttributeAccessorHelpers::CreateConstAccessor
                ((UPCGData *)local_350,(FPCGAttributePropertySelector *)TVar2.DebugPtr,
                 SUB81(&local_2e8,0));
      PCGAttributeAccessorHelpers::CreateConstKeys
                ((UPCGData *)local_330,(FPCGAttributePropertySelector *)TVar2.DebugPtr);
      if (((IPCGAttributeAccessor *)local_350._0_8_ == (IPCGAttributeAccessor *)0x0) ||
         ((IPCGAttributeAccessorKeys *)local_330._0_8_ == (IPCGAttributeAccessorKeys *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          local_238.Object = (FCulture *)0x0;
          local_238.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar17 = FText::AsNumber(&local_58,local_358,(FNumberFormattingOptions *)0x0,&local_238);
          pFVar18 = FPCGAttributePropertySelector::ToString(&local_2e8,&local_1d8,false);
          FText::FromString(&local_1c8,pFVar18);
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
          pFVar19 = FText::AsLocalizable_Advanced_LocText
                              (&local_188,L"PCGSortAttributesElement",L"InvalidAccessor",
                               L"Attribute \'{0}\' does not exist for input {1}.");
          pFVar20 = FTextFormat::FTextFormat(&local_a8,pFVar19,Default);
          pFVar17 = FText::Format<FText,FText>(&local_198,pFVar20,&local_1c8,pFVar17);
          FText::ToString(pFVar17);
          FPCGContext::GetTaskName(param_1,&local_1a8);
          FPCGContext::GetExecutionSourceName(param_1,&local_1b8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
          local_330._8_4_ = uVar26 & 0xfffffffc;
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
          if (local_198.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
          }
          if (local_188.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_238.SharedReferenceCount.ReferenceController);
        }
        if ((IPCGAttributeAccessorKeys *)local_330._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)*(longlong *)local_330._0_8_)(local_330._0_8_,1);
        }
        if ((IPCGAttributeAccessor *)local_350._0_8_ != (IPCGAttributeAccessor *)0x0) {
          (**(code **)*(longlong *)local_350._0_8_)(local_350._0_8_,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_2e8.ExtraNames.AllocatorInstance.Data,
                   local_2e8.ExtraNames.ArrayNum);
        if (local_2e8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.ExtraNames.AllocatorInstance.Data);
        }
        goto joined_r0x000149c1e9d7;
      }
      switch(*(short *)(local_350._0_8_ + 10)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 6:
      case 9:
      case 10:
      case 0xc:
        break;
      case 4:
        local_68 = 0;
        uStack_60 = 0;
        break;
      case 5:
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        break;
      case 7:
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
      default:
        goto switchD_149c1e233_caseD_8;
      case 0xb:
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        goto switchD_149c1e233_caseD_8;
      case 0xd:
        local_298 = 0;
        local_290 = 0;
        local_288 = 0;
        local_280 = 0;
        goto LAB_149c1e242;
      case 0xe:
        local_278 = 0;
        local_270 = 0;
        local_268 = 0;
        local_260 = 0;
        goto LAB_149c1e242;
      }
LAB_149c1e242:
      this_01.DebugPtr = (UPCGMetadata *)0x0;
      pUVar14 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      <Var7 = PCGAttributeAccessorHelpers::Private::DefaultStableCompareLessLambda;
      <Var6 = PCGAttributeAccessorHelpers::Private::DefaultIndexGetter;
      iVar13 = (int)pUVar14->_padding_;
      if ((*(int *)((TVar2.DebugPtr)->_padding_ + 0x38) < iVar13) ||
         (TVar24.ObjectPtr.field0_0x0 = TVar2.ObjectPtr.field0_0x0,
         (longlong *)
         *(undefined1 **)(*(longlong *)((TVar2.DebugPtr)->_padding_ + 0x30) + (longlong)iVar13 * 8)
         != &pUVar14->_padding_)) {
        TVar24.DebugPtr = this_01.DebugPtr;
      }
      if ((UPCGBasePointData *)TVar24.DebugPtr == (UPCGBasePointData *)0x0) {
        pUVar21 = (UPCGMetadata *)(**(code **)((TVar2.DebugPtr)->_padding_ + 800))(TVar2.DebugPtr);
        param_1 = (FPCGContext *)local_318;
        if (pUVar21 == (UPCGMetadata *)0x0) goto LAB_149c1e388;
        local_2f8.DebugPtr =
             (UPCGMetadata *)
             (**(code **)((TVar2.DebugPtr)->_padding_ + 0x310))(TVar2.DebugPtr,local_318.DebugPtr,0)
        ;
        this_02 = (UPCGMetadata *)
                  (**(code **)((local_2f8.DebugPtr)->_padding_ + 0x328))(local_2f8.DebugPtr);
        if (this_02 != (UPCGMetadata *)0x0) {
          local_350._8_8_ = (FPCGCrc *)0x0;
          local_340 = 0;
          uVar22 = UPCGMetadata::GetItemCountForChild(pUVar21);
          iVar13 = (int)uVar22;
          if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar22 & 0xffffffff);
          }
          if (local_340._4_4_ < iVar13) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar13,(ForAnyElementType *)(local_350 + 8),(int)local_340,
                       (int *)((longlong)&local_340 + 4));
          }
          local_320.Value = 0;
          local_320.bValid = false;
          local_320._5_3_ = 0;
          if (0 < (longlong)uVar22) {
            do {
              if ((((ulonglong)local_350._8_8_ <= &local_320) &&
                  (&local_320 < (FPCGCrc *)(local_350._8_8_ + (longlong)local_340._4_4_ * 8))) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar4 = (code *)swi(3);
                uVar10 = (*pcVar4)();
                return (bool)uVar10;
              }
              iVar13 = (int)local_340;
              if ((int)local_340 == local_340._4_4_) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)(local_350 + 8),
                                    (int *)((longlong)&local_340 + 4));
              }
              local_340 = CONCAT44(local_340._4_4_,iVar13 + 1);
              *(FPCGCrc *)(local_350._8_8_ + (longlong)iVar13 * 8) = local_320;
              local_320 = (FPCGCrc)((longlong)local_320 + 1);
            } while ((longlong)local_320 < (longlong)uVar22);
          }
          PCGAttributeAccessorHelpers::
          SortByAttribute<__int64,PCGAttributeAccessorHelpers::Private::<lambda_24>,PCGAttributeAccessorHelpers::Private::<lambda_25>_>
                    ((IPCGAttributeAccessor *)local_350._0_8_,
                     (IPCGAttributeAccessorKeys *)local_330._0_8_,
                     (TArray<__int64,TSizedDefaultAllocator<32>_> *)(local_350 + 8),
                     (char)local_338.DebugPtr[1]._padding_ == '\0',
                     PCGAttributeAccessorHelpers::Private::DefaultIndexGetter,
                     PCGAttributeAccessorHelpers::Private::DefaultStableCompareLessLambda);
          pUVar21 = (UPCGMetadata *)(**(code **)((TVar2.DebugPtr)->_padding_ + 800))(TVar2.DebugPtr)
          ;
          pFVar23 = FPCGMetadataInitializeParams::FPCGMetadataInitializeParams
                              (&local_158,pUVar21,
                               (TArray<__int64,TSizedDefaultAllocator<32>_> *)(local_350 + 8));
          UPCGMetadata::InitializeAsCopy(this_02,pFVar23);
          DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                    ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                     local_158.DomainInitializeParams.AllocatorInstance.Data,
                     local_158.DomainInitializeParams.ArrayNum);
          if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
              local_158.DomainInitializeParams.AllocatorInstance.Data !=
              (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
            FMemory::Free(local_158.DomainInitializeParams.AllocatorInstance.Data);
          }
          if (local_158.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.DomainMapping.AllocatorInstance.Data);
          }
          this_01 = local_2f8;
          if ((FPCGCrc *)local_350._8_8_ != (FPCGCrc *)0x0) {
            FMemory::Free((void *)local_350._8_8_);
            this_01 = local_2f8;
          }
          goto LAB_149c1e388;
        }
        bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7298268004301668460>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSortAttributes.cpp"
                            ,0x6c,"OutMetadata");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        if ((IPCGAttributeAccessorKeys *)local_330._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)*(longlong *)local_330._0_8_)(local_330._0_8_,1);
        }
        if ((IPCGAttributeAccessor *)local_350._0_8_ != (IPCGAttributeAccessor *)0x0) {
          (**(code **)*(longlong *)local_350._0_8_)(local_350._0_8_,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_2e8.ExtraNames.AllocatorInstance.Data,
                   local_2e8.ExtraNames.ArrayNum);
        if (local_2e8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.ExtraNames.AllocatorInstance.Data);
        }
        if (bVar9) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      else {
        lVar5 = local_338.DebugPtr[1]._padding_;
        iVar13 = (**(code **)(*(longlong *)local_330._0_8_ + 0x10))();
        PCGAttributeAccessorHelpers::
        SortKeyIndicesByAttribute<PCGAttributeAccessorHelpers::Private::<lambda_24>,PCGAttributeAccessorHelpers::Private::<lambda_25>_>
                  (&local_2a8,(IPCGAttributeAccessor *)local_350._0_8_,
                   (IPCGAttributeAccessorKeys *)local_330._0_8_,iVar13,(char)lVar5 == '\0',<Var6,
                   <Var7);
        this_01.DebugPtr = (UPCGMetadata *)FPCGContext::NewPointData_AnyThread(local_318.DebugPtr);
        FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                  (&local_118,(UPCGSpatialData *)TVar24.DebugPtr);
        local_118.bInheritSpatialData = false;
        UPCGSpatialData::InitializeFromDataWithParams
                  ((UPCGSpatialData *)this_01.DebugPtr,&local_118);
        iVar13 = local_2a8.ArrayNum;
        FVar8.Data = local_2a8.AllocatorInstance.Data;
        local_258.DataPtr = (int *)local_2a8.AllocatorInstance.Data;
        if ((local_2a8.ArrayNum < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        local_258.ArrayNum = iVar13;
        UPCGBasePointData::SetPoints
                  ((UPCGBasePointData *)TVar24.DebugPtr,(UPCGBasePointData *)this_01.DebugPtr,
                   &local_258,false);
        DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                  ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                   local_118.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data,
                   local_118.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
        if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
            local_118.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
            (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
          FMemory::Free(local_118.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                        Data);
        }
        if (local_118.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
        }
        param_1 = (FPCGContext *)local_318;
        if (FVar8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar8.Data);
          param_1 = (FPCGContext *)local_318;
        }
LAB_149c1e388:
        pFVar3 = *(FPCGTaggedData **)&(((UPCGMetadata *)param_1)->OtherParents).Elements.field_0x8;
        if (((pFVar3 <= pFVar25) &&
            (pFVar25 < pFVar3 + *(int *)&(((UPCGMetadata *)param_1)->OtherParents).Elements.
                                         field_0x14)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        iVar13 = *(int *)&(((UPCGMetadata *)param_1)->OtherParents).Elements.field_0x10;
        puVar1 = &(((UPCGMetadata *)param_1)->OtherParents).Elements.field_0x14;
        if (iVar13 == *(int *)puVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)
                                    &(((UPCGMetadata *)param_1)->OtherParents).Elements.field_0x8,
                              (int *)puVar1);
        }
        *(int *)&(((UPCGMetadata *)param_1)->OtherParents).Elements.field_0x10 = iVar13 + 1;
        pFVar25 = FPCGTaggedData::FPCGTaggedData
                            ((FPCGTaggedData *)
                             ((longlong)iVar13 * 0x78 +
                             *(longlong *)
                              &(((UPCGMetadata *)param_1)->OtherParents).Elements.field_0x8),pFVar25
                            );
        FPCGDataPtrWrapper::operator=(&pFVar25->Data,(UPCGData *)this_01.DebugPtr);
        if ((IPCGAttributeAccessorKeys *)local_330._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)*(longlong *)local_330._0_8_)(local_330._0_8_,1);
        }
        if ((IPCGAttributeAccessor *)local_350._0_8_ != (IPCGAttributeAccessor *)0x0) {
          (**(code **)*(longlong *)local_350._0_8_)(local_350._0_8_,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_2e8.ExtraNames.AllocatorInstance.Data,
                   local_2e8.ExtraNames.ArrayNum);
        if (local_2e8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.ExtraNames.AllocatorInstance.Data);
        }
joined_r0x000149c1e9d7:
        if (bVar9) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      local_358 = local_358 + 1;
      local_2f0 = local_2f0 + 1;
      uVar26 = local_330._8_4_;
    } while ((int)local_358 < local_308.ArrayNum);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_308.AllocatorInstance.Data,local_308.ArrayNum);
  if ((FPCGTaggedData *)local_308.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_308.AllocatorInstance.Data);
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
switchD_149c1e233_caseD_8:
  if (1 < (byte)LogPCG._0_1_) {
    local_248.Object = (FCulture *)0x0;
    local_248.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar17 = FText::AsNumber(&local_98,local_358,(FNumberFormattingOptions *)0x0,&local_248);
    pFVar18 = PCG::Private::GetTypeName(&local_178,*(short *)(local_350._0_8_ + 10));
    FText::FromString(&local_130,pFVar18);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    pFVar18 = FPCGAttributePropertySelector::ToString(&local_2e8,&local_168,false);
    FText::FromString(&local_228,pFVar18);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    pFVar19 = FText::AsLocalizable_Advanced_LocText
                        (&local_1e8,L"PCGSortAttributesElement",L"InvalidTypeAccessor",
                         L"Attribute \'{0}\' exists but is not of a comparable type ({1}) for input {2}."
                        );
    pFVar20 = FTextFormat::FTextFormat(&local_48,pFVar19,Default);
    pFVar17 = FText::Format<FText,FText,FText>(&local_1f8,pFVar20,&local_228,&local_130,pFVar17);
    FText::ToString(pFVar17);
    FPCGContext::GetTaskName(param_1,&local_208);
    FPCGContext::GetExecutionSourceName(param_1,&local_218);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    local_330._8_4_ = uVar26 & 0xfffffff3;
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    if (local_1f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
    }
    if (local_1e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248.SharedReferenceCount.ReferenceController);
  }
  if ((IPCGAttributeAccessorKeys *)local_330._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
    (**(code **)*(longlong *)local_330._0_8_)(local_330._0_8_,1);
  }
  if ((IPCGAttributeAccessor *)local_350._0_8_ != (IPCGAttributeAccessor *)0x0) {
    (**(code **)*(longlong *)local_350._0_8_)(local_350._0_8_,1);
  }
  DestructItems<FString,int>
            ((FString *)local_2e8.ExtraNames.AllocatorInstance.Data,local_2e8.ExtraNames.ArrayNum);
  if (local_2e8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.ExtraNames.AllocatorInstance.Data);
  }
  goto joined_r0x000149c1e9d7;
}

// ExecutionLoopMode @ 149c22920

EPCGElementExecutionLoopMode __thiscall
FPCGSortAttributesElement::ExecutionLoopMode(FPCGSortAttributesElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149c358c0

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
FPCGSortAttributesElement::SupportsBasePointDataInputs
          (FPCGSortAttributesElement *this,FPCGContext *param_1)

{
  return true;
}

