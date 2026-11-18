// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// FAsyncReadRequestNull @ 14212b1b0

FAsyncReadRequestNull * __thiscall
FAsyncReadRequestNull::FAsyncReadRequestNull
          (FAsyncReadRequestNull *this,TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_1,
          bool param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  FAsyncReadRequestNull *local_res20;
  
  IAsyncReadRequest::IAsyncReadRequest((IAsyncReadRequest *)this,param_1,param_2,(uchar *)0x0);
  this->field_0x43 = 1;
  *(undefined ***)this = &___7FAsyncReadRequestNull__6B_;
  this->field_0x40 = 1;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    local_res8[0] = 1;
    local_res20 = this;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->field_0x10);
    pcVar1 = *(code **)&this->field_0x10;
    plVar3 = (longlong *)&this->field_0x20;
    if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x38;
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,local_res8,&local_res20);
  }
  this->field_0x41 = 1;
  return this;
}

// CancelImpl @ 142133bc0

void __thiscall FAsyncReadRequestNull::CancelImpl(FAsyncReadRequestNull *this)

{
  return;
}

// ReleaseMemoryOwnershipImpl @ 142147b80

void __thiscall FAsyncReadRequestNull::ReleaseMemoryOwnershipImpl(FAsyncReadRequestNull *this)

{
  return;
}

// WaitCompletionImpl @ 1421554f0

void __thiscall FAsyncReadRequestNull::WaitCompletionImpl(FAsyncReadRequestNull *this,float param_1)

{
  return;
}

