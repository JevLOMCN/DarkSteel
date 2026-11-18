// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 10

// StaticStruct @ 14a12d1c0

UScriptStruct * __cdecl FRigVMDispatch_ArrayIterator::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayIterator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayIterator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayIterator,(UObject *)pUVar1,
                         L"RigVMDispatch_ArrayIterator");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayIterator.OuterSingleton;
}

// GetOpCode @ 14a12d2d0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

ERigVMOpCode __thiscall FRigVMDispatch_ArrayIterator::GetOpCode(FRigVMDispatch_ArrayIterator *this)

{
  return ArrayIterator;
}

// GetArgumentNameForOperandIndex @ 14a12d340

FName __thiscall
FRigVMDispatch_ArrayIterator::GetArgumentNameForOperandIndex
          (FRigVMDispatch_ArrayIterator *this,int param_1,int param_2,FRigVMRegistryHandle *param_3)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  uint in_register_00000014;
  
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ArgumentNames[0] = FRigVMDispatch_ArrayBase::ArrayName;
      ArgumentNames[1] = FRigVMDispatch_ArrayBase::ElementName;
      ArgumentNames[2] = FRigVMDispatch_ArrayBase::IndexName;
      ArgumentNames[3] = FRigVMDispatch_ArrayBase::CountName;
      ArgumentNames[4] = FRigVMDispatch_ArrayBase::RatioName;
      ArgumentNames[5] = FRigVMStruct::ControlFlowBlockToRunName;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((int)param_3 != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTotalOperands == (sizeof(UEArrayCountHelper(ArgumentNames)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Array.cpp"
                       ,0x5d9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  FLazyName::Resolve(ArgumentNames + param_2);
  return FVar3;
}

// GetArgumentInfos @ 14a12d570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_ArrayIterator::GetArgumentInfos
          (FRigVMDispatch_ArrayIterator *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  FRigVMTemplateArgumentInfo *pFVar9;
  longlong *plVar10;
  FName *pFVar11;
  undefined1 auStack_b8 [32];
  TRigVMTypeIndex local_98;
  FName local_88;
  undefined1 local_78 [64];
  ForAnyElementType local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  puVar1 = &this->field_0x98;
  if (*(int *)&this->field_0xa0 == 0) {
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
    pFVar9 = FRigVMDispatch_ArrayBase::CreateArgumentInfo
                       ((FRigVMTemplateArgumentInfo *)local_78,&local_98.Name,Input);
    iVar8 = *(int *)&this->field_0xa0;
    if (iVar8 == *(int *)&this->field_0xa4) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar8 + 1;
    pFVar11 = (FName *)(*(longlong *)puVar1 + (longlong)iVar8 * 0x50);
    *pFVar11 = pFVar9->Name;
    *(ERigVMPinDirection *)&pFVar11[1].ComparisonIndex.Value = pFVar9->Direction;
    uVar6 = *(undefined4 *)&(pFVar9->FactoryCallback).field_0x4;
    pFVar11[2].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar9->FactoryCallback).field_0x0;
    pFVar11[2].Number = uVar6;
    uVar6 = *(undefined4 *)&(pFVar9->FactoryCallback).field_0x2c;
    pFVar11[7].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar9->FactoryCallback).field_0x28;
    pFVar11[7].Number = uVar6;
    *(undefined8 *)&(pFVar9->FactoryCallback).field_0x28 = 0;
    uVar3 = *(uint *)&(pFVar9->FactoryCallback).field_0x14;
    uVar4 = *(uint *)&(pFVar9->FactoryCallback).field_0x18;
    uVar5 = *(uint *)&(pFVar9->FactoryCallback).field_0x1c;
    pFVar11[4].ComparisonIndex.Value = *(uint *)&(pFVar9->FactoryCallback).field_0x10;
    pFVar11[4].Number = uVar3;
    pFVar11[5].ComparisonIndex.Value = uVar4;
    pFVar11[5].Number = uVar5;
    uVar6 = *(undefined4 *)&(pFVar9->FactoryCallback).field_0x24;
    pFVar11[6].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar9->FactoryCallback).field_0x20;
    pFVar11[6].Number = uVar6;
    if (pFVar11[2] != (FName)0x0) {
      *(undefined8 *)&pFVar9->FactoryCallback = 0;
    }
    pFVar11[8].ComparisonIndex = 0;
    pFVar11[8].Number = 0;
    pFVar11[8] = (FName)(pFVar9->TypeIndices).AllocatorInstance.Data;
    (pFVar9->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11[9].ComparisonIndex.Value = (pFVar9->TypeIndices).ArrayNum;
    pFVar11[9].Number = (pFVar9->TypeIndices).ArrayMax;
    (pFVar9->TypeIndices).ArrayNum = 0;
    (pFVar9->TypeIndices).ArrayMax = 0;
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    if (local_78._16_8_ != 0) {
      plVar10 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ElementName);
    pFVar9 = FRigVMDispatch_ArrayBase::CreateArgumentInfo
                       ((FRigVMTemplateArgumentInfo *)local_78,&local_98.Name,Output);
    iVar8 = *(int *)&this->field_0xa0;
    if (iVar8 == *(int *)&this->field_0xa4) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar8 + 1;
    pFVar11 = (FName *)(*(longlong *)puVar1 + (longlong)iVar8 * 0x50);
    *pFVar11 = pFVar9->Name;
    *(ERigVMPinDirection *)&pFVar11[1].ComparisonIndex.Value = pFVar9->Direction;
    uVar6 = *(undefined4 *)&(pFVar9->FactoryCallback).field_0x4;
    pFVar11[2].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar9->FactoryCallback).field_0x0;
    pFVar11[2].Number = uVar6;
    uVar6 = *(undefined4 *)&(pFVar9->FactoryCallback).field_0x2c;
    pFVar11[7].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar9->FactoryCallback).field_0x28;
    pFVar11[7].Number = uVar6;
    *(undefined8 *)&(pFVar9->FactoryCallback).field_0x28 = 0;
    uVar3 = *(uint *)&(pFVar9->FactoryCallback).field_0x14;
    uVar4 = *(uint *)&(pFVar9->FactoryCallback).field_0x18;
    uVar5 = *(uint *)&(pFVar9->FactoryCallback).field_0x1c;
    pFVar11[4].ComparisonIndex.Value = *(uint *)&(pFVar9->FactoryCallback).field_0x10;
    pFVar11[4].Number = uVar3;
    pFVar11[5].ComparisonIndex.Value = uVar4;
    pFVar11[5].Number = uVar5;
    uVar6 = *(undefined4 *)&(pFVar9->FactoryCallback).field_0x24;
    pFVar11[6].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar9->FactoryCallback).field_0x20;
    pFVar11[6].Number = uVar6;
    if (pFVar11[2] != (FName)0x0) {
      *(undefined8 *)&pFVar9->FactoryCallback = 0;
    }
    pFVar11[8].ComparisonIndex = 0;
    pFVar11[8].Number = 0;
    pFVar11[8] = (FName)(pFVar9->TypeIndices).AllocatorInstance.Data;
    (pFVar9->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11[9].ComparisonIndex.Value = (pFVar9->TypeIndices).ArrayNum;
    pFVar11[9].Number = (pFVar9->TypeIndices).ArrayMax;
    (pFVar9->TypeIndices).ArrayNum = 0;
    (pFVar9->TypeIndices).ArrayMax = 0;
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    if (local_78._16_8_ != 0) {
      plVar10 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::IndexName);
    pFVar9 = FRigVMDispatch_ArrayBase::CreateArgumentInfo
                       ((FRigVMTemplateArgumentInfo *)local_78,&local_98.Name,Output);
    iVar8 = *(int *)&this->field_0xa0;
    if (iVar8 == *(int *)&this->field_0xa4) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar8 + 1;
    pFVar11 = (FName *)(*(longlong *)puVar1 + (longlong)iVar8 * 0x50);
    *pFVar11 = pFVar9->Name;
    *(ERigVMPinDirection *)&pFVar11[1].ComparisonIndex.Value = pFVar9->Direction;
    uVar6 = *(undefined4 *)&(pFVar9->FactoryCallback).field_0x4;
    pFVar11[2].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar9->FactoryCallback).field_0x0;
    pFVar11[2].Number = uVar6;
    uVar6 = *(undefined4 *)&(pFVar9->FactoryCallback).field_0x2c;
    pFVar11[7].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar9->FactoryCallback).field_0x28;
    pFVar11[7].Number = uVar6;
    *(undefined8 *)&(pFVar9->FactoryCallback).field_0x28 = 0;
    uVar3 = *(uint *)&(pFVar9->FactoryCallback).field_0x14;
    uVar4 = *(uint *)&(pFVar9->FactoryCallback).field_0x18;
    uVar5 = *(uint *)&(pFVar9->FactoryCallback).field_0x1c;
    pFVar11[4].ComparisonIndex.Value = *(uint *)&(pFVar9->FactoryCallback).field_0x10;
    pFVar11[4].Number = uVar3;
    pFVar11[5].ComparisonIndex.Value = uVar4;
    pFVar11[5].Number = uVar5;
    uVar6 = *(undefined4 *)&(pFVar9->FactoryCallback).field_0x24;
    pFVar11[6].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar9->FactoryCallback).field_0x20;
    pFVar11[6].Number = uVar6;
    if (pFVar11[2] != (FName)0x0) {
      *(undefined8 *)&pFVar9->FactoryCallback = 0;
    }
    pFVar11[8].ComparisonIndex = 0;
    pFVar11[8].Number = 0;
    pFVar11[8] = (FName)(pFVar9->TypeIndices).AllocatorInstance.Data;
    (pFVar9->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11[9].ComparisonIndex.Value = (pFVar9->TypeIndices).ArrayNum;
    pFVar11[9].Number = (pFVar9->TypeIndices).ArrayMax;
    (pFVar9->TypeIndices).ArrayNum = 0;
    (pFVar9->TypeIndices).ArrayMax = 0;
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    if (local_78._16_8_ != 0) {
      plVar10 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::CountName);
    pFVar9 = FRigVMDispatch_ArrayBase::CreateArgumentInfo
                       ((FRigVMTemplateArgumentInfo *)local_78,&local_98.Name,Output);
    iVar8 = *(int *)&this->field_0xa0;
    if (iVar8 == *(int *)&this->field_0xa4) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar8 + 1;
    pFVar11 = (FName *)(*(longlong *)puVar1 + (longlong)iVar8 * 0x50);
    *pFVar11 = pFVar9->Name;
    *(ERigVMPinDirection *)&pFVar11[1].ComparisonIndex.Value = pFVar9->Direction;
    uVar6 = *(undefined4 *)&(pFVar9->FactoryCallback).field_0x4;
    pFVar11[2].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar9->FactoryCallback).field_0x0;
    pFVar11[2].Number = uVar6;
    uVar6 = *(undefined4 *)&(pFVar9->FactoryCallback).field_0x2c;
    pFVar11[7].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar9->FactoryCallback).field_0x28;
    pFVar11[7].Number = uVar6;
    *(undefined8 *)&(pFVar9->FactoryCallback).field_0x28 = 0;
    uVar3 = *(uint *)&(pFVar9->FactoryCallback).field_0x14;
    uVar4 = *(uint *)&(pFVar9->FactoryCallback).field_0x18;
    uVar5 = *(uint *)&(pFVar9->FactoryCallback).field_0x1c;
    pFVar11[4].ComparisonIndex.Value = *(uint *)&(pFVar9->FactoryCallback).field_0x10;
    pFVar11[4].Number = uVar3;
    pFVar11[5].ComparisonIndex.Value = uVar4;
    pFVar11[5].Number = uVar5;
    uVar6 = *(undefined4 *)&(pFVar9->FactoryCallback).field_0x24;
    pFVar11[6].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar9->FactoryCallback).field_0x20;
    pFVar11[6].Number = uVar6;
    if (pFVar11[2] != (FName)0x0) {
      *(undefined8 *)&pFVar9->FactoryCallback = 0;
    }
    pFVar11[8].ComparisonIndex = 0;
    pFVar11[8].Number = 0;
    pFVar11[8] = (FName)(pFVar9->TypeIndices).AllocatorInstance.Data;
    (pFVar9->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11[9].ComparisonIndex.Value = (pFVar9->TypeIndices).ArrayNum;
    pFVar11[9].Number = (pFVar9->TypeIndices).ArrayMax;
    (pFVar9->TypeIndices).ArrayNum = 0;
    (pFVar9->TypeIndices).ArrayMax = 0;
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    if (local_78._16_8_ != 0) {
      plVar10 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::RatioName);
    pFVar9 = FRigVMDispatch_ArrayBase::CreateArgumentInfo
                       ((FRigVMTemplateArgumentInfo *)local_78,&local_98.Name,Output);
    iVar8 = *(int *)&this->field_0xa0;
    if (iVar8 == *(int *)&this->field_0xa4) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar8 + 1;
    pFVar11 = (FName *)(*(longlong *)puVar1 + (longlong)iVar8 * 0x50);
    *pFVar11 = pFVar9->Name;
    *(ERigVMPinDirection *)&pFVar11[1].ComparisonIndex.Value = pFVar9->Direction;
    uVar6 = *(undefined4 *)&(pFVar9->FactoryCallback).field_0x4;
    pFVar11[2].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar9->FactoryCallback).field_0x0;
    pFVar11[2].Number = uVar6;
    uVar6 = *(undefined4 *)&(pFVar9->FactoryCallback).field_0x2c;
    pFVar11[7].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar9->FactoryCallback).field_0x28;
    pFVar11[7].Number = uVar6;
    *(undefined8 *)&(pFVar9->FactoryCallback).field_0x28 = 0;
    uVar3 = *(uint *)&(pFVar9->FactoryCallback).field_0x14;
    uVar4 = *(uint *)&(pFVar9->FactoryCallback).field_0x18;
    uVar5 = *(uint *)&(pFVar9->FactoryCallback).field_0x1c;
    pFVar11[4].ComparisonIndex.Value = *(uint *)&(pFVar9->FactoryCallback).field_0x10;
    pFVar11[4].Number = uVar3;
    pFVar11[5].ComparisonIndex.Value = uVar4;
    pFVar11[5].Number = uVar5;
    uVar6 = *(undefined4 *)&(pFVar9->FactoryCallback).field_0x24;
    pFVar11[6].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar9->FactoryCallback).field_0x20;
    pFVar11[6].Number = uVar6;
    if (pFVar11[2] != (FName)0x0) {
      *(undefined8 *)&pFVar9->FactoryCallback = 0;
    }
    pFVar11[8].ComparisonIndex = 0;
    pFVar11[8].Number = 0;
    pFVar11[8] = (FName)(pFVar9->TypeIndices).AllocatorInstance.Data;
    (pFVar9->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11[9].ComparisonIndex.Value = (pFVar9->TypeIndices).ArrayNum;
    pFVar11[9].Number = (pFVar9->TypeIndices).ArrayMax;
    (pFVar9->TypeIndices).ArrayNum = 0;
    (pFVar9->TypeIndices).ArrayMax = 0;
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    if (local_78._16_8_ != 0) {
      plVar10 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    iVar8 = *(int *)&this->field_0xa0;
    if (iVar8 == *(int *)&this->field_0xa4) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar8 + 1;
    iVar7 = RigVMTypeUtils::TypeIndex::FName.Index;
    local_98.Name = RigVMTypeUtils::TypeIndex::FName.Name;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&FRigVMStruct::ControlFlowBlockToRunName);
    local_98.Index = iVar7;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar8 * 0x50),local_88,Hidden,
               &local_98);
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// GetExecuteArguments_Impl @ 14a12daa0

TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_ArrayIterator::GetExecuteArguments_Impl
          (FRigVMDispatch_ArrayIterator *this,FRigVMDispatchContext *param_1)

{
  int *piVar1;
  TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  ForAnyElementType FVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 local_res18;
  undefined8 local_res20;
  uint uStack_30;
  
  uVar7 = (ulonglong)_tls_index;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8);
  if ((*(uint *)(lVar4 + 0x96f0) & 1) == 0) {
    *(uint *)(lVar4 + 0x96f0) = *(uint *)(lVar4 + 0x96f0) | 1;
    __tlregdtor(`FRigVMDispatch_ArrayIterator::GetExecuteArguments_Impl'::__l2::
                _dynamic_atexit_destructor_for__ExecuteArguments__);
  }
  pTVar2 = (TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *)(lVar4 + 0x9640);
  if (*(int *)(lVar4 + 0x9648) == 0) {
    if (*(int *)(lVar4 + 0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FLazyName::Resolve(&FRigVMStruct::ExecuteContextName);
        uStack_30 = CONCAT31(uStack_30._1_3_,2);
        Arguments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        Arguments.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,1,0,&Arguments.AllocatorInstance,1,&Arguments.ArrayMax);
        FVar5 = Arguments.AllocatorInstance;
        *(undefined8 *)Arguments.AllocatorInstance.Data = local_res18;
        *(ulonglong *)(FVar5.Data + 8) = (ulonglong)uStack_30;
        *(undefined8 *)(FVar5.Data + 0x10) = 0xffffffff00000000;
        atexit(`FRigVMDispatch_ArrayBaseMutable::GetExecuteArguments_Impl'::__l2::
               _dynamic_atexit_destructor_for__Arguments__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    iVar6 = Arguments.ArrayNum;
    FVar5.Data = Arguments.AllocatorInstance.Data;
    if (pTVar2 != &Arguments) {
      lVar8 = (longlong)Arguments.ArrayNum;
      piVar1 = (int *)(lVar4 + 0x964c);
      *(int *)(lVar4 + 0x9648) = Arguments.ArrayNum;
      if ((iVar6 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,iVar6,*piVar1,(ForAnyElementType *)pTVar2,iVar6,piVar1);
        if (iVar6 != 0) {
          memcpy((pTVar2->AllocatorInstance).Data,FVar5.Data,lVar8 * 0x18);
        }
      }
    }
    iVar6 = *(int *)(lVar4 + 0x9648);
    if (iVar6 == *(int *)(lVar4 + 0x964c)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x418,(ForAnyElementType *)pTVar2,(int *)(lVar4 + 0x964c));
    }
    *(int *)(lVar4 + 0x9648) = iVar6 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x18;
    FLazyName::Resolve(&FRigVMStruct::ControlFlowCompletedName);
    *(undefined8 *)pFVar3 = local_res20;
    pFVar3[8] = (FScriptContainerElement)0x1;
    *(undefined8 *)(pFVar3 + 0xc) = 0;
    *(undefined4 *)(pFVar3 + 0x14) = 0xffffffff;
    uVar7 = (ulonglong)_tls_index;
  }
  return (TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9640);
}

