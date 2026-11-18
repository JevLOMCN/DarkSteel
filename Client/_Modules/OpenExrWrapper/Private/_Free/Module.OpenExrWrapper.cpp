// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenExrWrapper
// Functions: 65

// `dynamic_initializer_for_'LogOpenEXRWrapper'' @ 141445d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOpenEXRWrapper__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogOpenEXRWrapper,L"LogOpenEXRWrapper",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogOpenEXRWrapper__);
  return;
}

// `dynamic_initializer_for_'LogOpenEXRWrapperHeaderReader'' @ 141445da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOpenEXRWrapperHeaderReader__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogOpenEXRWrapperHeaderReader,L"LogOpenEXRWrapperHeaderReader",Log
             ,All);
  atexit(_dynamic_atexit_destructor_for__LogOpenEXRWrapperHeaderReader__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantOpenExrWrapper'' @ 141445de0

void __cdecl _dynamic_initializer_for__ModuleRegistrantOpenExrWrapper__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "OpenExrWrapper";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"OpenExrWrapper",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// findTypedAttribute<Imf_3_3::TypedAttribute<int>_> @ 14ea28710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TypedAttribute<int> * __thiscall
Imf_3_3::Header::findTypedAttribute<Imf_3_3::TypedAttribute<int>_>
          (Header *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  TypedAttribute<int> *pTVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  char local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  strncpy(local_118,(char *)param_1,0xff);
  plVar3 = *(longlong **)&this->_map;
  local_19 = 0;
  cVar2 = *(char *)(plVar3[1] + 0x19);
  plVar5 = plVar3;
  plVar8 = (longlong *)plVar3[1];
  while (cVar2 == '\0') {
    iVar6 = strcmp((char *)(plVar8 + 4),local_118);
    plVar1 = plVar8 + 2;
    plVar4 = plVar8;
    if (iVar6 < 0) {
      plVar8 = plVar5;
      plVar4 = plVar1;
    }
    plVar5 = plVar8;
    plVar8 = (longlong *)*plVar4;
    cVar2 = *(char *)(*plVar4 + 0x19);
  }
  if (((*(char *)((longlong)plVar5 + 0x19) == '\0') &&
      (iVar6 = strcmp(local_118,(char *)(plVar5 + 4)), -1 < iVar6)) && (plVar5 != plVar3)) {
    local_128 = 0;
    pTVar7 = (TypedAttribute<int> *)
             __RTDynamicCast(plVar5[0x24],0,&Attribute::RTTI_Type_Descriptor,
                             &TypedAttribute<int>::RTTI_Type_Descriptor);
  }
  else {
    pTVar7 = (TypedAttribute<int> *)0x0;
  }
  return pTVar7;
}

// findTypedAttribute<Imf_3_3::TypedAttribute<int>_> @ 14ea28830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TypedAttribute<int> * __thiscall
Imf_3_3::Header::findTypedAttribute<Imf_3_3::TypedAttribute<int>_>(Header *this,char *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  TypedAttribute<int> *pTVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  char local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  strncpy(local_118,param_1,0xff);
  plVar3 = *(longlong **)&this->_map;
  local_19 = 0;
  cVar2 = *(char *)(plVar3[1] + 0x19);
  plVar5 = plVar3;
  plVar8 = (longlong *)plVar3[1];
  while (cVar2 == '\0') {
    iVar6 = strcmp((char *)(plVar8 + 4),local_118);
    plVar1 = plVar8 + 2;
    plVar4 = plVar8;
    if (iVar6 < 0) {
      plVar8 = plVar5;
      plVar4 = plVar1;
    }
    plVar5 = plVar8;
    plVar8 = (longlong *)*plVar4;
    cVar2 = *(char *)(*plVar4 + 0x19);
  }
  if (((*(char *)((longlong)plVar5 + 0x19) == '\0') &&
      (iVar6 = strcmp(local_118,(char *)(plVar5 + 4)), -1 < iVar6)) && (plVar5 != plVar3)) {
    local_128 = 0;
    pTVar7 = (TypedAttribute<int> *)
             __RTDynamicCast(plVar5[0x24],0,&Attribute::RTTI_Type_Descriptor,
                             &TypedAttribute<int>::RTTI_Type_Descriptor);
  }
  else {
    pTVar7 = (TypedAttribute<int> *)0x0;
  }
  return pTVar7;
}

// findTypedAttribute<Imf_3_3::TypedAttribute<Imf_3_3::Rational>_> @ 14ea28940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TypedAttribute<Imf_3_3::Rational> * __thiscall
Imf_3_3::Header::findTypedAttribute<Imf_3_3::TypedAttribute<Imf_3_3::Rational>_>
          (Header *this,char *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  TypedAttribute<Imf_3_3::Rational> *pTVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  char local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  strncpy(local_118,param_1,0xff);
  plVar3 = *(longlong **)&this->_map;
  local_19 = 0;
  cVar2 = *(char *)(plVar3[1] + 0x19);
  plVar5 = plVar3;
  plVar8 = (longlong *)plVar3[1];
  while (cVar2 == '\0') {
    iVar6 = strcmp((char *)(plVar8 + 4),local_118);
    plVar1 = plVar8 + 2;
    plVar4 = plVar8;
    if (iVar6 < 0) {
      plVar8 = plVar5;
      plVar4 = plVar1;
    }
    plVar5 = plVar8;
    plVar8 = (longlong *)*plVar4;
    cVar2 = *(char *)(*plVar4 + 0x19);
  }
  if (((*(char *)((longlong)plVar5 + 0x19) == '\0') &&
      (iVar6 = strcmp(local_118,(char *)(plVar5 + 4)), -1 < iVar6)) && (plVar5 != plVar3)) {
    local_128 = 0;
    pTVar7 = (TypedAttribute<Imf_3_3::Rational> *)
             __RTDynamicCast(plVar5[0x24],0,&Attribute::RTTI_Type_Descriptor,
                             &TypedAttribute<Imf_3_3::Rational>::RTTI_Type_Descriptor);
  }
  else {
    pTVar7 = (TypedAttribute<Imf_3_3::Rational> *)0x0;
  }
  return pTVar7;
}

// findTypedAttribute<Imf_3_3::TypedAttribute<Imf_3_3::TileDescription>_> @ 14ea28a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TypedAttribute<Imf_3_3::TileDescription> * __thiscall
Imf_3_3::Header::findTypedAttribute<Imf_3_3::TypedAttribute<Imf_3_3::TileDescription>_>
          (Header *this,char *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  TypedAttribute<Imf_3_3::TileDescription> *pTVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  char local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  strncpy(local_118,param_1,0xff);
  plVar3 = *(longlong **)&this->_map;
  local_19 = 0;
  cVar2 = *(char *)(plVar3[1] + 0x19);
  plVar5 = plVar3;
  plVar8 = (longlong *)plVar3[1];
  while (cVar2 == '\0') {
    iVar6 = strcmp((char *)(plVar8 + 4),local_118);
    plVar1 = plVar8 + 2;
    plVar4 = plVar8;
    if (iVar6 < 0) {
      plVar8 = plVar5;
      plVar4 = plVar1;
    }
    plVar5 = plVar8;
    plVar8 = (longlong *)*plVar4;
    cVar2 = *(char *)(*plVar4 + 0x19);
  }
  if (((*(char *)((longlong)plVar5 + 0x19) == '\0') &&
      (iVar6 = strcmp(local_118,(char *)(plVar5 + 4)), -1 < iVar6)) && (plVar5 != plVar3)) {
    local_128 = 0;
    pTVar7 = (TypedAttribute<Imf_3_3::TileDescription> *)
             __RTDynamicCast(plVar5[0x24],0,&Attribute::RTTI_Type_Descriptor,
                             &TypedAttribute<Imf_3_3::TileDescription>::RTTI_Type_Descriptor);
  }
  else {
    pTVar7 = (TypedAttribute<Imf_3_3::TileDescription> *)0x0;
  }
  return pTVar7;
}

// findTypedAttribute<Imf_3_3::TypedAttribute<enum_Imf_3_3::Compression>_> @ 14ea28b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TypedAttribute<Imf_3_3::Compression> * __thiscall
Imf_3_3::Header::findTypedAttribute<Imf_3_3::TypedAttribute<enum_Imf_3_3::Compression>_>
          (Header *this,char *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  TypedAttribute<Imf_3_3::Compression> *pTVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  char local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  strncpy(local_118,param_1,0xff);
  plVar3 = *(longlong **)&this->_map;
  local_19 = 0;
  cVar2 = *(char *)(plVar3[1] + 0x19);
  plVar5 = plVar3;
  plVar8 = (longlong *)plVar3[1];
  while (cVar2 == '\0') {
    iVar6 = strcmp((char *)(plVar8 + 4),local_118);
    plVar1 = plVar8 + 2;
    plVar4 = plVar8;
    if (iVar6 < 0) {
      plVar8 = plVar5;
      plVar4 = plVar1;
    }
    plVar5 = plVar8;
    plVar8 = (longlong *)*plVar4;
    cVar2 = *(char *)(*plVar4 + 0x19);
  }
  if (((*(char *)((longlong)plVar5 + 0x19) == '\0') &&
      (iVar6 = strcmp(local_118,(char *)(plVar5 + 4)), -1 < iVar6)) && (plVar5 != plVar3)) {
    local_128 = 0;
    pTVar7 = (TypedAttribute<Imf_3_3::Compression> *)
             __RTDynamicCast(plVar5[0x24],0,&Attribute::RTTI_Type_Descriptor,
                             &TypedAttribute<Imf_3_3::Compression>::RTTI_Type_Descriptor);
  }
  else {
    pTVar7 = (TypedAttribute<Imf_3_3::Compression> *)0x0;
  }
  return pTVar7;
}

// `scalar_deleting_destructor' @ 14ea293c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<_priv_exr_context_t_*,SharedPointerInternals::DefaultDeleter<_priv_exr_context_t_*>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<_priv_exr_context_t_*,SharedPointerInternals::DefaultDeleter<_priv_exr_context_t_*>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea29400

void * __thiscall FBaseOutputFile::_scalar_deleting_destructor_(FBaseOutputFile *this,uint param_1)

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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea29480

void * __thiscall
FTiledOutputFile::_scalar_deleting_destructor_(FTiledOutputFile *this,uint param_1)

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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea29570

void * __thiscall
FTiledRgbaOutputFile::_scalar_deleting_destructor_(FTiledRgbaOutputFile *this,uint param_1)

{
  Header *this_00;
  undefined8 *puVar1;
  
  this_00 = *(Header **)&this->field_0x8;
  *(undefined ***)this = FBaseOutputFile::vftable;
  if (this_00 != (Header *)0x0) {
    Imf_3_3::Header::~Header(this_00);
    ::operator_delete(this_00,0x18);
  }
  puVar1 = *(undefined8 **)&this->field_0x10;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// IMPLEMENT_MODULE_OpenExrWrapper @ 14ea2b330

void __cdecl IMPLEMENT_MODULE_OpenExrWrapper(void)

{
  return;
}

// dtor$0 @ 15026c4b0

void `FBaseOutputFile::FBaseOutputFile'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x70),0x18);
  return;
}

// dtor$0 @ 15026c4e0

void `FOpenExrHeaderReader::FOpenExrHeaderReader'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  TSharedPtr<void,1>::~TSharedPtr<void,1>(*(TSharedPtr<void,1> **)(param_2 + 0x30));
  return;
}

// dtor$1 @ 15026c500

void `FOpenExrHeaderReader::FOpenExrHeaderReader'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  ~TStringConversion<TStringConvert<wchar_t,char>,128>
            ((TStringConversion<TStringConvert<wchar_t,char>,128> *)(param_2 + 0xb0));
  return;
}

// dtor$6 @ 15026c520

void `FOpenExrHeaderReader::FOpenExrHeaderReader'::__l1::dtor_6(undefined8 param_1,longlong param_2)

{
  TSharedPtr<void,1>::~TSharedPtr<void,1>((TSharedPtr<void,1> *)(param_2 + 0x20));
  return;
}

// dtor$0 @ 15026c540

void `FRgbaInputFile::FRgbaInputFile'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x30),0x40);
  return;
}

// dtor$1 @ 15026c570

void `FRgbaInputFile::FRgbaInputFile'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>
              ((TStringConversion<TStringConvert<wchar_t,char>,128> *)(param_2 + 0x40));
  }
  return;
}

