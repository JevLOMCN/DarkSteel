// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 53

// StaticClass @ 14e51a3b0

UClass * __cdecl UInterchangeActorFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeActorFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeActorFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeActorFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeActorFactoryNode,0x280,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeActorFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeActorFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeActorFactoryNode.InnerSingleton;
}

// UInterchangeActorFactoryNode @ 14e52e7e0

UInterchangeActorFactoryNode * __thiscall
UInterchangeActorFactoryNode::UInterchangeActorFactoryNode
          (UInterchangeActorFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode
            ((UInterchangeFactoryBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeActorFactoryNode__6B_;
  (this->Macro_CustomGlobalTransformKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomGlobalTransformKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGlobalTransformKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomGlobalTransformKey).Key,L"GlobalTransform");
  (this->Macro_CustomLocalTransformKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomLocalTransformKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomLocalTransformKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomLocalTransformKey).Key,L"LocalTransform");
  (this->Macro_CustomComponentVisibilityKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomComponentVisibilityKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomComponentVisibilityKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomComponentVisibilityKey).Key,L"ComponentVisibility");
  (this->Macro_CustomActorVisibilityKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomActorVisibilityKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomActorVisibilityKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomActorVisibilityKey).Key,L"ActorVisibility");
  (this->Macro_CustomActorClassNameKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomActorClassNameKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomActorClassNameKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomActorClassNameKey).Key,L"ActorClassName");
  (this->Macro_CustomMobilityKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomMobilityKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomMobilityKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomMobilityKey).Key,L"Mobility");
  (this->LayerNames).Attributes.Object = (FAttributeStorage *)0x0;
  (this->LayerNames).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LayerNames).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerNames).KeyCount.Key.Data.ArrayNum = 0;
  (this->LayerNames).KeyCount.Key.Data.ArrayMax = 0;
  (this->Tags).Attributes.Object = (FAttributeStorage *)0x0;
  (this->Tags).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Tags).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).KeyCount.Key.Data.ArrayNum = 0;
  (this->Tags).KeyCount.Key.Data.ArrayMax = 0;
  (this->ComponentUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->ComponentUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ComponentUids).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->ComponentUids).KeyCount.Key.Data.ArrayMax = 0;
  return this;
}

// UInterchangeActorFactoryNode @ 14e52e910

UInterchangeActorFactoryNode * __thiscall
UInterchangeActorFactoryNode::UInterchangeActorFactoryNode(UInterchangeActorFactoryNode *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  bool bVar4;
  UInterchangeActorFactoryNode *pUVar5;
  TSharedPtr<UE::Interchange::FAttributeStorage,1> local_78;
  FString local_68;
  TSharedPtr<UE::Interchange::FAttributeStorage,1> local_58;
  FString local_48;
  TSharedPtr<UE::Interchange::FAttributeStorage,1> local_38;
  FString local_28;
  
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeActorFactoryNode__6B_;
  (this->Macro_CustomGlobalTransformKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomGlobalTransformKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGlobalTransformKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomGlobalTransformKey).Key,L"GlobalTransform");
  (this->Macro_CustomLocalTransformKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomLocalTransformKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomLocalTransformKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomLocalTransformKey).Key,L"LocalTransform");
  (this->Macro_CustomComponentVisibilityKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomComponentVisibilityKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomComponentVisibilityKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomComponentVisibilityKey).Key,L"ComponentVisibility");
  (this->Macro_CustomActorVisibilityKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomActorVisibilityKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomActorVisibilityKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomActorVisibilityKey).Key,L"ActorVisibility");
  (this->Macro_CustomActorClassNameKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomActorClassNameKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomActorClassNameKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomActorClassNameKey).Key,L"ActorClassName");
  (this->Macro_CustomMobilityKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomMobilityKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomMobilityKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomMobilityKey).Key,L"Mobility");
  (this->LayerNames).Attributes.Object = (FAttributeStorage *)0x0;
  (this->LayerNames).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LayerNames).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerNames).KeyCount.Key.Data.ArrayNum = 0;
  (this->LayerNames).KeyCount.Key.Data.ArrayMax = 0;
  (this->Tags).Attributes.Object = (FAttributeStorage *)0x0;
  (this->Tags).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Tags).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).KeyCount.Key.Data.ArrayNum = 0;
  (this->Tags).KeyCount.Key.Data.ArrayMax = 0;
  (this->ComponentUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->ComponentUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ComponentUids).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->ComponentUids).KeyCount.Key.Data.ArrayMax = 0;
  ::FString::FString(&local_68,L"__LayerNames__");
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UInterchangeActorFactoryNode *)(*pcVar3)();
      return pUVar5;
    }
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  pFVar2 = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 == (FAttributeStorage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UInterchangeActorFactoryNode *)(*pcVar3)();
      return pUVar5;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78.Object = pFVar2;
  local_78.SharedReferenceCount.ReferenceController = pTVar1;
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize(&this->LayerNames,&local_78,&local_68)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_48,L"__Tags__");
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UInterchangeActorFactoryNode *)(*pcVar3)();
      return pUVar5;
    }
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  pFVar2 = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 == (FAttributeStorage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UInterchangeActorFactoryNode *)(*pcVar3)();
      return pUVar5;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.Object = pFVar2;
  local_58.SharedReferenceCount.ReferenceController = pTVar1;
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize(&this->Tags,&local_58,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"__ComponentUids__");
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UInterchangeActorFactoryNode *)(*pcVar3)();
      return pUVar5;
    }
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  pFVar2 = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 == (FAttributeStorage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UInterchangeActorFactoryNode *)(*pcVar3)();
      return pUVar5;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = pFVar2;
  local_38.SharedReferenceCount.ReferenceController = pTVar1;
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->ComponentUids,&local_38,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UInterchangeActorFactoryNode @ 14e535170

void __thiscall
UInterchangeActorFactoryNode::~UInterchangeActorFactoryNode(UInterchangeActorFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeActorFactoryNode__6B_;
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->ComponentUids);
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>(&this->Tags);
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->LayerNames);
  pFVar1 = (this->Macro_CustomMobilityKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomActorClassNameKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomActorVisibilityKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomComponentVisibilityKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomLocalTransformKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomGlobalTransformKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  return;
}

// AddComponentUid @ 14e539600

bool __thiscall
UInterchangeActorFactoryNode::AddComponentUid(UInterchangeActorFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem(&this->ComponentUids,param_1);
  return bVar1;
}

// AddLayerName @ 14e5397c0

bool __thiscall
UInterchangeActorFactoryNode::AddLayerName(UInterchangeActorFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem(&this->LayerNames,param_1);
  return bVar1;
}

// AddLayerNames @ 14e5397e0

bool __thiscall
UInterchangeActorFactoryNode::AddLayerNames
          (UInterchangeActorFactoryNode *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  bVar5 = true;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar4) break;
    bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                      (&this->LayerNames,(FString *)pFVar3);
    bVar5 = (bool)(bVar5 & bVar2);
    pFVar3 = pFVar3 + 0x10;
  }
  return bVar5;
}

// AddTag @ 14e539bd0

bool __thiscall
UInterchangeActorFactoryNode::AddTag(UInterchangeActorFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem(&this->Tags,param_1);
  return bVar1;
}

// AddTags @ 14e539bf0

bool __thiscall
UInterchangeActorFactoryNode::AddTags
          (UInterchangeActorFactoryNode *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  bVar5 = true;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar4) break;
    bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem(&this->Tags,(FString *)pFVar3);
    bVar5 = (bool)(bVar5 & bVar2);
    pFVar3 = pFVar3 + 0x10;
  }
  return bVar5;
}

// ApplyCustomActorVisibilityToAsset @ 14e539cb0

bool __thiscall
UInterchangeActorFactoryNode::ApplyCustomActorVisibilityToAsset
          (UInterchangeActorFactoryNode *this,UObject *param_1)

{
  FAttributeKey *pFVar1;
  int iVar2;
  FAttributeStorage *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  bool local_res8 [8];
  FString local_68;
  void *local_58 [2];
  FString local_48;
  FString local_38;
  TAttributeHandle<bool,void> local_28;
  
  local_res8[0] = true;
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_58);
  ::FString::ConcatFC(&local_68,pFVar6,L".GetActorVisibility");
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar1 = &this->Macro_CustomActorVisibilityKey;
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,pFVar1);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>(this_00,&local_28,pFVar1);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_28);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                        (&local_28,local_res8);
      if ((EVar7 & Operation_Success) != None) {
        if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar4 = true;
        goto LAB_14e539ddb;
      }
      ::FString::FString(&local_48,&pFVar1->Key);
      pFVar6 = ::FString::FString(&local_38,&local_68);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar6,(FAttributeKey *)&local_48);
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  else {
    bVar4 = false;
  }
