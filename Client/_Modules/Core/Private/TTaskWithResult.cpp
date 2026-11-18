// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// ~TTaskWithResult<TIoStatusOr<FIoBuffer>_> @ 1417a69c0

void __thiscall
UE::Tasks::Private::TTaskWithResult<TIoStatusOr<FIoBuffer>_>::
~TTaskWithResult<TIoStatusOr<FIoBuffer>_>(TTaskWithResult<TIoStatusOr<FIoBuffer>_> *this)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  
  this->_padding_ =
       (longlong)&___7__TTaskWithResult_V__TIoStatusOr_VFIoBuffer_____Private_Tasks_UE__6B_;
  TIoStatusOr<FIoBuffer>::Reset((TIoStatusOr<FIoBuffer> *)&this->ResultStorage);
  lVar2 = *(longlong *)(this->ResultStorage).Pad;
  if (lVar2 != 0) {
    piVar3 = (int *)(lVar2 + -8);
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(piVar3);
    }
  }
  FTaskBase::~FTaskBase((FTaskBase *)this);
  return;
}

// ~TTaskWithResult<FDelegateHandle> @ 141bec9a0

void __thiscall
UE::Tasks::Private::TTaskWithResult<FDelegateHandle>::~TTaskWithResult<FDelegateHandle>
          (TTaskWithResult<FDelegateHandle> *this)

{
  this->_padding_ = (longlong)&___7__TTaskWithResult_VFDelegateHandle___Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase((FTaskBase *)this);
  return;
}

// TTaskWithResult<int> @ 141d69180

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTaskWithResult<int> * __thiscall
UE::Tasks::Private::TTaskWithResult<int>::TTaskWithResult<int>
          (TTaskWithResult<int> *this,wchar_t *param_1,ETaskPriority param_2,
          EExtendedTaskPriority param_3,uint param_4,ETaskFlags param_5)

{
  FTaskBase::FTaskBase((FTaskBase *)this,param_4,true);
  this->_padding_ = (longlong)&___7__TTaskWithResult_H_Private_Tasks_UE__6B_;
  FTaskBase::Init((FTaskBase *)this,param_1,param_2,param_3,param_5);
  return this;
}

// ~TTaskWithResult<int> @ 141d6d130

void __thiscall
UE::Tasks::Private::TTaskWithResult<int>::~TTaskWithResult<int>(TTaskWithResult<int> *this)

{
  this->_padding_ = (longlong)&___7__TTaskWithResult_H_Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase((FTaskBase *)this);
  return;
}

// ~TTaskWithResult<TUniquePtr<int,TDefaultDelete<int>_>_> @ 141d6d210

void __thiscall
UE::Tasks::Private::TTaskWithResult<TUniquePtr<int,TDefaultDelete<int>_>_>::
~TTaskWithResult<TUniquePtr<int,TDefaultDelete<int>_>_>
          (TTaskWithResult<TUniquePtr<int,TDefaultDelete<int>_>_> *this)

{
  this->_padding_ =
       (longlong)&___7__TTaskWithResult_V__TUniquePtr_HU__TDefaultDelete_H_____Private_Tasks_UE__6B_
  ;
  ::operator_delete(*(void **)(this->ResultStorage).Pad,4);
  FTaskBase::~FTaskBase((FTaskBase *)this);
  return;
}

// ~TTaskWithResult<UE::Tasks::FTaskEvent> @ 141d6d250

void __thiscall
UE::Tasks::Private::TTaskWithResult<UE::Tasks::FTaskEvent>::~TTaskWithResult<UE::Tasks::FTaskEvent>
          (TTaskWithResult<UE::Tasks::FTaskEvent> *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  this->_padding_ = (longlong)&___7__TTaskWithResult_VFTaskEvent_Tasks_UE___Private_Tasks_UE__6B_;
  puVar3 = *(undefined8 **)(this->ResultStorage).Pad;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FTaskBase::~FTaskBase((FTaskBase *)this);
  return;
}

// ~TTaskWithResult<bool> @ 141d6d2a0

void __thiscall
UE::Tasks::Private::TTaskWithResult<bool>::~TTaskWithResult<bool>(TTaskWithResult<bool> *this)

{
  this->_padding_ = (longlong)&___7__TTaskWithResult__N_Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase((FTaskBase *)this);
  return;
}

