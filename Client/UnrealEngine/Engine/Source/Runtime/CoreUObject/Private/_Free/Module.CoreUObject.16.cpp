// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 88

// OnBeginProfilingEvent'' @ 140f309a0

void __cdecl `dynamic_initializer_for_'FVerseProfilingDelegates::OnBeginProfilingEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FVerseProfilingDelegates::OnBeginProfilingEvent__);
  return;
}

// OnEndProfilingEvent'' @ 140f309c0

void __cdecl `dynamic_initializer_for_'FVerseProfilingDelegates::OnEndProfilingEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FVerseProfilingDelegates::OnEndProfilingEvent__);
  return;
}

// `dynamic_initializer_for_'LogVerseGC'' @ 140f309e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogVerseGC__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogVerseGC,L"LogVerseGC",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogVerseGC__);
  return;
}

// `dynamic_initializer_for_'LogVerseVM'' @ 140f30a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogVerseVM__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogVerseVM,L"LogVerseVM",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogVerseVM__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMPackageTypes_h__Script_CoreUObject_2581462854'' @ 140f30a60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMPackageTypes_h__Script_CoreUObject_2581462854__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMPackageTypes_h__Script_CoreUObject_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMProfilingLibrary_h__Script_CoreUObject_4088069004'' @ 140f30ab0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMProfilingLibrary_h__Script_CoreUObject_4088069004__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMProfilingLibrary_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// EVersePackageScope_StaticEnum @ 1422abbf0

UEnum * __cdecl EVersePackageScope_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVersePackageScope.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EVersePackageScope.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVersePackageScope,(UObject *)pUVar1,
                       L"EVersePackageScope");
  }
  return Z_Registration_Info_UEnum_EVersePackageScope.OuterSingleton;
}

// EVersePackageType_StaticEnum @ 1422abc30

UEnum * __cdecl EVersePackageType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVersePackageType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EVersePackageType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVersePackageType,(UObject *)pUVar1,
                       L"EVersePackageType");
  }
  return Z_Registration_Info_UEnum_EVersePackageType.OuterSingleton;
}

// NewStructOps @ 1422abcf0

void * __cdecl Z_Construct_UScriptStruct_FProfileLocus_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FProfileLocus,&UE::CoreUObject::Private::Construct<FProfileLocus>,&UE::CoreUObject::Private::ConstructForTests<FProfileLocus>,&UE::CoreUObject::Private::Destruct<FProfileLocus>,&UE::CoreUObject::Private::Copy<FProfileLocus>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1422abd30

void * __cdecl Z_Construct_UScriptStruct_FSolarisProfilingData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSolarisProfilingData,&UE::CoreUObject::Private::Construct<FSolarisProfilingData>,&UE::CoreUObject::Private::ConstructForTests<FSolarisProfilingData>,&UE::CoreUObject::Private::Destruct<FSolarisProfilingData>,&UE::CoreUObject::Private::Copy<FSolarisProfilingData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// GetDecoratedName<char8_t> @ 1422abf20

TStringBuilderWithBuffer<char8_t,64> * __cdecl
Verse::Names::GetDecoratedName<char8_t>
          (TStringBuilderWithBuffer<char8_t,64> *__return_storage_ptr__,
          TStringView<char8_t> *param_1,TStringView<char8_t> *param_2,TStringView<char8_t> *param_3)

{
  int iVar1;
  TStringBuilderWithBuffer<char8_t,64> *pTVar2;
  TStringBuilderBase<char8_t> *this;
  void *pvVar3;
  
  iVar1 = param_2->Size;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  pTVar2 = __return_storage_ptr__ + 1;
  __return_storage_ptr__->_padding_ = (longlong)pTVar2;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  if (iVar1 == 0) {
    if (pTVar2 < (TStringBuilderWithBuffer<char8_t,64> *)(__return_storage_ptr__->StringBuffer + 1))
    {
      TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1);
    }
    *(undefined1 *)__return_storage_ptr__->_padding_ = 0x28;
    __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
    pTVar2 = __return_storage_ptr__;
    param_2 = param_1;
  }
  else {
    if (pTVar2 < (TStringBuilderWithBuffer<char8_t,64> *)(__return_storage_ptr__->StringBuffer + 1))
    {
      TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1);
    }
    *(undefined1 *)__return_storage_ptr__->_padding_ = 0x28;
    __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
    pTVar2 = (TStringBuilderWithBuffer<char8_t,64> *)
             operator<<<char8_t,TStringView<char8_t>_&>
                       ((TStringBuilderBase<char8_t> *)__return_storage_ptr__,param_1);
    if ((uchar *)pTVar2->_padding_ < (uchar *)pTVar2->_padding_ + 1) {
      TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)pTVar2,1);
    }
    *(uchar *)pTVar2->_padding_ = '/';
    pTVar2->_padding_ = (longlong)((uchar *)pTVar2->_padding_ + 1);
  }
  this = operator<<<char8_t,TStringView<char8_t>_&>((TStringBuilderBase<char8_t> *)pTVar2,param_2);
  if (this->End < this->CurPos + 2) {
    TStringBuilderBase<char8_t>::Extend(this,2);
  }
  pvVar3 = FGenericPlatformString::Memcpy(this->CurPos,":)",2);
  this->CurPos = (uchar *)((longlong)pvVar3 + 2);
  operator<<<char8_t,TStringView<char8_t>_&>(this,param_3);
  return __return_storage_ptr__;
}

// GetDecoratedName<char8_t> @ 1422ac050

TStringBuilderWithBuffer<char8_t,64> * __cdecl
Verse::Names::GetDecoratedName<char8_t>
          (TStringBuilderWithBuffer<char8_t,64> *__return_storage_ptr__,
          TStringView<char8_t> *param_1,TStringView<char8_t> *param_2)

{
  uchar *puVar1;
  undefined8 uVar2;
  uchar *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  int iVar6;
  ulong64 uVar7;
  
  puVar1 = param_1->DataPtr;
  uVar2 = *(undefined8 *)&param_1->Size;
  puVar3 = param_2->DataPtr;
  uVar4 = *(undefined8 *)&param_2->Size;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  if (__return_storage_ptr__ + 1 <
      (TStringBuilderWithBuffer<char8_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
    TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1);
  }
  iVar6 = (int)uVar2;
  *(undefined1 *)__return_storage_ptr__->_padding_ = 0x28;
  __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
  pvVar5 = (void *)__return_storage_ptr__->_padding_;
  uVar7 = (ulong64)iVar6;
  if ((ulonglong)__return_storage_ptr__->_padding_ < (longlong)pvVar5 + uVar7) {
    TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,uVar7)
    ;
    pvVar5 = (void *)__return_storage_ptr__->_padding_;
  }
  if (iVar6 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pvVar5,puVar1,uVar7);
    pvVar5 = (void *)((longlong)pvVar5 + uVar7);
    __return_storage_ptr__->_padding_ = (longlong)pvVar5;
  }
  if ((ulonglong)__return_storage_ptr__->_padding_ < (longlong)pvVar5 + 2U) {
    TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,2);
    pvVar5 = (void *)__return_storage_ptr__->_padding_;
  }
  pvVar5 = FGenericPlatformString::Memcpy(pvVar5,":)",2);
  __return_storage_ptr__->_padding_ = (longlong)pvVar5 + 2;
  iVar6 = (int)uVar4;
  uVar7 = (ulong64)iVar6;
  if ((ulonglong)__return_storage_ptr__->_padding_ < (longlong)pvVar5 + 2 + uVar7) {
    TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,uVar7)
    ;
  }
  if (iVar6 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy((void *)__return_storage_ptr__->_padding_,puVar3,uVar7);
    __return_storage_ptr__->_padding_ = (longlong)pvVar5 + uVar7;
  }
  return __return_storage_ptr__;
}

// GetDecoratedName<wchar_t> @ 1422ac190

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
Verse::Names::GetDecoratedName<wchar_t>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3)

{
  undefined8 uVar1;
  TStringBuilderWithBuffer<wchar_t,64> *pTVar2;
  TStringBuilderBase<wchar_t> *this;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  
  iVar5 = param_2->Size;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  pTVar2 = __return_storage_ptr__ + 1;
  __return_storage_ptr__->_padding_ = (longlong)pTVar2;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  if (iVar5 == 0) {
    if (pTVar2 < (TStringBuilderWithBuffer<wchar_t,64> *)(__return_storage_ptr__->StringBuffer + 1))
    {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,1);
    }
    iVar5 = (int)*(undefined8 *)&param_1->Size;
    pwVar4 = param_1->DataPtr;
    *(undefined2 *)__return_storage_ptr__->_padding_ = 0x28;
    __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 2;
    pTVar2 = __return_storage_ptr__;
  }
  else {
    if (pTVar2 < (TStringBuilderWithBuffer<wchar_t,64> *)(__return_storage_ptr__->StringBuffer + 1))
    {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,1);
    }
    uVar1 = *(undefined8 *)&param_1->Size;
    pwVar4 = param_1->DataPtr;
    *(undefined2 *)__return_storage_ptr__->_padding_ = 0x28;
    __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 2;
    pTVar2 = (TStringBuilderWithBuffer<wchar_t,64> *)
             TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                       ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,pwVar4,(int)uVar1);
    if ((wchar_t *)pTVar2->_padding_ < (wchar_t *)pTVar2->_padding_ + 1) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)pTVar2,1);
    }
    iVar5 = (int)*(undefined8 *)&param_2->Size;
    pwVar4 = param_2->DataPtr;
    *(wchar_t *)pTVar2->_padding_ = L'/';
    pTVar2->_padding_ = (longlong)((wchar_t *)pTVar2->_padding_ + 1);
  }
  this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                   ((TStringBuilderBase<wchar_t> *)pTVar2,pwVar4,iVar5);
  if (this->End < this->CurPos + 2) {
    TStringBuilderBase<wchar_t>::Extend(this,2);
  }
  pwVar3 = FGenericPlatformString::Convert<char,wchar_t>(this->CurPos,2,":)",2);
  uVar1 = *(undefined8 *)&param_3->Size;
  pwVar4 = param_3->DataPtr;
  this->CurPos = pwVar3;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,pwVar4,(int)uVar1);
  return __return_storage_ptr__;
}

// GetDecoratedName<wchar_t> @ 1422ac2e0

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
Verse::Names::GetDecoratedName<wchar_t>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.Size = param_2->Size;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_38.DataPtr = (wchar_t *)0x0;
  local_38.Size = 0;
  local_38._12_4_ = 0;
  GetDecoratedName<wchar_t>(__return_storage_ptr__,&local_18,&local_38,&local_28);
  return __return_storage_ptr__;
}

// GetPackageType<char8_t> @ 1422ac340

EVersePackageType __cdecl Verse::Private::GetPackageType<char8_t>(uchar *param_1)

{
  EVersePackageType EVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  
  pcVar3 = strchr((char *)param_1,0x2f);
  if (pcVar3 == (char *)0x0) {
    iVar2 = 0;
    if (param_1 != (uchar *)0x0) {
      sVar4 = strlen((char *)param_1);
      iVar2 = (int)sVar4;
    }
    iVar5 = iVar2;
    if (10 < iVar2) {
      iVar5 = 10;
    }
    iVar6 = 0;
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
    if ((iVar6 == 10) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp
                          ((uchar *)"-Published",param_1 + ((longlong)iVar2 - (longlong)iVar6),10),
       iVar2 == 0)) {
      EVar1 = PublishedContent;
    }
    else {
      EVar1 = Content;
    }
    return EVar1;
  }
  iVar2 = strcmp(pcVar3 + 1,"Assets");
  EVar1 = VNI;
  if (iVar2 == 0) {
    EVar1 = Assets;
  }
  return EVar1;
}

// GetPackageType<wchar_t> @ 1422ac400

EVersePackageType __cdecl Verse::Private::GetPackageType<wchar_t>(wchar_t *param_1)

{
  EVersePackageType EVar1;
  int iVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  
  pwVar3 = wcschr(param_1,L'/');
  if (pwVar3 == (wchar_t *)0x0) {
    iVar2 = 0;
    if (param_1 != (wchar_t *)0x0) {
      sVar4 = wcslen(param_1);
      iVar2 = (int)sVar4;
    }
    iVar5 = iVar2;
    if (10 < iVar2) {
      iVar5 = 10;
    }
    iVar6 = 0;
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
    if ((iVar6 == 10) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp
                          (L"-Published",param_1 + ((longlong)iVar2 - (longlong)iVar6),10),
       iVar2 == 0)) {
      EVar1 = PublishedContent;
    }
    else {
      EVar1 = Content;
    }
    return EVar1;
  }
  iVar2 = wcscmp(pwVar3 + 1,L"Assets");
  EVar1 = VNI;
  if (iVar2 == 0) {
    EVar1 = Assets;
  }
  return EVar1;
}

// GetUPackagePath<char8_t> @ 1422ac4c0

TStringBuilderWithBuffer<char8_t,64> * __cdecl
Verse::Names::GetUPackagePath<char8_t>
          (TStringBuilderWithBuffer<char8_t,64> *__return_storage_ptr__,
          TStringView<char8_t> *param_1,EVersePackageType *param_2)

