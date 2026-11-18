// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// StaticStruct @ 14a132710

UScriptStruct * __cdecl FRigVMDispatch_Print::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_Print.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_Print.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_Print,(UObject *)pUVar1,
                         L"RigVMDispatch_Print");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_Print.OuterSingleton;
}

// GetArgumentNameForOperandIndex @ 14a1327b0

FName __thiscall
FRigVMDispatch_Print::GetArgumentNameForOperandIndex
          (FRigVMDispatch_Print *this,int param_1,int param_2,FRigVMRegistryHandle *param_3)

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
      ArgumentNames[0] = PrefixName;
      ArgumentNames[1] = ValueName;
      ArgumentNames[2] = EnabledName;
      ArgumentNames[3] = ScreenDurationName;
      ArgumentNames[4] = ScreenColorName;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((int)param_3 != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTotalOperands == (sizeof(UEArrayCountHelper(ArgumentNames)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Print.cpp"
                       ,0x13,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  FLazyName::Resolve(ArgumentNames + param_2);
  return FVar3;
}

// GetArgumentInfos @ 14a1328c0

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_Print::GetArgumentInfos(FRigVMDispatch_Print *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  FRigVMRegistry_NoLock *pFVar5;
  UScriptStruct *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  FName local_res8;
  FName local_res18;
  TRigVMTypeIndex local_88;
  undefined1 local_78 [16];
  FString local_68;
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
        atexit(`FRigVMDispatch_Print::GetArgumentInfos'::__l5::
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
    FLazyName::Resolve(&PrefixName);
    local_88.Name = local_res8;
    local_88.Index = iVar3;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),local_res18,Input,
               &local_88);
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
    FLazyName::Resolve(&ValueName);
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),local_res8,Input,
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
    FLazyName::Resolve(&EnabledName);
    local_88.Name = local_res8;
    local_88.Index = iVar3;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),local_res18,Input,
               &local_88);
    iVar4 = *(int *)&this->field_0xa0;
    if (iVar4 == *(int *)&this->field_0xa4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar4 + 1;
    iVar3 = RigVMTypeUtils::TypeIndex::Float.Index;
    local_res8 = RigVMTypeUtils::TypeIndex::Float.Name;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&ScreenDurationName);
    local_88.Name = local_res8;
    local_88.Index = iVar3;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),local_res18,Input,
               &local_88);
    pFVar5 = FRigVMRegistryHandle::operator->(param_1);
    pUVar6 = TBaseStructure<FLinearColor>::Get();
    pFVar7 = RigVMTypeUtils::GetUniqueStructTypeName(&local_68,pUVar6);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    ::FName::FName((FName *)local_78,pwVar8);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_78._8_8_ = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (**(code **)(pFVar5->_padding_ + 0xe0))(pFVar5,&local_88);
    iVar4 = *(int *)&this->field_0xa0;
    if (iVar4 == *(int *)&this->field_0xa4) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    iVar3 = local_88.Index;
    *(int *)&this->field_0xa0 = iVar4 + 1;
    local_res8 = local_88.Name;
    lVar2 = *(longlong *)puVar1;
    FLazyName::Resolve(&ScreenColorName);
    local_78._0_4_ = local_res8.ComparisonIndex.Value;
    local_78._4_4_ = local_res8.Number;
    local_78._8_4_ = iVar3;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar4 * 0x50),local_res18,Input,
               (TRigVMTypeIndex *)local_78);
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// GetExecuteArguments_Impl @ 14a132d20

TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_Print::GetExecuteArguments_Impl
          (FRigVMDispatch_Print *this,FRigVMDispatchContext *param_1)

{
  ForAnyElementType FVar1;
  FName local_res18 [2];
  uint uStack_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(local_res18,L"ExecuteContext");
      uStack_20 = CONCAT31(uStack_20._1_3_,2);
      Arguments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      Arguments.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,1,0,&Arguments.AllocatorInstance,1,&Arguments.ArrayMax);
      FVar1 = Arguments.AllocatorInstance;
      *(FName *)Arguments.AllocatorInstance.Data = local_res18[0];
      *(ulonglong *)(FVar1.Data + 8) = (ulonglong)uStack_20;
      *(undefined8 *)(FVar1.Data + 0x10) = 0xffffffff00000000;
      atexit(`FRigVMDispatch_Print::GetExecuteArguments_Impl'::__l2::
             _dynamic_atexit_destructor_for__Arguments__);
      _Init_thread_footer(&::_TSS0);
      return &Arguments;
    }
  }
  return &Arguments;
}

