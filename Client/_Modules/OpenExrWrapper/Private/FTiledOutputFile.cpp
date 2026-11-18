// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenExrWrapper
// Functions: 14

// FTiledOutputFile @ 14ea29060

FTiledOutputFile * __thiscall
FTiledOutputFile::FTiledOutputFile
          (FTiledOutputFile *this,TIntPoint<int> *param_1,TIntPoint<int> *param_2,
          TIntPoint<int> *param_3,TIntPoint<int> *param_4,bool param_5)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  FBaseOutputFile::FBaseOutputFile((FBaseOutputFile *)this,param_1,param_2,param_3,param_4);
  this->_padding_ = (longlong)vftable;
  this->bIsTiled = param_5;
  puVar1 = ::operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    pvVar2 = ::operator_new(0x158);
    *(void **)pvVar2 = pvVar2;
    *(void **)((longlong)pvVar2 + 8) = pvVar2;
    *(void **)((longlong)pvVar2 + 0x10) = pvVar2;
    *(undefined2 *)((longlong)pvVar2 + 0x18) = 0x101;
    *puVar1 = pvVar2;
  }
  this->FrameBuffer = puVar1;
  return this;
}

// ~FTiledOutputFile @ 14ea29250

void __thiscall FTiledOutputFile::~FTiledOutputFile(FTiledOutputFile *this)

{
  char cVar1;
  _Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_> *this_00;
  _Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> *p_Var2;
  _Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> *p_Var3;
  Header *this_01;
  undefined8 *puVar4;
  
  this_00 = this->FrameBuffer;
  this->_padding_ = (longlong)vftable;
  if (this_00 !=
      (_Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_> *)0x0) {
    p_Var2 = this_00->_Myhead->_Parent;
    cVar1 = p_Var2->_Isnil;
    while (cVar1 == '\0') {
      std::_Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_>::
      _Erase_tree<std::allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>_>_>
                (this_00,(allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>_>
                          *)this_00,p_Var2->_Right);
      p_Var3 = p_Var2->_Left;
      ::operator_delete(p_Var2,0x158);
      p_Var2 = p_Var3;
      cVar1 = p_Var3->_Isnil;
    }
    ::operator_delete(this_00->_Myhead,0x158);
    ::operator_delete(this_00,0x10);
  }
  this_01 = (Header *)this->_padding_;
  this->_padding_ = (longlong)FBaseOutputFile::vftable;
  if (this_01 != (Header *)0x0) {
    Imf_3_3::Header::~Header(this_01);
    ::operator_delete(this_01,0x18);
  }
  puVar4 = (undefined8 *)this->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  return;
}

// AddChannel @ 14ea295f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTiledOutputFile::AddChannel(FTiledOutputFile *this,FString *param_1)

{
  ChannelList *this_00;
  Channel *pCVar1;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar2;
  wchar_t *pwVar3;
  undefined1 auStack_f8 [32];
  Channel local_c8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  this_00 = Imf_3_3::Header::channels((Header *)this->_padding_);
  pCVar1 = (Channel *)Imf_3_3::Channel::Channel(&local_c8,HALF,1,1,false);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pTVar2 = StringCast<char,128,wchar_t>(&local_b8,pwVar3);
  Imf_3_3::ChannelList::insert(this_00,pTVar2->Ptr,pCVar1);
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  return;
}

// AddFrameBufferChannel @ 14ea296b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTiledOutputFile::AddFrameBufferChannel
          (FTiledOutputFile *this,FString *param_1,void *param_2,TIntPoint<int> *param_3)

{
  FrameBuffer *this_00;
  Slice *pSVar1;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar2;
  wchar_t *pwVar3;
  undefined1 auStackY_158 [32];
  Slice local_108;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this_00 = this->FrameBuffer;
  pSVar1 = (Slice *)Imf_3_3::Slice::Slice
                              (&local_108,HALF,param_2,(longlong)(param_3->field0_0x0)._s_0.X,
                               (longlong)(param_3->field0_0x0)._s_0.Y,1,1,0.0,false,false);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pTVar2 = StringCast<char,128,wchar_t>(&local_c8,pwVar3);
  Imf_3_3::FrameBuffer::insert(this_00,pTVar2->Ptr,pSVar1);
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  return;
}

