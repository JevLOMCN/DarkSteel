// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_SKMReact
// Functions: 3

// StaticStruct @ 14acd42f0

UScriptStruct * __cdecl FWN_SKMReact_Particle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_SKMReact_Particle.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_WN_SKMReact();
    Z_Registration_Info_UScriptStruct_FWN_SKMReact_Particle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_SKMReact_Particle,(UObject *)pUVar1,
                         L"WN_SKMReact_Particle");
  }
  return Z_Registration_Info_UScriptStruct_FWN_SKMReact_Particle.OuterSingleton;
}

// FWN_SKMReact_Particle @ 14acd5580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FWN_SKMReact_Particle * __thiscall
FWN_SKMReact_Particle::FWN_SKMReact_Particle
          (FWN_SKMReact_Particle *this,FWN_SKMReact_Particle *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UParticleSystem *pUVar5;
  UNiagaraSystem *pUVar6;
  undefined8 uVar7;
  
  ::FString::FString(&this->PhysicalSurface,&param_1->PhysicalSurface);
  pTVar1 = &this->NameVariations;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->NameVariations).ArrayMax;
  iVar3 = (param_1->NameVariations).ArrayNum;
  pFVar4 = (param_1->NameVariations).AllocatorInstance.Data;
  (this->NameVariations).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  *(undefined8 *)&(this->SoundByStrength).field_0x0 = 0;
  *(undefined8 *)&(this->SoundByStrength).field_0x8 = 0;
  *(undefined8 *)&(this->SoundByStrength).field_0x20 = 0;
  *(undefined4 *)&(this->SoundByStrength).field_0x28 = 0;
  *(undefined4 *)&(this->SoundByStrength).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundByStrength).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoundByStrength).field_0x34 = 0;
  *(undefined8 *)&(this->SoundByStrength).field_0x40 = 0;
  *(undefined4 *)&(this->SoundByStrength).field_0x48 = 0;
  TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
               *)&this->SoundByStrength,
              (TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
               *)&param_1->SoundByStrength);
  pUVar5 = (param_1->CascadeParticle).field0_0x0.DebugPtr;
  (this->CascadeParticle).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UParticleSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar6 = (param_1->NiagaraParticle).field0_0x0.DebugPtr;
  (this->NiagaraParticle).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UNiagaraSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  this->CascadeScale = param_1->CascadeScale;
  this->NiagaraScale = param_1->NiagaraScale;
  this->UseCascade = param_1->UseCascade;
  this->UseNiagara = param_1->UseNiagara;
  uVar7 = *(undefined8 *)((longlong)&(param_1->FootPrintColor).field0_0x0 + 8);
  *(undefined8 *)&(this->FootPrintColor).field0_0x0 =
       *(undefined8 *)&(param_1->FootPrintColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->FootPrintColor).field0_0x0 + 8) = uVar7;
  return this;
}

// FWN_SKMReact_Particle @ 14acd56d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FWN_SKMReact_Particle * __thiscall
FWN_SKMReact_Particle::FWN_SKMReact_Particle(FWN_SKMReact_Particle *this)

{
  TVector4<float>_u_0 local_18;
  
  local_18._0_8_ = ___xmm_3f666666000000000000000000000000;
  local_18._8_8_ = _UNK_151e4ec98;
  (this->PhysicalSurface).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicalSurface).Data.ArrayNum = 0;
  (this->PhysicalSurface).Data.ArrayMax = 0;
  (this->NameVariations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameVariations).ArrayNum = 0;
  (this->NameVariations).ArrayMax = 0;
  *(undefined8 *)&this->SoundByStrength = 0;
  *(undefined8 *)&(this->SoundByStrength).field_0x8 = 0;
  *(undefined8 *)&(this->SoundByStrength).field_0x20 = 0;
  *(undefined4 *)&(this->SoundByStrength).field_0x28 = 0;
  *(undefined4 *)&(this->SoundByStrength).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundByStrength).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoundByStrength).field_0x34 = 0;
  *(undefined8 *)&(this->SoundByStrength).field_0x40 = 0;
  *(undefined4 *)&(this->SoundByStrength).field_0x48 = 0;
  (this->CascadeParticle).field0_0x0.DebugPtr = (UParticleSystem *)0x0;
  (this->NiagaraParticle).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  this->CascadeScale = 1.0;
  this->NiagaraScale = 1.0;
  this->UseCascade = false;
  this->UseNiagara = true;
  FLinearColor::FLinearColor(&this->FootPrintColor,(TVector4<float> *)&local_18._s_0);
  return this;
}

