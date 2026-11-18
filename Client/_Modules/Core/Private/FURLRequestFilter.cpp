// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FURLRequestFilter @ 1419193b0

FURLRequestFilter * __thiscall
UE::Core::FURLRequestFilter::FURLRequestFilter
          (FURLRequestFilter *this,
          TMap<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>_>
          *param_1)

{
  TSet<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>,FDefaultSetAllocator>
              *)this,(TSet<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>,FDefaultSetAllocator>
                      *)param_1);
  return this;
}

// FURLRequestFilter @ 1419193d0

FURLRequestFilter * __thiscall
UE::Core::FURLRequestFilter::FURLRequestFilter
          (FURLRequestFilter *this,
          TMap<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>_>
          *param_1)

{
  undefined1 *puVar1;
  
  *(undefined8 *)&this->AllowedRequests = 0;
  *(undefined8 *)&(this->AllowedRequests).field_0x8 = 0;
  puVar1 = &(this->AllowedRequests).field_0x48;
  *(undefined8 *)&(this->AllowedRequests).field_0x20 = 0;
  *(undefined4 *)&(this->AllowedRequests).field_0x28 = 0;
  *(undefined4 *)&(this->AllowedRequests).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllowedRequests).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllowedRequests).field_0x34 = 0;
  *(undefined8 *)&(this->AllowedRequests).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (&this->AllowedRequests != param_1) {
    Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->AllowedRequests).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)&param_1->field_0x38,*(int *)&param_1->field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this,(TSparseArray<TSparseSetElement<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_1);
  }
  return this;
}

// FURLRequestFilter @ 141919440

FURLRequestFilter * __thiscall
UE::Core::FURLRequestFilter::FURLRequestFilter
          (FURLRequestFilter *this,wchar_t *param_1,FString *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FConfigFile *pFVar3;
  <lambda_1> local_18;
  
  puVar1 = &(this->AllowedRequests).field_0xc;
  *(undefined8 *)&this->AllowedRequests = 0;
  *(undefined4 *)&(this->AllowedRequests).field_0x8 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined8 *)&(this->AllowedRequests).field_0x20 = 0;
  *(undefined4 *)&(this->AllowedRequests).field_0x28 = 0;
  *(undefined4 *)&(this->AllowedRequests).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllowedRequests).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllowedRequests).field_0x34 = 0;
  *(undefined8 *)&(this->AllowedRequests).field_0x40 = 0;
  *(undefined4 *)&(this->AllowedRequests).field_0x48 = 0;
  if ((1 < (param_2->Data).ArrayNum) && (GConfig != (FConfigCacheIni *)0x0)) {
    TSet<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>,FDefaultSetAllocator>
                      *)this);
    TSparseArray<TSparseSetElement<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(this->AllowedRequests).field_0x8);
    *(undefined4 *)&(this->AllowedRequests).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->AllowedRequests).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->AllowedRequests).field_0x34 = 0;
    iVar2 = *(int *)&(this->AllowedRequests).field_0x2c;
    *(undefined4 *)&(this->AllowedRequests).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->AllowedRequests).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AllowedRequests).field_0x10,0);
    }
    pFVar3 = FConfigCacheIni::FindConfigFile(GConfig,param_2);
    if (pFVar3 != (FConfigFile *)0x0) {
      local_18.__this = this;
      local_18.ConfigSectionRootName = param_1;
      Algo::
      ForEach<FConfigFile_const_&,_UE::Core::FURLRequestFilter::UpdateConfig_::__l8::<lambda_1>_>
                (pFVar3,&local_18);
    }
  }
  return this;
}

// operator() @ 1419209c0

