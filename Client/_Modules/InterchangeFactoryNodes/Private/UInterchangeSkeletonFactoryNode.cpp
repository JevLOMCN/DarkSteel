// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 19

// StaticClass @ 14e51b9b0

UClass * __cdecl UInterchangeSkeletonFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSkeletonFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeSkeletonFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeSkeletonFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSkeletonFactoryNode,0x210,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSkeletonFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeSkeletonFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSkeletonFactoryNode.InnerSingleton;
}

// UInterchangeSkeletonFactoryNode @ 14e532c30

UInterchangeSkeletonFactoryNode * __thiscall
UInterchangeSkeletonFactoryNode::UInterchangeSkeletonFactoryNode
          (UInterchangeSkeletonFactoryNode *this,FVTableHelper *param_1)

{
  FString *pFVar1;
  
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode
            ((UInterchangeFactoryBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeSkeletonFactoryNode__6B_;
  pFVar1 = &UE::Interchange::FBaseNodeStaticData::ClassTypeAttributeKey()->Key;
  ::FString::FString(&(this->ClassNameAttributeKey).Key,pFVar1);
  (this->Macro_CustomRootJointIDKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomRootJointIDKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomRootJointIDKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomRootJointIDKey).Key,L"RootJointID");
  (this->Macro_CustomUseTimeZeroForBindPoseKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomUseTimeZeroForBindPoseKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomUseTimeZeroForBindPoseKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomUseTimeZeroForBindPoseKey).Key,L"UseTimeZeroForBindPose")
  ;
  (this->Macro_CustomSkeletalMeshFactoryNodeUidKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSkeletalMeshFactoryNodeUidKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSkeletalMeshFactoryNodeUidKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomSkeletalMeshFactoryNodeUidKey).Key,L"SkeletalMeshFactoryNodeUid");
  (this->AssetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bIsNodeClassInitialized = false;
  return this;
}

// UInterchangeSkeletonFactoryNode @ 14e532ce0

UInterchangeSkeletonFactoryNode * __thiscall
UInterchangeSkeletonFactoryNode::UInterchangeSkeletonFactoryNode
          (UInterchangeSkeletonFactoryNode *this)

{
  FString *pFVar1;
  
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeSkeletonFactoryNode__6B_;
  pFVar1 = &UE::Interchange::FBaseNodeStaticData::ClassTypeAttributeKey()->Key;
  ::FString::FString(&(this->ClassNameAttributeKey).Key,pFVar1);
  (this->Macro_CustomRootJointIDKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomRootJointIDKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomRootJointIDKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomRootJointIDKey).Key,L"RootJointID");
  (this->Macro_CustomUseTimeZeroForBindPoseKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomUseTimeZeroForBindPoseKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomUseTimeZeroForBindPoseKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomUseTimeZeroForBindPoseKey).Key,L"UseTimeZeroForBindPose")
  ;
  (this->Macro_CustomSkeletalMeshFactoryNodeUidKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSkeletalMeshFactoryNodeUidKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSkeletalMeshFactoryNodeUidKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomSkeletalMeshFactoryNodeUidKey).Key,L"SkeletalMeshFactoryNodeUid");
  (this->AssetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bIsNodeClassInitialized = false;
  return this;
}

// ~UInterchangeSkeletonFactoryNode @ 14e536260

