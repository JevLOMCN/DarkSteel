// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// StaticClass @ 14d56b2c0

UClass * __cdecl UBlueprintCameraDirector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraDirector",
               &Z_Registration_Info_UClass_UBlueprintCameraDirector.InnerSingleton,
               StaticRegisterNativesUBlueprintCameraDirector,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintCameraDirector>,
               InternalVTableHelperCtorCaller<UBlueprintCameraDirector>,local_res8,
               UCameraDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraDirector.InnerSingleton;
}

// UBlueprintCameraDirector @ 14d58ed20

UBlueprintCameraDirector * __thiscall
UBlueprintCameraDirector::UBlueprintCameraDirector
          (UBlueprintCameraDirector *this,FVTableHelper *param_1)

{
  UCameraDirector::UCameraDirector((UCameraDirector *)this,param_1);
  this->_padding_ = (longlong)&___7UBlueprintCameraDirector__6B_;
  (this->CameraDirectorEvaluatorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UBlueprintCameraDirector @ 14d58ed50

UBlueprintCameraDirector * __thiscall
UBlueprintCameraDirector::UBlueprintCameraDirector
          (UBlueprintCameraDirector *this,FObjectInitializer *param_1)

{
  UCameraDirector::UCameraDirector((UCameraDirector *)this,param_1);
  this->_padding_ = (longlong)&___7UBlueprintCameraDirector__6B_;
  (this->CameraDirectorEvaluatorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~UBlueprintCameraDirector @ 14d5918a0

void __thiscall UBlueprintCameraDirector::~UBlueprintCameraDirector(UBlueprintCameraDirector *this)

{
  this->_padding_ = (longlong)&___7UBlueprintCameraDirector__6B_;
  UCameraDirector::~UCameraDirector((UCameraDirector *)this);
  return;
}

// GetPrivateStaticClass @ 14d5a8d20

UClass * __cdecl UBlueprintCameraDirector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraDirector",
               &Z_Registration_Info_UClass_UBlueprintCameraDirector.InnerSingleton,
               StaticRegisterNativesUBlueprintCameraDirector,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintCameraDirector>,
               InternalVTableHelperCtorCaller<UBlueprintCameraDirector>,local_res8,
               UCameraDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraDirector.InnerSingleton;
}

// OnBuildCameraDirector @ 14d5b80f0

void __thiscall
UBlueprintCameraDirector::OnBuildCameraDirector
          (UBlueprintCameraDirector *this,FCameraBuildLog *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  FText *pFVar5;
  FText local_18;
  
  pUVar2 = (this->CameraDirectorEvaluatorClass).Class.field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar4 = UBlueprintCameraDirectorEvaluator::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && ((this->CameraDirectorEvaluatorClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)
       ) {
      return;
    }
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"BlueprintCameraDirector",L"MissingBlueprintClass",
                      L"No evaluator Blueprint class is set.");
  UE::Cameras::FCameraBuildLog::AddMessage(param_1,Error,pFVar5);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// OnBuildEvaluator @ 14d5b8970

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraDirectorEvaluator * __thiscall
UBlueprintCameraDirector::OnBuildEvaluator
          (UBlueprintCameraDirector *this,FCameraDirectorEvaluatorBuilder *param_1)

{
  FBlueprintCameraDirectorEvaluator *pFVar1;
  
  pFVar1 = UE::Cameras::FCameraDirectorEvaluatorStorage::
           BuildEvaluator<UE::Cameras::FBlueprintCameraDirectorEvaluator>(param_1->Storage);
  return (FCameraDirectorEvaluator *)pFVar1;
}

// OnExtendAssetRegistryTags @ 14d5c1890

void __thiscall
UBlueprintCameraDirector::OnExtendAssetRegistryTags
          (UBlueprintCameraDirector *this,FAssetRegistryTagsContext param_1)

{
  return;
}

// OnGatherRigUsageInfo @ 14d5c19d0

void __thiscall
UBlueprintCameraDirector::OnGatherRigUsageInfo
          (UBlueprintCameraDirector *this,FCameraDirectorRigUsageInfo *param_1)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if ((this->CameraDirectorEvaluatorClass).Class.field0_0x0.DebugPtr == (UClass *)0x0) {
    return;
  }
  if (Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraDirectorEvaluator",
               &Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.InnerSingleton,
               UBlueprintCameraDirectorEvaluator::
               StaticRegisterNativesUBlueprintCameraDirectorEvaluator,0x148,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraDirectorEvaluator>,
               InternalVTableHelperCtorCaller<UBlueprintCameraDirectorEvaluator>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return;
}

// StaticRegisterNativesUBlueprintCameraDirector @ 14d5d0bb0

void __cdecl UBlueprintCameraDirector::StaticRegisterNativesUBlueprintCameraDirector(void)

{
  return;
}

