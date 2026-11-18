// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 6

// ~TJsonStringViewReader<char> @ 141dc5b30

void __thiscall
TJsonStringViewReader<char>::~TJsonStringViewReader<char>(TJsonStringViewReader<char> *this)

{
  FBufferReader *this_00;
  
  this_00 = (this->Reader).Ptr;
  if (this_00 != (FBufferReader *)0x0) {
    *(undefined ***)this_00 = &___7FBufferReader__6B_;
    if (this_00->field_0xa8 != '\0') {
      FMemory::Free(*(void **)&this_00->field_0x90);
      *(undefined8 *)&this_00->field_0x90 = 0;
    }
    *(undefined ***)this_00 = &___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)this_00);
    ::operator_delete(this_00,0xb0);
  }
  this->_padding_ = (longlong)&___7__TJsonReader_D__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// ~TJsonStringViewReader<char8_t> @ 141dc5bf0

void __thiscall
TJsonStringViewReader<char8_t>::~TJsonStringViewReader<char8_t>
          (TJsonStringViewReader<char8_t> *this)

{
  FBufferReader *this_00;
  
  this_00 = (this->Reader).Ptr;
  if (this_00 != (FBufferReader *)0x0) {
    *(undefined ***)this_00 = &___7FBufferReader__6B_;
    if (this_00->field_0xa8 != '\0') {
      FMemory::Free(*(void **)&this_00->field_0x90);
      *(undefined8 *)&this_00->field_0x90 = 0;
    }
    *(undefined ***)this_00 = &___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)this_00);
    ::operator_delete(this_00,0xb0);
  }
  this->_padding_ = (longlong)&___7__TJsonReader__Q__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// ~TJsonStringViewReader<wchar_t> @ 141dc5cb0

void __thiscall
TJsonStringViewReader<wchar_t>::~TJsonStringViewReader<wchar_t>
          (TJsonStringViewReader<wchar_t> *this)

{
  FBufferReader *this_00;
  
  this_00 = (this->Reader).Ptr;
  if (this_00 != (FBufferReader *)0x0) {
    *(undefined ***)this_00 = &___7FBufferReader__6B_;
    if (this_00->field_0xa8 != '\0') {
      FMemory::Free(*(void **)&this_00->field_0x90);
      *(undefined8 *)&this_00->field_0x90 = 0;
    }
    *(undefined ***)this_00 = &___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)this_00);
    ::operator_delete(this_00,0xb0);
  }
  this->_padding_ = (longlong)&___7__TJsonReader__W__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// Create @ 141dd0e90

