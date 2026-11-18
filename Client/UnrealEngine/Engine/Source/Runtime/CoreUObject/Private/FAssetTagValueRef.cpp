// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 11

// AsExportPath @ 141e90970

FAssetRegistryExportPath * __thiscall
FAssetTagValueRef::AsExportPath
          (FAssetTagValueRef *this,FAssetRegistryExportPath *__return_storage_ptr__)

{
  FName FVar1;
  int iVar2;
  ulong64 uVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  FAssetRegistryExportPath *pFVar8;
  int iVar9;
  FValueHandle local_res8;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  FAssetRegistryExportPath local_58;
  FAssetRegistryExportPath local_30;
  
  uVar3 = (this->field0_0x0).Bits;
  if ((longlong)uVar3 < 0) {
    local_res8.Id = SUB84(uVar3,0);
    local_res8.StoreIndex = (uint)(uVar3 >> 0x20) & 0x7fffffff;
    pFVar8 = FixedTagPrivate::FValueHandle::AsExportPath(&local_res8,&local_30);
  }
  else {
    if (uVar3 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x587,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FAssetRegistryExportPath *)(*pcVar4)();
        return pFVar8;
      }
    }
    local_68.DataPtr = (wchar_t *)(((this->field0_0x0).Loose)->Data).AllocatorInstance.Data;
    iVar2 = (((this->field0_0x0).Loose)->Data).ArrayNum;
    iVar9 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar9 = 0;
    }
    local_68._12_4_ = uStack_6c;
    local_68.Size = iVar9;
    ParseExportPath<TStringView<wchar_t>_>(&local_58,&local_68);
    pFVar8 = &local_58;
  }
  FVar1 = (pFVar8->ClassPath).AssetName;
  FVar5 = pFVar8->Class;
  FVar6 = pFVar8->Package;
  (__return_storage_ptr__->ClassPath).PackageName = (pFVar8->ClassPath).PackageName;
  (__return_storage_ptr__->ClassPath).AssetName = FVar1;
  FVar1 = pFVar8->Object;
  __return_storage_ptr__->Class = FVar5;
  __return_storage_ptr__->Package = FVar6;
  __return_storage_ptr__->Object = FVar1;
  return __return_storage_ptr__;
}

// AsFixed @ 141e90d00

FValueHandle __thiscall FAssetTagValueRef::AsFixed(FAssetTagValueRef *this)

{
  ulong64 uVar1;
  FValueHandle in_RDX;
  
  uVar1 = (this->field0_0x0).Fixed.Bits;
  *(uint *)((longlong)in_RDX + 4) = (uint)uVar1;
  *(uint *)in_RDX = (uint)(uVar1 >> 0x20) & 0x7fffffff;
  return in_RDX;
}

// AsLoose @ 141e90d20

FString * __thiscall FAssetTagValueRef::AsLoose(FAssetTagValueRef *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->field0_0x0).Loose != (FString *)0x0) {
    return (this->field0_0x0).Loose;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsSet()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                     ,0x587,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  return (this->field0_0x0).Loose;
}

// AsName @ 141e90e30

FName __thiscall FAssetTagValueRef::AsName(FAssetTagValueRef *this)

{
  int iVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  FName FVar5;
  int iVar6;
  FName in_RDX;
  FValueHandle local_res8 [2];
  FName local_res18;
  
  uVar2 = (this->field0_0x0).Bits;
  if ((longlong)uVar2 < 0) {
    local_res8[0].Id = SUB84(uVar2,0);
    local_res8[0].StoreIndex = (uint)(uVar2 >> 0x20) & 0x7fffffff;
    FVar5 = FixedTagPrivate::FValueHandle::AsName(local_res8);
  }
  else {
    if (uVar2 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x587,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar5 = (FName)(*pcVar3)();
        return FVar5;
      }
    }
    iVar1 = (((this->field0_0x0).Loose)->Data).ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    FVar5 = (FName)::FName::FName(&local_res18,iVar6,
                                  (wchar_t *)
                                  (((this->field0_0x0).Loose)->Data).AllocatorInstance.Data,
                                  FNAME_Add);
  }
  *(undefined8 *)in_RDX = *(undefined8 *)FVar5;
  return in_RDX;
}

// AsString @ 141e911b0

FString * __thiscall
FAssetTagValueRef::AsString(FAssetTagValueRef *this,FString *__return_storage_ptr__)

