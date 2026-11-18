// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 58

// operator<<<char*___ptr64,0> @ 14fabef70

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<char * __ptr64,0>(char * __ptr64 const &
   __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<char*___ptr64,0>
          (LogMessage *this,char **param_1)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  char *pcVar2;
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  pbVar1 = OstreamView::stream(&local_a8);
  pcVar2 = "(null)";
  if (*param_1 != (char *)0x0) {
    pcVar2 = *param_1;
  }
  std::operator<<<std::char_traits<char>_>(pbVar1,pcVar2);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// ConcatenatingInputStream @ 14fabefe0

/* public: __cdecl google::protobuf::io::ConcatenatingInputStream::ConcatenatingInputStream(class
   google::protobuf::io::ZeroCopyInputStream * __ptr64 const * __ptr64 const,int) __ptr64 */

ConcatenatingInputStream * __thiscall
google::protobuf::io::ConcatenatingInputStream::ConcatenatingInputStream
          (ConcatenatingInputStream *this,ZeroCopyInputStream **param_1,int param_2)

{
  *(ZeroCopyInputStream ***)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(int *)(this + 0x10) = param_2;
  *(undefined8 *)(this + 0x18) = 0;
  return this;
}

// CopyingFileInputStream @ 14fabf010

/* public: __cdecl
   google::protobuf::io::FileInputStream::CopyingFileInputStream::CopyingFileInputStream(int)
   __ptr64 */

CopyingFileInputStream * __thiscall
google::protobuf::io::FileInputStream::CopyingFileInputStream::CopyingFileInputStream
          (CopyingFileInputStream *this,int param_1)

{
  *(int *)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined2 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (CopyingFileInputStream)0x0;
  return this;
}

// CopyingFileOutputStream @ 14fabf040

/* public: __cdecl
   google::protobuf::io::FileOutputStream::CopyingFileOutputStream::CopyingFileOutputStream(int)
   __ptr64 */

CopyingFileOutputStream * __thiscall
google::protobuf::io::FileOutputStream::CopyingFileOutputStream::CopyingFileOutputStream
          (CopyingFileOutputStream *this,int param_1)

{
  *(int *)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined2 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return this;
}

// CopyingInputStream @ 14fabf070

/* public: __cdecl google::protobuf::io::CopyingInputStream::CopyingInputStream(void) __ptr64 */

CopyingInputStream * __thiscall
google::protobuf::io::CopyingInputStream::CopyingInputStream(CopyingInputStream *this)

{
  *(undefined ***)this = vftable;
  return this;
}

// CopyingIstreamInputStream @ 14fabf090

/* public: __cdecl
   google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream::CopyingIstreamInputStream(class
   std::basic_istream<char,struct std::char_traits<char> > * __ptr64) __ptr64 */

CopyingIstreamInputStream * __thiscall
google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream::CopyingIstreamInputStream
          (CopyingIstreamInputStream *this,basic_istream<char,std::char_traits<char>_> *param_1)

{
  *(basic_istream<char,std::char_traits<char>_> **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  return this;
}

// CopyingOstreamOutputStream @ 14fabf0b0

/* public: __cdecl
   google::protobuf::io::OstreamOutputStream::CopyingOstreamOutputStream::CopyingOstreamOutputStream(class
   std::basic_ostream<char,struct std::char_traits<char> > * __ptr64) __ptr64 */

CopyingOstreamOutputStream * __thiscall
google::protobuf::io::OstreamOutputStream::CopyingOstreamOutputStream::CopyingOstreamOutputStream
          (CopyingOstreamOutputStream *this,basic_ostream<char,std::char_traits<char>_> *param_1)

{
  *(basic_ostream<char,std::char_traits<char>_> **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  return this;
}

// CopyingOutputStream @ 14fabf0d0

/* public: __cdecl google::protobuf::io::CopyingOutputStream::CopyingOutputStream(void) __ptr64 */

CopyingOutputStream * __thiscall
google::protobuf::io::CopyingOutputStream::CopyingOutputStream(CopyingOutputStream *this)

{
  *(undefined ***)this = vftable;
  return this;
}

// FileInputStream @ 14fabf0f0

/* public: __cdecl google::protobuf::io::FileInputStream::FileInputStream(int,int) __ptr64 */

FileInputStream * __thiscall
google::protobuf::io::FileInputStream::FileInputStream
          (FileInputStream *this,int param_1,int param_2)

{
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 8) = CopyingFileInputStream::vftable;
  *(int *)(this + 0x10) = param_1;
  *(undefined2 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (FileInputStream)0x0;
  CopyingInputStreamAdaptor::CopyingInputStreamAdaptor
            ((CopyingInputStreamAdaptor *)(this + 0x20),(CopyingInputStream *)(this + 8),param_2);
  return this;
}

// FileOutputStream @ 14fabf150

/* public: __cdecl google::protobuf::io::FileOutputStream::FileOutputStream(int,int) __ptr64 */

FileOutputStream * __thiscall
google::protobuf::io::FileOutputStream::FileOutputStream
          (FileOutputStream *this,int param_1,int param_2)

{
  CopyingOutputStreamAdaptor::CopyingOutputStreamAdaptor
            ((CopyingOutputStreamAdaptor *)this,(CopyingOutputStream *)(this + 0x30),param_2);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x30) = CopyingFileOutputStream::vftable;
  *(int *)(this + 0x38) = param_1;
  *(undefined2 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  return this;
}

// IstreamInputStream @ 14fabf1b0

/* public: __cdecl google::protobuf::io::IstreamInputStream::IstreamInputStream(class
   std::basic_istream<char,struct std::char_traits<char> > * __ptr64,int) __ptr64 */

IstreamInputStream * __thiscall
google::protobuf::io::IstreamInputStream::IstreamInputStream
          (IstreamInputStream *this,basic_istream<char,std::char_traits<char>_> *param_1,int param_2
          )

{
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 8) = CopyingIstreamInputStream::vftable;
  *(basic_istream<char,std::char_traits<char>_> **)(this + 0x10) = param_1;
  CopyingInputStreamAdaptor::CopyingInputStreamAdaptor
            ((CopyingInputStreamAdaptor *)(this + 0x18),(CopyingInputStream *)(this + 8),param_2);
  return this;
}

// OstreamOutputStream @ 14fabf200

/* public: __cdecl google::protobuf::io::OstreamOutputStream::OstreamOutputStream(class
   std::basic_ostream<char,struct std::char_traits<char> > * __ptr64,int) __ptr64 */

OstreamOutputStream * __thiscall
google::protobuf::io::OstreamOutputStream::OstreamOutputStream
          (OstreamOutputStream *this,basic_ostream<char,std::char_traits<char>_> *param_1,
          int param_2)

{
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 8) = CopyingOstreamOutputStream::vftable;
  *(basic_ostream<char,std::char_traits<char>_> **)(this + 0x10) = param_1;
  CopyingOutputStreamAdaptor::CopyingOutputStreamAdaptor
            ((CopyingOutputStreamAdaptor *)(this + 0x18),(CopyingOutputStream *)(this + 8),param_2);
  return this;
}

// ~ConcatenatingInputStream @ 14fabf250

/* public: virtual __cdecl
   google::protobuf::io::ConcatenatingInputStream::~ConcatenatingInputStream(void) __ptr64 */

void __thiscall
google::protobuf::io::ConcatenatingInputStream::~ConcatenatingInputStream
          (ConcatenatingInputStream *this)

{
  return;
}

// ~CopyingFileInputStream @ 14fabf260

/* public: virtual __cdecl
   google::protobuf::io::FileInputStream::CopyingFileInputStream::~CopyingFileInputStream(void)
   __ptr64 */

void __thiscall
google::protobuf::io::FileInputStream::CopyingFileInputStream::~CopyingFileInputStream
          (CopyingFileInputStream *this)

{
  bool bVar1;
  LogMessage *this_00;
  char *pcVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  char *pcVar4;
  basic_string_view<char,std::char_traits<char>_> local_c8;
  LogMessage local_b8;
  OstreamView local_a8;
  
  *(undefined ***)this = vftable;
  if (this[0xc] == (CopyingFileInputStream)0x0) {
    *(undefined ***)this = CopyingInputStream::vftable;
  }
  else {
    bVar1 = Close(this);
    if (!bVar1) {
      this_00 = (LogMessage *)
                absl::lts_20240722::log_internal::LogMessage::LogMessage
                          (&local_b8,
                           "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl.cc"
                           ,0x5f,(ErrorTag)0x0);
      local_c8._Mydata = "close() failed: ";
      local_c8._Mysize = 0x10;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_c8);
      pcVar2 = strerror(*(int *)(this + 0x10));
      absl::lts_20240722::log_internal::LogMessage::OstreamView::OstreamView
                (&local_a8,(this_00->data_)._Mypair._Myval2);
      pbVar3 = absl::lts_20240722::log_internal::LogMessage::OstreamView::stream(&local_a8);
      pcVar4 = "(null)";
      if (pcVar2 != (char *)0x0) {
        pcVar4 = pcVar2;
      }
      std::operator<<<std::char_traits<char>_>(pbVar3,pcVar4);
      absl::lts_20240722::log_internal::LogMessage::OstreamView::~OstreamView(&local_a8);
      absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_b8);
    }
    *(undefined ***)this = CopyingInputStream::vftable;
  }
  return;
}

