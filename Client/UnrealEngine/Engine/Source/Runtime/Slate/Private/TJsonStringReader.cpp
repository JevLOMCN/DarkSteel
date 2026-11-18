// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// Create @ 142721d30

TSharedRef<TJsonStringReader<wchar_t>,1> * __cdecl
TJsonStringReader<wchar_t>::Create
          (TSharedRef<TJsonStringReader<wchar_t>,1> *__return_storage_ptr__,FString *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  FBufferReader *pFVar4;
  FBufferReader *pFVar5;
  FBufferReader *this;
  TRawPtrProxy<TJsonStringReader<wchar_t>_> local_res8;
  undefined8 local_28 [2];
  
  pFVar4 = ::operator_new(0x88);
  this = (FBufferReader *)0x0;
  local_res8.Object = (TJsonStringReader<wchar_t> *)this;
  if (pFVar4 == (FBufferReader *)0x0) goto LAB_142721eb4;
  *(undefined8 *)&pFVar4->field_0x8 = 0;
  *(undefined8 *)&pFVar4->field_0x10 = 0;
  *(undefined8 *)&pFVar4->field_0x20 = 0;
  *(undefined4 *)&pFVar4->field_0x18 = 0;
  *(undefined8 *)&pFVar4->field_0x28 = 0;
  *(undefined8 *)&pFVar4->field_0x30 = 0;
  *(undefined8 *)&pFVar4->field_0x38 = 0;
  *(undefined8 *)&pFVar4->field_0x40 = 0;
  *(undefined8 *)&pFVar4->field_0x48 = 0;
  *(undefined8 *)&pFVar4->field_0x50 = 0;
  *(undefined8 *)&pFVar4->field_0x58 = 0;
  *(undefined8 *)&pFVar4->field_0x60 = 1;
  *(undefined2 *)&pFVar4->field_0x68 = 0;
  *(undefined ***)pFVar4 = &___7__TJsonStringReader__W__6B_;
  ::FString::FString((FString *)&pFVar4->field_0x70,param_1);
  iVar2 = *(int *)&pFVar4->field_0x78;
  puVar1 = &pFVar4->field_0x80;
  *(undefined8 *)puVar1 = 0;
  local_res8.Object = (TJsonStringReader<wchar_t> *)pFVar4;
  if (iVar2 < 2) goto LAB_142721eb4;
  pvVar3 = *(void **)&pFVar4->field_0x70;
  pFVar5 = ::operator_new(0xb0);
  if (pFVar5 != (FBufferReader *)0x0) {
    this = FBufferReader::FBufferReader(pFVar5,pvVar3,(longlong)(iVar2 + -1) * 2,false,false);
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
      goto LAB_142721e94;
    }
  }
  else {
    pFVar5 = *(FBufferReader **)puVar1;
    *(FBufferReader **)puVar1 = this;
    if (pFVar5 != (FBufferReader *)0x0) {
      *(undefined ***)pFVar5 = &___7FBufferReader__6B_;
      if (pFVar5->field_0xa8 != '\0') {
        FMemory::Free(*(void **)&pFVar5->field_0x90);
        *(undefined8 *)&pFVar5->field_0x90 = 0;
      }
      *(undefined ***)pFVar5 = &___7FBufferReaderBase__6B_;
      FArchive::~FArchive((FArchive *)pFVar5);
      this = pFVar5;
LAB_142721e94:
      ::operator_delete(this,0xb0);
    }
  }
  *(undefined8 *)&pFVar4->field_0x20 = *(undefined8 *)puVar1;
LAB_142721eb4:
  TSharedRef<TJsonStringReader<wchar_t>,1>::
  TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

