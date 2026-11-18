// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// Get @ 142cacb90

FText * __thiscall
UE::Editor::DataStorage::Private::TConvertibleProperty<FText>::Get
          (TConvertibleProperty<FText> *this,void *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  void *local_res8;
  FText local_18;
  
  local_res8 = param_1;
  Core::Private::Function::CheckCallable(*(void **)&this->Converter);
  plVar1 = *(longlong **)&(this->Converter).field_0x28;
  pcVar2 = *(code **)&this->Converter;
  plVar4 = (longlong *)&(this->Converter).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(&local_18,uVar3,&local_res8);
  FText::operator=(&this->Cache,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return &this->Cache;
}

