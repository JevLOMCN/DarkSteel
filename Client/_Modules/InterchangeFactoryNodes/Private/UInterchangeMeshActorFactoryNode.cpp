// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 28

// StaticClass @ 14e51f020

UClass * __cdecl UInterchangeMeshActorFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMeshActorFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeMeshActorFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeMeshActorFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeMeshActorFactoryNode,0x328,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeMeshActorFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeMeshActorFactoryNode>,local_res8,
               UInterchangeActorFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMeshActorFactoryNode.InnerSingleton;
}

// UInterchangeMeshActorFactoryNode @ 14e5316d0

UInterchangeMeshActorFactoryNode * __thiscall
UInterchangeMeshActorFactoryNode::UInterchangeMeshActorFactoryNode
          (UInterchangeMeshActorFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeActorFactoryNode::UInterchangeActorFactoryNode
            ((UInterchangeActorFactoryNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeMeshActorFactoryNode__6B_;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SlotMaterialDependencies).KeyCountHandle);
  (this->SlotMaterialDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SlotMaterialDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Macro_CustomInstancedAssetFactoryNodeUidKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomInstancedAssetFactoryNodeUidKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomInstancedAssetFactoryNodeUidKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomInstancedAssetFactoryNodeUidKey).Key,
             L"InstancedAssetFactoryNodeUid");
  (this->Macro_CustomAnimationAssetUidToPlayKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAnimationAssetUidToPlayKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAnimationAssetUidToPlayKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomAnimationAssetUidToPlayKey).Key,L"AnimationAssetUidToPlay");
  (this->Macro_CustomGeometricTransformKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomGeometricTransformKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGeometricTransformKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomGeometricTransformKey).Key,L"GeometricTransform");
  return this;
}

// UInterchangeMeshActorFactoryNode @ 14e5317b0

UInterchangeMeshActorFactoryNode * __thiscall
UInterchangeMeshActorFactoryNode::UInterchangeMeshActorFactoryNode
          (UInterchangeMeshActorFactoryNode *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UInterchangeMeshActorFactoryNode *pUVar4;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_28;
  FString local_18;
  
  UInterchangeActorFactoryNode::UInterchangeActorFactoryNode((UInterchangeActorFactoryNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeMeshActorFactoryNode__6B_;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SlotMaterialDependencies).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SlotMaterialDependencies).KeyCountHandle);
  (this->SlotMaterialDependencies).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SlotMaterialDependencies).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Macro_CustomInstancedAssetFactoryNodeUidKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomInstancedAssetFactoryNodeUidKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomInstancedAssetFactoryNodeUidKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomInstancedAssetFactoryNodeUidKey).Key,
             L"InstancedAssetFactoryNodeUid");
  (this->Macro_CustomAnimationAssetUidToPlayKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAnimationAssetUidToPlayKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAnimationAssetUidToPlayKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomAnimationAssetUidToPlayKey).Key,L"AnimationAssetUidToPlay");
  (this->Macro_CustomGeometricTransformKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomGeometricTransformKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGeometricTransformKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomGeometricTransformKey).Key,L"GeometricTransform");
  ::FString::FString(&local_18,L"__SlotMaterialDependencies__");
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UInterchangeMeshActorFactoryNode *)(*pcVar2)();
      return pUVar4;
    }
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  local_28.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  if (local_28.Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UInterchangeMeshActorFactoryNode *)(*pcVar2)();
      return pUVar4;
    }
  }
  UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize
            (&this->SlotMaterialDependencies,&local_28,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UInterchangeMeshActorFactoryNode @ 14e535d00

void __thiscall
UInterchangeMeshActorFactoryNode::~UInterchangeMeshActorFactoryNode
          (UInterchangeMeshActorFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeMeshActorFactoryNode__6B_;
  pFVar1 = (this->Macro_CustomGeometricTransformKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomAnimationAssetUidToPlayKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomInstancedAssetFactoryNodeUidKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Interchange::TMapAttributeHelper<FString,FString>::~TMapAttributeHelper<FString,FString>
            (&this->SlotMaterialDependencies);
  UInterchangeActorFactoryNode::~UInterchangeActorFactoryNode((UInterchangeActorFactoryNode *)this);
  return;
}

// GetCustomAnimationAssetUidToPlay @ 14e550920

bool __thiscall
UInterchangeMeshActorFactoryNode::GetCustomAnimationAssetUidToPlay
          (UInterchangeMeshActorFactoryNode *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetAnimationAssetUidToPlay");
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
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomAnimationAssetUidToPlayKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomGeometricTransform @ 14e552cb0

bool __thiscall
UInterchangeMeshActorFactoryNode::GetCustomGeometricTransform
          (UInterchangeMeshActorFactoryNode *this,TTransform<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetGeometricTransform");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomGeometricTransformKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomInstancedAssetFactoryNodeUid @ 14e554590

bool __thiscall
UInterchangeMeshActorFactoryNode::GetCustomInstancedAssetFactoryNodeUid
          (UInterchangeMeshActorFactoryNode *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetInstancedAssetFactoryNodeUid");
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
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomInstancedAssetFactoryNodeUidKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetPrivateStaticClass @ 14e55ae50

UClass * __cdecl UInterchangeMeshActorFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMeshActorFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeMeshActorFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeMeshActorFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeMeshActorFactoryNode,0x328,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeMeshActorFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeMeshActorFactoryNode>,local_res8,
               UInterchangeActorFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMeshActorFactoryNode.InnerSingleton;
}

// GetSlotMaterialDependencies @ 14e55c840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeMeshActorFactoryNode::GetSlotMaterialDependencies
          (UInterchangeMeshActorFactoryNode *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar1 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            *)UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
                        (&this->SlotMaterialDependencies,
                         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)local_68);
  if ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
       *)param_1 != pTVar1) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_1,pTVar1);
  }
  local_20 = 0;
  if ((void *)local_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_68);
  return;
}

