// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b4e5be0

UClass * __cdecl UDS_MailData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MailData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MailData",
               &Z_Registration_Info_UClass_UDS_MailData.InnerSingleton,
               StaticRegisterNativesUDS_MailData,200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MailData>,InternalVTableHelperCtorCaller<UDS_MailData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MailData.InnerSingleton;
}

// UDS_MailData @ 14b4e8920

UDS_MailData * __thiscall UDS_MailData::UDS_MailData(UDS_MailData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->MailIconID = 0x385;
  this->_padding_ = (longlong)&___7UDS_MailData__6B_;
  (this->MailUID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailUID).Data.ArrayNum = 0;
  (this->MailUID).Data.ArrayMax = 0;
  (this->MailTitle).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailTitle).Data.ArrayNum = 0;
  (this->MailTitle).Data.ArrayMax = 0;
  (this->MailSenderName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailSenderName).Data.ArrayNum = 0;
  (this->MailSenderName).Data.ArrayMax = 0;
  (this->MailContent).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailContent).Data.ArrayNum = 0;
  (this->MailContent).Data.ArrayMax = 0;
  (this->SendTime).Ticks = 0;
  (this->RemoveTime).Ticks = 0;
  this->bIsRead = false;
  this->bIsReward = false;
  this->bHasItem = false;
  this->MailItem = (MailItem *)0x0;
  this->bIsSelected = false;
  return this;
}

// ~UDS_MailData @ 14b4e99c0

void __thiscall UDS_MailData::~UDS_MailData(UDS_MailData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_MailData__6B_;
  pFVar1 = (this->MailContent).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MailSenderName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MailTitle).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MailUID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4eb510

UClass * __cdecl UDS_MailData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MailData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MailData",
               &Z_Registration_Info_UClass_UDS_MailData.InnerSingleton,
               StaticRegisterNativesUDS_MailData,200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MailData>,InternalVTableHelperCtorCaller<UDS_MailData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MailData.InnerSingleton;
}

// StaticRegisterNativesUDS_MailData @ 14b4ec140

void __cdecl UDS_MailData::StaticRegisterNativesUDS_MailData(void)

{
  return;
}

// UDS_MailData @ 14ba32de0

UDS_MailData * __thiscall UDS_MailData::UDS_MailData(UDS_MailData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_MailData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MailUID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailUID).Data.ArrayNum = 0;
  (this->MailUID).Data.ArrayMax = 0;
  (this->MailTitle).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailTitle).Data.ArrayNum = 0;
  (this->MailTitle).Data.ArrayMax = 0;
  (this->MailSenderName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailSenderName).Data.ArrayNum = 0;
  (this->MailSenderName).Data.ArrayMax = 0;
  (this->MailContent).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MailContent).Data.ArrayNum = 0;
  (this->MailContent).Data.ArrayMax = 0;
  (this->SendTime).Ticks = 0;
  (this->RemoveTime).Ticks = 0;
  this->MailIconID = 0x385;
  this->bIsRead = false;
  this->bIsReward = false;
  this->bHasItem = false;
  this->MailItem = (MailItem *)0x0;
  this->bIsSelected = false;
  return this;
}

// SetIsRead @ 14ba71950

void __thiscall UDS_MailData::SetIsRead(UDS_MailData *this,bool param_1)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8 [4];
  
  if (this->bIsRead != param_1) {
    this->bIsRead = param_1;
    if (this->bHasItem == false) {
      iVar2 = param_1 + 0x385;
    }
    else {
      iVar2 = (this->bIsReward != false) + 0x387;
    }
    this->MailIconID = iVar2;
    *(undefined1 *)&this->_padding_ = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar3[4].field_0x8 = 1;
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                         (void *)0x0);
      if (!bVar1) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
        pUVar3[3].field_0x20 = 1;
      }
    }
    TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)local_res8);
    bVar1 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(local_res8);
      pUVar3[4].field_0x8 = 1;
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                         (void *)0x0);
      if (!bVar1) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
        pUVar3[3].field_0x20 = 1;
      }
    }
  }
  return;
}

// SetIsReward @ 14ba71a50

void __thiscall UDS_MailData::SetIsReward(UDS_MailData *this,bool param_1)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8 [4];
  
  if (this->bIsReward != param_1) {
    this->bIsReward = param_1;
    if (this->bHasItem == false) {
      iVar2 = (this->bIsRead != false) + 0x385;
    }
    else {
      iVar2 = param_1 + 0x387;
    }
    this->MailIconID = iVar2;
    *(undefined1 *)&this->_padding_ = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar3[4].field_0x8 = 1;
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                         (void *)0x0);
      if (!bVar1) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
        pUVar3[3].field_0x20 = 1;
      }
    }
    TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)local_res8);
    bVar1 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(local_res8);
      pUVar3[4].field_0x8 = 1;
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                         (void *)0x0);
      if (!bVar1) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
        pUVar3[3].field_0x20 = 1;
      }
    }
  }
  return;
}