// ~CopyingFileOutputStream @ 14fabf360

/* public: virtual __cdecl
   google::protobuf::io::FileOutputStream::CopyingFileOutputStream::~CopyingFileOutputStream(void)
   __ptr64 */

void __thiscall
google::protobuf::io::FileOutputStream::CopyingFileOutputStream::~CopyingFileOutputStream
          (CopyingFileOutputStream *this)

{
  bool bVar1;
  LogMessage *this_00;
  char *pcVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  char *pcVar4;
  basic_string_view<char,std::char_traits<char>_> local_c8;
  LogMessage local_b8;
  OstreamView local_a8;
  
  *(undefined ***)this = vftable;
  if (this[0xc] == (CopyingFileOutputStream)0x0) {
    *(undefined ***)this = CopyingOutputStream::vftable;
  }
  else {
    bVar1 = Close(this);
    if (!bVar1) {
      this_00 = (LogMessage *)
                absl::lts_20240722::log_internal::LogMessage::LogMessage
                          (&local_b8,
                           "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl.cc"
                           ,0xac,(ErrorTag)0x0);
      local_c8._Mydata = "close() failed: ";
      local_c8._Mysize = 0x10;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_c8);
      pcVar2 = strerror(*(int *)(this + 0x10));
      absl::lts_20240722::log_internal::LogMessage::OstreamView::OstreamView
                (&local_a8,(this_00->data_)._Mypair._Myval2);
      pbVar3 = absl::lts_20240722::log_internal::LogMessage::OstreamView::stream(&local_a8);
      pcVar4 = "(null)";
      if (pcVar2 != (char *)0x0) {
        pcVar4 = pcVar2;
      }
      std::operator<<<std::char_traits<char>_>(pbVar3,pcVar4);
      absl::lts_20240722::log_internal::LogMessage::OstreamView::~OstreamView(&local_a8);
      absl::lts_20240722::log_internal::LogMessage::~LogMessage(&local_b8);
    }
    *(undefined ***)this = CopyingOutputStream::vftable;
  }
  return;
}