// OnNewArgumentType @ 14a132e70

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMDispatch_Print::OnNewArgumentType
          (FRigVMDispatch_Print *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,FName *param_1,TRigVMTypeIndex *param_2,
          FRigVMRegistryHandle *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  FRigVMRegistry_NoLock *pFVar9;
  UScriptStruct *pUVar10;
  FString *pFVar11;
  undefined1 *puVar12;
  uint uVar13;
  TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *pTVar14;
  wchar_t *pwVar15;
  uint uVar16;
  TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *pTVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  uint *puVar21;
  FName local_res10 [2];
  FName local_res20;
  TRigVMTypeIndex local_a8;
  FSparseArrayAllocationInfo local_98;
  undefined1 local_88 [16];
  undefined4 local_78;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  pTVar17 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)0x0;
  puVar12 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)puVar12 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_res20 = (FName)param_2;
  FLazyName::Resolve(&PrefixName);
  if (*(int *)&__return_storage_ptr__->field_0x34 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar12,
                       (int *)&__return_storage_ptr__->field_0xc);
    iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10,1
                      );
    uVar7 = iVar6 >> 0x1f & 0x1f;
    iVar6 = iVar6 + uVar7;
    puVar19 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
      puVar19 = &__return_storage_ptr__->field_0x10;
    }
    *(uint *)(puVar19 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar19 + (longlong)(iVar6 >> 5) * 4) &
         ~(1 << (((byte)iVar6 & 0x1f) - (char)uVar7 & 0x1f));
  }
  else {
    iVar5 = *(int *)&__return_storage_ptr__->field_0x30;
    iVar6 = *(int *)&__return_storage_ptr__->field_0x34 + -1;
    iVar1 = *(int *)((longlong)iVar5 * 0x1c + 4 + *(longlong *)__return_storage_ptr__);
    *(int *)&__return_storage_ptr__->field_0x30 = iVar1;
    *(int *)&__return_storage_ptr__->field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x1c + *(longlong *)__return_storage_ptr__) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,&local_98,iVar5);
  pTVar14 = pTVar17;
  if (local_98.Pointer != (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)0x0) {
    *(FName *)local_98.Pointer = local_a8.Name;
    *(FName *)((longlong)local_98.Pointer + 8) = RigVMTypeUtils::TypeIndex::FString.Name;
    *(int *)((longlong)local_98.Pointer + 0x10) = RigVMTypeUtils::TypeIndex::FString.Index;
    *(undefined4 *)((longlong)local_98.Pointer + 0x14) = 0xffffffff;
    pTVar14 = local_98.Pointer;
  }
  uVar2 = *(undefined8 *)pTVar14;
  local_res10[0].ComparisonIndex.Value = local_98.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  uVar7 = uVar7 + (int)((ulonglong)uVar2 >> 0x20);
  bVar4 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                      *)__return_storage_ptr__,uVar7,pTVar14,(int *)local_res10,(bool *)0x0);
  if (bVar4) goto LAB_14a133227;
  uVar16 = 1;
  uVar13 = *(int *)puVar12 - *(int *)&__return_storage_ptr__->field_0x34;
  if (3 < uVar13) {
    uVar20 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar13 < 1) || ((int)uVar16 <= *(int *)&__return_storage_ptr__->field_0x48)) {
    uVar7 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar7;
    *(uint *)&pTVar14->field_0x18 = uVar7;
    puVar12 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
    if (*(undefined1 **)&__return_storage_ptr__->field_0x40 == (undefined1 *)0x0) {
      puVar12 = &__return_storage_ptr__->field_0x38;
    }
    uVar20 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar7;
    *(undefined4 *)&pTVar14->field_0x14 = *(undefined4 *)(puVar12 + uVar20 * 4);
    *(uint *)(puVar12 + uVar20 * 4) = local_res10[0].ComparisonIndex.Value;
    goto LAB_14a133227;
  }
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar16;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar16 != 0) {
    uVar7 = uVar16;
    if (uVar16 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar7 = 0;
        goto LAB_14a133056;
      }
    }
    else {
LAB_14a133056:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar7,4);
    }
    if (0 < (int)uVar16) {
      uVar20 = (ulonglong)uVar16;
      pTVar14 = pTVar17;
      do {
        puVar12 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar12 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar8 = (ulonglong)pTVar14 & (longlong)(int)uVar16 - 1U;
        pTVar14 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)&pTVar14->field_0x1;
        *(undefined4 *)(puVar12 + uVar8 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar7 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_88._8_8_ = &__return_storage_ptr__->field_0x10;
    local_88._0_4_ = 0;
    local_88._4_4_ = 1;
    uStack_74 = 0;
    uStack_70 = 0;
    if (uVar7 != 0) {
      puVar21 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar21 = (uint *)local_88._8_8_;
      }
      uVar13 = *puVar21;
      pTVar14 = pTVar17;
      while (uVar13 == 0) {
        iVar5 = (int)pTVar17;
        uStack_70 = (int)pTVar14 + 0x20;
        pTVar14 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(ulonglong)uStack_70;
        local_88._0_4_ = iVar5 + 1;
        pTVar17 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)
                  (ulonglong)(uint)local_88._0_4_;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_88._0_4_)
        goto LAB_14a13314b;
        uVar13 = puVar21[(longlong)iVar5 + 1];
      }
      local_88._4_4_ = -uVar13 & uVar13;
      uVar20 = (ulonglong)(uint)local_88._4_4_ * 2 + 1;
      lVar3 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_74 = (int)lVar3 + -1 + uStack_70;
      pTVar17 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(ulonglong)uStack_74;
      if ((int)uVar7 < (int)uStack_74) {
LAB_14a13314b:
        pTVar17 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)(ulonglong)uVar7;
        uStack_74 = uVar7;
      }
    }
    local_78 = 0xffffffff;
    local_60._padding_ = CONCAT44(local_88._4_4_,local_88._0_4_);
    local_60.CurrentBitIndex = uStack_74;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = uStack_70;
    local_68 = __return_storage_ptr__;
    local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88._8_8_;
    if ((int)pTVar17 < (int)uVar7) {
      do {
        puVar18 = (undefined8 *)((longlong)(int)pTVar17 * 0x1c + *(longlong *)local_68);
        uVar2 = *puVar18;
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar7 = *(int *)&__return_storage_ptr__->field_0x48 - 1U &
                uVar7 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)(puVar18 + 3) = uVar7;
        puVar12 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar12 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar20 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)((longlong)puVar18 + 0x14) = *(undefined4 *)(puVar12 + uVar20 * 4);
        *(int *)(puVar12 + uVar20 * 4) = (int)pTVar17;
        local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
        pTVar17 = (TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_> *)
                  (ulonglong)(uint)local_60.CurrentBitIndex;
      } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
    }
  }
