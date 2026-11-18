// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 31

// StaticClass @ 14e478e20

UClass * __cdecl UInterchangeVolumeGridNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeVolumeGridNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeVolumeGridNode",
               &Z_Registration_Info_UClass_UInterchangeVolumeGridNode.InnerSingleton,
               StaticRegisterNativesUInterchangeVolumeGridNode,0xc0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UInterchangeVolumeGridNode>,
               InternalVTableHelperCtorCaller<UInterchangeVolumeGridNode>,local_res8,
               UInterchangeBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeVolumeGridNode.InnerSingleton;
}

// UInterchangeVolumeGridNode @ 14e489b70

UInterchangeVolumeGridNode * __thiscall
UInterchangeVolumeGridNode::UInterchangeVolumeGridNode
          (UInterchangeVolumeGridNode *this,FVTableHelper *param_1)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeVolumeGridNode__6B_;
  (this->Macro_CustomElementTypeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomElementTypeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomElementTypeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomElementTypeKey).Key,L"ElementType");
  (this->Macro_CustomNumComponentsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomNumComponentsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomNumComponentsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomNumComponentsKey).Key,L"NumComponents");
  (this->Macro_CustomGridTransformKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomGridTransformKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGridTransformKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomGridTransformKey).Key,L"GridTransform");
  (this->Macro_CustomGridActiveAABBMinKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomGridActiveAABBMinKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGridActiveAABBMinKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomGridActiveAABBMinKey).Key,L"GridActiveAABBMin");
  (this->Macro_CustomGridActiveAABBMaxKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomGridActiveAABBMaxKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGridActiveAABBMaxKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomGridActiveAABBMaxKey).Key,L"GridActiveAABBMax");
  (this->Macro_CustomGridActiveDimKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomGridActiveDimKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGridActiveDimKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomGridActiveDimKey).Key,L"GridActiveDim");
  return this;
}

// UInterchangeVolumeGridNode @ 14e489c40

UInterchangeVolumeGridNode * __thiscall
UInterchangeVolumeGridNode::UInterchangeVolumeGridNode(UInterchangeVolumeGridNode *this)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeVolumeGridNode__6B_;
  (this->Macro_CustomElementTypeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomElementTypeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomElementTypeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomElementTypeKey).Key,L"ElementType");
  (this->Macro_CustomNumComponentsKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomNumComponentsKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomNumComponentsKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomNumComponentsKey).Key,L"NumComponents");
  (this->Macro_CustomGridTransformKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomGridTransformKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGridTransformKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomGridTransformKey).Key,L"GridTransform");
  (this->Macro_CustomGridActiveAABBMinKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomGridActiveAABBMinKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGridActiveAABBMinKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomGridActiveAABBMinKey).Key,L"GridActiveAABBMin");
  (this->Macro_CustomGridActiveAABBMaxKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomGridActiveAABBMaxKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGridActiveAABBMaxKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomGridActiveAABBMaxKey).Key,L"GridActiveAABBMax");
  (this->Macro_CustomGridActiveDimKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomGridActiveDimKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomGridActiveDimKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomGridActiveDimKey).Key,L"GridActiveDim");
  return this;
}

// ~UInterchangeVolumeGridNode @ 14e48ba80

