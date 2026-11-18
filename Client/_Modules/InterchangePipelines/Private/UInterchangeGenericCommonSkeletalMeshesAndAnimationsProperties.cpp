// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 8

// StaticClass @ 14e72d330

UClass * __cdecl UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",
               L"InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties",
               &Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
                .InnerSingleton,
               StaticRegisterNativesUInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties,
               0x138,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties>,
               InternalVTableHelperCtorCaller<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties>
               ,local_res8,UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.
         InnerSingleton;
}

// UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties @ 14e767280

UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties * __thiscall
UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::
UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
          (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *this,
          FVTableHelper *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bImportOnlyAnimations = false;
  this->_padding_ =
       (longlong)&___7UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties__6B_;
  (this->Skeleton).WeakPtr = (FWeakObjectPtr)0x0;
  this->bImportMeshesInBoneHierarchy = true;
  this->bUseT0AsRefPose = false;
  this->bAddCurveMetadataToSkeleton = true;
  this->bConvertStaticsWithMorphTargetsToSkeletals = false;
  return this;
}

// UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties @ 14e7672d0

UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties * __thiscall
UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::
UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
          (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *this,
          FObjectInitializer *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bImportOnlyAnimations = false;
  this->_padding_ =
       (longlong)&___7UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties__6B_;
  (this->Skeleton).WeakPtr = (FWeakObjectPtr)0x0;
  this->bImportMeshesInBoneHierarchy = true;
  this->bUseT0AsRefPose = false;
  this->bAddCurveMetadataToSkeleton = true;
  this->bConvertStaticsWithMorphTargetsToSkeletals = false;
  return this;
}

// ~UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties @ 14e76c060

void __thiscall
UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::
~UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
          (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *this)

{
  this->_padding_ =
       (longlong)&___7UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties__6B_;
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  return;
}

