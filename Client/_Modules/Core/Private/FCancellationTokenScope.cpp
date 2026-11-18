// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FCancellationTokenScope @ 141a6b840

FCancellationTokenScope * __thiscall
UE::Tasks::FCancellationTokenScope::FCancellationTokenScope
          (FCancellationTokenScope *this,FCancellationToken *param_1)

{
  this->bHasActiveScope = false;
  SetToken(this,param_1);
  return this;
}

// FCancellationTokenScope @ 141a6b860

FCancellationTokenScope * __thiscall
UE::Tasks::FCancellationTokenScope::FCancellationTokenScope
          (FCancellationTokenScope *this,FCancellationToken *param_1)

{
  this->bHasActiveScope = false;
  SetToken(this,param_1);
  return this;
}

// ~FCancellationTokenScope @ 141a72a00

void __thiscall
UE::Tasks::FCancellationTokenScope::~FCancellationTokenScope(FCancellationTokenScope *this)

{
  if (this->bHasActiveScope != false) {
    *(undefined8 *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xbc8) = 0;
  }
  return;
}

// GetCurrentCancellationToken @ 141a80a10

FCancellationToken * __cdecl UE::Tasks::FCancellationTokenScope::GetCurrentCancellationToken(void)

{
  return *(FCancellationToken **)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xbc8);
}

// SetToken @ 141a91f70

void __thiscall
UE::Tasks::FCancellationTokenScope::SetToken
          (FCancellationTokenScope *this,FCancellationToken *param_1)

{
  FCancellationToken *pFVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  ulonglong uVar5;
  
  if (param_1 != (FCancellationToken *)0x0) {
    uVar5 = (ulonglong)_tls_index;
    pFVar1 = *(FCancellationToken **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0xbc8);
    if (pFVar1 != param_1) {
      if ((pFVar1 != (FCancellationToken *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Private::CancellationToken == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                             ,0x23f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = ThreadLocalStoragePointer;
      this->bHasActiveScope = true;
      *(FCancellationToken **)(*(longlong *)((longlong)pvVar3 + uVar5 * 8) + 0xbc8) = param_1;
    }
  }
  return;
}