// ~CopyingInputStream @ 14fabf460

/* public: virtual __cdecl google::protobuf::io::CopyingInputStream::~CopyingInputStream(void)
   __ptr64 */

void __thiscall
google::protobuf::io::CopyingInputStream::~CopyingInputStream(CopyingInputStream *this)

{
  *(undefined ***)this = vftable;
  return;
}

// ~CopyingIstreamInputStream @ 14fabf480

/* public: virtual __cdecl
   google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream::~CopyingIstreamInputStream(void)
   __ptr64 */

void __thiscall
google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream::~CopyingIstreamInputStream
          (CopyingIstreamInputStream *this)

{
  *(undefined ***)this = CopyingInputStream::vftable;
  return;
}

// ~CopyingOstreamOutputStream @ 14fabf4a0

/* public: virtual __cdecl
   google::protobuf::io::OstreamOutputStream::CopyingOstreamOutputStream::~CopyingOstreamOutputStream(void)
   __ptr64 */

void __thiscall
google::protobuf::io::OstreamOutputStream::CopyingOstreamOutputStream::~CopyingOstreamOutputStream
          (CopyingOstreamOutputStream *this)

{
  *(undefined ***)this = CopyingOutputStream::vftable;
  return;
}

// ~CopyingOutputStream @ 14fabf4c0