void __thiscall
`UE::Core::FURLRequestFilter::UpdateConfig'::__l8::<lambda_1>::operator()
          (void *this,TTuple<FString,FConfigSection> *param_1)

{
  wchar_t wVar1;
  wchar_t *_Str2;
  TSet<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>,FDefaultSetAllocator>
  *this_00;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FName *pFVar6;
  FString *pFVar7;
  bool bVar8;
  FName local_res10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  undefined1 local_38 [16];
  
  local_38._0_8_ = *(undefined8 *)param_1;
  iVar5 = 0;
  iVar3 = *(int *)&param_1->field_0x8 + -1;
  if (*(int *)&param_1->field_0x8 == 0) {
    iVar3 = iVar5;
  }
  local_38._8_4_ = iVar3;
  iVar3 = UE::String::FindLastChar((TStringView<wchar_t> *)local_38,L' ',CaseSensitive);
  if (iVar3 == -1) {
    ::FString::FString((FString *)local_38,*(wchar_t **)((longlong)this + 8));
    uVar2 = local_38._0_8_;
    iVar3 = *(int *)&param_1->field_0x8;
    if (iVar3 == local_38._8_4_) {
      if (iVar3 < 2) {
        bVar8 = true;
      }
      else {
        iVar3 = wcscmp(*(wchar_t **)param_1,(wchar_t *)local_38._0_8_);
        bVar8 = iVar3 == 0;
      }
    }
    else {
      bVar8 = iVar3 + local_38._8_4_ == 1;
    }
    if ((FScriptContainerElement *)uVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)uVar2);
    }
    if (bVar8) {
      local_38._0_8_ = &local_68;
      local_38._8_8_ = &local_48;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      TSet<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,TArray<FString,TSizedDefaultAllocator<32>_>_&&>_>
                (*(TSet<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>,FDefaultSetAllocator>
                   **)this,
                 (TPairInitializer<FString_&&,TArray<FString,TSizedDefaultAllocator<32>_>_&&> *)
                 &local_res10,(bool *)local_38);
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
    }
  }
  else {
    iVar4 = *(int *)&param_1->field_0x8 + -1;
    if (*(int *)&param_1->field_0x8 == 0) {
      iVar4 = iVar5;
    }
    if (iVar3 < iVar4) {
      iVar4 = iVar3;
    }
    local_38._0_8_ = *(undefined8 *)param_1;
    if (0 < iVar4) {
      iVar5 = iVar4;
    }
    local_38._8_4_ = iVar5;
    TStringView<wchar_t>::TrimStartAndEndInline((TStringView<wchar_t> *)local_38);
    _Str2 = *(wchar_t **)((longlong)this + 8);
    iVar5 = (int)local_38._8_8_;
    if (iVar5 == 0) {
      wVar1 = *_Str2;
    }
    else {
      iVar4 = wcsncmp((wchar_t *)local_38._0_8_,_Str2,(longlong)iVar5);
      if (iVar4 != 0) {
        return;
      }
      wVar1 = _Str2[iVar5];
    }
    if (wVar1 == L'\0') {
      iVar5 = *(int *)&param_1->field_0x8 + -1;
      if (*(int *)&param_1->field_0x8 == 0) {
        iVar5 = 0;
      }
      iVar4 = iVar5;
      if (iVar5 - iVar3 < iVar5) {
        iVar4 = iVar5 - iVar3;
      }
      iVar3 = 0;
      if (0 < iVar4) {
        iVar3 = iVar4;
      }
      local_38._8_4_ = iVar3;
      local_38._0_8_ = *(longlong *)param_1 + ((longlong)iVar5 - (longlong)iVar3) * 2;
      TStringView<wchar_t>::TrimStartAndEndInline((TStringView<wchar_t> *)local_38);
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      pFVar6 = ::FName::FName(&local_res10,L"AllowedDomains");
      FConfigSection::MultiFind<TSizedDefaultAllocator<32>_>
                ((FConfigSection *)&param_1->field_0x10,*pFVar6,&local_68,true);
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      pFVar6 = ::FName::FName(&local_res10,L"DevAllowedDomains");
      FConfigSection::MultiFind<TSizedDefaultAllocator<32>_>
                ((FConfigSection *)&param_1->field_0x10,*pFVar6,&local_48,true);
      iVar3 = local_48.ArrayNum;
      if (local_48.ArrayNum != 0) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,local_48.ArrayNum,&local_68.AllocatorInstance,&local_68.ArrayNum,
                           &local_68.ArrayMax);
        ConstructItems<FString,FString,int>
                  (local_68.AllocatorInstance.Data + (longlong)iVar5 * 0x10,
                   (FString *)local_48.AllocatorInstance.Data,iVar3);
      }
      this_00 = *(TSet<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>,FDefaultSetAllocator>
                  **)this;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      pFVar7 = ::FString::ConstructFromPtrSize
                         ((FString *)local_38,(wchar_t *)local_38._0_8_,local_38._8_4_);
      if (&local_58 != pFVar7) {
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        local_58.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = (pFVar7->Data).ArrayNum;
        local_58.Data.ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_38._0_8_);
      }
      local_38._0_8_ = &local_58;
      local_38._8_8_ = &local_68;
      TSet<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,TArray<FString,TSizedDefaultAllocator<32>_>_&&>_>
                (this_00,(TPairInitializer<FString_&&,TArray<FString,TSizedDefaultAllocator<32>_>_&&>
                          *)&local_res10,(bool *)local_38);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 141920d40

bool __thiscall
`UE::Core::FURLRequestFilter::IsRequestAllowed'::__l2::<lambda_2>::operator()
          (void *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar6 = (param_1->Data).ArrayNum;
  iVar2 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  iVar2 = UE::String::FindFirstChar(&local_18,L'.',CaseSensitive);
  if (iVar2 == 0) {
    iVar2 = (param_1->Data).ArrayNum;
    iVar1 = *(int *)((longlong)this + 8);
    pFVar4 = (param_1->Data).AllocatorInstance.Data;
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    iVar2 = iVar1;
    if (iVar6 < iVar1) {
      iVar2 = iVar6;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    pFVar5 = (FScriptContainerElement *)
             (*(longlong *)this + ((longlong)iVar1 - (longlong)iVar3) * 2);
    if (iVar6 != iVar3) {
      return false;
    }
    iVar2 = iVar3;
    if ((iVar6 == 0) || (iVar3 == 0)) goto LAB_141920e06;
  }
  else {
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar2 < 2) {
      return false;
    }
    pFVar5 = (param_1->Data).AllocatorInstance.Data;
    iVar2 = iVar2 + -1;
    iVar6 = *(int *)((longlong)this + 8);
    if (iVar6 != iVar2) {
      return false;
    }
    if ((iVar6 == 0) || (iVar2 == 0)) goto LAB_141920e06;
    pFVar4 = *(FScriptContainerElement **)this;
    iVar3 = iVar2;
    if (iVar6 < iVar2) {
      iVar3 = iVar6;
    }
  }
  iVar3 = FGenericPlatformStricmp::Strnicmp((wchar_t *)pFVar4,(wchar_t *)pFVar5,(longlong)iVar3);
  if (iVar3 != 0) {
    return false;
  }
LAB_141920e06:
  if (iVar6 != iVar2) {
    return false;
  }
  return true;
}