{
  int iVar1;
  ulong64 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FValueHandle local_res8;
  FString local_48;
  FText local_38;
  FString local_28;
  
  local_res8.StoreIndex = 0;
  uVar2 = (this->field0_0x0).Bits;
  if ((longlong)uVar2 < 0) {
    local_res8.Id = SUB84(uVar2,0);
    local_res8.StoreIndex = (uint)(uVar2 >> 0x20) & 0x7fffffff;
    FixedTagPrivate::FValueHandle::AsString<0>(&local_res8,&local_28);
    pFVar8 = &local_28;
    bVar5 = true;
    bVar6 = false;
    FVar9.Data = local_28.Data.AllocatorInstance.Data;
    goto LAB_141e9136e;
  }
  pwVar11 = L"";
  if (uVar2 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x587,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar4)();
      return pFVar8;
    }
  }
  pFVar8 = (this->field0_0x0).Loose;
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  bVar7 = FTextStringHelper::IsComplexText(pwVar10);
  bVar5 = false;
  bVar6 = true;
  if (bVar7) {
    FText::FText(&local_38);
    if ((pFVar8->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    pwVar11 = FTextStringHelper::ReadFromBuffer
                        (pwVar11,&local_38,(wchar_t *)0x0,(wchar_t *)0x0,false);
    if (pwVar11 == (wchar_t *)0x0) {
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      goto LAB_141e9130c;
    }
    pFVar8 = FText::ToString(&local_38);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = (pFVar8->Data).ArrayNum;
    pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
    local_48.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_48,iVar1,&local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar1 * 2);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  else {
LAB_141e9130c:
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = (pFVar8->Data).ArrayNum;
    pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
    local_48.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_48,iVar1,&local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar1 * 2);
    }
  }
  pFVar8 = &local_48;
  FVar9.Data = local_48.Data.AllocatorInstance.Data;
LAB_141e9136e:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar9.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar8->Data).ArrayNum;
  iVar1 = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  (__return_storage_ptr__->Data).ArrayMax = iVar1;
  if (bVar6) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AsText @ 141e913e0

FText * __thiscall FAssetTagValueRef::AsText(FAssetTagValueRef *this,FText *__return_storage_ptr__)

