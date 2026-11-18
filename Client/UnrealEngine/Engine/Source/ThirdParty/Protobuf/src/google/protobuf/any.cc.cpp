// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 4

// GetAnyFieldDescriptors @ 14fb70fb0

/* bool __cdecl google::protobuf::internal::GetAnyFieldDescriptors(class google::protobuf::Message
   const & __ptr64,class google::protobuf::FieldDescriptor const * __ptr64 * __ptr64,class
   google::protobuf::FieldDescriptor const * __ptr64 * __ptr64) */

bool __cdecl
google::protobuf::internal::GetAnyFieldDescriptors
          (Message *param_1,FieldDescriptor **param_2,FieldDescriptor **param_3)

{
  Descriptor *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  longlong lVar2;
  int iVar3;
  Metadata *pMVar4;
  size_t sVar5;
  FieldDescriptor *pFVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Buf1;
  Metadata local_18;
  size_t sVar6;
  
  pMVar4 = protobuf::Message::GetMetadata(param_1,&local_18);
  this = pMVar4->descriptor;
  sVar6 = 0xffffffffffffffff;
  do {
    sVar5 = sVar6 + 1;
    lVar2 = sVar6 + 1;
    sVar6 = sVar5;
  } while ("google.protobuf.Any"[lVar2] != '\0');
  pbVar1 = this->all_names_;
  _Buf1 = pbVar1 + 1;
  if (0xf < pbVar1[1]._Mypair._Myval2._Myres) {
    _Buf1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
            pbVar1[1]._Mypair._Myval2._Bx._Ptr;
  }
  sVar6 = pbVar1[1]._Mypair._Myval2._Mysize;
  if (sVar6 == sVar5) {
    iVar3 = memcmp(_Buf1,"google.protobuf.Any",sVar6);
    if (iVar3 == 0) {
      pFVar7 = Descriptor::FindFieldByNumber(this,1);
      *param_2 = pFVar7;
      pFVar7 = Descriptor::FindFieldByNumber(this,2);
      *param_3 = pFVar7;
      if ((((*param_2 != (FieldDescriptor *)0x0) && ((*param_2)->type_ == '\t')) &&
          (pFVar7 != (FieldDescriptor *)0x0)) && (pFVar7->type_ == '\f')) {
        return true;
      }
    }
  }
  return false;
}

// InternalPackFrom @ 14fb71070

/* bool __cdecl google::protobuf::internal::InternalPackFrom(class google::protobuf::Message const &
   __ptr64,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64) */

bool __cdecl
google::protobuf::internal::InternalPackFrom
          (Message *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2
          ,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  longlong lVar1;
  bool bVar2;
  basic_string_view<char,std::char_traits<char>_> *pbVar3;
  ulong64 uVar4;
  basic_string_view<char,std::char_traits<char>_> local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  pbVar3 = MessageLite::GetTypeName((MessageLite *)param_1,&local_18);
  uVar4 = 0xffffffffffffffff;
  do {
    local_38._Mysize = uVar4 + 1;
    lVar1 = uVar4 + 1;
    uVar4 = local_38._Mysize;
  } while ("type.googleapis.com/"[lVar1] != '\0');
  local_28._Mydata = pbVar3->_Mydata;
  local_28._Mysize = pbVar3->_Mysize;
  local_38._Mydata = "type.googleapis.com/";
  bVar2 = InternalPackFromLite((MessageLite *)param_1,&local_38,&local_28,param_2,param_3);
  return bVar2;
}

// InternalPackFrom @ 14fb71100

/* bool __cdecl google::protobuf::internal::InternalPackFrom(class google::protobuf::Message const &
   __ptr64,class std::basic_string_view<char,struct std::char_traits<char> >,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64) */

bool __cdecl
google::protobuf::internal::InternalPackFrom
          (Message *param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4)

{
  bool bVar1;
  basic_string_view<char,std::char_traits<char>_> *pbVar2;
  basic_string_view<char,std::char_traits<char>_> local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  pbVar2 = MessageLite::GetTypeName((MessageLite *)param_1,&local_18);
  local_28._Mydata = param_2->_Mydata;
  local_28._Mysize = param_2->_Mysize;
  local_38._Mydata = pbVar2->_Mydata;
  local_38._Mysize = pbVar2->_Mysize;
  bVar1 = InternalPackFromLite((MessageLite *)param_1,&local_28,&local_38,param_3,param_4);
  return bVar1;
}

// InternalUnpackTo @ 14fb71180

/* bool __cdecl google::protobuf::internal::InternalUnpackTo(class
   std::basic_string_view<char,struct std::char_traits<char> >,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64,class
   google::protobuf::Message * __ptr64) */

bool __cdecl
google::protobuf::internal::InternalUnpackTo
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,Message *param_3)

{
  bool bVar1;
  basic_string_view<char,std::char_traits<char>_> *pbVar2;
  basic_string_view<char,std::char_traits<char>_> local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_38._Mydata = param_1->_Mydata;
  local_38._Mysize = param_1->_Mysize;
  pbVar2 = MessageLite::GetTypeName((MessageLite *)param_3,&local_18);
  local_28._Mydata = pbVar2->_Mydata;
  local_28._Mysize = pbVar2->_Mysize;
  bVar1 = InternalUnpackToLite(&local_28,&local_38,param_2,(MessageLite *)param_3);
  return bVar1;
}

