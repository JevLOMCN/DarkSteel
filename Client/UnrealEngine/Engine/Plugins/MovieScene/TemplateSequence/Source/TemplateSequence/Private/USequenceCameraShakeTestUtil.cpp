// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 12

// StaticClass @ 14ac64bc0

UClass * __cdecl USequenceCameraShakeTestUtil::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"SequenceCameraShakeTestUtil",
               &Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.InnerSingleton,
               StaticRegisterNativesUSequenceCameraShakeTestUtil,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USequenceCameraShakeTestUtil>,
               InternalVTableHelperCtorCaller<USequenceCameraShakeTestUtil>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.InnerSingleton;
}

// USequenceCameraShakeTestUtil @ 14ac70550

USequenceCameraShakeTestUtil * __thiscall
USequenceCameraShakeTestUtil::USequenceCameraShakeTestUtil
          (USequenceCameraShakeTestUtil *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USequenceCameraShakeTestUtil__6B_;
  return this;
}

// USequenceCameraShakeTestUtil @ 14ac70580

USequenceCameraShakeTestUtil * __thiscall
USequenceCameraShakeTestUtil::USequenceCameraShakeTestUtil
          (USequenceCameraShakeTestUtil *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USequenceCameraShakeTestUtil__6B_;
  return this;
}

// ~USequenceCameraShakeTestUtil @ 14ac71660

void __thiscall
USequenceCameraShakeTestUtil::~USequenceCameraShakeTestUtil(USequenceCameraShakeTestUtil *this)