/* public: virtual __cdecl google::protobuf::io::CopyingOutputStream::~CopyingOutputStream(void)
   __ptr64 */

void __thiscall
google::protobuf::io::CopyingOutputStream::~CopyingOutputStream(CopyingOutputStream *this)

{
  *(undefined ***)this = vftable;
  return;
}

// ~FileOutputStream @ 14fabf4e0

/* public: virtual __cdecl google::protobuf::io::FileOutputStream::~FileOutputStream(void) __ptr64
    */

void __thiscall google::protobuf::io::FileOutputStream::~FileOutputStream(FileOutputStream *this)

{
  *(undefined ***)this = vftable;
  CopyingOutputStreamAdaptor::Flush((CopyingOutputStreamAdaptor *)this);
  CopyingFileOutputStream::~CopyingFileOutputStream((CopyingFileOutputStream *)(this + 0x30));
  CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor((CopyingOutputStreamAdaptor *)this);
  return;
}

// ~OstreamOutputStream @ 14fabf520

/* public: virtual __cdecl google::protobuf::io::OstreamOutputStream::~OstreamOutputStream(void)
   __ptr64 */

void __thiscall
google::protobuf::io::OstreamOutputStream::~OstreamOutputStream(OstreamOutputStream *this)

{
  *(undefined ***)this = vftable;
  CopyingOutputStreamAdaptor::Flush((CopyingOutputStreamAdaptor *)(this + 0x18));
  CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor
            ((CopyingOutputStreamAdaptor *)(this + 0x18));
  *(undefined ***)(this + 8) = CopyingOutputStream::vftable;
  *(undefined ***)this = ZeroCopyOutputStream::vftable;
  return;
}

// `scalar_deleting_destructor' @ 14fabf570

/* public: virtual void * __ptr64 __cdecl google::protobuf::io::ConcatenatingInputStream::`scalar
   deleting destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::ConcatenatingInputStream::_scalar_deleting_destructor_
          (ConcatenatingInputStream *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `vector_deleting_destructor' @ 14fabf5a0

/* public: virtual void * __ptr64 __cdecl
   google::protobuf::io::FileInputStream::CopyingFileInputStream::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::FileInputStream::CopyingFileInputStream::_vector_deleting_destructor_
          (CopyingFileInputStream *this,uint param_1)

{
  ~CopyingFileInputStream(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14fabf5e0

/* public: virtual void * __ptr64 __cdecl
   google::protobuf::io::FileOutputStream::CopyingFileOutputStream::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::FileOutputStream::CopyingFileOutputStream::_scalar_deleting_destructor_
          (CopyingFileOutputStream *this,uint param_1)

{
  ~CopyingFileOutputStream(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `vector_deleting_destructor' @ 14fabf620

/* public: virtual void * __ptr64 __cdecl google::protobuf::io::CopyingInputStream::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::CopyingInputStream::_vector_deleting_destructor_
          (CopyingInputStream *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14fabf660

/* public: virtual void * __ptr64 __cdecl
   google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream::_scalar_deleting_destructor_
          (CopyingIstreamInputStream *this,uint param_1)

{
  *(undefined ***)this = CopyingInputStream::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14fabf6a0

/* public: virtual void * __ptr64 __cdecl
   google::protobuf::io::OstreamOutputStream::CopyingOstreamOutputStream::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::OstreamOutputStream::CopyingOstreamOutputStream::_vector_deleting_destructor_
          (CopyingOstreamOutputStream *this,uint param_1)

{
  *(undefined ***)this = CopyingOutputStream::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14fabf6e0

/* public: virtual void * __ptr64 __cdecl google::protobuf::io::CopyingOutputStream::`vector
   deleting destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::CopyingOutputStream::_vector_deleting_destructor_
          (CopyingOutputStream *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14fabf720

/* public: virtual void * __ptr64 __cdecl google::protobuf::io::FileInputStream::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::FileInputStream::_scalar_deleting_destructor_
          (FileInputStream *this,uint param_1)

{
  CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor((CopyingInputStreamAdaptor *)(this + 0x20));
  CopyingFileInputStream::~CopyingFileInputStream((CopyingFileInputStream *)(this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14fabf770

/* public: virtual void * __ptr64 __cdecl google::protobuf::io::FileOutputStream::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::FileOutputStream::_scalar_deleting_destructor_
          (FileOutputStream *this,uint param_1)

{
  *(undefined ***)this = vftable;
  CopyingOutputStreamAdaptor::Flush((CopyingOutputStreamAdaptor *)this);
  CopyingFileOutputStream::~CopyingFileOutputStream((CopyingFileOutputStream *)(this + 0x30));
  CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor((CopyingOutputStreamAdaptor *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14fabf7d0

/* public: virtual void * __ptr64 __cdecl google::protobuf::io::IstreamInputStream::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::IstreamInputStream::_scalar_deleting_destructor_
          (IstreamInputStream *this,uint param_1)

{
  CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor((CopyingInputStreamAdaptor *)(this + 0x18));
  *(undefined ***)(this + 8) = CopyingInputStream::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14fabf820

/* public: virtual void * __ptr64 __cdecl google::protobuf::io::OstreamOutputStream::`scalar
   deleting destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::io::OstreamOutputStream::_scalar_deleting_destructor_
          (OstreamOutputStream *this,uint param_1)

{
  *(undefined ***)this = vftable;
  CopyingOutputStreamAdaptor::Flush((CopyingOutputStreamAdaptor *)(this + 0x18));
  CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor
            ((CopyingOutputStreamAdaptor *)(this + 0x18));
  *(undefined ***)(this + 8) = CopyingOutputStream::vftable;
  *(undefined ***)this = ZeroCopyOutputStream::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// BackUp @ 14fabf8a0

/* public: virtual void __cdecl google::protobuf::io::ConcatenatingInputStream::BackUp(int) __ptr64
    */

