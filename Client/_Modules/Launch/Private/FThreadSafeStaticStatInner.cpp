// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 4

// GetStatId @ 148da3e60

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_CPUTimePct,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_CPUTimePct,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_CPUTimePct");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Percentage CPU utilization",
                       "STATGROUP_Threading","STATCAT_Advanced",L"Threading",true,true,NumBits,false
                       ,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 148da3f10

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_CPUTimePctRelative,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_CPUTimePctRelative,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_CPUTimePctRelative");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"Percentage CPU utilization (relative to one core)","STATGROUP_Threading",
                       "STATCAT_Advanced",L"Threading",true,true,NumBits,false,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 148da3fc0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_FrameTime,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_FrameTime,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_FrameTime");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"FrameTime","STATGROUP_Engine",
                       "STATCAT_Advanced",L"Engine",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 148da4070

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<`FEngineLoop::PreInitPreStartupScreen'::__l396::FStat_STAT_PlatformInit,1>
::GetStatId(void *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_PlatformInit");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      (this,*pFVar1,L"Platform Initialization","STATGROUP_LoadTime",
                       "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

