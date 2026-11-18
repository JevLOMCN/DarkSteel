// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 137

// GetData<bool,enum_EDS_ItemSlotData> @ 14b51cc70

bool __thiscall
FDS_DataContainer::GetData<bool,enum_EDS_ItemSlotData>
          (FDS_DataContainer *this,EDS_ItemSlotData param_1)

{
  int iVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  UPackage *pUVar5;
  FString *pFVar6;
  FName *pFVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  TPairInitializer<int_const_&,FName_const_&> local_res8;
  FName local_res18;
  FName local_res20;
  FName **local_28;
  FName *local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pwVar9 = L"";
  local_res8.Value._0_4_ = param_1;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar8 = 0x154cd4118;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar8 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar8 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - ItemSlotType & param_1) * 4);
    while (iVar1 != -1) {
      lVar8 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(EDS_ItemSlotData *)
           (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
            ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == param_1) {
        pFVar7 = (FName *)(lVar8 + 4);
        if (lVar8 == 0) {
          pFVar7 = (FName *)0x0;
        }
        if (pFVar7 != (FName *)0x0) {
          local_res18 = *pFVar7;
          goto LAB_14b51cdbd;
        }
        break;
      }
      iVar1 = *(int *)(lVar8 + 0xc);
    }
  }
  if (Z_Registration_Info_UEnum_EDS_ItemSlotData.OuterSingleton == (UEnum *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UEnum_EDS_ItemSlotData.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ProjectDS_EDS_ItemSlotData,(UObject *)pUVar5,
                       L"EDS_ItemSlotData");
    if (Z_Registration_Info_UEnum_EDS_ItemSlotData.OuterSingleton == (UEnum *)0x0) {
      ::FName::FName(&local_res18,L"");
      goto LAB_14b51cdbd;
    }
  }
  UEnum::GetNameByValue
            (Z_Registration_Info_UEnum_EDS_ItemSlotData.OuterSingleton,(long64)&local_res20);
  local_28 = &local_res8.Value;
  local_20 = &local_res20;
  TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,FName_const_&>_>
            ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
              *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
                 ::__l2::EnumNameCache,&local_res8,(bool *)&local_28);
  local_res18 = local_res20;
LAB_14b51cdbd:
  FVar2 = local_res18;
  uVar4 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar4 + FVar2.Number,&local_res18);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  bVar3 = FToBoolHelper::FromCStringWide(pwVar9);
  return bVar3;
}

// SetData<int,enum_EDS_ItemFilterData> @ 14ba8fa00

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_ItemFilterData>
          (FDS_DataContainer *this,EDS_ItemFilterData param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  uint uVar4;
  UEnum *this_00;
  FString *pFVar5;
  longlong lVar6;
  FName *pFVar7;
  FName local_res8;
  EDS_ItemFilterData local_res10 [2];
  TPairInitializer<int_const_&,FName_const_&> local_res18;
  FString local_48;
  EDS_ItemFilterData *local_38;
  FName **local_30;
  
  ::FString::PrintfImpl(&local_48,L"%d");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemFilterData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_res10[0] = param_1;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar6 = 0x154cf7408;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar6 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - SeasonGroup & param_1) * 4);
    while (iVar1 != -1) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(EDS_ItemFilterData *)
           (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
            ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == param_1) {
        pFVar7 = (FName *)(lVar6 + 4);
        if (lVar6 == 0) {
          pFVar7 = (FName *)0x0;
        }
        if (pFVar7 != (FName *)0x0) {
          local_res8 = *pFVar7;
          goto LAB_14ba8fb1f;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemFilterData>();
  if (this_00 == (UEnum *)0x0) {
    ::FName::FName(&local_res8,L"");
  }
  else {
    UEnum::GetNameByValue(this_00,(long64)&local_res18.Value);
    local_38 = local_res10;
    local_30 = &local_res18.Value;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
                   ::__l2::EnumNameCache,&local_res18,(bool *)&local_38);
    local_res8 = (FName)local_res18.Value;
  }
LAB_14ba8fb1f:
  FVar3 = local_res8;
  uVar4 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar4 + FVar3.Number,&local_res8);
  if (pFVar5 != &local_48) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_48.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<bool,enum_EDS_CommonIconTextButtonData> @ 14ba8fbc0

void __thiscall
FDS_DataContainer::SetData<bool,enum_EDS_CommonIconTextButtonData>
          (FDS_DataContainer *this,EDS_CommonIconTextButtonData param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  uint uVar4;
  UEnum *this_00;
  FString *pFVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  FName *pFVar8;
  FName local_res8;
  TPairInitializer<int_const_&,FName_const_&> local_res10;
  FName local_res20;
  FString local_48;
  FName **local_38;
  FName *local_30;
  
  pwVar6 = L"true";
  if (!param_2) {
    pwVar6 = L"false";
  }
  ::FString::FString(&local_48,pwVar6);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_CommonIconTextButtonData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_res10.Value._0_4_ = param_1;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar7 = 0x154cf73b8;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar7 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar7 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - ButtonTooltipText & param_1) * 4);
    while (iVar1 != -1) {
      lVar7 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(EDS_CommonIconTextButtonData *)
           (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
            ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == param_1) {
        pFVar8 = (FName *)(lVar7 + 4);
        if (lVar7 == 0) {
          pFVar8 = (FName *)0x0;
        }
        if (pFVar8 != (FName *)0x0) {
          local_res8 = *pFVar8;
          goto LAB_14ba8fcef;
        }
        break;
      }
      iVar1 = *(int *)(lVar7 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_CommonIconTextButtonData>();
  if (this_00 == (UEnum *)0x0) {
    ::FName::FName(&local_res8,L"");
  }
  else {
    UEnum::GetNameByValue(this_00,(long64)&local_res20);
    local_38 = &local_res10.Value;
    local_30 = &local_res20;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
                   ::__l2::EnumNameCache,&local_res10,(bool *)&local_38);
    local_res8 = local_res20;
  }
LAB_14ba8fcef:
  FVar3 = local_res8;
  uVar4 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar4 + FVar3.Number,&local_res8);
  if (pFVar5 != &local_48) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_48.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<int,enum_EDS_ItemImplDetailData> @ 14baeab70

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_ItemImplDetailData>
          (FDS_DataContainer *this,EDS_ItemImplDetailData param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  uint uVar4;
  UEnum *this_00;
  FString *pFVar5;
  longlong lVar6;
  FName *pFVar7;
  FName local_res8;
  EDS_ItemImplDetailData local_res10 [2];
  TPairInitializer<int_const_&,FName_const_&> local_res18;
  FString local_48;
  EDS_ItemImplDetailData *local_38;
  FName **local_30;
  
  ::FString::PrintfImpl(&local_48,L"%d");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemImplDetailData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_res10[0] = param_1;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar6 = 0x154cf7568;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar6 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - SetEffectID & param_1) * 4);
    while (iVar1 != -1) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(EDS_ItemImplDetailData *)
           (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
            ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == param_1) {
        pFVar7 = (FName *)(lVar6 + 4);
        if (lVar6 == 0) {
          pFVar7 = (FName *)0x0;
        }
        if (pFVar7 != (FName *)0x0) {
          local_res8 = *pFVar7;
          goto LAB_14baeac8f;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemImplDetailData>();
  if (this_00 == (UEnum *)0x0) {
    ::FName::FName(&local_res8,L"");
  }
  else {
    UEnum::GetNameByValue(this_00,(long64)&local_res18.Value);
    local_38 = local_res10;
    local_30 = &local_res18.Value;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
                   ::__l2::EnumNameCache,&local_res18,(bool *)&local_38);
    local_res8 = (FName)local_res18.Value;
  }
LAB_14baeac8f:
  FVar3 = local_res8;
  uVar4 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar4 + FVar3.Number,&local_res8);
  if (pFVar5 != &local_48) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_48.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<int,enum_EDS_ItemSlotData> @ 14baead30

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_ItemSlotData>
          (FDS_DataContainer *this,EDS_ItemSlotData param_1,int param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar4 = TransformIndexToName<enum_EDS_ItemSlotData>(this,(EDS_ItemSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<enum_EDS_InventoryType,enum_EDS_ItemSlotData> @ 14baeadf0

void __thiscall
FDS_DataContainer::SetData<enum_EDS_InventoryType,enum_EDS_ItemSlotData>
          (FDS_DataContainer *this,EDS_ItemSlotData param_1,EDS_InventoryType param_2)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_InventoryType>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)param_2);
  }
  FVar3 = TransformIndexToName<enum_EDS_ItemSlotData>(this,(EDS_ItemSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// TransformIndexToName<enum_EDS_ItemSlotData> @ 14baeb7b0

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
          (FDS_DataContainer *this,EDS_ItemSlotData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cd4118;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemSlotData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotData>(EDS_ItemSlotData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// SetData<FString,enum_EDS_TextData> @ 14bc7e560

void __thiscall
FDS_DataContainer::SetData<FString,enum_EDS_TextData>
          (FDS_DataContainer *this,EDS_TextData param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  uint uVar4;
  UEnum *this_00;
  FString *pFVar5;
  longlong lVar6;
  FName *pFVar7;
  TPairInitializer<int_const_&,FName_const_&> local_res8;
  FName local_res18;
  FName local_res20;
  FString local_58;
  FName **local_48;
  FName *local_40;
  
  iVar1 = (param_2->Data).ArrayNum;
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_58,iVar1,&local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_TextData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_res8.Value._0_4_ = param_1;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar6 = 0x154cf7c88;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar6 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ + ~Text & param_1) * 4);
    while (iVar1 != -1) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(EDS_TextData *)
           (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
            ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == param_1) {
        pFVar7 = (FName *)(lVar6 + 4);
        if (lVar6 == 0) {
          pFVar7 = (FName *)0x0;
        }
        if (pFVar7 != (FName *)0x0) {
          local_res18 = *pFVar7;
          goto LAB_14bc7e6cf;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_TextData>();
  if (this_00 == (UEnum *)0x0) {
    ::FName::FName(&local_res18,L"");
  }
  else {
    UEnum::GetNameByValue(this_00,(long64)&local_res20);
    local_48 = &local_res8.Value;
    local_40 = &local_res20;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
                   ::__l2::EnumNameCache,&local_res8,(bool *)&local_48);
    local_res18 = local_res20;
  }
LAB_14bc7e6cf:
  FVar3 = local_res18;
  uVar4 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar4 + FVar3.Number,&local_res18);
  if (pFVar5 != &local_58) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_58.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AddListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData> @ 14bcd0a80

void __thiscall
FDS_DataContainer::AddListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
          (FDS_DataContainer *this,EDS_ItemRepairData param_1,EDS_ModelEventItemRepair param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FName FVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  UEnum *this_00;
  undefined1 local_res8 [8];
  FString local_18;
  
  FVar7 = TransformIndexToName<enum_EDS_ItemRepairData>(this,(EDS_ItemRepairData)local_res8);
  uVar1 = *(undefined8 *)FVar7;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pTVar8 = TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ListDataMap,uVar5 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar7);
  this_00 = StaticEnum<enum_EDS_ModelEventItemRepair>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)param_2);
  }
  pFVar2 = (pTVar8->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)pTVar8->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = pTVar8->ArrayNum;
  if (iVar6 == pTVar8->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar6 + 1;
  ::FString::FString((FString *)((pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                     &local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddListData<__int64,enum_EDS_ItemListData> @ 14bcd0bd0

/* WARNING: Removing unreachable block (ram,0x00014bcd0cf7) */

void __thiscall
FDS_DataContainer::AddListData<__int64,enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1,long64 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FName FVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FString local_18;
  
  FVar6 = TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar6;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pTVar7 = TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ListDataMap,uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar6);
  ::FString::PrintfImpl(&local_18,L"%lld");
  pFVar8 = (pTVar7->AllocatorInstance).Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar8 + (longlong)pTVar7->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = pTVar7->ArrayNum;
  if (iVar5 == pTVar7->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
  }
  pTVar7->ArrayNum = iVar5 + 1;
  pFVar8 = (pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  *(FScriptContainerElement **)pFVar8 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar8 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar8 + 0xc) = local_18.Data.ArrayMax;
  return;
}

// ClearListData<enum_EDS_ItemListData> @ 14bcd2cc0

void __thiscall
FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 *puVar5;
  FName local_res8;
  
  TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)&local_res8);
  FVar1 = local_res8;
  uVar2 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  if (*(int *)&(this->ListDataMap).field_0x8 != *(int *)&(this->ListDataMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ListDataMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ListDataMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ListDataMap).field_0x48 - 1U & FVar1.Number + uVar2)
                              * 4);
    if (iVar3 != -1) {
      while (*(FName *)((longlong)iVar3 * 0x20 + *(longlong *)&this->ListDataMap) != FVar1) {
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->ListDataMap);
        if (iVar3 == -1) {
          return;
        }
      }
      pTVar4 = TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
               ::FindChecked((TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->ListDataMap,local_res8);
      DestructItems<FString,int>((FString *)(pTVar4->AllocatorInstance).Data,pTVar4->ArrayNum);
      pTVar4->ArrayNum = 0;
      if (pTVar4->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar4->AllocatorInstance,0,&pTVar4->ArrayMax);
      }
    }
  }
  return;
}