// dtor$2 @ 15026c5a0

void `FRgbaInputFile::FRgbaInputFile'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  ~TStringConversion<TStringConvert<char,wchar_t>,128>
            ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x40));
  return;
}

// dtor$8 @ 15026c5c0

void `FRgbaInputFile::FRgbaInputFile'::__l1::dtor_8(undefined8 param_1,longlong param_2)

{
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
  ~ForElementType<wchar_t>((ForElementType<wchar_t> *)(param_2 + 0x40));
  return;
}

// catch$13 @ 15026c5e0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `FRgbaInputFile::FRgbaInputFile'::__l1::catch_13(undefined8 param_1,longlong param_2)

{
  char *_Str;
  size_t sVar1;
  
  if (1 < (byte)LogOpenEXRWrapper._0_1_) {
    _Str = (char *)(**(code **)(**(longlong **)(param_2 + 0x38) + 8))();
    *(undefined8 *)(param_2 + 0x140) = 0;
    if (_Str == (char *)0x0) {
      *(undefined8 *)(param_2 + 0x148) = 0;
      *(undefined4 *)(param_2 + 0x150) = 0;
    }
    else {
      sVar1 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x40),_Str,
                 (int)sVar1,Yes);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    if (*(void **)(param_2 + 0x140) != (void *)0x0) {
      FMemory::Free(*(void **)(param_2 + 0x140));
    }
  }
  **(undefined8 **)(param_2 + 0x28) = 0;
  return 0;
}

