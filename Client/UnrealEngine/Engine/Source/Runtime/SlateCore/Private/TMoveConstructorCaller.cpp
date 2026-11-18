// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 19

// Construct @ 142568840

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Slate::Private::FConstructionCounter>::Construct
          (void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  Slate::Private::FConstructionCounter::MoveConstructionCounter =
       Slate::Private::FConstructionCounter::MoveConstructionCounter + 1;
  return;
}

// Construct @ 142568860

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FMargin>::Construct(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// Construct @ 142568870

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
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

// Construct @ 142568880

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct
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

// Construct @ 142568890

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>
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

// Construct @ 1425d26a0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FSlateBrush_const_*>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 1425d26b0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TOptional<UE::Math::TVector2<double>_>_>::Construct
          (void *param_1,void *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  cVar1 = *(char *)((longlong)param_2 + 0x10);
  *(char *)((longlong)param_1 + 0x10) = cVar1;
  if (cVar1 != '\0') {
    uVar2 = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  }
  return;
}

// Construct @ 1425d26d0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TOptional<TTransform2<float>_>_>::Construct
          (void *param_1,void *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  cVar1 = *(char *)((longlong)param_2 + 0x18);
  *(char *)((longlong)param_1 + 0x18) = cVar1;
  if (cVar1 != '\0') {
    uVar2 = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)param_1 + 8) = uVar2;
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  }
  return;
}

// Construct @ 1425d2700

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Math::TVector2<double>_>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// Construct @ 1425d2710

void __cdecl
UE::Core::Private::TMoveConstructorCaller<EVisibility>::Construct(void *param_1,void *param_2)

{
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  return;
}

// Construct @ 1425d2720

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FSlateColor>::Construct(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  return;
}

// Construct @ 1425d2740

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
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

// Construct @ 1425d2750

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
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

// Construct @ 1425d2760

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
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

// Construct @ 1425d2770

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct
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

// Construct @ 1425d2780

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct
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

// Construct @ 1425d2790

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct
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

// Construct @ 1425d27a0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>::
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

// Construct @ 1425d27b0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
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