// GetSlotMaterialDependencyUid @ 14e55cee0

bool __thiscall
UInterchangeMeshActorFactoryNode::GetSlotMaterialDependencyUid
          (UInterchangeMeshActorFactoryNode *this,FString *param_1,FString *param_2)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TMapAttributeHelper<FString,FString>::GetValue
                    (&this->SlotMaterialDependencies,param_1,param_2);
  return bVar1;
}

// RemoveSlotMaterialDependencyUid @ 14e55f900

bool __thiscall
UInterchangeMeshActorFactoryNode::RemoveSlotMaterialDependencyUid
          (UInterchangeMeshActorFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
                    (&this->SlotMaterialDependencies,param_1);
  return bVar1;
}

// Serialize @ 14e55fb90

void __thiscall
UInterchangeMeshActorFactoryNode::Serialize
          (UInterchangeMeshActorFactoryNode *this,FArchive *param_1)

{
  UInterchangeBaseNode::Serialize((UInterchangeBaseNode *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) && ((char)this->_padding_ != '\0')) {
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->SlotMaterialDependencies);
  }
  return;
}

// Serialize @ 14e55fbd0

void __thiscall
UInterchangeMeshActorFactoryNode::Serialize
          (UInterchangeMeshActorFactoryNode *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UInterchangeBaseNode::Serialize((UInterchangeBaseNode *)this,pFVar1);
  if (((pFVar1->field_0x28 & 1) != 0) && ((char)this->_padding_ != '\0')) {
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->SlotMaterialDependencies);
  }
  return;
}

// SetCustomAnimationAssetUidToPlay @ 14e561740

bool __thiscall
UInterchangeMeshActorFactoryNode::SetCustomAnimationAssetUidToPlay
          (UInterchangeMeshActorFactoryNode *this,FString *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetAnimationAssetUidToPlay");
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
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomAnimationAssetUidToPlayKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomAnimationAssetUidToPlayKey).Key);
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

// SetCustomGeometricTransform @ 14e56c6e0

