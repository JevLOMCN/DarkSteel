// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4c4290

UScriptStruct * __cdecl FRigDispatch_SpawnComponent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_SpawnComponent.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigDispatch_SpawnComponent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_SpawnComponent,(UObject *)pUVar1,
                         L"RigDispatch_SpawnComponent");
  }
  return Z_Registration_Info_UScriptStruct_FRigDispatch_SpawnComponent.OuterSingleton;
}

// GetArgumentInfos @ 14a4c44b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_SpawnComponent::GetArgumentInfos
          (FRigDispatch_SpawnComponent *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  FRigVMTemplateArgumentInfo *pFVar11;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *pTVar12;
  TRigVMTypeIndex *pTVar13;
  FRigVMRegistry_NoLock *pFVar14;
  UScriptStruct *pUVar15;
  FString *pFVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  FName *pFVar19;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168 [8];
  FName local_160;
  FName local_158;
  FName local_150;
  TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> local_148;
  FName local_138;
  FName local_130;
  TRigVMTypeIndex local_128;
  TRigVMTypeIndex local_118;
  TRigVMTypeIndex local_108;
  TRigVMTypeIndex local_f8;
  FName local_e8;
  UScriptStruct *local_e0;
  FString local_d8;
  code *local_c8 [2];
  undefined **local_b8;
  code *local_b0;
  undefined8 local_a0;
  undefined1 local_98 [64];
  ForAnyElementType local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  puVar1 = &this->field_0x98;
  if (*(int *)&this->field_0xa0 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pFVar14 = FRigVMRegistryHandle::operator->(param_1);
        pcVar4 = *(code **)(pFVar14->_padding_ + 0xc0);
        pUVar15 = FRigElementKey::StaticStruct();
        pFVar16 = RigVMTypeUtils::GetUniqueStructTypeName(&local_d8,pUVar15);
        if ((pFVar16->Data).ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&local_e8,pwVar18);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        local_e0 = pUVar15;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar15 != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar15);
        }
        (*pcVar4)(pFVar14,&RigElementKeyType,&local_e8,0);
        _Init_thread_footer(&::_TSS0);
      }
    }
    iVar10 = *(int *)&this->field_0xa0;
    if (iVar10 == *(int *)&this->field_0xa4) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar10 + 1;
    iVar2 = RigElementKeyType.Index;
    local_160 = RigElementKeyType.Name;
    lVar3 = *(longlong *)puVar1;
    FLazyName::Resolve(&FRigDispatch_ComponentBase::ItemArgName);
    local_128.Name = local_160;
    local_128.Index = iVar2;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar3 + (longlong)iVar10 * 0x50),local_138,Input,
               &local_128);
    *(int *)&this->field_0xbc = iVar10;
    iVar10 = *(int *)&this->field_0xa0;
    if (iVar10 == *(int *)&this->field_0xa4) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar10 + 1;
    iVar2 = RigVMTypeUtils::TypeIndex::FName.Index;
    local_160 = RigVMTypeUtils::TypeIndex::FName.Name;
    lVar3 = *(longlong *)puVar1;
    FLazyName::Resolve(&FRigDispatch_ComponentBase::NameArgName);
    local_118.Name = local_160;
    local_118.Index = iVar2;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar3 + (longlong)iVar10 * 0x50),local_158,Input,
               &local_118);
    *(int *)&this->field_0xb8 = iVar10;
    local_168[0] = 10;
    local_b8 = &
               ___7__TFunction_OwnedObject_P6A_NAEBVTRigVMTypeIndex__AEBUFRigVMRegistryHandle___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_a0 = 0;
    local_b0 = FRigDispatch_ComponentBase::IsTypeSupported;
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<bool_(__cdecl*)(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),bool,TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&>
                  ::Call;
    local_148.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&local_148.AllocatorInstance,1,&local_148.ArrayMax);
    memcpy(local_148.AllocatorInstance.Data,local_168,1);
    FLazyName::Resolve(&FRigDispatch_ComponentBase::ComponentArgName);
    pFVar11 = FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
                        ((FRigVMTemplateArgumentInfo *)local_98,local_160,Input,&local_148,
                         (TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)>
                          *)local_c8);
    if ((*(FRigVMTemplateArgumentInfo **)puVar1 <= pFVar11) &&
       (pFVar11 < *(FRigVMTemplateArgumentInfo **)puVar1 + *(int *)&this->field_0xa4)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        pTVar12 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar12;
      }
    }
    iVar10 = *(int *)&this->field_0xa0;
    if (iVar10 == *(int *)&this->field_0xa4) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar10 + 1;
    pFVar19 = (FName *)(*(longlong *)puVar1 + (longlong)iVar10 * 0x50);
    *pFVar19 = pFVar11->Name;
    *(ERigVMPinDirection *)&pFVar19[1].ComparisonIndex.Value = pFVar11->Direction;
    uVar8 = *(undefined4 *)&(pFVar11->FactoryCallback).field_0x4;
    pFVar19[2].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar11->FactoryCallback).field_0x0;
    pFVar19[2].Number = uVar8;
    uVar8 = *(undefined4 *)&(pFVar11->FactoryCallback).field_0x2c;
    pFVar19[7].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar11->FactoryCallback).field_0x28
    ;
    pFVar19[7].Number = uVar8;
    *(undefined8 *)&(pFVar11->FactoryCallback).field_0x28 = 0;
    uVar5 = *(uint *)&(pFVar11->FactoryCallback).field_0x14;
    uVar6 = *(uint *)&(pFVar11->FactoryCallback).field_0x18;
    uVar7 = *(uint *)&(pFVar11->FactoryCallback).field_0x1c;
    pFVar19[4].ComparisonIndex.Value = *(uint *)&(pFVar11->FactoryCallback).field_0x10;
    pFVar19[4].Number = uVar5;
    pFVar19[5].ComparisonIndex.Value = uVar6;
    pFVar19[5].Number = uVar7;
    uVar8 = *(undefined4 *)&(pFVar11->FactoryCallback).field_0x24;
    pFVar19[6].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar11->FactoryCallback).field_0x20
    ;
    pFVar19[6].Number = uVar8;
    if (pFVar19[2] != (FName)0x0) {
      *(undefined8 *)&pFVar11->FactoryCallback = 0;
    }
    pFVar19[8].ComparisonIndex = 0;
    pFVar19[8].Number = 0;
    pFVar19[8] = (FName)(pFVar11->TypeIndices).AllocatorInstance.Data;
    (pFVar11->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar19[9].ComparisonIndex.Value = (pFVar11->TypeIndices).ArrayNum;
    pFVar19[9].Number = (pFVar11->TypeIndices).ArrayMax;
    (pFVar11->TypeIndices).ArrayNum = 0;
    (pFVar11->TypeIndices).ArrayMax = 0;
    *(int *)&this->field_0xc4 = iVar10;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    if (local_98._16_8_ != 0) {
      plVar17 = (longlong *)(local_98 + 0x20);
      if ((longlong *)local_98._56_8_ != (longlong *)0x0) {
        plVar17 = (longlong *)local_98._56_8_;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
    pTVar13 = FRigDispatch_ComponentBase::GetComponentKeyType(param_1);
    iVar10 = *(int *)&this->field_0xa0;
    if (iVar10 == *(int *)&this->field_0xa4) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar10 + 1;
    local_158 = pTVar13->Name;
    iVar2 = pTVar13->Index;
    lVar3 = *(longlong *)puVar1;
    FLazyName::Resolve(&FRigDispatch_ComponentBase::KeyArgName);
    local_108.Name = local_158;
    local_108.Index = iVar2;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar3 + (longlong)iVar10 * 0x50),local_150,Output,
               &local_108);
    *(int *)&this->field_0xc0 = iVar10;
    iVar10 = *(int *)&this->field_0xa0;
    if (iVar10 == *(int *)&this->field_0xa4) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar10 + 1;
    iVar2 = RigVMTypeUtils::TypeIndex::Bool.Index;
    local_150 = RigVMTypeUtils::TypeIndex::Bool.Name;
    lVar3 = *(longlong *)puVar1;
    FLazyName::Resolve(&FRigDispatch_ComponentBase::SuccessArgName);
    local_f8.Name = local_150;
    local_f8.Index = iVar2;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar3 + (longlong)iVar10 * 0x50),local_130,Output,
               &local_f8);
    *(int *)&this->field_0xc8 = iVar10;
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// IsMutable @ 14a4c4a00

