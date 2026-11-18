// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 13

// StaticStruct @ 1462c61b0

UScriptStruct * __cdecl FDataflowDynamicConnections::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowDynamicConnections.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowDynamicConnections.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowDynamicConnections,(UObject *)pUVar1,
                         L"DataflowDynamicConnections");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowDynamicConnections.OuterSingleton;
}

// FDataflowDynamicConnections @ 1462ce000

FDataflowDynamicConnections * __thiscall
FDataflowDynamicConnections::FDataflowDynamicConnections
          (FDataflowDynamicConnections *this,EDirection param_1,IOwnerInterface *param_2,
          UDataflow *param_3)

{
  UDataflow *local_res8;
  
  (this->DynamicProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicProperties).ArrayNum = 0;
  (this->DynamicProperties).ArrayMax = 0;
  *(undefined8 *)&this->ConnectionNameToPropertyId = 0;
  *(undefined8 *)&(this->ConnectionNameToPropertyId).field_0x8 = 0;
  *(undefined8 *)&(this->ConnectionNameToPropertyId).field_0x20 = 0;
  *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x28 = 0;
  *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x34 = 0;
  *(undefined8 *)&(this->ConnectionNameToPropertyId).field_0x40 = 0;
  *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x48 = 0;
  this->PinDirection = param_1;
  this->OwnerInterface = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UDataflow *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  (this->DataflowAssetWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UDataflow *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  FWeakObjectPtr::operator=(&(this->DataflowAssetWeakPtr).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// FDataflowDynamicConnections @ 1462ce0c0

FDataflowDynamicConnections * __thiscall
FDataflowDynamicConnections::FDataflowDynamicConnections(FDataflowDynamicConnections *this)

{
  undefined8 local_res8 [4];
  
  (this->DynamicProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicProperties).ArrayNum = 0;
  (this->DynamicProperties).ArrayMax = 0;
  *(undefined8 *)&this->ConnectionNameToPropertyId = 0;
  *(undefined8 *)&(this->ConnectionNameToPropertyId).field_0x8 = 0;
  *(undefined8 *)&(this->ConnectionNameToPropertyId).field_0x20 = 0;
  *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x28 = 0;
  *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x34 = 0;
  *(undefined8 *)&(this->ConnectionNameToPropertyId).field_0x40 = 0;
  *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x48 = 0;
  this->PinDirection = NONE;
  this->OwnerInterface = (IOwnerInterface *)0x0;
  local_res8[0] = 0;
  (this->DataflowAssetWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->DataflowAssetWeakPtr).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// operator= @ 1462d06e0

FDataflowDynamicConnections * __thiscall
FDataflowDynamicConnections::operator=
          (FDataflowDynamicConnections *this,FDataflowDynamicConnections *param_1)

{
  int *piVar1;
  TMap<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_> *this_00;
  undefined1 *puVar2;
  undefined1 *this_01;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar3 = (param_1->DynamicProperties).ArrayNum;
    piVar1 = &(this->DynamicProperties).ArrayMax;
    _Src = (param_1->DynamicProperties).AllocatorInstance.Data;
    (this->DynamicProperties).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar3,*piVar1,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->DynamicProperties).AllocatorInstance.Data,_Src,(longlong)iVar3);
      }
    }
  }
  this_00 = &this->ConnectionNameToPropertyId;
  if (this_00 != &param_1->ConnectionNameToPropertyId) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ConnectionNameToPropertyId).field_0x38,
               (int *)&(this->ConnectionNameToPropertyId).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->ConnectionNameToPropertyId).field_0x38,
               *(int *)&(param_1->ConnectionNameToPropertyId).field_0x48);
    iVar3 = *(int *)&(param_1->ConnectionNameToPropertyId).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,iVar3,(ForAnyElementType *)this_00,
               (int *)&(this->ConnectionNameToPropertyId).field_0x8,
               (int *)&(this->ConnectionNameToPropertyId).field_0xc);
    puVar2 = &(param_1->ConnectionNameToPropertyId).field_0x10;
    this_01 = &(this->ConnectionNameToPropertyId).field_0x10;
    *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x30 =
         *(undefined4 *)&(param_1->ConnectionNameToPropertyId).field_0x30;
    *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x34 =
         *(undefined4 *)&(param_1->ConnectionNameToPropertyId).field_0x34;
    if (this_01 != puVar2) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->ConnectionNameToPropertyId,(longlong)iVar3 << 5);
    }
  }
  this->PinDirection = param_1->PinDirection;
  this->OwnerInterface = param_1->OwnerInterface;
  (this->DataflowAssetWeakPtr).WeakPtr = (param_1->DataflowAssetWeakPtr).WeakPtr;
  return this;
}

