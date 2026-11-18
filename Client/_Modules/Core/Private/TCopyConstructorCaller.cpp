// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// Construct @ 1419e60c0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<std::nullptr_t>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 1419e60d0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FCbAttachment::FBinaryValue>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  FCompositeBuffer::FCompositeBuffer(param_1,param_2);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
  return;
}

// Construct @ 1419e6110

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FCbAttachment::FCompressedBinaryValue>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  FCompositeBuffer::FCompositeBuffer(param_1,param_2);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
  return;
}

// Construct @ 1419e6150

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FCbAttachment::FObjectValue>::Construct
          (void *param_1,void *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar4;
  lVar3 = *(longlong *)((longlong)param_2 + 0x10);
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  *(longlong *)((longlong)param_1 + 0x10) = lVar3;
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
  return;
}

// Construct @ 141cfb300

void __cdecl UE::Core::Private::TCopyConstructorCaller<int>::Construct(void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

// Construct @ 141cfb310

void __cdecl
UE::Core::Private::TCopyConstructorCaller<float>::Construct(void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

// Construct @ 141cfb320

void __cdecl
UE::Core::Private::TCopyConstructorCaller<double>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

