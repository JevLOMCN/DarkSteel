// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 14

// StaticStruct @ 14a205330

UScriptStruct * __cdecl FRigModuleInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigModuleInstance.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigModuleInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigModuleInstance,(UObject *)pUVar1,
                         L"RigModuleInstance");
  }
  return Z_Registration_Info_UScriptStruct_FRigModuleInstance.OuterSingleton;
}

// FRigModuleInstance @ 14a2207c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigModuleInstance * __thiscall
FRigModuleInstance::FRigModuleInstance(FRigModuleInstance *this,FRigModuleInstance *param_1)

{
  TMap<FName,FRigVMExternalVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigVMExternalVariable,0>_>
  *pTVar1;
  TMap<FName,FRigVMExternalVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigVMExternalVariable,0>_>
  *pTVar2;
  undefined1 *_Src;
  undefined1 *_Dst;
  UClass *pUVar3;
  UControlRig *pUVar4;
  void *pvVar5;
  FRigModuleInstance *pFVar6;
  undefined8 uVar7;
  FRigBaseElement *pFVar8;
  undefined3 uVar9;
  FNameEntryId FVar10;
  undefined4 uVar11;
  
  this->Name = param_1->Name;
  pUVar3 = (param_1->RigClass).Class.field0_0x0.DebugPtr;
  (this->RigClass).Class.field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar4 = (param_1->RigPtr).field0_0x0.DebugPtr;
  (this->RigPtr).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UControlRig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pTVar1 = &this->VariableBindings;
  (this->ParentPath_DEPRECATED).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &param_1->VariableBindings;
  (this->ParentPath_DEPRECATED).Data.AllocatorInstance.Data =
       (param_1->ParentPath_DEPRECATED).Data.AllocatorInstance.Data;
  (param_1->ParentPath_DEPRECATED).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentPath_DEPRECATED).Data.ArrayNum = (param_1->ParentPath_DEPRECATED).Data.ArrayNum;
  (this->ParentPath_DEPRECATED).Data.ArrayMax = (param_1->ParentPath_DEPRECATED).Data.ArrayMax;
  (param_1->ParentPath_DEPRECATED).Data.ArrayNum = 0;
  (param_1->ParentPath_DEPRECATED).Data.ArrayMax = 0;
  this->ParentModuleName = param_1->ParentModuleName;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->VariableBindings).field_0x8 = 0;
  *(undefined8 *)&(this->VariableBindings).field_0x20 = 0;
  *(undefined4 *)&(this->VariableBindings).field_0x28 = 0;
  *(undefined4 *)&(this->VariableBindings).field_0x2c = 0x80;
  *(undefined4 *)&(this->VariableBindings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VariableBindings).field_0x34 = 0;
  *(undefined8 *)&(this->VariableBindings).field_0x40 = 0;
  *(undefined4 *)&(this->VariableBindings).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Src = &(param_1->VariableBindings).field_0x10;
    *(undefined4 *)&(this->VariableBindings).field_0x8 =
         *(undefined4 *)&(param_1->VariableBindings).field_0x8;
    _Dst = &(this->VariableBindings).field_0x10;
    *(undefined4 *)&(this->VariableBindings).field_0xc =
         *(undefined4 *)&(param_1->VariableBindings).field_0xc;
    *(undefined8 *)&(param_1->VariableBindings).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->VariableBindings).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar5 = *(void **)&(this->VariableBindings).field_0x20;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      *(undefined8 *)&(this->VariableBindings).field_0x20 =
           *(undefined8 *)&(param_1->VariableBindings).field_0x20;
      *(undefined8 *)&(param_1->VariableBindings).field_0x20 = 0;
      *(undefined4 *)&(this->VariableBindings).field_0x28 =
           *(undefined4 *)&(param_1->VariableBindings).field_0x28;
      *(undefined4 *)&(this->VariableBindings).field_0x2c =
           *(undefined4 *)&(param_1->VariableBindings).field_0x2c;
      *(undefined8 *)&(param_1->VariableBindings).field_0x28 = 0;
    }
    *(undefined4 *)&(this->VariableBindings).field_0x30 =
         *(undefined4 *)&(param_1->VariableBindings).field_0x30;
    *(undefined4 *)&(this->VariableBindings).field_0x34 =
         *(undefined4 *)&(param_1->VariableBindings).field_0x34;
    *(undefined4 *)&(param_1->VariableBindings).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->VariableBindings).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->VariableBindings).field_0x40 == 0) {
    *(undefined4 *)&(this->VariableBindings).field_0x38 =
         *(undefined4 *)&(param_1->VariableBindings).field_0x38;
  }
  pvVar5 = *(void **)&(this->VariableBindings).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  *(undefined8 *)&(this->VariableBindings).field_0x40 =
       *(undefined8 *)&(param_1->VariableBindings).field_0x40;
  *(undefined8 *)&(param_1->VariableBindings).field_0x40 = 0;
  *(undefined4 *)&(this->VariableBindings).field_0x48 =
       *(undefined4 *)&(param_1->VariableBindings).field_0x48;
  *(undefined4 *)&(param_1->VariableBindings).field_0x48 = 0;
  pFVar6 = param_1->CachedParentModule;
  (this->CachedChildren).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->CachedParentModule = pFVar6;
  (this->CachedChildren).AllocatorInstance.Data = (param_1->CachedChildren).AllocatorInstance.Data;
  (param_1->CachedChildren).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedChildren).ArrayNum = (param_1->CachedChildren).ArrayNum;
  (this->CachedChildren).ArrayMax = (param_1->CachedChildren).ArrayMax;
  (param_1->CachedChildren).ArrayNum = 0;
  (param_1->CachedChildren).ArrayMax = 0;
  uVar9 = *(undefined3 *)&(param_1->PrimaryConnector).Key.field_0x1;
  FVar10.Value = (param_1->PrimaryConnector).Key.Name.ComparisonIndex.Value;
  uVar7 = *(undefined8 *)&(param_1->PrimaryConnector).Key.Name.Number;
  (this->PrimaryConnector).Key.Type = (param_1->PrimaryConnector).Key.Type;
  *(undefined3 *)&(this->PrimaryConnector).Key.field_0x1 = uVar9;
  (this->PrimaryConnector).Key.Name.ComparisonIndex = (FNameEntryId)FVar10.Value;
  *(undefined8 *)&(this->PrimaryConnector).Key.Name.Number = uVar7;
  uVar11 = *(undefined4 *)&(param_1->PrimaryConnector).field_0x14;
  pFVar8 = (param_1->PrimaryConnector).Element;
  (this->PrimaryConnector).ContainerVersion = (param_1->PrimaryConnector).ContainerVersion;
  *(undefined4 *)&(this->PrimaryConnector).field_0x14 = uVar11;
  (this->PrimaryConnector).Element = pFVar8;
  this->ConstructionSpawnStartIndex = param_1->ConstructionSpawnStartIndex;
  this->PostConstructionSpawnStartIndex = param_1->PostConstructionSpawnStartIndex;
  return this;
}

