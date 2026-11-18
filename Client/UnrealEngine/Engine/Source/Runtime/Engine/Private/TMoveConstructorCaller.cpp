// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// Construct @ 148024a80

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Net::FNetIDVariant::FEmptyID>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 148024a90

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Net::FNetRefHandle>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 148024aa0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FNetworkGUID>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 1488baf30

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 1488baf60

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TFunction<void___cdecl(void)>_>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  if (*(longlong *)param_1 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  return;
}

// Construct @ 1488bafa0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FTimerDynamicDelegate>::Construct
          (void *param_1,void *param_2)

{
  FReadAccessScope local_28;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(param_2,&local_28);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// Construct @ 148a8c030

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 148a8c040

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 148a8c050

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>_>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 148a8c080

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>_>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  return;
}

