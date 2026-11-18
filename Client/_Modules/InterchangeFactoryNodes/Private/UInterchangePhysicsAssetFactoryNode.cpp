// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 16

// StaticClass @ 14e51a260

UClass * __cdecl UInterchangePhysicsAssetFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePhysicsAssetFactoryNode.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangePhysicsAssetFactoryNode",
               &Z_Registration_Info_UClass_UInterchangePhysicsAssetFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangePhysicsAssetFactoryNode,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePhysicsAssetFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangePhysicsAssetFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePhysicsAssetFactoryNode.InnerSingleton;
}

// UInterchangePhysicsAssetFactoryNode @ 14e532200

UInterchangePhysicsAssetFactoryNode * __thiscall
UInterchangePhysicsAssetFactoryNode::UInterchangePhysicsAssetFactoryNode
          (UInterchangePhysicsAssetFactoryNode *this,FVTableHelper *param_1)

{
  FString *pFVar1;
  
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode
            ((UInterchangeFactoryBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangePhysicsAssetFactoryNode__6B_;
  pFVar1 = &UE::Interchange::FBaseNodeStaticData::ClassTypeAttributeKey()->Key;
  ::FString::FString(&(this->ClassNameAttributeKey).Key,pFVar1);
  (this->Macro_CustomSkeletalMeshUidKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSkeletalMeshUidKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSkeletalMeshUidKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSkeletalMeshUidKey).Key,L"SkeletalMeshUid");
  (this->AssetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bIsNodeClassInitialized = false;
  return this;
}

// UInterchangePhysicsAssetFactoryNode @ 14e532270

UInterchangePhysicsAssetFactoryNode * __thiscall
UInterchangePhysicsAssetFactoryNode::UInterchangePhysicsAssetFactoryNode
          (UInterchangePhysicsAssetFactoryNode *this)

{
  FString *pFVar1;
  
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangePhysicsAssetFactoryNode__6B_;
  pFVar1 = &UE::Interchange::FBaseNodeStaticData::ClassTypeAttributeKey()->Key;
  ::FString::FString(&(this->ClassNameAttributeKey).Key,pFVar1);
  (this->Macro_CustomSkeletalMeshUidKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSkeletalMeshUidKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSkeletalMeshUidKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSkeletalMeshUidKey).Key,L"SkeletalMeshUid");
  (this->AssetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bIsNodeClassInitialized = false;
  return this;
}

// ~UInterchangePhysicsAssetFactoryNode @ 14e535f30

void __thiscall
UInterchangePhysicsAssetFactoryNode::~UInterchangePhysicsAssetFactoryNode
          (UInterchangePhysicsAssetFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangePhysicsAssetFactoryNode__6B_;
  pFVar1 = (this->Macro_CustomSkeletalMeshUidKey).Key.Data.AllocatorInstance.Data;
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

// FillAssetClassFromAttribute @ 14e54e480

void __thiscall
UInterchangePhysicsAssetFactoryNode::FillAssetClassFromAttribute
          (UInterchangePhysicsAssetFactoryNode *this)

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
  pUVar6 = Z_Construct_UClass_UPhysicsAsset_NoRegister();
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
    pUVar6 = Z_Construct_UClass_UPhysicsAsset_NoRegister();
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

// GetHash @ 14e557e70

FGuid * __thiscall
UInterchangePhysicsAssetFactoryNode::GetHash
          (UInterchangePhysicsAssetFactoryNode *this,FGuid *__return_storage_ptr__)

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

// GetObjectClass @ 14e559270

UClass * __thiscall
UInterchangePhysicsAssetFactoryNode::GetObjectClass(UInterchangePhysicsAssetFactoryNode *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  if (this->bIsNodeClassInitialized == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3361947661681819584>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Public\\InterchangePhysicsAssetFactoryNode.h"
                       ,0x40,"bIsNodeClassInitialized");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UClass *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar4 = (this->AssetClass).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UPhysicsAsset_NoRegister();
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
        pUVar5 = Z_Construct_UClass_UPhysicsAsset_NoRegister();
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
  pUVar4 = Z_Construct_UClass_UPhysicsAsset_NoRegister();
  return pUVar4;
}

// GetPrivateStaticClass @ 14e55b090

UClass * __cdecl UInterchangePhysicsAssetFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePhysicsAssetFactoryNode.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangePhysicsAssetFactoryNode",
               &Z_Registration_Info_UClass_UInterchangePhysicsAssetFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangePhysicsAssetFactoryNode,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePhysicsAssetFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangePhysicsAssetFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePhysicsAssetFactoryNode.InnerSingleton;
}

// GetTypeName @ 14e55d7a0

FString * __thiscall
UInterchangePhysicsAssetFactoryNode::GetTypeName
          (UInterchangePhysicsAssetFactoryNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SkeletonNode");
  return __return_storage_ptr__;
}

// IsRuntimeImportAllowed @ 14e55e7e0

bool __thiscall
UInterchangePhysicsAssetFactoryNode::IsRuntimeImportAllowed
          (UInterchangePhysicsAssetFactoryNode *this)

{
  return false;
}

// Serialize @ 14e55fd00

void __thiscall
UInterchangePhysicsAssetFactoryNode::Serialize
          (UInterchangePhysicsAssetFactoryNode *this,FArchive *param_1)

{
  UInterchangeBaseNode::Serialize((UInterchangeBaseNode *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) && (this->bIsNodeClassInitialized == false)) {
    FillAssetClassFromAttribute(this);
  }
  return;
}

// Serialize @ 14e55fd40

void __thiscall
UInterchangePhysicsAssetFactoryNode::Serialize
          (UInterchangePhysicsAssetFactoryNode *this,FStructuredArchiveRecord param_1)

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

// StaticRegisterNativesUInterchangePhysicsAssetFactoryNode @ 14e57f700

void __cdecl
UInterchangePhysicsAssetFactoryNode::StaticRegisterNativesUInterchangePhysicsAssetFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomSkeletalMeshUid @ 14e595040

void __cdecl
UInterchangePhysicsAssetFactoryNode::execGetCustomSkeletalMeshUid
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
  ::FString::ConcatFC(&local_28,pFVar4,L".GetSkeletalMeshUid");
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

// execInitializePhysicsAssetNode @ 14e59c130

void __cdecl
UInterchangePhysicsAssetFactoryNode::execInitializePhysicsAssetNode
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
  param_1[0xc].field_0x8 = 0;
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
  FillAssetClassFromAttribute((UInterchangePhysicsAssetFactoryNode *)param_1);
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

// execSetCustomSkeletalMeshUid @ 14e5afec0

void __cdecl
UInterchangePhysicsAssetFactoryNode::execSetCustomSkeletalMeshUid
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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetSkeletalMeshUid");
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

