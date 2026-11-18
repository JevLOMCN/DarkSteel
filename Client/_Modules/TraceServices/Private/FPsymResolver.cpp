// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 18

// FPsymResolver @ 14d4247d0

/* WARNING: Enum "Type": Some values do not have unique names */

FPsymResolver * __thiscall
TraceServices::FPsymResolver::FPsymResolver
          (FPsymResolver *this,IAnalysisSession *param_1,IResolvedSymbolFilter *param_2)

{
  TNode *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  FRunnableThread *pFVar4;
  
  *(undefined ***)this = &___7FPsymResolver_TraceServices__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ModulesCs,4000);
  pTVar3 = (TNode *)0x0;
  (this->LoadedModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedModules).ArrayNum = 0;
  (this->LoadedModules).ArrayMax = 0;
  pTVar1 = ::operator_new(0x28);
  pTVar2 = pTVar3;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Module = (FModule *)0x0;
    (pTVar1->Item).Path = (wchar_t *)0x0;
    (pTVar1->Item).ImageId.DataPtr = (uchar *)0x0;
    *(undefined8 *)&(pTVar1->Item).ImageId.ArrayNum = 0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).ImageId.DataPtr = (uchar *)0x0;
    (pTVar1->Item).ImageId.ArrayNum = 0;
    pTVar2 = pTVar1;
  }
  (this->LoadSymbolsQueue).Tail = pTVar2;
  (this->LoadSymbolsQueue).Head = pTVar2;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).Module = (FModule *)0x0;
    (pTVar2->Item).Path = (wchar_t *)0x0;
    pTVar2->NextNode = (TNode *)0x0;
    pTVar3 = pTVar2;
  }
  (this->ResolveQueue).Tail = (TNode *)pTVar3;
  (this->ResolveQueue).Head = (TNode *)pTVar3;
  this->ModulesDiscovered = (atomic<unsigned_int>)0x0;
  this->ModulesFailed = (atomic<unsigned_int>)0x0;
  this->ModulesLoaded = (atomic<unsigned_int>)0x0;
  this->AlreadyResolvedSymbols = (atomic<unsigned_int>)0x0;
  this->NoModuleSymbols = (atomic<unsigned_int>)0x0;
  (this->CustomSymbolSearchPathsLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->CustomSymbolSearchPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomSymbolSearchPaths).ArrayNum = 0;
  (this->CustomSymbolSearchPaths).ArrayMax = 0;
  (this->ConfigSymbolSearchPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigSymbolSearchPaths).ArrayNum = 0;
  (this->ConfigSymbolSearchPaths).ArrayMax = 0;
  this->bRunWorkerThread = false;
  this->bDrainThenStop = false;
  *(undefined8 *)&this->PsymSourceFiles = 0;
  *(undefined8 *)&(this->PsymSourceFiles).field_0x8 = 0;
  *(undefined8 *)&(this->PsymSourceFiles).field_0x20 = 0;
  this->Session = param_1;
  this->SymbolFilter = param_2;
  *(undefined4 *)&(this->PsymSourceFiles).field_0x28 = 0;
  *(undefined4 *)&(this->PsymSourceFiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->PsymSourceFiles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PsymSourceFiles).field_0x34 = 0;
  *(undefined8 *)&(this->PsymSourceFiles).field_0x40 = 0;
  *(undefined4 *)&(this->PsymSourceFiles).field_0x48 = 0;
  (this->PsymSymbols).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PsymSymbols).ArrayNum = 0;
  (this->PsymSymbols).ArrayMax = 0;
  (this->PsymSourceLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PsymSourceLines).ArrayNum = 0;
  (this->PsymSourceLines).ArrayMax = 0;
  FSymbolHelper::GetSymbolSearchPaths
            ((FLogCategoryBase *)&LogPsymResolver,&this->ConfigSymbolSearchPaths);
  this->bRunWorkerThread = true;
  pFVar4 = FRunnableThread::Create
                     ((FRunnable *)this,L"PSymHelpWorker",0,TPri_Normal,0xffffffffffffffff,None);
  this->Thread = pFVar4;
  return this;
}

// ~FPsymResolver @ 14d42c3b0

void __thiscall TraceServices::FPsymResolver::~FPsymResolver(FPsymResolver *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  bool bVar7;
  
  this->bRunWorkerThread = false;
  *(undefined ***)this = &___7FPsymResolver_TraceServices__6B_;
  if (this->Thread != (FRunnableThread *)0x0) {
    (**(code **)(this->Thread->_padding_ + 0x20))();
  }
  pFVar1 = (this->PsymSourceLines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PsymSymbols).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PsymSourceFiles).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PsymSourceFiles).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PsymSourceFiles);
  DestructItems<FString,int>
            ((FString *)(this->ConfigSymbolSearchPaths).AllocatorInstance.Data,
             (this->ConfigSymbolSearchPaths).ArrayNum);
  pFVar1 = (this->ConfigSymbolSearchPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->CustomSymbolSearchPaths).AllocatorInstance.Data,
             (this->CustomSymbolSearchPaths).ArrayNum);
  pFVar1 = (this->CustomSymbolSearchPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CustomSymbolSearchPathsLock);
  if (BVar6 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CustomSymbolSearchPathsLock);
  }
  pTVar3 = (this->ResolveQueue).Tail;
  while (pTVar3 != (TNode *)0x0) {
    (this->ResolveQueue).Tail = pTVar3->NextNode;
    ::operator_delete(pTVar3,0x18);
    pTVar3 = (this->ResolveQueue).Tail;
  }
  pTVar4 = (this->LoadSymbolsQueue).Tail;
  while (pTVar4 != (TNode *)0x0) {
    (this->LoadSymbolsQueue).Tail = pTVar4->NextNode;
    ::operator_delete(pTVar4,0x28);
    pTVar4 = (this->LoadSymbolsQueue).Tail;
  }
  DestructItems<TraceServices::FPsymResolver::FModuleEntry,int>
            ((FModuleEntry *)(this->LoadedModules).AllocatorInstance.Data,
             (this->LoadedModules).ArrayNum);
  pFVar1 = (this->LoadedModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ModulesCs);
  *(undefined ***)this = &___7FRunnable__6B_;
  return;
}

// operator() @ 14d430170

