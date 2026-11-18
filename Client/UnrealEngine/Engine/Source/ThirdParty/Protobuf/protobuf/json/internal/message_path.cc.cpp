// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 6

// operator[] @ 14fbaea70

/* public: struct google::protobuf::json_internal::MessagePath::Component const & __ptr64 __cdecl
   std::vector<struct google::protobuf::json_internal::MessagePath::Component,class
   std::allocator<struct google::protobuf::json_internal::MessagePath::Component>
   >::operator[](unsigned __int64)const __ptr64 */

Component * __thiscall
std::
vector<google::protobuf::json_internal::MessagePath::Component,std::allocator<google::protobuf::json_internal::MessagePath::Component>_>
::operator[](vector<google::protobuf::json_internal::MessagePath::Component,std::allocator<google::protobuf::json_internal::MessagePath::Component>_>
             *this,__uint64 param_1)

{
  return (Component *)(param_1 * 0x30 + *(longlong *)this);
}

// Describe @ 14fbaea90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __cdecl google::protobuf::json_internal::MessagePath::Describe(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __ptr64)const
   __ptr64 */

void __thiscall
google::protobuf::json_internal::MessagePath::Describe
          (MessagePath *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong64 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_128 [32];
  char *local_108;
  undefined8 uStack_100;
  char *local_f8;
  ulong64 uStack_f0;
  char *local_e8;
  undefined8 uStack_e0;
  AlphaNum local_d8;
  AlphaNum local_a8;
  AlphaNum local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_d8.piece_._Mydata = *(char **)(*(longlong *)this + 8);
  local_d8.piece_._Mysize = *(ulong64 *)(*(longlong *)this + 0x10);
  absl::lts_20240722::StrAppend(param_1,&local_d8);
  if (0x2f < (*(longlong *)(this + 8) - *(longlong *)this) - 0x30U) {
    local_f8 = " @ ";
    uStack_f0 = 3;
    local_d8.piece_._Mydata = " @ ";
    local_d8.piece_._Mysize = 3;
    absl::lts_20240722::StrAppend(param_1,&local_d8);
    lVar6 = *(longlong *)(this + 8);
    uVar7 = 1;
    lVar5 = *(longlong *)this;
    uVar3 = 0xffffffffffffffff;
    if (1 < (ulonglong)((lVar6 - lVar5) / 0x30)) {
      lVar4 = 0x30;
      do {
        puVar1 = (undefined8 *)(lVar4 + 0x18 + lVar5);
        local_d8.piece_._Mydata = (char *)*puVar1;
        local_d8.piece_._Mysize = puVar1[1];
        local_f8 = ".";
        uStack_f0 = uVar3;
        if (uVar7 == 1) {
          local_f8 = "";
        }
        do {
          uStack_f0 = uStack_f0 + 1;
        } while (local_f8[uStack_f0] != '\0');
        local_a8.piece_._Mydata = local_f8;
        local_a8.piece_._Mysize = uStack_f0;
        absl::lts_20240722::StrAppend(param_1,&local_a8,&local_d8);
        iVar2 = *(int *)(*(longlong *)this + 0x28 + lVar4);
        if (-1 < iVar2) {
          uStack_e0 = 1;
          local_e8 = "]";
          local_a8.piece_._Mydata = "]";
          local_a8.piece_._Mysize = 1;
          local_d8.piece_._Mysize =
               (ulong64)absl::lts_20240722::numbers_internal::FastIntToBuffer
                                  (iVar2,local_d8.digits_);
          uStack_100 = 1;
          local_d8.piece_._Mysize = local_d8.piece_._Mysize + (-0x10 - (longlong)&local_d8);
          local_d8.piece_._Mydata = local_d8.digits_;
          local_108 = "[";
          local_78.piece_._Mydata = "[";
          local_78.piece_._Mysize = 1;
          absl::lts_20240722::StrAppend(param_1,&local_78,&local_d8,&local_a8);
        }
        lVar6 = *(longlong *)(this + 8);
        lVar5 = *(longlong *)this;
        uVar7 = uVar7 + 1;
        lVar4 = lVar4 + 0x30;
      } while (uVar7 < (ulonglong)((lVar6 - lVar5) / 0x30));
    }
    local_d8.piece_._Mydata = (&FieldDescriptor::kTypeToName)[*(int *)(lVar6 + -0x30)];
    do {
      uVar3 = uVar3 + 1;
    } while (local_d8.piece_._Mydata[uVar3] != '\0');
    uStack_100 = 2;
    local_108 = ": ";
    local_78.piece_._Mydata = ": ";
    local_78.piece_._Mysize = 2;
    local_d8.piece_._Mysize = uVar3;
    absl::lts_20240722::StrAppend(param_1,&local_78,&local_d8);
    lVar6 = *(longlong *)(this + 8);
    if (*(longlong *)(lVar6 + -0x20) != 0) {
      local_78.piece_._Mydata = *(char **)(lVar6 + -0x28);
      local_78.piece_._Mysize = *(ulong64 *)(lVar6 + -0x20);
      uStack_100 = 1;
      local_108 = " ";
      local_a8.piece_._Mydata = " ";
      local_a8.piece_._Mysize = 1;
      absl::lts_20240722::StrAppend(param_1,&local_a8,&local_78);
    }
  }
  return;
}