LAB_14e539ddb:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    return false;
  }
  if (param_1 != (UObject *)0x0) {
    pUVar8 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar8->_padding_)) {
      param_1 = *(UObject **)&param_1[4].field_0x8;
      goto LAB_14e539e4a;
    }
    if (param_1 != (UObject *)0x0) {
      pUVar8 = Z_Construct_UClass_AActor_NoRegister();
      iVar2 = (int)pUVar8->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar8->_padding_)) goto LAB_14e539e4a;
    }
  }
  param_1 = (UObject *)0x0;
LAB_14e539e4a:
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  (**(code **)(*(longlong *)param_1 + 0x368))(param_1,local_res8[0] == false);
  return true;
}

// ApplyCustomComponentVisibilityToAsset @ 14e539f10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UInterchangeActorFactoryNode::ApplyCustomComponentVisibilityToAsset
          (UInterchangeActorFactoryNode *this,UObject *param_1)

{
  FAttributeKey *pFVar1;
  int iVar2;
  FAttributeStorage *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  bool local_res8 [8];
  FString local_68;
  void *local_58 [2];
  FString local_48;
  FString local_38;
  TAttributeHandle<bool,void> local_28;
  
  local_res8[0] = true;
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_58);
  ::FString::ConcatFC(&local_68,pFVar6,L".GetComponentVisibility");
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar1 = &this->Macro_CustomComponentVisibilityKey;
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,pFVar1);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>(this_00,&local_28,pFVar1);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_28);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                        (&local_28,local_res8);
      if ((EVar7 & Operation_Success) != None) {
        if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar4 = true;
        goto LAB_14e53a038;
      }
      ::FString::FString(&local_48,&pFVar1->Key);
      pFVar6 = ::FString::FString(&local_38,&local_68);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar6,(FAttributeKey *)&local_48);
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  else {
    bVar4 = false;
  }
LAB_14e53a038:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (param_1 != (UObject *)0x0)) {
    pUVar8 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar8->_padding_)) {
      USceneComponent::SetVisibility((USceneComponent *)param_1,local_res8[0],DirtyOnly);
      return true;
    }
  }
  return false;
}

// ApplyCustomGlobalTransformToAsset @ 14e53a320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UInterchangeActorFactoryNode::ApplyCustomGlobalTransformToAsset
          (UInterchangeActorFactoryNode *this,UObject *param_1)

{
  FAttributeKey *pFVar1;
  int iVar2;
  FAttributeStorage *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  undefined1 auStack_108 [32];
  TAttributeHandle<UE::Math::TTransform<double>,void> local_d8;
  FString local_c0;
  void *local_b0 [2];
  FString local_a0;
  FString local_90;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_78.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_78.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  pFVar6 = (FString *)
           (**(code **)(this->_padding_ + 0x2b0))(local_78.Scale3D.ZW.m128d_f64[0],local_b0);
  ::FString::ConcatFC(&local_c0,pFVar6,L".GetGlobalTransform");
  if (local_b0[0] != (void *)0x0) {
    FMemory::Free(local_b0[0]);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar1 = &this->Macro_CustomGlobalTransformKey;
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,pFVar1);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TTransform<double>,void>
              (this_00,&local_d8,pFVar1);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TTransform<double>,void>
            ::IsValid(&local_d8);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<UE::Math::TTransform<double>,void>::Get(&local_d8,&local_78);
      if ((EVar7 & Operation_Success) != None) {
        if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar4 = true;
        goto LAB_14e53a4a1;
      }
      ::FString::FString(&local_a0,&pFVar1->Key);
      pFVar6 = ::FString::FString(&local_90,&local_c0);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar6,(FAttributeKey *)&local_a0);
    }
    if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  else {
    bVar4 = false;
  }
LAB_14e53a4a1:
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (param_1 != (UObject *)0x0)) {
    pUVar8 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar8->_padding_)) {
      USceneComponent::SetWorldTransform
                ((USceneComponent *)param_1,&local_78,false,(FHitResult *)0x0,None);
      return true;
    }
  }
  return false;
}

// ApplyCustomLocalTransformToAsset @ 14e53a530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UInterchangeActorFactoryNode::ApplyCustomLocalTransformToAsset
          (UInterchangeActorFactoryNode *this,UObject *param_1)

{
  FAttributeKey *pFVar1;
  int iVar2;
  FAttributeStorage *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  undefined1 auStack_108 [32];
  TAttributeHandle<UE::Math::TTransform<double>,void> local_d8;
  FString local_c0;
  void *local_b0 [2];
  FString local_a0;
  FString local_90;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_78.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_78.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  pFVar6 = (FString *)
           (**(code **)(this->_padding_ + 0x2b0))(local_78.Scale3D.ZW.m128d_f64[0],local_b0);
  ::FString::ConcatFC(&local_c0,pFVar6,L".GetLocalTransform");
  if (local_b0[0] != (void *)0x0) {
    FMemory::Free(local_b0[0]);
  }
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar1 = &this->Macro_CustomLocalTransformKey;
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,pFVar1);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TTransform<double>,void>
              (this_00,&local_d8,pFVar1);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TTransform<double>,void>
            ::IsValid(&local_d8);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<UE::Math::TTransform<double>,void>::Get(&local_d8,&local_78);
      if ((EVar7 & Operation_Success) != None) {
        if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar4 = true;
        goto LAB_14e53a6b1;
      }
      ::FString::FString(&local_a0,&pFVar1->Key);
      pFVar6 = ::FString::FString(&local_90,&local_c0);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar6,(FAttributeKey *)&local_a0);
    }
    if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  else {
    bVar4 = false;
  }
LAB_14e53a6b1:
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (param_1 != (UObject *)0x0)) {
    pUVar8 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar8->_padding_)) {
      USceneComponent::SetRelativeTransform
                ((USceneComponent *)param_1,&local_78,false,(FHitResult *)0x0,None);
      return true;
    }
  }
  return false;
}

// CopyWithObject @ 14e53bd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeActorFactoryNode::CopyWithObject
          (UInterchangeActorFactoryNode *this,UInterchangeFactoryBaseNode *param_1,UObject *param_2)

{
  FAttributeStorage *pFVar1;
  FScriptContainerElement *pFVar2;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  FString *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  longlong lVar12;
  EAttributeStorageResult EVar13;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar14;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *pTVar15;
  longlong *plVar16;
  undefined1 auStack_4e8 [32];
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *local_4c8;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  undefined8 local_4a8;
  bool local_498;
  bool local_497 [7];
  undefined1 local_490 [8];
  FDelegateAllocation local_488;
  undefined1 local_478 [8];
  FDelegateAllocation local_470;
  undefined1 local_460 [8];
  FDelegateAllocation local_458;
  undefined1 local_448 [8];
  ForAnyElementType local_440;
  int local_438;
  UClass *local_430;
  UInterchangeActorFactoryNode *local_428;
  UClass *local_420;
  UClass *local_418;
  UClass *local_410;
  UInterchangeActorFactoryNode *local_408;
  UClass *local_400;
  UInterchangeActorFactoryNode *local_3f8;
  UClass *local_3f0;
  UClass *local_3e8;
  UClass *local_3e0;
  TAttributeHandle<UE::Math::TTransform<double>,void> local_3d8;
  TAttributeHandle<UE::Math::TTransform<double>,void> local_3c0;
  TAttributeHandle<bool,void> local_3a8;
  TAttributeHandle<bool,void> local_390;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FDestructionSentinel local_338;
  FDestructionSentinel local_320;
  FDestructionSentinel local_308;
  FDestructionSentinel local_2f0;
  FDestructionSentinel local_2d8;
  FDestructionSentinel local_2c0;
  FDestructionSentinel local_2a8;
  FDestructionSentinel local_290;
  FDelegateAllocation *local_278;
  FDestructionSentinel local_270;
  FDelegateAllocation *local_258;
  FDestructionSentinel local_250;
  FDelegateAllocation *local_238;
  void *local_230 [2];
  FString local_220;
  void *local_210 [2];
  void *local_200 [2];
  FString local_1f0;
  void *local_1e0 [2];
  FString local_1d0;
  FString local_1c0;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_1b0;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_198;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_180;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> local_168;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_4e8;
  UInterchangeBaseNode::CopyStorage((UInterchangeBaseNode *)param_1,(UInterchangeBaseNode *)this);
  if (param_1 == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e53bdd4:
    param_1 = (UInterchangeFactoryBaseNode *)0x0;
  }
  else {
    pUVar8 = StaticClass();
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar8->_padding_)) goto LAB_14e53bdd4;
  }
  if (param_1 == (UInterchangeFactoryBaseNode *)0x0) {
    return;
  }
  pFVar9 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_230);
  ::FString::ConcatFC(&local_378,pFVar9,L".GetGlobalTransform");
  if (local_230[0] != (void *)0x0) {
    FMemory::Free(local_230[0]);
  }
  local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_108.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_108.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_108.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_108.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomGlobalTransformKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TTransform<double>,void>
              (pFVar1,&local_3d8,&this->Macro_CustomGlobalTransformKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TTransform<double>,void>
            ::IsValid(&local_3d8);
    if (bVar5) {
      EVar13 = UE::Interchange::FAttributeStorage::
               TAttributeHandle<UE::Math::TTransform<double>,void>::Get(&local_3d8,&local_108);
      if ((EVar13 & Operation_Success) != None) {
        if (local_3d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d8.Key.Key.Data.AllocatorInstance.Data);
        }
        local_430 = Z_Construct_UClass_USceneComponent_NoRegister();
        uVar6 = ((uint)((ulonglong)local_430 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_430 >> 4))
                * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = uVar6 >> 0x10 ^ uVar6;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar16 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar16 = &this->_padding_;
          }
          iVar7 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar6) * 4);
          if (iVar7 != -1) {
            lVar12 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar7 * 0x20 + lVar12) == local_430) {
                if ((iVar7 != -1) && (lVar12 = (longlong)iVar7 * 0x20 + lVar12, lVar12 != 0)) {
                  pTVar14 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar12 + 8);
                  goto LAB_14e53c01e;
                }
                break;
              }
              iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar12);
            } while (iVar7 != -1);
          }
        }
        pTVar14 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar6,&local_430);
