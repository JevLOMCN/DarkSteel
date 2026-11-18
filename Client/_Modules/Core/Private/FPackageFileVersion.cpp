// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// CreateUE4Version @ 141a7d2b0

FPackageFileVersion __cdecl FPackageFileVersion::CreateUE4Version(int param_1)

{
  code *pcVar1;
  bool bVar2;
  FPackageFileVersion FVar3;
  int in_register_0000000c;
  int in_EDX;
  
  FVar3.FileVersionUE5 = in_register_0000000c;
  FVar3.FileVersionUE4 = param_1;
  if (0x20a < in_EDX) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Version <= EUnrealEngineObjectUE4Version::VER_UE4_AUTOMATIC_VERSION",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\ObjectVersion.cpp"
                       ,0x1a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FPackageFileVersion)(*pcVar1)();
      return FVar3;
    }
  }
  *(int *)FVar3 = in_EDX;
  *(undefined4 *)((longlong)FVar3 + 4) = 0;
  return FVar3;
}

// CreateUE4Version @ 141a7d310

/* WARNING: Enum "EUnrealEngineObjectUE4Version": Some values do not have unique names */

FPackageFileVersion __cdecl
FPackageFileVersion::CreateUE4Version(EUnrealEngineObjectUE4Version param_1)

{
  code *pcVar1;
  bool bVar2;
  FPackageFileVersion FVar3;
  int in_register_0000000c;
  int in_EDX;
  
  FVar3.FileVersionUE5 = in_register_0000000c;
  FVar3.FileVersionUE4 = param_1;
  if (0x20a < in_EDX) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Version <= EUnrealEngineObjectUE4Version::VER_UE4_AUTOMATIC_VERSION",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\ObjectVersion.cpp"
                       ,0x20,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FPackageFileVersion)(*pcVar1)();
      return FVar3;
    }
  }
  *(int *)FVar3 = in_EDX;
  *(undefined4 *)((longlong)FVar3 + 4) = 0;
  return FVar3;
}

// TryRead @ 141a98340

bool __thiscall FPackageFileVersion::TryRead(FPackageFileVersion *this,FCbFieldView *param_1)

{
  FCbFieldView *pFVar1;
  ulong64 uVar2;
  undefined8 local_48;
  void *pvStack_40;
  FCbFieldView local_38;
  char *local_28;
  void *pvStack_20;
  FCbFieldView local_18;
  
  pvStack_40._0_4_ = 10;
  local_48 = "ue4version";
  pFVar1 = FCbFieldView::operator[]
                     (param_1,(FCbFieldView *)&local_28,(TStringView<char8_t> *)&local_48);
  local_38.TypeWithFlags = pFVar1->TypeWithFlags;
  local_38.Error = pFVar1->Error;
  local_38._2_2_ = *(undefined2 *)&pFVar1->field_0x2;
  local_38.NameLen = pFVar1->NameLen;
  local_38.Value = pFVar1->Value;
  uVar2 = FCbFieldView::AsInteger(&local_38,0,(FIntegerParams)0x3f);
  this->FileVersionUE4 = (int)uVar2;
  pvStack_40 = (void *)CONCAT44(pvStack_40._4_4_,10);
  local_48 = "ue5version";
  local_28 = "ue5version";
  pvStack_20 = pvStack_40;
  pFVar1 = FCbFieldView::operator[](param_1,&local_18,(TStringView<char8_t> *)&local_28);
  local_48 = *(char **)pFVar1;
  pvStack_40 = pFVar1->Value;
  uVar2 = FCbFieldView::AsInteger((FCbFieldView *)&local_48,0,(FIntegerParams)0x3f);
  this->FileVersionUE5 = (int)uVar2;
  return local_48._1_1_ == None && local_38.Error == None;
}

// Write @ 141a9a220

FCbWriter * __thiscall FPackageFileVersion::Write(FPackageFileVersion *this,FCbWriter *param_1)

{
  TStringView<char8_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_18.Size = 10;
  local_18.DataPtr = "ue4version";
  FCbWriter::SetNameOrAddString(param_1,&local_18);
  FCbWriter::AddInteger(param_1,this->FileVersionUE4);
  local_18.Size = 10;
  local_18.DataPtr = "ue5version";
  FCbWriter::SetNameOrAddString(param_1,&local_18);
  FCbWriter::AddInteger(param_1,this->FileVersionUE5);
  FCbWriter::EndObject(param_1);
  return param_1;
}