{
  uchar *_Str1;
  uchar *puVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  size_t sVar5;
  ulong64 uVar6;
  int iVar7;
  int iVar8;
  TStringView<char8_t> local_38 [2];
  
  puVar1 = param_1->DataPtr;
  pcVar3 = strchr((char *)puVar1,0x2f);
  if (pcVar3 != (char *)0x0) {
    _Str1 = (uchar *)(pcVar3 + 1);
    iVar7 = (int)pcVar3 - (int)puVar1;
    iVar2 = param_1->Size;
    if (iVar7 < param_1->Size) {
      iVar2 = iVar7;
    }
    iVar8 = 0;
    iVar7 = iVar8;
    if (0 < iVar2) {
      iVar7 = iVar2;
    }
    iVar2 = strcmp((char *)_Str1,"Assets");
    if (iVar2 == 0) {
      if (param_2 != (EVersePackageType *)0x0) {
        *param_2 = Assets;
      }
      *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
      __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
      __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
      if (__return_storage_ptr__ + 1 <
          (TStringBuilderWithBuffer<char8_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
        TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1)
        ;
      }
      uVar6 = (ulong64)iVar7;
      *(undefined1 *)__return_storage_ptr__->_padding_ = 0x2f;
      __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
      pvVar4 = (void *)__return_storage_ptr__->_padding_;
      if ((ulonglong)__return_storage_ptr__->_padding_ < uVar6 + (longlong)pvVar4) {
        TStringBuilderBase<char8_t>::Extend
                  ((TStringBuilderBase<char8_t> *)__return_storage_ptr__,uVar6);
        pvVar4 = (void *)__return_storage_ptr__->_padding_;
      }
      if (iVar7 != 0) {
        pvVar4 = FGenericPlatformString::Memcpy(pvVar4,puVar1,uVar6);
        pvVar4 = (void *)((longlong)pvVar4 + uVar6);
        __return_storage_ptr__->_padding_ = (longlong)pvVar4;
      }
      if ((ulonglong)__return_storage_ptr__->_padding_ < (longlong)pvVar4 + 1U) {
        TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1)
        ;
      }
      *(undefined1 *)__return_storage_ptr__->_padding_ = 0x2f;
      __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
      pvVar4 = (void *)__return_storage_ptr__->_padding_;
      if ((ulonglong)__return_storage_ptr__->_padding_ < (longlong)pvVar4 + 6U) {
        TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,6)
        ;
        pvVar4 = (void *)__return_storage_ptr__->_padding_;
      }
      pvVar4 = FGenericPlatformString::Memcpy(pvVar4,"_Verse",6);
      __return_storage_ptr__->_padding_ = (longlong)pvVar4 + 6;
      if ((ulonglong)__return_storage_ptr__->_padding_ < (longlong)pvVar4 + 7U) {
        TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1)
        ;
      }
      *(undefined1 *)__return_storage_ptr__->_padding_ = 0x2f;
      __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
      if ((ulonglong)__return_storage_ptr__->_padding_ < __return_storage_ptr__->_padding_ + 6U) {
        TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,6)
        ;
      }
      pvVar4 = FGenericPlatformString::Memcpy((void *)__return_storage_ptr__->_padding_,"Assets",6);
      __return_storage_ptr__->_padding_ = (longlong)pvVar4 + 6;
    }
    else {
      if (param_2 != (EVersePackageType *)0x0) {
        *param_2 = VNI;
      }
      local_38[0].DataPtr = _Str1;
      if (_Str1 != (uchar *)0x0) {
        sVar5 = strlen((char *)_Str1);
        iVar8 = (int)sVar5;
      }
      local_38[0].Size = iVar8;
      __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
      __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
      __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
      *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
      if (__return_storage_ptr__ + 1 <
          (TStringBuilderWithBuffer<char8_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
        TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1)
        ;
      }
      uVar6 = (ulong64)iVar7;
      *(undefined1 *)__return_storage_ptr__->_padding_ = 0x2f;
      __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
      pvVar4 = (void *)__return_storage_ptr__->_padding_;
      if ((ulonglong)__return_storage_ptr__->_padding_ < uVar6 + (longlong)pvVar4) {
        TStringBuilderBase<char8_t>::Extend
                  ((TStringBuilderBase<char8_t> *)__return_storage_ptr__,uVar6);
        pvVar4 = (void *)__return_storage_ptr__->_padding_;
      }
      if (iVar7 != 0) {
        pvVar4 = FGenericPlatformString::Memcpy(pvVar4,puVar1,uVar6);
        pvVar4 = (void *)((longlong)pvVar4 + uVar6);
        __return_storage_ptr__->_padding_ = (longlong)pvVar4;
      }
      if ((ulonglong)__return_storage_ptr__->_padding_ < (longlong)pvVar4 + 1U) {
        TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1)
        ;
      }
      *(undefined1 *)__return_storage_ptr__->_padding_ = 0x2f;
      __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
      pvVar4 = (void *)__return_storage_ptr__->_padding_;
      if ((ulonglong)__return_storage_ptr__->_padding_ < (longlong)pvVar4 + 6U) {
        TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,6)
        ;
        pvVar4 = (void *)__return_storage_ptr__->_padding_;
      }
      pvVar4 = FGenericPlatformString::Memcpy(pvVar4,"_Verse",6);
      __return_storage_ptr__->_padding_ = (longlong)pvVar4 + 6;
      if ((ulonglong)__return_storage_ptr__->_padding_ < (longlong)pvVar4 + 7U) {
        TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1)
        ;
      }
      *(undefined1 *)__return_storage_ptr__->_padding_ = 0x2f;
      __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
      pvVar4 = (void *)__return_storage_ptr__->_padding_;
      if ((ulonglong)__return_storage_ptr__->_padding_ < (longlong)pvVar4 + 3U) {
        TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,3)
        ;
        pvVar4 = (void *)__return_storage_ptr__->_padding_;
      }
      pvVar4 = FGenericPlatformString::Memcpy(pvVar4,"VNI",3);
      __return_storage_ptr__->_padding_ = (longlong)pvVar4 + 3;
      if ((ulonglong)__return_storage_ptr__->_padding_ < (longlong)pvVar4 + 4U) {
        TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1)
        ;
      }
      *(undefined1 *)__return_storage_ptr__->_padding_ = 0x2f;
      __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
      operator<<<char8_t,TStringView<char8_t>_&>
                ((TStringBuilderBase<char8_t> *)__return_storage_ptr__,local_38);
    }
    return __return_storage_ptr__;
  }
  if (param_2 != (EVersePackageType *)0x0) {
    *param_2 = Content;
  }
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (__return_storage_ptr__ + 1 <
      (TStringBuilderWithBuffer<char8_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
    TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1);
  }
  puVar1 = param_1->DataPtr;
  iVar2 = (int)*(undefined8 *)&param_1->Size;
  uVar6 = (ulong64)iVar2;
  *(undefined1 *)__return_storage_ptr__->_padding_ = 0x2f;
  __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
  pvVar4 = (void *)__return_storage_ptr__->_padding_;
  if ((ulonglong)__return_storage_ptr__->_padding_ < uVar6 + (longlong)pvVar4) {
    TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,uVar6)
    ;
    pvVar4 = (void *)__return_storage_ptr__->_padding_;
  }
  if (iVar2 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(pvVar4,puVar1,uVar6);
    pvVar4 = (void *)((longlong)pvVar4 + uVar6);
    __return_storage_ptr__->_padding_ = (longlong)pvVar4;
  }
  if ((ulonglong)__return_storage_ptr__->_padding_ < (longlong)pvVar4 + 1U) {
    TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1);
  }
  *(undefined1 *)__return_storage_ptr__->_padding_ = 0x2f;
  __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
  if ((ulonglong)__return_storage_ptr__->_padding_ < __return_storage_ptr__->_padding_ + 6U) {
    TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,6);
  }
  pvVar4 = FGenericPlatformString::Memcpy((void *)__return_storage_ptr__->_padding_,"_Verse",6);
  __return_storage_ptr__->_padding_ = (longlong)pvVar4 + 6;
  return __return_storage_ptr__;
}

// GetUPackagePath<wchar_t> @ 1422ac900

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
Verse::Names::GetUPackagePath<wchar_t>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,EVersePackageType *param_2)

{
  wchar_t *_Str;
  undefined8 uVar1;
  int iVar2;
  wchar_t *pwVar3;
  TStringBuilderBase<wchar_t> *pTVar4;
  size_t sVar5;
  wchar_t *_Str1;
  int iVar6;
  int iVar7;
  
  _Str = param_1->DataPtr;
  pwVar3 = wcschr(_Str,L'/');
  if (pwVar3 == (wchar_t *)0x0) {
    if (param_2 != (EVersePackageType *)0x0) {
      *param_2 = Content;
    }
    *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
    __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
    __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
    if (__return_storage_ptr__ + 1 <
        (TStringBuilderWithBuffer<wchar_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,1);
    }
    uVar1 = *(undefined8 *)&param_1->Size;
    *(undefined2 *)__return_storage_ptr__->_padding_ = 0x2f;
    __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 2;
    pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                       ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,_Str,(int)uVar1);
    if (pTVar4->End < pTVar4->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
    }
    *pTVar4->CurPos = L'/';
    pTVar4->CurPos = pTVar4->CurPos + 1;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar4,L"_Verse",6);
  }
  else {
    _Str1 = pwVar3 + 1;
    iVar7 = (int)((longlong)pwVar3 - (longlong)_Str >> 1);
    iVar2 = param_1->Size;
    if (iVar7 < param_1->Size) {
      iVar2 = iVar7;
    }
    iVar6 = 0;
    iVar7 = 0;
    if (0 < iVar2) {
      iVar7 = iVar2;
    }
    iVar2 = wcscmp(_Str1,L"Assets");
    if (iVar2 == 0) {
      if (param_2 != (EVersePackageType *)0x0) {
        *param_2 = Assets;
      }
      *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
      __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
      __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
      if (__return_storage_ptr__ + 1 <
          (TStringBuilderWithBuffer<wchar_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,1)
        ;
      }
      *(undefined2 *)__return_storage_ptr__->_padding_ = 0x2f;
      __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 2;
      pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                         ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,_Str,iVar7);
      if (pTVar4->End < pTVar4->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
      }
      *pTVar4->CurPos = L'/';
      pTVar4->CurPos = pTVar4->CurPos + 1;
      pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar4,L"_Verse",6);
      if (pTVar4->End < pTVar4->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
      }
      _Str1 = L"Assets";
      iVar6 = 6;
      *pTVar4->CurPos = L'/';
      pTVar4->CurPos = pTVar4->CurPos + 1;
    }
    else {
      if (param_2 != (EVersePackageType *)0x0) {
        *param_2 = VNI;
      }
      if (_Str1 != (wchar_t *)0x0) {
        sVar5 = wcslen(_Str1);
        iVar6 = (int)sVar5;
      }
      *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
      __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
      __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
      if (__return_storage_ptr__ + 1 <
          (TStringBuilderWithBuffer<wchar_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,1)
        ;
      }
      *(undefined2 *)__return_storage_ptr__->_padding_ = 0x2f;
      __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 2;
      pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                         ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,_Str,iVar7);
      if (pTVar4->End < pTVar4->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
      }
      *pTVar4->CurPos = L'/';
      pTVar4->CurPos = pTVar4->CurPos + 1;
      pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar4,L"_Verse",6);
      if (pTVar4->End < pTVar4->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
      }
      *pTVar4->CurPos = L'/';
      pTVar4->CurPos = pTVar4->CurPos + 1;
      pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar4,L"VNI",3);
      if (pTVar4->End < pTVar4->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
      }
      *pTVar4->CurPos = L'/';
      pTVar4->CurPos = pTVar4->CurPos + 1;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar4,_Str1,iVar6);
  }
  return __return_storage_ptr__;
}

// GetUPackagePathForAssets<char8_t> @ 1422acc30

TStringBuilderWithBuffer<char8_t,64> * __cdecl
Verse::Names::GetUPackagePathForAssets<char8_t>
          (TStringBuilderWithBuffer<char8_t,64> *__return_storage_ptr__,
          TStringView<char8_t> *param_1)

{
  TStringBuilderBase<char8_t> *this;
  void *pvVar1;
  uchar *puVar2;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (__return_storage_ptr__ + 1 <
      (TStringBuilderWithBuffer<char8_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
    TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1);
  }
  *(undefined1 *)__return_storage_ptr__->_padding_ = 0x2f;
  __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
  this = operator<<<char8_t,TStringView<char8_t>_&>
                   ((TStringBuilderBase<char8_t> *)__return_storage_ptr__,param_1);
  if (this->End < this->CurPos + 1) {
    TStringBuilderBase<char8_t>::Extend(this,1);
  }
  *this->CurPos = '/';
  this->CurPos = this->CurPos + 1;
  puVar2 = this->CurPos;
  if (this->End < puVar2 + 6) {
    TStringBuilderBase<char8_t>::Extend(this,6);
    puVar2 = this->CurPos;
  }
  pvVar1 = FGenericPlatformString::Memcpy(puVar2,"_Verse",6);
  this->CurPos = (uchar *)((longlong)pvVar1 + 6);
  if (this->End < (uchar *)((longlong)pvVar1 + 7)) {
    TStringBuilderBase<char8_t>::Extend(this,1);
  }
  *this->CurPos = '/';
  this->CurPos = this->CurPos + 1;
  if (this->End < this->CurPos + 6) {
    TStringBuilderBase<char8_t>::Extend(this,6);
  }
  pvVar1 = FGenericPlatformString::Memcpy(this->CurPos,"Assets",6);
  this->CurPos = (uchar *)((longlong)pvVar1 + 6);
  return __return_storage_ptr__;
}

// GetUPackagePathForAssets<wchar_t> @ 1422acd50

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
Verse::Names::GetUPackagePathForAssets<wchar_t>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (__return_storage_ptr__ + 1 <
      (TStringBuilderWithBuffer<wchar_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,1);
  }
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  *(undefined2 *)__return_storage_ptr__->_padding_ = 0x2f;
  __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 2;
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,pwVar2,(int)uVar1);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  *pTVar3->CurPos = L'/';
  pTVar3->CurPos = pTVar3->CurPos + 1;
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,L"_Verse",6);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  *pTVar3->CurPos = L'/';
  pTVar3->CurPos = pTVar3->CurPos + 1;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,L"Assets",6);
  return __return_storage_ptr__;
}

// GetUPackagePathForContent<char8_t> @ 1422ace50

TStringBuilderWithBuffer<char8_t,64> * __cdecl
Verse::Names::GetUPackagePathForContent<char8_t>
          (TStringBuilderWithBuffer<char8_t,64> *__return_storage_ptr__,
          TStringView<char8_t> *param_1)

{
  TStringBuilderBase<char8_t> *this;
  void *pvVar1;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (__return_storage_ptr__ + 1 <
      (TStringBuilderWithBuffer<char8_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
    TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1);
  }
  *(undefined1 *)__return_storage_ptr__->_padding_ = 0x2f;
  __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
  this = operator<<<char8_t,TStringView<char8_t>_&>
                   ((TStringBuilderBase<char8_t> *)__return_storage_ptr__,param_1);
  if (this->End < this->CurPos + 1) {
    TStringBuilderBase<char8_t>::Extend(this,1);
  }
  *this->CurPos = '/';
  this->CurPos = this->CurPos + 1;
  if (this->End < this->CurPos + 6) {
    TStringBuilderBase<char8_t>::Extend(this,6);
  }
  pvVar1 = FGenericPlatformString::Memcpy(this->CurPos,"_Verse",6);
  this->CurPos = (uchar *)((longlong)pvVar1 + 6);
  return __return_storage_ptr__;
}

// GetUPackagePathForContent<wchar_t> @ 1422acf20

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
Verse::Names::GetUPackagePathForContent<wchar_t>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  TStringBuilderBase<wchar_t> *this;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (__return_storage_ptr__ + 1 <
      (TStringBuilderWithBuffer<wchar_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,1);
  }
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  *(undefined2 *)__return_storage_ptr__->_padding_ = 0x2f;
  __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 2;
  this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                   ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,pwVar2,(int)uVar1);
  if (this->End < this->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(this,1);
  }
  *this->CurPos = L'/';
  this->CurPos = this->CurPos + 1;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,L"_Verse",6);
  return __return_storage_ptr__;
}

// GetUPackagePathForVni<char8_t> @ 1422acfe0

TStringBuilderWithBuffer<char8_t,64> * __cdecl
Verse::Names::GetUPackagePathForVni<char8_t>
          (TStringBuilderWithBuffer<char8_t,64> *__return_storage_ptr__,
          TStringView<char8_t> *param_1,TStringView<char8_t> *param_2)