LAB_14e53c01e:
        local_490 = (undefined1  [8])0x0;
        local_488.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_488.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_490,
                   (FWriteAccessScope *)&local_290);
        local_278 = &local_488;
        puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_488);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &
                     ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar11 = FDelegateHandle::GenerateNewID();
          puVar10[2] = uVar11;
          *puVar10 = &
                     ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar10[3] = 0;
          local_428 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_428);
          puVar10[4] = ApplyCustomGlobalTransformToAsset;
        }
        if (local_290.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_290.Accessor,&local_290);
        }
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar14->AllocatorInstance).Data;
        if ((pTVar3 <= (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_490)
           && ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_490 <
               pTVar3 + pTVar14->ArrayMax)) {
          local_4b0 = (longlong)pTVar14->ArrayNum;
          local_4a8 = 0x18;
          local_4c8 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_490;
          local_4c0 = pTVar3;
          local_4b8 = (longlong)pTVar14->ArrayMax;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = pTVar14->ArrayNum;
        if (iVar7 == pTVar14->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
        }
        lVar12 = (longlong)iVar7;
        pTVar14->ArrayNum = iVar7 + 1;
        pFVar2 = (pTVar14->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar12 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_490,
                   (FWriteAccessScope *)&local_338);
        if (*(void **)(pFVar2 + lVar12 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar12 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar12 * 0x18 + 8) =
             local_488.DelegateAllocator;
        local_488.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar12 * 0x18 + 0x10) = local_488.DelegateSize;
        local_488.DelegateSize = 0;
        if (local_338.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_338.Accessor,&local_338);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_490,
                   (FWriteAccessScope *)&local_320);
        if ((local_488.DelegateSize != 0) &&
           (local_488.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_488.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_488,0,0,0x10);
          local_488.DelegateSize = 0;
        }
        if (local_320.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_320.Accessor,&local_320);
        }
        if (local_488.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_488.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_490);
        local_420 = Z_Construct_UClass_USceneComponent_NoRegister();
        uVar6 = ((uint)((ulonglong)local_420 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_420 >> 4))
                * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = uVar6 >> 0x10 ^ uVar6;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar16 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar16 = &this->_padding_;
          }
          iVar7 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar6) * 4);
          if (iVar7 != -1) {
            lVar12 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar7 * 0x20 + lVar12) == local_420) {
                if ((iVar7 != -1) && (lVar12 = (longlong)iVar7 * 0x20 + lVar12, lVar12 != 0)) {
                  pTVar14 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar12 + 8);
                  goto LAB_14e53c2df;
                }
                break;
              }
              iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar12);
            } while (iVar7 != -1);
          }
        }
        pTVar14 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar6,&local_420);
LAB_14e53c2df:
        pTVar15 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeActorFactoryNode>
                            (&local_1b0,this,(pmf_12c8aeb5)0x14e54f000);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar14->AllocatorInstance).Data;
        if ((pTVar3 <= pTVar15) && (pTVar15 < pTVar3 + pTVar14->ArrayMax)) {
          local_4b0 = (longlong)pTVar14->ArrayNum;
          local_4a8 = 0x18;
          local_4c8 = pTVar15;
          local_4c0 = pTVar3;
          local_4b8 = (longlong)pTVar14->ArrayMax;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = pTVar14->ArrayNum;
        if (iVar7 == pTVar14->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
        }
        pTVar14->ArrayNum = iVar7 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar14->AllocatorInstance).Data + (longlong)iVar7 * 0x18),pTVar15);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1b0);
        goto LAB_14e53c398;
      }
      ::FString::FString(&local_220,&(this->Macro_CustomGlobalTransformKey).Key);
      pFVar9 = ::FString::FString(&local_130,&local_378);
      UE::Interchange::LogAttributeStorageErrors(EVar13,pFVar9,(FAttributeKey *)&local_220);
    }
    if (local_3d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e53c398:
  if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Data.AllocatorInstance.Data);
  }
  pFVar9 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_210);
  ::FString::ConcatFC(&local_368,pFVar9,L".GetLocalTransform");
  if (local_210[0] != (void *)0x0) {
    FMemory::Free(local_210[0]);
  }
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_a8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomLocalTransformKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TTransform<double>,void>
              (pFVar1,&local_3c0,&this->Macro_CustomLocalTransformKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TTransform<double>,void>
            ::IsValid(&local_3c0);
    if (bVar5) {
      EVar13 = UE::Interchange::FAttributeStorage::
               TAttributeHandle<UE::Math::TTransform<double>,void>::Get(&local_3c0,&local_a8);
      if ((EVar13 & Operation_Success) != None) {
        if (local_3c0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c0.Key.Key.Data.AllocatorInstance.Data);
        }
        local_418 = Z_Construct_UClass_USceneComponent_NoRegister();
        uVar6 = ((uint)((ulonglong)local_418 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_418 >> 4))
                * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = uVar6 >> 0x10 ^ uVar6;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar16 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar16 = &this->_padding_;
          }
          iVar7 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar6) * 4);
          if (iVar7 != -1) {
            lVar12 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar7 * 0x20 + lVar12) == local_418) {
                if ((iVar7 != -1) && (lVar12 = (longlong)iVar7 * 0x20 + lVar12, lVar12 != 0)) {
                  pTVar14 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar12 + 8);
                  goto LAB_14e53c5fe;
                }
                break;
              }
              iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar12);
            } while (iVar7 != -1);
          }
        }
        pTVar14 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar6,&local_418);
LAB_14e53c5fe:
        pTVar15 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeActorFactoryNode>
                            ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                             local_448,this,(pmf_7f69798c)0x14e53a530);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar14->AllocatorInstance).Data;
        if ((pTVar3 <= pTVar15) && (pTVar15 < pTVar3 + pTVar14->ArrayMax)) {
          local_4b0 = (longlong)pTVar14->ArrayNum;
          local_4a8 = 0x18;
          local_4c8 = pTVar15;
          local_4c0 = pTVar3;
          local_4b8 = (longlong)pTVar14->ArrayMax;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = pTVar14->ArrayNum;
        if (iVar7 == pTVar14->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
        }
        pTVar14->ArrayNum = iVar7 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar14->AllocatorInstance).Data + (longlong)iVar7 * 0x18),pTVar15);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_448,
                   (FWriteAccessScope *)&local_308);
        if ((local_438 != 0) && (local_440.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_440.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_440,0,0,0x10);
          local_438 = 0;
        }
        if (local_308.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
        }
        if (local_440.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_440.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_448);
        local_410 = Z_Construct_UClass_USceneComponent_NoRegister();
        uVar6 = ((uint)((ulonglong)local_410 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_410 >> 4))
                * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = uVar6 >> 0x10 ^ uVar6;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar16 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar16 = &this->_padding_;
          }
          iVar7 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar6) * 4);
          if (iVar7 != -1) {
            lVar12 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar7 * 0x20 + lVar12) == local_410) {
                if ((iVar7 != -1) && (lVar12 = (longlong)iVar7 * 0x20 + lVar12, lVar12 != 0)) {
                  pTVar14 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar12 + 8);
                  goto LAB_14e53c7be;
                }
                break;
              }
              iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar12);
            } while (iVar7 != -1);
          }
        }
        pTVar14 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar6,&local_410);
