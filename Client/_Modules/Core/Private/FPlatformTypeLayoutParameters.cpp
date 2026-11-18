// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// Append @ 1419e07f0

void __thiscall
FPlatformTypeLayoutParameters::Append
          (FPlatformTypeLayoutParameters *this,FShaderKeyGenerator *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_res10;
  uint *local_res18;
  FString local_18;
  
  local_res18 = &this->Flags;
  if (param_1->OutputType == Binary) {
    local_res10 = 4;
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->ResultFunc);
    plVar1 = *(longlong **)&(param_1->ResultFunc).field_0x28;
    pcVar2 = *(code **)&param_1->ResultFunc;
    plVar5 = (longlong *)&(param_1->ResultFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,&local_res18,&local_res10);
    FShaderKeyGenerator::BinaryAppend(param_1,this,4);
    FShaderKeyGenerator::BinaryAppend(param_1,"B6A0A753ED62499D8F30931E61FCAB05",0x20);
    return;
  }
  ::FString::PrintfImpl(&local_18,L"FL_%08x_MFA_%08x_V_B6A0A753ED62499D8F30931E61FCAB05");
  if (param_1->OutputType != Text) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsText()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0x9d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar6 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  ::FString::AppendChars
            (param_1->ResultString,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AppendKeyString @ 1419e15d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPlatformTypeLayoutParameters::AppendKeyString(FPlatformTypeLayoutParameters *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  FString local_68;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  FString *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_30 = (longlong *)0x0;
  local_20 = 0;
  local_28 = param_1;
  ::FString::PrintfImpl(&local_68,L"FL_%08x_MFA_%08x_V_B6A0A753ED62499D8F30931E61FCAB05");
  if (local_20 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsText()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0x9d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(local_28,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58 != 0) {
    plVar3 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar3 = local_30;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// GetTypeLayout @ 141a046c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FPlatformTypeLayoutParameters::GetTypeLayout(FPlatformTypeLayoutParameters *this)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FPlatformTypeLayoutParameters FStackX_8;
  
  pwVar1 = DeprecatedName;
  if ((::TypeBuffer[0x67] & 2) != 0) {
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  pwVar4 = L"Flags";
  ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
  DAT_154f11672 = '\0';
  ::TypeBuffer[0x58] = '\b';
  ::TypeBuffer[0x59] = '\0';
  ::TypeBuffer[0x5a] = '\0';
  ::TypeBuffer[0x5b] = '\0';
  ::TypeBuffer._8_8_ = u_FPlatformTypeLa;
  ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
  ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
  ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
  ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
  ::TypeBuffer._64_8_ = Freeze::DefaultToString;
  ::TypeBuffer._24_8_ = InternalDestroy;
  ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FPlatformTypeLayoutParameters,0>::Do;
  `public:_static_void___cdecl_FPlatformTypeLayoutParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Flags";
  wVar2 = L'F';
  ::TypeBuffer[0x60] = '\x04';
  ::TypeBuffer[0x61] = '\0';
  ::TypeBuffer[0x62] = '\0';
  ::TypeBuffer[99] = '\0';
  ::TypeBuffer[100] = '\0';
  ::TypeBuffer[0x5c] = 0xff;
  ::TypeBuffer[0x5d] = 0xff;
  ::TypeBuffer[0x5e] = 0xff;
  ::TypeBuffer[0x5f] = 0xff;
  do {
    pwVar4 = pwVar4 + 1;
    if (wVar2 == L'_') {
      wVar2 = *pwVar4;
      pwVar3 = DeprecatedName;
      if (wVar2 == *DeprecatedName) {
        do {
          if (wVar2 == L'\0') goto LAB_141a2441f;
          wVar2 = pwVar4[1];
          pwVar4 = pwVar4 + 1;
          pwVar3 = pwVar3 + 1;
        } while (wVar2 == *pwVar3);
      }
      DAT_154f11672 = DAT_154f11672 + (char)((longlong)pwVar3 - (longlong)DeprecatedName >> 1);
    }
    wVar2 = *pwVar4;
    DAT_154f11672 = DAT_154f11672 + '\x01';
  } while (wVar2 != L'\0');
LAB_141a2441f:
  _DAT_154f11650 = StaticGetTypeLayoutDesc<unsigned_int>();
  pwVar4 = L"MaxFieldAlignment";
  DAT_154f11658 = ::TypeBuffer[0x10];
  DAT_154f11658_1._0_1_ = ::TypeBuffer[0x11];
  DAT_154f11658_1._1_1_ = ::TypeBuffer[0x12];
  DAT_154f11658_1._2_1_ = ::TypeBuffer[0x13];
  DAT_154f11658_1._3_1_ = ::TypeBuffer[0x14];
  DAT_154f11658_1._4_1_ = ::TypeBuffer[0x15];
  DAT_154f11658_1._5_1_ = ::TypeBuffer[0x16];
  DAT_154f11658_1._6_1_ = ::TypeBuffer[0x17];
  DAT_154f11642 = '\0';
  _DAT_154f11660 = Freeze::DefaultWriteMemoryImageField;
  ::TypeBuffer._16_8_ =
       &`public:_static_void___cdecl_FPlatformTypeLayoutParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FPlatformTypeLayoutParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "MaxFieldAlignment";
  wVar2 = L'M';
  _DAT_154f11668 = 4;
  _DAT_154f1166c = 1;
  _DAT_154f11670 = 0;
  do {
    pwVar4 = pwVar4 + 1;
    if (wVar2 == L'_') {
      wVar2 = *pwVar4;
      pwVar3 = pwVar1;
      if (wVar2 == *pwVar1) {
        do {
          if (wVar2 == L'\0') goto LAB_141a244d5;
          wVar2 = pwVar4[1];
          pwVar4 = pwVar4 + 1;
          pwVar3 = pwVar3 + 1;
        } while (wVar2 == *pwVar3);
      }
      DAT_154f11642 = DAT_154f11642 + (char)((longlong)pwVar3 - (longlong)pwVar1 >> 1);
    }
    wVar2 = *pwVar4;
    DAT_154f11642 = DAT_154f11642 + '\x01';
  } while (wVar2 != L'\0');
LAB_141a244d5:
  _DAT_154f11620 = StaticGetTypeLayoutDesc<unsigned_int>();
  DAT_154f11628 = ::TypeBuffer[0x10];
  DAT_154f11628_1._0_1_ = ::TypeBuffer[0x11];
  DAT_154f11628_1._1_1_ = ::TypeBuffer[0x12];
  DAT_154f11628_1._2_1_ = ::TypeBuffer[0x13];
  DAT_154f11628_1._3_1_ = ::TypeBuffer[0x14];
  DAT_154f11628_1._4_1_ = ::TypeBuffer[0x15];
  DAT_154f11628_1._5_1_ = ::TypeBuffer[0x16];
  DAT_154f11628_1._6_1_ = ::TypeBuffer[0x17];
  _DAT_154f11630 = Freeze::DefaultWriteMemoryImageField;
  ::TypeBuffer._16_8_ =
       &`public:_static_void___cdecl_FPlatformTypeLayoutParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  _DAT_154f11638 = 0;
  _DAT_154f1163c = 1;
  _DAT_154f11640 = 0;
  FStackX_8.Flags = 5;
  FStackX_8.MaxFieldAlignment = 8;
  InitializeSizeFromFields((FTypeLayoutDesc *)::TypeBuffer,&FStackX_8);
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InitializeForArchive @ 141a068d0

void __thiscall
FPlatformTypeLayoutParameters::InitializeForArchive
          (FPlatformTypeLayoutParameters *this,FArchive *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FString *pFVar6;
  FDataDrivenPlatformInfo *pFVar7;
  uint uVar8;
  void *local_18 [2];
  
  if ((param_1->field_0x28 & 4) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsSaving()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                       ,0x2e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar1 = *(longlong *)&param_1->field_0x68;
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) ||
     (plVar2 = *(longlong **)(lVar1 + 8), plVar2 == (longlong *)0x0)) {
    this->Flags = 5;
    this->MaxFieldAlignment = 8;
  }
  else {
    cVar5 = (**(code **)(plVar2[1] + 0x80))(plVar2 + 1);
    pFVar6 = (FString *)(**(code **)(*plVar2 + 8))(plVar2,local_18);
    pFVar7 = FDataDrivenPlatformInfoRegistry::GetPlatformInfo(pFVar6);
    uVar8 = 1;
    this->Flags = 1;
    if (cVar5 != '\0') {
      uVar8 = 9;
      this->Flags = 9;
    }
    if (pFVar7->Freezing_b32Bit != false) {
      uVar8 = uVar8 | 2;
      this->Flags = uVar8;
    }
    if (pFVar7->Freezing_bAlignBases != false) {
      this->Flags = uVar8 | 4;
    }
    this->MaxFieldAlignment = pFVar7->Freezing_MaxFieldAlignment;
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
      return;
    }
  }
  return;
}

// InitializeForClang @ 141a069d0

void __thiscall
FPlatformTypeLayoutParameters::InitializeForClang(FPlatformTypeLayoutParameters *this)

{
  return;
}

// InitializeForCurrent @ 141a069e0

void __thiscall
FPlatformTypeLayoutParameters::InitializeForCurrent(FPlatformTypeLayoutParameters *this)

{
  this->Flags = 5;
  this->MaxFieldAlignment = 8;
  return;
}

// InitializeForMSVC @ 141a06a00

void __thiscall
FPlatformTypeLayoutParameters::InitializeForMSVC(FPlatformTypeLayoutParameters *this)

{
  uint uVar1;
  
  this->Flags = this->Flags | 4;
  uVar1 = 8;
  if ((this->Flags & 2) != 0) {
    uVar1 = 4;
  }
  this->MaxFieldAlignment = uVar1;
  return;
}

// InitializeForPlatform @ 141a06a20

void __thiscall
FPlatformTypeLayoutParameters::InitializeForPlatform
          (FPlatformTypeLayoutParameters *this,FString *param_1,bool param_2)

{
  FDataDrivenPlatformInfo *pFVar1;
  uint uVar2;
  
  pFVar1 = FDataDrivenPlatformInfoRegistry::GetPlatformInfo(param_1);
  uVar2 = 1;
  this->Flags = 1;
  if (param_2) {
    uVar2 = 9;
    this->Flags = 9;
  }
  if (pFVar1->Freezing_b32Bit != false) {
    uVar2 = uVar2 | 2;
    this->Flags = uVar2;
  }
  if (pFVar1->Freezing_bAlignBases != false) {
    this->Flags = uVar2 | 4;
  }
  this->MaxFieldAlignment = pFVar1->Freezing_MaxFieldAlignment;
  return;
}

// InitializeForPlatform @ 141a06a80

void __thiscall
FPlatformTypeLayoutParameters::InitializeForPlatform
          (FPlatformTypeLayoutParameters *this,ITargetPlatform *param_1)

{
  char cVar1;
  FString *pFVar2;
  FDataDrivenPlatformInfo *pFVar3;
  uint uVar4;
  void *local_18 [2];
  
  if (param_1 == (ITargetPlatform *)0x0) {
    this->Flags = 5;
    this->MaxFieldAlignment = 8;
  }
  else {
    cVar1 = (**(code **)(*(longlong *)&param_1->field_0x8 + 0x80))(&param_1->field_0x8);
    pFVar2 = (FString *)(**(code **)(*(longlong *)param_1 + 8))(param_1,local_18);
    pFVar3 = FDataDrivenPlatformInfoRegistry::GetPlatformInfo(pFVar2);
    uVar4 = 1;
    this->Flags = 1;
    if (cVar1 != '\0') {
      uVar4 = 9;
      this->Flags = 9;
    }
    if (pFVar3->Freezing_b32Bit != false) {
      uVar4 = uVar4 | 2;
      this->Flags = uVar4;
    }
    if (pFVar3->Freezing_bAlignBases != false) {
      this->Flags = uVar4 | 4;
    }
    this->MaxFieldAlignment = pFVar3->Freezing_MaxFieldAlignment;
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
      return;
    }
  }
  return;
}

// InternalDestroy @ 141a072b0

void __cdecl
FPlatformTypeLayoutParameters::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  return;
}

// IsCurrentPlatform @ 141a07660

bool __thiscall
FPlatformTypeLayoutParameters::IsCurrentPlatform(FPlatformTypeLayoutParameters *this)

{
  if ((this->Flags == 5) && (this->MaxFieldAlignment == 8)) {
    return true;
  }
  return false;
}

// Serialize @ 141a1e750

FArchive * __thiscall
FPlatformTypeLayoutParameters::Serialize(FPlatformTypeLayoutParameters *this,FArchive *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->MaxFieldAlignment);
    }
  }
  else {
    this->MaxFieldAlignment = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &this->Flags;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// StaticGetTypeLayout @ 141a24300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FPlatformTypeLayoutParameters::StaticGetTypeLayout(void)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FPlatformTypeLayoutParameters local_res8;
  
  pwVar1 = DeprecatedName;
  if ((::TypeBuffer[0x67] & 2) != 0) {
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  pwVar4 = L"Flags";
  ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
  DAT_154f11672 = '\0';
  ::TypeBuffer[0x58] = '\b';
  ::TypeBuffer[0x59] = '\0';
  ::TypeBuffer[0x5a] = '\0';
  ::TypeBuffer[0x5b] = '\0';
  ::TypeBuffer._8_8_ = u_FPlatformTypeLa;
  ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
  ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
  ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
  ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
  ::TypeBuffer._64_8_ = Freeze::DefaultToString;
  ::TypeBuffer._24_8_ = InternalDestroy;
  ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FPlatformTypeLayoutParameters,0>::Do;
  `public:_static_void___cdecl_FPlatformTypeLayoutParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Flags";
  wVar2 = L'F';
  ::TypeBuffer[0x60] = '\x04';
  ::TypeBuffer[0x61] = '\0';
  ::TypeBuffer[0x62] = '\0';
  ::TypeBuffer[99] = '\0';
  ::TypeBuffer[100] = '\0';
  ::TypeBuffer[0x5c] = 0xff;
  ::TypeBuffer[0x5d] = 0xff;
  ::TypeBuffer[0x5e] = 0xff;
  ::TypeBuffer[0x5f] = 0xff;
  do {
    pwVar4 = pwVar4 + 1;
    if (wVar2 == L'_') {
      wVar2 = *pwVar4;
      pwVar3 = DeprecatedName;
      if (wVar2 == *DeprecatedName) {
        do {
          if (wVar2 == L'\0') goto LAB_141a2441f;
          wVar2 = pwVar4[1];
          pwVar4 = pwVar4 + 1;
          pwVar3 = pwVar3 + 1;
        } while (wVar2 == *pwVar3);
      }
      DAT_154f11672 = DAT_154f11672 + (char)((longlong)pwVar3 - (longlong)DeprecatedName >> 1);
    }
    wVar2 = *pwVar4;
    DAT_154f11672 = DAT_154f11672 + '\x01';
  } while (wVar2 != L'\0');
LAB_141a2441f:
  _DAT_154f11650 = StaticGetTypeLayoutDesc<unsigned_int>();
  pwVar4 = L"MaxFieldAlignment";
  DAT_154f11658 = ::TypeBuffer[0x10];
  DAT_154f11658_1._0_1_ = ::TypeBuffer[0x11];
  DAT_154f11658_1._1_1_ = ::TypeBuffer[0x12];
  DAT_154f11658_1._2_1_ = ::TypeBuffer[0x13];
  DAT_154f11658_1._3_1_ = ::TypeBuffer[0x14];
  DAT_154f11658_1._4_1_ = ::TypeBuffer[0x15];
  DAT_154f11658_1._5_1_ = ::TypeBuffer[0x16];
  DAT_154f11658_1._6_1_ = ::TypeBuffer[0x17];
  DAT_154f11642 = '\0';
  _DAT_154f11660 = Freeze::DefaultWriteMemoryImageField;
  ::TypeBuffer._16_8_ =
       &`public:_static_void___cdecl_FPlatformTypeLayoutParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FPlatformTypeLayoutParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "MaxFieldAlignment";
  wVar2 = L'M';
  _DAT_154f11668 = 4;
  _DAT_154f1166c = 1;
  _DAT_154f11670 = 0;
  do {
    pwVar4 = pwVar4 + 1;
    if (wVar2 == L'_') {
      wVar2 = *pwVar4;
      pwVar3 = pwVar1;
      if (wVar2 == *pwVar1) {
        do {
          if (wVar2 == L'\0') goto LAB_141a244d5;
          wVar2 = pwVar4[1];
          pwVar4 = pwVar4 + 1;
          pwVar3 = pwVar3 + 1;
        } while (wVar2 == *pwVar3);
      }
      DAT_154f11642 = DAT_154f11642 + (char)((longlong)pwVar3 - (longlong)pwVar1 >> 1);
    }
    wVar2 = *pwVar4;
    DAT_154f11642 = DAT_154f11642 + '\x01';
  } while (wVar2 != L'\0');
LAB_141a244d5:
  _DAT_154f11620 = StaticGetTypeLayoutDesc<unsigned_int>();
  DAT_154f11628 = ::TypeBuffer[0x10];
  DAT_154f11628_1._0_1_ = ::TypeBuffer[0x11];
  DAT_154f11628_1._1_1_ = ::TypeBuffer[0x12];
  DAT_154f11628_1._2_1_ = ::TypeBuffer[0x13];
  DAT_154f11628_1._3_1_ = ::TypeBuffer[0x14];
  DAT_154f11628_1._4_1_ = ::TypeBuffer[0x15];
  DAT_154f11628_1._5_1_ = ::TypeBuffer[0x16];
  DAT_154f11628_1._6_1_ = ::TypeBuffer[0x17];
  _DAT_154f11630 = Freeze::DefaultWriteMemoryImageField;
  ::TypeBuffer._16_8_ =
       &`public:_static_void___cdecl_FPlatformTypeLayoutParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  _DAT_154f11638 = 0;
  _DAT_154f1163c = 1;
  _DAT_154f11640 = 0;
  local_res8.Flags = 5;
  local_res8.MaxFieldAlignment = 8;
  InitializeSizeFromFields((FTypeLayoutDesc *)::TypeBuffer,&local_res8);
  return (FTypeLayoutDesc *)::TypeBuffer;
}