void __thiscall
UInterchangeVolumeGridNode::~UInterchangeVolumeGridNode(UInterchangeVolumeGridNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeVolumeGridNode__6B_;
  pFVar1 = (this->Macro_CustomGridActiveDimKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomGridActiveAABBMaxKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomGridActiveAABBMinKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomGridTransformKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomNumComponentsKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomElementTypeKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeBaseNode::~UInterchangeBaseNode((UInterchangeBaseNode *)this);
  return;
}

// GetCustomElementType @ 14e491770

bool __thiscall
UInterchangeVolumeGridNode::GetCustomElementType
          (UInterchangeVolumeGridNode *this,EVolumeGridElementType *param_1)

{
  FAttributeKey *pFVar1;
  FAttributeStorage *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  TAttributeHandle<unsigned_char,void> *pTVar6;
  EAttributeStorageResult EVar7;
  FString local_78;
  void *local_68 [2];
  FString local_58;
  FString local_48;
  TAttributeHandle<unsigned_char,void> local_38;
  TAttributeHandle<unsigned_char,void> local_20;
  
  pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_68);
  ::FString::ConcatFC(&local_78,pFVar5,L".GetElementType");
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
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
  pFVar1 = &this->Macro_CustomElementTypeKey;
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,pFVar1);
  if (bVar3) {
    pTVar6 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                       (this_00,&local_20,pFVar1);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_38,&pTVar6->Key,pTVar6->AttributeStorage);
    if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&local_38);
    if (bVar3) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                        (&local_38,param_1);
      if ((EVar7 & Operation_Success) != None) {
        if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
        goto LAB_14e4918ab;
      }
      ::FString::FString(&local_58,&pFVar1->Key);
      pFVar5 = ::FString::FString(&local_48,&local_78);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar5,(FAttributeKey *)&local_58);
    }
    if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
LAB_14e4918ab:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetCustomGridActiveAABBMax @ 14e492250

