// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// StaticClass @ 14d57acf0

UClass * __cdecl USingleCameraDirector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SingleCameraDirector",
               &Z_Registration_Info_UClass_USingleCameraDirector.InnerSingleton,
               StaticRegisterNativesUSingleCameraDirector,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USingleCameraDirector>,
               InternalVTableHelperCtorCaller<USingleCameraDirector>,local_res8,
               UCameraDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleCameraDirector.InnerSingleton;
}

// USingleCameraDirector @ 14d590370

USingleCameraDirector * __thiscall
USingleCameraDirector::USingleCameraDirector(USingleCameraDirector *this,FVTableHelper *param_1)

{
  UCameraDirector::UCameraDirector((UCameraDirector *)this,param_1);
  this->_padding_ = (longlong)&___7USingleCameraDirector__6B_;
  (this->CameraRig).field0_0x0.DebugPtr = (UCameraRigAsset *)0x0;
  return this;
}

// USingleCameraDirector @ 14d5903a0

USingleCameraDirector * __thiscall
USingleCameraDirector::USingleCameraDirector
          (USingleCameraDirector *this,FObjectInitializer *param_1)

{
  UCameraDirector::UCameraDirector((UCameraDirector *)this,param_1);
  this->_padding_ = (longlong)&___7USingleCameraDirector__6B_;
  (this->CameraRig).field0_0x0.DebugPtr = (UCameraRigAsset *)0x0;
  return this;
}

// ~USingleCameraDirector @ 14d591fa0

void __thiscall USingleCameraDirector::~USingleCameraDirector(USingleCameraDirector *this)

{
  this->_padding_ = (longlong)&___7USingleCameraDirector__6B_;
  UCameraDirector::~UCameraDirector((UCameraDirector *)this);
  return;
}

// GetPrivateStaticClass @ 14d5aa780

UClass * __cdecl USingleCameraDirector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SingleCameraDirector",
               &Z_Registration_Info_UClass_USingleCameraDirector.InnerSingleton,
               StaticRegisterNativesUSingleCameraDirector,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USingleCameraDirector>,
               InternalVTableHelperCtorCaller<USingleCameraDirector>,local_res8,
               UCameraDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleCameraDirector.InnerSingleton;
}

// OnBuildCameraDirector @ 14d5b81a0

void __thiscall
USingleCameraDirector::OnBuildCameraDirector(USingleCameraDirector *this,FCameraBuildLog *param_1)

{
  FText *pFVar1;
  FText local_18;
  
  if ((this->CameraRig).field0_0x0.DebugPtr == (UCameraRigAsset *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"SingleCameraDirector",L"MissingCameraRig",
                        L"No camera rig is set.");
    UE::Cameras::FCameraBuildLog::AddMessage(param_1,Error,(UObject *)this,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// OnBuildEvaluator @ 14d5b8b40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraDirectorEvaluator * __thiscall
USingleCameraDirector::OnBuildEvaluator
          (USingleCameraDirector *this,FCameraDirectorEvaluatorBuilder *param_1)

{
  FCameraDirectorEvaluator *pFVar1;
  
  pFVar1 = (FCameraDirectorEvaluator *)
           UE::Cameras::FCameraDirectorEvaluatorBuilder::
           BuildEvaluator<UE::Cameras::FSingleCameraDirectorEvaluator>(param_1);
  return pFVar1;
}

// OnGatherRigUsageInfo @ 14d5c19f0

void __thiscall
USingleCameraDirector::OnGatherRigUsageInfo
          (USingleCameraDirector *this,FCameraDirectorRigUsageInfo *param_1)

{
  int *piVar1;
  TObjectPtr<UCameraRigAsset>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UCameraRigAsset>_u_0 local_18 [2];
  
  local_18[0] = (TObjectPtr<UCameraRigAsset>_u_0)(this->CameraRig).field0_0x0.DebugPtr;
  if (local_18[0].DebugPtr != (UCameraRigAsset *)0x0) {
    pTVar2 = (TObjectPtr<UCameraRigAsset>_u_0 *)(param_1->CameraRigs).AllocatorInstance.Data;
    if ((pTVar2 <= local_18) && (local_18 < pTVar2 + (param_1->CameraRigs).ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (param_1->CameraRigs).ArrayNum;
    piVar1 = &(param_1->CameraRigs).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->CameraRigs).ArrayNum = iVar5 + 1;
    ((TObjectPtr<UCameraRigAsset>_u_0 *)
    ((param_1->CameraRigs).AllocatorInstance.Data + (longlong)iVar5 * 8))->DebugPtr =
         (UCameraRigAsset *)local_18[0];
  }
  return;
}

// StaticRegisterNativesUSingleCameraDirector @ 14d5d0f10

void __cdecl USingleCameraDirector::StaticRegisterNativesUSingleCameraDirector(void)

{
  return;
}

