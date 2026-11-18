// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a12c180

UScriptStruct * __cdecl FRigVMDispatch_ArrayDifference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayDifference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayDifference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayDifference,(UObject *)pUVar1,
                         L"RigVMDispatch_ArrayDifference");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayDifference.OuterSingleton;
}

// GetOpCode @ 14a12c1c0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

ERigVMOpCode __thiscall
FRigVMDispatch_ArrayDifference::GetOpCode(FRigVMDispatch_ArrayDifference *this)

{
  return ArrayDifference;
}

// GetArgumentNameForOperandIndex @ 14a12c1d0

FName __thiscall
FRigVMDispatch_ArrayDifference::GetArgumentNameForOperandIndex
          (FRigVMDispatch_ArrayDifference *this,int param_1,int param_2,
          FRigVMRegistryHandle *param_3)

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
      ArgumentNames[1] = FRigVMDispatch_ArrayBase::OtherName;
      ArgumentNames[2] = FRigVMDispatch_ArrayBase::ResultName;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((int)param_3 != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTotalOperands == (sizeof(UEArrayCountHelper(ArgumentNames)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Array.cpp"
                       ,0x52f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  FLazyName::Resolve(ArgumentNames + param_2);
  return FVar3;
}

// GetArgumentInfos @ 14a12c300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_ArrayDifference::GetArgumentInfos
          (FRigVMDispatch_ArrayDifference *this,FRigVMRegistryHandle *param_1)

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
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::OtherName);
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
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ResultName);
    pFVar7 = FRigVMDispatch_ArrayBase::CreateArgumentInfo
                       ((FRigVMTemplateArgumentInfo *)local_68,local_78,Output);
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

// OnNewArgumentType @ 14a12c610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMDispatch_ArrayDifference::OnNewArgumentType
          (FRigVMDispatch_ArrayDifference *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,FName *param_1,TRigVMTypeIndex *param_2,
          FRigVMRegistryHandle *param_3)

{
  code *pcVar1;
  bool bVar2;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar3;
  undefined1 auStack_a8 [32];
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  initializer_list<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_> local_58;
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_48;
  undefined1 *local_38;
  TRigVMTypeIndex *local_30;
  undefined1 *local_28;
  TRigVMTypeIndex *local_20;
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_18;
  
  local_18.Key = (FName *)(__security_cookie.value ^ (ulonglong)auStack_a8);
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
  if (*param_1 != local_88) {
    FLazyName::Resolve(&FRigVMDispatch_ArrayBase::OtherName);
    if (*param_1 != local_80) {
      FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ResultName);
      if (*param_1 != local_78) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InArgumentName == ArrayName || InArgumentName == OtherName || InArgumentName == ResultName"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Array.cpp"
                           ,0x540,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar3 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                    *)(*pcVar1)();
          return pTVar3;
        }
      }
    }
  }
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ArrayName);
  local_48.Key = &local_70;
  local_48.Value = param_2;
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::OtherName);
  local_38 = local_68;
  local_30 = param_2;
  FLazyName::Resolve(&FRigVMDispatch_ArrayBase::ResultName);
  local_28 = local_60;
  local_58._First = &local_48;
  local_58._Last = &local_18;
  local_20 = param_2;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
            (__return_storage_ptr__,&local_58);
  return __return_storage_ptr__;
}

