// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 19

// FFileContents @ 14d3cc200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FFileContents * __thiscall
TraceServices::FAnalysisCache::FFileContents::FFileContents(FFileContents *this,wchar_t *param_1)

{
  TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *pTVar1;
  int *piVar2;
  int iVar3;
  IFileHandle *pIVar4;
  bool bVar5;
  FPlatformFileManager *pFVar6;
  IPlatformFile *pIVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 *puVar10;
  IFileHandle *pIVar11;
  IFileHandle IVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_a8 [32];
  undefined1 local_68 [8];
  longlong local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined2 uStack_52;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  ::FString::FString(&this->CacheFilePath,param_1);
  pTVar1 = &this->CacheFile;
  pTVar1->Ptr = (IFileHandle *)0x0;
  piVar2 = &(this->IndexEntries).ArrayMax;
  (this->CacheFileWrite).Ptr = (IFileHandle *)0x0;
  (this->IndexEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexEntries).ArrayNum = 0;
  *piVar2 = 0;
  (this->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocks).ArrayNum = 0;
  (this->Blocks).ArrayMax = 0;
  this->bTransientMode = false;
  this->Version = 0;
  pFVar6 = FPlatformFileManager::Get();
  pIVar7 = FPlatformFileManager::GetPlatformFile(pFVar6);
  pwVar8 = FCommandLine::Get();
  bVar5 = FParse::Param(pwVar8,L"disableanalysiscache");
  if (bVar5) {
    if (3 < (byte)LogAnalysisCache._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
    }
    this->bTransientMode = true;
    return this;
  }
  if ((this->CacheFilePath).Data.ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(this->CacheFilePath).Data.AllocatorInstance.Data;
  }
  lVar9 = (**(code **)((longlong)*pIVar7 + 0x80))(pIVar7,pwVar8);
  if (lVar9 < 1) goto LAB_14d3cc659;
  if ((this->CacheFilePath).Data.ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(this->CacheFilePath).Data.AllocatorInstance.Data;
  }
  puVar10 = (undefined8 *)(**(code **)((longlong)*pIVar7 + 0xe8))(pIVar7,pwVar8);
  if (puVar10 == (undefined8 *)0x0) {
    if (2 < (byte)LogAnalysisCache._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Unable_to_read__152b091c8,
                 (FLogCategoryBase *)&LogAnalysisCache);
    }
    this->bTransientMode = true;
    goto LAB_14d3cc659;
  }
  if (this->bTransientMode == false) {
    pIVar11 = pTVar1->Ptr;
    if (pIVar11 == (IFileHandle *)0x0) {
      pFVar6 = FPlatformFileManager::Get();
      pIVar7 = FPlatformFileManager::GetPlatformFile(pFVar6);
      if ((this->CacheFilePath).Data.ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(this->CacheFilePath).Data.AllocatorInstance.Data;
      }
      pIVar11 = (IFileHandle *)(**(code **)((longlong)*pIVar7 + 0xe8))(pIVar7,pwVar8);
      if (pTVar1 == (TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *)&local_60) {
        if (pIVar11 != (IFileHandle *)0x0) {
          IVar12 = *pIVar11;
          goto LAB_14d3cc36d;
        }
      }
      else {
        pIVar4 = pTVar1->Ptr;
        pTVar1->Ptr = pIVar11;
        if (pIVar4 != (IFileHandle *)0x0) {
          IVar12 = *pIVar4;
          pIVar11 = pIVar4;
LAB_14d3cc36d:
          (**(code **)IVar12)(pIVar11,1);
        }
      }
      pIVar11 = pTVar1->Ptr;
      if (pIVar11 != (IFileHandle *)0x0) goto LAB_14d3cc3ae;
      if (2 < (byte)LogAnalysisCache._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
      }
    }
    else {
LAB_14d3cc3ae:
      (**(code **)((longlong)*pIVar11 + 0x10))(pIVar11,0);
      (**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,&local_58);
      if (((char)local_58 == 'U') && (local_58._1_1_ == 'C')) {
        this->Version = CONCAT22(local_54,local_58._2_2_);
        if (CONCAT22(local_54,local_58._2_2_) < 3) goto LAB_14d3cc420;
        if (2 < (byte)LogAnalysisCache._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
        }
      }
      else {
        (**(code **)((longlong)*pIVar11 + 0x10))(pIVar11,0);
        this->Version = 1;
LAB_14d3cc420:
        if (3 < (byte)LogAnalysisCache._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
        }
        if (this->Version == 1) {
          bVar5 = LoadVersion1(this,pIVar11);
        }
        else {
          if (this->Version != 2) goto LAB_14d3cc468;
          bVar5 = LoadVersion2(this,pIVar11);
        }
        if (bVar5 != false) goto LAB_14d3cc48a;
      }
LAB_14d3cc468:
      if (1 < (byte)LogAnalysisCache._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
      }
    }
    this->bTransientMode = true;
  }
LAB_14d3cc48a:
  local_58._0_1_ = 0;
  local_58._1_1_ = 0;
  local_58._2_2_ = 0;
  local_54 = 0;
  uStack_52 = 8;
  local_50 = 0x100000;
  if (((this->Version < 3) && ((longlong)(ulonglong)(uint)(&local_58)[this->Version] < lVar9)) &&
     ((this->Blocks).ArrayNum == 0)) {
    if (1 < (byte)LogAnalysisCache._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
    }
    DestructItems<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,int>
              ((FIndexEntry *)(this->IndexEntries).AllocatorInstance.Data,
               (this->IndexEntries).ArrayNum);
    (this->IndexEntries).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,&(this->IndexEntries).AllocatorInstance,0,piVar2);
    }
    this->bTransientMode = true;
    (**(code **)*puVar10)(puVar10,1);
    return this;
  }
  if ((6 < (byte)LogAnalysisCache._0_1_) &&
     (UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache),
     6 < (byte)LogAnalysisCache._0_1_)) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
  }
  iVar3 = (this->Blocks).ArrayNum;
  pFVar14 = (this->Blocks).AllocatorInstance.Data;
  pFVar13 = pFVar14 + (longlong)iVar3 * 0x38;
  while( true ) {
    if ((this->Blocks).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TraceServices::FAnalysisCache::FFileContents::FBlockEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_68);
    }
    if (pFVar14 == pFVar13) break;
    if (6 < (byte)LogAnalysisCache._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
    }
    pFVar14 = pFVar14 + 0x38;
  }
  (**(code **)*puVar10)(puVar10,1);
LAB_14d3cc659:
  if (this->Version == 0) {
    this->Version = 2;
  }
  return this;
}

// ~FFileContents @ 14d3d0560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FAnalysisCache::FFileContents::~FFileContents(FFileContents *this)