// GetData<int,enum_EDS_InventoryBagTabBtnData> @ 14bcd9a30

int __thiscall
FDS_DataContainer::GetData<int,enum_EDS_InventoryBagTabBtnData>
          (FDS_DataContainer *this,EDS_InventoryBagTabBtnData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  FVar4 = TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                    (this,(EDS_InventoryBagTabBtnData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  return iVar3;
}

// GetData<int,enum_EDS_ItemEnchantData> @ 14bcd9aa0

int __thiscall
FDS_DataContainer::GetData<int,enum_EDS_ItemEnchantData>
          (FDS_DataContainer *this,EDS_ItemEnchantData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  FVar4 = TransformIndexToName<enum_EDS_ItemEnchantData>(this,(EDS_ItemEnchantData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  return iVar3;
}

// GetData<int,enum_EDS_ItemFilterData> @ 14bcd9b10

int __thiscall
FDS_DataContainer::GetData<int,enum_EDS_ItemFilterData>
          (FDS_DataContainer *this,EDS_ItemFilterData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  FVar4 = TransformIndexToName<enum_EDS_ItemFilterData>(this,(EDS_ItemFilterData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  return iVar3;
}

// GetData<int,enum_EDS_ItemGemPopupData> @ 14bcd9b80

int __thiscall
FDS_DataContainer::GetData<int,enum_EDS_ItemGemPopupData>
          (FDS_DataContainer *this,EDS_ItemGemPopupData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  FVar4 = TransformIndexToName<enum_EDS_ItemGemPopupData>(this,(EDS_ItemGemPopupData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  return iVar3;
}

// GetData<int,enum_EDS_ItemGemSocketSlotData> @ 14bcd9bf0

int __thiscall
FDS_DataContainer::GetData<int,enum_EDS_ItemGemSocketSlotData>
          (FDS_DataContainer *this,EDS_ItemGemSocketSlotData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *_Str;
  
  FVar4 = TransformIndexToName<enum_EDS_ItemGemSocketSlotData>(this,8);
  uVar1 = *(undefined8 *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  return iVar3;
}

// GetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData> @ 14bcd9c60

EDS_BagGroupType __thiscall
FDS_DataContainer::GetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
          (FDS_DataContainer *this,EDS_InventoryBagData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  UEnum *this_00;
  FName *pFVar5;
  long64 lVar6;
  int iVar7;
  wchar_t *pwVar8;
  EDS_BagGroupType EVar9;
  EDS_BagGroupType local_res8 [8];
  FName local_res18;
  FString local_18;
  
  FVar3 = TransformIndexToName<enum_EDS_InventoryBagData>(this,(EDS_InventoryBagData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar8);
  this_00 = StaticEnum<enum_EDS_BagGroupType>();
  EVar9 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res18,iVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar6 = UEnum::GetValueByName(this_00,*pFVar5,None);
    EVar9 = (EDS_BagGroupType)lVar6;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar9;
}

// GetData<enum_EDS_BagType,enum_EDS_InventoryBagData> @ 14bcd9d30

EDS_BagType __thiscall
FDS_DataContainer::GetData<enum_EDS_BagType,enum_EDS_InventoryBagData>
          (FDS_DataContainer *this,EDS_InventoryBagData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  UEnum *this_00;
  FName *pFVar5;
  long64 lVar6;
  int iVar7;
  wchar_t *pwVar8;
  EDS_BagType EVar9;
  EDS_BagType local_res8 [8];
  FName local_res18;
  FString local_18;
  
  FVar3 = TransformIndexToName<enum_EDS_InventoryBagData>(this,(EDS_InventoryBagData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar8);
  this_00 = StaticEnum<enum_EDS_BagType>();
  EVar9 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res18,iVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar6 = UEnum::GetValueByName(this_00,*pFVar5,None);
    EVar9 = (EDS_BagType)lVar6;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar9;
}

// GetData<enum_EDS_BagType,enum_EDS_InventoryBagTabBtnData> @ 14bcd9e00

EDS_BagType __thiscall
FDS_DataContainer::GetData<enum_EDS_BagType,enum_EDS_InventoryBagTabBtnData>
          (FDS_DataContainer *this,EDS_InventoryBagTabBtnData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  UEnum *this_00;
  FName *pFVar5;
  long64 lVar6;
  int iVar7;
  wchar_t *pwVar8;
  EDS_BagType EVar9;
  EDS_BagType local_res8 [8];
  FName local_res18;
  FString local_18;
  
  FVar3 = TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                    (this,(EDS_InventoryBagTabBtnData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar8);
  this_00 = StaticEnum<enum_EDS_BagType>();
  EVar9 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res18,iVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar6 = UEnum::GetValueByName(this_00,*pFVar5,None);
    EVar9 = (EDS_BagType)lVar6;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar9;
}

// GetData<enum_EDS_FilterType,enum_EDS_ItemListData> @ 14bcd9ed0

EDS_FilterType __thiscall
FDS_DataContainer::GetData<enum_EDS_FilterType,enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  UEnum *this_00;
  FName *pFVar5;
  long64 lVar6;
  int iVar7;
  wchar_t *pwVar8;
  EDS_FilterType EVar9;
  EDS_FilterType local_res8 [8];
  FName local_res18;
  FString local_18;
  
  FVar3 = TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar8);
  this_00 = StaticEnum<enum_EDS_FilterType>();
  EVar9 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res18,iVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar6 = UEnum::GetValueByName(this_00,*pFVar5,None);
    EVar9 = (EDS_FilterType)lVar6;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar9;
}

// GetData<enum_EDS_InventoryType,enum_EDS_InventoryBagData> @ 14bcd9fa0

EDS_InventoryType __thiscall
FDS_DataContainer::GetData<enum_EDS_InventoryType,enum_EDS_InventoryBagData>
          (FDS_DataContainer *this,EDS_InventoryBagData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  UEnum *this_00;
  FName *pFVar5;
  long64 lVar6;
  int iVar7;
  wchar_t *pwVar8;
  EDS_InventoryType EVar9;
  EDS_InventoryType local_res8 [8];
  FName local_res18;
  FString local_18;
  
  FVar3 = TransformIndexToName<enum_EDS_InventoryBagData>(this,(EDS_InventoryBagData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar8);
  this_00 = StaticEnum<enum_EDS_InventoryType>();
  EVar9 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res18,iVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar6 = UEnum::GetValueByName(this_00,*pFVar5,None);
    EVar9 = (EDS_InventoryType)lVar6;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar9;
}

// GetData<enum_EDS_InventoryType,enum_EDS_ItemListData> @ 14bcda070

EDS_InventoryType __thiscall
FDS_DataContainer::GetData<enum_EDS_InventoryType,enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  UEnum *this_00;
  FName *pFVar5;
  long64 lVar6;
  int iVar7;
  wchar_t *pwVar8;
  EDS_InventoryType EVar9;
  EDS_InventoryType local_res8 [8];
  FName local_res18;
  FString local_18;
  
  FVar3 = TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar8);
  this_00 = StaticEnum<enum_EDS_InventoryType>();
  EVar9 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res18,iVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar6 = UEnum::GetValueByName(this_00,*pFVar5,None);
    EVar9 = (EDS_InventoryType)lVar6;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar9;
}

// GetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData> @ 14bcda140

EDS_ItemRepairType __thiscall
FDS_DataContainer::GetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
          (FDS_DataContainer *this,EDS_ItemRepairData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  UEnum *this_00;
  FName *pFVar5;
  long64 lVar6;
  int iVar7;
  wchar_t *pwVar8;
  EDS_ItemRepairType EVar9;
  EDS_ItemRepairType local_res8 [8];
  FName local_res18;
  FString local_18;
  
  FVar3 = TransformIndexToName<enum_EDS_ItemRepairData>(this,(EDS_ItemRepairData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar8);
  this_00 = StaticEnum<enum_EDS_ItemRepairType>();
  EVar9 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res18,iVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar6 = UEnum::GetValueByName(this_00,*pFVar5,None);
    EVar9 = (EDS_ItemRepairType)lVar6;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar9;
}

// GetData<enum_EDS_MoneyType,enum_EDS_ItemEnchantData> @ 14bcda210

EDS_MoneyType __thiscall
FDS_DataContainer::GetData<enum_EDS_MoneyType,enum_EDS_ItemEnchantData>
          (FDS_DataContainer *this,EDS_ItemEnchantData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  UEnum *this_00;
  FName *pFVar5;
  long64 lVar6;
  int iVar7;
  wchar_t *pwVar8;
  EDS_MoneyType EVar9;
  EDS_MoneyType local_res8 [8];
  FName local_res18;
  FString local_18;
  
  FVar3 = TransformIndexToName<enum_EDS_ItemEnchantData>(this,(EDS_ItemEnchantData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar8);
  this_00 = StaticEnum<enum_EDS_MoneyType>();
  EVar9 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res18,iVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar6 = UEnum::GetValueByName(this_00,*pFVar5,None);
    EVar9 = (EDS_MoneyType)lVar6;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar9;
}

// GetData<__int64,enum_EDS_CommonAccelBasePopupData> @ 14bcda2e0

long64 __thiscall
FDS_DataContainer::GetData<__int64,enum_EDS_CommonAccelBasePopupData>
          (FDS_DataContainer *this,EDS_CommonAccelBasePopupData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  longlong lVar5;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  FVar3 = TransformIndexToName<enum_EDS_CommonAccelBasePopupData>
                    (this,(EDS_CommonAccelBasePopupData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  lVar5 = _wtoi64(_Str);
  return lVar5;
}

// GetData<__int64,enum_EDS_ItemRepairData> @ 14bcda350

long64 __thiscall
FDS_DataContainer::GetData<__int64,enum_EDS_ItemRepairData>
          (FDS_DataContainer *this,EDS_ItemRepairData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  longlong lVar5;
  wchar_t *_Str;
  
  FVar3 = TransformIndexToName<enum_EDS_ItemRepairData>(this,RepairedDurabilityPercent);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  lVar5 = _wtoi64(_Str);
  return lVar5;
}

// GetData<unsigned___int64,enum_EDS_CookingData> @ 14bcda3c0

ulong64 __thiscall
FDS_DataContainer::GetData<unsigned___int64,enum_EDS_CookingData>
          (FDS_DataContainer *this,EDS_CookingData param_1)

{
  int iVar1;
  FName FVar2;
  uint uVar3;
  UEnum *this_00;
  FString *pFVar4;
  ulonglong uVar5;
  longlong lVar6;
  FName *pFVar7;
  wchar_t *_Str;
  TPairInitializer<int_const_&,FName_const_&> local_res8;
  FName local_res18;
  FName local_res20;
  FName **local_28;
  FName *local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_CookingData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  _Str = L"";
  local_res8.Value._0_4_ = param_1;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar6 = 0x154cf7f38;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar6 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - SuccessRateStyleID & param_1) * 4);
    while (iVar1 != -1) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(EDS_CookingData *)
           (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
            ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == param_1) {
        pFVar7 = (FName *)(lVar6 + 4);
        if (lVar6 == 0) {
          pFVar7 = (FName *)0x0;
        }
        if (pFVar7 != (FName *)0x0) {
          local_res18 = *pFVar7;
          goto LAB_14bcda4da;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_CookingData>();
  if (this_00 == (UEnum *)0x0) {
    ::FName::FName(&local_res18,L"");
  }
  else {
    UEnum::GetNameByValue(this_00,(long64)&local_res20);
    local_28 = &local_res8.Value;
    local_20 = &local_res20;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
                   ::__l2::EnumNameCache,&local_res8,(bool *)&local_28);
    local_res18 = local_res20;
  }
LAB_14bcda4da:
  FVar2 = local_res18;
  uVar3 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + FVar2.Number,&local_res18);
  if ((pFVar4->Data).ArrayNum != 0) {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar5 = _wcstoui64(_Str,(wchar_t **)0x0,0);
  return uVar5;
}

// GetData<unsigned___int64,enum_EDS_ItemRepairData> @ 14bcda550

ulong64 __thiscall
FDS_DataContainer::GetData<unsigned___int64,enum_EDS_ItemRepairData>
          (FDS_DataContainer *this,EDS_ItemRepairData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  ulonglong uVar5;
  wchar_t *_Str;
  
  FVar3 = TransformIndexToName<enum_EDS_ItemRepairData>(this,RepairedDurabilityPercent);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar5 = _wcstoui64(_Str,(wchar_t **)0x0,0);
  return uVar5;
}

// GetListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData> @ 14bcdb450

TArray<EDS_ModelEventItemRepair,TSizedDefaultAllocator<32>_> * __thiscall
FDS_DataContainer::GetListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
          (FDS_DataContainer *this,
          TArray<EDS_ModelEventItemRepair,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EDS_ItemRepairData param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  UEnum *this_00;
  FName *pFVar9;
  long64 lVar10;
  TArray<EDS_ModelEventItemRepair,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 *puVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res20;
  undefined4 local_48 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TransformIndexToName<enum_EDS_ItemRepairData>(this,(EDS_ItemRepairData)&local_res10);
  FVar3 = local_res10;
  uVar5 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  if (*(int *)&(this->ListDataMap).field_0x8 != *(int *)&(this->ListDataMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->ListDataMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->ListDataMap).field_0x38;
    }
    iVar6 = *(int *)(puVar12 +
                    (ulonglong)(*(int *)&(this->ListDataMap).field_0x48 - 1U & FVar3.Number + uVar5)
                    * 4);
    if (iVar6 != -1) {
      while (*(FName *)((longlong)iVar6 * 0x20 + *(longlong *)&this->ListDataMap) != FVar3) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)&this->ListDataMap);
        if (iVar6 == -1) {
          return __return_storage_ptr__;
        }
      }
      pTVar8 = TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
               ::FindChecked((TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->ListDataMap,local_res10);
      iVar6 = pTVar8->ArrayNum;
      pFVar14 = (pTVar8->AllocatorInstance).Data;
      pFVar13 = pFVar14 + (longlong)iVar6 * 0x10;
      while( true ) {
        if (pTVar8->ArrayNum != iVar6) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar14 == pFVar13) break;
        this_00 = StaticEnum<enum_EDS_ModelEventItemRepair>();
        if (this_00 != (UEnum *)0x0) {
          iVar7 = *(int *)(pFVar14 + 8) + -1;
          if (*(int *)(pFVar14 + 8) == 0) {
            iVar7 = 0;
          }
          pFVar9 = ::FName::FName(&local_res20,iVar7,*(wchar_t **)pFVar14,FNAME_Add);
          lVar10 = UEnum::GetValueByName(this_00,*pFVar9,None);
          local_48[0] = (undefined4)lVar10;
        }
        pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 <
             pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar11 = (TArray<EDS_ModelEventItemRepair,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar11;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        pFVar14 = pFVar14 + 0x10;
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
             local_48[0];
      }
    }
  }
  return __return_storage_ptr__;
}

// GetListData<__int64,enum_EDS_InventoryBagData> @ 14bcdb660

TArray<__int64,TSizedDefaultAllocator<32>_> * __thiscall
FDS_DataContainer::GetListData<__int64,enum_EDS_InventoryBagData>
          (FDS_DataContainer *this,
          TArray<__int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EDS_InventoryBagData param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 *puVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  FName local_res10;
  long64 local_48;
  TStringView<wchar_t> local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TransformIndexToName<enum_EDS_InventoryBagData>(this,(EDS_InventoryBagData)&local_res10);
  FVar3 = local_res10;
  uVar5 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  if (*(int *)&(this->ListDataMap).field_0x8 != *(int *)&(this->ListDataMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ListDataMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ListDataMap).field_0x38;
    }
    iVar6 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->ListDataMap).field_0x48 - 1U & FVar3.Number + uVar5)
                    * 4);
    if (iVar6 != -1) {
      while (*(FName *)((longlong)iVar6 * 0x20 + *(longlong *)&this->ListDataMap) != FVar3) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)&this->ListDataMap);
        if (iVar6 == -1) {
          return __return_storage_ptr__;
        }
      }
      pTVar8 = TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
               ::FindChecked((TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->ListDataMap,local_res10);
      iVar6 = pTVar8->ArrayNum;
      pFVar11 = (pTVar8->AllocatorInstance).Data;
      pFVar12 = pFVar11 + (longlong)iVar6 * 0x10;
      while( true ) {
        if (pTVar8->ArrayNum != iVar6) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar11 == pFVar12) break;
        local_40.DataPtr = *(wchar_t **)pFVar11;
        local_40.Size = *(int *)(pFVar11 + 8) + -1;
        if (*(int *)(pFVar11 + 8) == 0) {
          local_40.Size = 0;
        }
        ::LexFromString(&local_48,&local_40);
        pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar9;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        pFVar11 = pFVar11 + 0x10;
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(long64 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             local_48;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetListData<__int64,enum_EDS_ItemListData> @ 14bcdb860

TArray<__int64,TSizedDefaultAllocator<32>_> * __thiscall
FDS_DataContainer::GetListData<__int64,enum_EDS_ItemListData>
          (FDS_DataContainer *this,
          TArray<__int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EDS_ItemListData param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 *puVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  FName local_res10;
  long64 local_48;
  TStringView<wchar_t> local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)&local_res10);
  FVar3 = local_res10;
  uVar5 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  if (*(int *)&(this->ListDataMap).field_0x8 != *(int *)&(this->ListDataMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ListDataMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ListDataMap).field_0x38;
    }
    iVar6 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->ListDataMap).field_0x48 - 1U & FVar3.Number + uVar5)
                    * 4);
    if (iVar6 != -1) {
      while (*(FName *)((longlong)iVar6 * 0x20 + *(longlong *)&this->ListDataMap) != FVar3) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)&this->ListDataMap);
        if (iVar6 == -1) {
          return __return_storage_ptr__;
        }
      }
      pTVar8 = TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
               ::FindChecked((TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->ListDataMap,local_res10);
      iVar6 = pTVar8->ArrayNum;
      pFVar11 = (pTVar8->AllocatorInstance).Data;
      pFVar12 = pFVar11 + (longlong)iVar6 * 0x10;
      while( true ) {
        if (pTVar8->ArrayNum != iVar6) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar11 == pFVar12) break;
        local_40.DataPtr = *(wchar_t **)pFVar11;
        local_40.Size = *(int *)(pFVar11 + 8) + -1;
        if (*(int *)(pFVar11 + 8) == 0) {
          local_40.Size = 0;
        }
        ::LexFromString(&local_48,&local_40);
        pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar9;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        pFVar11 = pFVar11 + 0x10;
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(long64 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             local_48;
      }
    }
  }
  return __return_storage_ptr__;
}

