// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 2

// Construct @ 144616690

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>_>::
Construct(void *param_1,void *param_2)

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

// Construct @ 1446166b0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::
Construct(void *param_1,void *param_2)

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