// ContainsRig @ 14a247ea0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigModuleInstance::ContainsRig(FRigModuleInstance *this,UControlRig *param_1)

{
  UControlRig *pUVar1;
  
  if ((param_1 != (UControlRig *)0x0) &&
     (pUVar1 = (this->RigPtr).field0_0x0.DebugPtr, pUVar1 != (UControlRig *)0x0)) {
    return pUVar1 == param_1;
  }
  return false;
}

// FindConnectors @ 14a25ab80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigConnectorElement_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FRigModuleInstance::FindConnectors
          (FRigModuleInstance *this,
          TArray<FRigConnectorElement_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  UControlRig *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  URigHierarchy *this_00;
  TArray<FRigConnectorElement_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  FName local_res10;
  longlong local_58 [2];
  undefined8 local_48;
  undefined4 local_40;
  TArray<FRigConnectorElement_*,TSizedDefaultAllocator<32>_> local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar2 = (this->RigPtr).field0_0x0.DebugPtr;
  if ((pUVar2 == (UControlRig *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
    (this->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
  }
  else {
    pUVar2 = (this->RigPtr).field0_0x0.DebugPtr;
    if (pUVar2 != (UControlRig *)0x0) {
      this_00 = (URigHierarchy *)(**(code **)(pUVar2->_padding_ + 0x10))();
      if (this_00 != (URigHierarchy *)0x0) {
        URigHierarchy::GetElementsOfType<FRigConnectorElement>(this_00,&local_38,false);
        iVar8 = local_38.ArrayNum;
        pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar8 * 8;
        FVar9.Data = local_38.AllocatorInstance.Data;
        while( true ) {
          if (local_38.ArrayNum != iVar8) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FRigConnectorElement_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (FVar9.Data == pFVar1) break;
          local_58[0] = *(longlong *)FVar9.Data;
          local_48 = *(undefined8 *)(local_58[0] + 0x10);
          local_40 = *(undefined4 *)(local_58[0] + 0x18);
          URigHierarchy::GetModuleFName(this_00,(FRigElementKey *)&local_res10);
          if ((local_res10 != (FName)0x0) && (local_res10 == this->Name)) {
            pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
            if ((pFVar3 <= (FScriptContainerElement *)local_58) &&
               ((FScriptContainerElement *)local_58 <
                pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                pTVar7 = (TArray<FRigConnectorElement_const_*,TSizedDefaultAllocator<32>_> *)
                         (*pcVar4)();
                return pTVar7;
              }
            }
            iVar6 = __return_storage_ptr__->ArrayNum;
            if (iVar6 == __return_storage_ptr__->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar6 + 1;
            *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
                 local_58[0];
          }
          FVar9.Data = FVar9.Data + 8;
        }
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
      }
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// FindPrimaryConnector @ 14a25c3a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigConnectorElement * __thiscall FRigModuleInstance::FindPrimaryConnector(FRigModuleInstance *this)

{
  FCachedRigElement *this_00;
  FScriptContainerElement *pFVar1;
  UControlRig *pUVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  URigHierarchy *this_01;
  FRigConnectorElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  FName local_res10;
  TArray<FRigConnectorElement_*,TSizedDefaultAllocator<32>_> local_38;
  
  pUVar2 = (this->RigPtr).field0_0x0.DebugPtr;
  if ((pUVar2 == (UControlRig *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
    (this->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
  }
  else {
    pUVar2 = (this->RigPtr).field0_0x0.DebugPtr;
    if ((pUVar2 != (UControlRig *)0x0) &&
       (this_01 = (URigHierarchy *)(**(code **)(pUVar2->_padding_ + 0x10))(),
       this_01 != (URigHierarchy *)0x0)) {
      this_00 = &this->PrimaryConnector;
      FCachedRigElement::UpdateCache(this_00,this_01);
      if (((this->PrimaryConnector).Index != 0xffff) &&
         (((bVar5 = ::FName::IsWithinBounds
                              ((FNameEntryId)(this->PrimaryConnector).Key.Name.ComparisonIndex.Value
                              ), bVar5 && ((this->PrimaryConnector).Key.Name != (FName)0x0)) &&
          ((this_00->Key).Type != None)))) {
        pFVar6 = Cast<FRigConnectorElement>((this->PrimaryConnector).Element);
        return pFVar6;
      }
      URigHierarchy::GetElementsOfType<FRigConnectorElement>(this_01,&local_38,false);
      iVar4 = local_38.ArrayNum;
      pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
      FVar7.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if (local_38.ArrayNum != iVar4) {
          `TCheckedPointerIterator<FRigConnectorElement_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (FVar7.Data == pFVar1) break;
        lVar3 = *(longlong *)FVar7.Data;
        if (*(char *)(lVar3 + 0x70) == '\0') {
          URigHierarchy::GetModuleFName(this_01,(FRigElementKey *)&local_res10);
          if ((local_res10 != (FName)0x0) && (local_res10 == this->Name)) {
            FCachedRigElement::UpdateCache(this_00,(FRigElementKey *)(lVar3 + 0x10),this_01);
            pFVar6 = Cast<FRigConnectorElement>((this->PrimaryConnector).Element);
            if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.AllocatorInstance.Data);
            }
            return pFVar6;
          }
        }
        FVar7.Data = FVar7.Data + 8;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
  }
  return (FRigConnectorElement *)0x0;
}

// GetModulePath_Deprecated @ 14a265d20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigModuleInstance::GetModulePath_Deprecated
          (FRigModuleInstance *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar1 = 1 < (this->ParentPath_DEPRECATED).Data.ArrayNum;
  if (bVar1) {
    pFVar2 = ::FName::ToString(&this->Name,&local_28);
    pFVar2 = URigHierarchy::JoinNameSpace_Deprecated(&local_38,&this->ParentPath_DEPRECATED,pFVar2);
  }
  else {
    pFVar2 = ::FName::ToString(&this->Name,&local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (bVar1) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (bVar1) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar1) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetModulePrefix @ 14a265f10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigModuleInstance::GetModulePrefix(FRigModuleInstance *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString *pFVar2;
  FString local_18;
  
  pwVar1 = FRigHierarchyModulePath::ModuleNameSuffix;
  pFVar2 = ::FName::ToString(&this->Name,&local_18);
  ::FString::ConcatFC(__return_storage_ptr__,pFVar2,pwVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetModuleReference @ 14a265f60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigModuleReference * __thiscall FRigModuleInstance::GetModuleReference(FRigModuleInstance *this)

{
  int iVar1;
  UControlRig *pUVar2;
  UClass *pUVar3;
  UModularRig *this_00;
  FModularRigModel *this_01;
  FRigModuleReference *pFVar4;
  
  pUVar2 = (this->RigPtr).field0_0x0.DebugPtr;
  if ((pUVar2 == (UControlRig *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
    (this->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
  }
  else {
    pUVar2 = (this->RigPtr).field0_0x0.DebugPtr;
    if (pUVar2 != (UControlRig *)0x0) {
      pUVar3 = UControlRig::StaticClass();
      this_00 = (UModularRig *)
                UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar2,pUVar3);
      if (this_00 != (UModularRig *)0x0) {
        pUVar3 = UModularRig::StaticClass();
        iVar1 = (int)pUVar3->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar3->_padding_)) {
          this_01 = UModularRig::GetModularRigModel(this_00);
          pFVar4 = FModularRigModel::FindModule(this_01,&this->Name);
          return pFVar4;
        }
      }
    }
  }
  return (FRigModuleReference *)0x0;
}

// GetParentModule @ 14a266b80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigModuleInstance * __thiscall FRigModuleInstance::GetParentModule(FRigModuleInstance *this)

{
  int iVar1;
  UControlRig *pUVar2;
  UClass *pUVar3;
  UModularRig *this_00;
  FRigModuleInstance *pFVar4;
  
  if (this->ParentModuleName != (FName)0x0) {
    if (this->CachedParentModule != (FRigModuleInstance *)0x0) {
      return this->CachedParentModule;
    }
    pUVar2 = (this->RigPtr).field0_0x0.DebugPtr;
    if ((pUVar2 == (UControlRig *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
      (this->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
    }
    else {
      pUVar2 = (this->RigPtr).field0_0x0.DebugPtr;
      if (pUVar2 != (UControlRig *)0x0) {
        pUVar3 = UControlRig::StaticClass();
        this_00 = (UModularRig *)
                  UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar2,pUVar3);
        if (this_00 != (UModularRig *)0x0) {
          pUVar3 = UModularRig::StaticClass();
          iVar1 = (int)pUVar3->_padding_;
          if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar3->_padding_)) {
            pFVar4 = UModularRig::FindModule(this_00,&this->ParentModuleName);
            return pFVar4;
          }
        }
      }
    }
  }
  return (FRigModuleInstance *)0x0;
}

// GetRig @ 14a269a20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall FRigModuleInstance::GetRig(FRigModuleInstance *this)

{
  UControlRig *pUVar1;
  
  pUVar1 = (this->RigPtr).field0_0x0.DebugPtr;
  if ((pUVar1 != (UControlRig *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    return (this->RigPtr).field0_0x0.DebugPtr;
  }
  (this->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
  return (UControlRig *)0x0;
}

// GetRootModule @ 14a269eb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigModuleInstance * __thiscall FRigModuleInstance::GetRootModule(FRigModuleInstance *this)

{
  int iVar1;
  FName FVar2;
  UControlRig *pUVar3;
  UClass *pUVar4;
  UModularRig *this_00;
  FRigModuleInstance *pFVar5;
  
  FVar2 = this->ParentModuleName;
  do {
    if (FVar2 == (FName)0x0) {
      return this;
    }
    if (this->ParentModuleName == (FName)0x0) {
      return (FRigModuleInstance *)0x0;
    }
    pFVar5 = this->CachedParentModule;
    if (pFVar5 == (FRigModuleInstance *)0x0) {
      pUVar3 = (this->RigPtr).field0_0x0.DebugPtr;
      if ((pUVar3 == (UControlRig *)0x0) || (((uint)pUVar3->_padding_ >> 0x1e & 1) != 0)) {
        (this->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
        return (FRigModuleInstance *)0x0;
      }
      pUVar3 = (this->RigPtr).field0_0x0.DebugPtr;
      if (pUVar3 == (UControlRig *)0x0) {
        return (FRigModuleInstance *)0x0;
      }
      pUVar4 = UControlRig::StaticClass();
      this_00 = (UModularRig *)
                UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar3,pUVar4);
      if (this_00 == (UModularRig *)0x0) {
        return (FRigModuleInstance *)0x0;
      }
      pUVar4 = UModularRig::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if (*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) {
        return (FRigModuleInstance *)0x0;
      }
      if ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_) {
        return (FRigModuleInstance *)0x0;
      }
      pFVar5 = UModularRig::FindModule(this_00,&this->ParentModuleName);
      if (pFVar5 == (FRigModuleInstance *)0x0) {
        return (FRigModuleInstance *)0x0;
      }
    }
    FVar2 = pFVar5->ParentModuleName;
    this = pFVar5;
  } while( true );
}

// HasChildModule @ 14a26f250

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigModuleInstance::HasChildModule(FRigModuleInstance *this,FName *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  if (*param_1 == (FName)0x0) {
LAB_14a26f2d2:
    bVar3 = false;
  }
  else {
    pFVar4 = (this->CachedChildren).AllocatorInstance.Data;
    iVar2 = (this->CachedChildren).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->CachedChildren).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FRigModuleInstance_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar4 == pFVar1) goto LAB_14a26f2d2;
      if ((*(FRigModuleInstance **)pFVar4)->Name == *param_1) break;
      if (param_2) {
        bVar3 = HasChildModule(*(FRigModuleInstance **)pFVar4,param_1,true);
        if (bVar3) break;
      }
      pFVar4 = pFVar4 + 8;
    }
    bVar3 = true;
  }
  return bVar3;
}

// IsRootModule @ 14a275300

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigModuleInstance::IsRootModule(FRigModuleInstance *this)

{
  return this->ParentModuleName == (FName)0x0;
}

// SetRig @ 14a295600

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigModuleInstance::SetRig(FRigModuleInstance *this,UControlRig *param_1)

{
  UControlRig *pUVar1;
  code *pcVar2;
  UClass *pUVar3;
  UPackage *pUVar4;
  
  pUVar1 = (this->RigPtr).field0_0x0.DebugPtr;
  if ((pUVar1 == (UControlRig *)0x0) || (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) {
    (this->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
  }
  else {
    pUVar1 = (this->RigPtr).field0_0x0.DebugPtr;
    if ((pUVar1 != (UControlRig *)0x0) && (pUVar1 != param_1)) {
      pcVar2 = *(code **)(pUVar1->_padding_ + 0x170);
      pUVar4 = GetTransientPackage();
      (*pcVar2)(pUVar1,0,pUVar4,0x34);
      UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)pUVar1);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (UControlRig *)0x0)) {
    (this->RigPtr).field0_0x0.DebugPtr = param_1;
    if (param_1 == (UControlRig *)0x0) {
      (this->RigClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->RigPtr).field0_0x0.DebugPtr = param_1;
  }
  pUVar3 = (UClass *)param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->RigClass).Class.field0_0x0.DebugPtr = pUVar3;
  return;
}

