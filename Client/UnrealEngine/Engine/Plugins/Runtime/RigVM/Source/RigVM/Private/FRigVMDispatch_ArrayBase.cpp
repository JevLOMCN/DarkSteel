// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 5

// StaticStruct @ 14a11f380

UScriptStruct * __cdecl FRigVMDispatch_ArrayBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayBase,(UObject *)pUVar1,
                         L"RigVMDispatch_ArrayBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayBase.OuterSingleton;
}

// GetOpCode @ 14a11f450

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

ERigVMOpCode __thiscall FRigVMDispatch_ArrayBase::GetOpCode(FRigVMDispatch_ArrayBase *this)

{
  return Invalid;
}

// IsSingleton @ 14a11f4b0

bool __thiscall FRigVMDispatch_ArrayBase::IsSingleton(FRigVMDispatch_ArrayBase *this)

{
  return true;
}

// CreateArgumentInfo @ 14a195530

FRigVMTemplateArgumentInfo * __cdecl
FRigVMDispatch_ArrayBase::CreateArgumentInfo
          (FRigVMTemplateArgumentInfo *__return_storage_ptr__,FName *param_1,
          ERigVMPinDirection param_2)

{
  code *pcVar1;
  bool bVar2;
  FRigVMTemplateArgumentInfo *pFVar3;
  TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)> *pTVar4;
  FName FVar5;
  TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> *pTVar6;
  int *piVar7;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  TRigVMTypeIndex local_e8;
  TRigVMTypeIndex local_d8;
  undefined8 local_c8;
  TRigVMTypeIndex local_b8;
  TRigVMTypeIndex local_a8;
  TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)> local_98;
  TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)> local_68;
  
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_res10[0] = 2;
    ArrayCategories.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&ArrayCategories.AllocatorInstance,1,&ArrayCategories.ArrayMax);
    memcpy(ArrayCategories.AllocatorInstance.Data,local_res10,1);
    atexit(`FRigVMDispatch_ArrayBase::CreateArgumentInfo'::__l2::
           _dynamic_atexit_destructor_for__ArrayCategories__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar7 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    local_res20[0] = 1;
    ElementCategories.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&ElementCategories.AllocatorInstance,1,&ElementCategories.ArrayMax);
    memcpy(ElementCategories.AllocatorInstance.Data,local_res20,1);
    atexit(`FRigVMDispatch_ArrayBase::CreateArgumentInfo'::__l2::
           _dynamic_atexit_destructor_for__ElementCategories__);
    _Init_thread_footer(&::_TSS1);
  }
  FLazyName::Resolve(&ArrayName);
  FVar5 = *param_1;
  if (FVar5 != local_140) {
    FLazyName::Resolve(&ValuesName);
    FVar5 = *param_1;
    if (FVar5 != local_138) {
      FLazyName::Resolve(&OtherName);
      FVar5 = *param_1;
      if (FVar5 != local_130) {
        FLazyName::Resolve(&CloneName);
        FVar5 = *param_1;
        if (FVar5 != local_128) {
          FLazyName::Resolve(&ResultName);
          FVar5 = *param_1;
          if (FVar5 != local_120) {
            FLazyName::Resolve(&ElementName);
            FVar5 = *param_1;
            if (FVar5 != local_118) {
              FLazyName::Resolve(&NumName);
              if (((*param_1 == local_110) ||
                  (FLazyName::Resolve(&IndexName), *param_1 == local_108)) ||
                 (FLazyName::Resolve(&CountName), *param_1 == local_100)) {
                local_a8.Name = RigVMTypeUtils::TypeIndex::Int32.Name;
                local_a8.Index = RigVMTypeUtils::TypeIndex::Int32.Index;
                FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
                          (__return_storage_ptr__,*param_1,param_2,&local_a8);
                return __return_storage_ptr__;
              }
              FLazyName::Resolve(&SuccessName);
              if (*param_1 == local_f8) {
                local_e8.Name = RigVMTypeUtils::TypeIndex::Bool.Name;
                local_e8.Index = RigVMTypeUtils::TypeIndex::Bool.Index;
                FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
                          (__return_storage_ptr__,*param_1,param_2,&local_e8);
                return __return_storage_ptr__;
              }
              FLazyName::Resolve(&RatioName);
              if (*param_1 == local_f0) {
                local_d8.Name = RigVMTypeUtils::TypeIndex::Float.Name;
                local_d8.Index = RigVMTypeUtils::TypeIndex::Float.Index;
                FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
                          (__return_storage_ptr__,*param_1,param_2,&local_d8);
                return __return_storage_ptr__;
              }
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMDispatch_Array.cpp"
                                 ,0x95,L"");
              if (!bVar2) {
                local_c8 = 0;
                local_b8.Name.ComparisonIndex.Value = 0;
                local_b8.Name.Number = 0;
                local_b8.Index = -1;
                FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
                          (__return_storage_ptr__,(FName)0x0,Invalid,&local_b8);
                return __return_storage_ptr__;
              }
              pcVar1 = (code *)swi(3);
              pFVar3 = (FRigVMTemplateArgumentInfo *)(*pcVar1)();
              return pFVar3;
            }
            local_98._0_8_ = 0;
            pTVar4 = &local_98;
            local_98._40_8_ = 0;
            pTVar6 = &ElementCategories;
            goto LAB_14a1957ea;
          }
        }
      }
    }
  }
  local_68._0_8_ = 0;
  pTVar4 = &local_68;
  local_68._40_8_ = 0;
  pTVar6 = &ArrayCategories;