{
  ulong64 uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FText *pFVar5;
  FString *pFVar6;
  longlong lVar7;
  undefined4 local_res10 [2];
  FValueHandle local_res18 [2];
  FString local_68;
  FText local_58;
  FText local_48;
  FString local_38;
  FText local_28;
  
  local_res10[0] = 0;
  FText::FText(&local_58);
  bVar4 = TryGetAsText(this,&local_58);
  if (bVar4) {
    local_48.TextData.Reference = local_58.TextData.Reference;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 8))
                (local_58.TextData.Reference,local_res10);
    }
    local_48.Flags = local_58.Flags;
    FText::FText(__return_storage_ptr__,&local_48);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else {
    uVar1 = (this->field0_0x0).Bits;
    if ((longlong)uVar1 < 0) {
      local_res18[0].Id = SUB84(uVar1,0);
      local_res18[0].StoreIndex = (uint)(uVar1 >> 0x20) & 0x7fffffff;
      FixedTagPrivate::FValueHandle::AsString<1>(local_res18,&local_38);
      pFVar6 = &local_38;
      bVar3 = true;
      bVar4 = false;
    }
    else {
      if (uVar1 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                           ,0x587,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FText *)(*pcVar2)();
          return pFVar5;
        }
      }
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = (((this->field0_0x0).Loose)->Data).ArrayNum;
      lVar7 = (longlong)local_68.Data.ArrayNum;
      _Src = (((this->field0_0x0).Loose)->Data).AllocatorInstance.Data;
      if (local_68.Data.ArrayNum == 0) {
        local_68.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,
                   local_68.Data.ArrayNum,&local_68.Data.ArrayMax);
        memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
      }
      pFVar6 = &local_68;
      bVar3 = false;
      bVar4 = true;
    }
    pFVar5 = FText::FromString(&local_28,pFVar6);
    FText::FText(__return_storage_ptr__,pFVar5);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (bVar4) {
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// Equals @ 141e97f60

bool __thiscall FAssetTagValueRef::Equals(FAssetTagValueRef *this,TStringView<wchar_t> *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FValueHandle local_res8;
  TStringView<wchar_t> local_18;
  
  puVar1 = (undefined8 *)(this->field0_0x0).Bits;
  if (puVar1 == (undefined8 *)0x0) {
    return param_1->Size == 0;
  }
  if (-1 < (longlong)puVar1) {
    iVar4 = *(int *)(puVar1 + 1) + -1;
    if (*(int *)(puVar1 + 1) == 0) {
      iVar4 = 0;
    }
    iVar5 = (int)*(undefined8 *)&param_1->Size;
    if (iVar4 == iVar5) {
      if ((iVar4 != 0) && (iVar5 != 0)) {
        iVar3 = iVar5;
        if (iVar4 < iVar5) {
          iVar3 = iVar4;
        }
        iVar3 = FGenericPlatformStricmp::Strnicmp
                          ((wchar_t *)*puVar1,param_1->DataPtr,(longlong)iVar3);
        if (iVar3 != 0) {
          return false;
        }
      }
      if (iVar4 == iVar5) {
        return true;
      }
    }
    return false;
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_res8.Id = SUB84(puVar1,0);
  local_res8.StoreIndex = (uint)((ulonglong)puVar1 >> 0x20) & 0x7fffffff;
  bVar2 = FixedTagPrivate::FValueHandle::Equals(&local_res8,&local_18);
  return bVar2;
}

// GetResourceSize @ 141ea2340

long64 __thiscall FAssetTagValueRef::GetResourceSize(FAssetTagValueRef *this)

{
  ulonglong uVar1;
  FStore *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  long64 lVar5;
  char *_Str;
  wchar_t *_Str_00;
  size_t sVar6;
  FMarshalledText *pFVar7;
  
  uVar1 = (this->field0_0x0).Bits;
  if (-1 < (longlong)uVar1) {
    if ((uVar1 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                           ,0x587,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      lVar5 = (*pcVar2)();
      return lVar5;
    }
    return (longlong)(((this->field0_0x0).Loose)->Data).ArrayMax * 2;
  }
  uVar4 = (uint)(uVar1 >> 0x20) & 0x7fffffff;
  if (((0x3fff < uVar4) || (FixedTagPrivate::GStores.Data[uVar4] == (FStore *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Capacity && Data[Index] != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x180,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    lVar5 = (*pcVar2)();
    return lVar5;
  }
  this_00 = FixedTagPrivate::GStores.Data[uVar4];
  uVar4 = (uint)(uVar1 >> 3) & 0x1fffffff;
  switch((uint)uVar1 & 7) {
  case 0:
    _Str = FixedTagPrivate::FStore::GetAnsiString(this_00,uVar4);
    sVar6 = strlen(_Str);
    return (longlong)(int)sVar6;
  case 1:
    _Str_00 = FixedTagPrivate::FStore::GetWideString(this_00,uVar4);
    sVar6 = wcslen(_Str_00);
    return (longlong)(int)sVar6 * 2;
  case 2:
    return 4;
  case 3:
    return 8;
  case 4:
    return 0x10;
  case 5:
    return 0x28;
  case 6:
    pFVar7 = TArrayView<FixedTagPrivate::FMarshalledText,int>::operator[](&this_00->Texts,uVar4);
    return (longlong)(pFVar7->String).Data.ArrayMax + 0x10;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                     ,0x1d4,L"");
  if (!bVar3) {
    return 0;
  }
  pcVar2 = (code *)swi(3);
  lVar5 = (*pcVar2)();
  return lVar5;
}

// ToLoose @ 141ebe440

FString * __thiscall
FAssetTagValueRef::ToLoose(FAssetTagValueRef *this,FString *__return_storage_ptr__)

{
  ulong64 uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  longlong lVar5;
  FValueHandle local_res8;
  FString local_28;
  FString local_18;
  
  uVar1 = (this->field0_0x0).Bits;
  if ((longlong)uVar1 < 0) {
    local_res8.Id = SUB84(uVar1,0);
    local_res8.StoreIndex = (uint)(uVar1 >> 0x20) & 0x7fffffff;
    FixedTagPrivate::FValueHandle::AsString<1>(&local_res8,&local_18);
    ::FString::FString(__return_storage_ptr__,&local_18);
  }
  else {
    if (uVar1 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x587,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
    }
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (((this->field0_0x0).Loose)->Data).ArrayNum;
    lVar5 = (longlong)local_28.Data.ArrayNum;
    _Src = (((this->field0_0x0).Loose)->Data).AllocatorInstance.Data;
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_28);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TryGetAsMarshalledText @ 141ec1350

bool __thiscall
FAssetTagValueRef::TryGetAsMarshalledText(FAssetTagValueRef *this,FMarshalledText *param_1)

{
  int iVar1;
  ulong64 uVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FMarshalledText *pFVar8;
  FUtf8String *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  int iVar13;
  int iVar14;
  FUtf8String local_38;
  FUtf8String local_28;
  
  uVar2 = (this->field0_0x0).Bits;
  if ((longlong)uVar2 < 0) {
    uVar10 = (uint)(uVar2 >> 0x20) & 0x7fffffff;
    if (((byte)uVar2 & 7) == 6) {
      if (((0x3fff < uVar10) || (FixedTagPrivate::GStores.Data[uVar10] == (FStore *)0x0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < Capacity && Data[Index] != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                             ,0x180,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar8 = TArrayView<FixedTagPrivate::FMarshalledText,int>::operator[]
                         (&FixedTagPrivate::GStores.Data[uVar10]->Texts,(uint)uVar2 >> 3);
      FixedTagPrivate::FMarshalledText::operator=(param_1,pFVar8);
      return true;
    }
  }
  else {
    pwVar12 = L"";
    if ((uVar2 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                           ,0x587,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar3 = (this->field0_0x0).Loose;
    if ((pFVar3->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    bVar6 = FTextStringHelper::IsComplexText(pwVar12);
    if (bVar6) {
      iVar1 = (pFVar3->Data).ArrayNum;
      pFVar11 = (FScriptContainerElement *)0x0;
      iVar14 = 0;
      iVar13 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar13 = 0;
      }
      pFVar9 = FUtf8String::ConstructFromPtrSize
                         (&local_38,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar13);
      iVar13 = iVar14;
      if (&local_28 != pFVar9) {
        pFVar11 = (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar13 = (pFVar9->Data).ArrayNum;
        iVar14 = (pFVar9->Data).ArrayMax;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (&param_1->String != &local_28) {
        pFVar4 = (param_1->String).Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (param_1->String).Data.AllocatorInstance.Data = pFVar11;
        (param_1->String).Data.ArrayMax = iVar14;
        (param_1->String).Data.ArrayNum = iVar13;
        return true;
      }
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      return true;
    }
  }
  return false;
}

// TryGetAsText @ 141ec1500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FAssetTagValueRef::TryGetAsText(FAssetTagValueRef *this,FText *param_1)

{
  ulong64 uVar1;
  FString *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FMarshalledText *pFVar6;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> *pTVar7;
  uint uVar8;
  wchar_t *pwVar9;
  char *pcVar10;
  wchar_t *pwVar11;
  undefined1 auStack_188 [32];
  FText local_158;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar1 = (this->field0_0x0).Bits;
  if ((longlong)uVar1 < 0) {
    uVar8 = (uint)(uVar1 >> 0x20) & 0x7fffffff;
    if (((byte)uVar1 & 7) == 6) {
      if (((0x3fff < uVar8) || (FixedTagPrivate::GStores.Data[uVar8] == (FStore *)0x0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < Capacity && Data[Index] != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                             ,0x180,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar6 = TArrayView<FixedTagPrivate::FMarshalledText,int>::operator[]
                         (&FixedTagPrivate::GStores.Data[uVar8]->Texts,(uint)uVar1 >> 3);
      if ((pFVar6->String).Data.ArrayNum == 0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)(pFVar6->String).Data.AllocatorInstance.Data;
      }
      pTVar7 = StringCast<wchar_t,128,char8_t>(&local_148,(uchar *)pcVar10);
      FTextStringHelper::CreateFromBuffer
                (&local_158,pTVar7->Ptr,(wchar_t *)0x0,(wchar_t *)0x0,false);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      FText::operator=(param_1,&local_158);
      if (local_158.TextData.Reference == (ITextData *)0x0) {
        return true;
      }
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      return true;
    }
  }
  else {
    pwVar11 = L"";
    if ((uVar1 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                           ,0x587,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = (this->field0_0x0).Loose;
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    bVar4 = FTextStringHelper::IsComplexText(pwVar9);
    if (bVar4) {
      if ((pFVar2->Data).ArrayNum != 0) {
        pwVar11 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
      }
      pwVar11 = FTextStringHelper::ReadFromBuffer
                          (pwVar11,param_1,(wchar_t *)0x0,(wchar_t *)0x0,false);
      if (pwVar11 != (wchar_t *)0x0) {
        return true;
      }
    }
  }
  return false;
}

