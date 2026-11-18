// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenExrWrapper
// Functions: 16

// FRgbaInputFile @ 14ea28e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRgbaInputFile * __thiscall FRgbaInputFile::FRgbaInputFile(FRgbaInputFile *this,FString *param_1)

{
  int iVar1;
  RgbaInputFile *this_00;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar2;
  undefined1 *puVar3;
  wchar_t *pwVar4;
  undefined1 *puVar5;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  FRgbaInputFile *local_160;
  RgbaInputFile *local_158;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  puVar3 = (undefined1 *)0x0;
  local_168 = 0;
  local_160 = this;
  this_00 = ::operator_new(0x40);
  puVar5 = puVar3;
  local_158 = this_00;
  if (this_00 != (RgbaInputFile *)0x0) {
    iVar1 = Imf_3_3::globalThreadCount();
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pTVar2 = StringCast<char,128,wchar_t>(&local_148,pwVar4);
    local_168 = 1;
    puVar3 = (undefined1 *)Imf_3_3::RgbaInputFile::RgbaInputFile(this_00,pTVar2->Ptr,iVar1);
    puVar5 = &DAT_00000001;
  }
  this->InputFile = puVar3;
  if ((puVar5 != (undefined1 *)0x0) && ((void *)local_148._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_148._padding_);
  }
  return this;
}

// FRgbaInputFile @ 14ea28f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRgbaInputFile * __thiscall
FRgbaInputFile::FRgbaInputFile(FRgbaInputFile *this,FString *param_1,ushort param_2)

{
  RgbaInputFile *this_00;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar1;
  undefined1 *puVar2;
  wchar_t *pwVar3;
  undefined1 *puVar4;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  FRgbaInputFile *local_170;
  RgbaInputFile *local_168;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  puVar2 = (undefined1 *)0x0;
  local_178 = 0;
  local_170 = this;
  this_00 = ::operator_new(0x40);
  puVar4 = puVar2;
  local_168 = this_00;
  if (this_00 != (RgbaInputFile *)0x0) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pTVar1 = StringCast<char,128,wchar_t>(&local_158,pwVar3);
    local_178 = 1;
    puVar2 = (undefined1 *)Imf_3_3::RgbaInputFile::RgbaInputFile(this_00,pTVar1->Ptr,(uint)param_2);
    puVar4 = &DAT_00000001;
  }
  this->InputFile = puVar2;
  if ((puVar4 != (undefined1 *)0x0) && ((void *)local_158._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_158._padding_);
  }
  return this;
}

// ~FRgbaInputFile @ 14ea29230

void __thiscall FRgbaInputFile::~FRgbaInputFile(FRgbaInputFile *this)

