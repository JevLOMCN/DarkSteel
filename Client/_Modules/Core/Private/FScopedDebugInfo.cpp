// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FScopedDebugInfo @ 141987000

FScopedDebugInfo * __thiscall FScopedDebugInfo::FScopedDebugInfo(FScopedDebugInfo *this,int param_1)

{
  uint dwTlsIndex;
  FScopedDebugInfo *pFVar1;
  
  this->NumReplacedOuterCalls = param_1;
  this->_padding_ = (longlong)&___7FScopedDebugInfo__6B_;
  pFVar1 = TlsGetValue(GThreadDebugInfoTLSID);
  dwTlsIndex = GThreadDebugInfoTLSID;
  this->NextOuterInfo = pFVar1;
  TlsSetValue(dwTlsIndex,this);
  return this;
}

// ~FScopedDebugInfo @ 141988220

void __thiscall FScopedDebugInfo::~FScopedDebugInfo(FScopedDebugInfo *this)

{
  code *pcVar1;
  bool bVar2;
  FScopedDebugInfo *pFVar3;
  
  this->_padding_ = (longlong)&___7FScopedDebugInfo__6B_;
  pFVar3 = TlsGetValue(GThreadDebugInfoTLSID);
  if (pFVar3 != this) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentInnermostDebugInfo == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ScopedDebugInfo.cpp"
                       ,0x1a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141988279. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(GThreadDebugInfoTLSID,this->NextOuterInfo);
  return;
}

// GetDebugInfoStack @ 1419950f0

FScopedDebugInfo * __cdecl FScopedDebugInfo::GetDebugInfoStack(void)

{
  FScopedDebugInfo *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001419950f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = TlsGetValue(GThreadDebugInfoTLSID);
  return pFVar1;
}

