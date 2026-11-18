// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 17

// StaticClass @ 14e476c10

UClass * __cdecl UInterchangeSceneVariantSetsNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneVariantSetsNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeSceneVariantSetsNode",
               &Z_Registration_Info_UClass_UInterchangeSceneVariantSetsNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSceneVariantSetsNode,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSceneVariantSetsNode>,
               InternalVTableHelperCtorCaller<UInterchangeSceneVariantSetsNode>,local_res8,
               UInterchangeBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneVariantSetsNode.InnerSingleton;
}

// UInterchangeSceneVariantSetsNode @ 14e488550

UInterchangeSceneVariantSetsNode * __thiscall
UInterchangeSceneVariantSetsNode::UInterchangeSceneVariantSetsNode
          (UInterchangeSceneVariantSetsNode *this)

{
  FString local_18;
  
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeSceneVariantSetsNode__6B_;
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

// UInterchangeSceneVariantSetsNode @ 14e4885d0

UInterchangeSceneVariantSetsNode * __thiscall
UInterchangeSceneVariantSetsNode::UInterchangeSceneVariantSetsNode
          (UInterchangeSceneVariantSetsNode *this,FVTableHelper *param_1)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeSceneVariantSetsNode__6B_;
  (this->CustomVariantSetUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->CustomVariantSetUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CustomVariantSetUids).KeyCount.Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CustomVariantSetUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->CustomVariantSetUids).KeyCount.Key.Data.ArrayMax = 0;
  return this;
}

// ~UInterchangeSceneVariantSetsNode @ 14e48b2d0

void __thiscall
UInterchangeSceneVariantSetsNode::~UInterchangeSceneVariantSetsNode
          (UInterchangeSceneVariantSetsNode *this)

{
  this->_padding_ = (longlong)&___7UInterchangeSceneVariantSetsNode__6B_;
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->CustomVariantSetUids);
  UInterchangeBaseNode::~UInterchangeBaseNode((UInterchangeBaseNode *)this);
  return;
}

// AddCustomVariantSetUid @ 14e48d830

bool __thiscall
UInterchangeSceneVariantSetsNode::AddCustomVariantSetUid
          (UInterchangeSceneVariantSetsNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    (&this->CustomVariantSetUids,param_1);
  return bVar1;
}

// GetCustomVariantSetUid @ 14e494f10

void __thiscall
UInterchangeSceneVariantSetsNode::GetCustomVariantSetUid
          (UInterchangeSceneVariantSetsNode *this,int param_1,FString *param_2)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItem
            (&this->CustomVariantSetUids,param_1,param_2);
  return;
}

// GetCustomVariantSetUidCount @ 14e494f20

int __thiscall
UInterchangeSceneVariantSetsNode::GetCustomVariantSetUidCount
          (UInterchangeSceneVariantSetsNode *this)

{
  int iVar1;
  
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount(&this->CustomVariantSetUids);
  return iVar1;
}

// GetCustomVariantSetUids @ 14e494f30

void __thiscall
UInterchangeSceneVariantSetsNode::GetCustomVariantSetUids
          (UInterchangeSceneVariantSetsNode *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems(&this->CustomVariantSetUids,param_1);
  return;
}

// GetPrivateStaticClass @ 14e498e30

UClass * __cdecl UInterchangeSceneVariantSetsNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneVariantSetsNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeSceneVariantSetsNode",
               &Z_Registration_Info_UClass_UInterchangeSceneVariantSetsNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSceneVariantSetsNode,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSceneVariantSetsNode>,
               InternalVTableHelperCtorCaller<UInterchangeSceneVariantSetsNode>,local_res8,
               UInterchangeBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneVariantSetsNode.InnerSingleton;
}

// GetTypeName @ 14e49ac50

FString * __thiscall
UInterchangeSceneVariantSetsNode::GetTypeName
          (UInterchangeSceneVariantSetsNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SceneVariantSetNode");
  return __return_storage_ptr__;
}

// RemoveCustomVariantSetUid @ 14e49edd0

bool __thiscall
UInterchangeSceneVariantSetsNode::RemoveCustomVariantSetUid
          (UInterchangeSceneVariantSetsNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    (&this->CustomVariantSetUids,param_1);
  return bVar1;
}

// StaticRegisterNativesUInterchangeSceneVariantSetsNode @ 14e4a88c0

void __cdecl
UInterchangeSceneVariantSetsNode::StaticRegisterNativesUInterchangeSceneVariantSetsNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddCustomVariantSetUid @ 14e4ac030

void __cdecl
UInterchangeSceneVariantSetsNode::execAddCustomVariantSetUid
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
                    ((TArrayAttributeHelper<FString> *)&param_1[2].field_0x10,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomVariantSetUid @ 14e4b7610

void __cdecl
UInterchangeSceneVariantSetsNode::execGetCustomVariantSetUid
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
            ((TArrayAttributeHelper<FString> *)&param_1[2].field_0x10,local_res8[0],pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomVariantSetUidCount @ 14e4b7700

void __cdecl
UInterchangeSceneVariantSetsNode::execGetCustomVariantSetUidCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount
                    ((TArrayAttributeHelper<FString> *)&param_1[2].field_0x10);
  *(int *)param_3 = iVar1;
  return;
}

// execGetCustomVariantSetUids @ 14e4b7740

void __cdecl
UInterchangeSceneVariantSetsNode::execGetCustomVariantSetUids
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
            ((TArrayAttributeHelper<FString> *)&param_1[2].field_0x10,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execRemoveCustomVariantSetUid @ 14e4bb5a0

void __cdecl
UInterchangeSceneVariantSetsNode::execRemoveCustomVariantSetUid
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
                    ((TArrayAttributeHelper<FString> *)&param_1[2].field_0x10,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