{
  undefined8 *puVar1;
  
  puVar1 = this->InputFile;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ea29240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// GetCompressionName @ 14ea29e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __thiscall FRgbaInputFile::GetCompressionName(FRgbaInputFile *this)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  Header *pHVar7;
  TypedAttribute<Imf_3_3::Compression> *this_00;
  Compression *pCVar8;
  longlong *plVar9;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  char local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  pHVar7 = Imf_3_3::RgbaInputFile::header(this->InputFile);
  strncpy(local_118,"compression",0xff);
  plVar3 = *(longlong **)&pHVar7->_map;
  local_19 = 0;
  cVar2 = *(char *)(plVar3[1] + 0x19);
  plVar5 = plVar3;
  plVar9 = (longlong *)plVar3[1];
  while (cVar2 == '\0') {
    iVar6 = strcmp((char *)(plVar9 + 4),local_118);
    plVar1 = plVar9 + 2;
    plVar4 = plVar9;
    if (iVar6 < 0) {
      plVar9 = plVar5;
      plVar4 = plVar1;
    }
    plVar5 = plVar9;
    plVar9 = (longlong *)*plVar4;
    cVar2 = *(char *)(*plVar4 + 0x19);
  }
  if (((*(char *)((longlong)plVar5 + 0x19) == '\0') &&
      (iVar6 = strcmp(local_118,(char *)(plVar5 + 4)), -1 < iVar6)) && (plVar5 != plVar3)) {
    local_128 = 0;
    this_00 = (TypedAttribute<Imf_3_3::Compression> *)
              __RTDynamicCast(plVar5[0x24],0,&Imf_3_3::Attribute::RTTI_Type_Descriptor,
                              &Imf_3_3::TypedAttribute<Imf_3_3::Compression>::RTTI_Type_Descriptor);
    if (this_00 != (TypedAttribute<Imf_3_3::Compression> *)0x0) {
      pCVar8 = Imf_3_3::TypedAttribute<Imf_3_3::Compression>::value(this_00);
      switch(*pCVar8) {
      case NO_COMPRESSION:
        return L"Uncompressed";
      case RLE_COMPRESSION:
        return L"RLE";
      case ZIPS_COMPRESSION:
        return L"ZIPS";
      case ZIP_COMPRESSION:
        return L"ZIP";
      case PIZ_COMPRESSION:
        return L"PIZ";
      case PXR24_COMPRESSION:
        return L"PXR24";
      case B44_COMPRESSION:
        return L"B44";
      case B44A_COMPRESSION:
        return L"B44A";
      default:
        return L"Unknown";
      }
    }
  }
  return L"";
}

// GetDataWindow @ 14ea2a0c0

TIntPoint<int> __thiscall FRgbaInputFile::GetDataWindow(FRgbaInputFile *this)

{
  int iVar1;
  int iVar2;
  Box<Imath_3_1::Vec2<int>_> *pBVar3;
  TIntPoint<int>_u_0 in_RDX;
  
  pBVar3 = Imf_3_3::RgbaInputFile::dataWindow(this->InputFile);
  iVar1 = (pBVar3->max).y;
  iVar2 = (pBVar3->min).y;
  *(int *)in_RDX = ((pBVar3->max).x - (pBVar3->min).x) + 1;
  *(int *)((longlong)in_RDX + 4) = (iVar1 - iVar2) + 1;
  return (TIntPoint<int>)in_RDX;
}

// GetDataWindowRect @ 14ea2a100

TIntRect<int> * __thiscall
FRgbaInputFile::GetDataWindowRect(FRgbaInputFile *this,TIntRect<int> *__return_storage_ptr__)

{
  int iVar1;
  Box<Imath_3_1::Vec2<int>_> *pBVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0x7fffffff;
  iVar5 = -0x80000000;
  iVar3 = 0x7fffffff;
  iVar1 = -0x80000000;
  if (this->InputFile != (RgbaInputFile *)0x0) {
    pBVar2 = Imf_3_3::RgbaInputFile::dataWindow(this->InputFile);
    iVar4 = (pBVar2->min).x;
    iVar3 = (pBVar2->min).y;
    iVar5 = (pBVar2->max).x;
    iVar1 = (pBVar2->max).y;
  }
  *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = iVar1;
  *(int *)&__return_storage_ptr__->field0_0x0 = iVar4;
  *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = iVar3;
  *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = iVar5;
  return __return_storage_ptr__;
}

// GetDisplayWindow @ 14ea2a150

TIntRect<int> * __thiscall
FRgbaInputFile::GetDisplayWindow(FRgbaInputFile *this,TIntRect<int> *__return_storage_ptr__)

{
  int iVar1;
  Box<Imath_3_1::Vec2<int>_> *pBVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0x7fffffff;
  iVar5 = -0x80000000;
  iVar3 = 0x7fffffff;
  iVar1 = -0x80000000;
  if (this->InputFile != (RgbaInputFile *)0x0) {
    pBVar2 = Imf_3_3::RgbaInputFile::displayWindow(this->InputFile);
    iVar4 = (pBVar2->min).x;
    iVar3 = (pBVar2->min).y;
    iVar5 = (pBVar2->max).x;
    iVar1 = (pBVar2->max).y;
  }
  *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = iVar1;
  *(int *)&__return_storage_ptr__->field0_0x0 = iVar4;
  *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = iVar3;
  *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = iVar5;
  return __return_storage_ptr__;
}

