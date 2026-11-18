// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 12

// AsString<1> @ 141e6cac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FixedTagPrivate::FValueHandle::AsString<1>(FValueHandle *this,FString *__return_storage_ptr__)

{
  FStore *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FDisplayNameEntryId *pFVar6;
  FName *this_01;
  FNumberlessExportPath *this_02;
  FAssetRegistryExportPath *this_03;
  FMarshalledText *pFVar7;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> *pTVar8;
  char *pcVar9;
  undefined1 auStack_188 [32];
  FName local_168;
  FString local_160;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar3 = this->StoreIndex;
  if (((0x3fff < uVar3) || (GStores.Data[uVar3] == (FStore *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Capacity && Data[Index] != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x180,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  this_00 = GStores.Data[uVar3];
  uVar3 = (this->Id).Index;
  switch((this->Id).Type) {
  case 0:
    pcVar9 = FStore::GetAnsiString(this_00,uVar3);
    ::FString::FString(__return_storage_ptr__,pcVar9);
    break;
  case 1:
    pwVar5 = FStore::GetWideString(this_00,uVar3);
    ::FString::FString(__return_storage_ptr__,pwVar5);
    break;
  case 2:
    pFVar6 = TArrayView<FDisplayNameEntryId,int>::operator[](&this_00->NumberlessNames,uVar3);
    local_168.ComparisonIndex.Value = (pFVar6->Id).Value;
    local_168.Number = 0;
    ::FName::GetPlainNameString(&local_168,__return_storage_ptr__);
    break;
  case 3:
    this_01 = TArrayView<FName,int>::operator[](&this_00->Names,uVar3);
    ::FName::ToString(this_01,__return_storage_ptr__);
    break;
  case 4:
    this_02 = TArrayView<FixedTagPrivate::FNumberlessExportPath,int>::operator[]
                        (&this_00->NumberlessExportPaths,uVar3);
    FNumberlessExportPath::ToString(this_02,__return_storage_ptr__);
    break;
  case 5:
    this_03 = TArrayView<FAssetRegistryExportPath,int>::operator[](&this_00->ExportPaths,uVar3);
    FAssetRegistryExportPath::ToString(this_03,__return_storage_ptr__);
    break;
  case 6:
    pFVar7 = TArrayView<FixedTagPrivate::FMarshalledText,int>::operator[](&this_00->Texts,uVar3);
    if ((pFVar7->String).Data.ArrayNum == 0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = (char *)(pFVar7->String).Data.AllocatorInstance.Data;
    }
    pTVar8 = StringCast<wchar_t,128,char8_t>(&local_148,(uchar *)pcVar9);
    pFVar4 = ::FString::FString(&local_160,pTVar8->Ptr);
    ::FString::FString(__return_storage_ptr__,pFVar4);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x1c0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// AsString<0> @ 141e6ccf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FixedTagPrivate::FValueHandle::AsString<0>(FValueHandle *this,FString *__return_storage_ptr__)

{
  FStore *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FDisplayNameEntryId *pFVar6;
  FName *this_01;
  FNumberlessExportPath *this_02;
  FAssetRegistryExportPath *this_03;
  FMarshalledText *pFVar7;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> *pTVar8;
  char *pcVar9;
  undefined1 auStack_1a8 [32];
  FName local_178;
  FText local_170;
  FString local_160;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  uVar3 = this->StoreIndex;
  if (((0x3fff < uVar3) || (GStores.Data[uVar3] == (FStore *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Capacity && Data[Index] != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x180,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  this_00 = GStores.Data[uVar3];
  uVar3 = (this->Id).Index;
  switch((this->Id).Type) {
  case 0:
    pcVar9 = FStore::GetAnsiString(this_00,uVar3);
    ::FString::FString(__return_storage_ptr__,pcVar9);
    break;
  case 1:
    pwVar5 = FStore::GetWideString(this_00,uVar3);
    ::FString::FString(__return_storage_ptr__,pwVar5);
    break;
  case 2:
    pFVar6 = TArrayView<FDisplayNameEntryId,int>::operator[](&this_00->NumberlessNames,uVar3);
    local_178.ComparisonIndex.Value = (pFVar6->Id).Value;
    local_178.Number = 0;
    ::FName::GetPlainNameString(&local_178,__return_storage_ptr__);
    break;
  case 3:
    this_01 = TArrayView<FName,int>::operator[](&this_00->Names,uVar3);
    ::FName::ToString(this_01,__return_storage_ptr__);
    break;
  case 4:
    this_02 = TArrayView<FixedTagPrivate::FNumberlessExportPath,int>::operator[]
                        (&this_00->NumberlessExportPaths,uVar3);
    FNumberlessExportPath::ToString(this_02,__return_storage_ptr__);
    break;
  case 5:
    this_03 = TArrayView<FAssetRegistryExportPath,int>::operator[](&this_00->ExportPaths,uVar3);
    FAssetRegistryExportPath::ToString(this_03,__return_storage_ptr__);
    break;
  case 6:
    pFVar7 = TArrayView<FixedTagPrivate::FMarshalledText,int>::operator[](&this_00->Texts,uVar3);
    if ((pFVar7->String).Data.ArrayNum == 0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = (char *)(pFVar7->String).Data.AllocatorInstance.Data;
    }
    pTVar8 = StringCast<wchar_t,128,char8_t>(&local_148,(uchar *)pcVar9);
    FTextStringHelper::CreateFromBuffer(&local_170,pTVar8->Ptr,(wchar_t *)0x0,(wchar_t *)0x0,false);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    pFVar4 = FText::ToString(&local_170);
    pFVar4 = ::FString::FString(&local_160,pFVar4);
    ::FString::FString(__return_storage_ptr__,pFVar4);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_170.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
    }
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x1c0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// AsDisplayString @ 141e90950

FString * __thiscall
FixedTagPrivate::FValueHandle::AsDisplayString(FValueHandle *this,FString *__return_storage_ptr__)

{
  AsString<0>(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AsExportPath @ 141e90a50

FAssetRegistryExportPath * __thiscall
FixedTagPrivate::FValueHandle::AsExportPath
          (FValueHandle *this,FAssetRegistryExportPath *__return_storage_ptr__)

{
  int iVar1;
  FStore *this_00;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FAssetRegistryExportPath *pFVar5;
  size_t sVar6;
  FDisplayNameEntryId *pFVar7;
  FName *pFVar8;
  FNumberlessExportPath *pFVar9;
  FMarshalledText *this_01;
  FText *this_02;
  FString *pFVar10;
  int iVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  TStringView<char> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FText local_28;
  
  uVar12 = this->StoreIndex;
  if (((0x3fff < uVar12) || (GStores.Data[uVar12] == (FStore *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Capacity && Data[Index] != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x180,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FAssetRegistryExportPath *)(*pcVar2)();
    return pFVar5;
  }
  this_00 = GStores.Data[uVar12];
  uVar12 = (this->Id).Index;
  if ((this->Id).Type == 6) {
    local_res8[0] = 0;
    `FixedTagPrivate::FValueHandle::AsExportPath'::__l2::<lambda_1>::operator()(local_res8);
  }
  switch((this->Id).Type) {
  case 0:
    local_58.DataPtr = FStore::GetAnsiString(this_00,uVar12);
    iVar11 = 0;
    if (local_58.DataPtr != (char *)0x0) {
      sVar6 = strlen(local_58.DataPtr);
      iVar11 = (int)sVar6;
    }
    local_58._12_4_ = uStack_7c;
    local_58.Size = iVar11;
    ParseExportPath<TStringView<char>_>(__return_storage_ptr__,&local_58);
    break;
  case 1:
    local_48.DataPtr = FStore::GetWideString(this_00,uVar12);
    iVar11 = 0;
    if (local_48.DataPtr != (wchar_t *)0x0) {
      sVar6 = wcslen(local_48.DataPtr);
      iVar11 = (int)sVar6;
    }
    local_48._12_4_ = uStack_6c;
    local_48.Size = iVar11;
    ParseExportPath<TStringView<wchar_t>_>(__return_storage_ptr__,&local_48);
    break;
  case 2:
    pFVar7 = TArrayView<FDisplayNameEntryId,int>::operator[](&this_00->NumberlessNames,uVar12);
    FVar3.Number = 0;
    FVar3.ComparisonIndex.Value = (pFVar7->Id).Value;
    ::MakeNumberedPath(__return_storage_ptr__,FVar3);
    break;
  case 3:
    pFVar8 = TArrayView<FName,int>::operator[](&this_00->Names,uVar12);
    ::MakeNumberedPath(__return_storage_ptr__,*pFVar8);
    break;
  case 4:
    pFVar9 = TArrayView<FixedTagPrivate::FNumberlessExportPath,int>::operator[]
                       (&this_00->NumberlessExportPaths,uVar12);
    MakeNumberedPath(__return_storage_ptr__,pFVar9);
    break;
  case 5:
    pFVar5 = TArrayView<FAssetRegistryExportPath,int>::operator[](&this_00->ExportPaths,uVar12);
    FVar3 = (pFVar5->ClassPath).AssetName;
    (__return_storage_ptr__->ClassPath).PackageName = (pFVar5->ClassPath).PackageName;
    (__return_storage_ptr__->ClassPath).AssetName = FVar3;
    FVar3 = pFVar5->Package;
    __return_storage_ptr__->Class = pFVar5->Class;
    __return_storage_ptr__->Package = FVar3;
    __return_storage_ptr__->Object = pFVar5->Object;
    break;
  case 6:
    this_01 = TArrayView<FixedTagPrivate::FMarshalledText,int>::operator[](&this_00->Texts,uVar12);
    this_02 = FMarshalledText::GetAsText(this_01,&local_28);
    pFVar10 = FText::ToString(this_02);
    local_38.DataPtr = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    iVar1 = (pFVar10->Data).ArrayNum;
    iVar11 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar11 = 0;
    }
    local_38._12_4_ = uStack_5c;
    local_38.Size = iVar11;
    ParseExportPath<TStringView<wchar_t>_>(__return_storage_ptr__,&local_38);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x20b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAssetRegistryExportPath *)(*pcVar2)();
      return pFVar5;
    }
    (__return_storage_ptr__->ClassPath).PackageName.ComparisonIndex = 0;
    (__return_storage_ptr__->ClassPath).PackageName.Number = 0;
    (__return_storage_ptr__->ClassPath).AssetName.ComparisonIndex = 0;
    (__return_storage_ptr__->ClassPath).AssetName.Number = 0;
    (__return_storage_ptr__->Class).ComparisonIndex = 0;
    (__return_storage_ptr__->Class).Number = 0;
    (__return_storage_ptr__->Package).ComparisonIndex = 0;
    (__return_storage_ptr__->Package).Number = 0;
    (__return_storage_ptr__->Object).ComparisonIndex = 0;
    (__return_storage_ptr__->Object).Number = 0;
  }
  return __return_storage_ptr__;
}

// AsMarshalledText @ 141e90d70

bool __thiscall
FixedTagPrivate::FValueHandle::AsMarshalledText(FValueHandle *this,FMarshalledText *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FMarshalledText *pFVar5;
  
  if ((this->Id).Type != 6) {
    return false;
  }
  uVar1 = this->StoreIndex;
  if ((0x3fff < uVar1) || (GStores.Data[uVar1] == (FStore *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Capacity && Data[Index] != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x180,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar5 = TArrayView<FixedTagPrivate::FMarshalledText,int>::operator[]
                     (&GStores.Data[uVar1]->Texts,(this->Id).Index);
  FMarshalledText::operator=(param_1,pFVar5);
  return true;
}

// AsName @ 141e90ee0

FName __thiscall FixedTagPrivate::FValueHandle::AsName(FValueHandle *this)

{
  int iVar1;
  FStore *this_00;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  char *pcVar5;
  wchar_t *pwVar6;
  FDisplayNameEntryId *pFVar7;
  FNumberlessExportPath *pFVar8;
  FAssetRegistryExportPath *this_01;
  FMarshalledText *this_02;
  FText *this_03;
  FString *pFVar9;
  FName *pFVar10;
  int iVar11;
  FName in_RDX;
  uint uVar12;
  FName FVar13;
  undefined1 local_res8 [16];
  uint local_res18;
  undefined4 uStackX_1c;
  uint local_res20;
  undefined4 uStackX_24;
  FName local_78;
  FTopLevelAssetPath local_70;
  FText local_60;
  FAssetRegistryExportPath local_50;
  
  uVar12 = this->StoreIndex;
  if (((0x3fff < uVar12) || (GStores.Data[uVar12] == (FStore *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Capacity && Data[Index] != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x180,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar4 = (FName)(*pcVar2)();
    return FVar4;
  }
  this_00 = GStores.Data[uVar12];
  uVar12 = (this->Id).Index;
  if ((this->Id).Type == 6) {
    local_res8[0] = 0;
    `FixedTagPrivate::FValueHandle::AsName'::__l2::<lambda_1>::operator()(local_res8);
  }
  switch((this->Id).Type) {
  case 0:
    pcVar5 = FStore::GetAnsiString(this_00,uVar12);
    ::FName::FName((FName *)in_RDX,pcVar5);
    return in_RDX;
  case 1:
    pwVar6 = FStore::GetWideString(this_00,uVar12);
    ::FName::FName((FName *)in_RDX,pwVar6);
    return in_RDX;
  case 2:
    pFVar7 = TArrayView<FDisplayNameEntryId,int>::operator[](&this_00->NumberlessNames,uVar12);
    *(uint *)in_RDX = (pFVar7->Id).Value;
    *(undefined4 *)((longlong)in_RDX + 4) = 0;
    return in_RDX;
  case 3:
    pFVar10 = TArrayView<FName,int>::operator[](&this_00->Names,uVar12);
    *(FName *)in_RDX = *pFVar10;
    return in_RDX;
  case 4:
    pFVar8 = TArrayView<FixedTagPrivate::FNumberlessExportPath,int>::operator[]
                       (&this_00->NumberlessExportPaths,uVar12);
    local_50.Class.ComparisonIndex.Value = 0;
    local_50.Class.Number = 0;
    local_70.PackageName.ComparisonIndex.Value = 0;
    local_70.PackageName.Number = 0;
    FVar13.Number = 0;
    FVar13.ComparisonIndex.Value = (pFVar8->ClassObject).Value;
    FVar4.Number = 0;
    FVar4.ComparisonIndex.Value = (pFVar8->ClassPackage).Value;
    local_70.AssetName.ComparisonIndex.Value = 0;
    local_70.AssetName.Number = 0;
    FTopLevelAssetPath::TrySetPath(&local_70,FVar4,FVar13);
    local_res18 = (pFVar8->Object).Value;
    uStackX_1c = 0;
    local_50.Object.Number = 0;
    local_50.Object.ComparisonIndex.Value = local_res18;
    local_res20 = (pFVar8->Package).Value;
    uStackX_24 = 0;
    local_50.Package.Number = 0;
    local_50.Package.ComparisonIndex.Value = local_res20;
    local_50.ClassPath.PackageName = local_70.PackageName;
    local_50.ClassPath.AssetName = local_70.AssetName;
    FAssetRegistryExportPath::ToName(&local_50);
    return in_RDX;
  case 5:
    this_01 = TArrayView<FAssetRegistryExportPath,int>::operator[](&this_00->ExportPaths,uVar12);
    FAssetRegistryExportPath::ToName(this_01);
    return in_RDX;
  case 6:
    this_02 = TArrayView<FixedTagPrivate::FMarshalledText,int>::operator[](&this_00->Texts,uVar12);
    this_03 = FMarshalledText::GetAsText(this_02,&local_60);
    pFVar9 = FText::ToString(this_03);
    iVar1 = (pFVar9->Data).ArrayNum;
    iVar11 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar11 = 0;
    }
    pFVar10 = ::FName::FName(&local_78,iVar11,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                             FNAME_Add);
    *(FName *)in_RDX = *pFVar10;
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
      return in_RDX;
    }
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x1f5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FName)(*pcVar2)();
      return FVar4;
    }
    *(undefined8 *)in_RDX = 0;
  }
  return in_RDX;
}

// AsStorageString @ 141e91190

FString * __thiscall
FixedTagPrivate::FValueHandle::AsStorageString(FValueHandle *this,FString *__return_storage_ptr__)

{
  AsString<1>(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AsText @ 141e915b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FixedTagPrivate::FValueHandle::AsText(FValueHandle *this,FText *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FMarshalledText *pFVar5;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> *pTVar6;
  char *pcVar7;
  undefined1 auStack_188 [32];
  FText local_158;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((this->Id).Type == 6) {
    uVar1 = this->StoreIndex;
    if ((0x3fff < uVar1) || (GStores.Data[uVar1] == (FStore *)0x0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Capacity && Data[Index] != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x180,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar5 = TArrayView<FixedTagPrivate::FMarshalledText,int>::operator[]
                       (&GStores.Data[uVar1]->Texts,(this->Id).Index);
    if ((pFVar5->String).Data.ArrayNum == 0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)(pFVar5->String).Data.AllocatorInstance.Data;
    }
    pTVar6 = StringCast<wchar_t,128,char8_t>(&local_148,(uchar *)pcVar7);
    FTextStringHelper::CreateFromBuffer(&local_158,pTVar6->Ptr,(wchar_t *)0x0,(wchar_t *)0x0,false);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    FText::operator=(param_1,&local_158);
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// Equals @ 141e98030

bool __thiscall
FixedTagPrivate::FValueHandle::Equals(FValueHandle *this,TStringView<wchar_t> *param_1)

{
  FStore *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  wchar_t *pwVar5;
  FDisplayNameEntryId *pFVar6;
  FNumberlessExportPath *pFVar7;
  FAssetRegistryExportPath *pFVar8;
  FMarshalledText *pFVar9;
  FName *pFVar10;
  uint uVar11;
  FName FVar12;
  FName FVar13;
  char *pcVar14;
  ulong64 uVar15;
  FName FVar16;
  FName local_res20;
  FTopLevelAssetPath local_58;
  FAssetRegistryExportPath local_48;
  
  uVar11 = this->StoreIndex;
  if (((0x3fff < uVar11) || (GStores.Data[uVar11] == (FStore *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Capacity && Data[Index] != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x180,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  this_00 = GStores.Data[uVar11];
  uVar11 = (this->Id).Index;
  switch((this->Id).Type) {
  case 0:
    pcVar14 = FStore::GetAnsiString(this_00,uVar11);
    uVar15 = (ulong64)(int)*(undefined8 *)&param_1->Size;
    iVar4 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,pcVar14,uVar15);
    if ((iVar4 == 0) && (pcVar14[uVar15] == '\0')) {
      return true;
    }
    break;
  case 1:
    pwVar5 = FStore::GetWideString(this_00,uVar11);
    uVar15 = (ulong64)(int)*(undefined8 *)&param_1->Size;
    iVar4 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,pwVar5,uVar15);
    if ((iVar4 == 0) && (pwVar5[uVar15] == L'\0')) {
      return true;
    }
    break;
  case 2:
    pFVar6 = TArrayView<FDisplayNameEntryId,int>::operator[](&this_00->NumberlessNames,uVar11);
    FVar12.Number = 0;
    FVar12.ComparisonIndex.Value = (pFVar6->Id).Value;
    bVar2 = EqualsInsensitive(param_1,FVar12);
    return bVar2;
  case 3:
    pFVar10 = TArrayView<FName,int>::operator[](&this_00->Names,uVar11);
    bVar2 = EqualsInsensitive(param_1,*pFVar10);
    return bVar2;
  case 4:
    pFVar7 = TArrayView<FixedTagPrivate::FNumberlessExportPath,int>::operator[]
                       (&this_00->NumberlessExportPaths,uVar11);
    local_48.Class.ComparisonIndex.Value = 0;
    local_48.Class.Number = 0;
    local_58.PackageName.ComparisonIndex.Value = 0;
    local_58.PackageName.Number = 0;
    FVar16.Number = 0;
    FVar16.ComparisonIndex.Value = (pFVar7->ClassObject).Value;
    FVar13.Number = 0;
    FVar13.ComparisonIndex.Value = (pFVar7->ClassPackage).Value;
    local_58.AssetName.ComparisonIndex.Value = 0;
    local_58.AssetName.Number = 0;
    FTopLevelAssetPath::TrySetPath(&local_58,FVar13,FVar16);
    local_48.Object.Number = 0;
    local_48.Object.ComparisonIndex.Value = (pFVar7->Object).Value;
    local_48.Package.Number = 0;
    local_48.Package.ComparisonIndex.Value = (pFVar7->Package).Value;
    local_48.ClassPath.PackageName = local_58.PackageName;
    local_48.ClassPath.AssetName = local_58.AssetName;
    bVar2 = EqualsInsensitive(param_1,&local_48);
    return bVar2;
  case 5:
    pFVar8 = TArrayView<FAssetRegistryExportPath,int>::operator[](&this_00->ExportPaths,uVar11);
    bVar2 = EqualsInsensitive(param_1,pFVar8);
    return bVar2;
  case 6:
    pFVar9 = TArrayView<FixedTagPrivate::FMarshalledText,int>::operator[](&this_00->Texts,uVar11);
    if ((pFVar9->String).Data.ArrayNum == 0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)(pFVar9->String).Data.AllocatorInstance.Data;
    }
    pFVar10 = ::FName::FName(&local_res20,(uchar *)pcVar14);
    bVar2 = EqualsInsensitive(param_1,*pFVar10);
    return bVar2;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x247,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// GetResourceSize @ 141ea2550

long64 __thiscall FixedTagPrivate::FValueHandle::GetResourceSize(FValueHandle *this)

{
  FStore *this_00;
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  char *_Str;
  wchar_t *_Str_00;
  size_t sVar4;
  FMarshalledText *pFVar5;
  uint uVar6;
  
  uVar6 = this->StoreIndex;
  if (((0x3fff < uVar6) || (GStores.Data[uVar6] == (FStore *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Capacity && Data[Index] != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x180,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  this_00 = GStores.Data[uVar6];
  uVar6 = (this->Id).Index;
  switch((this->Id).Type) {
  case 0:
    _Str = FStore::GetAnsiString(this_00,uVar6);
    sVar4 = strlen(_Str);
    return (longlong)(int)sVar4;
  case 1:
    _Str_00 = FStore::GetWideString(this_00,uVar6);
    sVar4 = wcslen(_Str_00);
    return (longlong)(int)sVar4 * 2;
  case 2:
    return 4;
  case 3:
    return 8;
  case 4:
    return 0x10;
  case 5:
    return 0x28;
  case 6:
    pFVar5 = TArrayView<FixedTagPrivate::FMarshalledText,int>::operator[](&this_00->Texts,uVar6);
    return (longlong)(pFVar5->String).Data.ArrayMax + 0x10;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                     ,0x1d4,L"");
  if (!bVar2) {
    return 0;
  }
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}

// operator() @ 150482030

bool __thiscall
`FixedTagPrivate::FValueHandle::AsExportPath'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2074581229599982078>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2074581229599982078>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150482070

bool __thiscall `FixedTagPrivate::FValueHandle::AsName'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2074581229599982056>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2074581229599982056>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