bool __thiscall
UInterchangeMeshActorFactoryNode::SetCustomGeometricTransform
          (UInterchangeMeshActorFactoryNode *this,TTransform<double> *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetGeometricTransform");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TTransform<double>,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomGeometricTransformKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomGeometricTransformKey).Key);
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

// SetCustomInstancedAssetFactoryNodeUid @ 14e56f200

bool __thiscall
UInterchangeMeshActorFactoryNode::SetCustomInstancedAssetFactoryNodeUid
          (UInterchangeMeshActorFactoryNode *this,FString *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetInstancedAssetFactoryNodeUid");
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
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomInstancedAssetFactoryNodeUidKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomInstancedAssetFactoryNodeUidKey).Key);
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

// SetSlotMaterialDependencyUid @ 14e57eff0

bool __thiscall
UInterchangeMeshActorFactoryNode::SetSlotMaterialDependencyUid
          (UInterchangeMeshActorFactoryNode *this,FString *param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    (&this->SlotMaterialDependencies,uVar3,param_1,param_2);
  return bVar2;
}

// StaticRegisterNativesUInterchangeMeshActorFactoryNode @ 14e57f640

void __cdecl
UInterchangeMeshActorFactoryNode::StaticRegisterNativesUInterchangeMeshActorFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeMeshActorFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomAnimationAssetUidToPlay @ 14e58a030

void __cdecl
UInterchangeMeshActorFactoryNode::execGetCustomAnimationAssetUidToPlay
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
  ::FString::ConcatFC(&local_28,pFVar4,L".GetAnimationAssetUidToPlay");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x13].field_0x10
                     ,&local_28,pFVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomGeometricTransform @ 14e58f160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeMeshActorFactoryNode::execGetCustomGeometricTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
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
  float fVar14;
  bool bVar15;
  FString *pFVar16;
  TTransform<double> *pTVar17;
  undefined1 auStack_d8 [32];
  FString local_b8;
  void *local_a8 [2];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar13 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98.Rotation.XY.m128d_f64[0] = (double)fVar3;
  local_98.Rotation.XY.m128d_f64[1] = (double)fVar6;
  local_98.Rotation.ZW.m128d_f64[0] = (double)fVar9;
  local_98.Rotation.ZW.m128d_f64[1] = (double)fVar12;
  local_98.Translation.ZW.m128d_f64[0] = (double)fVar10;
  local_98.Translation.ZW.m128d_f64[1] = (double)fVar13;
  local_98.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_98.Translation.XY.m128d_f64[0] = (double)fVar4;
  local_98.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[0] = (double)fVar11;
  local_98.Scale3D.ZW.m128d_f64[1] = (double)fVar14;
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_98.Scale3D.XY.m128d_f64[0] = (double)fVar5;
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar17 = &local_98;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar17 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar16 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_a8);
  ::FString::ConcatFC(&local_b8,pFVar16,L".GetGeometricTransform");
  if (local_a8[0] != (void *)0x0) {
    FMemory::Free(local_a8[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar15 = InterchangePrivateNodeBase::GetCustomAttribute<UE::Math::TTransform<double>_>
                     (*(FAttributeStorage **)(param_1 + 1),
                      (FAttributeKey *)&param_1[0x13].field_0x20,&local_b8,pTVar17);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar15;
  return;
}

// execGetCustomInstancedAssetFactoryNodeUid @ 14e590bf0

void __cdecl
UInterchangeMeshActorFactoryNode::execGetCustomInstancedAssetFactoryNodeUid
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
  ::FString::ConcatFC(&local_28,pFVar4,L".GetInstancedAssetFactoryNodeUid");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x13),
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

// execGetSlotMaterialDependencies @ 14e59a980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeMeshActorFactoryNode::execGetSlotMaterialDependencies
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar3;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar4;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ForElementType<FSetElementId> local_88;
  int local_80;
  undefined1 local_78 [72];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_9c = 0x80;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  pTVar4 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            *)local_c8;
  if ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
       *)param_2->MostRecentPropertyAddress !=
      (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar4 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            *)UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
                        ((TMapAttributeHelper<FString,FString> *)(param_1 + 0x10),
                         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)local_78);
  if (pTVar4 != pTVar3) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              (pTVar4,pTVar3);
  }
  local_30 = 0;
  if ((void *)local_78._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78);
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c8,0,local_c8._8_4_);
  iVar2 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return;
}