{
  FScriptContainerElement *pFVar1;
  IFileHandle *pIVar2;
  bool bVar3;
  
  if ((this->Blocks).ArrayNum != 0) {
    bVar3 = Save(this);
    if ((!bVar3) && (1 < (byte)LogAnalysisCache._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
    }
  }
  pFVar1 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,int>
            ((FIndexEntry *)(this->IndexEntries).AllocatorInstance.Data,
             (this->IndexEntries).ArrayNum);
  pFVar1 = (this->IndexEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->CacheFileWrite).Ptr;
  if (pIVar2 != (IFileHandle *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pIVar2 = (this->CacheFile).Ptr;
  if (pIVar2 != (IFileHandle *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pFVar1 = (this->CacheFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetFileHandleForRead @ 14d3e0800

/* WARNING: Enum "Type": Some values do not have unique names */

IFileHandle * __thiscall
TraceServices::FAnalysisCache::FFileContents::GetFileHandleForRead(FFileContents *this)

{
  TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *pTVar1;
  IFileHandle *pIVar2;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar3;
  IFileHandle *pIVar4;
  IFileHandle IVar5;
  wchar_t *pwVar6;
  longlong local_18 [2];
  
  if (this->bTransientMode != false) {
    return (IFileHandle *)0x0;
  }
  pIVar4 = (this->CacheFile).Ptr;
  pTVar1 = &this->CacheFile;
  if (pIVar4 != (IFileHandle *)0x0) {
    return pIVar4;
  }
  this_00 = FPlatformFileManager::Get();
  pIVar3 = FPlatformFileManager::GetPlatformFile(this_00);
  if ((this->CacheFilePath).Data.ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(this->CacheFilePath).Data.AllocatorInstance.Data;
  }
  pIVar4 = (IFileHandle *)(**(code **)((longlong)*pIVar3 + 0xe8))(pIVar3,pwVar6,1);
  if (pTVar1 == (TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *)local_18) {
    if (pIVar4 == (IFileHandle *)0x0) goto LAB_14d3e0896;
    IVar5 = *pIVar4;
  }
  else {
    pIVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pIVar4;
    if (pIVar2 == (IFileHandle *)0x0) goto LAB_14d3e0896;
    IVar5 = *pIVar2;
    pIVar4 = pIVar2;
  }
  (**(code **)IVar5)(pIVar4,1);
LAB_14d3e0896:
  pIVar4 = pTVar1->Ptr;
  if (pIVar4 == (IFileHandle *)0x0) {
    if (2 < (byte)LogAnalysisCache._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
    }
    this->bTransientMode = true;
    pIVar4 = (IFileHandle *)0x0;
  }
  return pIVar4;
}

// GetFileHandleForWrite @ 14d3e08f0

/* WARNING: Enum "Type": Some values do not have unique names */

IFileHandle * __thiscall
TraceServices::FAnalysisCache::FFileContents::GetFileHandleForWrite(FFileContents *this)

{
  TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *pTVar1;
  IFileHandle *pIVar2;
  char cVar3;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar4;
  IFileHandle *pIVar5;
  IFileHandle IVar6;
  wchar_t *pwVar7;
  longlong local_28 [2];
  
  if (this->bTransientMode != false) {
    return (IFileHandle *)0x0;
  }
  pIVar5 = (this->CacheFileWrite).Ptr;
  pTVar1 = &this->CacheFileWrite;
  if (pIVar5 != (IFileHandle *)0x0) {
    return pIVar5;
  }
  this_00 = FPlatformFileManager::Get();
  pIVar4 = FPlatformFileManager::GetPlatformFile(this_00);
  if ((this->CacheFilePath).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(this->CacheFilePath).Data.AllocatorInstance.Data;
  }
  cVar3 = (**(code **)((longlong)*pIVar4 + 0x78))(pIVar4,pwVar7);
  if ((this->CacheFilePath).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(this->CacheFilePath).Data.AllocatorInstance.Data;
  }
  pIVar5 = (IFileHandle *)(**(code **)((longlong)*pIVar4 + 0x110))(pIVar4,pwVar7,1);
  if (pTVar1 == (TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *)local_28) {
    if (pIVar5 == (IFileHandle *)0x0) goto LAB_14d3e09b8;
    IVar6 = *pIVar5;
  }
  else {
    pIVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pIVar5;
    if (pIVar2 == (IFileHandle *)0x0) goto LAB_14d3e09b8;
    IVar6 = *pIVar2;
    pIVar5 = pIVar2;
  }
  (**(code **)IVar6)(pIVar5,1);
LAB_14d3e09b8:
  if (pTVar1->Ptr == (IFileHandle *)0x0) {
    if (2 < (byte)LogAnalysisCache._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
    }
    this->bTransientMode = true;
    pIVar5 = (IFileHandle *)0x0;
  }
  else {
    if (cVar3 == '\0') {
      Save(this);
    }
    pIVar5 = pTVar1->Ptr;
  }
  return pIVar5;
}

// GetFlags @ 14d3e0a20

ushort __thiscall
TraceServices::FAnalysisCache::FFileContents::GetFlags(FFileContents *this,uint param_1)

{
  int iVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->IndexEntries).ArrayNum;
  pFVar3 = (this->IndexEntries).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x58;
  while( true ) {
    if ((this->IndexEntries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) goto LAB_14d3e0a72;
    if (*(uint *)(pFVar3 + 0x10) == param_1) break;
    pFVar3 = pFVar3 + 0x58;
  }
  if (pFVar3 == (FScriptContainerElement *)0x0) {
LAB_14d3e0a72:
    uVar2 = 0;
  }
  else {
    uVar2 = *(ushort *)(pFVar3 + 0x14);
  }
  return uVar2;
}

// GetId @ 14d3e0b70

uint __thiscall
TraceServices::FAnalysisCache::FFileContents::GetId
          (FFileContents *this,wchar_t *param_1,ushort param_2)

{
  TArray<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  FIndexEntry *pFVar5;
  FScriptContainerElement *this_00;
  
  pTVar1 = &this->IndexEntries;
  pFVar5 = AlgoImpl::
           FindByPredicate<TArray<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,TSizedDefaultAllocator<32>_>_&,_TraceServices::FAnalysisCache::FFileContents::GetId_::__l2::<lambda_1>_>
                     (pTVar1,(<lambda_1>)param_1);
  if (pFVar5 == (FIndexEntry *)0x0) {
    iVar3 = (this->IndexEntries).ArrayNum;
    piVar2 = &(this->IndexEntries).ArrayMax;
    uVar4 = iVar3 + 1;
    if (iVar3 == *piVar2) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&pTVar1->AllocatorInstance,piVar2);
      (this->IndexEntries).ArrayNum = iVar3;
    }
    (this->IndexEntries).ArrayNum = iVar3 + 1;
    this_00 = (pTVar1->AllocatorInstance).Data + (longlong)iVar3 * 0x58;
    *(undefined8 *)&this_00->field_0x0 = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)&this_00[0x10].field_0x0 = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)&this_00[0x20].field_0x0 = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined8 *)&this_00[0x30].field_0x0 = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)&this_00[0x40].field_0x0 = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined8 *)&this_00[0x50].field_0x0 = 0;
    ::FString::operator=((FString *)this_00,param_1);
    *(uint *)&this_00[0x10].field_0x0 = uVar4;
    *(uint *)(this_00 + 0x14) = (uint)param_2;
  }
  else {
    uVar4 = pFVar5->Id;
  }
  return uVar4;
}

// GetUserData @ 14d3e3b40

TMemoryView<void> * __thiscall
TraceServices::FAnalysisCache::FFileContents::GetUserData
          (FFileContents *this,TMemoryView<void> *__return_storage_ptr__,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->IndexEntries).ArrayNum;
  pFVar2 = (this->IndexEntries).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x58;
  while( true ) {
    if ((this->IndexEntries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) goto LAB_14d3e3ba7;
    if (*(uint *)(pFVar2 + 0x10) == param_1) break;
    pFVar2 = pFVar2 + 0x58;
  }
  if (pFVar2 == (FScriptContainerElement *)0x0) {
LAB_14d3e3ba7:
    __return_storage_ptr__->Data = (void *)0x0;
    __return_storage_ptr__->Size = 0;
  }
  else {
    __return_storage_ptr__->Size = 0x40;
    __return_storage_ptr__->Data = pFVar2 + 0x18;
  }
  return __return_storage_ptr__;
}

// Load @ 14d3e6cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall TraceServices::FAnalysisCache::FFileContents::Load(FFileContents *this)