bool __thiscall FRigDispatch_SpawnComponent::IsMutable(FRigDispatch_SpawnComponent *this)

{
  return true;
}

// GetDispatchFunctionImpl @ 14a4c4a10

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigDispatch_SpawnComponent::GetDispatchFunctionImpl
          (FRigDispatch_SpawnComponent *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// FRigDispatch_SpawnComponent @ 14a50afc0

FRigDispatch_SpawnComponent * __thiscall
FRigDispatch_SpawnComponent::FRigDispatch_SpawnComponent(FRigDispatch_SpawnComponent *this)

{
  UPackage *pUVar1;
  
  FRigVMDispatchFactory::FRigVMDispatchFactory((FRigVMDispatchFactory *)this);
  *(undefined8 *)&this->field_0xb8 = 0xffffffffffffffff;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7FRigDispatch_SpawnComponent__6B_;
  *(undefined8 *)&this->field_0xc0 = 0xffffffffffffffff;
  *(undefined4 *)&this->field_0xc8 = 0xffffffff;
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_SpawnComponent.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigDispatch_SpawnComponent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_SpawnComponent,(UObject *)pUVar1,
                         L"RigDispatch_SpawnComponent");
  }
  *(UScriptStruct **)&this->field_0x28 =
       Z_Registration_Info_UScriptStruct_FRigDispatch_SpawnComponent.OuterSingleton;
  return this;
}