// AddNewConnectionFromPropertyDesc @ 1462d1df0

FDataflowConnection * __thiscall
FDataflowDynamicConnections::AddNewConnectionFromPropertyDesc
          (FDataflowDynamicConnections *this,FPropertyBagPropertyDesc *param_1)

{
  int *piVar1;
  IOwnerInterface *pIVar2;
  code *pcVar3;
  bool bVar4;
  FDataflowNode *this_00;
  FDataflowConnection *pFVar5;
  FDataflowNode *this_01;
  FDataflowOutput *this_02;
  longlong lVar6;
  uint uVar7;
  EPropertyBagContainerType EVar8;
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FName local_a0;
  FConnectionReference local_98;
  FName local_80;
  FName local_78;
  FName local_70;
  longlong local_68;
  longlong *local_60;
  FGuid *local_58;
  FConnectionReference local_48;
  
  pIVar2 = this->OwnerInterface;
  if ((pIVar2 != (IOwnerInterface *)0x0) &&
     (this_00 = (FDataflowNode *)(**(code **)*pIVar2)(pIVar2,this), this_00 != (FDataflowNode *)0x0)
     ) {
    local_98.Index = (this->DynamicProperties).ArrayNum;
    piVar1 = &(this->DynamicProperties).ArrayMax;
    if (local_98.Index == *piVar1) {
      local_98.Index =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x101,(ForAnyElementType *)this,piVar1);
    }
    (this->DynamicProperties).ArrayNum = local_98.Index + 1U;
    uVar7 = 0;
    if (local_98.Index < (int)(local_98.Index + 1U)) {
      uVar7 = (uint)~local_98.Index >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDataflowConnection *)(*pcVar3)();
      return pFVar5;
    }
    pIVar2 = this->OwnerInterface;
    local_98.Reference = (this->DynamicProperties).AllocatorInstance.Data + local_98.Index;
    local_48._12_4_ = local_98._12_4_;
    if (pIVar2 != (IOwnerInterface *)0x0) {
      local_98.ContainerReference = this;
      local_48.Index = local_98.Index;
      local_48.ContainerReference = this;
      local_48.Reference = local_98.Reference;
      this_01 = (FDataflowNode *)(**(code **)*pIVar2)(pIVar2,this);
      if (this_01 != (FDataflowNode *)0x0) {
        if (this->PinDirection == INPUT) {
          local_res18.ComparisonIndex.Value = 0;
          local_res18.Number = 0;
          local_res20.ComparisonIndex.Value = 0;
          local_res20.Number = 0;
          this_02 = (FDataflowOutput *)
                    FDataflowNode::RegisterInputArrayConnectionInternal
                              (this_01,&local_48,&local_res20,&local_res18);
        }
        else {
          if (this->PinDirection != OUTPUT) {
            return (FDataflowConnection *)0x0;
          }
          local_a8.ComparisonIndex.Value = 0;
          local_a8.Number = 0;
          local_a0.ComparisonIndex.Value = 0;
          local_a0.Number = 0;
          this_02 = FDataflowNode::RegisterOutputArrayConnectionInternal
                              (this_01,&local_48,&local_a0,&local_a8);
        }
        FDataflowConnection::SetTypePolicy
                  ((FDataflowConnection *)this_02,
                   (IDataflowTypePolicy *)
                   &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowAllTypesPolicy::GetInterface(void)'
                    ::__l2::Instance);
        if (this_02 != (FDataflowOutput *)0x0) {
          pIVar2 = this->OwnerInterface;
          if (pIVar2 != (IOwnerInterface *)0x0) {
            lVar6 = (**(code **)*pIVar2)(pIVar2,this);
            if (lVar6 != 0) {
              FDataflowConnection::GetTypeNameFromProperty((FProperty *)&local_70);
              if ((param_1->ContainerTypes).NumContainers == '\0') {
                EVar8 = None;
              }
              else {
                EVar8 = (param_1->ContainerTypes).Types.Elements[0];
              }
              switch(param_1->ValueType) {
              case Bool:
              case Byte:
              case Int32:
              case Int64:
              case Name:
              case String:
              case Text:
              case Struct:
              case Object:
                break;
              case Float:
              case Double:
                if (EVar8 == Array) {
                  ::FName::FName(&local_80,L"TArray<float>");
                  local_70 = local_80;
                }
                else {
                  ::FName::FName(&local_78,L"float");
                  local_70 = local_78;
                }
                break;
              default:
                goto switchD_1462d1f97_caseD_a;
              }
              FDataflowConnection::SetConcreteType((FDataflowConnection *)this_02,local_70);
            }
          }
switchD_1462d1f97_caseD_a:
          if (this->PinDirection == INPUT) {
            FDataflowNode::TryRenameInput(this_00,&local_98,param_1->Name);
          }
          else if (this->PinDirection == OUTPUT) {
            FDataflowNode::TryRenameOutput(this_00,&local_98,param_1->Name);
          }
          local_68 = this_02->_padding_;
          local_60 = &local_68;
          *(byte *)&this_02->_padding_ = (byte)this_02->_padding_ | 1;
          local_58 = &param_1->ID;
          TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_&&,FGuid_const_&>_>
                    ((TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>
                      *)&this->ConnectionNameToPropertyId,
                     (TPairInitializer<FName_&&,FGuid_const_&> *)&stack0x00000008,(bool *)&local_60)
          ;
          return (FDataflowConnection *)this_02;
        }
      }
    }
  }
  return (FDataflowConnection *)0x0;
}

