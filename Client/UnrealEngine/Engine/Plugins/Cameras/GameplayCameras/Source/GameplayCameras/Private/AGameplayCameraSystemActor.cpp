// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d5e4150

UClass * __cdecl AGameplayCameraSystemActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameplayCameraSystemActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraSystemActor",
               &Z_Registration_Info_UClass_AGameplayCameraSystemActor.InnerSingleton,
               StaticRegisterNativesAGameplayCameraSystemActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AGameplayCameraSystemActor>,
               InternalVTableHelperCtorCaller<AGameplayCameraSystemActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameplayCameraSystemActor.InnerSingleton;
}

// AGameplayCameraSystemActor @ 14d5fb380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGameplayCameraSystemActor * __thiscall
AGameplayCameraSystemActor::AGameplayCameraSystemActor
          (AGameplayCameraSystemActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGameplayCameraSystemActor__6B_;
  (this->CameraSystemComponent).field0_0x0.DebugPtr = (UGameplayCameraSystemComponent *)0x0;
  return this;
}

// AGameplayCameraSystemActor @ 14d5fb3c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGameplayCameraSystemActor * __thiscall
AGameplayCameraSystemActor::AGameplayCameraSystemActor
          (AGameplayCameraSystemActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UGameplayCameraSystemComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGameplayCameraSystemActor__6B_;
  (this->CameraSystemComponent).field0_0x0.DebugPtr = (UGameplayCameraSystemComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"CameraSystemComponent");
  FVar1 = *pFVar2;
  pUVar3 = UGameplayCameraSystemComponent::StaticClass();
  pUVar4 = (UGameplayCameraSystemComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UGameplayCameraSystemComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->CameraSystemComponent).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UGameplayCameraSystemComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->CameraSystemComponent).field0_0x0;
  return this;
}

// ~AGameplayCameraSystemActor @ 14d600170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AGameplayCameraSystemActor::~AGameplayCameraSystemActor(AGameplayCameraSystemActor *this)

{
  this->_padding_ = (longlong)&___7AGameplayCameraSystemActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// CalcCamera @ 14d60ddc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCameraSystemActor::CalcCamera
          (AGameplayCameraSystemActor *this,float param_1,FMinimalViewInfo *param_2)

{
  longlong *this_00;
  UGameplayCameraSystemComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FCameraSystemEvaluator *pFVar5;
  FCameraSystemEvaluationParams local_res8 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  pUVar1 = (this->CameraSystemComponent).field0_0x0.DebugPtr;
  this_00 = &pUVar1->_padding_;
  if ((FCameraSystemEvaluator *)*this_00 != (FCameraSystemEvaluator *)0x0) {
    local_res8[0].DeltaTime = param_1;
    UE::Cameras::FCameraSystemEvaluator::Update((FCameraSystemEvaluator *)*this_00,local_res8);
    if (*this_00 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Cameras::FCameraSystemEvaluator::GetEvaluatedCameraView
              ((FCameraSystemEvaluator *)*this_00,param_2);
    if (pUVar1->bSetPlayerControllerRotation != false) {
      pUVar4 = FWeakObjectPtr::Get(&(pUVar1->WeakPlayerController).WeakPtr);
      if (pUVar4 != (UObject *)0x0) {
        pcVar2 = *(code **)(*(longlong *)pUVar4 + 0x7b0);
        pFVar5 = TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1>::operator->
                           ((TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> *)this_00);
        local_28 = *(undefined4 *)&(pFVar5->Result).CameraPose.Rotation.Pitch;
        uStack_24 = *(undefined4 *)((longlong)&(pFVar5->Result).CameraPose.Rotation.Pitch + 4);
        uStack_20 = *(undefined4 *)&(pFVar5->Result).CameraPose.Rotation.Yaw;
        uStack_1c = *(undefined4 *)((longlong)&(pFVar5->Result).CameraPose.Rotation.Yaw + 4);
        local_18 = (pFVar5->Result).CameraPose.Rotation.Roll;
        (*pcVar2)(pUVar4,&local_28);
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 14d61b760

UClass * __cdecl AGameplayCameraSystemActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameplayCameraSystemActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCameraSystemActor",
               &Z_Registration_Info_UClass_AGameplayCameraSystemActor.InnerSingleton,
               StaticRegisterNativesAGameplayCameraSystemActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AGameplayCameraSystemActor>,
               InternalVTableHelperCtorCaller<AGameplayCameraSystemActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameplayCameraSystemActor.InnerSingleton;
}

// StaticRegisterNativesAGameplayCameraSystemActor @ 14d639050

void __cdecl AGameplayCameraSystemActor::StaticRegisterNativesAGameplayCameraSystemActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_AGameplayCameraSystemActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCameraSystemComponent @ 14d6402d0

void __cdecl
AGameplayCameraSystemActor::execGetCameraSystemComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x11].field_0x18;
  return;
}