LAB_14a1957ea:
  FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
            (__return_storage_ptr__,FVar5,param_2,pTVar6,pTVar4);
  return __return_storage_ptr__;
}

// GetArrayHash @ 14a1aaca0

TMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_> *
__cdecl FRigVMDispatch_ArrayBase::GetArrayHash
                  (TMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
                   *__return_storage_ptr__,FScriptArrayHelper *param_1,FArrayProperty *param_2)

{
  FProperty *this;
  TScriptArray<TMemoryImageAllocator<0>_> *pTVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  EArrayPropertyFlags EVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  uint local_res8 [2];
  uint local_res10 [2];
  wchar_t *local_a8;
  undefined8 local_a0;
  TStringPointer<wchar_t,unsigned_short> local_98;
  undefined8 local_88;
  uint *puStack_80;
  undefined4 local_78;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  TMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  uVar12 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  uVar9 = ((param_1->field1_0x8).FreezableArray)->ArrayNum;
  if (uVar9 == 0) goto LAB_14a1aaef4;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar9);
  if (uVar9 < 4) {
    uVar9 = 1;
  }
  else {
    uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar9 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar9 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_14a1aaef4;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar9;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar9 != 0) {
    uVar5 = uVar9;
    if (uVar9 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar5 = 0;
        goto LAB_14a1aad75;
      }
    }
    else {
LAB_14a1aad75:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar5,4);
    }
    if (0 < (int)uVar9) {
      uVar10 = (ulonglong)uVar9;
      uVar8 = uVar12;
      do {
        puVar6 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar3 = (longlong)(int)uVar9 - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)(puVar6 + uVar3 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar9 = *(uint *)&__return_storage_ptr__->field_0x28;
    puStack_80 = (uint *)&__return_storage_ptr__->field_0x10;
    local_88 = (uint *)&DAT_100000000;
    uStack_74 = 0;
    uStack_70 = 0;
    uVar8 = uVar12;
    if (uVar9 != 0) {
      puVar11 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar11 = puStack_80;
      }
      uVar5 = *puVar11;
      uVar10 = uVar12;
      while (uVar5 == 0) {
        uStack_70 = (int)uVar10 + 0x20;
        uVar10 = (ulonglong)uStack_70;
        iVar4 = (int)uVar8;
        uVar5 = iVar4 + 1;
        uVar8 = (ulonglong)uVar5;
        uVar3 = (ulonglong)local_88 >> 0x20;
        local_88 = (uint *)CONCAT44((int)uVar3,uVar5);
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar5)
        goto LAB_14a1aae69;
        uVar5 = puVar11[(longlong)iVar4 + 1];
      }
      local_88 = (uint *)CONCAT44(-uVar5 & uVar5,SUB84(local_88,0));
      uVar8 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_74 = (int)lVar2 + -1 + uStack_70;
      uVar8 = (ulonglong)uStack_74;
      if ((int)uVar9 < (int)uStack_74) {
LAB_14a1aae69:
        uVar8 = (ulonglong)uVar9;
        uStack_74 = uVar9;
      }
    }
    local_78 = 0xffffffff;
    local_60.CurrentBitIndex = uStack_74;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = uStack_70;
    local_60._padding_ = (longlong)local_88;
    local_68 = __return_storage_ptr__;
    local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_80;
    if ((int)uVar8 < (int)uVar9) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar8 * 0x10 + *(longlong *)local_68);
        uVar9 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *puVar11;
        puVar11[3] = uVar9;
        puVar6 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar10 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar9;
        puVar11[2] = *(uint *)(puVar6 + uVar10 * 4);
        *(int *)(puVar6 + uVar10 * 4) = (int)uVar8;
        local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
        uVar8 = (ulonglong)(uint)local_60.CurrentBitIndex;
      } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
    }
  }
