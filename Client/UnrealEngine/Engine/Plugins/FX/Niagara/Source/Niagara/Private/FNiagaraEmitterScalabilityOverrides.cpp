// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 14925e8a0

UScriptStruct * __cdecl FNiagaraEmitterScalabilityOverrides::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilityOverrides.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilityOverrides.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides,
                         (UObject *)pUVar1,L"NiagaraEmitterScalabilityOverrides");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilityOverrides.OuterSingleton;
}

// operator= @ 14927ba50

FNiagaraEmitterScalabilityOverrides * __thiscall
FNiagaraEmitterScalabilityOverrides::operator=
          (FNiagaraEmitterScalabilityOverrides *this,FNiagaraEmitterScalabilityOverrides *param_1)

{
  int *piVar1;
  int iVar2;
  FNiagaraEmitterScalabilityOverride *pFVar3;
  
  if (this != param_1) {
    DestructItems<FNiagaraEmitterScalabilityOverride,int>
              ((FNiagaraEmitterScalabilityOverride *)(this->Overrides).AllocatorInstance.Data,
               (this->Overrides).ArrayNum);
    iVar2 = (param_1->Overrides).ArrayNum;
    piVar1 = &(this->Overrides).ArrayMax;
    pFVar3 = (FNiagaraEmitterScalabilityOverride *)(param_1->Overrides).AllocatorInstance.Data;
    (this->Overrides).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<FNiagaraEmitterScalabilityOverride,FNiagaraEmitterScalabilityOverride,int>
              ((this->Overrides).AllocatorInstance.Data,pFVar3,iVar2);
  }
  return this;
}

