// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// FCameraShakeAssetBuilder @ 14d543670

FCameraShakeAssetBuilder * __thiscall
UE::Cameras::FCameraShakeAssetBuilder::FCameraShakeAssetBuilder
          (FCameraShakeAssetBuilder *this,FCameraBuildLog *param_1)

{
  this->BuildLog = param_1;
  this->CameraShake = (UCameraShakeAsset *)0x0;
  FCameraNodeHierarchy::FCameraNodeHierarchy(&this->CameraNodeHierarchy);
  return this;
}

// BuildCameraShake @ 14d54bc10

/* WARNING: Removing unreachable block (ram,0x00014d54bcfe) */

void __thiscall
UE::Cameras::FCameraShakeAssetBuilder::BuildCameraShake
          (FCameraShakeAssetBuilder *this,UCameraShakeAsset *param_1)

{
  FCameraBuildLog *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  FString *pFVar6;
  ECameraBuildStatus EVar7;
  uint uVar8;
  longlong lVar9;
  FString local_58;
  FString local_48;
  FDestructionSentinel local_38;
  
  if (param_1 == (UCameraShakeAsset *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2502742963105300503>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraShakeAssetBuilder.cpp"
                       ,0x17,"InCameraShake");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = this->BuildLog;
    this->CameraShake = param_1;
    pFVar6 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0)
    ;
    ::FString::ConcatFC(&local_58,pFVar6,L": ");
    FCameraBuildLog::SetLoggingPrefix(this_00,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    BuildCameraShakeImpl(this);
    ::FString::Empty(&this->BuildLog->LoggingPrefix);
    if (this->BuildLog->bHasErrors == false) {
      EVar7 = Clean;
      if (this->BuildLog->bHasWarnings != false) {
        EVar7 = CleanWithWarnings;
      }
    }
    else {
      EVar7 = WithErrors;
    }
    this->CameraShake->BuildStatus = EVar7;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FGameplayCamerasDelegates::OnCameraShakeAssetBuiltDelegate,
               (FWriteAccessScope *)&local_38);
    bVar2 = false;
    FGameplayCamerasDelegates::OnCameraShakeAssetBuiltDelegate._28_4_ =
         FGameplayCamerasDelegates::OnCameraShakeAssetBuiltDelegate._28_4_ + 1;
    uVar8 = FGameplayCamerasDelegates::OnCameraShakeAssetBuiltDelegate._16_4_ - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      bVar2 = false;
      do {
        uVar5 = 0;
        if ((int)uVar8 < (int)FGameplayCamerasDelegates::OnCameraShakeAssetBuiltDelegate._16_4_) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((*(int *)(lVar9 + 8 + FGameplayCamerasDelegates::OnCameraShakeAssetBuiltDelegate._8_8_)
              == 0) ||
            (*(longlong **)
              (lVar9 + FGameplayCamerasDelegates::OnCameraShakeAssetBuiltDelegate._8_8_) ==
             (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)
                                   (lVar9 + FGameplayCamerasDelegates::
                                            OnCameraShakeAssetBuiltDelegate._8_8_) + 0x68))(),
           cVar4 == '\0')) {
          bVar2 = true;
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    FGameplayCamerasDelegates::OnCameraShakeAssetBuiltDelegate._28_4_ =
         FGameplayCamerasDelegates::OnCameraShakeAssetBuiltDelegate._28_4_ + -1;
    if (bVar2) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FGameplayCamerasDelegates::OnCameraShakeAssetBuiltDelegate,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    this->CameraShake = (UCameraShakeAsset *)0x0;
  }
  return;
}

// BuildCameraShakeImpl @ 14d54be80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Cameras::FCameraShakeAssetBuilder::BuildCameraShakeImpl(FCameraShakeAssetBuilder *this)

{
  ulonglong uVar1;
  UCameraNode **ppUVar2;
  undefined1 auStackY_138 [32];
  TArrayView<UCameraNode_*_const,int> local_108;
  FCameraNodeHierarchyBuilder local_f8;
  undefined1 local_d8 [32];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  TBitArray<FDefaultBitArrayAllocator> local_a8;
  undefined4 local_88;
  undefined4 local_84;
  void *local_78;
  undefined4 local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_f8.BuildLog = this->BuildLog;
  local_f8.CameraObject = (UBaseCameraObject *)this->CameraShake;
  FCameraNodeHierarchy::FCameraNodeHierarchy(&local_f8.CameraNodeHierarchy);
  FCameraNodeHierarchy::Build(&local_f8.CameraNodeHierarchy,local_f8.CameraObject);
  FCameraNodeHierarchy::GetFlattenedHierarchy(&local_f8.CameraNodeHierarchy,&local_108);
  for (ppUVar2 = local_108.DataPtr; ppUVar2 != local_108.DataPtr + local_108.ArrayNum;
      ppUVar2 = ppUVar2 + 1) {
    (**(code **)((*ppUVar2)->_padding_ + 0x2b8))(*ppUVar2,local_f8.BuildLog);
  }
  local_d8._0_8_ = this->BuildLog;
  local_d8._8_8_ = (UBaseCameraObject *)0x0;
  local_d8._16_8_ = (FScriptContainerElement *)0x0;
  local_d8._24_4_ = 0;
  local_d8._28_4_ = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a8.NumBits = 0;
  local_84 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.NumBits = 0;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_a8.MaxBits = 0x80;
  local_88 = 0xffffffff;
  local_58.MaxBits = 0x80;
  local_38 = 0xffffffff;
  FCameraObjectInterfaceBuilder::BuildInterface
            ((FCameraObjectInterfaceBuilder *)local_d8,(UBaseCameraObject *)this->CameraShake,
             &local_f8.CameraNodeHierarchy,true);
  FCameraNodeHierarchyBuilder::Build(&local_f8);
  local_108.DataPtr = (UCameraNode **)0x0;
  FCameraObjectInterfaceParameterBuilder::BuildParameters
            ((FCameraObjectInterfaceParameterBuilder *)&local_108,
             (UBaseCameraObject *)this->CameraShake);
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  uVar1 = local_60 >> 0x20;
  local_60 = local_60 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_58.NumBits = 0;
  if (0x80 < (uint)local_58.MaxBits) {
    local_58.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_58,0);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  local_70 = 0;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  uVar1 = local_b0 >> 0x20;
  local_b0 = local_b0 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&local_b8,0,(int *)((longlong)&local_b0 + 4));
  }
  local_88 = 0xffffffff;
  local_84 = 0;
  local_a8.NumBits = 0;
  if (0x80 < (uint)local_a8.MaxBits) {
    local_a8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_a8,0);
  }
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  if ((FScriptContainerElement *)local_d8._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._16_8_);
  }
  if (local_f8.CameraNodeHierarchy.FlattenedHierarchy.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.CameraNodeHierarchy.FlattenedHierarchy.AllocatorInstance.Data);
  }
  return;
}

// UpdateBuildStatus @ 14d56a360

void __thiscall
UE::Cameras::FCameraShakeAssetBuilder::UpdateBuildStatus(FCameraShakeAssetBuilder *this)

{
  if (this->BuildLog->bHasErrors != false) {
    this->CameraShake->BuildStatus = WithErrors;
    return;
  }
  this->CameraShake->BuildStatus = this->BuildLog->bHasWarnings != false;
  return;
}