// SetIsSelected @ 14ba71b50

void __thiscall UDS_MailData::SetIsSelected(UDS_MailData *this,bool param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  if (this->bIsSelected != param_1) {
    this->bIsSelected = param_1;
    *(undefined1 *)&this->_padding_ = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar2[4].field_0x8 = 1;
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                         (void *)0x0);
      if (!bVar1) {
        pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
        pUVar2[3].field_0x20 = 1;
      }
    }
    TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)local_res8);
    bVar1 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      pUVar2[4].field_0x8 = 1;
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                         (void *)0x0);
      if (!bVar1) {
        pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
        pUVar2[3].field_0x20 = 1;
      }
    }
  }
  return;
}

// SetMailData @ 14ba71e10

void __thiscall UDS_MailData::SetMailData(UDS_MailData *this,SqlMailTable *param_1)

{
  FString *pFVar1;
  UniqueId *pUVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FString *pFVar5;
  FDateTime FVar6;
  UObject *pUVar7;
  UniqueId *pUVar8;
  char *pcVar9;
  int iVar10;
  FString local_28;
  
  pUVar2 = (param_1->_impl_).mail_uid_;
  pUVar8 = &_UniqueId_default_instance_._instance;
  if (pUVar2 != (UniqueId *)0x0) {
    pUVar8 = pUVar2;
  }
  pFVar5 = DS_Util::ConvertBytesToFString
                     (&local_28,
                      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                      ((ulonglong)(pUVar8->_impl_).value_.tagged_ptr_.ptr_ & 0xfffffffffffffffc));
  pFVar1 = &this->MailUID;
  if (pFVar1 != pFVar5) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MailUID).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this->MailUID).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pcVar9 = (char *)((ulonglong)(param_1->_impl_).mail_title_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
    pcVar9 = *(char **)pcVar9;
  }
  pFVar5 = ::FString::FString(&local_28,pcVar9);
  pFVar1 = &this->MailTitle;
  if (pFVar1 != pFVar5) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MailTitle).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this->MailTitle).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pcVar9 = (char *)((ulonglong)(param_1->_impl_).mail_sender_name_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
    pcVar9 = *(char **)pcVar9;
  }
  pFVar5 = ::FString::FString(&local_28,pcVar9);
  pFVar1 = &this->MailSenderName;
  if (pFVar1 != pFVar5) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MailSenderName).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this->MailSenderName).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pcVar9 = (char *)((ulonglong)(param_1->_impl_).mail_content_.tagged_ptr_.ptr_ & 0xfffffffffffffffc
                   );
  if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
    pcVar9 = *(char **)pcVar9;
  }
  pFVar5 = ::FString::FString(&local_28,pcVar9);
  pFVar1 = &this->MailContent;
  if (pFVar1 != pFVar5) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MailContent).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this->MailContent).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar6 = DS_Util::ConvertTimestampToDateTime((Timestamp *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->SendTime).Ticks = *FVar6.Ticks;
  FVar6 = DS_Util::ConvertTimestampToDateTime((Timestamp *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->RemoveTime).Ticks = *FVar6.Ticks;
  this->MailType = (EDS_MailType)(param_1->_impl_).mail_type_;
  this->bIsRead = (param_1->_impl_).is_read_;
  this->bIsReward = (param_1->_impl_).is_reward_;
  bVar4 = SetMailItem(this,param_1);
  this->bHasItem = bVar4;
  if (bVar4) {
    iVar10 = (this->bIsReward != false) + 0x387;
  }
  else {
    iVar10 = (this->bIsRead != false) + 0x385;
  }
  this->MailIconID = iVar10;
  *(undefined1 *)&this->_padding_ = 1;
  bVar4 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar4) {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar7[4].field_0x8 = 1;
    bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar7 + 4),
                       (void *)0x0);
    if (!bVar4) {
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 4));
      pUVar7[3].field_0x20 = 1;
    }
  }
  return;
}