// GetDispatchFunctionImpl @ 14a12c7f0

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_ArrayDifference::GetDispatchFunctionImpl
          (FRigVMDispatch_ArrayDifference *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// Execute @ 14a198420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRigVMDispatch_ArrayDifference::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  FRigVMMemoryHandle *pFVar7;
  FArrayProperty *pFVar8;
  uchar *puVar9;
  FArrayProperty *pFVar10;
  byte bVar11;
  FProperty *pFVar12;
  longlong lVar13;
  undefined1 *puVar14;
  uchar *puVar15;
  ulonglong uVar16;
  uint uVar17;
  uint *puVar18;
  ulonglong uVar19;
  int iVar20;
  void *pvVar21;
  uint uVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  undefined1 auStackY_2a8 [32];
  undefined1 local_268;
  undefined1 local_267 [7];
  FScriptArrayHelper local_260;
  longlong *local_240;
  undefined8 uStack_238;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_230;
  uint uStack_228;
  uint uStack_224;
  int iStack_220;
  undefined4 uStack_21c;
  int local_218;
  undefined4 uStack_214;
  undefined8 local_210;
  FProperty *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e0;
  int local_1c0;
  int local_1bc;
  FProperty *local_1b8;
  FProperty *local_1b0;
  <lambda_1> local_1a8;
  longlong *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  FScriptArrayHelper local_138;
  FScriptArrayHelper local_118;
  undefined4 local_dc;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  int local_a4;
  undefined1 local_a0 [8];
  undefined1 *local_98;
  int local_90;
  undefined1 local_88 [40];
  uint local_60;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0);
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FArrayProperty *)pFVar7->Property;
  }
  else {
    pFVar8 = (FArrayProperty *)FRigVMPropertyPath::GetTailProperty(pFVar7->PropertyPath);
  }
  if ((pFVar8 == (FArrayProperty *)0x0) || ((*(uint *)(pFVar8->_padding_ + 0x18) >> 0x15 & 1) == 0))
  {
    pFVar8 = (FArrayProperty *)0x0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  EVar1 = pFVar8->ArrayFlags;
  uVar6 = (**(code **)(pFVar8->Inner->_padding_ + 0x168))(pFVar8->Inner);
  FScriptArrayHelper::FScriptArrayHelper
            (&local_138,Internal,pFVar8->Inner,puVar9,pFVar8->Inner->ElementSize,uVar6,EVar1);
  local_210 = 1;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,1);
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar10 = (FArrayProperty *)pFVar7->Property;
  }
  else {
    pFVar10 = (FArrayProperty *)FRigVMPropertyPath::GetTailProperty(pFVar7->PropertyPath);
  }
  if ((pFVar10 == (FArrayProperty *)0x0) ||
     ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    pFVar10 = (FArrayProperty *)0x0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,1);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  EVar1 = pFVar10->ArrayFlags;
  uVar6 = (**(code **)(pFVar10->Inner->_padding_ + 0x168))(pFVar10->Inner);
  FScriptArrayHelper::FScriptArrayHelper
            (&local_118,Internal,pFVar10->Inner,puVar9,pFVar10->Inner->ElementSize,uVar6,EVar1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,2);
  pFVar12 = pFVar7->Property;
  if ((pFVar12 == (FProperty *)0x0) || ((*(uint *)(pFVar12->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    pFVar12 = (FProperty *)0x0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,2);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  lVar13 = pFVar12[1]._padding_;
  uVar6 = (**(code **)(*(longlong *)pFVar12[1]._padding_ + 0x168))();
  FScriptArrayHelper::FScriptArrayHelper
            (&local_260,Internal,(FProperty *)pFVar12[1]._padding_,puVar9,
             ((FProperty *)pFVar12[1]._padding_)->ElementSize,uVar6,(EArrayPropertyFlags)lVar13);
  local_1b8 = pFVar8->Inner;
  local_1b0 = pFVar10->Inner;
  local_208 = (FProperty *)pFVar12[1]._padding_;
  uVar6 = (local_260.field1_0x8.FreezableArray)->ArrayNum;
  uVar19 = (ulonglong)uVar6;
  if ((int)uVar6 < 0) {
    FScriptArrayHelper::AddValues(&local_260,-uVar6);
  }
  else if (0 < (int)uVar6) {
    if (((local_260.field1_0x8.FreezableArray)->ArrayNum < (int)uVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index + Count <= Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1128,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((local_260.InnerProperty)->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) ==
        CPF_None) {
      pFVar12 = local_260.InnerProperty;
      if ((local_260.field1_0x8.FreezableArray)->ArrayNum == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = (local_260.field1_0x8.FreezableArray)->_padding_;
        if (((local_260.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar16 & 1) != 0)) {
          uVar16 = (longlong)&(local_260.field1_0x8.HeapArray)->field_0x0 +
                   ((longlong)uVar16 >> 0x18);
        }
      }
      do {
        if ((pFVar12->PropertyFlags & CPF_NoDestructor) == CPF_None) {
          (**(code **)(pFVar12->_padding_ + 0x138))(pFVar12,uVar16);
          pFVar12 = local_260.InnerProperty;
        }
        uVar16 = uVar16 + (longlong)local_260.ElementSize;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    local_1a8.__this = &local_260;
    local_1a8.Index = 0;
    local_1a8.Count = uVar6;
    FScriptArrayHelper::WithScriptArray<_FScriptArrayHelper::RemoveValues_::__l2::<lambda_1>_>
              (&local_260,&local_1a8);
  }
  FRigVMDispatch_ArrayBase::GetArrayHash
            ((TMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
              *)local_88,&local_138,pFVar8);
  FRigVMDispatch_ArrayBase::GetArrayHash
            ((TMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
              *)local_d8,&local_118,pFVar10);
  local_1e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  local_1e0._padding_._0_4_ = 0;
  local_1e0._padding_._4_4_ = 1;
  local_1e0.UnvisitedBitMask = 0xffffffff;
  local_1e0.CurrentBitIndex = 0;
  local_1e0.BaseBitIndex = 0;
  if (local_60 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e0);
  }
  uVar6 = local_60;
  uStack_238 = CONCAT44(local_1e0._padding_._4_4_,(undefined4)local_1e0._padding_);
  local_240 = (longlong *)local_88;
  uStack_224 = local_1e0.CurrentBitIndex;
  uStack_228 = local_1e0.UnvisitedBitMask;
  uStack_21c = local_1e0._28_4_;
  iStack_220 = local_1e0.BaseBitIndex;
  pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  bVar11 = (byte)local_60 & 0x1f;
  local_218 = local_88._8_4_ - local_54;
  local_200._padding_._0_4_ = (int)local_60 >> 5;
  local_200._padding_._4_4_ = 1 << bVar11;
  local_200.UnvisitedBitMask = -1 << bVar11;
  pTStack_230 = local_1e0.Array;
  local_200.BaseBitIndex = local_60 & 0xffffffe0;
  local_200.CurrentBitIndex = local_60;
  uStack_170 = CONCAT44(uStack_214,local_218);
  TStack_190.Array = local_1e0.Array;
  local_200.Array = pTVar23;
  local_198 = local_240;
  TStack_190._padding_ = uStack_238;
  TStack_190._16_8_ = _uStack_228;
  TStack_190._24_8_ = _iStack_220;
  if (((int)local_60 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar12 = local_1b8;
  if (uVar6 != local_60) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_200);
    pFVar12 = local_1b8;
    uVar6 = local_200.CurrentBitIndex;
    pTVar23 = local_200.Array;
  }
  while( true ) {
    plVar4 = local_198;
    if ((int)local_198[1] - *(int *)((longlong)local_198 + 0x34) != (int)uStack_170) {
      local_268 = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_268);
    }
    uVar22 = local_b0;
    if (((TStack_190.CurrentBitIndex == uVar6) && (TStack_190.Array == pTVar23)) &&
       (plVar4 == (longlong *)local_88)) break;
    puVar18 = (uint *)((longlong)TStack_190.CurrentBitIndex * 0x10 + *plVar4);
    uVar22 = *puVar18;
    if (local_d8._8_4_ != local_a4) {
      puVar14 = local_a0;
      if (local_98 != (undefined1 *)0x0) {
        puVar14 = local_98;
      }
      for (iVar20 = *(int *)(puVar14 + (ulonglong)(local_90 - 1U & uVar22) * 4); iVar20 != -1;
          iVar20 = *(int *)(local_d8._0_8_ + 8 + (longlong)iVar20 * 0x10)) {
        if (*(uint *)(local_d8._0_8_ + (longlong)iVar20 * 0x10) == uVar22) goto LAB_14a198aa6;
      }
    }
    iVar2 = (local_260.field1_0x8.FreezableArray)->ArrayNum;
    iVar20 = iVar2 + 1;
    (local_260.field1_0x8.FreezableArray)->ArrayNum = iVar20;
    if ((local_260.ArrayFlags & UsesMemoryImageAllocator) == None) {
      if ((local_260.field1_0x8.FreezableArray)->ArrayMax < iVar20) {
        TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow
                  ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)local_260.field1_0x8.HeapArray,
                   iVar2,local_260.ElementSize,local_260.ElementAlignment);
      }
    }
    else if ((local_260.field1_0x8.FreezableArray)->ArrayMax < iVar20) {
      TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow
                (local_260.field1_0x8.FreezableArray,iVar2,local_260.ElementSize,
                 local_260.ElementAlignment);
    }
    if ((local_260.field1_0x8.FreezableArray)->ArrayNum == 0) {
      pvVar21 = (void *)0x0;
    }
    else {
      uVar19 = (local_260.field1_0x8.FreezableArray)->_padding_;
      if (((local_260.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar19 & 1) != 0)) {
        uVar19 = (longlong)&(local_260.field1_0x8.HeapArray)->field_0x0 + ((longlong)uVar19 >> 0x18)
        ;
      }
      pvVar21 = (void *)((longlong)iVar2 * (longlong)local_260.ElementSize + uVar19);
    }
    if (((uint)(int)(local_260.InnerProperty)->PropertyFlags >> 9 & 1) == 0) {
      (**(code **)((local_260.InnerProperty)->_padding_ + 0x150))();
    }
    else {
      memset(pvVar21,0,(longlong)local_260.ElementSize);
    }
    if ((local_138.field1_0x8.FreezableArray)->ArrayNum == 0) {
      puVar9 = (uchar *)0x0;
    }
    else {
      puVar14 = (undefined1 *)(local_138.field1_0x8.FreezableArray)->_padding_;
      if (((local_138.ArrayFlags & UsesMemoryImageAllocator) != None) &&
         (((ulonglong)puVar14 & 1) != 0)) {
        puVar14 = &(local_138.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar14 >> 0x18);
      }
      puVar9 = puVar14 + (longlong)(int)puVar18[1] * (longlong)local_138.ElementSize;
    }
    if ((local_260.field1_0x8.FreezableArray)->ArrayNum == 0) {
      puVar15 = (uchar *)0x0;
    }
    else {
      uVar19 = (local_260.field1_0x8.FreezableArray)->_padding_;
      if (((local_260.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar19 & 1) != 0)) {
        uVar19 = (longlong)&(local_260.field1_0x8.HeapArray)->field_0x0 + ((longlong)uVar19 >> 0x18)
        ;
      }
      puVar15 = (uchar *)((longlong)iVar2 * (longlong)local_260.ElementSize + uVar19);
    }
    URigVMMemoryStorage::CopyProperty(local_208,puVar15,pFVar12,puVar9);
LAB_14a198aa6:
    TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
  }
  iVar20 = 0;
  iStack_220 = 0;
  uStack_224 = 0;
  if (local_b0 == 0) {
LAB_14a198b41:
    uVar6 = (uint)local_210;
  }
  else {
    puVar18 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar18 = local_b8;
    }
    uVar6 = *puVar18;
    while (uVar6 == 0) {
      lVar13 = (longlong)iVar20;
      iStack_220 = iStack_220 + 0x20;
      iVar20 = iVar20 + 1;
      uStack_224 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_14a198b41;
      uVar6 = puVar18[lVar13 + 1];
    }
    uVar6 = -uVar6 & uVar6;
    uVar19 = (ulonglong)uVar6 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1c0 = (int)lVar13;
    uStack_224 = iStack_220 + -1 + local_1c0;
    if ((int)local_b0 < (int)uStack_224) {
      uStack_224 = local_b0;
    }
  }
  local_240 = (longlong *)local_d8;
  pTStack_230 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  uVar17 = local_b0 & 0xffffffe0;
  local_218 = local_d8._8_4_ - local_a4;
  uStack_228 = 0xffffffff;
  uStack_238 = CONCAT44(uVar6,iVar20);
  uStack_21c = local_dc;
  TStack_160._padding_ = uStack_238;
  iVar20 = (int)local_b0 >> 5;
  uStack_140 = CONCAT44(uStack_214,local_218);
  bVar11 = (byte)local_b0;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  TStack_160.CurrentBitIndex = uStack_224;
  TStack_160.BaseBitIndex = iStack_220;
  TStack_160._28_4_ = local_dc;
  local_168 = local_240;
  TStack_160.Array = pTStack_230;
  if (((int)local_b0 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar12 = local_1b0;
  if (uVar22 != local_b0) {
    puVar18 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar18 = local_b8;
    }
    uVar6 = -1 << (bVar11 & 0x1f) & puVar18[iVar20];
    while (uVar6 == 0) {
      lVar13 = (longlong)iVar20;
      uVar17 = uVar17 + 0x20;
      iVar20 = iVar20 + 1;
      uVar22 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_14a198c63;
      uVar6 = puVar18[lVar13 + 1];
    }
    uVar19 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1bc = (int)lVar13;
    uVar22 = (uVar17 - 1) + local_1bc;
    if ((int)local_b0 < (int)uVar22) {
      uVar22 = local_b0;
    }
  }
LAB_14a198c63:
  do {
    plVar4 = local_168;
    if ((int)local_168[1] - *(int *)((longlong)local_168 + 0x34) != (int)uStack_140) {
      local_267[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_267);
    }
    if (((TStack_160.CurrentBitIndex == uVar22) &&
        (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
       (plVar4 == (longlong *)local_d8)) {
      local_90 = 0;
      if (local_98 != (undefined1 *)0x0) {
        FMemory::Free(local_98);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      local_40 = 0;
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free(local_48);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      return;
    }
    puVar18 = (uint *)((longlong)TStack_160.CurrentBitIndex * 0x10 + *plVar4);
    uVar6 = *puVar18;
    if (local_88._8_4_ != local_54) {
      puVar14 = local_50;
      if (local_48 != (undefined1 *)0x0) {
        puVar14 = local_48;
      }
      for (iVar20 = *(int *)(puVar14 + (ulonglong)(local_40 - 1U & uVar6) * 4); iVar20 != -1;
          iVar20 = *(int *)(local_88._0_8_ + 8 + (longlong)iVar20 * 0x10)) {
        if (*(uint *)(local_88._0_8_ + (longlong)iVar20 * 0x10) == uVar6) goto LAB_14a198e44;
      }
    }
    iVar2 = (local_260.field1_0x8.FreezableArray)->ArrayNum;
    iVar20 = iVar2 + 1;
    (local_260.field1_0x8.FreezableArray)->ArrayNum = iVar20;
    if ((local_260.ArrayFlags & UsesMemoryImageAllocator) == None) {
      if ((local_260.field1_0x8.FreezableArray)->ArrayMax < iVar20) {
        TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow
                  ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)local_260.field1_0x8.HeapArray,
                   iVar2,local_260.ElementSize,local_260.ElementAlignment);
      }
    }
    else if ((local_260.field1_0x8.FreezableArray)->ArrayMax < iVar20) {
      TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow
                (local_260.field1_0x8.FreezableArray,iVar2,local_260.ElementSize,
                 local_260.ElementAlignment);
    }
    if ((local_260.field1_0x8.FreezableArray)->ArrayNum == 0) {
      pvVar21 = (void *)0x0;
    }
    else {
      uVar19 = (local_260.field1_0x8.FreezableArray)->_padding_;
      if (((local_260.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar19 & 1) != 0)) {
        uVar19 = (longlong)&(local_260.field1_0x8.HeapArray)->field_0x0 + ((longlong)uVar19 >> 0x18)
        ;
      }
      pvVar21 = (void *)((longlong)local_260.ElementSize * (longlong)iVar2 + uVar19);
    }
    if (((uint)(int)(local_260.InnerProperty)->PropertyFlags >> 9 & 1) == 0) {
      (**(code **)((local_260.InnerProperty)->_padding_ + 0x150))();
    }
    else {
      memset(pvVar21,0,(longlong)local_260.ElementSize);
    }
    if ((local_118.field1_0x8.FreezableArray)->ArrayNum == 0) {
      puVar9 = (uchar *)0x0;
    }
    else {
      puVar14 = (undefined1 *)(local_118.field1_0x8.FreezableArray)->_padding_;
      if (((local_118.ArrayFlags & UsesMemoryImageAllocator) != None) &&
         (((ulonglong)puVar14 & 1) != 0)) {
        puVar14 = &(local_118.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar14 >> 0x18);
      }
      puVar9 = puVar14 + (longlong)(int)puVar18[1] * (longlong)local_118.ElementSize;
    }
    if ((local_260.field1_0x8.FreezableArray)->ArrayNum == 0) {
      puVar15 = (uchar *)0x0;
    }
    else {
      uVar19 = (local_260.field1_0x8.FreezableArray)->_padding_;
      if (((local_260.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar19 & 1) != 0)) {
        uVar19 = (longlong)&(local_260.field1_0x8.HeapArray)->field_0x0 + ((longlong)uVar19 >> 0x18)
        ;
      }
      puVar15 = (uchar *)((longlong)local_260.ElementSize * (longlong)iVar2 + uVar19);
    }
    URigVMMemoryStorage::CopyProperty(local_208,puVar15,pFVar12,puVar9);
LAB_14a198e44:
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  } while( true );
}