// ClearDynamicConnections @ 1462d52e0

void __thiscall
FDataflowDynamicConnections::ClearDynamicConnections(FDataflowDynamicConnections *this)

{
  IOwnerInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDataflowNode *this_00;
  FConnectionKey *pFVar5;
  int iVar6;
  uint uVar7;
  FConnectionKey local_58;
  FConnectionKey local_4c;
  FConnectionReference local_40;
  FConnectionReference local_28;
  
  pIVar1 = this->OwnerInterface;
  if ((pIVar1 != (IOwnerInterface *)0x0) &&
     (this_00 = (FDataflowNode *)(**(code **)*pIVar1)(pIVar1,this), this_00 != (FDataflowNode *)0x0)
     ) {
    iVar6 = (this->DynamicProperties).ArrayNum;
    uVar7 = 0;
    if (0 < iVar6) {
      do {
        if (this->PinDirection == INPUT) {
          uVar4 = 0;
          if ((int)uVar7 < iVar6) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_40.Reference = (this->DynamicProperties).AllocatorInstance.Data + (int)uVar7;
          local_40.Index = uVar7;
          local_40.ContainerReference = this;
          pFVar5 = FDataflowNode::GetKeyFromReference(this_00,&local_58,&local_40);
          FDataflowNode::UnregisterInputConnection(this_00,pFVar5);
        }
        else if (this->PinDirection == OUTPUT) {
          uVar4 = 0;
          if ((int)uVar7 < iVar6) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_28.Reference = (this->DynamicProperties).AllocatorInstance.Data + (int)uVar7;
          local_28.Index = uVar7;
          local_28.ContainerReference = this;
          pFVar5 = FDataflowNode::GetKeyFromReference(this_00,&local_4c,&local_28);
          FDataflowNode::UnregisterOutputConnection(this_00,pFVar5);
        }
        iVar6 = (this->DynamicProperties).ArrayNum;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar6);
    }
  }
  TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>
              *)&this->ConnectionNameToPropertyId);
  (this->DynamicProperties).ArrayNum = 0;
  if ((this->DynamicProperties).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,0,&(this->DynamicProperties).ArrayMax);
  }
  return;
}

// CreateConnection @ 1462d5d10

FDataflowConnection * __thiscall
FDataflowDynamicConnections::CreateConnection
          (FDataflowDynamicConnections *this,TConnectionReference<FDataflowAllTypes> *param_1)

