// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 20

// StaticClass @ 14e51e6a0

UClass * __cdecl UInterchangeSceneComponentFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneComponentFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeSceneComponentFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeSceneComponentFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSceneComponentFactoryNode,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSceneComponentFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeSceneComponentFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneComponentFactoryNode.InnerSingleton;
}

// UInterchangeSceneComponentFactoryNode @ 14e5324a0

UInterchangeSceneComponentFactoryNode * __thiscall
UInterchangeSceneComponentFactoryNode::UInterchangeSceneComponentFactoryNode
          (UInterchangeSceneComponentFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode
            ((UInterchangeFactoryBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeSceneComponentFactoryNode__6B_;
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
  (this->ComponentUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->ComponentUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ComponentUids).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->ComponentUids).KeyCount.Key.Data.ArrayMax = 0;
  return this;
}

// UInterchangeSceneComponentFactoryNode @ 14e532530

UInterchangeSceneComponentFactoryNode * __thiscall
UInterchangeSceneComponentFactoryNode::UInterchangeSceneComponentFactoryNode
          (UInterchangeSceneComponentFactoryNode *this)

{
  FString local_18;
  
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeSceneComponentFactoryNode__6B_;
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
  (this->ComponentUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->ComponentUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ComponentUids).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->ComponentUids).KeyCount.Key.Data.ArrayMax = 0;
  ::FString::FString(&local_18,L"__ComponentUids__Key");
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->ComponentUids,
             (TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UInterchangeSceneComponentFactoryNode @ 14e536020

void __thiscall
UInterchangeSceneComponentFactoryNode::~UInterchangeSceneComponentFactoryNode
          (UInterchangeSceneComponentFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeSceneComponentFactoryNode__6B_;
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->ComponentUids);
  pFVar1 = (this->Macro_CustomComponentVisibilityKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomLocalTransformKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  return;
}

// AddComponentUid @ 14e539620

bool __thiscall
UInterchangeSceneComponentFactoryNode::AddComponentUid
          (UInterchangeSceneComponentFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem(&this->ComponentUids,param_1);
  return bVar1;
}

// GetComponentUids @ 14e550460

void __thiscall
UInterchangeSceneComponentFactoryNode::GetComponentUids
          (UInterchangeSceneComponentFactoryNode *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems(&this->ComponentUids,param_1);
  return;
}

// GetCustomComponentVisibility @ 14e551a10

bool __thiscall
UInterchangeSceneComponentFactoryNode::GetCustomComponentVisibility
          (UInterchangeSceneComponentFactoryNode *this,bool *param_1)

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

// GetCustomLocalTransform @ 14e554dc0

bool __thiscall
UInterchangeSceneComponentFactoryNode::GetCustomLocalTransform
          (UInterchangeSceneComponentFactoryNode *this,TTransform<double> *param_1)

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

// GetObjectClass @ 14e559360

UClass * __thiscall
UInterchangeSceneComponentFactoryNode::GetObjectClass(UInterchangeSceneComponentFactoryNode *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USceneComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SceneComponent",
               &Z_Registration_Info_UClass_USceneComponent.InnerSingleton,
               USceneComponent::StaticRegisterNativesUSceneComponent,0x250,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_USceneComponent,L"Engine",
               InternalConstructor<USceneComponent>,InternalVTableHelperCtorCaller<USceneComponent>,
               aFStackX_8,UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneComponent.InnerSingleton;
}

// GetPrivateStaticClass @ 14e55b2d0

UClass * __cdecl UInterchangeSceneComponentFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneComponentFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeSceneComponentFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeSceneComponentFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSceneComponentFactoryNode,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSceneComponentFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeSceneComponentFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneComponentFactoryNode.InnerSingleton;
}

// GetTypeName @ 14e55d7d0

FString * __thiscall
UInterchangeSceneComponentFactoryNode::GetTypeName
          (UInterchangeSceneComponentFactoryNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"UInterchangeSceneComponentFactoryNode");
  return __return_storage_ptr__;
}

// SetCustomComponentVisibility @ 14e5655d0

bool __thiscall
UInterchangeSceneComponentFactoryNode::SetCustomComponentVisibility
          (UInterchangeSceneComponentFactoryNode *this,bool *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetComponentVisibility");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomComponentVisibilityKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomComponentVisibilityKey).Key);
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

// SetCustomLocalTransform @ 14e5707e0

bool __thiscall
UInterchangeSceneComponentFactoryNode::SetCustomLocalTransform
          (UInterchangeSceneComponentFactoryNode *this,TTransform<double> *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetLocalTransform");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomLocalTransformKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomLocalTransformKey).Key);
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

// StaticRegisterNativesUInterchangeSceneComponentFactoryNode @ 14e57f7c0

void __cdecl
UInterchangeSceneComponentFactoryNode::StaticRegisterNativesUInterchangeSceneComponentFactoryNode
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeSceneComponentFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddComponentUid @ 14e582f10

void __cdecl
UInterchangeSceneComponentFactoryNode::execAddComponentUid
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
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    ((TArrayAttributeHelper<FString> *)(param_1 + 0xc),&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetComponentUids @ 14e588420

void __cdecl
UInterchangeSceneComponentFactoryNode::execGetComponentUids
          (UObject *param_1,FFrame *param_2,void *param_3)

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
            ((TArrayAttributeHelper<FString> *)(param_1 + 0xc),pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomComponentVisibility @ 14e58c350

void __cdecl
UInterchangeSceneComponentFactoryNode::execGetCustomComponentVisibility
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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetComponentVisibility");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x18,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomLocalTransform @ 14e591a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeSceneComponentFactoryNode::execGetCustomLocalTransform
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
  ::FString::ConcatFC(&local_b8,pFVar16,L".GetLocalTransform");
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
                     (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x8,
                      &local_b8,pTVar17);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar15;
  return;
}

// execSetCustomComponentVisibility @ 14e5a3c60

void __cdecl
UInterchangeSceneComponentFactoryNode::execSetCustomComponentVisibility
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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetComponentVisibility");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x18,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xb].field_0x18);
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

// execSetCustomLocalTransform @ 14e5ab5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeSceneComponentFactoryNode::execSetCustomLocalTransform
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
  ::FString::ConcatFC(&local_c8,pFVar16,L".SetLocalTransform");
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
                     (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x8,
                      pTVar19,None);
  if ((EVar17 & Operation_Success) == None) {
    ::FString::FString(&local_a8,(FString *)&param_1[0xb].field_0x8);
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

