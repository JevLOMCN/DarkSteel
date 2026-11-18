// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 2

// StaticStruct @ 148de87a0

UScriptStruct * __cdecl FNiagaraCompileEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraCompileEvent.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraShader();
    Z_Registration_Info_UScriptStruct_FNiagaraCompileEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompileEvent,(UObject *)pUVar1,
                         L"NiagaraCompileEvent");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraCompileEvent.OuterSingleton;
}

// FNiagaraCompileEvent @ 148df07e0

FNiagaraCompileEvent * __thiscall
FNiagaraCompileEvent::FNiagaraCompileEvent(FNiagaraCompileEvent *this)

{
  FString *pFVar1;
  int *piVar2;
  undefined8 local_18 [2];
  
  this->Severity = Display;
  pFVar1 = &this->ShortDescription;
  (this->Message).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Message).Data.ArrayNum = 0;
  (this->Message).Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->StackGuids).ArrayMax;
  (this->ShortDescription).Data.ArrayNum = 0;
  (this->ShortDescription).Data.ArrayMax = 0;
  (this->NodeGuid).A = 0;
  (this->NodeGuid).B = 0;
  (this->NodeGuid).C = 0;
  (this->NodeGuid).D = 0;
  (this->PinGuid).A = 0;
  (this->PinGuid).B = 0;
  (this->PinGuid).C = 0;
  (this->PinGuid).D = 0;
  (this->StackGuids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StackGuids).ArrayNum = 0;
  *piVar2 = 0;
  if (pFVar1 != (FString *)local_18) {
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ShortDescription).Data.ArrayNum = 0;
    (this->ShortDescription).Data.ArrayMax = 0;
  }
  (this->NodeGuid).A = 0;
  (this->NodeGuid).B = 0;
  (this->NodeGuid).C = 0;
  (this->NodeGuid).D = 0;
  (this->PinGuid).A = 0;
  (this->PinGuid).B = 0;
  (this->PinGuid).C = 0;
  (this->PinGuid).D = 0;
  (this->StackGuids).ArrayNum = 0;
  if (*piVar2 == 0) {
    this->Source = Unset;
  }
  else {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->StackGuids).AllocatorInstance,0,piVar2);
    this->Source = Unset;
  }
  return this;
}

