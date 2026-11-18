// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 3

// ~FUniqueNetIdRepl @ 146cb6d00

/* WARNING: Control flow encountered bad instruction data */

void __thiscall FUniqueNetIdRepl::~FUniqueNetIdRepl(FUniqueNetIdRepl *this)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  pFVar2 = (this->ReplicationBytes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  bVar1 = (byte)this->_padding_;
  if (1 < bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)this->_padding_);
    return;
  case 1:
    return;
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}

// SetAccountId @ 146cc7a60

void __thiscall
FUniqueNetIdRepl::SetAccountId
          (FUniqueNetIdRepl *this,TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  piVar1 = &(this->ReplicationBytes).ArrayMax;
  (this->ReplicationBytes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->ReplicationBytes).AllocatorInstance,0,piVar1);
  }
  uVar4 = (ulonglong)(byte)this->_padding_;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&this->_padding_);
  *(uint *)&this->_padding_ = param_1->Value;
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetUniqueNetId @ 146cc7bf0

void __thiscall
FUniqueNetIdRepl::SetUniqueNetId(FUniqueNetIdRepl *this,TSharedPtr<FUniqueNetId_const_,1> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  piVar1 = &(this->ReplicationBytes).ArrayMax;
  (this->ReplicationBytes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->ReplicationBytes).AllocatorInstance,0,piVar1);
  }
  uVar5 = (ulonglong)(byte)this->_padding_;
  if (1 < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(&this->_padding_);
  this->_padding_ = (longlong)param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