// CreateOutputFile @ 14ea29a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTiledOutputFile::CreateOutputFile
          (FTiledOutputFile *this,FString *param_1,int param_2,int param_3,bool param_4,int param_5)

{
  Header *pHVar1;
  TiledOutputFile *pTVar2;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined8 local_180;
  LevelMode local_178;
  LevelRoundingMode local_174;
  FString *local_170;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  lVar4 = 0;
  local_188 = 0;
  local_170 = param_1;
  if (this->_padding_ == 0) {
    lVar6 = lVar4;
    if (this->bIsTiled == false) {
      pTVar2 = ::operator_new(0x10);
      local_180 = pTVar2;
      if (pTVar2 != (TiledOutputFile *)0x0) {
        pHVar1 = (Header *)this->_padding_;
        if ((param_1->Data).ArrayNum == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        pTVar3 = StringCast<char,128,wchar_t>(&local_158,pwVar5);
        local_188 = 2;
        lVar4 = Imf_3_3::OutputFile::OutputFile((OutputFile *)pTVar2,pTVar3->Ptr,pHVar1,param_5);
        lVar6 = 2;
      }
      this->_padding_ = lVar4;
    }
    else {
      local_180._4_4_ = param_3;
      local_180._0_4_ = param_2;
      local_178 = (LevelMode)param_4;
      local_174 = ROUND_DOWN;
      Imf_3_3::Header::setTileDescription((Header *)this->_padding_,(TileDescription *)&local_180);
      pTVar2 = ::operator_new(0x20);
      local_180 = pTVar2;
      if (pTVar2 != (TiledOutputFile *)0x0) {
        pHVar1 = (Header *)this->_padding_;
        if ((param_1->Data).ArrayNum == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        pTVar3 = StringCast<char,128,wchar_t>(&local_158,pwVar5);
        local_188 = 1;
        lVar4 = Imf_3_3::TiledOutputFile::TiledOutputFile(pTVar2,pTVar3->Ptr,pHVar1,param_5);
        lVar6 = 1;
      }
      this->_padding_ = lVar4;
    }
    if ((lVar6 != 0) && ((void *)local_158._padding_ != (void *)0x0)) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  else if (1 < (byte)LogOpenEXRWrapper._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
  }
  return;
}

// GetMipHeight @ 14ea2a630

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FTiledOutputFile::GetMipHeight(FTiledOutputFile *this,int param_1)

{
  int iVar1;
  int iVar2;
  Box<Imath_3_1::Vec2<int>_> *pBVar3;
  
  if ((TiledOutputFile *)this->_padding_ == (TiledOutputFile *)0x0) {
    if (1 < (byte)LogOpenEXRWrapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    }
    return 0;
  }
  if (this->bIsTiled != false) {
    iVar2 = Imf_3_3::TiledOutputFile::levelHeight((TiledOutputFile *)this->_padding_,param_1);
    return iVar2;
  }
  pBVar3 = Imf_3_3::Header::dataWindow((Header *)this->_padding_);
  iVar2 = (pBVar3->min).y;
  iVar1 = (pBVar3->max).y;
  if (((pBVar3->min).x <= (pBVar3->max).x) && (iVar2 <= iVar1)) {
    return (iVar1 - iVar2) + 1;
  }
  return 1;
}

// GetMipWidth @ 14ea2a6b0

/* WARNING: Removing unreachable block (ram,0x00014ea2a707) */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FTiledOutputFile::GetMipWidth(FTiledOutputFile *this,int param_1)

{
  int iVar1;
  int iVar2;
  Box<Imath_3_1::Vec2<int>_> *pBVar3;
  
  if ((TiledOutputFile *)this->_padding_ == (TiledOutputFile *)0x0) {
    if (1 < (byte)LogOpenEXRWrapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    }
    return 0;
  }
  if (this->bIsTiled == false) {
    pBVar3 = Imf_3_3::Header::dataWindow((Header *)this->_padding_);
    iVar2 = (pBVar3->min).x;
    iVar1 = (pBVar3->max).x;
    if ((iVar2 <= iVar1) && ((pBVar3->min).y <= (pBVar3->max).y)) {
      return (iVar1 - iVar2) + 1;
    }
    return 1;
  }
  iVar2 = Imf_3_3::TiledOutputFile::levelWidth((TiledOutputFile *)this->_padding_,param_1);
  return iVar2;
}

// GetNumXTiles @ 14ea2a870

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FTiledOutputFile::GetNumXTiles(FTiledOutputFile *this,int param_1)

{
  int iVar1;
  
  if ((TiledOutputFile *)this->_padding_ == (TiledOutputFile *)0x0) {
    if (1 < (byte)LogOpenEXRWrapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    }
  }
  else if (this->bIsTiled != false) {
    iVar1 = Imf_3_3::TiledOutputFile::numXTiles((TiledOutputFile *)this->_padding_,param_1);
    return iVar1;
  }
  return 0;
}

// GetNumYTiles @ 14ea2a8c0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FTiledOutputFile::GetNumYTiles(FTiledOutputFile *this,int param_1)

{
  int iVar1;
  
  if ((TiledOutputFile *)this->_padding_ == (TiledOutputFile *)0x0) {
    if (1 < (byte)LogOpenEXRWrapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    }
  }
  else if (this->bIsTiled != false) {
    iVar1 = Imf_3_3::TiledOutputFile::numYTiles((TiledOutputFile *)this->_padding_,param_1);
    return iVar1;
  }
  return 0;
}

// GetNumberOfMipLevels @ 14ea2a920

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FTiledOutputFile::GetNumberOfMipLevels(FTiledOutputFile *this)

{
  int iVar1;
  
  if ((TiledOutputFile *)this->_padding_ == (TiledOutputFile *)0x0) {
    if (1 < (byte)LogOpenEXRWrapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    }
    return 0;
  }
  if (this->bIsTiled != false) {
    iVar1 = Imf_3_3::TiledOutputFile::numLevels((TiledOutputFile *)this->_padding_);
    return iVar1;
  }
  return 1;
}

// SetFrameBuffer @ 14ea2afa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTiledOutputFile::SetFrameBuffer(FTiledOutputFile *this)

{
  char cVar1;
  TiledOutputFile *this_00;
  _Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_> *this_01;
  OutputStreamMutex *pOVar2;
  Data *pDVar3;
  _Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> *p_Var4;
  _Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> *p_Var5;
  void *pvVar6;
  int iVar7;
  ChannelList *this_02;
  ConstIterator CVar8;
  ConstIterator CVar9;
  _Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> *p_Var10;
  basic_ostream<char,std::char_traits<char>_> *pbVar11;
  char *pcVar12;
  longlong lVar13;
  ulong64 uVar14;
  _Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_> *this_03;
  void *pvVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_218 [32];
  ConstIterator CStack_1f8;
  void *pvStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  TiledOutputFile *pTStack_1c8;
  OutputStreamMutex *pOStack_1b8;
  undefined1 auStack_1a8 [256];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  ulonglong uStack_48;
  
  this_00 = (TiledOutputFile *)this->_padding_;
  if (this_00 == (TiledOutputFile *)0x0) {
    if ((byte)LogOpenEXRWrapper._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    return;
  }
  this_01 = this->FrameBuffer;
  if (this->bIsTiled == false) {
    Imf_3_3::OutputFile::setFrameBuffer((OutputFile *)this_00,(FrameBuffer *)this_01);
    return;
  }
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  pOVar2 = this_00->_streamData;
  pTStack_1c8 = this_00;
  pOStack_1b8 = pOVar2;
  iVar7 = _Mtx_lock(pOVar2);
  if (iVar7 != 0) {
    std::_Throw_Cpp_error(5);
    return;
  }
  if (*(int *)(pOVar2 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(pOVar2 + 0x4c) = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
    return;
  }
  this_02 = Imf_3_3::Header::channels((Header *)this_00->_data);
  Imf_3_3::ChannelList::begin(this_02);
  CVar8 = Imf_3_3::ChannelList::end(this_02);
                    /* WARNING: Load size is inaccurate */
  if (CStack_1f8._i != *CVar8._i) {
    do {
      Imf_3_3::FrameBuffer::find((FrameBuffer *)this_01,(char *)&lStack_1d8);
      CVar9 = Imf_3_3::FrameBuffer::end((FrameBuffer *)this_01);
      if (lStack_1d8 != *(longlong *)CVar9._i) {
        if (*(int *)((longlong)CStack_1f8._i + 0x11c) != *(int *)(lStack_1d8 + 0x120)) {
          iex_debugTrap();
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
          basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>
                    ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                     auStack_1a8);
          pbVar11 = std::operator<<<std::char_traits<char>_>
                              ((basic_ostream<char,std::char_traits<char>_> *)(auStack_1a8 + 0x10),
                               "Pixel type of \"");
          pcVar12 = Imf_3_3::ChannelList::ConstIterator::name(&CStack_1f8);
          pbVar11 = std::operator<<<std::char_traits<char>_>(pbVar11,pcVar12);
          pbVar11 = std::operator<<<std::char_traits<char>_>(pbVar11,"\" channel of output file \"")
          ;
          pcVar12 = Imf_3_3::TiledOutputFile::fileName(this_00);
          pbVar11 = std::operator<<<std::char_traits<char>_>(pbVar11,pcVar12);
          std::operator<<<std::char_traits<char>_>
                    (pbVar11,"\" is not compatible with the frame buffer\'s pixel type.");
          Iex_3_3::ArgExc::ArgExc
                    ((ArgExc *)&uStack_a8,
                     (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                     auStack_1a8);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&uStack_a8,(ThrowInfo *)&_TI3_AVArgExc_Iex_3_3__);
        }
        if ((*(int *)(lStack_1d8 + 0x140) != 1) || (*(int *)(lStack_1d8 + 0x144) != 1)) {
          iex_debugTrap();
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
          basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>
                    ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                     auStack_1a8);
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)(auStack_1a8 + 0x10),
                     "All channels in a tiled file must havesampling (1,1).");
          Iex_3_3::ArgExc::ArgExc
                    ((ArgExc *)&uStack_a8,
                     (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                     auStack_1a8);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&uStack_a8,(ThrowInfo *)&_TI3_AVArgExc_Iex_3_3__);
        }
      }
      std::
      _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>_>_>_>
      ::operator++(&CStack_1f8._i);
      CVar8 = Imf_3_3::ChannelList::end(this_02);
                    /* WARNING: Load size is inaccurate */
    } while (CStack_1f8._i != *CVar8._i);
  }
  pvStack_1f0 = (void *)0x0;
  puStack_1e8 = (undefined8 *)0x0;
  puVar17 = (undefined8 *)0x0;
  puStack_1e0 = (undefined8 *)0x0;
  Imf_3_3::ChannelList::begin(this_02);
  CVar8 = Imf_3_3::ChannelList::end(this_02);
                    /* WARNING: Load size is inaccurate */
  puVar16 = puStack_1e8;
  if (CStack_1f8._i != *CVar8._i) {
    do {
      Imf_3_3::FrameBuffer::find((FrameBuffer *)this_01,(char *)&lStack_1d0);
      CVar9 = Imf_3_3::FrameBuffer::end((FrameBuffer *)this_01);
      if (lStack_1d0 == *(longlong *)CVar9._i) {
        uStack_a8 = *(undefined4 *)((longlong)CStack_1f8._i + 0x11c);
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        iStack_88 = CONCAT31(iStack_88._1_3_,1);
        uStack_84 = 0;
        uStack_80 = 0;
      }
      else {
        uStack_90 = *(undefined8 *)(lStack_1d0 + 0x138);
        uStack_98 = *(undefined8 *)(lStack_1d0 + 0x130);
        uStack_a0 = *(undefined8 *)(lStack_1d0 + 0x128);
        uStack_a8 = *(undefined4 *)(lStack_1d0 + 0x120);
        iStack_88 = (uint)iStack_88._1_3_ << 8;
        uStack_84 = (uint)(*(char *)(lStack_1d0 + 0x150) != '\0');
        uStack_80 = (uint)(*(char *)(lStack_1d0 + 0x151) != '\0');
      }
      if (puVar16 == puVar17) {
        FUN_14f4f3570(&pvStack_1f0,puVar16,&uStack_a8);
        puVar17 = puStack_1e0;
      }
      else {
        *puVar16 = CONCAT44(uStack_a4,uStack_a8);
        puVar16[1] = uStack_a0;
        puVar16[2] = uStack_98;
        puVar16[3] = uStack_90;
        puVar16[4] = CONCAT44(uStack_84,iStack_88);
        puVar16[5] = CONCAT44(uStack_7c,uStack_80);
        puStack_1e8 = puVar16 + 6;
      }
      puVar16 = puStack_1e8;
      std::
      _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>_>_>_>
      ::operator++(&CStack_1f8._i);
      CVar8 = Imf_3_3::ChannelList::end(this_02);
                    /* WARNING: Load size is inaccurate */
    } while (CStack_1f8._i != *CVar8._i);
  }
  pDVar3 = pTStack_1c8->_data;
  this_03 = (_Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_> *)
            (pDVar3 + 0x30);
  if (this_03 != this_01) {
    p_Var10 = this_03->_Myhead;
    cVar1 = p_Var10->_Parent->_Isnil;
    p_Var5 = p_Var10->_Parent;
    while (cVar1 == '\0') {
      std::_Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_>::
      _Erase_tree<std::allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>_>_>
                (this_03,(allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>_>
                          *)this_03,p_Var5->_Right);
      p_Var4 = p_Var5->_Left;
      ::operator_delete(p_Var5,0x158);
      p_Var5 = p_Var4;
      cVar1 = p_Var4->_Isnil;
    }
    p_Var10->_Parent = p_Var10;
    p_Var10->_Left = p_Var10;
    p_Var10->_Right = p_Var10;
    *(undefined8 *)(pDVar3 + 0x38) = 0;
    p_Var10 = std::
              _Tree<std::_Tmap_traits<Imf_3_3::Name,Imf_3_3::Slice,std::less<Imf_3_3::Name>,std::allocator<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>,0>_>
              ::_Copy_nodes<0>((_Tree<std::_Tmap_traits<Imf_3_3::Name,Imf_3_3::Slice,std::less<Imf_3_3::Name>,std::allocator<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>,0>_>
                                *)this_03,
                               *(_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>
                                 **)(*(longlong *)&this_01->_Myhead + 8),this_03->_Myhead);
    this_03->_Myhead->_Parent = p_Var10;
    *(ulong64 *)(pDVar3 + 0x38) = this_01->_Mysize;
    p_Var10 = this_03->_Myhead;
    p_Var5 = p_Var10->_Parent;
    if (p_Var5->_Isnil == '\0') {
      cVar1 = p_Var5->_Left->_Isnil;
      p_Var4 = p_Var5->_Left;
      while (cVar1 == '\0') {
        cVar1 = p_Var4->_Left->_Isnil;
        p_Var5 = p_Var4;
        p_Var4 = p_Var4->_Left;
      }
      p_Var10->_Left = p_Var5;
      p_Var10 = this_03->_Myhead->_Parent;
      p_Var5 = p_Var10->_Right;
      cVar1 = p_Var5->_Isnil;
      while (cVar1 == '\0') {
        cVar1 = p_Var5->_Right->_Isnil;
        p_Var10 = p_Var5;
        p_Var5 = p_Var5->_Right;
      }
      this_03->_Myhead->_Right = p_Var10;
    }
    else {
      p_Var10->_Left = p_Var10;
      this_03->_Myhead->_Right = this_03->_Myhead;
    }
  }
  pvVar6 = pvStack_1f0;
  if (pTStack_1c8->_data + 0xa8 != (Data *)&pvStack_1f0) {
    lVar13 = ((longlong)puVar16 - (longlong)pvStack_1f0) / 6 +
             ((longlong)puVar16 - (longlong)pvStack_1f0 >> 0x3f);
    FUN_14f4f3370(pTStack_1c8->_data + 0xa8,pvStack_1f0,(lVar13 >> 3) - (lVar13 >> 0x3f));
  }
  if (pvVar6 != (void *)0x0) {
    uVar14 = (((longlong)puVar17 - (longlong)pvVar6) / 0x30) * 0x30;
    pvVar15 = pvVar6;
    if (0xfff < uVar14) {
      uVar14 = uVar14 + 0x27;
      pvVar15 = *(void **)((longlong)pvVar6 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar15))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar15,uVar14);
  }
  _Mtx_unlock(pOVar2);
  return;
}

