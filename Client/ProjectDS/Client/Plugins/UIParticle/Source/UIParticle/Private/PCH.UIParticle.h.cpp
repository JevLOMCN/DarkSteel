// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 4

// `dynamic_initializer_for_'StatPtr_STAT_UIParticleCount'' @ 1411dc730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UIParticleCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UIParticleCount == (FThreadSafeStaticStat<FStat_STAT_UIParticleCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UIParticleCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UIParticleCount,*pFVar1,
               L"UIParticle Count","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UIParticleOnPaintTime'' @ 1411dc7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UIParticleOnPaintTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UIParticleOnPaintTime ==
      (FThreadSafeStaticStat<FStat_STAT_UIParticleOnPaintTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UIParticleOnPaintTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UIParticleOnPaintTime,*pFVar1,
               L"UIParticle OnPaint","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UIParticleSpawnParticle'' @ 1411dc850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UIParticleSpawnParticle__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UIParticleSpawnParticle ==
      (FThreadSafeStaticStat<FStat_STAT_UIParticleSpawnParticle>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UIParticleSpawnParticle");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UIParticleSpawnParticle,*pFVar1,
               L"UIParticle SpawnParticle","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UIParticleTickTime'' @ 1411dc8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UIParticleTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UIParticleTickTime == (FThreadSafeStaticStat<FStat_STAT_UIParticleTickTime>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_UIParticleTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UIParticleTickTime,*pFVar1,
               L"UIParticle Tick","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

