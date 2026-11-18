// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 13

// AddChild<UOffsetCameraNode,UCameraNode,void> @ 14d64be60

TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
* __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>::
AddChild<UOffsetCameraNode,UCameraNode,void>
          (TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>
           *this,TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
                 *__return_storage_ptr__,pdm_47a78b63 param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
  *pTVar6;
  ForAnyElementType *pFVar7;
  UOffsetCameraNode *local_18 [2];
  
  pUVar5 = (UPackage *)this->CameraNode->_padding_;
  __return_storage_ptr__->_padding_ = (longlong)this;
  __return_storage_ptr__->_padding_ =
       (longlong)
       &
       ___7__TCameraNodeTestBuilder_V__TCameraNodeTestBuilder_VFCameraRigAssetTestBuilder_Test_Cameras_UE__VUArrayCameraNode__X_Test_Cameras_UE__VUOffsetCameraNode__X_Test_Cameras_UE__6B_
  ;
  __return_storage_ptr__->_padding_ = 0;
  if (pUVar5 == (UPackage *)0x0) {
    pUVar5 = GetTransientPackage();
  }
  local_18[0] = NewObject<UOffsetCameraNode>((UObject *)pUVar5);
  __return_storage_ptr__->CameraNode = local_18[0];
  __return_storage_ptr__->_padding_ = (longlong)local_18[0];
  pFVar7 = (ForAnyElementType *)((longlong)&this->CameraNode->_padding_ + (longlong)(int)param_1);
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UOffsetCameraNode *)0x0))
  {
    GC::MarkAsReachable((UObject *)local_18[0]);
  }
  if ((pFVar7->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
                *)(*pcVar2)();
      return pTVar6;
    }
  }
  iVar4 = *(int *)&pFVar7[1].Data;
  piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar7,piVar1);
  }
  *(int *)&pFVar7[1].Data = iVar4 + 1;
  *(UOffsetCameraNode **)(pFVar7->Data + (longlong)iVar4 * 8) = local_18[0];
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UOffsetCameraNode *)0x0))
  {
    GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return __return_storage_ptr__;
}

// Named<void> @ 14d653240

TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
* __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
::Named<void>(TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
              *this,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
  *pTVar3;
  ULensParametersCameraNode *local_res18;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  FString local_28;
  FString *local_18;
  ULensParametersCameraNode **local_10;
  
  (**(code **)(this->_padding_ + 8))();
  if (local_38 == 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<102804706564243626>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\GameplayCamerasTestBuilder.h"
                       ,0xaa,"NamedObjectRegistry");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    if ((local_38 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
                *)(*pcVar1)();
      return pTVar3;
    }
    ::FString::FString(&local_28,param_1);
    local_res18 = this->CameraNode;
    if (((local_res18 == (ULensParametersCameraNode *)0x0) || (local_28.Data.ArrayNum < 2)) &&
       (bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<102804706564243550>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\GameplayCamerasTestBuilder.h"
                           ,0x5e,"InObject && !InName.IsEmpty()"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
                *)(*pcVar1)();
      return pTVar3;
    }
    local_18 = &local_28;
    local_10 = &local_res18;
    TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,UObject_*_const_&>_>
              ((TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
                *)(local_38 + 0x10),
               (TPairInitializer<FString_const_&,UObject_*_const_&> *)&stack0x00000008,
               (bool *)&local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return this;
}

// Named<void> @ 14d653390

TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
* __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
::Named<void>(TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
              *this,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
  *pTVar3;
  UOffsetCameraNode *local_res18;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  FString local_28;
  FString *local_18;
  UOffsetCameraNode **local_10;
  
  (**(code **)(this->_padding_ + 8))();
  if (local_38 == 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<102804706564243626>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\GameplayCamerasTestBuilder.h"
                       ,0xaa,"NamedObjectRegistry");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    if ((local_38 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
                *)(*pcVar1)();
      return pTVar3;
    }
    ::FString::FString(&local_28,param_1);
    local_res18 = this->CameraNode;
    if (((local_res18 == (UOffsetCameraNode *)0x0) || (local_28.Data.ArrayNum < 2)) &&
       (bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<102804706564243550>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\GameplayCamerasTestBuilder.h"
                           ,0x5e,"InObject && !InName.IsEmpty()"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
                *)(*pcVar1)();
      return pTVar3;
    }
    local_18 = &local_28;
    local_10 = &local_res18;
    TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,UObject_*_const_&>_>
              ((TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
                *)(local_38 + 0x10),
               (TPairInitializer<FString_const_&,UObject_*_const_&> *)&stack0x00000008,
               (bool *)&local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return this;
}

// Named<void> @ 14d6534e0

TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
* __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
::Named<void>(TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
              *this,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
  *pTVar3;
  ULensParametersCameraNode *local_res18;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  FString local_28;
  FString *local_18;
  ULensParametersCameraNode **local_10;
  
  (**(code **)(this->_padding_ + 8))();
  if (local_38 == 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<102804706564243626>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\GameplayCamerasTestBuilder.h"
                       ,0xaa,"NamedObjectRegistry");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    if ((local_38 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
                *)(*pcVar1)();
      return pTVar3;
    }
    ::FString::FString(&local_28,param_1);
    local_res18 = this->CameraNode;
    if (((local_res18 == (ULensParametersCameraNode *)0x0) || (local_28.Data.ArrayNum < 2)) &&
       (bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<102804706564243550>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\GameplayCamerasTestBuilder.h"
                           ,0x5e,"InObject && !InName.IsEmpty()"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
                *)(*pcVar1)();
      return pTVar3;
    }
    local_18 = &local_28;
    local_10 = &local_res18;
    TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,UObject_*_const_&>_>
              ((TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
                *)(local_38 + 0x10),
               (TPairInitializer<FString_const_&,UObject_*_const_&> *)&stack0x00000008,
               (bool *)&local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return this;
}

// Named<void> @ 14d653630

TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void> *
__thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void>::
Named<void>(TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void>
            *this,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void>
  *pTVar3;
  UOffsetCameraNode *local_res18;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  FString local_28;
  FString *local_18;
  UOffsetCameraNode **local_10;
  
  (**(code **)(this->_padding_ + 8))();
  if (local_38 == 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<102804706564243626>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\GameplayCamerasTestBuilder.h"
                       ,0xaa,"NamedObjectRegistry");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  else {
    if ((local_38 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void>
                *)(*pcVar1)();
      return pTVar3;
    }
    ::FString::FString(&local_28,param_1);
    local_res18 = this->CameraNode;
    if (((local_res18 == (UOffsetCameraNode *)0x0) || (local_28.Data.ArrayNum < 2)) &&
       (bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<102804706564243550>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\GameplayCamerasTestBuilder.h"
                           ,0x5e,"InObject && !InName.IsEmpty()"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void>
                *)(*pcVar1)();
      return pTVar3;
    }
    local_18 = &local_28;
    local_10 = &local_res18;
    TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,UObject_*_const_&>_>
              ((TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
                *)(local_38 + 0x10),
               (TPairInitializer<FString_const_&,UObject_*_const_&> *)&stack0x00000008,
               (bool *)&local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return this;
}

// GetNamedObjectRegistry @ 14d65fee0

TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> * __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
::GetNamedObjectRegistry
          (TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
           *this,TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this->_padding_ + 8))();
  return __return_storage_ptr__;
}

// GetNamedObjectRegistry @ 14d65ff10

TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> * __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
::GetNamedObjectRegistry
          (TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
           *this,TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this->_padding_ + 8))();
  return __return_storage_ptr__;
}

// GetNamedObjectRegistry @ 14d65ff40

TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> * __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::TScopedCameraRigAssetTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder>,UUpdateTrackerCameraNode,void>
::GetNamedObjectRegistry
          (TCameraNodeTestBuilder<UE::Cameras::Test::TScopedCameraRigAssetTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder>,UUpdateTrackerCameraNode,void>
           *this,TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this->_padding_ + 8))();
  return __return_storage_ptr__;
}

// GetNamedObjectRegistry @ 14d65ff70

TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> * __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>::
GetNamedObjectRegistry
          (TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>
           *this,TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this->_padding_ + 8))();
  return __return_storage_ptr__;
}

// GetNamedObjectRegistry @ 14d65ffa0

TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> * __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UCameraRigCameraNode,void>::
GetNamedObjectRegistry
          (TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UCameraRigCameraNode,void>
           *this,TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this->_padding_ + 8))();
  return __return_storage_ptr__;
}

// GetNamedObjectRegistry @ 14d65ffd0

TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> * __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
::GetNamedObjectRegistry
          (TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
           *this,TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this->_padding_ + 8))();
  return __return_storage_ptr__;
}

// GetNamedObjectRegistry @ 14d660000

TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> * __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void>::
GetNamedObjectRegistry
          (TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void>
           *this,TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this->_padding_ + 8))();
  return __return_storage_ptr__;
}

// Setup @ 14d671db0

TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UCameraRigCameraNode,void> *
__thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UCameraRigCameraNode,void>::
Setup(TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UCameraRigCameraNode,void>
      *this,TFunction<void___cdecl(UCameraRigCameraNode_*,UE::Cameras::Test::FNamedObjectRegistry_*)>
            *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_38;
  UCameraRigCameraNode *local_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *local_20;
  
  (**(code **)(this->_padding_ + 8))(this,&local_28);
  local_38 = local_28;
  local_30 = this->CameraNode;
  Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar3 = *(longlong **)&param_1->field_0x28;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_30,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if (*(longlong *)param_1 != 0) {
    plVar3 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return this;
}