{
  bool bVar1;
  IFileHandle *pIVar2;
  undefined1 auStack_38 [32];
  char local_18;
  char local_17;
  uint local_16;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  pIVar2 = GetFileHandleForRead(this);
  if (pIVar2 == (IFileHandle *)0x0) {
    return true;
  }
  (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,0);
  (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,&local_18,6);
  if ((local_18 == 'U') && (local_17 == 'C')) {
    this->Version = local_16;
    if (2 < local_16) {
      if ((byte)LogAnalysisCache._0_1_ < 3) {
        return false;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
      return false;
    }
  }
  else {
    (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,0);
    this->Version = 1;
  }
  if (3 < (byte)LogAnalysisCache._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
  }
  if (this->Version != 1) {
    if (this->Version != 2) {
      return false;
    }
    bVar1 = LoadVersion2(this,pIVar2);
    return bVar1;
  }
  bVar1 = LoadVersion1(this,pIVar2);
  return bVar1;
}

// LoadBlock @ 14d3e6de0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TraceServices::FAnalysisCache::FFileContents::LoadBlock
          (FFileContents *this,TMemoryView<void> *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  IFileHandle *pIVar8;
  ulong64 uVar9;
  int iVar10;
  uint uVar11;
  
  pIVar8 = GetFileHandleForRead(this);
  if (pIVar8 != (IFileHandle *)0x0) {
    uVar2 = (this->Blocks).ArrayNum;
    iVar10 = 0;
    pFVar3 = (this->Blocks).AllocatorInstance.Data;
    uVar11 = uVar2;
    if (0 < (int)uVar2) {
      do {
        iVar1 = (uVar11 >> 1) + iVar10;
        if (*(uint *)(pFVar3 + (longlong)iVar1 * 0x38) < param_2) {
          iVar10 = iVar1 + (uVar11 & 1);
        }
        uVar5 = uVar11 >> 1;
        uVar11 = uVar11 >> 1;
      } while (uVar5 != 0);
    }
    if (((iVar10 < (int)uVar2) && (*(uint *)(pFVar3 + (longlong)iVar10 * 0x38) <= param_2)) &&
       (iVar10 != -1)) {
      if ((iVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return uVar9;
      }
      pFVar3 = (this->Blocks).AllocatorInstance.Data;
      if ((param_1->Size < *(ulonglong *)(pFVar3 + (longlong)iVar10 * 0x38 + 0x18)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Entry.UncompressedSize <= Block.GetSize()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisCache.cpp"
                             ,0x1b9,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return uVar9;
      }
      cVar7 = (**(code **)((longlong)*pIVar8 + 0x10))
                        (pIVar8,*(undefined8 *)(pFVar3 + (longlong)iVar10 * 0x38 + 8));
      if (cVar7 == '\0') {
        if (1 < (byte)LogAnalysisCache._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
        }
      }
      else {
        cVar7 = (**(code **)((longlong)*pIVar8 + 0x20))
                          (pIVar8,param_1->Data,
                           *(undefined8 *)(pFVar3 + (longlong)iVar10 * 0x38 + 0x18));
        if (cVar7 != '\0') {
          return param_1->Size;
        }
        if (1 < (byte)LogAnalysisCache._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
        }
      }
    }
    else if (1 < (byte)LogAnalysisCache._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
    }
  }
  return 0;
}

// LoadVersion1 @ 14d3e6fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TraceServices::FAnalysisCache::FFileContents::LoadVersion1(FFileContents *this,IFileHandle *param_1)

{
  ulonglong *puVar1;
  atomic<unsigned___int64> *paVar2;
  longlong *plVar3;
  atomic<unsigned___int64> aVar4;
  longlong lVar5;
  ulonglong uVar6;
  code *pcVar7;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar8;
  FSharedBuffer FVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 uVar12;
  ulong64 uVar13;
  void *pvVar14;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar15;
  void *pvVar16;
  int iVar17;
  undefined1 auStack_1c8 [32];
  void *local_1a8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_198;
  TCbBuffer<FCbFieldView> local_190;
  longlong *local_178;
  code *local_170;
  code *local_168;
  char *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FCbFieldView local_148;
  TStringView<char8_t> local_138;
  FArchiveState local_128;
  undefined8 local_98;
  void *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  longlong *local_58;
  uchar local_50 [24];
  ulonglong local_38;
  void *pvVar18;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  FUniqueBuffer::Alloc((ulong64)&local_198);
  TVar15.Owner = local_198.Owner;
  pvVar16 = (void *)0x0;
  pcVar7 = *(code **)((longlong)*param_1 + 0x20);
  pvVar14 = pvVar16;
  pvVar18 = pvVar16;
  if (local_198.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_198.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_198.Owner)->_padding_ + 8))(local_198.Owner);
    }
    TVar8.Owner = local_198.Owner;
    pvVar18 = (void *)(TVar15.Owner)->Size;
    if (local_198.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)(local_198.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)((local_198.Owner)->_padding_ + 8))(local_198.Owner);
      }
      pvVar14 = (TVar8.Owner)->Data;
    }
  }
  (*pcVar7)(param_1,pvVar14,pvVar18);
  TVar15.Owner = local_198.Owner;
  pvVar18 = pvVar16;
  if (local_198.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_198.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_198.Owner)->_padding_ + 8))(local_198.Owner);
    }
    pvVar18 = (void *)(TVar15.Owner)->Size;
  }
  iVar17 = (int)pvVar18;
  if (((pvVar18 != (void *)(longlong)iVar17) || (TVar15.Owner = local_198.Owner, iVar17 < 0)) &&
     (local_1a8 = pvVar18,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
     TVar15.Owner = local_198.Owner, bVar11)) {
    pcVar7 = (code *)swi(3);
    uVar12 = (*pcVar7)();
    return (bool)uVar12;
  }
  if (TVar15.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(TVar15.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((TVar15.Owner)->_padding_ + 8))(TVar15.Owner);
    }
    pvVar16 = (TVar15.Owner)->Data;
  }
  if ((iVar17 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    uVar12 = (*pcVar7)();
    return (bool)uVar12;
  }
  local_128._padding_ = 0;
  local_128.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_128.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_128.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_128.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_128._40_8_ = 0;
  local_128.ArSerializingDefaults = 0;
  local_128.ArPortFlags = 0;
  local_128.ArMaxSerializeSize = 0;
  local_128.ArUEVer.FileVersionUE4 = 0;
  local_128.ArUEVer.FileVersionUE5 = 0;
  local_128.ArLicenseeUEVer = 0;
  local_128.ArEngineVer.Major = 0;
  local_128.ArEngineVer.Minor = 0;
  local_128.ArEngineVer.Patch = 0;
  local_128.ArEngineVer._6_2_ = 0;
  local_128.ArEngineVer.Changelist = 0;
  local_128.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_128.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_128.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_128.SerializedProperty = (FProperty *)0x0;
  local_128.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_128.bCustomVersionsAreReset = false;
  local_128._129_7_ = 0;
  local_128.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_128);
  local_88 = (longlong)iVar17;
  local_98 = 0;
  local_80 = 0x7fffffffffffffff;
  local_128._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_90 = pvVar16;
  FArchiveState::SetIsLoading(&local_128,true);
  (**(code **)(local_128._padding_ + 0x108))(&local_128,0);
  local_128._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_4_ = 0;
  local_78._12_4_ = 0;
  FCbObjectView::FCbObjectView((FCbObjectView *)(local_78 + 0x10));
  local_58 = (longlong *)0x0;
  local_50[0x10] = '\0';
  local_50[0x11] = '\0';
  local_50[0x12] = '\0';
  local_50[0x13] = '\0';
  local_168 = FUniqueBuffer::Alloc;
  local_170 = UE::Core::Private::Function::
              TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
              ::Call;
  local_50[0] = '\0';
  local_50[1] = '\0';
  local_50[2] = '\0';
  local_50[3] = '\0';
  local_50[4] = '\0';
  local_50[5] = '\0';
  local_50[6] = '\0';
  local_50[7] = '\0';
  local_50[8] = '\0';
  local_50[9] = '\0';
  local_50[10] = '\0';
  local_50[0xb] = '\0';
  local_50[0xc] = '\0';
  local_50[0xd] = '\0';
  local_50[0xe] = '\0';
  local_50[0xf] = '\0';
  bVar11 = FCbPackage::TryLoad((FCbPackage *)local_78,(FArchive *)&local_128,
                               (TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_170);
  if (bVar11) {
    uStack_150 = 7;
    local_158 = "Version";
    local_138._12_4_ = uStack_14c;
    local_138.Size = 7;
    local_138.DataPtr = "Version";
    FCbObjectView::FindView((FCbObjectView *)(local_78 + 0x10),&local_148,&local_138);
    if ((local_148.TypeWithFlags & CustomByName) == None) {
      local_190._padding_ = 0;
      local_190._padding_ = 0;
      local_190.Buffer.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    }
    else {
      if (local_58 != (longlong *)0x0) {
        LOCK();
        puVar1 = (ulonglong *)(local_58 + 3);
        uVar6 = *puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
        if ((uVar6 & 0x3fffffff) == 0) {
          LOCK();
          local_58[3] = local_58[3] + 0x40000000;
          UNLOCK();
        }
      }
      local_178 = local_58;
      TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                (&local_190,&local_148,(FSharedBuffer)&local_178);
    }
    uVar13 = FCbFieldView::AsInteger((FCbFieldView *)&local_190,0,(FIntegerParams)0x40);
    FVar9.Owner.Owner = local_190.Buffer.Owner.Owner;
    this->Version = (uint)uVar13;
    if (local_190.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar2 = (atomic<unsigned___int64> *)((longlong)local_190.Buffer.Owner.Owner + 0x18);
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -1);
      UNLOCK();
      if ((aVar4._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_190.Buffer.Owner.Owner + 0x10))
                  (local_190.Buffer.Owner.Owner);
        *(void **)((longlong)FVar9.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar9.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar2 = (atomic<unsigned___int64> *)((longlong)FVar9.Owner.Owner + 0x18);
        aVar4 = *paVar2;
        *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar9.Owner.Owner)(FVar9.Owner.Owner,1);
        }
      }
    }
    LoadVersion1Index(this,(FCbPackage *)local_78);
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  plVar10 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 3;
    lVar5 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (((uint)lVar5 & 0x3fffffff) == 1) {
      (**(code **)(*local_58 + 0x10))(local_58);
      plVar10[1] = 0;
      plVar10[2] = 0;
      LOCK();
      puVar1 = (ulonglong *)(plVar10 + 3);
      uVar6 = *puVar1;
      *puVar1 = *puVar1 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar6 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar10)(plVar10,1);
      }
    }
  }
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_78._0_8_,local_78._8_4_);
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  FArchive::~FArchive((FArchive *)&local_128);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_198);
  return bVar11;
}

