// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FDeferredScriptLoader @ 1421fded0

FDeferredScriptLoader * __thiscall
FDeferredScriptLoader::FDeferredScriptLoader
          (FDeferredScriptLoader *this,FStructScriptLoader *param_1,UStruct *param_2)

{
  longlong lVar1;
  UStruct *local_res8;
  
  lVar1 = param_1->ScriptSerializationOffset;
  this->_padding_ = *(longlong *)param_1;
  this->_padding_ = lVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->TargetScriptContainerPtr).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->TargetScriptContainerPtr).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// Resolve @ 14221b870

bool __thiscall FDeferredScriptLoader::Resolve(FDeferredScriptLoader *this,FArchive *param_1)

{
  bool bVar1;
  UStruct *pUVar2;
  
  pUVar2 = (UStruct *)FWeakObjectPtr::Get(&(this->TargetScriptContainerPtr).WeakPtr);
  if (pUVar2 != (UStruct *)0x0) {
    bVar1 = FStructScriptLoader::LoadStructWithScript
                      ((FStructScriptLoader *)this,pUVar2,param_1,true);
    return bVar1;
  }
  return false;
}