void __thiscall
UInterchangeSkeletonFactoryNode::~UInterchangeSkeletonFactoryNode
          (UInterchangeSkeletonFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeSkeletonFactoryNode__6B_;
  pFVar1 = (this->Macro_CustomSkeletalMeshFactoryNodeUidKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomUseTimeZeroForBindPoseKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomRootJointIDKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ClassNameAttributeKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  return;
}

// FillAssetClassFromAttribute @ 14e54e840

void __thiscall
UInterchangeSkeletonFactoryNode::FillAssetClassFromAttribute(UInterchangeSkeletonFactoryNode *this)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  UClass *pUVar6;
  ForAnyElementType FVar7;
  FName local_res8;
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  FString local_48;
  FString local_38;
  TAttributeHandle<FString,void> local_28;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_58);
  ::FString::ConcatFC(&local_68,pFVar4,L".GetAssetClassName");
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar2 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,&this->ClassNameAttributeKey)
  ;
  if (bVar2) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FString,void>
              (this_00,&local_28,&this->ClassNameAttributeKey);
    bVar2 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::IsValid(&local_28);
    if (bVar2) {
      EVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::Get
                        (&local_28,&local_88);
      if ((EVar5 & Operation_Success) == None) {
        ::FString::FString(&local_48,&(this->ClassNameAttributeKey).Key);
        pFVar4 = ::FString::FString(&local_38,&local_68);
        UE::Interchange::LogAttributeStorageErrors(EVar5,pFVar4,(FAttributeKey *)&local_48);
      }
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  pUVar6 = Z_Construct_UClass_USkeleton_NoRegister();
  local_res8 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_res8,&local_78);
  FVar7.Data = local_88.Data.AllocatorInstance.Data;
  if (local_88.Data.ArrayNum == local_78.Data.ArrayNum) {
    if (local_88.Data.ArrayNum < 2) {
      bVar2 = true;
    }
    else {
      iVar3 = wcscmp((wchar_t *)local_88.Data.AllocatorInstance.Data,
                     (wchar_t *)local_78.Data.AllocatorInstance.Data);
      bVar2 = iVar3 == 0;
    }
  }
  else {
    bVar2 = local_88.Data.ArrayNum + local_78.Data.ArrayNum == 1;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
    FVar7.Data = local_88.Data.AllocatorInstance.Data;
  }
  if (bVar2) {
    pUVar6 = Z_Construct_UClass_USkeleton_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->AssetClass).Class.field0_0x0.DebugPtr = pUVar6;
    this->bIsNodeClassInitialized = true;
    FVar7.Data = local_88.Data.AllocatorInstance.Data;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// GetHash @ 14e557ed0

FGuid * __thiscall
UInterchangeSkeletonFactoryNode::GetHash
          (UInterchangeSkeletonFactoryNode *this,FGuid *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGuid *pFVar3;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGuid *)(*pcVar1)();
      return pFVar3;
    }
  }
  UE::Interchange::FAttributeStorage::GetStorageHash
            ((FAttributeStorage *)this->_padding_,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetObjectClass @ 14e559480

UClass * __thiscall
UInterchangeSkeletonFactoryNode::GetObjectClass(UInterchangeSkeletonFactoryNode *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  if (this->bIsNodeClassInitialized == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2294182877379690559>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Public\\InterchangeSkeletonFactoryNode.h"
                       ,0x3f,"bIsNodeClassInitialized");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UClass *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar4 = (this->AssetClass).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_USkeleton_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         (pUVar4 = (this->AssetClass).Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) {
        pUVar5 = Z_Construct_UClass_USkeleton_NoRegister();
        if (pUVar5 != (UClass *)0x0) {
          iVar1 = (int)pUVar5->_padding_;
          if (((int)pUVar4->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            return (this->AssetClass).Class.field0_0x0.DebugPtr;
          }
        }
        return (UClass *)0x0;
      }
    }
  }
  pUVar4 = Z_Construct_UClass_USkeleton_NoRegister();
  return pUVar4;
}

// GetPrivateStaticClass @ 14e55b690

UClass * __cdecl UInterchangeSkeletonFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSkeletonFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeSkeletonFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeSkeletonFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSkeletonFactoryNode,0x210,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSkeletonFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeSkeletonFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSkeletonFactoryNode.InnerSingleton;
}

// GetTypeName @ 14e55d890

FString * __thiscall
UInterchangeSkeletonFactoryNode::GetTypeName
          (UInterchangeSkeletonFactoryNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SkeletonNode");
  return __return_storage_ptr__;
}

