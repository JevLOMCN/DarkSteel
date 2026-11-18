// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// DestroyObject @ 14e5f0b80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>,SharedPointerInternals::DefaultDeleter<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>,SharedPointerInternals::DefaultDeleter<TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>_>,1>
                *this)

{
  TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonWriter<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e5f0b91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14e5f0ba0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,SharedPointerInternals::DefaultDeleter<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,SharedPointerInternals::DefaultDeleter<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>_>,1>
                *this)

{
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e5f0bb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14e5f0bc0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IGLTFJsonWriter,SharedPointerInternals::DefaultDeleter<IGLTFJsonWriter>,1>
::DestroyObject(TReferenceControllerWithDeleter<IGLTFJsonWriter,SharedPointerInternals::DefaultDeleter<IGLTFJsonWriter>,1>
                *this)

{
  IGLTFJsonWriter *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IGLTFJsonWriter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e5f0bd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pIVar1->_padding_)(pIVar1,1);
    return;
  }
  return;
}