{
  IOwnerInterface *pIVar1;
  FDataflowNode *this_00;
  FDataflowOutput *this_01;
  FName local_res8;
  FName local_res18 [2];
  
  pIVar1 = this->OwnerInterface;
  if ((pIVar1 != (IOwnerInterface *)0x0) &&
     (this_00 = (FDataflowNode *)(**(code **)*pIVar1)(pIVar1,this), this_00 != (FDataflowNode *)0x0)
     ) {
    if (this->PinDirection == INPUT) {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      local_res18[0].ComparisonIndex.Value = 0;
      local_res18[0].Number = 0;
      this_01 = (FDataflowOutput *)
                FDataflowNode::RegisterInputArrayConnectionInternal
                          (this_00,(FConnectionReference *)param_1,local_res18,&local_res8);
    }
    else {
      if (this->PinDirection != OUTPUT) {
        return (FDataflowConnection *)0x0;
      }
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      local_res18[0].ComparisonIndex.Value = 0;
      local_res18[0].Number = 0;
      this_01 = FDataflowNode::RegisterOutputArrayConnectionInternal
                          (this_00,(FConnectionReference *)param_1,local_res18,&local_res8);
    }
    FDataflowConnection::SetTypePolicy
              ((FDataflowConnection *)this_01,
               (IDataflowTypePolicy *)
               &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowAllTypesPolicy::GetInterface(void)'
                ::__l2::Instance);
    return (FDataflowConnection *)this_01;
  }
  return (FDataflowConnection *)0x0;
}

// GetConnectionReference @ 1462dc170

TConnectionReference<FDataflowAllTypes> * __thiscall
FDataflowDynamicConnections::GetConnectionReference
          (FDataflowDynamicConnections *this,
          TConnectionReference<FDataflowAllTypes> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TConnectionReference<FDataflowAllTypes> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->DynamicProperties).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TConnectionReference<FDataflowAllTypes> *)(*pcVar1)();
      return pTVar4;
    }
  }
  *(FDataflowDynamicConnections **)&__return_storage_ptr__->field_0x10 = this;
  *(FScriptContainerElement **)__return_storage_ptr__ =
       (this->DynamicProperties).AllocatorInstance.Data + param_1;
  *(int *)&__return_storage_ptr__->field_0x8 = param_1;
  return __return_storage_ptr__;
}

// GetCppTypeFromPropertyDesc @ 1462dc200

FName __thiscall
FDataflowDynamicConnections::GetCppTypeFromPropertyDesc
          (FDataflowDynamicConnections *this,FPropertyBagPropertyDesc *param_1)

{
  FDataflowConnection::GetTypeNameFromProperty((FProperty *)param_1);
  return (FName)param_1;
}

// GetDynamicConnections @ 1462dcbe0

TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowDynamicConnections::GetDynamicConnections
          (FDataflowDynamicConnections *this,
          TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  IOwnerInterface *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDataflowNode *this_00;
  TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> local_38;
  TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayNum;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  pIVar4 = this->OwnerInterface;
  if ((pIVar4 != (IOwnerInterface *)0x0) &&
     (this_00 = (FDataflowNode *)(**(code **)*pIVar4)(pIVar4,this), this_00 != (FDataflowNode *)0x0)
     ) {
    if (this->PinDirection == INPUT) {
      pTVar8 = FDataflowNode::GetInputs(this_00,&local_38);
      if ((__return_storage_ptr__ ==
           (TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_> *)pTVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
      iVar3 = pTVar8->ArrayNum;
      local_28.AllocatorInstance.Data = local_38.AllocatorInstance.Data;
      if (iVar3 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar3,&__return_storage_ptr__->AllocatorInstance,piVar1,piVar2);
        RelocateConstructItems<FDataflowConnection_*,FDataflowInput_*,int>
                  ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8,
                   (FDataflowInput **)(pTVar8->AllocatorInstance).Data,iVar3);
        pTVar8->ArrayNum = 0;
        local_28.AllocatorInstance.Data = local_38.AllocatorInstance.Data;
      }
    }
    else {
      if (this->PinDirection != OUTPUT) {
        return __return_storage_ptr__;
      }
      pTVar10 = FDataflowNode::GetOutputs(this_00,&local_28);
      if ((__return_storage_ptr__ ==
           (TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_> *)pTVar10) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
      iVar3 = pTVar10->ArrayNum;
      if (iVar3 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar3,&__return_storage_ptr__->AllocatorInstance,piVar1,piVar2);
        RelocateConstructItems<FDataflowConnection_*,FDataflowOutput_*,int>
                  ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8,
                   (FDataflowOutput **)(pTVar10->AllocatorInstance).Data,iVar3);
        pTVar10->ArrayNum = 0;
      }
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// IsSupportedType @ 1462dfe20

bool __thiscall
FDataflowDynamicConnections::IsSupportedType
          (FDataflowDynamicConnections *this,FPropertyBagPropertyDesc *param_1)

{
  switch(param_1->ValueType) {
  case Bool:
  case Byte:
  case Int32:
  case Int64:
  case Float:
  case Double:
  case Name:
  case String:
  case Text:
  case Struct:
  case Object:
    return true;
  default:
    return false;
  }
}

// Refresh @ 1462e22f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FDataflowDynamicConnections::Refresh(FDataflowDynamicConnections *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  undefined8 *puVar3;
  TMap<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_> *pTVar4;
  IOwnerInterface *pIVar5;
  FName FVar6;
  undefined1 *puVar7;
  code *pcVar8;
  FGraph *pFVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FDataflowNode *pFVar13;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar14;
  FName *pFVar15;
  FInstancedPropertyBag *this_00;
  UPropertyBag *pUVar16;
  FDataflowConnection *pFVar17;
  ulong64 uVar18;
  FName *pFVar19;
  undefined1 *puVar20;
  FProperty *pFVar21;
  FGuid *pFVar22;
  undefined8 *puVar23;
  TKeyInitializer<FGuid_const_&> TVar24;
  ForAnyElementType FVar25;
  FGuid *pFVar26;
  FPropertyBagPropertyDesc *pFVar27;
  UDataflow *this_01;
  FPropertyBagPropertyDesc *pFVar28;
  FGuid *pFVar29;
  undefined1 auStack_178 [32];
  undefined1 local_158 [8];
  TKeyInitializer<FGuid_const_&> local_150;
  undefined1 local_148 [8];
  FDataflowDynamicConnections *local_140;
  FPropertyBagPropertyDesc *local_138;
  FGraph *local_130;
  UDataflow *local_128;
  FDataflowNode *local_120;
  TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_> local_118;
  FName *local_108;
  FTimestamp local_100;
  TReferenceControllerBase<1> *local_f8;
  undefined1 local_f0 [16];
  longlong lStack_e0;
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_d8;
  undefined1 local_a0 [24];
  TSet<TTuple<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_88;
  FName local_38;
  
  local_38 = (FName)(__security_cookie.value ^ (ulonglong)auStack_178);
  pIVar5 = this->OwnerInterface;
  if ((pIVar5 != (IOwnerInterface *)0x0) &&
     (local_140 = this, pFVar13 = (FDataflowNode *)(**(code **)*pIVar5)(pIVar5,this),
     pFVar13 != (FDataflowNode *)0x0)) {
    local_120 = pFVar13;
    TVar14 = FWeakObjectPtr::Pin(&(this->DataflowAssetWeakPtr).WeakPtr);
    this_01 = *(UDataflow **)TVar14.Object;
    *(undefined8 *)TVar14.Object = 0;
    local_128 = this_01;
    if (local_138 != (FPropertyBagPropertyDesc *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_138);
      local_138 = (FPropertyBagPropertyDesc *)0x0;
    }
    if (this_01 != (UDataflow *)0x0) {
      local_f8 = (this_01->Dataflow).SharedReferenceCount.ReferenceController;
      local_130 = (this_01->Dataflow).Object;
      if (local_f8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_f8->SharedReferenceCount = (atomic<int>)((int)local_f8->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_130 != (FGraph *)0x0) {
        if (pFVar13->bPauseInvalidations == false) {
          pFVar13->bPauseInvalidations = true;
          (pFVar13->PausedModifiedTimestamp).Value = UE::Dataflow::FTimestamp::Invalid;
        }
        local_88.Elements._44_4_ = 0x80;
        local_88.Elements._0_4_ = 0;
        local_88.Elements._4_4_ = 0;
        local_88.Elements._8_8_ = 0;
        local_88.Elements._32_8_ = CPF_None;
        local_88.Elements._40_2_ = 0;
        local_88.Elements._42_1_ = '\0';
        local_88.Elements._43_1_ = 0;
        local_88.Elements._52_4_ = 0;
        local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_88.HashSize = 0;
        local_88.Elements._48_4_ = 0xffffffff;
        GetDynamicConnections(this,&local_118);
        iVar12 = local_118.ArrayNum;
        pFVar9 = local_130;
        pFVar1 = local_118.AllocatorInstance.Data + (longlong)local_118.ArrayNum * 8;
        FVar25.Data = local_118.AllocatorInstance.Data;
LAB_1462e2437:
        if (local_118.ArrayNum != iVar12) {
          local_158[0] = 0;
          `TCheckedPointerIterator<FDataflowConnection_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_158);
        }
        this_01 = local_128;
        if (FVar25.Data != pFVar1) {
          pFVar17 = *(FDataflowConnection **)FVar25.Data;
          if (pFVar17 != (FDataflowConnection *)0x0) {
            FVar6 = pFVar17->Name;
            uVar11 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
            if (*(int *)&(this->ConnectionNameToPropertyId).field_0x8 !=
                *(int *)&(this->ConnectionNameToPropertyId).field_0x34) {
              puVar7 = *(undefined1 **)&(this->ConnectionNameToPropertyId).field_0x40;
              puVar20 = &(this->ConnectionNameToPropertyId).field_0x38;
              if (puVar7 != (undefined1 *)0x0) {
                puVar20 = puVar7;
              }
              uVar11 = *(uint *)(puVar20 +
                                (ulonglong)
                                (*(int *)&(this->ConnectionNameToPropertyId).field_0x48 - 1U &
                                FVar6.Number + uVar11) * 4);
              if (uVar11 != 0xffffffff) {
                do {
                  pFVar19 = (FName *)((longlong)(int)uVar11 * 0x20 +
                                     *(longlong *)&this->ConnectionNameToPropertyId);
                  if (*pFVar19 == FVar6) {
                    pFVar15 = pFVar19 + 1;
                    if (pFVar19 == (FName *)0x0) {
                      pFVar15 = (FName *)0x0;
                    }
                    if (pFVar15 != (FName *)0x0) {
                      local_108 = pFVar15;
                      TSet<TTuple<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      ::Emplace<TKeyInitializer<FGuid_const_&>_>
                                ((TSet<TTuple<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                  *)(local_a0 + 0x18),&local_150,(bool *)&local_108);
                      (**(code **)(pFVar17->_padding_ + 0x40))
                                (pFVar17,local_88.Elements._0_8_ +
                                         ((longlong)(int)local_150.Key * 5 + 2) * 8);
                      UE::Dataflow::FGraph::ClearConnections(pFVar9,pFVar17);
                      FVar25.Data = FVar25.Data + 8;
                      goto LAB_1462e2437;
                    }
                    break;
                  }
                  uVar11 = pFVar19[3].ComparisonIndex.Value;
                } while (uVar11 != 0xffffffff);
              }
            }
          }
          FVar25.Data = FVar25.Data + 8;
          goto LAB_1462e2437;
        }
        if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.AllocatorInstance.Data);
        }
        pTVar4 = &this->ConnectionNameToPropertyId;
        local_d8._0_8_ = 0;
        local_d8._8_8_ = 0;
        local_d8._32_8_ = CPF_None;
        local_d8._40_4_ = 0;
        local_d8._44_4_ = 0x80;
        local_d8._48_4_ = 0xffffffff;
        local_d8._52_4_ = 0;
        if ((TMap<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_> *)
            &local_d8 != pTVar4) {
          local_d8._0_8_ = *(undefined8 *)pTVar4;
          puVar7 = &(this->ConnectionNameToPropertyId).field_0x10;
          *(undefined8 *)pTVar4 = 0;
          local_d8._8_8_ = *(undefined8 *)&(this->ConnectionNameToPropertyId).field_0x8;
          *(undefined8 *)&(this->ConnectionNameToPropertyId).field_0x8 = 0;
          if (&local_d8.field_0x10 != puVar7) {
            local_d8._32_8_ = *(undefined8 *)&(this->ConnectionNameToPropertyId).field_0x20;
            if (local_d8._32_8_ == CPF_None) {
              local_d8._16_8_ = *(undefined8 *)puVar7;
              local_d8._24_8_ = *(undefined8 *)&(this->ConnectionNameToPropertyId).field_0x18;
            }
            *(undefined8 *)&(this->ConnectionNameToPropertyId).field_0x20 = 0;
            local_d8._40_4_ = *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x28;
            local_d8._44_4_ = *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x2c;
            *(undefined8 *)&(this->ConnectionNameToPropertyId).field_0x28 = 0;
          }
          local_d8._48_4_ = *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x30;
          local_d8._52_4_ = *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x34;
          *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x34 = 0;
          *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x30 = 0xffffffff;
        }
        local_a0._8_8_ = *(undefined8 *)&(this->ConnectionNameToPropertyId).field_0x40;
        if ((FProperty *)local_a0._8_8_ == (FProperty *)0x0) {
          local_a0._0_4_ = *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x38;
        }
        *(undefined8 *)&(this->ConnectionNameToPropertyId).field_0x40 = 0;
        local_a0._16_4_ = *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x48;
        *(undefined4 *)&(this->ConnectionNameToPropertyId).field_0x48 = 0;
        ClearDynamicConnections(this);
        pFVar13 = local_120;
        if (local_120->bPauseInvalidations != false) {
          local_120->bPauseInvalidations = false;
          FDataflowNode::Invalidate(local_120,&local_120->PausedModifiedTimestamp);
        }
        this_00 = (FInstancedPropertyBag *)
                  (**(code **)((longlong)*this->OwnerInterface + 8))(this->OwnerInterface,this);
        pUVar16 = FInstancedPropertyBag::GetPropertyBagStruct(this_00);
        if (pUVar16 != (UPropertyBag *)0x0) {
          iVar12 = (pUVar16->PropertyDescs).ArrayNum;
          pFVar28 = (FPropertyBagPropertyDesc *)(pUVar16->PropertyDescs).AllocatorInstance.Data;
          if ((iVar12 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar27 = pFVar28 + iVar12;
          local_138 = pFVar27;
          if (pFVar28 != pFVar27) {
            TVar24.Key = &pFVar28->ID;
            do {
              switch((char)TVar24.Key[1].C) {
              case '\x01':
              case '\x02':
              case '\x03':
              case '\x04':
              case '\x05':
              case '\x06':
              case '\a':
              case '\b':
              case '\t':
              case '\v':
              case '\f':
                local_150.Key = TVar24.Key;
                FDataflowConnection::GetTypeNameFromProperty((FProperty *)local_f0);
                pFVar17 = AddNewConnectionFromPropertyDesc(this,pFVar28);
                this = local_140;
                if (pFVar17 != (FDataflowConnection *)0x0) {
                  uVar18 = CityHash64((char *)TVar24.Key,0x10);
                  iVar12 = TSet<TTuple<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                           ::FindIndexByHash<FGuid>
                                     ((TSet<TTuple<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                       *)(local_a0 + 0x18),(uint)uVar18,TVar24.Key);
                  if (iVar12 != -1) {
                    lVar2 = local_88.Elements._0_8_ + (longlong)iVar12 * 0x28;
                    pFVar26 = (FGuid *)(lVar2 + 0x10);
                    if (lVar2 == 0) {
                      pFVar26 = (FGuid *)0x0;
                    }
                    if (pFVar26 != (FGuid *)0x0) {
LAB_1462e2828:
                      pFVar9 = local_130;
                      puVar23 = *(undefined8 **)pFVar26;
                      uVar11 = pFVar26->C;
                      puVar3 = puVar23 + (int)uVar11;
                      while( true ) {
                        if (pFVar26->C != uVar11) {
                          `TCheckedPointerIterator<FDataflowConnection_*,int,0>::operator!='::__l2::
                          <lambda_1>::operator()(local_148);
                        }
                        TVar24.Key = local_150.Key;
                        pFVar27 = local_138;
                        this = local_140;
                        if (puVar23 == puVar3) break;
                        UE::Dataflow::FGraph::Connect
                                  (pFVar9,pFVar17,(FDataflowConnection *)*puVar23);
                        puVar23 = puVar23 + 1;
                      }
                      break;
                    }
                  }
                  pFVar29 = (FGuid *)0x0;
                  FVar6 = pFVar17->Name;
                  uVar11 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
                  TVar24.Key = local_150.Key;
                  this = local_140;
                  if (local_d8._8_4_ != local_d8._52_4_) {
                    pFVar21 = (FProperty *)local_a0;
                    if ((FProperty *)local_a0._8_8_ != (FProperty *)0x0) {
                      pFVar21 = (FProperty *)local_a0._8_8_;
                    }
                    uVar11 = *(uint *)((longlong)&pFVar21->_padding_ +
                                      (ulonglong)(local_a0._16_4_ - 1 & FVar6.Number + uVar11) * 4);
                    while (uVar11 != 0xffffffff) {
                      pFVar19 = (FName *)((longlong)(int)uVar11 * 0x20 + local_d8._0_8_);
                      if (*pFVar19 == FVar6) {
                        pFVar26 = (FGuid *)(pFVar19 + 1);
                        if (pFVar19 == (FName *)0x0) {
                          pFVar26 = pFVar29;
                        }
                        if (pFVar26 != (FGuid *)0x0) {
                          uVar18 = CityHash64((char *)pFVar26,0x10);
                          iVar12 = TSet<TTuple<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                   ::FindIndexByHash<FGuid>
                                             ((TSet<TTuple<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                               *)(local_a0 + 0x18),(uint)uVar18,pFVar26);
                          pFVar22 = pFVar29;
                          if (iVar12 != -1) {
                            pFVar22 = (FGuid *)(local_88.Elements._0_8_ + (longlong)iVar12 * 0x28);
                          }
                          pFVar26 = pFVar22 + 1;
                          if (pFVar22 == (FGuid *)0x0) {
                            pFVar26 = pFVar29;
                          }
                          TVar24.Key = local_150.Key;
                          this = local_140;
                          if (pFVar26 != (FGuid *)0x0) goto LAB_1462e2828;
                        }
                        break;
                      }
                      uVar11 = pFVar19[3].ComparisonIndex.Value;
                    }
                  }
                }
              }
              TVar24.Key = TVar24.Key + 4;
              pFVar28 = pFVar28 + 1;
              this_01 = local_128;
              pFVar13 = local_120;
              local_150.Key = TVar24.Key;
            } while (pFVar28 != pFVar27);
          }
        }
        local_100.Value = UE::Dataflow::FTimestamp::Current();
        FDataflowNode::Invalidate(pFVar13,&local_100);
        local_f0._8_4_ = (pFVar13->Guid).A;
        local_f0._12_4_ = (pFVar13->Guid).B;
        lStack_e0._0_4_ = (pFVar13->Guid).C;
        lStack_e0._4_4_ = (pFVar13->Guid).D;
        UDataflow::RefreshEdNodeByGuid(this_01,(FGuid *)(local_f0 + 8));
        local_a0._16_4_ = 0;
        if ((FProperty *)local_a0._8_8_ != (FProperty *)0x0) {
          FMemory::Free((void *)local_a0._8_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_d8);
        local_88.HashSize = 0;
        if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_88.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_a0 + 0x18));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f8);
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_01);
    }
  }
  return;
}

