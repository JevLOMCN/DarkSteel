// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 10

// StaticStruct @ 14a143080

UScriptStruct * __cdecl FRigVMDispatch_SwitchInt32::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_SwitchInt32.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_SwitchInt32.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_SwitchInt32,(UObject *)pUVar1,
                         L"RigVMDispatch_SwitchInt32");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_SwitchInt32.OuterSingleton;
}

// GetArgumentNameForOperandIndex @ 14a143100

FName __thiscall
FRigVMDispatch_SwitchInt32::GetArgumentNameForOperandIndex
          (FRigVMDispatch_SwitchInt32 *this,int param_1,int param_2,FRigVMRegistryHandle *param_3)

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
      ArgumentNames[0] = IndexName;
      ArgumentNames[1] = FRigVMStruct::ControlFlowBlockToRunName;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((int)param_3 != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTotalOperands == (sizeof(UEArrayCountHelper(ArgumentNames)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Switch.cpp"
                       ,0x11,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  FLazyName::Resolve(ArgumentNames + param_2);
  return FVar3;
}

// GetArgumentInfos @ 14a143230

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_SwitchInt32::GetArgumentInfos
          (FRigVMDispatch_SwitchInt32 *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FName FVar3;
  int iVar4;
  int iVar5;
  FName local_res18;
  TRigVMTypeIndex local_28;
  
  puVar1 = &this->field_0x98;
  if (*(int *)&this->field_0xa0 == 0) {
    iVar5 = 0;
    if (*(int *)&this->field_0xa4 == 0) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar5 + 1;
    iVar4 = RigVMTypeUtils::TypeIndex::Int32.Index;
    FVar3 = RigVMTypeUtils::TypeIndex::Int32.Name;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&IndexName);
    local_28.Name = FVar3;
    local_28.Index = iVar4;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar5 * 0x50),local_res18,Input,
               &local_28);
    iVar5 = *(int *)&this->field_0xa0;
    if (iVar5 == *(int *)&this->field_0xa4) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar5 + 1;
    iVar4 = RigVMTypeUtils::TypeIndex::FName.Index;
    FVar3 = RigVMTypeUtils::TypeIndex::FName.Name;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&FRigVMStruct::ControlFlowBlockToRunName);
    local_28.Name = FVar3;
    local_28.Index = iVar4;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar5 * 0x50),local_res18,Hidden,
               &local_28);
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// GetExecuteArguments_Impl @ 14a143360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_SwitchInt32::GetExecuteArguments_Impl
          (FRigVMDispatch_SwitchInt32 *this,FRigVMDispatchContext *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint uStack_60;
  undefined4 local_48;
  FNameEntryId FStack_44;
  uint uStack_40;
  uint uStack_30;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FLazyName::Resolve(&FRigVMStruct::ExecuteContextName);
    uStack_60 = uStack_60 & 0xffffff00;
    FLazyName::Resolve(&CasesName);
    iVar1 = RigVMTypeUtils::TypeIndex::ExecuteArray.Index;
    local_48 = CONCAT31(local_48._1_3_,1);
    FStack_44 = RigVMTypeUtils::TypeIndex::ExecuteArray.Name.ComparisonIndex.Value;
    uStack_40 = RigVMTypeUtils::TypeIndex::ExecuteArray.Name.Number;
    FLazyName::Resolve(&FRigVMStruct::ControlFlowCompletedName);
    Arguments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uStack_30 = CONCAT31(uStack_30._1_3_,1);
    Arguments.ArrayNum = 3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,3,0,&Arguments.AllocatorInstance,3,&Arguments.ArrayMax);
    FVar2 = Arguments.AllocatorInstance;
    *(undefined8 *)Arguments.AllocatorInstance.Data = local_88;
    *(ulonglong *)(FVar2.Data + 8) = (ulonglong)uStack_60;
    *(undefined8 *)(FVar2.Data + 0x10) = 0xffffffff00000000;
    *(undefined8 *)(FVar2.Data + 0x18) = local_80;
    *(ulonglong *)(FVar2.Data + 0x20) = CONCAT44(FStack_44.Value,local_48);
    *(ulonglong *)(FVar2.Data + 0x28) = CONCAT44(iVar1,uStack_40);
    *(undefined8 *)(FVar2.Data + 0x30) = local_78;
    *(ulonglong *)(FVar2.Data + 0x38) = (ulonglong)uStack_30;
    *(undefined8 *)(FVar2.Data + 0x40) = 0xffffffff00000000;
    atexit(`FRigVMDispatch_SwitchInt32::GetExecuteArguments_Impl'::__l2::
           _dynamic_atexit_destructor_for__Arguments__);
    _Init_thread_footer(&::_TSS0);
  }
  return &Arguments;
}

// IsSingleton @ 14a143540

bool __thiscall FRigVMDispatch_SwitchInt32::IsSingleton(FRigVMDispatch_SwitchInt32 *this)

{
  return true;
}

// GetControlFlowBlocks_Impl @ 14a143620

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_SwitchInt32::GetControlFlowBlocks_Impl
          (FRigVMDispatch_SwitchInt32 *this,FRigVMDispatchContext *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FName FVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  FString *pFVar9;
  int iVar10;
  wchar_t *pwVar11;
  ForAnyElementType this_00;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  int iVar15;
  int *piVar16;
  undefined1 local_res10 [8];
  TKeyInitializer<FString_const_&> local_res18;
  undefined8 local_res20;
  FString *local_88;
  undefined1 local_80 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
  piVar16 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar16 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FLazyName::Resolve(&FRigVMStruct::ControlFlowCompletedName);
    DefaultBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    DefaultBlocks.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,1,0,&DefaultBlocks.AllocatorInstance,1,&DefaultBlocks.ArrayMax);
    *(undefined8 *)DefaultBlocks.AllocatorInstance.Data = local_res20;
    atexit(`FRigVMDispatch_SwitchInt32::GetControlFlowBlocks_Impl'::__l2::
           _dynamic_atexit_destructor_for__DefaultBlocks__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((param_1->StringRepresentation).Data.ArrayNum < 2) {
LAB_14a14395c:
    return &DefaultBlocks;
  }
  if ((*piVar16 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pFVar9 = FLazyName::ToString(&CasesName,&local_48);
    ::FString::ConcatFC(&CasesPrefix,pFVar9,L"=");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    atexit(`FRigVMDispatch_SwitchInt32::GetControlFlowBlocks_Impl'::__l5::
           _dynamic_atexit_destructor_for__CasesPrefix__);
    _Init_thread_footer(&::_TSS1);
  }
  RigVMStringUtils::SplitDefaultValue(&local_78,&param_1->StringRepresentation);
  iVar6 = local_78.ArrayNum;
  pFVar13 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x10;
  this_00.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if (local_78.ArrayNum != iVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (this_00.Data == pFVar13) {
      DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      goto LAB_14a14395c;
    }
    pwVar11 = L"";
    iVar4 = CasesPrefix.Data.ArrayNum;
    if (iVar4 != 0) {
      pwVar11 = (wchar_t *)CasesPrefix.Data.AllocatorInstance.Data;
    }
    iVar10 = 0;
    iVar15 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar15 = iVar10;
    }
    bVar3 = ::FString::StartsWith((FString *)this_00.Data,pwVar11,iVar15,IgnoreCase);
    if (bVar3) break;
    this_00.Data = this_00.Data + 0x10;
  }
  iVar6 = CasesPrefix.Data.ArrayNum + -1;
  if (CasesPrefix.Data.ArrayNum == 0) {
    iVar6 = iVar10;
  }
  ::FString::RightChop((FString *)this_00.Data,&local_68,iVar6);
  if ((*piVar16 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    atexit(`FRigVMDispatch_SwitchInt32::GetControlFlowBlocks_Impl'::__l12::
           _dynamic_atexit_destructor_for__BlockCache__);
    _Init_thread_footer(&::_TSS3);
  }
  if (local_68.Data.ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    iVar10 = local_68.Data.ArrayNum + -1;
    pwVar11 = (wchar_t *)local_68.Data.AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar11);
  iVar6 = TSet<TTuple<FString,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&BlockCache,uVar5,&local_68);
  if (iVar6 != -1) {
    lVar14 = BlockCache._0_8_ + (longlong)iVar6 * 0x28;
    pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar14 + 0x10);
    if (lVar14 == 0) {
      pTVar12 = pTVar8;
    }
    if (pTVar12 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_14a143915;
  }
  local_88 = &local_68;
  TSet<TTuple<FString,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FString_const_&>_>
            ((TSet<TTuple<FString,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&BlockCache,&local_res18,(bool *)&local_88);
  pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
            (BlockCache._0_8_ + ((longlong)(int)local_res18.Key * 5 + 2) * 8);
  RigVMStringUtils::SplitDefaultValue(&local_58,&local_68);
  if (0 < local_58.ArrayNum) {
    do {
      FVar7 = GetCaseName((int)local_80);
      FVar1 = (FName)(pTVar12->AllocatorInstance).Data;
      if ((((ulonglong)FVar1 <= (ulonglong)FVar7) &&
          ((ulonglong)FVar7 < (ulonglong)((longlong)FVar1 + (longlong)pTVar12->ArrayMax * 8))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      iVar6 = pTVar12->ArrayNum;
      if (iVar6 == pTVar12->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)pTVar12,&pTVar12->ArrayMax);
      }
      pTVar12->ArrayNum = iVar6 + 1;
      uVar5 = (int)pTVar8 + 1;
      pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar5;
      *(undefined8 *)((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           *(undefined8 *)FVar7;
    } while ((int)uVar5 < local_58.ArrayNum);
  }
  if ((pTVar12 == &DefaultBlocks) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar8;
  }
  lVar14 = (longlong)DefaultBlocks.ArrayNum;
  if (DefaultBlocks.ArrayNum != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,DefaultBlocks.ArrayNum,(ForAnyElementType *)pTVar12,&pTVar12->ArrayNum,
                       &pTVar12->ArrayMax);
    memcpy((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 8,
           DefaultBlocks.AllocatorInstance.Data,lVar14 << 3);
  }
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
LAB_14a143915:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return pTVar12;
}

// GetDispatchFunctionImpl @ 14a143b40

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_SwitchInt32::GetDispatchFunctionImpl
          (FRigVMDispatch_SwitchInt32 *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// Execute @ 14a19d660

void __cdecl
FRigVMDispatch_SwitchInt32::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FName FVar6;
  longlong local_res10;
  undefined1 local_res20 [8];
  
  iVar1 = param_2->ArrayNum;
  if ((iVar1 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath != (FRigVMPropertyPath *)0x0) {
    FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  if ((iVar1 < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar3 = (longlong *)param_2->DataPtr[1].Ptr;
  if (*plVar3 != 0) {
    FLazyName::Resolve(&FRigVMStruct::ControlFlowCompletedName);
    *plVar3 = local_res10;
    return;
  }
  FVar6 = GetCaseName((int)local_res20);
  *plVar3 = *(longlong *)FVar6;
  return;
}

// GetCaseDisplayName @ 14a1ab240

FName __cdecl FRigVMDispatch_SwitchInt32::GetCaseDisplayName(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint in_register_0000000c;
  FName FVar4;
  undefined8 *puVar5;
  uint in_EDX;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  uint local_res10 [2];
  TPairInitializer<int_const_&,FName_const_&> local_res18;
  undefined1 local_18 [16];
  
  FVar4.Number = in_register_0000000c;
  FVar4.ComparisonIndex.Value = param_1;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar2 + 0x96f8) & 1) == 0) {
    *(uint *)(lVar2 + 0x96f8) = *(uint *)(lVar2 + 0x96f8) | 1;
    local_res10[0] = in_EDX;
    __tlregdtor(`FRigVMDispatch_SwitchInt32::GetCaseDisplayName'::__l2::
                _dynamic_atexit_destructor_for__NamesFromInt__);
    in_EDX = local_res10[0];
  }
  if (*(int *)(lVar2 + 0x96a8) != *(int *)(lVar2 + 0x96d4)) {
    lVar6 = *(longlong *)(lVar2 + 0x96e0);
    if (*(longlong *)(lVar2 + 0x96e0) == 0) {
      lVar6 = lVar2 + 0x96d8;
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar2 + 0x96e8) - 1U & in_EDX) * 4);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)
               &((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                  *)(lVar2 + 0x96a0))->Elements;
      do {
        lVar1 = lVar6 + (longlong)iVar3 * 0x14;
        if (*(uint *)(lVar6 + (longlong)iVar3 * 0x14) == in_EDX) {
          puVar5 = (undefined8 *)(lVar1 + 4);
          if (lVar1 == 0) {
            puVar5 = (undefined8 *)0x0;
          }
          if (puVar5 != (undefined8 *)0x0) {
            *(undefined8 *)FVar4 = *puVar5;
            return FVar4;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  ::FString::PrintfImpl((FString *)local_18,L"Case %d");
  pFVar7 = (FScriptContainerElement *)L"";
  if (local_18._8_4_ != 0) {
    pFVar7 = (FScriptContainerElement *)local_18._0_8_;
  }
  ::FName::FName((FName *)&local_res18.Value,(wchar_t *)pFVar7);
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  local_18._0_8_ = local_res10;
  local_18._8_8_ = &local_res18.Value;
  TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,FName_const_&>_>
            ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x96a0),&local_res18,(bool *)local_18);
  *(FName **)FVar4 = local_res18.Value;
  return FVar4;
}

// GetCaseName @ 14a1ab390

FName __cdecl FRigVMDispatch_SwitchInt32::GetCaseName(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FString *pFVar4;
  FString *pFVar5;
  undefined8 *puVar6;
  uint in_register_0000000c;
  FName FVar7;
  uint in_EDX;
  longlong lVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  uint local_res10 [2];
  TPairInitializer<int_const_&,FName_const_&> local_res18;
  FName local_78;
  FString local_70;
  undefined1 local_60 [16];
  FString local_50;
  FString local_40;
  
  FVar7.Number = in_register_0000000c;
  FVar7.ComparisonIndex.Value = param_1;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar2 + 0x96f4) & 1) == 0) {
    *(uint *)(lVar2 + 0x96f4) = *(uint *)(lVar2 + 0x96f4) | 1;
    local_res10[0] = in_EDX;
    __tlregdtor(`FRigVMDispatch_SwitchInt32::GetCaseName'::__l2::
                _dynamic_atexit_destructor_for__NamesFromInt__);
    in_EDX = local_res10[0];
  }
  if (*(int *)(lVar2 + 0x9658) != *(int *)(lVar2 + 0x9684)) {
    lVar8 = *(longlong *)(lVar2 + 0x9690);
    if (*(longlong *)(lVar2 + 0x9690) == 0) {
      lVar8 = lVar2 + 0x9688;
    }
    iVar3 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar2 + 0x9698) - 1U & in_EDX) * 4);
    if (iVar3 != -1) {
      lVar8 = *(longlong *)
               &((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                  *)(lVar2 + 0x9650))->Elements;
      do {
        lVar1 = lVar8 + (longlong)iVar3 * 0x14;
        if (*(uint *)(lVar8 + (longlong)iVar3 * 0x14) == in_EDX) {
          puVar6 = (undefined8 *)(lVar1 + 4);
          if (lVar1 == 0) {
            puVar6 = (undefined8 *)0x0;
          }
          if (puVar6 != (undefined8 *)0x0) {
            local_res18.Value = (FName *)*puVar6;
            goto LAB_14a1ab53e;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_70,in_EDX);
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_70.Data.ArrayNum != 0) {
    FVar9.Data = local_70.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)&local_res18,(wchar_t *)FVar9.Data);
  FLazyName::Resolve(&CasesName);
  pFVar4 = ::FName::ToString((FName *)&local_res18,&local_40);
  pFVar5 = ::FName::ToString(&local_78,&local_50);
  RigVMStringUtils::JoinStrings
            ((FString *)local_60,pFVar5,pFVar4,L"_",(wchar_t *)0x0,(wchar_t *)0x0);
  pFVar10 = (FScriptContainerElement *)L"";
  if (local_60._8_4_ != 0) {
    pFVar10 = (FScriptContainerElement *)local_60._0_8_;
  }
  ::FName::FName((FName *)&local_res18.Value,(wchar_t *)pFVar10);
  if ((FScriptContainerElement *)local_60._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_60._0_8_);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  local_60._0_8_ = local_res10;
  local_60._8_8_ = &local_res18.Value;
  TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,FName_const_&>_>
            ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x9650),&local_res18,(bool *)local_60);
LAB_14a1ab53e:
  *(FName **)FVar7 = local_res18.Value;
  return FVar7;
}

