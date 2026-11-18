// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 38

// FHttpRequestAdapterBase @ 14314d240

FHttpRequestAdapterBase * __thiscall
FHttpRequestAdapterBase::FHttpRequestAdapterBase
          (FHttpRequestAdapterBase *this,TSharedRef<IHttpRequest,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  FHttpRequestImpl::FHttpRequestImpl((FHttpRequestImpl *)this);
  this->_padding_ = (longlong)&___7FHttpRequestAdapterBase__6B_;
  (this->HttpRequest).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->HttpRequest).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FHttpRequestAdapterBase @ 1431505f0

void __thiscall FHttpRequestAdapterBase::~FHttpRequestAdapterBase(FHttpRequestAdapterBase *this)

{
  this->_padding_ = (longlong)&___7FHttpRequestAdapterBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HttpRequest).SharedReferenceCount.ReferenceController);
  FHttpRequestImpl::~FHttpRequestImpl((FHttpRequestImpl *)this);
  return;
}

// AppendToHeader @ 1431552d0

void __thiscall
FHttpRequestAdapterBase::AppendToHeader
          (FHttpRequestAdapterBase *this,FString *param_1,FString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001431552da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0xb8))();
  return;
}

// ClearTimeout @ 1431583c0

void __thiscall FHttpRequestAdapterBase::ClearTimeout(FHttpRequestAdapterBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001431583ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0xd0))();
  return;
}

// GetAllHeaders @ 1431614d0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FHttpRequestAdapterBase::GetAllHeaders
          (FHttpRequestAdapterBase *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x30))();
  return __return_storage_ptr__;
}

// GetContent @ 143161ba0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FHttpRequestAdapterBase::GetContent(FHttpRequestAdapterBase *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143161baa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
           (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x48))();
  return pTVar1;
}

// GetContentLength @ 143162050

ulong64 __thiscall FHttpRequestAdapterBase::GetContentLength(FHttpRequestAdapterBase *this)

{
  ulong64 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014316205a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x40))();
  return uVar1;
}

// GetContentType @ 143162290

FString * __thiscall
FHttpRequestAdapterBase::GetContentType
          (FHttpRequestAdapterBase *this,FString *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x38))();
  return __return_storage_ptr__;
}

// GetDelegateThreadPolicy @ 1431625c0

EHttpRequestDelegateThreadPolicy __thiscall
FHttpRequestAdapterBase::GetDelegateThreadPolicy(FHttpRequestAdapterBase *this)

{
  EHttpRequestDelegateThreadPolicy EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001431625ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x140))();
  return EVar1;
}

// GetEffectiveURL @ 143162670

FString * __thiscall FHttpRequestAdapterBase::GetEffectiveURL(FHttpRequestAdapterBase *this)

{
  FString *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014316267a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FString *)(**(code **)(*(longlong *)(this->HttpRequest).Object + 8))();
  return pFVar1;
}

// GetElapsedTime @ 143162730

float __thiscall FHttpRequestAdapterBase::GetElapsedTime(FHttpRequestAdapterBase *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014316273a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(*(longlong *)(this->HttpRequest).Object + 0x130))();
  return fVar1;
}

// GetFailureReason @ 1431628c0

EHttpFailureReason __thiscall
FHttpRequestAdapterBase::GetFailureReason(FHttpRequestAdapterBase *this)

{
  EHttpFailureReason EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001431628ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x18))();
  return EVar1;
}

// GetHeader @ 143162ba0

FString * __thiscall
FHttpRequestAdapterBase::GetHeader
          (FHttpRequestAdapterBase *this,FString *__return_storage_ptr__,FString *param_1)

{
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x28))();
  return __return_storage_ptr__;
}

// GetOption @ 143164590

FString * __thiscall
FHttpRequestAdapterBase::GetOption
          (FHttpRequestAdapterBase *this,FString *__return_storage_ptr__,FName param_1)

{
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x70))();
  return __return_storage_ptr__;
}

// GetPriority @ 143164710

EHttpRequestPriority __thiscall FHttpRequestAdapterBase::GetPriority(FHttpRequestAdapterBase *this)

{
  EHttpRequestPriority EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014316471a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x158))();
  return EVar1;
}

// GetResponse @ 1431647f0

TSharedPtr<IHttpResponse,1> * __thiscall
FHttpRequestAdapterBase::GetResponse
          (FHttpRequestAdapterBase *this,TSharedPtr<IHttpResponse,1> *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x120))();
  return __return_storage_ptr__;
}

// GetStatus @ 143164c00

Type __thiscall FHttpRequestAdapterBase::GetStatus(FHttpRequestAdapterBase *this)

{
  Type TVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143164c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x10))();
  return TVar1;
}

// GetTimeout @ 143164d50

TOptional<float> __thiscall FHttpRequestAdapterBase::GetTimeout(FHttpRequestAdapterBase *this)

{
  TOptional<float> in_RDX;
  
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0xe0))();
  return in_RDX;
}

