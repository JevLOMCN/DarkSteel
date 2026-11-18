// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// GetSizeResults @ 141efa6e0

long64 __thiscall IAsyncReadRequest::GetSizeResults(IAsyncReadRequest *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if ((this->bDataIsReady == false) || (this->bSizeRequest == false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bDataIsReady && bSizeRequest",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncFileHandle.h"
                       ,0x8c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar3 = (*pcVar1)();
      return lVar3;
    }
  }
  lVar3 = -1;
  if (this->bCanceled == false) {
    lVar3 = (this->field8_0x8).Size;
  }
  return lVar3;
}

// SetDataComplete @ 141f4d410

void __thiscall IAsyncReadRequest::SetDataComplete(IAsyncReadRequest *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  IAsyncReadRequest *local_res10;
  
  this->bDataIsReady = true;
  if (*(void **)&this->Callback != (void *)0x0) {
    local_res8[0] = this->bCanceled;
    local_res10 = this;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->Callback);
    plVar1 = *(longlong **)&(this->Callback).field_0x28;
    pcVar2 = *(code **)&this->Callback;
    plVar4 = (longlong *)&(this->Callback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,local_res8,&local_res10);
  }
  return;
}