// Execute @ 14a523d30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SpawnComponent::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  uint uVar1;
  FRigVMDispatchFactory *pFVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  FField *pFVar7;
  undefined3 uVar8;
  FNameEntryId FVar9;
  bool bVar10;
  int iVar11;
  FRigVMMemoryHandle *pFVar12;
  FRigElementKey *pFVar13;
  FName *pFVar14;
  uchar *puVar15;
  FRigComponentKey *this;
  uchar *puVar16;
  FProperty *pFVar17;
  UScriptStruct *pUVar18;
  FControlRigExecuteContext *pFVar19;
  URigHierarchyController *this_00;
  FString *pFVar20;
  FRigComponentKey *pFVar21;
  FRigBaseComponent *pFVar22;
  uchar *_Dst;
  uchar *_Src;
  FRigElementKey local_98;
  FString local_88;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  FRigComponentKey local_64;
  TFieldIterator<FProperty> local_50;
  
  pFVar2 = param_1->Factory;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,*(int *)&pFVar2[1].field_0x14);
  if (pFVar12->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar13 = (FRigElementKey *)pFVar12->Ptr;
  }
  else {
    pFVar13 = (FRigElementKey *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar12->PropertyPath,pFVar12->Ptr,pFVar12->Property);
  }
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,pFVar2[1].FactoryName.Number);
  if (pFVar12->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar14 = (FName *)pFVar12->Ptr;
  }
  else {
    pFVar14 = (FName *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar12->PropertyPath,pFVar12->Ptr,pFVar12->Property);
  }
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                      (param_2,*(int *)((longlong)
                                        &pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data + 4
                                       ));
  if (pFVar12->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar15 = pFVar12->Ptr;
  }
  else {
    puVar15 = FRigVMPropertyPath::GetData_Internal
                        (pFVar12->PropertyPath,pFVar12->Ptr,pFVar12->Property);
  }
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                      (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  this = (FRigComponentKey *)FRigVMMemoryHandle::GetData_Internal(pFVar12,false,-1);
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                      (param_2,pFVar2[1].FactoryNameString.Data.ArrayNum);
  puVar16 = FRigVMMemoryHandle::GetData_Internal(pFVar12,false,-1);
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                      (param_2,*(int *)((longlong)
                                        &pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data + 4
                                       ));
  if (pFVar12->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar17 = pFVar12->Property;
  }
  else {
    pFVar17 = FRigVMPropertyPath::GetTailProperty(pFVar12->PropertyPath);
  }
  if (((pFVar17 == (FProperty *)0x0) || ((*(uint *)(pFVar17->_padding_ + 0x18) >> 0x14 & 1) == 0))
     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_Component.cpp"
                             ,0x98,L""), pFVar17 = (FProperty *)0x0, bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar3 = (UScriptStruct *)pFVar17[1]._padding_;
  if ((pUVar3 != (UScriptStruct *)0x0) &&
     (pUVar18 = FRigBaseComponent::StaticStruct(), pUVar18 != (UScriptStruct *)0x0)) {
    iVar11 = (int)pUVar18->_padding_;
    if (((int)pUVar3->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar11 * 8) !=
        &pUVar18->_padding_)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_14a523ee8;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentStruct && ComponentStruct->IsChildOf(FRigBaseComponent::StaticStruct())"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_Component.cpp"
                      ,0x9a,L"");
  if (bVar10) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14a523ee8:
  local_78 = local_78 & 0xffffff00;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uVar6 = (ulonglong)local_78;
  (this->ElementKey).Type = (char)uVar6;
  *(int3 *)&(this->ElementKey).field_0x1 = (int3)(uVar6 >> 8);
  (this->ElementKey).Name.ComparisonIndex = (FNameEntryId)(int)(uVar6 >> 0x20);
  *(undefined8 *)&(this->ElementKey).Name.Number = 0;
  (this->Name).Number = 0;
  *puVar16 = '\0';
  pFVar19 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(param_1);
  iVar11 = URigHierarchy::GetIndex(pFVar19->Hierarchy,pFVar13,true);
  if ((iVar11 != -1) &&
     (this_00 = URigHierarchy::GetController(pFVar19->Hierarchy,true),
     this_00 != (URigHierarchyController *)0x0)) {
    iVar11 = this_00->CurrentInstructionIndex;
    this_00->CurrentInstructionIndex = *(int *)&pFVar19->field_0x18;
    pFVar20 = ::FString::FString(&local_88,L"");
    local_98.Name.Number = (pFVar13->Name).Number;
    local_98.Type = pFVar13->Type;
    local_98._1_3_ = *(undefined3 *)&pFVar13->field_0x1;
    local_98.Name.ComparisonIndex.Value = (pFVar13->Name).ComparisonIndex.Value;
    pFVar13 = &local_98;
    pFVar21 = URigHierarchyController::AddComponent
                        (this_00,&local_64,pUVar3,*pFVar14,pFVar13,pFVar20,false,false);
    uVar8 = *(undefined3 *)&(pFVar21->ElementKey).field_0x1;
    FVar9.Value = (pFVar21->ElementKey).Name.ComparisonIndex.Value;
    uVar5 = *(undefined8 *)&(pFVar21->ElementKey).Name.Number;
    (this->ElementKey).Type = (pFVar21->ElementKey).Type;
    *(undefined3 *)&(this->ElementKey).field_0x1 = uVar8;
    (this->ElementKey).Name.ComparisonIndex = (FNameEntryId)FVar9.Value;
    *(undefined8 *)&(this->ElementKey).Name.Number = uVar5;
    (this->Name).Number = (pFVar21->Name).Number;
    bVar10 = FRigComponentKey::IsValid(this);
    if (bVar10) {
      pFVar22 = URigHierarchy::FindComponent(pFVar19->Hierarchy,this);
      if ((pFVar22 == (FRigBaseComponent *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TargetComponent",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_Component.cpp"
                              ,0xb0,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pUVar3 == (UScriptStruct *)0x0) {
        local_50.Field = (FField *)0x0;
      }
      else {
        local_50.Field = (FField *)pUVar3->_padding_;
      }
      local_50.InterfaceIndex = -1;
      local_50.bIncludeSuper = true;
      local_50.bIncludeDeprecated = true;
      local_50.bIncludeInterface = false;
      local_50.Struct = (UStruct *)pUVar3;
      TFieldIterator<FProperty>::IterateToNext(&local_50);
      pFVar7 = local_50.Field;
      while (pFVar7 != (FField *)0x0) {
        uVar1 = (uint)pFVar7[1]._padding_;
        local_50.Field = pFVar7;
        if ((int)uVar1 < 1) {
          pFVar20 = (FString *)(ulonglong)uVar1;
          pFVar13 = (FRigElementKey *)((ulonglong)pFVar13 & 0xffffffff00000000);
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if ((puVar15 == (uchar *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar1 = (uint)pFVar7[1]._padding_;
        _Src = puVar15 + *(int *)((longlong)&pFVar7[1].Owner.Container + 4);
        if ((int)uVar1 < 1) {
          pFVar20 = (FString *)(ulonglong)uVar1;
          pFVar13 = (FRigElementKey *)((ulonglong)pFVar13 & 0xffffffff00000000);
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if ((pFVar22 == (FRigBaseComponent *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _Dst = (uchar *)((longlong)&pFVar22->_padding_ +
                        (longlong)*(int *)((longlong)&pFVar7[1].Owner.Container + 4));
        if (_Dst != _Src) {
          if ((*(uint *)&pFVar7[1].ClassPrivate >> 0x1e & 1) == 0) {
            (**(code **)(pFVar7->_padding_ + 0xf0))
                      (pFVar7,_Dst,_Src,(int)pFVar7[1]._padding_,pFVar13,pFVar20);
          }
          else {
            memcpy(_Dst,_Src,
                   (longlong)*(int *)((longlong)&pFVar7[1]._padding_ + 4) *
                   (longlong)(int)pFVar7[1]._padding_);
          }
        }
        local_50.Field = (local_50.Field)->Next;
        TFieldIterator<FProperty>::IterateToNext(&local_50);
        pFVar7 = local_50.Field;
      }
      *puVar16 = '\x01';
    }
    this_00->CurrentInstructionIndex = iVar11;
  }
  return;
}

