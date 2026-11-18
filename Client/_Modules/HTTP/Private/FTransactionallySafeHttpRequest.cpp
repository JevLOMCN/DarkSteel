// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 45

// FTransactionallySafeHttpRequest @ 14314df70

FTransactionallySafeHttpRequest * __thiscall
FTransactionallySafeHttpRequest::FTransactionallySafeHttpRequest
          (FTransactionallySafeHttpRequest *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FCurlHttpRequest *pFVar4;
  FCurlHttpRequest *pFVar5;
  FSharedReferencer<1> FVar6;
  FCurlHttpRequest *local_28;
  FSharedReferencer<1> local_20;
  
  FVar6.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTransactionallySafeHttpRequest__6B_;
  (this->InnerRequest).Object = (IHttpRequest *)0x0;
  (this->InnerRequest).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  pFVar4 = ::operator_new(0x6c0);
  pFVar5 = (FCurlHttpRequest *)FVar6.ReferenceController;
  if (pFVar4 != (FCurlHttpRequest *)0x0) {
    pFVar5 = FCurlHttpRequest::FCurlHttpRequest(pFVar4);
  }
  local_28 = pFVar5;
  pFVar4 = ::operator_new(0x18);
  if (pFVar4 != (FCurlHttpRequest *)0x0) {
    *(undefined4 *)&pFVar4->_padding_ = 1;
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 1;
    pFVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VIHttpRequest__U__DefaultDeleter_VIHttpRequest___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pFVar4->_padding_ = (longlong)pFVar5;
    FVar6.ReferenceController = (TReferenceControllerBase<1> *)pFVar4;
  }
  local_20.ReferenceController = FVar6.ReferenceController;
  if ((pFVar5 != (FCurlHttpRequest *)0x0) &&
     (((pFVar5->_padding_ == 0 || (pFVar5->_padding_ == 0)) || (*(int *)(pFVar5->_padding_ + 8) < 1)
      ))) {
    if ((FCurlHttpRequest *)FVar6.ReferenceController != (FCurlHttpRequest *)0x0) {
      LOCK();
      *(int *)&((FCurlHttpRequest *)FVar6.ReferenceController)->_padding_ =
           (int)((FCurlHttpRequest *)FVar6.ReferenceController)->_padding_ + 1;
      UNLOCK();
    }
    pFVar5->_padding_ = (longlong)pFVar5;
    if ((FCurlHttpRequest *)FVar6.ReferenceController != (FCurlHttpRequest *)pFVar5->_padding_) {
      if ((FCurlHttpRequest *)FVar6.ReferenceController != (FCurlHttpRequest *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&((FCurlHttpRequest *)FVar6.ReferenceController)->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar5->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar5->_padding_ = (longlong)FVar6.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar6.ReferenceController);
  }
  if (&this->InnerRequest != (TSharedPtr<IHttpRequest,1> *)&local_28) {
    (this->InnerRequest).Object = (IHttpRequest *)pFVar5;
    local_28 = (FCurlHttpRequest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InnerRequest).SharedReferenceCount,&local_20);
    FVar6.ReferenceController = local_20.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  return this;
}

// ~FTransactionallySafeHttpRequest @ 143150e90

void __thiscall
FTransactionallySafeHttpRequest::~FTransactionallySafeHttpRequest
          (FTransactionallySafeHttpRequest *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InnerRequest).SharedReferenceCount.ReferenceController);
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000143150ec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// AppendToHeader @ 143155400

void __thiscall
FTransactionallySafeHttpRequest::AppendToHeader
          (FTransactionallySafeHttpRequest *this,FString *param_1,FString *param_2)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
                    /* WARNING: Could not recover jumptable at 0x000143155461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar1 + 0xb8))(pIVar1,param_1,param_2);
  return;
}

// CancelRequest @ 143157b60

void __thiscall
FTransactionallySafeHttpRequest::CancelRequest(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143157ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->InnerRequest).Object + 0x118))();
  return;
}

// ClearTimeout @ 143158420

void __thiscall FTransactionallySafeHttpRequest::ClearTimeout(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143158462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->InnerRequest).Object + 0xd0))();
  return;
}

// GetAllHeaders @ 143161790

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FTransactionallySafeHttpRequest::GetAllHeaders
          (FTransactionallySafeHttpRequest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x30))(pIVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetContent @ 143161cd0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FTransactionallySafeHttpRequest::GetContent(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143161d12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar3 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
           (**(code **)(*(longlong *)(this->InnerRequest).Object + 0x48))();
  return pTVar3;
}

// GetContentLength @ 1431620c0

ulong64 __thiscall
FTransactionallySafeHttpRequest::GetContentLength(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143162102. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)(this->InnerRequest).Object + 0x40))();
  return uVar3;
}

// GetContentType @ 143162350

FString * __thiscall
FTransactionallySafeHttpRequest::GetContentType
          (FTransactionallySafeHttpRequest *this,FString *__return_storage_ptr__)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x38))(pIVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDelegateThreadPolicy @ 143162600

EHttpRequestDelegateThreadPolicy __thiscall
FTransactionallySafeHttpRequest::GetDelegateThreadPolicy(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  EHttpRequestDelegateThreadPolicy EVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143162642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(*(longlong *)(this->InnerRequest).Object + 0x140))();
  return EVar3;
}

// GetEffectiveURL @ 1431626c0

FString * __thiscall
FTransactionallySafeHttpRequest::GetEffectiveURL(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143162702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FString *)(**(code **)(*(longlong *)(this->InnerRequest).Object + 8))();
  return pFVar3;
}

// GetElapsedTime @ 143162770

float __thiscall
FTransactionallySafeHttpRequest::GetElapsedTime(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001431627b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar3 = (float)(**(code **)(*(longlong *)(this->InnerRequest).Object + 0x130))();
  return fVar3;
}

// GetFailureReason @ 143162910

EHttpFailureReason __thiscall
FTransactionallySafeHttpRequest::GetFailureReason(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  EHttpFailureReason EVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143162952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(*(longlong *)(this->InnerRequest).Object + 0x18))();
  return EVar3;
}

// GetHeader @ 143162d10

FString * __thiscall
FTransactionallySafeHttpRequest::GetHeader
          (FTransactionallySafeHttpRequest *this,FString *__return_storage_ptr__,FString *param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x28))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetOption @ 143164680

FString * __thiscall
FTransactionallySafeHttpRequest::GetOption
          (FTransactionallySafeHttpRequest *this,FString *__return_storage_ptr__,FName param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x70))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetPriority @ 143164750

EHttpRequestPriority __thiscall
FTransactionallySafeHttpRequest::GetPriority(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  EHttpRequestPriority EVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143164792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(*(longlong *)(this->InnerRequest).Object + 0x158))();
  return EVar3;
}

// GetResponse @ 143164870

TSharedPtr<IHttpResponse,1> * __thiscall
FTransactionallySafeHttpRequest::GetResponse
          (FTransactionallySafeHttpRequest *this,TSharedPtr<IHttpResponse,1> *__return_storage_ptr__
          )

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<IHttpResponse,1> *pTVar4;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IHttpResponse,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x120))(pIVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetStatus @ 143164c50

Type __thiscall FTransactionallySafeHttpRequest::GetStatus(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143164c92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar3 = (**(code **)(*(longlong *)(this->InnerRequest).Object + 0x10))();
  return TVar3;
}

// GetTimeout @ 143164de0

TOptional<float> __thiscall
FTransactionallySafeHttpRequest::GetTimeout(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  TOptional<float> TVar3;
  TOptional<float> in_RDX;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (TOptional<float>)(*pcVar1)();
      return TVar3;
    }
  }
  (**(code **)(*(longlong *)(this->InnerRequest).Object + 0xe0))();
  return in_RDX;
}

// GetURL @ 143164ff0

FString * __thiscall FTransactionallySafeHttpRequest::GetURL(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143165032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FString *)(*(code *)**(undefined8 **)(this->InnerRequest).Object)();
  return pFVar3;
}

// GetURLParameter @ 143165370

FString * __thiscall
FTransactionallySafeHttpRequest::GetURLParameter
          (FTransactionallySafeHttpRequest *this,FString *__return_storage_ptr__,FString *param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x20))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetVerb @ 1431664d0

FString * __thiscall
FTransactionallySafeHttpRequest::GetVerb
          (FTransactionallySafeHttpRequest *this,FString *__return_storage_ptr__)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
  (**(code **)(*(longlong *)pIVar1 + 0x58))(pIVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnHeaderReceived @ 1431714f0

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
* __thiscall
FTransactionallySafeHttpRequest::OnHeaderReceived(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
  *pTVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143171532. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar3 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
            *)(**(code **)(*(longlong *)(this->InnerRequest).Object + 0x108))();
  return pTVar3;
}

// OnProcessRequestComplete @ 1431715b0

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
* __thiscall
FTransactionallySafeHttpRequest::OnProcessRequestComplete(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
  *pTVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001431715f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar3 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
            *)(**(code **)(*(longlong *)(this->InnerRequest).Object + 0xf0))();
  return pTVar3;
}

// OnRequestProgress64 @ 143171670

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
* __thiscall
FTransactionallySafeHttpRequest::OnRequestProgress64(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
  *pTVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001431716b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar3 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
            *)(**(code **)(*(longlong *)(this->InnerRequest).Object + 0xf8))();
  return pTVar3;
}

// OnRequestWillRetry @ 143171730

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>
* __thiscall
FTransactionallySafeHttpRequest::OnRequestWillRetry(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>
  *pTVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143171772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar3 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>
            *)(**(code **)(*(longlong *)(this->InnerRequest).Object + 0x100))();
  return pTVar3;
}

// OnStatusCodeReceived @ 1431717f0

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy> * __thiscall
FTransactionallySafeHttpRequest::OnStatusCodeReceived(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy> *pTVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143171832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar3 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy> *)
           (**(code **)(*(longlong *)(this->InnerRequest).Object + 0x110))();
  return pTVar3;
}

// ProcessRequest @ 1431750b0

bool __thiscall
FTransactionallySafeHttpRequest::ProcessRequest(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001431750f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)(this->InnerRequest).Object + 0xe8))();
  return (bool)uVar3;
}

// ProcessRequestUntilComplete @ 143175310

void __thiscall
FTransactionallySafeHttpRequest::ProcessRequestUntilComplete(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143175352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->InnerRequest).Object + 0x148))();
  return;
}

// ResetTimeoutStatus @ 143179a40

void __thiscall
FTransactionallySafeHttpRequest::ResetTimeoutStatus(FTransactionallySafeHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143179a82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->InnerRequest).Object + 0xd8))();
  return;
}

// SetActivityTimeout @ 14317cba0

void __thiscall
FTransactionallySafeHttpRequest::SetActivityTimeout
          (FTransactionallySafeHttpRequest *this,float param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
                    /* WARNING: Could not recover jumptable at 0x00014317cbf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar1 + 200))(pIVar1,param_1);
  return;
}

// SetContent @ 14317d050

void __thiscall
FTransactionallySafeHttpRequest::SetContent
          (FTransactionallySafeHttpRequest *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
                    /* WARNING: Could not recover jumptable at 0x00014317d0a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar1 + 0x80))(pIVar1,param_1);
  return;
}

// SetContent @ 14317d0b0

void __thiscall
FTransactionallySafeHttpRequest::SetContent
          (FTransactionallySafeHttpRequest *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
                    /* WARNING: Could not recover jumptable at 0x00014317d101. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar1 + 0x88))(pIVar1,param_1);
  return;
}

// SetContentAsStreamedFile @ 14317d3e0

bool __thiscall
FTransactionallySafeHttpRequest::SetContentAsStreamedFile
          (FTransactionallySafeHttpRequest *this,FString *param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
                    /* WARNING: Could not recover jumptable at 0x00014317d431. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(longlong *)pIVar1 + 0x98))(pIVar1,param_1);
  return (bool)uVar4;
}

// SetContentAsString @ 14317d9c0

void __thiscall
FTransactionallySafeHttpRequest::SetContentAsString
          (FTransactionallySafeHttpRequest *this,FString *param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
                    /* WARNING: Could not recover jumptable at 0x00014317da11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar1 + 0x90))(pIVar1,param_1);
  return;
}

// SetContentFromStream @ 14317dcf0

bool __thiscall
FTransactionallySafeHttpRequest::SetContentFromStream
          (FTransactionallySafeHttpRequest *this,TSharedRef<FArchive,1> *param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FArchive *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
  pcVar2 = *(code **)(*(longlong *)pIVar1 + 0xa0);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar4 = (*pcVar2)(pIVar1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar4;
}

// SetDelegateThreadPolicy @ 14317df10

void __thiscall
FTransactionallySafeHttpRequest::SetDelegateThreadPolicy
          (FTransactionallySafeHttpRequest *this,EHttpRequestDelegateThreadPolicy param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
                    /* WARNING: Could not recover jumptable at 0x00014317df62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar1 + 0x138))(pIVar1,param_1);
  return;
}

// SetHeader @ 14317e110

void __thiscall
FTransactionallySafeHttpRequest::SetHeader
          (FTransactionallySafeHttpRequest *this,FString *param_1,FString *param_2)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
                    /* WARNING: Could not recover jumptable at 0x00014317e171. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar1 + 0xb0))(pIVar1,param_1,param_2);
  return;
}

// SetOption @ 14317ecb0

void __thiscall
FTransactionallySafeHttpRequest::SetOption
          (FTransactionallySafeHttpRequest *this,FName param_1,FString *param_2)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
                    /* WARNING: Could not recover jumptable at 0x00014317ed11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar1 + 0x78))(pIVar1,param_1,param_2);
  return;
}

// SetPriority @ 14317eeb0

void __thiscall
FTransactionallySafeHttpRequest::SetPriority
          (FTransactionallySafeHttpRequest *this,EHttpRequestPriority param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
                    /* WARNING: Could not recover jumptable at 0x00014317ef02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar1 + 0x150))(pIVar1,param_1);
  return;
}

// SetResponseBodyReceiveStream @ 14317f250

bool __thiscall
FTransactionallySafeHttpRequest::SetResponseBodyReceiveStream
          (FTransactionallySafeHttpRequest *this,TSharedRef<FArchive,1> *param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FArchive *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
  pcVar2 = *(code **)(*(longlong *)pIVar1 + 0xa8);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar4 = (*pcVar2)(pIVar1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar4;
}

// SetTimeout @ 14317f5f0

void __thiscall
FTransactionallySafeHttpRequest::SetTimeout(FTransactionallySafeHttpRequest *this,float param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
                    /* WARNING: Could not recover jumptable at 0x00014317f642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar1 + 0xc0))(pIVar1,param_1);
  return;
}

// SetURL @ 14317fa90

void __thiscall
FTransactionallySafeHttpRequest::SetURL(FTransactionallySafeHttpRequest *this,FString *param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
                    /* WARNING: Could not recover jumptable at 0x00014317fae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar1 + 0x68))(pIVar1,param_1);
  return;
}

// SetVerb @ 14317fe00

void __thiscall
FTransactionallySafeHttpRequest::SetVerb(FTransactionallySafeHttpRequest *this,FString *param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
                    /* WARNING: Could not recover jumptable at 0x00014317fe51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar1 + 0x60))(pIVar1,param_1);
  return;
}

// Tick @ 143188370

void __thiscall
FTransactionallySafeHttpRequest::Tick(FTransactionallySafeHttpRequest *this,float param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->InnerRequest).Object == (IHttpRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->InnerRequest).Object;
                    /* WARNING: Could not recover jumptable at 0x0001431883c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar1 + 0x128))(pIVar1,param_1);
  return;
}

