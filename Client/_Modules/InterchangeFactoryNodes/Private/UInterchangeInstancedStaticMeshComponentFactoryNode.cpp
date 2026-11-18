// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 22

// StaticClass @ 14e51ebc0

UClass * __cdecl UInterchangeInstancedStaticMeshComponentFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeInstancedStaticMeshComponentFactoryNode.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",
               L"InterchangeInstancedStaticMeshComponentFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeInstancedStaticMeshComponentFactoryNode.
                InnerSingleton,
               StaticRegisterNativesUInterchangeInstancedStaticMeshComponentFactoryNode,0x240,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeInstancedStaticMeshComponentFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeInstancedStaticMeshComponentFactoryNode>,
               local_res8,UInterchangeSceneComponentFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeInstancedStaticMeshComponentFactoryNode.
         InnerSingleton;
}

// UInterchangeInstancedStaticMeshComponentFactoryNode @ 14e5307f0

UInterchangeInstancedStaticMeshComponentFactoryNode * __thiscall
UInterchangeInstancedStaticMeshComponentFactoryNode::
UInterchangeInstancedStaticMeshComponentFactoryNode
          (UInterchangeInstancedStaticMeshComponentFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeSceneComponentFactoryNode::UInterchangeSceneComponentFactoryNode
            ((UInterchangeSceneComponentFactoryNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeInstancedStaticMeshComponentFactoryNode__6B_;
  (this->InstanceTransforms).Attributes.Object = (FAttributeStorage *)0x0;
  (this->InstanceTransforms).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->InstanceTransforms).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InstanceTransforms).KeyCount.Key.Data.ArrayNum = 0;
  (this->InstanceTransforms).KeyCount.Key.Data.ArrayMax = 0;
  (this->Macro_CustomAssetInstanceUidKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAssetInstanceUidKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAssetInstanceUidKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAssetInstanceUidKey).Key,L"AssetInstanceUid");
  (this->Macro_CustomHierarchicalISMKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomHierarchicalISMKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomHierarchicalISMKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomHierarchicalISMKey).Key,L"Hierarchical");
  return this;
}

// UInterchangeInstancedStaticMeshComponentFactoryNode @ 14e530880

