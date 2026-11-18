// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 13

// StaticClass @ 14d56f050

UClass * __cdecl UActivateCameraRigFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActivateCameraRigFunctions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ActivateCameraRigFunctions",
               &Z_Registration_Info_UClass_UActivateCameraRigFunctions.InnerSingleton,
               StaticRegisterNativesUActivateCameraRigFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActivateCameraRigFunctions>,
               InternalVTableHelperCtorCaller<UActivateCameraRigFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActivateCameraRigFunctions.InnerSingleton;
}

// UActivateCameraRigFunctions @ 14d58ec60

UActivateCameraRigFunctions * __thiscall
UActivateCameraRigFunctions::UActivateCameraRigFunctions
          (UActivateCameraRigFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UActivateCameraRigFunctions__6B_;
  return this;
}

// UActivateCameraRigFunctions @ 14d58ec90

UActivateCameraRigFunctions * __thiscall
UActivateCameraRigFunctions::UActivateCameraRigFunctions
          (UActivateCameraRigFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UActivateCameraRigFunctions__6B_;
  return this;
}

// ~UActivateCameraRigFunctions @ 14d591860

void __thiscall
UActivateCameraRigFunctions::~UActivateCameraRigFunctions(UActivateCameraRigFunctions *this)

{
  *(undefined ***)this = &___7UActivateCameraRigFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ActivateCameraRigImpl @ 14d596850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UActivateCameraRigFunctions::ActivateCameraRigImpl
          (UObject *param_1,APlayerController *param_2,UCameraRigAsset *param_3,
          ECameraRigLayer param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  IGameplayCameraSystemHost *this;
  AActor *this_00;
  UClass *pUVar4;
  UControllerGameplayCameraEvaluationComponent *this_01;
  TScriptInterface<IGameplayCameraSystemHost> *pTVar5;
  longlong lVar6;
  UEnum *this_02;
  bool local_res10 [8];
  FString local_98;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  TScriptInterface<IGameplayCameraSystemHost> local_38;
  
  if (param_2 == (APlayerController *)0x0) {
    FFrame::KismetExecutionMessage
              (L"No player controller was given to activate a camera rig!",Error,(FName)0x0);
    return;
  }
  if (param_3 == (UCameraRigAsset *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera rig was given to activate!",Error,(FName)0x0);
    return;
  }
  this = IGameplayCameraSystemHost::FindActiveHost(param_2);
  if (this == (IGameplayCameraSystemHost *)0x0) goto LAB_14d5969ab;
  this_00 = (AActor *)(**(code **)(this->_padding_ + 0x10))(this);
  if (this_00 == (AActor *)0x0) {
LAB_14d59691a:
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    this_00 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar4);
    if ((this_00 == (AActor *)0x0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7759195248739221444>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\ActivateCameraRigFunctions.cpp"
                           ,0x3c,"HostOwningActor"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_14d59691a;
  }
  local_res10[0] = false;
  this_01 = UControllerGameplayCameraEvaluationComponent::FindOrAddComponent(this_00,local_res10);
  if (local_res10[0] != false) {
    pTVar5 = IGameplayCameraSystemHost::GetAsScriptInterface(this,&local_38);
    UControllerGameplayCameraEvaluationComponent::Initialize(this_01,pTVar5,param_2);
  }
  if (this_01 != (UControllerGameplayCameraEvaluationComponent *)0x0) {
    UControllerGameplayCameraEvaluationComponent::ActivateCameraRig(this_01,param_3,param_4);
    return;
  }
LAB_14d5969ab:
  if (1 < (byte)LogCameraSystem._0_1_) {
    lVar6 = (**(code **)(param_2->_padding_ + 0x7e0))(param_2);
    if (lVar6 == 0) {
      ::FString::FString(&local_98,L"None");
    }
    else {
      local_88 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_88,&local_98);
    }
    local_80 = (FName)param_2->_padding_;
    ::FName::ToString(&local_80,&local_48);
    this_02 = StaticEnum<enum_ECameraRigLayer>();
    if ((this_02 == (UEnum *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UEnum::GetNameByValue(this_02,(long64)&local_78);
    ::FName::ToString(&local_78,&local_58);
    local_70 = (FName)param_3->_padding_;
    ::FName::ToString(&local_70,&local_68);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ActivatePersistentBaseCameraRig @ 14d596d70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UActivateCameraRigFunctions::ActivatePersistentBaseCameraRig
          (UObject *param_1,APlayerController *param_2,UCameraRigAsset *param_3)

{
  ActivateCameraRigImpl(param_1,param_2,param_3,Base);
  return;
}

// ActivatePersistentGlobalCameraRig @ 14d596fb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UActivateCameraRigFunctions::ActivatePersistentGlobalCameraRig
          (UObject *param_1,APlayerController *param_2,UCameraRigAsset *param_3)

{
  ActivateCameraRigImpl(param_1,param_2,param_3,Global);
  return;
}

// ActivatePersistentVisualCameraRig @ 14d5971f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UActivateCameraRigFunctions::ActivatePersistentVisualCameraRig
          (UObject *param_1,APlayerController *param_2,UCameraRigAsset *param_3)

{
  ActivateCameraRigImpl(param_1,param_2,param_3,Visual);
  return;
}

// GetPrivateStaticClass @ 14d5a8ba0

UClass * __cdecl UActivateCameraRigFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActivateCameraRigFunctions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ActivateCameraRigFunctions",
               &Z_Registration_Info_UClass_UActivateCameraRigFunctions.InnerSingleton,
               StaticRegisterNativesUActivateCameraRigFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActivateCameraRigFunctions>,
               InternalVTableHelperCtorCaller<UActivateCameraRigFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActivateCameraRigFunctions.InnerSingleton;
}

// StaticRegisterNativesUActivateCameraRigFunctions @ 14d5d0b30

void __cdecl UActivateCameraRigFunctions::StaticRegisterNativesUActivateCameraRigFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UActivateCameraRigFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execActivatePersistentBaseCameraRig @ 14d5d7770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UActivateCameraRigFunctions::execActivatePersistentBaseCameraRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  UCameraRigAsset *pUVar5;
  APlayerController *pAVar6;
  bool bVar7;
  IGameplayCameraSystemHost *this;
  AActor *this_00;
  UClass *pUVar8;
  UControllerGameplayCameraEvaluationComponent *this_01;
  TScriptInterface<IGameplayCameraSystemHost> *pTVar9;
  longlong lVar10;
  UEnum *this_02;
  bool local_res10 [16];
  UCameraRigAsset *local_res20;
  APlayerController *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  FString local_98;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  TScriptInterface<IGameplayCameraSystemHost> local_38;
  
  local_b0 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_b8 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res20 = (UCameraRigAsset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pAVar6 = local_b8;
  pUVar5 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_b8 == (APlayerController *)0x0) {
    local_a8 = 0;
    FFrame::KismetExecutionMessage
              (L"No player controller was given to activate a camera rig!",Error,(FName)0x0);
    return;
  }
  if (local_res20 == (UCameraRigAsset *)0x0) {
    local_a0 = 0;
    FFrame::KismetExecutionMessage(L"No camera rig was given to activate!",Error,(FName)0x0);
    return;
  }
  this = IGameplayCameraSystemHost::FindActiveHost(local_b8);
  if (this == (IGameplayCameraSystemHost *)0x0) goto LAB_14d5d7966;
  this_00 = (AActor *)(**(code **)(this->_padding_ + 0x10))(this);
  if (this_00 == (AActor *)0x0) {
LAB_14d5d78d6:
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    this_00 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar8);
    if ((this_00 == (AActor *)0x0) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7759195248739221444>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\ActivateCameraRigFunctions.cpp"
                           ,0x3c,"HostOwningActor"), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar8->_padding_)) goto LAB_14d5d78d6;
  }
  local_res10[0] = false;
  this_01 = UControllerGameplayCameraEvaluationComponent::FindOrAddComponent(this_00,local_res10);
  if (local_res10[0] != false) {
    pTVar9 = IGameplayCameraSystemHost::GetAsScriptInterface(this,&local_38);
    UControllerGameplayCameraEvaluationComponent::Initialize(this_01,pTVar9,pAVar6);
  }
  if (this_01 != (UControllerGameplayCameraEvaluationComponent *)0x0) {
    UControllerGameplayCameraEvaluationComponent::ActivateCameraRig(this_01,pUVar5,Base);
    return;
  }
LAB_14d5d7966:
  if (1 < (byte)LogCameraSystem._0_1_) {
    lVar10 = (**(code **)(pAVar6->_padding_ + 0x7e0))(pAVar6);
    if (lVar10 == 0) {
      ::FString::FString(&local_98,L"None");
    }
    else {
      local_88 = *(FName *)(lVar10 + 0x18);
      ::FName::ToString(&local_88,&local_98);
    }
    local_80 = (FName)pAVar6->_padding_;
    ::FName::ToString(&local_80,&local_48);
    this_02 = StaticEnum<enum_ECameraRigLayer>();
    if ((this_02 == (UEnum *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UEnum::GetNameByValue(this_02,(long64)&local_78);
    ::FName::ToString(&local_78,&local_58);
    local_70 = (FName)pUVar5->_padding_;
    ::FName::ToString(&local_70,&local_68);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// execActivatePersistentGlobalCameraRig @ 14d5d7b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UActivateCameraRigFunctions::execActivatePersistentGlobalCameraRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  UCameraRigAsset *pUVar5;
  APlayerController *pAVar6;
  bool bVar7;
  IGameplayCameraSystemHost *this;
  AActor *this_00;
  UClass *pUVar8;
  UControllerGameplayCameraEvaluationComponent *this_01;
  TScriptInterface<IGameplayCameraSystemHost> *pTVar9;
  longlong lVar10;
  UEnum *this_02;
  bool local_res10 [16];
  UCameraRigAsset *local_res20;
  APlayerController *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  FString local_98;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  TScriptInterface<IGameplayCameraSystemHost> local_38;
  
  local_b0 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_b8 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res20 = (UCameraRigAsset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pAVar6 = local_b8;
  pUVar5 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_b8 == (APlayerController *)0x0) {
    local_a8 = 0;
    FFrame::KismetExecutionMessage
              (L"No player controller was given to activate a camera rig!",Error,(FName)0x0);
    return;
  }
  if (local_res20 == (UCameraRigAsset *)0x0) {
    local_a0 = 0;
    FFrame::KismetExecutionMessage(L"No camera rig was given to activate!",Error,(FName)0x0);
    return;
  }
  this = IGameplayCameraSystemHost::FindActiveHost(local_b8);
  if (this == (IGameplayCameraSystemHost *)0x0) goto LAB_14d5d7d56;
  this_00 = (AActor *)(**(code **)(this->_padding_ + 0x10))(this);
  if (this_00 == (AActor *)0x0) {
LAB_14d5d7cc6:
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    this_00 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar8);
    if ((this_00 == (AActor *)0x0) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7759195248739221444>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\ActivateCameraRigFunctions.cpp"
                           ,0x3c,"HostOwningActor"), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar8->_padding_)) goto LAB_14d5d7cc6;
  }
  local_res10[0] = false;
  this_01 = UControllerGameplayCameraEvaluationComponent::FindOrAddComponent(this_00,local_res10);
  if (local_res10[0] != false) {
    pTVar9 = IGameplayCameraSystemHost::GetAsScriptInterface(this,&local_38);
    UControllerGameplayCameraEvaluationComponent::Initialize(this_01,pTVar9,pAVar6);
  }
  if (this_01 != (UControllerGameplayCameraEvaluationComponent *)0x0) {
    UControllerGameplayCameraEvaluationComponent::ActivateCameraRig(this_01,pUVar5,Global);
    return;
  }
LAB_14d5d7d56:
  if (1 < (byte)LogCameraSystem._0_1_) {
    lVar10 = (**(code **)(pAVar6->_padding_ + 0x7e0))(pAVar6);
    if (lVar10 == 0) {
      ::FString::FString(&local_98,L"None");
    }
    else {
      local_88 = *(FName *)(lVar10 + 0x18);
      ::FName::ToString(&local_88,&local_98);
    }
    local_80 = (FName)pAVar6->_padding_;
    ::FName::ToString(&local_80,&local_48);
    this_02 = StaticEnum<enum_ECameraRigLayer>();
    if ((this_02 == (UEnum *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UEnum::GetNameByValue(this_02,(long64)&local_78);
    ::FName::ToString(&local_78,&local_58);
    local_70 = (FName)pUVar5->_padding_;
    ::FName::ToString(&local_70,&local_68);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// execActivatePersistentVisualCameraRig @ 14d5d7f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UActivateCameraRigFunctions::execActivatePersistentVisualCameraRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  UCameraRigAsset *pUVar5;
  APlayerController *pAVar6;
  bool bVar7;
  IGameplayCameraSystemHost *this;
  AActor *this_00;
  UClass *pUVar8;
  UControllerGameplayCameraEvaluationComponent *this_01;
  TScriptInterface<IGameplayCameraSystemHost> *pTVar9;
  longlong lVar10;
  UEnum *this_02;
  bool local_res10 [16];
  UCameraRigAsset *local_res20;
  APlayerController *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  FString local_98;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  TScriptInterface<IGameplayCameraSystemHost> local_38;
  
  local_b0 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_b8 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res20 = (UCameraRigAsset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pAVar6 = local_b8;
  pUVar5 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_b8 == (APlayerController *)0x0) {
    local_a8 = 0;
    FFrame::KismetExecutionMessage
              (L"No player controller was given to activate a camera rig!",Error,(FName)0x0);
    return;
  }
  if (local_res20 == (UCameraRigAsset *)0x0) {
    local_a0 = 0;
    FFrame::KismetExecutionMessage(L"No camera rig was given to activate!",Error,(FName)0x0);
    return;
  }
  this = IGameplayCameraSystemHost::FindActiveHost(local_b8);
  if (this == (IGameplayCameraSystemHost *)0x0) goto LAB_14d5d8146;
  this_00 = (AActor *)(**(code **)(this->_padding_ + 0x10))(this);
  if (this_00 == (AActor *)0x0) {
LAB_14d5d80b6:
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    this_00 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar8);
    if ((this_00 == (AActor *)0x0) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7759195248739221444>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\ActivateCameraRigFunctions.cpp"
                           ,0x3c,"HostOwningActor"), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar8->_padding_)) goto LAB_14d5d80b6;
  }
  local_res10[0] = false;
  this_01 = UControllerGameplayCameraEvaluationComponent::FindOrAddComponent(this_00,local_res10);
  if (local_res10[0] != false) {
    pTVar9 = IGameplayCameraSystemHost::GetAsScriptInterface(this,&local_38);
    UControllerGameplayCameraEvaluationComponent::Initialize(this_01,pTVar9,pAVar6);
  }
  if (this_01 != (UControllerGameplayCameraEvaluationComponent *)0x0) {
    UControllerGameplayCameraEvaluationComponent::ActivateCameraRig(this_01,pUVar5,Visual);
    return;
  }
LAB_14d5d8146:
  if (1 < (byte)LogCameraSystem._0_1_) {
    lVar10 = (**(code **)(pAVar6->_padding_ + 0x7e0))(pAVar6);
    if (lVar10 == 0) {
      ::FString::FString(&local_98,L"None");
    }
    else {
      local_88 = *(FName *)(lVar10 + 0x18);
      ::FName::ToString(&local_88,&local_98);
    }
    local_80 = (FName)pAVar6->_padding_;
    ::FName::ToString(&local_80,&local_48);
    this_02 = StaticEnum<enum_ECameraRigLayer>();
    if ((this_02 == (UEnum *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UEnum::GetNameByValue(this_02,(long64)&local_78);
    ::FName::ToString(&local_78,&local_58);
    local_70 = (FName)pUVar5->_padding_;
    ::FName::ToString(&local_70,&local_68);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return;
}