// LoadVersion1Index @ 14d3e73b0

void __thiscall
TraceServices::FAnalysisCache::FFileContents::LoadVersion1Index
          (FFileContents *this,FCbPackage *param_1)

{
  ulonglong *puVar1;
  TArray<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int *piVar3;
  atomic<unsigned___int64> *paVar4;
  ulonglong uVar5;
  atomic<unsigned___int64> aVar6;
  void *pvVar7;
  code *pcVar8;
  FSharedBuffer FVar9;
  bool bVar10;
  int iVar11;
  ulong64 uVar12;
  FString *pFVar13;
  TMemoryView<void_const_> *pTVar14;
  FScriptContainerElement *pFVar15;
  ulong64 _Size;
  FScriptContainerElement *pFVar16;
  int iVar17;
  longlong local_res18;
  ulong64 local_res20;
  TCbBuffer<FCbFieldView> local_2c8;
  TCbBuffer<FCbFieldView> local_2b0;
  FCbObjectView local_298;
  longlong local_288 [2];
  undefined8 local_278;
  undefined8 uStack_270;
  TCbFieldIterator<FCbFieldView> local_268;
  TCbFieldIterator<FCbFieldView> local_250;
  char *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  FCbFieldView local_228;
  FCbFieldView local_218;
  char *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  char *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  char *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  TMemoryView<void_const_> local_1c8;
  TStringView<char8_t> local_1b8;
  char *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  FCbFieldView local_198;
  FCbFieldView local_188;
  TMemoryView<void_const_> local_178;
  FCbFieldView local_168;
  TStringView<char8_t> local_158;
  FCbFieldView local_148;
  TStringView<char8_t> local_138;
  FCbFieldView local_128;
  TStringView<char8_t> local_118;
  FCbFieldView local_108;
  FString local_f8;
  FString local_e8;
  TMemoryView<void_const_> local_d8;
  TStringView<char8_t> local_c8;
  FCbFieldView local_b8;
  FCbFieldView local_a8;
  TStringView<char8_t> local_98;
  TStringView<char8_t> local_88;
  TStringView<char8_t> local_78;
  TMemoryView<void_const_> local_68 [2];
  
  uStack_230 = 5;
  local_238 = "Index";
  local_98._12_4_ = uStack_22c;
  local_98.Size = 5;
  local_98.DataPtr = "Index";
  FCbObjectView::FindView((FCbObjectView *)&param_1->Object,&local_228,&local_98);
  if ((local_228.TypeWithFlags & CustomByName) == None) {
    local_2c8._padding_ = 0;
    local_2c8._padding_ = 0;
    local_2c8.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  }
  else {
    local_res18 = *(longlong *)&(param_1->Object).field_0x10;
    if (local_res18 != 0) {
      LOCK();
      puVar1 = (ulonglong *)(local_res18 + 0x18);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(local_res18 + 0x18) = *(longlong *)(local_res18 + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
              (&local_2c8,&local_228,(FSharedBuffer)&local_res18);
  }
  FCbFieldView::AsArrayView((FCbFieldView *)&local_2c8,(FCbArrayView *)&local_218);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_2c8.Buffer.Owner);
  pTVar2 = &this->IndexEntries;
  uVar12 = FCbArrayView::Num((FCbArrayView *)&local_218);
  iVar11 = (int)uVar12;
  if (-1 < iVar11) {
    piVar3 = &(this->IndexEntries).ArrayMax;
    if ((this->IndexEntries).ArrayMax < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar11,&pTVar2->AllocatorInstance,(this->IndexEntries).ArrayNum,piVar3);
    }
    FCbFieldView::CreateViewIterator(&local_218,(FCbFieldViewIterator *)&local_268);
    while( true ) {
      if (((byte)local_268._padding_ & 0x1f) == 0) {
        uStack_1a0 = 6;
        local_1a8 = "Blocks";
        local_c8._12_4_ = uStack_19c;
        local_c8.Size = 6;
        local_c8.DataPtr = "Blocks";
        FCbObjectView::FindView((FCbObjectView *)&param_1->Object,&local_198,&local_c8);
        if ((local_198.TypeWithFlags & CustomByName) == None) {
          local_2b0._padding_ = 0;
          local_2b0._padding_ = 0;
          local_2b0.Buffer.Owner.Owner =
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
        }
        else {
          local_288[0] = *(longlong *)&(param_1->Object).field_0x10;
          if (local_288[0] != 0) {
            LOCK();
            puVar1 = (ulonglong *)(local_288[0] + 0x18);
            uVar5 = *puVar1;
            *puVar1 = *puVar1 + 1;
            UNLOCK();
            if ((uVar5 & 0x3fffffff) == 0) {
              LOCK();
              *(longlong *)(local_288[0] + 0x18) = *(longlong *)(local_288[0] + 0x18) + 0x40000000;
              UNLOCK();
            }
          }
          TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                    (&local_2b0,&local_198,(FSharedBuffer)local_288);
        }
        FCbFieldView::AsArrayView((FCbFieldView *)&local_2b0,(FCbArrayView *)&local_188);
        FVar9.Owner.Owner = local_2b0.Buffer.Owner.Owner;
        if (local_2b0.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
          LOCK();
          paVar4 = (atomic<unsigned___int64> *)((longlong)local_2b0.Buffer.Owner.Owner + 0x18);
          aVar6 = *paVar4;
          *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -1);
          UNLOCK();
          if ((aVar6._0_4_ & 0x3fffffff) == 1) {
            (**(code **)(*(longlong *)local_2b0.Buffer.Owner.Owner + 0x10))
                      (local_2b0.Buffer.Owner.Owner);
            *(void **)((longlong)FVar9.Owner.Owner + 8) = (void *)0x0;
            *(ulong64 *)((longlong)FVar9.Owner.Owner + 0x10) = 0;
            LOCK();
            paVar4 = (atomic<unsigned___int64> *)((longlong)FVar9.Owner.Owner + 0x18);
            aVar6 = *paVar4;
            *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 - 0x40000000);
            UNLOCK();
            if (((uint)((ulonglong)aVar6 >> 0x1e) & 0x3fffffff) == 1) {
              (*(code *)**(undefined8 **)FVar9.Owner.Owner)(FVar9.Owner.Owner,1);
            }
          }
        }
        uVar12 = FCbArrayView::Num((FCbArrayView *)&local_188);
        iVar11 = (int)uVar12;
        if (-1 < iVar11) {
          piVar3 = &(this->Blocks).ArrayMax;
          if ((this->Blocks).ArrayMax < iVar11) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,iVar11,&(this->Blocks).AllocatorInstance,(this->Blocks).ArrayNum,
                       piVar3);
          }
          FCbFieldView::CreateViewIterator(&local_188,(FCbFieldViewIterator *)&local_250);
          while( true ) {
            if (((byte)local_250._padding_ & 0x1f) == 0) {
              return;
            }
            iVar11 = (this->Blocks).ArrayNum;
            if (iVar11 == *piVar3) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x838,&(this->Blocks).AllocatorInstance,piVar3);
            }
            local_178.Data = (void *)0x0;
            (this->Blocks).ArrayNum = iVar11 + 1;
            local_178.Size = 0;
            pFVar16 = (this->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 0x38;
            *(undefined8 *)pFVar16 = 0;
            *(undefined8 *)(pFVar16 + 8) = 0;
            *(undefined8 *)(pFVar16 + 0x10) = 0;
            *(undefined8 *)(pFVar16 + 0x18) = 0;
            *(undefined8 *)(pFVar16 + 0x20) = 0;
            *(undefined8 *)(pFVar16 + 0x28) = 0;
            *(undefined8 *)(pFVar16 + 0x30) = 0;
            pTVar14 = FCbFieldView::AsBinaryView(&local_b8,local_68,&local_178);
            uVar5 = pTVar14->Size;
            pvVar7 = pTVar14->Data;
            if ((0x38 < uVar5) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InView.Size <= Size",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                                    ,0xdb,
                                    L"Failed to copy from a view of %llu bytes to a view of %llu bytes."
                                   ), bVar10)) break;
            if (uVar5 != 0) {
              memcpy(pFVar16,pvVar7,uVar5);
            }
            TCbFieldIterator<FCbFieldView>::operator++(&local_250);
          }
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar12 & 0xffffffff);
      }
      iVar17 = 0;
      FCbFieldView::AsObjectView(&local_a8,&local_298);
      local_208 = "N";
      uStack_200 = 1;
      local_78._12_4_ = uStack_1fc;
      local_78.Size = 1;
      local_78.DataPtr = "N";
      FCbObjectView::FindView(&local_298,&local_168,&local_78);
      uStack_270 = 0;
      local_278 = 0;
      local_88.DataPtr = (uchar *)0x0;
      local_88.Size = 0;
      local_88._12_4_ = 0;
      FCbFieldView::AsString(&local_168,&local_1b8,&local_88);
      local_1f8 = "I";
      uStack_1f0 = 1;
      local_158._12_4_ = uStack_1ec;
      local_158.Size = 1;
      local_158.DataPtr = "I";
      FCbObjectView::FindView(&local_298,&local_148,&local_158);
      uVar12 = FCbFieldView::AsInteger(&local_148,0,(FIntegerParams)0x40);
      uStack_1e0 = 1;
      local_1e8 = &s_F;
      local_138._12_4_ = uStack_1dc;
      local_138.Size = 1;
      local_138.DataPtr = "F";
      FCbObjectView::FindView(&local_298,&local_128,&local_138);
      local_res20 = FCbFieldView::AsInteger(&local_128,0,(FIntegerParams)0x40);
      uStack_1d0 = 2;
      local_1d8 = "UD";
      local_118._12_4_ = uStack_1cc;
      local_118.Size = 2;
      local_118.DataPtr = "UD";
      FCbObjectView::FindView(&local_298,&local_108,&local_118);
      local_1c8.Data = (void *)0x0;
      local_1c8.Size = 0;
      FCbFieldView::AsBinaryView(&local_108,&local_d8,&local_1c8);
      iVar11 = (this->IndexEntries).ArrayNum;
      if (iVar11 == *piVar3) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,&pTVar2->AllocatorInstance,piVar3);
      }
      (this->IndexEntries).ArrayNum = iVar11 + 1;
      pFVar15 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x58;
      *(undefined8 *)pFVar15 = 0;
      *(undefined8 *)(pFVar15 + 8) = 0;
      *(undefined8 *)(pFVar15 + 0x10) = 0;
      *(undefined8 *)(pFVar15 + 0x18) = 0;
      *(undefined8 *)(pFVar15 + 0x20) = 0;
      *(undefined8 *)(pFVar15 + 0x28) = 0;
      *(undefined8 *)(pFVar15 + 0x30) = 0;
      *(undefined8 *)(pFVar15 + 0x38) = 0;
      *(undefined8 *)(pFVar15 + 0x40) = 0;
      *(undefined8 *)(pFVar15 + 0x48) = 0;
      *(undefined8 *)(pFVar15 + 0x50) = 0;
      pFVar13 = ::FString::ConstructFromPtrSize(&local_f8,local_1b8.DataPtr,local_1b8.Size);
      pFVar16 = (FScriptContainerElement *)0x0;
      iVar11 = 0;
      if (&local_e8 != pFVar13) {
        pFVar16 = (pFVar13->Data).AllocatorInstance.Data;
        (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar11 = (pFVar13->Data).ArrayNum;
        iVar17 = (pFVar13->Data).ArrayMax;
        (pFVar13->Data).ArrayNum = 0;
        (pFVar13->Data).ArrayMax = 0;
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (pFVar15 == (FScriptContainerElement *)&local_e8) {
        if (pFVar16 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar16);
        }
      }
      else {
        if (*(void **)pFVar15 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar15);
        }
        *(FScriptContainerElement **)pFVar15 = pFVar16;
        *(int *)(pFVar15 + 8) = iVar11;
        *(int *)(pFVar15 + 0xc) = iVar17;
      }
      _Size = local_d8.Size;
      pvVar7 = local_d8.Data;
      *(int *)(pFVar15 + 0x14) = (int)local_res20;
      *(int *)(pFVar15 + 0x10) = (int)uVar12;
      if ((0x40 < local_d8.Size) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InView.Size <= Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                              ,0xdb,
                              L"Failed to copy from a view of %llu bytes to a view of %llu bytes."),
         bVar10)) break;
      if (_Size != 0) {
        memcpy(pFVar15 + 0x18,pvVar7,_Size);
      }
      if (0x40 < _Size) {
        _Size = 0x40;
      }
      if ((_Size != 0x40) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Remainder.GetSize() == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisCache.cpp"
                              ,0x13c,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      TCbFieldIterator<FCbFieldView>::operator++(&local_268);
    }
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar12 & 0xffffffff);
}

