// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// GetTestFlags @ 14d645a70

EAutomationTestFlags __thiscall
FCameraRigAssetBuilderDrivenOverridesTest::GetTestFlags
          (FCameraRigAssetBuilderDrivenOverridesTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14d645a80

bool __thiscall
FCameraRigAssetBuilderDrivenOverridesTest::IsStressTest
          (FCameraRigAssetBuilderDrivenOverridesTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14d645a90

uint __thiscall
FCameraRigAssetBuilderDrivenOverridesTest::GetRequiredDeviceNum
          (FCameraRigAssetBuilderDrivenOverridesTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14d645aa0

FString * __thiscall
FCameraRigAssetBuilderDrivenOverridesTest::GetTestSourceFileName
          (FCameraRigAssetBuilderDrivenOverridesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\CameraRigAssetBuilderTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14d645ad0

int __thiscall
FCameraRigAssetBuilderDrivenOverridesTest::GetTestSourceFileLine
          (FCameraRigAssetBuilderDrivenOverridesTest *this)

{
  return 0x4b;
}

// GetTests @ 14d645ae0

/* WARNING: Removing unreachable block (ram,0x00014d645bcd) */
/* WARNING: Removing unreachable block (ram,0x00014d645c98) */

void __thiscall
FCameraRigAssetBuilderDrivenOverridesTest::GetTests
          (FCameraRigAssetBuilderDrivenOverridesTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.GameplayCameras.CameraRigAssetBuilder.DrivenOverrides"
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

// RunTest @ 14d645d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FCameraRigAssetBuilderDrivenOverridesTest::RunTest
          (FCameraRigAssetBuilderDrivenOverridesTest *this,FString *param_1)

{
  int *piVar1;
  longlong *plVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  UOffsetCameraNode *pUVar5;
  longlong lVar6;
  UCameraRigAsset *pUVar7;
  UCameraRigCameraNode *pUVar8;
  UCameraRigAsset *pUVar9;
  longlong lVar10;
  UObject *pUVar11;
  FVector3dCameraParameter *pFVar12;
  FFloatCameraParameter *pFVar13;
  code *pcVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  undefined1 uVar19;
  int iVar20;
  TReferenceControllerBase<1> *pTVar21;
  FName *pFVar22;
  UPackage *pUVar23;
  TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
  *pTVar24;
  TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
  *pTVar25;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *pTVar26;
  FCameraRigAssetTestBuilder *pFVar27;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UCameraRigCameraNode,void>
  *pTVar28;
  UObject **ppUVar29;
  UClass *pUVar30;
  FPropertyBagPropertyDesc *pFVar31;
  TValueOrError<FVector3dCameraParameter_*,EPropertyBagResult> *pTVar32;
  FVector3dCameraParameter **ppFVar33;
  TValueOrError<FFloatCameraParameter_*,EPropertyBagResult> *this_00;
  FFloatCameraParameter **ppFVar34;
  FString *pFVar35;
  atomic<int> *paVar36;
  TReferenceControllerBase<1> *pTVar37;
  wchar_t *pwVar38;
  wchar_t *pwVar39;
  FNamedObjectRegistry *pFVar40;
  UOffsetCameraNode *local_538;
  ULensParametersCameraNode *local_530;
  FPropertyBagPropertyDesc *local_528;
  TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> local_520;
  TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> local_510;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> local_500;
  TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> local_4d8;
  longlong local_4b0;
  UCameraRigAsset *local_4a8;
  UCameraRigCameraNode *local_4a0;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
  local_378;
  TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
  local_358;
  FString local_338;
  FString local_328;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>
  local_318;
  FName local_2f8;
  FName local_2f0;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FName local_2b8;
  FName local_2b0;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_288;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_248;
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  code *local_208 [2];
  undefined **local_1f8;
  UCameraRigAsset *local_1f0;
  undefined8 local_1e0;
  code *local_1d8 [2];
  undefined **local_1c8;
  UCameraRigAsset *local_1c0;
  undefined8 local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_180;
  undefined **local_178 [4];
  TReferenceControllerBase<1> *local_158;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  TValueOrError<FVector3dCameraParameter_*,EPropertyBagResult> local_110;
  TValueOrError<FFloatCameraParameter_*,EPropertyBagResult> local_100;
  TValueOrError<FVector3dCameraParameter_*,EPropertyBagResult> local_f0;
  TValueOrError<FVector3dCameraParameter_*,EPropertyBagResult> local_e0;
  FString local_d0;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UCameraRigCameraNode,void>
  local_c0;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UCameraRigCameraNode,void>
  local_a0;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  pTVar21 = ::operator_new(0x70);
  pTVar37 = (TReferenceControllerBase<1> *)0x0;
  pwVar39 = L"";
  if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
    pFVar40 = (FNamedObjectRegistry *)&DAT_00000010;
LAB_14d645e55:
    if (((pFVar40->_padding_ == 0) || (*(longlong *)&pFVar40->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&pFVar40->_padding_ + 8) < 1)) {
      paVar36 = (atomic<int> *)&pFVar40->_padding_;
      if (pTVar37 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar37->SharedReferenceCount = (atomic<int>)((int)pTVar37->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar40->_padding_ = (longlong)pFVar40;
      if (pTVar37 != *(TReferenceControllerBase<1> **)paVar36) {
        if (pTVar37 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar37->WeakReferenceCount = (atomic<int>)((int)pTVar37->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar2 = *(longlong **)paVar36;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar2 + 8))();
          }
        }
        *(TReferenceControllerBase<1> **)paVar36 = pTVar37;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar37);
    }
  }
  else {
    pTVar21->SharedReferenceCount = (atomic<int>)0x1;
    pFVar40 = (FNamedObjectRegistry *)(pTVar21 + 1);
    pTVar21->WeakReferenceCount = (atomic<int>)0x1;
    pTVar21->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNamedObjectRegistry_Test_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    pTVar21[3]._padding_ = 0;
    pTVar21[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar21[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar21[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar21[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar21[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar21[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar21[1]._padding_ = 0;
    pTVar21[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar21[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar21[2]._padding_ = 0;
    pTVar21[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar21[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar21[4]._padding_ = 0;
    pTVar21[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar21[4].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar21[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar21[5]._padding_ + 4) = 0;
    pTVar21[6]._padding_ = 0;
    pTVar37 = pTVar21;
    if (pFVar40 != (FNamedObjectRegistry *)0x0) goto LAB_14d645e55;
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar18) {
      pcVar14 = (code *)swi(3);
      uVar19 = (*pcVar14)();
      return (bool)uVar19;
    }
  }
  pFVar22 = ::FName::FName(&local_2e0,L"InnerCameraRig");
  FVar3 = *pFVar22;
  if (pTVar37 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar37->SharedReferenceCount = (atomic<int>)((int)pTVar37->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar37->SharedReferenceCount = (atomic<int>)((int)pTVar37->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar37->SharedReferenceCount = (atomic<int>)((int)pTVar37->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_500.NamedObjectRegistry.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_500.NamedObjectRegistry.Object = (FNamedObjectRegistry *)0x0;
  local_500._padding_ = 0;
  local_500._padding_ =
       (longlong)
       &
       ___7__TCameraRigAssetTestBuilderBase_VFCameraRigAssetTestBuilder_Test_Cameras_UE___Test_Cameras_UE__6B_
  ;
  local_520.Object = pFVar40;
  local_520.SharedReferenceCount.ReferenceController = pTVar37;
  UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
  Initialize(&local_500,&local_520,FVar3,(UObject *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar37);
  local_500._padding_ = (longlong)&___7FCameraRigAssetTestBuilder_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar37);
  UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
  MakeRootNode<UArrayCameraNode>(&local_500,&local_318);
  local_378._padding_ = (longlong)&local_318;
  pUVar23 = (UPackage *)(local_318.CameraNode)->_padding_;
  local_378._padding_ =
       (longlong)
       &
       ___7__TCameraNodeTestBuilder_V__TCameraNodeTestBuilder_VFCameraRigAssetTestBuilder_Test_Cameras_UE__VUArrayCameraNode__X_Test_Cameras_UE__VUOffsetCameraNode__X_Test_Cameras_UE__6B_
  ;
  if (pUVar23 == (UPackage *)0x0) {
    pUVar23 = GetTransientPackage();
  }
  local_538 = NewObject<UOffsetCameraNode>((UObject *)pUVar23);
  local_378._padding_ = (longlong)local_538;
  local_378.CameraNode = local_538;
  if (local_318.CameraNode == (UArrayCameraNode *)0x0) {
    pFVar35 = GetTypeName<UArrayCameraNode>(&local_130);
    if ((pFVar35->Data).ArrayNum != 0) {
      pwVar39 = (wchar_t *)(pFVar35->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar39);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_538 != (UOffsetCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_538);
  }
  pFVar4 = ((local_318.CameraNode)->Children).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_538) &&
      ((FScriptContainerElement *)&local_538 <
       pFVar4 + (longlong)((local_318.CameraNode)->Children).ArrayMax * 8)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar18)) {
    pcVar14 = (code *)swi(3);
    uVar19 = (*pcVar14)();
    return (bool)uVar19;
  }
  iVar20 = ((local_318.CameraNode)->Children).ArrayNum;
  piVar1 = &((local_318.CameraNode)->Children).ArrayMax;
  if (iVar20 == *piVar1) {
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&((local_318.CameraNode)->Children).AllocatorInstance,piVar1);
  }
  ((local_318.CameraNode)->Children).ArrayNum = iVar20 + 1;
  *(UOffsetCameraNode **)
   (((local_318.CameraNode)->Children).AllocatorInstance.Data + (longlong)iVar20 * 8) = local_538;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_538 != (UOffsetCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_538);
  }
  pTVar24 = UE::Cameras::Test::
            TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
            ::Named<void>(&local_378,L"Offset");
  dVar17 = _UNK_152ba61a8;
  dVar16 = __real_403e000000000000;
  local_198 = __real_403e000000000000;
  pUVar5 = pTVar24->CameraNode;
  local_1a8 = ___xmm_40340000000000004024000000000000;
  dStack_1a0 = _UNK_152ba61a8;
  (pUVar5->TranslationOffset).Value.field0_0x0._s_0.X = ___xmm_40340000000000004024000000000000;
  (pUVar5->TranslationOffset).Value.field0_0x0._s_0.Y = dVar17;
  (pUVar5->TranslationOffset).Value.field0_0x0._s_0.Z = dVar16;
  lVar6 = pTVar24->_padding_;
  pUVar23 = *(UPackage **)(*(longlong *)(lVar6 + 0x18) + 0x20);
  local_358._padding_ =
       (longlong)
       &
       ___7__TCameraNodeTestBuilder_V__TCameraNodeTestBuilder_VFCameraRigAssetTestBuilder_Test_Cameras_UE__VUArrayCameraNode__X_Test_Cameras_UE__VULensParametersCameraNode__X_Test_Cameras_UE__6B_
  ;
  local_358._padding_ = lVar6;
  if (pUVar23 == (UPackage *)0x0) {
    pUVar23 = GetTransientPackage();
  }
  local_530 = NewObject<ULensParametersCameraNode>((UObject *)pUVar23);
  lVar6 = *(longlong *)(lVar6 + 0x18);
  local_358._padding_ = (longlong)local_530;
  local_358.CameraNode = local_530;
  if (lVar6 == 0) {
    pFVar35 = GetTypeName<UArrayCameraNode>(&local_120);
    if ((pFVar35->Data).ArrayNum != 0) {
      pwVar39 = (wchar_t *)(pFVar35->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar39);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_530 != (ULensParametersCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_530);
  }
  if (((*(ULensParametersCameraNode ***)(lVar6 + 0x38) <= &local_530) &&
      (&local_530 < *(ULensParametersCameraNode ***)(lVar6 + 0x38) + *(int *)(lVar6 + 0x44))) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar18)) {
    pcVar14 = (code *)swi(3);
    uVar19 = (*pcVar14)();
    return (bool)uVar19;
  }
  iVar20 = *(int *)(lVar6 + 0x40);
  if (iVar20 == *(int *)(lVar6 + 0x44)) {
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)(lVar6 + 0x38),(int *)(lVar6 + 0x44));
  }
  *(int *)(lVar6 + 0x40) = iVar20 + 1;
  *(ULensParametersCameraNode **)(*(longlong *)(lVar6 + 0x38) + (longlong)iVar20 * 8) = local_530;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_530 != (ULensParametersCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_530);
  }
  pTVar25 = UE::Cameras::Test::
            TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
            ::Named<void>(&local_358,L"Lens");
  (pTVar25->CameraNode->FocalLength).Value = 20.0;
  pTVar26 = *(TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> **)
             (pTVar25->_padding_ + 8);
  pFVar22 = ::FName::FName(&local_2d8,0x11,L"TranslationOffset",FNAME_Add);
  FVar3 = *pFVar22;
  ::FString::FString(&local_328,L"Offset");
  ::FString::FString(&local_3f8,L"OffsetParam");
  pTVar26 = (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *)
            UE::Cameras::Test::
            TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
            AddBlendableParameter(pTVar26,&local_3f8,Vector3d,&local_328,FVar3);
  pFVar22 = ::FName::FName(&local_2e8,0xb,L"FocalLength",FNAME_Add);
  FVar3 = *pFVar22;
  ::FString::FString(&local_3e8,L"Lens");
  ::FString::FString(&local_428,L"FocalLengthParam");
  pFVar27 = UE::Cameras::Test::
            TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
            AddBlendableParameter(pTVar26,&local_428,Float,&local_3e8,FVar3);
  pUVar7 = *(UCameraRigAsset **)&pFVar27->field_0x10;
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
  }
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  local_358._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  local_378._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  local_318._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_500.NamedObjectRegistry.SharedReferenceCount.ReferenceController);
  local_500._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  UCameraRigAsset::BuildCameraRig(pUVar7);
  pFVar22 = ::FName::FName(&local_2d0,L"MiddleCameraRig");
  FVar3 = *pFVar22;
  if (pTVar37 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar37->SharedReferenceCount = (atomic<int>)((int)pTVar37->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar37->SharedReferenceCount = (atomic<int>)((int)pTVar37->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar37->SharedReferenceCount = (atomic<int>)((int)pTVar37->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4d8.NamedObjectRegistry.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_4d8.NamedObjectRegistry.Object = (FNamedObjectRegistry *)0x0;
  local_4d8._padding_ = 0;
  local_4d8._padding_ =
       (longlong)
       &
       ___7__TCameraRigAssetTestBuilderBase_VFCameraRigAssetTestBuilder_Test_Cameras_UE___Test_Cameras_UE__6B_
  ;
  local_510.Object = pFVar40;
  local_510.SharedReferenceCount.ReferenceController = pTVar37;
  UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
  Initialize(&local_4d8,&local_510,FVar3,(UObject *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar37);
  local_4d8._padding_ = (longlong)&___7FCameraRigAssetTestBuilder_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar37);
  pTVar28 = UE::Cameras::Test::
            TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
            MakeRootNode<UCameraRigCameraNode>(&local_4d8,&local_c0);
  pUVar8 = pTVar28->CameraNode;
  local_1c8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::`2'::<lambda_1>,0,0>
               ::_vftable_;
  local_1d8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_1>,void,UCameraRigCameraNode_*,UE::Cameras::Test::FNamedObjectRegistry_*>
                 ::Call;
  local_1b0 = 0;
  local_1c0 = pUVar7;
  pTVar28 = UE::Cameras::Test::
            TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UCameraRigCameraNode,void>
            ::Setup(pTVar28,(TFunction<void___cdecl(UCameraRigCameraNode_*,UE::Cameras::Test::FNamedObjectRegistry_*)>
                             *)local_1d8);
  pTVar26 = (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *)
            pTVar28->_padding_;
  pFVar22 = ::FName::FName(&local_2c8,L"OffsetParam");
  FVar3 = *pFVar22;
  ::FString::FString(&local_338,L"MiddleOffsetParam");
  pFVar27 = UE::Cameras::Test::
            TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
            AddBlendableParameter(pTVar26,&local_338,Vector3d,(UCameraNode *)pUVar8,FVar3);
  pUVar9 = *(UCameraRigAsset **)&pFVar27->field_0x10;
  local_4a8 = pUVar9;
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  local_c0._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4d8.NamedObjectRegistry.SharedReferenceCount.ReferenceController);
  local_4d8._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  UCameraRigAsset::BuildCameraRig(pUVar9);
  pFVar22 = ::FName::FName(&local_2c0,L"OuterCameraRig");
  FVar3 = *pFVar22;
  if (pTVar37 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar37->SharedReferenceCount = (atomic<int>)((int)pTVar37->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_418.Object = pFVar40;
  local_418.SharedReferenceCount.ReferenceController = pTVar37;
  pTVar26 = (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *)
            UE::Cameras::Test::FCameraRigAssetTestBuilder::FCameraRigAssetTestBuilder
                      ((FCameraRigAssetTestBuilder *)local_178,&local_418,FVar3,(UObject *)0x0);
  pTVar28 = UE::Cameras::Test::
            TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
            MakeRootNode<UCameraRigCameraNode>(pTVar26,&local_a0);
  local_4a0 = pTVar28->CameraNode;
  local_1f8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::`2'::<lambda_2>,0,0>
               ::_vftable_;
  local_208[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_2>,void,UCameraRigCameraNode_*,UE::Cameras::Test::FNamedObjectRegistry_*>
                 ::Call;
  local_1e0 = 0;
  local_1f0 = pUVar9;
  pTVar28 = UE::Cameras::Test::
            TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UCameraRigCameraNode,void>
            ::Setup(pTVar28,(TFunction<void___cdecl(UCameraRigCameraNode_*,UE::Cameras::Test::FNamedObjectRegistry_*)>
                             *)local_208);
  pUVar9 = *(UCameraRigAsset **)(pTVar28->_padding_ + 0x10);
  local_a0._padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_158);
  local_178[0] = &___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  UCameraRigAsset::BuildCameraRig(pUVar9);
  if (((int)pUVar7->_padding_ < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    uVar19 = (*pcVar14)();
    return (bool)uVar19;
  }
  lVar6 = *(longlong *)pUVar7->_padding_;
  local_4b0 = lVar6;
  if (((int)pUVar7->_padding_ < 2) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    uVar19 = (*pcVar14)();
    return (bool)uVar19;
  }
  lVar10 = *(longlong *)(pUVar7->_padding_ + 8);
  ::FString::FString(&local_408,"Offset");
  ppUVar29 = TMapBase<FString,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>_>
             ::Find((TMapBase<FString,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>_>
                     *)&pFVar40->NamedObjects,&local_408);
  if ((ppUVar29 == (UObject **)0x0) || (pUVar11 = *ppUVar29, pUVar11 == (UObject *)0x0)) {
    pFVar35 = GetTypeName<UOffsetCameraNode>(local_60);
    if ((pFVar35->Data).ArrayNum != 0) {
      pwVar39 = (wchar_t *)(pFVar35->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar39);
  }
  pUVar30 = Z_Construct_UClass_UOffsetCameraNode_NoRegister();
  iVar20 = (int)pUVar30->_padding_;
  if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar20) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar20 * 8) !=
      &pUVar30->_padding_)) {
    pFVar35 = GetTypeName<UOffsetCameraNode>(&local_150);
    if ((pFVar35->Data).ArrayNum == 0) {
      pwVar38 = L"";
    }
    else {
      pwVar38 = (wchar_t *)(pFVar35->Data).AllocatorInstance.Data;
    }
    pFVar35 = GetFullNameForCastLogError<UObject>(&local_140,pUVar11);
    if ((pFVar35->Data).ArrayNum != 0) {
      pwVar39 = (wchar_t *)(pFVar35->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar39,pwVar38);
  }
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  bVar18 = FAutomationTestBase::TestEqual<FCameraVariableID>
                     ((FAutomationTestBase *)this,L"OffsetNode->TranslationOffset.VariableID",
                      (FCameraVariableID *)(pUVar11 + 2),(FCameraVariableID *)(lVar6 + 0x74));
  if (bVar18) {
    ::FString::FString(&local_438,"Lens");
    ppUVar29 = TMapBase<FString,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>_>
               ::Find((TMapBase<FString,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>_>
                       *)&pFVar40->NamedObjects,&local_438);
    if ((ppUVar29 == (UObject **)0x0) || (pUVar11 = *ppUVar29, pUVar11 == (UObject *)0x0)) {
      pFVar35 = GetTypeName<ULensParametersCameraNode>(&local_70);
      if ((pFVar35->Data).ArrayNum != 0) {
        pwVar39 = (wchar_t *)(pFVar35->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar39);
    }
    pUVar30 = Z_Construct_UClass_ULensParametersCameraNode_NoRegister();
    iVar20 = (int)pUVar30->_padding_;
    if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar20) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar20 * 8) !=
        &pUVar30->_padding_)) {
      pFVar35 = GetTypeName<ULensParametersCameraNode>(&local_d0);
      if ((pFVar35->Data).ArrayNum == 0) {
        pwVar38 = L"";
      }
      else {
        pwVar38 = (wchar_t *)(pFVar35->Data).AllocatorInstance.Data;
      }
      pFVar35 = GetFullNameForCastLogError<UObject>(&local_80,pUVar11);
      if ((pFVar35->Data).ArrayNum != 0) {
        pwVar39 = (wchar_t *)(pFVar35->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar39,pwVar38);
    }
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
    bVar18 = FAutomationTestBase::TestEqual<FCameraVariableID>
                       ((FAutomationTestBase *)this,L"LensNode->FocalLength.VariableID",
                        (FCameraVariableID *)&pUVar11[1].field_0x14,
                        (FCameraVariableID *)(lVar10 + 0x74));
    if (bVar18) {
      pFVar22 = ::FName::FName(&local_2b8,"OffsetParam");
      pFVar31 = FInstancedPropertyBag::FindPropertyDescByName
                          ((FInstancedPropertyBag *)&(pUVar8->CameraRigReference)._padding_,*pFVar22
                          );
      local_528 = pFVar31;
      pFVar22 = ::FName::FName(&local_2b0,"OffsetParam");
      pTVar32 = FInstancedPropertyBag::GetValueStruct<FVector3dCameraParameter>
                          ((FInstancedPropertyBag *)&(pUVar8->CameraRigReference)._padding_,
                           &local_110,*pFVar22);
      ppFVar33 = TValueOrError<FVector3dCameraParameter_*,enum_EPropertyBagResult>::GetValue
                           (pTVar32);
      pFVar12 = *ppFVar33;
      ::FString::FString(&local_498,"OffsetParamDesc");
      if (pFVar31 == (FPropertyBagPropertyDesc *)0x0) {
        pcVar14 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_3d8,L"Expected \'%s\' to be not null.");
        (*pcVar14)(this,&local_3d8,0);
        if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
        }
        bVar18 = true;
      }
      else {
        bVar18 = false;
      }
      if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_498.Data.AllocatorInstance.Data);
      }
      if (!bVar18) {
        ::FString::FString(&local_488,"OffsetParamOverride");
        if (pFVar12 == (FVector3dCameraParameter *)0x0) {
          pcVar14 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_3c8,L"Expected \'%s\' to be not null.");
          (*pcVar14)(this,&local_3c8,0);
          if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
          }
          bVar18 = true;
        }
        else {
          bVar18 = false;
        }
        if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_488.Data.AllocatorInstance.Data);
        }
        if ((!bVar18) &&
           (bVar18 = FAutomationTestBase::TestEqual<FGuid>
                               ((FAutomationTestBase *)this,L"OffsetParamDesc->ID",&local_528->ID,
                                (FGuid *)(local_4b0 + 0x50)), fVar15 = __real_38d1b717, bVar18)) {
          local_2a8._s_0.X = ___xmm_4039000000000000402e000000000000;
          local_2a8._s_0.Y = _UNK_152ba61b8;
          local_288._s_0.X = (pFVar12->Value).field0_0x0._s_0.X;
          local_288._s_0.Y = (pFVar12->Value).field0_0x0._s_0.Y;
          local_180 = __real_4041800000000000;
          local_2a8._s_0.Z = __real_4041800000000000;
          local_288._s_0.Z = (pFVar12->Value).field0_0x0._s_0.Z;
          bVar18 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,L"OffsetParamOverride->Value",
                              (TVector<double> *)&local_288._s_0,(TVector<double> *)&local_2a8._s_0,
                              __real_38d1b717);
          if (bVar18) {
            pFVar22 = ::FName::FName(&local_228,"FocalLengthParam");
            pFVar31 = FInstancedPropertyBag::FindPropertyDescByName
                                ((FInstancedPropertyBag *)&(pUVar8->CameraRigReference)._padding_,
                                 *pFVar22);
            local_528 = pFVar31;
            pFVar22 = ::FName::FName(&local_220,"FocalLengthParam");
            this_00 = FInstancedPropertyBag::GetValueStruct<FFloatCameraParameter>
                                ((FInstancedPropertyBag *)&(pUVar8->CameraRigReference)._padding_,
                                 &local_100,*pFVar22);
            ppFVar34 = TValueOrError<FFloatCameraParameter_*,enum_EPropertyBagResult>::GetValue
                                 (this_00);
            pFVar13 = *ppFVar34;
            ::FString::FString(&local_478,"FocalLengthParamDesc");
            if (pFVar31 == (FPropertyBagPropertyDesc *)0x0) {
              pcVar14 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_3b8,L"Expected \'%s\' to be not null.");
              (*pcVar14)(this,&local_3b8,0);
              if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
              }
              bVar18 = true;
            }
            else {
              bVar18 = false;
            }
            if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_478.Data.AllocatorInstance.Data);
            }
            if (!bVar18) {
              ::FString::FString(&local_468,"FocalLengthParamOverride");
              if (pFVar13 == (FFloatCameraParameter *)0x0) {
                pcVar14 = *(code **)(*(longlong *)this + 0x28);
                ::FString::PrintfImpl(&local_3a8,L"Expected \'%s\' to be not null.");
                (*pcVar14)(this,&local_3a8,0);
                if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
                }
                bVar18 = true;
              }
              else {
                bVar18 = false;
              }
              if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_468.Data.AllocatorInstance.Data);
              }
              if (((!bVar18) &&
                  (bVar18 = FAutomationTestBase::TestEqual<FGuid>
                                      ((FAutomationTestBase *)this,L"FocalLengthParamDesc->ID",
                                       &local_528->ID,(FGuid *)(lVar10 + 0x50)), bVar18)) &&
                 (bVar18 = FAutomationTestBase::TestEqual
                                     ((FAutomationTestBase *)this,L"FocalLengthParamOverride->Value"
                                      ,pFVar13->Value,__real_41c80000,fVar15), pUVar7 = local_4a8,
                 bVar18)) {
                if (((int)local_4a8->_padding_ < 1) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar14 = (code *)swi(3);
                  uVar19 = (*pcVar14)();
                  return (bool)uVar19;
                }
                lVar6 = *(longlong *)pUVar7->_padding_;
                pFVar22 = ::FName::FName(&local_218,"OffsetParam");
                FInstancedPropertyBag::FindPropertyDescByName
                          ((FInstancedPropertyBag *)&(pUVar8->CameraRigReference)._padding_,*pFVar22
                          );
                pFVar22 = ::FName::FName(&local_210,"OffsetParam");
                pTVar32 = FInstancedPropertyBag::GetValueStruct<FVector3dCameraParameter>
                                    ((FInstancedPropertyBag *)
                                     &(pUVar8->CameraRigReference)._padding_,&local_f0,*pFVar22);
                ppFVar33 = TValueOrError<FVector3dCameraParameter_*,enum_EPropertyBagResult>::
                           GetValue(pTVar32);
                bVar18 = FAutomationTestBase::TestEqual<FCameraVariableID>
                                   ((FAutomationTestBase *)this,L"OffsetParamOverride->VariableID",
                                    &(*ppFVar33)->VariableID,(FCameraVariableID *)(lVar6 + 0x74));
                pUVar8 = local_4a0;
                if (bVar18) {
                  pFVar22 = ::FName::FName(&local_2f8,"MiddleOffsetParam");
                  pFVar31 = FInstancedPropertyBag::FindPropertyDescByName
                                      ((FInstancedPropertyBag *)
                                       &(pUVar8->CameraRigReference)._padding_,*pFVar22);
                  pFVar22 = ::FName::FName(&local_2f0,"MiddleOffsetParam");
                  pTVar32 = FInstancedPropertyBag::GetValueStruct<FVector3dCameraParameter>
                                      ((FInstancedPropertyBag *)
                                       &(pUVar8->CameraRigReference)._padding_,&local_e0,*pFVar22);
                  ppFVar33 = TValueOrError<FVector3dCameraParameter_*,enum_EPropertyBagResult>::
                             GetValue(pTVar32);
                  pFVar12 = *ppFVar33;
                  ::FString::FString(&local_458,"OffsetParamDesc");
                  if (pFVar31 == (FPropertyBagPropertyDesc *)0x0) {
                    pcVar14 = *(code **)(*(longlong *)this + 0x28);
                    ::FString::PrintfImpl(&local_398,L"Expected \'%s\' to be not null.");
                    (*pcVar14)(this,&local_398,0);
                    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_398.Data.AllocatorInstance.Data);
                    }
                    bVar18 = true;
                  }
                  else {
                    bVar18 = false;
                  }
                  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_458.Data.AllocatorInstance.Data);
                  }
                  if (!bVar18) {
                    ::FString::FString(&local_448,"OffsetParamOverride");
                    if (pFVar12 == (FVector3dCameraParameter *)0x0) {
                      pcVar14 = *(code **)(*(longlong *)this + 0x28);
                      ::FString::PrintfImpl(&local_388,L"Expected \'%s\' to be not null.");
                      (*pcVar14)(this,&local_388,0);
                      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_388.Data.AllocatorInstance.Data);
                      }
                      bVar18 = true;
                    }
                    else {
                      bVar18 = false;
                    }
                    if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_448.Data.AllocatorInstance.Data);
                    }
                    if ((!bVar18) &&
                       (bVar18 = FAutomationTestBase::TestEqual<FGuid>
                                           ((FAutomationTestBase *)this,L"OffsetParamDesc->ID",
                                            &pFVar31->ID,(FGuid *)(lVar6 + 0x50)), bVar18)) {
                      local_268._s_0.X = ___xmm_40490000000000004034000000000000;
                      local_268._s_0.Y = _UNK_152ba61c8;
                      local_248._s_0.X = (pFVar12->Value).field0_0x0._s_0.X;
                      local_248._s_0.Y = (pFVar12->Value).field0_0x0._s_0.Y;
                      local_268._s_0.Z = __real_4051800000000000;
                      local_248._s_0.Z = (pFVar12->Value).field0_0x0._s_0.Z;
                      bVar18 = FAutomationTestBase::TestEqual
                                         ((FAutomationTestBase *)this,L"OffsetParamOverride->Value",
                                          (TVector<double> *)&local_248._s_0,
                                          (TVector<double> *)&local_268._s_0,fVar15);
                      if (bVar18) {
                        bVar18 = true;
                        goto LAB_14d646d54;
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
  bVar18 = false;
LAB_14d646d54:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar37);
  return bVar18;
}

