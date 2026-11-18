// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// GetTestFlags @ 14d64a910

EAutomationTestFlags __thiscall
FCameraAssetBuilderDefaultParametersTest::GetTestFlags
          (FCameraAssetBuilderDefaultParametersTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14d64a920

bool __thiscall
FCameraAssetBuilderDefaultParametersTest::IsStressTest
          (FCameraAssetBuilderDefaultParametersTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14d64a930

uint __thiscall
FCameraAssetBuilderDefaultParametersTest::GetRequiredDeviceNum
          (FCameraAssetBuilderDefaultParametersTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14d64a940

FString * __thiscall
FCameraAssetBuilderDefaultParametersTest::GetTestSourceFileName
          (FCameraAssetBuilderDefaultParametersTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\CameraAssetBuilderTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14d64a970

int __thiscall
FCameraAssetBuilderDefaultParametersTest::GetTestSourceFileLine
          (FCameraAssetBuilderDefaultParametersTest *this)

{
  return 0x21;
}

// GetTests @ 14d64a980

/* WARNING: Removing unreachable block (ram,0x00014d64aa6d) */
/* WARNING: Removing unreachable block (ram,0x00014d64ab38) */

void __thiscall
FCameraAssetBuilderDefaultParametersTest::GetTests
          (FCameraAssetBuilderDefaultParametersTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.GameplayCameras.CameraAssetBuilder.DefaultParameters")
  ;
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

// RunTest @ 14d64ab60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FCameraAssetBuilderDefaultParametersTest::RunTest
          (FCameraAssetBuilderDefaultParametersTest *this,FString *param_1)

{
  int iVar1;
  UFixedTestCameraDirector *this_00;
  UCameraAsset *this_01;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *pTVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FCameraAssetTestBuilder *this_02;
  TCameraDirectorTestBuilder<UE::Cameras::Test::FCameraAssetTestBuilder,UFixedTestCameraDirector,void>
  *pTVar7;
  FName *pFVar8;
  UCameraRigAsset *pUVar9;
  UOffsetCameraNode *pUVar10;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void>
  *pTVar11;
  FCameraRigAssetTestBuilder *pFVar12;
  ULensParametersCameraNode *pUVar13;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
  *pTVar14;
  FName *pFVar15;
  ForAnyElementType FVar16;
  FName local_res18;
  FName local_res20;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> local_208;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> local_1e0;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void>
  local_138;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
  local_118;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> local_d8;
  TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> local_c8;
  TVector<double>_u_0 local_b8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FCameraAssetTestBuilder local_80;
  TCameraDirectorTestBuilder<UE::Cameras::Test::FCameraAssetTestBuilder,UFixedTestCameraDirector,void>
  local_58;
  
  this_02 = UE::Cameras::Test::FCameraAssetTestBuilder::FCameraAssetTestBuilder
                      (&local_80,(UObject *)0x0);
  pTVar7 = UE::Cameras::Test::FCameraAssetTestBuilder::MakeDirector<UFixedTestCameraDirector>
                     (this_02,&local_58);
  this_00 = pTVar7->CameraDirector;
  this_01 = *(UCameraAsset **)(pTVar7->_padding_ + 0x10);
  local_58._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.NamedObjectRegistry.SharedReferenceCount.ReferenceController);
  local_80._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  pFVar8 = ::FName::FName(&local_res18,L"One");
  local_208._padding_ =
       (longlong)
       &
       ___7__TCameraRigAssetTestBuilderBase_VFCameraRigAssetTestBuilder_Test_Cameras_UE___Test_Cameras_UE__6B_
  ;
  local_208._padding_ = 0;
  local_208.NamedObjectRegistry.Object = (FNamedObjectRegistry *)0x0;
  local_208.NamedObjectRegistry.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_d8.Object = (FNamedObjectRegistry *)0x0;
  local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
  Initialize(&local_208,&local_d8,*pFVar8,(UObject *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_138._padding_ = (longlong)&local_208;
  local_208._padding_ = (longlong)&___7FCameraRigAssetTestBuilder_Test_Cameras_UE__6B_;
  local_138._padding_ =
       (longlong)
       &
       ___7__TCameraNodeTestBuilder_VFCameraRigAssetTestBuilder_Test_Cameras_UE__VUOffsetCameraNode__X_Test_Cameras_UE__6B_
  ;
  pUVar9 = local_208.CameraRig;
  if (local_208.CameraRig == (UCameraRigAsset *)0x0) {
    pUVar9 = (UCameraRigAsset *)GetTransientPackage();
  }
  pUVar10 = NewObject<UOffsetCameraNode>((UObject *)pUVar9);
  local_138._padding_ = (longlong)pUVar10;
  local_138.CameraNode = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UOffsetCameraNode *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  ((local_208.CameraRig)->RootNode).field0_0x0.DebugPtr = (UCameraNode *)pUVar10;
  pTVar11 = UE::Cameras::Test::
            TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void>
            ::Named<void>(&local_138,L"Offset");
  pUVar10 = pTVar11->CameraNode;
  (pUVar10->TranslationOffset).Value.field0_0x0._s_0.X = 10.0;
  (pUVar10->TranslationOffset).Value.field0_0x0._s_0.Y = 20.0;
  (pUVar10->TranslationOffset).Value.field0_0x0._s_0.Z = 0.0;
  pTVar2 = (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *)
           pTVar11->_padding_;
  pFVar8 = ::FName::FName(&local_res20,0x11,L"TranslationOffset",FNAME_Add);
  FVar3 = *pFVar8;
  ::FString::FString(&local_1a8,L"Offset");
  ::FString::FString(&local_1b8,L"TranslationOffset");
  pFVar12 = UE::Cameras::Test::
            TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
            AddBlendableParameter(pTVar2,&local_1b8,Vector3d,&local_1a8,FVar3);
  pUVar9 = *(UCameraRigAsset **)&pFVar12->field_0x10;
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  local_138._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.NamedObjectRegistry.SharedReferenceCount.ReferenceController);
  local_208._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  pFVar8 = ::FName::FName(&local_a0,L"One");
  UFixedTestCameraDirector::AddCameraRig(this_00,pUVar9,*pFVar8);
  pFVar8 = ::FName::FName(&local_98,L"Two");
  local_1e0._padding_ =
       (longlong)
       &
       ___7__TCameraRigAssetTestBuilderBase_VFCameraRigAssetTestBuilder_Test_Cameras_UE___Test_Cameras_UE__6B_
  ;
  local_1e0._padding_ = 0;
  local_1e0.NamedObjectRegistry.Object = (FNamedObjectRegistry *)0x0;
  local_1e0.NamedObjectRegistry.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_c8.Object = (FNamedObjectRegistry *)0x0;
  local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
  Initialize(&local_1e0,&local_c8,*pFVar8,(UObject *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_118._padding_ = (longlong)&local_1e0;
  local_1e0._padding_ = (longlong)&___7FCameraRigAssetTestBuilder_Test_Cameras_UE__6B_;
  local_118._padding_ =
       (longlong)
       &
       ___7__TCameraNodeTestBuilder_VFCameraRigAssetTestBuilder_Test_Cameras_UE__VULensParametersCameraNode__X_Test_Cameras_UE__6B_
  ;
  pUVar9 = local_1e0.CameraRig;
  if (local_1e0.CameraRig == (UCameraRigAsset *)0x0) {
    pUVar9 = (UCameraRigAsset *)GetTransientPackage();
  }
  pUVar13 = NewObject<ULensParametersCameraNode>((UObject *)pUVar9);
  local_118._padding_ = (longlong)pUVar13;
  local_118.CameraNode = pUVar13;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (ULensParametersCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  ((local_1e0.CameraRig)->RootNode).field0_0x0.DebugPtr = (UCameraNode *)pUVar13;
  pTVar14 = UE::Cameras::Test::
            TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
            ::Named<void>(&local_118,L"Lens");
  (pTVar14->CameraNode->FocalLength).Value = 55.0;
  pTVar2 = (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *)
           pTVar14->_padding_;
  pFVar8 = ::FName::FName(&local_90,0xb,L"FocalLength",FNAME_Add);
  FVar3 = *pFVar8;
  ::FString::FString(&local_188,L"Lens");
  ::FString::FString(&local_198,L"FocalLength");
  pFVar12 = UE::Cameras::Test::
            TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
            AddBlendableParameter(pTVar2,&local_198,Float,&local_188,FVar3);
  pUVar9 = *(UCameraRigAsset **)&pFVar12->field_0x10;
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  local_118._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e0.NamedObjectRegistry.SharedReferenceCount.ReferenceController);
  local_1e0._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  pFVar8 = ::FName::FName(&local_88,L"Two");
  UFixedTestCameraDirector::AddCameraRig(this_00,pUVar9,*pFVar8);
  UCameraAsset::BuildCamera(this_01);
  iVar1 = (this_01->ParameterDefinitions).ArrayNum;
  pFVar8 = (FName *)(this_01->ParameterDefinitions).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  ::FString::FString(&local_228,"NumParameters");
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_228.Data.ArrayNum != 0) {
    FVar16.Data = local_228.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,iVar1,2)
  ;
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pFVar15 = ::FName::FName(&local_f8,"TranslationOffset");
    if ((iVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::FString::FString(&local_218,"Parameter_Name");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_218.Data.ArrayNum != 0) {
      FVar16.Data = local_218.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,*pFVar8,*pFVar15);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      if ((iVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      ::FString::FString(&local_298,"Parameter_Type");
      if ((char)pFVar8[3].ComparisonIndex.Value == '\0') {
        bVar5 = false;
      }
      else {
        pcVar4 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_178,L"%s: The two values are not equal.");
        (*pcVar4)(this,&local_178,0);
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        bVar5 = true;
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        if ((iVar1 < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        ::FString::FString(&local_288,"Parameter_VariableType");
        if (pFVar8[4].ComparisonIndex.Value == 7) {
          bVar5 = false;
        }
        else {
          pcVar4 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_168,L"%s: The two values are not equal.");
          (*pcVar4)(this,&local_168,0);
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          bVar5 = true;
        }
        if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.Data.AllocatorInstance.Data);
        }
        if (!bVar5) {
          pFVar15 = ::FName::FName(&local_f0,"FocalLength");
          if ((iVar1 < 2) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          ::FString::FString(&local_278,"Parameter_Name");
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_278.Data.ArrayNum != 0) {
            FVar16.Data = local_278.Data.AllocatorInstance.Data;
          }
          bVar5 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,pFVar8[9],*pFVar15);
          if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            if ((iVar1 < 2) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            ::FString::FString(&local_268,"Parameter_Type");
            if ((char)pFVar8[0xc].ComparisonIndex.Value == '\0') {
              bVar5 = false;
            }
            else {
              pcVar4 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_158,L"%s: The two values are not equal.");
              (*pcVar4)(this,&local_158,0);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              bVar5 = true;
            }
            if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_268.Data.AllocatorInstance.Data);
            }
            if (!bVar5) {
              if ((iVar1 < 2) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              ::FString::FString(&local_258,"Parameter_VariableType");
              if (pFVar8[0xd].ComparisonIndex.Value == 2) {
                bVar5 = false;
              }
              else {
                pcVar4 = *(code **)(*(longlong *)this + 0x28);
                ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
                (*pcVar4)(this,&local_148,0);
                if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_148.Data.AllocatorInstance.Data);
                }
                bVar5 = true;
              }
              if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_258.Data.AllocatorInstance.Data);
              }
              if (!bVar5) {
                local_b8._s_0.X = ___xmm_40340000000000004024000000000000;
                local_b8._s_0.Y = _UNK_152ba61a8;
                local_b8._s_0.Z = 0.0;
                pFVar8 = ::FName::FName(&local_e8,L"TranslationOffset");
                bVar5 = UE::Cameras::Test::CheckDefaultParameter<FVector3dCameraParameter>
                                  (&this_01->DefaultParameters,*pFVar8,
                                   (TVector<double> *)&local_b8._s_0);
                ::FString::FString(&local_248,"Parameter_Default");
                FVar16.Data = (FScriptContainerElement *)L"";
                if (local_248.Data.ArrayNum != 0) {
                  FVar16.Data = local_248.Data.AllocatorInstance.Data;
                }
                bVar5 = FAutomationTestBase::TestTrue
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,bVar5);
                if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_248.Data.AllocatorInstance.Data);
                }
                if (bVar5) {
                  pFVar8 = ::FName::FName(&local_e0,L"FocalLength");
                  bVar5 = UE::Cameras::Test::CheckDefaultParameter<FFloatCameraParameter>
                                    (&this_01->DefaultParameters,*pFVar8,__real_425c0000);
                  ::FString::FString(&local_238,"Parameter_Default");
                  FVar16.Data = (FScriptContainerElement *)L"";
                  if (local_238.Data.ArrayNum != 0) {
                    FVar16.Data = local_238.Data.AllocatorInstance.Data;
                  }
                  bVar5 = FAutomationTestBase::TestTrue
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,bVar5);
                  if (local_238.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                    return bVar5;
                  }
                  FMemory::Free(local_238.Data.AllocatorInstance.Data);
                  return bVar5;
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

// GetBeautifiedTestName @ 14d64b490

FString * __thiscall
FCameraAssetBuilderDefaultParametersTest::GetBeautifiedTestName
          (FCameraAssetBuilderDefaultParametersTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.GameplayCameras.CameraAssetBuilder.DefaultParameters");
  return __return_storage_ptr__;
}