{
  *(undefined ***)this = &___7USequenceCameraShakeTestUtil__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetCameraCachePOV @ 14ac77150

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMinimalViewInfo * __cdecl
USequenceCameraShakeTestUtil::GetCameraCachePOV
          (FMinimalViewInfo *__return_storage_ptr__,APlayerController *param_1)

{
  FMinimalViewInfo *pFVar1;
  
  pFVar1 = (FMinimalViewInfo *)
           (**(code **)(((param_1->PlayerCameraManager).field0_0x0.DebugPtr)->_padding_ + 0x798))();
  FMinimalViewInfo::FMinimalViewInfo(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetLastFrameCameraCachePOV @ 14ac772f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMinimalViewInfo * __cdecl
USequenceCameraShakeTestUtil::GetLastFrameCameraCachePOV
          (FMinimalViewInfo *__return_storage_ptr__,APlayerController *param_1)

{
  FMinimalViewInfo *pFVar1;
  
  pFVar1 = (FMinimalViewInfo *)
           (**(code **)(((param_1->PlayerCameraManager).field0_0x0.DebugPtr)->_padding_ + 0x7a0))();
  FMinimalViewInfo::FMinimalViewInfo(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetPostProcessBlendCache @ 14ac77590

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
USequenceCameraShakeTestUtil::GetPostProcessBlendCache
          (APlayerController *param_1,int param_2,FPostProcessSettings *param_3,float *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *local_res8;
  TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> *local_18 [2];
  
  APlayerCameraManager::GetCachedPostProcessBlends
            ((param_1->PlayerCameraManager).field0_0x0.DebugPtr,local_18,&local_res8);
  if ((((local_18[0] == (TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> *)0x0) ||
       (local_18[0]->ArrayNum <= param_2)) ||
      (local_res8 == (TArray<float,TSizedDefaultAllocator<32>_> *)0x0)) ||
     (local_res8->ArrayNum <= param_2)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3424328436703821801>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Tests\\SequenceCameraShakeTestUtil.cpp"
                       ,0x17,
                       "PPSettings && PPSettings->Num() > PPIndex && PPBlendWeights && PPBlendWeights->Num() > PPIndex"
                      );
    if (!bVar2) {
      return false;
    }
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((local_18[0]->ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FPostProcessSettings::operator=
            (param_3,(FPostProcessSettings *)(local_18[0]->AllocatorInstance).Data);
  if ((local_res8->ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  *param_4 = *(float *)(local_res8->AllocatorInstance).Data;
  return true;
}

// GetPrivateStaticClass @ 14ac77d70

UClass * __cdecl USequenceCameraShakeTestUtil::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"SequenceCameraShakeTestUtil",
               &Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.InnerSingleton,
               StaticRegisterNativesUSequenceCameraShakeTestUtil,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USequenceCameraShakeTestUtil>,
               InternalVTableHelperCtorCaller<USequenceCameraShakeTestUtil>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.InnerSingleton;
}

// StaticRegisterNativesUSequenceCameraShakeTestUtil @ 14ac80500

void __cdecl USequenceCameraShakeTestUtil::StaticRegisterNativesUSequenceCameraShakeTestUtil(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCameraCachePOV @ 14ac829f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
USequenceCameraShakeTestUtil::execGetCameraCachePOV(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMinimalViewInfo *pFVar2;
  undefined1 auStack_918 [32];
  longlong local_8f8 [2];
  FMinimalViewInfo local_8e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_918;
  local_8f8[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_8f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_8f8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = (FMinimalViewInfo *)(**(code **)(**(longlong **)(local_8f8[0] + 0x390) + 0x798))();
  FMinimalViewInfo::FMinimalViewInfo(&local_8e8,pFVar2);
  FMinimalViewInfo::operator=(param_3,&local_8e8);
  if (local_8e8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return;
}

// execGetLastFrameCameraCachePOV @ 14ac82ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
USequenceCameraShakeTestUtil::execGetLastFrameCameraCachePOV
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMinimalViewInfo *pFVar2;
  undefined1 auStack_918 [32];
  longlong local_8f8 [2];
  FMinimalViewInfo local_8e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_918;
  local_8f8[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_8f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_8f8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = (FMinimalViewInfo *)(**(code **)(**(longlong **)(local_8f8[0] + 0x390) + 0x7a0))();
  FMinimalViewInfo::FMinimalViewInfo(&local_8e8,pFVar2);
  FMinimalViewInfo::operator=(param_3,&local_8e8);
  if (local_8e8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return;
}

// execGetPostProcessBlendCache @ 14ac82bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
USequenceCameraShakeTestUtil::execGetPostProcessBlendCache
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FPostProcessSettings *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  FPostProcessSettings *this;
  uchar *puVar7;
  undefined1 auStackY_7f8 [32];
  uchar local_7c8 [4];
  int local_7c4;
  longlong local_7c0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_7b8;
  TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> *local_7b0;
  FPostProcessSettings local_7a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_7f8;
  local_7c0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7c0);
  }
  local_7c4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7c4,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7c4);
  }
  FPostProcessSettings::FPostProcessSettings(&local_7a8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7a8);
  }
  pFVar1 = (FPostProcessSettings *)param_2->MostRecentPropertyAddress;
  local_7c8[0] = '\0';
  local_7c8[1] = '\0';
  local_7c8[2] = '\0';
  local_7c8[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_7a8;
  if (pFVar1 != (FPostProcessSettings *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_7c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_7c8);
  }
  iVar4 = local_7c4;
  puVar7 = local_7c8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  APlayerCameraManager::GetCachedPostProcessBlends
            (*(APlayerCameraManager **)(local_7c0 + 0x390),&local_7b0,&local_7b8);
  if (local_7b0 != (TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> *)0x0) {
    if (((iVar4 < local_7b0->ArrayNum) &&
        (local_7b8 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0)) &&
       (iVar4 < local_7b8->ArrayNum)) {
      if (local_7b0->ArrayNum < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FPostProcessSettings::operator=
                (this,(FPostProcessSettings *)(local_7b0->AllocatorInstance).Data);
      if (local_7b8->ArrayNum < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar6 = 1;
      *(undefined4 *)puVar7 = *(undefined4 *)(local_7b8->AllocatorInstance).Data;
      goto LAB_14ac82e3d;
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3424328436703821801>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Tests\\SequenceCameraShakeTestUtil.cpp"
                     ,0x17,
                     "PPSettings && PPSettings->Num() > PPIndex && PPBlendWeights && PPBlendWeights->Num() > PPIndex"
                    );
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = 0;
LAB_14ac82e3d:
  *(undefined1 *)param_3 = uVar6;
  if (local_7a8.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a8.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return;
}