UInterchangeInstancedStaticMeshComponentFactoryNode * __thiscall
UInterchangeInstancedStaticMeshComponentFactoryNode::
UInterchangeInstancedStaticMeshComponentFactoryNode
          (UInterchangeInstancedStaticMeshComponentFactoryNode *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  FAttributeKey *pFVar3;
  atomic<int> aVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  ForAnyElementType _Src;
  bool bVar9;
  UInterchangeInstancedStaticMeshComponentFactoryNode *pUVar10;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FString local_38;
  
  UInterchangeSceneComponentFactoryNode::UInterchangeSceneComponentFactoryNode
            ((UInterchangeSceneComponentFactoryNode *)this);
  pFVar3 = &(this->InstanceTransforms).KeyCount;
  this->_padding_ = (longlong)&___7UInterchangeInstancedStaticMeshComponentFactoryNode__6B_;
  piVar1 = &(this->InstanceTransforms).KeyCount.Key.Data.ArrayMax;
  (this->InstanceTransforms).Attributes.Object = (FAttributeStorage *)0x0;
  (this->InstanceTransforms).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (pFVar3->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceTransforms).KeyCount.Key.Data.ArrayNum = 0;
  *piVar1 = 0;
  (this->Macro_CustomAssetInstanceUidKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAssetInstanceUidKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAssetInstanceUidKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAssetInstanceUidKey).Key,L"AssetInstanceUid");
  (this->Macro_CustomHierarchicalISMKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomHierarchicalISMKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomHierarchicalISMKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomHierarchicalISMKey).Key,L"Hierarchical");
  ::FString::FString(&local_38,L"__InstanceTransforms__");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name34,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name34,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::Initialize(TSharedPtr<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name34,true);
  if ((this->_padding_ == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAttributes.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                         ,0x24,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pUVar10 = (UInterchangeInstancedStaticMeshComponentFactoryNode *)(*pcVar8)();
    return pUVar10;
  }
  (this->InstanceTransforms).Attributes.Object = (FAttributeStorage *)this->_padding_;
  pTVar6 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar6 != (this->InstanceTransforms).Attributes.WeakReferenceCount.ReferenceController) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (this->InstanceTransforms).Attributes.WeakReferenceCount.ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar7->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
    (this->InstanceTransforms).Attributes.WeakReferenceCount.ReferenceController = pTVar6;
  }
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  if (&pFVar3->Key != &local_38) {
    iVar5 = *piVar1;
    (this->InstanceTransforms).KeyCount.Key.Data.ArrayNum = local_38.Data.ArrayNum;
    if ((local_38.Data.ArrayNum == 0) && (iVar5 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,iVar5,(ForAnyElementType *)pFVar3,local_38.Data.ArrayNum
                 ,piVar1);
      if (local_38.Data.ArrayNum != 0) {
        memcpy((pFVar3->Key).Data.AllocatorInstance.Data,_Src.Data,
               (longlong)local_38.Data.ArrayNum * 2);
      }
    }
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UInterchangeInstancedStaticMeshComponentFactoryNode @ 14e535850

void __thiscall
UInterchangeInstancedStaticMeshComponentFactoryNode::
~UInterchangeInstancedStaticMeshComponentFactoryNode
          (UInterchangeInstancedStaticMeshComponentFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeInstancedStaticMeshComponentFactoryNode__6B_;
  pFVar1 = (this->Macro_CustomHierarchicalISMKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomAssetInstanceUidKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::
  ~TArrayAttributeHelper<UE::Math::TTransform<double>_>(&this->InstanceTransforms);
  this->_padding_ = (longlong)&___7UInterchangeSceneComponentFactoryNode__6B_;
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            ((TArrayAttributeHelper<FString> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  return;
}

// AddInstanceTransform @ 14e539720

void __thiscall
UInterchangeInstancedStaticMeshComponentFactoryNode::AddInstanceTransform
          (UInterchangeInstancedStaticMeshComponentFactoryNode *this,TTransform<double> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::AddItem
            (&this->InstanceTransforms,param_1);
  return;
}

// AddInstanceTransforms @ 14e539740

void __thiscall
UInterchangeInstancedStaticMeshComponentFactoryNode::AddInstanceTransforms
          (UInterchangeInstancedStaticMeshComponentFactoryNode *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  TTransform<double> *pTVar2;
  TTransform<double> *pTVar3;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  pTVar2 = (TTransform<double> *)(param_1->AllocatorInstance).Data;
  pTVar3 = pTVar2 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pTVar2 == pTVar3) break;
    UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::AddItem
              (&this->InstanceTransforms,pTVar2);
    pTVar2 = pTVar2 + 1;
  }
  return;
}

// GetCustomHierarchicalISM @ 14e553b40

bool __thiscall
UInterchangeInstancedStaticMeshComponentFactoryNode::GetCustomHierarchicalISM
          (UInterchangeInstancedStaticMeshComponentFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetHierarchicalISM");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomHierarchicalISMKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomInstancedAssetUid @ 14e554640

bool __thiscall
UInterchangeInstancedStaticMeshComponentFactoryNode::GetCustomInstancedAssetUid
          (UInterchangeInstancedStaticMeshComponentFactoryNode *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetAssetInstanceUid");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomAssetInstanceUidKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetInstanceTransforms @ 14e5581c0

void __thiscall
UInterchangeInstancedStaticMeshComponentFactoryNode::GetInstanceTransforms
          (UInterchangeInstancedStaticMeshComponentFactoryNode *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::GetItems
            (&this->InstanceTransforms,param_1);
  return;
}

// GetObjectClass @ 14e558ec0

UClass * __thiscall
UInterchangeInstancedStaticMeshComponentFactoryNode::GetObjectClass
          (UInterchangeInstancedStaticMeshComponentFactoryNode *this)

{
  FAttributeKey *pFVar1;
  FAttributeStorage *this_00;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  UClass *pUVar5;
  EAttributeStorageResult EVar6;
  bool local_res8 [8];
  FString local_68;
  void *local_58 [2];
  FString local_48;
  FString local_38;
  TAttributeHandle<bool,void> local_28;
  
  local_res8[0] = false;
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_58);
  ::FString::ConcatFC(&local_68,pFVar4,L".GetHierarchicalISM");
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UClass *)(*pcVar2)();
      return pUVar5;
    }
  }
  pFVar1 = &this->Macro_CustomHierarchicalISMKey;
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,pFVar1);
  if (bVar3) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>(this_00,&local_28,pFVar1);
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_28);
    if (bVar3) {
      EVar6 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                        (&local_28,local_res8);
      if ((EVar6 & Operation_Success) == None) {
        ::FString::FString(&local_48,&pFVar1->Key);
        pFVar4 = ::FString::FString(&local_38,&local_68);
        UE::Interchange::LogAttributeStorageErrors(EVar6,pFVar4,(FAttributeKey *)&local_48);
      }
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_res8[0] != false) {
    pUVar5 = Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
    return pUVar5;
  }
  pUVar5 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  return pUVar5;
}

// GetPrivateStaticClass @ 14e55a610

UClass * __cdecl UInterchangeInstancedStaticMeshComponentFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeInstancedStaticMeshComponentFactoryNode.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",
               L"InterchangeInstancedStaticMeshComponentFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeInstancedStaticMeshComponentFactoryNode.
                InnerSingleton,
               StaticRegisterNativesUInterchangeInstancedStaticMeshComponentFactoryNode,0x240,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeInstancedStaticMeshComponentFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeInstancedStaticMeshComponentFactoryNode>,
               local_res8,UInterchangeSceneComponentFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeInstancedStaticMeshComponentFactoryNode.
         InnerSingleton;
}

