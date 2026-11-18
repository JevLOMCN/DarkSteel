// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// GetTestFlags @ 14d644780

EAutomationTestFlags __thiscall
FCameraRigAssetBuilderNullTest::GetTestFlags(FCameraRigAssetBuilderNullTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14d644790

bool __thiscall FCameraRigAssetBuilderNullTest::IsStressTest(FCameraRigAssetBuilderNullTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14d6447a0

uint __thiscall
FCameraRigAssetBuilderNullTest::GetRequiredDeviceNum(FCameraRigAssetBuilderNullTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14d6447b0

FString * __thiscall
FCameraRigAssetBuilderNullTest::GetTestSourceFileName
          (FCameraRigAssetBuilderNullTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\CameraRigAssetBuilderTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14d6447e0

int __thiscall
FCameraRigAssetBuilderNullTest::GetTestSourceFileLine(FCameraRigAssetBuilderNullTest *this)

{
  return 0xd;
}

// GetTests @ 14d6447f0

/* WARNING: Removing unreachable block (ram,0x00014d6448dd) */
/* WARNING: Removing unreachable block (ram,0x00014d6449a8) */

void __thiscall
FCameraRigAssetBuilderNullTest::GetTests
          (FCameraRigAssetBuilderNullTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.GameplayCameras.CameraRigAssetBuilder.Null");
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

// RunTest @ 14d6449d0

bool __thiscall
FCameraRigAssetBuilderNullTest::RunTest(FCameraRigAssetBuilderNullTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FName local_res18;
  FString local_58;
  TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> local_48;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> local_38;
  
  pFVar3 = ::FName::FName(&local_res18,L"EmptyTest");
  local_38._padding_ = 0;
  local_38._padding_ =
       (longlong)
       &
       ___7__TCameraRigAssetTestBuilderBase_VFCameraRigAssetTestBuilder_Test_Cameras_UE___Test_Cameras_UE__6B_
  ;
  local_38.NamedObjectRegistry.Object = (FNamedObjectRegistry *)0x0;
  local_38.NamedObjectRegistry.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_48.Object = (FNamedObjectRegistry *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
  Initialize(&local_38,&local_48,*pFVar3,(UObject *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.NamedObjectRegistry.SharedReferenceCount.ReferenceController);
  ::FString::FString(&local_58,"Dirty status");
  if ((local_38.CameraRig)->BuildStatus == Dirty) {
    bVar2 = false;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_48,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_48,0);
    if (local_48.Object != (FNamedObjectRegistry *)0x0) {
      FMemory::Free(local_48.Object);
    }
    bVar2 = true;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    bVar2 = false;
  }
  else {
    UCameraRigAsset::BuildCameraRig(local_38.CameraRig);
    ::FString::FString(&local_58,"Clean status");
    if ((local_38.CameraRig)->BuildStatus == Clean) {
      bVar2 = false;
    }
    else {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_48,L"%s: The two values are not equal.");
      (*pcVar1)(this,&local_48,0);
      if (local_48.Object != (FNamedObjectRegistry *)0x0) {
        FMemory::Free(local_48.Object);
      }
      bVar2 = true;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    bVar2 = !bVar2;
  }
  return bVar2;
}

// GetBeautifiedTestName @ 14d644b70

FString * __thiscall
FCameraRigAssetBuilderNullTest::GetBeautifiedTestName
          (FCameraRigAssetBuilderNullTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.GameplayCameras.CameraRigAssetBuilder.Null");
  return __return_storage_ptr__;
}