// GetFrameRate @ 14ea2a220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FFrameRate __thiscall FRgbaInputFile::GetFrameRate(FRgbaInputFile *this,FFrameRate *param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  Header *pHVar8;
  TypedAttribute<Imf_3_3::Rational> *this_00;
  Rational *pRVar9;
  longlong *plVar10;
  FFrameRate *in_R8;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  char local_138 [255];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  pHVar8 = Imf_3_3::RgbaInputFile::header(this->InputFile);
  strncpy(local_138,"framesPerSecond",0xff);
  plVar4 = *(longlong **)&pHVar8->_map;
  local_39 = 0;
  cVar2 = *(char *)(plVar4[1] + 0x19);
  plVar6 = plVar4;
  plVar10 = (longlong *)plVar4[1];
  while (cVar2 == '\0') {
    iVar7 = strcmp((char *)(plVar10 + 4),local_138);
    plVar1 = plVar10 + 2;
    plVar5 = plVar10;
    if (iVar7 < 0) {
      plVar10 = plVar6;
      plVar5 = plVar1;
    }
    plVar6 = plVar10;
    plVar10 = (longlong *)*plVar5;
    cVar2 = *(char *)(*plVar5 + 0x19);
  }
  if (((*(char *)((longlong)plVar6 + 0x19) == '\0') &&
      (iVar7 = strcmp(local_138,(char *)(plVar6 + 4)), -1 < iVar7)) && (plVar6 != plVar4)) {
    local_148 = 0;
    this_00 = (TypedAttribute<Imf_3_3::Rational> *)
              __RTDynamicCast(plVar6[0x24],0,&Imf_3_3::Attribute::RTTI_Type_Descriptor,
                              &Imf_3_3::TypedAttribute<Imf_3_3::Rational>::RTTI_Type_Descriptor);
    if (this_00 != (TypedAttribute<Imf_3_3::Rational> *)0x0) {
      pRVar9 = Imf_3_3::TypedAttribute<Imf_3_3::Rational>::value(this_00);
      uVar3 = pRVar9->d;
      param_1->Numerator = pRVar9->n;
      param_1->Denominator = uVar3;
      return (FFrameRate)param_1;
    }
  }
  *param_1 = *in_R8;
  return (FFrameRate)param_1;
}

// GetIntAttribute @ 14ea2a420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FRgbaInputFile::GetIntAttribute(FRgbaInputFile *this,FString *param_1,int *param_2)