// CreateSkeletonFactoryNode @ 14e79b800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeSkeletonFactoryNode * __thiscall
UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::CreateSkeletonFactoryNode
          (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *this,
          UInterchangeBaseNodeContainer *param_1,FString *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  UInterchangeBaseNode *this_00;
  FString *pFVar5;
  UInterchangeSkeletonFactoryNode *this_01;
  UClass *pUVar6;
  UInterchangeSkeletonFactoryNode *pUVar7;
  EAttributeStorageResult EVar8;
  FString *pFVar9;
  UObject *pUVar10;
  longlong *plVar11;
  undefined1 auStackY_288 [32];
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  undefined8 local_208;
  undefined8 local_200;
  FString local_1f8;
  FSoftObjectPath local_1e8;
  FName local_1c8;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  void *local_140 [2];
  FString local_130;
  void *local_120 [2];
  FString local_110;
  FString local_100;
  void *local_f0 [2];
  FString local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  this_00 = UInterchangeBaseNodeContainer::GetNode(param_1,param_2);
  if (this_00 == (UInterchangeBaseNode *)0x0) {
    return (UInterchangeSkeletonFactoryNode *)0x0;
  }
  pFVar5 = UInterchangeBaseNode::GetDisplayLabel(this_00,&local_160);
  ::FString::ConcatFC(&local_170,pFVar5,L"_Skeleton");
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  pFVar5 = UInterchangeBaseNode::GetUniqueID(this_00,&local_150);
  UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_1f8,pFVar5);
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  bVar3 = UInterchangeBaseNodeContainer::IsNodeUidValid(param_1,&local_1f8);
  if (bVar3) {
    this_01 = (UInterchangeSkeletonFactoryNode *)
              UInterchangeBaseNodeContainer::GetFactoryNode(param_1,&local_1f8);
    if (this_01 != (UInterchangeSkeletonFactoryNode *)0x0) {
      pUVar6 = Z_Construct_UClass_UInterchangeSkeletonFactoryNode_NoRegister();
      iVar4 = (int)pUVar6->_padding_;
      if ((iVar4 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar6->_padding_)) {
        pUVar7 = (UInterchangeSkeletonFactoryNode *)0x0;
        local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_248.Data.ArrayNum = 0;
        local_248.Data.ArrayMax = 0;
        UInterchangeSkeletonFactoryNode::GetCustomRootJointUid(this_01,&local_248);
        local_1a0.Data.AllocatorInstance.Data = local_248.Data.AllocatorInstance.Data;
        iVar4 = (param_2->Data).ArrayNum;
        if (local_248.Data.ArrayNum == iVar4) {
          if (local_248.Data.ArrayNum < 2) goto joined_r0x00014e79be64;
          iVar4 = wcscmp((wchar_t *)local_248.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
          bVar3 = iVar4 == 0;
        }
        else {
          bVar3 = local_248.Data.ArrayNum + iVar4 == 1;
        }
        if (!bVar3) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3638447850787962919>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.cpp"
                             ,0x27,"ExistingSkeletonRootJointUid.Equals(RootJointUid)");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            pUVar7 = (UInterchangeSkeletonFactoryNode *)(*pcVar1)();
            return pUVar7;
          }
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          goto LAB_14e79bed6;
        }
        goto joined_r0x00014e79be64;
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3638447850787962912>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.cpp"
                       ,0x20,"SkeletonFactoryNode");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pUVar7 = (UInterchangeSkeletonFactoryNode *)(*pcVar1)();
      return pUVar7;
    }
    pUVar7 = (UInterchangeSkeletonFactoryNode *)0x0;
  }
  else {
    pUVar7 = (UInterchangeSkeletonFactoryNode *)0x0;
    local_208 = 0;
    local_200 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UInterchangeSkeletonFactoryNode_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar6);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_4_ = 0;
    local_c8._20_4_ = 0;
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = param_1;
    this_01 = (UInterchangeSkeletonFactoryNode *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar11 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (this_01 == (UInterchangeSkeletonFactoryNode *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3638447850787962928>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.cpp"
                         ,0x30,"SkeletonFactoryNode");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pUVar7 = (UInterchangeSkeletonFactoryNode *)(*pcVar1)();
        return pUVar7;
      }
      goto LAB_14e79bed6;
    }
    pUVar6 = Z_Construct_UClass_USkeleton_NoRegister();
    local_1c8 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_1c8,&local_180);
    this_01->bIsNodeClassInitialized = false;
    ::FString::FString(&local_190,L"");
    UInterchangeBaseNodeContainer::SetupNode
              (param_1,(UInterchangeBaseNode *)this_01,&local_1f8,&local_170,FactoryData,&local_190)
    ;
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    pFVar5 = (FString *)(**(code **)(this_01->_padding_ + 0x2b0))(this_01,local_140);
    ::FString::ConcatFC(&local_1c0,pFVar5,L".SetAssetClassName");
    if (local_140[0] != (void *)0x0) {
      FMemory::Free(local_140[0]);
    }
    if ((this_01->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pUVar7 = (UInterchangeSkeletonFactoryNode *)(*pcVar1)();
      return pUVar7;
    }
    EVar8 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                      ((FAttributeStorage *)this_01->_padding_,&this_01->ClassNameAttributeKey,
                       &local_180,None);
    if ((EVar8 & Operation_Success) == None) {
      ::FString::FString(&local_130,&(this_01->ClassNameAttributeKey).Key);
      FVar2.Data = local_1c0.Data.AllocatorInstance.Data;
      local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.Data.ArrayNum = local_1c0.Data.ArrayNum;
      if (local_1c0.Data.ArrayNum == 0) {
        local_238.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1c0.Data.ArrayNum,0,(ForAnyElementType *)&local_238,
                   local_1c0.Data.ArrayNum,&local_238.Data.ArrayMax);
        memcpy(local_238.Data.AllocatorInstance.Data,FVar2.Data,
               (longlong)local_1c0.Data.ArrayNum * 2);
      }
      UE::Interchange::LogAttributeStorageErrors(EVar8,&local_238,(FAttributeKey *)&local_130);
    }
    UInterchangeSkeletonFactoryNode::FillAssetClassFromAttribute(this_01);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    pFVar5 = UInterchangeBaseNode::GetUniqueID(this_00,&local_100);
    pFVar9 = (FString *)(**(code **)(this_01->_padding_ + 0x2b0))(this_01,local_120);
    ::FString::ConcatFC(&local_1b0,pFVar9,L".SetRootJointID");
    if (local_120[0] != (void *)0x0) {
      FMemory::Free(local_120[0]);
    }
    if ((this_01->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pUVar7 = (UInterchangeSkeletonFactoryNode *)(*pcVar1)();
      return pUVar7;
    }
    EVar8 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                      ((FAttributeStorage *)this_01->_padding_,&this_01->Macro_CustomRootJointIDKey,
                       pFVar5,None);
    if ((EVar8 & Operation_Success) == None) {
      ::FString::FString(&local_110,&(this_01->Macro_CustomRootJointIDKey).Key);
      FVar2.Data = local_1b0.Data.AllocatorInstance.Data;
      local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.Data.ArrayNum = local_1b0.Data.ArrayNum;
      if (local_1b0.Data.ArrayNum == 0) {
        local_228.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1b0.Data.ArrayNum,0,(ForAnyElementType *)&local_228,
                   local_1b0.Data.ArrayNum,&local_228.Data.ArrayMax);
        memcpy(local_228.Data.AllocatorInstance.Data,FVar2.Data,
               (longlong)local_1b0.Data.ArrayNum * 2);
      }
      UE::Interchange::LogAttributeStorageErrors(EVar8,&local_228,(FAttributeKey *)&local_110);
    }
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    pFVar5 = (FString *)(**(code **)(this_01->_padding_ + 0x2b0))(this_01,local_f0);
    ::FString::ConcatFC(&local_1a0,pFVar5,L".SetUseTimeZeroForBindPose");
    if (local_f0[0] != (void *)0x0) {
      FMemory::Free(local_f0[0]);
    }
    if ((this_01->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pUVar7 = (UInterchangeSkeletonFactoryNode *)(*pcVar1)();
      return pUVar7;
    }
    EVar8 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                      ((FAttributeStorage *)this_01->_padding_,
                       &this_01->Macro_CustomUseTimeZeroForBindPoseKey,&this->bUseT0AsRefPose,None);
    if ((EVar8 & Operation_Success) == None) {
      ::FString::FString(&local_e0,&(this_01->Macro_CustomUseTimeZeroForBindPoseKey).Key);
      FVar2.Data = local_1a0.Data.AllocatorInstance.Data;
      local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.Data.ArrayNum = local_1a0.Data.ArrayNum;
      if (local_1a0.Data.ArrayNum == 0) {
        local_218.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1a0.Data.ArrayNum,0,(ForAnyElementType *)&local_218,
                   local_1a0.Data.ArrayNum,&local_218.Data.ArrayMax);
        memcpy(local_218.Data.AllocatorInstance.Data,FVar2.Data,
               (longlong)local_1a0.Data.ArrayNum * 2);
      }
      UE::Interchange::LogAttributeStorageErrors(EVar8,&local_218,(FAttributeKey *)&local_e0);
    }