// dtor$0 @ 15026c6a0

void `FRgbaInputFile::FRgbaInputFile'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x30),0x40);
  return;
}

// dtor$1 @ 15026c6d0

void `FRgbaInputFile::FRgbaInputFile'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>
              ((TStringConversion<TStringConvert<wchar_t,char>,128> *)(param_2 + 0x40));
  }
  return;
}

// dtor$2 @ 15026c700

void `FRgbaInputFile::FRgbaInputFile'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  ~TStringConversion<TStringConvert<char,wchar_t>,128>
            ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x40));
  return;
}

// dtor$8 @ 15026c720

void `FRgbaInputFile::FRgbaInputFile'::__l1::dtor_8(undefined8 param_1,longlong param_2)

{
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
  ~ForElementType<wchar_t>((ForElementType<wchar_t> *)(param_2 + 0x40));
  return;
}

// catch$13 @ 15026c740

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `FRgbaInputFile::FRgbaInputFile'::__l1::catch_13(undefined8 param_1,longlong param_2)

{
  char *_Str;
  size_t sVar1;
  
  if (1 < (byte)LogOpenEXRWrapper._0_1_) {
    _Str = (char *)(**(code **)(**(longlong **)(param_2 + 0x38) + 8))();
    *(undefined8 *)(param_2 + 0x140) = 0;
    if (_Str == (char *)0x0) {
      *(undefined8 *)(param_2 + 0x148) = 0;
      *(undefined4 *)(param_2 + 0x150) = 0;
    }
    else {
      sVar1 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x40),_Str,
                 (int)sVar1,Yes);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    if (*(void **)(param_2 + 0x140) != (void *)0x0) {
      FMemory::Free(*(void **)(param_2 + 0x140));
    }
  }
  **(undefined8 **)(param_2 + 0x28) = 0;
  return 0;
}

// dtor$0 @ 15026c800

void `FTiledOutputFile::FTiledOutputFile'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  FBaseOutputFile::~FBaseOutputFile(*(FBaseOutputFile **)(param_2 + 0x50));
  return;
}

