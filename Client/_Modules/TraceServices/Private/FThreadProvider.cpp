// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 13

// FThreadProvider @ 14d4264b0

FThreadProvider * __thiscall
TraceServices::FThreadProvider::FThreadProvider(FThreadProvider *this,IAnalysisSession *param_1)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IThreadProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableThreadProvider__;
  this->ModCount = 0;
  *(undefined8 *)&this->ThreadMap = 0;
  *(undefined8 *)&(this->ThreadMap).field_0x8 = 0;
  *(undefined8 *)&(this->ThreadMap).field_0x20 = 0;
  *(undefined4 *)&(this->ThreadMap).field_0x28 = 0;
  *(undefined4 *)&(this->ThreadMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ThreadMap).field_0x34 = 0;
  *(undefined4 *)&(this->ThreadMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ThreadMap).field_0x40 = 0;
  *(undefined4 *)&(this->ThreadMap).field_0x48 = 0;
  (this->SortedThreads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedThreads).ArrayNum = 0;
  (this->SortedThreads).ArrayMax = 0;
  return this;
}

// ~FThreadProvider @ 14d42cd30

void __thiscall TraceServices::FThreadProvider::~FThreadProvider(FThreadProvider *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IThreadProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableThreadProvider__;
  pFVar4 = (this->SortedThreads).AllocatorInstance.Data;
  iVar1 = (this->SortedThreads).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->SortedThreads).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::FThreadProvider::FThreadInfoInternal_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar2) break;
    ::operator_delete(*(void **)pFVar4,0x28);
    pFVar4 = pFVar4 + 8;
  }
  pFVar2 = (this->SortedThreads).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ThreadMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ThreadMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ThreadMap);
  return;
}

// AddGameThread @ 14d43aac0

void __thiscall TraceServices::FThreadProvider::AddGameThread(FThreadProvider *this,uint param_1)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  ForAnyElementType FVar2;
  undefined1 local_res8 [8];
  FName local_res18 [2];
  FString local_18;
  
  FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
  local_res18[0].ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar1.Value);
  local_res18[0].Number = 0;
  ::FName::GetPlainNameString(local_res18,&local_18);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  (**(code **)(this->_padding_ + 0x20))(&this->_padding_,param_1,FVar2.Data,0xfffffffe);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddThread @ 14d43dda0

void __thiscall
TraceServices::FThreadProvider::AddThread
          (FThreadProvider *this,uint param_1,wchar_t *param_2,EThreadPriority param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FThreadInfoInternal **ppFVar6;
  wchar_t *pwVar7;
  undefined1 *puVar8;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  FThreadInfoInternal *local_48;
  uint *local_40;
  FThreadInfoInternal **local_38;
  
  local_res10[0] = param_1;
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  if (*(int *)&this->ThreadMap != *(int *)&(this->ThreadMap).field_0x2c) {
    puVar8 = *(undefined1 **)&(this->ThreadMap).field_0x38;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ThreadMap).field_0x30;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->ThreadMap).field_0x40 - 1U & local_res10[0]) * 4);
    if (iVar5 != -1) {
      do {
        if (*(uint *)(this->ModCount + (longlong)iVar5 * 0x18) == local_res10[0]) {
          ppFVar6 = TMapBase<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,0>_>
                    ::FindChecked((TMapBase<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,0>_>
                                   *)&this->ModCount,local_res10[0]);
          local_48 = *ppFVar6;
          goto LAB_14d43df56;
        }
        iVar5 = *(int *)(this->ModCount + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  local_48 = ::operator_new(0x28);
  if (local_48 != (FThreadInfoInternal *)0x0) {
    *(undefined8 *)local_48 = 0;
    *(undefined4 *)&local_48->field_0x1c = 0;
    local_48->Name = L"UnnamedThread";
    local_48->GroupSortOrder = 0xffffffff;
    local_48->PrioritySortOrder = 0x7fffffff;
    local_48->FallbackSortOrder = 0xffffffff;
    local_48->GroupName = (wchar_t *)0x0;
  }
  local_48->Id = local_res10[0];
  local_48->FallbackSortOrder = *(uint *)&(this->SortedThreads).AllocatorInstance.Data;
  ppFVar6 = *(FThreadInfoInternal ***)&(this->ThreadMap).field_0x48;
  if (((ppFVar6 <= &local_48) &&
      (&local_48 < ppFVar6 + *(int *)((longlong)&(this->SortedThreads).AllocatorInstance.Data + 4)))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)&(this->SortedThreads).AllocatorInstance.Data;
  piVar1 = (int *)((longlong)&(this->SortedThreads).AllocatorInstance.Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&(this->ThreadMap).field_0x48,piVar1);
  }
  *(int *)&(this->SortedThreads).AllocatorInstance.Data = iVar5 + 1;
  *(FThreadInfoInternal **)(*(longlong *)&(this->ThreadMap).field_0x48 + (longlong)iVar5 * 8) =
       local_48;
  local_40 = local_res10;
  local_38 = &local_48;
  TSet<TTuple<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::FThreadProvider::FThreadInfoInternal_*_const_&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,0>,FDefaultSetAllocator>
              *)&this->ModCount,
             (TPairInitializer<unsigned_int_const_&,TraceServices::FThreadProvider::FThreadInfoInternal_*_const_&>
              *)local_res8,(bool *)&local_40);