// execGetSlotMaterialDependencyUid @ 14e59acb0

void __cdecl
UInterchangeMeshActorFactoryNode::execGetSlotMaterialDependencyUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_28;
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
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::GetValue
                    ((TMapAttributeHelper<FString,FString> *)(param_1 + 0x10),&local_18,pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveSlotMaterialDependencyUid @ 14e59dba0

void __cdecl
UInterchangeMeshActorFactoryNode::execRemoveSlotMaterialDependencyUid
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
                    ((TMapAttributeHelper<FString,FString> *)(param_1 + 0x10),&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomAnimationAssetUidToPlay @ 14e5a0dc0

void __cdecl
UInterchangeMeshActorFactoryNode::execSetCustomAnimationAssetUidToPlay
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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetAnimationAssetUidToPlay");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x13].field_0x10
                     ,&local_48,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)&param_1[0x13].field_0x10);
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

// execSetCustomGeometricTransform @ 14e5a79e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeMeshActorFactoryNode::execSetCustomGeometricTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
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
  float fVar14;
  ForAnyElementType _Src;
  bool bVar15;
  FString *pFVar16;
  EAttributeStorageResult EVar17;
  undefined1 uVar18;
  TTransform<double> *pTVar19;
  undefined1 auStackY_118 [32];
  FString local_d8;
  FString local_c8;
  void *local_b8 [2];
  FString local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar13 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98.Rotation.XY.m128d_f64[0] = (double)fVar3;
  local_98.Rotation.XY.m128d_f64[1] = (double)fVar6;
  local_98.Rotation.ZW.m128d_f64[0] = (double)fVar9;
  local_98.Rotation.ZW.m128d_f64[1] = (double)fVar12;
  local_98.Translation.ZW.m128d_f64[0] = (double)fVar10;
  local_98.Translation.ZW.m128d_f64[1] = (double)fVar13;
  local_98.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_98.Translation.XY.m128d_f64[0] = (double)fVar4;
  local_98.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[0] = (double)fVar11;
  local_98.Scale3D.ZW.m128d_f64[1] = (double)fVar14;
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_98.Scale3D.XY.m128d_f64[0] = (double)fVar5;
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar19 = &local_98;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar19 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar16 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_b8);
  ::FString::ConcatFC(&local_c8,pFVar16,L".SetGeometricTransform");
  if (local_b8[0] != (void *)0x0) {
    FMemory::Free(local_b8[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar17 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TTransform<double>,void>
                     (*(FAttributeStorage **)(param_1 + 1),
                      (FAttributeKey *)&param_1[0x13].field_0x20,pTVar19,None);
  if ((EVar17 & Operation_Success) == None) {
    ::FString::FString(&local_a8,(FString *)&param_1[0x13].field_0x20);
    _Src.Data = local_c8.Data.AllocatorInstance.Data;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_c8.Data.ArrayNum == 0) {
      local_d8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_d8,local_c8.Data.ArrayNum,
                 &local_d8.Data.ArrayMax);
      memcpy(local_d8.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_c8.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar17,&local_d8,(FAttributeKey *)&local_a8);
    uVar18 = 0;
  }
  else {
    uVar18 = 1;
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar18;
  return;
}

// execSetCustomInstancedAssetFactoryNodeUid @ 14e5a9fa0

void __cdecl
UInterchangeMeshActorFactoryNode::execSetCustomInstancedAssetFactoryNodeUid
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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetInstancedAssetFactoryNodeUid");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x13),
                     &local_48,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)(param_1 + 0x13));
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

// execSetSlotMaterialDependencyUid @ 14e5b4bc0

void __cdecl
UInterchangeMeshActorFactoryNode::execSetSlotMaterialDependencyUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
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
  iVar5 = local_28.Data.ArrayNum + -1;
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
  bVar3 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    ((TMapAttributeHelper<FString,FString> *)(param_1 + 0x10),uVar4,&local_28,
                     &local_18);
  *(bool *)param_3 = bVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

