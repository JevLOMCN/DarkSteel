// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 4

// Construct @ 14a744cd0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UObject_*>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 14a744ce0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TValueOrError<bool,FText>::FEmptyType>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14a744cf0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// Construct @ 14a744d00

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TValueOrError<bool,FText>::FWrapErrorType>::Construct
          (void *param_1,void *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 auStackX_8 [8];
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  pFVar3 = FText::GetEmpty();
  pIVar1 = *(ITextData **)param_2;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    *(ITextData **)param_2 = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,auStackX_8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  *(undefined4 *)((longlong)param_2 + 8) = 0;
  return;
}