LAB_14e53c7be:
        local_478 = (undefined1  [8])0x0;
        local_470.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_470.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_478,
                   (FWriteAccessScope *)&local_270);
        local_258 = &local_470;
        puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_470);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &
                     ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar11 = FDelegateHandle::GenerateNewID();
          puVar10[2] = uVar11;
          *puVar10 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar10[3] = 0;
          local_408 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_408);
          puVar10[4] = FillCustomLocalTransformFromAsset;
        }
        if (local_270.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
        }
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar14->AllocatorInstance).Data;
        if ((pTVar3 <= (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_478)
           && ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_478 <
               pTVar3 + pTVar14->ArrayMax)) {
          local_4b0 = (longlong)pTVar14->ArrayNum;
          local_4a8 = 0x18;
          local_4c8 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_478;
          local_4c0 = pTVar3;
          local_4b8 = (longlong)pTVar14->ArrayMax;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = pTVar14->ArrayNum;
        if (iVar7 == pTVar14->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
        }
        lVar12 = (longlong)iVar7;
        pTVar14->ArrayNum = iVar7 + 1;
        pFVar2 = (pTVar14->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar12 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_478,
                   (FWriteAccessScope *)&local_2f0);
        if (*(void **)(pFVar2 + lVar12 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar12 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar12 * 0x18 + 8) =
             local_470.DelegateAllocator;
        local_470.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar12 * 0x18 + 0x10) = local_470.DelegateSize;
        local_470.DelegateSize = 0;
        if (local_2f0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f0.Accessor,&local_2f0);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_478,
                   (FWriteAccessScope *)&local_2d8);
        if ((local_470.DelegateSize != 0) &&
           (local_470.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_470.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_470,0,0,0x10);
          local_470.DelegateSize = 0;
        }
        if (local_2d8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d8.Accessor,&local_2d8);
        }
        if (local_470.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_470.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_478);
        goto LAB_14e53c9e6;
      }
      ::FString::FString(&local_1c0,&(this->Macro_CustomLocalTransformKey).Key);
      pFVar9 = ::FString::FString(&local_140,&local_368);
      UE::Interchange::LogAttributeStorageErrors(EVar13,pFVar9,(FAttributeKey *)&local_1c0);
    }
    if (local_3c0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e53c9e6:
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  pFVar9 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_200);
  ::FString::ConcatFC(&local_358,pFVar9,L".GetComponentVisibility");
  if (local_200[0] != (void *)0x0) {
    FMemory::Free(local_200[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomComponentVisibilityKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar1,&local_3a8,&this->Macro_CustomComponentVisibilityKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_3a8);
    if (bVar5) {
      EVar13 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&local_3a8,&local_498);
      if ((EVar13 & Operation_Success) != None) {
        if (local_3a8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Key.Key.Data.AllocatorInstance.Data);
        }
        local_400 = Z_Construct_UClass_USceneComponent_NoRegister();
        uVar6 = ((uint)((ulonglong)local_400 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_400 >> 4))
                * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = uVar6 >> 0x10 ^ uVar6;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar16 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar16 = &this->_padding_;
          }
          iVar7 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar6) * 4);
          if (iVar7 != -1) {
            lVar12 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar7 * 0x20 + lVar12) == local_400) {
                if ((iVar7 != -1) && (lVar12 = (longlong)iVar7 * 0x20 + lVar12, lVar12 != 0)) {
                  pTVar14 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar12 + 8);
                  goto LAB_14e53cbf0;
                }
                break;
              }
              iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar12);
            } while (iVar7 != -1);
          }
        }
        pTVar14 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar6,&local_400);
LAB_14e53cbf0:
        local_460 = (undefined1  [8])0x0;
        local_458.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_458.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_460,
                   (FWriteAccessScope *)&local_250);
        local_238 = &local_458;
        puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_458);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &
                     ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar11 = FDelegateHandle::GenerateNewID();
          puVar10[2] = uVar11;
          *puVar10 = &
                     ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar10[3] = 0;
          local_3f8 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_3f8);
          puVar10[4] = ApplyCustomComponentVisibilityToAsset;
        }
        if (local_250.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_250.Accessor,&local_250);
        }
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar14->AllocatorInstance).Data;
        if ((pTVar3 <= (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_460)
           && ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_460 <
               pTVar3 + pTVar14->ArrayMax)) {
          local_4b0 = (longlong)pTVar14->ArrayNum;
          local_4a8 = 0x18;
          local_4c8 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_460;
          local_4c0 = pTVar3;
          local_4b8 = (longlong)pTVar14->ArrayMax;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = pTVar14->ArrayNum;
        if (iVar7 == pTVar14->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
        }
        lVar12 = (longlong)iVar7;
        pTVar14->ArrayNum = iVar7 + 1;
        pFVar2 = (pTVar14->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + lVar12 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + lVar12 * 0x18 + 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_460,
                   (FWriteAccessScope *)&local_2c0);
        if (*(void **)(pFVar2 + lVar12 * 0x18 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar2 + lVar12 * 0x18 + 8));
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar12 * 0x18 + 8) =
             local_458.DelegateAllocator;
        local_458.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar2 + lVar12 * 0x18 + 0x10) = local_458.DelegateSize;
        local_458.DelegateSize = 0;
        if (local_2c0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c0.Accessor,&local_2c0);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_460,
                   (FWriteAccessScope *)&local_2a8);
        if ((local_458.DelegateSize != 0) &&
           (local_458.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_458.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_458,0,0,0x10);
          local_458.DelegateSize = 0;
        }
        if (local_2a8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a8.Accessor,&local_2a8);
        }
        if (local_458.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_458.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_460);
        local_3f0 = Z_Construct_UClass_USceneComponent_NoRegister();
        uVar6 = ((uint)((ulonglong)local_3f0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_3f0 >> 4))
                * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = uVar6 >> 0x10 ^ uVar6;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar16 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar16 = &this->_padding_;
          }
          iVar7 = *(int *)((longlong)plVar16 + (ulonglong)((int)this->_padding_ - 1U & uVar6) * 4);
          if (iVar7 != -1) {
            lVar12 = this->_padding_;
            do {
              if (*(UClass **)((longlong)iVar7 * 0x20 + lVar12) == local_3f0) {
                if ((iVar7 != -1) && (lVar12 = (longlong)iVar7 * 0x20 + lVar12, lVar12 != 0)) {
                  pTVar14 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                             *)(lVar12 + 8);
                  goto LAB_14e53cea3;
                }
                break;
              }
              iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar12);
            } while (iVar7 != -1);
          }
        }
        pTVar14 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<UClass_*>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar6,&local_3f0);
