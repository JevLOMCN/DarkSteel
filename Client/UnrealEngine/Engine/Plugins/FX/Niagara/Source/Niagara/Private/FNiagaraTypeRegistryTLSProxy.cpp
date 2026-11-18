// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNiagaraTypeRegistryTLSProxy @ 1493ce980

FNiagaraTypeRegistryTLSProxy * __thiscall
FNiagaraTypeRegistryTLSProxy::FNiagaraTypeRegistryTLSProxy(FNiagaraTypeRegistryTLSProxy *this)

{
  int *piVar1;
  DWORD DVar2;
  ulonglong uVar3;
  
  DVar2 = GetCurrentThreadId();
  uVar3 = (ulonglong)_tls_index;
  this->CallingThreadId = DVar2;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x9040);
  *piVar1 = *piVar1 + 1;
  return this;
}

// ~FNiagaraTypeRegistryTLSProxy @ 1493d1b90

void __thiscall
FNiagaraTypeRegistryTLSProxy::~FNiagaraTypeRegistryTLSProxy(FNiagaraTypeRegistryTLSProxy *this)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  
  DVar5 = GetCurrentThreadId();
  if (this->CallingThreadId != DVar5) {
    GetCurrentThreadId();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CallingThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypeRegistry.cpp"
                       ,0x35,
                       L"FNiagaraTypeRegistryTLSProxy destroyed from different thread (%x) from where it was constructed (%x)."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar1 = (int *)(lVar2 + 0x9040);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(lVar2 + 0x9050) = 0;
    if (*(int *)(lVar2 + 0x9054) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)(lVar2 + 0x9048),0,(int *)(lVar2 + 0x9054));
    }
  }
  return;
}

