// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 19

// <lambda_invoker_cdecl> @ 149b33120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
`FPCGDataFromActorElement::ExecuteInternal'::__l22::<lambda_1>::<lambda_invoker_cdecl>
          (AActor *param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 149b33140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
`FPCGDataFromActorElement::ExecuteInternal'::__l22::<lambda_3>::<lambda_invoker_cdecl>
          (AActor *param_1)

{
  return true;
}

// operator()<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 149b34770

void __thiscall
`FPCGDataFromActorElement::CreateReferenceData'::__l2::<lambda_1>::
operator()<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,long64 param_2)

{
  FName *pFVar1;
  int iVar2;
  longlong *plVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  int iVar8;
  longlong *plVar9;
  FName *pFVar10;
  undefined1 local_res10 [16];
  undefined4 local_res20;
  undefined4 local_res24;
  FName local_98 [2];
  FParseTagResult local_88;
  
  pFVar10 = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar10 + iVar2;
  do {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar10 == pFVar1) {
      return;
    }
    PCG::Private::FParseTagResult::FParseTagResult(&local_88,*pFVar10);
    plVar3 = *(longlong **)((longlong)this + 8);
    iVar8 = local_88.Attribute.Data.ArrayNum + -1;
    if (local_88.Attribute.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    pFVar7 = ::FName::FName(local_98,iVar8,(wchar_t *)local_88.Attribute.Data.AllocatorInstance.Data
                            ,FNAME_Add);
    FVar4 = *pFVar7;
    uVar6 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar9 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar3[8];
      }
      iVar8 = *(int *)((longlong)plVar9 +
                      (ulonglong)((int)plVar3[9] - 1U & FVar4.Number + uVar6) * 4);
      if (iVar8 != -1) {
        do {
          if (*(FName *)(*plVar3 + (longlong)iVar8 * 0x10) == FVar4) {
            **(undefined1 **)((longlong)this + 0x10) = 1;
            goto LAB_149b3489f;
          }
          iVar8 = *(int *)(*plVar3 + 8 + (longlong)iVar8 * 0x10);
        } while (iVar8 != -1);
      }
    }
    local_res24 = 0;
    local_res20 = 0xffffffff;
    bVar5 = PCG::Private::SetAttributeFromTag
                      (&local_88,*(UPCGMetadata **)this,param_2,CreateAttribute,
                       (TOptional<FName>)&local_res20);
    if (bVar5) {
      **(byte **)((longlong)this + 0x18) =
           **(byte **)((longlong)this + 0x18) |
           local_88.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax != -1;
    }
LAB_149b3489f:
    if ((local_88.Value.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_88.Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_88.Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data);
    }
    if ((local_88.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_88.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_88.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance.
                            Data);
    }
    if (local_88.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Attribute.Data.AllocatorInstance.Data);
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// operator() @ 149b5e1c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
`FPCGDataFromActorElement::ProcessActor'::__l22::<lambda_1>::operator()
          (void *this,UPCGComponent *param_1)