// dtor$1 @ 15026c820

void `FTiledOutputFile::FTiledOutputFile'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x30),0x10);
  return;
}

// dtor$0 @ 15026c850

void `FTiledOutputFile::AddChannel'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  ~TStringConversion<TStringConvert<wchar_t,char>,128>
            ((TStringConversion<TStringConvert<wchar_t,char>,128> *)(param_2 + 0x40));
  return;
}

// dtor$0 @ 15026c870

void `FTiledOutputFile::AddFrameBufferChannel'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  ~TStringConversion<TStringConvert<wchar_t,char>,128>
            ((TStringConversion<TStringConvert<wchar_t,char>,128> *)(param_2 + 0x90));
  return;
}

// dtor$0 @ 15026c890

void `FBaseOutputFile::AddIntAttribute'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  Imf_3_3::TypedAttribute<int>::~TypedAttribute<int>((TypedAttribute<int> *)(param_2 + 0x38));
  return;
}

// dtor$1 @ 15026c8b0

void `FBaseOutputFile::AddIntAttribute'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  ~TStringConversion<TStringConvert<wchar_t,char>,128>
            ((TStringConversion<TStringConvert<wchar_t,char>,128> *)(param_2 + 0x70));
  return;
}

// dtor$2 @ 15026c8d0

void `FBaseOutputFile::AddIntAttribute'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x48));
  return;
}

