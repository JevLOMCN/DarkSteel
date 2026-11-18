// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 5

// Construct<FImageWriteOptions> @ 1446e8150

void __cdecl UE::CoreUObject::Private::Construct<FImageWriteOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 3;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FImageWriteOptions> @ 1446e8180

void __cdecl UE::CoreUObject::Private::ConstructForTests<FImageWriteOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 3;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FImageWriteOptions> @ 1446e81b0

void __cdecl UE::CoreUObject::Private::Destruct<FImageWriteOptions>(void *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)param_1 + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x40);
    if (*(longlong **)((longlong)param_1 + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x58);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 8));
  return;
}

// Copy<FImageWriteOptions> @ 1446e81f0

bool __cdecl
UE::CoreUObject::Private::Copy<FImageWriteOptions>(void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  FDestructionSentinel local_48;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      puVar1 = puVar4 + ((longlong)param_2 - (longlong)param_1);
      *puVar4 = *puVar1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar1 + 8),
                 (FReadAccessScope *)&local_48);
      uVar2 = *(undefined8 *)(puVar1 + 0x10);
      uVar3 = *(undefined8 *)(puVar1 + 0x18);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar4 + 8),
                 (FWriteAccessScope *)&local_48);
      *(undefined8 *)(puVar4 + 0x10) = uVar2;
      *(undefined8 *)(puVar4 + 0x18) = uVar3;
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      *(undefined4 *)(puVar4 + 0x20) = *(undefined4 *)(puVar1 + 0x20);
      puVar4[0x24] = puVar1[0x24];
      puVar4[0x25] = puVar1[0x25];
      TFunction<void___cdecl(bool)>::operator=
                ((TFunction<void___cdecl(bool)> *)(puVar4 + 0x30),
                 (TFunction<void___cdecl(bool)> *)(puVar1 + 0x30));
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 0x60;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FImageWriteQueue,FImageWriteQueue_*_&> @ 1446e8450

FImageWriteQueue * __cdecl
UE::Core::Private::DereferenceIfNecessary<FImageWriteQueue,FImageWriteQueue_*_&>
          (FImageWriteQueue **param_1)

{
  return *param_1;
}