{
  longlong lVar1;
  UPCGComponent *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UPCGComponent *pUVar7;
  
  lVar1 = *(longlong *)this;
  pUVar2 = *(UPCGComponent **)((longlong)this + 0x10);
  lVar3 = *(longlong *)((longlong)this + 8);
  if (((lVar1 == 0) || (lVar3 == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context && Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                         ,0x25d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  bVar5 = FPCGComponentSelectorSettings::FilterComponent
                    ((FPCGComponentSelectorSettings *)(lVar1 + 0x2a8),(UActorComponent *)param_1);
  if ((((bVar5) && (param_1 != (UPCGComponent *)0x0)) &&
      ((pUVar7 = UPCGComponent::GetOriginalComponent(param_1), pUVar7 != (UPCGComponent *)0x0 &&
       (pUVar7 != pUVar2)))) &&
     ((*(char *)(lVar3 + 0x121) == '\0' || (pUVar7->_padding_ != pUVar2->_padding_)))) {
    return false;
  }
  return true;
}

// operator() @ 149b5f9b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataCollection * __thiscall
`FPCGDataFromActorElement::ProcessActor'::__l2::<lambda_2>::operator()
          (void *this,FPCGDataCollection *__return_storage_ptr__,AActor *param_1,
          EPCGDataType param_2,bool param_3)

{
  int *piVar1;
  TArray<FPCGCrc,TSizedDefaultAllocator<32>_> *pTVar2;
  FPCGContext *this_00;
  bool bVar3;
  ForAnyElementType FVar4;
  FPCGModule *pFVar5;
  FString *pFVar6;
  int iVar7;
  longlong lVar8;
  FString local_98;
  FString local_88;
  FPCGGetDataFunctionRegistryParams local_78;
  FPCGGetDataFunctionRegistryOutput local_60;
  
  bVar3 = false;
  local_78.SourceComponent = *(UPCGComponent **)this;
  local_78.ComponentSelector =
       (FPCGComponentSelectorSettings *)(*(longlong *)((longlong)this + 8) + 0x2a8);
  local_78.bAddActorTags = true;
  local_78.bParseActor = param_3;
  local_78.bIgnorePCGGeneratedComponents = *(bool *)(*(longlong *)((longlong)this + 0x10) + 0x189);
  local_60.Collection.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Collection.TaggedData.ArrayNum = 0;
  local_60.Collection.TaggedData.ArrayMax = 0;
  local_60.Collection.bCancelExecutionOnEmpty = false;
  local_60.Collection.bCancelExecution = false;
  local_60.Collection.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Collection.DataCrcs.ArrayNum = 0;
  local_60.Collection.DataCrcs.ArrayMax = 0;
  local_60.Collection.InactiveOutputPinBitmask = 0;
  local_60.bSanitizedTagAttributeNames = false;
  local_78.DataTypeFilter = param_2;
  pFVar5 = FPCGModule::GetPCGModuleChecked();
  FPCGGetDataFunctionRegistry::GetDataFromActor
            (&pFVar5->GetDataFunctionRegistry,*(FPCGContext **)((longlong)this + 8),&local_78,
             param_1,&local_60);
  if (((local_60.bSanitizedTagAttributeNames != false) &&
      (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x1b1) == '\0')) && (2 < (byte)LogPCG._0_1_)
     ) {
    FText::ToString(&PCGDataFromActorConstants::TagNamesSanitizedWarning);
    if (*(FPCGContext **)((longlong)this + 8) != (FPCGContext *)0x0) {
      pFVar6 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 8),&local_88);
      if ((pFVar6->Data).ArrayNum == 0) {
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
    }
    this_00 = *(FPCGContext **)((longlong)this + 8);
    if (this_00 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(this_00,&local_98);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((this_00 != (FPCGContext *)0x0) &&
       (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  FVar4.Data = local_60.Collection.TaggedData.AllocatorInstance.Data;
  iVar7 = local_60.Collection.TaggedData.ArrayNum;
  piVar1 = &(__return_storage_ptr__->TaggedData).ArrayMax;
  (__return_storage_ptr__->TaggedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TaggedData).ArrayNum = local_60.Collection.TaggedData.ArrayNum;
  if (local_60.Collection.TaggedData.ArrayNum == 0) {
    *piVar1 = 0;
    iVar7 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,local_60.Collection.TaggedData.ArrayNum,0,
               (ForAnyElementType *)__return_storage_ptr__,local_60.Collection.TaggedData.ArrayNum,
               piVar1);
    ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
              ((__return_storage_ptr__->TaggedData).AllocatorInstance.Data,
               (FPCGTaggedData *)FVar4.Data,iVar7);
    iVar7 = local_60.Collection.TaggedData.ArrayNum;
  }
  FVar4.Data = local_60.Collection.DataCrcs.AllocatorInstance.Data;
  pTVar2 = &__return_storage_ptr__->DataCrcs;
  lVar8 = (longlong)local_60.Collection.DataCrcs.ArrayNum;
  __return_storage_ptr__->bCancelExecutionOnEmpty = local_60.Collection.bCancelExecutionOnEmpty;
  __return_storage_ptr__->bCancelExecution = local_60.Collection.bCancelExecution;
  piVar1 = &(__return_storage_ptr__->DataCrcs).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->DataCrcs).ArrayNum = local_60.Collection.DataCrcs.ArrayNum;
  if (local_60.Collection.DataCrcs.ArrayNum == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_60.Collection.DataCrcs.ArrayNum,0,&pTVar2->AllocatorInstance,
               local_60.Collection.DataCrcs.ArrayNum,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,FVar4.Data,lVar8 << 3);
    iVar7 = local_60.Collection.TaggedData.ArrayNum;
  }
  __return_storage_ptr__->InactiveOutputPinBitmask = local_60.Collection.InactiveOutputPinBitmask;
  if (local_60.Collection.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Collection.DataCrcs.AllocatorInstance.Data);
    iVar7 = local_60.Collection.TaggedData.ArrayNum;
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_60.Collection.TaggedData.AllocatorInstance.Data,iVar7);
  if ((FPCGTaggedData *)local_60.Collection.TaggedData.AllocatorInstance.Data !=
      (FPCGTaggedData *)0x0) {
    FMemory::Free(local_60.Collection.TaggedData.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 149b63c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FPCGDataFromActorElement::ExecuteInternal'::__l107::<lambda_6>::operator()
          (void *this,FPCGContext *param_1)

{
  int iVar1;
  FPCGContext *pFVar2;
  TWeakPtr<FPCGContextHandle,1> local_28;
  FSharedContext<FPCGDataFromActorContext> local_18;
  
  local_28.Object = *(FPCGContextHandle **)this;
  local_28.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FPCGContext::FSharedContext<FPCGDataFromActorContext>::FSharedContext<FPCGDataFromActorContext>
            (&local_18,&local_28);
  if ((local_18.SharedHandle.Object != (FPCGContextHandle *)0x0) &&
     (pFVar2 = (local_18.SharedHandle.Object)->Context, pFVar2 != (FPCGContext *)0x0)) {
    pFVar2->bIsPaused = false;
    iVar1 = *(int *)&pFVar2[1].OutputData.field_0x14;
    pFVar2[1].OutputData.bCancelExecutionOnEmpty = false;
    pFVar2[1].OutputData.bCancelExecution = false;
    *(undefined2 *)&pFVar2[1].OutputData.field_0x12 = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&pFVar2[1].OutputData.TaggedData.ArrayNum,0,
                 (int *)&pFVar2[1].OutputData.field_0x14);
    }
    (pFVar2->OutputData).bCancelExecution = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedHandle.SharedReferenceCount.ReferenceController);
  return;
}

// CanExecuteOnlyOnMainThread @ 149b67be0

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
FPCGDataFromActorElement::CanExecuteOnlyOnMainThread
          (FPCGDataFromActorElement *this,FPCGContext *param_1)

{
  return true;
}

// CreateReferenceData @ 149b6bad0

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

void __thiscall
FPCGDataFromActorElement::CreateReferenceData
          (FPCGDataFromActorElement *this,FPCGContext *param_1,UPCGDataFromActorSettings *param_2,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar2;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar3;
  FName *pFVar4;
  EPCGGetDataFromActorMode EVar5;
  FSoftObjectPath *pFVar6;
  code *pcVar7;
  AActor *pAVar8;
  FPCGContext *this_00;
  UPCGDataFromActorSettings *pUVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  UPCGParamData *pUVar15;
  UPCGMetadata *pUVar16;
  FPCGMetadataDomain *pFVar17;
  FPCGMetadataAttribute<FSoftObjectPath> *this_01;
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar18;
  UClass *pUVar19;
  UClass *pUVar20;
  UClass *pUVar21;
  FString *pFVar22;
  long64 lVar23;
  FName *pFVar24;
  FPCGDataPtrWrapper *this_02;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  ForElementType<FSetElementId> FVar28;
  FName FVar29;
  ForAnyElementType FVar30;
  FName *pFVar31;
  undefined8 *puVar32;
  uint uVar33;
  undefined8 *puVar34;
  UClass *pUVar35;
  size_t sVar36;
  ulonglong uVar37;
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar38;
  FScriptContainerElement *pFVar39;
  FScriptContainerElement *pFVar40;
  AActor *this_03;
  UActorComponent *pUVar41;
  undefined1 auStackY_4c8 [32];
  char local_477;
  byte local_476 [8];
  EPCGGetDataFromActorMode local_46e;
  uint local_46c;
  FPCGMetadataAttribute<FSoftObjectPath> *local_468;
  FPCGMetadataAttribute<FSoftObjectPath> *local_460;
  FSoftObjectPath local_458;
  AActor *local_438;
  UPCGMetadata *local_430;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_428;
  char *local_420;
  byte *local_418;
  uint local_410;
  uint local_40c;
  FPCGContext *local_408;
  FSoftObjectPath local_400;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *local_3e0;
  UPCGDataFromActorSettings *local_3d8;
  undefined4 local_3d0;
  undefined4 local_3cc;
  UActorComponent *local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined8 *local_3b8;
  UPCGParamData *local_3b0;
  FScriptContainerElement *local_3a8;
  FScriptContainerElement *local_3a0;
  FSoftObjectPath local_398;
  FSoftObjectPath local_378;
  FPCGAttributePropertySelector local_358;
  undefined1 local_318 [8];
  UClass *local_310;
  UClass *local_308;
  FName local_300;
  FName local_2f8;
  undefined8 *local_2f0;
  FName local_2e8;
  undefined1 local_2e0 [8];
  FString local_2d8;
  FName local_2c8;
  FPCGMetadataDomainID local_2c0;
  FName local_2a8;
  FPCGMetadataDomainID local_2a0;
  FParseTagResult local_288;
  FParseTagResult local_238;
  FName local_1e8;
  FName local_1e0;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_168;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_118;
  undefined8 local_c8 [16];
  undefined8 *local_48;
  uint local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  pFVar38 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
  local_46c = 0;
  local_408 = param_1;
  local_3e0 = param_3;
  local_3d8 = param_2;
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                          ,0x2d7,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((param_2 == (UPCGDataFromActorSettings *)0x0) ||
      ((param_2->Mode != GetActorReference && (param_2->Mode != GetComponentsReference)))) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings && (Settings->Mode == EPCGGetDataFromActorMode::GetActorReference || Settings->Mode == EPCGGetDataFromActorMode::GetComponentsReference)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                          ,0x2d9,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  EVar5 = param_2->Mode;
  local_46e = EVar5;
  pUVar15 = FPCGContext::NewObject_AnyThread<UPCGParamData>(param_1);
  local_3b0 = pUVar15;
  pUVar16 = (UPCGMetadata *)(**(code **)(pUVar15->_padding_ + 0x328))(pUVar15);
  local_168.Elements._0_8_ = 0;
  local_168.Elements._8_8_ = 0;
  local_168.Elements._32_8_ = 0;
  local_168.Elements._40_4_ = 0;
  local_168.Elements._44_4_ = 0x80;
  local_168.Elements._48_4_ = 0xffffffff;
  local_168.Elements._52_4_ = 0;
  local_168.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_168.HashSize = 0;
  local_118.Elements._0_8_ = 0;
  local_118.Elements._8_8_ = 0;
  local_118.Elements._32_8_ = 0;
  local_118.Elements._40_4_ = 0;
  local_118.Elements._44_4_ = 0x80;
  local_118.Elements._48_4_ = 0xffffffff;
  local_118.Elements._52_4_ = 0;
  local_118.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_118.HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&local_118,(FName *)local_318,(bool *)&PCGPointDataConstants::ActorReferenceAttribute);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&local_118,(FName *)(local_318 + 4),
             (bool *)&PCGAddComponentConstants::ComponentReferenceAttribute);
  local_2c8 = PCGPointDataConstants::ActorReferenceAttribute;
  local_2c0.Flag = PCGMetadataDomainID::Default.Flag;
  local_2c0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_2c0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_2c0.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_378.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_378.AssetPath.PackageName.Number = 0;
  local_378.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_378.AssetPath.AssetName.Number = 0;
  local_378.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.SubPathString.Data.ArrayNum = 0;
  local_378.SubPathString.Data.ArrayMax = 0;
  pFVar17 = UPCGMetadata::FindOrCreateMetadataDomain(pUVar16,&local_2c0);
  FVar30.Data = (FScriptContainerElement *)pFVar38;
  this_01 = pFVar38;
  if (pFVar17 != (FPCGMetadataDomain *)0x0) {
    this_01 = FPCGMetadataDomain::FindOrCreateAttribute<FSoftObjectPath>
                        (pFVar17,local_2c8,&local_378,false,false,true);
    FVar30.Data = local_378.SubPathString.Data.AllocatorInstance.Data;
  }
  local_460 = this_01;
  if ((FPCGMetadataAttribute<FSoftObjectPath> *)FVar30.Data !=
      (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
    FMemory::Free(FVar30.Data);
  }
  FVar30.Data = local_398.SubPathString.Data.AllocatorInstance.Data;
  pFVar18 = pFVar38;
  if (EVar5 == GetComponentsReference) {
    local_2a8 = PCGAddComponentConstants::ComponentReferenceAttribute;
    local_2a0.Flag = PCGMetadataDomainID::Default.Flag;
    local_2a0._1_3_ = PCGMetadataDomainID::Default._1_3_;
    local_2a0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
    local_2a0.DebugName = PCGMetadataDomainID::Default.DebugName;
    local_398.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_398.AssetPath.PackageName.Number = 0;
    local_398.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_398.AssetPath.AssetName.Number = 0;
    local_398.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_398.SubPathString.Data.ArrayNum = 0;
    local_398.SubPathString.Data.ArrayMax = 0;
    pFVar17 = UPCGMetadata::FindOrCreateMetadataDomain(pUVar16,&local_2a0);
    FVar30.Data = (FScriptContainerElement *)pFVar38;
    if (pFVar17 != (FPCGMetadataDomain *)0x0) {
      pFVar18 = FPCGMetadataDomain::FindOrCreateAttribute<FSoftObjectPath>
                          (pFVar17,local_2a8,&local_398,false,false,true);
      FVar30.Data = local_398.SubPathString.Data.AllocatorInstance.Data;
    }
    pFVar38 = (FPCGMetadataAttribute<FSoftObjectPath> *)&DAT_00000001;
    local_46c = 1;
  }
  local_468 = pFVar18;
  if ((pFVar38 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) &&
     (local_46c = 0,
     (FPCGMetadataAttribute<FSoftObjectPath> *)FVar30.Data !=
     (FPCGMetadataAttribute<FSoftObjectPath> *)0x0)) {
    FMemory::Free(FVar30.Data);
  }
  local_420 = &local_477;
  local_428 = &local_118;
  local_418 = local_476;
  local_477 = '\0';
  local_476[0] = 0;
  local_40c = local_3e0->ArrayNum;
  uVar26 = (ulonglong)(int)local_40c;
  pFVar39 = (local_3e0->AllocatorInstance).Data;
  pFVar40 = pFVar39 + uVar26 * 8;
  local_430 = pUVar16;
  local_3a8 = pFVar40;
  do {
    local_3a0 = pFVar39;
    if (local_3e0->ArrayNum != (int)uVar26) {
      local_476[1] = 0;
      `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_476 + 1);
    }
    if (pFVar39 == pFVar40) {
      local_358._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
      local_358.Selection = Attribute;
      local_358.DomainName.ComparisonIndex.Value = 0;
      FVar29 = PCGPointDataConstants::ActorReferenceAttribute;
      if (local_46e == GetComponentsReference) {
        FVar29 = PCGAddComponentConstants::ComponentReferenceAttribute;
      }
      local_358.DomainName.Number = 0;
      local_358.AttributeName.ComparisonIndex.Value = 0;
      local_358.AttributeName.Number = 0;
      local_358.PropertyName.ComparisonIndex.Value = 0;
      local_358.PropertyName.Number = 0;
      local_358.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_358.ExtraNames.ArrayNum = 0;
      local_358.ExtraNames.ArrayMax = 0;
      local_358.ExtraProperty = Index;
      FPCGAttributePropertySelector::SetAttributeName(&local_358,FVar29,true);
      (**(code **)(pUVar15->_padding_ + 0x308))(pUVar15,&local_358);
      pUVar16 = (UPCGMetadata *)(**(code **)(pUVar15->_padding_ + 0x328))(pUVar15);
      lVar23 = UPCGMetadata::GetItemCountForChild(pUVar16);
      this_00 = local_408;
      if (0 < lVar23) {
        iVar13 = (local_408->OutputData).TaggedData.ArrayNum;
        piVar1 = &(local_408->OutputData).TaggedData.ArrayMax;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)&local_408->OutputData,piVar1);
        }
        (this_00->OutputData).TaggedData.ArrayNum = iVar13 + 1;
        this_02 = (FPCGDataPtrWrapper *)
                  ((this_00->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar13 * 0x78
                  );
        this_02[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_02[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_02[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pTVar2 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_02 + 1);
        this_02[5].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined2 *)((longlong)&this_02[6].WeakData.WeakPtr.ObjectIndex + 2) = 0;
        (this_02->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (this_02->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        *(undefined8 *)&pTVar2->Elements = 0;
        this_02[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_02[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_02[3].WeakData.WeakPtr.ObjectIndex = 0;
        this_02[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&this_02[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&this_02[4].Data.field0_0x0 + 4) = 0;
        this_02[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_02[5].WeakData.WeakPtr.ObjectIndex = 0;
        this_02[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined2 *)&this_02[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        *(undefined8 *)&this_02[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&this_02[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar15);
        if (pTVar2 != &local_168) {
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
          Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>(pTVar2,&local_168);
        }
      }
      pUVar9 = local_3d8;
      uVar14 = local_46c;
      if (((local_477 != '\0') && (local_3d8->bSilenceReservedAttributeNameWarnings == false)) &&
         (2 < (byte)LogPCG._0_1_)) {
        FText::ToString(&PCGDataFromActorConstants::TagNamesReservedWarning);
        uVar33 = local_46c;
        if (this_00 != (FPCGContext *)0x0) {
          FPCGContext::GetTaskName(this_00,&local_198);
          uVar33 = uVar33 | 6;
          FPCGContext::GetExecutionSourceName(this_00,&local_1a8);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (((uVar33 & 4) != 0) &&
           (uVar33 = uVar33 & 0xfffffffb,
           local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        uVar14 = uVar33;
        if (((uVar33 & 2) != 0) &&
           (uVar14 = uVar33 & 0xfffffffd,
           local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
      }
      if (((local_476[0] != 0) && (pUVar9->bSilenceSanitizedAttributeNameWarnings == false)) &&
         (2 < (byte)LogPCG._0_1_)) {
        FText::ToString(&PCGDataFromActorConstants::TagNamesSanitizedWarning);
        if (this_00 != (FPCGContext *)0x0) {
          FPCGContext::GetTaskName(this_00,&local_188);
          uVar14 = uVar14 | 0x18;
          FPCGContext::GetExecutionSourceName(this_00,&local_178);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (((uVar14 & 0x10) != 0) &&
           (uVar14 = uVar14 & 0xffffffef,
           local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (((uVar14 & 8) != 0) &&
           (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
      }
      DestructItems<FString,int>
                ((FString *)local_358.ExtraNames.AllocatorInstance.Data,
                 local_358.ExtraNames.ArrayNum);
      if (local_358.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.ExtraNames.AllocatorInstance.Data);
      }
      local_118.HashSize = 0;
      if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_118.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_118.Elements);
      local_168.HashSize = 0;
      if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_168.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_168.Elements);
      return;
    }
    this_03 = *(AActor **)pFVar39;
    local_438 = this_03;
    if (this_03 != (AActor *)0x0) {
      pUVar21 = (UClass *)0x0;
      pUVar35 = (UClass *)0x0;
      local_458.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_458.AssetPath.PackageName.Number = 0;
      local_458.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_458.AssetPath.AssetName.Number = 0;
      local_458.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_458.SubPathString.Data.ArrayNum = 0;
      local_458.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_458,(UObject *)this_03);
      if (pFVar18 == (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
        pUVar16 = (UPCGMetadata *)(**(code **)(pUVar15->_padding_ + 0x328))(pUVar15);
        lVar23 = UPCGMetadata::AddEntry(pUVar16,-1);
        if ((lVar23 == -1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ItemKey != PCGInvalidEntryKey",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                                ,0x24b,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar13 = FPCGMetadataAttribute<FSoftObjectPath>::FindValue<FSoftObjectPath,0>
                           (this_01,&local_458);
        if (iVar13 == -2) {
          AcquireSRWLockExclusive((PSRWLOCK)&this_01->ValueLock);
          pTVar3 = &this_01->Values;
          pFVar6 = (FSoftObjectPath *)(pTVar3->AllocatorInstance).Data;
          if (((pFVar6 <= &local_458) && (&local_458 < pFVar6 + (this_01->Values).ArrayMax)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar13 = (this_01->Values).ArrayNum;
          piVar1 = &(this_01->Values).ArrayMax;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&pTVar3->AllocatorInstance,piVar1);
          }
          FVar30.Data = local_458.SubPathString.Data.AllocatorInstance.Data;
          (this_01->Values).ArrayNum = iVar13 + 1;
          pFVar39 = (pTVar3->AllocatorInstance).Data;
          lVar27 = (longlong)iVar13 * 0x20;
          pFVar40 = pFVar39 + lVar27;
          *(uint *)pFVar40 = local_458.AssetPath.PackageName.ComparisonIndex.Value;
          *(uint *)(pFVar40 + 4) = local_458.AssetPath.PackageName.Number;
          *(uint *)(pFVar40 + 8) = local_458.AssetPath.AssetName.ComparisonIndex.Value;
          *(uint *)(pFVar40 + 0xc) = local_458.AssetPath.AssetName.Number;
          pFVar40 = pFVar39 + lVar27 + 0x10;
          *(undefined8 *)pFVar40 = 0;
          sVar36 = (size_t)local_458.SubPathString.Data.ArrayNum;
          *(int *)(pFVar40 + 8) = local_458.SubPathString.Data.ArrayNum;
          if (local_458.SubPathString.Data.ArrayNum == 0) {
            *(int *)(pFVar39 + lVar27 + 0x1c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_458.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)pFVar40,
                       local_458.SubPathString.Data.ArrayNum,(int *)(pFVar39 + lVar27 + 0x1c));
            memcpy(*(void **)pFVar40,FVar30.Data,sVar36);
          }
          iVar13 = local_460->ValueKeyOffset + iVar13;
          ReleaseSRWLockExclusive((PSRWLOCK)&this_01->ValueLock);
          this_01 = local_460;
          this_03 = local_438;
          pFVar18 = local_468;
        }
        FPCGMetadataAttributeBase::SetValueFromValueKey
                  ((FPCGMetadataAttributeBase *)this_01,lVar23,iVar13,false);
        `FPCGDataFromActorElement::CreateReferenceData'::__l2::<lambda_1>::
        operator()<TArray<FName,TSizedDefaultAllocator<32>_>_>(&local_430,&this_03->Tags,lVar23);
        pFVar31 = (FName *)(this_03->Tags).AllocatorInstance.Data;
        iVar13 = (this_03->Tags).ArrayNum;
        pFVar4 = pFVar31 + iVar13;
        while( true ) {
          if ((this_03->Tags).ArrayNum != iVar13) {
            local_476[7] = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_476 + 7);
          }
          pUVar15 = local_3b0;
          if (pFVar31 == pFVar4) break;
          local_2e8 = *pFVar31;
          pFVar22 = ::FName::ToString(&local_2e8,&local_1b8);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                    (&local_168,(FString *)local_2e0,(bool *)pFVar22);
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
          pFVar31 = pFVar31 + 1;
        }
      }
      else {
        local_48 = (undefined8 *)0x0;
        local_3c = 0x10;
        local_40 = 0;
        pUVar19 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar19 != (UClass *)0x0) goto LAB_149b6bea2;
        }
        else {
          pUVar35 = pUVar21;
          if (pUVar19 != (UClass *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar19);
LAB_149b6bea2:
            pUVar20 = Z_Construct_UClass_UActorComponent_NoRegister();
            pUVar35 = pUVar21;
            if (pUVar20 != (UClass *)0x0) {
              iVar13 = (int)pUVar20->_padding_;
              if (((int)pUVar19->_padding_ < iVar13) ||
                 ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar13 * 8) !=
                  &pUVar20->_padding_)) {
                bVar10 = false;
              }
              else {
                bVar10 = true;
              }
              if (bVar10) {
                pUVar35 = pUVar19;
              }
            }
          }
        }
        pUVar21 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar35 == pUVar21) {
          local_310 = pUVar19;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar19);
          }
          AActor::
          ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                    (this_03,(TSubclassOf<UActorComponent>)&local_310,
                     (TArray<UActorComponent_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                      *)local_c8);
        }
        else {
          local_308 = pUVar19;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar19);
          }
          AActor::
          ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                    (this_03,(TSubclassOf<UActorComponent>)&local_308,
                     (TArray<UActorComponent_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                      *)local_c8);
        }
        uVar26 = (ulonglong)(int)local_40;
        bVar10 = false;
        local_410 = local_40;
        bVar12 = false;
        puVar32 = local_c8;
        if (local_48 != (undefined8 *)0x0) {
          puVar32 = local_48;
        }
        puVar34 = puVar32 + uVar26;
        local_2f0 = puVar34;
        uVar37 = uVar26;
        while( true ) {
          local_3b8 = puVar32;
          if ((int)uVar26 != (int)uVar37) {
            local_476[2] = 0;
            `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_476 + 2);
          }
          if (puVar32 == puVar34) break;
          pUVar41 = (UActorComponent *)*puVar32;
          local_3c8 = pUVar41;
          bVar11 = FPCGComponentSelectorSettings::FilterComponent
                             ((FPCGComponentSelectorSettings *)&local_408[1].OutputData.DataCrcs,
                              pUVar41);
          if (bVar11) {
            bVar11 = !bVar10;
            bVar10 = bVar12;
            if (bVar11) {
              pFVar31 = (FName *)(this_03->Tags).AllocatorInstance.Data;
              iVar13 = (this_03->Tags).ArrayNum;
              bVar10 = true;
              pFVar4 = pFVar31 + iVar13;
              while( true ) {
                if ((this_03->Tags).ArrayNum != iVar13) {
                  local_476[3] = 0;
                  `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_476 + 3);
                }
                if (pFVar31 == pFVar4) break;
                local_300 = *pFVar31;
                pFVar22 = ::FName::ToString(&local_300,&local_1d8);
                TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                          (&local_168,&local_2d8,(bool *)pFVar22);
                if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
                }
                pFVar31 = pFVar31 + 1;
              }
            }
            pUVar16 = (UPCGMetadata *)(**(code **)(pUVar15->_padding_ + 0x328))(pUVar15);
            lVar23 = UPCGMetadata::AddEntry(pUVar16,-1);
            if ((lVar23 == -1) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ItemKey != PCGInvalidEntryKey",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                                    ,0x24b,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar38 = local_460;
            iVar13 = FPCGMetadataAttribute<FSoftObjectPath>::FindValue<FSoftObjectPath,0>
                               (local_460,&local_458);
            if (iVar13 == -2) {
              AcquireSRWLockExclusive((PSRWLOCK)&pFVar38->ValueLock);
              pTVar3 = &pFVar38->Values;
              pFVar6 = (FSoftObjectPath *)(pTVar3->AllocatorInstance).Data;
              if (((pFVar6 <= &local_458) && (&local_458 < pFVar6 + (pFVar38->Values).ArrayMax)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar13 = (pFVar38->Values).ArrayNum;
              piVar1 = &(pFVar38->Values).ArrayMax;
              if (iVar13 == *piVar1) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&pTVar3->AllocatorInstance,piVar1);
              }
              FVar30.Data = local_458.SubPathString.Data.AllocatorInstance.Data;
              (pFVar38->Values).ArrayNum = iVar13 + 1;
              pFVar39 = (pTVar3->AllocatorInstance).Data;
              lVar27 = (longlong)iVar13 * 0x20;
              pFVar40 = pFVar39 + lVar27;
              *(uint *)pFVar40 = local_458.AssetPath.PackageName.ComparisonIndex.Value;
              *(uint *)(pFVar40 + 4) = local_458.AssetPath.PackageName.Number;
              *(uint *)(pFVar40 + 8) = local_458.AssetPath.AssetName.ComparisonIndex.Value;
              *(uint *)(pFVar40 + 0xc) = local_458.AssetPath.AssetName.Number;
              pFVar40 = pFVar39 + lVar27 + 0x10;
              *(FScriptContainerElement **)pFVar40 = (FScriptContainerElement *)0x0;
              sVar36 = (size_t)local_458.SubPathString.Data.ArrayNum;
              *(int *)(pFVar40 + 8) = local_458.SubPathString.Data.ArrayNum;
              if (local_458.SubPathString.Data.ArrayNum == 0) {
                *(int *)(pFVar39 + lVar27 + 0x1c) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,local_458.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)pFVar40,
                           local_458.SubPathString.Data.ArrayNum,(int *)(pFVar39 + lVar27 + 0x1c));
                    /* WARNING: Load size is inaccurate */
                memcpy(*pFVar40,FVar30.Data,sVar36);
              }
              iVar13 = local_460->ValueKeyOffset + iVar13;
              ReleaseSRWLockExclusive((PSRWLOCK)&pFVar38->ValueLock);
              pFVar38 = local_460;
              this_03 = local_438;
              pUVar41 = local_3c8;
            }
            FPCGMetadataAttributeBase::SetValueFromValueKey
                      ((FPCGMetadataAttributeBase *)pFVar38,lVar23,iVar13,false);
            local_400.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_400.AssetPath.PackageName.Number = 0;
            local_400.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_400.AssetPath.AssetName.Number = 0;
            local_400.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_400.SubPathString.Data.ArrayNum = 0;
            local_400.SubPathString.Data.ArrayMax = 0;
            FSoftObjectPath::SetPath(&local_400,(UObject *)pUVar41);
            if ((lVar23 == -1) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ItemKey != PCGInvalidEntryKey",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                                    ,0x24b,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar38 = local_468;
            iVar13 = FPCGMetadataAttribute<FSoftObjectPath>::FindValue<FSoftObjectPath,0>
                               (local_468,&local_400);
            if (iVar13 == -2) {
              AcquireSRWLockExclusive((PSRWLOCK)&pFVar38->ValueLock);
              pTVar3 = &pFVar38->Values;
              pFVar6 = (FSoftObjectPath *)(pTVar3->AllocatorInstance).Data;
              if (((pFVar6 <= &local_400) && (&local_400 < pFVar6 + (pFVar38->Values).ArrayMax)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar13 = (pFVar38->Values).ArrayNum;
              piVar1 = &(pFVar38->Values).ArrayMax;
              if (iVar13 == *piVar1) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&pTVar3->AllocatorInstance,piVar1);
              }
              (pFVar38->Values).ArrayNum = iVar13 + 1;
              FSoftObjectPath::FSoftObjectPath
                        ((FSoftObjectPath *)
                         ((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 0x20),&local_400);
              iVar13 = local_468->ValueKeyOffset + iVar13;
              ReleaseSRWLockExclusive((PSRWLOCK)&pFVar38->ValueLock);
              pFVar38 = local_468;
            }
            FPCGMetadataAttributeBase::SetValueFromValueKey
                      ((FPCGMetadataAttributeBase *)pFVar38,lVar23,iVar13,false);
            if (local_400.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_400.SubPathString.Data.AllocatorInstance.Data);
            }
            pAVar8 = local_438;
            pFVar31 = (FName *)(this_03->Tags).AllocatorInstance.Data;
            iVar13 = (this_03->Tags).ArrayNum;
            pFVar4 = pFVar31 + iVar13;
            while( true ) {
              if ((pAVar8->Tags).ArrayNum != iVar13) {
                local_476[4] = 0;
                `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_476 + 4);
              }
              pUVar41 = local_3c8;
              if (pFVar31 == pFVar4) break;
              PCG::Private::FParseTagResult::FParseTagResult(&local_288,*pFVar31);
              iVar25 = local_288.Attribute.Data.ArrayNum + -1;
              if (local_288.Attribute.Data.ArrayNum == 0) {
                iVar25 = 0;
              }
              pFVar24 = ::FName::FName(&local_1e8,iVar25,
                                       (wchar_t *)local_288.Attribute.Data.AllocatorInstance.Data,
                                       FNAME_Add);
              FVar29 = *pFVar24;
              uVar14 = ::GetTypeHash(FVar29.ComparisonIndex.Value);
              if (local_118.Elements._8_4_ != local_118.Elements._52_4_) {
                FVar28 = (ForElementType<FSetElementId>)&local_118.Hash;
                if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar28 = local_118.Hash.SecondaryData;
                }
                for (iVar25 = *(int *)((longlong)FVar28 +
                                      (ulonglong)(local_118.HashSize - 1U & FVar29.Number + uVar14)
                                      * 4); iVar25 != -1;
                    iVar25 = *(int *)(local_118.Elements._0_8_ + 8 + (longlong)iVar25 * 0x10)) {
                  if (*(FName *)(local_118.Elements._0_8_ + (longlong)iVar25 * 0x10) == FVar29) {
                    *local_420 = '\x01';
                    goto LAB_149b6c487;
                  }
                }
              }
              local_3cc = 0;
              local_3d0 = 0xffffffff;
              bVar12 = PCG::Private::SetAttributeFromTag
                                 (&local_288,local_430,lVar23,CreateAttribute,
                                  (TOptional<FName>)&local_3d0);
              if (bVar12) {
                *local_418 = *local_418 |
                             local_288.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax != -1;
              }
LAB_149b6c487:
              if ((local_288.Value.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
                 (local_288.Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0)) {
                FMemory::Free((void *)local_288.Value.field0_0x0.TypedValue.Data.AllocatorInstance.
                                      Data);
              }
              if ((local_288.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
                 (local_288.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0)) {
                FMemory::Free((void *)local_288.OriginalAttribute.field0_0x0.TypedValue.Data.
                                      AllocatorInstance.Data);
              }
              if (local_288.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(local_288.Attribute.Data.AllocatorInstance.Data);
              }
              pFVar31 = pFVar31 + 1;
            }
            pFVar31 = (FName *)(local_3c8->ComponentTags).AllocatorInstance.Data;
            iVar13 = (local_3c8->ComponentTags).ArrayNum;
            pFVar4 = pFVar31 + iVar13;
            while( true ) {
              if ((pUVar41->ComponentTags).ArrayNum != iVar13) {
                local_476[5] = 0;
                `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_476 + 5);
              }
              if (pFVar31 == pFVar4) break;
              PCG::Private::FParseTagResult::FParseTagResult(&local_238,*pFVar31);
              iVar25 = local_238.Attribute.Data.ArrayNum + -1;
              if (local_238.Attribute.Data.ArrayNum == 0) {
                iVar25 = 0;
              }
              pFVar24 = ::FName::FName(&local_1e0,iVar25,
                                       (wchar_t *)local_238.Attribute.Data.AllocatorInstance.Data,
                                       FNAME_Add);
              FVar29 = *pFVar24;
              uVar14 = ::GetTypeHash(FVar29.ComparisonIndex.Value);
              if (local_118.Elements._8_4_ != local_118.Elements._52_4_) {
                FVar28 = (ForElementType<FSetElementId>)&local_118.Hash;
                if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar28 = local_118.Hash.SecondaryData;
                }
                for (iVar25 = *(int *)((longlong)FVar28 +
                                      (ulonglong)(local_118.HashSize - 1U & FVar29.Number + uVar14)
                                      * 4); iVar25 != -1;
                    iVar25 = *(int *)(local_118.Elements._0_8_ + 8 + (longlong)iVar25 * 0x10)) {
                  if (*(FName *)(local_118.Elements._0_8_ + (longlong)iVar25 * 0x10) == FVar29) {
                    *local_420 = '\x01';
                    goto LAB_149b6c5e8;
                  }
                }
              }
              local_3bc = 0;
              local_3c0 = 0xffffffff;
              bVar12 = PCG::Private::SetAttributeFromTag
                                 (&local_238,local_430,lVar23,CreateAttribute,
                                  (TOptional<FName>)&local_3c0);
              if (bVar12) {
                *local_418 = *local_418 |
                             local_238.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax != -1;
              }
LAB_149b6c5e8:
              if ((local_238.Value.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
                 (local_238.Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0)) {
                FMemory::Free((void *)local_238.Value.field0_0x0.TypedValue.Data.AllocatorInstance.
                                      Data);
              }
              if ((local_238.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
                 (local_238.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0)) {
                FMemory::Free((void *)local_238.OriginalAttribute.field0_0x0.TypedValue.Data.
                                      AllocatorInstance.Data);
              }
              if (local_238.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(local_238.Attribute.Data.AllocatorInstance.Data);
              }
              pFVar31 = pFVar31 + 1;
            }
            pFVar31 = (FName *)(pUVar41->ComponentTags).AllocatorInstance.Data;
            iVar13 = (pUVar41->ComponentTags).ArrayNum;
            pFVar4 = pFVar31 + iVar13;
            while( true ) {
              if ((pUVar41->ComponentTags).ArrayNum != iVar13) {
                local_476[6] = 0;
                `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_476 + 6);
              }
              puVar32 = local_3b8;
              puVar34 = local_2f0;
              pUVar15 = local_3b0;
              this_03 = local_438;
              bVar12 = bVar10;
              if (pFVar31 == pFVar4) break;
              local_2f8 = *pFVar31;
              pFVar22 = ::FName::ToString(&local_2f8,&local_1c8);
              TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                        (&local_168,(FString *)(local_2e0 + 4),(bool *)pFVar22);
              if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
              }
              pFVar31 = pFVar31 + 1;
            }
          }
          uVar26 = (ulonglong)local_40;
          puVar32 = puVar32 + 1;
          uVar37 = (ulonglong)local_410;
        }
        pFVar18 = local_468;
        if (local_48 != (undefined8 *)0x0) {
          FMemory::Free(local_48);
          pFVar18 = local_468;
        }
      }
      pFVar40 = local_3a8;
      if (local_458.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.SubPathString.Data.AllocatorInstance.Data);
        pFVar40 = local_3a8;
      }
    }
    pFVar39 = local_3a0 + 8;
    uVar26 = (ulonglong)local_40c;
    this_01 = local_460;
  } while( true );
}

// ExecuteInternal @ 149b77660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000149b77b78) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffe28 : 0x000149b77b7c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
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
FPCGDataFromActorElement::ExecuteInternal(FPCGDataFromActorElement *this,FPCGContext *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *pTVar3;
  IPCGGraphExecutionSource **ppIVar4;
  FSoftObjectPath *pFVar5;
  undefined8 *puVar6;
  bool *pbVar7;
  ulonglong uVar8;
  atomic<int> aVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  code *pcVar13;
  undefined2 uVar14;
  FPCGDataFromActorElement *this_00;
  code *pcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  bool bVar20;
  undefined1 uVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  UPCGDataFromActorSettings *pUVar25;
  UPCGComponent *pUVar26;
  UClass *pUVar27;
  undefined ***pppuVar28;
  UPCGSubsystem *this_01;
  FPCGSelectionKey *pFVar29;
  IPCGGraphExecutionSource IVar30;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar31;
  FText *this_02;
  TWeakPtr<FPCGContextHandle,1> *pTVar32;
  FPCGScheduleGenericParams *pFVar33;
  byte bVar34;
  int iVar36;
  longlong *plVar35;
  undefined8 *puVar37;
  IPCGGraphExecutionSource *pIVar38;
  bool *pbVar39;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this_03;
  uint *puVar40;
  uint uVar41;
  AActor *pAVar42;
  ForAnyElementType FVar43;
  FSoftObjectPath *this_04;
  longlong lVar44;
  bool bVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auStackY_6c8 [32];
  undefined1 local_678;
  undefined1 local_677;
  undefined1 local_676;
  undefined1 local_675 [5];
  ForAnyElementType local_670;
  undefined8 local_668;
  IPCGGraphExecutionSource local_660;
  UPCGComponent *local_658;
  int local_650;
  FPCGDataFromActorElement *local_648;
  UPCGDataFromActorSettings *local_640;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_638;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_628;
  bool *local_618;
  undefined8 local_610;
  IPCGGraphExecutionSource local_608;
  TArray<UPCGComponent_*,TSizedDefaultAllocator<32>_> local_600;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_5f0;
  undefined8 local_5e0;
  AActor *local_5d8;
  AActor *local_5d0;
  AActor *local_5c8;
  longlong *local_5c0;
  int iStack_5b8;
  uint uStack_5b4;
  TBitArray<FDefaultBitArrayAllocator> *local_5b0;
  undefined4 uStack_5a8;
  uint uStack_5a4;
  int local_5a0;
  undefined4 uStack_59c;
  int iStack_598;
  undefined4 uStack_594;
  longlong *local_590;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_588;
  undefined8 uStack_568;
  FScriptContainerElement *local_558;
  int iStack_550;
  undefined4 uStack_54c;
  UPCGDataFromActorSettings *local_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined **local_520;
  undefined8 uStack_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  UPCGComponent *local_508;
  TVector4<double>_u_0 local_4f8;
  double local_4d8;
  double local_4d0;
  double local_4c8;
  undefined8 local_4c0;
  FText local_4b8;
  TWeakPtr<FPCGContextHandle,1> local_4a8;
  TWeakPtr<FPCGContextHandle,1> local_498;
  TArrayView<AActor_*,int> local_488;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_478;
  FString local_468;
  code *local_458 [2];
  undefined **local_448;
  FPCGContextHandle *local_440;
  TReferenceControllerBase<1> *local_438;
  undefined8 local_430;
  FString local_428;
  code *local_418 [2];
  undefined **local_408;
  FPCGContextHandle *local_400;
  TReferenceControllerBase<1> *local_3f8;
  undefined8 local_3f0;
  FPCGSelectionKey local_3e8;
  FPCGSelectionKey local_378;
  FPCGSelectionKey local_308;
  undefined4 local_27c;
  code *local_278 [2];
  undefined **local_268;
  AActor *pAStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined ***pppuStack_250;
  code *local_248 [2];
  undefined **local_238;
  code *pcStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined ***pppuStack_220;
  code *local_218;
  undefined8 uStack_210;
  undefined **local_208 [3];
  undefined ***pppuStack_1f0;
  code *local_1e8;
  undefined8 uStack_1e0;
  undefined **local_1d8;
  code *pcStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [32];
  uint *local_198;
  uint local_190;
  int local_184;
  ForElementType<FSetElementId> local_178;
  int local_170;
  TVector<double>_u_0 local_168;
  double local_150;
  double local_148;
  double local_140;
  TVector<double>_u_0 local_130;
  undefined **ppuStack_118;
  undefined **local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 local_f8 [64];
  longlong local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  ForAnyElementType local_88;
  ForAnyElementType local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  bVar45 = -1 < CpuChannel->Enabled;
  local_648 = this;
  if (bVar45) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId348,"FPCGDataFromActorElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
               ,0x15c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId348);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                          ,0x15e,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    uVar21 = (*pcVar13)();
    return (bool)uVar21;
  }
  if (*(char *)((longlong)&param_1[1].AsyncState.AsyncCurrentWriteIndex + 1) == '\0') {
    pUVar25 = FPCGContext::GetInputSettings<UPCGDataFromActorSettings>(param_1);
    local_640 = pUVar25;
    if ((pUVar25 == (UPCGDataFromActorSettings *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Settings",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                            ,0x168,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      uVar21 = (*pcVar13)();
      return (bool)uVar21;
    }
    if (((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
         (bVar20 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar20))
        || (pIVar38 = (param_1->ExecutionSource).InterfaceInstance,
           pIVar38 == (IPCGGraphExecutionSource *)0x0)) ||
       (pUVar26 = (UPCGComponent *)(**(code **)((longlong)*pIVar38 + 8))(),
       pUVar26 == (UPCGComponent *)0x0)) {
LAB_149b777b0:
      pUVar26 = (UPCGComponent *)0x0;
      local_658 = (UPCGComponent *)0x0;
    }
    else {
      local_658 = pUVar26;
      pUVar27 = Z_Construct_UClass_UPCGComponent_NoRegister();
      iVar36 = (int)pUVar27->_padding_;
      if ((*(int *)(pUVar26->_padding_ + 0x38) < iVar36) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar26->_padding_ + 0x30) + (longlong)iVar36 * 8) !=
          &pUVar27->_padding_)) goto LAB_149b777b0;
    }
    if ((char)param_1[1].AsyncState.AsyncCurrentWriteIndex == '\0') {
      *(EPCGComponentSelection *)&param_1[1].OutputData.DataCrcs.AllocatorInstance.Data =
           (pUVar25->ComponentSelector).ComponentSelection;
      *(FName *)((longlong)&param_1[1].OutputData.DataCrcs.AllocatorInstance.Data + 4) =
           (pUVar25->ComponentSelector).ComponentSelectionTag;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar27 = (pUVar25->ComponentSelector).ComponentSelectionClass.Class.field0_0x0.DebugPtr,
         pUVar27 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar27);
      }
      pTVar3 = &(pUVar25->ComponentSelector).ComponentList;
      param_1[1].OutputData.InactiveOutputPinBitmask =
           (ulong64)(pUVar25->ComponentSelector).ComponentSelectionClass.Class.field0_0x0;
      ppIVar4 = &param_1[1].ExecutionSource.InterfaceInstance;
      *(bool *)&param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectIndex =
           (pUVar25->ComponentSelector).bShowComponentSelection;
      *(bool *)((longlong)&param_1[1].ExecutionSource.ObjectInstance.WeakPtr.ObjectIndex + 1) =
           (pUVar25->ComponentSelector).bShowComponentSelectionClass;
      if ((TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)ppIVar4 != pTVar3) {
        iVar36 = (pUVar25->ComponentSelector).ComponentList.ArrayNum;
        piVar1 = &param_1[1].SourceComponent.WeakPtr.ObjectSerialNumber;
        pFVar11 = (pTVar3->AllocatorInstance).Data;
        iVar23 = *piVar1;
        param_1[1].SourceComponent.WeakPtr.ObjectIndex = iVar36;
        if ((iVar36 == 0) && (iVar23 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar36,iVar23,(ForAnyElementType *)ppIVar4,iVar36,piVar1);
          if (iVar36 != 0) {
            memcpy(*ppIVar4,pFVar11,(longlong)iVar36 << 3);
          }
        }
      }
      iVar23 = (pUVar25->ComponentSelector).ComponentSelectionTagString.Data.ArrayNum;
      iVar36 = iVar23 + -1;
      if (iVar23 == 0) {
        iVar36 = 0;
      }
      ::FString::AssignRange
                ((FString *)&param_1[1].bInputDataModified,
                 (wchar_t *)
                 (pUVar25->ComponentSelector).ComponentSelectionTagString.Data.AllocatorInstance.
                 Data,iVar36);
      *(bool *)&param_1[1].AsyncState.NumAvailableTasks =
           (pUVar25->ComponentSelector).bTagContainsWildcards;
      *(bool *)((longlong)&param_1[1].AsyncState.NumAvailableTasks + 1) =
           (pUVar25->ComponentSelector).bHasPreparedTag;
      pcStack_230 = `FPCGDataFromActorElement::ExecuteInternal'::__l22::<lambda_1>::
                    <lambda_invoker_cdecl>;
      local_248[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(AActor_const_*),bool,AActor_const_*>::Call;
      pppuStack_220 = (undefined ***)0x0;
      local_238 = &
                  ___7__TFunction_OwnedObject_P6A_NPEBVAActor___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      if (pUVar26 == (UPCGComponent *)0x0) {
        pAVar42 = (AActor *)0x0;
      }
      else {
        pAVar42 = (AActor *)pUVar26->_padding_;
        if ((pAVar42 != (AActor *)0x0) && ((pUVar25->ActorSelector).bMustOverlapSelf != false)) {
          PCGHelpers::GetGridBounds((TBox<double> *)&local_130._s_0,pAVar42,pUVar26);
          uVar46 = (undefined4)local_100;
          uVar47 = (undefined4)((ulonglong)local_100 >> 0x20);
          ppuStack_540 = (undefined **)local_130._s_0.X;
          ppuStack_538 = (undefined **)local_130._s_0.Y;
          local_218 = (code *)0x0;
          ppuStack_530 = (undefined **)local_130._s_0.Z;
          ppuStack_528 = ppuStack_118;
          local_520 = local_110;
          uStack_518 = uStack_108;
          local_548 = pUVar25;
          local_508 = pUVar26;
          pppuVar28 = FMemory::Malloc(0x50,8);
          pppuStack_1f0 = pppuStack_220;
          pcVar15 = local_248[1];
          pcVar13 = local_248[0];
          pppuVar28[1] = (undefined **)local_548;
          pppuVar28[2] = ppuStack_540;
          *pppuVar28 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::`25'::<lambda_2>,0,1>
                        ::_vftable_;
          pppuVar28[3] = ppuStack_538;
          pppuVar28[4] = ppuStack_530;
          pppuVar28[5] = ppuStack_528;
          pppuVar28[6] = local_520;
          *(undefined4 *)(pppuVar28 + 7) = (undefined4)uStack_518;
          *(undefined4 *)((longlong)pppuVar28 + 0x3c) = uStack_518._4_4_;
          *(undefined4 *)(pppuVar28 + 8) = uVar46;
          *(undefined4 *)((longlong)pppuVar28 + 0x44) = uVar47;
          pppuVar28[9] = (undefined **)local_508;
          if (pppuVar28 != (undefined ***)&DAT_fffffffffffffff8) {
            local_218 = UE::Core::Private::Function::
                        TFunctionRefCaller<`FPCGDataFromActorElement::ExecuteInternal'::__l25::<lambda_2>,bool,AActor_const_*>
                        ::Call;
          }
          uVar16 = local_238._0_4_;
          uVar17 = local_238._4_4_;
          uVar18 = pcStack_230._0_4_;
          uVar19 = pcStack_230._4_4_;
          local_248[0] = local_218;
          local_248[1] = (code *)uStack_210;
          local_228 = local_208[2]._0_4_;
          uStack_224 = local_208[2]._4_4_;
          pppuStack_220 = pppuVar28;
          local_238 = (undefined **)CONCAT44(local_208[0]._4_4_,local_208[0]._0_4_);
          pcStack_230 = (code *)CONCAT44(local_208[1]._4_4_,local_208[1]._0_4_);
          local_218 = pcVar13;
          uStack_210 = pcVar15;
          local_208[0]._0_4_ = uVar16;
          local_208[0]._4_4_ = uVar17;
          local_208[1]._0_4_ = uVar18;
          local_208[1]._4_4_ = uVar19;
          uStack_510 = uVar46;
          uStack_50c = uVar47;
          if (pcVar13 != (code *)0x0) {
            pppuVar28 = local_208;
            if (pppuStack_1f0 != (undefined ***)0x0) {
              pppuVar28 = pppuStack_1f0;
            }
            (*(code *)(*pppuVar28)[2])();
          }
        }
      }
      pcVar13 = local_278[1];
      pppuStack_250 = (undefined ***)0x0;
      pAStack_260 = (AActor *)
                    `FPCGDataFromActorElement::ExecuteInternal'::__l22::<lambda_3>::
                    <lambda_invoker_cdecl>;
      local_278[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(AActor_const_*),bool,AActor_const_*>::Call;
      local_268 = &
                  ___7__TFunction_OwnedObject_P6A_NPEBVAActor___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      if ((pAVar42 != (AActor *)0x0) && ((pUVar25->ActorSelector).bIgnoreSelfAndChildren != false))
      {
        local_278[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FPCGDataFromActorElement::ExecuteInternal'::__l28::<lambda_4>,bool,AActor_const_*>
                       ::Call;
        local_278[1] = (code *)uStack_1e0;
        local_258 = local_1c8;
        uStack_254 = uStack_1c4;
        pppuStack_250 = (undefined ***)0x0;
        local_268 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::`28'::<lambda_4>,0,0>
                     ::_vftable_;
        pAStack_260 = pAVar42;
        local_1e8 = UE::Core::Private::Function::
                    TFunctionRefCaller<bool_(__cdecl*)(AActor_const_*),bool,AActor_const_*>::Call;
        uStack_1e0 = pcVar13;
        local_1d8 = &
                    ___7__TFunction_OwnedObject_P6A_NPEBVAActor___Z_0A__0A__Function_Private_Core_UE__6B_
        ;
        pcStack_1d0 = `FPCGDataFromActorElement::ExecuteInternal'::__l22::<lambda_3>::
                      <lambda_invoker_cdecl>;
        uStack_1c0 = 0;
        (*(code *)PTR_Destroy_151f398f0)();
      }
      if ((((pUVar25->Mode == GetDataFromPCGComponent) &&
           ((pUVar25->ActorSelector).ActorFilter == AllWorldActors)) &&
          (local_658 != (UPCGComponent *)0x0)) &&
         (this_01 = UPCGComponent::GetSubsystem(local_658), this_01 != (UPCGSubsystem *)0x0)) {
        bVar20 = -1 < CpuChannel->Enabled;
        if (bVar20) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId421,
                     "FPCGDataFromActorElement::Execute::FindPCGComponents",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                     ,0x1a5);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId421);
        }
        FPCGActorSelectorSettings::GetAssociatedKey(&pUVar25->ActorSelector,&local_3e8);
        if ((pUVar25->ActorSelector).bMustOverlapSelf == false) {
          UPCGSubsystem::GetAllRegisteredComponents
                    (this_01,(TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>
                              *)local_1b8);
          uVar24 = local_190;
          iStack_5b8 = 0;
          uStack_5b4 = 1;
          local_5a0 = 0;
          uStack_5a4 = 0;
          if (local_190 != 0) {
            puVar40 = (uint *)(local_1b8 + 0x10);
            if (local_198 != (uint *)0x0) {
              puVar40 = local_198;
            }
            uVar41 = *puVar40;
            local_5a0 = 0;
            while (uVar41 == 0) {
              iStack_5b8 = iStack_5b8 + 1;
              local_5a0 = local_5a0 + 0x20;
              uStack_5a4 = local_190;
              if ((int)((local_190 - 1) + ((int)(local_190 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_5b8)
              goto LAB_149b77e82;
              uVar41 = puVar40[iStack_5b8];
            }
            uStack_5b4 = ~(uVar41 - 1) & uVar41;
            uVar8 = (ulonglong)uStack_5b4 * 2 + 1;
            lVar44 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar44 == 0; lVar44 = lVar44 + -1) {
              }
            }
            local_650 = (int)lVar44;
            uStack_5a4 = local_5a0 + -1 + local_650;
            if ((int)local_190 < (int)uStack_5a4) {
              uStack_5a4 = local_190;
            }
          }
LAB_149b77e82:
          local_5c0 = (longlong *)local_1b8;
          uStack_59c = local_27c;
          local_5b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10);
          uVar41 = local_190 & 0xffffffe0;
          iStack_598 = local_1b8._8_4_ - local_184;
          uStack_5a8 = 0xffffffff;
          TStack_588.CurrentBitIndex = uStack_5a4;
          TStack_588.UnvisitedBitMask = 0xffffffff;
          TStack_588._padding_ = CONCAT44(uStack_5b4,iStack_5b8);
          iVar36 = (int)local_190 >> 5;
          TStack_588._28_4_ = local_27c;
          TStack_588.BaseBitIndex = local_5a0;
          uStack_568 = CONCAT44(uStack_594,iStack_598);
          bVar34 = (byte)local_190;
          local_590 = local_5c0;
          TStack_588.Array = local_5b0;
          if (((int)local_190 < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar22)) {
            pcVar13 = (code *)swi(3);
            uVar21 = (*pcVar13)();
            return (bool)uVar21;
          }
          if (uVar24 != local_190) {
            puVar40 = (uint *)(local_1b8 + 0x10);
            if (local_198 != (uint *)0x0) {
              puVar40 = local_198;
            }
            uVar24 = -1 << (bVar34 & 0x1f) & puVar40[iVar36];
            while (uVar24 == 0) {
              iVar36 = iVar36 + 1;
              uVar41 = uVar41 + 0x20;
              uVar24 = local_190;
              if ((int)(((int)(local_190 - 1) >> 0x1f & 0x1fU) + (local_190 - 1)) >> 5 < iVar36)
              goto LAB_149b77fb0;
              uVar24 = puVar40[iVar36];
            }
            uVar8 = (ulonglong)(~(uVar24 - 1) & uVar24) * 2 + 1;
            lVar44 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar44 == 0; lVar44 = lVar44 + -1) {
              }
            }
            local_5e0._4_4_ = (int)lVar44;
            uVar24 = (uVar41 - 1) + local_5e0._4_4_;
            if ((int)local_190 < (int)uVar24) {
              uVar24 = local_190;
            }
          }
LAB_149b77fb0:
          while( true ) {
            plVar35 = local_590;
            if ((int)local_590[1] - *(int *)((longlong)local_590 + 0x34) != (int)uStack_568) {
              local_677 = 0;
              `TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_677);
            }
            if (((TStack_588.CurrentBitIndex == uVar24) &&
                (TStack_588.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10))) &&
               (plVar35 == (longlong *)local_1b8)) break;
            pUVar26 = *(UPCGComponent **)(*plVar35 + (longlong)TStack_588.CurrentBitIndex * 0x10);
            local_5d0 = (AActor *)pUVar26->_padding_;
            if (local_5d0 != (AActor *)0x0) {
              pFVar29 = FPCGSelectionKey::CreateFromObjectPtr(&local_308,(UObject *)local_5d0);
              bVar22 = FPCGSelectionKey::IsMatching(&local_3e8,pFVar29,pUVar26);
              if (local_308.CachedTagString.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_308.CachedTagString.Data.AllocatorInstance.Data);
              }
              FInstancedStruct::Reset(&local_308.CustomKey.InstancedStruct);
              if (local_308.ObjectPath.SubPathString.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_308.ObjectPath.SubPathString.Data.AllocatorInstance.Data);
              }
              if (bVar22) {
                TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*_const_&>
                          ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)
                           &param_1[1].OutputData.TaggedData.ArrayNum,&local_5d0);
              }
            }
            TStack_588.UnvisitedBitMask = TStack_588.UnvisitedBitMask & ~TStack_588._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_588);
          }
          local_170 = 0;
          if (local_178 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_178);
          }
          TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_1b8);
        }
        else {
          PCGHelpers::GetGridBounds((TBox<double> *)&local_168._s_0,pAVar42,local_658);
          local_4d8 = (local_150 - local_168._s_0.X) * __real_3fe0000000000000;
          local_4c8 = (local_140 - local_168._s_0.Z) * __real_3fe0000000000000;
          local_4d0 = (local_148 - local_168._s_0.Y) * __real_3fe0000000000000;
          local_4f8._s_0.X = local_4d8 + local_168._s_0.X;
          local_4f8._s_0.Z = local_168._s_0.Z + local_4c8;
          local_4f8._s_0.Y = local_168._s_0.Y + local_4d0;
          local_4f8._s_0.W = 0.0;
          local_4c0 = 0;
          UPCGSubsystem::GetAllIntersectingComponents
                    (this_01,&local_600,(FBoxCenterAndExtent *)&local_4f8._s_0);
          iVar36 = local_600.ArrayNum;
          pFVar11 = local_600.AllocatorInstance.Data + (longlong)local_600.ArrayNum * 8;
          FVar43.Data = local_600.AllocatorInstance.Data;
          while( true ) {
            if (local_600.ArrayNum != iVar36) {
              local_678 = 0;
              `TCheckedPointerIterator<UPCGComponent_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_678);
            }
            if (FVar43.Data == pFVar11) break;
            pUVar26 = *(UPCGComponent **)FVar43.Data;
            local_5d8 = (AActor *)pUVar26->_padding_;
            if (local_5d8 != (AActor *)0x0) {
              pFVar29 = FPCGSelectionKey::CreateFromObjectPtr(&local_378,(UObject *)local_5d8);
              bVar22 = FPCGSelectionKey::IsMatching(&local_3e8,pFVar29,pUVar26);
              if (local_378.CachedTagString.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_378.CachedTagString.Data.AllocatorInstance.Data);
              }
              FInstancedStruct::Reset(&local_378.CustomKey.InstancedStruct);
              if (local_378.ObjectPath.SubPathString.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_378.ObjectPath.SubPathString.Data.AllocatorInstance.Data);
              }
              if (bVar22) {
                TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*_const_&>
                          ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)
                           &param_1[1].OutputData.TaggedData.ArrayNum,&local_5d8);
              }
            }
            FVar43.Data = FVar43.Data + 8;
          }
          if (local_600.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_600.AllocatorInstance.Data);
          }
        }
        *(undefined1 *)&param_1[1].AsyncState.AsyncCurrentWriteIndex = 1;
        if (local_3e8.CachedTagString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_3e8.CachedTagString.Data.AllocatorInstance.Data);
        }
        FInstancedStruct::Reset(&local_3e8.CustomKey.InstancedStruct);
        if (local_3e8.ObjectPath.SubPathString.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e8.ObjectPath.SubPathString.Data.AllocatorInstance.Data);
        }
        pUVar25 = local_640;
        if (bVar20) {
          FCpuProfilerTrace::OutputEndEvent();
          pUVar25 = local_640;
        }
      }
      if ((char)param_1[1].AsyncState.AsyncCurrentWriteIndex == '\0') {
        bVar20 = -1 < CpuChannel->Enabled;
        if (bVar20) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId460,"FPCGDataFromActorElement::Execute::FindActors",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                     ,0x1cc);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId460);
        }
        local_638.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_638.ArrayNum = 0;
        local_638.ArrayMax = 0;
        local_670.Data = (FScriptContainerElement *)0x0;
        local_668 = 0;
        if ((pUVar25->ActorSelector).ActorFilter == FromInput) {
          iVar36 = *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data;
          this_04 = (FSoftObjectPath *)param_1[1].InputData.InactiveOutputPinBitmask;
          pFVar5 = (FSoftObjectPath *)((longlong)this_04 + (longlong)iVar36 * 0x28);
LAB_149b78160:
          while( true ) {
            if (*(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data != iVar36) {
              local_676 = 0;
              `TCheckedPointerIterator<TTuple<FSoftObjectPath,int,int>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_676);
            }
            pUVar25 = local_640;
            if (this_04 == pFVar5) goto LAB_149b782f5;
            IVar30 = (IPCGGraphExecutionSource)FSoftObjectPath::ResolveObject(this_04);
            if (IVar30 == (IPCGGraphExecutionSource)0x0) break;
            pUVar27 = Z_Construct_UClass_AActor_NoRegister();
            iVar23 = (int)pUVar27->_padding_;
            if ((*(int *)(*(longlong *)((longlong)IVar30 + 0x10) + 0x38) < iVar23) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)((longlong)IVar30 + 0x10) + 0x30) +
                 (longlong)iVar23 * 8) != &pUVar27->_padding_)) break;
            local_608 = IVar30;
            TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*_const_&>
                      (&local_638,(AActor **)&local_608);
            this_04 = (FSoftObjectPath *)&this_04[1].AssetPath.AssetName;
          }
          local_608 = (IPCGGraphExecutionSource)0x0;
          if (IVar30 != (IPCGGraphExecutionSource)0x0) {
            pUVar27 = Z_Construct_UClass_UActorComponent_NoRegister();
            iVar23 = (int)pUVar27->_padding_;
            if ((iVar23 <= *(int *)(*(longlong *)((longlong)IVar30 + 0x10) + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)((longlong)IVar30 + 0x10) + 0x30) +
                 (longlong)iVar23 * 8) == &pUVar27->_padding_)) {
              local_660 = IVar30;
              if ((local_670.Data <= &local_660) &&
                 ((&local_660 <
                   (IPCGGraphExecutionSource *)(local_670.Data + (longlong)local_668._4_4_ * 8) &&
                  (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar22)))) {
                pcVar13 = (code *)swi(3);
                uVar21 = (*pcVar13)();
                return (bool)uVar21;
              }
              iVar23 = (int)local_668;
              if ((int)local_668 == local_668._4_4_) {
                iVar23 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_670,(int *)((longlong)&local_668 + 4));
              }
              local_668 = CONCAT44(local_668._4_4_,iVar23 + 1);
              *(IPCGGraphExecutionSource *)(local_670.Data + (longlong)iVar23 * 8) = local_660;
              local_5c8 = *(AActor **)((longlong)local_660 + 0xa8);
              TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*>
                        (&local_638,&local_5c8);
              this_04 = (FSoftObjectPath *)&this_04[1].AssetPath.AssetName;
              goto LAB_149b78160;
            }
          }
          local_660 = (IPCGGraphExecutionSource)0x0;
          this_04 = (FSoftObjectPath *)&this_04[1].AssetPath.AssetName;
          goto LAB_149b78160;
        }
LAB_149b782f5:
        ppIVar4 = &param_1[1].ExecutionSource.InterfaceInstance;
        if ((ForAnyElementType *)ppIVar4 != &local_670) {
          if (*ppIVar4 != (IPCGGraphExecutionSource *)0x0) {
            FMemory::Free(*ppIVar4);
          }
          *ppIVar4 = (IPCGGraphExecutionSource *)local_670.Data;
          param_1[1].SourceComponent.WeakPtr.ObjectIndex = (int)local_668;
          param_1[1].SourceComponent.WeakPtr.ObjectSerialNumber = local_668._4_4_;
          local_668 = 0;
          local_670.Data = (FScriptContainerElement *)0x0;
        }
        iVar36 = local_638.ArrayNum;
        local_558 = local_638.AllocatorInstance.Data;
        if ((local_638.ArrayNum < 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar22)) {
          pcVar13 = (code *)swi(3);
          uVar21 = (*pcVar13)();
          return (bool)uVar21;
        }
        iStack_550 = iVar36;
        local_488._12_4_ = uStack_54c;
        local_488.ArrayNum = iVar36;
        local_488.DataPtr = (AActor **)local_558;
        pTVar31 = PCGActorSelector::FindActors
                            (&local_478,&pUVar25->ActorSelector,
                             (FPCGComponentSelectorSettings *)&param_1[1].OutputData.DataCrcs,
                             local_658,(TFunction<bool___cdecl(AActor_const_*)> *)local_248,
                             (TFunction<bool___cdecl(AActor_const_*)> *)local_278,&local_488);
        piVar1 = &param_1[1].OutputData.TaggedData.ArrayNum;
        if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)piVar1 != pTVar31) {
          if (*(void **)piVar1 != (void *)0x0) {
            FMemory::Free(*(void **)piVar1);
          }
          *(FScriptContainerElement **)piVar1 = (pTVar31->AllocatorInstance).Data;
          (pTVar31->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          uVar21 = *(undefined1 *)((longlong)&pTVar31->ArrayNum + 1);
          uVar14 = *(undefined2 *)((longlong)&pTVar31->ArrayNum + 2);
          param_1[1].OutputData.bCancelExecutionOnEmpty = (bool)*(undefined1 *)&pTVar31->ArrayNum;
          param_1[1].OutputData.bCancelExecution = (bool)uVar21;
          *(undefined2 *)&param_1[1].OutputData.field_0x12 = uVar14;
          *(int *)&param_1[1].OutputData.field_0x14 = pTVar31->ArrayMax;
          pTVar31->ArrayNum = 0;
          pTVar31->ArrayMax = 0;
        }
        if (local_478.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_478.AllocatorInstance.Data);
        }
        *(undefined1 *)&param_1[1].AsyncState.AsyncCurrentWriteIndex = 1;
        if ((IPCGGraphExecutionSource *)local_670.Data != (IPCGGraphExecutionSource *)0x0) {
          FMemory::Free(local_670.Data);
        }
        if (local_638.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_638.AllocatorInstance.Data);
        }
        if (bVar20) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      this_00 = local_648;
      iVar36._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
      iVar36._1_1_ = param_1[1].OutputData.bCancelExecution;
      iVar36._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
      if (iVar36 == 0) {
        if (5 < (byte)LogPCG._0_1_) {
          this_02 = FText::AsLocalizable_Advanced_LocText
                              (&local_4b8,L"PCGDataFromActorElement",L"NoActorFound",
                               L"No matching actor was found");
          FText::ToString(this_02);
          FPCGContext::GetTaskName(param_1,&local_428);
          FPCGContext::GetExecutionSourceName(param_1,&local_468);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_468.Data.AllocatorInstance.Data);
          }
          if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_428.Data.AllocatorInstance.Data);
          }
          if (local_4b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_4b8.TextData.Reference + 0x10))();
          }
        }
        bVar20 = true;
LAB_149b78776:
        if (local_278[0] != (code *)0x0) {
          pppuVar28 = &local_268;
          if (pppuStack_250 != (undefined ***)0x0) {
            pppuVar28 = pppuStack_250;
          }
          (*(code *)(*pppuVar28)[2])();
        }
        if (local_248[0] != (code *)0x0) {
          pppuVar28 = &local_238;
          if (pppuStack_220 != (undefined ***)0x0) {
            pppuVar28 = pppuStack_220;
          }
          (*(code *)(*pppuVar28)[2])();
        }
        goto LAB_149b7895d;
      }
      if ((pUVar25->Mode == GetDataFromPCGComponent) ||
         (pUVar25->Mode == GetDataFromPCGComponentOrParseComponents)) {
        puVar37 = *(undefined8 **)&param_1[1].OutputData.TaggedData.ArrayNum;
        iVar23._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
        iVar23._1_1_ = param_1[1].OutputData.bCancelExecution;
        iVar23._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
        local_628.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_628.ArrayNum = 0;
        local_628.ArrayMax = 0;
        puVar6 = puVar37 + iVar23;
        while( true ) {
          iVar10._0_1_ = param_1[1].OutputData.bCancelExecutionOnEmpty;
          iVar10._1_1_ = param_1[1].OutputData.bCancelExecution;
          iVar10._2_2_ = *(undefined2 *)&param_1[1].OutputData.field_0x12;
          if (iVar10 != iVar23) {
            local_675[0] = 0;
            `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_675);
          }
          if (puVar37 == puVar6) break;
          GatherWaitTasks(this_00,(AActor *)*puVar37,param_1,&local_628);
          puVar37 = puVar37 + 1;
        }
        if (local_628.ArrayNum != 0) {
          pIVar38 = (IPCGGraphExecutionSource *)0x0;
          param_1->bIsPaused = true;
          local_5f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5f0.ArrayNum = 0;
          local_5f0.ArrayMax = 0;
          if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
             (bVar20 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar20)
             ) {
            pIVar38 = (param_1->ExecutionSource).InterfaceInstance;
          }
          pTVar32 = FPCGContext::GetOrCreateHandle(param_1,&local_498);
          local_400 = pTVar32->Object;
          local_3f8 = (pTVar32->WeakReferenceCount).ReferenceController;
          (pTVar32->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pTVar32->Object = (FPCGContextHandle *)0x0;
          local_408 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::`107'::<lambda_6>,0,0>
                       ::_vftable_;
          local_418[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FPCGDataFromActorElement::ExecuteInternal'::__l107::<lambda_6>,void,FPCGContext_*>
                         ::Call;
          local_3f0 = 0;
          pTVar32 = FPCGContext::GetOrCreateHandle(param_1,&local_4a8);
          local_440 = pTVar32->Object;
          local_438 = (pTVar32->WeakReferenceCount).ReferenceController;
          (pTVar32->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pTVar32->Object = (FPCGContextHandle *)0x0;
          local_448 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::`107'::<lambda_5>,0,0>
                       ::_vftable_;
          local_458[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FPCGDataFromActorElement::ExecuteInternal'::__l107::<lambda_5>,bool,FPCGContext_*>
                         ::Call;
          local_430 = 0;
          pFVar33 = FPCGScheduleGenericParams::FPCGScheduleGenericParams
                              ((FPCGScheduleGenericParams *)local_f8,
                               (TFunction<bool___cdecl(FPCGContext_*)> *)local_458,
                               (TFunction<void___cdecl(FPCGContext_*)> *)local_418,pIVar38,
                               &local_628,&local_5f0,false);
          FPCGContext::ScheduleGeneric(param_1,pFVar33);
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data);
          }
          if (local_88.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data);
          }
          if (local_b8 != 0) {
            plVar35 = local_a8;
            if (local_90 != (longlong *)0x0) {
              plVar35 = local_90;
            }
            (**(code **)(*plVar35 + 0x10))();
          }
          if (local_f8._0_8_ != 0) {
            plVar35 = (longlong *)(local_f8 + 0x10);
            if ((longlong *)local_f8._40_8_ != (longlong *)0x0) {
              plVar35 = (longlong *)local_f8._40_8_;
            }
            (**(code **)(*plVar35 + 0x10))();
          }
          if (local_4a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
             ) {
            LOCK();
            paVar2 = &(local_4a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar9 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if ((aVar9 == (atomic<int>)0x1) &&
               (local_4a8.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0)) {
              (**(code **)((local_4a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_4a8.WeakReferenceCount.ReferenceController,1);
            }
          }
          if (local_498.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
             ) {
            LOCK();
            paVar2 = &(local_498.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar9 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if ((aVar9 == (atomic<int>)0x1) &&
               (local_498.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0)) {
              (**(code **)((local_498.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_498.WeakReferenceCount.ReferenceController,1);
            }
          }
          if (local_5f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5f0.AllocatorInstance.Data);
          }
          bVar20 = false;
          if (local_628.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_628.AllocatorInstance.Data);
          }
          goto LAB_149b78776;
        }
        if (local_628.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_628.AllocatorInstance.Data);
        }
      }
      if (local_278[0] != (code *)0x0) {
        pppuVar28 = &local_268;
        if (pppuStack_250 != (undefined ***)0x0) {
          pppuVar28 = pppuStack_250;
        }
        (*(code *)(*pppuVar28)[2])();
      }
      if (local_248[0] != (code *)0x0) {
        pppuVar28 = &local_238;
        if (pppuStack_220 != (undefined ***)0x0) {
          pppuVar28 = pppuStack_220;
        }
        (*(code *)(*pppuVar28)[2])();
      }
      this = local_648;
      if ((char)param_1[1].AsyncState.AsyncCurrentWriteIndex == '\0') goto LAB_149b7895b;
    }
    local_618 = (bool *)0x0;
    local_610 = 0;
    (**(code **)((longlong)*this + 0xc0))
              (this,param_1,pUVar25,&param_1[1].OutputData.TaggedData.ArrayNum);
    pbVar39 = local_618;
    iVar36 = (int)local_610;
    lVar44 = (longlong)(int)local_610;
    if ((int)local_610 != 0) {
      *(undefined1 *)((longlong)&param_1[1].AsyncState.AsyncCurrentWriteIndex + 1) = 1;
      param_1->bIsPaused = true;
      this_03 = &param_1->DynamicDependencies;
      if (((int)local_610 < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        uVar21 = (*pcVar13)();
        return (bool)uVar21;
      }
      uVar24 = *(int *)&(param_1->DynamicDependencies).Elements.field_0x8 -
               *(int *)&(param_1->DynamicDependencies).Elements.field_0x34;
      uVar41 = iVar36 + uVar24;
      if (uVar24 < uVar41) {
        if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar41);
        }
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_03,uVar41);
        iVar36 = 1;
        if (3 < uVar41) {
          uVar8 = (ulonglong)((uVar41 >> 1) + 7) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar36 = 1 << ((byte)lVar12 & 0x1f);
        }
        iVar23 = (param_1->DynamicDependencies).HashSize;
        if ((iVar23 == 0) || (iVar23 < iVar36)) {
          (param_1->DynamicDependencies).HashSize = iVar36;
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Rehash
                    (this_03);
        }
      }
      pbVar7 = pbVar39 + lVar44 * 8;
      for (; pbVar39 != pbVar7; pbVar39 = pbVar39 + 8) {
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64_const_&>(this_03,&local_5e0,pbVar39);
      }
      if (local_618 != (bool *)0x0) {
        FMemory::Free(local_618);
      }
      bVar20 = false;
      goto LAB_149b7895d;
    }
    if (local_618 != (bool *)0x0) {
      FMemory::Free(local_618);
    }
  }