// SetConnectionTypeFromPropertyDesc @ 1462e4dd0

bool __thiscall
FDataflowDynamicConnections::SetConnectionTypeFromPropertyDesc
          (FDataflowDynamicConnections *this,FDataflowConnection *param_1,
          FPropertyBagPropertyDesc *param_2)

{
  IOwnerInterface *pIVar1;
  bool bVar2;
  longlong lVar3;
  EPropertyBagContainerType EVar4;
  wchar_t *pwVar5;
  FName local_res8;
  FName local_res20;
  
  pIVar1 = this->OwnerInterface;
  if ((pIVar1 != (IOwnerInterface *)0x0) && (lVar3 = (**(code **)*pIVar1)(pIVar1,this), lVar3 != 0))
  {
    FDataflowConnection::GetTypeNameFromProperty((FProperty *)&local_res20);
    if ((param_2->ContainerTypes).NumContainers == '\0') {
      EVar4 = None;
    }
    else {
      EVar4 = (param_2->ContainerTypes).Types.Elements[0];
    }
    switch(param_2->ValueType) {
    case Bool:
    case Byte:
    case Int32:
    case Int64:
    case Name:
    case String:
    case Text:
    case Struct:
    case Object:
      bVar2 = FDataflowConnection::SetConcreteType(param_1,local_res20);
      return bVar2;
    case Float:
    case Double:
      if (EVar4 == Array) {
        pwVar5 = L"TArray<float>";
      }
      else {
        pwVar5 = L"float";
      }
      ::FName::FName(&local_res8,pwVar5);
      bVar2 = FDataflowConnection::SetConcreteType(param_1,local_res8);
      return bVar2;
    }
  }
  return false;
}

