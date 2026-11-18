// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 21

// TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_> @ 14d41fdf0

TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
* __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
::
TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
          (TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
           *this,TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
                 *param_1,ulong64 param_2)

{
  TPagedArray<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FCpuCoreEvent> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
  *pTVar6;
  ulonglong uVar7;
  FCpuCoreEvent *pFVar8;
  
  pFVar8 = (FCpuCoreEvent *)0x0;
  this->Outer = param_1;
  this->CurrentPageIndex = 0;
  this->CurrentItemIndex = 0;
  this->CurrentPageFirstItem = (FCpuCoreEvent *)0x0;
  this->CurrentPageLastItem = (FCpuCoreEvent *)0x0;
  this->CurrentItem = (FCpuCoreEvent *)0x0;
  uVar7 = param_1->PageSize;
  this->CurrentItemIndex = param_2;
  this->CurrentPageIndex = param_2 / uVar7;
  if (param_2 == param_1->TotalItemCount) {
    this->CurrentItem = (FCpuCoreEvent *)0x0;
    return this;
  }
  if (param_1->TotalItemCount <= param_2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  if ((ulonglong)(longlong)(this->Outer->PagesArray).ArrayNum <= this->CurrentPageIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  pTVar1 = this->Outer;
  uVar2 = this->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  this->CurrentPageFirstItem = pTVar3[uVar2].Items;
  if (pTVar3[uVar2].Items != (FCpuCoreEvent *)0x0) {
    pFVar8 = pTVar3[uVar2].Items + (pTVar3[uVar2].Count - 1);
  }
  this->CurrentPageLastItem = pFVar8;
  pTVar3 = pTVar1->FirstPage;
  uVar7 = param_2 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TPagedArrayIterator<TraceServices::FCpuCoreEvent,TraceServices::TPagedArrayPage<TraceServices::FCpuCoreEvent>_>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  this->CurrentItem = pTVar3[uVar2].Items + uVar7;
  return this;
}

// TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> @ 14d41ff50

TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *
__thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
          (TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
           *this,TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                 *param_1,ulong64 param_2)

{
  TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *pTVar1;
  ulong64 uVar2;
  FEventScopeEntryPage *pFVar3;
  code *pcVar4;
  bool bVar5;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *pTVar6;
  ulonglong uVar7;
  FEventScopeEntry *pFVar8;
  
  pFVar8 = (FEventScopeEntry *)0x0;
  this->Outer = param_1;
  this->CurrentPageIndex = 0;
  this->CurrentItemIndex = 0;
  this->CurrentPageFirstItem = (FEventScopeEntry *)0x0;
  this->CurrentPageLastItem = (FEventScopeEntry *)0x0;
  this->CurrentItem = (FEventScopeEntry *)0x0;
  uVar7 = param_1->PageSize;
  this->CurrentItemIndex = param_2;
  this->CurrentPageIndex = param_2 / uVar7;
  if (param_2 == param_1->TotalItemCount) {
    this->CurrentItem = (FEventScopeEntry *)0x0;
    return this;
  }
  if (param_1->TotalItemCount <= param_2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  if ((ulonglong)(longlong)(this->Outer->PagesArray).ArrayNum <= this->CurrentPageIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  pTVar1 = this->Outer;
  uVar2 = this->CurrentPageIndex;
  pFVar3 = pTVar1->FirstPage;
  this->CurrentPageFirstItem = pFVar3[uVar2].Items;
  if (pFVar3[uVar2].Items != (FEventScopeEntry *)0x0) {
    pFVar8 = pFVar3[uVar2].Items + (pFVar3[uVar2].Count - 1);
  }
  this->CurrentPageLastItem = pFVar8;
  pFVar3 = pTVar1->FirstPage;
  uVar7 = param_2 % pTVar1->PageSize;
  if (pFVar3[uVar2].Count <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  this->CurrentItem = pFVar3[uVar2].Items + uVar7;
  return this;
}

// TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_> @ 14d4200a0

TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
* __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
::
TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
          (TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
           *this,TPagedArray<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
                 *param_1,ulong64 param_2)

{
  TPagedArray<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
  *pTVar6;
  ulonglong uVar7;
  FMetadataStoreEntry *pFVar8;
  
  pFVar8 = (FMetadataStoreEntry *)0x0;
  this->Outer = param_1;
  this->CurrentPageIndex = 0;
  this->CurrentItemIndex = 0;
  this->CurrentPageFirstItem = (FMetadataStoreEntry *)0x0;
  this->CurrentPageLastItem = (FMetadataStoreEntry *)0x0;
  this->CurrentItem = (FMetadataStoreEntry *)0x0;
  uVar7 = param_1->PageSize;
  this->CurrentItemIndex = param_2;
  this->CurrentPageIndex = param_2 / uVar7;
  if (param_2 == param_1->TotalItemCount) {
    this->CurrentItem = (FMetadataStoreEntry *)0x0;
    return this;
  }
  if (param_1->TotalItemCount <= param_2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  if ((ulonglong)(longlong)(this->Outer->PagesArray).ArrayNum <= this->CurrentPageIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  pTVar1 = this->Outer;
  uVar2 = this->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  this->CurrentPageFirstItem = pTVar3[uVar2].Items;
  if (pTVar3[uVar2].Items != (FMetadataStoreEntry *)0x0) {
    pFVar8 = pTVar3[uVar2].Items + (pTVar3[uVar2].Count - 1);
  }
  this->CurrentPageLastItem = pFVar8;
  pTVar3 = pTVar1->FirstPage;
  uVar7 = param_2 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  this->CurrentItem = pTVar3[uVar2].Items + uVar7;
  return this;
}

// TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_> @ 14d420200

TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
* __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
::
TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
          (TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
           *this,TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
                 *param_1,ulong64 param_2)

{
  TPagedArray<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FPackageScope> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
  *pTVar6;
  ulonglong uVar7;
  FPackageScope *pFVar8;
  
  pFVar8 = (FPackageScope *)0x0;
  this->Outer = param_1;
  this->CurrentPageIndex = 0;
  this->CurrentItemIndex = 0;
  this->CurrentPageFirstItem = (FPackageScope *)0x0;
  this->CurrentPageLastItem = (FPackageScope *)0x0;
  this->CurrentItem = (FPackageScope *)0x0;
  uVar7 = param_1->PageSize;
  this->CurrentItemIndex = param_2;
  this->CurrentPageIndex = param_2 / uVar7;
  if (param_2 == param_1->TotalItemCount) {
    this->CurrentItem = (FPackageScope *)0x0;
    return this;
  }
  if (param_1->TotalItemCount <= param_2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  if ((ulonglong)(longlong)(this->Outer->PagesArray).ArrayNum <= this->CurrentPageIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  pTVar1 = this->Outer;
  uVar2 = this->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  this->CurrentPageFirstItem = pTVar3[uVar2].Items;
  if (pTVar3[uVar2].Items != (FPackageScope *)0x0) {
    pFVar8 = pTVar3[uVar2].Items + (pTVar3[uVar2].Count - 1);
  }
  this->CurrentPageLastItem = pFVar8;
  pTVar3 = pTVar1->FirstPage;
  uVar7 = param_2 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TPagedArrayIterator<TraceServices::FPackageScope,TraceServices::TPagedArrayPage<TraceServices::FPackageScope>_>
                *)(*pcVar4)();
      return pTVar6;
    }
  }
  this->CurrentItem = pTVar3[uVar2].Items + uVar7;
  return this;
}

// NextItem @ 14d4799a0

FLoadRequest * __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
::NextItem(TPagedArrayIterator<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
           *this)

{
  ulong64 uVar1;
  TPagedArray<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
  *pTVar2;
  ulong64 uVar3;
  TPagedArrayPage<TraceServices::FLoadRequest> *pTVar4;
  longlong lVar5;
  FLoadRequest *pFVar6;
  FLoadRequest *pFVar7;
  
  if (this->CurrentItem != this->CurrentPageLastItem) {
    this->CurrentItemIndex = this->CurrentItemIndex + 1;
    pFVar7 = this->CurrentItem + 1;
    this->CurrentItem = pFVar7;
    return pFVar7;
  }
  pTVar2 = this->Outer;
  uVar3 = this->CurrentPageIndex;
  if (uVar3 != (longlong)((pTVar2->PagesArray).ArrayNum + -1)) {
    uVar1 = uVar3 + 1;
    this->CurrentPageIndex = uVar1;
    lVar5 = uVar3 + 1;
    pTVar4 = pTVar2->FirstPage;
    pFVar7 = pTVar4[lVar5].Items;
    this->CurrentPageFirstItem = pFVar7;
    pFVar6 = (FLoadRequest *)0x0;
    if (pTVar4[lVar5].Items != (FLoadRequest *)0x0) {
      pFVar6 = pTVar4[lVar5].Items + (pTVar4[lVar5].Count - 1);
    }
    this->CurrentPageLastItem = pFVar6;
    uVar3 = pTVar2->PageSize;
    this->CurrentItem = pFVar7;
    this->CurrentItemIndex = uVar1 * uVar3;
    if (pTVar2->FirstPage + uVar1 == (TPagedArrayPage<TraceServices::FLoadRequest> *)0x0) {
      pFVar7 = (FLoadRequest *)0x0;
    }
    return pFVar7;
  }
  this->CurrentItem = (FLoadRequest *)0x0;
  this->CurrentPageFirstItem = (FLoadRequest *)0x0;
  this->CurrentPageLastItem = (FLoadRequest *)0x0;
  this->CurrentItemIndex = pTVar2->TotalItemCount;
  return (FLoadRequest *)0x0;
}

// NextItem @ 14d479a70

FLoadTimeProfilerCpuEvent * __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
::NextItem(TPagedArrayIterator<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
           *this)

{
  ulong64 uVar1;
  TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
  *pTVar2;
  ulong64 uVar3;
  TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *pTVar4;
  FLoadTimeProfilerCpuEvent *pFVar5;
  longlong lVar6;
  FLoadTimeProfilerCpuEvent *pFVar7;
  
  if (this->CurrentItem != this->CurrentPageLastItem) {
    this->CurrentItemIndex = this->CurrentItemIndex + 1;
    pFVar7 = this->CurrentItem + 1;
    this->CurrentItem = pFVar7;
    return pFVar7;
  }
  pTVar2 = this->Outer;
  uVar3 = this->CurrentPageIndex;
  if (uVar3 != (longlong)((pTVar2->PagesArray).ArrayNum + -1)) {
    uVar1 = uVar3 + 1;
    this->CurrentPageIndex = uVar1;
    lVar6 = uVar3 + 1;
    pTVar4 = pTVar2->FirstPage;
    pFVar7 = pTVar4[lVar6].Items;
    this->CurrentPageFirstItem = pFVar7;
    pFVar5 = (FLoadTimeProfilerCpuEvent *)0x0;
    if (pTVar4[lVar6].Items != (FLoadTimeProfilerCpuEvent *)0x0) {
      pFVar5 = pTVar4[lVar6].Items + (pTVar4[lVar6].Count - 1);
    }
    this->CurrentPageLastItem = pFVar5;
    uVar3 = pTVar2->PageSize;
    this->CurrentItem = pFVar7;
    this->CurrentItemIndex = uVar1 * uVar3;
    if (pTVar2->FirstPage + uVar1 ==
        (TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *)0x0) {
      pFVar7 = (FLoadTimeProfilerCpuEvent *)0x0;
    }
    return pFVar7;
  }
  this->CurrentItem = (FLoadTimeProfilerCpuEvent *)0x0;
  this->CurrentPageFirstItem = (FLoadTimeProfilerCpuEvent *)0x0;
  this->CurrentPageLastItem = (FLoadTimeProfilerCpuEvent *)0x0;
  this->CurrentItemIndex = pTVar2->TotalItemCount;
  return (FLoadTimeProfilerCpuEvent *)0x0;
}

// NextItem @ 14d479b40

/* WARNING: Enum "Type": Some values do not have unique names */

FLogMessageInternal * __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
::NextItem(TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
           *this)

{
  ulong64 uVar1;
  TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
  *pTVar2;
  ulong64 uVar3;
  TPagedArrayPage<TraceServices::FLogMessageInternal> *pTVar4;
  FLogMessageInternal *pFVar5;
  longlong lVar6;
  FLogMessageInternal *pFVar7;
  
  if (this->CurrentItem != this->CurrentPageLastItem) {
    this->CurrentItemIndex = this->CurrentItemIndex + 1;
    pFVar7 = this->CurrentItem + 1;
    this->CurrentItem = pFVar7;
    return pFVar7;
  }
  pTVar2 = this->Outer;
  uVar3 = this->CurrentPageIndex;
  if (uVar3 != (longlong)((pTVar2->PagesArray).ArrayNum + -1)) {
    uVar1 = uVar3 + 1;
    this->CurrentPageIndex = uVar1;
    lVar6 = uVar3 + 1;
    pTVar4 = pTVar2->FirstPage;
    pFVar7 = pTVar4[lVar6].Items;
    this->CurrentPageFirstItem = pFVar7;
    pFVar5 = (FLogMessageInternal *)0x0;
    if (pTVar4[lVar6].Items != (FLogMessageInternal *)0x0) {
      pFVar5 = pTVar4[lVar6].Items + (pTVar4[lVar6].Count - 1);
    }
    this->CurrentPageLastItem = pFVar5;
    uVar3 = pTVar2->PageSize;
    this->CurrentItem = pFVar7;
    this->CurrentItemIndex = uVar1 * uVar3;
    if (pTVar2->FirstPage + uVar1 == (TPagedArrayPage<TraceServices::FLogMessageInternal> *)0x0) {
      pFVar7 = (FLogMessageInternal *)0x0;
    }
    return pFVar7;
  }
  this->CurrentItem = (FLogMessageInternal *)0x0;
  this->CurrentPageFirstItem = (FLogMessageInternal *)0x0;
  this->CurrentPageLastItem = (FLogMessageInternal *)0x0;
  this->CurrentItemIndex = pTVar2->TotalItemCount;
  return (FLogMessageInternal *)0x0;
}

// NextItem @ 14d479c10

FTimingProfilerEvent * __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
::NextItem(TPagedArrayIterator<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
           *this)

{
  ulong64 uVar1;
  TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
  *pTVar2;
  ulong64 uVar3;
  TPagedArrayPage<TraceServices::FTimingProfilerEvent> *pTVar4;
  longlong lVar5;
  FTimingProfilerEvent *pFVar6;
  FTimingProfilerEvent *pFVar7;
  
  if (this->CurrentItem != this->CurrentPageLastItem) {
    this->CurrentItemIndex = this->CurrentItemIndex + 1;
    pFVar7 = this->CurrentItem + 1;
    this->CurrentItem = pFVar7;
    return pFVar7;
  }
  pTVar2 = this->Outer;
  uVar3 = this->CurrentPageIndex;
  if (uVar3 != (longlong)((pTVar2->PagesArray).ArrayNum + -1)) {
    uVar1 = uVar3 + 1;
    this->CurrentPageIndex = uVar1;
    lVar5 = uVar3 + 1;
    pTVar4 = pTVar2->FirstPage;
    pFVar7 = pTVar4[lVar5].Items;
    this->CurrentPageFirstItem = pFVar7;
    pFVar6 = (FTimingProfilerEvent *)0x0;
    if (pTVar4[lVar5].Items != (FTimingProfilerEvent *)0x0) {
      pFVar6 = pTVar4[lVar5].Items + (pTVar4[lVar5].Count - 1);
    }
    this->CurrentPageLastItem = pFVar6;
    uVar3 = pTVar2->PageSize;
    this->CurrentItem = pFVar7;
    this->CurrentItemIndex = uVar1 * uVar3;
    if (pTVar2->FirstPage + uVar1 == (TPagedArrayPage<TraceServices::FTimingProfilerEvent> *)0x0) {
      pFVar7 = (FTimingProfilerEvent *)0x0;
    }
    return pFVar7;
  }
  this->CurrentItem = (FTimingProfilerEvent *)0x0;
  this->CurrentPageFirstItem = (FTimingProfilerEvent *)0x0;
  this->CurrentPageLastItem = (FTimingProfilerEvent *)0x0;
  this->CurrentItemIndex = pTVar2->TotalItemCount;
  return (FTimingProfilerEvent *)0x0;
}

// PrevItem @ 14d47cf80

FEventScopeEntry * __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::PrevItem
          (TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
           *this)

{
  ulong64 uVar1;
  TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *pTVar2;
  FEventScopeEntryPage *pFVar3;
  ulong64 uVar4;
  FEventScopeEntry *pFVar5;
  FEventScopeEntry *pFVar6;
  
  if (this->CurrentItem != this->CurrentPageFirstItem) {
    this->CurrentItemIndex = this->CurrentItemIndex - 1;
    pFVar6 = this->CurrentItem + -1;
    this->CurrentItem = pFVar6;
    return pFVar6;
  }
  uVar1 = this->CurrentPageIndex;
  pTVar2 = this->Outer;
  if (uVar1 != 0) {
    this->CurrentPageIndex = uVar1 - 1;
    pFVar3 = pTVar2->FirstPage;
    pFVar6 = pFVar3[uVar1 - 1].Items;
    this->CurrentPageFirstItem = pFVar6;
    pFVar5 = (FEventScopeEntry *)0x0;
    if (pFVar3[uVar1 - 1].Items != (FEventScopeEntry *)0x0) {
      pFVar5 = pFVar3[uVar1 - 1].Items + (pFVar3[uVar1 - 1].Count - 1);
    }
    this->CurrentPageLastItem = pFVar5;
    uVar4 = pTVar2->PageSize;
    this->CurrentItem = pFVar5;
    this->CurrentItemIndex = ((longlong)pFVar5 - (longlong)pFVar6 >> 3) + (uVar1 - 1) * uVar4;
    if (pTVar2->FirstPage + (uVar1 - 1) == (FEventScopeEntryPage *)0x0) {
      pFVar5 = (FEventScopeEntry *)0x0;
    }
    return pFVar5;
  }
  this->CurrentItem = (FEventScopeEntry *)0x0;
  this->CurrentPageFirstItem = (FEventScopeEntry *)0x0;
  this->CurrentPageLastItem = (FEventScopeEntry *)0x0;
  this->CurrentItemIndex = pTVar2->TotalItemCount;
  return (FEventScopeEntry *)0x0;
}

// PrevItem @ 14d47d050

/* WARNING: Enum "Type": Some values do not have unique names */

FLogMessageInternal * __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
::PrevItem(TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
           *this)

{
  ulong64 uVar1;
  TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
  *pTVar2;
  TPagedArrayPage<TraceServices::FLogMessageInternal> *pTVar3;
  ulong64 uVar4;
  FLogMessageInternal *pFVar5;
  FLogMessageInternal *pFVar6;
  
  if (this->CurrentItem != this->CurrentPageFirstItem) {
    this->CurrentItemIndex = this->CurrentItemIndex - 1;
    pFVar5 = this->CurrentItem + -1;
    this->CurrentItem = pFVar5;
    return pFVar5;
  }
  uVar1 = this->CurrentPageIndex;
  pTVar2 = this->Outer;
  if (uVar1 != 0) {
    this->CurrentPageIndex = uVar1 - 1;
    pTVar3 = pTVar2->FirstPage;
    pFVar5 = pTVar3[uVar1 - 1].Items;
    this->CurrentPageFirstItem = pFVar5;
    pFVar6 = (FLogMessageInternal *)0x0;
    if (pTVar3[uVar1 - 1].Items != (FLogMessageInternal *)0x0) {
      pFVar6 = pTVar3[uVar1 - 1].Items + (pTVar3[uVar1 - 1].Count - 1);
    }
    this->CurrentPageLastItem = pFVar6;
    uVar4 = pTVar2->PageSize;
    this->CurrentItem = pFVar6;
    this->CurrentItemIndex = ((longlong)pFVar6 - (longlong)pFVar5) / 0x18 + (uVar1 - 1) * uVar4;
    if (pTVar2->FirstPage + (uVar1 - 1) ==
        (TPagedArrayPage<TraceServices::FLogMessageInternal> *)0x0) {
      pFVar6 = (FLogMessageInternal *)0x0;
    }
    return pFVar6;
  }
  this->CurrentItem = (FLogMessageInternal *)0x0;
  this->CurrentPageFirstItem = (FLogMessageInternal *)0x0;
  this->CurrentPageLastItem = (FLogMessageInternal *)0x0;
  this->CurrentItemIndex = pTVar2->TotalItemCount;
  return (FLogMessageInternal *)0x0;
}

// SetPositionInternal @ 14d48a250

void __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FExportsTableRow,TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>_>
::SetPositionInternal
          (TPagedArrayIterator<TraceServices::FExportsTableRow,TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>_>
           *this,ulong64 param_1)

{
  TPagedArray<TraceServices::FExportsTableRow,TraceServices::TPagedArrayPage<TraceServices::FExportsTableRow>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FExportsTableRow> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FExportsTableRow *pFVar6;
  ulonglong uVar7;
  
  uVar7 = this->Outer->PageSize;
  this->CurrentItemIndex = param_1;
  this->CurrentPageIndex = param_1 / uVar7;
  uVar7 = this->Outer->TotalItemCount;
  if (param_1 == uVar7) {
    this->CurrentPageFirstItem = (FExportsTableRow *)0x0;
    this->CurrentPageLastItem = (FExportsTableRow *)0x0;
    this->CurrentItem = (FExportsTableRow *)0x0;
    return;
  }
  if (uVar7 <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((ulonglong)(longlong)(this->Outer->PagesArray).ArrayNum <= this->CurrentPageIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = this->Outer;
  uVar2 = this->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  this->CurrentPageFirstItem = pTVar3[uVar2].Items;
  if (pTVar3[uVar2].Items == (FExportsTableRow *)0x0) {
    pFVar6 = (FExportsTableRow *)0x0;
  }
  else {
    pFVar6 = pTVar3[uVar2].Items + (pTVar3[uVar2].Count - 1);
  }
  this->CurrentPageLastItem = pFVar6;
  pTVar3 = pTVar1->FirstPage;
  uVar7 = param_1 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->CurrentItem = pTVar3[uVar2].Items + uVar7;
  return;
}

// SetPositionInternal @ 14d48a390

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FFileActivity,TraceServices::TPagedArrayPage<TraceServices::FFileActivity>_>
::SetPositionInternal
          (TPagedArrayIterator<TraceServices::FFileActivity,TraceServices::TPagedArrayPage<TraceServices::FFileActivity>_>
           *this,ulong64 param_1)

{
  TPagedArray<TraceServices::FFileActivity,TraceServices::TPagedArrayPage<TraceServices::FFileActivity>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FFileActivity> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FFileActivity *pFVar6;
  ulonglong uVar7;
  
  uVar7 = this->Outer->PageSize;
  this->CurrentItemIndex = param_1;
  this->CurrentPageIndex = param_1 / uVar7;
  uVar7 = this->Outer->TotalItemCount;
  if (param_1 == uVar7) {
    this->CurrentPageFirstItem = (FFileActivity *)0x0;
    this->CurrentPageLastItem = (FFileActivity *)0x0;
    this->CurrentItem = (FFileActivity *)0x0;
    return;
  }
  if (uVar7 <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((ulonglong)(longlong)(this->Outer->PagesArray).ArrayNum <= this->CurrentPageIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = this->Outer;
  uVar2 = this->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  this->CurrentPageFirstItem = pTVar3[uVar2].Items;
  if (pTVar3[uVar2].Items == (FFileActivity *)0x0) {
    pFVar6 = (FFileActivity *)0x0;
  }
  else {
    pFVar6 = pTVar3[uVar2].Items + (pTVar3[uVar2].Count - 1);
  }
  this->CurrentPageLastItem = pFVar6;
  pTVar3 = pTVar1->FirstPage;
  uVar7 = param_1 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->CurrentItem = pTVar3[uVar2].Items + uVar7;
  return;
}

// SetPositionInternal @ 14d48a4e0

void __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
::SetPositionInternal
          (TPagedArrayIterator<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
           *this,ulong64 param_1)

{
  TPagedArray<TraceServices::FLoadRequest,TraceServices::TPagedArrayPage<TraceServices::FLoadRequest>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FLoadRequest> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FLoadRequest *pFVar6;
  ulonglong uVar7;
  
  uVar7 = this->Outer->PageSize;
  this->CurrentItemIndex = param_1;
  this->CurrentPageIndex = param_1 / uVar7;
  uVar7 = this->Outer->TotalItemCount;
  if (param_1 == uVar7) {
    this->CurrentPageFirstItem = (FLoadRequest *)0x0;
    this->CurrentPageLastItem = (FLoadRequest *)0x0;
    this->CurrentItem = (FLoadRequest *)0x0;
    return;
  }
  if (uVar7 <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((ulonglong)(longlong)(this->Outer->PagesArray).ArrayNum <= this->CurrentPageIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = this->Outer;
  uVar2 = this->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  this->CurrentPageFirstItem = pTVar3[uVar2].Items;
  if (pTVar3[uVar2].Items == (FLoadRequest *)0x0) {
    pFVar6 = (FLoadRequest *)0x0;
  }
  else {
    pFVar6 = pTVar3[uVar2].Items + (pTVar3[uVar2].Count - 1);
  }
  this->CurrentPageLastItem = pFVar6;
  pTVar3 = pTVar1->FirstPage;
  uVar7 = param_1 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->CurrentItem = pTVar3[uVar2].Items + uVar7;
  return;
}

// SetPositionInternal @ 14d48a620

void __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FLoadTimeProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>_>
::SetPositionInternal
          (TPagedArrayIterator<TraceServices::FLoadTimeProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>_>
           *this,ulong64 param_1)

{
  TPagedArray<TraceServices::FLoadTimeProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FLoadTimeProfilerAggregatedStats> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FLoadTimeProfilerAggregatedStats *pFVar6;
  ulonglong uVar7;
  
  uVar7 = this->Outer->PageSize;
  this->CurrentItemIndex = param_1;
  this->CurrentPageIndex = param_1 / uVar7;
  uVar7 = this->Outer->TotalItemCount;
  if (param_1 == uVar7) {
    this->CurrentPageFirstItem = (FLoadTimeProfilerAggregatedStats *)0x0;
    this->CurrentPageLastItem = (FLoadTimeProfilerAggregatedStats *)0x0;
    this->CurrentItem = (FLoadTimeProfilerAggregatedStats *)0x0;
    return;
  }
  if (uVar7 <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((ulonglong)(longlong)(this->Outer->PagesArray).ArrayNum <= this->CurrentPageIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = this->Outer;
  uVar2 = this->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  this->CurrentPageFirstItem = pTVar3[uVar2].Items;
  if (pTVar3[uVar2].Items == (FLoadTimeProfilerAggregatedStats *)0x0) {
    pFVar6 = (FLoadTimeProfilerAggregatedStats *)0x0;
  }
  else {
    pFVar6 = pTVar3[uVar2].Items + (pTVar3[uVar2].Count - 1);
  }
  this->CurrentPageLastItem = pFVar6;
  pTVar3 = pTVar1->FirstPage;
  uVar7 = param_1 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->CurrentItem = pTVar3[uVar2].Items + uVar7;
  return;
}

// SetPositionInternal @ 14d48a760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
::SetPositionInternal
          (TPagedArrayIterator<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
           *this,ulong64 param_1)

{
  TPagedArray<TraceServices::FLogMessageInternal,TraceServices::TPagedArrayPage<TraceServices::FLogMessageInternal>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FLogMessageInternal> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FLogMessageInternal *pFVar6;
  ulonglong uVar7;
  
  uVar7 = this->Outer->PageSize;
  this->CurrentItemIndex = param_1;
  this->CurrentPageIndex = param_1 / uVar7;
  uVar7 = this->Outer->TotalItemCount;
  if (param_1 == uVar7) {
    this->CurrentPageFirstItem = (FLogMessageInternal *)0x0;
    this->CurrentPageLastItem = (FLogMessageInternal *)0x0;
    this->CurrentItem = (FLogMessageInternal *)0x0;
    return;
  }
  if (uVar7 <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((ulonglong)(longlong)(this->Outer->PagesArray).ArrayNum <= this->CurrentPageIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = this->Outer;
  uVar2 = this->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  this->CurrentPageFirstItem = pTVar3[uVar2].Items;
  if (pTVar3[uVar2].Items == (FLogMessageInternal *)0x0) {
    pFVar6 = (FLogMessageInternal *)0x0;
  }
  else {
    pFVar6 = pTVar3[uVar2].Items + (pTVar3[uVar2].Count - 1);
  }
  this->CurrentPageLastItem = pFVar6;
  pTVar3 = pTVar1->FirstPage;
  uVar7 = param_1 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->CurrentItem = pTVar3[uVar2].Items + uVar7;
  return;
}

// SetPositionInternal @ 14d48a8a0

void __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FNetProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>_>
::SetPositionInternal
          (TPagedArrayIterator<TraceServices::FNetProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>_>
           *this,ulong64 param_1)

{
  TPagedArray<TraceServices::FNetProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FNetProfilerAggregatedStats> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FNetProfilerAggregatedStats *pFVar6;
  ulonglong uVar7;
  
  uVar7 = this->Outer->PageSize;
  this->CurrentItemIndex = param_1;
  this->CurrentPageIndex = param_1 / uVar7;
  uVar7 = this->Outer->TotalItemCount;
  if (param_1 == uVar7) {
    this->CurrentPageFirstItem = (FNetProfilerAggregatedStats *)0x0;
    this->CurrentPageLastItem = (FNetProfilerAggregatedStats *)0x0;
    this->CurrentItem = (FNetProfilerAggregatedStats *)0x0;
    return;
  }
  if (uVar7 <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((ulonglong)(longlong)(this->Outer->PagesArray).ArrayNum <= this->CurrentPageIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = this->Outer;
  uVar2 = this->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  this->CurrentPageFirstItem = pTVar3[uVar2].Items;
  if (pTVar3[uVar2].Items == (FNetProfilerAggregatedStats *)0x0) {
    pFVar6 = (FNetProfilerAggregatedStats *)0x0;
  }
  else {
    pFVar6 = pTVar3[uVar2].Items + (pTVar3[uVar2].Count - 1);
  }
  this->CurrentPageLastItem = pFVar6;
  pTVar3 = pTVar1->FirstPage;
  uVar7 = param_1 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->CurrentItem = pTVar3[uVar2].Items + uVar7;
  return;
}

// SetPositionInternal @ 14d48a9e0

void __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FNetProfilerAggregatedStatsCounterStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>_>
::SetPositionInternal
          (TPagedArrayIterator<TraceServices::FNetProfilerAggregatedStatsCounterStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>_>
           *this,ulong64 param_1)

{
  TPagedArray<TraceServices::FNetProfilerAggregatedStatsCounterStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FNetProfilerAggregatedStatsCounterStats> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FNetProfilerAggregatedStatsCounterStats *pFVar6;
  ulonglong uVar7;
  
  uVar7 = this->Outer->PageSize;
  this->CurrentItemIndex = param_1;
  this->CurrentPageIndex = param_1 / uVar7;
  uVar7 = this->Outer->TotalItemCount;
  if (param_1 == uVar7) {
    this->CurrentPageFirstItem = (FNetProfilerAggregatedStatsCounterStats *)0x0;
    this->CurrentPageLastItem = (FNetProfilerAggregatedStatsCounterStats *)0x0;
    this->CurrentItem = (FNetProfilerAggregatedStatsCounterStats *)0x0;
    return;
  }
  if (uVar7 <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((ulonglong)(longlong)(this->Outer->PagesArray).ArrayNum <= this->CurrentPageIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = this->Outer;
  uVar2 = this->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  this->CurrentPageFirstItem = pTVar3[uVar2].Items;
  if (pTVar3[uVar2].Items == (FNetProfilerAggregatedStatsCounterStats *)0x0) {
    pFVar6 = (FNetProfilerAggregatedStatsCounterStats *)0x0;
  }
  else {
    pFVar6 = pTVar3[uVar2].Items + (pTVar3[uVar2].Count - 1);
  }
  this->CurrentPageLastItem = pFVar6;
  pTVar3 = pTVar1->FirstPage;
  uVar7 = param_1 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->CurrentItem = pTVar3[uVar2].Items + uVar7;
  return;
}

// SetPositionInternal @ 14d48ab20

void __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FPackagesTableRow,TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>_>
::SetPositionInternal
          (TPagedArrayIterator<TraceServices::FPackagesTableRow,TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>_>
           *this,ulong64 param_1)

{
  TPagedArray<TraceServices::FPackagesTableRow,TraceServices::TPagedArrayPage<TraceServices::FPackagesTableRow>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FPackagesTableRow> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FPackagesTableRow *pFVar6;
  ulonglong uVar7;
  
  uVar7 = this->Outer->PageSize;
  this->CurrentItemIndex = param_1;
  this->CurrentPageIndex = param_1 / uVar7;
  uVar7 = this->Outer->TotalItemCount;
  if (param_1 == uVar7) {
    this->CurrentPageFirstItem = (FPackagesTableRow *)0x0;
    this->CurrentPageLastItem = (FPackagesTableRow *)0x0;
    this->CurrentItem = (FPackagesTableRow *)0x0;
    return;
  }
  if (uVar7 <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((ulonglong)(longlong)(this->Outer->PagesArray).ArrayNum <= this->CurrentPageIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = this->Outer;
  uVar2 = this->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  this->CurrentPageFirstItem = pTVar3[uVar2].Items;
  if (pTVar3[uVar2].Items == (FPackagesTableRow *)0x0) {
    pFVar6 = (FPackagesTableRow *)0x0;
  }
  else {
    pFVar6 = pTVar3[uVar2].Items + (pTVar3[uVar2].Count - 1);
  }
  this->CurrentPageLastItem = pFVar6;
  pTVar3 = pTVar1->FirstPage;
  uVar7 = param_1 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->CurrentItem = pTVar3[uVar2].Items + uVar7;
  return;
}

// SetPositionInternal @ 14d48ac60

void __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FRequestsTableRow,TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>_>
::SetPositionInternal
          (TPagedArrayIterator<TraceServices::FRequestsTableRow,TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>_>
           *this,ulong64 param_1)

{
  TPagedArray<TraceServices::FRequestsTableRow,TraceServices::TPagedArrayPage<TraceServices::FRequestsTableRow>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FRequestsTableRow> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FRequestsTableRow *pFVar6;
  ulonglong uVar7;
  
  uVar7 = this->Outer->PageSize;
  this->CurrentItemIndex = param_1;
  this->CurrentPageIndex = param_1 / uVar7;
  uVar7 = this->Outer->TotalItemCount;
  if (param_1 == uVar7) {
    this->CurrentPageFirstItem = (FRequestsTableRow *)0x0;
    this->CurrentPageLastItem = (FRequestsTableRow *)0x0;
    this->CurrentItem = (FRequestsTableRow *)0x0;
    return;
  }
  if (uVar7 <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((ulonglong)(longlong)(this->Outer->PagesArray).ArrayNum <= this->CurrentPageIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = this->Outer;
  uVar2 = this->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  this->CurrentPageFirstItem = pTVar3[uVar2].Items;
  if (pTVar3[uVar2].Items == (FRequestsTableRow *)0x0) {
    pFVar6 = (FRequestsTableRow *)0x0;
  }
  else {
    pFVar6 = pTVar3[uVar2].Items + (pTVar3[uVar2].Count - 1);
  }
  this->CurrentPageLastItem = pFVar6;
  pTVar3 = pTVar1->FirstPage;
  uVar7 = param_1 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->CurrentItem = pTVar3[uVar2].Items + uVar7;
  return;
}

// SetPositionInternal @ 14d48adb0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

void __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FTimingProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>_>
::SetPositionInternal
          (TPagedArrayIterator<TraceServices::FTimingProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>_>
           *this,ulong64 param_1)

{
  TPagedArray<TraceServices::FTimingProfilerAggregatedStats,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FTimingProfilerAggregatedStats> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FTimingProfilerAggregatedStats *pFVar6;
  ulonglong uVar7;
  
  uVar7 = this->Outer->PageSize;
  this->CurrentItemIndex = param_1;
  this->CurrentPageIndex = param_1 / uVar7;
  uVar7 = this->Outer->TotalItemCount;
  if (param_1 == uVar7) {
    this->CurrentPageFirstItem = (FTimingProfilerAggregatedStats *)0x0;
    this->CurrentPageLastItem = (FTimingProfilerAggregatedStats *)0x0;
    this->CurrentItem = (FTimingProfilerAggregatedStats *)0x0;
    return;
  }
  if (uVar7 <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((ulonglong)(longlong)(this->Outer->PagesArray).ArrayNum <= this->CurrentPageIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = this->Outer;
  uVar2 = this->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  this->CurrentPageFirstItem = pTVar3[uVar2].Items;
  if (pTVar3[uVar2].Items == (FTimingProfilerAggregatedStats *)0x0) {
    pFVar6 = (FTimingProfilerAggregatedStats *)0x0;
  }
  else {
    pFVar6 = pTVar3[uVar2].Items + (pTVar3[uVar2].Count - 1);
  }
  this->CurrentPageLastItem = pFVar6;
  pTVar3 = pTVar1->FirstPage;
  uVar7 = param_1 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->CurrentItem = pTVar3[uVar2].Items + uVar7;
  return;
}

// SetPositionInternal @ 14d48aef0

void __thiscall
TraceServices::
TPagedArrayIterator<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
::SetPositionInternal
          (TPagedArrayIterator<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
           *this,ulong64 param_1)

{
  TPagedArray<TraceServices::FImportTableRow,TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>_>
  *pTVar1;
  ulong64 uVar2;
  TPagedArrayPage<TraceServices::FImportTableRow> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FImportTableRow *pFVar6;
  ulonglong uVar7;
  
  uVar7 = this->Outer->PageSize;
  this->CurrentItemIndex = param_1;
  this->CurrentPageIndex = param_1 / uVar7;
  uVar7 = this->Outer->TotalItemCount;
  if (param_1 == uVar7) {
    this->CurrentPageFirstItem = (FImportTableRow *)0x0;
    this->CurrentPageLastItem = (FImportTableRow *)0x0;
    this->CurrentItem = (FImportTableRow *)0x0;
    return;
  }
  if (uVar7 <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InItemIndex < Outer->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((ulonglong)(longlong)(this->Outer->PagesArray).ArrayNum <= this->CurrentPageIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPageIndex < Outer->PagesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = this->Outer;
  uVar2 = this->CurrentPageIndex;
  pTVar3 = pTVar1->FirstPage;
  this->CurrentPageFirstItem = pTVar3[uVar2].Items;
  if (pTVar3[uVar2].Items == (FImportTableRow *)0x0) {
    pFVar6 = (FImportTableRow *)0x0;
  }
  else {
    pFVar6 = pTVar3[uVar2].Items + (pTVar3[uVar2].Count - 1);
  }
  this->CurrentPageLastItem = pFVar6;
  pTVar3 = pTVar1->FirstPage;
  uVar7 = param_1 % pTVar1->PageSize;
  if (pTVar3[uVar2].Count <= uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemIndexInPage < CurrentPage->Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                       ,0x134,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->CurrentItem = pTVar3[uVar2].Items + uVar7;
  return;
}

