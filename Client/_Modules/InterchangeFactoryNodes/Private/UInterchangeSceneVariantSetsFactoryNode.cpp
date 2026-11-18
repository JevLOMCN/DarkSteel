// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 19

// StaticClass @ 14e511b90

UClass * __cdecl UInterchangeSceneVariantSetsFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeSceneVariantSetsFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSceneVariantSetsFactoryNode,0x1e0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSceneVariantSetsFactoryNode>
               ,InternalVTableHelperCtorCaller<UInterchangeSceneVariantSetsFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactoryNode.InnerSingleton;
}

// UInterchangeSceneVariantSetsFactoryNode @ 14e532660

UInterchangeSceneVariantSetsFactoryNode * __thiscall
UInterchangeSceneVariantSetsFactoryNode::UInterchangeSceneVariantSetsFactoryNode
          (UInterchangeSceneVariantSetsFactoryNode *this)

{
  FString local_18;
  
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeSceneVariantSetsFactoryNode__6B_;
  (this->CustomVariantSetUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->CustomVariantSetUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CustomVariantSetUids).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CustomVariantSetUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->CustomVariantSetUids).KeyCount.Key.Data.ArrayMax = 0;
  ::FString::FString(&local_18,L"VariantSetUids");
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->CustomVariantSetUids,
             (TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// UInterchangeSceneVariantSetsFactoryNode @ 14e5326f0

UInterchangeSceneVariantSetsFactoryNode * __thiscall
UInterchangeSceneVariantSetsFactoryNode::UInterchangeSceneVariantSetsFactoryNode
          (UInterchangeSceneVariantSetsFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode
            ((UInterchangeFactoryBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeSceneVariantSetsFactoryNode__6B_;
  (this->CustomVariantSetUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->CustomVariantSetUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CustomVariantSetUids).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CustomVariantSetUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->CustomVariantSetUids).KeyCount.Key.Data.ArrayMax = 0;
  return this;
}

// ~UInterchangeSceneVariantSetsFactoryNode @ 14e5360a0

void __thiscall
UInterchangeSceneVariantSetsFactoryNode::~UInterchangeSceneVariantSetsFactoryNode
          (UInterchangeSceneVariantSetsFactoryNode *this)

{
  this->_padding_ = (longlong)&___7UInterchangeSceneVariantSetsFactoryNode__6B_;
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->CustomVariantSetUids);
  UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  return;
}

// AddCustomVariantSetUid @ 14e539700

bool __thiscall
UInterchangeSceneVariantSetsFactoryNode::AddCustomVariantSetUid
          (UInterchangeSceneVariantSetsFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    (&this->CustomVariantSetUids,param_1);
  return bVar1;
}

// GetCustomVariantSetUid @ 14e557950

void __thiscall
UInterchangeSceneVariantSetsFactoryNode::GetCustomVariantSetUid
          (UInterchangeSceneVariantSetsFactoryNode *this,int param_1,FString *param_2)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            (&this->CustomVariantSetUids,param_1,param_2);
  return;
}

// GetCustomVariantSetUidCount @ 14e557970

int __thiscall
UInterchangeSceneVariantSetsFactoryNode::GetCustomVariantSetUidCount
          (UInterchangeSceneVariantSetsFactoryNode *this)

{
  int iVar1;
  
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount(&this->CustomVariantSetUids);
  return iVar1;
}

// GetCustomVariantSetUids @ 14e557990

void __thiscall
UInterchangeSceneVariantSetsFactoryNode::GetCustomVariantSetUids
          (UInterchangeSceneVariantSetsFactoryNode *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems(&this->CustomVariantSetUids,param_1);
  return;
}

// GetObjectClass @ 14e559380

UClass * __thiscall
UInterchangeSceneVariantSetsFactoryNode::GetObjectClass
          (UInterchangeSceneVariantSetsFactoryNode *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ULevelVariantSets.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"LevelVariantSets",
               &Z_Registration_Info_UClass_ULevelVariantSets.InnerSingleton,
               ULevelVariantSets::StaticRegisterNativesULevelVariantSets,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelVariantSets>,
               InternalVTableHelperCtorCaller<ULevelVariantSets>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelVariantSets.InnerSingleton;
}

// GetPrivateStaticClass @ 14e55b450

UClass * __cdecl UInterchangeSceneVariantSetsFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeSceneVariantSetsFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSceneVariantSetsFactoryNode,0x1e0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSceneVariantSetsFactoryNode>
               ,InternalVTableHelperCtorCaller<UInterchangeSceneVariantSetsFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactoryNode.InnerSingleton;
}

// GetTypeName @ 14e55d800

FString * __thiscall
UInterchangeSceneVariantSetsFactoryNode::GetTypeName
          (UInterchangeSceneVariantSetsFactoryNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SceneVariantSetFactoryNode");
  return __return_storage_ptr__;
}

// IsRuntimeImportAllowed @ 14e55e7f0

bool __thiscall
UInterchangeSceneVariantSetsFactoryNode::IsRuntimeImportAllowed
          (UInterchangeSceneVariantSetsFactoryNode *this)

{
  return false;
}

// RemoveCustomVariantSetUid @ 14e55f860

bool __thiscall
UInterchangeSceneVariantSetsFactoryNode::RemoveCustomVariantSetUid
          (UInterchangeSceneVariantSetsFactoryNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    (&this->CustomVariantSetUids,param_1);
  return bVar1;
}

// StaticRegisterNativesUInterchangeSceneVariantSetsFactoryNode @ 14e57f810

void __cdecl
UInterchangeSceneVariantSetsFactoryNode::
StaticRegisterNativesUInterchangeSceneVariantSetsFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddCustomVariantSetUid @ 14e583320

void __cdecl
UInterchangeSceneVariantSetsFactoryNode::execAddCustomVariantSetUid
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
                    ((TArrayAttributeHelper<FString> *)&param_1[0xb].field_0x8,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomVariantSetUid @ 14e597770

void __cdecl
UInterchangeSceneVariantSetsFactoryNode::execGetCustomVariantSetUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int local_res8 [2];
  FString local_18;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
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
  pFVar2 = &local_18;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar2 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            ((TArrayAttributeHelper<FString> *)&param_1[0xb].field_0x8,local_res8[0],pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomVariantSetUidCount @ 14e597870

void __cdecl
UInterchangeSceneVariantSetsFactoryNode::execGetCustomVariantSetUidCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount
                    ((TArrayAttributeHelper<FString> *)&param_1[0xb].field_0x8);
  *(int *)param_3 = iVar1;
  return;
}

// execGetCustomVariantSetUids @ 14e5978b0

void __cdecl
UInterchangeSceneVariantSetsFactoryNode::execGetCustomVariantSetUids
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
            ((TArrayAttributeHelper<FString> *)&param_1[0xb].field_0x8,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execRemoveCustomVariantSetUid @ 14e59d8a0

void __cdecl
UInterchangeSceneVariantSetsFactoryNode::execRemoveCustomVariantSetUid
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
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    ((TArrayAttributeHelper<FString> *)&param_1[0xb].field_0x8,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

