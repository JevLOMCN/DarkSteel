// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIOWrapper
// Functions: 19

// FOpenColorIOWrapperConfig @ 14d75dd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FOpenColorIOWrapperConfig * __thiscall
FOpenColorIOWrapperConfig::FOpenColorIOWrapperConfig
          (FOpenColorIOWrapperConfig *this,TStringView<wchar_t> *param_1,
          EAddWorkingColorSpaceOption param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  wchar_t wVar4;
  TPimplPtr<FOpenColorIOConfigPimpl,1> TVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  Config *this_00;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar9;
  wchar_t *pwVar10;
  char *pcVar11;
  shared_ptr<OpenColorIO_v2_4::ColorSpace_const_> *psVar12;
  char *pcVar13;
  ulong64 _Size;
  longlong *plVar14;
  char *pcVar15;
  bool bVar16;
  undefined1 auStack_168 [32];
  Config *local_148;
  longlong *local_140;
  ColorSpace *local_138;
  longlong *plStack_130;
  Config *local_128;
  longlong *local_120;
  ColorSpace *local_118;
  longlong *plStack_110;
  undefined4 local_108;
  ColorSpace *local_100;
  longlong *local_f8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  pcVar15 = (char *)0x0;
  local_108 = 0;
  FOpenColorIOWrapperConfig(this);
  this->_padding_ = (longlong)&___7FOpenColorIOWrapperConfig__6B_;
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId157,"FOpenColorIOWrapperConfig::FOpenColorIOWrapperConfig",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenColorIOWrapper\\Private\\OpenColorIOWrapper.cpp"
               ,0x9d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId157);
  }
  pTVar9 = StringCast<char,128,wchar_t>(&local_e8,param_1->DataPtr);
  OpenColorIO_v2_4::Config::CreateFromFile
            ((shared_ptr<OpenColorIO_v2_4::Config_const_> *)&local_148,pTVar9->Ptr);
  if ((void *)local_e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._padding_);
  }
  if (local_148 == (Config *)0x0) goto LAB_14d75e111;
  if (param_2 != WCS_AsInterchangeSpace) {
    if (4 < (byte)LogOpenColorIOWrapper._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIOWrapper);
    }
    goto LAB_14d75e111;
  }
  pwVar10 = L"Working Color Space";
  pcVar13 = pcVar15;
  do {
    pwVar10 = pwVar10 + 1;
    iVar3 = (int)pcVar13;
    pcVar13 = (char *)(ulonglong)(iVar3 + 1);
  } while (*pwVar10 != L'\0');
  _Size = (ulong64)(iVar3 + 2);
  pcVar11 = operator_new__(_Size);
  pcVar13 = pcVar15;
  if (pcVar11 != (char *)0x0) {
    memset(pcVar11,0,_Size);
    pcVar13 = pcVar11;
  }
  local_e8.Ptr = (char *)&local_e8;
  local_e8._padding_ = 0;
  bVar7 = false;
  local_e8.StringLength = 0x13;
  pcVar11 = pcVar15;
  do {
    wVar4 = L"Working Color Space"[(longlong)pcVar11];
    pcVar11[(longlong)&local_e8._padding_] = (char)wVar4;
    pcVar11 = pcVar11 + 1;
    bVar7 = (bool)(bVar7 | 0x7f < (ushort)wVar4);
  } while ((longlong)pcVar11 < 0x14);
  pcVar11 = pcVar15;
  if (bVar7) {
    do {
      if (0x7f < (ushort)L"Working Color Space"[(longlong)pcVar11]) {
        pcVar11[(longlong)&local_e8._padding_] = '?';
      }
      pcVar11 = pcVar11 + 1;
    } while ((longlong)pcVar11 < 0x14);
  }
  memcpy(pcVar13,local_e8.Ptr,_Size);
  if ((void *)local_e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._padding_);
  }
  this_00 = local_148;
  pcVar11 = OpenColorIO_v2_4::Config::getCanonicalName
                      (local_148,OpenColorIO_v2_4::ROLE_INTERCHANGE_SCENE);
  OpenColorIO_v2_4::Config::getColorSpace
            (this_00,(shared_ptr<OpenColorIO_v2_4::ColorSpace_const_> *)&local_100,pcVar11);
  if (local_100 == (ColorSpace *)0x0) {
LAB_14d75def4:
    bVar7 = false;
  }
  else {
    psVar12 = OpenColorIO_v2_4::Config::getColorSpace
                        (local_148,(shared_ptr<OpenColorIO_v2_4::ColorSpace_const_> *)&local_118,
                         pcVar13);
    pcVar15 = &DAT_00000001;
    if (*(longlong *)psVar12 != 0) goto LAB_14d75def4;
    bVar7 = true;
  }
  plVar6 = plStack_110;
  if ((pcVar15 != (char *)0x0) && (plStack_110 != (longlong *)0x0)) {
    LOCK();
    plVar14 = plStack_110 + 1;
    lVar8 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (bVar7) {
    OpenColorIO_v2_4::ColorSpace::createEditableCopy
              (local_100,(shared_ptr<OpenColorIO_v2_4::ColorSpace> *)&local_138);
    OpenColorIO_v2_4::ColorSpace::setName(local_138,pcVar13);
    OpenColorIO_v2_4::ColorSpace::setFamily(local_138,"UE");
    OpenColorIO_v2_4::ColorSpace::setDescription
              (local_138,
               "The global engine working color space, as defined in project settings (defaults to sRGB/Rec.709)."
              );
    OpenColorIO_v2_4::ColorSpace::clearAliases(local_138);
    OpenColorIO_v2_4::Config::createEditableCopy
              (local_148,(shared_ptr<OpenColorIO_v2_4::Config> *)&local_128);
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
      UNLOCK();
    }
    local_118 = local_138;
    plStack_110 = plStack_130;
    OpenColorIO_v2_4::Config::addColorSpace
              (local_128,(shared_ptr<OpenColorIO_v2_4::ColorSpace_const_> *)&local_118);
    plVar6 = plStack_110;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_110 + 1;
      lVar8 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_110)(plStack_110);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    plVar6 = local_140;
    if (local_120 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_120 + 1) = (int)local_120[1] + 1;
      UNLOCK();
    }
    local_148 = local_128;
    local_140 = local_120;
    plVar14 = local_120;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar14 = local_120;
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
          plVar14 = local_120;
        }
      }
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar14 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
    }
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_130 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_130)(plStack_130);
        LOCK();
        piVar1 = (int *)((longlong)plStack_130 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_130 + 8))(plStack_130);
        }
      }
    }
  }
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_f8 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar1 = (int *)((longlong)local_f8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8);
      }
    }
  }
  operator_delete__(pcVar13);
