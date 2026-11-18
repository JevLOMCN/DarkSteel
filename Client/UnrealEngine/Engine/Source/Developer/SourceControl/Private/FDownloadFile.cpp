// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 7

// FDownloadFile @ 146afee20

/* WARNING: Enum "Type": Some values do not have unique names */

FDownloadFile * __thiscall
FDownloadFile::FDownloadFile(FDownloadFile *this,TStringView<wchar_t> *param_1)

{
  FString *pFVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  FString *pFVar6;
  FText local_28;
  FString local_18;
  
  uVar2 = *(undefined8 *)&param_1->Size;
  pFVar1 = &this->TargetDirectory;
  pwVar3 = param_1->DataPtr;
  this->_padding_ = (longlong)&___7FDownloadFile__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetDirectory).Data.ArrayNum = 0;
  (this->TargetDirectory).Data.ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize(&local_18,pwVar3,(int)uVar2);
  if (pFVar1 != pFVar6) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TargetDirectory).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->TargetDirectory).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(undefined8 *)&this->FileDataMap = 0;
  *(undefined8 *)&(this->FileDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->FileDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->FileDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->FileDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->FileDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->FileDataMap).field_0x48 = 0;
  FPaths::NormalizeDirectoryName(pFVar1);
  FText::FText(&local_28);
  bVar5 = FPaths::ValidatePath(pFVar1,&local_28);
  if ((!bVar5) && (1 < (byte)LogSourceControl._0_1_)) {
    FText::ToString(&local_28);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSourceControl);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return this;
}

// FDownloadFile @ 146afefa0

/* WARNING: Enum "Type": Some values do not have unique names */

FDownloadFile * __thiscall
FDownloadFile::FDownloadFile(FDownloadFile *this,TStringView<wchar_t> *param_1,EVerbosity param_2)

{
  FString *pFVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  FString *pFVar6;
  FText local_38;
  FString local_28;
  
  pFVar1 = &this->TargetDirectory;
  this->_padding_ = 0;
  this->_padding_ = 0;
  uVar2 = *(undefined8 *)&param_1->Size;
  pwVar3 = param_1->DataPtr;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDownloadFile__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetDirectory).Data.ArrayNum = 0;
  (this->TargetDirectory).Data.ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize(&local_28,pwVar3,(int)uVar2);
  if (pFVar1 != pFVar6) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TargetDirectory).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->TargetDirectory).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(undefined8 *)&this->FileDataMap = 0;
  *(undefined8 *)&(this->FileDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->FileDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->FileDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->FileDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->FileDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->FileDataMap).field_0x48 = 0;
  FPaths::NormalizeDirectoryName(pFVar1);
  FText::FText(&local_38);
  bVar5 = FPaths::ValidatePath(pFVar1,&local_38);
  if ((!bVar5) && (1 < (byte)LogSourceControl._0_1_)) {
    FText::ToString(&local_38);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSourceControl);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  this->_padding_ = (longlong)&___7FDownloadFile__6B_;
  if (param_2 == None) {
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  }
  return this;
}

// ~FDownloadFile @ 146b00c70

void __thiscall FDownloadFile::~FDownloadFile(FDownloadFile *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  *(undefined4 *)&(this->FileDataMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->FileDataMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSharedBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FSharedBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FSharedBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileDataMap);
  pFVar4 = (this->TargetDirectory).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FSourceControlResultInfo::~FSourceControlResultInfo((FSourceControlResultInfo *)&this->_padding_);
  this->_padding_ = (longlong)&___7ISourceControlOperation__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// CanBeCalledFromBackgroundThreads @ 146b05760

bool __thiscall FDownloadFile::CanBeCalledFromBackgroundThreads(FDownloadFile *this)

{
  return true;
}

// GetFileData @ 146b17090

FSharedBuffer __thiscall
FDownloadFile::GetFileData(FDownloadFile *this,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  ulonglong uVar2;
  int iVar3;
  wchar_t *pwVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined8 *in_R8;
  undefined1 *puVar10;
  longlong lVar11;
  
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>((int)in_R8[1],(wchar_t *)*in_R8);
  if (*(int *)&(this->FileDataMap).field_0x8 != *(int *)&(this->FileDataMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->FileDataMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->FileDataMap).field_0x38;
    }
    iVar3 = *(int *)(puVar10 + (ulonglong)(*(int *)&(this->FileDataMap).field_0x48 - 1U & uVar5) * 4
                    );
    while (iVar3 != -1) {
      lVar11 = (longlong)iVar3 * 0x20;
      iVar8 = *(int *)(lVar11 + 8 + *(longlong *)&this->FileDataMap);
      iVar9 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar9 = 0;
      }
      iVar8 = (int)in_R8[1];
      if (iVar8 == iVar9) {
        if ((iVar8 != 0) && (iVar9 != 0)) {
          iVar6 = iVar9;
          if (iVar8 < iVar9) {
            iVar6 = iVar8;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*in_R8,
                             *(wchar_t **)(lVar11 + *(longlong *)&this->FileDataMap),(longlong)iVar6
                            );
          if (iVar6 != 0) goto LAB_146b17151;
        }
        if (iVar8 == iVar9) {
          lVar11 = (longlong)iVar3 * 0x20 + *(longlong *)&this->FileDataMap;
          plVar7 = (longlong *)(lVar11 + 0x10);
          if (lVar11 == 0) {
            plVar7 = (longlong *)0x0;
          }
          if (plVar7 != (longlong *)0x0) {
            pwVar4 = (wchar_t *)*plVar7;
            if (pwVar4 != (wchar_t *)0x0) {
              LOCK();
              pwVar1 = pwVar4 + 0xc;
              uVar2 = *(ulonglong *)pwVar1;
              *(ulonglong *)pwVar1 = *(ulonglong *)pwVar1 + 1;
              UNLOCK();
              if ((uVar2 & 0x3fffffff) == 0) {
                LOCK();
                *(longlong *)(pwVar4 + 0xc) = *(longlong *)(pwVar4 + 0xc) + 0x40000000;
                UNLOCK();
              }
            }
            param_1->DataPtr = pwVar4;
            return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
          }
          break;
        }
      }
LAB_146b17151:
      iVar3 = *(int *)(*(longlong *)&this->FileDataMap + 0x18 + lVar11);
    }
  }
  param_1->DataPtr = (wchar_t *)0x0;
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// GetInProgressString @ 146b18220

FText * __thiscall
FDownloadFile::GetInProgressString(FDownloadFile *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SourceControl",L"SourceControl_PrintOperation",
             L"Downloading file from server...");
  return __return_storage_ptr__;
}

// GetName @ 146b18940

FName __thiscall FDownloadFile::GetName(FDownloadFile *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"DownloadFile");
  return in_RDX;
}