// IsData<enum_EDS_InventoryBagData> @ 14bcdce40

bool __thiscall
FDS_DataContainer::IsData<enum_EDS_InventoryBagData>
          (FDS_DataContainer *this,EDS_InventoryBagData param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  undefined1 *puVar5;
  undefined1 local_res8 [8];
  
  FVar4 = TransformIndexToName<enum_EDS_InventoryBagData>(this,(EDS_InventoryBagData)local_res8);
  lVar1 = *(longlong *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(this->DataMap).field_0x8 != *(int *)&(this->DataMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->DataMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->DataMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->DataMap).field_0x48 - 1U &
                              (int)((ulonglong)lVar1 >> 0x20) + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&this->DataMap) == lVar1)
        goto LAB_14bcdcebb;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->DataMap);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14bcdcebb:
  return iVar3 != -1;
}

// IsData<enum_EDS_ItemFilterData> @ 14bcdcee0

bool __thiscall
FDS_DataContainer::IsData<enum_EDS_ItemFilterData>
          (FDS_DataContainer *this,EDS_ItemFilterData param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  undefined1 *puVar5;
  undefined1 local_res8 [8];
  
  FVar4 = TransformIndexToName<enum_EDS_ItemFilterData>(this,(EDS_ItemFilterData)local_res8);
  lVar1 = *(longlong *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(this->DataMap).field_0x8 != *(int *)&(this->DataMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->DataMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->DataMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->DataMap).field_0x48 - 1U &
                              (int)((ulonglong)lVar1 >> 0x20) + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&this->DataMap) == lVar1)
        goto LAB_14bcdcf5b;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->DataMap);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14bcdcf5b:
  return iVar3 != -1;
}

// IsData<enum_EDS_ItemListData> @ 14bcdcf80

bool __thiscall
FDS_DataContainer::IsData<enum_EDS_ItemListData>(FDS_DataContainer *this,EDS_ItemListData param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  undefined1 *puVar5;
  undefined1 local_res8 [8];
  
  FVar4 = TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)local_res8);
  lVar1 = *(longlong *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(this->DataMap).field_0x8 != *(int *)&(this->DataMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->DataMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->DataMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->DataMap).field_0x48 - 1U &
                              (int)((ulonglong)lVar1 >> 0x20) + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&this->DataMap) == lVar1)
        goto LAB_14bcdcffb;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->DataMap);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14bcdcffb:
  return iVar3 != -1;
}

// IsListData<enum_EDS_ItemListData> @ 14bcdd020

bool __thiscall
FDS_DataContainer::IsListData<enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  undefined1 *puVar5;
  undefined1 local_res8 [8];
  
  FVar4 = TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)local_res8);
  lVar1 = *(longlong *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(this->ListDataMap).field_0x8 != *(int *)&(this->ListDataMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ListDataMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ListDataMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ListDataMap).field_0x48 - 1U &
                              (int)((ulonglong)lVar1 >> 0x20) + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&this->ListDataMap) == lVar1)
        goto LAB_14bcdd0ab;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->ListDataMap);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14bcdd0ab:
  return iVar3 != -1;
}

// IsListData<__int64,enum_EDS_ItemListData> @ 14bcdd0d0

