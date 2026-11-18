// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// StaticClass @ 14d56d7b0

UClass * __cdecl UStateTreeCameraDirector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"StateTreeCameraDirector",
               &Z_Registration_Info_UClass_UStateTreeCameraDirector.InnerSingleton,
               StaticRegisterNativesUStateTreeCameraDirector,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStateTreeCameraDirector>,
               InternalVTableHelperCtorCaller<UStateTreeCameraDirector>,local_res8,
               UCameraDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeCameraDirector.InnerSingleton;
}

// UStateTreeCameraDirector @ 14d5903d0

UStateTreeCameraDirector * __thiscall
UStateTreeCameraDirector::UStateTreeCameraDirector
          (UStateTreeCameraDirector *this,FVTableHelper *param_1)

{
  UCameraDirector::UCameraDirector((UCameraDirector *)this,param_1);
  this->_padding_ = (longlong)&___7UStateTreeCameraDirector__6B_;
  (this->StateTreeReference).StateTree.field0_0x0.DebugPtr = (UStateTree *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->StateTreeReference).Parameters.Value);
  (this->StateTreeReference).PropertyOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StateTreeReference).PropertyOverrides.ArrayNum = 0;
  (this->StateTreeReference).PropertyOverrides.ArrayMax = 0;
  return this;
}

// UStateTreeCameraDirector @ 14d590420

UStateTreeCameraDirector * __thiscall
UStateTreeCameraDirector::UStateTreeCameraDirector
          (UStateTreeCameraDirector *this,FObjectInitializer *param_1)

{
  UCameraDirector::UCameraDirector((UCameraDirector *)this,param_1);
  this->_padding_ = (longlong)&___7UStateTreeCameraDirector__6B_;
  (this->StateTreeReference).StateTree.field0_0x0.DebugPtr = (UStateTree *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->StateTreeReference).Parameters.Value);
  (this->StateTreeReference).PropertyOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StateTreeReference).PropertyOverrides.ArrayNum = 0;
  (this->StateTreeReference).PropertyOverrides.ArrayMax = 0;
  return this;
}

// ~UStateTreeCameraDirector @ 14d591fc0

void __thiscall UStateTreeCameraDirector::~UStateTreeCameraDirector(UStateTreeCameraDirector *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UStateTreeCameraDirector__6B_;
  pFVar1 = (this->StateTreeReference).PropertyOverrides.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset(&(this->StateTreeReference).Parameters.Value);
  UCameraDirector::~UCameraDirector((UCameraDirector *)this);
  return;
}

// GetPrivateStaticClass @ 14d5aa840

UClass * __cdecl UStateTreeCameraDirector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"StateTreeCameraDirector",
               &Z_Registration_Info_UClass_UStateTreeCameraDirector.InnerSingleton,
               StaticRegisterNativesUStateTreeCameraDirector,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStateTreeCameraDirector>,
               InternalVTableHelperCtorCaller<UStateTreeCameraDirector>,local_res8,
               UCameraDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeCameraDirector.InnerSingleton;
}

// OnBuildCameraDirector @ 14d5b8210

void __thiscall
UStateTreeCameraDirector::OnBuildCameraDirector
          (UStateTreeCameraDirector *this,FCameraBuildLog *param_1)