// LoadVersion2 @ 14d3e7a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TraceServices::FAnalysisCache::FFileContents::LoadVersion2(FFileContents *this,IFileHandle *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 uVar9;
  void *pvVar10;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar11;
  void *pvVar12;
  int iVar13;
  undefined1 auStack_178 [32];
  void *local_158;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_148;
  code *local_140;
  code *local_138;
  FArchiveState local_128;
  undefined8 local_98;
  void *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  longlong *local_58;
  uchar local_50 [24];
  ulonglong local_38;
  void *pvVar14;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  FUniqueBuffer::Alloc((ulong64)&local_148);
  TVar11.Owner = local_148.Owner;
  pvVar12 = (void *)0x0;
  pcVar5 = *(code **)((longlong)*param_1 + 0x20);
  pvVar10 = pvVar12;
  pvVar14 = pvVar12;
  if (local_148.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_148.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_148.Owner)->_padding_ + 8))(local_148.Owner);
    }
    TVar6.Owner = local_148.Owner;
    pvVar14 = (void *)(TVar11.Owner)->Size;
    if (local_148.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)(local_148.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)((local_148.Owner)->_padding_ + 8))(local_148.Owner);
      }
      pvVar10 = (TVar6.Owner)->Data;
    }
  }
  (*pcVar5)(param_1,pvVar10,pvVar14);
  TVar11.Owner = local_148.Owner;
  pvVar14 = pvVar12;
  if (local_148.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_148.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_148.Owner)->_padding_ + 8))(local_148.Owner);
    }
    pvVar14 = (void *)(TVar11.Owner)->Size;
  }
  iVar13 = (int)pvVar14;
  if (((pvVar14 != (void *)(longlong)iVar13) || (TVar11.Owner = local_148.Owner, iVar13 < 0)) &&
     (local_158 = pvVar14,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("IntFitsIn<OutType>(In)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                        ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
     TVar11.Owner = local_148.Owner, bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  if (TVar11.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(TVar11.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((TVar11.Owner)->_padding_ + 8))(TVar11.Owner);
    }
    pvVar12 = (TVar11.Owner)->Data;
  }
  if ((iVar13 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_128._padding_ = 0;
  local_128.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_128.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_128.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_128.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_128._40_8_ = 0;
  local_128.ArSerializingDefaults = 0;
  local_128.ArPortFlags = 0;
  local_128.ArMaxSerializeSize = 0;
  local_128.ArUEVer.FileVersionUE4 = 0;
  local_128.ArUEVer.FileVersionUE5 = 0;
  local_128.ArLicenseeUEVer = 0;
  local_128.ArEngineVer.Major = 0;
  local_128.ArEngineVer.Minor = 0;
  local_128.ArEngineVer.Patch = 0;
  local_128.ArEngineVer._6_2_ = 0;
  local_128.ArEngineVer.Changelist = 0;
  local_128.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_128.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_128.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_128.SerializedProperty = (FProperty *)0x0;
  local_128.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_128.bCustomVersionsAreReset = false;
  local_128._129_7_ = 0;
  local_128.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_128);
  local_88 = (longlong)iVar13;
  local_98 = 0;
  local_80 = 0x7fffffffffffffff;
  local_128._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_90 = pvVar12;
  FArchiveState::SetIsLoading(&local_128,true);
  (**(code **)(local_128._padding_ + 0x108))(&local_128,0);
  local_128._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_4_ = 0;
  local_78._12_4_ = 0;
  FCbObjectView::FCbObjectView((FCbObjectView *)(local_78 + 0x10));
  local_58 = (longlong *)0x0;
  local_50[0x10] = '\0';
  local_50[0x11] = '\0';
  local_50[0x12] = '\0';
  local_50[0x13] = '\0';
  local_138 = FUniqueBuffer::Alloc;
  local_140 = UE::Core::Private::Function::
              TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
              ::Call;
  local_50[0] = '\0';
  local_50[1] = '\0';
  local_50[2] = '\0';
  local_50[3] = '\0';
  local_50[4] = '\0';
  local_50[5] = '\0';
  local_50[6] = '\0';
  local_50[7] = '\0';
  local_50[8] = '\0';
  local_50[9] = '\0';
  local_50[10] = '\0';
  local_50[0xb] = '\0';
  local_50[0xc] = '\0';
  local_50[0xd] = '\0';
  local_50[0xe] = '\0';
  local_50[0xf] = '\0';
  bVar8 = FCbPackage::TryLoad((FCbPackage *)local_78,(FArchive *)&local_128,
                              (TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_140);
  if (bVar8) {
    LoadVersion1Index(this,(FCbPackage *)local_78);
  }
  plVar7 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*local_58 + 0x10))(local_58);
      plVar7[1] = 0;
      plVar7[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar7 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar7)(plVar7,1);
      }
    }
  }
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_78._0_8_,local_78._8_4_);
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  FArchive::~FArchive((FArchive *)&local_128);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_148);
  return bVar8;
}