// GetBeautifiedTestName @ 14d646ea0

FString * __thiscall
FCameraRigAssetBuilderDrivenOverridesTest::GetBeautifiedTestName
          (FCameraRigAssetBuilderDrivenOverridesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.GameplayCameras.CameraRigAssetBuilder.DrivenOverrides");
  return __return_storage_ptr__;
}

// operator() @ 14d6589f0

void __thiscall
`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,UCameraRigCameraNode *param_1,FNamedObjectRegistry *param_2)

{
  longlong *this_00;
  UCameraRigAsset *pUVar1;
  UCameraRigAsset *pUVar2;
  code *pcVar3;
  FName *pFVar4;
  bool bVar5;
  FName local_res8;
  FName local_res10;
  TValueOrError<FVector3dCameraParameter_*,EPropertyBagResult> local_38;
  TValueOrError<FFloatCameraParameter_*,EPropertyBagResult> local_28;
  
  pUVar1 = *(UCameraRigAsset **)this;
  pUVar2 = (param_1->CameraRigReference).CameraRig.field0_0x0.DebugPtr;
  if (pUVar2 == (UCameraRigAsset *)0x0) {
    bVar5 = pUVar1 == (UCameraRigAsset *)0x0;
  }
  else {
    bVar5 = pUVar2 == pUVar1;
  }
  if (!bVar5) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UCameraRigAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (param_1->CameraRigReference).CameraRig.field0_0x0.DebugPtr = pUVar1;
    FBaseCameraObjectReference::RebuildParameters
              ((FBaseCameraObjectReference *)&param_1->CameraRigReference);
  }
  this_00 = &(param_1->CameraRigReference)._padding_;
  pFVar4 = ::FName::FName(&local_res8,"OffsetParam");
  FInstancedPropertyBag::GetValueStruct<FVector3dCameraParameter>
            ((FInstancedPropertyBag *)this_00,&local_38,*pFVar4);
  if (2 < (local_38.Variant._8_8_ & 0xff)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FVector3dCameraParameter*___ptr64,FVector3dCameraParameter*___ptr64,TValueOrError<FVector3dCameraParameter*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FVector3dCameraParameter*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (local_38.Variant._8_8_ & 0xff)) == '\0') {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9042321929624617073>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\CameraRigAssetBuilderTests.cpp"
                       ,0x71,"OffsetParamOverride.HasValue()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (local_38.Variant.TypeIndex != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined8 *)local_38.Variant._padding_ = 0x402e000000000000;
    *(undefined8 *)(local_38.Variant._padding_ + 8) = 0x4039000000000000;
    *(undefined8 *)(local_38.Variant._padding_ + 0x10) = 0x4041800000000000;
  }
  pFVar4 = ::FName::FName(&local_res10,"FocalLengthParam");
  FInstancedPropertyBag::GetValueStruct<FFloatCameraParameter>
            ((FInstancedPropertyBag *)this_00,&local_28,*pFVar4);
  if (2 < (local_28.Variant._8_8_ & 0xff)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FVector3dCameraParameter*___ptr64,FVector3dCameraParameter*___ptr64,TValueOrError<FVector3dCameraParameter*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FVector3dCameraParameter*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (local_28.Variant._8_8_ & 0xff) + 4) == '\0') {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9042321929624617079>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\CameraRigAssetBuilderTests.cpp"
                       ,0x77,"FocalLengthParamOverride.HasValue()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (local_28.Variant.TypeIndex != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)local_28.Variant._padding_ = 0x41c80000;
  }
  return;
}

// operator() @ 14d658d70

void __thiscall
`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_2>::operator()
          (void *this,UCameraRigCameraNode *param_1,FNamedObjectRegistry *param_2)

