// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ~FThreadInstanceProvider @ 141cf1750

void __thiscall
TTypeContainer<1>::FThreadInstanceProvider::~FThreadInstanceProvider(FThreadInstanceProvider *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined ***)this = &___7FThreadInstanceProvider___TTypeContainer__00__6B_;
  TlsFree(this->TlsSlot);
  if (*(longlong *)&this->CreateFunc != 0) {
    plVar1 = *(longlong **)&(this->CreateFunc).field_0x28;
    plVar2 = (longlong *)&(this->CreateFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  *(undefined ***)this = &___7IInstanceProvider___TTypeContainer__00__6B_;
  return;
}

