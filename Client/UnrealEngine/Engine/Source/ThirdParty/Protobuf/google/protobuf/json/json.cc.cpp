// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 9

// ParseOptions @ 14f92de20

/* public: __cdecl google::protobuf::json_internal::ParseOptions::ParseOptions(void) __ptr64 */

ParseOptions * __thiscall
google::protobuf::json_internal::ParseOptions::ParseOptions(ParseOptions *this)

{
  *(undefined2 *)this = 0;
  *(undefined4 *)(this + 4) = 100;
  this[8] = (ParseOptions)0x0;
  return this;
}

// WriterOptions @ 14f92de40

/* public: __cdecl google::protobuf::json_internal::WriterOptions::WriterOptions(void) __ptr64 */

WriterOptions * __thiscall
google::protobuf::json_internal::WriterOptions::WriterOptions(WriterOptions *this)

{
  *(undefined4 *)this = 0;
  *(undefined2 *)(this + 4) = 0;
  return this;
}

// BinaryToJsonStream @ 14f92de60

/* class absl::lts_20240722::Status __cdecl google::protobuf::json::BinaryToJsonStream(class
   google::protobuf::util::TypeResolver * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64,class
   google::protobuf::io::ZeroCopyInputStream * __ptr64,class
   google::protobuf::io::ZeroCopyOutputStream * __ptr64,struct google::protobuf::json::PrintOptions
   const & __ptr64) */

Status __cdecl
google::protobuf::json::BinaryToJsonStream
          (TypeResolver *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          ZeroCopyInputStream *param_3,ZeroCopyOutputStream *param_4,PrintOptions *param_5)

{
  json_internal::BinaryToJsonStream();
  return (Status)(ulong64)param_1;
}

// BinaryToJsonString @ 14f92ded0

/* class absl::lts_20240722::Status __cdecl google::protobuf::json::BinaryToJsonString(class
   google::protobuf::util::TypeResolver * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64,struct google::protobuf::json::PrintOptions const & __ptr64) */

Status __cdecl
google::protobuf::json::BinaryToJsonString
          (TypeResolver *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4,
          PrintOptions *param_5)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  undefined8 local_res8;
  undefined5 *in_stack_00000030;
  StringOutputStream local_40;
  ArrayInputStream local_30;
  
  pbVar1 = param_4 + 0x10;
  if (0xf < *(ulonglong *)(param_4 + 0x18)) {
    param_4 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
               param_4;
  }
  local_res8 = param_1;
  io::ArrayInputStream::ArrayInputStream(&local_30,param_4,*(int *)pbVar1,-1);
  io::StringOutputStream::StringOutputStream
            (&local_40,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_5);
  local_res8._0_6_ = CONCAT15(1,*in_stack_00000030);
  json_internal::BinaryToJsonStream(param_1,param_2,param_3,&local_30,&local_40,&local_res8);
  return (Status)(ulong64)param_1;
}

// JsonStreamToMessage @ 14f92dfb0

/* class absl::lts_20240722::Status __cdecl google::protobuf::json::JsonStreamToMessage(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64,class google::protobuf::Message *
   __ptr64,struct google::protobuf::json::ParseOptions const & __ptr64) */

Status __cdecl
google::protobuf::json::JsonStreamToMessage
          (ZeroCopyInputStream *param_1,Message *param_2,ParseOptions *param_3)

{
  json_internal::JsonStreamToMessage();
  return (Status)(ulong64)param_1;
}

// JsonStringToMessage @ 14f92e010

/* class absl::lts_20240722::Status __cdecl google::protobuf::json::JsonStringToMessage(class
   std::basic_string_view<char,struct std::char_traits<char> >,class google::protobuf::Message *
   __ptr64,struct google::protobuf::json::ParseOptions const & __ptr64) */

Status __cdecl
google::protobuf::json::JsonStringToMessage
          (basic_string_view<char,std::char_traits<char>_> *param_1,Message *param_2,
          ParseOptions *param_3)

{
  undefined2 *in_R9;
  undefined2 uStack_4e;
  undefined4 local_48;
  undefined8 local_38;
  undefined4 local_30;
  ArrayInputStream local_28;
  
  io::ArrayInputStream::ArrayInputStream(&local_28,*(void **)param_2,*(int *)&param_2->field_0x8,-1)
  ;
  local_38 = CONCAT44(100,CONCAT22(uStack_4e,*in_R9));
  local_48 = CONCAT31(local_48._1_3_,1);
  local_30 = local_48;
  json_internal::JsonStreamToMessage(param_1,&local_28,param_3,&local_38);
  return (Status)(ulong64)param_1;
}

// JsonToBinaryStream @ 14f92e0a0

/* class absl::lts_20240722::Status __cdecl google::protobuf::json::JsonToBinaryStream(class
   google::protobuf::util::TypeResolver * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64,class
   google::protobuf::io::ZeroCopyInputStream * __ptr64,class
   google::protobuf::io::ZeroCopyOutputStream * __ptr64,struct google::protobuf::json::ParseOptions
   const & __ptr64) */

Status __cdecl
google::protobuf::json::JsonToBinaryStream
          (TypeResolver *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          ZeroCopyInputStream *param_3,ZeroCopyOutputStream *param_4,ParseOptions *param_5)

{
  json_internal::JsonToBinaryStream();
  return (Status)(ulong64)param_1;
}

// JsonToBinaryString @ 14f92e110

/* class absl::lts_20240722::Status __cdecl google::protobuf::json::JsonToBinaryString(class
   google::protobuf::util::TypeResolver * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64,struct
   google::protobuf::json::ParseOptions const & __ptr64) */

Status __cdecl
google::protobuf::json::JsonToBinaryString
          (TypeResolver *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          basic_string_view<char,std::char_traits<char>_> *param_3,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4,
          ParseOptions *param_5)

{
  undefined2 *in_stack_00000030;
  undefined2 uStack_5e;
  undefined4 local_58;
  undefined8 local_48;
  undefined4 local_40;
  StringOutputStream local_38;
  ArrayInputStream local_28;
  
  io::ArrayInputStream::ArrayInputStream(&local_28,*(void **)param_4,*(int *)(param_4 + 8),-1);
  io::StringOutputStream::StringOutputStream
            (&local_38,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_5);
  local_58 = CONCAT31(local_58._1_3_,1);
  local_48 = CONCAT44(100,CONCAT22(uStack_5e,*in_stack_00000030));
  local_40 = local_58;
  json_internal::JsonToBinaryStream(param_1,param_2,param_3,&local_28,&local_38,&local_48);
  return (Status)(ulong64)param_1;
}

// MessageToJsonString @ 14f92e1e0

/* class absl::lts_20240722::Status __cdecl google::protobuf::json::MessageToJsonString(class
   google::protobuf::Message const & __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64,struct
   google::protobuf::json::PrintOptions const & __ptr64) */

Status __cdecl
google::protobuf::json::MessageToJsonString
          (Message *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2
          ,PrintOptions *param_3)

{
  json_internal::MessageToJsonString();
  return (Status)(ulong64)param_1;
}

