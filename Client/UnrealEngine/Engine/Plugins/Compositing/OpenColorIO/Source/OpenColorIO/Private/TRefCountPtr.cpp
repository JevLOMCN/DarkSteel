// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 1

// operator= @ 14d769f30

TRefCountPtr<FOpenColorIOShaderMap> * __thiscall
TRefCountPtr<FOpenColorIOShaderMap>::operator=
          (TRefCountPtr<FOpenColorIOShaderMap> *this,FOpenColorIOShaderMap *param_1)

{
  FOpenColorIOShaderMap *this_00;
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FOpenColorIOShaderMap> *pTVar3;
  
  this_00 = this->Reference;
  if (this_00 != param_1) {
    this->Reference = param_1;
    if (param_1 != (FOpenColorIOShaderMap *)0x0) {
      if (param_1->bDeletedThroughDeferredCleanup != false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bDeletedThroughDeferredCleanup",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShaderMap.cpp"
                           ,0x247,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar3 = (TRefCountPtr<FOpenColorIOShaderMap> *)(*pcVar1)();
          return pTVar3;
        }
      }
      param_1->NumRefs = param_1->NumRefs + 1;
    }
    if (this_00 != (FOpenColorIOShaderMap *)0x0) {
      FOpenColorIOShaderMap::Release(this_00);
    }
  }
  return this;
}

