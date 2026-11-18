// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 4

// StaticStruct @ 14a12c890

UScriptStruct * __cdecl FRigVMDispatch_BreakStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_BreakStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_BreakStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_BreakStruct,(UObject *)pUVar1,
                         L"RigVMDispatch_BreakStruct");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_BreakStruct.OuterSingleton;
}

// GetArgumentInfos @ 14a12c910

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_BreakStruct::GetArgumentInfos
          (FRigVMDispatch_BreakStruct *this,FRigVMRegistryHandle *param_1)

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
        atexit(`FRigVMDispatch_BreakStruct::GetArgumentInfos'::__l5::
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
    FLazyName::Resolve(&FRigVMDispatch_MakeStruct::StructName);
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
    FLazyName::Resolve(&FRigVMDispatch_MakeStruct::ElementsName);
    FVar4._1_7_ = uStackX_9;
    FVar4.ComparisonIndex.Value._0_1_ = local_res8;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar5 * 0x50),FVar4,Output,
               &Categories,&local_48);
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// SupportsRenaming @ 14a12caf0

bool __thiscall FRigVMDispatch_BreakStruct::SupportsRenaming(FRigVMDispatch_BreakStruct *this)

{
  return false;
}

// FRigVMDispatch_BreakStruct @ 14a18b3d0

FRigVMDispatch_BreakStruct * __thiscall
FRigVMDispatch_BreakStruct::FRigVMDispatch_BreakStruct(FRigVMDispatch_BreakStruct *this)

{
  UPackage *pUVar1;
  
  FRigVMDispatchFactory::FRigVMDispatchFactory((FRigVMDispatchFactory *)this);
  *(undefined ***)this = &___7FRigVMDispatch_MakeStruct__6B_;
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_MakeStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_MakeStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_MakeStruct,(UObject *)pUVar1,
                         L"RigVMDispatch_MakeStruct");
  }
  *(UScriptStruct **)&this->field_0x28 =
       Z_Registration_Info_UScriptStruct_FRigVMDispatch_MakeStruct.OuterSingleton;
  *(undefined ***)this = &___7FRigVMDispatch_BreakStruct__6B_;
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_BreakStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_BreakStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_BreakStruct,(UObject *)pUVar1,
                         L"RigVMDispatch_BreakStruct");
  }
  *(UScriptStruct **)&this->field_0x28 =
       Z_Registration_Info_UScriptStruct_FRigVMDispatch_BreakStruct.OuterSingleton;
  return this;
}

