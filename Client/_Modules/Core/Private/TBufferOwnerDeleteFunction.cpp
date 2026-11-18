// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FreeBuffer @ 141c93df0

void __thiscall
UE::SharedBuffer::Private::
TBufferOwnerDeleteFunction<`FUniqueBuffer::TakeOwnership<`FSharedBufferTest::TestBody'::__l67::<lambda_2>,0>'::__l2::<lambda_1>_>
::FreeBuffer(void *this)

{
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))();
  }
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))(this);
  }
  **(undefined1 **)((longlong)this + 0x20) = 1;
  return;
}

// FreeBuffer @ 141c93e40

void __thiscall
UE::SharedBuffer::Private::
TBufferOwnerDeleteFunction<`FSharedBuffer::TakeOwnership<`FSharedBufferTest::TestBody'::__l77::<lambda_3>,0>'::__l2::<lambda_1>_>
::FreeBuffer(void *this)

{
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))();
  }
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141c93e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 8))(this);
    return;
  }
  return;
}

// FreeBuffer @ 141c93e90

void __thiscall
UE::SharedBuffer::Private::
TBufferOwnerDeleteFunction<`FUniqueBuffer::TakeOwnership<`FSharedBufferTest::TestBody'::__l98::<lambda_4>,0>'::__l2::<lambda_1>_>
::FreeBuffer(void *this)

{
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))();
  }
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141c93ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 8))(this);
    return;
  }
  return;
}

// FreeBuffer @ 141c93ee0

void __thiscall
UE::SharedBuffer::Private::
TBufferOwnerDeleteFunction<`FUniqueBufferTest::TestBody'::__l19::<lambda_1>_>::FreeBuffer
          (void *this)

{
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))();
  }
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))(this);
  }
  **(undefined1 **)((longlong)this + 0x20) = 1;
  return;
}

// FreeBuffer @ 141c93f30

void __thiscall
UE::SharedBuffer::Private::
TBufferOwnerDeleteFunction<`FSharedBufferTest::TestBody'::__l39::<lambda_1>_>::FreeBuffer
          (void *this)

{
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))();
  }
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))(this);
  }
  **(undefined1 **)((longlong)this + 0x20) = 1;
  return;
}