// ReadHeader @ 14d3fd130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl TraceServices::FAnalysisCache::FFileContents::ReadHeader(IFileHandle *param_1)

{
  undefined1 auStack_38 [32];
  char local_18;
  char local_17;
  uint local_16;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  (**(code **)((longlong)*param_1 + 0x10))(param_1,0);
  (**(code **)((longlong)*param_1 + 0x20))(param_1,&local_18,6);
  if ((local_18 == 'U') && (local_17 == 'C')) {
    return local_16;
  }
  (**(code **)((longlong)*param_1 + 0x10))(param_1,0);
  return 1;
}

// Save @ 14d4019c0

bool __thiscall TraceServices::FAnalysisCache::FFileContents::Save(FFileContents *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  IFileHandle *pIVar4;
  
  pIVar4 = GetFileHandleForWrite(this);
  if (pIVar4 == (IFileHandle *)0x0) {
    return true;
  }
  (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,0);
  if (this->Version == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Version > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisCache.cpp"
                       ,0x9b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->Version != 1) {
    if (this->Version != 2) {
      return false;
    }
    bVar2 = SaveVersion2(this,pIVar4);
    return bVar2;
  }
  bVar2 = SaveVersion1(this,pIVar4);
  return bVar2;
}

// SaveVersion1 @ 14d401a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TraceServices::FAnalysisCache::FFileContents::SaveVersion1(FFileContents *this,IFileHandle *param_1)

{
  code *pcVar1;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar2;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar3;
  undefined1 uVar4;
  FCbFieldIterator *this_00;
  FCbObject *pFVar5;
  void *pvVar6;
  ulong64 uVar7;
  undefined1 auStack_1c8 [32];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1a8 [2];
  char *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  FCbWriter local_178;
  FArchiveState local_148;
  void *local_b8;
  undefined8 local_b0;
  ulong64 local_a8;
  undefined2 local_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  FCbWriter::FCbWriter(&local_178);
  FCbWriter::BeginObject(&local_178);
  uStack_190 = 7;
  local_198 = "Version";
  FCbWriter::SetNameOrAddString(&local_178,(TStringView<char8_t> *)&local_198);
  FCbWriter::AddInteger(&local_178,1);
  SaveVersion1Index(this,&local_178);
  FCbWriter::EndObject(&local_178);
  this_00 = FCbWriter::Save(&local_178,(FCbFieldIterator *)local_98);
  pFVar5 = FCbField::AsObject((FCbField *)this_00,(FCbObject *)&local_198);
  FCbPackage::FCbPackage((FCbPackage *)local_78,pFVar5);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_98 + 0x10));
  FUniqueBuffer::Alloc((ulong64)local_1a8);
  TVar2.Owner = local_1a8[0].Owner;
  if (local_1a8[0].Owner == (FBufferOwner *)0x0) {
    uVar7 = 0;
LAB_14d401b95:
    pvVar6 = (void *)0x0;
  }
  else {
    if (((ulonglong)(local_1a8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_1a8[0].Owner)->_padding_ + 8))(local_1a8[0].Owner);
    }
    TVar3.Owner = local_1a8[0].Owner;
    uVar7 = (TVar2.Owner)->Size;
    if (local_1a8[0].Owner == (FBufferOwner *)0x0) goto LAB_14d401b95;
    if (((ulonglong)(local_1a8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_1a8[0].Owner)->_padding_ + 8))(local_1a8[0].Owner);
    }
    pvVar6 = (TVar3.Owner)->Data;
  }
  FArchiveState::FArchiveState(&local_148);
  local_148._padding_ = (longlong)&___7FBufferWriter__6B_;
  local_b0 = 0;
  local_a0 = 0;
  local_b8 = pvVar6;
  local_a8 = uVar7;
  FArchiveState::SetIsSaving(&local_148,true);
  FCbPackage::Save((FCbPackage *)local_78,(FArchive *)&local_148);
  TVar2.Owner = local_1a8[0].Owner;
  pcVar1 = *(code **)((longlong)*param_1 + 0x30);
  if (local_1a8[0].Owner == (FBufferOwner *)0x0) {
    uVar7 = 0;
  }
  else {
    if (((ulonglong)(local_1a8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_1a8[0].Owner)->_padding_ + 8))(local_1a8[0].Owner);
    }
    uVar7 = (TVar2.Owner)->Size;
    if (local_1a8[0].Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)(local_1a8[0].Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)((local_1a8[0].Owner)->_padding_ + 8))(local_1a8[0].Owner);
      }
      pvVar6 = (local_1a8[0].Owner)->Data;
      goto LAB_14d401c2e;
    }
  }
  pvVar6 = (void *)0x0;