LAB_14d75e111:
  TVar5 = this->Pimpl;
  if (local_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_140 + 1) = (int)local_140[1] + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)((longlong)TVar5 + 8);
  *(Config **)TVar5 = local_148;
  *(longlong **)((longlong)TVar5 + 8) = local_140;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar6 + 1;
    lVar8 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  plVar6 = local_140;
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_140 + 1;
    lVar8 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return this;
}

// FOpenColorIOWrapperConfig @ 14d75e1e0

FOpenColorIOWrapperConfig * __thiscall
FOpenColorIOWrapperConfig::FOpenColorIOWrapperConfig(FOpenColorIOWrapperConfig *this)

{
  undefined8 *puVar1;
  
  this->_padding_ = (longlong)&___7FOpenColorIOWrapperConfig__6B_;
  puVar1 = ::operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = UE::Core::Private::PimplPtr::DeleterFunc<FOpenColorIOConfigPimpl>;
    puVar1[1] = UE::Core::Private::PimplPtr::CopyFunc<FOpenColorIOConfigPimpl>;
    puVar1[2] = 0;
    puVar1[3] = 0;
    this->Pimpl = (TPimplPtr<FOpenColorIOConfigPimpl,1>)(puVar1 + 2);
    return this;
  }
  this->Pimpl = (TPimplPtr<FOpenColorIOConfigPimpl,1>)0x10;
  return this;
}

// ~FOpenColorIOWrapperConfig @ 14d7605a0

void __thiscall
FOpenColorIOWrapperConfig::~FOpenColorIOWrapperConfig(FOpenColorIOWrapperConfig *this)

{
  TPimplPtr<FOpenColorIOConfigPimpl,1> TVar1;
  
  TVar1 = this->Pimpl;
  if (TVar1 != (TPimplPtr<FOpenColorIOConfigPimpl,1>)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d7605b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)TVar1 + -0x10))((longlong)TVar1 + -0x10);
    return;
  }
  return;
}

