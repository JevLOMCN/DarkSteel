// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// GetStatId @ 142495a90

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_PerformHarfBuzzTextShaping,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_PerformHarfBuzzTextShaping,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_PerformHarfBuzzTextShaping");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"HarfBuzz Text Shaping",
                       "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 142495b40

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_SplitByFontFace,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_SplitByFontFace,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_SplitByFontFace");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Split By FontFace",
                       "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 14250f8d0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_WeakToStrong_WidgetPath,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_WeakToStrong_WidgetPath,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_WeakToStrong_WidgetPath");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Weak-To-Strong WidgetPath",
                       "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1425e3870

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_SlateExecuteActiveTimers,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_SlateExecuteActiveTimers,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_SlateExecuteActiveTimers");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Execute Active Timers",
                       "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1425e3920

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_SlateNumTickedWidgets,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_SlateNumTickedWidgets,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_SlateNumTickedWidgets");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"SWidget::Tick (Count)",
                       "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,false,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

// GetStatId @ 1425e39d0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_SlateTickWidgets,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_SlateTickWidgets,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_SlateTickWidgets");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"Tick Widgets","STATGROUP_Slate",
                       "STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

