// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenExrWrapper
// Functions: 4

// FBaseOutputFile @ 14ea28c70

FBaseOutputFile * __thiscall
FBaseOutputFile::FBaseOutputFile
          (FBaseOutputFile *this,TIntPoint<int> *param_1,TIntPoint<int> *param_2,
          TIntPoint<int> *param_3,TIntPoint<int> *param_4)

{
  Header *this_00;
  void *pvVar1;
  Box<Imath_3_1::Vec2<int>_> local_28;
  Box<Imath_3_1::Vec2<int>_> local_18;
  
  this->_padding_ = (longlong)vftable;
  pvVar1 = (void *)0x0;
  this->OutputFile = (void *)0x0;
  local_18.min.x = (param_1->field0_0x0)._s_0.X;
  local_18.min.y = (param_1->field0_0x0)._s_0.Y;
  local_18.max.x = (param_2->field0_0x0)._s_0.X;
  local_18.max.y = (param_2->field0_0x0)._s_0.Y;
  local_28.min.x = (param_3->field0_0x0)._s_0.X;
  local_28.min.y = (param_3->field0_0x0)._s_0.Y;
  local_28.max.x = (param_4->field0_0x0)._s_0.X;
  local_28.max.y = (param_4->field0_0x0)._s_0.Y;
  this_00 = ::operator_new(0x18);
  if (this_00 != (Header *)0x0) {
    param_4 = (TIntPoint<int> *)0x0;
    pvVar1 = (void *)Imf_3_3::Header::Header
                               (this_00,&local_18,&local_28,__real_3f800000,(Vec2<float> *)&param_4,
                                __real_3f800000,INCREASING_Y,NO_COMPRESSION);
  }
  this->Header = pvVar1;
  return this;
}

// ~FBaseOutputFile @ 14ea29160

void __thiscall FBaseOutputFile::~FBaseOutputFile(FBaseOutputFile *this)

{
  Header *this_00;
  undefined8 *puVar1;
  
  this_00 = this->Header;
  this->_padding_ = (longlong)vftable;
  if (this_00 != (Header *)0x0) {
    Imf_3_3::Header::~Header(this_00);
    ::operator_delete(this_00,0x18);
  }
  puVar1 = this->OutputFile;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

// AddIntAttribute @ 14ea29780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBaseOutputFile::AddIntAttribute(FBaseOutputFile *this,FString *param_1,int param_2)

{
  Header *this_00;
  char *_Str;
  Attribute *pAVar1;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  undefined1 auStackY_138 [32];
  int local_108 [2];
  TypedAttribute<int> local_100;
  _Bxty local_f0;
  undefined8 local_e0;
  ulonglong uStack_d8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_108[0] = param_2;
  if (this->OutputFile == (void *)0x0) {
    this_00 = this->Header;
    pAVar1 = (Attribute *)Imf_3_3::TypedAttribute<int>::TypedAttribute<int>(&local_100,local_108);
    if ((param_1->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pTVar2 = StringCast<char,128,wchar_t>(&local_c8,pwVar6);
    _Str = pTVar2->Ptr;
    local_f0._Ptr = (char *)0x0;
    local_f0._8_8_ = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    sVar3 = strlen(_Str);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_f0,_Str,
               sVar3);
    Imf_3_3::Header::insert
              (this_00,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_f0,
               pAVar1);
    if (0xf < uStack_d8) {
      uVar5 = uStack_d8 + 1;
      uVar4 = local_f0._Ptr;
      if (0xfff < uVar5) {
        uVar5 = uStack_d8 + 0x28;
        uVar4 = *(undefined8 *)(local_f0._Ptr + -8);
        if ((char *)0x1f < local_f0._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar4,uVar5);
    }
    local_e0 = ___xmm_000000000000000f0000000000000000;
    uStack_d8 = _UNK_15076add8;
    local_f0._Ptr = local_f0._Ptr & 0xffffffffffffff00;
    if ((void *)local_c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._padding_);
    }
    Imf_3_3::TypedAttribute<int>::~TypedAttribute<int>(&local_100);
  }
  else if (1 < (byte)LogOpenEXRWrapper._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
  }
  return;
}

// GetNumberOfMipLevels @ 14ea2a910

int __thiscall FBaseOutputFile::GetNumberOfMipLevels(FBaseOutputFile *this)

{
  return 0;
}

