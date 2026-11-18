// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 21

// StaticStruct @ 1462c3fe0

UScriptStruct * __cdecl FDataflowSubGraphOutputNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSubGraphOutputNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowSubGraphOutputNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSubGraphOutputNode,(UObject *)pUVar1,
                         L"DataflowSubGraphOutputNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSubGraphOutputNode.OuterSingleton;
}

// GetType @ 1462c4020

FName __thiscall FDataflowSubGraphOutputNode::GetType(FDataflowSubGraphOutputNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowSubGraphOutputNode");
  return in_RDX;
}

// IsA @ 1462c4050

bool __thiscall FDataflowSubGraphOutputNode::IsA(FDataflowSubGraphOutputNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FDataflowSubGraphOutputNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1462c40b8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1462c40b8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1462c40d6;
      }
    }
  }
  bVar5 = true;
LAB_1462c40d6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1462c4110

FStructOnScope * __thiscall
FDataflowSubGraphOutputNode::NewStructOnScope(FDataflowSubGraphOutputNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowSubGraphOutputNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
      Z_Registration_Info_UScriptStruct_FDataflowSubGraphOutputNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSubGraphOutputNode,(UObject *)pUVar2,
                           L"DataflowSubGraphOutputNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowSubGraphOutputNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1462c4190

void __thiscall
FDataflowSubGraphOutputNode::SerializeInternal(FDataflowSubGraphOutputNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSubGraphOutputNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowSubGraphOutputNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSubGraphOutputNode,(UObject *)pUVar1,
                         L"DataflowSubGraphOutputNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowSubGraphOutputNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowSubGraphOutputNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001462c420d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1462c4220

FName __thiscall FDataflowSubGraphOutputNode::GetDisplayName(FDataflowSubGraphOutputNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SubGraphOutput");
  return in_RDX;
}

// GetCategory @ 1462c4250

FName __thiscall FDataflowSubGraphOutputNode::GetCategory(FDataflowSubGraphOutputNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SubGraph");
  return in_RDX;
}

// GetTags @ 1462c4280

FString * __thiscall
FDataflowSubGraphOutputNode::GetTags
          (FDataflowSubGraphOutputNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1462c42b0

UScriptStruct * __thiscall
FDataflowSubGraphOutputNode::TypedScriptStruct(FDataflowSubGraphOutputNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSubGraphOutputNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowSubGraphOutputNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSubGraphOutputNode,(UObject *)pUVar1,
                         L"DataflowSubGraphOutputNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSubGraphOutputNode.OuterSingleton;
}

// GetOwner @ 1462c42f0

FDataflowNode * __thiscall
FDataflowSubGraphOutputNode::GetOwner
          (FDataflowSubGraphOutputNode *this,FDataflowDynamicConnections *param_1)

{
  return (FDataflowNode *)&this[-1]._padding_;
}

// GetPropertyBag @ 1462c4300

FInstancedPropertyBag * __thiscall
FDataflowSubGraphOutputNode::GetPropertyBag
          (FDataflowSubGraphOutputNode *this,FDataflowDynamicConnections *param_1)

{
  return (FInstancedPropertyBag *)&this->_padding_;
}

// Evaluate @ 1462c4350

void __thiscall
FDataflowSubGraphOutputNode::Evaluate
          (FDataflowSubGraphOutputNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  return;
}

// PostSerialize @ 1462c4360

void __thiscall
FDataflowSubGraphOutputNode::PostSerialize(FDataflowSubGraphOutputNode *this,FArchive *param_1)

{
  if ((param_1->field_0x28 & 1) != 0) {
    FDataflowDynamicConnections::Refresh(&this->DynamicConnections);
    return;
  }
  return;
}

// OnPropertyChanged @ 1462c4380

void __thiscall
FDataflowSubGraphOutputNode::OnPropertyChanged
          (FDataflowSubGraphOutputNode *this,FContext *param_1,FPropertyChangedEvent *param_2)

{
  FDataflowDynamicConnections::Refresh(&this->DynamicConnections);
  return;
}

// SupportsDropConnectionOnNode @ 1462c43a0

bool __thiscall
FDataflowSubGraphOutputNode::SupportsDropConnectionOnNode
          (FDataflowSubGraphOutputNode *this,FName param_1,EDirection param_2)

{
  return param_2 == OUTPUT;
}

// OnDropConnectionOnNode @ 1462c43b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

FDataflowConnection * __thiscall
FDataflowSubGraphOutputNode::OnDropConnectionOnNode
          (FDataflowSubGraphOutputNode *this,FDataflowConnection *param_1)

{
  FPropertyBagPropertyDesc *pFVar1;
  char cVar2;
  FPropertyBagPropertyDesc *pFVar3;
  FDataflowInput *pFVar4;
  uint uVar5;
  undefined1 auStack_d8 [32];
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_b8;
  TObjectPtr<UObject_const_>_u_0 local_a8;
  FGuid local_a0;
  FName local_90;
  EPropertyBagPropertyType local_88;
  EPropertyBagContainerType local_87 [2];
  uchar local_85;
  ulong64 local_80;
  FProperty *local_78;
  int local_70;
  FPropertyBagPropertyDesc local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  cVar2 = (**(code **)(this->_padding_ + 0x100))(this,param_1->Type,param_1->Direction);
  if (cVar2 == '\0') {
    pFVar4 = (FDataflowInput *)0x0;
  }
  else {
    UE::Dataflow::Type::GetPropertyBagPropertyDescFromDataflowConnection
              ((FPropertyBagPropertyDesc *)&local_a8.ObjectPtr,param_1);
    local_b8.DataPtr = (FPropertyBagPropertyDesc *)local_90;
    uVar5 = 1;
    pFVar3 = FInstancedPropertyBag::FindPropertyDescByName(&this->PropertyBag,local_90);
    while (pFVar3 != (FPropertyBagPropertyDesc *)0x0) {
      local_b8.DataPtr = (FPropertyBagPropertyDesc *)CONCAT44(uVar5,(uint)local_b8.DataPtr);
      pFVar1 = local_b8.DataPtr;
      uVar5 = uVar5 + 1;
      pFVar3 = FInstancedPropertyBag::FindPropertyDescByName
                         (&this->PropertyBag,(FName)local_b8.DataPtr);
      local_90 = (FName)pFVar1;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_a8.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_a8.DebugPtr);
    }
    local_68.ValueType = local_88;
    local_68.ContainerTypes.Types.Elements[0] = local_87[0];
    local_68.ContainerTypes.Types.Elements[1] = local_87[1];
    local_68.ContainerTypes.NumContainers = local_85;
    local_68.PropertyFlags = local_80;
    local_68.CachedProperty = local_78;
    local_b8.ArrayNum = 1;
    local_68.CachedIndex = local_70;
    local_b8.DataPtr = &local_68;
    local_68.ID.A = local_a0.A;
    local_68.ID.B = local_a0.B;
    local_68.ID.C = local_a0.C;
    local_68.ID.D = local_a0.D;
    local_68.Name = local_90;
    FInstancedPropertyBag::AddProperties(&this->PropertyBag,&local_b8,true);
    FDataflowDynamicConnections::Refresh(&this->DynamicConnections);
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,local_90);
  }
  return (FDataflowConnection *)pFVar4;
}

// MakeConnectedPropertiesReadOnly @ 1462c4520

bool __thiscall
FDataflowSubGraphOutputNode::MakeConnectedPropertiesReadOnly(FDataflowSubGraphOutputNode *this)

{
  return false;
}

// FDataflowSubGraphOutputNode @ 1462ce570

FDataflowSubGraphOutputNode * __thiscall
FDataflowSubGraphOutputNode::FDataflowSubGraphOutputNode
          (FDataflowSubGraphOutputNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  UObject *local_res8;
  FGuid local_18;
  
  local_18.A = param_2->A;
  local_18.B = param_2->B;
  local_18.C = param_2->C;
  local_18.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_18);
  this->_padding_ = (longlong)&_vftable__for__FDataflowNode__;
  this->_padding_ = (longlong)&_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  pUVar3 = param_1->OwningObject;
  if (pUVar3 != (UObject *)0x0) {
    pUVar2 = UDataflow::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_1462ce5e9;
  }
  pUVar3 = (UObject *)0x0;
LAB_1462ce5e9:
  (this->DynamicConnections).DynamicProperties.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DynamicConnections).DynamicProperties.ArrayNum = 0;
  (this->DynamicConnections).DynamicProperties.ArrayMax = 0;
  *(undefined8 *)&(this->DynamicConnections).ConnectionNameToPropertyId = 0;
  *(undefined8 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x20 = 0;
  *(undefined4 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x28 = 0;
  *(undefined4 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x34 = 0;
  *(undefined8 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x40 = 0;
  *(undefined4 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x48 = 0;
  (this->DynamicConnections).PinDirection = INPUT;
  (this->DynamicConnections).OwnerInterface = (IOwnerInterface *)&this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  (this->DynamicConnections).DataflowAssetWeakPtr.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=
            (&(this->DynamicConnections).DataflowAssetWeakPtr.WeakPtr,(FObjectPtr)&local_res8);
  FInstancedStruct::FInstancedStruct(&(this->PropertyBag).Value);
  return this;
}

// FDataflowSubGraphOutputNode @ 1462ce6c0

FDataflowSubGraphOutputNode * __thiscall
FDataflowSubGraphOutputNode::FDataflowSubGraphOutputNode(FDataflowSubGraphOutputNode *this)

{
  TWeakObjectPtr<UDataflow,FWeakObjectPtr> *this_00;
  undefined8 local_res8 [4];
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&_vftable__for__FDataflowNode__;
  this_00 = &(this->DynamicConnections).DataflowAssetWeakPtr;
  this->_padding_ = (longlong)&_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  (this->DynamicConnections).DynamicProperties.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DynamicConnections).DynamicProperties.ArrayNum = 0;
  (this->DynamicConnections).DynamicProperties.ArrayMax = 0;
  *(undefined8 *)&(this->DynamicConnections).ConnectionNameToPropertyId = 0;
  *(undefined8 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x20 = 0;
  *(undefined4 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x28 = 0;
  *(undefined4 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x34 = 0;
  *(undefined8 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x40 = 0;
  *(undefined4 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x48 = 0;
  (this->DynamicConnections).PinDirection = NONE;
  (this->DynamicConnections).OwnerInterface = (IOwnerInterface *)0x0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)local_res8);
  FInstancedStruct::FInstancedStruct(&(this->PropertyBag).Value);
  return this;
}

// ~FDataflowSubGraphOutputNode @ 1462cff00

void __thiscall
FDataflowSubGraphOutputNode::~FDataflowSubGraphOutputNode(FDataflowSubGraphOutputNode *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  FInstancedStruct::Reset(&(this->PropertyBag).Value);
  *(undefined4 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x48 = 0;
  pvVar1 = *(void **)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DynamicConnections).ConnectionNameToPropertyId);
  pFVar2 = (this->DynamicConnections).DynamicProperties.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

// AddConnectionsTo @ 1462d1c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall
FDataflowSubGraphOutputNode::AddConnectionsTo
          (FDataflowSubGraphOutputNode *this,TArrayView<FDataflowConnection_*,int> *param_1)

{
  FDataflowConnection **ppFVar1;
  FDataflowConnection *pFVar2;
  FName FVar3;
  char cVar4;
  FPropertyBagPropertyDesc *pFVar5;
  FDataflowConnection **ppFVar6;
  uint uVar7;
  undefined1 auStack_f8 [32];
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_d8;
  TObjectPtr<UObject_const_>_u_0 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  FName local_a0;
  undefined1 local_98;
  undefined2 local_97;
  undefined1 local_95;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  TObjectPtr<UObject_const_>_u_0 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  FName local_60;
  undefined1 local_58;
  undefined2 local_57;
  undefined1 local_55;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  ppFVar6 = param_1->DataPtr;
  ppFVar1 = ppFVar6 + param_1->ArrayNum;
  for (; ppFVar6 != ppFVar1; ppFVar6 = ppFVar6 + 1) {
    pFVar2 = *ppFVar6;
    if ((pFVar2 != (FDataflowConnection *)0x0) &&
       (cVar4 = (**(code **)(this->_padding_ + 0x100))(this,pFVar2->Type,pFVar2->Direction),
       cVar4 != '\0')) {
      UE::Dataflow::Type::GetPropertyBagPropertyDescFromDataflowConnection
                ((FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,pFVar2);
      FVar3 = local_a0;
      local_d8.DataPtr = (FPropertyBagPropertyDesc *)local_a0;
      uVar7 = 1;
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName(&this->PropertyBag,local_a0);
      while (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        local_d8.DataPtr = (FPropertyBagPropertyDesc *)CONCAT44(uVar7,(uint)local_d8.DataPtr);
        FVar3 = (FName)local_d8.DataPtr;
        uVar7 = uVar7 + 1;
        pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                           (&this->PropertyBag,(FName)local_d8.DataPtr);
      }
      local_a0 = FVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_b8.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_b8.DebugPtr);
      }
      local_58 = local_98;
      local_57 = local_97;
      local_55 = local_95;
      local_50 = local_90;
      local_48 = local_88;
      local_40 = local_80;
      local_d8.DataPtr = (FPropertyBagPropertyDesc *)&local_78;
      local_70 = local_b0;
      uStack_68 = uStack_a8;
      uStack_c0 = 1;
      local_d8._12_4_ = uStack_bc;
      local_d8.ArrayNum = 1;
      local_c8 = (TObjectPtr<UObject_const_>_u_0 *)local_d8.DataPtr;
      local_60 = local_a0;
      FInstancedPropertyBag::AddProperties(&this->PropertyBag,&local_d8,true);
    }
  }
  FDataflowDynamicConnections::Refresh(&this->DynamicConnections);
  return;
}