void __thiscall
google::protobuf::io::ConcatenatingInputStream::BackUp(ConcatenatingInputStream *this,int param_1)

{
  if (0 < *(int *)(this + 0x10)) {
                    /* WARNING: Could not recover jumptable at 0x00014fabf8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)**(undefined8 **)(this + 8) + 0x10))();
    return;
  }
  return;
}

// BackUp @ 14fabf8c0

/* public: virtual void __cdecl google::protobuf::io::FileInputStream::BackUp(int) __ptr64 */

void __thiscall google::protobuf::io::FileInputStream::BackUp(FileInputStream *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014fabf8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this + 0x20) + 0x10))(this + 0x20);
  return;
}

// BackUp @ 14fabf8e0

/* public: virtual void __cdecl google::protobuf::io::IstreamInputStream::BackUp(int) __ptr64 */

void __thiscall
google::protobuf::io::IstreamInputStream::BackUp(IstreamInputStream *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014fabf8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this + 0x18) + 0x10))(this + 0x18);
  return;
}

// BackUp @ 14fabf900

/* public: virtual void __cdecl google::protobuf::io::OstreamOutputStream::BackUp(int) __ptr64 */

void __thiscall
google::protobuf::io::OstreamOutputStream::BackUp(OstreamOutputStream *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014fabf908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this + 0x18) + 0x10))(this + 0x18);
  return;
}

// ByteCount @ 14fabf920

/* public: virtual __int64 __cdecl
   google::protobuf::io::ConcatenatingInputStream::ByteCount(void)const __ptr64 */

__int64 __thiscall
google::protobuf::io::ConcatenatingInputStream::ByteCount(ConcatenatingInputStream *this)

{
  longlong lVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    return *(__int64 *)(this + 0x18);
  }
  lVar1 = (**(code **)(*(longlong *)**(undefined8 **)(this + 8) + 0x20))();
  return lVar1 + *(longlong *)(this + 0x18);
}

// ByteCount @ 14fabf960

/* public: virtual __int64 __cdecl google::protobuf::io::FileInputStream::ByteCount(void)const
   __ptr64 */

__int64 __thiscall google::protobuf::io::FileInputStream::ByteCount(FileInputStream *this)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fabf968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (**(code **)(*(longlong *)(this + 0x20) + 0x20))(this + 0x20);
  return _Var1;
}

// ByteCount @ 14fabf980

/* public: virtual __int64 __cdecl google::protobuf::io::IstreamInputStream::ByteCount(void)const
   __ptr64 */

__int64 __thiscall google::protobuf::io::IstreamInputStream::ByteCount(IstreamInputStream *this)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fabf988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (**(code **)(*(longlong *)(this + 0x18) + 0x20))(this + 0x18);
  return _Var1;
}

