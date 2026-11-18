// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// CanExecuteOnlyOnMainThread @ 149c01950

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
FPCGSceneCaptureElement::CanExecuteOnlyOnMainThread
          (FPCGSceneCaptureElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149c1b480

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FPCGSceneCaptureElement::ExecuteInternal(FPCGSceneCaptureElement *this,FPCGContext *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  byte *pbVar3;
  atomic<int> aVar4;
  UPCGNode *this_00;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  FScriptContainerElement *pFVar18;
  double dVar19;
  FWeakObjectPtr FVar20;
  double dVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  FName FVar25;
  FName FVar26;
  bool bVar27;
  undefined1 uVar28;
  UClass *pUVar29;
  UPCGSettings *pUVar30;
  TObjectPtr<UPCGSettings>_u_0 TVar31;
  FPCGTaggedData *pFVar32;
  longlong *plVar33;
  UWorld *pUVar34;
  FText *pFVar35;
  FTextFormat *pFVar36;
  UPCGSpatialData *pUVar37;
  undefined1 (*pauVar38) [16];
  undefined4 *puVar39;
  UObject *pUVar40;
  UPackage *pUVar41;
  FPCGModule *this_01;
  TWeakPtr<FPCGContextHandle,1> *pTVar42;
  UPCGRenderTargetData *this_02;
  FPCGDataPtrWrapper *this_03;
  int iVar43;
  bool bVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  float fVar47;
  float fVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar58;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar59;
  uint uVar60;
  double dVar61;
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  uint uVar74;
  uint uVar77;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar78 [16];
  double dVar79;
  undefined1 auStackY_568 [32];
  <lambda_1> local_528;
  bool local_527 [15];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_518;
  TObjectPtr<UObject>_u_0 local_508;
  double dStack_500;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_4f8;
  TObjectPtr<UPCGSettings>_u_0 local_4e8;
  UPCGRenderTargetData *local_4e0;
  FText local_4d8;
  FName local_4c8;
  undefined8 local_4c0;
  double local_4b8;
  FText local_4a8;
  FTextFormat local_498;
  FText local_488;
  FText local_478;
  FFormatArgumentValue local_468;
  double local_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined8 local_438;
  FTextFormat local_428;
  FText local_418;
  TSharedRef<FTextFormatData,1> local_408;
  undefined1 local_3f8 [16];
  double local_3e8;
  double dStack_3e0;
  TWeakPtr<FPCGContextHandle,1> local_3d8;
  FText local_3c8;
  undefined1 local_3b8 [16];
  code *local_3a8 [2];
  undefined **local_398;
  FPCGContextHandle *local_390;
  TReferenceControllerBase<1> *local_388;
  undefined8 local_380;
  TQuat<double> local_378;
  FTextFormat local_358 [4];
  undefined8 local_318;
  undefined1 local_308 [128];
  undefined1 local_288 [128];
  FFormatArgumentValue local_208;
  undefined1 local_1e8 [8];
  FFormatArgumentValue_u_8 FStack_1e0;
  double local_1d8 [2];
  undefined1 local_1c8 [8];
  longlong lStack_1c0;
  double local_1b8 [2];
  undefined1 local_1a8 [56];
  undefined1 local_170 [56];
  undefined1 local_138 [96];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_568;
  bVar44 = -1 < CpuChannel->Enabled;
  if (bVar44) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId54,"FPCGSceneCaptureElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSceneCapture.cpp"
               ,0x36);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId54);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSceneCapture.cpp"
                          ,0x37,L""), bVar27)) {
    pcVar6 = (code *)swi(3);
    uVar28 = (*pcVar6)();
    return (bool)uVar28;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar30 = UPCGNode::GetSettings(this_00), pUVar30 == (UPCGSettings *)0x0)) {
      pFVar32 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSceneCaptureSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_528);
      if (pFVar32 != (FPCGTaggedData *)0x0) {
        local_4e8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar32->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_4e8.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_4e8.DebugPtr);
        }
        if (local_4e8.DebugPtr != (UPCGSettings *)0x0) {
          pUVar29 = UPCGSceneCaptureSettings::StaticClass();
          bVar27 = FObjectPtr::IsA(&local_4e8.ObjectPtr,pUVar29);
          TVar31 = local_4e8;
          if (bVar27) goto LAB_149c1b619;
        }
      }
    }
    else {
      pUVar30 = UPCGNode::GetSettings(this_00);
      TVar31.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar30);
      if (TVar31.DebugPtr != (UPCGSettings *)0x0) {
        pUVar29 = UPCGSceneCaptureSettings::StaticClass();
        iVar43 = (int)pUVar29->_padding_;
        if ((iVar43 <= *(int *)((TVar31.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar31.DebugPtr)->_padding_ + 0x30) + (longlong)iVar43 * 8) ==
            &pUVar29->_padding_)) goto LAB_149c1b619;
      }
    }
