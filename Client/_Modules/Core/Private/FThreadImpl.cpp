// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FThreadImpl @ 1416d7640

FThreadImpl * __thiscall
FThreadImpl::FThreadImpl
          (FThreadImpl *this,wchar_t *param_1,TUniqueFunction<void___cdecl(void)> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3,uint param_4,EThreadPriority param_5,
          FThreadAffinity *param_6,EForkable param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  DWORD DVar4;
  FRunnableThread *pFVar5;
  FThreadImpl *pFVar6;
  
  *(undefined ***)this = &_vftable__for__FRunnable__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__FSingleThreadRunnable__;
  (this->Self).Object = (FThreadImpl *)0x0;
  (this->Self).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bIsInitialized = (TAtomic<bool>)0x0;
  *(undefined8 *)&this->ThreadFunction = *(undefined8 *)param_2;
  *(undefined8 *)&(this->ThreadFunction).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->ThreadFunction).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->ThreadFunction).field_0x18 = uVar2;
  *(undefined8 *)&(this->ThreadFunction).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->ThreadFunction != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)&this->SingleThreadTickFunction = *(undefined8 *)param_3;
  *(undefined8 *)&(this->SingleThreadTickFunction).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->SingleThreadTickFunction).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->SingleThreadTickFunction).field_0x18 = uVar2;
  *(undefined8 *)&(this->SingleThreadTickFunction).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->SingleThreadTickFunction != 0) {
    *(undefined8 *)param_3 = 0;
  }
  if (param_7 == Forkable) {
    pFVar5 = FForkProcessHelper::CreateForkableThread
                       ((FRunnable *)this,param_1,param_4,param_5,param_6->ThreadAffinityMask,None,
                        false);
  }
  else {
    pFVar5 = FRunnableThread::Create
                       ((FRunnable *)this,param_1,param_4,param_5,param_6->ThreadAffinityMask,None);
  }
  (this->RunnableThread).Ptr = pFVar5;
  if (pFVar5 != (FRunnableThread *)0x0) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != ((this->RunnableThread).Ptr)->ThreadID) goto LAB_1416d775f;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsJoinable()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\Thread.cpp"
                     ,0x20,
                     L"Failed to create a thread. Check if it ran out of memory or a similar \"out of system resources\" issue"
                    );
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FThreadImpl *)(*pcVar1)();
    return pFVar6;
  }
LAB_1416d775f:
  pFVar5 = (this->RunnableThread).Ptr;
  (**(code **)(pFVar5->_padding_ + 8))(pFVar5,param_6);
  return this;
}

// ~FThreadImpl @ 1416d9740

void __thiscall FThreadImpl::~FThreadImpl(FThreadImpl *this)

{
  FRunnableThread *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pFVar1 = (this->RunnableThread).Ptr;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  if (*(longlong *)&this->SingleThreadTickFunction != 0) {
    plVar2 = *(longlong **)&(this->SingleThreadTickFunction).field_0x28;
    plVar3 = (longlong *)&(this->SingleThreadTickFunction).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->ThreadFunction != 0) {
    plVar2 = *(longlong **)&(this->ThreadFunction).field_0x28;
    plVar3 = (longlong *)&(this->ThreadFunction).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Self).SharedReferenceCount.ReferenceController);
  *(undefined ***)&this->field_0x8 = &___7FSingleThreadRunnable__6B_;
  *(undefined ***)this = &___7FRunnable__6B_;
  return;
}

// Exit @ 1416ed230

void __thiscall FThreadImpl::Exit(FThreadImpl *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  do {
  } while (this->bIsInitialized == (TAtomic<bool>)0x0);
  if ((this->Self).Object == (FThreadImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Self.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\Thread.cpp"
                       ,0x4c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Self != (TSharedPtr<FThreadImpl,1> *)&local_18) {
    (this->Self).Object = (FThreadImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Self).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// GetSingleThreadInterface @ 1416fb7b0

FSingleThreadRunnable * __thiscall FThreadImpl::GetSingleThreadInterface(FThreadImpl *this)

{
  FSingleThreadRunnable *pFVar1;
  
  pFVar1 = (FSingleThreadRunnable *)&this->field_0x8;
  if (this == (FThreadImpl *)0x0) {
    pFVar1 = (FSingleThreadRunnable *)0x0;
  }
  return pFVar1;
}

// Run @ 14170f8c0

uint __thiscall FThreadImpl::Run(FThreadImpl *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ThreadFunction);
  plVar1 = *(longlong **)&(this->ThreadFunction).field_0x28;
  pcVar2 = *(code **)&this->ThreadFunction;
  plVar4 = (longlong *)&(this->ThreadFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  return 0;
}

// Tick @ 141715220

void __thiscall FThreadImpl::Tick(FThreadImpl *this)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->ThreadFunction).field_0x28);
  UNRECOVERED_JUMPTABLE = *(code **)&(this->ThreadFunction).field_0x28;
  plVar1 = *(longlong **)&(this->SingleThreadTickFunction).field_0x20;
  plVar3 = (longlong *)&(this->SingleThreadTickFunction).field_0x8;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014171525f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}