{
  TStringBuilderBase<char8_t> *this;
  void *pvVar1;
  uchar *puVar2;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (__return_storage_ptr__ + 1 <
      (TStringBuilderWithBuffer<char8_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
    TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1);
  }
  *(undefined1 *)__return_storage_ptr__->_padding_ = 0x2f;
  __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
  this = operator<<<char8_t,TStringView<char8_t>_&>
                   ((TStringBuilderBase<char8_t> *)__return_storage_ptr__,param_1);
  if (this->End < this->CurPos + 1) {
    TStringBuilderBase<char8_t>::Extend(this,1);
  }
  *this->CurPos = '/';
  this->CurPos = this->CurPos + 1;
  puVar2 = this->CurPos;
  if (this->End < puVar2 + 6) {
    TStringBuilderBase<char8_t>::Extend(this,6);
    puVar2 = this->CurPos;
  }
  pvVar1 = FGenericPlatformString::Memcpy(puVar2,"_Verse",6);
  this->CurPos = (uchar *)((longlong)pvVar1 + 6);
  if (this->End < (uchar *)((longlong)pvVar1 + 7)) {
    TStringBuilderBase<char8_t>::Extend(this,1);
  }
  *this->CurPos = '/';
  this->CurPos = this->CurPos + 1;
  puVar2 = this->CurPos;
  if (this->End < puVar2 + 3) {
    TStringBuilderBase<char8_t>::Extend(this,3);
    puVar2 = this->CurPos;
  }
  pvVar1 = FGenericPlatformString::Memcpy(puVar2,"VNI",3);
  this->CurPos = (uchar *)((longlong)pvVar1 + 3);
  if (this->End < (uchar *)((longlong)pvVar1 + 4)) {
    TStringBuilderBase<char8_t>::Extend(this,1);
  }
  *this->CurPos = '/';
  this->CurPos = this->CurPos + 1;
  operator<<<char8_t,TStringView<char8_t>_&>(this,param_2);
  return __return_storage_ptr__;
}

// GetUPackagePathForVni<wchar_t> @ 1422ad140

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
Verse::Names::GetUPackagePathForVni<wchar_t>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (__return_storage_ptr__ + 1 <
      (TStringBuilderWithBuffer<wchar_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,1);
  }
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  *(undefined2 *)__return_storage_ptr__->_padding_ = 0x2f;
  __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 2;
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,pwVar2,(int)uVar1);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  *pTVar3->CurPos = L'/';
  pTVar3->CurPos = pTVar3->CurPos + 1;
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,L"_Verse",6);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  *pTVar3->CurPos = L'/';
  pTVar3->CurPos = pTVar3->CurPos + 1;
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,L"VNI",3);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  uVar1 = *(undefined8 *)&param_2->Size;
  pwVar2 = param_2->DataPtr;
  *pTVar3->CurPos = L'/';
  pTVar3->CurPos = pTVar3->CurPos + 1;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,pwVar2,(int)uVar1);
  return __return_storage_ptr__;
}

// GetVersePackageDirForAssets<char8_t> @ 1422ad290

TStringBuilderWithBuffer<char8_t,64> * __cdecl
Verse::Names::GetVersePackageDirForAssets<char8_t>
          (TStringBuilderWithBuffer<char8_t,64> *__return_storage_ptr__,
          TStringView<char8_t> *param_1)

{
  TStringBuilderBase<char8_t> *this;
  void *pvVar1;
  uchar *puVar2;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (__return_storage_ptr__ + 1 <
      (TStringBuilderWithBuffer<char8_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
    TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1);
  }
  *(undefined1 *)__return_storage_ptr__->_padding_ = 0x2f;
  __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
  this = operator<<<char8_t,TStringView<char8_t>_&>
                   ((TStringBuilderBase<char8_t> *)__return_storage_ptr__,param_1);
  if (this->End < this->CurPos + 1) {
    TStringBuilderBase<char8_t>::Extend(this,1);
  }
  *this->CurPos = '/';
  this->CurPos = this->CurPos + 1;
  puVar2 = this->CurPos;
  if (this->End < puVar2 + 6) {
    TStringBuilderBase<char8_t>::Extend(this,6);
    puVar2 = this->CurPos;
  }
  pvVar1 = FGenericPlatformString::Memcpy(puVar2,"_Verse",6);
  this->CurPos = (uchar *)((longlong)pvVar1 + 6);
  if (this->End < (uchar *)((longlong)pvVar1 + 7)) {
    TStringBuilderBase<char8_t>::Extend(this,1);
  }
  *this->CurPos = '/';
  this->CurPos = this->CurPos + 1;
  puVar2 = this->CurPos;
  if (this->End < puVar2 + 6) {
    TStringBuilderBase<char8_t>::Extend(this,6);
    puVar2 = this->CurPos;
  }
  pvVar1 = FGenericPlatformString::Memcpy(puVar2,"Assets",6);
  this->CurPos = (uchar *)((longlong)pvVar1 + 6);
  if (this->End < (uchar *)((longlong)pvVar1 + 7)) {
    TStringBuilderBase<char8_t>::Extend(this,1);
  }
  *this->CurPos = '/';
  this->CurPos = this->CurPos + 1;
  return __return_storage_ptr__;
}

// GetVersePackageDirForAssets<wchar_t> @ 1422ad3e0

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
Verse::Names::GetVersePackageDirForAssets<wchar_t>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (__return_storage_ptr__ + 1 <
      (TStringBuilderWithBuffer<wchar_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,1);
  }
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  *(undefined2 *)__return_storage_ptr__->_padding_ = 0x2f;
  __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 2;
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,pwVar2,(int)uVar1);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  *pTVar3->CurPos = L'/';
  pTVar3->CurPos = pTVar3->CurPos + 1;
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,L"_Verse",6);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  *pTVar3->CurPos = L'/';
  pTVar3->CurPos = pTVar3->CurPos + 1;
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,L"Assets",6);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  *pTVar3->CurPos = L'/';
  pTVar3->CurPos = pTVar3->CurPos + 1;
  return __return_storage_ptr__;
}

// GetVersePackageDirForContent<char8_t> @ 1422ad510

TStringBuilderWithBuffer<char8_t,64> * __cdecl
Verse::Names::GetVersePackageDirForContent<char8_t>
          (TStringBuilderWithBuffer<char8_t,64> *__return_storage_ptr__,
          TStringView<char8_t> *param_1)

{
  TStringBuilderBase<char8_t> *this;
  void *pvVar1;
  uchar *puVar2;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (__return_storage_ptr__ + 1 <
      (TStringBuilderWithBuffer<char8_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
    TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1);
  }
  *(undefined1 *)__return_storage_ptr__->_padding_ = 0x2f;
  __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
  this = operator<<<char8_t,TStringView<char8_t>_&>
                   ((TStringBuilderBase<char8_t> *)__return_storage_ptr__,param_1);
  if (this->End < this->CurPos + 1) {
    TStringBuilderBase<char8_t>::Extend(this,1);
  }
  *this->CurPos = '/';
  this->CurPos = this->CurPos + 1;
  puVar2 = this->CurPos;
  if (this->End < puVar2 + 6) {
    TStringBuilderBase<char8_t>::Extend(this,6);
    puVar2 = this->CurPos;
  }
  pvVar1 = FGenericPlatformString::Memcpy(puVar2,"_Verse",6);
  this->CurPos = (uchar *)((longlong)pvVar1 + 6);
  if (this->End < (uchar *)((longlong)pvVar1 + 7)) {
    TStringBuilderBase<char8_t>::Extend(this,1);
  }
  *this->CurPos = '/';
  this->CurPos = this->CurPos + 1;
  return __return_storage_ptr__;
}

// GetVersePackageDirForContent<wchar_t> @ 1422ad600

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
Verse::Names::GetVersePackageDirForContent<wchar_t>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (__return_storage_ptr__ + 1 <
      (TStringBuilderWithBuffer<wchar_t,64> *)(__return_storage_ptr__->StringBuffer + 1)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,1);
  }
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  *(undefined2 *)__return_storage_ptr__->_padding_ = 0x2f;
  __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 2;
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,pwVar2,(int)uVar1);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  *pTVar3->CurPos = L'/';
  pTVar3->CurPos = pTVar3->CurPos + 1;
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,L"_Verse",6);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  *pTVar3->CurPos = L'/';
  pTVar3->CurPos = pTVar3->CurPos + 1;
  return __return_storage_ptr__;
}

// GetVersePackageNameForAssets<char8_t> @ 1422ad6f0

TStringBuilderWithBuffer<char8_t,64> * __cdecl
Verse::Names::GetVersePackageNameForAssets<char8_t>
          (TStringBuilderWithBuffer<char8_t,64> *__return_storage_ptr__,
          TStringView<char8_t> *param_1)

{
  TStringBuilderBase<char8_t> *this;
  void *pvVar1;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  this = operator<<<char8_t,TStringView<char8_t>_&>
                   ((TStringBuilderBase<char8_t> *)__return_storage_ptr__,param_1);
  if (this->End < this->CurPos + 1) {
    TStringBuilderBase<char8_t>::Extend(this,1);
  }
  *this->CurPos = '/';
  this->CurPos = this->CurPos + 1;
  if (this->End < this->CurPos + 6) {
    TStringBuilderBase<char8_t>::Extend(this,6);
  }
  pvVar1 = FGenericPlatformString::Memcpy(this->CurPos,"Assets",6);
  this->CurPos = (uchar *)((longlong)pvVar1 + 6);
  return __return_storage_ptr__;
}

// GetVersePackageNameForAssets<wchar_t> @ 1422ad790

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
Verse::Names::GetVersePackageNameForAssets<wchar_t>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  TStringBuilderBase<wchar_t> *this;
  
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                   ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,pwVar2,(int)uVar1);
  if (this->End < this->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(this,1);
  }
  *this->CurPos = L'/';
  this->CurPos = this->CurPos + 1;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,L"Assets",6);
  return __return_storage_ptr__;
}

// GetVersePackageNameForContent<char8_t> @ 1422ad820

TStringBuilderWithBuffer<char8_t,64> * __cdecl
Verse::Names::GetVersePackageNameForContent<char8_t>
          (TStringBuilderWithBuffer<char8_t,64> *__return_storage_ptr__,
          TStringView<char8_t> *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  operator<<<char8_t,TStringView<char8_t>_&>
            ((TStringBuilderBase<char8_t> *)__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetVersePackageNameForContent<wchar_t> @ 1422ad860

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
Verse::Names::GetVersePackageNameForContent<wchar_t>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,pwVar2,(int)uVar1);
  return __return_storage_ptr__;
}

// GetVersePackageNameForPublishedContent<char8_t> @ 1422ad8a0

TStringBuilderWithBuffer<char8_t,64> * __cdecl
Verse::Names::GetVersePackageNameForPublishedContent<char8_t>
          (TStringBuilderWithBuffer<char8_t,64> *__return_storage_ptr__,
          TStringView<char8_t> *param_1)

{
  TStringBuilderBase<char8_t> *this;
  void *pvVar1;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  this = operator<<<char8_t,TStringView<char8_t>_&>
                   ((TStringBuilderBase<char8_t> *)__return_storage_ptr__,param_1);
  if (this->End < this->CurPos + 10) {
    TStringBuilderBase<char8_t>::Extend(this,10);
  }
  pvVar1 = FGenericPlatformString::Memcpy(this->CurPos,"-Published",10);
  this->CurPos = (uchar *)((longlong)pvVar1 + 10);
  return __return_storage_ptr__;
}

// GetVersePackageNameForPublishedContent<wchar_t> @ 1422ad920

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
Verse::Names::GetVersePackageNameForPublishedContent<wchar_t>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  TStringBuilderBase<wchar_t> *this;
  
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                   ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,pwVar2,(int)uVar1);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,L"-Published",10);
  return __return_storage_ptr__;
}

// GetVersePackageNameForVni<char8_t> @ 1422ad980

TStringBuilderWithBuffer<char8_t,64> * __cdecl
Verse::Names::GetVersePackageNameForVni<char8_t>
          (TStringBuilderWithBuffer<char8_t,64> *__return_storage_ptr__,
          TStringView<char8_t> *param_1,TStringView<char8_t> *param_2)

{
  TStringBuilderBase<char8_t> *this;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  this = operator<<<char8_t,TStringView<char8_t>_&>
                   ((TStringBuilderBase<char8_t> *)__return_storage_ptr__,param_1);
  if (this->End < this->CurPos + 1) {
    TStringBuilderBase<char8_t>::Extend(this,1);
  }
  *this->CurPos = '/';
  this->CurPos = this->CurPos + 1;
  operator<<<char8_t,TStringView<char8_t>_&>(this,param_2);
  return __return_storage_ptr__;
}

// GetVersePackageNameForVni<wchar_t> @ 1422ada00

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
Verse::Names::GetVersePackageNameForVni<wchar_t>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  TStringBuilderBase<wchar_t> *this;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                   ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,pwVar2,(int)uVar1);
  if (this->End < this->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(this,1);
  }
  uVar1 = *(undefined8 *)&param_2->Size;
  pwVar2 = param_2->DataPtr;
  *this->CurPos = L'/';
  this->CurPos = this->CurPos + 1;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,pwVar2,(int)uVar1);
  return __return_storage_ptr__;
}

// NameToShortName<FString> @ 1422ada90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TOptional<FString> * __cdecl
Verse::NameToShortName<FString>(TOptional<FString> *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  TOptional<FString> *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FString local_18;
  
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  for (pFVar7 = pFVar1; pFVar7 != pFVar1 + (longlong)(param_1->Data).ArrayNum * 2;
      pFVar7 = pFVar7 + 2) {
    if (*(short *)pFVar7 == 0x78) {
      iVar6 = (int)((longlong)pFVar7 - (longlong)pFVar1 >> 1);
      if (iVar6 != -1) {
        ::FString::RemoveAt(param_1,0,iVar6 + 1,Default);
        pFVar1 = (param_1->Data).AllocatorInstance.Data;
        pFVar7 = pFVar1;
        goto joined_r0x0001422adb1a;
      }
      break;
    }
  }
LAB_1422adac3:
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
LAB_1422adad2:
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
joined_r0x0001422adb1a:
  if (pFVar7 == pFVar1 + (longlong)(param_1->Data).ArrayNum * 2) goto LAB_1422adac3;
  if (*(short *)pFVar7 == 0x5f) {
    iVar6 = (int)((longlong)pFVar7 - (longlong)pFVar1 >> 1);
    if (iVar6 != -1) {
      pFVar4 = ::FString::RightChop(param_1,&local_18,iVar6 + 1);
      (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
           (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar4->Data).ArrayNum;
      *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
      if ((*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TOptional<FString> *)(*pcVar2)();
        return pTVar5;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      goto LAB_1422adad2;
    }
    goto LAB_1422adac3;
  }
  pFVar7 = pFVar7 + 2;
  goto joined_r0x0001422adb1a;
}

// StaticEnum<enum_EVersePackageScope> @ 1422adbc0

UEnum * __cdecl StaticEnum<enum_EVersePackageScope>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVersePackageScope.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EVersePackageScope.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVersePackageScope,(UObject *)pUVar1,
                       L"EVersePackageScope");
  }
  return Z_Registration_Info_UEnum_EVersePackageScope.OuterSingleton;
}