LAB_14d401c2e:
  uVar4 = (*pcVar1)(param_1,pvVar6,uVar7);
  local_148._padding_ = (longlong)&___7FBufferWriter__6B_;
  if ((char)local_a0 != '\0') {
    FMemory::Free(local_b8);
    local_b8 = (void *)0x0;
  }
  FArchive::~FArchive((FArchive *)&local_148);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_1a8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_78 + 0x20));
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_78._0_8_,local_78._8_4_);
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  FCbWriter::~FCbWriter(&local_178);
  return (bool)uVar4;
}

// SaveVersion1Index @ 14d401cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::FAnalysisCache::FFileContents::SaveVersion1Index
          (FFileContents *this,FCbWriter *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  TStringView<char8_t> local_e8;
  TStringView<char8_t> local_d8;
  char *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  FString local_98;
  uint local_88;
  uint local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  uStack_c0 = 5;
  local_c8 = "Index";
  local_d8._12_4_ = uStack_bc;
  local_d8.Size = 5;
  local_d8.DataPtr = "Index";
  FCbWriter::SetName(param_1,&local_d8);
  FCbWriter::BeginArray(param_1);
  iVar1 = (this->IndexEntries).ArrayNum;
  pFVar2 = (this->IndexEntries).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x58;
  while( true ) {
    if ((this->IndexEntries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    if (pFVar2 == pFVar3) break;
    ::FString::FString(&local_98,(FString *)pFVar2);
    local_80 = *(undefined8 *)(pFVar2 + 0x18);
    uStack_78 = *(undefined8 *)(pFVar2 + 0x20);
    local_88 = *(uint *)&pFVar2[0x10].field_0x0;
    local_70 = *(undefined8 *)(pFVar2 + 0x28);
    uStack_68 = *(undefined8 *)(pFVar2 + 0x30);
    local_84 = *(uint *)(pFVar2 + 0x14);
    local_60 = *(undefined8 *)(pFVar2 + 0x38);
    uStack_58 = *(undefined8 *)(pFVar2 + 0x40);
    local_50 = *(undefined8 *)(pFVar2 + 0x48);
    uStack_48 = *(undefined8 *)(pFVar2 + 0x50);
    FCbWriter::BeginObject(param_1);
    local_c8 = "N";
    uStack_c0 = 1;
    local_e8._12_4_ = uStack_bc;
    local_e8.Size = 1;
    local_e8.DataPtr = "N";
    FCbWriter::SetNameOrAddString(param_1,&local_e8);
    FCbWriter::operator<<(param_1,&local_98);
    local_b8 = "I";
    uStack_b0 = 1;
    local_e8._12_4_ = uStack_ac;
    local_e8.Size = 1;
    local_e8.DataPtr = "I";
    FCbWriter::SetNameOrAddString(param_1,&local_e8);
    FCbWriter::AddInteger(param_1,local_88);
    uStack_a0 = 1;
    local_a8 = &s_F;
    local_e8._12_4_ = uStack_9c;
    local_e8.Size = 1;
    local_e8.DataPtr = "F";
    FCbWriter::SetNameOrAddString(param_1,&local_e8);
    FCbWriter::AddInteger(param_1,local_84);
    local_d8.Size = 2;
    local_d8.DataPtr = "UD";
    local_e8.DataPtr = "UD";
    local_e8.Size = 2;
    local_e8._12_4_ = local_d8._12_4_;
    FCbWriter::SetName(param_1,&local_e8);
    FCbWriter::AddBinary(param_1,&local_80,0x40);
    FCbWriter::EndObject(param_1);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    pFVar2 = pFVar2 + 0x58;
  }
  FCbWriter::EndArray(param_1);
  local_d8.Size = 6;
  local_d8.DataPtr = "Blocks";
  local_e8.DataPtr = "Blocks";
  local_e8.Size = 6;
  local_e8._12_4_ = local_d8._12_4_;
  FCbWriter::SetName(param_1,&local_e8);
  FCbWriter::BeginArray(param_1);
  iVar1 = (this->Blocks).ArrayNum;
  pFVar2 = (this->Blocks).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->Blocks).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::FAnalysisCache::FFileContents::FBlockEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    if (pFVar2 == pFVar3) break;
    FCbWriter::AddBinary(param_1,pFVar2,0x38);
    pFVar2 = pFVar2 + 0x38;
  }
  FCbWriter::EndArray(param_1);
  return;
}

// SaveVersion2 @ 14d401f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TraceServices::FAnalysisCache::FFileContents::SaveVersion2(FFileContents *this,IFileHandle *param_1)

{
  code *pcVar1;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar2;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar3;
  bool bVar4;
  undefined1 uVar5;
  FCbFieldIterator *this_00;
  FCbObject *pFVar6;
  void *pvVar7;
  ulong64 uVar8;
  undefined1 auStack_1c8 [32];
  undefined2 local_1a8;
  undefined1 local_1a6;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1a0;
  FCbWriter local_198;
  FArchiveState local_168;
  void *local_d8;
  undefined8 local_d0;
  ulong64 local_c8;
  undefined2 local_c0;
  undefined1 local_b8 [32];
  FCbObject local_98;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if (this->Version == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Version != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisCache.cpp"
                       ,0xd3,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  local_1a8 = _s_UC;
  local_1a6 = DAT_152b093d2;
  (**(code **)((longlong)*param_1 + 0x30))(param_1,&local_1a8,2);
  (**(code **)((longlong)*param_1 + 0x30))(param_1,&this->Version,4);
  FCbWriter::FCbWriter(&local_198);
  FCbWriter::BeginObject(&local_198);
  SaveVersion1Index(this,&local_198);
  FCbWriter::EndObject(&local_198);
  this_00 = FCbWriter::Save(&local_198,(FCbFieldIterator *)local_b8);
  pFVar6 = FCbField::AsObject((FCbField *)this_00,&local_98);
  FCbPackage::FCbPackage((FCbPackage *)local_78,pFVar6);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_b8 + 0x10));
  FUniqueBuffer::Alloc((ulong64)&local_1a0);
  TVar2.Owner = local_1a0.Owner;
  if (local_1a0.Owner == (FBufferOwner *)0x0) {
    uVar8 = 0;
LAB_14d4020a1:
    pvVar7 = (void *)0x0;
  }
  else {
    if (((ulonglong)(local_1a0.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_1a0.Owner)->_padding_ + 8))(local_1a0.Owner);
    }
    TVar3.Owner = local_1a0.Owner;
    uVar8 = (TVar2.Owner)->Size;
    if (local_1a0.Owner == (FBufferOwner *)0x0) goto LAB_14d4020a1;
    if (((ulonglong)(local_1a0.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_1a0.Owner)->_padding_ + 8))(local_1a0.Owner);
    }
    pvVar7 = (TVar3.Owner)->Data;
  }
  FArchiveState::FArchiveState(&local_168);
  local_168._padding_ = (longlong)&___7FBufferWriter__6B_;
  local_d0 = 0;
  local_c0 = 0;
  local_d8 = pvVar7;
  local_c8 = uVar8;
  FArchiveState::SetIsSaving(&local_168,true);
  FCbPackage::Save((FCbPackage *)local_78,(FArchive *)&local_168);
  TVar2.Owner = local_1a0.Owner;
  pcVar1 = *(code **)((longlong)*param_1 + 0x30);
  if (local_1a0.Owner == (FBufferOwner *)0x0) {
    uVar8 = 0;
  }
  else {
    if (((ulonglong)(local_1a0.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_1a0.Owner)->_padding_ + 8))(local_1a0.Owner);
    }
    uVar8 = (TVar2.Owner)->Size;
    if (local_1a0.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)(local_1a0.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)((local_1a0.Owner)->_padding_ + 8))(local_1a0.Owner);
      }
      pvVar7 = (local_1a0.Owner)->Data;
      goto LAB_14d40213e;
    }
  }
  pvVar7 = (void *)0x0;