// GetCacheID @ 14d762430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FOpenColorIOWrapperConfig::GetCacheID
          (FOpenColorIOWrapperConfig *this,FString *__return_storage_ptr__)

{
  char *pcVar1;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar2;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (*(Config **)this->Pimpl == (Config *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    pcVar1 = OpenColorIO_v2_4::Config::getCacheID(*(Config **)this->Pimpl);
    pTVar2 = StringCast<wchar_t,128,char>(&local_138,pcVar1);
    ::FString::FString(__return_storage_ptr__,pTVar2->Ptr);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return __return_storage_ptr__;
}

// GetColorSpaceDescription @ 14d7625f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FOpenColorIOWrapperConfig::GetColorSpaceDescription
          (FOpenColorIOWrapperConfig *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  Config *this_00;
  longlong lVar4;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar5;
  char *pcVar6;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar7;
  undefined1 auStack_178 [32];
  ColorSpace *local_158;
  longlong *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  this_00 = *(Config **)this->Pimpl;
  if (this_00 != (Config *)0x0) {
    pTVar5 = StringCast<char,128,wchar_t>
                       ((TStringConversion<TStringConvert<wchar_t,char>,128> *)&local_148,param_1);
    OpenColorIO_v2_4::Config::getColorSpace
              (this_00,(shared_ptr<OpenColorIO_v2_4::ColorSpace_const_> *)&local_158,pTVar5->Ptr);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if (local_158 != (ColorSpace *)0x0) {
      pcVar6 = OpenColorIO_v2_4::ColorSpace::getDescription(local_158);
      pTVar7 = StringCast<wchar_t,128,char>(&local_148,pcVar6);
      ::FString::FString(__return_storage_ptr__,pTVar7->Ptr);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if (local_150 == (longlong *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      plVar1 = local_150 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
        return __return_storage_ptr__;
      }
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar2 = (int *)((longlong)local_150 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return __return_storage_ptr__;
      }
      (**(code **)(*local_150 + 8))(local_150);
      return __return_storage_ptr__;
    }
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_150 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar2 = (int *)((longlong)local_150 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_150 + 8))(local_150);
        }
      }
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetColorSpaceFamilyName @ 14d762730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FOpenColorIOWrapperConfig::GetColorSpaceFamilyName
          (FOpenColorIOWrapperConfig *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  Config *this_00;
  longlong lVar4;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar5;
  char *pcVar6;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar7;
  undefined1 auStack_178 [32];
  ColorSpace *local_158;
  longlong *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  this_00 = *(Config **)this->Pimpl;
  if (this_00 != (Config *)0x0) {
    pTVar5 = StringCast<char,128,wchar_t>
                       ((TStringConversion<TStringConvert<wchar_t,char>,128> *)&local_148,param_1);
    OpenColorIO_v2_4::Config::getColorSpace
              (this_00,(shared_ptr<OpenColorIO_v2_4::ColorSpace_const_> *)&local_158,pTVar5->Ptr);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if (local_158 != (ColorSpace *)0x0) {
      pcVar6 = OpenColorIO_v2_4::ColorSpace::getFamily(local_158);
      pTVar7 = StringCast<wchar_t,128,char>(&local_148,pcVar6);
      ::FString::FString(__return_storage_ptr__,pTVar7->Ptr);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if (local_150 == (longlong *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      plVar1 = local_150 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
        return __return_storage_ptr__;
      }
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar2 = (int *)((longlong)local_150 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return __return_storage_ptr__;
      }
      (**(code **)(*local_150 + 8))(local_150);
      return __return_storage_ptr__;
    }
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_150 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar2 = (int *)((longlong)local_150 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_150 + 8))(local_150);
        }
      }
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetColorSpaceIndex @ 14d762870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FOpenColorIOWrapperConfig::GetColorSpaceIndex(FOpenColorIOWrapperConfig *this,wchar_t *param_1)

{
  Config *this_00;
  int iVar1;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar2;
  undefined1 auStack_d8 [32];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this_00 = *(Config **)this->Pimpl;
  if (this_00 == (Config *)0x0) {
    iVar1 = 0;
  }
  else {
    pTVar2 = StringCast<char,128,wchar_t>(&local_b8,param_1);
    iVar1 = OpenColorIO_v2_4::Config::getIndexForColorSpace(this_00,pTVar2->Ptr);
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
  }
  return iVar1;
}

// GetColorSpaceName @ 14d7628f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FOpenColorIOWrapperConfig::GetColorSpaceName
          (FOpenColorIOWrapperConfig *this,FString *__return_storage_ptr__,int param_1)

{
  char *pcVar1;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar2;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (*(Config **)this->Pimpl == (Config *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    pcVar1 = OpenColorIO_v2_4::Config::getColorSpaceNameByIndex
                       (*(Config **)this->Pimpl,SEARCH_REFERENCE_SPACE_ALL,COLORSPACE_ACTIVE,param_1
                       );
    pTVar2 = StringCast<wchar_t,128,char>(&local_138,pcVar1);
    ::FString::FString(__return_storage_ptr__,pTVar2->Ptr);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return __return_storage_ptr__;
}

// GetCurrentContextStringVars @ 14d762990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *
__thiscall
FOpenColorIOWrapperConfig::GetCurrentContextStringVars
          (FOpenColorIOWrapperConfig *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *__return_storage_ptr__)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  FString *pFVar7;
  int iVar8;
  undefined1 auStackY_108 [32];
  Context *local_d8;
  longlong *local_d0;
  TPairInitializer<FString_&&,FString_&&> local_c8;
  FString *local_b8;
  FString local_b0;
  FString local_a0;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  iVar8 = 0;
  if (*(Config **)this->Pimpl == (Config *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
    *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
    *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  }
  else {
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    OpenColorIO_v2_4::Config::getCurrentContext
              (*(Config **)this->Pimpl,(shared_ptr<OpenColorIO_v2_4::Context_const_> *)&local_d8);
    iVar4 = OpenColorIO_v2_4::Context::getNumStringVars(local_d8);
    if (0 < iVar4) {
      do {
        pcVar5 = OpenColorIO_v2_4::Context::getStringVarNameByIndex(local_d8,iVar8);
        pcVar6 = OpenColorIO_v2_4::Context::getStringVarByIndex(local_d8,iVar8);
        pFVar7 = ::FString::FString(&local_a0,pcVar6);
        local_c8.Value = ::FString::FString(&local_b0,pcVar5);
        local_b8 = pFVar7;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
                  ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)local_88,&local_c8,(bool *)&local_c8.Value);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        iVar8 = iVar8 + 1;
        iVar4 = OpenColorIO_v2_4::Context::getNumStringVars(local_d8);
      } while (iVar8 < iVar4);
    }
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__,
               (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)local_88);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0);
        }
      }
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,0,local_88._8_4_);
    iVar8 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar8 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_58 = 0xffffffff;
    local_54 = 0;
    local_60 = 0;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
  }
  return __return_storage_ptr__;
}