TSharedRef<TJsonStringViewReader<char>,1> * __cdecl
TJsonStringViewReader<char>::Create
          (TSharedRef<TJsonStringViewReader<char>,1> *__return_storage_ptr__,
          TStringView<char> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  undefined4 uVar5;
  FBufferReader *pFVar6;
  FBufferReader *pFVar7;
  FBufferReader *this;
  TRawPtrProxy<TJsonStringViewReader<char>_> local_res8;
  undefined8 local_28 [2];
  
  pFVar6 = ::operator_new(0x88);
  this = (FBufferReader *)0x0;
  local_res8.Object = (TJsonStringViewReader<char> *)this;
  if (pFVar6 == (FBufferReader *)0x0) goto LAB_141dd100a;
  pcVar4 = param_1->DataPtr;
  iVar2 = param_1->Size;
  uVar5 = *(undefined4 *)&param_1->field_0xc;
  *(undefined8 *)&pFVar6->field_0x8 = 0;
  *(undefined8 *)&pFVar6->field_0x10 = 0;
  *(undefined8 *)&pFVar6->field_0x20 = 0;
  *(undefined4 *)&pFVar6->field_0x18 = 0;
  *(undefined8 *)&pFVar6->field_0x28 = 0;
  *(undefined8 *)&pFVar6->field_0x30 = 0;
  *(undefined8 *)&pFVar6->field_0x38 = 0;
  *(undefined8 *)&pFVar6->field_0x40 = 0;
  *(undefined8 *)&pFVar6->field_0x48 = 0;
  *(undefined8 *)&pFVar6->field_0x50 = 0;
  *(undefined8 *)&pFVar6->field_0x58 = 0;
  *(undefined8 *)&pFVar6->field_0x60 = 1;
  *(undefined2 *)&pFVar6->field_0x68 = 0;
  *(char **)&pFVar6->field_0x70 = pcVar4;
  *(int *)&pFVar6->field_0x78 = iVar2;
  *(undefined4 *)&pFVar6->field_0x7c = uVar5;
  puVar1 = &pFVar6->field_0x80;
  *(undefined ***)pFVar6 = &___7__TJsonStringViewReader_D__6B_;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&pFVar6->field_0x78;
  local_res8.Object = (TJsonStringViewReader<char> *)pFVar6;
  if (iVar2 == 0) goto LAB_141dd100a;
  pvVar3 = *(void **)&pFVar6->field_0x70;
  pFVar7 = ::operator_new(0xb0);
  if (pFVar7 != (FBufferReader *)0x0) {
    this = FBufferReader::FBufferReader(pFVar7,pvVar3,(longlong)iVar2,false,false);
  }
  if ((undefined8 *)puVar1 == local_28) {
    if (this != (FBufferReader *)0x0) {
      *(undefined ***)this = &___7FBufferReader__6B_;
      if (this->field_0xa8 != '\0') {
        FMemory::Free(*(void **)&this->field_0x90);
        *(undefined8 *)&this->field_0x90 = 0;
      }
      *(undefined ***)this = &___7FBufferReaderBase__6B_;
      FArchive::~FArchive((FArchive *)this);
      goto LAB_141dd0fea;
    }
  }
  else {
    pFVar7 = *(FBufferReader **)puVar1;
    *(FBufferReader **)puVar1 = this;
    if (pFVar7 != (FBufferReader *)0x0) {
      *(undefined ***)pFVar7 = &___7FBufferReader__6B_;
      if (pFVar7->field_0xa8 != '\0') {
        FMemory::Free(*(void **)&pFVar7->field_0x90);
        *(undefined8 *)&pFVar7->field_0x90 = 0;
      }
      *(undefined ***)pFVar7 = &___7FBufferReaderBase__6B_;
      FArchive::~FArchive((FArchive *)pFVar7);
      this = pFVar7;
LAB_141dd0fea:
      ::operator_delete(this,0xb0);
    }
  }
  *(undefined8 *)&pFVar6->field_0x20 = *(undefined8 *)puVar1;
LAB_141dd100a:
  TSharedRef<TJsonStringViewReader<char>,1>::
  TSharedRef<TJsonStringViewReader<char>,1><TJsonStringViewReader<char>_>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// Create @ 141dd1040

TSharedRef<TJsonStringViewReader<char8_t>,1> * __cdecl
TJsonStringViewReader<char8_t>::Create
          (TSharedRef<TJsonStringViewReader<char8_t>,1> *__return_storage_ptr__,
          TStringView<char8_t> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  uchar *puVar4;
  undefined4 uVar5;
  FBufferReader *pFVar6;
  FBufferReader *pFVar7;
  FBufferReader *this;
  TRawPtrProxy<TJsonStringViewReader<char8_t>_> local_res8;
  undefined8 local_28 [2];
  
  pFVar6 = ::operator_new(0x88);
  this = (FBufferReader *)0x0;
  local_res8.Object = (TJsonStringViewReader<char8_t> *)this;
  if (pFVar6 == (FBufferReader *)0x0) goto LAB_141dd11ba;
  puVar4 = param_1->DataPtr;
  iVar2 = param_1->Size;
  uVar5 = *(undefined4 *)&param_1->field_0xc;
  *(undefined8 *)&pFVar6->field_0x8 = 0;
  *(undefined8 *)&pFVar6->field_0x10 = 0;
  *(undefined8 *)&pFVar6->field_0x20 = 0;
  *(undefined4 *)&pFVar6->field_0x18 = 0;
  *(undefined8 *)&pFVar6->field_0x28 = 0;
  *(undefined8 *)&pFVar6->field_0x30 = 0;
  *(undefined8 *)&pFVar6->field_0x38 = 0;
  *(undefined8 *)&pFVar6->field_0x40 = 0;
  *(undefined8 *)&pFVar6->field_0x48 = 0;
  *(undefined8 *)&pFVar6->field_0x50 = 0;
  *(undefined8 *)&pFVar6->field_0x58 = 0;
  *(undefined8 *)&pFVar6->field_0x60 = 1;
  *(undefined2 *)&pFVar6->field_0x68 = 0;
  *(uchar **)&pFVar6->field_0x70 = puVar4;
  *(int *)&pFVar6->field_0x78 = iVar2;
  *(undefined4 *)&pFVar6->field_0x7c = uVar5;
  puVar1 = &pFVar6->field_0x80;
  *(undefined ***)pFVar6 = &___7__TJsonStringViewReader__Q__6B_;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&pFVar6->field_0x78;
  local_res8.Object = (TJsonStringViewReader<char8_t> *)pFVar6;
  if (iVar2 == 0) goto LAB_141dd11ba;
  pvVar3 = *(void **)&pFVar6->field_0x70;
  pFVar7 = ::operator_new(0xb0);
  if (pFVar7 != (FBufferReader *)0x0) {
    this = FBufferReader::FBufferReader(pFVar7,pvVar3,(longlong)iVar2,false,false);
  }
  if ((undefined8 *)puVar1 == local_28) {
    if (this != (FBufferReader *)0x0) {
      *(undefined ***)this = &___7FBufferReader__6B_;
      if (this->field_0xa8 != '\0') {
        FMemory::Free(*(void **)&this->field_0x90);
        *(undefined8 *)&this->field_0x90 = 0;
      }
      *(undefined ***)this = &___7FBufferReaderBase__6B_;
      FArchive::~FArchive((FArchive *)this);
      goto LAB_141dd119a;
    }
  }
  else {
    pFVar7 = *(FBufferReader **)puVar1;
    *(FBufferReader **)puVar1 = this;
    if (pFVar7 != (FBufferReader *)0x0) {
      *(undefined ***)pFVar7 = &___7FBufferReader__6B_;
      if (pFVar7->field_0xa8 != '\0') {
        FMemory::Free(*(void **)&pFVar7->field_0x90);
        *(undefined8 *)&pFVar7->field_0x90 = 0;
      }
      *(undefined ***)pFVar7 = &___7FBufferReaderBase__6B_;
      FArchive::~FArchive((FArchive *)pFVar7);
      this = pFVar7;
LAB_141dd119a:
      ::operator_delete(this,0xb0);
    }
  }
  *(undefined8 *)&pFVar6->field_0x20 = *(undefined8 *)puVar1;
LAB_141dd11ba:
  TSharedRef<TJsonStringViewReader<char8_t>,1>::
  TSharedRef<TJsonStringViewReader<char8_t>,1><TJsonStringViewReader<char8_t>_>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// Create @ 141dd11f0

TSharedRef<TJsonStringViewReader<wchar_t>,1> * __cdecl
TJsonStringViewReader<wchar_t>::Create
          (TSharedRef<TJsonStringViewReader<wchar_t>,1> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  FBufferReader *pFVar6;
  FBufferReader *pFVar7;
  FBufferReader *this;
  TRawPtrProxy<TJsonStringViewReader<wchar_t>_> local_res8;
  undefined8 local_28 [2];
  
  pFVar6 = ::operator_new(0x88);
  this = (FBufferReader *)0x0;
  local_res8.Object = (TJsonStringViewReader<wchar_t> *)this;
  if (pFVar6 == (FBufferReader *)0x0) goto LAB_141dd136d;
  pwVar4 = param_1->DataPtr;
  iVar2 = param_1->Size;
  uVar5 = *(undefined4 *)&param_1->field_0xc;
  *(undefined8 *)&pFVar6->field_0x8 = 0;
  *(undefined8 *)&pFVar6->field_0x10 = 0;
  *(undefined8 *)&pFVar6->field_0x20 = 0;
  *(undefined4 *)&pFVar6->field_0x18 = 0;
  *(undefined8 *)&pFVar6->field_0x28 = 0;
  *(undefined8 *)&pFVar6->field_0x30 = 0;
  *(undefined8 *)&pFVar6->field_0x38 = 0;
  *(undefined8 *)&pFVar6->field_0x40 = 0;
  *(undefined8 *)&pFVar6->field_0x48 = 0;
  *(undefined8 *)&pFVar6->field_0x50 = 0;
  *(undefined8 *)&pFVar6->field_0x58 = 0;
  *(undefined8 *)&pFVar6->field_0x60 = 1;
  *(undefined2 *)&pFVar6->field_0x68 = 0;
  *(wchar_t **)&pFVar6->field_0x70 = pwVar4;
  *(int *)&pFVar6->field_0x78 = iVar2;
  *(undefined4 *)&pFVar6->field_0x7c = uVar5;
  puVar1 = &pFVar6->field_0x80;
  *(undefined ***)pFVar6 = &___7__TJsonStringViewReader__W__6B_;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&pFVar6->field_0x78;
  local_res8.Object = (TJsonStringViewReader<wchar_t> *)pFVar6;
  if (iVar2 == 0) goto LAB_141dd136d;
  pvVar3 = *(void **)&pFVar6->field_0x70;
  pFVar7 = ::operator_new(0xb0);
  if (pFVar7 != (FBufferReader *)0x0) {
    this = FBufferReader::FBufferReader(pFVar7,pvVar3,(longlong)iVar2 * 2,false,false);
  }
  if ((undefined8 *)puVar1 == local_28) {
    if (this != (FBufferReader *)0x0) {
      *(undefined ***)this = &___7FBufferReader__6B_;
      if (this->field_0xa8 != '\0') {
        FMemory::Free(*(void **)&this->field_0x90);
        *(undefined8 *)&this->field_0x90 = 0;
      }
      *(undefined ***)this = &___7FBufferReaderBase__6B_;
      FArchive::~FArchive((FArchive *)this);
      goto LAB_141dd134d;
    }
  }
  else {
    pFVar7 = *(FBufferReader **)puVar1;
    *(FBufferReader **)puVar1 = this;
    if (pFVar7 != (FBufferReader *)0x0) {
      *(undefined ***)pFVar7 = &___7FBufferReader__6B_;
      if (pFVar7->field_0xa8 != '\0') {
        FMemory::Free(*(void **)&pFVar7->field_0x90);
        *(undefined8 *)&pFVar7->field_0x90 = 0;
      }
      *(undefined ***)pFVar7 = &___7FBufferReaderBase__6B_;
      FArchive::~FArchive((FArchive *)pFVar7);
      this = pFVar7;
LAB_141dd134d:
      ::operator_delete(this,0xb0);
    }
  }
  *(undefined8 *)&pFVar6->field_0x20 = *(undefined8 *)puVar1;
LAB_141dd136d:
  TSharedRef<TJsonStringViewReader<wchar_t>,1>::
  TSharedRef<TJsonStringViewReader<wchar_t>,1><TJsonStringViewReader<wchar_t>_>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