// GetURL @ 143164f90

FString * __thiscall FHttpRequestAdapterBase::GetURL(FHttpRequestAdapterBase *this)

{
  FString *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143164f9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FString *)(*(code *)**(undefined8 **)(this->HttpRequest).Object)();
  return pFVar1;
}

// GetURLParameter @ 143165140

FString * __thiscall
FHttpRequestAdapterBase::GetURLParameter
          (FHttpRequestAdapterBase *this,FString *__return_storage_ptr__,FString *param_1)

{
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x20))();
  return __return_storage_ptr__;
}

// GetVerb @ 143166470

FString * __thiscall
FHttpRequestAdapterBase::GetVerb(FHttpRequestAdapterBase *this,FString *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x58))();
  return __return_storage_ptr__;
}

// ProcessRequestUntilComplete @ 143175150

void __thiscall FHttpRequestAdapterBase::ProcessRequestUntilComplete(FHttpRequestAdapterBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014317515a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x148))();
  return;
}

// ResetTimeoutStatus @ 1431799e0

void __thiscall FHttpRequestAdapterBase::ResetTimeoutStatus(FHttpRequestAdapterBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001431799ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0xd8))();
  return;
}

// SetActivityTimeout @ 14317cb50

void __thiscall
FHttpRequestAdapterBase::SetActivityTimeout(FHttpRequestAdapterBase *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014317cb5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 200))();
  return;
}

// SetContent @ 14317cf20

void __thiscall
FHttpRequestAdapterBase::SetContent
          (FHttpRequestAdapterBase *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014317cf2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x80))();
  return;
}

// SetContent @ 14317cf40

void __thiscall
FHttpRequestAdapterBase::SetContent
          (FHttpRequestAdapterBase *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014317cf4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x88))();
  return;
}

// SetContentAsStreamedFile @ 14317d390

bool __thiscall
FHttpRequestAdapterBase::SetContentAsStreamedFile(FHttpRequestAdapterBase *this,FString *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014317d39a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x98))();
  return (bool)uVar1;
}

// SetContentAsString @ 14317d900

void __thiscall
FHttpRequestAdapterBase::SetContentAsString(FHttpRequestAdapterBase *this,FString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014317d90a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x90))();
  return;
}

// SetContentFromStream @ 14317dc50

bool __thiscall
FHttpRequestAdapterBase::SetContentFromStream
          (FHttpRequestAdapterBase *this,TSharedRef<FArchive,1> *param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  undefined1 uVar3;
  FArchive *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pIVar1 = (this->HttpRequest).Object;
  pcVar2 = *(code **)(*(longlong *)pIVar1 + 0xa0);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = (*pcVar2)(pIVar1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar3;
}

// SetDelegateThreadPolicy @ 14317ded0

void __thiscall
FHttpRequestAdapterBase::SetDelegateThreadPolicy
          (FHttpRequestAdapterBase *this,EHttpRequestDelegateThreadPolicy param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014317deda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x138))();
  return;
}

// SetHeader @ 14317e0d0

void __thiscall
FHttpRequestAdapterBase::SetHeader(FHttpRequestAdapterBase *this,FString *param_1,FString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014317e0da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0xb0))();
  return;
}

// SetOption @ 14317ec10

void __thiscall
FHttpRequestAdapterBase::SetOption(FHttpRequestAdapterBase *this,FName param_1,FString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014317ec1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x78))();
  return;
}

// SetPriority @ 14317ee70

void __thiscall
FHttpRequestAdapterBase::SetPriority(FHttpRequestAdapterBase *this,EHttpRequestPriority param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014317ee7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x150))();
  return;
}

// SetResponseBodyReceiveStream @ 14317f0f0

bool __thiscall
FHttpRequestAdapterBase::SetResponseBodyReceiveStream
          (FHttpRequestAdapterBase *this,TSharedRef<FArchive,1> *param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  undefined1 uVar3;
  FArchive *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pIVar1 = (this->HttpRequest).Object;
  pcVar2 = *(code **)(*(longlong *)pIVar1 + 0xa8);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = (*pcVar2)(pIVar1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar3;
}

// SetTimeout @ 14317f590

void __thiscall FHttpRequestAdapterBase::SetTimeout(FHttpRequestAdapterBase *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014317f59a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0xc0))();
  return;
}

// SetURL @ 14317fa10

void __thiscall FHttpRequestAdapterBase::SetURL(FHttpRequestAdapterBase *this,FString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014317fa1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x68))();
  return;
}

// SetVerb @ 14317fdc0

void __thiscall FHttpRequestAdapterBase::SetVerb(FHttpRequestAdapterBase *this,FString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014317fdca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x60))();
  return;
}

// Tick @ 143188160

void __thiscall FHttpRequestAdapterBase::Tick(FHttpRequestAdapterBase *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014318816a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->HttpRequest).Object + 0x128))();
  return;
}

