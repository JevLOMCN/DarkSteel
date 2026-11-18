// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 20

// Construct @ 142716090

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FLinearColor>::Construct(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// Construct @ 1427160a0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct
          (void *param_1,void *param_2)

{
  FDestructionSentinel FStack_28;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (param_2,(FWriteAccessScope *)&FStack_28);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0;
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  return;
}

// Construct @ 1427ee470

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<enum_UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>
::Construct(void *param_1,void *param_2)

{
  FDestructionSentinel FStack_28;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (param_2,(FWriteAccessScope *)&FStack_28);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0;
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  return;
}

// Construct @ 1427ee480

void __cdecl
UE::Core::Private::TMoveConstructorCaller<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>::Construct
          (void *param_1,void *param_2)

{
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  return;
}

// Construct @ 1428f7920

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TOptional<int>_>::Construct(void *param_1,void *param_2)

{
  char cVar1;
  
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  cVar1 = *(char *)((longlong)param_2 + 4);
  *(char *)((longlong)param_1 + 4) = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
  }
  return;
}

// Construct @ 1428f7940

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Math::TVector4<double>_>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  return;
}

// Construct @ 1428f7960

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>::
Construct(void *param_1,void *param_2)

{
  FDestructionSentinel FStack_28;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (param_2,(FWriteAccessScope *)&FStack_28);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0;
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  return;
}

// Construct @ 1428f7970

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
::Construct(void *param_1,void *param_2)

{
  FDestructionSentinel FStack_28;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (param_2,(FWriteAccessScope *)&FStack_28);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0;
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  return;
}

// Construct @ 1429d0290

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FSlateFontInfo>::Construct(void *param_1,void *param_2)

{
  UObject *pUVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  pUVar1 = *(UObject **)param_2;
  *(UObject **)param_1 = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  pUVar1 = *(UObject **)((longlong)param_2 + 8);
  *(UObject **)((longlong)param_1 + 8) = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x16) = *(undefined1 *)((longlong)param_2 + 0x16);
  pUVar1 = *(UObject **)((longlong)param_2 + 0x18);
  *(UObject **)((longlong)param_1 + 0x18) = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
  lVar2 = *(longlong *)((longlong)param_2 + 0x38);
  *(longlong *)((longlong)param_1 + 0x38) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)((longlong)param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x50);
  *(undefined1 *)((longlong)param_1 + 0x54) = *(undefined1 *)((longlong)param_2 + 0x54);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x56);
  *(undefined4 *)((longlong)param_1 + 0x58) = *(undefined4 *)((longlong)param_2 + 0x58);
  return;
}

// Construct @ 1429d02a0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>::
Construct(void *param_1,void *param_2)

{
  FDestructionSentinel FStack_28;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (param_2,(FWriteAccessScope *)&FStack_28);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0;
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  return;
}

// Construct @ 1429d02b0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct
          (void *param_1,void *param_2)

{
  FDestructionSentinel FStack_28;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (param_2,(FWriteAccessScope *)&FStack_28);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0;
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  return;
}

// Construct @ 1429d02c0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<enum_EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>
::Construct(void *param_1,void *param_2)

{
  FDestructionSentinel FStack_28;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (param_2,(FWriteAccessScope *)&FStack_28);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0;
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  return;
}

// Construct @ 1429d02d0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<enum_ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
::Construct(void *param_1,void *param_2)

{
  FDestructionSentinel FStack_28;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (param_2,(FWriteAccessScope *)&FStack_28);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0;
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  return;
}

// Construct @ 1429d02e0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
::Construct(void *param_1,void *param_2)

{
  FDestructionSentinel FStack_28;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (param_2,(FWriteAccessScope *)&FStack_28);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0;
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  return;
}

// Construct @ 1429d02f0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>
::Construct(void *param_1,void *param_2)

{
  FDestructionSentinel FStack_28;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (param_2,(FWriteAccessScope *)&FStack_28);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0;
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  return;
}

// Construct @ 1429d0300

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FText>::Construct(void *param_1,void *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 auStackX_8 [8];
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  pFVar3 = FText::GetEmpty();
  pIVar1 = *(ITextData **)param_2;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    *(ITextData **)param_2 = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,auStackX_8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  *(undefined4 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 1429d0310

void __cdecl
UE::Core::Private::TMoveConstructorCaller<enum_EHorizontalAlignment>::Construct
          (void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

// Construct @ 1429d0320

void __cdecl
UE::Core::Private::TMoveConstructorCaller<enum_ETextTransformPolicy>::Construct
          (void *param_1,void *param_2)

{
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  return;
}

// Construct @ 1429d0330

void __cdecl
UE::Core::Private::TMoveConstructorCaller<enum_ETextWrappingPolicy>::Construct
          (void *param_1,void *param_2)

{
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  return;
}

// Construct @ 1429d0340

void __cdecl
UE::Core::Private::TMoveConstructorCaller<enum_ETextJustify::Type>::Construct
          (void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

