// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// StaticStruct @ 149376600

UScriptStruct * __cdecl FNiagaraVMExecutableDataId::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableDataId.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableDataId.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId,(UObject *)pUVar1,
                         L"NiagaraVMExecutableDataId");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableDataId.OuterSingleton;
}

// operator== @ 14938c3c0

bool __thiscall
FNiagaraVMExecutableDataId::operator==
          (FNiagaraVMExecutableDataId *this,FNiagaraVMExecutableDataId *param_1)

{
  if ((((param_1->CompilerVersionID).D == (this->CompilerVersionID).D &&
       (param_1->CompilerVersionID).C == (this->CompilerVersionID).C) &&
      (param_1->CompilerVersionID).B == (this->CompilerVersionID).B) &&
      (param_1->CompilerVersionID).A == (this->CompilerVersionID).A) {
    return this->InterpolatedSpawnMode == param_1->InterpolatedSpawnMode;
  }
  return false;
}

// HasInterpolatedParameters @ 1493a83e0

bool __thiscall
FNiagaraVMExecutableDataId::HasInterpolatedParameters(FNiagaraVMExecutableDataId *this)

{
  return this->InterpolatedSpawnMode != NoInterpolation;
}

// Invalidate @ 1493aa370

void __thiscall FNiagaraVMExecutableDataId::Invalidate(FNiagaraVMExecutableDataId *this)

{
  int *piVar1;
  int iVar2;
  undefined1 local_20 [32];
  
  this->InterpolatedSpawnMode = NoInterpolation;
  (this->CompilerVersionID).A = 0;
  (this->CompilerVersionID).B = 0;
  (this->CompilerVersionID).C = 0;
  (this->CompilerVersionID).D = 0;
  if (&this->BaseScriptCompileHash != (FNiagaraCompileHash *)local_20) {
    iVar2 = (this->BaseScriptCompileHash).DataHash.ArrayMax;
    piVar1 = &(this->BaseScriptCompileHash).DataHash.ArrayMax;
    (this->BaseScriptCompileHash).DataHash.ArrayNum = 0;
    if (iVar2 == 0) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,iVar2,(ForAnyElementType *)&this->BaseScriptCompileHash,0,piVar1);
  }
  return;
}

// IsValid @ 1493aa720

bool __thiscall FNiagaraVMExecutableDataId::IsValid(FNiagaraVMExecutableDataId *this)

{
  return (((this->CompilerVersionID).D != 0 || (this->CompilerVersionID).C != 0) ||
         (this->CompilerVersionID).B != 0) || (this->CompilerVersionID).A != 0;
}