// ByteCount @ 14fabf9a0

/* public: virtual __int64 __cdecl google::protobuf::io::OstreamOutputStream::ByteCount(void)const
   __ptr64 */

__int64 __thiscall google::protobuf::io::OstreamOutputStream::ByteCount(OstreamOutputStream *this)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fabf9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (**(code **)(*(longlong *)(this + 0x18) + 0x18))(this + 0x18);
  return _Var1;
}

// Close @ 14fabf9c0

/* public: bool __cdecl google::protobuf::io::FileInputStream::CopyingFileInputStream::Close(void)
   __ptr64 */

bool __thiscall
google::protobuf::io::FileInputStream::CopyingFileInputStream::Close(CopyingFileInputStream *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if (this[0xd] != (CopyingFileInputStream)0x0) {
    local_28._Mydata = "!is_closed_";
    local_28._Mysize = 0xb;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              (&local_18,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl.cc"
               ,0x65,&local_28);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
  }
  iVar1 = *(int *)(this + 8);
  this[0xd] = (CopyingFileInputStream)0x1;
  do {
    iVar2 = win32::close(iVar1);
    if (-1 < iVar2) break;
    piVar3 = _errno();
  } while (*piVar3 == 4);
  if (iVar2 == 0) {
    return true;
  }
  piVar3 = _errno();
  *(int *)(this + 0x10) = *piVar3;
  return false;
}

// Close @ 14fabfa90

/* public: bool __cdecl google::protobuf::io::FileOutputStream::CopyingFileOutputStream::Close(void)
   __ptr64 */

bool __thiscall
google::protobuf::io::FileOutputStream::CopyingFileOutputStream::Close
          (CopyingFileOutputStream *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if (this[0xd] != (CopyingFileOutputStream)0x0) {
    local_28._Mydata = "!is_closed_";
    local_28._Mysize = 0xb;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              (&local_18,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl.cc"
               ,0xb2,&local_28);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
  }
  iVar1 = *(int *)(this + 8);
  this[0xd] = (CopyingFileOutputStream)0x1;
  do {
    iVar2 = win32::close(iVar1);
    if (-1 < iVar2) break;
    piVar3 = _errno();
  } while (*piVar3 == 4);
  if (iVar2 == 0) {
    return true;
  }
  piVar3 = _errno();
  *(int *)(this + 0x10) = *piVar3;
  return false;
}

// Close @ 14fabfb60

/* public: bool __cdecl google::protobuf::io::FileInputStream::Close(void) __ptr64 */

bool __thiscall google::protobuf::io::FileInputStream::Close(FileInputStream *this)

{
  bool bVar1;
  
  bVar1 = CopyingFileInputStream::Close((CopyingFileInputStream *)(this + 8));
  return bVar1;
}

// Close @ 14fabfb70

/* public: bool __cdecl google::protobuf::io::FileOutputStream::Close(void) __ptr64 */

bool __thiscall google::protobuf::io::FileOutputStream::Close(FileOutputStream *this)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = CopyingOutputStreamAdaptor::Flush((CopyingOutputStreamAdaptor *)this);
  bVar2 = CopyingFileOutputStream::Close((CopyingFileOutputStream *)(this + 0x30));
  if ((bVar2) && (bVar1)) {
    return true;
  }
  return false;
}

// Guard @ 14fabfbc0

/* public: static char const * __ptr64 __cdecl absl::lts_20240722::log_internal::NullGuard<char *
   __ptr64>::Guard(char const * __ptr64) */

char * __cdecl absl::lts_20240722::log_internal::NullGuard<char*___ptr64>::Guard(char *param_1)

{
  if (param_1 == (char *)0x0) {
    param_1 = "(null)";
  }
  return param_1;
}

// Next @ 14fabfbe0