LAB_149b7895b:
  bVar20 = true;
LAB_149b7895d:
  if (bVar45) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar20;
}

// GatherWaitTasks @ 149b8a530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
FPCGDataFromActorElement::GatherWaitTasks
          (FPCGDataFromActorElement *this,AActor *param_1,FPCGContext *param_2,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  IPCGGraphExecutionSource *pIVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  UPCGDataFromActorSettings *pUVar10;
  UPCGComponent *pUVar11;
  UClass *pUVar12;
  TBox<double> *pTVar13;
  UPCGSubsystem *pUVar14;
  UPCGComponent *pUVar15;
  FPCGStack *pFVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStackY_148 [32];
  undefined1 local_f8 [8];
  ulong64 local_f0;
  ulong64 local_e8;
  UPCGDataFromActorSettings *local_e0;
  UPCGComponent *local_d8;
  TBox<double> local_d0;
  undefined1 local_98 [16];
  uint local_88;
  TBox<double> local_80;
  ulonglong local_48;
  
  if (param_1 != (AActor *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
    if ((param_2 == (FPCGContext *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Context",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                           ,0x273,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pUVar10 = FPCGContext::GetInputSettings<UPCGDataFromActorSettings>(param_2);
    local_e0 = pUVar10;
    if ((pUVar10 == (UPCGDataFromActorSettings *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Settings",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                           ,0x276,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((((param_2->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
         (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_2->ExecutionSource), bVar8)) &&
        (pIVar3 = (param_2->ExecutionSource).InterfaceInstance,
        pIVar3 != (IPCGGraphExecutionSource *)0x0)) &&
       (pUVar11 = (UPCGComponent *)(**(code **)((longlong)*pIVar3 + 8))(),
       pUVar11 != (UPCGComponent *)0x0)) {
      pUVar12 = Z_Construct_UClass_UPCGComponent_NoRegister();
      iVar9 = (int)pUVar12->_padding_;
      if (((iVar9 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
           &pUVar12->_padding_)) &&
         (local_d8 = UPCGComponent::GetOriginalComponent(pUVar11), local_d8 != (UPCGComponent *)0x0)
         ) {
        if (pUVar10->bComponentsMustOverlapSelf == false) {
          local_d0.IsValid = '\0';
          pTVar13 = &local_d0;
        }
        else {
          pTVar13 = UPCGComponent::GetGridBounds(pUVar11,&local_80);
        }
        bVar8 = pUVar10->bComponentsMustOverlapSelf;
        iVar9 = pUVar10->AllowedGrids;
        bVar2 = pUVar10->bGetDataOnAllGrids;
        pUVar14 = UPCGComponent::GetSubsystem(pUVar11);
        PCGDataFromActorHelpers::GetPCGComponentsFromActor
                  ((TInlineComponentArray<UPCGComponent_*,1> *)local_98,param_1,pUVar14,true,bVar2,
                   iVar9,bVar8,pTVar13);
        uVar7 = local_88;
        pUVar10 = local_e0;
        uVar17 = (ulonglong)(int)local_88;
        puVar18 = (undefined8 *)local_98;
        if ((undefined8 *)local_98._8_8_ != (undefined8 *)0x0) {
          puVar18 = (undefined8 *)local_98._8_8_;
        }
        puVar1 = puVar18 + uVar17;
LAB_149b8a710:
        if ((uint)uVar17 != uVar7) {
          local_f8[0] = 0;
          `TCheckedPointerIterator<UPCGComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_f8);
        }
        if (puVar18 == puVar1) {
          if ((undefined8 *)local_98._8_8_ == (undefined8 *)0x0) {
            return;
          }
          FMemory::Free((void *)local_98._8_8_);
          return;
        }
        pUVar11 = (UPCGComponent *)*puVar18;
        if ((param_2 == (FPCGContext *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Context && Settings",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                               ,0x25d,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar8 = FPCGComponentSelectorSettings::FilterComponent
                          ((FPCGComponentSelectorSettings *)&param_2[1].OutputData.DataCrcs,
                           (UActorComponent *)pUVar11);
        if (((((bVar8) && (pUVar11 != (UPCGComponent *)0x0)) &&
             (pUVar15 = UPCGComponent::GetOriginalComponent(pUVar11),
             pUVar15 != (UPCGComponent *)0x0)) && (pUVar15 != local_d8)) &&
           (((pUVar10->ActorSelector).bIgnoreSelfAndChildren == false ||
            (pUVar15->_padding_ != local_d8->_padding_)))) {
          uVar4 = pUVar11->CurrentGenerationTask;
          if (uVar4 != 0xffffffffffffffff) {
            pFVar5 = (param_3->AllocatorInstance).Data;
            local_f0 = uVar4;
            if (((pFVar5 <= (FScriptContainerElement *)&local_f0) &&
                ((FScriptContainerElement *)&local_f0 < pFVar5 + (longlong)param_3->ArrayMax * 8))
               && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = param_3->ArrayNum;
            if (iVar9 == param_3->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            puVar18 = puVar18 + 1;
            param_3->ArrayNum = iVar9 + 1;
            *(ulong64 *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_f0;
            uVar17 = (ulonglong)local_88;
            goto LAB_149b8a710;
          }
          if ((((pUVar11->bGenerated == false) && (pUVar11->bActivated != false)) &&
              (pUVar11->SerializedEditingMode == Preview)) && (pUVar11->_padding_ != 0)) {
            local_e8 = UPCGComponent::GenerateLocalGetTaskId
                                 (pUVar11,GenerateOnDemand,false,Uninitialized);
            if (local_e8 == 0xffffffffffffffff) {
              pFVar16 = FPCGStackHandle::GetStack(&param_2->StackHandle);
              PCGGraphExecutionLogging::LogGraphScheduleDependencyFailed
                        ((IPCGGraphExecutionSource *)&pUVar11->_padding_,pFVar16);
              goto LAB_149b8a9a2;
            }
            pFVar16 = FPCGStackHandle::GetStack(&param_2->StackHandle);
            PCGGraphExecutionLogging::LogGraphScheduleDependency
                      ((IPCGGraphExecutionSource *)&pUVar11->_padding_,pFVar16);
            pFVar5 = (param_3->AllocatorInstance).Data;
            if (((pFVar5 <= (FScriptContainerElement *)&local_e8) &&
                ((FScriptContainerElement *)&local_e8 < pFVar5 + (longlong)param_3->ArrayMax * 8))
               && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = param_3->ArrayNum;
            if (iVar9 == param_3->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            puVar18 = puVar18 + 1;
            param_3->ArrayNum = iVar9 + 1;
            *(ulong64 *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_e8;
            uVar17 = (ulonglong)local_88;
            goto LAB_149b8a710;
          }
        }
LAB_149b8a9a2:
        uVar17 = (ulonglong)local_88;
        puVar18 = puVar18 + 1;
        goto LAB_149b8a710;
      }
    }
  }
  return;
}

// GetDependenciesCrc @ 149b8eb60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FPCGDataFromActorElement::GetDependenciesCrc
          (FPCGDataFromActorElement *this,FPCGGetDependenciesCrcParams *param_1,FPCGCrc *param_2)

{
  char cVar1;
  UPCGSettings *pUVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UPCGComponent *pUVar6;
  UPCGData *pUVar7;
  FPCGCrc FVar8;
  UPCGComponent *pUVar9;
  bool bVar10;
  FPCGCrc local_res10 [2];
  undefined1 local_res20 [8];
  
  pUVar9 = (UPCGComponent *)0x0;
  local_res10[0].Value = 0;
  local_res10[0]._4_4_ = local_res10[0]._4_4_ & 0xffffff00;
  IPCGElement::GetDependenciesCrc((IPCGElement *)this,param_1,local_res10);
  pUVar2 = param_1->Settings;
  if (pUVar2 != (UPCGSettings *)0x0) {
    pUVar5 = UPCGDataFromActorSettings::StaticClass();
    iVar4 = (int)pUVar5->_padding_;
    if ((iVar4 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar5->_padding_)) {
      if ((char)pUVar2[2]._padding_ != '\0') {
        return;
      }
      cVar1 = (char)pUVar2[1]._padding_;
      if ((cVar1 == '\0') || (cVar1 == '\x04')) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      cVar1 = *(char *)((longlong)&pUVar2[1]._padding_ + 1);
      if ((param_1->ExecutionSource != (IPCGGraphExecutionSource *)0x0) &&
         (pUVar6 = (UPCGComponent *)(**(code **)((longlong)*param_1->ExecutionSource + 8))(),
         pUVar6 != (UPCGComponent *)0x0)) {
        pUVar5 = Z_Construct_UClass_UPCGComponent_NoRegister();
        iVar4 = (int)pUVar5->_padding_;
        if ((((iVar4 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
              &pUVar5->_padding_)) &&
            (((pUVar9 = pUVar6, bVar10 || (cVar1 != '\0')) &&
             (((char)pUVar2[1]._padding_ != '\x04' ||
              (pUVar6 = UPCGComponent::GetOriginalComponent(pUVar6), pUVar6 != (UPCGComponent *)0x0)
              ))))) && (pUVar7 = UPCGComponent::GetActorPCGData(pUVar6), pUVar7 != (UPCGData *)0x0))
        {
          FVar8 = UPCGData::GetOrComputeCrc(pUVar7,SUB81(local_res20,0));
          local_res10[0].Value =
               local_res10[0].Value ^
               *(int *)FVar8 +
               local_res10[0].Value * 0x40 + (local_res10[0].Value >> 2) + -0x61c88647;
          if ((bVar10) && ((AActor *)pUVar6->_padding_ != (AActor *)0x0)) {
            if ((*(char *)((longlong)&pUVar2[1].DebugBufferSize + 2) == '\0') &&
               (((cVar1 = (char)pUVar2[1].DebugBufferSize, cVar1 != '\x05' && (cVar1 != '\x06')) &&
                (cVar1 != '\x01')))) {
              bVar10 = false;
            }
            else {
              bVar10 = true;
            }
            iVar4 = UPCGActorHelpers::ComputeHashFromActorTagsAndReference
                              ((AActor *)pUVar6->_padding_,true,bVar10);
            local_res10[0].Value =
                 local_res10[0].Value ^
                 (local_res10[0].Value >> 2) + 0x9e3779b9 + iVar4 + local_res10[0].Value * 0x40;
          }
        }
      }
      cVar1 = (char)pUVar2[1].DebugBufferSize;
      if ((cVar1 == '\x03') || (cVar1 == '\x04')) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      if ((*(char *)((longlong)&pUVar2[1].DebugBufferSize + 3) == '\0') &&
         (pUVar2[1].field_0xc4 != '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((((pUVar9 != (UPCGComponent *)0x0) && (bVar10)) && (bVar3)) &&
         (pUVar7 = UPCGComponent::GetActorPCGData(pUVar9), pUVar7 != (UPCGData *)0x0)) {
        FVar8 = UPCGData::GetOrComputeCrc(pUVar7,SUB81(local_res20,0));
        local_res10[0].Value =
             local_res10[0].Value ^
             *(int *)FVar8 + local_res10[0].Value * 0x40 + (local_res10[0].Value >> 2) + -0x61c88647
        ;
      }
    }
  }
  FVar8.bValid = local_res10[0].bValid;
  FVar8._5_3_ = local_res10[0]._5_3_;
  FVar8.Value = local_res10[0].Value;
  *param_2 = FVar8;
  return;
}

// IsCacheable @ 149b93170

bool __thiscall
FPCGDataFromActorElement::IsCacheable(FPCGDataFromActorElement *this,UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UPCGSettings *)0x0) {
    pUVar2 = UPCGDataFromActorSettings::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (char)param_1[2]._padding_ == '\0';
    }
  }
  return false;
}

// MergeActorsIntoData @ 149b93890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGDataFromActorElement::MergeActorsIntoData
          (FPCGDataFromActorElement *this,FPCGContext *param_1,UPCGDataFromActorSettings *param_2,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPCGBasePointData *this_00;
  FPCGDataPtrWrapper *this_01;
  FScriptContainerElement *pFVar6;
  byte bVar7;
  bool local_res10 [8];
  UPCGDataFromActorSettings *local_res18;
  undefined1 local_res20 [8];
  FString local_58;
  FString local_48;
  
  local_res18 = param_2;
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                         ,0x351,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((param_2 == (UPCGDataFromActorSettings *)0x0) || (param_2->Mode != GetSinglePoint)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings && Settings->Mode == EPCGGetDataFromActorMode::GetSinglePoint",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                         ,0x352,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = FPCGContext::NewPointData_AnyThread(param_1);
  pFVar6 = (param_3->AllocatorInstance).Data;
  iVar5 = param_3->ArrayNum;
  bVar7 = 0;
  local_res10[0] = false;
  pFVar2 = pFVar6 + (longlong)iVar5 * 8;
  while( true ) {
    if (param_3->ArrayNum != iVar5) {
      `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar6 == pFVar2) break;
    if (*(AActor **)pFVar6 != (AActor *)0x0) {
      local_res10[0] = false;
      UPCGBasePointData::AddSinglePointFromActor(this_00,*(AActor **)pFVar6,local_res10);
      bVar7 = bVar7 | local_res10[0];
      local_res10[0] = true;
    }
    pFVar6 = pFVar6 + 8;
  }
  if (((bVar7 != 0) && (local_res18->bSilenceSanitizedAttributeNameWarnings == false)) &&
     (2 < (byte)LogPCG._0_1_)) {
    FText::ToString(&PCGDataFromActorConstants::TagNamesSanitizedWarning);
    bVar4 = param_1 != (FPCGContext *)0x0;
    if (bVar4) {
      FPCGContext::GetTaskName(param_1,&local_48);
      FPCGContext::GetExecutionSourceName(param_1,&local_58);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((bVar4) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_res10[0] != false) {
    iVar5 = (param_1->OutputData).TaggedData.ArrayNum;
    piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
    }
    (param_1->OutputData).TaggedData.ArrayNum = iVar5 + 1;
    this_01 = (FPCGDataPtrWrapper *)
              ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar5 * 0x78);
    this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
    (this_01->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
    (this_01->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
    this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
    this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
    this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
    FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)this_00);
  }
  return;
}

// PrepareDataInternal @ 149b95fe0

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
FPCGDataFromActorElement::PrepareDataInternal(FPCGDataFromActorElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPCGDataFromActorSettings *pUVar4;
  bool bVar5;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_18;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId324,"FPCGDataFromActorElement::PrepareData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
               ,0x144);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId324);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                         ,0x145,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar4 = FPCGContext::GetInputSettings<UPCGDataFromActorSettings>(param_1);
  if ((pUVar4 == (UPCGDataFromActorSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                         ,0x148,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((pUVar4->ActorSelector).ActorFilter == FromInput) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    bVar2 = FPCGLoadObjectsFromPathContext::InitializeAndRequestLoad
                      ((FPCGLoadObjectsFromPathContext *)param_1,PCGPinConstants::DefaultInputLabel,
                       &(pUVar4->ActorSelector).ActorReferenceSelector,&local_18,false,true,false);
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if ((FSoftObjectPath *)local_18.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  else {
    bVar2 = true;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

// ProcessActor @ 149b964b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPCGDataFromActorElement::ProcessActor
          (FPCGDataFromActorElement *this,FPCGContext *param_1,UPCGDataFromActorSettings *param_2,
          AActor *param_3)

{
  FPCGDataCollection *this_00;
  int *piVar1;
  ForElementType<UPCGComponent_*> FVar2;
  FScriptContainerElement *pFVar3;
  EPCGGetDataFromActorMode EVar4;
  FName FVar5;
  UStruct *pUVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  EPCGHiGenGrid EVar11;
  uint uVar12;
  int iVar13;
  EPCGDataType EVar14;
  UPCGComponent *pUVar15;
  UPCGSubsystem *pUVar16;
  TArray<UPCGComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar17;
  FText *pFVar18;
  FText *pFVar19;
  FTextFormat *pFVar20;
  FPCGTaggedData *pFVar21;
  FScriptContainerElement *pFVar22;
  FString *pFVar23;
  FText *pFVar24;
  FText *pFVar25;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar26;
  UScriptStruct *pUVar27;
  FPCGTaggedData *pFVar28;
  UPCGComponent *pUVar29;
  ForAnyElementType FVar30;
  AActor *pAVar31;
  ulonglong uVar32;
  UPCGComponent *pUVar33;
  UPCGComponent *pUVar34;
  ForElementType<UPCGComponent_*> FVar35;
  undefined1 auStackY_448 [32];
  undefined1 local_3f7;
  undefined1 local_3f6;
  undefined1 local_3f5;
  undefined1 local_3f4 [4];
  AActor *local_3f0;
  UPCGComponent *local_3e8;
  UPCGDataFromActorSettings *local_3e0;
  TBox<double> *local_3d8;
  UPCGComponent *local_3d0;
  FName local_3c8;
  FPCGDataFromActorContext *local_3c0;
  TFieldIterator<FProperty> local_3b8;
  ForElementType<UPCGComponent_*> local_3a0;
  undefined8 local_398;
  FString local_390;
  undefined1 local_380 [12];
  FName local_374;
  FName local_36c;
  ForElementType<UPCGComponent_*> local_360;
  FName local_358;
  UPCGComponent *local_350;
  FPCGDataFromActorContext *local_348;
  UPCGDataFromActorSettings *local_340;
  FString local_338;
  FString local_328;
  <lambda_1> local_318;
  FPCGDataCollection local_300;
  FPCGDataCollection local_2d0;
  FString local_2a0;
  FText local_290;
  FText local_280;
  FText local_270;
  FText local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FText local_220;
  FText local_210;
  FString local_200;
  FString local_1f0;
  FText local_1e0;
  FText local_1d0;
  FString local_1c0;
  FText local_1b0;
  FString local_1a0;
  FText local_190;
  FText local_180;
  FTextFormat local_170;
  FText local_160;
  FText local_150;
  FTextFormat local_140;
  FText local_130;
  FTextFormat local_120;
  FText local_110;
  FText local_100;
  FTextFormat local_f0;
  TBox<double> local_e0;
  TArray<UPCGComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_a8;
  undefined1 local_90 [24];
  TBox<double> local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_448;
  pUVar33 = (UPCGComponent *)0x0;
  local_3d8 = (TBox<double> *)((ulonglong)local_3d8 & 0xffffffff00000000);
  local_3f0 = param_3;
  local_3e0 = param_2;
  local_3c0 = (FPCGDataFromActorContext *)param_1;
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                         ,0x375,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_2 == (UPCGDataFromActorSettings *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                         ,0x377,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar15 = pUVar33;
  if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
     (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar8)) {
    pUVar15 = (UPCGComponent *)(param_1->ExecutionSource).InterfaceInstance;
  }
  pUVar15 = CastChecked<UPCGComponent,IPCGGraphExecutionSource>((IPCGGraphExecutionSource *)pUVar15)
  ;
  local_3d0 = pUVar33;
  local_3e8 = pUVar15;
  if (pUVar15 != (UPCGComponent *)0x0) {
    local_3d0 = UPCGComponent::GetOriginalComponent(pUVar15);
  }
  if (param_3 == (AActor *)0x0) {
    return;
  }
  if (((uint)param_3->_padding_ >> 0x1e & 1) != 0) {
    return;
  }
  if (local_3d0 == (UPCGComponent *)0x0) {
    return;
  }
  EVar4 = param_2->Mode;
  local_a8.AllocatorInstance.SecondaryData = (ForElementType<UPCGComponent_*>)0x0;
  pUVar34 = (UPCGComponent *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 1;
  bVar8 = false;
  if ((EVar4 == GetDataFromPCGComponent) || (EVar4 == GetDataFromPCGComponentOrParseComponents)) {
    if (param_2->bComponentsMustOverlapSelf == false) {
      local_e0.IsValid = '\0';
      local_3d8 = &local_e0;
    }
    else {
      local_3d8 = UPCGComponent::GetGridBounds(pUVar15,&local_78);
    }
    bVar8 = param_2->bComponentsMustOverlapSelf;
    iVar10 = param_2->AllowedGrids;
    bVar9 = local_3e0->bGetDataOnAllGrids;
    pUVar16 = UPCGComponent::GetSubsystem(local_3e8);
    pTVar17 = (TArray<UPCGComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              PCGDataFromActorHelpers::GetPCGComponentsFromActor
                        ((TInlineComponentArray<UPCGComponent_*,1> *)local_90,local_3f0,pUVar16,true
                         ,bVar9,iVar10,bVar8,local_3d8);
    if (&local_a8 != pTVar17) {
      if ((pTVar17->AllocatorInstance).SecondaryData == (ForElementType<UPCGComponent_*>)0x0) {
        local_a8.AllocatorInstance.InlineData = *&(pTVar17->AllocatorInstance).InlineData;
      }
      if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<UPCGComponent_*>)0x0) {
        FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
      }
      local_a8.AllocatorInstance.SecondaryData = (pTVar17->AllocatorInstance).SecondaryData;
      (pTVar17->AllocatorInstance).SecondaryData = (ForElementType<UPCGComponent_*>)0x0;
      local_a8.ArrayNum = pTVar17->ArrayNum;
      local_a8.ArrayMax = pTVar17->ArrayMax;
      pTVar17->ArrayNum = 0;
      pTVar17->ArrayMax = 1;
    }
    if ((void *)local_90._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_90._8_8_);
    }
    local_318.Context = local_3c0;
    local_318.Settings = local_3e0;
    local_318.SourceOriginalComponent = local_3d0;
    TArray<UPCGComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
    RemoveAllSwap<_FPCGDataFromActorElement::ProcessActor_::__l22::<lambda_1>_>
              (&local_a8,&local_318,Default);
    iVar10 = local_a8.ArrayNum;
    pUVar29 = (UPCGComponent *)(longlong)local_a8.ArrayNum;
    FVar35 = (ForElementType<UPCGComponent_*>)&local_a8;
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<UPCGComponent_*>)0x0) {
      FVar35 = local_a8.AllocatorInstance.SecondaryData;
    }
    FVar2 = (ForElementType<UPCGComponent_*>)((longlong)FVar35 + (longlong)pUVar29 * 8);
    bVar8 = false;
    while( true ) {
      if ((uint)pUVar29 != iVar10) {
        local_3f7 = 0;
        `TCheckedPointerIterator<UPCGComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3f7);
        pUVar29 = (UPCGComponent *)(ulonglong)(uint)local_a8.ArrayNum;
      }
      pUVar15 = local_3e8;
      param_1 = (FPCGContext *)local_3c0;
      param_2 = local_3e0;
      if (FVar35 == FVar2) break;
      bVar8 = (bool)(bVar8 | *(int *)(*(longlong *)FVar35 + 0x2f0) != 0);
      FVar35 = (ForElementType<UPCGComponent_*>)((longlong)FVar35 + 8);
    }
  }
  else {
    pUVar29 = pUVar33;
    pUVar34 = pUVar33;
    if (EVar4 == GetDataFromProperty) {
      FVar5 = param_2->PropertyName;
      local_398 = 0;
      pUVar15 = local_3e8;
      if ((FVar5 != (FName)0x0) &&
         (pUVar6 = (UStruct *)local_3f0->_padding_, pUVar29 = (UPCGComponent *)0x0,
         FVar5 != (FName)0x0)) {
        if (pUVar6 == (UStruct *)0x0) {
          local_3b8.Field = (FField *)0x0;
        }
        else {
          local_3b8.Field = pUVar6->ChildProperties;
        }
        local_3b8.InterfaceIndex = -1;
        local_3b8.bIncludeSuper = true;
        local_3b8.bIncludeDeprecated = true;
        local_3b8.bIncludeInterface = false;
        local_3b8.Struct = pUVar6;
        TFieldIterator<FProperty>::IterateToNext(&local_3b8);
        pUVar15 = (UPCGComponent *)local_3b8.Field;
        while (pUVar34 = pUVar33, local_3b8.Field = (FField *)pUVar15,
              pUVar15 != (UPCGComponent *)0x0) {
          bVar9 = IsThisNotNull(pUVar15,"FField::GetFName");
          if (bVar9) {
            local_3c8 = (FName)pUVar15->_padding_;
          }
          else {
            local_3c8.ComparisonIndex.Value = 0;
            local_3c8.Number = 0;
          }
          pUVar34 = pUVar15;
          if (local_3c8 == FVar5) break;
          local_3b8.Field = (FField *)pUVar15->_padding_;
          TFieldIterator<FProperty>::IterateToNext(&local_3b8);
          pUVar15 = (UPCGComponent *)local_3b8.Field;
        }
        pUVar29 = (UPCGComponent *)(ulonglong)(uint)local_a8.ArrayNum;
        pUVar15 = local_3e8;
      }
    }
  }
  EVar4 = param_2->Mode;
  iVar10 = (int)pUVar29;
  if (EVar4 == GetDataFromPCGComponent) {
    if (!bVar8) {
      if ((iVar10 != 0) && (4 < (byte)LogPCG._0_1_)) {
        local_380._4_8_ = local_3f0->_padding_;
        pFVar18 = FText::FromName(&local_190,(FName *)(local_380 + 4));
        pFVar19 = FText::AsLocalizable_Advanced_LocText
                            (&local_1d0,L"PCGDataFromActorElement",L"ActorHasNoGeneratedData",
                             L"Actor \'{0}\' does not have any previously generated data, or all its components were filtered out."
                            );
        pFVar20 = FTextFormat::FTextFormat(&local_120,pFVar19,Default);
        pFVar18 = FText::Format<FText>(&local_1e0,pFVar20,pFVar18);
        FText::ToString(pFVar18);
        if ((FPCGDataFromActorContext *)param_1 != (FPCGDataFromActorContext *)0x0) {
          FPCGContext::GetTaskName(param_1,&local_1f0);
          pUVar33 = (UPCGComponent *)&DAT_00000003;
          FPCGContext::GetExecutionSourceName(param_1,&local_200);
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((((ulonglong)pUVar33 & 2) != 0) &&
           (pUVar33 = (UPCGComponent *)(ulonglong)((uint)pUVar33 & 0xfffffffd),
           local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
        if ((((ulonglong)pUVar33 & 1) != 0) &&
           (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        if (local_1e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1e0.TextData.Reference + 0x10))();
        }
        if (local_1d0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1d0.TextData.Reference + 0x10))();
        }
      }
      goto LAB_149b97290;
    }
  }
  else if ((EVar4 == GetDataFromProperty) && (pUVar34 == (UPCGComponent *)0x0)) {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar18 = FText::FromName(&local_110,&param_2->PropertyName);
      local_374 = (FName)local_3f0->_padding_;
      pFVar19 = FText::FromName(&local_100,&local_374);
      pFVar24 = FText::AsLocalizable_Advanced_LocText
                          (&local_280,L"PCGDataFromActorElement",L"ActorHasNoProperty",
                           L"Actor \'{0}\' does not have a property name \'{1}\'");
      pFVar20 = FTextFormat::FTextFormat(&local_f0,pFVar24,Default);
      pFVar18 = FText::Format<FText,FText>(&local_290,pFVar20,pFVar19,pFVar18);
      FText::ToString(pFVar18);
      if ((FPCGDataFromActorContext *)param_1 != (FPCGDataFromActorContext *)0x0) {
        FPCGContext::GetTaskName(param_1,&local_2a0);
        pUVar33 = (UPCGComponent *)&DAT_0000000c;
        FPCGContext::GetExecutionSourceName(param_1,&local_1c0);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pUVar33 & 8) != 0) &&
         (pUVar33 = (UPCGComponent *)(ulonglong)((uint)pUVar33 & 0xfffffff7),
         local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pUVar33 & 4) != 0) &&
         (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
      }
      if (local_290.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_290.TextData.Reference + 0x10))();
      }
      if (local_280.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_280.TextData.Reference + 0x10))();
      }
    }
    goto LAB_149b97290;
  }
  this_00 = (FPCGDataCollection *)&((FPCGDataFromActorContext *)param_1)->_padding_;
  local_350 = pUVar15;
  local_348 = (FPCGDataFromActorContext *)param_1;
  local_340 = param_2;
  if (bVar8) {
    uVar32 = (ulonglong)iVar10;
    local_3d8 = (TBox<double> *)CONCAT44(local_3d8._4_4_,iVar10);
    FVar35 = (ForElementType<UPCGComponent_*>)&local_a8;
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<UPCGComponent_*>)0x0) {
      FVar35 = local_a8.AllocatorInstance.SecondaryData;
    }
    local_360 = (ForElementType<UPCGComponent_*>)((longlong)FVar35 + uVar32 * 8);
    while( true ) {
      FVar2 = local_360;
      local_3a0 = FVar35;
      if ((int)pUVar29 != (int)uVar32) {
        local_3f6 = 0;
        `TCheckedPointerIterator<UPCGComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3f6);
      }
      pAVar31 = local_3f0;
      if (FVar35 == FVar2) break;
      pUVar15 = *(UPCGComponent **)FVar35;
      iVar10 = (pUVar15->GeneratedGraphOutput).TaggedData.ArrayNum;
      uVar32 = (ulonglong)iVar10;
      pUVar34 = (UPCGComponent *)(pUVar15->GeneratedGraphOutput).TaggedData.AllocatorInstance.Data;
      local_3d0 = (UPCGComponent *)CONCAT44(local_3d0._4_4_,iVar10);
      pUVar29 = (UPCGComponent *)(&pUVar34->_padding_ + uVar32 * 0xf);
      local_3e8 = pUVar29;
      while( true ) {
        if ((pUVar15->GeneratedGraphOutput).TaggedData.ArrayNum != (int)uVar32) {
          local_3f5 = 0;
          `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_3f5);
        }
        if (pUVar34 == pUVar29) break;
        if (pUVar34->_padding_ == 0) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8309300110324401105>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                             ,0x3d1,"TaggedData.Data");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          pUVar29 = (UPCGComponent *)(this_00->TaggedData).AllocatorInstance.Data;
          if (((pUVar29 <= pUVar34) &&
              (pUVar34 < (UPCGComponent *)
                         (&pUVar29->_padding_ +
                         (longlong)
                         *(int *)((longlong)&((FPCGDataFromActorContext *)param_1)->_padding_ + 4) *
                         0xf))) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar10 = (int)((FPCGDataFromActorContext *)param_1)->_padding_;
          piVar1 = (int *)((longlong)&((FPCGDataFromActorContext *)param_1)->_padding_ + 4);
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)this_00,piVar1);
          }
          *(int *)&((FPCGDataFromActorContext *)param_1)->_padding_ = iVar10 + 1;
          pFVar21 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((this_00->TaggedData).AllocatorInstance.Data +
                               (longlong)iVar10 * 0x78),(FPCGTaggedData *)pUVar34);
          EVar11 = UPCGComponent::GetGenerationGrid(pUVar15);
          uVar12 = PCGHiGenGrid::GridToGridSize(EVar11);
          local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_390.Data.ArrayNum = 0;
          local_390.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_390,uVar12);
          ::FString::ConcatFF(&local_338,
                              &PCGDataFromActorConstants::PCGComponentDataGridSizeTagPrefix,
                              &local_390);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                    (&pFVar21->Tags,(FString *)local_380,(bool *)&local_338);
          if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_338.Data.AllocatorInstance.Data);
          }
          if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_390.Data.AllocatorInstance.Data);
          }
          pUVar29 = local_3e8;
          if ((pFVar21->Pin != PCGPinConstants::DefaultOutputLabel) &&
             ((param_2->ExpectedPins).ArrayNum != 0)) {
            pFVar22 = (param_2->ExpectedPins).AllocatorInstance.Data;
            pFVar3 = pFVar22 + (longlong)(param_2->ExpectedPins).ArrayNum * 8;
            if (pFVar22 != pFVar3) {
              do {
                if (*(longlong *)pFVar22 == pUVar34->_padding_) goto LAB_149b96e90;
                pFVar22 = pFVar22 + 8;
              } while (pFVar22 != pFVar3);
            }
            pFVar18 = FText::FromName(&local_1b0,(FName *)&pUVar34->_padding_);
            pFVar23 = ::FString::FString(&local_1a0,L"MISSINGOWNER");
            pUVar29 = (UPCGComponent *)&pUVar15->_padding_;
            if (pUVar15 == (UPCGComponent *)0x0) {
              pUVar29 = pUVar33;
            }
            pFVar23 = PCGLog::GetExecutionSourceName
                                (&local_250,(IPCGGraphExecutionSource *)pUVar29,true,pFVar23);
            pFVar19 = FText::FromString(&local_130,pFVar23);
            local_36c = (FName)pUVar15->_padding_;
            ::FName::ToString(&local_36c,&local_328);
            pFVar24 = FText::FromString(&local_180,&local_328);
            pFVar25 = FText::AsLocalizable_Advanced_LocText
                                (&local_260,L"PCGDataFromActorElement",
                                 L"InvalidOutputPinPCGComponentData",
                                 L"Component \'{0}\' on actor \'{1}\' has data from an unexpected output pin: \'{2}\'.\nMaybe the data is outdated, try regenerate this component to refresh its output data"
                                );
            pFVar20 = FTextFormat::FTextFormat(&local_170,pFVar25,Default);
            pFVar18 = FText::Format<FText,FText,FText>(&local_270,pFVar20,pFVar24,pFVar19,pFVar18);
            PCGLog::LogErrorOnGraph(pFVar18,(FPCGContext *)local_3c0);
            if (local_270.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_270.TextData.Reference + 0x10))();
            }
            if (local_260.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_260.TextData.Reference + 0x10))();
            }
            if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_328.Data.AllocatorInstance.Data);
            }
            pUVar29 = local_3e8;
            param_2 = local_3e0;
            if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_250.Data.AllocatorInstance.Data);
              pUVar29 = local_3e8;
              param_2 = local_3e0;
            }
          }
        }
LAB_149b96e90:
        uVar32 = (ulonglong)local_3d0 & 0xffffffff;
        pUVar34 = (UPCGComponent *)&pUVar34->_padding_;
      }
      pUVar29 = (UPCGComponent *)(ulonglong)(uint)local_a8.ArrayNum;
      FVar35 = (ForElementType<UPCGComponent_*>)((longlong)local_3a0 + 8);
      uVar32 = (ulonglong)local_3d8 & 0xffffffff;
    }
  }
  else if (pUVar34 == (UPCGComponent *)0x0) {
    EVar14 = (**(code **)(param_2->_padding_ + 0x4f0))(param_2);
    pAVar31 = local_3f0;
    `FPCGDataFromActorElement::ProcessActor'::__l2::<lambda_2>::operator()
              (&local_350,&local_300,local_3f0,EVar14,EVar4 != GetSinglePoint);
    if ((this_00 == &local_300) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = local_300.TaggedData.ArrayNum;
    if (local_300.TaggedData.ArrayNum != 0) {
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x78,8,local_300.TaggedData.ArrayNum,(ForAnyElementType *)this_00,
                          (int *)&((FPCGDataFromActorContext *)param_1)->_padding_,
                          (int *)((longlong)&((FPCGDataFromActorContext *)param_1)->_padding_ + 4));
      ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                ((this_00->TaggedData).AllocatorInstance.Data + (longlong)iVar13 * 0x78,
                 (FPCGTaggedData *)local_300.TaggedData.AllocatorInstance.Data,iVar10);
    }
    if (local_300.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_300.TaggedData.AllocatorInstance.Data,
               local_300.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)local_300.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_300.TaggedData.AllocatorInstance.Data);
    }
  }
  else {
    pTVar26 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        ((FProperty *)pUVar34,(UObject *)local_3f0,0);
    if ((*(uint *)(pUVar34->_padding_ + 0x18) >> 0x14 & 1) != 0) {
      pUVar27 = FPCGDataCollection::StaticStruct();
      if ((UScriptStruct *)pUVar34->_padding_ == (UScriptStruct *)0x0) {
        bVar8 = pUVar27 == (UScriptStruct *)0x0;
      }
      else {
        bVar8 = (UScriptStruct *)pUVar34->_padding_ == pUVar27;
      }
      if (bVar8) {
        TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
        Append<FPCGTaggedData,TSizedDefaultAllocator<32>_>
                  ((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)this_00,pTVar26);
        pAVar31 = local_3f0;
        goto LAB_149b97081;
      }
    }
    pAVar31 = local_3f0;
    if (2 < (byte)LogPCG._0_1_) {
      pFVar18 = FText::FromName(&local_160,&param_2->PropertyName);
      local_358 = (FName)local_3f0->_padding_;
      pFVar19 = FText::FromName(&local_150,&local_358);
      pFVar24 = FText::AsLocalizable_Advanced_LocText
                          (&local_210,L"PCGDataFromActorElement",L"PropertyTypeUnsupported",
                           L"Actor \'{0}\' property \'{1}\' does not have a supported type");
      pFVar20 = FTextFormat::FTextFormat(&local_140,pFVar24,Default);
      pFVar18 = FText::Format<FText,FText>(&local_220,pFVar20,pFVar19,pFVar18);
      FText::ToString(pFVar18);
      if ((FPCGDataFromActorContext *)param_1 != (FPCGDataFromActorContext *)0x0) {
        FPCGContext::GetTaskName(param_1,&local_230);
        pUVar33 = (UPCGComponent *)&DAT_00000030;
        FPCGContext::GetExecutionSourceName(param_1,&local_240);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pUVar33 & 0x20) != 0) &&
         (pUVar33 = (UPCGComponent *)(ulonglong)((uint)pUVar33 & 0xffffffdf),
         local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pUVar33 & 0x10) != 0) &&
         (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
      if (local_220.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_220.TextData.Reference + 0x10))();
      }
      pAVar31 = local_3f0;
      param_2 = local_3e0;
      if (local_210.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_210.TextData.Reference + 0x10))();
        pAVar31 = local_3f0;
        param_2 = local_3e0;
      }
    }
  }
LAB_149b97081:
  if ((param_2->bAlsoOutputSinglePointData != false) &&
     ((param_2->Mode == GetDataFromPCGComponent ||
      (param_2->Mode == GetDataFromPCGComponentOrParseComponents)))) {
    `FPCGDataFromActorElement::ProcessActor'::__l2::<lambda_2>::operator()
              (&local_350,&local_2d0,pAVar31,Any,false);
    iVar10 = local_2d0.TaggedData.ArrayNum;
    pFVar21 = (FPCGTaggedData *)
              (local_2d0.TaggedData.AllocatorInstance.Data +
              (longlong)local_2d0.TaggedData.ArrayNum * 0x78);
    FVar30.Data = local_2d0.TaggedData.AllocatorInstance.Data;
    while( true ) {
      if (local_2d0.TaggedData.ArrayNum != iVar10) {
        local_3f4[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_3f4);
      }
      if ((FPCGTaggedData *)FVar30.Data == pFVar21) break;
      pFVar28 = (FPCGTaggedData *)(this_00->TaggedData).AllocatorInstance.Data;
      if (((pFVar28 <= FVar30.Data) &&
          (FVar30.Data <
           pFVar28 + *(int *)((longlong)&((FPCGDataFromActorContext *)param_1)->_padding_ + 4))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar13 = (int)((FPCGDataFromActorContext *)param_1)->_padding_;
      piVar1 = (int *)((longlong)&((FPCGDataFromActorContext *)param_1)->_padding_ + 4);
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)this_00,piVar1);
      }
      *(int *)&((FPCGDataFromActorContext *)param_1)->_padding_ = iVar13 + 1;
      pFVar28 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((this_00->TaggedData).AllocatorInstance.Data + (longlong)iVar13 * 0x78),
                           (FPCGTaggedData *)FVar30.Data);
      FVar30.Data = FVar30.Data + 0x78;
      pFVar28->Pin = PCGDataFromActorConstants::SinglePointPinLabel;
    }
    if (local_2d0.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_2d0.TaggedData.AllocatorInstance.Data,
               local_2d0.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)local_2d0.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_2d0.TaggedData.AllocatorInstance.Data);
    }
  }
LAB_149b97290:
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<UPCGComponent_*>)0x0) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
  }
  return;
}

// ProcessActors @ 149b972e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGDataFromActorElement::ProcessActors
          (FPCGDataFromActorElement *this,FPCGContext *param_1,UPCGDataFromActorSettings *param_2,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res18 [8];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_38;
  
  if (param_2->Mode == GetSinglePoint) {
    if ((param_2->bMergeSinglePointData != false) && (1 < param_3->ArrayNum)) {
      MergeActorsIntoData(this,param_1,param_2,param_3);
      return;
    }
  }
  else if ((byte)(param_2->Mode - GetActorReference) < 2) {
    if (param_2->bMergeSinglePointData != false) {
      CreateReferenceData(this,param_1,param_2,param_3);
      return;
    }
    pFVar4 = (param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar4 == pFVar1) break;
      uVar3 = *(undefined8 *)pFVar4;
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
      *(undefined8 *)local_38.AllocatorInstance.Data = uVar3;
      CreateReferenceData(this,param_1,param_2,&local_38);
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      pFVar4 = pFVar4 + 8;
    }
    return;
  }
  pFVar4 = (param_3->AllocatorInstance).Data;
  iVar2 = param_3->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_3->ArrayNum != iVar2) {
      `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar4 == pFVar1) break;
    (**(code **)((longlong)*this + 200))(this,param_1,param_2,*(undefined8 *)pFVar4);
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// ProcessActors @ 149b97460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGDataFromActorElement::ProcessActors
          (FPCGDataFromActorElement *this,FPCGContext *param_1,UPCGDataFromActorSettings *param_2,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000149b97463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0xb8))();
  return;
}

// ShouldComputeFullOutputDataCrc @ 149b980d0

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
FPCGDataFromActorElement::ShouldComputeFullOutputDataCrc
          (FPCGDataFromActorElement *this,FPCGContext *param_1)

{
  return true;
}

// SupportsBasePointDataInputs @ 149b988e0

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
FPCGDataFromActorElement::SupportsBasePointDataInputs
          (FPCGDataFromActorElement *this,FPCGContext *param_1)

{
  return true;
}