LAB_14d43df56:
  if (param_2 != (wchar_t *)0x0) {
    if (*param_2 != L'\0') {
      plVar2 = (longlong *)this->_padding_;
      pwVar7 = (wchar_t *)(**(code **)(*plVar2 + 0xd0))(plVar2,param_2);
      local_48->Name = pwVar7;
    }
    iVar5 = wcscmp(param_2,L"RHIThread");
    if (iVar5 == 0) {
      plVar2 = (longlong *)this->_padding_;
      pwVar7 = (wchar_t *)(**(code **)(*plVar2 + 0xd0))(plVar2,L"Render");
      SetThreadGroup((FThreadProvider *)&this[-1].SortedThreads.ArrayNum,local_res10[0],pwVar7);
    }
    iVar5 = GetPrioritySortOrder(param_3);
    local_48->PrioritySortOrder = iVar5;
  }
  AlgoImpl::
  IntroSortInternal<TraceServices::FThreadProvider::FThreadInfoInternal_*,int,_TraceServices::FThreadProvider::SortThreads_::__l2::<lambda_1>,TLess<void>_>
            (*(FThreadInfoInternal ***)&(this->ThreadMap).field_0x48,
             *(int *)&(this->SortedThreads).AllocatorInstance.Data,local_res10[0]._0_1_,
             (TLess<void>)local_res10[0]._0_1_);
  this->Session = (IAnalysisSession *)&this->Session->field_0x1;
  return;
}

// EnumerateThreads @ 14d45d720

void __thiscall
TraceServices::FThreadProvider::EnumerateThreads
          (FThreadProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FThreadInfo_const_&)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  pFVar4 = (this->SortedThreads).AllocatorInstance.Data;
  iVar2 = (this->SortedThreads).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SortedThreads).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::FThreadProvider::FThreadInfoInternal_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    puVar3 = *(undefined4 **)pFVar4;
    local_38[0] = *puVar3;
    local_30 = *(undefined8 *)(puVar3 + 2);
    local_28 = *(undefined8 *)(puVar3 + 8);
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_38);
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// GetGroupSortOrder @ 14d4683a0

uint __cdecl TraceServices::FThreadProvider::GetGroupSortOrder(wchar_t *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == (wchar_t *)0x0) {
    return 0xffffffff;
  }
  iVar1 = wcscmp(param_1,L"Render");
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wcscmp(param_1,L"AsyncLoading");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = wcscmp(param_1,L"TaskGraphHigh");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = wcscmp(param_1,L"TaskGraphNormal");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = wcscmp(param_1,L"TaskGraphLow");
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = wcscmp(param_1,L"LargeThreadPool");
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = wcscmp(param_1,L"ThreadPool");
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = wcscmp(param_1,L"BackgroundThreadPool");
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = wcscmp(param_1,L"IOThreadPool");
  if (iVar1 == 0) {
    return 8;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(param_1);
  return uVar2;
}

// GetModCount @ 14d469810

ulong64 __thiscall TraceServices::FThreadProvider::GetModCount(FThreadProvider *this)

{
  return this->ModCount;
}

// GetPrioritySortOrder @ 14d46c1a0

int __cdecl TraceServices::FThreadProvider::GetPrioritySortOrder(EThreadPriority param_1)

{
  switch(param_1) {
  case TPri_Normal:
    return 3;
  case TPri_AboveNormal:
    return 2;
  case TPri_BelowNormal:
    return 5;
  case TPri_Highest:
    return 1;
  case TPri_Lowest:
    return 6;
  case TPri_SlightlyBelowNormal:
    return 4;
  case TPri_TimeCritical:
    return 0;
  default:
    return param_1;
  }
}

// GetReadProvider @ 14d46c250

IThreadProvider * __thiscall TraceServices::FThreadProvider::GetReadProvider(FThreadProvider *this)

{
  return (IThreadProvider *)&this[-1].SortedThreads.ArrayNum;
}

// GetThreadName @ 14d46e2c0

