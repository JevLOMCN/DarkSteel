// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenExrWrapper
// Functions: 14

// FOpenExrHeaderReader @ 14ea28d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FOpenExrHeaderReader * __thiscall
FOpenExrHeaderReader::FOpenExrHeaderReader(FOpenExrHeaderReader *this,FString *param_1)

{
  int iVar1;
  _priv_exr_context_t **pp_Var2;
  _priv_exr_context_t **pp_Var3;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar4;
  wchar_t *pwVar5;
  undefined1 auStack_178 [32];
  TSharedPtr<void,1> local_158;
  FOpenExrHeaderReader *local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_148 = this;
  pp_Var2 = ::operator_new(8);
  pp_Var3 = (_priv_exr_context_t **)0x0;
  if (pp_Var2 != (_priv_exr_context_t **)0x0) {
    *pp_Var2 = (_priv_exr_context_t *)0x0;
    pp_Var3 = pp_Var2;
  }
  TSharedPtr<void,1>::TSharedPtr<void,1><_priv_exr_context_t_*>(&this->FileContext,pp_Var3);
  local_138 = 0x68;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0xfffffffe;
  local_dc = 0xbf800000;
  local_d8 = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pTVar4 = StringCast<char,128,wchar_t>(&local_c8,pwVar5);
  iVar1 = exr_start_read((this->FileContext).Object,pTVar4->Ptr,&local_138);
  if ((iVar1 != 0) && (1 < (byte)LogOpenEXRWrapperHeaderReader._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_OpenExr_FOpenEx_152fe40d0,
               (FLogCategoryBase *)&LogOpenEXRWrapperHeaderReader);
  }
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  if (iVar1 != 0) {
    local_158.Object = (void *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    TSharedPtr<void,1>::operator=(&this->FileContext,&local_158);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
  }
  return this;
}

// ~FOpenExrHeaderReader @ 14ea291c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenExrHeaderReader::~FOpenExrHeaderReader(FOpenExrHeaderReader *this)

{
  int iVar1;
  TSharedPtr<void,1> local_18;
  
  iVar1 = exr_finish((this->FileContext).Object);
  if ((iVar1 != 0) && (1 < (byte)LogOpenEXRWrapperHeaderReader._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_OpenExr_FOpenEx_152fe40d0,
               (FLogCategoryBase *)&LogOpenEXRWrapperHeaderReader);
  }
  local_18.Object = (void *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TSharedPtr<void,1>::operator=(&this->FileContext,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FileContext).SharedReferenceCount.ReferenceController);
  return;
}

// CalculateNumMipLevels @ 14ea29900

int __thiscall
FOpenExrHeaderReader::CalculateNumMipLevels(FOpenExrHeaderReader *this,TIntPoint<int> *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong local_res8;
  
  local_res8 = 0;
  iVar4 = exr_get_attribute_by_name(*(undefined8 *)(this->FileContext).Object,0,"tiles",&local_res8)
  ;
  if ((iVar4 != 0) || (local_res8 == 0)) {
    return 1;
  }
  uVar2 = (param_1->field0_0x0)._s_0.Y;
  if ((param_1->field0_0x0)._s_0.X < (int)uVar2) {
    uVar2 = (param_1->field0_0x0)._s_0.X;
  }
  if ((*(byte *)(*(longlong *)(local_res8 + 0x18) + 8) & 0xf0) == 0) {
    iVar4 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    iVar6 = 0;
    if (uVar2 != 0) {
      iVar6 = iVar4;
    }
    return iVar6 + 1;
  }
  uVar5 = 1;
  if (uVar2 != 0) {
    uVar5 = uVar2;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  return (int)lVar3 + 1;
}

// ContainsMips @ 14ea299a0

bool __thiscall FOpenExrHeaderReader::ContainsMips(FOpenExrHeaderReader *this)

{
  int iVar1;
  longlong local_res8 [4];
  
  local_res8[0] = 0;
  iVar1 = exr_get_attribute_by_name(*(undefined8 *)(this->FileContext).Object,0,"tiles",local_res8);
  if ((iVar1 == 0) && (local_res8[0] != 0)) {
    return (*(byte *)(*(longlong *)(local_res8[0] + 0x18) + 8) & 0xf) == 1;
  }
  return false;
}

// GetCompressionName @ 14ea29d70

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __thiscall FOpenExrHeaderReader::GetCompressionName(FOpenExrHeaderReader *this)

{
  int iVar1;
  longlong local_res8 [4];
  
  local_res8[0] = 0;
  iVar1 = exr_get_attribute_by_name
                    (*(undefined8 *)(this->FileContext).Object,0,"compression",local_res8);
  if ((iVar1 != 0) && (1 < (byte)LogOpenEXRWrapperHeaderReader._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_OpenExr_FOpenEx_152fe40d0,
               (FLogCategoryBase *)&LogOpenEXRWrapperHeaderReader);
  }
  if (local_res8[0] != 0) {
    switch(*(undefined4 *)(local_res8[0] + 0x18)) {
    case 0:
      return L"Uncompressed";
    case 1:
      return L"RLE";
    case 2:
      return L"ZIPS";
    case 3:
      return L"ZIP";
    case 4:
      return L"PIZ";
    case 5:
      return L"PXR24";
    case 6:
      return L"B44";
    case 7:
      return L"B44A";
    default:
      return L"Unknown";
    }
  }
  return L"";
}

// GetDataWindow @ 14ea2a040

/* WARNING: Enum "Type": Some values do not have unique names */

TIntPoint<int> __thiscall FOpenExrHeaderReader::GetDataWindow(FOpenExrHeaderReader *this)

{
  int *piVar1;
  int iVar2;
  TIntPoint<int>_u_0 in_RDX;
  longlong local_res8 [4];
  
  local_res8[0] = 0;
  iVar2 = exr_get_attribute_by_name
                    (*(undefined8 *)(this->FileContext).Object,0,"dataWindow",local_res8);
  if ((iVar2 != 0) && (1 < (byte)LogOpenEXRWrapperHeaderReader._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_OpenExr_FOpenEx_152fe40d0,
               (FLogCategoryBase *)&LogOpenEXRWrapperHeaderReader);
  }
  piVar1 = *(int **)(local_res8[0] + 0x18);
  *(int *)in_RDX = (piVar1[2] - *piVar1) + 1;
  *(int *)((longlong)in_RDX + 4) = (piVar1[3] - piVar1[1]) + 1;
  return (TIntPoint<int>)in_RDX;
}

// GetFrameRate @ 14ea2a1a0

FFrameRate __thiscall
FOpenExrHeaderReader::GetFrameRate(FOpenExrHeaderReader *this,FFrameRate *param_1)

{
  int *piVar1;
  int iVar2;
  FFrameRate *in_R8;
  longlong local_res8;
  
  local_res8 = 0;
  iVar2 = exr_get_attribute_by_name
                    (*(undefined8 *)(this->FileContext).Object,0,"framesPerSecond",&local_res8);
  if ((iVar2 != 0xf) && (local_res8 != 0)) {
    piVar1 = *(int **)(local_res8 + 0x18);
    param_1->Numerator = *piVar1;
    param_1->Denominator = piVar1[1];
    return (FFrameRate)param_1;
  }
  *param_1 = *in_R8;
  return (FFrameRate)param_1;
}

// GetIntAttribute @ 14ea2a360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FOpenExrHeaderReader::GetIntAttribute(FOpenExrHeaderReader *this,FString *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar3;
  wchar_t *pwVar4;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8[0] = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pTVar3 = StringCast<char,128,wchar_t>(&local_b8,pwVar4);
  iVar2 = exr_get_attribute_by_name
                    (*(undefined8 *)(this->FileContext).Object,0,pTVar3->Ptr,local_c8);
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  if ((iVar2 == 0) && (local_c8[0] != 0)) {
    *param_2 = *(int *)(local_c8[0] + 0x18);
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// GetNumChannels @ 14ea2a740

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FOpenExrHeaderReader::GetNumChannels(FOpenExrHeaderReader *this)

{
  int iVar1;
  longlong local_res8 [4];
  
  local_res8[0] = 0;
  iVar1 = exr_get_attribute_by_name
                    (*(undefined8 *)(this->FileContext).Object,0,"channels",local_res8);
  if ((iVar1 != 0) && (1 < (byte)LogOpenEXRWrapperHeaderReader._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_OpenExr_FOpenEx_152fe40d0,
               (FLogCategoryBase *)&LogOpenEXRWrapperHeaderReader);
  }
  return **(int **)(local_res8[0] + 0x18);
}

// GetPixelSize @ 14ea2a9c0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FOpenExrHeaderReader::GetPixelSize(FOpenExrHeaderReader *this)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong local_res8 [4];
  
  iVar2 = 0;
  local_res8[0] = 0;
  iVar1 = exr_get_attribute_by_name
                    (*(undefined8 *)(this->FileContext).Object,0,"channels",local_res8);
  if ((iVar1 != 0) && (1 < (byte)LogOpenEXRWrapperHeaderReader._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_OpenExr_FOpenEx_152fe40d0,
               (FLogCategoryBase *)&LogOpenEXRWrapperHeaderReader);
  }
  iVar1 = **(int **)(local_res8[0] + 0x18);
  lVar3 = (longlong)iVar1;
  if (0 < iVar1) {
    piVar4 = (int *)(*(longlong *)(*(int **)(local_res8[0] + 0x18) + 2) + 0x10);
    do {
      iVar1 = *piVar4;
      if ((iVar1 == 0) || ((iVar1 != 1 && (iVar1 == 2)))) {
        iVar1 = 4;
      }
      else {
        iVar1 = 2;
      }
      iVar2 = iVar1 + iVar2;
      piVar4 = piVar4 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return iVar2;
  }
  return 0;
}

// GetTileSize @ 14ea2aa60

bool __thiscall
FOpenExrHeaderReader::GetTileSize(FOpenExrHeaderReader *this,TIntPoint<int> *param_1)

{
  int iVar1;
  longlong local_res8 [4];
  
  local_res8[0] = 0;
  iVar1 = exr_get_attribute_by_name(*(undefined8 *)(this->FileContext).Object,0,"tiles",local_res8);
  if ((iVar1 == 0) && (local_res8[0] != 0)) {
    param_1->field0_0x0 = **(TIntPoint<int>_u_0 **)(local_res8[0] + 0x18);
  }
  return local_res8[0] != 0;
}

// GetUncompressedSize @ 14ea2ac10

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FOpenExrHeaderReader::GetUncompressedSize(FOpenExrHeaderReader *this)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  longlong local_res8;
  
  local_res8 = 0;
  iVar1 = exr_get_attribute_by_name
                    (*(undefined8 *)(this->FileContext).Object,0,"channels",&local_res8);
  if ((iVar1 != 0) && (1 < (byte)LogOpenEXRWrapperHeaderReader._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_OpenExr_FOpenEx_152fe40d0,
               (FLogCategoryBase *)&LogOpenEXRWrapperHeaderReader);
  }
  iVar4 = 0;
  iVar1 = **(int **)(local_res8 + 0x18);
  lVar2 = (longlong)iVar1;
  if (0 < iVar1) {
    piVar3 = (int *)(*(longlong *)(*(int **)(local_res8 + 0x18) + 2) + 0x10);
    do {
      iVar1 = *piVar3;
      if ((iVar1 == 0) || ((iVar1 != 1 && (iVar1 == 2)))) {
        iVar1 = 4;
      }
      else {
        iVar1 = 2;
      }
      iVar4 = iVar4 + iVar1;
      piVar3 = piVar3 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  local_res8 = 0;
  iVar1 = exr_get_attribute_by_name
                    (*(undefined8 *)(this->FileContext).Object,0,"dataWindow",&local_res8);
  if ((iVar1 != 0) && (1 < (byte)LogOpenEXRWrapperHeaderReader._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_OpenExr_FOpenEx_152fe40d0,
               (FLogCategoryBase *)&LogOpenEXRWrapperHeaderReader);
  }
  piVar3 = *(int **)(local_res8 + 0x18);
  return ((piVar3[3] - piVar3[1]) + 1) * ((piVar3[2] - *piVar3) + 1) * iVar4;
}

// HasInputFile @ 14ea2ae00

bool __thiscall FOpenExrHeaderReader::HasInputFile(FOpenExrHeaderReader *this)

{
  return (this->FileContext).Object != (void *)0x0;
}

// IsOptimizedForGpu @ 14ea2ae30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOpenExrHeaderReader::IsOptimizedForGpu(FOpenExrHeaderReader *this)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong local_res8 [4];
  
  lVar3 = 0;
  local_res8[0] = 0;
  iVar1 = exr_get_attribute_by_name
                    (*(undefined8 *)(this->FileContext).Object,0,"channels",local_res8);
  if ((iVar1 != 0) && (1 < (byte)LogOpenEXRWrapperHeaderReader._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_OpenExr_FOpenEx_152fe40d0,
               (FLogCategoryBase *)&LogOpenEXRWrapperHeaderReader);
  }
  iVar1 = **(int **)(local_res8[0] + 0x18);
  if (0 < iVar1) {
    piVar2 = (int *)(*(longlong *)(*(int **)(local_res8[0] + 0x18) + 2) + 0x10);
    do {
      if (*piVar2 != 1) {
        return false;
      }
      lVar3 = lVar3 + 1;
      piVar2 = piVar2 + 8;
    } while (lVar3 < iVar1);
  }
  return iVar1 < 5;
}

