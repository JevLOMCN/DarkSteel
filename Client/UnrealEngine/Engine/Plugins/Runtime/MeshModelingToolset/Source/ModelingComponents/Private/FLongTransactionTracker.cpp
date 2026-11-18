// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 7

// Close @ 14cbc3110

void __thiscall
UE::TransactionUtil::FLongTransactionTracker::Close
          (FLongTransactionTracker *this,UInteractiveToolManager *param_1)

{
  FLongTransactionTracker *local_res8;
  
  if ((this->OpenCount < 1) || (this->MaxOpen < this->OpenCount)) {
    local_res8 = this;
    `UE::TransactionUtil::FLongTransactionTracker::Close'::__l2::<lambda_1>::operator()(&local_res8)
    ;
  }
  this->OpenCount = this->OpenCount + -1;
  if (this->OpenCount == 0) {
    (**(code **)(param_1->_padding_ + 0x18))(&param_1->_padding_);
  }
  return;
}

// CloseAll @ 14cbc3160

void __thiscall
UE::TransactionUtil::FLongTransactionTracker::CloseAll
          (FLongTransactionTracker *this,UInteractiveToolManager *param_1)

{
  FLongTransactionTracker *local_res8;
  
  if ((this->OpenCount < 0) || (this->MaxOpen < this->OpenCount)) {
    local_res8 = this;
    `UE::TransactionUtil::FLongTransactionTracker::CloseAll'::__l2::<lambda_1>::operator()
              (&local_res8);
  }
  if (0 < this->OpenCount) {
    (**(code **)(param_1->_padding_ + 0x18))(&param_1->_padding_);
  }
  this->OpenCount = 0;
  return;
}

// Open @ 14cbc9220

void __thiscall
UE::TransactionUtil::FLongTransactionTracker::Open
          (FLongTransactionTracker *this,FText *param_1,UInteractiveToolManager *param_2)

{
  ITextData *pIVar1;
  int iVar2;
  FText *local_18;
  FLongTransactionTracker *local_10;
  
  if (this->OpenCount == 0) {
    (**(code **)(param_2->_padding_ + 0x10))(&param_2->_padding_);
  }
  iVar2 = this->OpenCount + 1;
  this->OpenCount = iVar2;
  if ((iVar2 < 1) || (this->MaxOpen < iVar2)) {
    local_18 = param_1;
    local_10 = this;
    `UE::TransactionUtil::FLongTransactionTracker::Open'::__l2::<lambda_1>::operator()(&local_18);
  }
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// operator() @ 150575ee0

bool __thiscall
`UE::TransactionUtil::FLongTransactionTracker::~FLongTransactionTracker'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2313651435851481066>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2313651435851481066>,
                       &`public:___cdecl_`public:___cdecl_UE::TransactionUtil::FLongTransactionTracker::~FLongTransactionTracker(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150576eb0

bool __thiscall
`UE::TransactionUtil::FLongTransactionTracker::Close'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5903863153183162342>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5903863153183162342>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150576f00

bool __thiscall
`UE::TransactionUtil::FLongTransactionTracker::CloseAll'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5903863153183162330>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5903863153183162330>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150576f50

bool __thiscall
`UE::TransactionUtil::FLongTransactionTracker::Open'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5903863153183162349>);
  if (bVar2) {
    FText::ToString(*(FText **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5903863153183162349>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