// GetTypeName @ 14e55d5f0

FString * __thiscall
UInterchangeInstancedStaticMeshComponentFactoryNode::GetTypeName
          (UInterchangeInstancedStaticMeshComponentFactoryNode *this,FString *__return_storage_ptr__
          )

{
  ::FString::FString(__return_storage_ptr__,L"UInterchangeInstancedStaticMeshComponentFactoryNode ")
  ;
  return __return_storage_ptr__;
}

// SetCustomHierarchicalISM @ 14e56df40

bool __thiscall
UInterchangeInstancedStaticMeshComponentFactoryNode::SetCustomHierarchicalISM
          (UInterchangeInstancedStaticMeshComponentFactoryNode *this,bool *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetHierarchicalISM");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomHierarchicalISMKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomHierarchicalISMKey).Key);
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

// SetCustomInstancedAssetUid @ 14e56f350

bool __thiscall
UInterchangeInstancedStaticMeshComponentFactoryNode::SetCustomInstancedAssetUid
          (UInterchangeInstancedStaticMeshComponentFactoryNode *this,FString *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetAssetInstanceUid");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomAssetInstanceUidKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomAssetInstanceUidKey).Key);
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

// StaticRegisterNativesUInterchangeInstancedStaticMeshComponentFactoryNode @ 14e57f3b0

void __cdecl
UInterchangeInstancedStaticMeshComponentFactoryNode::
StaticRegisterNativesUInterchangeInstancedStaticMeshComponentFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr =
       Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddInstanceTransform @ 14e5833e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeInstancedStaticMeshComponentFactoryNode::execAddInstanceTransform
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
  TTransform<double> *pTVar14;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
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
  local_78.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_78.Rotation.XY.m128d_f64[1] = (double)fVar5;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_78.Rotation.ZW.m128d_f64[1] = (double)fVar11;
  local_78.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_78.Translation.ZW.m128d_f64[1] = (double)fVar12;
  local_78.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_78.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_78.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_78.Scale3D.ZW.m128d_f64[1] = (double)fVar13;
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar14 = &local_78;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar14 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::AddItem
            ((TArrayAttributeHelper<UE::Math::TTransform<double>_> *)&param_1[0xc].field_0x20,
             pTVar14);
  return;
}

// execAddInstanceTransforms @ 14e5834f0

void __cdecl
UInterchangeInstancedStaticMeshComponentFactoryNode::execAddInstanceTransforms
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TTransform<double> *pTVar3;
  void **ppvVar4;
  TTransform<double> *pTVar5;
  undefined1 local_res10 [8];
  void *local_28;
  undefined8 local_20;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppvVar4 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(ppvVar4 + 1);
  pTVar3 = *ppvVar4;
  pTVar5 = pTVar3 + iVar1;
  while( true ) {
    if (*(int *)(ppvVar4 + 1) != iVar1) {
      `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pTVar3 == pTVar5) break;
    UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::AddItem
              ((TArrayAttributeHelper<UE::Math::TTransform<double>_> *)&param_1[0xc].field_0x20,
               pTVar3);
    pTVar3 = pTVar3 + 1;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execGetCustomHierarchicalISM @ 14e58fb70

void __cdecl
UInterchangeInstancedStaticMeshComponentFactoryNode::execGetCustomHierarchicalISM
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
  bVar2 = GetCustomHierarchicalISM
                    ((UInterchangeInstancedStaticMeshComponentFactoryNode *)param_1,pbVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetCustomInstancedAssetUid @ 14e590d40

void __cdecl
UInterchangeInstancedStaticMeshComponentFactoryNode::execGetCustomInstancedAssetUid
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
  ::FString::ConcatFC(&local_28,pFVar4,L".GetAssetInstanceUid");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xd].field_0x18,
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

// execGetInstanceTransforms @ 14e5990a0

void __cdecl
UInterchangeInstancedStaticMeshComponentFactoryNode::execGetInstanceTransforms
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_18;
  
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
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<UE::Math::TTransform<double>_>::GetItems
            ((TArrayAttributeHelper<UE::Math::TTransform<double>_> *)&param_1[0xc].field_0x20,pTVar2
            );
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomHierarchicalISM @ 14e5a85c0

void __cdecl
UInterchangeInstancedStaticMeshComponentFactoryNode::execSetCustomHierarchicalISM
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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetHierarchicalISM");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0xe),pbVar7,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)(param_1 + 0xe));
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

// execSetCustomInstancedAssetUid @ 14e5aa190

void __cdecl
UInterchangeInstancedStaticMeshComponentFactoryNode::execSetCustomInstancedAssetUid
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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetAssetInstanceUid");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xd].field_0x18,
                     &local_48,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)&param_1[0xd].field_0x18);
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

