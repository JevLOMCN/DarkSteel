// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 5

// StaticStruct @ 14a4794a0

UScriptStruct * __cdecl FRigDispatch_GetUserData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_GetUserData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigDispatch_GetUserData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_GetUserData,(UObject *)pUVar1,
                         L"RigDispatch_GetUserData");
  }
  return Z_Registration_Info_UScriptStruct_FRigDispatch_GetUserData.OuterSingleton;
}

// GetArgumentInfos @ 14a479570

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_GetUserData::GetArgumentInfos
          (FRigDispatch_GetUserData *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  FName local_res8;
  FName local_res18 [2];
  TRigVMTypeIndex local_68;
  TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)> local_58;
  
  puVar1 = &this->field_0x98;
  if (*(int *)&this->field_0xa0 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        local_res8.ComparisonIndex.Value._0_2_ = 0x201;
        ValueCategories.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,2,0,&ValueCategories.AllocatorInstance,2,&ValueCategories.ArrayMax);
        memcpy(ValueCategories.AllocatorInstance.Data,&local_res8,2);
        atexit(`FRigDispatch_GetUserData::GetArgumentInfos'::__l5::
               _dynamic_atexit_destructor_for__ValueCategories__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    iVar4 = *(int *)&this->field_0xa0;
    if (iVar4 == *(int *)&this->field_0xa4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar4 + 1;
    iVar3 = RigVMTypeUtils::TypeIndex::FString.Index;
    local_res8 = RigVMTypeUtils::TypeIndex::FString.Name;
    lVar2 = *(longlong *)puVar1;
    pFVar5 = ::FName::FName(local_res18,L"NameSpace");
    local_68.Name = local_res8;
    local_68.Index = iVar3;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),*pFVar5,Input,
               &local_68);
    iVar4 = *(int *)&this->field_0xa0;
    if (iVar4 == *(int *)&this->field_0xa4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar4 + 1;
    iVar3 = RigVMTypeUtils::TypeIndex::FString.Index;
    local_res8 = RigVMTypeUtils::TypeIndex::FString.Name;
    lVar2 = *(longlong *)puVar1;
    pFVar5 = ::FName::FName(local_res18,L"Path");
    local_68.Name = local_res8;
    local_68.Index = iVar3;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),*pFVar5,Input,
               &local_68);
    iVar4 = *(int *)&this->field_0xa0;
    if (iVar4 == *(int *)&this->field_0xa4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    local_58._0_8_ = 0;
    *(int *)&this->field_0xa0 = iVar4 + 1;
    local_58._40_8_ = 0;
    lVar2 = *(longlong *)puVar1;
    pFVar5 = ::FName::FName(&local_res8,L"Default");
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),*pFVar5,Input,
               &ValueCategories,&local_58);
    iVar4 = *(int *)&this->field_0xa0;
    if (iVar4 == *(int *)&this->field_0xa4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    local_58._0_8_ = 0;
    *(int *)&this->field_0xa0 = iVar4 + 1;
    local_58._40_8_ = 0;
    lVar2 = *(longlong *)puVar1;
    pFVar5 = ::FName::FName(&local_res8,L"Result");
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),*pFVar5,Output,
               &ValueCategories,&local_58);
    iVar4 = *(int *)&this->field_0xa0;
    if (iVar4 == *(int *)&this->field_0xa4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar4 + 1;
    iVar3 = RigVMTypeUtils::TypeIndex::Bool.Index;
    local_res8 = RigVMTypeUtils::TypeIndex::Bool.Name;
    lVar2 = *(longlong *)puVar1;
    pFVar5 = ::FName::FName(local_res18,L"Found");
    local_68.Name = local_res8;
    local_68.Index = iVar3;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),*pFVar5,Output,
               &local_68);
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// OnNewArgumentType @ 14a479a10

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigDispatch_GetUserData::OnNewArgumentType
          (FRigDispatch_GetUserData *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,FName *param_1,TRigVMTypeIndex *param_2,
          FRigVMRegistryHandle *param_3)

{
  TPairInitializer<FName_&&,TRigVMTypeIndex_const_&> local_res10;
  FName local_res20;
  FName *local_28;
  TRigVMTypeIndex *local_20;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  ::FName::FName(&local_res20,L"NameSpace");
  local_28 = &local_res20;
  local_20 = &RigVMTypeUtils::TypeIndex::FString;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
            ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res10,(bool *)&local_28);
  ::FName::FName(&local_res20,L"Path");
  local_28 = &local_res20;
  local_20 = &RigVMTypeUtils::TypeIndex::FString;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
            ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res10,(bool *)&local_28);
  ::FName::FName(&local_res20,L"Default");
  local_28 = &local_res20;
  local_20 = param_2;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
            ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res10,(bool *)&local_28);
  ::FName::FName(&local_res20,L"Result");
  local_28 = &local_res20;
  local_20 = param_2;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
            ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res10,(bool *)&local_28);
  ::FName::FName(&local_res20,L"Found");
  local_28 = &local_res20;
  local_20 = &RigVMTypeUtils::TypeIndex::Bool;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
            ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res10,(bool *)&local_28);
  return __return_storage_ptr__;
}

// GetDispatchFunctionImpl @ 14a479c30

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigDispatch_GetUserData::GetDispatchFunctionImpl
          (FRigDispatch_GetUserData *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FName *pFVar6;
  TTuple<FName,TRigVMTypeIndex> *pTVar7;
  _func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
  *p_Var8;
  FRigVMRegistry_NoLock *pFVar9;
  FName local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  pFVar6 = ::FName::FName(&local_res20,L"NameSpace");
  pTVar7 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                   *)param_1,*pFVar6);
  if (pTVar7 == (TTuple<FName,TRigVMTypeIndex> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      p_Var8 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                *)(*pcVar3)();
      return p_Var8;
    }
  }
  if (*(int *)&pTVar7->field_0x10 != RigVMTypeUtils::TypeIndex::FString.Index) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTypes.FindChecked(ArgNameSpaceName) == RigVMTypeUtils::TypeIndex::FString"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Core\\RigUnit_UserData.cpp"
                       ,0x40,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      p_Var8 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                *)(*pcVar3)();
      return p_Var8;
    }
  }
  pFVar6 = ::FName::FName(&local_58,L"Path");
  pTVar7 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                   *)param_1,*pFVar6);
  if (pTVar7 == (TTuple<FName,TRigVMTypeIndex> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      p_Var8 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                *)(*pcVar3)();
      return p_Var8;
    }
  }
  if (*(int *)&pTVar7->field_0x10 != RigVMTypeUtils::TypeIndex::FString.Index) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTypes.FindChecked(ArgPathName) == RigVMTypeUtils::TypeIndex::FString",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Core\\RigUnit_UserData.cpp"
                       ,0x41,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      p_Var8 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                *)(*pcVar3)();
      return p_Var8;
    }
  }
  pFVar6 = ::FName::FName(&local_50,L"Default");
  pTVar7 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                   *)param_1,*pFVar6);
  if (pTVar7 == (TTuple<FName,TRigVMTypeIndex> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      p_Var8 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                *)(*pcVar3)();
      return p_Var8;
    }
  }
  uVar1 = *(undefined8 *)&pTVar7->field_0x8;
  uVar2 = *(undefined4 *)&pTVar7->field_0x10;
  pFVar9 = FRigVMRegistryHandle::operator->(param_2);
  pcVar3 = *(code **)(pFVar9->_padding_ + 0x130);
  pFVar6 = ::FName::FName(&local_48,L"Result");
  pTVar7 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                   *)param_1,*pFVar6);
  if (pTVar7 == (TTuple<FName,TRigVMTypeIndex> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      p_Var8 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                *)(*pcVar3)();
      return p_Var8;
    }
  }
  local_38 = *(undefined8 *)&pTVar7->field_0x8;
  local_30 = *(undefined4 *)&pTVar7->field_0x10;
  local_28 = uVar1;
  local_20 = uVar2;
  cVar5 = (*pcVar3)(pFVar9,&local_28,&local_38,1);
  if (cVar5 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry->CanMatchTypes_NoLock(TypeIndex, InTypes.FindChecked(ArgResultName), true)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Core\\RigUnit_UserData.cpp"
                       ,0x43,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      p_Var8 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                *)(*pcVar3)();
      return p_Var8;
    }
  }
  pFVar6 = ::FName::FName(&local_40,L"Found");
  pTVar7 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                   *)param_1,*pFVar6);
  if (pTVar7 == (TTuple<FName,TRigVMTypeIndex> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      p_Var8 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                *)(*pcVar3)();
      return p_Var8;
    }
  }
  if (*(int *)&pTVar7->field_0x10 != RigVMTypeUtils::TypeIndex::Bool.Index) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTypes.FindChecked(ArgFoundName) == RigVMTypeUtils::TypeIndex::Bool",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Core\\RigUnit_UserData.cpp"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      p_Var8 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                *)(*pcVar3)();
      return p_Var8;
    }
  }
  return Execute;
}

// Execute @ 14a523790

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigDispatch_GetUserData::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FControlRigExecuteContext *this;
  FRigVMMemoryHandle *pFVar1;
  FProperty *pFVar2;
  FProperty *pFVar3;
  FString *pFVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  uchar *puVar8;
  UNameSpacedUserData *pUVar9;
  longlong lVar10;
  FRigVMLogSettings local_res20;
  FString local_48;
  FString local_38;
  
  this = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  lVar10 = *(longlong *)&this->field_0x8;
  if (lVar10 != 0) {
    FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
    if (lVar10 != CONCAT44(local_res20._4_4_,local_res20.Severity)) {
      FLazyName::ToString(&FRigUnit_PrepareForExecution::EventName,&local_38);
      local_res20.Severity = Info;
      local_res20.bLogOnce = true;
      ::FString::PrintfImpl
                (&local_48,
                 L"It\'s recommended to use this node in the %s event. When using it in other events please consider caching the results."
                );
      FRigVMExecuteContext::Log((FRigVMExecuteContext *)this,&local_res20,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pFVar1 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,2);
    if (pFVar1->PropertyPath == (FRigVMPropertyPath *)0x0) {
      pFVar2 = pFVar1->Property;
    }
    else {
      pFVar2 = FRigVMPropertyPath::GetTailProperty(pFVar1->PropertyPath);
    }
    pFVar1 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
    if (pFVar1->PropertyPath == (FRigVMPropertyPath *)0x0) {
      pFVar3 = pFVar1->Property;
    }
    else {
      pFVar3 = FRigVMPropertyPath::GetTailProperty(pFVar1->PropertyPath);
    }
    pFVar1 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0);
    if (pFVar1->PropertyPath == (FRigVMPropertyPath *)0x0) {
      pFVar4 = (FString *)pFVar1->Ptr;
    }
    else {
      pFVar4 = (FString *)
               FRigVMPropertyPath::GetData_Internal
                         (pFVar1->PropertyPath,pFVar1->Ptr,pFVar1->Property);
    }
    pFVar1 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,1);
    if (pFVar1->PropertyPath == (FRigVMPropertyPath *)0x0) {
      puVar5 = pFVar1->Ptr;
    }
    else {
      puVar5 = FRigVMPropertyPath::GetData_Internal
                         (pFVar1->PropertyPath,pFVar1->Ptr,pFVar1->Property);
    }
    pFVar1 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,2);
    if (pFVar1->PropertyPath == (FRigVMPropertyPath *)0x0) {
      puVar6 = pFVar1->Ptr;
    }
    else {
      puVar6 = FRigVMPropertyPath::GetData_Internal
                         (pFVar1->PropertyPath,pFVar1->Ptr,pFVar1->Property);
    }
    pFVar1 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
    puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar1,false,-1);
    pFVar1 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
    puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar1,false,-1);
    *puVar8 = '\0';
    pUVar9 = FControlRigExecuteContext::FindUserData(this,pFVar4);
    if (pUVar9 != (UNameSpacedUserData *)0x0) {
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      lVar10 = (**(code **)(pUVar9->_padding_ + 0x2d0))(pUVar9,puVar5,&local_48);
      if ((lVar10 != 0) && (*(FProperty **)(lVar10 + 0x18) != (FProperty *)0x0)) {
        URigVMMemoryStorage::CopyProperty
                  (pFVar3,puVar7,*(FProperty **)(lVar10 + 0x18),*(uchar **)(lVar10 + 0x20));
        *puVar8 = '\x01';
        if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        return;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    URigVMMemoryStorage::CopyProperty(pFVar3,puVar7,pFVar2,puVar6);
  }
  return;
}