{
  FText *pFVar1;
  FText local_18;
  
  if ((this->StateTreeReference).StateTree.field0_0x0.DebugPtr == (UStateTree *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"StateTreeCameraDirector",L"MissingStateTree",
                        L"No state tree reference is set.");
    UE::Cameras::FCameraBuildLog::AddMessage(param_1,Error,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// OnBuildEvaluator @ 14d5b8b50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraDirectorEvaluator * __thiscall
UStateTreeCameraDirector::OnBuildEvaluator
          (UStateTreeCameraDirector *this,FCameraDirectorEvaluatorBuilder *param_1)

{
  FStateTreeCameraDirectorEvaluator *pFVar1;
  
  pFVar1 = UE::Cameras::FCameraDirectorEvaluatorStorage::
           BuildEvaluator<UE::Cameras::FStateTreeCameraDirectorEvaluator>(param_1->Storage);
  return (FCameraDirectorEvaluator *)pFVar1;
}

// OnExtendAssetRegistryTags @ 14d5c18a0

void __thiscall
UStateTreeCameraDirector::OnExtendAssetRegistryTags
          (UStateTreeCameraDirector *this,FAssetRegistryTagsContext param_1)

{
  UStateTree *this_00;
  FString *pFVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  FName local_res8;
  FAssetRegistryTag local_58;
  FString local_30;
  
  this_00 = (this->StateTreeReference).StateTree.field0_0x0.DebugPtr;
  if (this_00 != (UStateTree *)0x0) {
    _Src = (FScriptContainerElement *)0x0;
    iVar2 = 0;
    ::FName::FName(&local_res8,L"ExternalDirector");
    pFVar1 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)this_00,(FString *)&local_58,(UObject *)0x0);
    if (&local_30 != pFVar1) {
      _Src = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar2 = (pFVar1->Data).ArrayNum;
      (pFVar1->Data).ArrayNum = 0;
      (pFVar1->Data).ArrayMax = 0;
    }
    if (local_58.Name != (FName)0x0) {
      FMemory::Free((void *)local_58.Name);
    }
    local_58.Name = local_res8;
    local_58.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Value.Data.ArrayNum = iVar2;
    if (iVar2 == 0) {
      local_58.Value.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar2,0,(ForAnyElementType *)&local_58.Value,iVar2,
                 &local_58.Value.Data.ArrayMax);
      memcpy(local_58.Value.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
    }
    local_58.Type = TT_Hidden;
    local_58.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_58);
    if (_Src != (FScriptContainerElement *)0x0) {
      FMemory::Free(_Src);
    }
  }
  return;
}

// OnGatherRigUsageInfo @ 14d5c1ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UStateTreeCameraDirector::OnGatherRigUsageInfo
          (UStateTreeCameraDirector *this,FCameraDirectorRigUsageInfo *param_1)

{
  UStateTree *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_248 [32];
  ForAnyElementType local_208;
  int local_200;
  int local_1fc;
  UClass *local_1f8;
  UClass *pUStack_1f0;
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  TArrayView<UClass_*,int> local_1d8;
  undefined1 local_1c8 [400];
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pUVar1 = (this->StateTreeReference).StateTree.field0_0x0.DebugPtr;
  if (pUVar1 != (UStateTree *)0x0) {
    local_1f8 = UCameraRigAsset::StaticClass();
    pUStack_1f0 = UCameraRigProxyAsset::StaticClass();
    local_200 = 2;
    local_208.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,2,0,&local_208,2,&local_1fc);
    iStack_1e0 = local_200;
    *(UClass **)local_208.Data = local_1f8;
    *(UClass **)(local_208.Data + 8) = pUStack_1f0;
    local_1e8 = local_208.Data;
    if (local_200 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_1d8._12_4_ = uStack_1dc;
    local_1d8.ArrayNum = iStack_1e0;
    local_1d8.DataPtr = (UClass **)local_1e8;
    UE::Cameras::FOutgoingReferenceFinder::FOutgoingReferenceFinder
              ((FOutgoingReferenceFinder *)local_1c8,(UObject *)pUVar1,&local_1d8);
    UE::Cameras::FOutgoingReferenceFinder::CollectReferences((FOutgoingReferenceFinder *)local_1c8);
    UE::Cameras::FOutgoingReferenceFinder::GetReferencesOfClass<UCameraRigAsset>
              ((FOutgoingReferenceFinder *)local_1c8,&param_1->CameraRigs);
    UE::Cameras::FOutgoingReferenceFinder::GetReferencesOfClass<UCameraRigProxyAsset>
              ((FOutgoingReferenceFinder *)local_1c8,&param_1->CameraRigProxies);
    local_30 = 0;
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_1c8 + 0x150));
    local_1c8._328_4_ = 0;
    if ((ForElementType<FSetElementId>)local_1c8._320_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1c8._320_8_);
    }
    TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_1c8 + 0x100));
    if ((FScriptContainerElement *)local_1c8._240_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1c8._240_8_);
    }
    local_1c8._232_4_ = 0;
    if ((ForElementType<FSetElementId>)local_1c8._224_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1c8._224_8_);
    }
    TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_1c8 + 0xa0));
    FArchive::~FArchive((FArchive *)local_1c8);
    if (local_208.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data);
    }
  }
  return;
}

// StaticRegisterNativesUStateTreeCameraDirector @ 14d5d0f20

void __cdecl UStateTreeCameraDirector::StaticRegisterNativesUStateTreeCameraDirector(void)

{
  return;
}