{
  char cVar1;
  char *_Str;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  Header *pHVar6;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar7;
  size_t sVar8;
  longlong *plVar9;
  TypedAttribute<int> *this_00;
  int *piVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  ulong64 uVar13;
  bool bVar14;
  undefined1 auStackY_228 [32];
  _Bxty local_1f8;
  undefined8 local_1e8;
  ulonglong uStack_1e0;
  char local_1d8 [255];
  undefined1 local_d9;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  bVar14 = false;
  if (this->InputFile != (RgbaInputFile *)0x0) {
    pHVar6 = Imf_3_3::RgbaInputFile::header(this->InputFile);
    if ((param_1->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pTVar7 = StringCast<char,128,wchar_t>(&local_d8,pwVar12);
    _Str = pTVar7->Ptr;
    local_1f8._Ptr = (char *)0x0;
    local_1f8._8_8_ = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    sVar8 = strlen(_Str);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1f8,_Str,
               sVar8);
    uVar11 = &local_1f8;
    if (0xf < uStack_1e0) {
      uVar11 = local_1f8._Ptr;
    }
    strncpy(local_1d8,(char *)uVar11,0xff);
    local_d9 = 0;
    plVar2 = *(longlong **)&pHVar6->_map;
    plVar3 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
    plVar4 = plVar2;
    while (cVar1 == '\0') {
      iVar5 = strcmp((char *)(plVar3 + 4),local_1d8);
      plVar9 = plVar3 + 2;
      if (-1 < iVar5) {
        plVar9 = plVar3;
        plVar4 = plVar3;
      }
      plVar3 = (longlong *)*plVar9;
      cVar1 = *(char *)((longlong)plVar3 + 0x19);
    }
    if (((*(char *)((longlong)plVar4 + 0x19) == '\0') &&
        (iVar5 = strcmp(local_1d8,(char *)(plVar4 + 4)), -1 < iVar5)) && (plVar4 != plVar2)) {
      this_00 = (TypedAttribute<int> *)__RTDynamicCast(plVar4[0x24],0);
    }
    else {
      this_00 = (TypedAttribute<int> *)0x0;
    }
    if (0xf < uStack_1e0) {
      uVar13 = uStack_1e0 + 1;
      uVar11 = local_1f8._Ptr;
      if (0xfff < uVar13) {
        uVar13 = uStack_1e0 + 0x28;
        uVar11 = *(undefined8 *)(local_1f8._Ptr + -8);
        if ((char *)0x1f < local_1f8._Ptr + (-8 - uVar11)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11,uVar13);
    }
    local_1e8 = ___xmm_000000000000000f0000000000000000;
    uStack_1e0 = _UNK_15076add8;
    local_1f8._Ptr = local_1f8._Ptr & 0xffffffffffffff00;
    if ((void *)local_d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    if (this_00 != (TypedAttribute<int> *)0x0) {
      piVar10 = Imf_3_3::TypedAttribute<int>::value(this_00);
      *param_2 = *piVar10;
      bVar14 = true;
    }
  }
  return bVar14;
}

// GetNumChannels @ 14ea2a7a0

int __thiscall FRgbaInputFile::GetNumChannels(FRgbaInputFile *this)

{
  RgbaChannels RVar1;
  int iVar2;
  
  if (this->InputFile == (RgbaInputFile *)0x0) {
    return 0;
  }
  iVar2 = 3;
  RVar1 = Imf_3_3::RgbaInputFile::channels(this->InputFile);
  switch(RVar1) {
  case WRITE_R:
  case WRITE_G:
  case WRITE_B:
  case WRITE_A:
  case WRITE_Y:
  case WRITE_C:
    return 1;
  case WRITE_RGBA:
    iVar2 = 4;
    break;
  case WRITE_YA:
  case WRITE_YC:
    return 2;
  }
  return iVar2;
}

// GetTileSize @ 14ea2aad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FRgbaInputFile::GetTileSize(FRgbaInputFile *this,TIntPoint<int> *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  Header *pHVar8;
  TypedAttribute<Imf_3_3::TileDescription> *this_00;
  TileDescription *pTVar9;
  longlong *plVar10;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  char local_128 [255];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  pHVar8 = Imf_3_3::RgbaInputFile::header(this->InputFile);
  strncpy(local_128,"tiles",0xff);
  plVar3 = *(longlong **)&pHVar8->_map;
  local_29 = 0;
  cVar2 = *(char *)(plVar3[1] + 0x19);
  plVar5 = plVar3;
  plVar10 = (longlong *)plVar3[1];
  while (cVar2 == '\0') {
    iVar7 = strcmp((char *)(plVar10 + 4),local_128);
    plVar1 = plVar10 + 2;
    plVar4 = plVar10;
    if (iVar7 < 0) {
      plVar10 = plVar5;
      plVar4 = plVar1;
    }
    plVar5 = plVar10;
    plVar10 = (longlong *)*plVar4;
    cVar2 = *(char *)(*plVar4 + 0x19);
  }
  if (((*(char *)((longlong)plVar5 + 0x19) == '\0') &&
      (iVar7 = strcmp(local_128,(char *)(plVar5 + 4)), -1 < iVar7)) && (plVar5 != plVar3)) {
    local_148 = 0;
    this_00 = (TypedAttribute<Imf_3_3::TileDescription> *)
              __RTDynamicCast(plVar5[0x24],0,&Imf_3_3::Attribute::RTTI_Type_Descriptor,
                              &Imf_3_3::TypedAttribute<Imf_3_3::TileDescription>::
                               RTTI_Type_Descriptor);
    if (this_00 != (TypedAttribute<Imf_3_3::TileDescription> *)0x0) {
      pTVar9 = Imf_3_3::TypedAttribute<Imf_3_3::TileDescription>::value(this_00);
      uVar6 = pTVar9->ySize;
      *(int *)&param_1->field0_0x0 = pTVar9->xSize;
      *(uint *)((longlong)&param_1->field0_0x0 + 4) = uVar6;
    }
  }
  else {
    this_00 = (TypedAttribute<Imf_3_3::TileDescription> *)0x0;
  }
  return this_00 != (TypedAttribute<Imf_3_3::TileDescription> *)0x0;
}

// GetUncompressedSize @ 14ea2ad20

int __thiscall FRgbaInputFile::GetUncompressedSize(FRgbaInputFile *this)

{
  RgbaChannels RVar1;
  Box<Imath_3_1::Vec2<int>_> *pBVar2;
  int iVar3;
  
  if (this->InputFile == (RgbaInputFile *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 3;
    RVar1 = Imf_3_3::RgbaInputFile::channels(this->InputFile);
    switch(RVar1) {
    case WRITE_R:
    case WRITE_G:
    case WRITE_B:
    case WRITE_A:
    case WRITE_Y:
    case WRITE_C:
      iVar3 = 1;
      break;
    case WRITE_RGBA:
      iVar3 = 4;
      break;
    case WRITE_YA:
    case WRITE_YC:
      iVar3 = 2;
    }
  }
  pBVar2 = Imf_3_3::RgbaInputFile::dataWindow(this->InputFile);
  return (((pBVar2->max).y - (pBVar2->min).y) + 1) * (((pBVar2->max).x - (pBVar2->min).x) + 1) *
         iVar3 * 2;
}

// HasInputFile @ 14ea2ae10

bool __thiscall FRgbaInputFile::HasInputFile(FRgbaInputFile *this)

{
  return this->InputFile != (void *)0x0;
}

// IsComplete @ 14ea2ae20

bool __thiscall FRgbaInputFile::IsComplete(FRgbaInputFile *this)

{
  bool bVar1;
  
  bVar1 = Imf_3_3::RgbaInputFile::isComplete(this->InputFile);
  return bVar1;
}

// ReadPixels @ 14ea2aec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRgbaInputFile::ReadPixels(FRgbaInputFile *this,int param_1,int param_2)

{
  int iVar1;
  Box<Imath_3_1::Vec2<int>_> *pBVar2;
  undefined1 auStack_2a8 [40];
  FRgbaInputFile *local_280;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_280 = this;
  pBVar2 = Imf_3_3::RgbaInputFile::dataWindow(this->InputFile);
  iVar1 = (pBVar2->min).y;
  Imf_3_3::RgbaInputFile::readPixels(this->InputFile,iVar1 + param_1,iVar1 + param_2);
  return;
}

// SetFrameBuffer @ 14ea2af30

void __thiscall
FRgbaInputFile::SetFrameBuffer(FRgbaInputFile *this,void *param_1,TIntPoint<int> *param_2)

{
  int iVar1;
  Box<Imath_3_1::Vec2<int>_> *pBVar2;
  
  pBVar2 = Imf_3_3::RgbaInputFile::dataWindow(this->InputFile);
  iVar1 = (param_2->field0_0x0)._s_0.X;
  Imf_3_3::RgbaInputFile::setFrameBuffer
            (this->InputFile,
             (Rgba *)((longlong)param_1 +
                     ((longlong)(iVar1 * (pBVar2->min).y) + (longlong)(pBVar2->min).x) * -8),1,
             (longlong)iVar1);
  return;
}

