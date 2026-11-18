// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// GetTestFlags @ 14d645280

EAutomationTestFlags __thiscall
FCameraRigAssetBuilderSimpleParameterTest::GetTestFlags
          (FCameraRigAssetBuilderSimpleParameterTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14d645290

bool __thiscall
FCameraRigAssetBuilderSimpleParameterTest::IsStressTest
          (FCameraRigAssetBuilderSimpleParameterTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14d6452a0

uint __thiscall
FCameraRigAssetBuilderSimpleParameterTest::GetRequiredDeviceNum
          (FCameraRigAssetBuilderSimpleParameterTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14d6452b0

FString * __thiscall
FCameraRigAssetBuilderSimpleParameterTest::GetTestSourceFileName
          (FCameraRigAssetBuilderSimpleParameterTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\CameraRigAssetBuilderTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14d6452e0

int __thiscall
FCameraRigAssetBuilderSimpleParameterTest::GetTestSourceFileLine
          (FCameraRigAssetBuilderSimpleParameterTest *this)

{
  return 0x32;
}

// GetTests @ 14d6452f0

/* WARNING: Removing unreachable block (ram,0x00014d6453dd) */
/* WARNING: Removing unreachable block (ram,0x00014d6454a8) */

void __thiscall
FCameraRigAssetBuilderSimpleParameterTest::GetTests
          (FCameraRigAssetBuilderSimpleParameterTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.GameplayCameras.CameraRigAssetBuilder.SimpleParameter"
                    );
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

// RunTest @ 14d6454d0

bool __thiscall
FCameraRigAssetBuilderSimpleParameterTest::RunTest
          (FCameraRigAssetBuilderSimpleParameterTest *this,FString *param_1)

{
  int iVar1;
  UOffsetCameraNode *pUVar2;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *this_00;
  FName FVar3;
  UCameraRigAsset *this_01;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>
  *this_02;
  TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
  *pTVar9;
  FCameraRigAssetTestBuilder *pFVar10;
  ForAnyElementType FVar11;
  FName local_res18;
  FName local_res20;
  FString local_148;
  FString local_138;
  FString local_128;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> local_118;
  FString local_f0;
  wchar_t *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FString local_b8;
  TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
  local_78;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>
  local_58;
  
  pFVar8 = ::FName::FName(&local_res18,L"SimpleTest");
  local_118._padding_ =
       (longlong)
       &
       ___7__TCameraRigAssetTestBuilderBase_VFCameraRigAssetTestBuilder_Test_Cameras_UE___Test_Cameras_UE__6B_
  ;
  local_118._padding_ = 0;
  local_118.NamedObjectRegistry.Object = (FNamedObjectRegistry *)0x0;
  local_118.NamedObjectRegistry.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_a8.Object = (FNamedObjectRegistry *)0x0;
  local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
  Initialize(&local_118,&local_a8,*pFVar8,(UObject *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_118._padding_ = (longlong)&___7FCameraRigAssetTestBuilder_Test_Cameras_UE__6B_;
  this_02 = UE::Cameras::Test::
            TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
            MakeRootNode<UArrayCameraNode>(&local_118,&local_58);
  pTVar9 = UE::Cameras::Test::
           TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>
           ::AddChild<UOffsetCameraNode,UCameraNode,void>(this_02,&local_78,(pdm_47a78b63)0x38);
  pUVar2 = pTVar9->CameraNode;
  this_00 = *(TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> **)
             (pTVar9->_padding_ + 8);
  pFVar8 = ::FName::FName(&local_res20,0x11,L"TranslationOffset",FNAME_Add);
  FVar3 = *pFVar8;
  ::FString::FString(&local_f0,L"Test");
  pFVar10 = UE::Cameras::Test::
            TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
            AddBlendableParameter(this_00,&local_f0,Vector3d,(UCameraNode *)pUVar2,FVar3);
  this_01 = *(UCameraRigAsset **)&pFVar10->field_0x10;
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  local_78._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  local_58._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.NamedObjectRegistry.SharedReferenceCount.ReferenceController);
  local_118._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  UCameraRigAsset::BuildCameraRig(this_01);
  if (((int)this_01->_padding_ < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_d8 = L"Test";
  iStack_d0 = 4;
  lVar4 = *(longlong *)this_01->_padding_;
  local_c8 = *(wchar_t **)(lVar4 + 0x30);
  iStack_c0 = *(int *)(lVar4 + 0x38) + -1;
  if (*(int *)(lVar4 + 0x38) == 0) {
    iStack_c0 = 0;
  }
  ::FString::FString(&local_148,"Test parameter");
  local_98._12_4_ = uStack_cc;
  local_98.Size = iStack_d0;
  local_88._12_4_ = uStack_bc;
  local_88.Size = iStack_c0;
  local_98.DataPtr = local_d8;
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_148.Data.ArrayNum != 0) {
    FVar11.Data = local_148.Data.AllocatorInstance.Data;
  }
  local_88.DataPtr = local_c8;
  bVar6 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,&local_88,&local_98);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    iVar1 = *(int *)(lVar4 + 0x74);
    ::FString::FString(&local_138,"Test parameter variable ID");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_138.Data.ArrayNum != 0) {
      FVar11.Data = local_138.Data.AllocatorInstance.Data;
    }
    bVar6 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar1 != -1);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      ::FString::FString(&local_128,"Test node parameter");
      if ((pUVar2->TranslationOffset).VariableID.Value == *(uint *)(lVar4 + 0x74)) {
        bVar6 = false;
      }
      else {
        pcVar5 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_b8,L"%s: The two values are not equal.");
        (*pcVar5)(this,&local_b8,0);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        bVar6 = true;
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      return !bVar6;
    }
  }
  return false;
}

// GetBeautifiedTestName @ 14d6457b0

FString * __thiscall
FCameraRigAssetBuilderSimpleParameterTest::GetBeautifiedTestName
          (FCameraRigAssetBuilderSimpleParameterTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.GameplayCameras.CameraRigAssetBuilder.SimpleParameter");
  return __return_storage_ptr__;
}

