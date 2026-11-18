// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 20

// StaticStruct @ 1462c3950

UScriptStruct * __cdecl FDataflowSubGraphInputNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSubGraphInputNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowSubGraphInputNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSubGraphInputNode,(UObject *)pUVar1,
                         L"DataflowSubGraphInputNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSubGraphInputNode.OuterSingleton;
}

// GetType @ 1462c3990

FName __thiscall FDataflowSubGraphInputNode::GetType(FDataflowSubGraphInputNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowSubGraphInputNode");
  return in_RDX;
}

// IsA @ 1462c39c0

bool __thiscall FDataflowSubGraphInputNode::IsA(FDataflowSubGraphInputNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowSubGraphInputNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1462c3a28;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1462c3a28:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1462c3a46;
      }
    }
  }
  bVar5 = true;
LAB_1462c3a46:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1462c3a80

FStructOnScope * __thiscall
FDataflowSubGraphInputNode::NewStructOnScope(FDataflowSubGraphInputNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowSubGraphInputNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
      Z_Registration_Info_UScriptStruct_FDataflowSubGraphInputNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSubGraphInputNode,(UObject *)pUVar2,
                           L"DataflowSubGraphInputNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowSubGraphInputNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1462c3b00

void __thiscall
FDataflowSubGraphInputNode::SerializeInternal(FDataflowSubGraphInputNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSubGraphInputNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowSubGraphInputNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSubGraphInputNode,(UObject *)pUVar1,
                         L"DataflowSubGraphInputNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowSubGraphInputNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowSubGraphInputNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001462c3b7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1462c3b90

FName __thiscall FDataflowSubGraphInputNode::GetDisplayName(FDataflowSubGraphInputNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SubGraphInput");
  return in_RDX;
}

// GetCategory @ 1462c3bc0

FName __thiscall FDataflowSubGraphInputNode::GetCategory(FDataflowSubGraphInputNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SubGraph");
  return in_RDX;
}

// GetTags @ 1462c3bf0

FString * __thiscall
FDataflowSubGraphInputNode::GetTags
          (FDataflowSubGraphInputNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1462c3c20

UScriptStruct * __thiscall
FDataflowSubGraphInputNode::TypedScriptStruct(FDataflowSubGraphInputNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSubGraphInputNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowSubGraphInputNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSubGraphInputNode,(UObject *)pUVar1,
                         L"DataflowSubGraphInputNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSubGraphInputNode.OuterSingleton;
}

// GetOwner @ 1462c3c60

FDataflowNode * __thiscall
FDataflowSubGraphInputNode::GetOwner
          (FDataflowSubGraphInputNode *this,FDataflowDynamicConnections *param_1)

{
  return (FDataflowNode *)&this[-1]._padding_;
}

// GetPropertyBag @ 1462c3c70

FInstancedPropertyBag * __thiscall
FDataflowSubGraphInputNode::GetPropertyBag
          (FDataflowSubGraphInputNode *this,FDataflowDynamicConnections *param_1)

{
  return (FInstancedPropertyBag *)&this->_padding_;
}

// Evaluate @ 1462c3c80

void __thiscall
FDataflowSubGraphInputNode::Evaluate
          (FDataflowSubGraphInputNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  FContext *pFVar4;
  FName local_res10;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x18);
  ::FName::FName(&local_res10,"FContextSubGraph");
  cVar3 = (*pcVar1)(param_1,local_res10);
  pFVar4 = param_1;
  if (cVar3 == '\0') {
    pFVar4 = (FContext *)0x0;
  }
  if (pFVar4 != (FContext *)0x0) {
    puVar2 = *(undefined8 **)&pFVar4[1].DataStore.field_0x8;
                    /* WARNING: Could not recover jumptable at 0x0001462c3ced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,*(undefined8 *)&pFVar4[1].DataStore,pFVar4,param_2);
    return;
  }
  if (param_2 != (FDataflowOutput *)0x0) {
    FDataflowOutput::SetNullValue(param_2,param_1);
  }
  return;
}

// PostSerialize @ 1462c3d20

void __thiscall
FDataflowSubGraphInputNode::PostSerialize(FDataflowSubGraphInputNode *this,FArchive *param_1)

{
  if ((param_1->field_0x28 & 1) != 0) {
    FDataflowDynamicConnections::Refresh(&this->DynamicConnections);
    return;
  }
  return;
}

// OnPropertyChanged @ 1462c3d40

void __thiscall
FDataflowSubGraphInputNode::OnPropertyChanged
          (FDataflowSubGraphInputNode *this,FContext *param_1,FPropertyChangedEvent *param_2)

{
  FDataflowDynamicConnections::Refresh(&this->DynamicConnections);
  return;
}

// SupportsDropConnectionOnNode @ 1462c3d60

bool __thiscall
FDataflowSubGraphInputNode::SupportsDropConnectionOnNode
          (FDataflowSubGraphInputNode *this,FName param_1,EDirection param_2)

{
  return param_2 == INPUT;
}

// OnDropConnectionOnNode @ 1462c3d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

FDataflowConnection * __thiscall
FDataflowSubGraphInputNode::OnDropConnectionOnNode
          (FDataflowSubGraphInputNode *this,FDataflowConnection *param_1)

{
  FPropertyBagPropertyDesc *pFVar1;
  char cVar2;
  FPropertyBagPropertyDesc *pFVar3;
  FDataflowOutput *pFVar4;
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
    pFVar4 = (FDataflowOutput *)0x0;
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
    pFVar4 = FDataflowNode::FindOutput((FDataflowNode *)this,local_90);
  }
  return (FDataflowConnection *)pFVar4;
}

// FDataflowSubGraphInputNode @ 1462ce360

FDataflowSubGraphInputNode * __thiscall
FDataflowSubGraphInputNode::FDataflowSubGraphInputNode
          (FDataflowSubGraphInputNode *this,FNodeParameters *param_1,FGuid *param_2)

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
        &pUVar2->_padding_)) goto LAB_1462ce3d9;
  }
  pUVar3 = (UObject *)0x0;
LAB_1462ce3d9:
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
  (this->DynamicConnections).PinDirection = OUTPUT;
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

// FDataflowSubGraphInputNode @ 1462ce4b0

FDataflowSubGraphInputNode * __thiscall
FDataflowSubGraphInputNode::FDataflowSubGraphInputNode(FDataflowSubGraphInputNode *this)

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

// ~FDataflowSubGraphInputNode @ 1462cfe90

void __thiscall
FDataflowSubGraphInputNode::~FDataflowSubGraphInputNode(FDataflowSubGraphInputNode *this)

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

// AddConnectionsTo @ 1462d1a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall
FDataflowSubGraphInputNode::AddConnectionsTo
          (FDataflowSubGraphInputNode *this,TArrayView<FDataflowConnection_*,int> *param_1)

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