bool __thiscall
FDS_DataContainer::IsListData<__int64,enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1,long64 param_2)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  undefined1 *puVar4;
  FName local_res8;
  FString local_18;
  
  TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)&local_res8);
  FVar1 = local_res8;
  uVar2 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  if (*(int *)&(this->ListDataMap).field_0x8 != *(int *)&(this->ListDataMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ListDataMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ListDataMap).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ListDataMap).field_0x48 - 1U & FVar1.Number + uVar2)
                              * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)((longlong)iVar3 * 0x20 + *(longlong *)&this->ListDataMap) == FVar1) {
          this_00 = TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindChecked((TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                                   *)&this->ListDataMap,local_res8);
          ::FString::PrintfImpl(&local_18,L"%lld");
          iVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Find(this_00,&local_18);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          return iVar3 != -1;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->ListDataMap);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// SetData<int,enum_EDS_InventoryBagData> @ 14bcdf920

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_InventoryBagData>
          (FDS_DataContainer *this,EDS_InventoryBagData param_1,int param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar4 = TransformIndexToName<enum_EDS_InventoryBagData>(this,(EDS_InventoryBagData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<int,enum_EDS_InventoryBagTabBtnData> @ 14bcdf9e0

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_InventoryBagTabBtnData>
          (FDS_DataContainer *this,EDS_InventoryBagTabBtnData param_1,int param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar4 = TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                    (this,(EDS_InventoryBagTabBtnData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<int,enum_EDS_InventoryData> @ 14bcdfaa0

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_InventoryData>
          (FDS_DataContainer *this,EDS_InventoryData param_1,int param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar4 = TransformIndexToName<enum_EDS_InventoryData>(this,(EDS_InventoryData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<int,enum_EDS_ItemDismantleData> @ 14bcdfb60

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_ItemDismantleData>
          (FDS_DataContainer *this,EDS_ItemDismantleData param_1,int param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar4 = TransformIndexToName<enum_EDS_ItemDismantleData>(this,(EDS_ItemDismantleData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<int,enum_EDS_ItemEnchantData> @ 14bcdfc20

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_ItemEnchantData>
          (FDS_DataContainer *this,EDS_ItemEnchantData param_1,int param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar4 = TransformIndexToName<enum_EDS_ItemEnchantData>(this,(EDS_ItemEnchantData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<int,enum_EDS_ItemEnchantOptionData> @ 14bcdfce0

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_ItemEnchantOptionData>
          (FDS_DataContainer *this,EDS_ItemEnchantOptionData param_1,int param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar4 = TransformIndexToName<enum_EDS_ItemEnchantOptionData>
                    (this,(EDS_ItemEnchantOptionData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<int,enum_EDS_ItemGemPopupData> @ 14bcdfda0

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_ItemGemPopupData>
          (FDS_DataContainer *this,EDS_ItemGemPopupData param_1,int param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar4 = TransformIndexToName<enum_EDS_ItemGemPopupData>(this,(EDS_ItemGemPopupData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<int,enum_EDS_ItemGemSocketSlotData> @ 14bcdfe60

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_ItemGemSocketSlotData>
          (FDS_DataContainer *this,EDS_ItemGemSocketSlotData param_1,int param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar4 = TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                    (this,(EDS_ItemGemSocketSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<int,enum_EDS_ItemImplEnchantResultData> @ 14bcdff20

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_ItemImplEnchantResultData>
          (FDS_DataContainer *this,EDS_ItemImplEnchantResultData param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  uint uVar4;
  UEnum *this_00;
  FString *pFVar5;
  longlong lVar6;
  FName *pFVar7;
  FName local_res8;
  EDS_ItemImplEnchantResultData local_res10 [2];
  TPairInitializer<int_const_&,FName_const_&> local_res18;
  FString local_48;
  EDS_ItemImplEnchantResultData *local_38;
  FName **local_30;
  
  ::FString::PrintfImpl(&local_48,L"%d");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemImplEnchantResultData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_res10[0] = param_1;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar6 = 0x154cf81b8;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar6 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - PrefixID & param_1) * 4);
    while (iVar1 != -1) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(EDS_ItemImplEnchantResultData *)
           (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
            ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == param_1) {
        pFVar7 = (FName *)(lVar6 + 4);
        if (lVar6 == 0) {
          pFVar7 = (FName *)0x0;
        }
        if (pFVar7 != (FName *)0x0) {
          local_res8 = *pFVar7;
          goto LAB_14bce003f;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemImplEnchantResultData>();
  if (this_00 == (UEnum *)0x0) {
    ::FName::FName(&local_res8,L"");
  }
  else {
    UEnum::GetNameByValue(this_00,(long64)&local_res18.Value);
    local_38 = local_res10;
    local_30 = &local_res18.Value;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
                   ::__l2::EnumNameCache,&local_res18,(bool *)&local_38);
    local_res8 = (FName)local_res18.Value;
  }
LAB_14bce003f:
  FVar3 = local_res8;
  uVar4 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar4 + FVar3.Number,&local_res8);
  if (pFVar5 != &local_48) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_48.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<int,enum_EDS_ItemListData> @ 14bce00e0

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1,int param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar4 = TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<int,enum_EDS_ItemRepairData> @ 14bce01a0

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_ItemRepairData>
          (FDS_DataContainer *this,EDS_ItemRepairData param_1,int param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar4 = TransformIndexToName<enum_EDS_ItemRepairData>(this,(EDS_ItemRepairData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<int,enum_EDS_StatusSlotData> @ 14bce0260

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_StatusSlotData>
          (FDS_DataContainer *this,EDS_StatusSlotData param_1,int param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar4 = TransformIndexToName<enum_EDS_StatusSlotData>(this,(EDS_StatusSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<float,enum_EDS_CommonQuantityControlData> @ 14bce0320

void __thiscall
FDS_DataContainer::SetData<float,enum_EDS_CommonQuantityControlData>
          (FDS_DataContainer *this,EDS_CommonQuantityControlData param_1,float param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%f");
  FVar4 = TransformIndexToName<enum_EDS_CommonQuantityControlData>
                    (this,(EDS_CommonQuantityControlData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<FDS_Text,enum_EDS_CommonIconTextButtonData> @ 14bce03e0

void __thiscall
FDS_DataContainer::SetData<FDS_Text,enum_EDS_CommonIconTextButtonData>
          (FDS_DataContainer *this,EDS_CommonIconTextButtonData param_1,FDS_Text *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  uint uVar3;
  FText *this_00;
  FString *pFVar4;
  FName FVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FText local_28;
  
  this_00 = FDS_Text::GetText(param_2,&local_28);
  pFVar4 = FText::ToString(this_00);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = (pFVar4->Data).ArrayNum;
  lVar6 = (longlong)local_30;
  pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,pFVar1,lVar6 * 2);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  FVar5 = TransformIndexToName<enum_EDS_CommonIconTextButtonData>
                    (this,(EDS_CommonIconTextButtonData)local_res8);
  uVar2 = *(undefined8 *)FVar5;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar5);
  iVar7 = local_30 + -1;
  if (local_30 == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange(pFVar4,(wchar_t *)local_38.Data,iVar7);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(param_2->FormatArgs).AllocatorInstance.Data,
             (param_2->FormatArgs).ArrayNum);
  pFVar1 = (param_2->FormatArgs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->UniqueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetData<FDS_Text,enum_EDS_InventoryBagTabBtnData> @ 14bce0530

void __thiscall
FDS_DataContainer::SetData<FDS_Text,enum_EDS_InventoryBagTabBtnData>
          (FDS_DataContainer *this,EDS_InventoryBagTabBtnData param_1,FDS_Text *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  uint uVar3;
  FText *this_00;
  FString *pFVar4;
  FName FVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FText local_28;
  
  this_00 = FDS_Text::GetText(param_2,&local_28);
  pFVar4 = FText::ToString(this_00);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = (pFVar4->Data).ArrayNum;
  lVar6 = (longlong)local_30;
  pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,pFVar1,lVar6 * 2);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  FVar5 = TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                    (this,(EDS_InventoryBagTabBtnData)local_res8);
  uVar2 = *(undefined8 *)FVar5;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar5);
  iVar7 = local_30 + -1;
  if (local_30 == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange(pFVar4,(wchar_t *)local_38.Data,iVar7);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(param_2->FormatArgs).AllocatorInstance.Data,
             (param_2->FormatArgs).ArrayNum);
  pFVar1 = (param_2->FormatArgs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->UniqueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetData<FString,enum_EDS_CommonQuantityControlData> @ 14bce0680

void __thiscall
FDS_DataContainer::SetData<FString,enum_EDS_CommonQuantityControlData>
          (FDS_DataContainer *this,EDS_CommonQuantityControlData param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  uint uVar4;
  FName FVar5;
  FString *pFVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  iVar1 = (param_2->Data).ArrayNum;
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_28,iVar1,&local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
  }
  FVar5 = TransformIndexToName<enum_EDS_CommonQuantityControlData>
                    (this,(EDS_CommonQuantityControlData)local_res8);
  uVar3 = *(undefined8 *)FVar5;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar4 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar5);
  if (pFVar6 != &local_28) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar6->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// SetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData> @ 14bce07b0

void __thiscall
FDS_DataContainer::SetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
          (FDS_DataContainer *this,EDS_InventoryBagData param_1,EDS_BagGroupType param_2)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_BagGroupType>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)param_2);
  }
  FVar3 = TransformIndexToName<enum_EDS_InventoryBagData>(this,(EDS_InventoryBagData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<enum_EDS_BagType,enum_EDS_InventoryBagData> @ 14bce0870

void __thiscall
FDS_DataContainer::SetData<enum_EDS_BagType,enum_EDS_InventoryBagData>
          (FDS_DataContainer *this,EDS_InventoryBagData param_1,EDS_BagType param_2)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_BagType>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)param_2);
  }
  FVar3 = TransformIndexToName<enum_EDS_InventoryBagData>(this,(EDS_InventoryBagData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData> @ 14bce0930

void __thiscall
FDS_DataContainer::SetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData>
          (FDS_DataContainer *this,EDS_ItemEnchantOptionData param_1,EDS_EnchantOptionState param_2)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_EnchantOptionState>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(longlong)(int)param_2);
  }
  FVar3 = TransformIndexToName<enum_EDS_ItemEnchantOptionData>
                    (this,(EDS_ItemEnchantOptionData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<enum_EDS_FilterType,enum_EDS_ItemListData> @ 14bce09f0

void __thiscall
FDS_DataContainer::SetData<enum_EDS_FilterType,enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1,EDS_FilterType param_2)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_FilterType>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)param_2);
  }
  FVar3 = TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<enum_EDS_InventoryType,enum_EDS_ItemListData> @ 14bce0ab0

void __thiscall
FDS_DataContainer::SetData<enum_EDS_InventoryType,enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1,EDS_InventoryType param_2)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_InventoryType>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)param_2);
  }
  FVar3 = TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<enum_EDS_ItemListType,enum_EDS_ItemListData> @ 14bce0b70

void __thiscall
FDS_DataContainer::SetData<enum_EDS_ItemListType,enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1,EDS_ItemListType param_2)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_ItemListType>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(longlong)(int)param_2);
  }
  FVar3 = TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData> @ 14bce0c30

void __thiscall
FDS_DataContainer::SetData<enum_EDS_ItemRepairType,enum_EDS_ItemRepairData>
          (FDS_DataContainer *this,EDS_ItemRepairData param_1,EDS_ItemRepairType param_2)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_ItemRepairType>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)param_2);
  }
  FVar3 = TransformIndexToName<enum_EDS_ItemRepairData>(this,(EDS_ItemRepairData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<enum_EDS_ItemSlotStateType,enum_EDS_ItemListData> @ 14bce0cf0

void __thiscall
FDS_DataContainer::SetData<enum_EDS_ItemSlotStateType,enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1,EDS_ItemSlotStateType param_2)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_ItemSlotStateType>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)param_2);
  }
  FVar3 = TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<enum_EDS_MoneyType,enum_EDS_ItemEnchantData> @ 14bce0db0

void __thiscall
FDS_DataContainer::SetData<enum_EDS_MoneyType,enum_EDS_ItemEnchantData>
          (FDS_DataContainer *this,EDS_ItemEnchantData param_1,EDS_MoneyType param_2)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_MoneyType>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)param_2);
  }
  FVar3 = TransformIndexToName<enum_EDS_ItemEnchantData>(this,(EDS_ItemEnchantData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<enum_EDS_SortOrder,enum_EDS_InventoryBagData> @ 14bce0e70

void __thiscall
FDS_DataContainer::SetData<enum_EDS_SortOrder,enum_EDS_InventoryBagData>
          (FDS_DataContainer *this,EDS_InventoryBagData param_1,EDS_SortOrder param_2)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_SortOrder>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(longlong)(int)param_2);
  }
  FVar3 = TransformIndexToName<enum_EDS_InventoryBagData>(this,(EDS_InventoryBagData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<enum_EDS_SortOrder,enum_EDS_ItemListData> @ 14bce0f30

void __thiscall
FDS_DataContainer::SetData<enum_EDS_SortOrder,enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1,EDS_SortOrder param_2)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_SortOrder>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(longlong)(int)param_2);
  }
  FVar3 = TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<enum_EDS_SortingType,enum_EDS_InventoryBagData> @ 14bce0ff0

void __thiscall
FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_InventoryBagData>
          (FDS_DataContainer *this,EDS_InventoryBagData param_1,EDS_SortingType param_2)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_SortingType>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)param_2);
  }
  FVar3 = TransformIndexToName<enum_EDS_InventoryBagData>(this,(EDS_InventoryBagData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<enum_EDS_SortingType,enum_EDS_ItemListData> @ 14bce10b0

void __thiscall
FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1,EDS_SortingType param_2)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_SortingType>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)param_2);
  }
  FVar3 = TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<__int64,enum_EDS_ItemRepairData> @ 14bce1170

void __thiscall
FDS_DataContainer::SetData<__int64,enum_EDS_ItemRepairData>
          (FDS_DataContainer *this,EDS_ItemRepairData param_1,long64 param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%lld");
  FVar4 = TransformIndexToName<enum_EDS_ItemRepairData>(this,(EDS_ItemRepairData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<__int64,enum_EDS_StatusSlotData> @ 14bce1230

void __thiscall
FDS_DataContainer::SetData<__int64,enum_EDS_StatusSlotData>
          (FDS_DataContainer *this,EDS_StatusSlotData param_1,long64 param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%lld");
  FVar4 = TransformIndexToName<enum_EDS_StatusSlotData>(this,(EDS_StatusSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<bool,enum_EDS_CommonCheckTextData> @ 14bce12f0

void __thiscall
FDS_DataContainer::SetData<bool,enum_EDS_CommonCheckTextData>
          (FDS_DataContainer *this,EDS_CommonCheckTextData param_1,bool param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  FString local_18;
  
  pwVar6 = L"true";
  if (!param_2) {
    pwVar6 = L"false";
  }
  ::FString::FString(&local_18,pwVar6);
  FVar4 = TransformIndexToName<enum_EDS_CommonCheckTextData>
                    (this,(EDS_CommonCheckTextData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<bool,enum_EDS_InventoryBagTabBtnData> @ 14bce13c0

void __thiscall
FDS_DataContainer::SetData<bool,enum_EDS_InventoryBagTabBtnData>
          (FDS_DataContainer *this,EDS_InventoryBagTabBtnData param_1,bool param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  FString local_18;
  
  pwVar6 = L"true";
  if (!param_2) {
    pwVar6 = L"false";
  }
  ::FString::FString(&local_18,pwVar6);
  FVar4 = TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                    (this,(EDS_InventoryBagTabBtnData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<bool,enum_EDS_ItemListData> @ 14bce1490

void __thiscall
FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1,bool param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  FString local_18;
  
  pwVar6 = L"true";
  if (!param_2) {
    pwVar6 = L"false";
  }
  ::FString::FString(&local_18,pwVar6);
  FVar4 = TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<bool,enum_EDS_ItemRepairData> @ 14bce1560

void __thiscall
FDS_DataContainer::SetData<bool,enum_EDS_ItemRepairData>
          (FDS_DataContainer *this,EDS_ItemRepairData param_1,bool param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  FString local_18;
  
  pwVar6 = L"true";
  if (!param_2) {
    pwVar6 = L"false";
  }
  ::FString::FString(&local_18,pwVar6);
  FVar4 = TransformIndexToName<enum_EDS_ItemRepairData>(this,(EDS_ItemRepairData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetListData<int,enum_EDS_ItemListData> @ 14bce1630

/* WARNING: Removing unreachable block (ram,0x00014bce1799) */

void __thiscall
FDS_DataContainer::SetListData<int,enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  FString local_38;
  
  ClearListData<enum_EDS_ItemListData>(this,param_1);
  FVar8 = TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)local_res18);
  uVar3 = *(undefined8 *)FVar8;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  pTVar9 = TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ListDataMap,uVar6 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar8);
  pFVar11 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar1) break;
    ::FString::PrintfImpl(&local_38,L"%d");
    pFVar10 = (pTVar9->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar10 + (longlong)pTVar9->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar9->ArrayNum;
    if (iVar7 == pTVar9->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
      pTVar9->ArrayNum = iVar7;
    }
    pTVar9->ArrayNum = iVar7 + 1;
    pFVar10 = (pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar10 = 0;
    *(FScriptContainerElement **)pFVar10 = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar10 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar10 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    pFVar11 = pFVar11 + 4;
  }
  return;
}

// SetListData<__int64,enum_EDS_ItemListData> @ 14bce17d0

/* WARNING: Removing unreachable block (ram,0x00014bce1939) */

void __thiscall
FDS_DataContainer::SetListData<__int64,enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  FString local_38;
  
  ClearListData<enum_EDS_ItemListData>(this,param_1);
  FVar8 = TransformIndexToName<enum_EDS_ItemListData>(this,(EDS_ItemListData)local_res18);
  uVar3 = *(undefined8 *)FVar8;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  pTVar9 = TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->ListDataMap,uVar6 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar8);
  pFVar11 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<__int64_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar1) break;
    ::FString::PrintfImpl(&local_38,L"%lld");
    pFVar10 = (pTVar9->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar10 + (longlong)pTVar9->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar9->ArrayNum;
    if (iVar7 == pTVar9->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
      pTVar9->ArrayNum = iVar7;
    }
    pTVar9->ArrayNum = iVar7 + 1;
    pFVar10 = (pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar10 = 0;
    *(FScriptContainerElement **)pFVar10 = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar10 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar10 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    pFVar11 = pFVar11 + 8;
  }
  return;
}

// TransformIndexToName<enum_EDS_CommonAccelBasePopupData> @ 14bce1970

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_CommonAccelBasePopupData>
          (FDS_DataContainer *this,EDS_CommonAccelBasePopupData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_CommonAccelBasePopupData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf7df8;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_CommonAccelBasePopupData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_CommonCheckTextData> @ 14bce1af0

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_CommonCheckTextData>
          (FDS_DataContainer *this,EDS_CommonCheckTextData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonCheckTextData>(EDS_CommonCheckTextData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonCheckTextData>(EDS_CommonCheckTextData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonCheckTextData>(EDS_CommonCheckTextData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_CommonCheckTextData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonCheckTextData>(EDS_CommonCheckTextData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonCheckTextData>(EDS_CommonCheckTextData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonCheckTextData>(EDS_CommonCheckTextData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf7e98;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonCheckTextData>(EDS_CommonCheckTextData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonCheckTextData>(EDS_CommonCheckTextData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonCheckTextData>(EDS_CommonCheckTextData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonCheckTextData>(EDS_CommonCheckTextData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonCheckTextData>(EDS_CommonCheckTextData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_CommonCheckTextData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonCheckTextData>(EDS_CommonCheckTextData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_CommonIconTextButtonData> @ 14bce1c70

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_CommonIconTextButtonData>
          (FDS_DataContainer *this,EDS_CommonIconTextButtonData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_CommonIconTextButtonData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf73b8;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_CommonIconTextButtonData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_CommonQuantityControlData> @ 14bce1df0

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_CommonQuantityControlData>
          (FDS_DataContainer *this,EDS_CommonQuantityControlData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonQuantityControlData>(EDS_CommonQuantityControlData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonQuantityControlData>(EDS_CommonQuantityControlData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonQuantityControlData>(EDS_CommonQuantityControlData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_CommonQuantityControlData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonQuantityControlData>(EDS_CommonQuantityControlData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonQuantityControlData>(EDS_CommonQuantityControlData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonQuantityControlData>(EDS_CommonQuantityControlData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf7da8;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonQuantityControlData>(EDS_CommonQuantityControlData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonQuantityControlData>(EDS_CommonQuantityControlData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonQuantityControlData>(EDS_CommonQuantityControlData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonQuantityControlData>(EDS_CommonQuantityControlData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonQuantityControlData>(EDS_CommonQuantityControlData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_CommonQuantityControlData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonQuantityControlData>(EDS_CommonQuantityControlData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_InventoryBagCategoryData> @ 14bce1f70

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagCategoryData>
          (FDS_DataContainer *this,EDS_InventoryBagCategoryData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  undefined7 in_register_00000011;
  FName this_01;
  longlong lVar3;
  byte in_R8B;
  uint local_res18 [4];
  undefined8 local_28;
  uint *local_20;
  undefined8 *local_18;
  
  this_01._1_7_ = in_register_00000011;
  this_01.ComparisonIndex.Value._0_1_ = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagCategoryData>(EDS_InventoryBagCategoryData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagCategoryData>(EDS_InventoryBagCategoryData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagCategoryData>(EDS_InventoryBagCategoryData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagCategoryData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagCategoryData>(EDS_InventoryBagCategoryData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_res18[0] = (uint)in_R8B;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagCategoryData>(EDS_InventoryBagCategoryData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagCategoryData>(EDS_InventoryBagCategoryData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf8028;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagCategoryData>(EDS_InventoryBagCategoryData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagCategoryData>(EDS_InventoryBagCategoryData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + ((ulonglong)
                              (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagCategoryData>(EDS_InventoryBagCategoryData)___ptr64'
                               ::__l2::EnumNameCache._72_4_ - 1) & (ulonglong)in_R8B) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagCategoryData>(EDS_InventoryBagCategoryData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagCategoryData>(EDS_InventoryBagCategoryData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == local_res18[0]) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_InventoryBagCategoryData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagCategoryData>(EDS_InventoryBagCategoryData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 2),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_InventoryBagData> @ 14bce20f0

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
          (FDS_DataContainer *this,EDS_InventoryBagData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagData>(EDS_InventoryBagData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagData>(EDS_InventoryBagData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagData>(EDS_InventoryBagData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagData>(EDS_InventoryBagData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagData>(EDS_InventoryBagData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagData>(EDS_InventoryBagData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf7ee8;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagData>(EDS_InventoryBagData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagData>(EDS_InventoryBagData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagData>(EDS_InventoryBagData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagData>(EDS_InventoryBagData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagData>(EDS_InventoryBagData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_InventoryBagData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagData>(EDS_InventoryBagData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_InventoryBagTabBtnData> @ 14bce2270

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
          (FDS_DataContainer *this,EDS_InventoryBagTabBtnData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagTabBtnData>(EDS_InventoryBagTabBtnData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagTabBtnData>(EDS_InventoryBagTabBtnData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagTabBtnData>(EDS_InventoryBagTabBtnData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagTabBtnData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagTabBtnData>(EDS_InventoryBagTabBtnData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagTabBtnData>(EDS_InventoryBagTabBtnData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagTabBtnData>(EDS_InventoryBagTabBtnData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf7f88;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagTabBtnData>(EDS_InventoryBagTabBtnData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagTabBtnData>(EDS_InventoryBagTabBtnData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagTabBtnData>(EDS_InventoryBagTabBtnData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagTabBtnData>(EDS_InventoryBagTabBtnData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagTabBtnData>(EDS_InventoryBagTabBtnData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_InventoryBagTabBtnData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagTabBtnData>(EDS_InventoryBagTabBtnData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_InventoryData> @ 14bce23f0

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryData>
          (FDS_DataContainer *this,EDS_InventoryData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryData>(EDS_InventoryData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryData>(EDS_InventoryData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryData>(EDS_InventoryData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryData>(EDS_InventoryData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryData>(EDS_InventoryData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryData>(EDS_InventoryData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf7fd8;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryData>(EDS_InventoryData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryData>(EDS_InventoryData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryData>(EDS_InventoryData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryData>(EDS_InventoryData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryData>(EDS_InventoryData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_InventoryData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryData>(EDS_InventoryData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_ItemDismantleData> @ 14bce2570

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_ItemDismantleData>
          (FDS_DataContainer *this,EDS_ItemDismantleData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemDismantleData>(EDS_ItemDismantleData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemDismantleData>(EDS_ItemDismantleData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemDismantleData>(EDS_ItemDismantleData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemDismantleData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemDismantleData>(EDS_ItemDismantleData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemDismantleData>(EDS_ItemDismantleData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemDismantleData>(EDS_ItemDismantleData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf80c8;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemDismantleData>(EDS_ItemDismantleData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemDismantleData>(EDS_ItemDismantleData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemDismantleData>(EDS_ItemDismantleData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemDismantleData>(EDS_ItemDismantleData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemDismantleData>(EDS_ItemDismantleData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemDismantleData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemDismantleData>(EDS_ItemDismantleData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_ItemEnchantData> @ 14bce26f0

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantData>
          (FDS_DataContainer *this,EDS_ItemEnchantData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf8118;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemEnchantData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_ItemEnchantOptionData> @ 14bce2870

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantOptionData>
          (FDS_DataContainer *this,EDS_ItemEnchantOptionData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantOptionData>(EDS_ItemEnchantOptionData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantOptionData>(EDS_ItemEnchantOptionData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantOptionData>(EDS_ItemEnchantOptionData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantOptionData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantOptionData>(EDS_ItemEnchantOptionData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantOptionData>(EDS_ItemEnchantOptionData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantOptionData>(EDS_ItemEnchantOptionData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf8168;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantOptionData>(EDS_ItemEnchantOptionData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantOptionData>(EDS_ItemEnchantOptionData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantOptionData>(EDS_ItemEnchantOptionData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantOptionData>(EDS_ItemEnchantOptionData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantOptionData>(EDS_ItemEnchantOptionData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemEnchantOptionData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantOptionData>(EDS_ItemEnchantOptionData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_ItemFilterData> @ 14bce29f0

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_ItemFilterData>
          (FDS_DataContainer *this,EDS_ItemFilterData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemFilterData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf7408;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemFilterData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemFilterData>(EDS_ItemFilterData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_ItemGemPopupData> @ 14bce2b70

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemPopupData>
          (FDS_DataContainer *this,EDS_ItemGemPopupData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemPopupData>(EDS_ItemGemPopupData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemPopupData>(EDS_ItemGemPopupData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemPopupData>(EDS_ItemGemPopupData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemPopupData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemPopupData>(EDS_ItemGemPopupData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemPopupData>(EDS_ItemGemPopupData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemPopupData>(EDS_ItemGemPopupData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf8208;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemPopupData>(EDS_ItemGemPopupData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemPopupData>(EDS_ItemGemPopupData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemPopupData>(EDS_ItemGemPopupData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemPopupData>(EDS_ItemGemPopupData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemPopupData>(EDS_ItemGemPopupData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemGemPopupData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemPopupData>(EDS_ItemGemPopupData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_ItemGemSocketSlotData> @ 14bce2cf0

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
          (FDS_DataContainer *this,EDS_ItemGemSocketSlotData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  undefined7 in_register_00000011;
  FName this_01;
  longlong lVar3;
  byte in_R8B;
  uint local_res18 [4];
  undefined8 local_28;
  uint *local_20;
  undefined8 *local_18;
  
  this_01._1_7_ = in_register_00000011;
  this_01.ComparisonIndex.Value._0_1_ = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemSocketSlotData>(EDS_ItemGemSocketSlotData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemSocketSlotData>(EDS_ItemGemSocketSlotData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemSocketSlotData>(EDS_ItemGemSocketSlotData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemSocketSlotData>(EDS_ItemGemSocketSlotData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_res18[0] = (uint)in_R8B;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemSocketSlotData>(EDS_ItemGemSocketSlotData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemSocketSlotData>(EDS_ItemGemSocketSlotData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf8258;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemSocketSlotData>(EDS_ItemGemSocketSlotData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemSocketSlotData>(EDS_ItemGemSocketSlotData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + ((ulonglong)
                              (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemSocketSlotData>(EDS_ItemGemSocketSlotData)___ptr64'
                               ::__l2::EnumNameCache._72_4_ - 1) & (ulonglong)in_R8B) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemSocketSlotData>(EDS_ItemGemSocketSlotData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemSocketSlotData>(EDS_ItemGemSocketSlotData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == local_res18[0]) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemGemSocketSlotData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemGemSocketSlotData>(EDS_ItemGemSocketSlotData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 2),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_ItemListData> @ 14bce2e70

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>
          (FDS_DataContainer *this,EDS_ItemListData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemListData>(EDS_ItemListData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemListData>(EDS_ItemListData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemListData>(EDS_ItemListData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemListData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemListData>(EDS_ItemListData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemListData>(EDS_ItemListData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemListData>(EDS_ItemListData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf7e48;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemListData>(EDS_ItemListData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemListData>(EDS_ItemListData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemListData>(EDS_ItemListData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemListData>(EDS_ItemListData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemListData>(EDS_ItemListData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemListData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemListData>(EDS_ItemListData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_ItemRepairData> @ 14bce2ff0

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
          (FDS_DataContainer *this,EDS_ItemRepairData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  undefined7 in_register_00000011;
  FName this_01;
  longlong lVar3;
  byte in_R8B;
  uint local_res18 [4];
  undefined8 local_28;
  uint *local_20;
  undefined8 *local_18;
  
  this_01._1_7_ = in_register_00000011;
  this_01.ComparisonIndex.Value._0_1_ = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemRepairData>(EDS_ItemRepairData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemRepairData>(EDS_ItemRepairData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemRepairData>(EDS_ItemRepairData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemRepairData>(EDS_ItemRepairData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_res18[0] = (uint)in_R8B;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemRepairData>(EDS_ItemRepairData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemRepairData>(EDS_ItemRepairData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf7d08;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemRepairData>(EDS_ItemRepairData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemRepairData>(EDS_ItemRepairData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + ((ulonglong)
                              (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemRepairData>(EDS_ItemRepairData)___ptr64'
                               ::__l2::EnumNameCache._72_4_ - 1) & (ulonglong)in_R8B) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemRepairData>(EDS_ItemRepairData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemRepairData>(EDS_ItemRepairData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == local_res18[0]) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemRepairData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemRepairData>(EDS_ItemRepairData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 2),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_StatusSlotData> @ 14bce3170

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_StatusSlotData>
          (FDS_DataContainer *this,EDS_StatusSlotData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_StatusSlotData>(EDS_StatusSlotData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_StatusSlotData>(EDS_StatusSlotData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_StatusSlotData>(EDS_StatusSlotData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_StatusSlotData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_StatusSlotData>(EDS_StatusSlotData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_StatusSlotData>(EDS_StatusSlotData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_StatusSlotData>(EDS_StatusSlotData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf8078;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_StatusSlotData>(EDS_StatusSlotData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_StatusSlotData>(EDS_StatusSlotData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_StatusSlotData>(EDS_StatusSlotData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_StatusSlotData>(EDS_StatusSlotData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_StatusSlotData>(EDS_StatusSlotData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_StatusSlotData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_StatusSlotData>(EDS_StatusSlotData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// FDS_DataContainer @ 14bce3a90

FDS_DataContainer * __thiscall
FDS_DataContainer::FDS_DataContainer(FDS_DataContainer *this,FDS_DataContainer *param_1)

{
  TMap<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  undefined1 *puVar1;
  
  *(undefined8 *)&this->DataMap = 0;
  *(undefined8 *)&(this->DataMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataMap).field_0x20 = 0;
  *(undefined4 *)&(this->DataMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataMap).field_0x34 = 0;
  *(undefined8 *)&(this->DataMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataMap).field_0x48 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)this,(TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                     *)param_1);
  this_00 = &this->ListDataMap;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ListDataMap).field_0x8 = 0;
  puVar1 = &(this->ListDataMap).field_0x48;
  *(undefined8 *)&(this->ListDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ListDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ListDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ListDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ListDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->ListDataMap).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_00 != &param_1->ListDataMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ListDataMap).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->ListDataMap).field_0x38,
               *(int *)&(param_1->ListDataMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->ListDataMap);
  }
  return this;
}

// ~FDS_DataContainer @ 14bce5bc0

void __thiscall FDS_DataContainer::~FDS_DataContainer(FDS_DataContainer *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ListDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ListDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ListDataMap);
  *(undefined4 *)&(this->DataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator= @ 14bce61f0

FDS_DataContainer * __thiscall
FDS_DataContainer::operator=(FDS_DataContainer *this,FDS_DataContainer *param_1)

{
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)this,(TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                     *)param_1);
  if (&this->ListDataMap != &param_1->ListDataMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ListDataMap).field_0x38,
               (int *)&(this->ListDataMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->ListDataMap).field_0x38,
               *(int *)&(param_1->ListDataMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->ListDataMap,
                (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->ListDataMap);
  }
  return this;
}

// GetData<int,enum_EDS_GameOptionData> @ 14bd3a010

int __thiscall
FDS_DataContainer::GetData<int,enum_EDS_GameOptionData>
          (FDS_DataContainer *this,EDS_GameOptionData param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  UEnum *this_00;
  FString *pFVar4;
  longlong lVar5;
  FName *pFVar6;
  wchar_t *_Str;
  TPairInitializer<int_const_&,FName_const_&> local_res8;
  FName local_res18;
  FName local_res20;
  FName **local_28;
  FName *local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_GameOptionData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  _Str = L"";
  local_res8.Value._0_4_ = param_1;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar5 = 0x154cf84a8;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar5 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - GameOptionValueIndex & param_1) * 4);
    while (iVar3 != -1) {
      lVar5 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar3 * 0x14;
      if (*(EDS_GameOptionData *)
           (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
            ::__l2::EnumNameCache._0_8_ + (longlong)iVar3 * 0x14) == param_1) {
        pFVar6 = (FName *)(lVar5 + 4);
        if (lVar5 == 0) {
          pFVar6 = (FName *)0x0;
        }
        if (pFVar6 != (FName *)0x0) {
          local_res18 = *pFVar6;
          goto LAB_14bd3a12a;
        }
        break;
      }
      iVar3 = *(int *)(lVar5 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_GameOptionData>();
  if (this_00 == (UEnum *)0x0) {
    ::FName::FName(&local_res18,L"");
  }
  else {
    UEnum::GetNameByValue(this_00,(long64)&local_res20);
    local_28 = &local_res8.Value;
    local_20 = &local_res20;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
                   ::__l2::EnumNameCache,&local_res8,(bool *)&local_28);
    local_res18 = local_res20;
  }
LAB_14bd3a12a:
  FVar1 = local_res18;
  uVar2 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + FVar1.Number,&local_res18);
  if ((pFVar4->Data).ArrayNum != 0) {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  return iVar3;
}

// GetData<int,enum_EDS_ItemImplEnchantResultData> @ 14bd3a1a0

int __thiscall
FDS_DataContainer::GetData<int,enum_EDS_ItemImplEnchantResultData>
          (FDS_DataContainer *this,EDS_ItemImplEnchantResultData param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  UEnum *this_00;
  FString *pFVar4;
  longlong lVar5;
  FName *pFVar6;
  wchar_t *_Str;
  TPairInitializer<int_const_&,FName_const_&> local_res8;
  FName local_res18;
  FName local_res20;
  FName **local_28;
  FName *local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemImplEnchantResultData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  _Str = L"";
  local_res8.Value._0_4_ = param_1;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar5 = 0x154cf81b8;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar5 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - PrefixID & param_1) * 4);
    while (iVar3 != -1) {
      lVar5 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar3 * 0x14;
      if (*(EDS_ItemImplEnchantResultData *)
           (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
            ::__l2::EnumNameCache._0_8_ + (longlong)iVar3 * 0x14) == param_1) {
        pFVar6 = (FName *)(lVar5 + 4);
        if (lVar5 == 0) {
          pFVar6 = (FName *)0x0;
        }
        if (pFVar6 != (FName *)0x0) {
          local_res18 = *pFVar6;
          goto LAB_14bd3a2ba;
        }
        break;
      }
      iVar3 = *(int *)(lVar5 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemImplEnchantResultData>();
  if (this_00 == (UEnum *)0x0) {
    ::FName::FName(&local_res18,L"");
  }
  else {
    UEnum::GetNameByValue(this_00,(long64)&local_res20);
    local_28 = &local_res8.Value;
    local_20 = &local_res20;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplEnchantResultData>(EDS_ItemImplEnchantResultData)___ptr64'
                   ::__l2::EnumNameCache,&local_res8,(bool *)&local_28);
    local_res18 = local_res20;
  }
LAB_14bd3a2ba:
  FVar1 = local_res18;
  uVar2 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + FVar1.Number,&local_res18);
  if ((pFVar4->Data).ArrayNum != 0) {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  return iVar3;
}

// GetData<int,enum_EDS_WarehouseData> @ 14bd3a330

int __thiscall
FDS_DataContainer::GetData<int,enum_EDS_WarehouseData>
          (FDS_DataContainer *this,EDS_WarehouseData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  FVar4 = TransformIndexToName<enum_EDS_WarehouseData>(this,(EDS_WarehouseData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  return iVar3;
}

// GetData<FDS_Text,enum_EDS_CommonIconTextButtonData> @ 14bd3a3a0

FDS_Text * __thiscall
FDS_DataContainer::GetData<FDS_Text,enum_EDS_CommonIconTextButtonData>
          (FDS_DataContainer *this,FDS_Text *__return_storage_ptr__,
          EDS_CommonIconTextButtonData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  FVar3 = TransformIndexToName<enum_EDS_CommonIconTextButtonData>
                    (this,(EDS_CommonIconTextButtonData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar5);
  FDS_Text::SetTextFromUniqueString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData> @ 14bd3a470

EDS_EnchantOptionState __thiscall
FDS_DataContainer::GetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData>
          (FDS_DataContainer *this,EDS_ItemEnchantOptionData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  UEnum *this_00;
  FName *pFVar5;
  long64 lVar6;
  int iVar7;
  wchar_t *pwVar8;
  EDS_EnchantOptionState EVar9;
  EDS_EnchantOptionState local_res8 [2];
  FName local_res18;
  FString local_18;
  
  FVar3 = TransformIndexToName<enum_EDS_ItemEnchantOptionData>
                    (this,(EDS_ItemEnchantOptionData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar8);
  this_00 = StaticEnum<enum_EDS_EnchantOptionState>();
  EVar9 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res18,iVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar6 = UEnum::GetValueByName(this_00,*pFVar5,None);
    EVar9 = (EDS_EnchantOptionState)lVar6;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar9;
}

// GetData<enum_EDS_InventoryType,enum_EDS_WeightData> @ 14bd3a540

EDS_InventoryType __thiscall
FDS_DataContainer::GetData<enum_EDS_InventoryType,enum_EDS_WeightData>
          (FDS_DataContainer *this,EDS_WeightData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  UEnum *this_00;
  FName *pFVar5;
  long64 lVar6;
  int iVar7;
  wchar_t *pwVar8;
  EDS_InventoryType EVar9;
  EDS_InventoryType local_res8 [8];
  FName local_res18;
  FString local_18;
  
  FVar3 = TransformIndexToName<enum_EDS_WeightData>(this,(EDS_WeightData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar8);
  this_00 = StaticEnum<enum_EDS_InventoryType>();
  EVar9 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res18,iVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar6 = UEnum::GetValueByName(this_00,*pFVar5,None);
    EVar9 = (EDS_InventoryType)lVar6;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar9;
}

// GetData<enum_EDS_WaitCompleteType,enum_EDS_WaitCompleteListData> @ 14bd3a610

EDS_WaitCompleteType __thiscall
FDS_DataContainer::GetData<enum_EDS_WaitCompleteType,enum_EDS_WaitCompleteListData>
          (FDS_DataContainer *this,EDS_WaitCompleteListData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  UEnum *this_00;
  FName *pFVar5;
  long64 lVar6;
  int iVar7;
  wchar_t *pwVar8;
  EDS_WaitCompleteType EVar9;
  EDS_WaitCompleteType local_res8 [8];
  FName local_res18;
  FString local_18;
  
  FVar3 = TransformIndexToName<enum_EDS_WaitCompleteListData>
                    (this,(EDS_WaitCompleteListData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar8);
  this_00 = StaticEnum<enum_EDS_WaitCompleteType>();
  EVar9 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res18,iVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar6 = UEnum::GetValueByName(this_00,*pFVar5,None);
    EVar9 = (EDS_WaitCompleteType)lVar6;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar9;
}

// GetData<unsigned___int64,enum_EDS_SummonBossData> @ 14bd3a6e0

ulong64 __thiscall
FDS_DataContainer::GetData<unsigned___int64,enum_EDS_SummonBossData>
          (FDS_DataContainer *this,EDS_SummonBossData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  ulonglong uVar5;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  FVar3 = TransformIndexToName<enum_EDS_SummonBossData>(this,(EDS_SummonBossData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar5 = _wcstoui64(_Str,(wchar_t **)0x0,0);
  return uVar5;
}

// GetData<unsigned___int64,enum_EDS_WaitCompleteListData> @ 14bd3a760

ulong64 __thiscall
FDS_DataContainer::GetData<unsigned___int64,enum_EDS_WaitCompleteListData>
          (FDS_DataContainer *this,EDS_WaitCompleteListData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  ulonglong uVar5;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  FVar3 = TransformIndexToName<enum_EDS_WaitCompleteListData>
                    (this,(EDS_WaitCompleteListData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar5 = _wcstoui64(_Str,(wchar_t **)0x0,0);
  return uVar5;
}

// GetData<unsigned___int64,enum_EDS_WaitCompleteListSlotData> @ 14bd3a7e0

ulong64 __thiscall
FDS_DataContainer::GetData<unsigned___int64,enum_EDS_WaitCompleteListSlotData>
          (FDS_DataContainer *this,EDS_WaitCompleteListSlotData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  ulonglong uVar5;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  FVar3 = TransformIndexToName<enum_EDS_WaitCompleteListSlotData>
                    (this,(EDS_WaitCompleteListSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar5 = _wcstoui64(_Str,(wchar_t **)0x0,0);
  return uVar5;
}

// GetData<unsigned___int64,enum_EDS_WarehouseData> @ 14bd3a860

ulong64 __thiscall
FDS_DataContainer::GetData<unsigned___int64,enum_EDS_WarehouseData>
          (FDS_DataContainer *this,EDS_WarehouseData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  ulonglong uVar5;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  FVar3 = TransformIndexToName<enum_EDS_WarehouseData>(this,(EDS_WarehouseData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar5 = _wcstoui64(_Str,(wchar_t **)0x0,0);
  return uVar5;
}

// GetData<bool,enum_EDS_CommonIconTextButtonData> @ 14bd3a8e0

bool __thiscall
FDS_DataContainer::GetData<bool,enum_EDS_CommonIconTextButtonData>
          (FDS_DataContainer *this,EDS_CommonIconTextButtonData param_1)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  
  FVar4 = TransformIndexToName<enum_EDS_CommonIconTextButtonData>
                    (this,(EDS_CommonIconTextButtonData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  bVar2 = FToBoolHelper::FromCStringWide(pwVar6);
  return bVar2;
}

// IsData<enum_EDS_ItemImplDetailData> @ 14bd3d9b0

bool __thiscall
FDS_DataContainer::IsData<enum_EDS_ItemImplDetailData>
          (FDS_DataContainer *this,EDS_ItemImplDetailData param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  undefined1 *puVar5;
  undefined1 local_res8 [8];
  
  FVar4 = TransformIndexToName<enum_EDS_ItemImplDetailData>(this,(EDS_ItemImplDetailData)local_res8)
  ;
  lVar1 = *(longlong *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(this->DataMap).field_0x8 != *(int *)&(this->DataMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->DataMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->DataMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->DataMap).field_0x48 - 1U &
                              (int)((ulonglong)lVar1 >> 0x20) + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&this->DataMap) == lVar1)
        goto LAB_14bd3da2b;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->DataMap);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14bd3da2b:
  return iVar3 != -1;
}

// IsData<enum_EDS_ItemSlotData> @ 14bd3da50

bool __thiscall
FDS_DataContainer::IsData<enum_EDS_ItemSlotData>(FDS_DataContainer *this,EDS_ItemSlotData param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  undefined1 *puVar5;
  undefined1 local_res8 [8];
  
  FVar4 = TransformIndexToName<enum_EDS_ItemSlotData>(this,(EDS_ItemSlotData)local_res8);
  lVar1 = *(longlong *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(this->DataMap).field_0x8 != *(int *)&(this->DataMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->DataMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->DataMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->DataMap).field_0x48 - 1U &
                              (int)((ulonglong)lVar1 >> 0x20) + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&this->DataMap) == lVar1)
        goto LAB_14bd3dacb;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->DataMap);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14bd3dacb:
  return iVar3 != -1;
}

// SetData<int,enum_EDS_InventoryQuantityData> @ 14bd421e0

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_InventoryQuantityData>
          (FDS_DataContainer *this,EDS_InventoryQuantityData param_1,int param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar4 = TransformIndexToName<enum_EDS_InventoryQuantityData>
                    (this,(EDS_InventoryQuantityData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<int,enum_EDS_WarehouseData> @ 14bd422a0

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_WarehouseData>
          (FDS_DataContainer *this,EDS_WarehouseData param_1,int param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar4 = TransformIndexToName<enum_EDS_WarehouseData>(this,(EDS_WarehouseData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<int,enum_EDS_WeightData> @ 14bd42360

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_WeightData>
          (FDS_DataContainer *this,EDS_WeightData param_1,int param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar4 = TransformIndexToName<enum_EDS_WeightData>(this,(EDS_WeightData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<__int64,enum_EDS_WeightData> @ 14bd42420

void __thiscall
FDS_DataContainer::SetData<__int64,enum_EDS_WeightData>
          (FDS_DataContainer *this,EDS_WeightData param_1,long64 param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%lld");
  FVar4 = TransformIndexToName<enum_EDS_WeightData>(this,(EDS_WeightData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<bool,enum_EDS_InventoryQuantityData> @ 14bd424e0

void __thiscall
FDS_DataContainer::SetData<bool,enum_EDS_InventoryQuantityData>
          (FDS_DataContainer *this,EDS_InventoryQuantityData param_1,bool param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  FString local_18;
  
  pwVar6 = L"true";
  if (!param_2) {
    pwVar6 = L"false";
  }
  ::FString::FString(&local_18,pwVar6);
  FVar4 = TransformIndexToName<enum_EDS_InventoryQuantityData>
                    (this,(EDS_InventoryQuantityData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<bool,enum_EDS_ItemSlotData> @ 14bd425b0

void __thiscall
FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
          (FDS_DataContainer *this,EDS_ItemSlotData param_1,bool param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  FString local_18;
  
  pwVar6 = L"true";
  if (!param_2) {
    pwVar6 = L"false";
  }
  ::FString::FString(&local_18,pwVar6);
  FVar4 = TransformIndexToName<enum_EDS_ItemSlotData>(this,(EDS_ItemSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// TransformIndexToName<enum_EDS_InventoryQuantityData> @ 14bd42680

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryQuantityData>
          (FDS_DataContainer *this,EDS_InventoryQuantityData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryQuantityData>(EDS_InventoryQuantityData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryQuantityData>(EDS_InventoryQuantityData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryQuantityData>(EDS_InventoryQuantityData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryQuantityData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryQuantityData>(EDS_InventoryQuantityData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryQuantityData>(EDS_InventoryQuantityData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryQuantityData>(EDS_InventoryQuantityData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf8548;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryQuantityData>(EDS_InventoryQuantityData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryQuantityData>(EDS_InventoryQuantityData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryQuantityData>(EDS_InventoryQuantityData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryQuantityData>(EDS_InventoryQuantityData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryQuantityData>(EDS_InventoryQuantityData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_InventoryQuantityData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryQuantityData>(EDS_InventoryQuantityData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_ItemImplDetailData> @ 14bd42800

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_ItemImplDetailData>
          (FDS_DataContainer *this,EDS_ItemImplDetailData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemImplDetailData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf7568;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemImplDetailData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemImplDetailData>(EDS_ItemImplDetailData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_ItemSlotUpdateViewEvent> @ 14bd42980

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotUpdateViewEvent>
          (FDS_DataContainer *this,EDS_ItemSlotUpdateViewEvent param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotUpdateViewEvent>(EDS_ItemSlotUpdateViewEvent)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotUpdateViewEvent>(EDS_ItemSlotUpdateViewEvent)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotUpdateViewEvent>(EDS_ItemSlotUpdateViewEvent)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotUpdateViewEvent>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotUpdateViewEvent>(EDS_ItemSlotUpdateViewEvent)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotUpdateViewEvent>(EDS_ItemSlotUpdateViewEvent)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotUpdateViewEvent>(EDS_ItemSlotUpdateViewEvent)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf84f8;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotUpdateViewEvent>(EDS_ItemSlotUpdateViewEvent)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotUpdateViewEvent>(EDS_ItemSlotUpdateViewEvent)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotUpdateViewEvent>(EDS_ItemSlotUpdateViewEvent)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotUpdateViewEvent>(EDS_ItemSlotUpdateViewEvent)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotUpdateViewEvent>(EDS_ItemSlotUpdateViewEvent)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemSlotUpdateViewEvent>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSlotUpdateViewEvent>(EDS_ItemSlotUpdateViewEvent)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_SummonBossData> @ 14bd42b00

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossData>
          (FDS_DataContainer *this,EDS_SummonBossData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossData>(EDS_SummonBossData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossData>(EDS_SummonBossData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossData>(EDS_SummonBossData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossData>(EDS_SummonBossData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossData>(EDS_SummonBossData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossData>(EDS_SummonBossData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf8368;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossData>(EDS_SummonBossData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossData>(EDS_SummonBossData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossData>(EDS_SummonBossData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossData>(EDS_SummonBossData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossData>(EDS_SummonBossData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_SummonBossData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossData>(EDS_SummonBossData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_SummonBossListSlotData> @ 14bd42c80

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossListSlotData>
          (FDS_DataContainer *this,EDS_SummonBossListSlotData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossListSlotData>(EDS_SummonBossListSlotData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossListSlotData>(EDS_SummonBossListSlotData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossListSlotData>(EDS_SummonBossListSlotData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_SummonBossListSlotData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossListSlotData>(EDS_SummonBossListSlotData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossListSlotData>(EDS_SummonBossListSlotData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossListSlotData>(EDS_SummonBossListSlotData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf8318;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossListSlotData>(EDS_SummonBossListSlotData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossListSlotData>(EDS_SummonBossListSlotData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossListSlotData>(EDS_SummonBossListSlotData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossListSlotData>(EDS_SummonBossListSlotData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossListSlotData>(EDS_SummonBossListSlotData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_SummonBossListSlotData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_SummonBossListSlotData>(EDS_SummonBossListSlotData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_WaitCompleteListData> @ 14bd42e00

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_WaitCompleteListData>
          (FDS_DataContainer *this,EDS_WaitCompleteListData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_WaitCompleteListData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf7d58;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_WaitCompleteListData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListData>(EDS_WaitCompleteListData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_WaitCompleteListSlotData> @ 14bd42f80

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_WaitCompleteListSlotData>
          (FDS_DataContainer *this,EDS_WaitCompleteListSlotData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListSlotData>(EDS_WaitCompleteListSlotData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListSlotData>(EDS_WaitCompleteListSlotData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListSlotData>(EDS_WaitCompleteListSlotData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_WaitCompleteListSlotData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListSlotData>(EDS_WaitCompleteListSlotData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListSlotData>(EDS_WaitCompleteListSlotData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListSlotData>(EDS_WaitCompleteListSlotData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf83b8;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListSlotData>(EDS_WaitCompleteListSlotData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListSlotData>(EDS_WaitCompleteListSlotData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListSlotData>(EDS_WaitCompleteListSlotData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListSlotData>(EDS_WaitCompleteListSlotData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListSlotData>(EDS_WaitCompleteListSlotData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_WaitCompleteListSlotData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WaitCompleteListSlotData>(EDS_WaitCompleteListSlotData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_WarehouseData> @ 14bd43100

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_WarehouseData>
          (FDS_DataContainer *this,EDS_WarehouseData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_WarehouseData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf8408;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_WarehouseData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_WeightData> @ 14bd43280

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_WeightData>
          (FDS_DataContainer *this,EDS_WeightData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_WeightData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf8458;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_WeightData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_CookingData> @ 14bdac560

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_CookingData>
          (FDS_DataContainer *this,EDS_CookingData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_CookingData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf7f38;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_CookingData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CookingData>(EDS_CookingData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// TransformIndexToName<enum_EDS_TextData> @ 14bdac6e0

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_TextData>
          (FDS_DataContainer *this,EDS_TextData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_TextData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf7c88;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_TextData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// IsData<enum_EDS_ItemSlotUpdateViewEvent> @ 14be08e90

bool __thiscall
FDS_DataContainer::IsData<enum_EDS_ItemSlotUpdateViewEvent>
          (FDS_DataContainer *this,EDS_ItemSlotUpdateViewEvent param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  undefined1 *puVar5;
  undefined1 local_res8 [8];
  
  FVar4 = TransformIndexToName<enum_EDS_ItemSlotUpdateViewEvent>
                    (this,(EDS_ItemSlotUpdateViewEvent)local_res8);
  lVar1 = *(longlong *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(this->DataMap).field_0x8 != *(int *)&(this->DataMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->DataMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->DataMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->DataMap).field_0x48 - 1U &
                              (int)((ulonglong)lVar1 >> 0x20) + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&this->DataMap) == lVar1)
        goto LAB_14be08f0b;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->DataMap);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14be08f0b:
  return iVar3 != -1;
}

// SetData<int,enum_EDS_GameOptionData> @ 14be0e780

void __thiscall
FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
          (FDS_DataContainer *this,EDS_GameOptionData param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  uint uVar4;
  UEnum *this_00;
  FString *pFVar5;
  longlong lVar6;
  FName *pFVar7;
  FName local_res8;
  EDS_GameOptionData local_res10 [2];
  TPairInitializer<int_const_&,FName_const_&> local_res18;
  FString local_48;
  EDS_GameOptionData *local_38;
  FName **local_30;
  
  ::FString::PrintfImpl(&local_48,L"%d");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_GameOptionData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_res10[0] = param_1;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar6 = 0x154cf84a8;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar6 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - GameOptionValueIndex & param_1) * 4);
    while (iVar1 != -1) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(EDS_GameOptionData *)
           (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
            ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == param_1) {
        pFVar7 = (FName *)(lVar6 + 4);
        if (lVar6 == 0) {
          pFVar7 = (FName *)0x0;
        }
        if (pFVar7 != (FName *)0x0) {
          local_res8 = *pFVar7;
          goto LAB_14be0e89f;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_GameOptionData>();
  if (this_00 == (UEnum *)0x0) {
    ::FName::FName(&local_res8,L"");
  }
  else {
    UEnum::GetNameByValue(this_00,(long64)&local_res18.Value);
    local_38 = local_res10;
    local_30 = &local_res18.Value;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_GameOptionData>(EDS_GameOptionData)___ptr64'
                   ::__l2::EnumNameCache,&local_res18,(bool *)&local_38);
    local_res8 = (FName)local_res18.Value;
  }
LAB_14be0e89f:
  FVar3 = local_res8;
  uVar4 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar4 + FVar3.Number,&local_res8);
  if (pFVar5 != &local_48) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_48.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TransformIndexToName<enum_EDS_InventoryBagSlotData> @ 14be0ecc0

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagSlotData>
          (FDS_DataContainer *this,EDS_InventoryBagSlotData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagSlotData>(EDS_InventoryBagSlotData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagSlotData>(EDS_InventoryBagSlotData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagSlotData>(EDS_InventoryBagSlotData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagSlotData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagSlotData>(EDS_InventoryBagSlotData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagSlotData>(EDS_InventoryBagSlotData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagSlotData>(EDS_InventoryBagSlotData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf8628;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagSlotData>(EDS_InventoryBagSlotData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagSlotData>(EDS_InventoryBagSlotData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagSlotData>(EDS_InventoryBagSlotData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagSlotData>(EDS_InventoryBagSlotData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagSlotData>(EDS_InventoryBagSlotData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_InventoryBagSlotData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_InventoryBagSlotData>(EDS_InventoryBagSlotData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// GetData<int,enum_EDS_ItemRepairData> @ 14be68430

int __thiscall
FDS_DataContainer::GetData<int,enum_EDS_ItemRepairData>
          (FDS_DataContainer *this,EDS_ItemRepairData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *_Str;
  
  FVar4 = TransformIndexToName<enum_EDS_ItemRepairData>(this,RepairedDurabilityPercent);
  uVar1 = *(undefined8 *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  return iVar3;
}

// GetData<bool,enum_EDS_ItemRepairData> @ 14be684a0

bool __thiscall
FDS_DataContainer::GetData<bool,enum_EDS_ItemRepairData>
          (FDS_DataContainer *this,EDS_ItemRepairData param_1)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  
  FVar4 = TransformIndexToName<enum_EDS_ItemRepairData>(this,RepairedDurabilityPercent);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  bVar2 = FToBoolHelper::FromCStringWide(pwVar6);
  return bVar2;
}

// GetData<__int64,enum_EDS_StatusSlotData> @ 14bece220

long64 __thiscall
FDS_DataContainer::GetData<__int64,enum_EDS_StatusSlotData>
          (FDS_DataContainer *this,EDS_StatusSlotData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  longlong lVar5;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  FVar3 = TransformIndexToName<enum_EDS_StatusSlotData>(this,(EDS_StatusSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  lVar5 = _wtoi64(_Str);
  return lVar5;
}

// SetData<unsigned___int64,enum_EDS_ItemEnchantData> @ 14bed3ee0

void __thiscall
FDS_DataContainer::SetData<unsigned___int64,enum_EDS_ItemEnchantData>
          (FDS_DataContainer *this,EDS_ItemEnchantData param_1,ulong64 param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  uint uVar4;
  UEnum *this_00;
  FString *pFVar5;
  longlong lVar6;
  FName *pFVar7;
  TPairInitializer<int_const_&,FName_const_&> local_res8;
  FName local_res18;
  FName local_res20;
  FString local_48;
  FName **local_38;
  FName *local_30;
  
  ::FString::PrintfImpl(&local_48,L"%llu");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_res8.Value._0_4_ = param_1;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar6 = 0x154cf8118;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar6 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - IsEnchantButton & param_1) * 4);
    while (iVar1 != -1) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(EDS_ItemEnchantData *)
           (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
            ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == param_1) {
        pFVar7 = (FName *)(lVar6 + 4);
        if (lVar6 == 0) {
          pFVar7 = (FName *)0x0;
        }
        if (pFVar7 != (FName *)0x0) {
          local_res18 = *pFVar7;
          goto LAB_14bed3fff;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemEnchantData>();
  if (this_00 == (UEnum *)0x0) {
    ::FName::FName(&local_res18,L"");
  }
  else {
    UEnum::GetNameByValue(this_00,(long64)&local_res20);
    local_38 = &local_res8.Value;
    local_30 = &local_res20;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemEnchantData>(EDS_ItemEnchantData)___ptr64'
                   ::__l2::EnumNameCache,&local_res8,(bool *)&local_38);
    local_res18 = local_res20;
  }
LAB_14bed3fff:
  FVar3 = local_res18;
  uVar4 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar4 + FVar3.Number,&local_res18);
  if (pFVar5 != &local_48) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_48.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<unsigned___int64,enum_EDS_NpcFunctionData> @ 14bed40a0

void __thiscall
FDS_DataContainer::SetData<unsigned___int64,enum_EDS_NpcFunctionData>
          (FDS_DataContainer *this,EDS_NpcFunctionData param_1,ulong64 param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  uint uVar4;
  UEnum *this_00;
  FString *pFVar5;
  longlong lVar6;
  FName *pFVar7;
  TPairInitializer<int_const_&,FName_const_&> local_res8;
  FName local_res18;
  FName local_res20;
  FString local_48;
  FName **local_38;
  FName *local_30;
  
  ::FString::PrintfImpl(&local_48,L"%llu");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_NpcFunctionData>(EDS_NpcFunctionData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_NpcFunctionData>(EDS_NpcFunctionData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_NpcFunctionData>(EDS_NpcFunctionData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_NpcFunctionData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_NpcFunctionData>(EDS_NpcFunctionData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_res8.Value._0_4_ = param_1;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_NpcFunctionData>(EDS_NpcFunctionData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_NpcFunctionData>(EDS_NpcFunctionData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar6 = 0x154cf86b8;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_NpcFunctionData>(EDS_NpcFunctionData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_NpcFunctionData>(EDS_NpcFunctionData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar6 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_NpcFunctionData>(EDS_NpcFunctionData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ + ~NpcShopDataKey & param_1) * 4);
    while (iVar1 != -1) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_NpcFunctionData>(EDS_NpcFunctionData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(EDS_NpcFunctionData *)
           (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_NpcFunctionData>(EDS_NpcFunctionData)___ptr64'
            ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == param_1) {
        pFVar7 = (FName *)(lVar6 + 4);
        if (lVar6 == 0) {
          pFVar7 = (FName *)0x0;
        }
        if (pFVar7 != (FName *)0x0) {
          local_res18 = *pFVar7;
          goto LAB_14bed41bf;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_NpcFunctionData>();
  if (this_00 == (UEnum *)0x0) {
    ::FName::FName(&local_res18,L"");
  }
  else {
    UEnum::GetNameByValue(this_00,(long64)&local_res20);
    local_38 = &local_res8.Value;
    local_30 = &local_res20;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_NpcFunctionData>(EDS_NpcFunctionData)___ptr64'
                   ::__l2::EnumNameCache,&local_res8,(bool *)&local_38);
    local_res18 = local_res20;
  }
LAB_14bed41bf:
  FVar3 = local_res18;
  uVar4 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar4 + FVar3.Number,&local_res18);
  if (pFVar5 != &local_48) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_48.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// SetData<unsigned___int64,enum_EDS_WarehouseData> @ 14bed4260

void __thiscall
FDS_DataContainer::SetData<unsigned___int64,enum_EDS_WarehouseData>
          (FDS_DataContainer *this,EDS_WarehouseData param_1,ulong64 param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  uint uVar4;
  UEnum *this_00;
  FString *pFVar5;
  longlong lVar6;
  FName *pFVar7;
  TPairInitializer<int_const_&,FName_const_&> local_res8;
  FName local_res18;
  FName local_res20;
  FString local_48;
  FName **local_38;
  FName *local_30;
  
  ::FString::PrintfImpl(&local_48,L"%llu");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_WarehouseData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_res8.Value._0_4_ = param_1;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar6 = 0x154cf8408;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar6 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - SelectedTabIndex & param_1) * 4);
    while (iVar1 != -1) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(EDS_WarehouseData *)
           (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
            ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == param_1) {
        pFVar7 = (FName *)(lVar6 + 4);
        if (lVar6 == 0) {
          pFVar7 = (FName *)0x0;
        }
        if (pFVar7 != (FName *)0x0) {
          local_res18 = *pFVar7;
          goto LAB_14bed437f;
        }
        break;
      }
      iVar1 = *(int *)(lVar6 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_WarehouseData>();
  if (this_00 == (UEnum *)0x0) {
    ::FName::FName(&local_res18,L"");
  }
  else {
    UEnum::GetNameByValue(this_00,(long64)&local_res20);
    local_38 = &local_res8.Value;
    local_30 = &local_res20;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
                   ::__l2::EnumNameCache,&local_res8,(bool *)&local_38);
    local_res18 = local_res20;
  }
LAB_14bed437f:
  FVar3 = local_res18;
  uVar4 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar4 + FVar3.Number,&local_res18);
  if (pFVar5 != &local_48) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_48.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// TransformIndexToName<enum_EDS_ItemSetSlotData> @ 14bed4420

FName __thiscall
FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSetSlotData>
          (FDS_DataContainer *this,EDS_ItemSetSlotData param_1)

{
  int iVar1;
  UEnum *this_00;
  undefined8 *puVar2;
  uint in_register_00000014;
  FName this_01;
  longlong lVar3;
  uint in_R8D;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  this_01.Number = in_register_00000014;
  this_01.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSetSlotData>(EDS_ItemSetSlotData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSetSlotData>(EDS_ItemSetSlotData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSetSlotData>(EDS_ItemSetSlotData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSetSlotData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSetSlotData>(EDS_ItemSetSlotData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSetSlotData>(EDS_ItemSetSlotData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSetSlotData>(EDS_ItemSetSlotData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar3 = 0x154cf8708;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSetSlotData>(EDS_ItemSetSlotData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSetSlotData>(EDS_ItemSetSlotData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSetSlotData>(EDS_ItemSetSlotData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & in_R8D) * 4);
    while (iVar1 != -1) {
      lVar3 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSetSlotData>(EDS_ItemSetSlotData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(uint *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSetSlotData>(EDS_ItemSetSlotData)___ptr64'
                    ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == in_R8D) {
        puVar2 = (undefined8 *)(lVar3 + 4);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)this_01 = *puVar2;
          return this_01;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0xc);
    }
  }
  this_00 = StaticEnum<enum_EDS_ItemSetSlotData>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameByValue(this_00,(long64)&local_28);
    local_20 = local_res18;
    local_18 = &local_28;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_ItemSetSlotData>(EDS_ItemSetSlotData)___ptr64'
                   ::__l2::EnumNameCache,
               (TPairInitializer<int_const_&,FName_const_&> *)(local_res18 + 8),(bool *)&local_20);
    *(undefined8 *)this_01 = local_28;
    return this_01;
  }
  ::FName::FName((FName *)this_01,L"");
  return this_01;
}

// SetData<bool,enum_EDS_InventoryBagSlotData> @ 14bf97b20

void __thiscall
FDS_DataContainer::SetData<bool,enum_EDS_InventoryBagSlotData>
          (FDS_DataContainer *this,EDS_InventoryBagSlotData param_1,bool param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  FString local_18;
  
  pwVar6 = L"true";
  if (!param_2) {
    pwVar6 = L"false";
  }
  ::FString::FString(&local_18,pwVar6);
  FVar4 = TransformIndexToName<enum_EDS_InventoryBagSlotData>
                    (this,(EDS_InventoryBagSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetData<FDS_Text,enum_EDS_InventoryBagTabBtnData> @ 14bff7d90

FDS_Text * __thiscall
FDS_DataContainer::GetData<FDS_Text,enum_EDS_InventoryBagTabBtnData>
          (FDS_DataContainer *this,FDS_Text *__return_storage_ptr__,
          EDS_InventoryBagTabBtnData param_1)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  FVar3 = TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                    (this,(EDS_InventoryBagTabBtnData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar5);
  FDS_Text::SetTextFromUniqueString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SetData<FDS_Text,enum_EDS_TextData> @ 14bfff860

void __thiscall
FDS_DataContainer::SetData<FDS_Text,enum_EDS_TextData>
          (FDS_DataContainer *this,EDS_TextData param_1,FDS_Text *param_2)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  uint uVar3;
  FText *this_00;
  FString *pFVar4;
  UEnum *this_01;
  FName *pFVar5;
  longlong lVar6;
  int iVar7;
  TPairInitializer<int_const_&,FName_const_&> local_res8;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  undefined1 local_48 [16];
  
  this_00 = FDS_Text::GetText(param_2,(FText *)local_48);
  pFVar4 = FText::ToString(this_00);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = (pFVar4->Data).ArrayNum;
  lVar6 = (longlong)local_50;
  pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,pFVar1,lVar6 * 2);
  }
  if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
    (*(code *)*(FName *)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_TextData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_res8.Value._0_4_ = param_1;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar6 = 0x154cf7c88;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ + ~Text & param_1) * 4);
    while (iVar7 != -1) {
      lVar6 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar7 * 0x14;
      if (*(EDS_TextData *)
           (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
            ::__l2::EnumNameCache._0_8_ + (longlong)iVar7 * 0x14) == param_1) {
        pFVar5 = (FName *)(lVar6 + 4);
        if (lVar6 == 0) {
          pFVar5 = (FName *)0x0;
        }
        if (pFVar5 != (FName *)0x0) {
          local_res18 = *pFVar5;
          goto LAB_14bfff9ef;
        }
        break;
      }
      iVar7 = *(int *)(lVar6 + 0xc);
    }
  }
  this_01 = StaticEnum<enum_EDS_TextData>();
  if (this_01 == (UEnum *)0x0) {
    ::FName::FName(&local_res18,L"");
  }
  else {
    UEnum::GetNameByValue(this_01,(long64)&local_res20);
    local_48._0_8_ = &local_res8.Value;
    local_48._8_8_ = &local_res20;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_TextData>(EDS_TextData)___ptr64'
                   ::__l2::EnumNameCache,&local_res8,(bool *)local_48);
    local_res18 = local_res20;
  }
LAB_14bfff9ef:
  FVar2 = local_res18;
  uVar3 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this,uVar3 + FVar2.Number,&local_res18);
  iVar7 = local_50 + -1;
  if (local_50 == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange(pFVar4,(wchar_t *)local_58.Data,iVar7);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(param_2->FormatArgs).AllocatorInstance.Data,
             (param_2->FormatArgs).ArrayNum);
  pFVar1 = (param_2->FormatArgs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->UniqueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

