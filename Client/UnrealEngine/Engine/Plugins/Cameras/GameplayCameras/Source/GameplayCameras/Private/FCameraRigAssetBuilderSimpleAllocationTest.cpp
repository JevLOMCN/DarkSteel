// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// GetTestFlags @ 14d644ca0

EAutomationTestFlags __thiscall
FCameraRigAssetBuilderSimpleAllocationTest::GetTestFlags
          (FCameraRigAssetBuilderSimpleAllocationTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14d644cb0

bool __thiscall
FCameraRigAssetBuilderSimpleAllocationTest::IsStressTest
          (FCameraRigAssetBuilderSimpleAllocationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14d644cc0

uint __thiscall
FCameraRigAssetBuilderSimpleAllocationTest::GetRequiredDeviceNum
          (FCameraRigAssetBuilderSimpleAllocationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14d644cd0

FString * __thiscall
FCameraRigAssetBuilderSimpleAllocationTest::GetTestSourceFileName
          (FCameraRigAssetBuilderSimpleAllocationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\CameraRigAssetBuilderTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14d644d00

int __thiscall
FCameraRigAssetBuilderSimpleAllocationTest::GetTestSourceFileLine
          (FCameraRigAssetBuilderSimpleAllocationTest *this)

{
  return 0x1b;
}

// GetTests @ 14d644d10

/* WARNING: Removing unreachable block (ram,0x00014d644dfd) */
/* WARNING: Removing unreachable block (ram,0x00014d644ec8) */

void __thiscall
FCameraRigAssetBuilderSimpleAllocationTest::GetTests
          (FCameraRigAssetBuilderSimpleAllocationTest *this,
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
                     "System.Engine.GameplayCameras.CameraRigAssetBuilder.SimpleAllocation");
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

// RunTest @ 14d644ef0

bool __thiscall
FCameraRigAssetBuilderSimpleAllocationTest::RunTest
          (FCameraRigAssetBuilderSimpleAllocationTest *this,FString *param_1)

{
  UCameraRigAsset *this_00;
  longlong lVar1;
  bool bVar2;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>
  *this_01;
  TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
  *pTVar3;
  FNamedObjectRegistry *pFVar4;
  TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> local_a8;
  TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
  local_98;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>
  local_78;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> local_58;
  
  local_58._padding_ = 0;
  local_58._padding_ =
       (longlong)
       &
       ___7__TCameraRigAssetTestBuilderBase_VFCameraRigAssetTestBuilder_Test_Cameras_UE___Test_Cameras_UE__6B_
  ;
  local_58.NamedObjectRegistry.Object = (FNamedObjectRegistry *)0x0;
  local_58.NamedObjectRegistry.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_a8.Object = (FNamedObjectRegistry *)0x0;
  local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
  Initialize(&local_58,&local_a8,(FName)0x0,(UObject *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_58._padding_ = (longlong)&___7FCameraRigAssetTestBuilder_Test_Cameras_UE__6B_;
  this_01 = UE::Cameras::Test::
            TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
            MakeRootNode<UArrayCameraNode>(&local_58,&local_78);
  pTVar3 = UE::Cameras::Test::
           TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>
           ::AddChild<UOffsetCameraNode,UCameraNode,void>(this_01,&local_98,(pdm_47a78b63)0x38);
  this_00 = *(UCameraRigAsset **)(*(longlong *)(pTVar3->_padding_ + 8) + 0x10);
  local_98._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  local_78._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.NamedObjectRegistry.SharedReferenceCount.ReferenceController);
  local_58._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  lVar1 = this_00->_padding_;
  ::FString::FString((FString *)&local_a8,"No evaluator allocation info");
  pFVar4 = (FNamedObjectRegistry *)L"";
  if ((int)local_a8.SharedReferenceCount.ReferenceController != 0) {
    pFVar4 = local_a8.Object;
  }
  bVar2 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)pFVar4,(int)(short)lVar1,0);
  if (local_a8.Object != (FNamedObjectRegistry *)0x0) {
    FMemory::Free(local_a8.Object);
  }
  if (bVar2) {
    UCameraRigAsset::BuildCameraRig(this_00);
    UArrayCameraNode::GetEvaluatorAllocationInfo();
    UOffsetCameraNode::GetEvaluatorAllocationInfo();
    lVar1 = this_00->_padding_;
    ::FString::FString((FString *)&local_a8,"Evaluator allocation info");
    pFVar4 = (FNamedObjectRegistry *)L"";
    if ((int)local_a8.SharedReferenceCount.ReferenceController != 0) {
      pFVar4 = local_a8.Object;
    }
    bVar2 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)pFVar4,(int)(short)lVar1,0);
    if (local_a8.Object != (FNamedObjectRegistry *)0x0) {
      FMemory::Free(local_a8.Object);
    }
    return bVar2;
  }
  return false;
}

// GetBeautifiedTestName @ 14d645090

FString * __thiscall
FCameraRigAssetBuilderSimpleAllocationTest::GetBeautifiedTestName
          (FCameraRigAssetBuilderSimpleAllocationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.GameplayCameras.CameraRigAssetBuilder.SimpleAllocation");
  return __return_storage_ptr__;
}

