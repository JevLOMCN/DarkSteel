// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// ~FMemoryReadStreamAsyncRequest @ 141589d40

void __thiscall
FMemoryReadStreamAsyncRequest::~FMemoryReadStreamAsyncRequest(FMemoryReadStreamAsyncRequest *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  this->_padding_ = (longlong)&___7FMemoryReadStreamAsyncRequest__6B_;
  puVar3 = GetReadResults(this);
  if (puVar3 != (uchar *)0x0) {
    FMemory::Free(puVar3);
  }
  if (this->Request != (IAsyncReadRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Request",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0x255,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->_padding_ = (longlong)&___7IMemoryReadStream__6B_;
  return;
}

// EnsureReadNonBlocking @ 1415c0a40

void __thiscall
FMemoryReadStreamAsyncRequest::EnsureReadNonBlocking(FMemoryReadStreamAsyncRequest *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Request == (IAsyncReadRequest *)0x0) {
    return;
  }
  if (this->Memory != (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0x244,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001415c0a89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->Request + 8))();
  return;
}

// GetReadResults @ 1415c7b40

uchar * __thiscall
FMemoryReadStreamAsyncRequest::GetReadResults(FMemoryReadStreamAsyncRequest *this)

{
  IAsyncReadRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  
  if (this->Request == (IAsyncReadRequest *)0x0) {
    return this->Memory;
  }
  if (this->Memory != (uchar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0x22f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar2)();
      return puVar4;
    }
  }
  pIVar1 = this->Request;
  if (pIVar1->bCompleteAndCallbackCalled == false) {
    (**(code **)(*(longlong *)pIVar1 + 0x10))(pIVar1,0);
  }
  pIVar1 = this->Request;
  if ((pIVar1->bDataIsReady == false) || (pIVar1->bSizeRequest != false)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bDataIsReady && !bSizeRequest",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncFileHandle.h"
                       ,0x96,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar2)();
      return puVar4;
    }
  }
  puVar4 = (uchar *)(pIVar1->field8_0x8).Size;
  if (puVar4 != (uchar *)0x0) {
    if (pIVar1->bCanceled != false) {
      puVar4 = (uchar *)0x0;
      goto LAB_1415c7bfe;
    }
    if (pIVar1->bUserSuppliedMemory == false) {
      (**(code **)(*(longlong *)pIVar1 + 0x20))(pIVar1);
    }
  }
  (pIVar1->field8_0x8).Size = 0;
LAB_1415c7bfe:
  pIVar1 = this->Request;
  this->Memory = puVar4;
  if (pIVar1 != (IAsyncReadRequest *)0x0) {
    (*(code *)**(undefined8 **)pIVar1)(pIVar1,1);
  }
  this->Request = (IAsyncReadRequest *)0x0;
  return this->Memory;
}

// GetSize @ 1415c7ca0

long64 __thiscall FMemoryReadStreamAsyncRequest::GetSize(FMemoryReadStreamAsyncRequest *this)

{
  return this->Size;
}

// Read @ 1415da0e0

void * __thiscall
FMemoryReadStreamAsyncRequest::Read
          (FMemoryReadStreamAsyncRequest *this,long64 *param_1,long64 param_2,long64 param_3)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  void *pvVar4;
  longlong lVar5;
  
  puVar3 = GetReadResults(this);
  if (this->Size <= param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOffset < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0x23b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  lVar5 = this->Size - param_2;
  if (param_3 < lVar5) {
    lVar5 = param_3;
  }
  *param_1 = lVar5;
  return puVar3 + param_2;
}