LAB_14d40213e:
  uVar5 = (*pcVar1)(param_1,pvVar7,uVar8);
  local_168._padding_ = (longlong)&___7FBufferWriter__6B_;
  if ((char)local_c0 != '\0') {
    FMemory::Free(local_d8);
    local_d8 = (void *)0x0;
  }
  FArchive::~FArchive((FArchive *)&local_168);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1a0);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_78 + 0x20));
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_78._0_8_,local_78._8_4_);
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  FCbWriter::~FCbWriter(&local_198);
  return (bool)uVar5;
}

// UpdateBlock @ 14d405e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TraceServices::FAnalysisCache::FFileContents::UpdateBlock
          (FFileContents *this,TMemoryView<void_const_> *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  IFileHandle *pIVar8;
  FBlake3Hash *pFVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  FStaticBasicLogRecord *pFVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  longlong local_c0;
  <lambda_2> local_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  longlong lStack_98;
  int local_90;
  TMemoryView<void_const_> local_88;
  FBlake3Hash local_78;
  int local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pIVar8 = GetFileHandleForWrite(this);
  if (pIVar8 == (IFileHandle *)0x0) {
    return 0;
  }
  uVar18 = (this->Blocks).ArrayNum;
  uVar14 = 0;
  pFVar3 = (this->Blocks).AllocatorInstance.Data;
  uVar16 = uVar18;
  uVar13 = 0;
  if (0 < (int)uVar18) {
    do {
      uVar17 = uVar16 >> 1;
      uVar14 = uVar13;
      if (*(uint *)(pFVar3 + (longlong)(int)(uVar17 + uVar13) * 0x38) < param_2) {
        uVar14 = uVar17 + uVar13 + (uVar16 & 1);
      }
      uVar16 = uVar17;
      uVar13 = uVar14;
    } while (uVar17 != 0);
  }
  if (((int)uVar18 <= (int)uVar14) || (param_2 < *(uint *)(pFVar3 + (longlong)(int)uVar14 * 0x38)))
  {
    uVar14 = 0xffffffff;
  }
  local_88.Data = param_1->Data;
  local_88.Size = param_1->Size;
  pFVar9 = FBlake3::HashBuffer(&local_78,&local_88);
  iVar2 = *(int *)(pFVar9->Hash + 0x10);
  local_b0 = *(longlong *)pFVar9->Hash;
  lStack_a8 = *(longlong *)(pFVar9->Hash + 8);
  local_a0 = local_b0;
  lStack_98 = lStack_a8;
  local_90 = iVar2;
  if (uVar14 == 0xffffffff) {
    cVar6 = (**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,0);
    if ((cVar6 == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bSeekResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisCache.cpp"
                           ,0x195,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return uVar10;
    }
    uVar11 = (**(code **)((longlong)*pIVar8 + 8))(pIVar8);
    if (uVar11 < 0x100000) {
      local_c0 = CONCAT44(local_c0._4_4_,0x100000);
      local_c8 = uVar11;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= ReservedSizeV2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisCache.cpp"
                         ,0x197,L"Offset (%llu) is larger than reserved size (%u)");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return uVar10;
      }
    }
    uVar10 = param_1->Size;
    cVar6 = (**(code **)((longlong)*pIVar8 + 0x30))(pIVar8,param_1->Data,uVar10);
    if (cVar6 != '\0') {
      iVar7 = (this->Blocks).ArrayNum;
      piVar1 = &(this->Blocks).ArrayMax;
      local_78.Hash[4] = '\0';
      local_78.Hash[5] = '\0';
      local_78.Hash[6] = '\0';
      local_78.Hash[7] = '\0';
      local_78.Hash[0x10] = '\0';
      local_78.Hash[0x11] = '\0';
      local_78.Hash[0x12] = '\0';
      local_78.Hash[0x13] = '\0';
      local_78.Hash[0x14] = '\0';
      local_78.Hash[0x15] = '\0';
      local_78.Hash[0x16] = '\0';
      local_78.Hash[0x17] = '\0';
      local_78.Hash._0_4_ = param_2;
      local_78.Hash._8_8_ = uVar11;
      local_78.Hash._24_8_ = uVar10;
      local_48 = iVar2;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&(this->Blocks).AllocatorInstance,piVar1);
      }
      pFVar3 = (this->Blocks).AllocatorInstance.Data;
      (this->Blocks).ArrayNum = iVar7 + 1;
      lVar15 = (longlong)iVar7 * 0x38;
      *(ulonglong *)(pFVar3 + lVar15) = CONCAT44(local_78.Hash._4_4_,local_78.Hash._0_4_);
      *(undefined8 *)(pFVar3 + lVar15 + 8) = local_78.Hash._8_8_;
      *(undefined8 *)(pFVar3 + lVar15 + 0x10) = local_78.Hash._16_8_;
      *(undefined8 *)(pFVar3 + lVar15 + 0x10 + 8) = local_78.Hash._24_8_;
      *(longlong *)(pFVar3 + lVar15 + 0x20) = local_b0;
      *(longlong *)(pFVar3 + lVar15 + 0x20 + 8) = lStack_a8;
      *(ulonglong *)(pFVar3 + lVar15 + 0x30) = CONCAT44(uStack_44,local_48);
      AlgoImpl::
      IntroSortInternal<TraceServices::FAnalysisCache::FFileContents::FBlockEntry,int,_TraceServices::FAnalysisCache::FFileContents::UpdateBlock_::__l34::<lambda_2>,TLess<void>_>
                ((FBlockEntry *)(this->Blocks).AllocatorInstance.Data,(this->Blocks).ArrayNum,
                 local_b8,(TLess<void>)local_b8);
      return uVar10;
    }
    if ((byte)LogAnalysisCache._0_1_ < 2) {
      return 0;
    }
    pFVar12 = &::LOG_Static;
  }
  else {
    iVar7 = (this->Blocks).ArrayNum;
    uVar18 = 0;
    if ((int)uVar14 < iVar7) {
      uVar18 = ~uVar14 >> 0x1f;
    }
    if (uVar18 == 0) {
      local_c8 = (ulonglong)(int)uVar14;
      local_c0 = (longlong)iVar7;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return uVar10;
      }
    }
    pFVar3 = (this->Blocks).AllocatorInstance.Data;
    if (((local_b0 == *(longlong *)(pFVar3 + (longlong)(int)uVar14 * 0x38 + 0x20)) &&
        (lStack_a8 == *(longlong *)(pFVar3 + (longlong)(int)uVar14 * 0x38 + 0x28))) &&
       (iVar2 == *(int *)(pFVar3 + (longlong)(int)uVar14 * 0x38 + 0x30))) {
      return 0;
    }
    (**(code **)((longlong)*pIVar8 + 0x10))
              (pIVar8,*(undefined8 *)(pFVar3 + (longlong)(int)uVar14 * 0x38 + 8));
    uVar10 = param_1->Size;
    cVar6 = (**(code **)((longlong)*pIVar8 + 0x30))(pIVar8,param_1->Data,uVar10);
    if (cVar6 != '\0') {
      *(longlong *)(pFVar3 + (longlong)(int)uVar14 * 0x38 + 0x20) = local_b0;
      *(longlong *)(pFVar3 + (longlong)(int)uVar14 * 0x38 + 0x28) = lStack_a8;
      *(int *)(pFVar3 + (longlong)(int)uVar14 * 0x38 + 0x30) = iVar2;
      return uVar10;
    }
    if ((byte)LogAnalysisCache._0_1_ < 2) {
      return 0;
    }
    pFVar12 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar12,(FLogCategoryBase *)&LogAnalysisCache);
  return 0;
}

// WriteHeader @ 14d406760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
TraceServices::FAnalysisCache::FFileContents::WriteHeader(IFileHandle *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  undefined2 local_res8;
  undefined1 local_resa;
  uint local_res10 [2];
  
  local_res10[0] = param_2;
  (**(code **)((longlong)*param_1 + 0x10))(param_1,0);
  local_res8 = _s_UC;
  local_resa = DAT_152b093d2;
  bVar1 = (**(code **)((longlong)*param_1 + 0x30))(param_1,&local_res8,2);
  bVar2 = (**(code **)((longlong)*param_1 + 0x30))(param_1,local_res10,4);
  return (bool)(bVar2 & bVar1 & 1);
}