// TypeName @ 14fbaed70

/* WARNING: Enum "Type": Some values do not have unique names */
/* public: static class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   google::protobuf::FieldDescriptor::TypeName(enum
   google::protobuf::internal::FieldDescriptorLite::Type) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
google::protobuf::FieldDescriptor::TypeName
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,Type param_1)

{
  char *pcVar1;
  ulong64 uVar2;
  
  pcVar1 = (&kTypeToName)[(int)param_1];
  uVar2 = 0xffffffffffffffff;
  __return_storage_ptr__->_Mydata = pcVar1;
  do {
    uVar2 = uVar2 + 1;
  } while (pcVar1[uVar2] != '\0');
  __return_storage_ptr__->_Mysize = uVar2;
  return __return_storage_ptr__;
}

// back @ 14fbaedb0

/* public: struct google::protobuf::json_internal::MessagePath::Component const & __ptr64 __cdecl
   std::vector<struct google::protobuf::json_internal::MessagePath::Component,class
   std::allocator<struct google::protobuf::json_internal::MessagePath::Component> >::back(void)const
   __ptr64 */

Component * __thiscall
std::
vector<google::protobuf::json_internal::MessagePath::Component,std::allocator<google::protobuf::json_internal::MessagePath::Component>_>
::back(vector<google::protobuf::json_internal::MessagePath::Component,std::allocator<google::protobuf::json_internal::MessagePath::Component>_>
       *this)

{
  return (Component *)(*(longlong *)(this + 8) + -0x30);
}

// front @ 14fbaedc0

/* public: struct google::protobuf::json_internal::MessagePath::Component const & __ptr64 __cdecl
   std::vector<struct google::protobuf::json_internal::MessagePath::Component,class
   std::allocator<struct google::protobuf::json_internal::MessagePath::Component>
   >::front(void)const __ptr64 */

Component * __thiscall
std::
vector<google::protobuf::json_internal::MessagePath::Component,std::allocator<google::protobuf::json_internal::MessagePath::Component>_>
::front(vector<google::protobuf::json_internal::MessagePath::Component,std::allocator<google::protobuf::json_internal::MessagePath::Component>_>
        *this)

{
  return *(Component **)this;
}

// size @ 14fbaedd0

/* public: unsigned __int64 __cdecl std::vector<struct
   google::protobuf::json_internal::MessagePath::Component,class std::allocator<struct
   google::protobuf::json_internal::MessagePath::Component> >::size(void)const __ptr64 */

__uint64 __thiscall
std::
vector<google::protobuf::json_internal::MessagePath::Component,std::allocator<google::protobuf::json_internal::MessagePath::Component>_>
::size(vector<google::protobuf::json_internal::MessagePath::Component,std::allocator<google::protobuf::json_internal::MessagePath::Component>_>
       *this)

{
  return (*(longlong *)(this + 8) - *(longlong *)this) / 0x30;
}