LAB_14a1aaef4:
  this = param_2->Inner;
  local_res10[0] = 0;
  uVar8 = uVar12;
  do {
    iVar4 = (int)uVar8;
    pTVar1 = (param_1->field1_0x8).FreezableArray;
    EVar7 = param_1->ArrayFlags & UsesMemoryImageAllocator;
    if (pTVar1->ArrayNum <= iVar4) {
      return __return_storage_ptr__;
    }
    if ((this->PropertyFlags & CPF_HasGetValueTypeHash) == CPF_None) {
      local_a8 = (wchar_t *)0x0;
      local_a0 = 0;
      uVar8 = uVar12;
      if (pTVar1->ArrayNum != 0) {
        uVar8 = pTVar1->_padding_;
        if ((EVar7 != None) && ((uVar8 & 1) != 0)) {
          uVar8 = (longlong)&pTVar1->_padding_ + ((longlong)uVar8 >> 0x18);
        }
        uVar8 = (longlong)param_1->ElementSize * (longlong)iVar4 + uVar8;
      }
      (**(code **)(this->_padding_ + 0xe0))(this,&local_a8,uVar8,0,0,0,0,0);
      if ((int)local_a0 == 0) {
        local_98.Ptr = (ushort *)0x15060d16c;
        local_98.StringLength = 0;
LAB_14a1ab008:
        if ((0 < local_98.StringLength) &&
           (local_98.Ptr[(longlong)local_98.StringLength + -1] == L'\0')) {
          local_98.StringLength = local_98.StringLength + -1;
        }
      }
      else {
        local_98.Ptr = (ushort *)local_a8;
        local_98.StringLength = (int)local_a0 + -1;
        if (local_a8 != (wchar_t *)0x0) goto LAB_14a1ab008;
        local_98.Ptr = (ushort *)0x0;
        local_98.StringLength = 0;
      }
      local_res8[0] = TextKeyUtil::HashString(&local_98);
      if (local_a8 != (wchar_t *)0x0) {
        FMemory::Free(local_a8);
      }
    }
    else if (pTVar1->ArrayNum == 0) {
      local_res8[0] = FProperty::GetValueTypeHash(this,(void *)0x0);
    }
    else {
      uVar8 = pTVar1->_padding_;
      if ((EVar7 != None) && ((uVar8 & 1) != 0)) {
        uVar8 = (longlong)&pTVar1->_padding_ + ((longlong)uVar8 >> 0x18);
      }
      local_res8[0] =
           FProperty::GetValueTypeHash
                     (this,(void *)((longlong)param_1->ElementSize * (longlong)iVar4 + uVar8));
    }
    if (*(int *)&__return_storage_ptr__->field_0x8 != *(int *)&__return_storage_ptr__->field_0x34) {
      puVar6 = &__return_storage_ptr__->field_0x38;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      }
      iVar4 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&__return_storage_ptr__->field_0x48 - 1U & local_res8[0]) *
                                4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*(longlong *)__return_storage_ptr__ + (longlong)iVar4 * 0x10) ==
              local_res8[0]) goto LAB_14a1ab0aa;
          iVar4 = *(int *)(*(longlong *)__return_storage_ptr__ + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    local_88 = local_res8;
    puStack_80 = local_res10;
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,int_const_&>_>
              ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__,
               (TPairInitializer<unsigned_int_const_&,int_const_&> *)&stack0x00000020,
               (bool *)&local_88);
LAB_14a1ab0aa:
    local_res10[0] = local_res10[0] + 1;
    uVar8 = (ulonglong)local_res10[0];
  } while( true );
}