// IsRequestAllowed @ 141952820

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Core::FURLRequestFilter::IsRequestAllowed(FURLRequestFilter *this,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_> *pTVar6;
  int iVar7;
  FString *pFVar8;
  FString *pFVar9;
  int iVar10;
  wchar_t *pwVar11;
  undefined4 uVar12;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_58;
  TArrayView<wchar_t_const_,int> local_48 [2];
  
  if (*(int *)&(this->AllowedRequests).field_0x8 == *(int *)&(this->AllowedRequests).field_0x34) {
    return true;
  }
  local_48[0].DataPtr = param_1->DataPtr;
  local_48[0].ArrayNum = param_1->Size;
  local_48[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_58.Size = 3;
  local_58.DataPtr = L"://";
  pwVar11 = (wchar_t *)0x0;
  iVar10 = 0;
  iVar4 = String::FindFirst((TStringView<wchar_t> *)local_48,&local_58,CaseSensitive);
  uVar2 = local_48[0]._12_4_;
  if (iVar4 == -1) {
    pwVar1 = param_1->DataPtr;
    iVar4 = param_1->Size;
    uVar12 = *(undefined4 *)&param_1->field_0xc;
  }
  else {
    iVar5 = param_1->Size;
    pwVar11 = param_1->DataPtr;
    iVar7 = iVar5;
    if (iVar4 < iVar5) {
      iVar7 = iVar4;
    }
    iVar10 = 0;
    if (0 < iVar7) {
      iVar10 = iVar7;
    }
    iVar4 = (iVar5 - iVar4) + -3;
    iVar7 = iVar5;
    if (iVar4 < iVar5) {
      iVar7 = iVar4;
    }
    iVar4 = 0;
    if (0 < iVar7) {
      iVar4 = iVar7;
    }
    local_58.DataPtr = pwVar11 + ((longlong)iVar5 - (longlong)iVar4);
    uVar12 = local_58._12_4_;
    local_58.Size = iVar4;
    pwVar1 = local_58.DataPtr;
  }
  if ((iVar4 < 1) || (*pwVar1 != L'[')) {
    local_48[0].DataPtr = L"/?:#";
    local_48[0].ArrayNum = 4;
    local_48[0]._12_4_ = local_58._12_4_;
    local_58.DataPtr = pwVar1;
    local_58.Size = iVar4;
    local_58._12_4_ = uVar12;
    iVar5 = String::FindFirstOfAnyChar(&local_58,local_48,CaseSensitive,(int *)0x0);
    if (iVar5 == -1) goto LAB_141952986;
  }
  else {
    local_48[0]._12_4_ = uVar12;
    local_48[0].ArrayNum = iVar4;
    local_48[0].DataPtr = pwVar1;
    iVar5 = String::FindFirstChar((TStringView<wchar_t> *)local_48,L']',CaseSensitive);
    if (iVar5 == -1) goto LAB_141952986;
    iVar5 = iVar5 + 1;
  }
  iVar7 = iVar4;
  if (iVar5 < iVar4) {
    iVar7 = iVar5;
  }
  iVar4 = 0;
  uVar12 = local_58._12_4_;
  if (0 < iVar7) {
    iVar4 = iVar7;
  }
LAB_141952986:
  local_58._12_4_ = uVar2;
  local_58.Size = iVar10;
  local_48[0].ArrayNum = iVar10;
  local_48[0]._12_4_ = uVar2;
  local_58.DataPtr = pwVar11;
  local_48[0].DataPtr = pwVar11;
  pTVar6 = AlgoImpl::
           FindByPredicate<TMap<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>_>_const_&,_UE::Core::FURLRequestFilter::IsRequestAllowed_::__l2::<lambda_1>_>
                     (&this->AllowedRequests,(<lambda_1> *)local_48);
  if (pTVar6 == (TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_> *)0x0) {
    if (4 < (byte)LogCore._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
    return false;
  }
  iVar10 = *(int *)&pTVar6->field_0x18;
  if (iVar10 == 0) {
    return true;
  }
  pFVar8 = *(FString **)&pTVar6->field_0x10;
  pFVar9 = pFVar8 + iVar10;
  local_48[0]._12_4_ = uVar12;
  local_48[0].ArrayNum = iVar4;
  local_48[0].DataPtr = pwVar1;
  while( true ) {
    if (*(int *)&pTVar6->field_0x18 != iVar10) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar9) break;
    bVar3 = `UE::Core::FURLRequestFilter::IsRequestAllowed'::__l2::<lambda_2>::operator()
                      (local_48,pFVar8);
    if (bVar3) {
      bVar3 = true;
LAB_141952a55:
      if ((4 < (byte)LogCore._0_1_) && (bVar3 == false)) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      }
      return bVar3;
    }
    pFVar8 = pFVar8 + 1;
  }
  bVar3 = false;
  goto LAB_141952a55;
}

// UpdateConfig @ 14197c180

void __thiscall
UE::Core::FURLRequestFilter::UpdateConfig(FURLRequestFilter *this,wchar_t *param_1,FString *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  FConfigFile *pFVar4;
  <lambda_1> local_18;
  
  if ((1 < (param_2->Data).ArrayNum) && (GConfig != (FConfigCacheIni *)0x0)) {
    bVar3 = 1 < *(int *)&(this->AllowedRequests).field_0x48;
    if (!bVar3) {
      TSet<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>,FDefaultSetAllocator>
                        *)this);
    }
    TSparseArray<TSparseSetElement<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(this->AllowedRequests).field_0x8);
    puVar1 = &(this->AllowedRequests).field_0xc;
    *(undefined4 *)&(this->AllowedRequests).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->AllowedRequests).field_0x34 = 0;
    *(undefined4 *)&(this->AllowedRequests).field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(this->AllowedRequests).field_0x2c;
    *(undefined4 *)&(this->AllowedRequests).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->AllowedRequests).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AllowedRequests).field_0x10,0);
    }
    if (bVar3) {
      *(undefined4 *)&(this->AllowedRequests).field_0x48 = 1;
      TSet<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>,FDefaultSetAllocator>
                *)this);
    }
    pFVar4 = FConfigCacheIni::FindConfigFile(GConfig,param_2);
    if (pFVar4 != (FConfigFile *)0x0) {
      local_18.__this = this;
      local_18.ConfigSectionRootName = param_1;
      Algo::
      ForEach<FConfigFile_const_&,_UE::Core::FURLRequestFilter::UpdateConfig_::__l8::<lambda_1>_>
                (pFVar4,&local_18);
    }
  }
  return;
}

