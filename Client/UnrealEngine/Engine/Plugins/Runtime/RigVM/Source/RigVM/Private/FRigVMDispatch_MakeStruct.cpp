// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a12bbb0

UScriptStruct * __cdecl FRigVMDispatch_MakeStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_MakeStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_MakeStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_MakeStruct,(UObject *)pUVar1,
                         L"RigVMDispatch_MakeStruct");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_MakeStruct.OuterSingleton;
}

// GetArgumentInfos @ 14a12bd50

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_MakeStruct::GetArgumentInfos
          (FRigVMDispatch_MakeStruct *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FName FVar3;
  FName FVar4;
  int iVar5;
  undefined1 local_res8;
  undefined7 uStackX_9;
  TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)> local_48;
  
  puVar1 = &this->field_0x98;
  if (*(int *)&this->field_0xa0 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        local_res8 = 10;
        Categories.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,1,0,&Categories.AllocatorInstance,1,&Categories.ArrayMax);
        memcpy(Categories.AllocatorInstance.Data,&local_res8,1);
        atexit(`FRigVMDispatch_MakeStruct::GetArgumentInfos'::__l5::
               _dynamic_atexit_destructor_for__Categories__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    iVar5 = *(int *)&this->field_0xa0;
    if (iVar5 == *(int *)&this->field_0xa4) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    local_48._0_8_ = 0;
    *(int *)&this->field_0xa0 = iVar5 + 1;
    local_48._40_8_ = 0;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&ElementsName);
    FVar3._1_7_ = uStackX_9;
    FVar3.ComparisonIndex.Value._0_1_ = local_res8;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar5 * 0x50),FVar3,Input,
               &Categories,&local_48);
    iVar5 = *(int *)&this->field_0xa0;
    if (iVar5 == *(int *)&this->field_0xa4) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    local_48._0_8_ = 0;
    *(int *)&this->field_0xa0 = iVar5 + 1;
    local_48._40_8_ = 0;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&StructName);
    FVar4._1_7_ = uStackX_9;
    FVar4.ComparisonIndex.Value._0_1_ = local_res8;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar5 * 0x50),FVar4,Output,
               &Categories,&local_48);
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// OnNewArgumentType @ 14a12bf50

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMDispatch_MakeStruct::OnNewArgumentType
          (FRigVMDispatch_MakeStruct *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,FName *param_1,TRigVMTypeIndex *param_2,
          FRigVMRegistryHandle *param_3)

{
  FName local_res10 [2];
  undefined1 local_res20 [8];
  initializer_list<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_> local_38;
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_28;
  undefined1 *local_18;
  TRigVMTypeIndex *local_10;
  
  FLazyName::Resolve(&ElementsName);
  local_28.Key = local_res10;
  local_28.Value = param_2;
  FLazyName::Resolve(&StructName);
  local_18 = local_res20;
  local_38._First = &local_28;
  local_38._Last =
       (TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)&stack0xfffffffffffffff8;
  local_10 = param_2;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
            (__return_storage_ptr__,&local_38);
  return __return_storage_ptr__;
}

// SupportsRenaming @ 14a12bfe0

bool __thiscall FRigVMDispatch_MakeStruct::SupportsRenaming(FRigVMDispatch_MakeStruct *this)

{
  return true;
}

// GetDispatchFunctionImpl @ 14a12c030

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_MakeStruct::GetDispatchFunctionImpl
          (FRigVMDispatch_MakeStruct *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// Execute @ 14a19d270

void __cdecl
FRigVMDispatch_MakeStruct::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMPropertyPath *this;
  FProperty *pFVar2;
  FRigVMMemoryHandle *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  FProperty *pFVar7;
  uchar *puVar8;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this = param_2->DataPtr->PropertyPath;
  if (this == (FRigVMPropertyPath *)0x0) {
    pFVar7 = param_2->DataPtr->Property;
  }
  else {
    pFVar7 = FRigVMPropertyPath::GetTailProperty(this);
  }
  if (iVar1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr[1].Property;
  cVar6 = (**(code **)(pFVar7->_padding_ + 0x1a0))(pFVar7,pFVar2);
  if (cVar6 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceProperty->SameType(TargetProperty)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_MakeStruct.cpp"
                       ,0x62,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar3->Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  URigVMMemoryStorage::CopyProperty(pFVar2,param_2->DataPtr[1].Ptr,pFVar7,puVar8);
  return;
}