LAB_14a133227:
  FLazyName::Resolve(&ValueName);
  TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::Emplace<FName,TRigVMTypeIndex_const_&>
            ((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)__return_storage_ptr__,local_res10,(TRigVMTypeIndex *)local_res20);
  FLazyName::Resolve(&EnabledName);
  TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::Emplace<FName,TRigVMTypeIndex_const_&>
            ((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)__return_storage_ptr__,&local_res20,&RigVMTypeUtils::TypeIndex::Bool);
  FLazyName::Resolve(&ScreenDurationName);
  TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::Emplace<FName,TRigVMTypeIndex_const_&>
            ((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)__return_storage_ptr__,&local_res20,&RigVMTypeUtils::TypeIndex::Float);
  pFVar9 = FRigVMRegistryHandle::operator->(param_3);
  pUVar10 = TBaseStructure<FLinearColor>::Get();
  pFVar11 = RigVMTypeUtils::GetUniqueStructTypeName((FString *)local_88,pUVar10);
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  ::FName::FName((FName *)&local_98,pwVar15);
  if ((void *)CONCAT44(local_88._4_4_,local_88._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_88._4_4_,local_88._0_4_));
  }
  local_98.Pointer = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (**(code **)(pFVar9->_padding_ + 0xe0))(pFVar9,&local_a8,&local_98);
  FLazyName::Resolve(&ScreenColorName);
  TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  ::Emplace<FName,TRigVMTypeIndex>
            ((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)__return_storage_ptr__,&local_res20,&local_a8);
  return __return_storage_ptr__;
}

// IsSingleton @ 14a133360

bool __thiscall FRigVMDispatch_Print::IsSingleton(FRigVMDispatch_Print *this)

{
  return true;
}

// GetDispatchFunctionImpl @ 14a133670

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_Print::GetDispatchFunctionImpl
          (FRigVMDispatch_Print *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// Execute @ 14a19d430

void __cdecl
FRigVMDispatch_Print::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  return;
}

