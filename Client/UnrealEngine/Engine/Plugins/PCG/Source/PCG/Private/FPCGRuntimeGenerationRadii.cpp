// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// StaticStruct @ 149edd920

UScriptStruct * __cdecl FPCGRuntimeGenerationRadii::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGRuntimeGenerationRadii.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGRuntimeGenerationRadii.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGRuntimeGenerationRadii,(UObject *)pUVar1,
                         L"PCGRuntimeGenerationRadii");
  }
  return Z_Registration_Info_UScriptStruct_FPCGRuntimeGenerationRadii.OuterSingleton;
}

// FPCGRuntimeGenerationRadii @ 149eed520

FPCGRuntimeGenerationRadii * __thiscall
FPCGRuntimeGenerationRadii::FPCGRuntimeGenerationRadii(FPCGRuntimeGenerationRadii *this)

{
  this->GenerationRadius = 4294967296.0;
  this->GenerationRadius400 = 800.0;
  this->GenerationRadius800 = 1600.0;
  this->GenerationRadius1600 = 3200.0;
  this->GenerationRadius3200 = 6400.0;
  this->GenerationRadius6400 = 12800.0;
  this->GenerationRadius12800 = 25600.0;
  this->GenerationRadius25600 = 51200.0;
  this->GenerationRadius51200 = 102400.0;
  this->GenerationRadius102400 = 204800.0;
  this->GenerationRadius204800 = 409600.0;
  this->CleanupRadiusMultiplier = 1.1;
  return this;
}

// operator== @ 149ef0540

bool __thiscall
FPCGRuntimeGenerationRadii::operator==
          (FPCGRuntimeGenerationRadii *this,FPCGRuntimeGenerationRadii *param_1)

{
  if (((((param_1->GenerationRadius == this->GenerationRadius) &&
        (param_1->GenerationRadius400 == this->GenerationRadius400)) &&
       (param_1->GenerationRadius800 == this->GenerationRadius800)) &&
      ((((param_1->GenerationRadius1600 == this->GenerationRadius1600 &&
         (param_1->GenerationRadius3200 == this->GenerationRadius3200)) &&
        ((param_1->GenerationRadius6400 == this->GenerationRadius6400 &&
         ((param_1->GenerationRadius12800 == this->GenerationRadius12800 &&
          (param_1->GenerationRadius25600 == this->GenerationRadius25600)))))) &&
       (param_1->GenerationRadius51200 == this->GenerationRadius51200)))) &&
     (((param_1->GenerationRadius102400 == this->GenerationRadius102400 &&
       (param_1->GenerationRadius204800 == this->GenerationRadius204800)) &&
      (param_1->CleanupRadiusMultiplier == this->CleanupRadiusMultiplier)))) {
    return true;
  }
  return false;
}

// GetCleanupRadiusFromGrid @ 149eff110

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

double __thiscall
FPCGRuntimeGenerationRadii::GetCleanupRadiusFromGrid
          (FPCGRuntimeGenerationRadii *this,EPCGHiGenGrid param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->CleanupRadiusMultiplier;
  dVar2 = GetGenerationRadiusFromGrid(this,param_1);
  return dVar2 * dVar1;
}

// GetGenerationRadiusFromGrid @ 149f000a0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

double __thiscall
FPCGRuntimeGenerationRadii::GetGenerationRadiusFromGrid
          (FPCGRuntimeGenerationRadii *this,EPCGHiGenGrid param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if (param_1 < 0x2001) {
    if (param_1 == Grid8192) {
      return this->GenerationRadius204800 * __real_4010000000000000;
    }
    if (param_1 < 0x81) {
      if (param_1 == Grid128) {
        return this->GenerationRadius12800;
      }
      if (param_1 == Grid4) {
        return this->GenerationRadius400;
      }
      if (param_1 == Grid8) {
        return this->GenerationRadius800;
      }
      if (param_1 == Grid16) {
        return this->GenerationRadius1600;
      }
      if (param_1 == Grid32) {
        return this->GenerationRadius3200;
      }
      if (param_1 == Grid64) {
        return this->GenerationRadius6400;
      }
    }
    else {
      if (param_1 == Grid256) {
        return this->GenerationRadius25600;
      }
      if (param_1 == Grid512) {
        return this->GenerationRadius51200;
      }
      if (param_1 == Grid1024) {
        return this->GenerationRadius102400;
      }
      if (param_1 == Grid2048) {
        return this->GenerationRadius204800;
      }
      if (param_1 == Grid4096) {
        return this->GenerationRadius204800 + this->GenerationRadius204800;
      }
    }
  }
  else if (param_1 < 0x80001) {
    if (param_1 == Grid524288) {
      return this->GenerationRadius204800 * __real_4070000000000000;
    }
    if (param_1 == Grid16384) {
      return this->GenerationRadius204800 * __real_4020000000000000;
    }
    if (param_1 == Grid32768) {
      return this->GenerationRadius204800 * __real_4030000000000000;
    }
    if (param_1 == Grid65536) {
      return this->GenerationRadius204800 * __real_4040000000000000;
    }
    if (param_1 == Grid131072) {
      return this->GenerationRadius204800 * __real_4050000000000000;
    }
    if (param_1 == Grid262144) {
      return this->GenerationRadius204800 * __real_4060000000000000;
    }
  }
  else {
    if (param_1 == Grid1048576) {
      return this->GenerationRadius204800 * __real_4080000000000000;
    }
    if (param_1 == Grid2097152) {
      return this->GenerationRadius204800 * __real_4090000000000000;
    }
    if (param_1 == Grid4194304) {
      return this->GenerationRadius204800 * __real_40a0000000000000;
    }
    if (param_1 == Unbounded) {
      return this->GenerationRadius;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3381450936374264030>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGCommon.cpp"
                     ,0xde,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return 0.0;
}

