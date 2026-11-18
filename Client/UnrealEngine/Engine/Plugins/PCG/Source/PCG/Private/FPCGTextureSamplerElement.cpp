// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// operator() @ 149c56070

void __thiscall
`FPCGTextureSamplerElement::ExecuteInternal'[::I]::<lambda_1>::operator()(void *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  pTVar3 = *(TReferenceControllerBase<1> **)this;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar8 = pTVar7;
  }
  else {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      pTVar6 = pTVar7;
      pTVar8 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar5 = pTVar4->SharedReferenceCount;
      bVar9 = aVar2 == aVar5;
      if (bVar9) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      pTVar6 = pTVar4;
      pTVar8 = pTVar3;
      aVar2 = aVar5;
    } while (!bVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    pTVar7 = pTVar6;
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  if ((pTVar8 != (TReferenceControllerBase<1> *)0x0) && (pTVar8[1]._padding_ != 0)) {
    *(undefined1 *)(pTVar8[1]._padding_ + 0x138) = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// CanExecuteOnlyOnMainThread @ 149c5d680

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
FPCGTextureSamplerElement::CanExecuteOnlyOnMainThread
          (FPCGTextureSamplerElement *this,FPCGContext *param_1)

{
  return true;
}

// CreateContext @ 149c5fd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall FPCGTextureSamplerElement::CreateContext(FPCGTextureSamplerElement *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x300);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x300);
    FPCGContext::FPCGContext(this_00);
    *(undefined1 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 0;
    this_00->_padding_ = (longlong)&FPCGTextureSamplerContext::_vftable__for__FPCGContext__;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    *(undefined1 *)&this_00[1].OutputData.TaggedData.AllocatorInstance.Data = 0;
    this_00[1]._padding_ =
         (longlong)&FPCGTextureSamplerContext::_vftable__for__IPCGAsyncLoadingContext__;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this_00[1].OutputData.bCancelExecutionOnEmpty =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    this_00[1].OutputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar1
    ;
    *(double *)&this_00[1].OutputData.DataCrcs.ArrayNum = (double)fVar2;
    this_00[1].OutputData.InactiveOutputPinBitmask = (ulong64)(double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this_00[1].ExecutionSource.ObjectInstance.WeakPtr =
         (FWeakObjectPtr)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this_00[1].ExecutionSource.InterfaceInstance = (IPCGGraphExecutionSource *)(double)fVar1;
    this_00[1].SourceComponent.WeakPtr = (FWeakObjectPtr)(double)fVar2;
    *(double *)&this_00[1].bInputDataModified = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this_00[1].AsyncState.EndTime = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this_00[1].AsyncState.NumAvailableTasks = (double)fVar1;
    *(double *)&this_00[1].AsyncState.AsyncCurrentWriteIndex = (double)fVar2;
    this_00[1].AsyncState.TasksChunksStartEnd.AllocatorInstance.Data =
         (FScriptContainerElement *)(double)fVar3;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// ExecuteInternal @ 149c6f470

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
FPCGTextureSamplerElement::ExecuteInternal(FPCGTextureSamplerElement *this,FPCGContext *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  undefined1 *puVar3;
  atomic<int> aVar4;
  ITextData *pIVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  UPCGTextureSamplerSettings *pUVar13;
  UTextureRenderTarget2D *this_00;
  UClass *pUVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  IPCGGraphExecutionSource *pIVar18;
  longlong *plVar19;
  UObject *pUVar20;
  UPCGTextureData *this_01;
  FPCGModule *this_02;
  TWeakPtr<FPCGContextHandle,1> *pTVar21;
  FString *pFVar22;
  FPCGDataPtrWrapper *this_03;
  bool bVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  undefined1 auStackY_518 [32];
  uint local_4d4;
  FGCScopeGuard local_4d0;
  FGCScopeGuard local_4cf [7];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_4c8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_4b8;
  longlong *local_4a8;
  FString local_4a0;
  undefined1 local_490 [8];
  FString local_488;
  FSoftObjectPath *local_478;
  UPCGTextureData *local_470;
  UPCGTextureData *local_468;
  FString local_460;
  FString local_450;
  FTextFormat local_440;
  FText local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FFormatArgumentValue local_3e8;
  undefined4 local_3c8;
  FText local_3b8;
  FString local_3a8;
  FText local_398;
  FString local_388;
  FString local_378;
  FText local_368;
  FText local_358;
  FString local_348;
  FString local_338;
  FText local_328;
  TWeakPtr<FPCGContextHandle,1> local_318;
  FString local_308;
  FString local_2f8;
  FText local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FText local_298;
  FText local_288;
  code *local_278 [2];
  undefined **local_268;
  FPCGContextHandle *local_260;
  TReferenceControllerBase<1> *local_258;
  undefined8 local_250;
  FString local_248;
  double local_238;
  double dStack_230;
  double local_228;
  undefined1 local_220 [16];
  double local_210;
  FStringFormatArg local_208;
  FStringFormatArg local_1e8;
  FText local_1c8;
  FTextFormat local_1b8;
  FText local_1a8;
  FTextFormat local_198;
  FText local_188;
  FTextFormat local_178 [3];
  undefined1 local_148;
  undefined7 uStack_147;
  TTransform<double> local_138;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_518;
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId148,"FPCGTextureSamplerElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTextureSampler.cpp"
               ,0x94);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId148);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTextureSampler.cpp"
                         ,0x97,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  if (param_1->bIsPaused != false) {
    bVar9 = false;
    goto LAB_149c705b7;
  }
  pUVar13 = FPCGContext::GetInputSettings<UPCGTextureSamplerSettings>(param_1);
  if ((pUVar13 == (UPCGTextureSamplerSettings *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTextureSampler.cpp"
                         ,0x9f,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  puVar3 = &(pUVar13->Texture).SoftObjectPtr.field_0x8;
  local_478 = (FSoftObjectPath *)puVar3;
  if (*(longlong *)puVar3 == 0) {
    bVar9 = true;
    goto LAB_149c705b7;
  }
  this_00 = (UTextureRenderTarget2D *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar13->Texture);
  if (this_00 == (UTextureRenderTarget2D *)0x0) {
LAB_149c7047e:
    if (1 < (byte)LogPCG._0_1_) {
      FSoftObjectPath::ToString((FSoftObjectPath *)puVar3,&local_400);
      pFVar15 = FText::FromString(&local_1a8,&local_400);
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_288,L"PCGTextureSamplerElement",L"CouldNotResolveTexture",
                           L"Texture at path \'{0}\' could not be loaded");
      pFVar17 = FTextFormat::FTextFormat(&local_198,pFVar16,Default);
      pFVar15 = FText::Format<FText>(&local_298,pFVar17,pFVar15);
      FText::ToString(pFVar15);
      FPCGContext::GetTaskName(param_1,&local_2a8);
      FPCGContext::GetExecutionSourceName(param_1,&local_2b8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      }
      if (local_298.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
      }
      if (local_288.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
      }
LAB_149c705a2:
      if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar14 = Z_Construct_UClass_UTexture_NoRegister();
    iVar12 = (int)pUVar14->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar12) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
        &pUVar14->_padding_)) goto LAB_149c7047e;
    pUVar14 = Z_Construct_UClass_UTexture2DArray_NoRegister();
    local_4a8 = &this_00->_padding_;
    iVar12 = (int)pUVar14->_padding_;
    if ((iVar12 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
        &pUVar14->_padding_)) {
      bVar9 = this_00 != (UTextureRenderTarget2D *)0x0;
      iVar12 = UTexture2DArray::GetArraySize((UTexture2DArray *)this_00);
      local_4d4 = pUVar13->TextureArrayIndex;
      if ((-1 < (int)local_4d4) && ((int)local_4d4 < iVar12)) goto LAB_149c6f9f2;
      if ((byte)LogPCG._0_1_ < 2) goto LAB_149c705ac;
      FSoftObjectPath::ToString
                ((FSoftObjectPath *)&(pUVar13->Texture).SoftObjectPtr.field_0x8,&local_420);
      pFVar15 = FText::FromString(&local_188,&local_420);
      iVar12 = pUVar13->TextureArrayIndex;
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_398,L"PCGTextureSamplerElement",L"InvalidTextureIndex",
                           L"Array index {0} was out of bounds for TextureArray at path \'{1}\'.");
      pFVar17 = FTextFormat::FTextFormat(local_178,pFVar16,Default);
      local_3e8.Type = Int;
      local_3e8.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_3e8.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_3c8 = 4;
      local_3e8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar12;
      FText::FText(&local_3b8,pFVar15);
      if ((local_3b8.TextData.Reference == (ITextData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      local_4c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4c8.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_4c8.AllocatorInstance,2,&local_4c8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_4c8.AllocatorInstance.Data,&local_3e8,2);
      local_440.TextFormatData.Object = (pFVar17->TextFormatData).Object;
      local_440.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar17->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_440.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_440.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_440.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_430,&local_440,&local_4c8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_4c8.AllocatorInstance.Data,local_4c8.ArrayNum);
      if ((FFormatArgumentValue *)local_4c8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_4c8.AllocatorInstance.Data);
      }
      if (local_3b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
      }
      if (local_3e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_3e8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar17->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar5 = (pFVar15->TextData).Reference;
      if (pIVar5 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar5 + 0x10))();
      }
      FText::ToString(&local_430);
      FPCGContext::GetTaskName(param_1,&local_3a8);
      FPCGContext::GetExecutionSourceName(param_1,&local_248);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
      }
      if (local_430.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_430.TextData.Reference + 0x10))();
      }
      local_400.Data.AllocatorInstance.Data = local_420.Data.AllocatorInstance.Data;
      if (local_398.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_398.TextData.Reference + 0x10))();
        local_400.Data.AllocatorInstance.Data = local_420.Data.AllocatorInstance.Data;
      }
      goto LAB_149c705a2;
    }
    local_4d4 = 0;
    bVar9 = false;
    pUVar14 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar12 = (int)pUVar14->_padding_;
    if ((iVar12 <= *(int *)(*local_4a8 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(*local_4a8 + 0x30) + (longlong)iVar12 * 8) ==
        &pUVar14->_padding_)) {
LAB_149c6f9f2:
      if (*(char *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data == '\0') {
        if (pUVar13->bUseAbsoluteTransform == false) {
          pIVar18 = TWeakInterfacePtr<IPCGGraphExecutionSource>::operator->
                              (&param_1->ExecutionSource);
          plVar19 = (longlong *)(**(code **)((longlong)*pIVar18 + 0x18))(pIVar18);
          (**(code **)(*plVar19 + 0x38))(plVar19,&local_98);
          local_138.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_138.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_138.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_138.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_138.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_138.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_138.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_138.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_138.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_138.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_138.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_138.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_138.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_138.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_138.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_138.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_138.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_138.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_138,&pUVar13->Transform,&local_98);
          *(double *)&param_1[1].OutputData.bCancelExecutionOnEmpty =
               local_138.Rotation.XY.m128d_f64[0];
          param_1[1].OutputData.DataCrcs.AllocatorInstance.Data =
               (FScriptContainerElement *)local_138.Rotation.XY.m128d_f64[1];
          *(double *)&param_1[1].OutputData.DataCrcs.ArrayNum = local_138.Rotation.ZW.m128d_f64[0];
          param_1[1].OutputData.InactiveOutputPinBitmask =
               (ulong64)local_138.Rotation.ZW.m128d_f64[1];
          param_1[1].ExecutionSource.ObjectInstance.WeakPtr =
               (FWeakObjectPtr)local_138.Translation.XY.m128d_f64[0];
          param_1[1].ExecutionSource.InterfaceInstance =
               (IPCGGraphExecutionSource *)local_138.Translation.XY.m128d_f64[1];
          param_1[1].SourceComponent.WeakPtr = (FWeakObjectPtr)local_138.Translation.ZW.m128d_f64[0]
          ;
          *(double *)&param_1[1].bInputDataModified = local_138.Translation.ZW.m128d_f64[1];
          param_1[1].AsyncState.EndTime = local_138.Scale3D.XY.m128d_f64[0];
          *(double *)&param_1[1].AsyncState.NumAvailableTasks = local_138.Scale3D.XY.m128d_f64[1];
          *(double *)&param_1[1].AsyncState.AsyncCurrentWriteIndex =
               local_138.Scale3D.ZW.m128d_f64[0];
          param_1[1].AsyncState.TasksChunksStartEnd.AllocatorInstance.Data =
               (FScriptContainerElement *)local_138.Scale3D.ZW.m128d_f64[1];
          pIVar18 = TWeakInterfacePtr<IPCGGraphExecutionSource>::operator->
                              (&param_1->ExecutionSource);
          plVar19 = (longlong *)(**(code **)((longlong)*pIVar18 + 0x18))(pIVar18);
          (**(code **)(*plVar19 + 0x58))(plVar19,&local_d8);
          local_238 = param_1[1].AsyncState.EndTime;
          dStack_230 = *(double *)&param_1[1].AsyncState.NumAvailableTasks;
          local_228 = *(double *)&param_1[1].AsyncState.AsyncCurrentWriteIndex;
          dVar26 = (local_b8 - local_d0) * dStack_230 * __real_3fe0000000000000;
          dVar27 = (local_c0 - local_d8) * local_238 * __real_3fe0000000000000;
          local_210 = (local_b0 - local_c8) * local_228 * __real_3fe0000000000000;
          uVar24 = SUB84(dVar26,0);
          uVar25 = (undefined4)((ulonglong)dVar26 >> 0x20);
          param_1[1].AsyncState.EndTime = dVar27;
          param_1[1].AsyncState.NumAvailableTasks = uVar24;
          param_1[1].AsyncState.AsyncCurrentReadIndex = uVar25;
          *(double *)&param_1[1].AsyncState.AsyncCurrentWriteIndex = local_210;
          param_1[1].AsyncState.TasksChunksStartEnd.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_220._8_4_ = uVar24;
          local_220._0_8_ = dVar27;
          local_220._12_4_ = uVar25;
        }
        else {
          pFVar7 = (FScriptContainerElement *)(pUVar13->Transform).Rotation.XY.m128d_f64[1];
          *(double *)&param_1[1].OutputData.bCancelExecutionOnEmpty =
               (pUVar13->Transform).Rotation.XY.m128d_f64[0];
          param_1[1].OutputData.DataCrcs.AllocatorInstance.Data = pFVar7;
          dVar26 = (pUVar13->Transform).Rotation.ZW.m128d_f64[1];
          *(double *)&param_1[1].OutputData.DataCrcs.ArrayNum =
               (pUVar13->Transform).Rotation.ZW.m128d_f64[0];
          param_1[1].OutputData.InactiveOutputPinBitmask = (ulong64)dVar26;
          pIVar18 = (IPCGGraphExecutionSource *)(pUVar13->Transform).Translation.XY.m128d_f64[1];
          param_1[1].ExecutionSource.ObjectInstance.WeakPtr =
               (FWeakObjectPtr)(pUVar13->Transform).Translation.XY.m128d_f64[0];
          param_1[1].ExecutionSource.InterfaceInstance = pIVar18;
          dVar26 = (pUVar13->Transform).Translation.ZW.m128d_f64[1];
          param_1[1].SourceComponent.WeakPtr =
               (FWeakObjectPtr)(pUVar13->Transform).Translation.ZW.m128d_f64[0];
          *(double *)&param_1[1].bInputDataModified = dVar26;
          dVar26 = (pUVar13->Transform).Scale3D.XY.m128d_f64[1];
          param_1[1].AsyncState.EndTime = (pUVar13->Transform).Scale3D.XY.m128d_f64[0];
          *(double *)&param_1[1].AsyncState.NumAvailableTasks = dVar26;
          pFVar7 = (FScriptContainerElement *)(pUVar13->Transform).Scale3D.ZW.m128d_f64[1];
          *(double *)&param_1[1].AsyncState.AsyncCurrentWriteIndex =
               (pUVar13->Transform).Scale3D.ZW.m128d_f64[0];
          param_1[1].AsyncState.TasksChunksStartEnd.AllocatorInstance.Data = pFVar7;
        }
        *(undefined1 *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data = 1;
      }
      pUVar14 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
      iVar12 = (int)pUVar14->_padding_;
      if ((*(int *)(*local_4a8 + 0x38) < iVar12) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(*local_4a8 + 0x30) + (longlong)iVar12 * 8) !=
          &pUVar14->_padding_)) {
        this_01 = (UPCGTextureData *)param_1[1].InputData.InactiveOutputPinBitmask;
        if (this_01 == (UPCGTextureData *)0x0) {
          bVar11 = IsInGameThread();
          if (bVar11) {
            pUVar20 = GetTransientPackageAsObject();
            this_01 = NewObject<UPCGTextureData>(pUVar20);
          }
          else {
            if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
               (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<4331830188552749348>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                    ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar11)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            FGCScopeGuard::FGCScopeGuard(local_4cf);
            pUVar20 = GetTransientPackageAsObject();
            this_01 = NewObject<UPCGTextureData>(pUVar20);
            FGCScopeGuard::~FGCScopeGuard(local_4cf);
            if ((this_01 == (UPCGTextureData *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Object",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                    ,0x12a,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            local_468 = this_01;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_01 != (UPCGTextureData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
            Emplace<TObjectPtr<UObject>_>
                      (&param_1->AsyncObjects,(TObjectPtr<UObject> *)(local_490 + 4),
                       (bool *)&local_468);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UPCGTextureData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          param_1[1].InputData.InactiveOutputPinBitmask = (ulong64)this_01;
          if (this_01 == (UPCGTextureData *)0x0) {
            bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<2432852729824018683>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTextureSampler.cpp"
                               ,0xfb,"TextureData");
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            if (1 < (byte)LogPCG._0_1_) {
              pFVar15 = FText::AsLocalizable_Advanced_LocText
                                  (&local_328,L"PCGTextureSamplerElement",L"TextureDataInitFailed",
                                   L"Failed to initialize texture data.");
              FText::ToString(pFVar15);
              FPCGContext::GetTaskName(param_1,&local_338);
              FPCGContext::GetExecutionSourceName(param_1,&local_348);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_348.Data.AllocatorInstance.Data);
              }
              if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_338.Data.AllocatorInstance.Data);
              }
              if (local_328.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_328.TextData.Reference + 0x10))();
              }
            }
            goto LAB_149c705ac;
          }
        }
        if (this_01->bSuccessfullyInitialized == false) {
          bVar11 = UPCGTextureData::Initialize
                             (this_01,(UTexture *)this_00,local_4d4,
                              (TTransform<double> *)&param_1[1].OutputData.bCancelExecutionOnEmpty,
                              false,pUVar13->bSkipReadbackToCPU);
          if (!bVar11) {
            param_1->bIsPaused = true;
            this_02 = FPCGModule::GetPCGModuleChecked();
            pTVar21 = FPCGContext::GetOrCreateHandle(param_1,&local_318);
            local_260 = pTVar21->Object;
            local_258 = (pTVar21->WeakReferenceCount).ReferenceController;
            (pTVar21->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pTVar21->Object = (FPCGContextHandle *)0x0;
            local_268 = &UE::Core::Private::Function::
                         TFunction_OwnedObject<`FPCGTextureSamplerElement::ExecuteInternal'[::I]::<lambda_1>,0,0>
                         ::_vftable_;
            local_278[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<`FPCGTextureSamplerElement::ExecuteInternal'[::I]::<lambda_1>,void>
                           ::Call;
            local_250 = 0;
            FPCGModule::ExecuteNextTick(this_02,(TFunction<void___cdecl(void)> *)local_278);
            if (local_318.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar2 = &(local_318.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
              aVar4 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + -1);
              UNLOCK();
              if ((aVar4 == (atomic<int>)0x1) &&
                 (local_318.WeakReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0)) {
                (**(code **)((local_318.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                          (local_318.WeakReferenceCount.ReferenceController,1);
              }
            }
            bVar9 = false;
            goto LAB_149c705b7;
          }
          if (this_01->bSuccessfullyInitialized == false) {
            if (2 < (byte)LogPCG._0_1_) {
              pFVar15 = FText::AsLocalizable_Advanced_LocText
                                  (&local_2e8,L"PCGTextureSamplerElement",L"TextureInitFailed",
                                   L"Data could not be retrieved for this texture, initialization failed."
                                  );
              FText::ToString(pFVar15);
              FPCGContext::GetTaskName(param_1,&local_2f8);
              FPCGContext::GetExecutionSourceName(param_1,&local_308);
              UE::Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)&PTR_u___s____s____s_151fad0e8,
                         (FLogCategoryBase *)&LogPCG);
              if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_308.Data.AllocatorInstance.Data);
              }
              if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
              }
              if (local_2e8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
              }
            }
            DestructItems<FPCGTaggedData,int>
                      ((FPCGTaggedData *)(param_1->OutputData).TaggedData.AllocatorInstance.Data,
                       (param_1->OutputData).TaggedData.ArrayNum);
            piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
            (param_1->OutputData).TaggedData.ArrayNum = 0;
            if (*piVar1 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x78,8,0,(ForAnyElementType *)&param_1->OutputData,0,piVar1);
            }
            goto LAB_149c705ac;
          }
        }
      }
      else {
        bVar11 = IsInGameThread();
        if (bVar11) {
          pUVar20 = GetTransientPackageAsObject();
          this_01 = (UPCGTextureData *)NewObject<UPCGRenderTargetData>(pUVar20);
        }
        else {
          if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
             (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<4331830188552749348>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                  ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          FGCScopeGuard::FGCScopeGuard(&local_4d0);
          pUVar20 = GetTransientPackageAsObject();
          this_01 = (UPCGTextureData *)NewObject<UPCGRenderTargetData>(pUVar20);
          FGCScopeGuard::~FGCScopeGuard(&local_4d0);
          if ((this_01 == (UPCGTextureData *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Object",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                  ,0x12a,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          local_470 = this_01;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UPCGTextureData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
          Emplace<TObjectPtr<UObject>_>
                    (&param_1->AsyncObjects,(TObjectPtr<UObject> *)local_490,(bool *)&local_470);
        }
        UPCGRenderTargetData::Initialize
                  ((UPCGRenderTargetData *)this_01,this_00,
                   (TTransform<double> *)&param_1[1].OutputData.bCancelExecutionOnEmpty,
                   pUVar13->bSkipReadbackToCPU,false);
        if ((this_01 == (UPCGTextureData *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("BaseTextureData",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTextureSampler.cpp"
                                ,299,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
      }
      iVar12 = (param_1->OutputData).TaggedData.ArrayNum;
      piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar12 + 1;
      this_03 = (FPCGDataPtrWrapper *)
                ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar12 * 0x78);
      this_03[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_03[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_03[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_03[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_03[6].WeakData.WeakPtr.ObjectIndex = 0x100;
      (this_03->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
      (this_03->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
      this_03[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_03[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
      this_03[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_03[3].WeakData.WeakPtr.ObjectIndex = 0;
      this_03[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
      *(undefined4 *)&this_03[4].Data.field0_0x0 = 0xffffffff;
      *(undefined4 *)((longlong)&this_03[4].Data.field0_0x0 + 4) = 0;
      this_03[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      this_03[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
      *(undefined8 *)&this_03[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
      *(undefined4 *)((longlong)&this_03[7].Data.field0_0x0 + 4) = 0xffffffff;
      FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)this_01);
      puVar3 = &(pUVar13->Texture).SoftObjectPtr.field_0x8;
      bVar9 = !bVar9;
      if (bVar9) {
        FSoftObjectPath::GetAssetName((FSoftObjectPath *)puVar3,&local_460);
        pFVar22 = &local_460;
        local_4a0.Data.AllocatorInstance.Data = local_460.Data.AllocatorInstance.Data;
      }
      else {
        FSoftObjectPath::GetAssetName((FSoftObjectPath *)puVar3,&local_2d8);
        FStringFormatArg::FStringFormatArg(&local_208,&local_2d8);
        FStringFormatArg::FStringFormatArg(&local_1e8,local_4d4);
        local_4b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4b8.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_4b8.AllocatorInstance,2,&local_4b8.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_4b8.AllocatorInstance.Data,&local_208,2);
        ::FString::FormatImpl(&local_450,L"{0}_{1}",&local_4b8);
        pFVar22 = &local_450;
        local_4a0.Data.AllocatorInstance.Data = local_450.Data.AllocatorInstance.Data;
      }
      (pFVar22->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4a0.Data.ArrayNum = (pFVar22->Data).ArrayNum;
      local_4a0.Data.ArrayMax = (pFVar22->Data).ArrayMax;
      (pFVar22->Data).ArrayNum = 0;
      (pFVar22->Data).ArrayMax = 0;
      if ((bVar9) && (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_460.Data.AllocatorInstance.Data);
      }
      if ((!bVar9) && (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_450.Data.AllocatorInstance.Data);
      }
      if ((!bVar9) &&
         (DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_4b8.AllocatorInstance.Data,local_4b8.ArrayNum),
         (FStringFormatArg *)local_4b8.AllocatorInstance.Data != (FStringFormatArg *)0x0)) {
        FMemory::Free(local_4b8.AllocatorInstance.Data);
      }
      if (!bVar9) {
        if (local_1e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_208.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.StringValue.Data.AllocatorInstance.Data);
        }
      }
      pFVar22 = PCGComputeHelpers::GetPrefixedDataLabel(&local_2c8,&local_4a0);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_03 + 1),
                 &local_488,(bool *)pFVar22);
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
      this_01->field_0x1a8 = pUVar13->bUseDensitySourceChannel;
      this_01->field_0x1a9 = pUVar13->ColorChannel;
      this_01->field_0x1aa = pUVar13->Filter;
      *(float *)&this_01->field_0x1ac = pUVar13->TexelSize;
      this_01->field_0x1b0 = pUVar13->bUseAdvancedTiling;
      dVar26 = (pUVar13->Tiling).field0_0x0._s_0.Y;
      local_148 = 1;
      *(double *)&this_01->field_0x1b8 = (pUVar13->Tiling).field0_0x0._s_0.X;
      *(double *)&this_01->field_0x1c0 = dVar26;
      dVar26 = (pUVar13->CenterOffset).field0_0x0._s_0.Y;
      *(double *)&this_01->field_0x1c8 = (pUVar13->CenterOffset).field0_0x0._s_0.X;
      *(double *)&this_01->field_0x1d0 = dVar26;
      *(float *)&this_01->field_0x1d8 = pUVar13->Rotation;
      this_01->field_0x1dc = pUVar13->bUseTileBounds;
      dVar26 = (pUVar13->TileBoundsMax).field0_0x0._s_0.X;
      dVar27 = (pUVar13->TileBoundsMax).field0_0x0._s_0.Y;
      dVar8 = (pUVar13->TileBoundsMin).field0_0x0._s_0.Y;
      *(double *)&this_01->field_0x1e0 = (pUVar13->TileBoundsMin).field0_0x0._s_0.X;
      *(double *)&this_01->field_0x1e8 = dVar8;
      *(double *)&this_01->field_0x1f0 = dVar26;
      *(double *)&this_01->field_0x1f8 = dVar27;
      *(ulonglong *)&this_01->field_0x200 = CONCAT71(uStack_147,1);
      bVar9 = true;
      if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
      }
      goto LAB_149c705b7;
    }
    local_4d4 = 0;
    bVar9 = false;
    bVar11 = UObjectBaseUtility::IsA<UTextureRenderTarget2D>((UObjectBaseUtility *)this_00);
    if (bVar11) goto LAB_149c6f9f2;
    if (1 < (byte)LogPCG._0_1_) {
      FSoftObjectPath::ToString(local_478,&local_410);
      pFVar15 = FText::FromString(&local_1c8,&local_410);
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_358,L"PCGTextureSamplerElement",L"InvalidTextureType",
                           L"Texture at path \'{0}\' is not a valid type. Must be one of the following types: UTexture2D, UTexture2DArray, UTextureRenderTarget2D."
                          );
      pFVar17 = FTextFormat::FTextFormat(&local_1b8,pFVar16,Default);
      pFVar15 = FText::Format<FText>(&local_368,pFVar17,pFVar15);
      FText::ToString(pFVar15);
      FPCGContext::GetTaskName(param_1,&local_378);
      FPCGContext::GetExecutionSourceName(param_1,&local_388);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
      if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
      }
      if (local_368.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_368.TextData.Reference + 0x10))();
      }
      local_400.Data.AllocatorInstance.Data = local_410.Data.AllocatorInstance.Data;
      if (local_358.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
        local_400.Data.AllocatorInstance.Data = local_410.Data.AllocatorInstance.Data;
      }
      goto LAB_149c705a2;
    }
  }
LAB_149c705ac:
  bVar9 = true;
LAB_149c705b7:
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar9;
}

// GetDependenciesCrc @ 149c768a0

void __thiscall
FPCGTextureSamplerElement::GetDependenciesCrc
          (FPCGTextureSamplerElement *this,FPCGGetDependenciesCrcParams *param_1,FPCGCrc *param_2)

{
  int iVar1;
  UPCGSettings *pUVar2;
  UClass *pUVar3;
  FName *pFVar4;
  longlong *plVar5;
  UPCGData *this_00;
  FPCGCrc FVar6;
  bool local_res10 [8];
  FPCGCrc local_res18;
  FName local_res20;
  
  local_res18.Value = 0;
  local_res18._4_4_ = local_res18._4_4_ & 0xffffff00;
  IPCGElement::GetDependenciesCrc((IPCGElement *)this,param_1,&local_res18);
  pUVar2 = param_1->Settings;
  if (pUVar2 != (UPCGSettings *)0x0) {
    pUVar3 = UPCGTextureSamplerSettings::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pFVar4 = ::FName::FName(&local_res20,0x15,L"bUseAbsoluteTransform",FNAME_Add);
      PCGSettingsHelpers::GetOverrideValue<bool>
                (param_1->InputData,pUVar2,*pFVar4,(bool *)&pUVar2[1].CachedElement,local_res10);
      if ((local_res10[0] == false) && (param_1->ExecutionSource != (IPCGGraphExecutionSource *)0x0)
         ) {
        plVar5 = (longlong *)(**(code **)((longlong)*param_1->ExecutionSource + 0x18))();
        this_00 = (UPCGData *)(**(code **)(*plVar5 + 8))(plVar5);
        if (this_00 != (UPCGData *)0x0) {
          FVar6 = UPCGData::GetOrComputeCrc(this_00,SUB81(&local_res20,0));
          local_res18.Value =
               local_res18.Value ^
               *(int *)FVar6 + local_res18.Value * 0x40 + (local_res18.Value >> 2) + -0x61c88647;
        }
      }
    }
  }
  FVar6.bValid = local_res18.bValid;
  FVar6._5_3_ = local_res18._5_3_;
  FVar6.Value = local_res18.Value;
  *param_2 = FVar6;
  return;
}

// PrepareDataInternal @ 149c83db0

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
FPCGTextureSamplerElement::PrepareDataInternal(FPCGTextureSamplerElement *this,FPCGContext *param_1)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPCGTextureSamplerSettings *pUVar4;
  size_t _Size;
  bool bVar5;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_48;
  FSoftObjectPath local_38;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId125,"FPCGTextureSamplerElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTextureSampler.cpp"
               ,0x7d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId125);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTextureSampler.cpp"
                         ,0x80,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar4 = FPCGContext::GetInputSettings<UPCGTextureSamplerSettings>(param_1);
  if ((pUVar4 == (UPCGTextureSamplerSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTextureSampler.cpp"
                         ,0x83,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((*(longlong *)&(pUVar4->Texture).SoftObjectPtr.field_0x8 == 0) ||
     (*(char *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = pUVar4->bSynchronousLoad;
    local_38.AssetPath.PackageName.ComparisonIndex.Value =
         *(uint *)&(pUVar4->Texture).SoftObjectPtr.field_0x8;
    local_38.AssetPath.PackageName.Number = *(uint *)&(pUVar4->Texture).SoftObjectPtr.field_0xc;
    local_38.AssetPath.AssetName.ComparisonIndex.Value =
         *(uint *)&(pUVar4->Texture).SoftObjectPtr.field_0x10;
    local_38.AssetPath.AssetName.Number = *(uint *)&(pUVar4->Texture).SoftObjectPtr.field_0x14;
    local_38.SubPathString.Data.ArrayNum = *(int *)&(pUVar4->Texture).SoftObjectPtr.field_0x20;
    _Size = (size_t)local_38.SubPathString.Data.ArrayNum;
    _Src = *(void **)&(pUVar4->Texture).SoftObjectPtr.field_0x18;
    local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.SubPathString.Data.ArrayNum == 0) {
      local_38.SubPathString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_38.SubPathString.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_38.SubPathString,local_38.SubPathString.Data.ArrayNum,
                 &local_38.SubPathString.Data.ArrayMax);
      memcpy(local_38.SubPathString.Data.AllocatorInstance.Data,_Src,_Size);
    }
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
    ConstructItems<FSoftObjectPath,FSoftObjectPath,int>(local_48.AllocatorInstance.Data,&local_38,1)
    ;
    bVar2 = IPCGAsyncLoadingContext::RequestResourceLoad
                      ((IPCGAsyncLoadingContext *)(param_1 + 1),param_1,&local_48,bVar2 == false);
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if ((FSoftObjectPath *)local_48.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

