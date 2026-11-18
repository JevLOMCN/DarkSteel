// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 13

// GetStatId @ 148fb7d60

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_NiagaraSkel_Sample,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_NiagaraSkel_Sample,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_NiagaraSkel_Sample");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Skel Mesh Sampling",
                       "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,
                       false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1492a7c60

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_NiagaraConstants,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_NiagaraConstants,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_NiagaraConstants");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Constant Setup [CNC]",
                       "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,
                       false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1492a7d10

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_NiagaraEvent_CopyBuffer,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_NiagaraEvent_CopyBuffer,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_NiagaraEvent_CopyBuffer");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Emitter Event CopyBuffer [CNC]",
                       "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,
                       false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1492a7dc0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_NiagaraSimulate,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_NiagaraSimulate,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_NiagaraSimulate");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Emitter Simulate [CNC]",
                       "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,
                       false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1492a7e70

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_NiagaraSpawn,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_NiagaraSpawn,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_NiagaraSpawn");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Emitter Spawn [CNC]",
                       "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,
                       false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1492a7f20

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_NiagaraTick,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_NiagaraTick,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_NiagaraTick");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Emitter Tick [CNC]",
                       "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,
                       false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1492f1c80

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_NiagaraGPUSimTick_RT,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_NiagaraGPUSimTick_RT,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_NiagaraGPUSimTick_RT");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"GPU Emitter Dispatch [RT]",
                       "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,
                       false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 149356910

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesFinalSortGPU,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesFinalSortGPU,1>
           *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_NiagaraRenderRibbonsGenVerticesFinalSortGPU");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"Generate Vertices GPU - FinalSort [RT]","STATGROUP_NiagaraRibbons",
                       "STATCAT_Niagara",L"NiagaraRibbons",true,true,ST_int64,true,false,MCR_Invalid
                      );
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1493569c0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesGPU,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesGPU,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_NiagaraRenderRibbonsGenVerticesGPU");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Generate Vertices GPU [RT]",
                       "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,
                       false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 149356a70

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesInitialSortGPU,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesInitialSortGPU,1>
           *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_NiagaraRenderRibbonsGenVerticesInitialSortGPU");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"Generate Vertices GPU - InitialSort [RT]","STATGROUP_NiagaraRibbons",
                       "STATCAT_Niagara",L"NiagaraRibbons",true,true,ST_int64,true,false,MCR_Invalid
                      );
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 149356b20

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitComputeGPU,1>::
GetStatId(FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitComputeGPU,1>
          *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,
                            "STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitComputeGPU");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"Generate Vertices GPU - MultiRibbon Init Compute [RT]",
                       "STATGROUP_NiagaraRibbons","STATCAT_Niagara",L"NiagaraRibbons",true,true,
                       ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 149356bd0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitGPU,1>::
GetStatId(FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitGPU,1>
          *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitGPU");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"Generate Vertices GPU - MultiRibbon Init [RT]","STATGROUP_NiagaraRibbons",
                       "STATCAT_Niagara",L"NiagaraRibbons",true,true,ST_int64,true,false,MCR_Invalid
                      );
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 149356c80

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesSortGPU,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesSortGPU,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_NiagaraRenderRibbonsGenVerticesSortGPU");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,
                       L"Generate Vertices GPU - Sort [RT]","STATGROUP_NiagaraRibbons",
                       "STATCAT_Niagara",L"NiagaraRibbons",true,true,ST_int64,true,false,MCR_Invalid
                      );
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