// dtor$0 @ 15026c8f0

void `FTiledOutputFile::CreateOutputFile'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x28),0x20);
  return;
}

// dtor$1 @ 15026c920

void `FTiledOutputFile::CreateOutputFile'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>
              ((TStringConversion<TStringConvert<wchar_t,char>,128> *)(param_2 + 0x50));
  }
  return;
}

// dtor$2 @ 15026c950

void `FTiledOutputFile::CreateOutputFile'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x28),0x10);
  return;
}

// dtor$3 @ 15026c980

void `FTiledOutputFile::CreateOutputFile'::__l1::dtor_3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>
              ((TStringConversion<TStringConvert<wchar_t,char>,128> *)(param_2 + 0x50));
  }
  return;
}

// dtor$4 @ 15026c9b0

void `FTiledOutputFile::CreateOutputFile'::__l1::dtor_4(undefined8 param_1,longlong param_2)

{
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  ~TStringConversion<TStringConvert<char,wchar_t>,128>
            ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x50));
  return;
}

// dtor$14 @ 15026c9d0

void `FTiledOutputFile::CreateOutputFile'::__l1::dtor_14(undefined8 param_1,longlong param_2)

{
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
  ~ForElementType<wchar_t>((ForElementType<wchar_t> *)(param_2 + 0x50));
  return;
}

// catch$19 @ 15026c9f0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `FTiledOutputFile::CreateOutputFile'::__l1::catch_19(undefined8 param_1,longlong param_2)

{
  char *_Str;
  size_t sVar1;
  
  if (1 < (byte)LogOpenEXRWrapper._0_1_) {
    _Str = (char *)(**(code **)(**(longlong **)(param_2 + 0x40) + 8))();
    *(undefined8 *)(param_2 + 0x150) = 0;
    if (_Str == (char *)0x0) {
      *(undefined8 *)(param_2 + 0x158) = 0;
      *(undefined4 *)(param_2 + 0x160) = 0;
    }
    else {
      sVar1 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x50),_Str,
                 (int)sVar1,Yes);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    if (*(void **)(param_2 + 0x150) != (void *)0x0) {
      FMemory::Free(*(void **)(param_2 + 0x150));
    }
  }
  return 0;
}

// dtor$0 @ 15026cac0

void `FTiledRgbaOutputFile::CreateOutputFile'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x68),0x18);
  return;
}

// dtor$1 @ 15026caf0

void `FTiledRgbaOutputFile::CreateOutputFile'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>
              ((TStringConversion<TStringConvert<wchar_t,char>,128> *)(param_2 + 0x80));
  }
  return;
}

// dtor$2 @ 15026cb20

void `FTiledRgbaOutputFile::CreateOutputFile'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  ~TStringConversion<TStringConvert<char,wchar_t>,128>
            ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x80));
  return;
}

// dtor$8 @ 15026cb40

void `FTiledRgbaOutputFile::CreateOutputFile'::__l1::dtor_8(undefined8 param_1,longlong param_2)

{
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
  ~ForElementType<wchar_t>((ForElementType<wchar_t> *)(param_2 + 0x80));
  return;
}

