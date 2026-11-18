// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 1

// operator= @ 14eb075b0

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_> * __thiscall
TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_>::operator=
          (TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_> *this,
          TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_> *param_1)

{
  Session *pSVar1;
  
  if (this != param_1) {
    pSVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (Session *)0x0;
    if (pSVar1 != (Session *)0x0) {
      (*Ort::Global<void>::api_->ReleaseSession)((OrtSession *)*pSVar1);
      ::operator_delete(pSVar1,8);
    }
    return this;
  }
  return this;
}

