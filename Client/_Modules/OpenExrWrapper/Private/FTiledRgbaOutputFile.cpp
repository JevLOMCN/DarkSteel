// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenExrWrapper
// Functions: 5

// FTiledRgbaOutputFile @ 14ea29100

FTiledRgbaOutputFile * __thiscall
FTiledRgbaOutputFile::FTiledRgbaOutputFile
          (FTiledRgbaOutputFile *this,TIntPoint<int> *param_1,TIntPoint<int> *param_2,
          TIntPoint<int> *param_3,TIntPoint<int> *param_4)

{
  FBaseOutputFile::FBaseOutputFile((FBaseOutputFile *)this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = vftable;
  return this;
}

// CreateOutputFile @ 14ea29bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTiledRgbaOutputFile::CreateOutputFile
          (FTiledRgbaOutputFile *this,FString *param_1,int param_2,int param_3,int param_4,
          bool param_5)

{
  Header *pHVar1;
  int iVar2;
  TiledRgbaOutputFile *this_00;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  RgbaChannels RVar6;
  longlong lVar7;
  undefined1 auStackY_1e8 [32];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  lVar7 = 0;
  if (*(longlong *)&this->field_0x10 == 0) {
    if (param_4 == 1) {
      RVar6 = WRITE_R;
    }
    else if (param_4 == 2) {
      RVar6 = WRITE_YC;
    }
    else if (param_4 == 3) {
      RVar6 = WRITE_RGB;
    }
    else {
      if ((param_4 != 4) && (1 < (byte)LogOpenEXRWrapper._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
      }
      RVar6 = WRITE_RGBA;
    }
    this_00 = ::operator_new(0x18);
    lVar4 = lVar7;
    if (this_00 != (TiledRgbaOutputFile *)0x0) {
      iVar2 = Imf_3_3::globalThreadCount();
      pHVar1 = *(Header **)&this->field_0x8;
      if ((param_1->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      pTVar3 = StringCast<char,128,wchar_t>(&local_168,pwVar5);
      lVar7 = 1;
      lVar4 = Imf_3_3::TiledRgbaOutputFile::TiledRgbaOutputFile
                        (this_00,pTVar3->Ptr,pHVar1,RVar6,param_2,param_3,(uint)param_5,ROUND_DOWN,
                         iVar2);
    }
    *(longlong *)&this->field_0x10 = lVar4;
    if ((lVar7 != 0) && ((void *)local_168._padding_ != (void *)0x0)) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
  else if (1 < (byte)LogOpenEXRWrapper._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
  }
  return;
}

// GetNumberOfMipLevels @ 14ea2a980

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FTiledRgbaOutputFile::GetNumberOfMipLevels(FTiledRgbaOutputFile *this)

{
  int iVar1;
  
  if (*(TiledRgbaOutputFile **)&this->field_0x10 != (TiledRgbaOutputFile *)0x0) {
    iVar1 = Imf_3_3::TiledRgbaOutputFile::numLevels(*(TiledRgbaOutputFile **)&this->field_0x10);
    return iVar1;
  }
  if (1 < (byte)LogOpenEXRWrapper._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
  }
  return 0;
}

// SetFrameBuffer @ 14ea2aff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTiledRgbaOutputFile::SetFrameBuffer
          (FTiledRgbaOutputFile *this,void *param_1,TIntPoint<int> *param_2)

{
  if (*(TiledRgbaOutputFile **)&this->field_0x10 != (TiledRgbaOutputFile *)0x0) {
    Imf_3_3::TiledRgbaOutputFile::setFrameBuffer
              (*(TiledRgbaOutputFile **)&this->field_0x10,param_1,
               (longlong)(param_2->field0_0x0)._s_0.X,(longlong)(param_2->field0_0x0)._s_0.Y);
    return;
  }
  if (1 < (byte)LogOpenEXRWrapper._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    return;
  }
  return;
}

// WriteTile @ 14ea2b200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTiledRgbaOutputFile::WriteTile(FTiledRgbaOutputFile *this,int param_1,int param_2,int param_3)

{
  undefined1 auStack_168 [336];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (*(longlong *)&this->field_0x10 != 0) {
    Imf_3_3::TiledRgbaOutputFile::writeTile
              (*(TiledRgbaOutputFile **)&this->field_0x10,param_1,param_2,param_3);
    return;
  }
  if (1 < (byte)LogOpenEXRWrapper._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
  }
  return;
}

