// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 3

// Write<TStringView<char>_> @ 144587030

void __cdecl
UE::Logging::Private::FLogField::Write<TStringView<char>_>(FCbWriter *param_1,void *param_2)

{
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = *(uchar **)param_2;
  local_18.Size = (int)*(undefined8 *)((longlong)param_2 + 8);
  FCbWriter::SetNameOrAddString(param_1,&local_18);
  return;
}

// Write<TStringView<wchar_t>_> @ 144587070

void __cdecl
UE::Logging::Private::FLogField::Write<TStringView<wchar_t>_>(FCbWriter *param_1,void *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = *(wchar_t **)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  FCbWriter::AddString(param_1,&local_18);
  return;
}

// Write<FIoStatus> @ 1445870a0

void __cdecl UE::Logging::Private::FLogField::Write<FIoStatus>(FCbWriter *param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  FString *pFVar3;
  size_t sVar4;
  wchar_t *_Str;
  TStringView<char8_t> TStack_38;
  TStringView<wchar_t> TStack_28;
  TStringView<wchar_t> TStack_18;
  
  FCbWriter::BeginObject(param_1);
  TStack_38.Size = 5;
  TStack_28.DataPtr = L"IoStatus";
  TStack_28.Size = 8;
  TStack_38.DataPtr = "$type";
  FCbWriter::SetName(param_1,&TStack_38);
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&TStack_28);
  pFVar3 = FIoStatus::ToString(param_2,(FString *)&TStack_18);
  TStack_28.Size = 5;
  TStack_38.DataPtr = (uchar *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  TStack_38.Size = iVar1 + -1;
  if (iVar1 == 0) {
    TStack_38.Size = 0;
  }
  TStack_28.DataPtr = L"$text";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&TStack_28);
  TStack_28.DataPtr = (wchar_t *)TStack_38.DataPtr;
  TStack_28.Size = TStack_38.Size;
  TStack_28._12_4_ = TStack_38._12_4_;
  FCbWriter::AddString(param_1,&TStack_28);
  if (TStack_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(TStack_18.DataPtr);
  }
  uVar2 = *(uint *)((longlong)param_2 + 8);
  TStack_28.DataPtr = L"ErrorCode";
  TStack_28.Size = 9;
  TStack_18.DataPtr = L"ErrorCode";
  TStack_18.Size = 9;
  TStack_18._12_4_ = TStack_28._12_4_;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&TStack_18);
  FCbWriter::AddInteger(param_1,uVar2);
  uVar2 = *(uint *)((longlong)param_2 + 0xc);
  TStack_28.DataPtr = L"SystemErrorCode";
  TStack_28.Size = 0xf;
  TStack_18.DataPtr = L"SystemErrorCode";
  TStack_18.Size = 0xf;
  TStack_18._12_4_ = TStack_28._12_4_;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&TStack_18);
  FCbWriter::AddInteger(param_1,uVar2);
  _Str = *(wchar_t **)param_2;
  if (_Str == (wchar_t *)0x0) {
    _Str = L"";
  }
  TStack_38.DataPtr = (uchar *)_Str;
  sVar4 = wcslen(_Str);
  TStack_38.Size = (int)sVar4;
  TStack_28.Size = 0xc;
  TStack_28.DataPtr = L"ErrorMessage";
  TStack_18.DataPtr = L"ErrorMessage";
  TStack_18.Size = 0xc;
  TStack_18._12_4_ = TStack_28._12_4_;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&TStack_18);
  TStack_18.DataPtr = (wchar_t *)TStack_38.DataPtr;
  TStack_18.Size = TStack_38.Size;
  TStack_18._12_4_ = TStack_38._12_4_;
  FCbWriter::AddString(param_1,&TStack_18);
  FCbWriter::EndObject(param_1);
  return;
}