// GetDebugString @ 14d762be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FOpenColorIOWrapperConfig::GetDebugString
          (FOpenColorIOWrapperConfig *this,FString *__return_storage_ptr__)

{
  longlong *plVar1;
  int *piVar2;
  TPimplPtr<FOpenColorIOConfigPimpl,1> TVar3;
  Config *this_00;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  void *pvVar7;
  char *pcVar8;
  size_t sVar9;
  char *_Str;
  wchar_t *pwVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_8a8 [32];
  int local_888;
  FString *local_880;
  ColorSpace *local_878;
  longlong *local_870;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_8a8;
  local_868.Base = local_848;
  TVar3 = this->Pimpl;
  iVar11 = 0;
  local_868.CurPos = local_848;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.End = (wchar_t *)local_48;
  local_880 = __return_storage_ptr__;
  if ((*(Config **)TVar3 != (Config *)0x0) &&
     (iVar6 = OpenColorIO_v2_4::Config::getNumColorSpaces(*(Config **)TVar3), 0 < iVar6)) {
    if (local_868.End < local_868.CurPos + 0x12) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,0x12);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_868.CurPos,L"** ColorSpaces **\n",0x24);
    local_868.CurPos = (wchar_t *)((longlong)pvVar7 + 0x24);
    iVar6 = OpenColorIO_v2_4::Config::getNumColorSpaces
                      (*(Config **)TVar3,SEARCH_REFERENCE_SPACE_ALL,COLORSPACE_ALL);
    if (0 < iVar6) {
      do {
        this_00 = *(Config **)TVar3;
        pcVar8 = OpenColorIO_v2_4::Config::getColorSpaceNameByIndex
                           (this_00,SEARCH_REFERENCE_SPACE_ALL,COLORSPACE_ALL,iVar11);
        OpenColorIO_v2_4::Config::getColorSpace
                  (this_00,(shared_ptr<OpenColorIO_v2_4::ColorSpace_const_> *)&local_878,pcVar8);
        pcVar8 = OpenColorIO_v2_4::ColorSpace::getName(local_878);
        iVar12 = 0;
        if (pcVar8 != (char *)0x0) {
          sVar9 = strlen(pcVar8);
          iVar12 = (int)sVar9;
        }
        if (local_868.End < local_868.CurPos + iVar12) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,(longlong)iVar12);
        }
        if (iVar12 != 0) {
          local_868.CurPos =
               FGenericPlatformString::Convert<char,wchar_t>(local_868.CurPos,iVar12,pcVar8,iVar12);
        }
        if (local_868.End < local_868.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,1);
        }
        pvVar7 = FGenericPlatformString::Memcpy(local_868.CurPos,L"\n",2);
        plVar5 = local_870;
        local_868.CurPos = (wchar_t *)((longlong)pvVar7 + 2);
        if (local_870 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_870 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_870)(local_870);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar12 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar6);
    }
    if (local_868.End < local_868.CurPos + 0x1c) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,0x1c);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_868.CurPos,L"** (Display, View) pairs **\n",0x38);
    local_868.CurPos = (wchar_t *)((longlong)pvVar7 + 0x38);
    iVar11 = 0;
    local_888 = 0;
    iVar6 = OpenColorIO_v2_4::Config::getNumDisplaysAll(*(Config **)TVar3);
    __return_storage_ptr__ = local_880;
    if (0 < iVar6) {
      do {
        pcVar8 = OpenColorIO_v2_4::Config::getDisplayAll(*(Config **)TVar3,iVar11);
        iVar6 = OpenColorIO_v2_4::Config::getNumViews(*(Config **)TVar3,pcVar8);
        iVar12 = 0;
        if (0 < iVar6) {
          do {
            iVar11 = 0;
            _Str = OpenColorIO_v2_4::Config::getView(*(Config **)TVar3,pcVar8,iVar12);
            if (local_868.End < local_868.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_868,1);
            }
            pvVar7 = FGenericPlatformString::Memcpy(local_868.CurPos,L"(",2);
            pwVar10 = (wchar_t *)((longlong)pvVar7 + 2);
            local_868.CurPos = pwVar10;
            if (pcVar8 != (char *)0x0) {
              sVar9 = strlen(pcVar8);
              iVar11 = (int)sVar9;
            }
            if (local_868.End < pwVar10 + iVar11) {
              TStringBuilderBase<wchar_t>::Extend(&local_868,(longlong)iVar11);
              pwVar10 = local_868.CurPos;
            }
            if (iVar11 != 0) {
              pwVar10 = FGenericPlatformString::Convert<char,wchar_t>(pwVar10,iVar11,pcVar8,iVar11);
              local_868.CurPos = pwVar10;
            }
            if (local_868.End < pwVar10 + 2) {
              TStringBuilderBase<wchar_t>::Extend(&local_868,2);
              pwVar10 = local_868.CurPos;
            }
            pvVar7 = FGenericPlatformString::Memcpy(pwVar10,L", ",4);
            iVar11 = 0;
            pwVar10 = (wchar_t *)((longlong)pvVar7 + 4);
            local_868.CurPos = pwVar10;
            if (_Str != (char *)0x0) {
              sVar9 = strlen(_Str);
              iVar11 = (int)sVar9;
            }
            if (local_868.End < pwVar10 + iVar11) {
              TStringBuilderBase<wchar_t>::Extend(&local_868,(longlong)iVar11);
              pwVar10 = local_868.CurPos;
            }
            if (iVar11 != 0) {
              pwVar10 = FGenericPlatformString::Convert<char,wchar_t>(pwVar10,iVar11,_Str,iVar11);
              local_868.CurPos = pwVar10;
            }
            if (local_868.End < pwVar10 + 2) {
              TStringBuilderBase<wchar_t>::Extend(&local_868,2);
              pwVar10 = local_868.CurPos;
            }
            pvVar7 = FGenericPlatformString::Memcpy(pwVar10,L")\n",4);
            local_868.CurPos = (wchar_t *)((longlong)pvVar7 + 4);
            iVar12 = iVar12 + 1;
            iVar11 = local_888;
          } while (iVar12 < iVar6);
        }
        iVar11 = iVar11 + 1;
        local_888 = iVar11;
        iVar6 = OpenColorIO_v2_4::Config::getNumDisplaysAll(*(Config **)TVar3);
        __return_storage_ptr__ = local_880;
      } while (iVar11 < iVar6);
    }
  }
  if (local_868.End < local_868.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,1);
  }
  *local_868.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_868.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return __return_storage_ptr__;
}

