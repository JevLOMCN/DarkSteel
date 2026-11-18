// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DumpGPUServices
// Functions: 2

// ~FDumpGPUHTTPUploadProvider @ 14e2bf160

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDumpGPUHTTPUploadProvider::~FDumpGPUHTTPUploadProvider(FDumpGPUHTTPUploadProvider *this)

{
  TArray<FDumpGPUHTTPUpload_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this_00;
  int iVar1;
  undefined8 *puVar2;
  FDumpGPUHTTPUpload *this_01;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<FDumpGPUHTTPUpload_*> FVar7;
  ForElementType<FDumpGPUHTTPUpload_*> FVar8;
  TSharedPtr<IHttpRequest,1> *pTVar9;
  uint uVar10;
  longlong lVar11;
  
  this->_padding_ = (longlong)&___7FDumpGPUHTTPUploadProvider__6B_;
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                         ,0x15d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = (this->PendingUploads).ArrayNum;
  if (0 < iVar1) {
    this_00 = &this->PendingUploads;
    uVar10 = 1;
    if (1 < iVar1) {
      lVar11 = 8;
      do {
        uVar6 = 0;
        if ((int)uVar10 < (this->PendingUploads).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar7 = (this->PendingUploads).AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<FDumpGPUHTTPUpload_*>)this_00;
        if (FVar7 != (ForElementType<FDumpGPUHTTPUpload_*>)0x0) {
          FVar8 = FVar7;
        }
        puVar2 = *(undefined8 **)(lVar11 + (longlong)FVar8);
        if (puVar2 != (undefined8 *)0x0) {
          pTVar9 = (TSharedPtr<IHttpRequest,1> *)(puVar2 + 0x10);
          if ((TSharedPtr<IHttpRequest,1> *)puVar2[0x18] != (TSharedPtr<IHttpRequest,1> *)0x0) {
            pTVar9 = (TSharedPtr<IHttpRequest,1> *)puVar2[0x18];
          }
          DestructItems<TSharedPtr<IHttpRequest,1>,int>(pTVar9,*(int *)(puVar2 + 0x19));
          if ((void *)puVar2[0x18] != (void *)0x0) {
            FMemory::Free((void *)puVar2[0x18]);
          }
          DestructItems<FString,int>((FString *)puVar2[0xd],*(int *)(puVar2 + 0xe));
          if ((void *)puVar2[0xd] != (void *)0x0) {
            FMemory::Free((void *)puVar2[0xd]);
          }
          if ((void *)puVar2[9] != (void *)0x0) {
            FMemory::Free((void *)puVar2[9]);
          }
          if ((void *)puVar2[7] != (void *)0x0) {
            FMemory::Free((void *)puVar2[7]);
          }
          if ((void *)puVar2[4] != (void *)0x0) {
            FMemory::Free((void *)puVar2[4]);
          }
          if ((void *)puVar2[2] != (void *)0x0) {
            FMemory::Free((void *)puVar2[2]);
          }
          if ((void *)*puVar2 != (void *)0x0) {
            FMemory::Free((void *)*puVar2);
          }
          ::operator_delete(puVar2,0xd0);
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar10 < (this->PendingUploads).ArrayNum);
    }
    TArray<FDumpGPUHTTPUpload_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::SetNum
              (this_00,1,Default);
    if (((this->PendingUploads).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar7 = (this->PendingUploads).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<FDumpGPUHTTPUpload_*>)0x0) {
      FVar7 = (ForElementType<FDumpGPUHTTPUpload_*>)this_00;
    }
    this_01 = *(FDumpGPUHTTPUpload **)FVar7;
    bVar5 = IsInGameThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                           ,0x5a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (this_01->bAbort == false) {
      this_01->bAbort = true;
    }
    if ((this_01->PendingHttpRequests).ArrayNum == 0) {
      FDumpGPUHTTPUpload::Finish(this_01);
    }
    if (((this->PendingUploads).ArrayNum != 0) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8805366337636400792>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                           ,0x168,"PendingUploads.Num() == 0"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar7 = (this->PendingUploads).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<FDumpGPUHTTPUpload_*>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  pFVar3 = (this->UploadURLPattern).Data.AllocatorInstance.Data;
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar3);
  return;
}

// UploadDump @ 14e2c1a70

void __thiscall
FDumpGPUHTTPUploadProvider::UploadDump(FDumpGPUHTTPUploadProvider *this,FDumpParameters *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<FDumpGPUHTTPUpload_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *this_00;
  ForElementType<FDumpGPUHTTPUpload_*> FVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  FString *local_58;
  FString local_50;
  FString local_40;
  FString local_30;
  
  bVar5 = IsInGameThread();
  pwVar9 = L"";
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\DumpGPUServices\\Source\\DumpGPUServices\\Private\\DumpGPUHTTPUploadServices.cpp"
                         ,0x145,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = (FString *)0x0;
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  ::FString::FString(&local_30,GInternalProjectName);
  ::FString::FString(&local_40,"Windows");
  if (&local_50 != &this->UploadURLPattern) {
    iVar6 = (this->UploadURLPattern).Data.ArrayNum;
    _Src = (this->UploadURLPattern).Data.AllocatorInstance.Data;
    local_50.Data.ArrayNum = iVar6;
    if (((iVar6 != 0) || (local_50.Data.ArrayMax != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar6,local_50.Data.ArrayMax,(ForAnyElementType *)&local_50,iVar6,
                   &local_50.Data.ArrayMax), iVar6 != 0)) {
      memcpy(local_50.Data.AllocatorInstance.Data,_Src,(longlong)iVar6 * 2);
    }
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_30.Data.ArrayNum != 0) {
    FVar11.Data = local_30.Data.AllocatorInstance.Data;
  }
  ::FString::ReplaceInline(&local_50,L"[Project]",(wchar_t *)FVar11.Data,IgnoreCase);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_40.Data.ArrayNum != 0) {
    FVar11.Data = local_40.Data.AllocatorInstance.Data;
  }
  ::FString::ReplaceInline(&local_50,L"[Platform]",(wchar_t *)FVar11.Data,IgnoreCase);
  if ((param_1->Time).Data.ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Time).Data.AllocatorInstance.Data;
  }
  ::FString::ReplaceInline(&local_50,L"[DumpTime]",pwVar12,IgnoreCase);
  if ((param_1->Type).Data.ArrayNum != 0) {
    pwVar9 = (wchar_t *)(param_1->Type).Data.AllocatorInstance.Data;
  }
  ::FString::ReplaceInline(&local_50,L"[DumpType]",pwVar9,IgnoreCase);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  this_00 = ::operator_new(0xd0);
  if (this_00 != (FString *)0x0) {
    ::FString::FString(this_00,&param_1->Type);
    ::FString::FString(this_00 + 1,&param_1->LocalPath);
    ::FString::FString(this_00 + 2,&param_1->Time);
    *(FName *)(this_00 + 3) = param_1->CompressionName;
    ::FString::FString((FString *)&this_00[3].Data.ArrayNum,(FString *)&param_1->CompressionFiles);
    FVar11.Data = local_50.Data.AllocatorInstance.Data;
    piVar1 = &this_00[4].Data.ArrayNum;
    this_00[4].Data.ArrayNum = 0;
    this_00[4].Data.ArrayMax = 0;
    piVar2 = (int *)((longlong)&this_00[5].Data.AllocatorInstance.Data + 4);
    lVar10 = (longlong)local_50.Data.ArrayNum;
    *(int *)&this_00[5].Data.AllocatorInstance.Data = local_50.Data.ArrayNum;
    if (local_50.Data.ArrayNum == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_50.Data.ArrayNum,0,(ForAnyElementType *)piVar1,local_50.Data.ArrayNum,
                 piVar2);
      memcpy(*(void **)piVar1,FVar11.Data,lVar10 * 2);
    }
    *(FDumpGPUHTTPUploadProvider **)&this_00[5].Data.ArrayNum = this;
    *(undefined4 *)&this_00[6].Data.AllocatorInstance.Data = 0;
    this_00[6].Data.ArrayNum = 0;
    this_00[6].Data.ArrayMax = 0;
    this_00[7].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[7].Data.ArrayNum = 0;
    *(undefined1 *)&this_00[7].Data.ArrayMax = 0;
    this_00[0xc].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[0xc].Data.ArrayNum = 0;
    this_00[0xc].Data.ArrayMax = 4;
    pFVar8 = this_00;
  }
  FVar7 = (this->PendingUploads).AllocatorInstance.SecondaryData;
  pTVar3 = &this->PendingUploads;
  if (FVar7 == (ForElementType<FDumpGPUHTTPUpload_*>)0x0) {
    FVar7 = (ForElementType<FDumpGPUHTTPUpload_*>)pTVar3;
  }
  local_58 = pFVar8;
  if ((((ulonglong)FVar7 <= &local_58) &&
      (&local_58 < (FString **)((longlong)FVar7 + (longlong)(this->PendingUploads).ArrayMax * 8)))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->PendingUploads).ArrayNum;
  piVar1 = &(this->PendingUploads).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FDumpGPUHTTPUpload_*>_>
                      (0x808,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->PendingUploads).ArrayNum = iVar6 + 1;
  FVar7 = (this->PendingUploads).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<FDumpGPUHTTPUpload_*>)0x0) {
    FVar7 = (ForElementType<FDumpGPUHTTPUpload_*>)pTVar3;
  }
  *(FString **)((longlong)FVar7 + (longlong)iVar6 * 8) = local_58;
  if ((this->PendingUploads).ArrayNum == 1) {
    FVar7 = (this->PendingUploads).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<FDumpGPUHTTPUpload_*>)0x0) {
      FVar7 = (ForElementType<FDumpGPUHTTPUpload_*>)pTVar3;
    }
    FDumpGPUHTTPUpload::Start(*(FDumpGPUHTTPUpload **)FVar7);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

