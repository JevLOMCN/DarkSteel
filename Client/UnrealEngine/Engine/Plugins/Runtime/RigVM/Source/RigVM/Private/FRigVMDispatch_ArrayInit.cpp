// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a123e20

UScriptStruct * __cdecl FRigVMDispatch_ArrayInit::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayInit.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayInit.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayInit,(UObject *)pUVar1,
                         L"RigVMDispatch_ArrayInit");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayInit.OuterSingleton;
}

// GetArgumentNameForOperandIndex @ 14a123f60

FName __thiscall
FRigVMDispatch_ArrayInit::GetArgumentNameForOperandIndex
          (FRigVMDispatch_ArrayInit *this,int param_1,int param_2,FRigVMRegistryHandle *param_3)

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
      ArgumentNames[1] = FRigVMDispatch_ArrayBase::NumName;
      ArgumentNames[2] = FRigVMDispatch_ArrayBase::ElementName;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((int)param_3 != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTotalOperands == (sizeof(UEArrayCountHelper(ArgumentNames)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Array.cpp"
                       ,0x1e3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  FLazyName::Resolve(ArgumentNames + param_2);
  return FVar3;
}

// GetArgumentInfos @ 14a1240b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_ArrayInit::GetArgumentInfos
          (FRigVMDispatch_ArrayInit *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  FRigVMTemplateArgumentInfo *pFVar7;
  longlong *plVar8;
  FName *pFVar9;
  undefined1 auStack_98 [32];
  FName local_78 [2];
  undefined1 local_68 [64];
  ForAnyElementType local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  puVar1 = &this->field_0x98;
  if (*(int *)&this->field_0xa0 == 0) {
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
    pFVar7 = FRigVMDispatch_ArrayBase::CreateArgumentInfo
                       ((FRigVMTemplateArgumentInfo *)local_68,local_78,IO);
    iVar6 = *(int *)&this->field_0xa0;
    if (iVar6 == *(int *)&this->field_0xa4) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar6 + 1;
    pFVar9 = (FName *)(*(longlong *)puVar1 + (longlong)iVar6 * 0x50);
    *pFVar9 = pFVar7->Name;
    *(ERigVMPinDirection *)&pFVar9[1].ComparisonIndex.Value = pFVar7->Direction;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x4;
    pFVar9[2].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x0;
    pFVar9[2].Number = uVar5;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x2c;
    pFVar9[7].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x28;
    pFVar9[7].Number = uVar5;
    *(undefined8 *)&(pFVar7->FactoryCallback).field_0x28 = 0;
    uVar2 = *(uint *)&(pFVar7->FactoryCallback).field_0x14;
    uVar3 = *(uint *)&(pFVar7->FactoryCallback).field_0x18;
    uVar4 = *(uint *)&(pFVar7->FactoryCallback).field_0x1c;
    pFVar9[4].ComparisonIndex.Value = *(uint *)&(pFVar7->FactoryCallback).field_0x10;
    pFVar9[4].Number = uVar2;
    pFVar9[5].ComparisonIndex.Value = uVar3;
    pFVar9[5].Number = uVar4;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x24;
    pFVar9[6].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x20;
    pFVar9[6].Number = uVar5;
    if (pFVar9[2] != (FName)0x0) {
      *(undefined8 *)&pFVar7->FactoryCallback = 0;
    }
    pFVar9[8].ComparisonIndex = 0;
    pFVar9[8].Number = 0;
    pFVar9[8] = (FName)(pFVar7->TypeIndices).AllocatorInstance.Data;
    (pFVar7->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9[9].ComparisonIndex.Value = (pFVar7->TypeIndices).ArrayNum;
    pFVar9[9].Number = (pFVar7->TypeIndices).ArrayMax;
    (pFVar7->TypeIndices).ArrayNum = 0;
    (pFVar7->TypeIndices).ArrayMax = 0;
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    if (local_68._16_8_ != 0) {
      plVar8 = (longlong *)(local_68 + 0x20);
      if ((longlong *)local_68._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_68._56_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::NumName);
    pFVar7 = FRigVMDispatch_ArrayBase::CreateArgumentInfo
                       ((FRigVMTemplateArgumentInfo *)local_68,local_78,Input);
    iVar6 = *(int *)&this->field_0xa0;
    if (iVar6 == *(int *)&this->field_0xa4) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar6 + 1;
    pFVar9 = (FName *)(*(longlong *)puVar1 + (longlong)iVar6 * 0x50);
    *pFVar9 = pFVar7->Name;
    *(ERigVMPinDirection *)&pFVar9[1].ComparisonIndex.Value = pFVar7->Direction;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x4;
    pFVar9[2].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x0;
    pFVar9[2].Number = uVar5;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x2c;
    pFVar9[7].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x28;
    pFVar9[7].Number = uVar5;
    *(undefined8 *)&(pFVar7->FactoryCallback).field_0x28 = 0;
    uVar2 = *(uint *)&(pFVar7->FactoryCallback).field_0x14;
    uVar3 = *(uint *)&(pFVar7->FactoryCallback).field_0x18;
    uVar4 = *(uint *)&(pFVar7->FactoryCallback).field_0x1c;
    pFVar9[4].ComparisonIndex.Value = *(uint *)&(pFVar7->FactoryCallback).field_0x10;
    pFVar9[4].Number = uVar2;
    pFVar9[5].ComparisonIndex.Value = uVar3;
    pFVar9[5].Number = uVar4;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x24;
    pFVar9[6].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x20;
    pFVar9[6].Number = uVar5;
    if (pFVar9[2] != (FName)0x0) {
      *(undefined8 *)&pFVar7->FactoryCallback = 0;
    }
    pFVar9[8].ComparisonIndex = 0;
    pFVar9[8].Number = 0;
    pFVar9[8] = (FName)(pFVar7->TypeIndices).AllocatorInstance.Data;
    (pFVar7->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9[9].ComparisonIndex.Value = (pFVar7->TypeIndices).ArrayNum;
    pFVar9[9].Number = (pFVar7->TypeIndices).ArrayMax;
    (pFVar7->TypeIndices).ArrayNum = 0;
    (pFVar7->TypeIndices).ArrayMax = 0;
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    if (local_68._16_8_ != 0) {
      plVar8 = (longlong *)(local_68 + 0x20);
      if ((longlong *)local_68._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_68._56_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ElementName);
    pFVar7 = FRigVMDispatch_ArrayBase::CreateArgumentInfo
                       ((FRigVMTemplateArgumentInfo *)local_68,local_78,Input);
    iVar6 = *(int *)&this->field_0xa0;
    if (iVar6 == *(int *)&this->field_0xa4) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar6 + 1;
    pFVar9 = (FName *)(*(longlong *)puVar1 + (longlong)iVar6 * 0x50);
    *pFVar9 = pFVar7->Name;
    *(ERigVMPinDirection *)&pFVar9[1].ComparisonIndex.Value = pFVar7->Direction;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x4;
    pFVar9[2].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x0;
    pFVar9[2].Number = uVar5;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x2c;
    pFVar9[7].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x28;
    pFVar9[7].Number = uVar5;
    *(undefined8 *)&(pFVar7->FactoryCallback).field_0x28 = 0;
    uVar2 = *(uint *)&(pFVar7->FactoryCallback).field_0x14;
    uVar3 = *(uint *)&(pFVar7->FactoryCallback).field_0x18;
    uVar4 = *(uint *)&(pFVar7->FactoryCallback).field_0x1c;
    pFVar9[4].ComparisonIndex.Value = *(uint *)&(pFVar7->FactoryCallback).field_0x10;
    pFVar9[4].Number = uVar2;
    pFVar9[5].ComparisonIndex.Value = uVar3;
    pFVar9[5].Number = uVar4;
    uVar5 = *(undefined4 *)&(pFVar7->FactoryCallback).field_0x24;
    pFVar9[6].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar7->FactoryCallback).field_0x20;
    pFVar9[6].Number = uVar5;
    if (pFVar9[2] != (FName)0x0) {
      *(undefined8 *)&pFVar7->FactoryCallback = 0;
    }
    pFVar9[8].ComparisonIndex = 0;
    pFVar9[8].Number = 0;
    pFVar9[8] = (FName)(pFVar7->TypeIndices).AllocatorInstance.Data;
    (pFVar7->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9[9].ComparisonIndex.Value = (pFVar7->TypeIndices).ArrayNum;
    pFVar9[9].Number = (pFVar7->TypeIndices).ArrayMax;
    (pFVar7->TypeIndices).ArrayNum = 0;
    (pFVar7->TypeIndices).ArrayMax = 0;
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    if (local_68._16_8_ != 0) {
      plVar8 = (longlong *)(local_68 + 0x20);
      if ((longlong *)local_68._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_68._56_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// OnNewArgumentType @ 14a124500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMDispatch_ArrayInit::OnNewArgumentType
          (FRigVMDispatch_ArrayInit *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,FName *param_1,TRigVMTypeIndex *param_2,
          FRigVMRegistryHandle *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar3;
  FRigVMRegistry_NoLock *pFVar4;
  undefined1 auStack_c8 [32];
  FName local_a8;
  FName local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  FName local_88;
  int local_80;
  initializer_list<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_> local_78;
  undefined1 local_68 [16];
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_58;
  undefined1 *local_48;
  TRigVMTypeIndex *local_40;
  undefined1 *local_38;
  undefined8 local_30;
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_28;
  
  local_28.Key = (FName *)(__security_cookie.value ^ (ulonglong)auStack_c8);
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
  if (*param_1 != local_a8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgumentName == ArrayName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Array.cpp"
                       ,500,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
  local_58.Key = &local_a0;
  local_58.Value = param_2;
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::NumName);
  local_48 = local_98;
  local_40 = &RigVMTypeUtils::TypeIndex::Int32;
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ElementName);
  pFVar4 = FRigVMRegistryHandle::operator->(param_3);
  local_80 = param_2->Index;
  local_88 = param_2->Name;
  local_30 = (**(code **)(pFVar4->_padding_ + 0x150))(pFVar4,local_68,&local_88);
  local_38 = local_90;
  local_78._First = &local_58;
  local_78._Last = &local_28;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
            (__return_storage_ptr__,&local_78);
  return __return_storage_ptr__;
}

// GetDispatchFunctionImpl @ 14a1246b0

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_ArrayInit::GetDispatchFunctionImpl
          (FRigVMDispatch_ArrayInit *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// Execute @ 14a199740

void __cdecl
FRigVMDispatch_ArrayInit::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  EArrayPropertyFlags EVar1;
  FScriptArrayHelper_u_8 FVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigVMPropertyPath *this;
  code *pcVar4;
  bool bVar5;
  int *piVar6;
  FProperty *pFVar7;
  uchar *puVar8;
  ulonglong uVar9;
  FProperty *pFVar10;
  int iVar11;
  FProperty *pFVar12;
  FProperty *pFVar13;
  FScriptArrayHelper local_48;
  
  pFVar12 = (FProperty *)0x0;
  if ((param_2->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar13 = param_2->DataPtr->Property;
  if (((pFVar13 == (FProperty *)0x0) || ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0x15 & 1) == 0))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar13 = pFVar12,
        bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar1 = (EArrayPropertyFlags)pFVar13[1]._padding_;
  FVar2 = *(FScriptArrayHelper_u_8 *)param_2->DataPtr;
  local_48.ElementAlignment = (**(code **)(*(longlong *)pFVar13[1]._padding_ + 0x168))();
  local_48.InnerProperty = (FProperty *)pFVar13[1]._padding_;
  local_48.ElementSize = (local_48.InnerProperty)->ElementSize;
  local_48.field1_0x8 = FVar2;
  local_48.ArrayFlags = EVar1;
  if ((local_48.ElementSize < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((local_48.InnerProperty == (FProperty *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar11 = param_2->ArrayNum;
  if ((iVar11 < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar6 = (int *)pFVar3[1].Ptr;
  }
  else {
    piVar6 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  if ((iVar11 < 3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this = param_2->DataPtr[2].PropertyPath;
  if (this == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr[2].Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(this);
  }
  if ((iVar11 < 3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar3[2].Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar3[2].PropertyPath,pFVar3[2].Ptr,pFVar3[2].Property);
  }
  bVar5 = FRigVMExtendedExecuteContext::IsValidArraySize(param_1,*piVar6);
  if (!bVar5) {
    return;
  }
  iVar11 = *piVar6;
  if ((iVar11 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x10a6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((local_48.field1_0x8.FreezableArray)->ArrayNum == 0) {
    if (iVar11 == 0) goto LAB_14a199a79;
  }
  else {
    FScriptArrayHelper::DestructItems(&local_48,0,(local_48.field1_0x8.FreezableArray)->ArrayNum);
  }
  (local_48.field1_0x8.FreezableArray)->ArrayNum = 0;
  if ((local_48.ArrayFlags & UsesMemoryImageAllocator) == None) {
    if (iVar11 != (local_48.field1_0x8.FreezableArray)->ArrayMax) {
      TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
                ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)local_48.field1_0x8.HeapArray,
                 iVar11,local_48.ElementSize,local_48.ElementAlignment);
    }
  }
  else if (iVar11 != (local_48.field1_0x8.FreezableArray)->ArrayMax) {
    TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo
              (local_48.field1_0x8.FreezableArray,iVar11,local_48.ElementSize,
               local_48.ElementAlignment);
  }
LAB_14a199a79:
  FScriptArrayHelper::AddValues(&local_48,iVar11);
  pFVar10 = pFVar12;
  while( true ) {
    iVar11 = (int)pFVar10;
    if ((local_48.field1_0x8.FreezableArray)->ArrayNum <= iVar11) break;
    pFVar10 = pFVar12;
    if ((local_48.field1_0x8.FreezableArray)->ArrayNum != 0) {
      uVar9 = (local_48.field1_0x8.FreezableArray)->_padding_;
      if (((local_48.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar9 & 1) != 0)) {
        uVar9 = (longlong)&(local_48.field1_0x8.HeapArray)->field_0x0 + ((longlong)uVar9 >> 0x18);
      }
      pFVar10 = (FProperty *)((longlong)local_48.ElementSize * (longlong)iVar11 + uVar9);
    }
    URigVMMemoryStorage::CopyProperty
              ((FProperty *)pFVar13[1]._padding_,(uchar *)pFVar10,pFVar7,puVar8);
    pFVar10 = (FProperty *)(ulonglong)(iVar11 + 1);
  }
  return;
}