LAB_14e53cea3:
        pTVar15 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeActorFactoryNode>
                            (&local_198,this,(pmf_12c8aeb5)0x14e54ed30);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar14->AllocatorInstance).Data;
        if ((pTVar3 <= pTVar15) && (pTVar15 < pTVar3 + pTVar14->ArrayMax)) {
          local_4b0 = (longlong)pTVar14->ArrayNum;
          local_4a8 = 0x18;
          local_4c8 = pTVar15;
          local_4c0 = pTVar3;
          local_4b8 = (longlong)pTVar14->ArrayMax;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = pTVar14->ArrayNum;
        if (iVar7 == pTVar14->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
        }
        pTVar14->ArrayNum = iVar7 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar14->AllocatorInstance).Data + (longlong)iVar7 * 0x18),pTVar15);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_198);
        goto LAB_14e53cf5c;
      }
      ::FString::FString(&local_1f0,&(this->Macro_CustomComponentVisibilityKey).Key);
      pFVar9 = ::FString::FString(&local_120,&local_358);
      UE::Interchange::LogAttributeStorageErrors(EVar13,pFVar9,(FAttributeKey *)&local_1f0);
    }
    if (local_3a8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e53cf5c:
  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.Data.AllocatorInstance.Data);
  }
  pFVar9 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_1e0);
  ::FString::ConcatFC(&local_348,pFVar9,L".GetActorVisibility");
  if (local_1e0[0] != (void *)0x0) {
    FMemory::Free(local_1e0[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (FAttributeStorage *)param_1->_padding_;
  bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar1,&this->Macro_CustomActorVisibilityKey);
  if (bVar5) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar1,&local_390,&this->Macro_CustomActorVisibilityKey);
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_390);
    if (bVar5) {
      EVar13 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                         (&local_390,local_497);
      if ((EVar13 & Operation_Success) != None) {
        if (local_390.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_390.Key.Key.Data.AllocatorInstance.Data);
        }
        local_3e8 = Z_Construct_UClass_USceneComponent_NoRegister();
        uVar6 = ((uint)((ulonglong)local_3e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_3e8 >> 4))
                * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        pTVar14 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar6 >> 0x10 ^ uVar6,&local_3e8);
        pTVar15 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeActorFactoryNode>
                            (&local_180,this,(pmf_7f69798c)0x14e539cb0);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar14->AllocatorInstance).Data;
        if ((pTVar3 <= pTVar15) && (pTVar15 < pTVar3 + pTVar14->ArrayMax)) {
          local_4b0 = (longlong)pTVar14->ArrayNum;
          local_4a8 = 0x18;
          local_4c8 = pTVar15;
          local_4c0 = pTVar3;
          local_4b8 = (longlong)pTVar14->ArrayMax;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = pTVar14->ArrayNum;
        if (iVar7 == pTVar14->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
        }
        pTVar14->ArrayNum = iVar7 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar14->AllocatorInstance).Data + (longlong)iVar7 * 0x18),pTVar15);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_180);
        local_3e0 = Z_Construct_UClass_USceneComponent_NoRegister();
        uVar6 = ((uint)((ulonglong)local_3e0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_3e0 >> 4))
                * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        pTVar14 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*>
                            ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->_padding_,uVar6 >> 0x10 ^ uVar6,&local_3e0);
        pTVar15 = TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
                  CreateUObject<UInterchangeActorFactoryNode>
                            (&local_168,this,(pmf_12c8aeb5)0x14e54ec00);
        pTVar3 = (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                 (pTVar14->AllocatorInstance).Data;
        if ((pTVar3 <= pTVar15) && (pTVar15 < pTVar3 + pTVar14->ArrayMax)) {
          local_4b0 = (longlong)pTVar14->ArrayNum;
          local_4a8 = 0x18;
          local_4c8 = pTVar15;
          local_4c0 = pTVar3;
          local_4b8 = (longlong)pTVar14->ArrayMax;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = pTVar14->ArrayNum;
        if (iVar7 == pTVar14->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
        }
        pTVar14->ArrayNum = iVar7 + 1;
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
        TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                   ((pTVar14->AllocatorInstance).Data + (longlong)iVar7 * 0x18),pTVar15);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_168);
        goto LAB_14e53d2c7;
      }
      ::FString::FString(&local_1d0,&(this->Macro_CustomActorVisibilityKey).Key);
      pFVar9 = ::FString::FString(&local_150,&local_348);
      UE::Interchange::LogAttributeStorageErrors(EVar13,pFVar9,(FAttributeKey *)&local_1d0);
    }
    if (local_390.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e53d2c7:
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  return;
}

// FillCustomActorVisibilityFromAsset @ 14e54ec00

bool __thiscall
UInterchangeActorFactoryNode::FillCustomActorVisibilityFromAsset
          (UInterchangeActorFactoryNode *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      param_1 = *(UObject **)&param_1[4].field_0x8;
      goto LAB_14e54ec70;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14e54ec70;
  }
  param_1 = (UObject *)0x0;
LAB_14e54ec70:
  if (param_1 != (UObject *)0x0) {
    bVar2 = SetCustomActorVisibility(this,(bool)((byte)~param_1[2].field_0x8 >> 7),false);
    return bVar2;
  }
  return false;
}

// FillCustomComponentVisibilityFromAsset @ 14e54ed30

bool __thiscall
UInterchangeActorFactoryNode::FillCustomComponentVisibilityFromAsset
          (UInterchangeActorFactoryNode *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      bVar2 = SetCustomComponentVisibility(this,(bool)((byte)param_1[10].field_0x18 >> 5 & 1),false)
      ;
      return bVar2;
    }
  }
  return false;
}

// FillCustomGlobalTransformFromAsset @ 14e54f000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UInterchangeActorFactoryNode::FillCustomGlobalTransformFromAsset
          (UInterchangeActorFactoryNode *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14e54f04f;
  }
  param_1 = (UObject *)0x0;
LAB_14e54f04f:
  if (param_1 == (UObject *)0x0) {
    bVar2 = false;
  }
  else {
    local_78.Rotation.XY.m128d_f64[0] = *(double *)&param_1[0xc].field_0x10;
    local_78.Rotation.XY.m128d_f64[1] = *(double *)&param_1[0xc].field_0x18;
    local_78.Rotation.ZW.m128d_f64[0] = *(double *)&param_1[0xc].field_0x20;
    local_78.Rotation.ZW.m128d_f64[1] = *(double *)(param_1 + 0xd);
    local_78.Translation.XY.m128d_f64[0] = *(double *)&param_1[0xd].field_0x8;
    local_78.Translation.XY.m128d_f64[1] = *(double *)&param_1[0xd].field_0x10;
    local_78.Translation.ZW.m128d_f64[0] = *(double *)&param_1[0xd].field_0x18;
    local_78.Translation.ZW.m128d_f64[1] = *(double *)&param_1[0xd].field_0x20;
    local_78.Scale3D.XY.m128d_f64[0] = *(double *)(param_1 + 0xe);
    local_78.Scale3D.XY.m128d_f64[1] = *(double *)&param_1[0xe].field_0x8;
    local_78.Scale3D.ZW.m128d_f64[0] = *(double *)&param_1[0xe].field_0x10;
    local_78.Scale3D.ZW.m128d_f64[1] = *(double *)&param_1[0xe].field_0x18;
    bVar2 = SetCustomGlobalTransform(this,&local_78,false);
  }
  return bVar2;
}

// FillCustomLocalTransformFromAsset @ 14e54f0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UInterchangeActorFactoryNode::FillCustomLocalTransformFromAsset
          (UInterchangeActorFactoryNode *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14e54f12f;
  }
  param_1 = (UObject *)0x0;
LAB_14e54f12f:
  if ((USceneComponent *)param_1 == (USceneComponent *)0x0) {
    bVar2 = false;
  }
  else {
    USceneComponent::GetRelativeTransform((USceneComponent *)param_1,&local_78);
    bVar2 = SetCustomLocalTransform(this,&local_78,false);
  }
  return bVar2;
}

// GetComponentUids @ 14e550440

void __thiscall
UInterchangeActorFactoryNode::GetComponentUids
          (UInterchangeActorFactoryNode *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems(&this->ComponentUids,param_1);
  return;
}

// GetCustomActorClassName @ 14e550600