joined_r0x00014e79be64:
    pUVar7 = this_01;
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    bVar3 = FWeakObjectPtr::IsValid(&(this->Skeleton).WeakPtr);
    if (bVar3) {
      UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)pUVar7,false);
      pUVar10 = FWeakObjectPtr::Get(&(this->Skeleton).WeakPtr);
      local_1e8.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_1e8.AssetPath.PackageName.Number = 0;
      local_1e8.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_1e8.AssetPath.AssetName.Number = 0;
      local_1e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.SubPathString.Data.ArrayNum = 0;
      local_1e8.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_1e8,pUVar10);
      UInterchangeFactoryBaseNode::SetCustomReferenceObject
                ((UInterchangeFactoryBaseNode *)pUVar7,&local_1e8);
      if (local_1e8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.SubPathString.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_14e79bed6:
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return pUVar7;
}

// GetPrivateStaticClass @ 14e7b9800

UClass * __cdecl
UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",
               L"InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties",
               &Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
                .InnerSingleton,
               StaticRegisterNativesUInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties,
               0x138,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties>,
               InternalVTableHelperCtorCaller<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties>
               ,local_res8,UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.
         InnerSingleton;
}

// IsSettingsAreValid @ 14e7c7820

bool __thiscall
UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::IsSettingsAreValid
          (UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties *this,
          TOptional<FText> *param_1)

{
  bool bVar1;
  FText *pFVar2;
  FText local_18;
  
  if (this->bImportOnlyAnimations != false) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->Skeleton).WeakPtr);
    if (!bVar1) {
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_18,
                          L"UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties",
                          L"SkeletonMustBeSpecified",
                          L"When importing only animations, a valid skeleton must be set.");
      TOptional<FText>::operator=(param_1,pFVar2);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      return false;
    }
  }
  return true;
}

// StaticRegisterNativesUInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties @ 14e7e4620

void __cdecl
UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::
StaticRegisterNativesUInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties(void)

{
  return;
}