LAB_149c1b616:
    TVar31.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar29 = UPCGSceneCaptureSettings::StaticClass();
    bVar27 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar29);
    if (!bVar27) goto LAB_149c1b616;
    TVar31.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  }
LAB_149c1b619:
  if ((TVar31.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSceneCapture.cpp"
                          ,0x3c,L""), bVar27)) {
    pcVar6 = (code *)swi(3);
    uVar28 = (*pcVar6)();
    return (bool)uVar28;
  }
  if ((char)param_1[1].SourceComponent.WeakPtr.ObjectIndex != '\0') {
    *(undefined8 *)(param_1[1]._padding_ + 0x378) = 0;
    UActorComponent::UnregisterComponent((UActorComponent *)param_1[1]._padding_);
    bVar27 = IsInGameThread();
    if (bVar27) {
      pUVar40 = GetTransientPackageAsObject();
      this_02 = NewObject<UPCGRenderTargetData>(pUVar40);
    }
    else {
      if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
         (bVar27 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4331830188552749348>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                              ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar27)) {
        pcVar6 = (code *)swi(3);
        uVar28 = (*pcVar6)();
        return (bool)uVar28;
      }
      FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)&local_528);
      pUVar40 = GetTransientPackageAsObject();
      this_02 = NewObject<UPCGRenderTargetData>(pUVar40);
      FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)&local_528);
      if ((this_02 == (UPCGRenderTargetData *)0x0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                              ,0x12a,L""), bVar27)) {
        pcVar6 = (code *)swi(3);
        uVar28 = (*pcVar6)();
        return (bool)uVar28;
      }
      local_4e0 = this_02;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_02 != (UPCGRenderTargetData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_02);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>
                (&param_1->AsyncObjects,(TObjectPtr<UObject> *)&local_508.ObjectPtr,
                 (bool *)&local_4e0);
    }
    UPCGRenderTargetData::Initialize
              (this_02,(UTextureRenderTarget2D *)
                       param_1[1].InputData.TaggedData.AllocatorInstance.Data,
               (TTransform<double> *)&param_1[1].InputData.bCancelExecutionOnEmpty,
               SUB81(TVar31.DebugPtr[1]._padding_,0),true);
    iVar43 = (param_1->OutputData).TaggedData.ArrayNum;
    piVar2 = &(param_1->OutputData).TaggedData.ArrayMax;
    if (iVar43 == *piVar2) {
      iVar43 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x878,(ForAnyElementType *)&param_1->OutputData,piVar2);
    }
    (param_1->OutputData).TaggedData.ArrayNum = iVar43 + 1;
    this_03 = (FPCGDataPtrWrapper *)
              ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar43 * 0x78);
    this_03[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_03[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_03[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_03[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_03[6].WeakData.WeakPtr.ObjectIndex = 0x100;
    (this_03->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
    this_03[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    (this_03->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_03[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_03[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_03[3].WeakData.WeakPtr.ObjectIndex = 0;
    this_03[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&this_03[4].Data.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this_03[4].Data.field0_0x0 + 4) = 0;
    this_03[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_03[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    *(undefined8 *)&this_03[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined4 *)((longlong)&this_03[7].Data.field0_0x0 + 4) = 0xffffffff;
    FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)this_02);
    bVar27 = true;
    goto LAB_149c1c578;
  }
  if ((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
      (bVar27 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar27)) ||
     ((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0)) {
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("InContext->ExecutionSource.Get()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSceneCapture.cpp"
                        ,0x40,L"");
    if (bVar27) {
      pcVar6 = (code *)swi(3);
      uVar28 = (*pcVar6)();
      return (bool)uVar28;
    }
    if ((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0)
    goto LAB_149c1b6aa;
LAB_149c1b6b7:
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                        ,0x8d,L"");
    if (bVar27) {
      pcVar6 = (code *)swi(3);
      uVar28 = (*pcVar6)();
      return (bool)uVar28;
    }
  }
  else {
LAB_149c1b6aa:
    bVar27 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource);
    if (!bVar27) goto LAB_149c1b6b7;
  }
  plVar33 = (longlong *)
            (**(code **)((longlong)*(param_1->ExecutionSource).InterfaceInstance + 0x18))();
  pUVar34 = (UWorld *)(**(code **)(*plVar33 + 0x20))(plVar33);
  dVar9 = __real_3e45798ee2308c3a;
  if (pUVar34 == (UWorld *)0x0) {
    pFVar35 = FText::AsLocalizable_Advanced_LocText
                        (&local_488,L"PCGSceneCaptureElement",L"InvalidWorld",
                         L"Invalid world. Cannot create USceneCaptureComponent.");
    PCGLog::LogErrorOnGraph(pFVar35,param_1);
    local_3c8.TextData.Reference = local_488.TextData.Reference;
  }
  else {
    fVar47 = *(float *)((longlong)&TVar31.DebugPtr[1]._padding_ + 4);
    if ((double)fVar47 <= __real_3e45798ee2308c3a) {
      pFVar35 = FText::AsLocalizable_Advanced_LocText
                          (&local_4d8,L"PCGSceneCaptureElement",L"InvalidTexelSize",
                           L"Invalid texel size {0}. Must be greater than zero.");
      pFVar36 = FTextFormat::FTextFormat((FTextFormat *)&local_408,pFVar35,Default);
      local_468.Type = Float;
      local_468.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_468.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_518.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_518.ArrayNum = 1;
      local_468.field1_0x8.FloatValue = fVar47;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_518.AllocatorInstance,1,&local_518.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_518.AllocatorInstance.Data,&local_468,1);
      local_498.TextFormatData.Object = (pFVar36->TextFormatData).Object;
      local_498.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar36->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_498.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_498.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_498.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_4a8,&local_498,&local_518);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_518.AllocatorInstance.Data,local_518.ArrayNum);
      if ((FFormatArgumentValue *)local_518.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_518.AllocatorInstance.Data);
      }
      if (local_468.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_468.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar36->TextFormatData).SharedReferenceCount.ReferenceController);
      PCGLog::LogErrorOnGraph(&local_4a8,param_1);
      local_3c8.TextData.Reference = local_4d8.TextData.Reference;
      if (local_4a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_4a8.TextData.Reference + 0x10))();
        local_3c8.TextData.Reference = local_4d8.TextData.Reference;
      }
    }
    else {
      uVar66 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      uVar67 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      uVar68 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      uVar69 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      uVar70 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar71 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar72 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar73 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      local_1e8 = (undefined1  [8])
                  UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      FStack_1e0.DoubleValue = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      local_1d8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      local_1d8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      local_1c8 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      lStack_1c0 = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      local_1b8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      local_1b8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      local_527[0] = false;
      pUVar37 = FPCGDataCollection::GetSpatialUnionOfInputsByPin
                          (&param_1->InputData,param_1,&PCGSceneCaptureConstants::BoundingShapeLabel
                           ,local_527);
      if (pUVar37 == (UPCGSpatialData *)0x0) {
        puVar39 = (undefined4 *)(**(code **)(*plVar33 + 0x30))(plVar33,local_138);
        _local_1e8 = *(double (*) [2])(puVar39 + 8);
        local_1d8 = *(double (*) [2])(puVar39 + 0xc);
        uVar66 = *puVar39;
        uVar67 = puVar39[1];
        uVar68 = puVar39[2];
        uVar69 = puVar39[3];
        uVar70 = puVar39[4];
        uVar71 = puVar39[5];
        uVar72 = puVar39[6];
        uVar73 = puVar39[7];
        _local_1c8 = *(double (*) [2])(puVar39 + 0x10);
        local_1b8 = *(double (*) [2])(puVar39 + 0x14);
        pauVar38 = (undefined1 (*) [16])(**(code **)(*plVar33 + 0x40))(plVar33,local_170);
      }
      else {
        pauVar38 = (undefined1 (*) [16])(**(code **)(pUVar37->_padding_ + 0x388))(pUVar37,local_1a8)
        ;
      }
      local_318 = *(undefined8 *)pauVar38[3];
      dVar50 = *(double *)(pauVar38[2] + 8);
      auVar54 = pauVar38[1];
      auVar55 = *pauVar38;
      if ((char)local_318 != '\0') {
        local_4d8.TextData.Reference = (ITextData *)(auVar54._8_8_ - auVar55._0_8_);
        auVar63._0_8_ = (ITextData *)(*(double *)pauVar38[2] - auVar55._8_8_);
        auVar63._8_8_ = dVar50;
        local_508 = (TObjectPtr<UObject>_u_0)(dVar50 - auVar54._0_8_);
        local_488.TextData.Reference = auVar63._0_8_;
        if (dVar9 < (double)local_4d8.TextData.Reference * (double)auVar63._0_8_ * (double)local_508
           ) {
          auVar75._0_8_ = (double)CONCAT44(uVar71,uVar70);
          auVar75._8_4_ = uVar72;
          auVar75._12_4_ = uVar73;
          dVar49 = auVar75._0_8_ * (double)CONCAT44(uVar71,uVar70) +
                   (double)CONCAT44(uVar67,uVar66) * (double)CONCAT44(uVar67,uVar66);
          dVar58 = auVar75._8_8_ * (double)CONCAT44(uVar73,uVar72) +
                   (double)CONCAT44(uVar69,uVar68) * (double)CONCAT44(uVar69,uVar68);
          dVar9 = dVar58 + dVar49;
          dVar49 = dVar49 + dVar58;
          auVar64._8_4_ = SUB84(dVar49,0);
          auVar64._0_8_ = dVar9;
          auVar64._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
          auVar64 = sqrtpd(auVar63,auVar64);
          uVar45 = -(ulonglong)(__real_3e45798ee0000000 <= dVar9);
          uVar46 = -(ulonglong)(__real_3e45798ee0000000 <= dVar49);
          uVar59 = (uint)(uVar45 >> 0x20);
          uVar60 = (uint)(uVar46 >> 0x20);
          auVar75 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar64);
          auVar52._0_4_ =
               ~(uint)uVar45 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar52._4_4_ =
               ~uVar59 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar52._8_4_ =
               ~(uint)uVar46 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar52._12_4_ =
               ~uVar60 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          pFVar18 = (FScriptContainerElement *)
                    ((auVar55._0_8_ + auVar54._8_8_) * __real_3fe0000000000000);
          auVar76._0_8_ = uVar45 & (ulonglong)(auVar75._0_8_ * (double)CONCAT44(uVar67,uVar66));
          uVar22 = uVar46 & (ulonglong)(auVar75._8_8_ * (double)CONCAT44(uVar69,uVar68));
          auVar76._8_4_ = (undefined4)uVar22;
          auVar76._12_4_ = (undefined4)(uVar22 >> 0x20);
          dVar21 = (auVar55._8_8_ + *(double *)pauVar38[2]) * __real_3fe0000000000000;
          auVar76 = auVar76 | auVar52;
          dVar19 = (auVar54._0_8_ + dVar50) * __real_3fe0000000000000;
          auVar78._0_4_ =
               ~(uint)uVar45 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar78._4_4_ =
               ~uVar59 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar78._8_4_ =
               ~(uint)uVar46 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar78._12_4_ =
               ~uVar60 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          uStack_440 = auVar55._8_4_;
          local_448 = dVar21;
          uStack_43c = auVar55._12_4_;
          auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar64);
          uVar74 = auVar76._0_4_;
          uVar77 = auVar76._4_4_;
          dStack_500 = auVar76._8_8_;
          dVar9 = (double)CONCAT44(uVar77 ^ __xmm_80000000000000008000000000000000._4_4_,
                                   uVar74 ^ (uint)__xmm_80000000000000008000000000000000) +
                  (double)CONCAT44(uVar77 ^ __xmm_80000000000000008000000000000000._4_4_,
                                   uVar74 ^ (uint)__xmm_80000000000000008000000000000000);
          auVar53._0_8_ = (ulonglong)(auVar64._0_8_ * (double)CONCAT44(uVar71,uVar70)) & uVar45;
          uVar46 = (ulonglong)(auVar64._8_8_ * (double)CONCAT44(uVar73,uVar72)) & uVar46;
          auVar53._8_4_ = (undefined4)uVar46;
          auVar53._12_4_ = (undefined4)(uVar46 >> 0x20);
          auVar78 = auVar78 | auVar53;
          dVar50 = dStack_500 + dStack_500;
          local_3e8 = auVar78._0_8_;
          dVar79 = auVar78._8_8_;
          dVar11 = auVar76._0_8_;
          local_408.SharedReferenceCount.ReferenceController._0_4_ = auVar55._8_4_;
          local_408.Object = (FTextFormatData *)pFVar18;
          local_408.SharedReferenceCount.ReferenceController._4_4_ = auVar55._12_4_;
          local_478.Flags = auVar54._8_4_;
          local_478.TextData.Reference = (ITextData *)dVar19;
          local_478._12_4_ = auVar54._12_4_;
          dVar62 = dVar79 * dVar50 - local_3e8 * dVar9;
          dVar51 = dVar79 * dVar9 + local_3e8 * dVar50;
          dVar49 = (double)local_508 * __real_3fe0000000000000;
          local_518.AllocatorInstance.Data =
               (FScriptContainerElement *)
               ((dVar11 * dVar9 - dStack_500 * dVar50) + __real_3ff0000000000000);
          local_4b8 = dVar49 * dVar62 + (double)pFVar18;
          local_4e0 = (UPCGRenderTargetData *)(dVar51 * dVar49 + dVar21);
          uVar66 = (undefined4)((ulonglong)__real_3fe6a09e5e333598 >> 0x20);
          uVar59 = auVar78._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
          uVar60 = auVar78._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
          dVar50 = dVar11 + dVar11;
          dVar9 = (double)CONCAT44(uVar60,uVar59) + (double)CONCAT44(uVar60,uVar59);
          local_468.TextValue.field0_0x0.TypedValue.TextData.Reference =
               (TRefCountPtr<ITextData>)((double)local_518.AllocatorInstance.Data * dVar49 + dVar19)
          ;
          local_3f8._8_4_ = auVar78._8_4_;
          local_3f8._0_8_ = dVar79;
          local_3f8._12_4_ = auVar78._12_4_;
          dVar12 = (dVar79 * dVar9 + dStack_500 * dVar50) * __real_3fe6a09e6ecb41fe;
          dVar16 = (dVar79 * dVar50 - dStack_500 * dVar9) * __real_3fe6a09e6ecb41fe;
          local_3b8._8_4_ = uVar74;
          local_3b8._0_8_ = dVar11;
          local_3b8._12_4_ = uVar77;
          auVar54._8_4_ = SUB84(__real_3fe6a09e5e333598,0);
          auVar54._0_8_ = dVar16;
          auVar54._12_4_ = uVar66;
          dVar61 = ((local_3e8 * dVar9 - dVar11 * dVar50) + __real_3ff0000000000000) *
                   __real_3fe6a09e6ecb41fe;
          auVar65._8_4_ = uVar74;
          auVar65._0_8_ = dVar11;
          auVar65._12_4_ = uVar77;
          auVar55._8_4_ = uVar74;
          auVar55._0_8_ = dVar11;
          auVar55._12_4_ = uVar77;
          dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
          dVar58 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
          local_378.X = dVar11 * __real_3fe6a09e5e333598 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                        dVar12 * dVar79 +
                        dVar16 * dStack_500 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                        local_3e8 * dVar61 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_378.Y = auVar65._8_8_ * dVar16 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                        dVar61 * dVar79 +
                        auVar54._8_8_ * dStack_500 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                        local_3e8 * dVar12 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
          dVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_378.Z = dVar11 * dVar61 * dVar9 + dVar16 * dVar79 + dVar12 * dStack_500 * dVar50 +
                        local_3e8 * __real_3fe6a09e5e333598 * dVar49;
          local_378.W = auVar55._8_8_ * dVar12 * dVar58 + __real_3fe6a09e5e333598 * dVar79 +
                        dVar61 * dStack_500 * dVar7 + local_3e8 * dVar16 * dVar8;
          uVar22 = (ulonglong)local_4d8.TextData.Reference >> 0x20;
          if ((double)local_4d8.TextData.Reference <= (double)auVar63._0_8_) {
            local_4d8.TextData.Reference = auVar63._0_8_;
          }
          dVar62 = dVar62 * __real_3fe6a09e6ecb41fe;
          fVar47 = (float)(double)local_4d8.TextData.Reference;
          local_4d8.TextData.Reference._4_4_ = (int)uVar22;
          local_4d8.TextData.Reference._0_4_ = fVar47;
          FVar20 = (FWeakObjectPtr)(double)(fVar47 * __real_3f000000);
          dVar51 = dVar51 * __real_3fe6a09e6ecb41fe;
          dVar12 = (double)local_518.AllocatorInstance.Data * __real_3fe6a09e6ecb41fe;
          auVar56._8_4_ = SUB84(__real_3fe6a09e5e333598,0);
          auVar56._0_8_ = dVar12;
          auVar56._12_4_ = uVar66;
          dVar16 = __real_3fe6a09e5e333598 * (double)local_3f8._8_8_;
          auVar57._8_4_ = auVar78._0_4_;
          auVar57._0_8_ = local_3e8;
          auVar57._12_4_ = auVar78._4_4_;
          dVar61 = __real_3fe6a09e5e333598 * local_3e8;
          dVar14 = __real_3fe6a09e5e333598 * dVar11 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar62 * dVar79
                   + dVar12 * dStack_500 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                   dVar51 * local_3e8 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar15 = dVar12 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                   + dVar51 * (double)local_3f8._8_8_ +
                   auVar56._8_8_ * dStack_500 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   dVar62 * auVar57._8_8_ *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          auVar13._8_4_ = SUB84(dVar15,0);
          auVar13._0_8_ = dVar14;
          auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
          param_1[1].InputData.bCancelExecutionOnEmpty = (bool)SUB81(dVar14,0);
          param_1[1].InputData.bCancelExecution = (bool)(char)((ulonglong)dVar14 >> 8);
          *(int6 *)&param_1[1].InputData.field_0x12 = (int6)((ulonglong)dVar14 >> 0x10);
          param_1[1].InputData.DataCrcs.AllocatorInstance = (ForAnyElementType)auVar13._8_8_;
          dVar58 = dVar62 * dVar11 * dVar58 + dVar16 + dVar51 * dStack_500 * dVar7 +
                   dVar12 * auVar57._8_8_ * dVar8;
          auVar17._8_4_ = SUB84(dVar58,0);
          auVar17._0_8_ =
               dVar51 * dVar11 * dVar9 + dVar12 * dVar79 + dVar62 * dStack_500 * dVar50 +
               dVar61 * dVar49;
          auVar17._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
          *(undefined1 (*) [16])&param_1[1].InputData.DataCrcs.ArrayNum = auVar17;
          param_1[1].OutputData.TaggedData.AllocatorInstance.Data = pFVar18;
          *(double *)&param_1[1].OutputData.TaggedData.ArrayNum = dVar21;
          *(double *)&param_1[1].OutputData.bCancelExecutionOnEmpty = dVar19;
          param_1[1].OutputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          auVar10._8_4_ = FVar20.ObjectIndex;
          auVar10._0_4_ = FVar20.ObjectIndex;
          auVar10._4_4_ = FVar20.ObjectSerialNumber;
          auVar10._12_4_ = FVar20.ObjectSerialNumber;
          *(undefined1 (*) [16])&param_1[1].OutputData.DataCrcs.ArrayNum = auVar10;
          param_1[1].ExecutionSource.ObjectInstance.WeakPtr = FVar20;
          param_1[1].ExecutionSource.InterfaceInstance = (IPCGGraphExecutionSource *)0x0;
          local_508._4_4_ = auVar76._12_4_;
          local_508._0_4_ = GRHIGlobals.MaxTextureDimensions.Value;
          fVar48 = fVar47 / *(float *)((longlong)&TVar31.DebugPtr[1]._padding_ + 4);
          iVar43 = (int)ROUND(fVar48 + fVar48 + __real_3f000000) >> 1;
          dStack_3e0 = local_3e8;
          if ((0 < iVar43) && (iVar43 <= GRHIGlobals.MaxTextureDimensions.Value)) {
            pUVar40 = GetTransientPackageAsObject();
            FObjectInitializer::AssertIfInConstructor
                      (pUVar40,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar29 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_288,pUVar29);
            local_288._8_8_ = pUVar40;
            pUVar40 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_288);
            if (local_288._64_8_ != 0) {
              plVar33 = (longlong *)(local_288 + 0x50);
              if ((longlong *)local_288._104_8_ != (longlong *)0x0) {
                plVar33 = (longlong *)local_288._104_8_;
              }
              (**(code **)(*plVar33 + 0x10))();
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar40 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar40);
            }
            param_1[1].InputData.TaggedData.AllocatorInstance.Data =
                 (FScriptContainerElement *)pUVar40;
            *(int *)&pUVar40[8].field_0x18 = iVar43;
            *(int *)(param_1[1].InputData.TaggedData.AllocatorInstance.Data + 0x15c) = iVar43;
            param_1[1].InputData.TaggedData.AllocatorInstance.Data[0x173] =
                 *(FScriptContainerElement *)&TVar31.DebugPtr[1]._padding_;
            ((FLinearColor_u_0 *)(param_1[1].InputData.TaggedData.AllocatorInstance.Data + 0x160))->
            _s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
            (**(code **)(*(longlong *)param_1[1].InputData.TaggedData.AllocatorInstance.Data + 0x328
                        ))();
            local_4c8.ComparisonIndex.Value = 0;
            local_4c8.Number = 0;
            pUVar41 = GetTransientPackage();
            FVar25 = local_4c8;
            local_4c0 = 0;
            if (local_4c8 == (FName)0x0) {
              FObjectInitializer::AssertIfInConstructor
                        ((UObject *)pUVar41,
                         L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                        );
            }
            pUVar29 = Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_308,pUVar29);
            FVar26 = local_4c8;
            local_308._48_8_ = (FObjectInstancingGraph *)0x0;
            local_308._56_8_ = (UPackage *)0x0;
            local_4c8.ComparisonIndex = FVar25.ComparisonIndex.Value;
            local_4c8.Number = FVar25.Number;
            local_308._16_4_ = local_4c8.ComparisonIndex.Value;
            local_308._20_4_ = local_4c8.Number;
            local_308._24_4_ = RF_Transient;
            local_308._40_8_ = (UObject *)0x0;
            local_308[0x20] = false;
            local_4c8 = FVar26;
            local_308._8_8_ = pUVar41;
            pUVar40 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_308);
            if (local_308._64_8_ != 0) {
              plVar33 = (longlong *)(local_308 + 0x50);
              if ((longlong *)local_308._104_8_ != (longlong *)0x0) {
                plVar33 = (longlong *)local_308._104_8_;
              }
              (**(code **)(*plVar33 + 0x10))();
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar40 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar40);
            }
            param_1[1]._padding_ = (longlong)pUVar40;
            pUVar40[3].field_0x21 = pUVar40[3].field_0x21 & 0x7f;
            (**(code **)(*(longlong *)param_1[1]._padding_ + 0x420))
                      ((longlong *)param_1[1]._padding_,0);
            USceneComponent::SetVisibility((USceneComponent *)param_1[1]._padding_,true,DirtyOnly);
            pbVar3 = (byte *)(param_1[1]._padding_ + 0x252);
            *pbVar3 = *pbVar3 & 0xfe;
            pbVar3 = (byte *)(param_1[1]._padding_ + 0x252);
            *pbVar3 = *pbVar3 & 0xfd;
            lVar5 = param_1[1]._padding_;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar40 = (UObject *)param_1[1].InputData.TaggedData.AllocatorInstance.Data,
               pUVar40 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(pUVar40);
            }
            *(FScriptContainerElement **)(lVar5 + 0x378) =
                 param_1[1].InputData.TaggedData.AllocatorInstance.Data;
            *(undefined1 *)(param_1[1]._padding_ + 0x251) =
                 *(undefined1 *)((longlong)&TVar31.DebugPtr[1]._padding_ + 1);
            UActorComponent::RegisterComponentWithWorld
                      ((UActorComponent *)param_1[1]._padding_,pUVar34,
                       (FRegisterComponentContext *)0x0);
            *(undefined1 *)(param_1[1]._padding_ + 0x350) = 1;
            uStack_440 = (int)local_4e0;
            local_448 = local_4b8;
            uStack_43c = (int)((ulonglong)local_4e0 >> 0x20);
            local_438 = local_468.TextValue.field0_0x0.TypedValue.TextData.Reference;
            *(float *)(param_1[1]._padding_ + 0x360) = fVar47;
            USceneComponent::SetWorldLocation
                      ((USceneComponent *)param_1[1]._padding_,(TVector<double> *)&local_448,false,
                       (FHitResult *)0x0,None);
            USceneComponent::SetWorldRotation
                      ((USceneComponent *)param_1[1]._padding_,&local_378,false,(FHitResult *)0x0,
                       None);
            USceneCaptureComponent2D::CaptureSceneDeferred
                      ((USceneCaptureComponent2D *)param_1[1]._padding_);
            *(undefined1 *)&param_1[1].SourceComponent.WeakPtr.ObjectIndex = 1;
            param_1->bIsPaused = true;
            this_01 = FPCGModule::GetPCGModuleChecked();
            pTVar42 = FPCGContext::GetOrCreateHandle(param_1,&local_3d8);
            local_390 = pTVar42->Object;
            local_388 = (pTVar42->WeakReferenceCount).ReferenceController;
            (pTVar42->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pTVar42->Object = (FPCGContextHandle *)0x0;
            local_398 = &UE::Core::Private::Function::
                         TFunction_OwnedObject<`FPCGSceneCaptureElement::ExecuteInternal'::`19'::<lambda_1>,0,0>
                         ::_vftable_;
            local_3a8[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<`FPCGSceneCaptureElement::ExecuteInternal'::__l19::<lambda_1>,void>
                           ::Call;
            local_380 = 0;
            FPCGModule::ExecuteNextTick(this_01,(TFunction<void___cdecl(void)> *)local_3a8);
            if (local_3d8.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &(local_3d8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
              aVar4 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if ((aVar4 == (atomic<int>)0x1) &&
                 (local_3d8.WeakReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0)) {
                (**(code **)((local_3d8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                          (local_3d8.WeakReferenceCount.ReferenceController,1);
              }
            }
            bVar27 = false;
            goto LAB_149c1c578;
          }
          pFVar35 = FText::AsLocalizable_Advanced_LocText
                              (&local_3c8,L"PCGSceneCaptureElement",L"InvalidDimensions",
                               L"Invalid render target dimensions ({0}, {1}), must be between (1, 1) and ({2}, {2})."
                              );
          pFVar36 = FTextFormat::FTextFormat(local_358,pFVar35,Default);
          local_208.Type = Int;
          local_208.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar43;
          FStack_1e0 = (FFormatArgumentValue_u_8)
                       (FFormatArgumentValue_u_8)local_208.field1_0x8.IntValue;
          lStack_1c0 = (longlong)(int)local_508._0_4_;
          local_208.TextValue.field0_0x0.TypedValue.TextData.Reference =
               (TRefCountPtr<ITextData>)(ITextData *)0x0;
          local_208.TextValue.field0_0x0.TypedValue.Flags = 0;
          auVar23._12_4_ = 0;
          auVar23._0_12_ = stack0xfffffffffffffe1c;
          _local_1e8 = (double  [2])(auVar23 << 0x20);
          local_1d8._0_12_ = ZEXT812(0);
          auVar24._12_4_ = 0;
          auVar24._0_12_ = stack0xfffffffffffffe3c;
          _local_1c8 = (double  [2])(auVar24 << 0x20);
          local_1b8._0_12_ = ZEXT812(0);
          local_4f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4f8.ArrayNum = 3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_4f8.AllocatorInstance,3,&local_4f8.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_4f8.AllocatorInstance.Data,&local_208,3);
          local_428.TextFormatData.Object = (pFVar36->TextFormatData).Object;
          local_428.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar36->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_428.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_428.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_428.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_418,&local_428,&local_4f8);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_4f8.AllocatorInstance.Data,local_4f8.ArrayNum);
          if ((FFormatArgumentValue *)local_4f8.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_4f8.AllocatorInstance.Data);
          }
          if ((longlong *)local_1b8[0] != (longlong *)0x0) {
            (**(code **)(*(longlong *)local_1b8[0] + 0x10))();
          }
          if ((longlong *)local_1d8[0] != (longlong *)0x0) {
            (**(code **)(*(longlong *)local_1d8[0] + 0x10))();
          }
          if (local_208.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_208.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar36->TextFormatData).SharedReferenceCount.ReferenceController);
          PCGLog::LogErrorOnGraph(&local_418,param_1);
          if (local_418.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_418.TextData.Reference + 0x10))();
          }
          goto LAB_149c1c38a;
        }
      }
      pFVar35 = FText::AsLocalizable_Advanced_LocText
                          (&local_478,L"PCGSceneCaptureElement",L"InvalidCaptureBounds",
                           L"Invalid capture bounds. Volume must be greater than zero.");
      PCGLog::LogErrorOnGraph(pFVar35,param_1);
      local_3c8.TextData.Reference = local_478.TextData.Reference;
    }
  }
LAB_149c1c38a:
  if (local_3c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3c8.TextData.Reference + 0x10))();
  }
  bVar27 = true;
LAB_149c1c578:
  if (bVar44) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar27;
}