/* public: virtual bool __cdecl google::protobuf::io::ConcatenatingInputStream::Next(void const *
   __ptr64 * __ptr64,int * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::ConcatenatingInputStream::Next
          (ConcatenatingInputStream *this,void **param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(this + 0x10);
  while( true ) {
    if (iVar1 < 1) {
      return false;
    }
    cVar2 = (**(code **)(*(longlong *)**(undefined8 **)(this + 8) + 8))
                      ((longlong *)**(undefined8 **)(this + 8),param_1,param_2);
    if (cVar2 != '\0') break;
    lVar3 = (**(code **)(*(longlong *)**(undefined8 **)(this + 8) + 0x20))();
    *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + lVar3;
    *(longlong *)(this + 8) = *(longlong *)(this + 8) + 8;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
    iVar1 = *(int *)(this + 0x10);
  }
  return true;
}

// Next @ 14fabfc60

/* public: virtual bool __cdecl google::protobuf::io::FileInputStream::Next(void const * __ptr64 *
   __ptr64,int * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::FileInputStream::Next(FileInputStream *this,void **param_1,int *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fabfc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this + 0x20) + 8))(this + 0x20);
  return (bool)uVar1;
}

// Next @ 14fabfc80

/* public: virtual bool __cdecl google::protobuf::io::IstreamInputStream::Next(void const * __ptr64
   * __ptr64,int * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::IstreamInputStream::Next(IstreamInputStream *this,void **param_1,int *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fabfc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this + 0x18) + 8))(this + 0x18);
  return (bool)uVar1;
}

// Next @ 14fabfca0

/* public: virtual bool __cdecl google::protobuf::io::OstreamOutputStream::Next(void * __ptr64 *
   __ptr64,int * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::io::OstreamOutputStream::Next
          (OstreamOutputStream *this,void **param_1,int *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fabfca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this + 0x18) + 8))(this + 0x18);
  return (bool)uVar1;
}

// Read @ 14fabfcc0

/* public: virtual int __cdecl
   google::protobuf::io::FileInputStream::CopyingFileInputStream::Read(void * __ptr64,int) __ptr64
    */

int __thiscall
google::protobuf::io::FileInputStream::CopyingFileInputStream::Read
          (CopyingFileInputStream *this,void *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if (this[0xd] != (CopyingFileInputStream)0x0) {
    local_28._Mydata = "!is_closed_";
    local_28._Mysize = 0xb;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              (&local_18,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl.cc"
               ,0x74,&local_28);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
  }
  do {
    iVar1 = win32::read(*(int *)(this + 8),param_1,(longlong)param_2);
    if (-1 < iVar1) {
      return iVar1;
    }
    piVar2 = _errno();
  } while (*piVar2 == 4);
  piVar2 = _errno();
  *(int *)(this + 0x10) = *piVar2;
  return iVar1;
}

// Read @ 14fabfd90

/* public: virtual int __cdecl
   google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream::Read(void * __ptr64,int)
   __ptr64 */

int __thiscall
google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream::Read
          (CopyingIstreamInputStream *this,void *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  __int64 _Var3;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (*(basic_istream<char,std::char_traits<char>_> **)(this + 8),param_1,(longlong)param_2);
  _Var3 = std::basic_istream<char,std::char_traits<char>_>::gcount
                    (*(basic_istream<char,std::char_traits<char>_> **)(this + 8));
  iVar2 = (int)_Var3;
  if (iVar2 == 0) {
    bVar1 = std::ios_base::fail((ios_base *)
                                ((longlong)*(int *)(**(longlong **)(this + 8) + 4) +
                                (longlong)*(longlong **)(this + 8)));
    if (bVar1) {
      bVar1 = std::ios_base::eof((ios_base *)
                                 ((longlong)*(int *)(**(longlong **)(this + 8) + 4) +
                                 (longlong)*(longlong **)(this + 8)));
      if (!bVar1) {
        iVar2 = -1;
      }
    }
  }
  return iVar2;
}

// Skip @ 14fabfe10

/* public: virtual bool __cdecl google::protobuf::io::ConcatenatingInputStream::Skip(int) __ptr64 */

bool __thiscall
google::protobuf::io::ConcatenatingInputStream::Skip(ConcatenatingInputStream *this,int param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(this + 0x10);
  while( true ) {
    if (iVar2 < 1) {
      return false;
    }
    iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(this + 8) + 0x20))();
    cVar1 = (**(code **)(*(longlong *)**(undefined8 **)(this + 8) + 0x18))
                      ((longlong *)**(undefined8 **)(this + 8),param_1);
    if (cVar1 != '\0') break;
    lVar3 = (**(code **)(*(longlong *)**(undefined8 **)(this + 8) + 0x20))();
    *(longlong *)(this + 8) = *(longlong *)(this + 8) + 8;
    *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + lVar3;
    param_1 = (param_1 + iVar2) - (int)lVar3;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
    iVar2 = *(int *)(this + 0x10);
  }
  return true;
}