// GetDisplayName @ 14d763090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FOpenColorIOWrapperConfig::GetDisplayName
          (FOpenColorIOWrapperConfig *this,FString *__return_storage_ptr__,int param_1)

{
  char *pcVar1;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar2;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (*(Config **)this->Pimpl == (Config *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    pcVar1 = OpenColorIO_v2_4::Config::getDisplay(*(Config **)this->Pimpl,param_1);
    pTVar2 = StringCast<wchar_t,128,char>(&local_138,pcVar1);
    ::FString::FString(__return_storage_ptr__,pTVar2->Ptr);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return __return_storage_ptr__;
}

// GetDisplayViewDescription @ 14d763120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FOpenColorIOWrapperConfig::GetDisplayViewDescription
          (FOpenColorIOWrapperConfig *this,FString *__return_storage_ptr__,wchar_t *param_1,
          wchar_t *param_2)

{
  Config *this_00;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar1;
  char *pcVar2;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar3;
  undefined1 auStack_2b8 [32];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_298;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_1f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  this_00 = *(Config **)this->Pimpl;
  if (this_00 == (Config *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    pTVar1 = StringCast<char,128,wchar_t>(&local_1f8,param_2);
    pcVar2 = pTVar1->Ptr;
    pTVar1 = StringCast<char,128,wchar_t>(&local_298,param_1);
    pcVar2 = OpenColorIO_v2_4::Config::getDisplayViewDescription(this_00,pTVar1->Ptr,pcVar2);
    if ((void *)local_298._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_298._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    pTVar3 = StringCast<wchar_t,128,char>(&local_158,pcVar2);
    ::FString::FString(__return_storage_ptr__,pTVar3->Ptr);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  return __return_storage_ptr__;
}

// GetDisplayViewTransformDescription @ 14d763220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FOpenColorIOWrapperConfig::GetDisplayViewTransformDescription
          (FOpenColorIOWrapperConfig *this,FString *__return_storage_ptr__,wchar_t *param_1,
          wchar_t *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  Config *this_00;
  longlong lVar4;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar5;
  char *pcVar6;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar7;
  undefined1 auStack_228 [32];
  ViewTransform *local_208;
  longlong *local_200;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1f8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  this_00 = *(Config **)this->Pimpl;
  if (this_00 != (Config *)0x0) {
    pTVar5 = StringCast<char,128,wchar_t>
                       ((TStringConversion<TStringConvert<wchar_t,char>,128> *)&local_1f8,param_2);
    pcVar6 = pTVar5->Ptr;
    pTVar5 = StringCast<char,128,wchar_t>(&local_d8,param_1);
    pcVar6 = OpenColorIO_v2_4::Config::getDisplayViewTransformName(this_00,pTVar5->Ptr,pcVar6);
    if ((void *)local_d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    OpenColorIO_v2_4::Config::getViewTransform
              (*(Config **)this->Pimpl,
               (shared_ptr<OpenColorIO_v2_4::ViewTransform_const_> *)&local_208,pcVar6);
    if (local_208 != (ViewTransform *)0x0) {
      pcVar6 = OpenColorIO_v2_4::ViewTransform::getDescription(local_208);
      pTVar7 = StringCast<wchar_t,128,char>(&local_1f8,pcVar6);
      ::FString::FString(__return_storage_ptr__,pTVar7->Ptr);
      if ((void *)local_1f8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1f8._padding_);
      }
      if (local_200 == (longlong *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      plVar1 = local_200 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
        return __return_storage_ptr__;
      }
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar2 = (int *)((longlong)local_200 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return __return_storage_ptr__;
      }
      (**(code **)(*local_200 + 8))(local_200);
      return __return_storage_ptr__;
    }
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_200 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar2 = (int *)((longlong)local_200 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_200 + 8))(local_200);
        }
      }
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDisplayViewTransformName @ 14d7633b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FOpenColorIOWrapperConfig::GetDisplayViewTransformName
          (FOpenColorIOWrapperConfig *this,FString *__return_storage_ptr__,wchar_t *param_1,
          wchar_t *param_2)

{
  Config *this_00;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar1;
  char *pcVar2;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar3;
  undefined1 auStack_2b8 [32];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_298;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_1f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  this_00 = *(Config **)this->Pimpl;
  if (this_00 == (Config *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    pTVar1 = StringCast<char,128,wchar_t>(&local_1f8,param_2);
    pcVar2 = pTVar1->Ptr;
    pTVar1 = StringCast<char,128,wchar_t>(&local_298,param_1);
    pcVar2 = OpenColorIO_v2_4::Config::getDisplayViewTransformName(this_00,pTVar1->Ptr,pcVar2);
    if ((void *)local_298._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_298._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    pTVar3 = StringCast<wchar_t,128,char>(&local_158,pcVar2);
    ::FString::FString(__return_storage_ptr__,pTVar3->Ptr);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  return __return_storage_ptr__;
}

// GetNumColorSpaces @ 14d7635c0

int __thiscall FOpenColorIOWrapperConfig::GetNumColorSpaces(FOpenColorIOWrapperConfig *this)

{
  int iVar1;
  
  if (*(Config **)this->Pimpl != (Config *)0x0) {
    iVar1 = OpenColorIO_v2_4::Config::getNumColorSpaces
                      (*(Config **)this->Pimpl,SEARCH_REFERENCE_SPACE_ALL,COLORSPACE_ACTIVE);
    return iVar1;
  }
  return 0;
}

// GetNumDisplays @ 14d7635f0

int __thiscall FOpenColorIOWrapperConfig::GetNumDisplays(FOpenColorIOWrapperConfig *this)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)this->Pimpl;
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = *plVar1;
  if ((((vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
         *)(lVar2 + 0x288))->_Mypair)._Myval2._Myfirst ==
      *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(lVar2 + 0x290)) {
    OpenColorIO_v2_4::ComputeDisplays
              ((vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                *)(lVar2 + 0x288),
               (vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,OpenColorIO_v2_4::Display>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,OpenColorIO_v2_4::Display>_>_>
                *)(lVar2 + 0x138),
               (vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>
                *)(lVar2 + 0x150),
               (vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>
                *)(lVar2 + 0x168));
  }
  return (int)(*(longlong *)(*plVar1 + 0x290) - *(longlong *)(*plVar1 + 0x288) >> 5);
}

// GetNumViews @ 14d763640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FOpenColorIOWrapperConfig::GetNumViews(FOpenColorIOWrapperConfig *this,wchar_t *param_1)

{
  Config *this_00;
  int iVar1;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar2;
  undefined1 auStack_d8 [32];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this_00 = *(Config **)this->Pimpl;
  if (this_00 == (Config *)0x0) {
    iVar1 = 0;
  }
  else {
    pTVar2 = StringCast<char,128,wchar_t>(&local_b8,param_1);
    iVar1 = OpenColorIO_v2_4::Config::getNumViews(this_00,pTVar2->Ptr);
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
  }
  return iVar1;
}

// GetViewName @ 14d763b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FOpenColorIOWrapperConfig::GetViewName
          (FOpenColorIOWrapperConfig *this,FString *__return_storage_ptr__,wchar_t *param_1,
          int param_2)

{
  Config *this_00;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar1;
  char *pcVar2;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar3;
  undefined1 auStack_208 [32];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_1e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_208;
  this_00 = *(Config **)this->Pimpl;
  if (this_00 == (Config *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    pTVar1 = StringCast<char,128,wchar_t>(&local_1e8,param_1);
    pcVar2 = OpenColorIO_v2_4::Config::getView(this_00,pTVar1->Ptr,param_2);
    if ((void *)local_1e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1e8._padding_);
    }
    pTVar3 = StringCast<wchar_t,128,char>(&local_148,pcVar2);
    ::FString::FString(__return_storage_ptr__,pTVar3->Ptr);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return __return_storage_ptr__;
}

// IsValid @ 14d763cd0

bool __thiscall FOpenColorIOWrapperConfig::IsValid(FOpenColorIOWrapperConfig *this)

{
  return *(longlong *)this->Pimpl != 0;
}

