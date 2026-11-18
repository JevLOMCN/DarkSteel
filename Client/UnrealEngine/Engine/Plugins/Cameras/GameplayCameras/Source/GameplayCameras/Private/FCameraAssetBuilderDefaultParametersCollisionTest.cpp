// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// GetTestFlags @ 14d6422f0

EAutomationTestFlags __thiscall
FCameraAssetBuilderDefaultParametersCollisionTest::GetTestFlags
          (FCameraAssetBuilderDefaultParametersCollisionTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14d642300

bool __thiscall
FCameraAssetBuilderDefaultParametersCollisionTest::IsStressTest
          (FCameraAssetBuilderDefaultParametersCollisionTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14d642310

uint __thiscall
FCameraAssetBuilderDefaultParametersCollisionTest::GetRequiredDeviceNum
          (FCameraAssetBuilderDefaultParametersCollisionTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14d642320

FString * __thiscall
FCameraAssetBuilderDefaultParametersCollisionTest::GetTestSourceFileName
          (FCameraAssetBuilderDefaultParametersCollisionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\CameraAssetBuilderTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14d642350

int __thiscall
FCameraAssetBuilderDefaultParametersCollisionTest::GetTestSourceFileLine
          (FCameraAssetBuilderDefaultParametersCollisionTest *this)

{
  return 0x4f;
}

// GetTests @ 14d642360

/* WARNING: Removing unreachable block (ram,0x00014d64244d) */
/* WARNING: Removing unreachable block (ram,0x00014d642518) */

void __thiscall
FCameraAssetBuilderDefaultParametersCollisionTest::GetTests
          (FCameraAssetBuilderDefaultParametersCollisionTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,
                     "System.Engine.GameplayCameras.CameraAssetBuilder.DefaultParametersCollision");
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

// RunTest @ 14d642540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FCameraAssetBuilderDefaultParametersCollisionTest::RunTest
          (FCameraAssetBuilderDefaultParametersCollisionTest *this,FString *param_1)

{
  UFixedTestCameraDirector *this_00;
  UCameraAsset *this_01;
  FName FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FCameraAssetTestBuilder *this_02;
  TCameraDirectorTestBuilder<UE::Cameras::Test::FCameraAssetTestBuilder,UFixedTestCameraDirector,void>
  *pTVar7;
  FName *pFVar8;
  UCameraRigAsset *pUVar9;
  UOffsetCameraNode *pUVar10;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void>
  *pTVar11;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *pTVar12;
  FCameraRigAssetTestBuilder *pFVar13;
  ULensParametersCameraNode *pUVar14;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
  *pTVar15;
  TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
  *pTVar16;
  UPackage *pUVar17;
  TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
  *pTVar18;
  FName *pFVar19;
  ForAnyElementType FVar20;
  FName local_res18;
  FName local_res20;
  ULensParametersCameraNode *local_5e8;
  FString local_5e0;
  FString local_5d0;
  FString local_5c0;
  FString local_5b0;
  FString local_5a0;
  FString local_590;
  FString local_580;
  FString local_570;
  FString local_560;
  FString local_550;
  FString local_540;
  FString local_530;
  FString local_520;
  FString local_510;
  FString local_500;
  FString local_4f0;
  FString local_4e0;
  FString local_4d0;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> local_450;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> local_428;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> local_400;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
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
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void>
  local_288;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
  local_268;
  TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
  local_248;
  FString local_228;
  FString local_218;
  FString local_208;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> local_178;
  TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> local_168;
  TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> local_158;
  TVector<double>_u_0 local_148;
  TRotator<double> local_130;
  TVector<double>_u_0 local_118;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>
  local_d0;
  FCameraAssetTestBuilder local_b0;
  TCameraDirectorTestBuilder<UE::Cameras::Test::FCameraAssetTestBuilder,UFixedTestCameraDirector,void>
  local_88;
  TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
  local_68;
  
  this_02 = UE::Cameras::Test::FCameraAssetTestBuilder::FCameraAssetTestBuilder
                      (&local_b0,(UObject *)0x0);
  pTVar7 = UE::Cameras::Test::FCameraAssetTestBuilder::MakeDirector<UFixedTestCameraDirector>
                     (this_02,&local_88);
  this_00 = pTVar7->CameraDirector;
  this_01 = *(UCameraAsset **)(pTVar7->_padding_ + 0x10);
  local_88._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.NamedObjectRegistry.SharedReferenceCount.ReferenceController);
  local_b0._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  pFVar8 = ::FName::FName(&local_res18,L"One");
  local_450._padding_ =
       (longlong)
       &
       ___7__TCameraRigAssetTestBuilderBase_VFCameraRigAssetTestBuilder_Test_Cameras_UE___Test_Cameras_UE__6B_
  ;
  local_450._padding_ = 0;
  local_450.NamedObjectRegistry.Object = (FNamedObjectRegistry *)0x0;
  local_450.NamedObjectRegistry.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_178.Object = (FNamedObjectRegistry *)0x0;
  local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
  Initialize(&local_450,&local_178,*pFVar8,(UObject *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_288._padding_ = (longlong)&local_450;
  local_450._padding_ = (longlong)&___7FCameraRigAssetTestBuilder_Test_Cameras_UE__6B_;
  local_288._padding_ =
       (longlong)
       &
       ___7__TCameraNodeTestBuilder_VFCameraRigAssetTestBuilder_Test_Cameras_UE__VUOffsetCameraNode__X_Test_Cameras_UE__6B_
  ;
  pUVar9 = local_450.CameraRig;
  if (local_450.CameraRig == (UCameraRigAsset *)0x0) {
    pUVar9 = (UCameraRigAsset *)GetTransientPackage();
  }
  pUVar10 = NewObject<UOffsetCameraNode>((UObject *)pUVar9);
  local_288._padding_ = (longlong)pUVar10;
  local_288.CameraNode = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UOffsetCameraNode *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  ((local_450.CameraRig)->RootNode).field0_0x0.DebugPtr = (UCameraNode *)pUVar10;
  pTVar11 = UE::Cameras::Test::
            TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void>
            ::Named<void>(&local_288,L"Offset");
  pUVar10 = pTVar11->CameraNode;
  (pUVar10->TranslationOffset).Value.field0_0x0._s_0.X = 10.0;
  (pUVar10->TranslationOffset).Value.field0_0x0._s_0.Y = 20.0;
  (pUVar10->TranslationOffset).Value.field0_0x0._s_0.Z = 0.0;
  pTVar12 = (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *)
            pTVar11->_padding_;
  pFVar8 = ::FName::FName(&local_res20,0x11,L"TranslationOffset",FNAME_Add);
  FVar1 = *pFVar8;
  ::FString::FString(&local_3d8,L"Offset");
  ::FString::FString(&local_218,L"TranslationOffset");
  pTVar12 = (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *)
            UE::Cameras::Test::
            TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
            AddBlendableParameter(pTVar12,&local_218,Vector3d,&local_3d8,FVar1);
  pFVar8 = ::FName::FName(&local_1a0,0xe,L"RotationOffset",FNAME_Add);
  FVar1 = *pFVar8;
  ::FString::FString(&local_228,L"Offset");
  ::FString::FString(&local_318,L"RotationOffset");
  pFVar13 = UE::Cameras::Test::
            TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
            AddBlendableParameter(pTVar12,&local_318,Rotator3d,&local_228,FVar1);
  pUVar9 = *(UCameraRigAsset **)&pFVar13->field_0x10;
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  local_288._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_450.NamedObjectRegistry.SharedReferenceCount.ReferenceController);
  local_450._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  pFVar8 = ::FName::FName(&local_198,L"One");
  UFixedTestCameraDirector::AddCameraRig(this_00,pUVar9,*pFVar8);
  pFVar8 = ::FName::FName(&local_190,L"Two");
  local_428._padding_ =
       (longlong)
       &
       ___7__TCameraRigAssetTestBuilderBase_VFCameraRigAssetTestBuilder_Test_Cameras_UE___Test_Cameras_UE__6B_
  ;
  local_428._padding_ = 0;
  local_428.NamedObjectRegistry.Object = (FNamedObjectRegistry *)0x0;
  local_428.NamedObjectRegistry.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_168.Object = (FNamedObjectRegistry *)0x0;
  local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
  Initialize(&local_428,&local_168,*pFVar8,(UObject *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_268._padding_ = (longlong)&local_428;
  local_428._padding_ = (longlong)&___7FCameraRigAssetTestBuilder_Test_Cameras_UE__6B_;
  local_268._padding_ =
       (longlong)
       &
       ___7__TCameraNodeTestBuilder_VFCameraRigAssetTestBuilder_Test_Cameras_UE__VULensParametersCameraNode__X_Test_Cameras_UE__6B_
  ;
  pUVar9 = local_428.CameraRig;
  if (local_428.CameraRig == (UCameraRigAsset *)0x0) {
    pUVar9 = (UCameraRigAsset *)GetTransientPackage();
  }
  pUVar14 = NewObject<ULensParametersCameraNode>((UObject *)pUVar9);
  local_268._padding_ = (longlong)pUVar14;
  local_268.CameraNode = pUVar14;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (ULensParametersCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  ((local_428.CameraRig)->RootNode).field0_0x0.DebugPtr = (UCameraNode *)pUVar14;
  pTVar15 = UE::Cameras::Test::
            TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
            ::Named<void>(&local_268,L"Lens");
  (pTVar15->CameraNode->FocalLength).Value = 55.0;
  pTVar12 = (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *)
            pTVar15->_padding_;
  pFVar8 = ::FName::FName(&local_188,0xb,L"FocalLength",FNAME_Add);
  FVar1 = *pFVar8;
  ::FString::FString(&local_398,L"Lens");
  ::FString::FString(&local_3a8,L"FocalLength");
  pTVar12 = (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *)
            UE::Cameras::Test::
            TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
            AddBlendableParameter(pTVar12,&local_3a8,Float,&local_398,FVar1);
  pFVar8 = ::FName::FName(&local_180,8,L"Aperture",FNAME_Add);
  FVar1 = *pFVar8;
  ::FString::FString(&local_3b8,L"Lens");
  ::FString::FString(&local_3c8,L"Aperture");
  pFVar13 = UE::Cameras::Test::
            TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
            AddBlendableParameter(pTVar12,&local_3c8,Float,&local_3b8,FVar1);
  pUVar9 = *(UCameraRigAsset **)&pFVar13->field_0x10;
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  local_268._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_428.NamedObjectRegistry.SharedReferenceCount.ReferenceController);
  local_428._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  pFVar8 = ::FName::FName(&local_100,L"Two");
  UFixedTestCameraDirector::AddCameraRig(this_00,pUVar9,*pFVar8);
  pFVar8 = ::FName::FName(&local_f8,L"Three");
  local_400._padding_ =
       (longlong)
       &
       ___7__TCameraRigAssetTestBuilderBase_VFCameraRigAssetTestBuilder_Test_Cameras_UE___Test_Cameras_UE__6B_
  ;
  local_400._padding_ = 0;
  local_400.NamedObjectRegistry.Object = (FNamedObjectRegistry *)0x0;
  local_400.NamedObjectRegistry.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_158.Object = (FNamedObjectRegistry *)0x0;
  local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
  Initialize(&local_400,&local_158,*pFVar8,(UObject *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_400._padding_ = (longlong)&___7FCameraRigAssetTestBuilder_Test_Cameras_UE__6B_;
  UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
  MakeRootNode<UArrayCameraNode>(&local_400,&local_d0);
  pTVar16 = UE::Cameras::Test::
            TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>
            ::AddChild<UOffsetCameraNode,UCameraNode,void>(&local_d0,&local_68,(pdm_47a78b63)0x38);
  pTVar16 = UE::Cameras::Test::
            TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
            ::Named<void>(pTVar16,L"Offset2");
  pUVar10 = pTVar16->CameraNode;
  (pUVar10->TranslationOffset).Value.field0_0x0._s_0.X = 0.0;
  (pUVar10->TranslationOffset).Value.field0_0x0._s_0.Y = 10.0;
  (pUVar10->TranslationOffset).Value.field0_0x0._s_0.Z = 20.0;
  lVar2 = pTVar16->_padding_;
  pUVar17 = *(UPackage **)(*(longlong *)(lVar2 + 0x18) + 0x20);
  local_248._padding_ =
       (longlong)
       &
       ___7__TCameraNodeTestBuilder_V__TCameraNodeTestBuilder_VFCameraRigAssetTestBuilder_Test_Cameras_UE__VUArrayCameraNode__X_Test_Cameras_UE__VULensParametersCameraNode__X_Test_Cameras_UE__6B_
  ;
  local_248._padding_ = lVar2;
  if (pUVar17 == (UPackage *)0x0) {
    pUVar17 = GetTransientPackage();
  }
  local_5e8 = NewObject<ULensParametersCameraNode>((UObject *)pUVar17);
  lVar2 = *(longlong *)(lVar2 + 0x18);
  local_248._padding_ = (longlong)local_5e8;
  local_248.CameraNode = local_5e8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_5e8 != (ULensParametersCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_5e8);
  }
  if (((*(ULensParametersCameraNode ***)(lVar2 + 0x38) <= &local_5e8) &&
      (&local_5e8 < *(ULensParametersCameraNode ***)(lVar2 + 0x38) + *(int *)(lVar2 + 0x44))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar6 = *(int *)(lVar2 + 0x40);
  if (iVar6 == *(int *)(lVar2 + 0x44)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar2 + 0x38),(int *)(lVar2 + 0x44));
  }
  *(int *)(lVar2 + 0x40) = iVar6 + 1;
  *(ULensParametersCameraNode **)(*(longlong *)(lVar2 + 0x38) + (longlong)iVar6 * 8) = local_5e8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_5e8 != (ULensParametersCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_5e8);
  }
  pTVar18 = UE::Cameras::Test::
            TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
            ::Named<void>(&local_248,L"Lens2");
  (pTVar18->CameraNode->FocalLength).Value = 35.0;
  pTVar12 = *(TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> **)
             (pTVar18->_padding_ + 8);
  pFVar8 = ::FName::FName(&local_f0,0x11,L"TranslationOffset",FNAME_Add);
  FVar1 = *pFVar8;
  ::FString::FString(&local_358,L"Offset2");
  ::FString::FString(&local_368,L"TranslationOffset");
  pTVar12 = (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *)
            UE::Cameras::Test::
            TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
            AddBlendableParameter(pTVar12,&local_368,Vector3d,&local_358,FVar1);
  pFVar8 = ::FName::FName(&local_e8,0xb,L"FocalLength",FNAME_Add);
  FVar1 = *pFVar8;
  ::FString::FString(&local_378,L"Lens2");
  ::FString::FString(&local_388,L"FocalLength");
  pFVar13 = UE::Cameras::Test::
            TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
            AddBlendableParameter(pTVar12,&local_388,Float,&local_378,FVar1);
  pUVar9 = *(UCameraRigAsset **)&pFVar13->field_0x10;
  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.Data.AllocatorInstance.Data);
  }
  if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Data.AllocatorInstance.Data);
  }
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.Data.AllocatorInstance.Data);
  }
  local_248._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  local_68._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  local_d0._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_400.NamedObjectRegistry.SharedReferenceCount.ReferenceController);
  local_400._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  pFVar8 = ::FName::FName(&local_e0,L"Three");
  UFixedTestCameraDirector::AddCameraRig(this_00,pUVar9,*pFVar8);
  UCameraAsset::BuildCamera(this_01);
  iVar6 = (this_01->ParameterDefinitions).ArrayNum;
  pFVar8 = (FName *)(this_01->ParameterDefinitions).AllocatorInstance.Data;
  if ((iVar6 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  ::FString::FString(&local_5e0,"NumParameters");
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_5e0.Data.ArrayNum != 0) {
    FVar20.Data = local_5e0.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar20.Data,iVar6,6)
  ;
  if (local_5e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e0.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar19 = ::FName::FName(&local_1a8,"One_TranslationOffset");
    if ((iVar6 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    ::FString::FString(&local_5d0,"Parameter_Name");
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_5d0.Data.ArrayNum != 0) {
      FVar20.Data = local_5d0.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar20.Data,*pFVar8,*pFVar19);
    if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      if ((iVar6 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      ::FString::FString(&local_5c0,"Parameter_Type");
      if ((char)pFVar8[3].ComparisonIndex.Value == '\0') {
        bVar4 = false;
      }
      else {
        pcVar3 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_348,L"%s: The two values are not equal.");
        (*pcVar3)(this,&local_348,0);
        if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.Data.AllocatorInstance.Data);
        }
        bVar4 = true;
      }
      if (local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        if ((iVar6 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        ::FString::FString(&local_5b0,"Parameter_VariableType");
        if (pFVar8[4].ComparisonIndex.Value == 7) {
          bVar4 = false;
        }
        else {
          pcVar3 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_338,L"%s: The two values are not equal.");
          (*pcVar3)(this,&local_338,0);
          if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_338.Data.AllocatorInstance.Data);
          }
          bVar4 = true;
        }
        if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
        }
        if (!bVar4) {
          pFVar19 = ::FName::FName(&local_d8,"RotationOffset");
          if ((iVar6 < 2) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          ::FString::FString(&local_5a0,"Parameter_Name");
          FVar20.Data = (FScriptContainerElement *)L"";
          if (local_5a0.Data.ArrayNum != 0) {
            FVar20.Data = local_5a0.Data.AllocatorInstance.Data;
          }
          bVar4 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar20.Data,pFVar8[9],*pFVar19);
          if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
          }
          if (bVar4) {
            if ((iVar6 < 2) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            ::FString::FString(&local_590,"Parameter_Type");
            if ((char)pFVar8[0xc].ComparisonIndex.Value == '\0') {
              bVar4 = false;
            }
            else {
              pcVar3 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_328,L"%s: The two values are not equal.");
              (*pcVar3)(this,&local_328,0);
              if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_328.Data.AllocatorInstance.Data);
              }
              bVar4 = true;
            }
            if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_590.Data.AllocatorInstance.Data);
            }
            if (!bVar4) {
              if ((iVar6 < 2) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              ::FString::FString(&local_580,"Parameter_VariableType");
              if (pFVar8[0xd].ComparisonIndex.Value == 0xb) {
                bVar4 = false;
              }
              else {
                pcVar3 = *(code **)(*(longlong *)this + 0x28);
                ::FString::PrintfImpl(&local_2a8,L"%s: The two values are not equal.");
                (*pcVar3)(this,&local_2a8,0);
                if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
                }
                bVar4 = true;
              }
              if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_580.Data.AllocatorInstance.Data);
              }
              if (!bVar4) {
                pFVar19 = ::FName::FName(&local_1f8,"Two_FocalLength");
                if ((iVar6 < 3) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  uVar5 = (*pcVar3)();
                  return (bool)uVar5;
                }
                ::FString::FString(&local_570,"Parameter_Name");
                FVar20.Data = (FScriptContainerElement *)L"";
                if (local_570.Data.ArrayNum != 0) {
                  FVar20.Data = local_570.Data.AllocatorInstance.Data;
                }
                bVar4 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar20.Data,pFVar8[0x12],
                                   *pFVar19);
                if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_570.Data.AllocatorInstance.Data);
                }
                if (bVar4) {
                  if ((iVar6 < 3) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    uVar5 = (*pcVar3)();
                    return (bool)uVar5;
                  }
                  ::FString::FString(&local_560,"Parameter_Type");
                  if ((char)pFVar8[0x15].ComparisonIndex.Value == '\0') {
                    bVar4 = false;
                  }
                  else {
                    pcVar3 = *(code **)(*(longlong *)this + 0x28);
                    ::FString::PrintfImpl(&local_308,L"%s: The two values are not equal.");
                    (*pcVar3)(this,&local_308,0);
                    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_308.Data.AllocatorInstance.Data);
                    }
                    bVar4 = true;
                  }
                  if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_560.Data.AllocatorInstance.Data);
                  }
                  if (!bVar4) {
                    if ((iVar6 < 3) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                           ,0x14f,
                                           L"Array index out of bounds: %lld from an array of size %lld"
                                          ), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      uVar5 = (*pcVar3)();
                      return (bool)uVar5;
                    }
                    ::FString::FString(&local_550,"Parameter_VariableType");
                    if (pFVar8[0x16].ComparisonIndex.Value == 2) {
                      bVar4 = false;
                    }
                    else {
                      pcVar3 = *(code **)(*(longlong *)this + 0x28);
                      ::FString::PrintfImpl(&local_2f8,L"%s: The two values are not equal.");
                      (*pcVar3)(this,&local_2f8,0);
                      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
                      }
                      bVar4 = true;
                    }
                    if (local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_550.Data.AllocatorInstance.Data);
                    }
                    if (!bVar4) {
                      pFVar19 = ::FName::FName(&local_1f0,"Aperture");
                      if ((iVar6 < 4) &&
                         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                             ,0x14f,
                                             L"Array index out of bounds: %lld from an array of size %lld"
                                            ), bVar4)) {
                        pcVar3 = (code *)swi(3);
                        uVar5 = (*pcVar3)();
                        return (bool)uVar5;
                      }
                      ::FString::FString(&local_530,"Parameter_Name");
                      FVar20.Data = (FScriptContainerElement *)L"";
                      if (local_530.Data.ArrayNum != 0) {
                        FVar20.Data = local_530.Data.AllocatorInstance.Data;
                      }
                      bVar4 = FAutomationTestBase::TestEqual
                                        ((FAutomationTestBase *)this,(wchar_t *)FVar20.Data,
                                         pFVar8[0x1b],*pFVar19);
                      if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_530.Data.AllocatorInstance.Data);
                      }
                      if (bVar4) {
                        if ((iVar6 < 4) &&
                           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                               ,0x14f,
                                               L"Array index out of bounds: %lld from an array of size %lld"
                                              ), bVar4)) {
                          pcVar3 = (code *)swi(3);
                          uVar5 = (*pcVar3)();
                          return (bool)uVar5;
                        }
                        ::FString::FString(&local_520,"Parameter_Type");
                        if ((char)pFVar8[0x1e].ComparisonIndex.Value == '\0') {
                          bVar4 = false;
                        }
                        else {
                          pcVar3 = *(code **)(*(longlong *)this + 0x28);
                          ::FString::PrintfImpl(&local_2e8,L"%s: The two values are not equal.");
                          (*pcVar3)(this,&local_2e8,0);
                          if (local_2e8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
                          }
                          bVar4 = true;
                        }
                        if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_520.Data.AllocatorInstance.Data);
                        }
                        if (!bVar4) {
                          if ((iVar6 < 4) &&
                             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                 ,0x14f,
                                                 L"Array index out of bounds: %lld from an array of size %lld"
                                                ), bVar4)) {
                            pcVar3 = (code *)swi(3);
                            uVar5 = (*pcVar3)();
                            return (bool)uVar5;
                          }
                          ::FString::FString(&local_510,"Parameter_VariableType");
                          if (pFVar8[0x1f].ComparisonIndex.Value == 2) {
                            bVar4 = false;
                          }
                          else {
                            pcVar3 = *(code **)(*(longlong *)this + 0x28);
                            ::FString::PrintfImpl(&local_2d8,L"%s: The two values are not equal.");
                            (*pcVar3)(this,&local_2d8,0);
                            if (local_2d8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
                            }
                            bVar4 = true;
                          }
                          if (local_510.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_510.Data.AllocatorInstance.Data);
                          }
                          if (!bVar4) {
                            pFVar19 = ::FName::FName(&local_1e8,"Three_TranslationOffset");
                            if ((iVar6 < 5) &&
                               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar4)) {
                              pcVar3 = (code *)swi(3);
                              uVar5 = (*pcVar3)();
                              return (bool)uVar5;
                            }
                            ::FString::FString(&local_500,"Parameter_Name");
                            FVar20.Data = (FScriptContainerElement *)L"";
                            if (local_500.Data.ArrayNum != 0) {
                              FVar20.Data = local_500.Data.AllocatorInstance.Data;
                            }
                            bVar4 = FAutomationTestBase::TestEqual
                                              ((FAutomationTestBase *)this,(wchar_t *)FVar20.Data,
                                               pFVar8[0x24],*pFVar19);
                            if (local_500.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_500.Data.AllocatorInstance.Data);
                            }
                            if (bVar4) {
                              if ((iVar6 < 5) &&
                                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar4)) {
                                pcVar3 = (code *)swi(3);
                                uVar5 = (*pcVar3)();
                                return (bool)uVar5;
                              }
                              ::FString::FString(&local_4f0,"Parameter_Type");
                              if ((char)pFVar8[0x27].ComparisonIndex.Value == '\0') {
                                bVar4 = false;
                              }
                              else {
                                pcVar3 = *(code **)(*(longlong *)this + 0x28);
                                ::FString::PrintfImpl
                                          (&local_2c8,L"%s: The two values are not equal.");
                                (*pcVar3)(this,&local_2c8,0);
                                if (local_2c8.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
                                }
                                bVar4 = true;
                              }
                              if (local_4f0.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
                              }
                              if (!bVar4) {
                                if ((iVar6 < 5) &&
                                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                                      ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar4)) {
                                  pcVar3 = (code *)swi(3);
                                  uVar5 = (*pcVar3)();
                                  return (bool)uVar5;
                                }
                                ::FString::FString(&local_4e0,"Parameter_VariableType");
                                if (pFVar8[0x28].ComparisonIndex.Value == 7) {
                                  bVar4 = false;
                                }
                                else {
                                  pcVar3 = *(code **)(*(longlong *)this + 0x28);
                                  ::FString::PrintfImpl
                                            (&local_2b8,L"%s: The two values are not equal.");
                                  (*pcVar3)(this,&local_2b8,0);
                                  if (local_2b8.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                                  }
                                  bVar4 = true;
                                }
                                if (local_4e0.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
                                }
                                if (!bVar4) {
                                  pFVar19 = ::FName::FName(&local_1e0,"Three_FocalLength");
                                  if ((iVar6 < 6) &&
                                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                                        ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                  
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar4)) {
                                    pcVar3 = (code *)swi(3);
                                    uVar5 = (*pcVar3)();
                                    return (bool)uVar5;
                                  }
                                  ::FString::FString(&local_4d0,"Parameter_Name");
                                  FVar20.Data = (FScriptContainerElement *)L"";
                                  if (local_4d0.Data.ArrayNum != 0) {
                                    FVar20.Data = local_4d0.Data.AllocatorInstance.Data;
                                  }
                                  bVar4 = FAutomationTestBase::TestEqual
                                                    ((FAutomationTestBase *)this,
                                                     (wchar_t *)FVar20.Data,pFVar8[0x2d],*pFVar19);
                                  if (local_4d0.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
                                  }
                                  if (bVar4) {
                                    if ((iVar6 < 6) &&
                                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                                          ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar4)) {
                                      pcVar3 = (code *)swi(3);
                                      uVar5 = (*pcVar3)();
                                      return (bool)uVar5;
                                    }
                                    ::FString::FString(&local_4c0,"Parameter_Type");
                                    if ((char)pFVar8[0x30].ComparisonIndex.Value == '\0') {
                                      bVar4 = false;
                                    }
                                    else {
                                      pcVar3 = *(code **)(*(longlong *)this + 0x28);
                                      ::FString::PrintfImpl
                                                (&local_208,L"%s: The two values are not equal.");
                                      (*pcVar3)(this,&local_208,0);
                                      if (local_208.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_208.Data.AllocatorInstance.Data);
                                      }
                                      bVar4 = true;
                                    }
                                    if (local_4c0.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
                                    }
                                    if (!bVar4) {
                                      if ((iVar6 < 6) &&
                                         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                                            ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar4)) {
                                        pcVar3 = (code *)swi(3);
                                        uVar5 = (*pcVar3)();
                                        return (bool)uVar5;
                                      }
                                      ::FString::FString(&local_4b0,"Parameter_VariableType");
                                      if (pFVar8[0x31].ComparisonIndex.Value == 2) {
                                        bVar4 = false;
                                      }
                                      else {
                                        pcVar3 = *(code **)(*(longlong *)this + 0x28);
                                        ::FString::PrintfImpl
                                                  (&local_298,L"%s: The two values are not equal.");
                                        (*pcVar3)(this,&local_298,0);
                                        if (local_298.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_298.Data.AllocatorInstance.Data);
                                        }
                                        bVar4 = true;
                                      }
                                      if (local_4b0.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
                                      }
                                      if (!bVar4) {
                                        local_148._s_0.Z = 0.0;
                                        local_148._s_0.X = ___xmm_40340000000000004024000000000000;
                                        local_148._s_0.Y = _UNK_152ba61a8;
                                        pFVar8 = ::FName::FName(&local_1d8,L"One_TranslationOffset")
                                        ;
                                        bVar4 = UE::Cameras::Test::
                                                CheckDefaultParameter<FVector3dCameraParameter>
                                                          (&this_01->DefaultParameters,*pFVar8,
                                                           (TVector<double> *)&local_148._s_0);
                                        ::FString::FString(&local_4a0,"Parameter_Default");
                                        FVar20.Data = (FScriptContainerElement *)L"";
                                        if (local_4a0.Data.ArrayNum != 0) {
                                          FVar20.Data = local_4a0.Data.AllocatorInstance.Data;
                                        }
                                        bVar4 = FAutomationTestBase::TestTrue
                                                          ((FAutomationTestBase *)this,
                                                           (wchar_t *)FVar20.Data,bVar4);
                                        if (local_4a0.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
                                        }
                                        if (bVar4) {
                                          local_130.Roll = 0.0;
                                          local_130.Pitch = 0.0;
                                          local_130.Yaw = 0.0;
                                          pFVar8 = ::FName::FName(&local_1d0,L"RotationOffset");
                                          bVar4 = UE::Cameras::Test::
                                                  CheckDefaultParameter<FRotator3dCameraParameter>
                                                            (&this_01->DefaultParameters,*pFVar8,
                                                             &local_130);
                                          ::FString::FString(&local_490,"Parameter_Default");
                                          FVar20.Data = (FScriptContainerElement *)L"";
                                          if (local_490.Data.ArrayNum != 0) {
                                            FVar20.Data = local_490.Data.AllocatorInstance.Data;
                                          }
                                          bVar4 = FAutomationTestBase::TestTrue
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar20.Data,bVar4);
                                          if (local_490.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_490.Data.AllocatorInstance.Data);
                                          }
                                          if (bVar4) {
                                            pFVar8 = ::FName::FName(&local_1c8,L"Two_FocalLength");
                                            bVar4 = UE::Cameras::Test::
                                                    CheckDefaultParameter<FFloatCameraParameter>
                                                              (&this_01->DefaultParameters,*pFVar8,
                                                               __real_425c0000);
                                            ::FString::FString(&local_540,"Parameter_Default");
                                            FVar20.Data = (FScriptContainerElement *)L"";
                                            if (local_540.Data.ArrayNum != 0) {
                                              FVar20.Data = local_540.Data.AllocatorInstance.Data;
                                            }
                                            bVar4 = FAutomationTestBase::TestTrue
                                                              ((FAutomationTestBase *)this,
                                                               (wchar_t *)FVar20.Data,bVar4);
                                            if (local_540.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_540.Data.AllocatorInstance.Data);
                                            }
                                            if (bVar4) {
                                              pFVar8 = ::FName::FName(&local_1c0,L"Aperture");
                                              bVar4 = UE::Cameras::Test::
                                                      CheckDefaultParameter<FFloatCameraParameter>
                                                                (&this_01->DefaultParameters,*pFVar8
                                                                 ,0.0);
                                              ::FString::FString(&local_480,"Parameter_Default");
                                              FVar20.Data = (FScriptContainerElement *)L"";
                                              if (local_480.Data.ArrayNum != 0) {
                                                FVar20.Data = local_480.Data.AllocatorInstance.Data;
                                              }
                                              bVar4 = FAutomationTestBase::TestTrue
                                                                ((FAutomationTestBase *)this,
                                                                 (wchar_t *)FVar20.Data,bVar4);
                                              if (local_480.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_480.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                              if (bVar4) {
                                                local_118._s_0.X =
                                                     ___xmm_40240000000000000000000000000000;
                                                local_118._s_0.Y = _UNK_15076bd28;
                                                local_118._s_0.Z = __real_4034000000000000;
                                                pFVar8 = ::FName::FName(&local_1b8,
                                                                        L"Three_TranslationOffset");
                                                bVar4 = UE::Cameras::Test::
                                                                                                                
                                                  CheckDefaultParameter<FVector3dCameraParameter>
                                                            (&this_01->DefaultParameters,*pFVar8,
                                                             (TVector<double> *)&local_118._s_0);
                                                ::FString::FString(&local_470,"Parameter_Default");
                                                FVar20.Data = (FScriptContainerElement *)L"";
                                                if (local_470.Data.ArrayNum != 0) {
                                                  FVar20.Data = local_470.Data.AllocatorInstance.
                                                                Data;
                                                }
                                                bVar4 = FAutomationTestBase::TestTrue
                                                                  ((FAutomationTestBase *)this,
                                                                   (wchar_t *)FVar20.Data,bVar4);
                                                if (local_470.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_470.Data.AllocatorInstance.
                                                                Data);
                                                }
                                                if (bVar4) {
                                                  pFVar8 = ::FName::FName(&local_1b0,
                                                                          L"Three_FocalLength");
                                                  bVar4 = UE::Cameras::Test::
                                                                                                                    
                                                  CheckDefaultParameter<FFloatCameraParameter>
                                                            (&this_01->DefaultParameters,*pFVar8,
                                                             __real_420c0000);
                                                  ::FString::FString(&local_460,"Parameter_Default")
                                                  ;
                                                  FVar20.Data = (FScriptContainerElement *)L"";
                                                  if (local_460.Data.ArrayNum != 0) {
                                                    FVar20.Data = local_460.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar4 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar20.Data,bVar4);
                                                  if (local_460.Data.AllocatorInstance.Data ==
                                                      (FScriptContainerElement *)0x0) {
                                                    return bVar4;
                                                  }
                                                  FMemory::Free(local_460.Data.AllocatorInstance.
                                                                Data);
                                                  return bVar4;
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
  return false;
}

// GetBeautifiedTestName @ 14d643da0

FString * __thiscall
FCameraAssetBuilderDefaultParametersCollisionTest::GetBeautifiedTestName
          (FCameraAssetBuilderDefaultParametersCollisionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.GameplayCameras.CameraAssetBuilder.DefaultParametersCollision");
  return __return_storage_ptr__;
}

