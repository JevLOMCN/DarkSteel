// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 15

// StaticClass @ 14e47ec20

UClass * __cdecl UInterchangeMeshLODContainerNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMeshLODContainerNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeMeshLODContainerNode",
               &Z_Registration_Info_UClass_UInterchangeMeshLODContainerNode.InnerSingleton,
               StaticRegisterNativesUInterchangeMeshLODContainerNode,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeMeshLODContainerNode>,
               InternalVTableHelperCtorCaller<UInterchangeMeshLODContainerNode>,local_res8,
               UInterchangeBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMeshLODContainerNode.InnerSingleton;
}

// UInterchangeMeshLODContainerNode @ 14e486bd0

UInterchangeMeshLODContainerNode * __thiscall
UInterchangeMeshLODContainerNode::UInterchangeMeshLODContainerNode
          (UInterchangeMeshLODContainerNode *this,FVTableHelper *param_1)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeMeshLODContainerNode__6B_;
  (this->LODMeshUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->LODMeshUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LODMeshUids).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODMeshUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->LODMeshUids).KeyCount.Key.Data.ArrayMax = 0;
  return this;
}

// UInterchangeMeshLODContainerNode @ 14e486c10

UInterchangeMeshLODContainerNode * __thiscall
UInterchangeMeshLODContainerNode::UInterchangeMeshLODContainerNode
          (UInterchangeMeshLODContainerNode *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  bool bVar4;
  UInterchangeMeshLODContainerNode *pUVar5;
  TSharedPtr<UE::Interchange::FAttributeStorage,1> local_28;
  FString local_18;
  
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeMeshLODContainerNode__6B_;
  (this->LODMeshUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->LODMeshUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LODMeshUids).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODMeshUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->LODMeshUids).KeyCount.Key.Data.ArrayMax = 0;
  ::FString::FString(&local_18,L"__LODMeshUids__Key");
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UInterchangeMeshLODContainerNode *)(*pcVar3)();
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
      pUVar5 = (UInterchangeMeshLODContainerNode *)(*pcVar3)();
      return pUVar5;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pFVar2;
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->LODMeshUids,&local_28,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UInterchangeMeshLODContainerNode @ 14e48aed0

void __thiscall
UInterchangeMeshLODContainerNode::~UInterchangeMeshLODContainerNode
          (UInterchangeMeshLODContainerNode *this)

{
  this->_padding_ = (longlong)&___7UInterchangeMeshLODContainerNode__6B_;
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->LODMeshUids);
  UInterchangeBaseNode::~UInterchangeBaseNode((UInterchangeBaseNode *)this);
  return;
}

// AddMeshLODNodeUid @ 14e48dcb0

bool __thiscall
UInterchangeMeshLODContainerNode::AddMeshLODNodeUid
          (UInterchangeMeshLODContainerNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem(&this->LODMeshUids,param_1);
  return bVar1;
}

// GetMeshLODNodeUids @ 14e496880

void __thiscall
UInterchangeMeshLODContainerNode::GetMeshLODNodeUids
          (UInterchangeMeshLODContainerNode *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems(&this->LODMeshUids,param_1);
  return;
}

// GetPrivateStaticClass @ 14e4988f0

UClass * __cdecl UInterchangeMeshLODContainerNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMeshLODContainerNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeMeshLODContainerNode",
               &Z_Registration_Info_UClass_UInterchangeMeshLODContainerNode.InnerSingleton,
               StaticRegisterNativesUInterchangeMeshLODContainerNode,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeMeshLODContainerNode>,
               InternalVTableHelperCtorCaller<UInterchangeMeshLODContainerNode>,local_res8,
               UInterchangeBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMeshLODContainerNode.InnerSingleton;
}

// GetTypeName @ 14e49aa30

FString * __thiscall
UInterchangeMeshLODContainerNode::GetTypeName
          (UInterchangeMeshLODContainerNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"LODContainerComponentNode");
  return __return_storage_ptr__;
}

// RemoveMeshLODNodeUid @ 14e49ee00

bool __thiscall
UInterchangeMeshLODContainerNode::RemoveMeshLODNodeUid
          (UInterchangeMeshLODContainerNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem(&this->LODMeshUids,param_1);
  return bVar1;
}

// ResetMeshLODNodeUids @ 14e49f070

bool __thiscall
UInterchangeMeshLODContainerNode::ResetMeshLODNodeUids(UInterchangeMeshLODContainerNode *this)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveAllItems(&this->LODMeshUids);
  return bVar1;
}

// StaticRegisterNativesUInterchangeMeshLODContainerNode @ 14e4a8700

void __cdecl
UInterchangeMeshLODContainerNode::StaticRegisterNativesUInterchangeMeshLODContainerNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeMeshLODContainerNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddMeshLODNodeUid @ 14e4ac5e0

void __cdecl
UInterchangeMeshLODContainerNode::execAddMeshLODNodeUid
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

// execGetMeshLODNodeUids @ 14e4b8540

void __cdecl
UInterchangeMeshLODContainerNode::execGetMeshLODNodeUids
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

// execRemoveMeshLODNodeUid @ 14e4bb650

void __cdecl
UInterchangeMeshLODContainerNode::execRemoveMeshLODNodeUid
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

// execResetMeshLODNodeUids @ 14e4bbb80

void __cdecl
UInterchangeMeshLODContainerNode::execResetMeshLODNodeUids
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveAllItems
                    ((TArrayAttributeHelper<FString> *)&param_1[2].field_0x10);
  *(bool *)param_3 = bVar1;
  return;
}