// GetControlFlowBlocks_Impl @ 14a12de20

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_ArrayIterator::GetControlFlowBlocks_Impl
          (FRigVMDispatch_ArrayIterator *this,FRigVMDispatchContext *param_1)

{
  ForAnyElementType FVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FLazyName::Resolve(&FRigVMStruct::ExecuteContextName);
      FLazyName::Resolve(&FRigVMStruct::ControlFlowCompletedName);
      Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      Blocks.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,2,0,&Blocks.AllocatorInstance,2,&Blocks.ArrayMax);
      FVar1 = Blocks.AllocatorInstance;
      *(undefined8 *)Blocks.AllocatorInstance.Data = local_18;
      *(undefined8 *)(FVar1.Data + 8) = uStack_10;
      atexit(`FRigVMDispatch_ArrayIterator::GetControlFlowBlocks_Impl'::__l2::
             _dynamic_atexit_destructor_for__Blocks__);
      _Init_thread_footer(&::_TSS0);
      return &Blocks;
    }
  }
  return &Blocks;
}

// IsControlFlowBlockSliced @ 14a12df30

bool __thiscall
FRigVMDispatch_ArrayIterator::IsControlFlowBlockSliced
          (FRigVMDispatch_ArrayIterator *this,FName *param_1)

{
  FName local_res10;
  
  FLazyName::Resolve(&FRigVMStruct::ExecuteContextName);
  return *param_1 == local_res10;
}

// OnNewArgumentType @ 14a12df70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMDispatch_ArrayIterator::OnNewArgumentType
          (FRigVMDispatch_ArrayIterator *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,FName *param_1,TRigVMTypeIndex *param_2,
          FRigVMRegistryHandle *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar3;
  FRigVMRegistry_NoLock *pFVar4;
  initializer_list<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_> *piVar5;
  undefined1 auStack_1e8 [32];
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  FName local_180;
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined1 local_158 [16];
  FName local_148;
  int local_140;
  FName local_138;
  int local_130;
  initializer_list<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_> local_128;
  initializer_list<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_> local_118;
  undefined1 local_108 [12];
  undefined1 local_fc [20];
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_e8;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  TRigVMTypeIndex *local_c0;
  undefined1 *local_b8;
  TRigVMTypeIndex *local_b0;
  undefined1 *local_a8;
  TRigVMTypeIndex *local_a0;
  undefined1 *local_98;
  TRigVMTypeIndex *local_90;
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_88;
  undefined1 *local_78;
  TRigVMTypeIndex *local_70;
  undefined1 *local_68;
  TRigVMTypeIndex *local_60;
  undefined1 *local_58;
  TRigVMTypeIndex *local_50;
  undefined1 *local_48;
  TRigVMTypeIndex *local_40;
  undefined1 *local_38;
  TRigVMTypeIndex *local_30;
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_28;
  
  local_28.Key = (FName *)(__security_cookie.value ^ (ulonglong)auStack_1e8);
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
  if (*param_1 != local_1c8) {
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ElementName);
    if (*param_1 != local_1c0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InArgumentName == ArrayName || InArgumentName == ElementName",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Array.cpp"
                         ,0x607,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
  if (*param_1 == local_1b8) {
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
    local_e8.Key = &local_1b0;
    local_e8.Value = param_2;
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ElementName);
    pFVar4 = FRigVMRegistryHandle::operator->(param_3);
    local_140 = param_2->Index;
    local_148 = param_2->Name;
    local_d0 = (**(code **)(pFVar4->_padding_ + 0x150))(pFVar4,local_108,&local_148);
    local_d8 = local_1a8;
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::IndexName);
    local_c8 = local_1a0;
    local_c0 = &RigVMTypeUtils::TypeIndex::Int32;
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::CountName);
    local_b8 = local_198;
    local_b0 = &RigVMTypeUtils::TypeIndex::Int32;
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::RatioName);
    local_a8 = local_190;
    local_a0 = &RigVMTypeUtils::TypeIndex::Float;
    FLazyName::Resolve(&FRigVMStruct::ControlFlowBlockToRunName);
    local_98 = local_188;
    piVar5 = &local_128;
    local_90 = &RigVMTypeUtils::TypeIndex::FName;
    local_128._Last = &local_88;
    local_128._First = &local_e8;
  }
  else {
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
    pFVar4 = FRigVMRegistryHandle::operator->(param_3);
    local_130 = param_2->Index;
    local_138 = param_2->Name;
    local_88.Value =
         (TRigVMTypeIndex *)(**(code **)(pFVar4->_padding_ + 0x148))(pFVar4,local_fc,&local_138);
    local_88.Key = &local_180;
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ElementName);
    local_78 = local_178;
    local_70 = param_2;
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::IndexName);
    local_68 = local_170;
    local_60 = &RigVMTypeUtils::TypeIndex::Int32;
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::CountName);
    local_58 = local_168;
    local_50 = &RigVMTypeUtils::TypeIndex::Int32;
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::RatioName);
    local_48 = local_160;
    local_40 = &RigVMTypeUtils::TypeIndex::Float;
    FLazyName::Resolve(&FRigVMStruct::ControlFlowBlockToRunName);
    local_38 = local_158;
    piVar5 = &local_118;
    local_30 = &RigVMTypeUtils::TypeIndex::FName;
    local_118._First = &local_88;
    local_118._Last = &local_28;
  }
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
            (__return_storage_ptr__,piVar5);
  return __return_storage_ptr__;
}

// GetDispatchFunctionImpl @ 14a12e290

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_ArrayIterator::GetDispatchFunctionImpl
          (FRigVMDispatch_ArrayIterator *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// Execute @ 14a19a560

void __cdecl
FRigVMDispatch_ArrayIterator::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  int iVar2;
  FRigVMPropertyPath *this;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  FProperty *pFVar9;
  ulonglong *puVar10;
  FRigVMMemoryHandle *pFVar11;
  float *pfVar12;
  longlong *plVar13;
  uchar *puVar14;
  ulonglong uVar15;
  FProperty *pFVar16;
  longlong local_48;
  longlong local_40;
  
  pFVar16 = (FProperty *)0x0;
  if ((param_2->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this = param_2->DataPtr->PropertyPath;
  if (this == (FRigVMPropertyPath *)0x0) {
    pFVar9 = param_2->DataPtr->Property;
  }
  else {
    pFVar9 = FRigVMPropertyPath::GetTailProperty(this);
  }
  if (((pFVar9 == (FProperty *)0x0) || ((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x15 & 1) == 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar9 = pFVar16, bVar8)
     ) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_2->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar10 = (ulonglong *)pFVar11->Ptr;
  }
  else {
    puVar10 = (ulonglong *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar11->PropertyPath,pFVar11->Ptr,pFVar11->Property);
  }
  lVar7 = pFVar9[1]._padding_;
  (**(code **)(*(longlong *)pFVar9[1]._padding_ + 0x168))();
  lVar3 = pFVar9[1]._padding_;
  iVar1 = *(int *)(lVar3 + 0x34);
  if ((iVar1 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((lVar3 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar2 = param_2->ArrayNum;
  if ((iVar2 < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  piVar4 = (int *)param_2->DataPtr[2].Ptr;
  if ((iVar2 < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  piVar5 = (int *)param_2->DataPtr[3].Ptr;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar12 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,false,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  plVar13 = (longlong *)FRigVMMemoryHandle::GetData_Internal(pFVar11,false,-1);
  if (*plVar13 == 0) {
    FLazyName::Resolve(&FRigVMStruct::ExecuteContextName);
    *plVar13 = local_48;
    *piVar5 = (int)puVar10[1];
    *piVar4 = -1;
    *pfVar12 = 0.0;
  }
  iVar2 = *piVar4;
  *piVar4 = iVar2 + 1;
  if (0 < *piVar5) {
    *pfVar12 = (float)(iVar2 + 1) / (float)(*piVar5 + -1);
  }
  if (*piVar4 < *piVar5) {
    pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,1);
    puVar14 = FRigVMMemoryHandle::GetData_Internal(pFVar11,false,-1);
    if ((int)puVar10[1] != 0) {
      uVar15 = *puVar10;
      if (((lVar7 & 1) != 0) && ((uVar15 & 1) != 0)) {
        uVar15 = ((longlong)uVar15 >> 0x18) + (longlong)puVar10;
      }
      pFVar16 = (FProperty *)((longlong)*piVar4 * (longlong)iVar1 + uVar15);
    }
    pFVar9 = (FProperty *)pFVar9[1]._padding_;
    pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,1);
    URigVMMemoryStorage::CopyProperty(pFVar11->Property,puVar14,pFVar9,(uchar *)pFVar16);
  }
  else {
    FLazyName::Resolve(&FRigVMStruct::ControlFlowCompletedName);
    *plVar13 = local_40;
  }
  return;
}

