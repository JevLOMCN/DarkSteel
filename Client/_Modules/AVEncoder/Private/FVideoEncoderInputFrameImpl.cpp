// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 5

// FVideoEncoderInputFrameImpl @ 148d00890

FVideoEncoderInputFrameImpl * __thiscall
AVEncoder::FVideoEncoderInputFrameImpl::FVideoEncoderInputFrameImpl
          (FVideoEncoderInputFrameImpl *this,FVideoEncoderInputFrameImpl *param_1,
          TFunction<void___cdecl(AVEncoder::FVideoEncoderInputFrame_const_*)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FVideoEncoderInputFrame_AVEncoder__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(int *)&this->_padding_ = (int)lVar4;
  *(undefined1 *)&this->_padding_ = 0;
  uVar1 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar1;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  plVar5 = (longlong *)param_1->_padding_;
  this->_padding_ = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  plVar5 = (longlong *)param_1->_padding_;
  this->_padding_ = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FVideoEncoderInputFrameImpl_AVEncoder__6B_;
  this->Input = param_1->Input;
  LOCK();
  *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
  UNLOCK();
  this->ClonedReference = (FVideoEncoderInputFrame *)param_1;
  *(undefined8 *)&this->OnCloneDestroyed = *(undefined8 *)param_2;
  *(undefined8 *)&(this->OnCloneDestroyed).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)&(this->OnCloneDestroyed).field_0x10 = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)&(this->OnCloneDestroyed).field_0x14 = uVar1;
  *(undefined4 *)&(this->OnCloneDestroyed).field_0x18 = uVar2;
  *(undefined4 *)&(this->OnCloneDestroyed).field_0x1c = uVar3;
  *(undefined8 *)&(this->OnCloneDestroyed).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->OnCloneDestroyed != 0) {
    *(undefined8 *)param_2 = 0;
    return this;
  }
  if (*(longlong *)param_2 != 0) {
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return this;
}

// FVideoEncoderInputFrameImpl @ 148d00b00

FVideoEncoderInputFrameImpl * __thiscall
AVEncoder::FVideoEncoderInputFrameImpl::FVideoEncoderInputFrameImpl
          (FVideoEncoderInputFrameImpl *this,FVideoEncoderInputImpl *param_1)

{
  this->Input = param_1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FVideoEncoderInputFrame_AVEncoder__6B_;
  this->_padding_ = (longlong)&___7FVideoEncoderInputFrameImpl_AVEncoder__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ClonedReference = (FVideoEncoderInputFrame *)0x0;
  *(undefined8 *)&this->OnCloneDestroyed = 0;
  *(undefined8 *)&(this->OnCloneDestroyed).field_0x28 = 0;
  return this;
}

// ~FVideoEncoderInputFrameImpl @ 148d01cd0

void __thiscall
AVEncoder::FVideoEncoderInputFrameImpl::~FVideoEncoderInputFrameImpl
          (FVideoEncoderInputFrameImpl *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7FVideoEncoderInputFrameImpl_AVEncoder__6B_;
  if (this->ClonedReference != (FVideoEncoderInputFrame *)0x0) {
    (**(code **)this->ClonedReference->_padding_)();
  }
  if (*(longlong *)&this->OnCloneDestroyed != 0) {
    plVar1 = *(longlong **)&(this->OnCloneDestroyed).field_0x28;
    plVar2 = (longlong *)&(this->OnCloneDestroyed).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FVideoEncoderInputFrame::~FVideoEncoderInputFrame((FVideoEncoderInputFrame *)this);
  return;
}

// Clone @ 148d04060

FVideoEncoderInputFrame * __thiscall
AVEncoder::FVideoEncoderInputFrameImpl::Clone
          (FVideoEncoderInputFrameImpl *this,
          TFunction<void___cdecl(AVEncoder::FVideoEncoderInputFrame_const_*)> *param_1)

{
  FVideoEncoderInputFrameImpl *this_00;
  FVideoEncoderInputFrameImpl *pFVar1;
  longlong *plVar2;
  TFunction<void___cdecl(AVEncoder::FVideoEncoderInputFrame_const_*)> local_48;
  
  this_00 = ::operator_new(0x260);
  pFVar1 = (FVideoEncoderInputFrameImpl *)0x0;
  if (this_00 != (FVideoEncoderInputFrameImpl *)0x0) {
    local_48._0_8_ = *(undefined8 *)param_1;
    local_48._40_8_ = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_48._32_8_ = *(undefined8 *)&param_1->field_0x20;
    local_48._16_8_ = *(undefined8 *)&param_1->field_0x10;
    local_48._24_8_ = *(undefined8 *)&param_1->field_0x18;
    if (local_48._0_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    pFVar1 = FVideoEncoderInputFrameImpl(this_00,this,&local_48);
  }
  if (*(longlong *)param_1 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return (FVideoEncoderInputFrame *)pFVar1;
}

// Release @ 148d11900

void __thiscall AVEncoder::FVideoEncoderInputFrameImpl::Release(FVideoEncoderInputFrameImpl *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  FVideoEncoderInputImpl *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  pFVar2 = this->Input;
  lpCriticalSection = &pFVar2->ProtectFrames;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar7 = (pFVar2->UserManagedFrames).ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar6 = (longlong)(int)uVar7 << 6;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (pFVar2->UserManagedFrames).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(FVideoEncoderInputFrameImpl **)
           ((pFVar2->UserManagedFrames).AllocatorInstance.Data + lVar6) == this) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        goto LAB_148d119fe;
      }
      lVar6 = lVar6 + -0x40;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  LOCK();
  plVar1 = &this->_padding_;
  lVar6 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar6 == 1) {
    if (this->ClonedReference == (FVideoEncoderInputFrame *)0x0) {
LAB_148d119fe:
      (**(code **)(this->Input->_padding_ + 0x28))(this->Input,this);
    }
    else {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(AVEncoder::FVideoEncoderInputFrame_const_*)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(AVEncoder::FVideoEncoderInputFrame_const_*)>
                    *)&this->OnCloneDestroyed,(FVideoEncoderInputFrame *)this);
      (**(code **)(this->_padding_ + 0x10))(this,1);
    }
  }
  return;
}

