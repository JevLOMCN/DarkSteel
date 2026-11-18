// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Construct @ 147bce480

void __cdecl
UE::Core::Private::
TCopyConstructorCaller<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct
          (void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

// Construct @ 147bce490

void __cdecl
UE::Core::Private::TCopyConstructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Construct
          (void *param_1,void *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(longlong *)((longlong)param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

// Construct @ 148024a50

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Net::FNetIDVariant::FEmptyID>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 148024a60

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Net::FNetRefHandle>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 148024a70

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FNetworkGUID>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