// Serialize @ 14e55fda0

void __thiscall
UInterchangeSkeletonFactoryNode::Serialize(UInterchangeSkeletonFactoryNode *this,FArchive *param_1)

{
  UInterchangeBaseNode::Serialize((UInterchangeBaseNode *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) && (this->bIsNodeClassInitialized == false)) {
    FillAssetClassFromAttribute(this);
  }
  return;
}

// Serialize @ 14e55fde0

void __thiscall
UInterchangeSkeletonFactoryNode::Serialize
          (UInterchangeSkeletonFactoryNode *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UInterchangeBaseNode::Serialize((UInterchangeBaseNode *)this,pFVar1);
  if (((pFVar1->field_0x28 & 1) != 0) && (this->bIsNodeClassInitialized == false)) {
    FillAssetClassFromAttribute(this);
  }
  return;
}

// StaticRegisterNativesUInterchangeSkeletonFactoryNode @ 14e57f8d0

void __cdecl
UInterchangeSkeletonFactoryNode::StaticRegisterNativesUInterchangeSkeletonFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomRootJointUid @ 14e5942a0

void __cdecl
UInterchangeSkeletonFactoryNode::execGetCustomRootJointUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar5 = &local_38;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar5 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetRootJointID");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<FString>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x18,
                     &local_28,pFVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomSkeletalMeshFactoryNodeUid @ 14e594ef0

void __cdecl
UInterchangeSkeletonFactoryNode::execGetCustomSkeletalMeshFactoryNodeUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar5 = &local_38;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar5 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetSkeletalMeshFactoryNodeUid");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<FString>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xc].field_0x10,
                     &local_28,pFVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomUseTimeZeroForBindPose @ 14e597640

void __cdecl
UInterchangeSkeletonFactoryNode::execGetCustomUseTimeZeroForBindPose
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetUseTimeZeroForBindPose");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0xc),&local_38
                     ,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execInitializeSkeletonNode @ 14e59c730

void __cdecl
UInterchangeSkeletonFactoryNode::execInitializeSkeletonNode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UInterchangeBaseNodeContainer *this;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  UInterchangeBaseNodeContainer *local_res8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res8 = (UInterchangeBaseNodeContainer *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  this = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)(param_1 + 0xd) = 0;
  ::FString::FString(&local_48,L"");
  UInterchangeBaseNodeContainer::SetupNode
            (this,(UInterchangeBaseNode *)param_1,&local_68,&local_78,FactoryData,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_58,pFVar4,L".SetAssetClassName");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x8,
                     &local_88,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xb].field_0x8);
    _Src.Data = local_58.Data.AllocatorInstance.Data;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.Data.ArrayNum == 0) {
      local_98.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_98,local_58.Data.ArrayNum,
                 &local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_98,(FAttributeKey *)&local_28);
  }
  FillAssetClassFromAttribute((UInterchangeSkeletonFactoryNode *)param_1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomRootJointUid @ 14e5aecc0

void __cdecl
UInterchangeSkeletonFactoryNode::execSetCustomRootJointUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetRootJointID");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x18,
                     &local_48,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)&param_1[0xb].field_0x18);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_38.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_18);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomSkeletalMeshFactoryNodeUid @ 14e5afcd0

void __cdecl
UInterchangeSkeletonFactoryNode::execSetCustomSkeletalMeshFactoryNodeUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetSkeletalMeshFactoryNodeUid");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xc].field_0x10,
                     &local_48,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)&param_1[0xc].field_0x10);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_38.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_18);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomUseTimeZeroForBindPose @ 14e5b2cf0

void __cdecl
UInterchangeSkeletonFactoryNode::execSetCustomUseTimeZeroForBindPose
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetUseTimeZeroForBindPose");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0xc),pbVar7,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)(param_1 + 0xc));
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