bool __thiscall
UInterchangeActorFactoryNode::GetCustomActorClassName
          (UInterchangeActorFactoryNode *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetActorClassName");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<FString>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomActorClassNameKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomActorVisibility @ 14e550710

bool __thiscall
UInterchangeActorFactoryNode::GetCustomActorVisibility
          (UInterchangeActorFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetActorVisibility");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomActorVisibilityKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomComponentVisibility @ 14e551960

bool __thiscall
UInterchangeActorFactoryNode::GetCustomComponentVisibility
          (UInterchangeActorFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetComponentVisibility");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomComponentVisibilityKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomGlobalTransform @ 14e552e10

bool __thiscall
UInterchangeActorFactoryNode::GetCustomGlobalTransform
          (UInterchangeActorFactoryNode *this,TTransform<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetGlobalTransform");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<UE::Math::TTransform<double>_>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomGlobalTransformKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomLocalTransform @ 14e554d10

bool __thiscall
UInterchangeActorFactoryNode::GetCustomLocalTransform
          (UInterchangeActorFactoryNode *this,TTransform<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetLocalTransform");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<UE::Math::TTransform<double>_>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomLocalTransformKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomMobility @ 14e5551e0

bool __thiscall
UInterchangeActorFactoryNode::GetCustomMobility(UInterchangeActorFactoryNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetMobility");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<unsigned_char>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomMobilityKey,&local_28,
                     param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetLayerNames @ 14e5582b0

void __thiscall
UInterchangeActorFactoryNode::GetLayerNames
          (UInterchangeActorFactoryNode *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems(&this->LayerNames,param_1);
  return;
}

// GetObjectClass @ 14e558b50

UClass * __thiscall UInterchangeActorFactoryNode::GetObjectClass(UInterchangeActorFactoryNode *this)

{
  FAttributeKey *pFVar1;
  FAttributeStorage *this_00;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  UClass *pUVar5;
  EAttributeStorageResult EVar6;
  size_t sVar7;
  UClass *pUVar8;
  int iVar9;
  FString local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TAttributeHandle<FString,void> local_78;
  FString local_60;
  void *local_50 [2];
  FString local_40;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  iVar9 = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_50);
  ::FString::ConcatFC(&local_60,pFVar4,L".GetActorClassName");
  if (local_50[0] != (void *)0x0) {
    FMemory::Free(local_50[0]);
  }
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UClass *)(*pcVar2)();
    return pUVar5;
  }
  pFVar1 = &this->Macro_CustomActorClassNameKey;
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,pFVar1);
  if (bVar3) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FString,void>(this_00,&local_78,pFVar1);
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::IsValid(&local_78);
    if (bVar3) {
      EVar6 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::Get
                        (&local_78,&local_98);
      if ((EVar6 & Operation_Success) != None) {
        if (local_78.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
        goto LAB_14e558c83;
      }
      ::FString::FString(&local_40,&pFVar1->Key);
      pFVar4 = ::FString::FString(&local_18,&local_60);
      UE::Interchange::LogAttributeStorageErrors(EVar6,pFVar4,(FAttributeKey *)&local_40);
    }
    if (local_78.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
LAB_14e558c83:
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    if (local_98.Data.ArrayNum == 0) {
      local_88 = (FScriptContainerElement *)0x15060d16c;
LAB_14e558cb7:
      sVar7 = wcslen((wchar_t *)local_88);
      iVar9 = (int)sVar7;
    }
    else {
      local_88 = local_98.Data.AllocatorInstance.Data;
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14e558cb7;
    }
    iStack_80 = iVar9;
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    local_28._12_4_ = uStack_7c;
    local_28.Size = iStack_80;
    local_28.DataPtr = (wchar_t *)local_88;
    pUVar5 = (UClass *)StaticFindObject(pUVar5,(UObject *)0x0,&local_28,None);
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar8 != (UClass *)0x0) {
      iVar9 = (int)pUVar8->_padding_;
      if (((int)pUVar5->_padding_ < iVar9) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar9 * 8) !=
          &pUVar8->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_14e558d26;
    }
  }
  pUVar5 = Z_Construct_UClass_AActor_NoRegister();
LAB_14e558d26:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return pUVar5;
}

// GetPrivateStaticClass @ 14e559c50

UClass * __cdecl UInterchangeActorFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeActorFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeActorFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeActorFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeActorFactoryNode,0x280,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeActorFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeActorFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeActorFactoryNode.InnerSingleton;
}

// GetTags @ 14e55d400

void __thiscall
UInterchangeActorFactoryNode::GetTags
          (UInterchangeActorFactoryNode *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems(&this->Tags,param_1);
  return;
}

// OnRestoreAllCustomAttributeDelegates @ 14e55eae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeActorFactoryNode::OnRestoreAllCustomAttributeDelegates
          (UInterchangeActorFactoryNode *this)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined1 auStack_b8 [32];
  bool local_98 [16];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  iVar1 = (this->Macro_CustomGlobalTransformKey).Key.Data.ArrayNum;
  pwVar6 = L"";
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(this->Macro_CustomGlobalTransformKey).Key.Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     &this->_padding_,uVar3,&(this->Macro_CustomGlobalTransformKey).Key);
  if (iVar4 != -1) {
    local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_88.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_88.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_88.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_88.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_88.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_88.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    bVar2 = GetCustomGlobalTransform(this,&local_88);
    if (bVar2) {
      SetCustomGlobalTransform(this,&local_88,true);
    }
  }
  iVar1 = (this->Macro_CustomLocalTransformKey).Key.Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(this->Macro_CustomLocalTransformKey).Key.Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     &this->_padding_,uVar3,&(this->Macro_CustomLocalTransformKey).Key);
  if (iVar4 != -1) {
    local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_88.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_88.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_88.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_88.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_88.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_88.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    bVar2 = GetCustomLocalTransform(this,&local_88);
    if (bVar2) {
      SetCustomLocalTransform(this,&local_88,true);
    }
  }
  iVar1 = (this->Macro_CustomComponentVisibilityKey).Key.Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(this->Macro_CustomComponentVisibilityKey).Key.Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     &this->_padding_,uVar3,&(this->Macro_CustomComponentVisibilityKey).Key);
  if ((iVar4 != -1) && (bVar2 = GetCustomComponentVisibility(this,local_98), bVar2)) {
    SetCustomComponentVisibility(this,local_98[0],true);
  }
  iVar1 = (this->Macro_CustomActorVisibilityKey).Key.Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(this->Macro_CustomActorVisibilityKey).Key.Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     &this->_padding_,uVar3,&(this->Macro_CustomActorVisibilityKey).Key);
  if ((iVar4 != -1) && (bVar2 = GetCustomActorVisibility(this,local_98), bVar2)) {
    SetCustomActorVisibility(this,local_98[0],true);
  }
  return;
}

// RemoveLayerName @ 14e55f880

bool __thiscall
UInterchangeActorFactoryNode::RemoveLayerName(UInterchangeActorFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem(&this->LayerNames,param_1);
  return bVar1;
}

// RemoveTag @ 14e55f9a0

bool __thiscall
UInterchangeActorFactoryNode::RemoveTag(UInterchangeActorFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem(&this->Tags,param_1);
  return bVar1;
}

// SetCustomActorClassName @ 14e560be0

bool __thiscall
UInterchangeActorFactoryNode::SetCustomActorClassName
          (UInterchangeActorFactoryNode *this,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetActorClassName");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomActorClassNameKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomActorClassNameKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomActorVisibility @ 14e560d30

bool __thiscall
UInterchangeActorFactoryNode::SetCustomActorVisibility
          (UInterchangeActorFactoryNode *this,bool param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  UClass *local_res8;
  bool local_res10 [16];
  UInterchangeActorFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_158;
  FDelegateAllocation local_150;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_140;
  FDelegateAllocation local_138;
  FString local_128;
  UInterchangeActorFactoryNode *local_118;
  FString local_110;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDelegateAllocation *local_88;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  void *local_60 [2];
  FString local_50;
  
  local_res10[0] = param_1;
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_60);
  ::FString::ConcatFC(&local_110,pFVar6,L".SetActorVisibility");
  if (local_60[0] != (void *)0x0) {
    FMemory::Free(local_60[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomActorVisibilityKey,
                     local_res10,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_50,&(this->Macro_CustomActorVisibilityKey).Key);
    _Src.Data = local_110.Data.AllocatorInstance.Data;
    bVar3 = false;
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_110.Data.ArrayNum == 0) {
      local_128.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_110.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
                 local_110.Data.ArrayNum,&local_128.Data.ArrayMax);
      memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_110.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar7,&local_128,(FAttributeKey *)&local_50);
    goto LAB_14e561434;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e560e94:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeActorFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeActorFactoryNode.cpp"
                         ,0x46,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar5 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar9->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14e560e94;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomActorVisibilityKey).Key);
    local_res8 = Z_Construct_UClass_USceneComponent_NoRegister();
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar14 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar14 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          plVar14 = (longlong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*plVar14 == local_res8) {
            if (plVar14 != (longlong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(plVar14 + 1);
              goto LAB_14e560f70;
            }
            break;
          }
          iVar5 = (int)plVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*_const_&>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e560f70:
    local_158.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_150.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_150.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_158,(FWriteAccessScope *)&local_a0);
    local_88 = &local_150;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_150);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
      puVar11[4] = ApplyCustomActorVisibilityToAsset;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_158) &&
       ((FScriptContainerElement *)&local_158 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_158,(FWriteAccessScope *)&local_100);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_150.DelegateAllocator;
    local_150.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_150.DelegateSize;
    local_150.DelegateSize = 0;
    if (local_100.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_158,(FWriteAccessScope *)&local_e8);
    if ((local_150.DelegateSize != 0) &&
       (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_150.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_150,0,0,0x10);
      local_150.DelegateSize = 0;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    if (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_150.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_158.AccessDetector);
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar14 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar14 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          plVar14 = (longlong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*plVar14 == local_res8) {
            if (plVar14 != (longlong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(plVar14 + 1);
              goto LAB_14e561221;
            }
            break;
          }
          iVar5 = (int)plVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*_const_&>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e561221:
    local_140.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_138.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_138.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_140,(FWriteAccessScope *)&local_80);
    local_68 = &local_138;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_138);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_118 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_118);
      puVar11[4] = FillCustomActorVisibilityFromAsset;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_140) &&
       ((FScriptContainerElement *)&local_140 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_140,(FWriteAccessScope *)&local_d0);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_138.DelegateAllocator;
    local_138.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_138.DelegateSize;
    local_138.DelegateSize = 0;
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_140,(FWriteAccessScope *)&local_b8);
    if ((local_138.DelegateSize != 0) &&
       (local_138.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_138.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_138,0,0,0x10);
      local_138.DelegateSize = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (local_138.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_138.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_140.AccessDetector);
  }
  bVar3 = true;