bool __thiscall
UInterchangeVolumeGridNode::GetCustomGridActiveAABBMax
          (UInterchangeVolumeGridNode *this,TIntVector3<int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetGridActiveAABBMin");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<UE::Math::TIntVector3<int>_>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomGridActiveAABBMinKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomGridActiveAABBMin @ 14e492300

bool __thiscall
UInterchangeVolumeGridNode::GetCustomGridActiveAABBMin
          (UInterchangeVolumeGridNode *this,TIntVector3<int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetGridActiveAABBMin");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<UE::Math::TIntVector3<int>_>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomGridActiveAABBMinKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomGridActiveDimensions @ 14e4923b0

bool __thiscall
UInterchangeVolumeGridNode::GetCustomGridActiveDimensions
          (UInterchangeVolumeGridNode *this,TIntVector3<int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetGridActiveDim");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<UE::Math::TIntVector3<int>_>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomGridActiveDimKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomGridTransform @ 14e492520

bool __thiscall
UInterchangeVolumeGridNode::GetCustomGridTransform
          (UInterchangeVolumeGridNode *this,TTransform<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetGridTransform");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomGridTransformKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomNumComponents @ 14e493660

bool __thiscall
UInterchangeVolumeGridNode::GetCustomNumComponents(UInterchangeVolumeGridNode *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetNumComponents");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomNumComponentsKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetPrivateStaticClass @ 14e499ba0

UClass * __cdecl UInterchangeVolumeGridNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeVolumeGridNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeVolumeGridNode",
               &Z_Registration_Info_UClass_UInterchangeVolumeGridNode.InnerSingleton,
               StaticRegisterNativesUInterchangeVolumeGridNode,0xc0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UInterchangeVolumeGridNode>,
               InternalVTableHelperCtorCaller<UInterchangeVolumeGridNode>,local_res8,
               UInterchangeBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeVolumeGridNode.InnerSingleton;
}

// GetTypeName @ 14e49af80

FString * __thiscall
UInterchangeVolumeGridNode::GetTypeName
          (UInterchangeVolumeGridNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"VolumeGrid");
  return __return_storage_ptr__;
}

// SetCustomElementType @ 14e4a13c0

bool __thiscall
UInterchangeVolumeGridNode::SetCustomElementType
          (UInterchangeVolumeGridNode *this,EVolumeGridElementType *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetElementType");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomElementTypeKey,param_1,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomElementTypeKey).Key);
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

// SetCustomGridActiveAABBMax @ 14e4a2230

bool __thiscall
UInterchangeVolumeGridNode::SetCustomGridActiveAABBMax
          (UInterchangeVolumeGridNode *this,TIntVector3<int> *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetGridActiveAABBMax");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TIntVector3<int>,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomGridActiveAABBMaxKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomGridActiveAABBMaxKey).Key);
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

// SetCustomGridActiveAABBMin @ 14e4a2380

bool __thiscall
UInterchangeVolumeGridNode::SetCustomGridActiveAABBMin
          (UInterchangeVolumeGridNode *this,TIntVector3<int> *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetGridActiveAABBMin");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TIntVector3<int>,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomGridActiveAABBMinKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomGridActiveAABBMinKey).Key);
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

// SetCustomGridActiveDimensions @ 14e4a24d0

bool __thiscall
UInterchangeVolumeGridNode::SetCustomGridActiveDimensions
          (UInterchangeVolumeGridNode *this,TIntVector3<int> *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetGridActiveDim");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TIntVector3<int>,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomGridActiveDimKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomGridActiveDimKey).Key);
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

// SetCustomGridTransform @ 14e4a2620

bool __thiscall
UInterchangeVolumeGridNode::SetCustomGridTransform
          (UInterchangeVolumeGridNode *this,TTransform<double> *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetGridTransform");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomGridTransformKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomGridTransformKey).Key);
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

// SetCustomNumComponents @ 14e4a4330

bool __thiscall
UInterchangeVolumeGridNode::SetCustomNumComponents(UInterchangeVolumeGridNode *this,int *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetNumComponents");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomNumComponentsKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomNumComponentsKey).Key);
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

// StaticRegisterNativesUInterchangeVolumeGridNode @ 14e4a8c50

void __cdecl UInterchangeVolumeGridNode::StaticRegisterNativesUInterchangeVolumeGridNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeVolumeGridNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomElementType @ 14e4b0590

void __cdecl
UInterchangeVolumeGridNode::execGetCustomElementType(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  FAttributeStorage *this;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  TAttributeHandle<unsigned_char,void> *pTVar6;
  EAttributeStorageResult EVar7;
  undefined1 uVar8;
  uchar *puVar9;
  uchar local_res8 [8];
  FString local_88;
  void *local_78 [2];
  FString local_68;
  FString local_58;
  TAttributeHandle<unsigned_char,void> local_48;
  TAttributeHandle<unsigned_char,void> local_30;
  
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar9 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_78);
  ::FString::ConcatFC(&local_88,pFVar5,L".GetElementType");
  if (local_78[0] != (void *)0x0) {
    FMemory::Free(local_78[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = &param_1[2].field_0x10;
  this = *(FAttributeStorage **)(param_1 + 1);
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute(this,(FAttributeKey *)puVar1);
  if (bVar4) {
    pTVar6 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                       (this,&local_30,(FAttributeKey *)puVar1);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_48,&pTVar6->Key,pTVar6->AttributeStorage);
    if (local_30.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&local_48);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                        (&local_48,puVar9);
      if ((EVar7 & Operation_Success) != None) {
        if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar8 = 1;
        goto LAB_14e4b073f;
      }
      ::FString::FString(&local_68,(FString *)puVar1);
      pFVar5 = ::FString::FString(&local_58,&local_88);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar5,(FAttributeKey *)&local_68);
    }
    if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
  }
LAB_14e4b073f:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar8;
  return;
}

// execGetCustomGridActiveAABBMax @ 14e4b1f90

void __cdecl
UInterchangeVolumeGridNode::execGetCustomGridActiveAABBMax
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  TIntVector3<int> *pTVar5;
  TIntVector3<int> local_38;
  FString local_28;
  void *local_18 [2];
  
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
  pTVar5 = &local_38;
  if ((TIntVector3<int> *)param_2->MostRecentPropertyAddress != (TIntVector3<int> *)0x0) {
    pTVar5 = (TIntVector3<int> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetGridActiveAABBMin");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<UE::Math::TIntVector3<int>_>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x18,
                     &local_28,pTVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomGridActiveAABBMin @ 14e4b20d0

void __cdecl
UInterchangeVolumeGridNode::execGetCustomGridActiveAABBMin
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  TIntVector3<int> *pTVar5;
  TIntVector3<int> local_38;
  FString local_28;
  void *local_18 [2];
  
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
  pTVar5 = &local_38;
  if ((TIntVector3<int> *)param_2->MostRecentPropertyAddress != (TIntVector3<int> *)0x0) {
    pTVar5 = (TIntVector3<int> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetGridActiveAABBMin");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<UE::Math::TIntVector3<int>_>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x18,
                     &local_28,pTVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomGridActiveDimensions @ 14e4b2210

void __cdecl
UInterchangeVolumeGridNode::execGetCustomGridActiveDimensions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  TIntVector3<int> *pTVar5;
  TIntVector3<int> local_38;
  FString local_28;
  void *local_18 [2];
  
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
  pTVar5 = &local_38;
  if ((TIntVector3<int> *)param_2->MostRecentPropertyAddress != (TIntVector3<int> *)0x0) {
    pTVar5 = (TIntVector3<int> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetGridActiveDim");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<UE::Math::TIntVector3<int>_>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[4].field_0x10,
                     &local_28,pTVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomGridTransform @ 14e4b2550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeVolumeGridNode::execGetCustomGridTransform
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
  ::FString::ConcatFC(&local_b8,pFVar16,L".GetGridTransform");
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
                     (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x8,
                      &local_b8,pTVar17);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar15;
  return;
}

// execGetCustomNumComponents @ 14e4b43b0

void __cdecl
UInterchangeVolumeGridNode::execGetCustomNumComponents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int *piVar5;
  int local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = 0;
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
  piVar5 = local_res8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar5 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetNumComponents");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x20,
                     &local_38,piVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execSetCustomElementType @ 14e4bf310

void __cdecl
UInterchangeVolumeGridNode::execSetCustomElementType(UObject *param_1,FFrame *param_2,void *param_3)

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
  puVar7 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetElementType");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x10,
                     puVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[2].field_0x10);
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

// execSetCustomGridActiveAABBMax @ 14e4c0fb0

void __cdecl
UInterchangeVolumeGridNode::execSetCustomGridActiveAABBMax
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  TIntVector3<int> *pTVar7;
  TIntVector3<int> local_58;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pTVar7 = &local_58;
  if ((TIntVector3<int> *)param_2->MostRecentPropertyAddress != (TIntVector3<int> *)0x0) {
    pTVar7 = (TIntVector3<int> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetGridActiveAABBMax");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TIntVector3<int>,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 4),pTVar7,None
                    );
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)(param_1 + 4));
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
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomGridActiveAABBMin @ 14e4c1180

void __cdecl
UInterchangeVolumeGridNode::execSetCustomGridActiveAABBMin
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  TIntVector3<int> *pTVar7;
  TIntVector3<int> local_58;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pTVar7 = &local_58;
  if ((TIntVector3<int> *)param_2->MostRecentPropertyAddress != (TIntVector3<int> *)0x0) {
    pTVar7 = (TIntVector3<int> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetGridActiveAABBMin");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TIntVector3<int>,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x18,
                     pTVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)&param_1[3].field_0x18);
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
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomGridActiveDimensions @ 14e4c1350

void __cdecl
UInterchangeVolumeGridNode::execSetCustomGridActiveDimensions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  TIntVector3<int> *pTVar7;
  TIntVector3<int> local_58;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pTVar7 = &local_58;
  if ((TIntVector3<int> *)param_2->MostRecentPropertyAddress != (TIntVector3<int> *)0x0) {
    pTVar7 = (TIntVector3<int> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetGridActiveDim");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TIntVector3<int>,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[4].field_0x10,
                     pTVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)&param_1[4].field_0x10);
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
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomGridTransform @ 14e4c1520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeVolumeGridNode::execSetCustomGridTransform
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
  ::FString::ConcatFC(&local_c8,pFVar16,L".SetGridTransform");
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
                     (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x8,
                      pTVar19,None);
  if ((EVar17 & Operation_Success) == None) {
    ::FString::FString(&local_a8,(FString *)&param_1[3].field_0x8);
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

// execSetCustomNumComponents @ 14e4c4000

void __cdecl
UInterchangeVolumeGridNode::execSetCustomNumComponents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  int *piVar7;
  int local_res8 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = 0;
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
  piVar7 = local_res8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar7 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetNumComponents");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x20,
                     piVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[2].field_0x20);
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