{
  UCameraRigAsset *pUVar1;
  UCameraRigAsset *pUVar2;
  code *pcVar3;
  FName *pFVar4;
  bool bVar5;
  FName local_res8;
  TValueOrError<FVector3dCameraParameter_*,EPropertyBagResult> local_18;
  
  pUVar1 = *(UCameraRigAsset **)this;
  pUVar2 = (param_1->CameraRigReference).CameraRig.field0_0x0.DebugPtr;
  if (pUVar2 == (UCameraRigAsset *)0x0) {
    bVar5 = pUVar1 == (UCameraRigAsset *)0x0;
  }
  else {
    bVar5 = pUVar2 == pUVar1;
  }
  if (!bVar5) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UCameraRigAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (param_1->CameraRigReference).CameraRig.field0_0x0.DebugPtr = pUVar1;
    FBaseCameraObjectReference::RebuildParameters
              ((FBaseCameraObjectReference *)&param_1->CameraRigReference);
  }
  pFVar4 = ::FName::FName(&local_res8,"MiddleOffsetParam");
  FInstancedPropertyBag::GetValueStruct<FVector3dCameraParameter>
            ((FInstancedPropertyBag *)&(param_1->CameraRigReference)._padding_,&local_18,*pFVar4);
  if (2 < (local_18.Variant._8_8_ & 0xff)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FVector3dCameraParameter*___ptr64,FVector3dCameraParameter*___ptr64,TValueOrError<FVector3dCameraParameter*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FVector3dCameraParameter*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (local_18.Variant._8_8_ & 0xff)) == '\0') {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9042321929624617104>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\CameraRigAssetBuilderTests.cpp"
                       ,0x90,"MiddleOffsetParamOverride.HasValue()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (local_18.Variant.TypeIndex != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined8 *)local_18.Variant._padding_ = 0x4034000000000000;
    *(undefined8 *)(local_18.Variant._padding_ + 8) = 0x4049000000000000;
    *(undefined8 *)(local_18.Variant._padding_ + 0x10) = 0x4051800000000000;
  }
  return;
}