LAB_14e561434:
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomComponentVisibility @ 14e564e60

bool __thiscall
UInterchangeActorFactoryNode::SetCustomComponentVisibility
          (UInterchangeActorFactoryNode *this,bool param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  UClass *local_res8;
  bool local_res10 [16];
  UInterchangeActorFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_158;
  FDelegateAllocation local_150;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_140;
  FDelegateAllocation local_138;
  FString local_128;
  UInterchangeActorFactoryNode *local_118;
  FString local_110;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDelegateAllocation *local_88;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  void *local_60 [2];
  FString local_50;
  
  local_res10[0] = param_1;
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_60);
  ::FString::ConcatFC(&local_110,pFVar6,L".SetComponentVisibility");
  if (local_60[0] != (void *)0x0) {
    FMemory::Free(local_60[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomComponentVisibilityKey,
                     local_res10,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_50,&(this->Macro_CustomComponentVisibilityKey).Key);
    _Src.Data = local_110.Data.AllocatorInstance.Data;
    bVar3 = false;
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_110.Data.ArrayNum == 0) {
      local_128.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_110.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
                 local_110.Data.ArrayNum,&local_128.Data.ArrayMax);
      memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_110.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar7,&local_128,(FAttributeKey *)&local_50);
    goto LAB_14e565564;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e564fc4:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeActorFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeActorFactoryNode.cpp"
                         ,0x3c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar5 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar9->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14e564fc4;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomComponentVisibilityKey).Key);
    local_res8 = Z_Construct_UClass_USceneComponent_NoRegister();
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar14 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar14 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          plVar14 = (longlong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*plVar14 == local_res8) {
            if (plVar14 != (longlong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(plVar14 + 1);
              goto LAB_14e5650a0;
            }
            break;
          }
          iVar5 = (int)plVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*_const_&>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e5650a0:
    local_158.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_150.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_150.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_158,(FWriteAccessScope *)&local_a0);
    local_88 = &local_150;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_150);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
      puVar11[4] = ApplyCustomComponentVisibilityToAsset;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_158) &&
       ((FScriptContainerElement *)&local_158 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_158,(FWriteAccessScope *)&local_100);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_150.DelegateAllocator;
    local_150.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_150.DelegateSize;
    local_150.DelegateSize = 0;
    if (local_100.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_158,(FWriteAccessScope *)&local_e8);
    if ((local_150.DelegateSize != 0) &&
       (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_150.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_150,0,0,0x10);
      local_150.DelegateSize = 0;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    if (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_150.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_158.AccessDetector);
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar14 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar14 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          plVar14 = (longlong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*plVar14 == local_res8) {
            if (plVar14 != (longlong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(plVar14 + 1);
              goto LAB_14e565351;
            }
            break;
          }
          iVar5 = (int)plVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*_const_&>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e565351:
    local_140.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_138.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_138.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_140,(FWriteAccessScope *)&local_80);
    local_68 = &local_138;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_138);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_118 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_118);
      puVar11[4] = FillCustomComponentVisibilityFromAsset;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_140) &&
       ((FScriptContainerElement *)&local_140 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_140,(FWriteAccessScope *)&local_d0);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_138.DelegateAllocator;
    local_138.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_138.DelegateSize;
    local_138.DelegateSize = 0;
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_140,(FWriteAccessScope *)&local_b8);
    if ((local_138.DelegateSize != 0) &&
       (local_138.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_138.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_138,0,0,0x10);
      local_138.DelegateSize = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (local_138.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_138.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_140.AccessDetector);
  }
  bVar3 = true;
LAB_14e565564:
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomGlobalTransform @ 14e56c9a0

bool __thiscall
UInterchangeActorFactoryNode::SetCustomGlobalTransform
          (UInterchangeActorFactoryNode *this,TTransform<double> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  UClass *local_res8;
  UInterchangeActorFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UInterchangeActorFactoryNode *local_108;
  FString local_100;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  void *local_50 [2];
  FString local_40;
  
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_50);
  ::FString::ConcatFC(&local_100,pFVar6,L".SetGlobalTransform");
  if (local_50[0] != (void *)0x0) {
    FMemory::Free(local_50[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TTransform<double>,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomGlobalTransformKey,
                     param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_40,&(this->Macro_CustomGlobalTransformKey).Key);
    _Src.Data = local_100.Data.AllocatorInstance.Data;
    bVar3 = false;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_100.Data.ArrayNum == 0) {
      local_118.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_100.Data.ArrayNum,0,(ForAnyElementType *)&local_118,
                 local_100.Data.ArrayNum,&local_118.Data.ArrayMax);
      memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_100.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar7,&local_118,(FAttributeKey *)&local_40);
    goto LAB_14e56d0a4;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e56cb00:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeActorFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeActorFactoryNode.cpp"
                         ,0x28,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar5 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar9->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14e56cb00;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomGlobalTransformKey).Key);
    local_res8 = Z_Construct_UClass_USceneComponent_NoRegister();
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar14 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar14 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          plVar14 = (longlong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*plVar14 == local_res8) {
            if (plVar14 != (longlong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(plVar14 + 1);
              goto LAB_14e56cbe0;
            }
            break;
          }
          iVar5 = (int)plVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*_const_&>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e56cbe0:
    local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_90);
    local_78 = &local_140;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_140);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
      puVar11[4] = ApplyCustomGlobalTransformToAsset;
    }
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_148) &&
       ((FScriptContainerElement *)&local_148 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_f0);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_140.DelegateAllocator;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_140.DelegateSize;
    local_140.DelegateSize = 0;
    if (local_f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_d8);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar14 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar14 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          plVar14 = (longlong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*plVar14 == local_res8) {
            if (plVar14 != (longlong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(plVar14 + 1);
              goto LAB_14e56ce91;
            }
            break;
          }
          iVar5 = (int)plVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*_const_&>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e56ce91:
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_70);
    local_58 = &local_128;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_128);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_108 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_108);
      puVar11[4] = FillCustomGlobalTransformFromAsset;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_130) &&
       ((FScriptContainerElement *)&local_130 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_c0);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_128.DelegateAllocator;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_128.DelegateSize;
    local_128.DelegateSize = 0;
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_a8);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  }
  bVar3 = true;
LAB_14e56d0a4:
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomLocalTransform @ 14e570070

