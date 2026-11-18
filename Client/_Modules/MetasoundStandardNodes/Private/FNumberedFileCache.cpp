// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 3

// ~FNumberedFileCache @ 14b297ae0

void __thiscall Metasound::FNumberedFileCache::~FNumberedFileCache(FNumberedFileCache *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->FileIndexMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FileIndexMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileIndexMap);
  pFVar2 = (this->FileExtention).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RootPath).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00014b297b3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// CacheFilenames @ 14b299460

void __thiscall Metasound::FNumberedFileCache::CacheFilenames(FNumberedFileCache *this)

{
  bool bVar1;
  wchar_t wVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  FString *pFVar6;
  int iVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  FString *pFVar12;
  FString *this_00;
  FString *local_res8;
  int local_res10 [2];
  uint local_res18;
  FString *local_98;
  undefined8 local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (this == (FNumberedFileCache *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  local_98 = (FString *)0x0;
  local_90 = 0;
  if ((this->FileExtention).Data.ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(this->FileExtention).Data.AllocatorInstance.Data;
  }
  if ((this->RootPath).Data.ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(this->RootPath).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*this->FileSystem + 0x78))(this->FileSystem,&local_98,pwVar11,pwVar8);
  uVar5 = (ulonglong)(int)(uint)local_90;
  pFVar12 = local_98 + uVar5;
  local_res18 = (uint)local_90;
  this_00 = local_98;
  do {
    if ((uint)local_90 != (int)uVar5) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (this_00 == pFVar12) {
      DestructItems<FString,int>(local_98,(uint)local_90);
      if (local_98 != (FString *)0x0) {
        FMemory::Free(local_98);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
      return;
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    bVar1 = ::FString::Split(this_00,&Separator,&local_58,&local_68,IgnoreCase,FromEnd);
    if (bVar1) {
      FPaths::GetBaseFilename(&local_78,&local_68,true);
      iVar7 = local_78.Data.ArrayNum;
      FVar9.Data = (FScriptContainerElement *)L"";
      if (iVar7 != 0) {
        FVar9.Data = local_78.Data.AllocatorInstance.Data;
      }
      wVar2 = *(wchar_t *)FVar9.Data;
      if ((wVar2 == L'-') || (wVar2 == L'+')) {
        FVar9.Data = FVar9.Data + 2;
        wVar2 = *(wchar_t *)FVar9.Data;
      }
      bVar1 = false;
      if (wVar2 != L'\0') {
        wVar2 = *(wchar_t *)FVar9.Data;
        do {
          if (wVar2 == L'.') {
            if (bVar1) goto LAB_14b2996bc;
            bVar1 = true;
          }
          else {
            iVar7 = iswdigit(wVar2);
            if (iVar7 == 0) goto LAB_14b2996bc;
          }
          wVar2 = *(wchar_t *)(FVar9.Data + 2);
          FVar9.Data = FVar9.Data + 2;
        } while (wVar2 != L'\0');
        iVar7 = local_78.Data.ArrayNum;
      }
      FVar9.Data = (FScriptContainerElement *)L"";
      if (iVar7 != 0) {
        FVar9.Data = local_78.Data.AllocatorInstance.Data;
      }
      uVar3 = _wtoi((wchar_t *)FVar9.Data);
      if (-1 < (int)uVar3) {
        pFVar6 = ::FString::ToUpper(&local_58,&local_48);
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
        ::FString::FString(&local_88,pwVar8);
        if (local_88.Data.ArrayNum == 0) {
          pwVar8 = L"";
          iVar7 = 0;
        }
        else {
          iVar7 = local_88.Data.ArrayNum + -1;
          pwVar8 = (wchar_t *)local_88.Data.AllocatorInstance.Data;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
        iVar7 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                            *)&this->FileIndexMap,uVar4,&local_88);
        if ((iVar7 == -1) ||
           (lVar10 = (longlong)iVar7 * 0x20 + *(longlong *)&this->FileIndexMap, lVar10 == 0)) {
          local_res8 = &local_88;
          TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_&&>_>
                    ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->FileIndexMap,(uint)local_res10,
                     (TKeyInitializer<FString_&&> *)(ulonglong)uVar4,(bool *)&local_res8);
          lVar10 = (longlong)local_res10[0] * 0x20 + *(longlong *)&this->FileIndexMap;
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (*(uint *)(lVar10 + 0x10) < uVar3) {
          *(uint *)(lVar10 + 0x10) = uVar3;
        }
      }
LAB_14b2996bc:
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    uVar5 = (ulonglong)local_res18;
    this_00 = this_00 + 1;
  } while( true );
}

// GenerateNextNumberedFilename @ 14b2a0520

FString * __thiscall
Metasound::FNumberedFileCache::GenerateNextNumberedFilename
          (FNumberedFileCache *this,FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FString *pFVar4;
  uint *puVar5;
  size_t sVar6;
  int iVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  wchar_t *_Str;
  int iVar10;
  FString local_38;
  FString local_28;
  
  if (this == (FNumberedFileCache *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar4 = ::FString::ToUpper(param_1,&local_28);
  _Str = L"";
  iVar10 = (pFVar4->Data).ArrayNum;
  if (iVar10 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  iVar7 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar7 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar9);
  puVar5 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::FindOrAddImpl<FString>
                     ((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                       *)&this->FileIndexMap,uVar3,pFVar4);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  local_38.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar8 = (longlong)local_38.Data.ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pFVar2,lVar8 * 2);
  }
  pwVar9 = L"";
  if (Separator.Data.ArrayNum != 0) {
    pwVar9 = (wchar_t *)Separator.Data.AllocatorInstance.Data;
  }
  sVar6 = wcslen(pwVar9);
  ::FString::AppendChars(&local_38,pwVar9,(int)sVar6);
  *puVar5 = *puVar5 + 1;
  ::FString::AppendInt(&local_38,*puVar5);
  if ((this->FileExtention).Data.ArrayNum != 0) {
    _Str = (wchar_t *)(this->FileExtention).Data.AllocatorInstance.Data;
  }
  sVar6 = wcslen(_Str);
  ::FString::AppendChars(&local_38,_Str,(int)sVar6);
  iVar10 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  if (((this->RootPath).Data.ArrayNum != 0) || (iVar7 = 2, iVar10 == -1)) {
    iVar7 = 1;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->RootPath).Data.ArrayNum;
  pFVar2 = (this->RootPath).Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar7 + iVar10 == 0)) {
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    uVar3 = iVar1 + iVar7 + iVar10;
    if ((int)uVar3 < iVar1) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar3,0,(ForAnyElementType *)__return_storage_ptr__,iVar1,
               &(__return_storage_ptr__->Data).ArrayMax);
    if (iVar1 != 0) {
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
    }
  }
  ::FString::PathAppend
            (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar10);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return __return_storage_ptr__;
}