wchar_t * __thiscall
TraceServices::FThreadProvider::GetThreadName(FThreadProvider *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if (*(int *)&(this->ThreadMap).field_0x8 != *(int *)&(this->ThreadMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ThreadMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ThreadMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->ThreadMap).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->ThreadMap + (longlong)iVar2 * 0x18;
        if (*(uint *)(*(longlong *)&this->ThreadMap + (longlong)iVar2 * 0x18) == param_1) {
          plVar3 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar3 = (longlong *)0x0;
          }
          if (plVar3 == (longlong *)0x0) {
            return L"";
          }
          return *(wchar_t **)(*plVar3 + 8);
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return L"";
}

// SetThreadGroup @ 14d48b400

void __thiscall
TraceServices::FThreadProvider::SetThreadGroup(FThreadProvider *this,uint param_1,wchar_t *param_2)

{
  FThreadInfoInternal *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FThreadInfoInternal **ppFVar6;
  undefined1 *puVar7;
  <lambda_1> local_res10;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  if (*(int *)&(this->ThreadMap).field_0x8 != *(int *)&(this->ThreadMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ThreadMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ThreadMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->ThreadMap).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar4 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->ThreadMap + (longlong)iVar4 * 0x18) == param_1)
        goto LAB_14d48b48e;
        iVar4 = *(int *)(*(longlong *)&this->ThreadMap + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ThreadMap.Contains(Id)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Threads.cpp"
                     ,0x54,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d48b48e:
  ppFVar6 = TMapBase<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,0>_>
            ::FindChecked((TMapBase<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,0>_>
                           *)&this->ThreadMap,param_1);
  pFVar1 = *ppFVar6;
  pFVar1->GroupName = param_2;
  if (param_2 == (wchar_t *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    iVar4 = wcscmp(param_2,L"Render");
    uVar5 = 0;
    if (iVar4 != 0) {
      iVar4 = wcscmp(param_2,L"AsyncLoading");
      if (iVar4 == 0) {
        uVar5 = 1;
      }
      else {
        iVar4 = wcscmp(param_2,L"TaskGraphHigh");
        if (iVar4 == 0) {
          uVar5 = 2;
        }
        else {
          iVar4 = wcscmp(param_2,L"TaskGraphNormal");
          if (iVar4 == 0) {
            uVar5 = 3;
          }
          else {
            iVar4 = wcscmp(param_2,L"TaskGraphLow");
            if (iVar4 == 0) {
              uVar5 = 4;
            }
            else {
              iVar4 = wcscmp(param_2,L"LargeThreadPool");
              if (iVar4 == 0) {
                uVar5 = 5;
              }
              else {
                iVar4 = wcscmp(param_2,L"ThreadPool");
                if (iVar4 == 0) {
                  uVar5 = 6;
                }
                else {
                  iVar4 = wcscmp(param_2,L"BackgroundThreadPool");
                  if (iVar4 == 0) {
                    uVar5 = 7;
                  }
                  else {
                    iVar4 = wcscmp(param_2,L"IOThreadPool");
                    if (iVar4 == 0) {
                      uVar5 = 8;
                    }
                    else {
                      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(param_2);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  pFVar1->GroupSortOrder = uVar5;
  AlgoImpl::
  IntroSortInternal<TraceServices::FThreadProvider::FThreadInfoInternal_*,int,_TraceServices::FThreadProvider::SortThreads_::__l2::<lambda_1>,TLess<void>_>
            ((FThreadInfoInternal **)(this->SortedThreads).AllocatorInstance.Data,
             (this->SortedThreads).ArrayNum,local_res10,(TLess<void>)local_res10);
  this->ModCount = this->ModCount + 1;
  return;
}

// SetThreadPriority @ 14d48b5f0

void __thiscall
TraceServices::FThreadProvider::SetThreadPriority
          (FThreadProvider *this,uint param_1,EThreadPriority param_2)

{
  FThreadInfoInternal *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FThreadInfoInternal **ppFVar5;
  undefined1 *puVar6;
  <lambda_1> local_res10;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  if (*(int *)&(this->ThreadMap).field_0x8 != *(int *)&(this->ThreadMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ThreadMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ThreadMap).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->ThreadMap).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar4 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->ThreadMap + (longlong)iVar4 * 0x18) == param_1)
        goto LAB_14d48b67e;
        iVar4 = *(int *)(*(longlong *)&this->ThreadMap + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ThreadMap.Contains(Id)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Threads.cpp"
                     ,0x48,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d48b67e:
  ppFVar5 = TMapBase<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,0>_>
            ::FindChecked((TMapBase<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,0>_>
                           *)&this->ThreadMap,param_1);
  pFVar1 = *ppFVar5;
  if (pFVar1->PrioritySortOrder == -2) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7337404970368499786>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Threads.cpp"
                       ,0x4a,"ThreadInfo->PrioritySortOrder != -2");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = GetPrioritySortOrder(param_2);
  pFVar1->PrioritySortOrder = iVar4;
  AlgoImpl::
  IntroSortInternal<TraceServices::FThreadProvider::FThreadInfoInternal_*,int,_TraceServices::FThreadProvider::SortThreads_::__l2::<lambda_1>,TLess<void>_>
            ((FThreadInfoInternal **)(this->SortedThreads).AllocatorInstance.Data,
             (this->SortedThreads).ArrayNum,local_res10,(TLess<void>)local_res10);
  this->ModCount = this->ModCount + 1;
  return;
}

// SortThreads @ 14d48bdc0

void __thiscall TraceServices::FThreadProvider::SortThreads(FThreadProvider *this)

{
  <lambda_1> local_res8;
  
  AlgoImpl::
  IntroSortInternal<TraceServices::FThreadProvider::FThreadInfoInternal_*,int,_TraceServices::FThreadProvider::SortThreads_::__l2::<lambda_1>,TLess<void>_>
            ((FThreadInfoInternal **)(this->SortedThreads).AllocatorInstance.Data,
             (this->SortedThreads).ArrayNum,local_res8,(TLess<void>)local_res8);
  return;
}