// Skip @ 14fabfeb0

/* public: virtual int __cdecl
   google::protobuf::io::FileInputStream::CopyingFileInputStream::Skip(int) __ptr64 */

int __thiscall
google::protobuf::io::FileInputStream::CopyingFileInputStream::Skip
          (CopyingFileInputStream *this,int param_1)

{
  int iVar1;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if (this[0xd] == (CopyingFileInputStream)0x0) {
    this[0x14] = (CopyingFileInputStream)0x1;
    iVar1 = CopyingInputStream::Skip((CopyingInputStream *)this,param_1);
    return iVar1;
  }
  local_28._Mydata = "!is_closed_";
  local_28._Mysize = 0xb;
  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
            (&local_18,
             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl.cc"
             ,0x84,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// Skip @ 14fabff40

/* public: virtual bool __cdecl google::protobuf::io::FileInputStream::Skip(int) __ptr64 */

bool __thiscall google::protobuf::io::FileInputStream::Skip(FileInputStream *this,int param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fabff48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this + 0x20) + 0x18))(this + 0x20);
  return (bool)uVar1;
}

// Skip @ 14fabff60

/* public: virtual bool __cdecl google::protobuf::io::IstreamInputStream::Skip(int) __ptr64 */

bool __thiscall google::protobuf::io::IstreamInputStream::Skip(IstreamInputStream *this,int param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fabff68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this + 0x18) + 0x18))(this + 0x18);
  return (bool)uVar1;
}

// Write @ 14fabff80

/* public: virtual bool __cdecl
   google::protobuf::io::FileOutputStream::CopyingFileOutputStream::Write(void const * __ptr64,int)
   __ptr64 */

bool __thiscall
google::protobuf::io::FileOutputStream::CopyingFileOutputStream::Write
          (CopyingFileOutputStream *this,void *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  basic_string_view<char,std::char_traits<char>_> local_48;
  LogMessageFatal local_38;
  
  iVar3 = 0;
  if (this[0xd] != (CopyingFileOutputStream)0x0) {
    local_48._Mydata = "!is_closed_";
    local_48._Mysize = 0xb;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              (&local_38,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\io\\zero_copy_stream_impl.cc"
               ,0xc2,&local_48);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_38);
  }
  if (0 < param_2) {
    do {
      do {
        iVar1 = win32::write(*(int *)(this + 8),(void *)((longlong)iVar3 + (longlong)param_1),
                             (longlong)(param_2 - iVar3));
        if (-1 < iVar1) break;
        piVar2 = _errno();
      } while (*piVar2 == 4);
      if (iVar1 < 1) {
        if (iVar1 < 0) {
          piVar2 = _errno();
          *(int *)(this + 0x10) = *piVar2;
        }
        return false;
      }
      iVar3 = iVar3 + iVar1;
    } while (iVar3 < param_2);
  }
  return true;
}

// Write @ 14fac0080

/* public: virtual bool __cdecl
   google::protobuf::io::OstreamOutputStream::CopyingOstreamOutputStream::Write(void const *
   __ptr64,int) __ptr64 */

bool __thiscall
google::protobuf::io::OstreamOutputStream::CopyingOstreamOutputStream::Write
          (CopyingOstreamOutputStream *this,void *param_1,int param_2)

{
  bool bVar1;
  
  std::basic_ostream<char,std::char_traits<char>_>::write
            (*(basic_ostream<char,std::char_traits<char>_> **)(this + 8),param_1,(longlong)param_2);
                    /* WARNING: Could not recover jumptable at 0x00014fac00a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = std::ios_base::good((ios_base *)
                              ((longlong)*(int *)(**(longlong **)(this + 8) + 4) +
                              (longlong)*(longlong **)(this + 8)));
  return bVar1;
}

// FUN_14fac00c0 @ 14fac00c0

int FUN_14fac00c0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  do {
    iVar1 = google::protobuf::io::win32::close(param_1);
    if (-1 < iVar1) {
      return iVar1;
    }
    piVar2 = _errno();
  } while (*piVar2 == 4);
  return iVar1;
}