// SetMailItem @ 14ba720c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_MailData::SetMailItem(UDS_MailData *this,SqlMailTable *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  size_t sVar4;
  UDS_LogManager *pUVar5;
  MailItem *pMVar6;
  undefined8 uVar7;
  ulong64 uVar8;
  wchar_t *_Str;
  MailItem *pMVar9;
  uint uVar10;
  undefined1 auStackY_258 [32];
  FString local_218;
  FString local_208;
  MailItem local_1f8;
  _Bxty local_198;
  undefined8 local_188;
  ulonglong uStack_180;
  _Bxty local_178;
  longlong local_168;
  ulonglong local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_178,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((ulonglong)(param_1->_impl_).reward_values_.tagged_ptr_.ptr_ & 0xfffffffffffffffc));
  pMVar9 = (MailItem *)0x0;
  if (local_168 == 0) {
    bVar3 = false;
  }
  else {
    uVar7 = &local_178;
    if (0xf < local_160) {
      uVar7 = local_178._Ptr;
    }
    ::FString::FString(&local_218,(char *)uVar7);
    ::FString::ReplaceInline(&local_218,L"\\\"",L"\"",IgnoreCase);
    local_158._padding_ = 0;
    if (local_218.Data.ArrayNum == 0) {
      _Str = L"";
LAB_14ba72188:
      sVar4 = wcslen(_Str);
      local_158._padding_._0_4_ =
           UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar4);
      uVar1 = (int)local_158._padding_ + 1;
      uVar10 = uVar1;
      if (uVar1 < 0x81) {
        if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_158._padding_ !=
            (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
          uVar10 = 0;
          goto LAB_14ba721cf;
        }
      }
      else {
LAB_14ba721cf:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_158._padding_,0,uVar10,1);
      }
      local_158._padding_ = (longlong)&local_158;
      if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_158._padding_ !=
          (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
        local_158._padding_ = local_158._padding_;
      }
      UE::Core::Private::Convert((uchar *)local_158._padding_,uVar1,_Str,(int)sVar4 + 1);
    }
    else {
      _Str = (wchar_t *)local_218.Data.AllocatorInstance.Data;
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14ba72188;
      local_158._padding_._0_4_ = 0;
      local_158._padding_ = 0;
    }
    lVar2 = local_158._padding_;
    local_198._Ptr = (char *)0x0;
    local_198._8_8_ = 0;
    local_188 = 0;
    uStack_180 = 0;
    sVar4 = strlen((char *)local_158._padding_);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_198,
               (char *)lVar2,sVar4);
    if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_158._padding_ !=
        (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    mail::MailItem::MailItem(&local_1f8,(Arena *)0x0);
    uVar7 = &local_198;
    if (0xf < uStack_180) {
      uVar7 = local_198._Ptr;
    }
    local_1f8._padding_ = (longlong)&___7MailItem_mail__6B_;
    ::FString::FString(&local_208,(char *)uVar7);
    bVar3 = DS_JsonStringToProtoMessage<mail::MailItem>(&local_1f8,&local_208);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pMVar6 = this->MailItem;
      if (this->MailItem == (MailItem *)0x0) {
        pMVar6 = ::operator_new(0x60);
        if (pMVar6 != (MailItem *)0x0) {
          mail::MailItem::MailItem(pMVar6,(Arena *)0x0);
          pMVar6->_padding_ = (longlong)&___7MailItem_mail__6B_;
          pMVar9 = pMVar6;
        }
        this->MailItem = pMVar9;
        pMVar6 = pMVar9;
      }
      mail::MailItem::CopyFrom(pMVar6,&local_1f8);
      bVar3 = true;
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_MailData::SetMailItem",0x19,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_158.Ptr,0x59,L"DS_JsonStringToProtoMessage failed.\n%s");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      bVar3 = false;
    }
    mail::MailItem::~MailItem(&local_1f8);
    if (0xf < uStack_180) {
      uVar8 = uStack_180 + 1;
      uVar7 = local_198._Ptr;
      if (0xfff < uVar8) {
        uVar7 = *(undefined8 *)(local_198._Ptr + -8);
        uVar8 = uStack_180 + 0x28;
        if ((char *)0x1f < local_198._Ptr + (-8 - uVar7)) goto LAB_14ba7241a;
      }
      ::operator_delete((void *)uVar7,uVar8);
    }
    local_198._Ptr = local_198._Ptr & 0xffffffffffffff00;
    local_188 = ___xmm_000000000000000f0000000000000000;
    uStack_180 = _UNK_15076add8;
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
  }
  if (0xf < local_160) {
    uVar8 = local_160 + 1;
    uVar7 = local_178._Ptr;
    if (0xfff < uVar8) {
      uVar7 = *(undefined8 *)(local_178._Ptr + -8);
      uVar8 = local_160 + 0x28;
      if ((char *)0x1f < local_178._Ptr + (-8 - uVar7)) {
LAB_14ba7241a:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar7,uVar8);
  }
  return bVar3;
}

// UpdateMailIconID @ 14ba7d970

void __thiscall UDS_MailData::UpdateMailIconID(UDS_MailData *this)

{
  if (this->bHasItem != false) {
    this->MailIconID = (this->bIsReward != false) + 0x387;
    return;
  }
  this->MailIconID = (this->bIsRead != false) + 0x385;
  return;
}