// catch$13 @ 15026cb60

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`FTiledRgbaOutputFile::CreateOutputFile'::__l1::catch_13(undefined8 param_1,longlong param_2)

{
  char *_Str;
  size_t sVar1;
  
  if (1 < (byte)LogOpenEXRWrapper._0_1_) {
    _Str = (char *)(**(code **)(**(longlong **)(param_2 + 0x70) + 8))();
    *(undefined8 *)(param_2 + 0x180) = 0;
    if (_Str == (char *)0x0) {
      *(undefined8 *)(param_2 + 0x188) = 0;
      *(undefined4 *)(param_2 + 400) = 0;
    }
    else {
      sVar1 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x80),_Str,
                 (int)sVar1,Yes);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    if (*(void **)(param_2 + 0x180) != (void *)0x0) {
      FMemory::Free(*(void **)(param_2 + 0x180));
    }
  }
  return 0;
}

// dtor$0 @ 15026cc30

void `FRgbaInputFile::GetIntAttribute'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  ~TStringConversion<TStringConvert<wchar_t,char>,128>
            ((TStringConversion<TStringConvert<wchar_t,char>,128> *)(param_2 + 0x150));
  return;
}

// dtor$1 @ 15026cc50

void `FRgbaInputFile::GetIntAttribute'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x30));
  return;
}

// dtor$0 @ 15026cc70

void `FRgbaInputFile::ReadPixels'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  ~TStringConversion<TStringConvert<char,wchar_t>,128>
            ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x160));
  return;
}

// dtor$1 @ 15026cc90

void `FRgbaInputFile::ReadPixels'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  ~TStringConversion<TStringConvert<char,wchar_t>,128>
            ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x40));
  return;
}

// dtor$3 @ 15026ccb0

void `FRgbaInputFile::ReadPixels'::__l1::dtor_3(undefined8 param_1,longlong param_2)

{
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
  ~ForElementType<wchar_t>((ForElementType<wchar_t> *)(param_2 + 0x160));
  return;
}

// dtor$5 @ 15026ccd0

void `FRgbaInputFile::ReadPixels'::__l1::dtor_5(undefined8 param_1,longlong param_2)

{
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
  ~ForElementType<wchar_t>((ForElementType<wchar_t> *)(param_2 + 0x40));
  return;
}

// catch$14 @ 15026ccf0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `FRgbaInputFile::ReadPixels'::__l1::catch_14(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  size_t sVar2;
  
  if (1 < (byte)LogOpenEXRWrapper._0_1_) {
    pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x30) + 8))();
    *(undefined8 *)(param_2 + 0x260) = 0;
    if (pcVar1 == (char *)0x0) {
      *(undefined8 *)(param_2 + 0x268) = 0;
      *(undefined4 *)(param_2 + 0x270) = 0;
    }
    else {
      sVar2 = strlen(pcVar1);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x160),pcVar1,
                 (int)sVar2,Yes);
    }
    pcVar1 = Imf_3_3::RgbaInputFile::fileName((RgbaInputFile *)**(undefined8 **)(param_2 + 0x28));
    *(undefined8 *)(param_2 + 0x140) = 0;
    if (pcVar1 == (char *)0x0) {
      *(undefined8 *)(param_2 + 0x148) = 0;
      *(undefined4 *)(param_2 + 0x150) = 0;
    }
    else {
      sVar2 = strlen(pcVar1);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x40),pcVar1,
                 (int)sVar2,Yes);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    if (*(void **)(param_2 + 0x140) != (void *)0x0) {
      FMemory::Free(*(void **)(param_2 + 0x140));
    }
    if (*(void **)(param_2 + 0x260) != (void *)0x0) {
      FMemory::Free(*(void **)(param_2 + 0x260));
    }
  }
  return 0;
}

// dtor$0 @ 15026ce10

void `FTiledOutputFile::UpdateFrameBufferChannel'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  ~TStringConversion<TStringConvert<wchar_t,char>,128>
            ((TStringConversion<TStringConvert<wchar_t,char>,128> *)(param_2 + 0x20));
  return;
}

// dtor$0 @ 15026ce30

void `FTiledOutputFile::WriteTile'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  ~TStringConversion<TStringConvert<char,wchar_t>,128>
            ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x40));
  return;
}