// UpdateFrameBufferChannel @ 14ea2b040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTiledOutputFile::UpdateFrameBufferChannel
          (FTiledOutputFile *this,FString *param_1,void *param_2,TIntPoint<int> *param_3)

{
  FrameBuffer *this_00;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar1;
  Slice *pSVar2;
  wchar_t *pwVar3;
  undefined1 auStack_e8 [32];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  this_00 = this->FrameBuffer;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pTVar1 = StringCast<char,128,wchar_t>(&local_c8,pwVar3);
  pSVar2 = Imf_3_3::FrameBuffer::findSlice(this_00,pTVar1->Ptr);
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  if (pSVar2 == (Slice *)0x0) {
    if (1 < (byte)LogOpenEXRWrapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    }
  }
  else {
    pSVar2->base = param_2;
    pSVar2->xStride = (longlong)(param_3->field0_0x0)._s_0.X;
    pSVar2->yStride = (longlong)(param_3->field0_0x0)._s_0.Y;
  }
  return;
}

// WriteTile @ 14ea2b130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTiledOutputFile::WriteTile(FTiledOutputFile *this,int param_1,int param_2,int param_3)

{
  if (this->bIsTiled == false) {
    WriteTiles(this,0,0,0,0,0);
  }
  else {
    if (this->_padding_ != 0) {
      Imf_3_3::TiledOutputFile::writeTiles
                ((TiledOutputFile *)this->_padding_,0,param_1,0,param_2,param_3);
      return;
    }
    if (1 < (byte)LogOpenEXRWrapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
      return;
    }
  }
  return;
}

// WriteTiles @ 14ea2b280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTiledOutputFile::WriteTiles
          (FTiledOutputFile *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  Box<Imath_3_1::Vec2<int>_> *pBVar1;
  
  if (this->_padding_ == 0) {
    if (1 < (byte)LogOpenEXRWrapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    }
  }
  else if (this->bIsTiled == false) {
    pBVar1 = Imf_3_3::Header::dataWindow((Header *)this->_padding_);
    Imf_3_3::OutputFile::writePixels
              ((OutputFile *)this->_padding_,((pBVar1->max).y - (pBVar1->min).y) + 1);
  }
  else {
    Imf_3_3::TiledOutputFile::writeTiles
              ((TiledOutputFile *)this->_padding_,param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

