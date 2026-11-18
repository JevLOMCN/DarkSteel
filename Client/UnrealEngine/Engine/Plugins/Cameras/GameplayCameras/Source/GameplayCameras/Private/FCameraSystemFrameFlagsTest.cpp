// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// GetTestFlags @ 14d647cf0

EAutomationTestFlags __thiscall
FCameraSystemFrameFlagsTest::GetTestFlags(FCameraSystemFrameFlagsTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14d647d00

bool __thiscall FCameraSystemFrameFlagsTest::IsStressTest(FCameraSystemFrameFlagsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14d647d10

uint __thiscall FCameraSystemFrameFlagsTest::GetRequiredDeviceNum(FCameraSystemFrameFlagsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14d647d20

FString * __thiscall
FCameraSystemFrameFlagsTest::GetTestSourceFileName
          (FCameraSystemFrameFlagsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\CameraSystemUpdateTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14d647d50

int __thiscall FCameraSystemFrameFlagsTest::GetTestSourceFileLine(FCameraSystemFrameFlagsTest *this)

{
  return 0xc;
}

// GetTests @ 14d647d60

/* WARNING: Removing unreachable block (ram,0x00014d647e4d) */
/* WARNING: Removing unreachable block (ram,0x00014d647f18) */

void __thiscall
FCameraSystemFrameFlagsTest::GetTests
          (FCameraSystemFrameFlagsTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.GameplayCameras.CameraSystem.FrameFlags");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14d647f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FCameraSystemFrameFlagsTest::RunTest(FCameraSystemFrameFlagsTest *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  atomic<int> aVar3;
  UCameraAsset *pUVar4;
  FName FVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 uVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  FCameraSystemEvaluator *this_00;
  FCameraEvaluationContext *pFVar11;
  longlong lVar12;
  FCameraNodeEvaluator *pFVar13;
  bool bVar14;
  undefined1 uVar15;
  char cVar16;
  FCameraEvaluationContextTestBuilder *pFVar17;
  FName *pFVar18;
  undefined8 *puVar19;
  UCameraRigAsset *pUVar20;
  UClass *pUVar21;
  UCameraNode *pUVar22;
  UPackage *pUVar23;
  FCameraNodeEvaluator *pFVar24;
  undefined ***pppuVar25;
  ForAnyElementType FVar26;
  FCameraNodeEvaluator *pFVar27;
  longlong *plVar28;
  undefined1 auStackY_3f8 [32];
  undefined8 local_3c8;
  FCameraSystemEvaluationParams local_3c0 [2];
  undefined8 local_3b8;
  FNamedObjectRegistry *local_3b0;
  USingleCameraDirector *local_3a8;
  FCameraEvaluationContext *local_3a0;
  TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> local_398;
  TCameraDirectorTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder,USingleCameraDirector,void>
  local_388;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::TScopedCameraRigAssetTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder>_>
  local_368;
  FCameraEvaluationContextTestBuilder *local_340;
  TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  undefined8 local_248 [2];
  code *local_238;
  undefined **local_228;
  code *local_220;
  undefined ***local_210;
  FCameraRigEvaluationInfo local_208;
  FString local_1d8;
  FString local_1c8;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_1b8;
  FName local_1a8;
  FCameraEvaluationContextTestBuilder local_1a0;
  undefined1 local_168 [16];
  undefined1 local_158 [128];
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  pFVar17 = UE::Cameras::Test::FCameraEvaluationContextTestBuilder::
            FCameraEvaluationContextTestBuilder(&local_1a0,(UObject *)0x0);
  pFVar18 = ::FName::FName(&local_1a8,L"TestRig");
  pUVar4 = pFVar17->CameraAsset;
  FVar5 = *pFVar18;
  puVar19 = (undefined8 *)(**(code **)(pFVar17->_padding_ + 8))(pFVar17,local_168);
  pTVar6 = (TReferenceControllerBase<1> *)puVar19[1];
  local_398.Object = (FNamedObjectRegistry *)*puVar19;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_368.NamedObjectRegistry.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_368.NamedObjectRegistry.Object = (FNamedObjectRegistry *)0x0;
  local_368._padding_ = 0;
  local_368._padding_ =
       (longlong)
       &
       ___7__TCameraRigAssetTestBuilderBase_V__TScopedCameraRigAssetTestBuilder_VFCameraEvaluationContextTestBuilder_Test_Cameras_UE___Test_Cameras_UE___Test_Cameras_UE__6B_
  ;
  local_398.SharedReferenceCount.ReferenceController = pTVar6;
  local_340 = pFVar17;
  UE::Cameras::Test::
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::TScopedCameraRigAssetTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder>_>
  ::Initialize(&local_368,&local_398,FVar5,(UObject *)pUVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)puVar19[1]);
  pUVar20 = local_368.CameraRig;
  if (local_368.CameraRig == (UCameraRigAsset *)0x0) {
    pUVar20 = (UCameraRigAsset *)GetTransientPackage();
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar20,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar21 = UUpdateTrackerCameraNode::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_158,pUVar21);
  local_158._8_8_ = pUVar20;
  pUVar22 = (UCameraNode *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_158);
  if (local_158._64_8_ != 0) {
    plVar28 = (longlong *)(local_158 + 0x50);
    if ((longlong *)local_158._104_8_ != (longlong *)0x0) {
      plVar28 = (longlong *)local_158._104_8_;
    }
    (**(code **)(*plVar28 + 0x10))(plVar28);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar22 != (UCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar22);
  }
  pFVar17 = local_340;
  ((local_368.CameraRig)->RootNode).field0_0x0.DebugPtr = pUVar22;
  if (((local_340->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    uVar15 = (*pcVar8)();
    return (bool)uVar15;
  }
  pUVar23 = (UPackage *)
            FWeakObjectPtr::Get(&(((pFVar17->EvaluationContext).Object)->WeakOwner).WeakPtr);
  local_388._padding_ = (longlong)pFVar17;
  local_388._padding_ =
       (longlong)
       &
       ___7__TCameraDirectorTestBuilder_VFCameraEvaluationContextTestBuilder_Test_Cameras_UE__VUSingleCameraDirector__X_Test_Cameras_UE__6B_
  ;
  if (pUVar23 == (UPackage *)0x0) {
    pUVar23 = GetTransientPackage();
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar23,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar21 = Z_Construct_UClass_USingleCameraDirector_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_d8,pUVar21);
  local_d8._8_8_ = pUVar23;
  local_388._padding_ =
       (longlong)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
  if (local_d8._64_8_ != 0) {
    plVar28 = (longlong *)(local_d8 + 0x50);
    if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
      plVar28 = (longlong *)local_d8._104_8_;
    }
    (**(code **)(*plVar28 + 0x10))(plVar28);
  }
  local_388.CameraDirector = (USingleCameraDirector *)local_388._padding_;
  UCameraAsset::SetCameraDirector(pFVar17->CameraAsset,(UCameraDirector *)local_388._padding_);
  local_210 = (undefined ***)0x0;
  local_228 = &
              ___7__TFunction_OwnedObject_P6AXPEAVUSingleCameraDirector__PEAVFNamedObjectRegistry_Test_Cameras_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_238 = UE::Core::Private::Function::
              TFunctionRefCaller<void_(__cdecl*)(USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*),void,USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*>
              ::Call;
  local_220 = `FCameraSystemFrameFlagsTest::RunTest'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  if (*(code **)(local_388._padding_ + 8) ==
      UE::Cameras::Test::
      TCameraDirectorTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder,USingleCameraDirector,void>
      ::GetNamedObjectRegistry) {
    UE::Cameras::Test::
    TCameraDirectorTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder,USingleCameraDirector,void>
    ::GetNamedObjectRegistry(&local_388,&local_338);
  }
  else {
    (**(code **)(local_388._padding_ + 8))();
  }
  local_3b0 = local_338.Object;
  local_3a8 = local_388.CameraDirector;
  UE::Core::Private::Function::CheckCallable(local_238);
  pcVar8 = local_238;
  pppuVar25 = &local_228;
  if (local_210 != (undefined ***)0x0) {
    pppuVar25 = local_210;
  }
  puVar19 = (undefined8 *)(*(code *)(*pppuVar25)[1])();
  if (pcVar8 == UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*),void,USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*>
                ::Call) {
    (*(code *)*puVar19)(local_3a8,local_3b0);
  }
  else {
    (*pcVar8)(puVar19,&local_3a8,&local_3b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_338.SharedReferenceCount.ReferenceController);
  if (local_238 != (code *)0x0) {
    pppuVar25 = &local_228;
    if (local_210 != (undefined ***)0x0) {
      pppuVar25 = local_210;
    }
    (*(code *)(*pppuVar25)[2])();
  }
  lVar12 = local_388._padding_;
  UCameraAsset::BuildCamera(*(UCameraAsset **)(local_388._padding_ + 0x10));
  if ((((TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)(lVar12 + 0x18))->Object ==
       (FCameraEvaluationContext *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    uVar15 = (*pcVar8)();
    return (bool)uVar15;
  }
  pTVar6 = (((TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)(lVar12 + 0x18))->
           SharedReferenceCount).ReferenceController;
  local_3a0 = ((TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)(lVar12 + 0x18))->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_3a0 == (FCameraEvaluationContext *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    uVar15 = (*pcVar8)();
    return (bool)uVar15;
  }
  local_388._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_368.NamedObjectRegistry.SharedReferenceCount.ReferenceController);
  local_368._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.NamedObjectRegistry.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.EvaluationContext.SharedReferenceCount.ReferenceController);
  local_1a0._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  pFVar24 = ::operator_new(0x1cd0);
  if (pFVar24 == (FCameraNodeEvaluator *)0x0) {
    local_3c8 = (FCameraSystemEvaluator *)&DAT_00000010;
    pFVar24 = (FCameraNodeEvaluator *)0x0;
LAB_14d6483af:
    if (((local_3c8->_padding_ == 0) || (local_3c8->_padding_ == 0)) ||
       (*(int *)(local_3c8->_padding_ + 8) < 1)) {
      if (pFVar24 != (FCameraNodeEvaluator *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar24->bAutoCameraPoseMovementTrail =
             (atomic<int>)((int)*(atomic<int> *)&pFVar24->bAutoCameraPoseMovementTrail + 1);
        UNLOCK();
      }
      local_3c8->_padding_ = (longlong)local_3c8;
      if (pFVar24 != (FCameraNodeEvaluator *)local_3c8->_padding_) {
        if (pFVar24 != (FCameraNodeEvaluator *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar24->field_0xc =
               (atomic<int>)((int)*(atomic<int> *)&pFVar24->field_0xc + 1);
          UNLOCK();
        }
        plVar28 = (longlong *)local_3c8->_padding_;
        if (plVar28 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar28 + 8))(plVar28,1);
          }
        }
        local_3c8->_padding_ = (longlong)pFVar24;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar24);
    }
  }
  else {
    *(atomic<int> *)&pFVar24->bAutoCameraPoseMovementTrail = (atomic<int>)0x1;
    *(atomic<int> *)&pFVar24->field_0xc = (atomic<int>)0x1;
    pFVar24->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCameraSystemEvaluator_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    UE::Cameras::FCameraSystemEvaluator::FCameraSystemEvaluator
              ((FCameraSystemEvaluator *)&pFVar24->PrivateCameraNode);
    local_3c8 = (FCameraSystemEvaluator *)&pFVar24->PrivateCameraNode;
    if (local_3c8 != (FCameraSystemEvaluator *)0x0) goto LAB_14d6483af;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar14) {
      pcVar8 = (code *)swi(3);
      uVar15 = (*pcVar8)();
      return (bool)uVar15;
    }
  }
  this_00 = local_3c8;
  local_248[0] = 0;
  UE::Cameras::FCameraSystemEvaluator::Initialize(local_3c8,(TObjectPtr<UObject>)local_248);
  pFVar11 = local_3a0;
  local_1b8.Object = local_3a0;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1b8.SharedReferenceCount.ReferenceController = pTVar6;
  UE::Cameras::FCameraSystemEvaluator::PushEvaluationContext(local_3c8,&local_1b8);
  fVar10 = __real_3e99999a;
  (pFVar11->InitialResult).bIsValid = true;
  local_3c0[0].DeltaTime = 0.3;
  UE::Cameras::FCameraSystemEvaluator::Update(local_3c8,local_3c0);
  local_208.InstanceID.Value = 0xffffffff;
  local_208.InstanceID.Layer = None;
  local_208.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
  local_208.EvaluationContext.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_208.RootEvaluator = (FCameraNodeEvaluator *)0x0;
  local_208.CameraRig.field0_0x0.DebugPtr = (TObjectPtr<UCameraRigAsset_const_>_u_0)0x0;
  local_208.LastResult = (FCameraNodeEvaluationResult *)0x0;
  UE::Cameras::FRootCameraNodeEvaluator::GetActiveCameraRigInfo(local_3c8->RootEvaluator,&local_208)
  ;
  ::FString::FString(&local_328,"RootEvaluator");
  if (local_208.RootEvaluator == (FCameraNodeEvaluator *)0x0) {
    pcVar8 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1d8,L"Expected \'%s\' to be not null.");
    (*pcVar8)(this,&local_1d8,0);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    bVar14 = true;
  }
  else {
    bVar14 = false;
  }
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  pFVar13 = local_208.RootEvaluator;
  if (!bVar14) {
    cVar16 = (**(code **)((local_208.RootEvaluator)->_padding_ + 8))
                       (local_208.RootEvaluator,
                        &UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator::PrivateTypeID);
    pFVar27 = (FCameraNodeEvaluator *)0x0;
    if (cVar16 != '\0') {
      pFVar27 = pFVar13;
    }
    ::FString::FString(&local_318,"UpdateTracker");
    if (pFVar27 == (FCameraNodeEvaluator *)0x0) {
      pcVar8 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_1c8,L"Expected \'%s\' to be not null.");
      (*pcVar8)(this,&local_1c8,0);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    if (!bVar14) {
      aVar3 = *(atomic<int> *)&pFVar27[1].bAutoCameraPoseMovementTrail;
      ::FString::FString(&local_308,"NumReceivedUpdates");
      FVar26.Data = (FScriptContainerElement *)L"";
      if (local_308.Data.ArrayNum != 0) {
        FVar26.Data = local_308.Data.AllocatorInstance.Data;
      }
      bVar14 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,(int)aVar3,1);
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
      if (bVar14) {
        if (((int)*(atomic<int> *)&pFVar27[1].bAutoCameraPoseMovementTrail < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
        local_3b8 = *(undefined8 *)pFVar27[1]._padding_;
        ::FString::FString(&local_2f8,"DeltaTime");
        fVar9 = __real_38d1b717;
        FVar26.Data = (FScriptContainerElement *)L"";
        if (local_2f8.Data.ArrayNum != 0) {
          FVar26.Data = local_2f8.Data.AllocatorInstance.Data;
        }
        bVar14 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,(float)local_3b8,
                            fVar10,__real_38d1b717);
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        }
        if (bVar14) {
          ::FString::FString(&local_2e8,"IsCameraCut");
          FVar26.Data = (FScriptContainerElement *)L"";
          if (local_2e8.Data.ArrayNum != 0) {
            FVar26.Data = local_2e8.Data.AllocatorInstance.Data;
          }
          bVar14 = FAutomationTestBase::TestFalse
                             ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,local_3b8._5_1_);
          if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
          }
          if (bVar14) {
            ::FString::FString(&local_2d8,"IsFirstFrame");
            FVar26.Data = (FScriptContainerElement *)L"";
            if (local_2d8.Data.ArrayNum != 0) {
              FVar26.Data = local_2d8.Data.AllocatorInstance.Data;
            }
            bVar14 = FAutomationTestBase::TestTrue
                               ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,local_3b8._4_1_);
            if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
            }
            if (bVar14) {
              UE::Cameras::FCameraSystemEvaluator::Update(local_3c8,local_3c0);
              aVar3 = *(atomic<int> *)&pFVar27[1].bAutoCameraPoseMovementTrail;
              ::FString::FString(&local_2c8,"NumReceivedUpdates");
              FVar26.Data = (FScriptContainerElement *)L"";
              if (local_2c8.Data.ArrayNum != 0) {
                FVar26.Data = local_2c8.Data.AllocatorInstance.Data;
              }
              bVar14 = FAutomationTestBase::TestEqual
                                 ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,(int)aVar3,2);
              if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
              }
              if (bVar14) {
                if (((int)*(atomic<int> *)&pFVar27[1].bAutoCameraPoseMovementTrail < 2) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  uVar15 = (*pcVar8)();
                  return (bool)uVar15;
                }
                uVar7 = *(undefined8 *)(pFVar27[1]._padding_ + 8);
                ::FString::FString(&local_2b8,"DeltaTime");
                local_3c8._0_4_ = (float)uVar7;
                FVar26.Data = (FScriptContainerElement *)L"";
                if (local_2b8.Data.ArrayNum != 0) {
                  FVar26.Data = local_2b8.Data.AllocatorInstance.Data;
                }
                bVar14 = FAutomationTestBase::TestEqual
                                   ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,
                                    (float)local_3c8,fVar10,fVar9);
                if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                }
                if (bVar14) {
                  ::FString::FString(&local_2a8,"IsCameraCut");
                  local_3c8._5_1_ = SUB81((ulonglong)uVar7 >> 0x28,0);
                  FVar26.Data = (FScriptContainerElement *)L"";
                  if (local_2a8.Data.ArrayNum != 0) {
                    FVar26.Data = local_2a8.Data.AllocatorInstance.Data;
                  }
                  bVar14 = FAutomationTestBase::TestFalse
                                     ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,
                                      local_3c8._5_1_);
                  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
                  }
                  if (bVar14) {
                    ::FString::FString(&local_298,"IsFirstFrame");
                    local_3c8._4_1_ = SUB81((ulonglong)uVar7 >> 0x20,0);
                    FVar26.Data = (FScriptContainerElement *)L"";
                    if (local_298.Data.ArrayNum != 0) {
                      FVar26.Data = local_298.Data.AllocatorInstance.Data;
                    }
                    bVar14 = FAutomationTestBase::TestFalse
                                       ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,
                                        local_3c8._4_1_);
                    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_298.Data.AllocatorInstance.Data);
                    }
                    if (bVar14) {
                      (local_3a0->InitialResult).bIsCameraCut = true;
                      UE::Cameras::FCameraSystemEvaluator::Update(this_00,local_3c0);
                      aVar3 = *(atomic<int> *)&pFVar27[1].bAutoCameraPoseMovementTrail;
                      ::FString::FString(&local_288,"NumReceivedUpdates");
                      FVar26.Data = (FScriptContainerElement *)L"";
                      if (local_288.Data.ArrayNum != 0) {
                        FVar26.Data = local_288.Data.AllocatorInstance.Data;
                      }
                      bVar14 = FAutomationTestBase::TestEqual
                                         ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,
                                          (int)aVar3,3);
                      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_288.Data.AllocatorInstance.Data);
                      }
                      if (bVar14) {
                        if (((int)*(atomic<int> *)&pFVar27[1].bAutoCameraPoseMovementTrail < 3) &&
                           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar14)) {
                          pcVar8 = (code *)swi(3);
                          uVar15 = (*pcVar8)();
                          return (bool)uVar15;
                        }
                        uVar7 = *(undefined8 *)(pFVar27[1]._padding_ + 0x10);
                        ::FString::FString(&local_278,"DeltaTime");
                        local_3c8._0_4_ = (float)uVar7;
                        FVar26.Data = (FScriptContainerElement *)L"";
                        if (local_278.Data.ArrayNum != 0) {
                          FVar26.Data = local_278.Data.AllocatorInstance.Data;
                        }
                        bVar14 = FAutomationTestBase::TestEqual
                                           ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,
                                            (float)local_3c8,fVar10,fVar9);
                        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_278.Data.AllocatorInstance.Data);
                        }
                        if (bVar14) {
                          ::FString::FString(&local_268,"IsCameraCut");
                          local_3c8._5_1_ = SUB81((ulonglong)uVar7 >> 0x28,0);
                          FVar26.Data = (FScriptContainerElement *)L"";
                          if (local_268.Data.ArrayNum != 0) {
                            FVar26.Data = local_268.Data.AllocatorInstance.Data;
                          }
                          bVar14 = FAutomationTestBase::TestTrue
                                             ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,
                                              local_3c8._5_1_);
                          if (local_268.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_268.Data.AllocatorInstance.Data);
                          }
                          if (bVar14) {
                            ::FString::FString(&local_258,"IsFirstFrame");
                            local_3c8._4_1_ = SUB81((ulonglong)uVar7 >> 0x20,0);
                            FVar26.Data = (FScriptContainerElement *)L"";
                            if (local_258.Data.ArrayNum != 0) {
                              FVar26.Data = local_258.Data.AllocatorInstance.Data;
                            }
                            bVar14 = FAutomationTestBase::TestFalse
                                               ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,
                                                local_3c8._4_1_);
                            if (local_258.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_258.Data.AllocatorInstance.Data);
                            }
                            if (bVar14) {
                              bVar14 = true;
                              goto LAB_14d648a69;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar14 = false;
LAB_14d648a69:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.EvaluationContext.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar24);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar14;
}

// GetBeautifiedTestName @ 14d648ad0

FString * __thiscall
FCameraSystemFrameFlagsTest::GetBeautifiedTestName
          (FCameraSystemFrameFlagsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.GameplayCameras.CameraSystem.FrameFlags")
  ;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 14d64bab0

void __cdecl
`FCameraSystemFrameFlagsTest::RunTest'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (USingleCameraDirector *param_1,FNamedObjectRegistry *param_2)

{
  undefined1 local_res18 [16];
  
  operator()(local_res18,param_1,param_2);
  return;
}

// operator() @ 14d658c20

void __thiscall
`FCameraSystemFrameFlagsTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,USingleCameraDirector *param_1,FNamedObjectRegistry *param_2)

{
  undefined8 *puVar1;
  UCameraRigAsset *pUVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,L"TestRig");
  pwVar9 = L"";
  pwVar8 = L"";
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayNum = 0;
  }
  else {
    local_38.Data.ArrayNum = local_38.Data.ArrayNum + -1;
    pwVar8 = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(local_38.Data.ArrayNum,pwVar8);
  iVar4 = TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
                      *)&param_2->NamedObjects,uVar3,&local_38);
  if ((((iVar4 != -1) &&
       (lVar5 = (longlong)iVar4 * 0x20 + *(longlong *)&param_2->NamedObjects, lVar5 != 0)) &&
      (puVar1 = (undefined8 *)(lVar5 + 0x10), puVar1 != (undefined8 *)0x0)) &&
     (pUVar2 = (UCameraRigAsset *)*puVar1, pUVar2 != (UCameraRigAsset *)0x0)) {
    pUVar6 = Z_Construct_UClass_UCameraRigAsset_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((iVar4 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar6->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (param_1->CameraRig).field0_0x0.DebugPtr = pUVar2;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      return;
    }
    pFVar7 = GetTypeName<UCameraRigAsset>(&local_28);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    pFVar7 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar9,pwVar8);
  }
  pFVar7 = GetTypeName<UCameraRigAsset>(&local_18);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar9);
}