// dtor$2 @ 15026ce50

void `FTiledOutputFile::WriteTile'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
  ~ForElementType<wchar_t>((ForElementType<wchar_t> *)(param_2 + 0x40));
  return;
}

// catch$7 @ 15026ce70

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `FTiledOutputFile::WriteTile'::__l1::catch_7(undefined8 param_1,longlong param_2)

{
  char *_Str;
  size_t sVar1;
  
  if (1 < (byte)LogOpenEXRWrapper._0_1_) {
    _Str = (char *)(**(code **)(**(longlong **)(param_2 + 0x38) + 8))();
    *(undefined8 *)(param_2 + 0x140) = 0;
    if (_Str == (char *)0x0) {
      *(undefined8 *)(param_2 + 0x148) = 0;
      *(undefined4 *)(param_2 + 0x150) = 0;
    }
    else {
      sVar1 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x40),_Str,
                 (int)sVar1,Yes);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    if (*(void **)(param_2 + 0x140) != (void *)0x0) {
      FMemory::Free(*(void **)(param_2 + 0x140));
    }
  }
  return 0;
}

// dtor$0 @ 15026cf20

void `FTiledRgbaOutputFile::WriteTile'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  ~TStringConversion<TStringConvert<char,wchar_t>,128>
            ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x30));
  return;
}

// dtor$2 @ 15026cf40

void `FTiledRgbaOutputFile::WriteTile'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
  ~ForElementType<wchar_t>((ForElementType<wchar_t> *)(param_2 + 0x30));
  return;
}

// catch$7 @ 15026cf60

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `FTiledRgbaOutputFile::WriteTile'::__l1::catch_7(undefined8 param_1,longlong param_2)

{
  char *_Str;
  size_t sVar1;
  
  if (1 < (byte)LogOpenEXRWrapper._0_1_) {
    _Str = (char *)(**(code **)(**(longlong **)(param_2 + 0x28) + 8))();
    *(undefined8 *)(param_2 + 0x130) = 0;
    if (_Str == (char *)0x0) {
      *(undefined8 *)(param_2 + 0x138) = 0;
      *(undefined4 *)(param_2 + 0x140) = 0;
    }
    else {
      sVar1 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x30),_Str,
                 (int)sVar1,Yes);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    if (*(void **)(param_2 + 0x130) != (void *)0x0) {
      FMemory::Free(*(void **)(param_2 + 0x130));
    }
  }
  return 0;
}

// dtor$0 @ 15026d010

void `FTiledOutputFile::WriteTiles'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  ~TStringConversion<TStringConvert<char,wchar_t>,128>
            ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x40));
  return;
}

// dtor$2 @ 15026d030

void `FTiledOutputFile::WriteTiles'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
  ~ForElementType<wchar_t>((ForElementType<wchar_t> *)(param_2 + 0x40));
  return;
}

// catch$7 @ 15026d050

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `FTiledOutputFile::WriteTiles'::__l1::catch_7(undefined8 param_1,longlong param_2)

{
  char *_Str;
  size_t sVar1;
  
  if (1 < (byte)LogOpenEXRWrapper._0_1_) {
    _Str = (char *)(**(code **)(**(longlong **)(param_2 + 0x38) + 8))();
    *(undefined8 *)(param_2 + 0x140) = 0;
    if (_Str == (char *)0x0) {
      *(undefined8 *)(param_2 + 0x148) = 0;
      *(undefined4 *)(param_2 + 0x150) = 0;
    }
    else {
      sVar1 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(param_2 + 0x40),_Str,
                 (int)sVar1,Yes);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenEXRWrapper);
    if (*(void **)(param_2 + 0x140) != (void *)0x0) {
      FMemory::Free(*(void **)(param_2 + 0x140));
    }
  }
  return 0;
}

// `dynamic_atexit_destructor_for_'LogOpenEXRWrapper'' @ 15046da40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOpenEXRWrapper__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOpenEXRWrapper);
  return;
}

// `dynamic_atexit_destructor_for_'LogOpenEXRWrapperHeaderReader'' @ 15046da60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOpenEXRWrapperHeaderReader__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOpenEXRWrapperHeaderReader);
  return;
}