// StaticEnum<enum_EVersePackageType> @ 1422adc00

UEnum * __cdecl StaticEnum<enum_EVersePackageType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVersePackageType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EVersePackageType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVersePackageType,(UObject *)pUVar1,
                       L"EVersePackageType");
  }
  return Z_Registration_Info_UEnum_EVersePackageType.OuterSingleton;
}

// StrCast<char8_t,128,wchar_t> @ 1422adc40

TStringConversion<TStringConvert<wchar_t,char8_t>,128> * __cdecl
StrCast<char8_t,128,wchar_t>
          (TStringConversion<TStringConvert<wchar_t,char8_t>,128> *__return_storage_ptr__,
          wchar_t *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uchar *puVar4;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar5;
  uint uVar6;
  
  __return_storage_ptr__->_padding_ = 0;
  uVar3 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,param_2);
  __return_storage_ptr__->StringLength = uVar3;
  uVar6 = uVar3;
  if (uVar3 < 0x81) {
    if (__return_storage_ptr__->_padding_ == 0) goto LAB_1422adcaa;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&__return_storage_ptr__->_padding_,0,uVar6,1);
LAB_1422adcaa:
  pTVar5 = __return_storage_ptr__;
  if ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)__return_storage_ptr__->_padding_ !=
      (TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)0x0) {
    pTVar5 = (TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)
             __return_storage_ptr__->_padding_;
  }
  __return_storage_ptr__->Ptr = (uchar *)pTVar5;
  puVar4 = UE::Core::Private::Convert((uchar *)pTVar5,uVar3,param_1,param_2);
  if ((puVar4 == (uchar *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)(*pcVar1)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

// get<1,TTuple<FString,TSharedPtr<FJsonValue,1>_>_const_&> @ 1422add20

TSharedPtr<FJsonValue,1> * __cdecl
get<1,TTuple<FString,TSharedPtr<FJsonValue,1>_>_const_&>
          (TTuple<FString,TSharedPtr<FJsonValue,1>_> *param_1)

{
  return (TSharedPtr<FJsonValue,1> *)&param_1->field_0x10;
}

// get<0,TTuple<FString,TSharedPtr<FJsonValue,1>_>_const_&> @ 1422add30

FString * __cdecl
get<0,TTuple<FString,TSharedPtr<FJsonValue,1>_>_const_&>
          (TTuple<FString,TSharedPtr<FJsonValue,1>_> *param_1)

{
  return (FString *)param_1;
}

// AddVerseDeadPrefix @ 1422ade70

FString * __cdecl
Verse::Names::AddVerseDeadPrefix(FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  FStringFormatArg local_58;
  FStringFormatArg local_38;
  
  iVar5 = param_1->Size;
  FVar7.Data = (FScriptContainerElement *)0x0;
  uVar9 = Private::DeadPrefix.DataPtr._0_4_;
  uVar10 = Private::DeadPrefix.DataPtr._4_4_;
  iVar11 = Private::DeadPrefix.Size;
  uVar12 = Private::DeadPrefix._12_4_;
  if (0xb < iVar5) {
    iVar5 = 0xb;
  }
  iVar8 = 0;
  if (0 < iVar5) {
    iVar8 = iVar5;
  }
  if (iVar8 == 0xb) {
    iVar5 = FGenericPlatformStricmp::Strnicmp(Private::DeadPrefix.DataPtr,param_1->DataPtr,0xb);
    if (iVar5 == 0) {
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      pFVar6 = ::FString::ConstructFromPtrSize
                         ((FString *)&local_68,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
      if (&local_88 != pFVar6) {
        FVar7.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        local_88.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
        local_88.Data.AllocatorInstance.Data = FVar7.Data;
      }
      if (local_68.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_68.DataPtr);
      }
      pFVar6 = &local_88;
      bVar4 = true;
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      goto LAB_1422adfd6;
    }
    uVar9 = Private::DeadPrefix.DataPtr._0_4_;
    uVar10 = Private::DeadPrefix.DataPtr._4_4_;
    iVar11 = Private::DeadPrefix.Size;
    uVar12 = Private::DeadPrefix._12_4_;
  }
  local_68.DataPtr = (wchar_t *)CONCAT44(uVar10,uVar9);
  local_68._12_4_ = uVar12;
  local_68.Size = iVar11;
  FStringFormatArg::FStringFormatArg(&local_58,&local_68);
  local_68.DataPtr = param_1->DataPtr;
  local_68.Size = param_1->Size;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FStringFormatArg::FStringFormatArg(&local_38,&local_68);
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_98.AllocatorInstance.Data,&local_58,2)
  ;
  ::FString::FormatImpl(&local_78,L"{0}{1}",&local_98);
  pFVar6 = &local_78;
  bVar4 = false;
  bVar3 = true;
  bVar2 = true;
  bVar1 = true;
  FVar7.Data = local_78.Data.AllocatorInstance.Data;
LAB_1422adfd6:
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (pFVar6->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar7.Data;
  (__return_storage_ptr__->Data).ArrayNum = iVar5;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  if ((bVar1) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((bVar2) &&
     (DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum),
     (FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0)) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (bVar3) {
    if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar4) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AppendToString @ 1422ae090

void __cdecl
Verse::AppendToString
          (TStringBuilderBase<char8_t> *param_1,UObject *param_2,EValueStringFormat param_3,
          TSet<void_const_*,DefaultKeyFuncs<void_const_*,0>,FDefaultSetAllocator> *param_4,
          uint param_5)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  FObjectPrintHandlerRegistry *SRWLock;
  uchar *puVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  UObject *pUVar11;
  uchar **ppuVar12;
  undefined1 local_48 [4];
  undefined1 local_44 [12];
  FString local_38;
  
  if (param_3 - Cells < 2) {
    puVar7 = param_1->CurPos;
    if (param_1->End < puVar7 + 7) {
      TStringBuilderBase<char8_t>::Extend(param_1,7);
      puVar7 = param_1->CurPos;
    }
    pvVar6 = FGenericPlatformString::Memcpy(puVar7,"UObject",7);
    param_1->CurPos = (uchar *)((longlong)pvVar6 + 7);
    if (param_3 == CellsWithAddresses) {
      TStringBuilderBase<char8_t>::AppendfImpl(param_1,(uchar *)"@0x%p");
    }
    if (param_1->End < param_1->CurPos + 1) {
      TStringBuilderBase<char8_t>::Extend(param_1,1);
    }
    *param_1->CurPos = '(';
    param_1->CurPos = param_1->CurPos + 1;
    puVar7 = param_1->CurPos;
    if ((param_3 == CellsWithAddresses) &&
       (uVar8 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
                -0x7a143595, uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb,
       *(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34)) {
      FVar9 = (param_4->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&param_4->Hash;
      }
      iVar10 = *(int *)((longlong)FVar9 +
                       (ulonglong)(param_4->HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
      if (iVar10 != -1) {
        do {
          if (*(UObject **)(*(longlong *)&param_4->Elements + (longlong)iVar10 * 0x10) == param_2) {
            if (iVar10 != -1) goto LAB_1422ae386;
            break;
          }
          iVar10 = *(int *)(*(longlong *)&param_4->Elements + 8 + (longlong)iVar10 * 0x10);
        } while (iVar10 != -1);
      }
    }
  }
  ppuVar12 = &param_1->CurPos;
  if (param_2 != (UObject *)0x0) {
    SRWLock = _anon_77A772C6::FObjectPrintHandlerRegistry::Get();
    if ((SRWLock == (FObjectPrintHandlerRegistry *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pUVar11 = (UObject *)(SRWLock->Handlers).AllocatorInstance.Data;
    iVar10 = (SRWLock->Handlers).ArrayNum;
    local_44._4_8_ = (longlong)&pUVar11->field_0x0 + (longlong)iVar10 * 8;
    while( true ) {
      if ((SRWLock->Handlers).ArrayNum != iVar10) {
        `TCheckedPointerIterator<Verse::ObjectPrinting::FHandler_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_48);
      }
      if (pUVar11 == (UObject *)local_44._4_8_) {
        bVar3 = false;
        goto LAB_1422ae2b0;
      }
      cVar4 = (**(code **)**(undefined8 **)pUVar11)
                        (*(undefined8 **)pUVar11,param_2,param_1,param_3,param_4,param_5);
      if (cVar4 != '\0') break;
      pUVar11 = (UObject *)&pUVar11->field_0x8;
    }
    bVar3 = true;
LAB_1422ae2b0:
    if (SRWLock != (FObjectPrintHandlerRegistry *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    if (bVar3) goto LAB_1422ae371;
  }
  local_44._4_8_ = param_2;
  TSet<void_const_*,DefaultKeyFuncs<void_const_*,0>,FDefaultSetAllocator>::Emplace<void_const_*>
            (param_4,(void **)local_44,(bool *)(local_44 + 4));
  if ((param_2 == (UObject *)0x0) || (*(longlong *)&param_2->field_0x10 == 0)) {
    ::FString::FString(&local_38,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0,None);
  }
  FVar2.Data = local_38.Data.AllocatorInstance.Data;
  iVar10 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  iVar5 = UE::Core::Private::GetConvertedLength
                    ((uchar *)0x0,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar10);
  if (param_1->End < *ppuVar12 + iVar5) {
    TStringBuilderBase<char8_t>::Extend(param_1,(longlong)iVar5);
  }
  if (iVar10 != 0) {
    puVar7 = UE::Core::Private::Convert(*ppuVar12,iVar5,(wchar_t *)FVar2.Data,iVar10);
    *ppuVar12 = puVar7;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_1422ae371:
  if (param_3 - Cells < 2) {
    puVar7 = *ppuVar12;
LAB_1422ae386:
    if (param_1->End < puVar7 + 1) {
      TStringBuilderBase<char8_t>::Extend(param_1,1);
    }
    *param_1->CurPos = ')';
    param_1->CurPos = param_1->CurPos + 1;
  }
  return;
}

// DecodeName @ 1422ae3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
Verse::Names::Private::DecodeName(FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar3;
  FUtf8String *pFVar4;
  FString *pFVar5;
  int iVar6;
  undefined1 auStack_f8 [32];
  TStringView<char8_t> local_d8;
  FUtf8String local_c8;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pTVar3 = StrCast<char8_t,128,wchar_t>(&local_b8,param_1->DataPtr,param_1->Size);
  local_d8.DataPtr = pTVar3->Ptr;
  local_d8.Size = pTVar3->StringLength;
  pFVar4 = DecodeName(&local_c8,&local_d8);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  pFVar5 = ::FString::ConstructFromPtrSize
                     ((FString *)&local_d8,(uchar *)(pFVar4->Data).AllocatorInstance.Data,iVar6);
  if (__return_storage_ptr__ != pFVar5) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_d8.DataPtr != (uchar *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  return __return_storage_ptr__;
}

// DecodeName @ 1422ae4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUtf8String * __cdecl
Verse::Names::Private::DecodeName(FUtf8String *__return_storage_ptr__,TStringView<char8_t> *param_1)

{
  uchar uVar1;
  byte bVar2;
  uchar *puVar3;
  char *_Str;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FUtf8String *pFVar7;
  FEscapeCode *pFVar8;
  void *pvVar9;
  size_t sVar10;
  uchar *puVar11;
  int iVar12;
  int iVar13;
  ulong64 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  int local_160;
  FUtf8String *local_158;
  uchar *local_150;
  int iStack_148;
  undefined4 uStack_144;
  uchar *local_140;
  int iStack_138;
  undefined4 uStack_134;
  uchar *local_130;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  FUtf8String local_110;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  TStringBuilderBase<char8_t> local_e8;
  uchar local_c8 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  local_e8.End = (uchar *)local_48;
  puVar11 = local_c8;
  local_e8.Base = local_c8;
  iVar13 = param_1->Size;
  local_e8.bIsDynamic = false;
  local_e8.bIsExternal = false;
  local_e8.CurPos = puVar11;
  do {
    local_158 = __return_storage_ptr__;
    if (iVar13 == 0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      pFVar7 = FUtf8String::ConstructFromPtrSize
                         (&local_110,local_e8.Base,(int)local_e8.CurPos - (int)local_e8.Base);
      if (__return_storage_ptr__ != pFVar7) {
        pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_e8);
      return __return_storage_ptr__;
    }
    if (iVar13 < 1) {
      local_168 = 0;
      local_160 = iVar13;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        );
      puVar11 = local_e8.CurPos;
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FUtf8String *)(*pcVar5)();
        return pFVar7;
      }
    }
    puVar3 = param_1->DataPtr;
    uVar1 = *puVar3;
    if ((uVar1 == '_') && (1 < iVar13)) {
      bVar2 = puVar3[1];
      pFVar8 = EscapeCodes;
      do {
        if (bVar2 == pFVar8->Escaped) {
          _Str = pFVar8->Unescaped;
          iVar13 = 0;
          if (_Str != (char *)0x0) {
            sVar10 = strlen(_Str);
            iVar13 = (int)sVar10;
          }
          uVar14 = (ulong64)iVar13;
          if (local_e8.End < puVar11 + uVar14) {
            TStringBuilderBase<char8_t>::Extend(&local_e8,uVar14);
            puVar11 = local_e8.CurPos;
          }
          if (iVar13 != 0) {
            pvVar9 = FGenericPlatformString::Memcpy(puVar11,_Str,uVar14);
            puVar11 = (uchar *)((longlong)pvVar9 + uVar14);
            local_e8.CurPos = puVar11;
          }
          iVar13 = param_1->Size;
          iVar12 = iVar13;
          if (iVar13 + -2 < iVar13) {
            iVar12 = iVar13 + -2;
          }
          iVar15 = 0;
          if (0 < iVar12) {
            iVar15 = iVar12;
          }
          local_140 = puVar3 + ((longlong)iVar13 - (longlong)iVar15);
          uVar16 = uStack_134;
          iStack_138 = iVar15;
          puVar3 = local_140;
          goto LAB_1422ae83b;
        }
        pFVar8 = pFVar8 + 1;
      } while (pFVar8 != (FEscapeCode *)&s___);
      if (2 < param_1->Size) {
        if ((byte)(bVar2 - 0x30) < 10) {
          iVar13 = bVar2 - 0x30;
        }
        else if ((byte)(bVar2 + 0x9f) < 6) {
          iVar13 = bVar2 - 0x57;
        }
        else {
          iVar13 = bVar2 - 0x37;
          if (5 < (byte)(bVar2 + 0xbf)) {
            iVar13 = -1;
          }
        }
        bVar2 = puVar3[2];
        if ((byte)(bVar2 - 0x30) < 10) {
          iVar12 = bVar2 - 0x30;
        }
        else if ((byte)(bVar2 + 0x9f) < 6) {
          iVar12 = bVar2 - 0x57;
        }
        else {
          iVar12 = bVar2 - 0x37;
          if (5 < (byte)(bVar2 + 0xbf)) {
            iVar12 = -1;
          }
        }
        if ((iVar13 == -1) || (iVar12 == -1)) {
          iVar13 = param_1->Size;
          if (3 < param_1->Size) {
            iVar13 = 3;
          }
          iVar12 = 0;
          if (0 < iVar13) {
            iVar12 = iVar13;
          }
          uVar14 = (ulong64)iVar12;
          if (local_e8.End < puVar11 + uVar14) {
            TStringBuilderBase<char8_t>::Extend(&local_e8,uVar14);
            puVar11 = local_e8.CurPos;
          }
          if (iVar12 != 0) {
            pvVar9 = FGenericPlatformString::Memcpy(puVar11,puVar3,uVar14);
            puVar11 = (uchar *)((longlong)pvVar9 + uVar14);
            local_e8.CurPos = puVar11;
          }
        }
        else {
          if (local_e8.End < puVar11 + 1) {
            TStringBuilderBase<char8_t>::Extend(&local_e8,1);
            puVar11 = local_e8.CurPos;
          }
          *puVar11 = (char)iVar13 * '\x10' + (char)iVar12;
          puVar11 = local_e8.CurPos + 1;
          local_e8.CurPos = puVar11;
        }
        iVar13 = param_1->Size;
        iVar12 = iVar13;
        if (iVar13 + -3 < iVar13) {
          iVar12 = iVar13 + -3;
        }
        iVar15 = 0;
        if (0 < iVar12) {
          iVar15 = iVar12;
        }
        local_150 = puVar3 + ((longlong)iVar13 - (longlong)iVar15);
        uVar16 = uStack_144;
        iStack_148 = iVar15;
        puVar3 = local_150;
        goto LAB_1422ae83b;
      }
      local_120 = *(undefined4 *)&param_1->DataPtr;
      uStack_11c = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
      iStack_118 = param_1->Size;
      uStack_114 = *(undefined4 *)&param_1->field_0xc;
      iVar13 = (int)*(undefined8 *)&param_1->Size;
      uVar14 = (ulong64)iVar13;
      local_100 = local_120;
      uStack_fc = uStack_11c;
      iStack_f8 = iStack_118;
      uStack_f4 = uStack_114;
      if (local_e8.End < puVar11 + uVar14) {
        TStringBuilderBase<char8_t>::Extend(&local_e8,uVar14);
        puVar11 = local_e8.CurPos;
      }
      if (iVar13 != 0) {
        pvVar9 = FGenericPlatformString::Memcpy
                           (puVar11,(void *)CONCAT44(uStack_11c,local_120),uVar14);
        puVar11 = (uchar *)((longlong)pvVar9 + uVar14);
        local_e8.CurPos = puVar11;
      }
      param_1->DataPtr = (uchar *)0x0;
      param_1->Size = 0;
    }
    else {
      if (local_e8.End < puVar11 + 1) {
        TStringBuilderBase<char8_t>::Extend(&local_e8,1);
        puVar11 = local_e8.CurPos;
      }
      *puVar11 = uVar1;
      puVar11 = local_e8.CurPos + 1;
      iVar12 = iVar13;
      if (iVar13 + -1 < iVar13) {
        iVar12 = iVar13 + -1;
      }
      iVar15 = 0;
      if (0 < iVar12) {
        iVar15 = iVar12;
      }
      local_130 = puVar3 + ((longlong)iVar13 - (longlong)iVar15);
      uVar16 = uStack_124;
      iStack_128 = iVar15;
      local_e8.CurPos = puVar11;
      puVar3 = local_130;
LAB_1422ae83b:
      param_1->DataPtr = puVar3;
      param_1->Size = iVar15;
      *(undefined4 *)&param_1->field_0xc = uVar16;
    }
    iVar13 = param_1->Size;
    __return_storage_ptr__ = local_158;
  } while( true );
}

// EmptyLinkFunctionForGeneratedCodeVVMPackageTypes @ 1422ae930

void __cdecl EmptyLinkFunctionForGeneratedCodeVVMPackageTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVVMProfilingLibrary @ 1422ae940

void __cdecl EmptyLinkFunctionForGeneratedCodeVVMProfilingLibrary(void)

{
  return;
}

// EncodeName @ 1422ae950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
Verse::Names::Private::EncodeName(FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar3;
  FUtf8String *pFVar4;
  FString *pFVar5;
  int iVar6;
  undefined1 auStack_f8 [32];
  TStringView<char8_t> local_d8;
  FUtf8String local_c8;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pTVar3 = StrCast<char8_t,128,wchar_t>(&local_b8,param_1->DataPtr,param_1->Size);
  local_d8.DataPtr = pTVar3->Ptr;
  local_d8.Size = pTVar3->StringLength;
  pFVar4 = EncodeName(&local_c8,&local_d8);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  pFVar5 = ::FString::ConstructFromPtrSize
                     ((FString *)&local_d8,(uchar *)(pFVar4->Data).AllocatorInstance.Data,iVar6);
  if (__return_storage_ptr__ != pFVar5) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_d8.DataPtr != (uchar *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  return __return_storage_ptr__;
}

// EncodeName @ 1422aea70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUtf8String * __cdecl
Verse::Names::Private::EncodeName(FUtf8String *__return_storage_ptr__,TStringView<char8_t> *param_1)

{
  byte bVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FUtf8String *pFVar7;
  void *pvVar8;
  int iVar9;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  int local_120;
  byte *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  uchar *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  uchar *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FUtf8String local_e8;
  TStringBuilderBase<char8_t> local_d8;
  byte local_b8 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_148;
  local_d8.bIsDynamic = false;
  local_d8.bIsExternal = false;
  local_d8.Base = local_b8;
  local_d8.CurPos = local_b8;
  bVar6 = true;
  local_d8.End = (uchar *)local_38;
  iVar9 = param_1->Size;
  iVar2 = local_120;
  do {
    local_120 = iVar9;
    if (local_120 == 0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      local_120 = iVar2;
      pFVar7 = FUtf8String::ConstructFromPtrSize
                         (&local_e8,local_d8.Base,(int)local_d8.CurPos - (int)local_d8.Base);
      if (__return_storage_ptr__ != pFVar7) {
        pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_d8);
      return __return_storage_ptr__;
    }
    if (local_120 < 1) {
      local_128 = 0;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        );
      iVar2 = local_120;
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FUtf8String *)(*pcVar4)();
        return pFVar7;
      }
    }
    local_120 = iVar2;
    iVar2 = param_1->Size;
    bVar1 = *param_1->DataPtr;
    iVar9 = iVar2;
    if (iVar2 + -1 < iVar2) {
      iVar9 = iVar2 + -1;
    }
    iStack_110 = 0;
    if (0 < iVar9) {
      iStack_110 = iVar9;
    }
    local_118 = param_1->DataPtr + ((longlong)iVar2 - (longlong)iStack_110);
    param_1->DataPtr = local_118;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_10c,iStack_110);
    if ((((bVar1 < 0x61) || (0x7a < bVar1)) && (0x19 < (byte)(bVar1 + 0xbf))) &&
       ((9 < (byte)(bVar1 - 0x30) || (bVar6)))) {
      if (bVar1 == 0x5b) {
        iVar2 = param_1->Size;
        if (iVar2 != 0) {
          if (iVar2 < 1) {
            local_128 = 0;
            local_120 = iVar2;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              );
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pFVar7 = (FUtf8String *)(*pcVar4)();
              return pFVar7;
            }
          }
          if (*param_1->DataPtr == ']') {
            iVar9 = iVar2;
            if (iVar2 + -1 < iVar2) {
              iVar9 = iVar2 + -1;
            }
            iStack_100 = 0;
            if (0 < iVar9) {
              iStack_100 = iVar9;
            }
            local_108 = param_1->DataPtr + ((longlong)iVar2 - (longlong)iStack_100);
            param_1->DataPtr = local_108;
            *(ulonglong *)&param_1->Size = CONCAT44(uStack_fc,iStack_100);
            if (local_d8.End < local_d8.CurPos + 2) {
              TStringBuilderBase<char8_t>::Extend(&local_d8,2);
            }
            pvVar8 = FGenericPlatformString::Memcpy(local_d8.CurPos,"_K",2);
            local_d8.CurPos = (uchar *)((longlong)pvVar8 + 2);
            goto LAB_1422aef51;
          }
        }
      }
      else {
        if (bVar1 != 0x2d) {
          if (bVar1 == 0x5f) {
            if (local_d8.End < local_d8.CurPos + 2) {
              TStringBuilderBase<char8_t>::Extend(&local_d8,2);
            }
            pvVar8 = FGenericPlatformString::Memcpy(local_d8.CurPos,"__",2);
            local_d8.CurPos = (uchar *)((longlong)pvVar8 + 2);
          }
          else if (bVar1 == 0x28) {
            if (local_d8.End < local_d8.CurPos + 2) {
              TStringBuilderBase<char8_t>::Extend(&local_d8,2);
            }
            pvVar8 = FGenericPlatformString::Memcpy(local_d8.CurPos,"_L",2);
            local_d8.CurPos = (uchar *)((longlong)pvVar8 + 2);
          }
          else if (bVar1 == 0x2c) {
            if (local_d8.End < local_d8.CurPos + 2) {
              TStringBuilderBase<char8_t>::Extend(&local_d8,2);
            }
            pvVar8 = FGenericPlatformString::Memcpy(local_d8.CurPos,"_M",2);
            local_d8.CurPos = (uchar *)((longlong)pvVar8 + 2);
          }
          else if (bVar1 == 0x3a) {
            if (local_d8.End < local_d8.CurPos + 2) {
              TStringBuilderBase<char8_t>::Extend(&local_d8,2);
            }
            pvVar8 = FGenericPlatformString::Memcpy(local_d8.CurPos,"_N",2);
            local_d8.CurPos = (uchar *)((longlong)pvVar8 + 2);
          }
          else if (bVar1 == 0x5e) {
            if (local_d8.End < local_d8.CurPos + 2) {
              TStringBuilderBase<char8_t>::Extend(&local_d8,2);
            }
            pvVar8 = FGenericPlatformString::Memcpy(local_d8.CurPos,"_P",2);
            local_d8.CurPos = (uchar *)((longlong)pvVar8 + 2);
          }
          else if (bVar1 == 0x3f) {
            if (local_d8.End < local_d8.CurPos + 2) {
              TStringBuilderBase<char8_t>::Extend(&local_d8,2);
            }
            pvVar8 = FGenericPlatformString::Memcpy(local_d8.CurPos,"_Q",2);
            local_d8.CurPos = (uchar *)((longlong)pvVar8 + 2);
          }
          else if (bVar1 == 0x29) {
            if (local_d8.End < local_d8.CurPos + 2) {
              TStringBuilderBase<char8_t>::Extend(&local_d8,2);
            }
            pvVar8 = FGenericPlatformString::Memcpy(local_d8.CurPos,"_R",2);
            local_d8.CurPos = (uchar *)((longlong)pvVar8 + 2);
          }
          else {
            if (bVar1 != 0x27) goto LAB_1422aef0a;
            if (local_d8.End < local_d8.CurPos + 2) {
              TStringBuilderBase<char8_t>::Extend(&local_d8,2);
            }
            pvVar8 = FGenericPlatformString::Memcpy(local_d8.CurPos,"_U",2);
            local_d8.CurPos = (uchar *)((longlong)pvVar8 + 2);
          }
          goto LAB_1422aef51;
        }
        iVar2 = param_1->Size;
        if (iVar2 != 0) {
          if (iVar2 < 1) {
            local_128 = 0;
            local_120 = iVar2;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              );
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pFVar7 = (FUtf8String *)(*pcVar4)();
              return pFVar7;
            }
          }
          if (*param_1->DataPtr == '>') {
            iVar9 = iVar2;
            if (iVar2 + -1 < iVar2) {
              iVar9 = iVar2 + -1;
            }
            iStack_f0 = 0;
            if (0 < iVar9) {
              iStack_f0 = iVar9;
            }
            local_f8 = param_1->DataPtr + ((longlong)iVar2 - (longlong)iStack_f0);
            param_1->DataPtr = local_f8;
            *(ulonglong *)&param_1->Size = CONCAT44(uStack_ec,iStack_f0);
            if (local_d8.End < local_d8.CurPos + 2) {
              TStringBuilderBase<char8_t>::Extend(&local_d8,2);
            }
            pvVar8 = FGenericPlatformString::Memcpy(local_d8.CurPos,"_T",2);
            local_d8.CurPos = (uchar *)((longlong)pvVar8 + 2);
            goto LAB_1422aef51;
          }
        }
      }
LAB_1422aef0a:
      TStringBuilderBase<char8_t>::AppendfImpl(&local_d8,(uchar *)"_%.2x");
    }
    else {
      if (local_d8.End < local_d8.CurPos + 1) {
        TStringBuilderBase<char8_t>::Extend(&local_d8,1);
      }
      *local_d8.CurPos = bVar1;
      local_d8.CurPos = local_d8.CurPos + 1;
    }
LAB_1422aef51:
    bVar6 = false;
    iVar9 = param_1->Size;
    iVar2 = local_120;
  } while( true );
}

// GetDecoratedName @ 1422af0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl Verse::Names::GetDecoratedName(FString *__return_storage_ptr__,FProperty *param_1)

{
  FName FVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  TStringBuilderBase<wchar_t> *this;
  wchar_t *pwVar8;
  UStruct *pUVar9;
  int iVar10;
  int iVar11;
  FName FVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 auStackY_188 [32];
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8;
  wchar_t local_c6 [63];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_188;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
  bVar3 = IsThisNotNull(param_1,"FField::GetFName");
  if (bVar3) {
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1->_padding_;
  }
  else {
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar12;
  }
  pFVar5 = ::FName::ToString((FName *)&local_138,&local_f8);
  bVar3 = false;
  iVar10 = (pFVar5->Data).ArrayNum;
  pFVar13 = (pFVar5->Data).AllocatorInstance.Data;
  iVar16 = 0;
  if (iVar10 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = iVar10 + -1;
    iVar4 = iVar11;
    if (10 < iVar11) {
      iVar4 = 10;
    }
    iVar17 = 0;
    if (0 < iVar4) {
      iVar17 = iVar4;
    }
    if ((iVar17 == 10) &&
       (iVar4 = FGenericPlatformStricmp::Strnicmp(L"__verse_0x",(wchar_t *)pFVar13,10), iVar4 == 0))
    {
      bVar3 = true;
      iVar4 = iVar11;
      if (iVar10 + -0x14 < iVar11) {
        iVar4 = iVar10 + -0x14;
      }
      iVar10 = iVar16;
      if (0 < iVar4) {
        iVar10 = iVar4;
      }
      pFVar13 = pFVar13 + ((longlong)iVar11 - (longlong)iVar10) * 2;
      iVar11 = iVar10;
    }
  }
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  pFVar5 = ::FString::ConstructFromPtrSize(&local_148,(wchar_t *)pFVar13,iVar11);
  if (&local_128 != pFVar5) {
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    local_128.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_128.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if ((FName)local_148.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pUVar6 = FField::GetOwnerClass((FField *)param_1);
    if (pUVar6 != (UClass *)0x0) {
      pUVar7 = Z_Construct_UClass_UVerseClass_NoRegister();
      iVar10 = (int)pUVar7->_padding_;
      if ((iVar10 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
          &pUVar7->_padding_)) {
        FVar1 = *(FName *)((longlong)&pUVar6[1]._padding_ + 4);
        if (FVar1 != (FName)0x0) {
          local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar1;
          ::FName::ToString((FName *)&local_138,&local_118);
          bVar3 = ::FString::StartsWith(&local_118,L"__verse_0x",10,IgnoreCase);
          if (bVar3) {
            pFVar5 = ::FString::RightChop(&local_118,&local_f8,0x13);
            if (&local_118 != pFVar5) {
              if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data.AllocatorInstance.Data);
              }
              local_118.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
              (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_118.Data.ArrayNum = (pFVar5->Data).ArrayNum;
              local_118.Data.ArrayMax = (pFVar5->Data).ArrayMax;
              (pFVar5->Data).ArrayNum = 0;
              (pFVar5->Data).ArrayMax = 0;
            }
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
          }
          iVar10 = local_118.Data.ArrayNum;
          FVar2.Data = local_118.Data.AllocatorInstance.Data;
          lVar14 = (longlong)local_118.Data.ArrayNum;
          if ((int)pUVar6[1]._padding_ < 2) {
            local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_148.Data.ArrayNum = local_118.Data.ArrayNum;
            if (local_118.Data.ArrayNum != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_118.Data.ArrayNum,0,(ForAnyElementType *)&local_148,
                         local_118.Data.ArrayNum,&local_148.Data.ArrayMax);
              memcpy(local_148.Data.AllocatorInstance.Data,FVar2.Data,lVar14 * 2);
              FVar12 = (FName)local_148.Data.AllocatorInstance;
              iVar10 = local_148.Data.ArrayNum;
            }
          }
          else {
            iVar11 = (int)pUVar6[1]._padding_;
            iVar4 = iVar11 + -1;
            if (iVar11 == 0) {
              iVar4 = iVar16;
            }
            if ((local_118.Data.ArrayNum != 0) || (iVar11 = 1, iVar4 + 1 == 0)) {
              iVar11 = iVar16;
            }
            iVar11 = iVar4 + 1 + iVar11;
            local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_138.Data.ArrayNum = local_118.Data.ArrayNum;
            if ((local_118.Data.ArrayNum == 0) && (iVar11 == 0)) {
              local_138.Data.ArrayMax = 0;
            }
            else {
              uVar15 = iVar11 + local_118.Data.ArrayNum;
              if ((int)uVar15 < local_118.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
              }
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,uVar15,0,(ForAnyElementType *)&local_138,local_118.Data.ArrayNum,
                         &local_138.Data.ArrayMax);
              if (iVar10 != 0) {
                memcpy(local_138.Data.AllocatorInstance.Data,FVar2.Data,lVar14 * 2);
              }
            }
            ::FString::PathAppend(&local_138,(wchar_t *)pUVar6[1]._padding_,iVar4);
            FVar12 = (FName)local_138.Data.AllocatorInstance;
            iVar10 = local_138.Data.ArrayNum;
          }
          FVar2.Data = local_128.Data.AllocatorInstance.Data;
          iVar11 = local_128.Data.ArrayNum + -1;
          if (local_128.Data.ArrayNum == 0) {
            iVar11 = 0;
          }
          iVar4 = iVar10 + -1;
          if (iVar10 == 0) {
            iVar4 = iVar16;
          }
          local_e8.Base = &local_c8;
          local_e8.End = (wchar_t *)local_48;
          local_e8.bIsDynamic = false;
          local_e8.bIsExternal = false;
          local_c8 = L'(';
          local_e8.CurPos = local_c6;
          this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_e8,(wchar_t *)FVar12,iVar4);
          if (this->End < this->CurPos + 2) {
            TStringBuilderBase<wchar_t>::Extend(this,2);
          }
          pwVar8 = FGenericPlatformString::Convert<char,wchar_t>(this->CurPos,2,":)",2);
          this->CurPos = pwVar8;
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,(wchar_t *)FVar2.Data,iVar11);
          if (local_e8.End < local_e8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
          }
          *local_e8.CurPos = L'\0';
          ::FString::FString(__return_storage_ptr__,local_e8.Base);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
          if (FVar12 != (FName)0x0) {
            FMemory::Free((void *)FVar12);
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          goto LAB_1422af612;
        }
        goto LAB_1422af60b;
      }
    }
    pUVar9 = FField::GetOwnerStruct((FField *)param_1);
    if (pUVar9 != (UStruct *)0x0) {
      pUVar6 = Z_Construct_UClass_UVerseStruct_NoRegister();
      iVar10 = (int)pUVar6->_padding_;
      if ((iVar10 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
          &pUVar6->_padding_)) {
        iVar10 = (int)pUVar9[1]._padding_;
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = 0;
        local_108.Data.ArrayMax = 0;
        iVar16 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar16 = 0;
        }
        pFVar5 = ::FString::ConstructFromPtrSize(&local_f8,(uchar *)pUVar9[1]._padding_,iVar16);
        if (&local_108 != pFVar5) {
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          local_108.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
          (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.Data.ArrayNum = (pFVar5->Data).ArrayNum;
          local_108.Data.ArrayMax = (pFVar5->Data).ArrayMax;
          (pFVar5->Data).ArrayNum = 0;
          (pFVar5->Data).ArrayMax = 0;
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        ::FString::ReplaceInline(&local_108,L":)",L"/",IgnoreCase);
        ::FString::AppendChars(&local_108,L":)",2);
        ::FString::ConcatFF(__return_storage_ptr__,&local_108,&local_128);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        goto LAB_1422af612;
      }
    }
  }
LAB_1422af60b:
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_1422af612:
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetVerseDeadPrefix @ 1422af960

TStringView<wchar_t> * __cdecl
Verse::Names::GetVerseDeadPrefix(TStringView<wchar_t> *__return_storage_ptr__)

{
  *__return_storage_ptr__ = Private::DeadPrefix;
  return __return_storage_ptr__;
}

// HasVerseDeadPrefix @ 1422b05b0

bool __cdecl Verse::Names::HasVerseDeadPrefix(TStringView<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1->Size;
  if (0xb < param_1->Size) {
    iVar1 = 0xb;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  if ((iVar2 == 0xb) &&
     (iVar1 = FGenericPlatformStricmp::Strnicmp(Private::DeadPrefix.DataPtr,param_1->DataPtr,0xb),
     iVar1 == 0)) {
    return true;
  }
  return false;
}

// Int64ToJson @ 1422b0620

TSharedRef<FJsonValue,1> * __cdecl
Verse::Int64ToJson(TSharedRef<FJsonValue,1> *__return_storage_ptr__,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FJsonValue,1> *pTVar4;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%lld");
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FJsonValue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TJsonValueNumberString__W___00_SharedPointerInternals__6B_
    ;
    FJsonValue::FJsonValue((FJsonValue *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&___7__TJsonValueNumberString__W__6B_;
    pTVar3[2]._padding_ = (longlong)local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)local_18.Data.ArrayNum;
    pTVar3[2].WeakReferenceCount = (atomic<int>)local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FJsonValue,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FJsonValue *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MakeTypeDead @ 1422b0740

void __cdecl Verse::Names::MakeTypeDead(UObject *param_1,UObject *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  undefined4 uVar8;
  FString local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  FString local_38;
  FString local_28;
  
  pwVar7 = L"";
  if (param_1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMNames.cpp"
                       ,0x20c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewOuter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMNames.cpp"
                       ,0x20d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
  local_res8.Number = *(uint *)&param_1->field_0x1c;
  ::FName::ToString(&local_res8,&local_68);
  local_58 = local_68.Data.AllocatorInstance.Data;
  iStack_50 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iStack_50 = 0;
  }
  local_48._12_4_ = uStack_4c;
  local_48.Size = iStack_50;
  local_48.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
  pFVar4 = AddVerseDeadPrefix(&local_38,&local_48);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar5 = ::FName::FName(&local_res18,pwVar6);
  FVar1.ComparisonIndex.Value = *(uint *)&param_1->field_0x10;
  FVar1.Number = *(uint *)&param_1->field_0x14;
  uVar8 = 0;
  MakeUniqueObjectName
            ((UObject *)&local_res10,(UClass *)param_2,FVar1,(*pFVar5).ComparisonIndex.Value);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x170);
  pFVar4 = ::FName::ToString(&local_res10,&local_28);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(param_1,pwVar7,param_2,0x34,uVar8);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// MangleCasedName @ 1422b08b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
Verse::Names::Private::MangleCasedName
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2,bool *param_3)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  wchar_t *_Str;
  longlong lVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  FString *pFVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  wchar_t **ppwVar20;
  undefined1 auStack_148 [32];
  FString local_128;
  uint local_118 [2];
  TStringView<wchar_t> *local_110;
  bool *local_108;
  wchar_t *local_f8;
  undefined8 uStack_f0;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  pwVar5 = param_1->DataPtr;
  uStack_f0 = *(undefined8 *)&param_1->Size;
  uVar14 = 0;
  ppwVar20 = InternalNames;
  iVar15 = (int)uStack_f0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  local_110 = param_1;
  local_108 = param_3;
  local_f8 = pwVar5;
  while( true ) {
    _Str = *ppwVar20;
    iVar13 = 0;
    if (_Str != (wchar_t *)0x0) {
      sVar8 = wcslen(_Str);
      iVar13 = (int)sVar8;
    }
    iVar7 = iVar15;
    if (iVar13 < iVar15) {
      iVar7 = iVar13;
    }
    iVar17 = 0;
    if (0 < iVar7) {
      iVar17 = iVar7;
    }
    if ((iVar13 == iVar17) &&
       ((((iVar13 == 0 || (iVar17 == 0)) ||
         (iVar7 = FGenericPlatformStricmp::Strnicmp(_Str,pwVar5,(longlong)iVar17), iVar7 == 0)) &&
        (iVar13 == iVar17)))) break;
    uVar14 = uVar14 + 1;
    ppwVar20 = ppwVar20 + 1;
    if (4 < uVar14) {
      bVar16 = true;
      ::FString::operator=(__return_storage_ptr__,L"__verse_0x");
      iVar15 = 0;
      lVar19 = 0;
      local_68.Data = (FScriptContainerElement *)0x0;
      lVar3 = *(longlong *)local_128.Data.AllocatorInstance.Data;
      local_58 = *(int *)(local_128.Data.AllocatorInstance.Data + 8);
      if (lVar3 == 0) {
        local_60 = (FScriptContainerElement *)0x0;
        local_58 = 0;
      }
      else {
        if ((0 < local_58) && (*(short *)(lVar3 + -2 + (longlong)local_58 * 2) == 0)) {
          iVar15 = 1;
          local_58 = local_58 + -1;
        }
        uVar14 = iVar15 + local_58;
        if (0x80 < uVar14) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar14,1)
          ;
        }
        FVar11.Data = local_e8;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_68.Data;
        }
        bVar6 = false;
        lVar18 = (longlong)(int)uVar14;
        lVar10 = lVar19;
        local_60 = FVar11.Data;
        if (0 < (int)uVar14) {
          do {
            uVar2 = *(ushort *)(lVar3 + lVar10 * 2);
            FVar11.Data[lVar10] = SUB21(uVar2,0);
            lVar10 = lVar10 + 1;
            bVar6 = (bool)(bVar6 | 0x7f < uVar2);
          } while (lVar10 < lVar18);
          lVar10 = lVar19;
          if (bVar6) {
            do {
              if (0x7f < *(ushort *)(lVar3 + lVar10 * 2)) {
                FVar11.Data[lVar10] = (FScriptContainerElement)0x3f;
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 < lVar18);
          }
        }
        if ((FVar11.Data + lVar18 == (FScriptContainerElement *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar4)();
          return pFVar9;
        }
      }
      uVar12 = 0xffffffff;
      local_118[0] = 0xffffffff;
      if (0 < (longlong)local_58) {
        do {
          pFVar1 = local_60 + lVar19;
          lVar19 = lVar19 + 1;
          uVar12 = (uint)(int)(char)*pFVar1 ^ uVar12;
          local_118[0] = FCrc::CRCTablesSB8[1][uVar12 >> 0x10 & 0xff] ^
                         FCrc::CRCTablesSB8[2][uVar12 >> 8 & 0xff] ^
                         FCrc::CRCTablesSB8[0][uVar12 >> 0x18] ^
                         FCrc::CRCTablesSB8[3][uVar12 & 0xff];
          uVar12 = (ulonglong)local_118[0];
        } while (lVar19 < local_58);
      }
      local_118[0] = ~local_118[0];
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Data.ArrayNum = 0;
      local_128.Data.ArrayMax = 0;
      BytesToHex((uchar *)local_118,4,&local_128);
      iVar15 = local_128.Data.ArrayNum + -1;
      if (local_128.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_128.Data.AllocatorInstance.Data,iVar15);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChars(__return_storage_ptr__,L"_",1);
      ::FString::AppendChars
                (__return_storage_ptr__,local_110->DataPtr,(int)*(undefined8 *)&local_110->Size);
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
LAB_1422b0b8e:
      if (local_108 != (bool *)0x0) {
        *local_108 = bVar16;
      }
      return __return_storage_ptr__;
    }
  }
  bVar16 = false;
  ::FString::AssignRange
            (__return_storage_ptr__,local_110->DataPtr,(int)*(undefined8 *)&local_110->Size);
  goto LAB_1422b0b8e;
}

// MapFromPersistentJson @ 1422b0bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>_>
* __cdecl Verse::MapFromPersistentJson
                    (TOptional<TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>_>
                     *__return_storage_ptr__,FJsonObject *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  short *_Src;
  code *pcVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  bool bVar7;
  longlong lVar8;
  TOptional<TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>_>
  *pTVar9;
  short *psVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 auStackY_178 [32];
  undefined1 local_138 [8];
  FString local_130;
  TOptional<FString>_u_0 local_120;
  FJsonObject *local_110;
  int iStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  int local_dc;
  TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_const_&> local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TOptional<FString>_u_0 *local_a0;
  longlong local_98;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_f0 = 0;
  local_88.Elements._44_4_ = 0x80;
  puVar1 = &(param_1->Values).field_0x10;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  iStack_108 = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._52_4_ = 0;
  uStack_104 = 1;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_88.Elements._48_4_ = 0xffffffff;
  iVar3 = *(int *)&(param_1->Values).field_0x28;
  iStack_f4 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Values).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar13 = *puVar14;
    iStack_108 = 0;
    while (uVar13 == 0) {
      lVar8 = (longlong)iStack_108;
      local_f0 = local_f0 + 0x20;
      iStack_108 = iStack_108 + 1;
      iStack_f4 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iStack_108) goto LAB_1422b0cad;
      uVar13 = puVar14[lVar8 + 1];
    }
    uStack_104 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_104 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_e0 = (int)lVar8;
    iStack_f4 = local_f0 + -1 + local_e0;
    if (iVar3 < iStack_f4) {
      iStack_f4 = iVar3;
    }
  }
LAB_1422b0cad:
  uVar13 = *(uint *)&(param_1->Values).field_0x28;
  uVar15 = uVar13 & 0xffffffe0;
  iStack_e8 = *(int *)&(param_1->Values).field_0x8 - *(int *)&(param_1->Values).field_0x34;
  uStack_f8 = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_104,iStack_108);
  TStack_c8.CurrentBitIndex = iStack_f4;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar13 >> 5;
  TStack_c8._28_4_ = iStack_f4;
  TStack_c8.BaseBitIndex = local_f0;
  uStack_a8 = CONCAT44(uStack_e4,iStack_e8);
  local_110 = param_1;
  local_100 = puVar1;
  iStack_ec = iStack_f4;
  local_d8.Value = (TSharedPtr<FJsonValue,1> *)param_1;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TOptional<TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>_>
              *)(*pcVar5)();
    return pTVar9;
  }
  uVar4 = *(uint *)&(param_1->Values).field_0x28;
  if (uVar13 != uVar4) {
    puVar11 = *(undefined1 **)&(param_1->Values).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar12) goto LAB_1422b0db0;
      uVar13 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_dc = (int)lVar8;
    uVar13 = local_dc + -1 + uVar15;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_1422b0db0:
  do {
    pTVar6 = local_d8.Value;
    if (*(int *)&((local_d8.Value)->SharedReferenceCount).ReferenceController -
        *(int *)((longlong)&local_d8.Value[3].Object + 4) != (int)uStack_a8) {
      local_138[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_138);
    }
    if (((TStack_c8.CurrentBitIndex == uVar13) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar6 == (TSharedPtr<FJsonValue,1> *)param_1)) {
      TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_88);
      if ((*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TOptional<TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>_>
                  *)(*pcVar5)();
        return pTVar9;
      }
      goto LAB_1422b0f5c;
    }
    lVar8 = *(longlong *)&pTVar6->Object;
    _Src = *(short **)(lVar8 + (longlong)TStack_c8.CurrentBitIndex * 0x28);
    lVar8 = lVar8 + (longlong)TStack_c8.CurrentBitIndex * 0x28;
    iVar3 = *(int *)(lVar8 + 8);
    for (psVar10 = _Src; psVar10 != _Src + iVar3; psVar10 = psVar10 + 1) {
      if (*psVar10 == 0x24) {
        if ((int)((longlong)psVar10 - (longlong)_Src >> 1) != -1) goto LAB_1422b0ed6;
        break;
      }
    }
    local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.Data.ArrayNum = iVar3;
    if (iVar3 == 0) {
      local_130.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,(ForAnyElementType *)&local_130,iVar3,&local_130.Data.ArrayMax);
      memcpy(local_130.Data.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
    }
    NameToShortName<FString>((TOptional<FString> *)&local_120.TypedValue,&local_130);
    if (local_120.TypedValue.Data.ArrayMax == -1) {
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x20) = 0;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x28) = 0;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x2c) = 0x80;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x30) = 0xffffffff;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x34) = 0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x40) = 0;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x48) = 0;
LAB_1422b0f5c:
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return __return_storage_ptr__;
    }
    local_a0 = &local_120;
    local_98 = lVar8 + 0x10;
    TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_const_&>_>
              (&local_88,&local_d8,(bool *)&local_a0);
    if ((local_120.TypedValue.Data.ArrayMax != -1) &&
       (local_120.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_120.TypedValue.Data.AllocatorInstance.Data);
    }
LAB_1422b0ed6:
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  } while( true );
}

// RegisterHandler @ 1422b12f0

void __cdecl Verse::ObjectPrinting::RegisterHandler(FHandler *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FObjectPrintHandlerRegistry *SRWLock;
  FHandler *local_res8;
  
  local_res8 = param_1;
  SRWLock = _anon_77A772C6::FObjectPrintHandlerRegistry::Get();
  if (SRWLock == (FObjectPrintHandlerRegistry *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar2 = (SRWLock->Handlers).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_res8) &&
     ((FScriptContainerElement *)&local_res8 < pFVar2 + (longlong)(SRWLock->Handlers).ArrayMax * 8))
  {
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
  iVar5 = (SRWLock->Handlers).ArrayNum;
  piVar1 = &(SRWLock->Handlers).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(SRWLock->Handlers).AllocatorInstance,piVar1);
  }
  (SRWLock->Handlers).ArrayNum = iVar5 + 1;
  *(FHandler **)((SRWLock->Handlers).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res8;
  if (SRWLock != (FObjectPrintHandlerRegistry *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// RemoveVerseDeadPrefix @ 1422b15c0

TStringView<wchar_t> * __cdecl
Verse::Names::RemoveVerseDeadPrefix
          (TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *local_28;
  undefined8 uStack_20;
  
  iVar1 = param_1->Size;
  if (0xb < param_1->Size) {
    iVar1 = 0xb;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  if ((iVar2 == 0xb) &&
     (iVar1 = FGenericPlatformStricmp::Strnicmp(Private::DeadPrefix.DataPtr,param_1->DataPtr,0xb),
     iVar1 == 0)) {
    iVar1 = param_1->Size;
    iVar2 = iVar1;
    if (iVar1 + -0xb < iVar1) {
      iVar2 = iVar1 + -0xb;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    uStack_20 = CONCAT44(uStack_20._4_4_,iVar3);
    local_28 = param_1->DataPtr + ((longlong)iVar1 - (longlong)iVar3);
  }
  else {
    local_28 = param_1->DataPtr;
    uStack_20 = *(undefined8 *)&param_1->Size;
  }
  __return_storage_ptr__->DataPtr = local_28;
  *(undefined8 *)&__return_storage_ptr__->Size = uStack_20;
  return __return_storage_ptr__;
}

// ShouldMangleCasedName @ 1422b1670

bool __cdecl Verse::Names::Private::ShouldMangleCasedName(TStringView<wchar_t> *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *_Str;
  int iVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  wchar_t **ppwVar8;
  
  iVar1 = param_1->Size;
  ppwVar8 = InternalNames;
  pwVar2 = param_1->DataPtr;
  uVar6 = 0;
  while( true ) {
    _Str = *ppwVar8;
    iVar5 = 0;
    if (_Str != (wchar_t *)0x0) {
      sVar4 = wcslen(_Str);
      iVar5 = (int)sVar4;
    }
    iVar3 = iVar1;
    if (iVar5 < iVar1) {
      iVar3 = iVar5;
    }
    iVar7 = 0;
    if (0 < iVar3) {
      iVar7 = iVar3;
    }
    if (((iVar5 == iVar7) &&
        (((iVar5 == 0 || (iVar7 == 0)) ||
         (iVar3 = FGenericPlatformStricmp::Strnicmp(_Str,pwVar2,(longlong)iVar7), iVar3 == 0)))) &&
       (iVar5 == iVar7)) break;
    uVar6 = uVar6 + 1;
    ppwVar8 = ppwVar8 + 1;
    if (4 < uVar6) {
      return true;
    }
  }
  return false;
}

// TryGetInt64 @ 1422b1720

bool __cdecl Verse::TryGetInt64(FJsonValue *param_1,long64 *param_2)

{
  char cVar1;
  longlong lVar2;
  double local_res8;
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x28))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(param_1->_padding_ + 0x50))(param_1,&local_res8);
    if (cVar1 == '\0') {
      return false;
    }
    if (local_res8 < __real_c3e0000000000000) {
      *param_2 = -0x8000000000000000;
      return true;
    }
    lVar2 = 0x7fffffffffffffff;
    if (local_res8 < __real_43e0000000000000) {
      lVar2 = (longlong)local_res8;
    }
    *param_2 = lVar2;
  }
  return true;
}

// UEFuncToVerseName @ 1422b1c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
Verse::Names::UEFuncToVerseName(FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar3;
  FUtf8String *pFVar4;
  FString *pFVar5;
  int iVar6;
  undefined1 auStack_f8 [32];
  TStringView<char8_t> local_d8;
  FUtf8String local_c8;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pTVar3 = StrCast<char8_t,128,wchar_t>
                     (&local_b8,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  local_d8.DataPtr = pTVar3->Ptr;
  local_d8.Size = pTVar3->StringLength;
  pFVar4 = Private::DecodeName(&local_c8,&local_d8);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  pFVar5 = ::FString::ConstructFromPtrSize
                     ((FString *)&local_d8,(uchar *)(pFVar4->Data).AllocatorInstance.Data,iVar6);
  if (__return_storage_ptr__ != pFVar5) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_d8.DataPtr != (uchar *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  return __return_storage_ptr__;
}

// UEFuncToVerseName @ 1422b1d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl Verse::Names::UEFuncToVerseName(FString *__return_storage_ptr__,FName param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar4;
  FUtf8String *pFVar5;
  int iVar6;
  FName local_res10;
  undefined1 auStack_108 [32];
  TStringView<char8_t> local_e8;
  FUtf8String local_d8;
  FString local_c8;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_c8);
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  pTVar4 = StrCast<char8_t,128,wchar_t>
                     (&local_b8,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar6);
  local_e8.DataPtr = pTVar4->Ptr;
  local_e8.Size = pTVar4->StringLength;
  pFVar5 = Private::DecodeName(&local_d8,&local_e8);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (pFVar5->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  pFVar3 = ::FString::ConstructFromPtrSize
                     ((FString *)&local_e8,(uchar *)(pFVar5->Data).AllocatorInstance.Data,iVar6);
  if (__return_storage_ptr__ != pFVar3) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_e8.DataPtr != (uchar *)0x0) {
    FMemory::Free(local_e8.DataPtr);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// UEPropToVerseFName @ 1422b1e90

FName __cdecl Verse::Names::UEPropToVerseFName(FName param_1,bool *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FName *pFVar4;
  FScriptContainerElement *pFVar5;
  char cVar6;
  int iVar7;
  char *in_R8;
  int iVar8;
  FName local_res8;
  FName local_res10;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  local_res10 = (FName)param_2;
  pFVar3 = ::FName::ToString(&local_res10,&local_68);
  iVar8 = (pFVar3->Data).ArrayNum;
  pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
  iVar7 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar7 = 0;
  }
  cVar6 = '\0';
  iVar8 = iVar7;
  if (10 < iVar7) {
    iVar8 = 10;
  }
  iVar2 = 0;
  if (0 < iVar8) {
    iVar2 = iVar8;
  }
  iVar8 = iVar7;
  local_78.Data.AllocatorInstance.Data = pFVar1;
  local_78.Data.ArrayNum = iVar7;
  if ((iVar2 == 10) &&
     (iVar2 = FGenericPlatformStricmp::Strnicmp(L"__verse_0x",(wchar_t *)pFVar1,10), iVar2 == 0)) {
    cVar6 = '\x01';
    iVar2 = iVar7;
    if (iVar7 + -0x13 < iVar7) {
      iVar2 = iVar7 + -0x13;
    }
    iVar8 = 0;
    if (0 < iVar2) {
      iVar8 = iVar2;
    }
    local_78.Data.AllocatorInstance.Data = pFVar1 + ((longlong)iVar7 - (longlong)iVar8) * 2;
    local_78.Data.ArrayNum = iVar8;
    pFVar1 = local_78.Data.AllocatorInstance.Data;
  }
  pFVar5 = (FScriptContainerElement *)0x0;
  pFVar3 = ::FString::ConstructFromPtrSize(&local_78,(wchar_t *)pFVar1,iVar8);
  iVar7 = 0;
  if (local_58 != pFVar3) {
    pFVar5 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar7 = (pFVar3->Data).ArrayNum;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (in_R8 != (char *)0x0) {
    *in_R8 = cVar6;
  }
  if (cVar6 != '\0') {
    iVar8 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar8 = 0;
    }
    pFVar4 = ::FName::FName(&local_res8,iVar8,(wchar_t *)pFVar5,FNAME_Add);
    param_2 = *(bool **)pFVar4;
  }
  *(bool **)param_1 = param_2;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return param_1;
}

// UEPropToVerseFName @ 1422b2010

FName __cdecl Verse::Names::UEPropToVerseFName(TStringView<wchar_t> *param_1,bool *param_2)

{
  int iVar1;
  FString *pFVar2;
  FName *pFVar3;
  int iVar4;
  bool *in_R8;
  FName local_res8 [4];
  TStringView<wchar_t> local_28;
  FString local_18;
  
  local_28.DataPtr = *(wchar_t **)param_2;
  local_28._8_8_ = *(undefined8 *)(param_2 + 8);
  pFVar2 = UEPropToVerseName(&local_18,&local_28,in_R8);
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  pFVar3 = ::FName::FName(local_res8,iVar4,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,
                          FNAME_Add);
  param_1->DataPtr = (wchar_t *)*pFVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// UEPropToVerseName @ 1422b2080

FString * __cdecl
Verse::Names::UEPropToVerseName
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,bool *param_2)

{
  int iVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  bool bVar7;
  wchar_t *pwVar8;
  FString local_38;
  
  iVar1 = param_1->Size;
  bVar7 = false;
  pwVar8 = param_1->DataPtr;
  iVar4 = iVar1;
  if (10 < iVar1) {
    iVar4 = 10;
  }
  iVar6 = 0;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  if ((iVar6 == 10) &&
     (iVar4 = FGenericPlatformStricmp::Strnicmp(L"__verse_0x",pwVar8,10), iVar4 == 0)) {
    bVar7 = true;
    iVar4 = iVar1;
    if (iVar1 + -0x13 < iVar1) {
      iVar4 = iVar1 + -0x13;
    }
    local_38.Data.ArrayNum = 0;
    if (0 < iVar4) {
      local_38.Data.ArrayNum = iVar4;
    }
    local_38.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)(pwVar8 + ((longlong)iVar1 - (longlong)local_38.Data.ArrayNum));
    param_1->DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    *(ulonglong *)&param_1->Size = CONCAT44(local_38.Data.ArrayMax,local_38.Data.ArrayNum);
    pwVar8 = param_1->DataPtr;
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = bVar7;
  }
  uVar2 = *(undefined8 *)&param_1->Size;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar5 = ::FString::ConstructFromPtrSize(&local_38,pwVar8,(int)uVar2);
  if (__return_storage_ptr__ != pFVar5) {
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// UEPropToVerseName @ 1422b21b0

FString * __cdecl
Verse::Names::UEPropToVerseName(FString *__return_storage_ptr__,FName param_1,bool *param_2)

{
  int iVar1;
  FString *pFVar2;
  FName local_res10 [3];
  TStringView<wchar_t> local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar2 = ::FName::ToString(local_res10,&local_18);
  local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  UEPropToVerseName(__return_storage_ptr__,&local_28,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// UnmangleCasedName @ 1422b2230

FString * __cdecl
Verse::Names::Private::UnmangleCasedName
          (FString *__return_storage_ptr__,FName param_1,bool *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FName local_res10;
  FString local_18;
  
  local_res10 = param_1;
  ::FName::ToString(&local_res10,__return_storage_ptr__);
  bVar2 = ::FString::StartsWith(__return_storage_ptr__,L"__verse_0x",10,IgnoreCase);
  if (bVar2) {
    pFVar3 = ::FString::RightChop(__return_storage_ptr__,&local_18,0x13);
    if (__return_storage_ptr__ != pFVar3) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = bVar2;
  }
  return __return_storage_ptr__;
}

// UnregisterHandler @ 1422b2300

void __cdecl Verse::ObjectPrinting::UnregisterHandler(FHandler *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FObjectPrintHandlerRegistry *SRWLock;
  FHandler *pFVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FHandler *local_res8;
  
  local_res8 = param_1;
  SRWLock = _anon_77A772C6::FObjectPrintHandlerRegistry::Get();
  if ((SRWLock == (FObjectPrintHandlerRegistry *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar2 = (SRWLock->Handlers).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res8) &&
      ((FScriptContainerElement *)&local_res8 < pFVar2 + (longlong)(SRWLock->Handlers).ArrayMax * 8)
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (SRWLock->Handlers).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (SRWLock->Handlers).AllocatorInstance.Data;
    bVar4 = *(FHandler **)pFVar2 != local_res8;
    lVar6 = 0;
    pFVar5 = local_res8;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(FHandler **)(pFVar2 + lVar6 * 8) != pFVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pFVar5 = local_res8;
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (SRWLock->Handlers).ArrayNum = iVar9;
  }
  if (SRWLock != (FObjectPrintHandlerRegistry *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// Unwrap @ 1422b24c0

TSharedPtr<FJsonValue,1> * __cdecl
Verse::Unwrap(TSharedPtr<FJsonValue,1> *__return_storage_ptr__,TSharedPtr<FJsonValue,1> *param_1,
             EValueJSONFormat param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  TSharedPtr<FJsonValue,1> *pTVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint *puVar13;
  longlong *local_res20;
  
  if (param_2 == Persistence) {
    if ((param_1->Object == (FJsonValue *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FJsonValue,1> *)(*pcVar5)();
      return pTVar9;
    }
    cVar7 = (**(code **)(param_1->Object->_padding_ + 0x88))(param_1->Object,&local_res20);
    if (cVar7 == '\0') {
      __return_storage_ptr__->Object = (FJsonValue *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    if ((*local_res20 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FJsonValue,1> *)(*pcVar5)();
      return pTVar9;
    }
    local_res20 = (longlong *)*local_res20;
    iVar10 = 0;
    iVar2 = (int)local_res20[5];
    iVar12 = 0;
    iVar8 = iVar12;
    if (iVar2 != 0) {
      puVar13 = (uint *)local_res20[4];
      if ((uint *)local_res20[4] == (uint *)0x0) {
        puVar13 = (uint *)(local_res20 + 2);
      }
      uVar3 = *puVar13;
      while (uVar3 == 0) {
        lVar11 = (longlong)iVar10;
        iVar12 = iVar12 + 0x20;
        iVar10 = iVar10 + 1;
        iVar8 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1422b2607;
        uVar3 = puVar13[lVar11 + 1];
      }
      uVar1 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar8 = (int)lVar11 + -1 + iVar12;
      if (iVar2 < iVar8) {
        iVar8 = iVar2;
      }
    }
LAB_1422b2607:
    if (iVar8 < (int)local_res20[5]) {
      lVar11 = *local_res20;
      __return_storage_ptr__->Object = *(FJsonValue **)(lVar11 + 0x10 + (longlong)iVar8 * 0x28);
      pTVar4 = *(TReferenceControllerBase<1> **)(lVar11 + (longlong)iVar8 * 0x28 + 0x18);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        return __return_storage_ptr__;
      }
    }
    else {
      __return_storage_ptr__->Object = (FJsonValue *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
  }
  else {
    __return_storage_ptr__->Object = param_1->Object;
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// Unwrap @ 1422b2670

TSharedPtr<FJsonValue,1> * __cdecl
Verse::Unwrap(TSharedPtr<FJsonValue,1> *__return_storage_ptr__,FJsonValue *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  TSharedPtr<FJsonValue,1> *pTVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint *puVar13;
  longlong *local_res10;
  
  cVar6 = (**(code **)(param_1->_padding_ + 0x88))(param_1,&local_res10);
  if (cVar6 == '\0') {
    __return_storage_ptr__->Object = (FJsonValue *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if ((*local_res10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<FJsonValue,1> *)(*pcVar5)();
    return pTVar9;
  }
  local_res10 = (longlong *)*local_res10;
  iVar10 = 0;
  iVar2 = (int)local_res10[5];
  iVar12 = 0;
  iVar8 = iVar12;
  if (iVar2 != 0) {
    puVar13 = (uint *)local_res10[4];
    if ((uint *)local_res10[4] == (uint *)0x0) {
      puVar13 = (uint *)(local_res10 + 2);
    }
    uVar3 = *puVar13;
    while (uVar3 == 0) {
      lVar11 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar8 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1422b2768;
      uVar3 = puVar13[lVar11 + 1];
    }
    uVar1 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = iVar12 + -1 + (int)lVar11;
    if (iVar2 < iVar8) {
      iVar8 = iVar2;
    }
  }
LAB_1422b2768:
  if (iVar8 < (int)local_res10[5]) {
    lVar11 = *local_res10;
    __return_storage_ptr__->Object = *(FJsonValue **)(lVar11 + 0x10 + (longlong)iVar8 * 0x28);
    pTVar4 = *(TReferenceControllerBase<1> **)(lVar11 + (longlong)iVar8 * 0x28 + 0x18);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  else {
    __return_storage_ptr__->Object = (FJsonValue *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

// VerseFuncToUEFName @ 1422b27e0

FName __cdecl Verse::Names::VerseFuncToUEFName(TStringView<wchar_t> *param_1)

{
  FName *pFVar1;
  int iVar2;
  undefined8 *in_RDX;
  FName local_res8 [4];
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)*in_RDX;
  local_18._8_8_ = in_RDX[1];
  Private::EncodeName(&local_28,&local_18);
  iVar2 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  pFVar1 = ::FName::FName(local_res8,iVar2,(wchar_t *)local_28.Data.AllocatorInstance.Data,FNAME_Add
                         );
  param_1->DataPtr = (wchar_t *)*pFVar1;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// VerseFuncToUEName @ 1422b2850

FString * __cdecl
Verse::Names::VerseFuncToUEName(FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  Private::EncodeName(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// VersePropToUEFName @ 1422b2880

FName __cdecl
Verse::Names::VersePropToUEFName
          (TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,bool *param_3)

{
  int iVar1;
  FString *pFVar2;
  FName *pFVar3;
  int iVar4;
  bool *in_R9;
  FName local_res8 [4];
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  local_38.DataPtr = *(wchar_t **)param_3;
  local_38._8_8_ = *(undefined8 *)(param_3 + 8);
  local_28.DataPtr = param_2->DataPtr;
  local_28.Size = param_2->Size;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pFVar2 = VersePropToUEName(&local_18,&local_28,&local_38,in_R9);
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  pFVar3 = ::FName::FName(local_res8,iVar4,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,
                          FNAME_Add);
  param_1->DataPtr = (wchar_t *)*pFVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// VersePropToUEFName @ 1422b2900

FName __cdecl Verse::Names::VersePropToUEFName(TStringView<wchar_t> *param_1,bool *param_2)

{
  int iVar1;
  FString *pFVar2;
  FName *pFVar3;
  int iVar4;
  bool *in_R8;
  FName local_res8 [4];
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  local_38.DataPtr = *(wchar_t **)param_2;
  local_38._8_8_ = *(undefined8 *)(param_2 + 8);
  local_28.DataPtr = local_38.DataPtr;
  local_28._8_8_ = local_38._8_8_;
  pFVar2 = VersePropToUEName(&local_18,&local_28,&local_38,in_R8);
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  pFVar3 = ::FName::FName(local_res8,iVar4,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,
                          FNAME_Add);
  param_1->DataPtr = (wchar_t *)*pFVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// VersePropToUEName @ 1422b2980

FString * __cdecl
Verse::Names::VersePropToUEName
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2,bool *param_3)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  int iVar4;
  bool bVar5;
  bool local_res8 [8];
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  uVar1 = *(undefined8 *)&param_1->Size;
  local_38.DataPtr = param_1->DataPtr;
  local_38.Size = param_1->Size;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_res8[0] = false;
  if (((int)uVar1 < 1) || (*local_38.DataPtr != L'(')) {
    local_28.DataPtr = param_2->DataPtr;
    local_28.Size = param_2->Size;
    local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
    pFVar3 = Private::MangleCasedName((FString *)&local_48,&local_38,&local_28,local_res8);
    if (__return_storage_ptr__ != pFVar3) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    bVar5 = local_res8[0];
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
      bVar5 = local_res8[0];
    }
  }
  else {
    Private::EncodeName((FString *)&local_48,&local_38);
    iVar4 = local_48.Size + -1;
    if (local_48.Size == 0) {
      iVar4 = 0;
    }
    local_38.Size = iVar4;
    local_48.Size = iVar4;
    local_38.DataPtr = local_48.DataPtr;
    pFVar3 = Private::MangleCasedName((FString *)&local_28,&local_48,&local_38,(bool *)0x0);
    if (__return_storage_ptr__ != pFVar3) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
    bVar5 = true;
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  if (param_3 != (bool *)0x0) {
    *param_3 = bVar5;
  }
  return __return_storage_ptr__;
}

// VersePropToUEName @ 1422b2b20

FString * __cdecl
Verse::Names::VersePropToUEName
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,bool *param_2)

{
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_18.DataPtr = local_28.DataPtr;
  local_18._8_8_ = local_28._8_8_;
  VersePropToUEName(__return_storage_ptr__,&local_18,&local_28,param_2);
  return __return_storage_ptr__;
}

// Wrap @ 1422b2b60

TSharedPtr<FJsonValue,1> * __cdecl
Verse::Wrap(TSharedPtr<FJsonValue,1> *__return_storage_ptr__,TSharedPtr<FJsonValue,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *this;
  FString local_38;
  TSharedPtr<FJsonObject,1> local_28;
  
  pTVar3 = ::operator_new(0x60);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    this = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    this = pTVar3 + 1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar3[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar3[4]._padding_ + 4) = 0;
    pTVar3[5]._padding_ = 0;
    if (this == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FJsonValue,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (this == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FJsonValue,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  ::FString::FString(&local_38,L"");
  FJsonObject::SetField((FJsonObject *)this,&local_38,param_1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pTVar5 = ::operator_new(0x30);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
    local_28.Object = (FJsonObject *)this;
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
    FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar5 + 1),&local_28);
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FJsonValue,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FJsonValue *)(pTVar5 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// Wrap @ 1422b2d70

TSharedPtr<FJsonValue,1> * __cdecl
Verse::Wrap(TSharedPtr<FJsonValue,1> *__return_storage_ptr__,TSharedPtr<FJsonValue,1> *param_1,
           EValueJSONFormat param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if (param_2 == Persistence) {
    Wrap(__return_storage_ptr__,param_1);
  }
  else {
    __return_storage_ptr__->Object = param_1->Object;
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// Z_Construct_UEnum_CoreUObject_EVersePackageScope @ 1422b2dc0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EVersePackageScope(void)

{
  if (Z_Registration_Info_UEnum_EVersePackageScope.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVersePackageScope.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EVersePackageScope_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVersePackageScope.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EVersePackageType @ 1422b2e00

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EVersePackageType(void)

{
  if (Z_Registration_Info_UEnum_EVersePackageType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVersePackageType.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EVersePackageType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVersePackageType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FProfileLocus @ 1422b2e40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FProfileLocus(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FProfileLocus.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FProfileLocus.InnerSingleton,
               &Z_Construct_UScriptStruct_FProfileLocus_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FProfileLocus.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FProfileLocus.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSolarisProfilingData @ 1422b2ec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSolarisProfilingData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSolarisProfilingData.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSolarisProfilingData.InnerSingleton,
               &Z_Construct_UScriptStruct_FSolarisProfilingData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSolarisProfilingData.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FSolarisProfilingData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// OnBeginProfilingEvent'' @ 150354660

void __cdecl `dynamic_atexit_destructor_for_'FVerseProfilingDelegates::OnBeginProfilingEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FVerseProfilingDelegates::OnBeginProfilingEvent._8_8_,
             FVerseProfilingDelegates::OnBeginProfilingEvent._16_4_);
  if (FVerseProfilingDelegates::OnBeginProfilingEvent._8_8_ != 0) {
    FMemory::Free((void *)FVerseProfilingDelegates::OnBeginProfilingEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FVerseProfilingDelegates::OnBeginProfilingEvent);
  return;
}

// OnEndProfilingEvent'' @ 1503546a0

void __cdecl `dynamic_atexit_destructor_for_'FVerseProfilingDelegates::OnEndProfilingEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FVerseProfilingDelegates::OnEndProfilingEvent._8_8_,
             FVerseProfilingDelegates::OnEndProfilingEvent._16_4_);
  if (FVerseProfilingDelegates::OnEndProfilingEvent._8_8_ != 0) {
    FMemory::Free((void *)FVerseProfilingDelegates::OnEndProfilingEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FVerseProfilingDelegates::OnEndProfilingEvent);
  return;
}

// `dynamic_atexit_destructor_for_'LogVerseGC'' @ 1503546e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogVerseGC__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogVerseGC);
  return;
}

// `dynamic_atexit_destructor_for_'LogVerseVM'' @ 150354700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogVerseVM__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogVerseVM);
  return;
}

// `dynamic_atexit_destructor_for_'Registry'' @ 150354720

void __cdecl
``anonymous_namespace'::FObjectPrintHandlerRegistry::Get'::__l2::
_dynamic_atexit_destructor_for__Registry__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  if (`FObjectPrintHandlerRegistry::Get'::`2'::Registry.Handlers.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`FObjectPrintHandlerRegistry::Get'::`2'::Registry.Handlers.AllocatorInstance.Data)
    ;
  }
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&`FObjectPrintHandlerRegistry::Get'::`2'::Registry);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000150354751. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&`FObjectPrintHandlerRegistry::Get'::`2'::Registry);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