bool __thiscall
UInterchangeActorFactoryNode::SetCustomLocalTransform
          (UInterchangeActorFactoryNode *this,TTransform<double> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  UClass *local_res8;
  UInterchangeActorFactoryNode *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  UInterchangeActorFactoryNode *local_108;
  FString local_100;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  void *local_50 [2];
  FString local_40;
  
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_50);
  ::FString::ConcatFC(&local_100,pFVar6,L".SetLocalTransform");
  if (local_50[0] != (void *)0x0) {
    FMemory::Free(local_50[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TTransform<double>,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomLocalTransformKey,
                     param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_40,&(this->Macro_CustomLocalTransformKey).Key);
    _Src.Data = local_100.Data.AllocatorInstance.Data;
    bVar3 = false;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_100.Data.ArrayNum == 0) {
      local_118.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_100.Data.ArrayNum,0,(ForAnyElementType *)&local_118,
                 local_100.Data.ArrayNum,&local_118.Data.ArrayMax);
      memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_100.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar7,&local_118,(FAttributeKey *)&local_40);
    goto LAB_14e570774;
  }
  if (param_2) {
    pUVar8 = StaticClass();
    pUVar9 = Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14e5701d0:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UInterchangeActorFactoryNode::StaticClass()->IsChildOf<UInterchangeFactoryBaseNode>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Private\\InterchangeActorFactoryNode.cpp"
                         ,0x32,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar5 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar9->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14e5701d0;
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem
              ((TArrayAttributeHelper<FString> *)&this->_padding_,
               &(this->Macro_CustomLocalTransformKey).Key);
    local_res8 = Z_Construct_UClass_USceneComponent_NoRegister();
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar14 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar14 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          plVar14 = (longlong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*plVar14 == local_res8) {
            if (plVar14 != (longlong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(plVar14 + 1);
              goto LAB_14e5702b0;
            }
            break;
          }
          iVar5 = (int)plVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*_const_&>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e5702b0:
    local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_90);
    local_78 = &local_140;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_140);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
      puVar11[4] = ApplyCustomLocalTransformToAsset;
    }
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_148) &&
       ((FScriptContainerElement *)&local_148 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_f0);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_140.DelegateAllocator;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_140.DelegateSize;
    local_140.DelegateSize = 0;
    if (local_f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_d8);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
    uVar15 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar14 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar14 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar14 + (ulonglong)((int)this->_padding_ - 1U & uVar15) * 4);
      if (iVar5 != -1) {
        do {
          plVar14 = (longlong *)((longlong)iVar5 * 0x20 + this->_padding_);
          if ((UClass *)*plVar14 == local_res8) {
            if (plVar14 != (longlong *)0x0) {
              pTVar10 = (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                         *)(plVar14 + 1);
              goto LAB_14e570561;
            }
            break;
          }
          iVar5 = (int)plVar14[3];
        } while (iVar5 != -1);
      }
    }
    pTVar10 = TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
              ::EmplaceByHash<UClass_*_const_&>
                        ((TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar15,&local_res8);
LAB_14e570561:
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_70);
    local_58 = &local_128;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_128);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_108 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_108);
      puVar11[4] = FillCustomLocalTransformFromAsset;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_130) &&
       ((FScriptContainerElement *)&local_130 < pFVar1 + (longlong)pTVar10->ArrayMax * 0x18)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = pTVar10->ArrayNum;
    if (iVar5 == pTVar10->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    lVar13 = (longlong)iVar5;
    pTVar10->ArrayNum = iVar5 + 1;
    pFVar1 = (pTVar10->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18) = 0;
    *(undefined8 *)(pFVar1 + lVar13 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar1 + lVar13 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_c0);
    if (*(void **)(pFVar1 + lVar13 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar1 + lVar13 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar1 + lVar13 * 0x18 + 8) =
         local_128.DelegateAllocator;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar1 + lVar13 * 0x18 + 0x10) = local_128.DelegateSize;
    local_128.DelegateSize = 0;
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_a8);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  }
  bVar3 = true;
LAB_14e570774:
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetCustomMobility @ 14e571c40

bool __thiscall
UInterchangeActorFactoryNode::SetCustomMobility
          (UInterchangeActorFactoryNode *this,uchar *param_1,bool param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined7 in_register_00000081;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)
           (**(code **)(this->_padding_ + 0x2b0))
                     (this,local_28,CONCAT71(in_register_00000081,param_2));
  ::FString::ConcatFC(&local_38,pFVar4,L".SetMobility");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomMobilityKey,param_1,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomMobilityKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// StaticRegisterNativesUInterchangeActorFactoryNode @ 14e57f0d0

void __cdecl UInterchangeActorFactoryNode::StaticRegisterNativesUInterchangeActorFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeActorFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddComponentUid @ 14e582e50

void __cdecl
UInterchangeActorFactoryNode::execAddComponentUid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    ((TArrayAttributeHelper<FString> *)&param_1[0xf].field_0x8,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetComponentUids @ 14e588360

void __cdecl
UInterchangeActorFactoryNode::execGetComponentUids(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems
            ((TArrayAttributeHelper<FString> *)&param_1[0xf].field_0x8,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomActorClassName @ 14e5887e0

void __cdecl
UInterchangeActorFactoryNode::execGetCustomActorClassName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetCustomActorClassName((UInterchangeActorFactoryNode *)param_1,pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomActorVisibility @ 14e588aa0

void __cdecl
UInterchangeActorFactoryNode::execGetCustomActorVisibility
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool *pbVar3;
  bool local_res10 [8];
  
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetCustomActorVisibility((UInterchangeActorFactoryNode *)param_1,pbVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetCustomComponentVisibility @ 14e58c2a0

void __cdecl
UInterchangeActorFactoryNode::execGetCustomComponentVisibility
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool *pbVar3;
  bool local_res10 [8];
  
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetCustomComponentVisibility((UInterchangeActorFactoryNode *)param_1,pbVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetCustomGlobalTransform @ 14e58f480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeActorFactoryNode::execGetCustomGlobalTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  TTransform<double> *pTVar15;
  undefined1 auStack_a8 [32];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_88.Rotation.XY.m128d_f64[1] = (double)fVar5;
  local_88.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_88.Rotation.ZW.m128d_f64[1] = (double)fVar11;
  local_88.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_88.Translation.ZW.m128d_f64[1] = (double)fVar12;
  local_88.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_88.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_88.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_88.Scale3D.ZW.m128d_f64[1] = (double)fVar13;
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar15 = &local_88;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar15 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar14 = GetCustomGlobalTransform((UInterchangeActorFactoryNode *)param_1,pTVar15);
  *(bool *)param_3 = bVar14;
  return;
}

// execGetCustomLocalTransform @ 14e591930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeActorFactoryNode::execGetCustomLocalTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  TTransform<double> *pTVar15;
  undefined1 auStack_a8 [32];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_88.Rotation.XY.m128d_f64[1] = (double)fVar5;
  local_88.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_88.Rotation.ZW.m128d_f64[1] = (double)fVar11;
  local_88.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_88.Translation.ZW.m128d_f64[1] = (double)fVar12;
  local_88.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_88.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_88.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_88.Scale3D.ZW.m128d_f64[1] = (double)fVar13;
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar15 = &local_88;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar15 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar14 = GetCustomLocalTransform((UInterchangeActorFactoryNode *)param_1,pTVar15);
  *(bool *)param_3 = bVar14;
  return;
}

// execGetCustomMobility @ 14e5926a0

void __cdecl
UInterchangeActorFactoryNode::execGetCustomMobility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = '\0';
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
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetMobility");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<unsigned_char>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xd].field_0x8,
                     &local_38,puVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execSetCustomActorClassName @ 14e59ec90

void __cdecl
UInterchangeActorFactoryNode::execSetCustomActorClassName
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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetActorClassName");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xc].field_0x20,
                     &local_48,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)&param_1[0xc].field_0x20);
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

// execSetCustomActorVisibility @ 14e59ee80

void __cdecl
UInterchangeActorFactoryNode::execSetCustomActorVisibility
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomActorVisibility
                    ((UInterchangeActorFactoryNode *)param_1,bVar2,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomComponentVisibility @ 14e5a3b70

void __cdecl
UInterchangeActorFactoryNode::execSetCustomComponentVisibility
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomComponentVisibility
                    ((UInterchangeActorFactoryNode *)param_1,bVar2,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomGlobalTransform @ 14e5a7e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeActorFactoryNode::execSetCustomGlobalTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  TTransform<double> *pTVar15;
  undefined1 auStack_c8 [32];
  int local_a8 [4];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_98.Rotation.XY.m128d_f64[1] = (double)fVar5;
  local_98.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_98.Rotation.ZW.m128d_f64[1] = (double)fVar11;
  local_98.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_98.Translation.ZW.m128d_f64[1] = (double)fVar12;
  local_98.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_98.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_98.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_98.Scale3D.ZW.m128d_f64[1] = (double)fVar13;
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_98.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8[0] = 0;
  pTVar15 = &local_98;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar15 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar14 = SetCustomGlobalTransform
                     ((UInterchangeActorFactoryNode *)param_1,pTVar15,local_a8[0] != 0);
  *(bool *)param_3 = bVar14;
  return;
}

// execSetCustomLocalTransform @ 14e5ab490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeActorFactoryNode::execSetCustomLocalTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  TTransform<double> *pTVar15;
  undefined1 auStack_c8 [32];
  int local_a8 [4];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_98.Rotation.XY.m128d_f64[1] = (double)fVar5;
  local_98.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_98.Rotation.ZW.m128d_f64[1] = (double)fVar11;
  local_98.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_98.Translation.ZW.m128d_f64[1] = (double)fVar12;
  local_98.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_98.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_98.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_98.Scale3D.ZW.m128d_f64[1] = (double)fVar13;
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_98.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8[0] = 0;
  pTVar15 = &local_98;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar15 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar14 = SetCustomLocalTransform((UInterchangeActorFactoryNode *)param_1,pTVar15,local_a8[0] != 0)
  ;
  *(bool *)param_3 = bVar14;
  return;
}

// execSetCustomMobility @ 14e5ac7f0

void __cdecl
UInterchangeActorFactoryNode::execSetCustomMobility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  uchar *puVar7;
  uchar local_res8 [8];
  undefined4 local_res10 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = '\0';
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
  local_res10[0] = 0;
  puVar7 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetMobility");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xd].field_0x8,
                     puVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xd].field_0x8);
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