void __thiscall
`TraceServices::FPsymResolver::LoadModuleSymbols'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  size_t sVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  ulong64 uVar14;
  wchar_t wVar15;
  ForAnyElementType FVar16;
  char cVar17;
  wchar_t **ppwVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  ForAnyElementType *pFVar23;
  longlong lVar24;
  int local_res18 [2];
  int local_res20 [2];
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  longlong local_2d8;
  uint uStack_2d0;
  int iStack_2cc;
  int local_2c8;
  undefined4 uStack_2c4;
  longlong local_2c0;
  uint uStack_2b8;
  undefined4 uStack_2b4;
  wchar_t *local_2b0;
  longlong local_2a8;
  uint uStack_2a0;
  undefined4 uStack_29c;
  wchar_t *local_298;
  FScriptContainerElement *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  FString local_278;
  FString local_268;
  FScriptContainerElement *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  FScriptContainerElement *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  FScriptContainerElement *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  FString local_228;
  FScriptContainerElement *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  FScriptContainerElement *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  FScriptContainerElement *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FString local_1e8;
  FString local_1d8;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FScriptContainerElement *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FString local_1a8;
  FString local_198;
  FString local_188;
  wchar_t *local_178;
  undefined1 local_170 [16];
  int local_160;
  int *local_158;
  wchar_t **local_150;
  FString local_148;
  TStringView<wchar_t> local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  FString local_d8;
  FString local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  
  pFVar22 = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  local_res18[0] = 0;
  TraceServices::NextToken(&local_318,param_1,local_res18);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_318.Data.ArrayNum != 0) {
    FVar16.Data = local_318.Data.AllocatorInstance.Data;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L"MODULE");
  if (iVar6 == 0) {
    TraceServices::NextToken(&local_148,param_1,local_res18);
    TraceServices::NextToken(&local_58,param_1,local_res18);
    TraceServices::NextToken((FString *)(local_170 + 8),param_1,local_res18);
    ppwVar18 = (wchar_t **)L"";
    if (local_160 != 0) {
      ppwVar18 = (wchar_t **)local_170._8_8_;
    }
    wVar15 = *(wchar_t *)ppwVar18;
    for (pFVar20 = pFVar22;
        ((wVar15 != L'\0' && (wVar15 = *(wchar_t *)((longlong)ppwVar18 + 2), wVar15 != L'\0')) &&
        ((uint)pFVar20 < 0x10)); pFVar20 = (FScriptContainerElement *)(ulonglong)((uint)pFVar20 + 1)
        ) {
      cVar17 = (char)wVar15;
      if ((ushort)(wVar15 + L'￐') < 10) {
        cVar17 = cVar17 + -0x30;
      }
      else if ((ushort)(wVar15 + L'ﾟ') < 6) {
        cVar17 = cVar17 + -0x57;
      }
      else if ((ushort)(wVar15 + L'﾿') < 6) {
        cVar17 = cVar17 + -0x37;
      }
      else {
        cVar17 = '\0';
      }
      wVar15 = *(wchar_t *)ppwVar18;
      if (9 < (ushort)(wVar15 + L'￐')) {
        if ((ushort)(wVar15 + L'ﾟ') < 6) {
          wVar15 = (wchar_t)(byte)((char)wVar15 + 0xa9);
        }
        else if ((ushort)(wVar15 + L'﾿') < 6) {
          wVar15 = (wchar_t)(byte)((char)wVar15 - 0x37);
        }
        else {
          wVar15 = L'\0';
        }
      }
      ppwVar18 = (wchar_t **)((longlong)ppwVar18 + 4);
      pFVar22[*(longlong *)((longlong)this + 0x10)] =
           (FScriptContainerElement)((char)wVar15 * '\x10' + cVar17);
      pFVar22 = pFVar22 + 1;
      wVar15 = *(wchar_t *)ppwVar18;
    }
    TraceServices::NextToken(&local_68,param_1,local_res18);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((wchar_t **)local_170._8_8_ != (wchar_t **)0x0) {
      FMemory::Free((void *)local_170._8_8_);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    goto LAB_14d430d49;
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_318.Data.ArrayNum != 0) {
    FVar16.Data = local_318.Data.AllocatorInstance.Data;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L"FILE");
  if (iVar6 != 0) {
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_318.Data.ArrayNum != 0) {
      FVar16.Data = local_318.Data.AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L"FUNC");
    iVar8 = 0;
    if (iVar6 == 0) {
      TraceServices::NextToken(&local_2f8,param_1,local_res18);
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_2f8.Data.ArrayNum != 0) {
        FVar16.Data = local_2f8.Data.AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,"m");
      if (iVar6 == 0) {
        pFVar12 = TraceServices::NextToken(&local_128,param_1,local_res18);
        if (&local_2f8 != pFVar12) {
          if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
          }
          local_2f8.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
          (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2f8.Data.ArrayNum = (pFVar12->Data).ArrayNum;
          local_2f8.Data.ArrayMax = (pFVar12->Data).ArrayMax;
          (pFVar12->Data).ArrayNum = 0;
          (pFVar12->Data).ArrayMax = 0;
        }
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
      }
      TraceServices::NextToken(&local_228,param_1,local_res18);
      TraceServices::NextToken(&local_d8,param_1,local_res18);
      iVar6 = param_1->Size;
      iVar19 = local_res18[0];
      if (local_res18[0] < iVar6) {
        do {
          iVar19 = local_res18[0];
          lVar24 = (longlong)local_res18[0];
          if (((local_res18[0] < 0) || (iVar6 <= local_res18[0])) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          wVar15 = param_1->DataPtr[lVar24];
          if (((wVar15 != L' ') && (wVar15 != L'\n')) && (wVar15 != L'\r')) break;
          iVar6 = param_1->Size;
          iVar19 = iVar19 + 1;
          local_res18[0] = iVar19;
        } while (iVar19 < iVar6);
      }
      iVar6 = param_1->Size;
      if (iVar19 == iVar6) {
        pFVar12 = ::FString::FString(&local_118,L"");
        pFVar22 = (pFVar12->Data).AllocatorInstance.Data;
        (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar6 = (pFVar12->Data).ArrayNum;
        (pFVar12->Data).ArrayNum = 0;
        (pFVar12->Data).ArrayMax = 0;
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2e8.Data._8_8_ = local_2e8.Data._8_8_ & 0xffffffff;
        iVar7 = iVar6;
        if (iVar6 - iVar19 < iVar6) {
          iVar7 = iVar6 - iVar19;
        }
        iVar19 = iVar10;
        if (0 < iVar7) {
          iVar19 = iVar7;
        }
        iVar7 = iVar19;
        if (0xff < iVar19) {
          iVar7 = 0xff;
        }
        iVar21 = iVar8;
        if (0 < iVar7) {
          iVar21 = iVar7;
        }
        pFVar12 = ::FString::ConstructFromPtrSize
                            (&local_108,param_1->DataPtr + ((longlong)iVar6 - (longlong)iVar19),
                             iVar21);
        iVar6 = iVar10;
        if (&local_2e8 != pFVar12) {
          pFVar22 = (pFVar12->Data).AllocatorInstance.Data;
          (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar6 = (pFVar12->Data).ArrayNum;
          local_2e8.Data.ArrayMax = (pFVar12->Data).ArrayMax;
          (pFVar12->Data).ArrayNum = 0;
          (pFVar12->Data).ArrayMax = 0;
          local_2e8.Data.AllocatorInstance.Data = pFVar22;
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2e8.Data.ArrayNum = 0;
        local_2e8.Data.ArrayMax = 0;
      }
      LOCK();
      piVar1 = (int *)(*(longlong *)((longlong)this + 0x40) + 0x38);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      lVar24 = *(longlong *)this;
      pFVar23 = (ForAnyElementType *)(lVar24 + 0x118);
      if (iVar6 == 0) {
        local_258 = (FScriptContainerElement *)0x15060d16c;
LAB_14d43069b:
        sVar11 = wcslen((wchar_t *)local_258);
        iStack_250 = (int)sVar11;
      }
      else {
        iStack_250 = iVar8;
        local_258 = pFVar22;
        if (pFVar22 != (FScriptContainerElement *)0x0) goto LAB_14d43069b;
      }
      local_f8._12_4_ = uStack_24c;
      local_f8.Size = iStack_250;
      local_f8.DataPtr = (wchar_t *)local_258;
      pwVar13 = TraceServices::FSymbolStringAllocator::Store
                          (*(FSymbolStringAllocator **)((longlong)this + 0x58),&local_f8);
      if (local_228.Data.ArrayNum == 0) {
        local_248 = (FScriptContainerElement *)0x15060d16c;
LAB_14d4306e3:
        sVar11 = wcslen((wchar_t *)local_248);
        iVar8 = (int)sVar11;
      }
      else {
        local_248 = local_228.Data.AllocatorInstance.Data;
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14d4306e3;
      }
      local_e8._12_4_ = uStack_23c;
      local_e8.Size = iVar8;
      local_e8.DataPtr = (wchar_t *)local_248;
      iStack_240 = iVar8;
      uVar9 = FParse::HexNumber(&local_e8);
      if (local_2f8.Data.ArrayNum == 0) {
        local_238 = (FScriptContainerElement *)0x15060d16c;
LAB_14d43071f:
        sVar11 = wcslen((wchar_t *)local_238);
        iVar10 = (int)sVar11;
      }
      else {
        local_238 = local_2f8.Data.AllocatorInstance.Data;
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14d43071f;
      }
      lVar2 = *(longlong *)((longlong)this + 8);
      local_98._12_4_ = uStack_22c;
      local_98.Size = iVar10;
      local_98.DataPtr = (wchar_t *)local_238;
      iStack_230 = iVar10;
      uVar14 = FParse::HexNumber64(&local_98);
      local_2a8 = uVar14 + lVar2;
      uStack_2a0 = uVar9;
      local_298 = pwVar13;
      if (((pFVar23->Data <= (FScriptContainerElement *)&local_2a8) &&
          ((FScriptContainerElement *)&local_2a8 <
           pFVar23->Data + (longlong)*(int *)(lVar24 + 0x124) * 0x18)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = *(int *)(lVar24 + 0x120);
      if (iVar10 == *(int *)(lVar24 + 0x124)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,pFVar23,(int *)(lVar24 + 0x124));
      }
      *(int *)(lVar24 + 0x120) = iVar10 + 1;
      pFVar3 = pFVar23->Data;
      pFVar20 = pFVar3 + (longlong)iVar10 * 0x18;
      *(longlong *)pFVar20 = local_2a8;
      *(longlong *)(pFVar20 + 8) = CONCAT44(uStack_29c,uStack_2a0);
      *(wchar_t **)(pFVar3 + (longlong)iVar10 * 0x18 + 0x10) = local_298;
      if (pFVar22 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar22);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      local_188.Data.AllocatorInstance.Data = local_2f8.Data.AllocatorInstance.Data;
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
        local_188.Data.AllocatorInstance.Data = local_2f8.Data.AllocatorInstance.Data;
      }
    }
    else {
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_318.Data.ArrayNum != 0) {
        FVar16.Data = local_318.Data.AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L"PUBLIC");
      if (iVar6 == 0) {
        TraceServices::NextToken(&local_308,param_1,local_res18);
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_308.Data.ArrayNum != 0) {
          FVar16.Data = local_308.Data.AllocatorInstance.Data;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,"m");
        if (iVar6 == 0) {
          pFVar12 = TraceServices::NextToken(&local_c8,param_1,local_res18);
          if (&local_308 != pFVar12) {
            if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_308.Data.AllocatorInstance.Data);
            }
            local_308.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
            (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_308.Data.ArrayNum = (pFVar12->Data).ArrayNum;
            local_308.Data.ArrayMax = (pFVar12->Data).ArrayMax;
            (pFVar12->Data).ArrayNum = 0;
            (pFVar12->Data).ArrayMax = 0;
          }
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
        TraceServices::NextToken(&local_1d8,param_1,local_res18);
        TraceServices::NextToken(&local_1e8,param_1,local_res18);
        LOCK();
        piVar1 = (int *)(*(longlong *)((longlong)this + 0x40) + 0x38);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        lVar24 = *(longlong *)this;
        pFVar23 = (ForAnyElementType *)(lVar24 + 0x118);
        if (local_1e8.Data.ArrayNum == 0) {
          local_218 = (FScriptContainerElement *)0x15060d16c;
LAB_14d43094b:
          sVar11 = wcslen((wchar_t *)local_218);
          iStack_210 = (int)sVar11;
        }
        else {
          local_218 = local_1e8.Data.AllocatorInstance.Data;
          iStack_210 = iVar8;
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14d43094b;
        }
        local_b8._12_4_ = uStack_20c;
        local_b8.Size = iStack_210;
        local_b8.DataPtr = (wchar_t *)local_218;
        pwVar13 = TraceServices::FSymbolStringAllocator::Store
                            (*(FSymbolStringAllocator **)((longlong)this + 0x58),&local_b8);
        if (local_1d8.Data.ArrayNum == 0) {
          local_208 = (FScriptContainerElement *)0x15060d16c;
LAB_14d430996:
          sVar11 = wcslen((wchar_t *)local_208);
          iVar8 = (int)sVar11;
        }
        else {
          local_208 = local_1d8.Data.AllocatorInstance.Data;
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14d430996;
        }
        local_a8._12_4_ = uStack_1fc;
        local_a8.Size = iVar8;
        local_a8.DataPtr = (wchar_t *)local_208;
        iStack_200 = iVar8;
        uVar9 = FParse::HexNumber(&local_a8);
        if (local_308.Data.ArrayNum == 0) {
          local_1f8 = (FScriptContainerElement *)0x15060d16c;
LAB_14d4309d3:
          sVar11 = wcslen((wchar_t *)local_1f8);
          iVar10 = (int)sVar11;
        }
        else {
          local_1f8 = local_308.Data.AllocatorInstance.Data;
          if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14d4309d3;
        }
        lVar2 = *(longlong *)((longlong)this + 8);
        local_48._12_4_ = uStack_1ec;
        local_48.Size = iVar10;
        local_48.DataPtr = (wchar_t *)local_1f8;
        iStack_1f0 = iVar10;
        uVar14 = FParse::HexNumber64(&local_48);
        local_2c0 = uVar14 + lVar2;
        uStack_2b8 = uVar9;
        local_2b0 = pwVar13;
        if (((pFVar23->Data <= (FScriptContainerElement *)&local_2c0) &&
            ((FScriptContainerElement *)&local_2c0 <
             pFVar23->Data + (longlong)*(int *)(lVar24 + 0x124) * 0x18)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = *(int *)(lVar24 + 0x120);
        if (iVar10 == *(int *)(lVar24 + 0x124)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,pFVar23,(int *)(lVar24 + 0x124));
        }
        *(int *)(lVar24 + 0x120) = iVar10 + 1;
        pFVar20 = pFVar23->Data;
        pFVar22 = pFVar20 + (longlong)iVar10 * 0x18;
        *(longlong *)pFVar22 = local_2c0;
        *(longlong *)(pFVar22 + 8) = CONCAT44(uStack_2b4,uStack_2b8);
        *(wchar_t **)(pFVar20 + (longlong)iVar10 * 0x18 + 0x10) = local_2b0;
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        local_188.Data.AllocatorInstance.Data = local_308.Data.AllocatorInstance.Data;
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          local_188.Data.AllocatorInstance.Data = local_308.Data.AllocatorInstance.Data;
        }
      }
      else {
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_318.Data.ArrayNum != 0) {
          FVar16.Data = local_318.Data.AllocatorInstance.Data;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L"STACK");
        if (iVar6 == 0) goto LAB_14d430d49;
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_318.Data.ArrayNum != 0) {
          FVar16.Data = local_318.Data.AllocatorInstance.Data;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L"INFO");
        if (iVar6 == 0) goto LAB_14d430d49;
        TraceServices::NextToken(&local_188,param_1,local_res18);
        TraceServices::NextToken(&local_198,param_1,local_res18);
        TraceServices::NextToken(&local_1a8,param_1,local_res18);
        lVar24 = *(longlong *)this;
        pFVar23 = (ForAnyElementType *)(lVar24 + 0x128);
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_1a8.Data.ArrayNum != 0) {
          FVar16.Data = local_1a8.Data.AllocatorInstance.Data;
        }
        iVar6 = _wtoi((wchar_t *)FVar16.Data);
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_198.Data.ArrayNum != 0) {
          FVar16.Data = local_198.Data.AllocatorInstance.Data;
        }
        iVar19 = _wtoi((wchar_t *)FVar16.Data);
        if (local_188.Data.ArrayNum == 0) {
          local_1c8 = (FScriptContainerElement *)0x15060d16c;
LAB_14d430bcb:
          sVar11 = wcslen((wchar_t *)local_1c8);
          iVar8 = (int)sVar11;
        }
        else {
          local_1c8 = local_188.Data.AllocatorInstance.Data;
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14d430bcb;
        }
        local_88._12_4_ = uStack_1bc;
        local_88.Size = iVar8;
        local_88.DataPtr = (wchar_t *)local_1c8;
        iStack_1c0 = iVar8;
        uVar9 = FParse::HexNumber(&local_88);
        if (local_318.Data.ArrayNum == 0) {
          local_1b8 = (FScriptContainerElement *)0x15060d16c;
LAB_14d430c14:
          sVar11 = wcslen((wchar_t *)local_1b8);
          iVar10 = (int)sVar11;
        }
        else {
          local_1b8 = local_318.Data.AllocatorInstance.Data;
          if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14d430c14;
        }
        lVar2 = *(longlong *)((longlong)this + 8);
        local_78._12_4_ = uStack_1ac;
        local_78.Size = iVar10;
        local_78.DataPtr = (wchar_t *)local_1b8;
        iStack_1b0 = iVar10;
        uVar14 = FParse::HexNumber64(&local_78);
        local_2d8 = uVar14 + lVar2;
        uStack_2d0 = uVar9;
        iStack_2cc = iVar19;
        local_2c8 = iVar6;
        if (((pFVar23->Data <= (FScriptContainerElement *)&local_2d8) &&
            ((FScriptContainerElement *)&local_2d8 <
             pFVar23->Data + (longlong)*(int *)(lVar24 + 0x134) * 0x18)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = *(int *)(lVar24 + 0x130);
        if (iVar10 == *(int *)(lVar24 + 0x134)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,pFVar23,(int *)(lVar24 + 0x134));
        }
        *(int *)(lVar24 + 0x130) = iVar10 + 1;
        pFVar20 = pFVar23->Data;
        pFVar22 = pFVar20 + (longlong)iVar10 * 0x18;
        *(longlong *)pFVar22 = local_2d8;
        *(longlong *)(pFVar22 + 8) = CONCAT44(iStack_2cc,uStack_2d0);
        *(ulonglong *)(pFVar20 + (longlong)iVar10 * 0x18 + 0x10) = CONCAT44(uStack_2c4,local_2c8);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    goto LAB_14d430d49;
  }
  TraceServices::NextToken(&local_268,param_1,local_res18);
  TraceServices::NextToken(&local_278,param_1,local_res18);
  lVar24 = *(longlong *)this;
  if (local_278.Data.ArrayNum == 0) {
    local_288 = (FScriptContainerElement *)0x15060d16c;
LAB_14d43038b:
    sVar11 = wcslen((wchar_t *)local_288);
    iVar10 = (int)sVar11;
  }
  else {
    local_288 = local_278.Data.AllocatorInstance.Data;
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14d43038b;
  }
  local_138._12_4_ = uStack_27c;
  local_138.Size = iVar10;
  local_138.DataPtr = (wchar_t *)local_288;
  iStack_280 = iVar10;
  local_178 = TraceServices::FSymbolStringAllocator::Store
                        (*(FSymbolStringAllocator **)((longlong)this + 0x58),&local_138);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_268.Data.ArrayNum != 0) {
    FVar16.Data = local_268.Data.AllocatorInstance.Data;
  }
  local_res20[0] = _wtoi((wchar_t *)FVar16.Data);
  local_158 = local_res20;
  local_150 = &local_178;
  TSet<TTuple<int,wchar_t_const_*>,TDefaultMapHashableKeyFuncs<int,wchar_t_const_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&&,wchar_t_const_*_&&>_>
            ((TSet<TTuple<int,wchar_t_const_*>,TDefaultMapHashableKeyFuncs<int,wchar_t_const_*,0>,FDefaultSetAllocator>
              *)(lVar24 + 200),(TPairInitializer<int_&&,wchar_t_const_*_&&> *)local_170,
             (bool *)&local_158);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
LAB_14d430d49:
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  return;
}

// EnumerateSymbolSearchPaths @ 14d45ca40

void __thiscall
TraceServices::FPsymResolver::EnumerateSymbolSearchPaths
          (FPsymResolver *this,TFunctionRef<void___cdecl(TStringView<wchar_t>)> *param_1)

{
  TFunctionRef<void___cdecl(TStringView<wchar_t>)> local_18;
  
  AcquireSRWLockShared((PSRWLOCK)&this->CustomSymbolSearchPathsLock);
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  Algo::
  ForEach<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TFunctionRef<void___cdecl(TStringView<wchar_t>)>_>
            (&this->CustomSymbolSearchPaths,&local_18);
  ReleaseSRWLockShared((PSRWLOCK)&this->CustomSymbolSearchPathsLock);
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  Algo::
  ForEach<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TFunctionRef<void___cdecl(TStringView<wchar_t>)>_>
            (&this->ConfigSymbolSearchPaths,&local_18);
  return;
}

// GetEntryForModule @ 14d4654a0

FModuleEntry * __thiscall
TraceServices::FPsymResolver::GetEntryForModule(FPsymResolver *this,FModule *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FModuleEntry *pFVar8;
  uint uVar9;
  
  uVar2 = (this->LoadedModules).ArrayNum;
  iVar7 = 0;
  pFVar3 = (this->LoadedModules).AllocatorInstance.Data;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    do {
      iVar1 = (uVar9 >> 1) + iVar7;
      if (*(ulonglong *)(pFVar3 + (longlong)iVar1 * 0x38) < param_1->Base) {
        iVar7 = iVar1 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
  }
  if (((iVar7 < (int)uVar2) && (*(ulonglong *)(pFVar3 + (longlong)iVar7 * 0x38) <= param_1->Base))
     && (iVar7 != -1)) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FModuleEntry *)(*pcVar4)();
      return pFVar8;
    }
    return (FModuleEntry *)((this->LoadedModules).AllocatorInstance.Data + (longlong)iVar7 * 0x38);
  }
  return (FModuleEntry *)0x0;
}

// GetModuleForAddress @ 14d469a20

FModuleEntry * __thiscall
TraceServices::FPsymResolver::GetModuleForAddress(FPsymResolver *this,ulong64 param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  FModuleEntry *pFVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = (this->LoadedModules).ArrayNum;
  iVar8 = 0;
  uVar7 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar7 >> 1) + iVar8;
      if (*(ulonglong *)((this->LoadedModules).AllocatorInstance.Data + (longlong)iVar1 * 0x38) <
          param_1) {
        iVar8 = iVar1 + (uVar7 & 1);
      }
      uVar4 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar4 != 0);
  }
  iVar8 = iVar8 + -1;
  if ((-1 < iVar8) && (iVar8 < (int)uVar2)) {
    if ((iVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FModuleEntry *)(*pcVar3)();
      return pFVar6;
    }
    return (FModuleEntry *)((this->LoadedModules).AllocatorInstance.Data + (longlong)iVar8 * 0x38);
  }
  return (FModuleEntry *)0x0;
}

// GetStats @ 14d46d1c0

void __thiscall TraceServices::FPsymResolver::GetStats(FPsymResolver *this,FStats *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->ModulesCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    param_1->ModulesDiscovered = 0;
    param_1->ModulesLoaded = 0;
    param_1->ModulesFailed = 0;
    param_1->SymbolsDiscovered = 0;
    param_1->SymbolsCached = 0;
    param_1->SymbolsResolved = 0;
    param_1->SymbolsFailed = 0;
    iVar1 = (this->LoadedModules).ArrayNum;
    pFVar3 = (this->LoadedModules).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x38;
    while( true ) {
      if ((this->LoadedModules).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TraceServices::FPsymResolver::FModuleEntry_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar4) break;
      lVar2 = *(longlong *)(pFVar3 + 0x20);
      param_1->SymbolsDiscovered = param_1->SymbolsDiscovered + *(int *)(lVar2 + 0x28);
      param_1->SymbolsCached = param_1->SymbolsCached + *(int *)(lVar2 + 0x2c);
      param_1->SymbolsResolved = param_1->SymbolsResolved + *(int *)(lVar2 + 0x30);
      param_1->SymbolsFailed = param_1->SymbolsFailed + *(int *)(lVar2 + 0x34);
      pFVar3 = pFVar3 + 0x38;
    }
    param_1->SymbolsFailed = param_1->SymbolsFailed + (int)this->NoModuleSymbols;
    param_1->ModulesDiscovered = (uint)this->ModulesDiscovered;
    param_1->ModulesFailed = (uint)this->ModulesFailed;
    param_1->ModulesLoaded = (uint)this->ModulesLoaded;
                    /* WARNING: Could not recover jumptable at 0x00014d46d280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HasFinishedResolving @ 14d471cd0

bool __thiscall TraceServices::FPsymResolver::HasFinishedResolving(FPsymResolver *this)

{
  if ((((this->LoadSymbolsQueue).Tail)->NextNode == (TNode *)0x0) &&
     (((this->ResolveQueue).Tail)->NextNode == (TNode *)0x0)) {
    return true;
  }
  return false;
}

// LoadModuleSymbols @ 14d477070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FPsymResolver::LoadModuleSymbols
          (FPsymResolver *this,FModule *param_1,wchar_t *param_2,
          TArrayView<unsigned_char_const_,int> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FModule **ppFVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FModuleEntry *pFVar5;
  void *pvVar6;
  atomic<unsigned_int> *paVar7;
  wchar_t *pwVar8;
  ulong64 uVar9;
  atomic<TraceServices::EModuleStatus> aVar10;
  size_t sVar11;
  undefined1 auStackY_378 [32];
  FIdentityFunctor local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined8 local_308;
  code *local_300;
  FPsymResolver **local_2f8;
  wchar_t *local_2f0;
  undefined4 local_2e8;
  FPsymResolver *local_2d8;
  ulong64 local_2d0;
  wchar_t *local_2c8;
  undefined4 local_2c0;
  ulong64 local_2b8;
  uint local_2b0;
  wchar_t *local_2a8;
  wchar_t *local_2a0;
  FModule *local_298;
  ForAnyElementType local_290;
  int local_288;
  int local_284;
  undefined8 *local_280;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  wchar_t local_58 [8];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  if ((param_1 == (FModule *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Module",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\PsymResolver.cpp"
                         ,0x13d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2 == (wchar_t *)0x0) {
    LOCK();
    param_1->Status = (atomic<TraceServices::EModuleStatus>)0x4;
    UNLOCK();
  }
  else {
    lpCriticalSection = &this->ModulesCs;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar5 = GetEntryForModule(this,param_1);
    ppFVar1 = &pFVar5->Module;
    if (((pFVar5 == (FModuleEntry *)0x0) || (*ppFVar1 != param_1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntryPtr && EntryPtr->Module == Module",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\PsymResolver.cpp"
                           ,0x148,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    ((*ppFVar1)->Stats).Available = (atomic<unsigned_int>)0x0;
    UNLOCK();
    uVar9 = param_1->Base;
    local_330 = (**(code **)((longlong)*this->Session + 0xb8))();
    local_320 = 0x8000;
    local_328 = 0;
    local_2c8 = local_58;
    local_318 = 0;
    local_310 = 0;
    local_308 = 0;
    local_58[0] = L'\0';
    local_58[1] = L'\0';
    local_58[2] = L'\0';
    local_58[3] = L'\0';
    local_58[4] = L'\0';
    local_58[5] = L'\0';
    local_58[6] = L'\0';
    local_58[7] = L'\0';
    local_2c0 = 0x10;
    local_2b8 = pFVar5->Base;
    local_2b0 = pFVar5->Size;
    local_2a8 = pFVar5->Name;
    local_2a0 = pFVar5->Path;
    local_298 = *ppFVar1;
    local_290.Data = (FScriptContainerElement *)0x0;
    local_288 = (pFVar5->ImageId).ArrayNum;
    sVar11 = (size_t)local_288;
    _Src = (pFVar5->ImageId).AllocatorInstance.Data;
    local_2d8 = this;
    local_2d0 = uVar9;
    if (local_288 == 0) {
      local_284 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_288,0,&local_290,local_288,&local_284);
      memcpy(local_290.Data,_Src,sVar11);
    }
    local_280 = &local_330;
    local_2f8 = &local_2d8;
    local_300 = UE::Core::Private::Function::
                TFunctionRefCaller<`TraceServices::FPsymResolver::LoadModuleSymbols'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
                ::Call;
    FFileHelper::LoadFileToStringWithLineVisitor
              (param_2,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_300);
    AlgoImpl::
    IntroSortInternal<TraceServices::FPsymResolver::FPsymSymbol,int,FIdentityFunctor,_TraceServices::FPsymResolver::LoadModuleSymbols_::__l2::<lambda_2>_>
              ((FPsymSymbol *)(this->PsymSymbols).AllocatorInstance.Data,
               (this->PsymSymbols).ArrayNum,local_338,(<lambda_2>)local_338);
    AlgoImpl::
    IntroSortInternal<TraceServices::FPsymResolver::FPsymLine,int,FIdentityFunctor,_TraceServices::FPsymResolver::LoadModuleSymbols_::__l2::<lambda_3>_>
              ((FPsymLine *)(this->PsymSourceLines).AllocatorInstance.Data,
               (this->PsymSourceLines).ArrayNum,local_338,(<lambda_3>)local_338);
    local_278.bIsDynamic = false;
    local_278.bIsExternal = false;
    local_278.Base = local_258;
    local_278.CurPos = local_258;
    local_278.End = local_58;
    iVar4 = 0x10;
    if ((pFVar5->ImageId).ArrayNum < 0x10) {
      iVar4 = (pFVar5->ImageId).ArrayNum;
    }
    iVar4 = memcmp((pFVar5->ImageId).AllocatorInstance.Data,local_58,(longlong)iVar4);
    if (iVar4 == 0) {
      sVar11 = wcslen(param_2);
      uVar9 = (ulong64)(int)sVar11;
      if (local_58 < local_258 + uVar9) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,uVar9);
      }
      if ((int)sVar11 != 0) {
        pvVar6 = FGenericPlatformString::Memcpy(local_278.CurPos,param_2,uVar9 * 2);
        local_278.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
      }
      aVar10 = (atomic<TraceServices::EModuleStatus>)0x2;
      paVar7 = &this->ModulesLoaded;
    }
    else {
      TStringBuilderBase<wchar_t>::AppendfImpl
                (&local_278,
                 L"Build ID of psym does not match that of trace! Is this the correct psym (%s) for module %s?"
                );
      paVar7 = &this->ModulesFailed;
      aVar10 = (atomic<TraceServices::EModuleStatus>)0x3;
    }
    LOCK();
    *paVar7 = (atomic<unsigned_int>)((int)*paVar7 + 1);
    UNLOCK();
    local_2f0 = local_278.Base;
    local_2e8 = (undefined4)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
    pwVar8 = (wchar_t *)(**(code **)((longlong)*this->Session + 200))(this->Session,&local_2f0);
    pFVar5->Module->StatusMessage = pwVar8;
    LOCK();
    pFVar5->Module->Status = aVar10;
    UNLOCK();
    if (6 < (byte)LogPsymResolver._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogPsymResolver);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
    if (local_290.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// OnAnalysisComplete @ 14d47a7e0

void __thiscall TraceServices::FPsymResolver::OnAnalysisComplete(FPsymResolver *this)

{
  this->bDrainThenStop = true;
  return;
}

// QueueModuleLoad @ 14d47feb0

/* WARNING: Removing unreachable block (ram,0x00014d4800f5) */

void __thiscall
TraceServices::FPsymResolver::QueueModuleLoad
          (FPsymResolver *this,uchar *param_1,uint param_2,FModule *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  FScriptContainerElement *pFVar6;
  FIdentityFunctor local_res8;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  ulong64 local_68;
  uint local_60;
  undefined8 local_58;
  undefined8 local_50;
  FModule *local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  
  if ((param_3 == (FModule *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Module != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\PsymResolver.cpp"
                         ,0x49,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lpCriticalSection = &this->ModulesCs;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_88.DataPtr = param_3->FullName;
  local_88.Size = 0;
  if (local_88.DataPtr != (wchar_t *)0x0) {
    sVar5 = wcslen(local_88.DataPtr);
    local_88.Size = (int)sVar5;
  }
  FPathViews::GetCleanFilename(&local_78,&local_88);
  local_68 = param_3->Base;
  local_60 = param_3->Size;
  local_58 = (**(code **)((longlong)*this->Session + 200))(this->Session,&local_78);
  local_50 = (**(code **)((longlong)*this->Session + 0xd0))(this->Session,param_3->FullName);
  local_40.Data = (FScriptContainerElement *)0x0;
  local_48 = param_3;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)param_2);
  }
  if (((param_1 == (uchar *)0x0) && (param_2 != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x2d3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38 = CONCAT44(local_38._4_4_,param_2);
  if (param_2 == 0) {
    local_38 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_2,0,&local_40,param_2,(int *)((longlong)&local_38 + 4));
    memcpy(local_40.Data,param_1,(longlong)(int)param_2);
  }
  pFVar6 = (this->LoadedModules).AllocatorInstance.Data;
  if (((pFVar6 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar6 + (longlong)(this->LoadedModules).ArrayMax * 0x38)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->LoadedModules).ArrayNum;
  piVar1 = &(this->LoadedModules).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(this->LoadedModules).AllocatorInstance,piVar1);
  }
  pFVar6 = (this->LoadedModules).AllocatorInstance.Data + (longlong)iVar4 * 0x38;
  (this->LoadedModules).ArrayNum = iVar4 + 1;
  *(ulong64 *)pFVar6 = local_68;
  *(uint *)(pFVar6 + 8) = local_60;
  *(undefined8 *)(pFVar6 + 0x10) = local_58;
  *(undefined8 *)(pFVar6 + 0x18) = local_50;
  *(FModule **)(pFVar6 + 0x20) = local_48;
  *(undefined8 *)(pFVar6 + 0x28) = 0;
  *(FScriptContainerElement **)(pFVar6 + 0x28) = local_40.Data;
  *(undefined4 *)(pFVar6 + 0x30) = (undefined4)local_38;
  *(undefined4 *)(pFVar6 + 0x34) = local_38._4_4_;
  local_38 = 0;
  local_40.Data = (FScriptContainerElement *)0x0;
  AlgoImpl::
  IntroSortInternal<TraceServices::FPsymResolver::FModuleEntry,int,FIdentityFunctor,_TraceServices::FPsymResolver::QueueModuleLoad_::__l2::<lambda_1>_>
            ((FModuleEntry *)(this->LoadedModules).AllocatorInstance.Data,
             (this->LoadedModules).ArrayNum,local_res8,(<lambda_1>)local_res8);
  LOCK();
  (param_3->Stats).Discovered = (atomic<unsigned_int>)0x0;
  UNLOCK();
  LOCK();
  (param_3->Stats).Resolved = (atomic<unsigned_int>)0x0;
  UNLOCK();
  LOCK();
  (param_3->Stats).Failed = (atomic<unsigned_int>)0x0;
  UNLOCK();
  LOCK();
  (param_3->Stats).Available = (atomic<unsigned_int>)0x0;
  UNLOCK();
  LOCK();
  this->ModulesDiscovered = (atomic<unsigned_int>)((int)this->ModulesDiscovered + 1);
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// QueueModuleReload @ 14d4807c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::FPsymResolver::QueueModuleReload
          (FPsymResolver *this,FModule *param_1,wchar_t *param_2,
          TFunction<void___cdecl(TArray<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,TSizedDefaultAllocator<32>_>_&)>
          *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TQueue<TraceServices::FPsymResolver::FQueuedModule,0> *pTVar1;
  TNode *pTVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  FModuleEntry *pFVar6;
  TNode *pTVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  FRunnableThread *pFVar10;
  longlong lVar11;
  longlong *plVar12;
  ulong64 *puVar13;
  ulong64 *puVar14;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [8];
  ulong64 *local_80;
  ulonglong local_78;
  FModule *local_70;
  wchar_t *pwStack_68;
  FScriptContainerElement *local_60;
  int iStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if ((param_1 == (FModule *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Module != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\PsymResolver.cpp"
                         ,0x6c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lpCriticalSection = &this->ModulesCs;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar6 = GetEntryForModule(this,param_1);
  if (pFVar6 != (FModuleEntry *)0x0) {
    if ((pFVar6->Module != param_1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Entry->Module == Module",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\PsymResolver.cpp"
                           ,0x75,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_1->Status != (atomic<TraceServices::EModuleStatus>)0x2) {
      LOCK();
      (param_1->Stats).Discovered = (atomic<unsigned_int>)0x0;
      UNLOCK();
      pTVar1 = &this->LoadSymbolsQueue;
      LOCK();
      (param_1->Stats).Resolved = (atomic<unsigned_int>)0x0;
      UNLOCK();
      LOCK();
      (param_1->Stats).Failed = (atomic<unsigned_int>)0x0;
      UNLOCK();
      LOCK();
      (param_1->Stats).Available = (atomic<unsigned_int>)0x0;
      UNLOCK();
      LOCK();
      param_1->Status = (atomic<TraceServices::EModuleStatus>)0x1;
      UNLOCK();
      local_70 = param_1;
      pwStack_68 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,param_2);
      iStack_58 = (pFVar6->ImageId).ArrayNum;
      local_60 = (pFVar6->ImageId).AllocatorInstance.Data;
      if ((iStack_58 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar7 = ::operator_new(0x28);
      if (pTVar7 != (TNode *)0x0) {
        pTVar7->NextNode = (TNode *)0x0;
        (pTVar7->Item).Module = local_70;
        (pTVar7->Item).Path = pwStack_68;
        (pTVar7->Item).ImageId.DataPtr = (uchar *)local_60;
        *(ulonglong *)&(pTVar7->Item).ImageId.ArrayNum = CONCAT44(uStack_54,iStack_58);
        if (((ulonglong)pTVar1 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        pTVar2 = pTVar1->Head;
        pTVar1->Head = pTVar7;
        UNLOCK();
        if (((ulonglong)pTVar2 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        pTVar2->NextNode = pTVar7;
        UNLOCK();
      }
      local_80 = (ulong64 *)0x0;
      local_78 = 0;
      UE::Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar3 = *(code **)param_3;
      plVar12 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar12 = *(longlong **)&param_3->field_0x28;
      }
      uVar8 = (**(code **)(*plVar12 + 8))();
      (*pcVar3)(uVar8,&local_80);
      iVar4 = (int)local_78;
      uVar9 = (ulonglong)(int)local_78;
      puVar13 = local_80 + uVar9 * 2;
      puVar14 = local_80;
      while( true ) {
        if ((int)uVar9 != iVar4) {
          `TCheckedPointerIterator<TTuple<unsigned___int64,TraceServices::FResolvedSymbol_*>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_88);
        }
        if (puVar14 == puVar13) break;
        QueueSymbolResolve(this,*puVar14,(FResolvedSymbol *)puVar14[1]);
        uVar9 = local_78 & 0xffffffff;
        puVar14 = puVar14 + 2;
      }
      if ((this->bRunWorkerThread == false) && (this->Thread != (FRunnableThread *)0x0)) {
        this->bRunWorkerThread = true;
        pFVar10 = FRunnableThread::Create
                            ((FRunnable *)this,L"PSymHelpWorker",0,TPri_Normal,0xffffffffffffffff,
                             None);
        this->Thread = pFVar10;
      }
      if (local_80 != (ulong64 *)0x0) {
        FMemory::Free(local_80);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(longlong *)param_3 == 0) {
        return;
      }
      plVar12 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar12 = *(longlong **)&param_3->field_0x28;
      }
      lVar11 = *plVar12;
      goto LAB_14d480a8b;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(longlong *)param_3 == 0) {
    return;
  }
  plVar12 = (longlong *)&param_3->field_0x10;
  if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
    plVar12 = *(longlong **)&param_3->field_0x28;
  }
  lVar11 = *plVar12;
LAB_14d480a8b:
  (**(code **)(lVar11 + 0x10))(plVar12);
  return;
}

// QueueSymbolResolve @ 14d480e20

void __thiscall
TraceServices::FPsymResolver::QueueSymbolResolve
          (FPsymResolver *this,ulong64 param_1,FResolvedSymbol *param_2)

{
  TQueue<TraceServices::FPsymResolver::FQueuedAddress,0> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  pTVar1 = &this->ResolveQueue;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).Address = param_1;
    (pTVar3->Item).Target = param_2;
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar3;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar3;
    UNLOCK();
  }
  return;
}

// ResolveSymbol @ 14d487580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FPsymResolver::ResolveSymbol
          (FPsymResolver *this,ulong64 param_1,FResolvedSymbol *param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  ushort uVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  wchar_t *pwVar19;
  undefined8 *puVar20;
  
  if (param_2->Result == (atomic<TraceServices::ESymbolQueryResult>)0x1) {
    LOCK();
    this->AlreadyResolvedSymbols = (atomic<unsigned_int>)((int)this->AlreadyResolvedSymbols + 1);
    UNLOCK();
    return;
  }
  puVar20 = (undefined8 *)0x0;
  iVar17 = 0;
  uVar6 = (this->LoadedModules).ArrayNum;
  puVar12 = puVar20;
  iVar9 = iVar17;
  uVar5 = uVar6;
  if (0 < (int)uVar6) {
    do {
      uVar14 = uVar5 >> 1;
      iVar9 = uVar14 + (int)puVar12;
      if (*(ulonglong *)((this->LoadedModules).AllocatorInstance.Data + (longlong)iVar9 * 0x38) <
          param_1) {
        puVar12 = (undefined8 *)(ulonglong)(iVar9 + (uVar5 & 1));
      }
      iVar9 = (int)puVar12;
      uVar5 = uVar14;
    } while (uVar14 != 0);
  }
  iVar9 = iVar9 + -1;
  if ((-1 < iVar9) && (iVar9 < (int)uVar6)) {
    if ((iVar9 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar13 = (this->LoadedModules).AllocatorInstance.Data + (longlong)iVar9 * 0x38;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      lVar1 = *(longlong *)(pFVar13 + 0x20);
      LOCK();
      *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + 1;
      UNLOCK();
      if (*(char *)(*(longlong *)(pFVar13 + 0x20) + 0x1d) != '\x02') {
        param_2->Module = *(wchar_t **)(pFVar13 + 0x10);
        pwVar19 = GUnknownModuleTextPsym;
        param_2->Name = GUnknownModuleTextPsym;
        param_2->File = pwVar19;
        param_2->Line = 0;
        param_2->Result = (atomic<TraceServices::ESymbolQueryResult>)0x2;
        (**(code **)*this->SymbolFilter)(this->SymbolFilter,param_2);
        LOCK();
        *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + 1;
        UNLOCK();
        return;
      }
      uVar6 = (this->PsymSymbols).ArrayNum;
      puVar12 = puVar20;
      uVar5 = uVar6;
      if (0 < (int)uVar6) {
        do {
          uVar14 = uVar5 >> 1;
          iVar9 = uVar14 + (int)puVar12;
          if (*(ulonglong *)((this->PsymSymbols).AllocatorInstance.Data + (longlong)iVar9 * 0x18) <=
              param_1) {
            puVar12 = (undefined8 *)(ulonglong)((uVar5 & 1) + iVar9);
          }
          iVar17 = (int)puVar12;
          uVar5 = uVar14;
        } while (uVar14 != 0);
      }
      uVar5 = iVar17 - 1;
      if (((int)uVar5 < 0) || ((int)uVar6 <= (int)uVar5)) {
        param_2->Module = *(wchar_t **)(pFVar13 + 0x10);
        pwVar19 = GUnknownModuleTextPsym;
        param_2->Name = GUnknownModuleTextPsym;
        param_2->File = pwVar19;
        param_2->Line = 0;
        param_2->Result = (atomic<TraceServices::ESymbolQueryResult>)0x4;
        (**(code **)*this->SymbolFilter)(this->SymbolFilter,param_2);
        lVar7 = 0x34;
      }
      else {
        uVar18 = 0;
        uVar6 = (this->PsymSourceLines).ArrayNum;
        puVar12 = puVar20;
        uVar14 = uVar18;
        uVar15 = uVar6;
        if (0 < (int)uVar6) {
          do {
            uVar16 = uVar15 >> 1;
            iVar9 = uVar16 + (int)puVar12;
            if (*(ulonglong *)
                 ((this->PsymSourceLines).AllocatorInstance.Data + (longlong)iVar9 * 0x18) <=
                param_1) {
              puVar12 = (undefined8 *)(ulonglong)((uVar15 & 1) + iVar9);
            }
            uVar14 = (uint)puVar12;
            uVar15 = uVar16;
          } while (uVar16 != 0);
        }
        uVar14 = uVar14 - 1;
        puVar12 = puVar20;
        if ((-1 < (int)uVar14) && (puVar12 = (undefined8 *)0x0, (int)uVar14 < (int)uVar6)) {
          if (((int)uVar14 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar6 = *(uint *)((this->PsymSourceLines).AllocatorInstance.Data +
                           (longlong)(int)uVar14 * 0x18 + 0xc);
          puVar12 = (undefined8 *)(ulonglong)uVar6;
          uVar11 = (ushort)uVar6;
          uVar6 = uVar18;
          if ((int)uVar14 < (this->PsymSourceLines).ArrayNum) {
            uVar6 = ~uVar14 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar6 = *(uint *)((this->PsymSourceLines).AllocatorInstance.Data +
                           (longlong)(int)uVar14 * 0x18 + 0x10);
          if (*(int *)&(this->PsymSourceFiles).field_0x8 !=
              *(int *)&(this->PsymSourceFiles).field_0x34) {
            puVar10 = *(undefined1 **)&(this->PsymSourceFiles).field_0x40;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = &(this->PsymSourceFiles).field_0x38;
            }
            iVar9 = *(int *)(puVar10 +
                            (ulonglong)(*(int *)&(this->PsymSourceFiles).field_0x48 - 1U & uVar6) *
                            4);
            if (iVar9 != -1) {
              do {
                lVar7 = *(longlong *)&this->PsymSourceFiles + (longlong)iVar9 * 0x18;
                if (*(uint *)(*(longlong *)&this->PsymSourceFiles + (longlong)iVar9 * 0x18) == uVar6
                   ) {
                  puVar8 = (undefined8 *)(lVar7 + 8);
                  if (lVar7 == 0) {
                    puVar8 = puVar20;
                  }
                  if (puVar8 != (undefined8 *)0x0) {
                    pwVar19 = (wchar_t *)*puVar8;
                    goto LAB_14d48787b;
                  }
                  break;
                }
                iVar9 = *(int *)(lVar7 + 0x10);
              } while (iVar9 != -1);
            }
          }
        }
        uVar11 = (ushort)puVar12;
        pwVar19 = L"?";
LAB_14d48787b:
        if ((int)uVar5 < (this->PsymSymbols).ArrayNum) {
          uVar18 = ~uVar5 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pwVar2 = *(wchar_t **)(pFVar13 + 0x10);
        param_2->Name =
             *(wchar_t **)
              ((this->PsymSymbols).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18 + 0x10);
        param_2->Module = pwVar2;
        param_2->File = pwVar19;
        param_2->Line = uVar11;
        param_2->Result = (atomic<TraceServices::ESymbolQueryResult>)0x1;
        (**(code **)*this->SymbolFilter)(this->SymbolFilter,param_2);
        lVar7 = 0x30;
      }
      LOCK();
      *(int *)(lVar7 + lVar1) = *(int *)(lVar7 + lVar1) + 1;
      UNLOCK();
      return;
    }
  }
  if (2 < (byte)LogPsymResolver._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPsymResolver);
  }
  pwVar19 = GUnknownModuleTextPsym;
  param_2->Module = GUnknownModuleTextPsym;
  param_2->Name = pwVar19;
  param_2->File = pwVar19;
  param_2->Line = 0;
  param_2->Result = (atomic<TraceServices::ESymbolQueryResult>)0x2;
  (**(code **)*this->SymbolFilter)(this->SymbolFilter,param_2);
  LOCK();
  this->NoModuleSymbols = (atomic<unsigned_int>)((int)this->NoModuleSymbols + 1);
  UNLOCK();
  return;
}

// Run @ 14d488a90

uint __thiscall TraceServices::FPsymResolver::Run(FPsymResolver *this)

{
  char cVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  FModule *pFVar6;
  wchar_t *pwVar7;
  ulong64 uVar8;
  FResolvedSymbol *pFVar9;
  uchar *puVar10;
  undefined8 uVar11;
  float fVar12;
  TArrayView<unsigned_char_const_,int> local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  fVar12 = __real_3e4ccccd;
  cVar1 = this->bRunWorkerThread;
  while (cVar1 != '\0') {
    pTVar2 = ((this->LoadSymbolsQueue).Tail)->NextNode;
    while ((pTVar2 != (TNode *)0x0 && (this->bRunWorkerThread != false))) {
      pTVar2 = ((this->LoadSymbolsQueue).Tail)->NextNode;
      if (pTVar2 != (TNode *)0x0) {
        pFVar6 = (pTVar2->Item).Module;
        pwVar7 = (pTVar2->Item).Path;
        pTVar3 = (this->LoadSymbolsQueue).Tail;
        puVar10 = (pTVar2->Item).ImageId.DataPtr;
        uVar11._0_4_ = (pTVar2->Item).ImageId.ArrayNum;
        uVar11._4_4_ = *(undefined4 *)&(pTVar2->Item).ImageId.field_0xc;
        (this->LoadSymbolsQueue).Tail = pTVar2;
        local_58.DataPtr = (uchar *)0x0;
        local_58.ArrayNum = 0;
        local_58._12_4_ = 0;
        uStack_40 = 0;
        local_48 = 0;
        (pTVar2->Item).Module = (FModule *)0x0;
        (pTVar2->Item).Path = (wchar_t *)0x0;
        (pTVar2->Item).ImageId.DataPtr = (uchar *)0x0;
        *(undefined8 *)&(pTVar2->Item).ImageId.ArrayNum = 0;
        ::operator_delete(pTVar3,0x28);
        local_58.DataPtr = puVar10;
        local_58._8_8_ = uVar11;
        LoadModuleSymbols(this,pFVar6,pwVar7,&local_58);
      }
      pTVar2 = ((this->LoadSymbolsQueue).Tail)->NextNode;
    }
    pTVar4 = ((this->ResolveQueue).Tail)->NextNode;
    while (((pTVar4 != (TNode *)0x0 && (((this->LoadSymbolsQueue).Tail)->NextNode == (TNode *)0x0))
           && (this->bRunWorkerThread != false))) {
      pTVar4 = ((this->ResolveQueue).Tail)->NextNode;
      if (pTVar4 != (TNode *)0x0) {
        uVar8 = (pTVar4->Item).Address;
        pFVar9 = (pTVar4->Item).Target;
        pTVar5 = (this->ResolveQueue).Tail;
        (this->ResolveQueue).Tail = pTVar4;
        (pTVar4->Item).Address = 0;
        (pTVar4->Item).Target = (FResolvedSymbol *)0x0;
        ::operator_delete(pTVar5,0x18);
        ResolveSymbol(this,uVar8,pFVar9);
      }
      pTVar4 = ((this->ResolveQueue).Tail)->NextNode;
    }
    if (((this->bDrainThenStop != false) && (((this->ResolveQueue).Tail)->NextNode == (TNode *)0x0))
       && (((this->LoadSymbolsQueue).Tail)->NextNode == (TNode *)0x0)) {
      this->bRunWorkerThread = false;
    }
    FWindowsPlatformProcess::Sleep(fVar12);
    cVar1 = this->bRunWorkerThread;
  }
  return 0;
}

// Start @ 14d48c240

void __thiscall TraceServices::FPsymResolver::Start(FPsymResolver *this)

{
  FRunnableThread *pFVar1;
  
  this->bRunWorkerThread = true;
  pFVar1 = FRunnableThread::Create
                     ((FRunnable *)this,L"PSymHelpWorker",0,TPri_Normal,0xffffffffffffffff,None);
  this->Thread = pFVar1;
  return;
}

// Stop @ 14d48c3b0

void __thiscall TraceServices::FPsymResolver::Stop(FPsymResolver *this)

{
  this->bRunWorkerThread = false;
  return;
}

// UpdateResolvedSymbol @ 14d48f250

void __cdecl
TraceServices::FPsymResolver::UpdateResolvedSymbol
          (FResolvedSymbol *param_1,ESymbolQueryResult param_2,wchar_t *param_3,wchar_t *param_4,
          wchar_t *param_5,ushort param_6)

{
  param_1->File = param_5;
  param_1->Line = param_6;
  param_1->Module = param_3;
  param_1->Name = param_4;
  param_1->Result = (atomic<TraceServices::ESymbolQueryResult>)param_2;
  return;
}

