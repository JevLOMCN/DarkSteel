// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 4

// FStateStreamCreator @ 143125450

FStateStreamCreator * __thiscall
FStateStreamCreator::FStateStreamCreator
          (FStateStreamCreator *this,uint param_1,
          TFunction<void___cdecl(FStateStreamRegisterContext_const_&)> *param_2,
          TFunction<void___cdecl(FStateStreamUnregisterContext_const_&)> *param_3)

{
  undefined8 uVar1;
  FStateStreamCreator *pFVar2;
  FStateStreamCreator *pFVar3;
  
  *(undefined8 *)&this->RegisterFunction = *(undefined8 *)param_2;
  *(undefined8 *)&(this->RegisterFunction).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->RegisterFunction).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->RegisterFunction).field_0x18 = uVar1;
  *(undefined8 *)&(this->RegisterFunction).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->RegisterFunction != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)&this->UnregisterFunction = *(undefined8 *)param_3;
  *(undefined8 *)&(this->UnregisterFunction).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar1 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->UnregisterFunction).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->UnregisterFunction).field_0x18 = uVar1;
  *(undefined8 *)&(this->UnregisterFunction).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->UnregisterFunction != 0) {
    *(undefined8 *)param_3 = 0;
  }
  this->Id = param_1;
  this->Prev = (FStateStreamCreator *)0x0;
  pFVar2 = (FStateStreamCreator *)0x0;
  for (pFVar3 = First; (pFVar3 != (FStateStreamCreator *)0x0 && (pFVar3->Id <= param_1));
      pFVar3 = pFVar3->Next) {
    this->Prev = pFVar3;
    pFVar2 = pFVar3;
  }
  if (pFVar2 == (FStateStreamCreator *)0x0) {
    this->Next = First;
    First = this;
  }
  else {
    this->Next = pFVar2->Next;
    pFVar2->Next = this;
  }
  if (this->Next != (FStateStreamCreator *)0x0) {
    this->Next->Prev = this;
  }
  return this;
}

// ~FStateStreamCreator @ 143125c60

void __thiscall FStateStreamCreator::~FStateStreamCreator(FStateStreamCreator *this)

{
  longlong *plVar1;
  FStateStreamCreator *pFVar2;
  longlong *plVar3;
  
  if (this->Next != (FStateStreamCreator *)0x0) {
    this->Next->Prev = this->Prev;
  }
  pFVar2 = this->Next;
  if (this->Prev != (FStateStreamCreator *)0x0) {
    this->Prev->Next = this->Next;
    pFVar2 = First;
  }
  First = pFVar2;
  this->Next = (FStateStreamCreator *)0x0;
  this->Prev = (FStateStreamCreator *)0x0;
  if (*(longlong *)&this->UnregisterFunction != 0) {
    plVar1 = *(longlong **)&(this->UnregisterFunction).field_0x28;
    plVar3 = (longlong *)&(this->UnregisterFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->RegisterFunction == 0) {
    return;
  }
  plVar1 = *(longlong **)&(this->RegisterFunction).field_0x28;
  plVar3 = (longlong *)&(this->RegisterFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000143125cd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))();
  return;
}

// RegisterStateStreams @ 143127da0

void __cdecl FStateStreamCreator::RegisterStateStreams(FStateStreamRegisterContext *param_1)

{
  code *pcVar1;
  FStateStreamCreator *pFVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  for (pFVar2 = First; pFVar2 != (FStateStreamCreator *)0x0; pFVar2 = pFVar2->Next) {
    UE::Core::Private::Function::CheckCallable(*(void **)&pFVar2->RegisterFunction);
    plVar4 = *(longlong **)&(pFVar2->RegisterFunction).field_0x28;
    pcVar1 = *(code **)&pFVar2->RegisterFunction;
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)&(pFVar2->RegisterFunction).field_0x10;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,param_1);
  }
  return;
}

// UnregisterStateStreams @ 143128f20

void __cdecl FStateStreamCreator::UnregisterStateStreams(FStateStreamUnregisterContext *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FStateStreamCreator *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  for (pFVar3 = First; pFVar3 != (FStateStreamCreator *)0x0; pFVar3 = pFVar3->Next) {
    UE::Core::Private::Function::CheckCallable(*(void **)&pFVar3->UnregisterFunction);
    plVar1 = *(longlong **)&(pFVar3->UnregisterFunction).field_0x28;
    pcVar2 = *(code **)&pFVar3->UnregisterFunction;
    plVar5 = (longlong *)&(pFVar3->UnregisterFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,param_1);
  }
  return;
}

