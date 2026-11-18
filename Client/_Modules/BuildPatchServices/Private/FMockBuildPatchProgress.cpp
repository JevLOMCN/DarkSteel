// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 13

// Abort @ 143317390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall BuildPatchServices::FMockBuildPatchProgress::Abort(FMockBuildPatchProgress *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockBuildPatchProgress::Abort(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// GetPauseState @ 143320f60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockBuildPatchProgress::GetPauseState(FMockBuildPatchProgress *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_bool___cdecl_BuildPatchServices::FMockBuildPatchProgress::GetPauseState(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return false;
}

// GetProgress @ 143320fc0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
BuildPatchServices::FMockBuildPatchProgress::GetProgress(FMockBuildPatchProgress *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_float___cdecl_BuildPatchServices::FMockBuildPatchProgress::GetProgress(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return 0.0;
}

// GetProgressNoMarquee @ 143320ff0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
BuildPatchServices::FMockBuildPatchProgress::GetProgressNoMarquee(FMockBuildPatchProgress *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_float___cdecl_BuildPatchServices::FMockBuildPatchProgress::GetProgressNoMarquee(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return 0.0;
}

// GetState @ 143321110

/* WARNING: Enum "Type": Some values do not have unique names */

EBuildPatchState __thiscall
BuildPatchServices::FMockBuildPatchProgress::GetState(FMockBuildPatchProgress *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_enum_BuildPatchServices::EBuildPatchState___cdecl_BuildPatchServices::FMockBuildPatchProgress::GetState(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return Queued;
}

// GetStateProgress @ 143321140

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
BuildPatchServices::FMockBuildPatchProgress::GetStateProgress
          (FMockBuildPatchProgress *this,EBuildPatchState *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_float___cdecl_BuildPatchServices::FMockBuildPatchProgress::GetStateProgress(BuildPatchServices::EBuildPatchState_const&___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return 0.0;
}

// GetStateWeight @ 143321170

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
BuildPatchServices::FMockBuildPatchProgress::GetStateWeight
          (FMockBuildPatchProgress *this,EBuildPatchState *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_float___cdecl_BuildPatchServices::FMockBuildPatchProgress::GetStateWeight(BuildPatchServices::EBuildPatchState_const&___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return 0.0;
}

// SetIsDownloading @ 143327090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockBuildPatchProgress::SetIsDownloading
          (FMockBuildPatchProgress *this,bool param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockBuildPatchProgress::SetIsDownloading(bool)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// SetPaused @ 1433270f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockBuildPatchProgress::SetPaused(FMockBuildPatchProgress *this,bool param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockBuildPatchProgress::SetPaused(bool)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// SetStateProgress @ 143327220

void __thiscall
BuildPatchServices::FMockBuildPatchProgress::SetStateProgress
          (FMockBuildPatchProgress *this,EBuildPatchState *param_1,float *param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  double dVar9;
  
  if (*(void **)&this->SetStateProgressFunc != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->SetStateProgressFunc);
    pcVar2 = *(code **)&this->SetStateProgressFunc;
    plVar3 = *(longlong **)&(this->SetStateProgressFunc).field_0x28;
    plVar7 = (longlong *)&(this->SetStateProgressFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar7 = plVar3;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar2)(uVar6,param_1,param_2);
  }
  dVar9 = FStatsCollector::GetSeconds();
  iVar5 = (this->RxSetStateProgress).ArrayNum;
  piVar1 = &(this->RxSetStateProgress).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->RxSetStateProgress).AllocatorInstance,piVar1);
  }
  (this->RxSetStateProgress).ArrayNum = iVar5 + 1;
  pFVar4 = (this->RxSetStateProgress).AllocatorInstance.Data;
  lVar8 = (longlong)iVar5;
  *(double *)(pFVar4 + lVar8 * 0x10) = dVar9;
  *(EBuildPatchState *)(pFVar4 + lVar8 * 0x10 + 8) = *param_1;
  *(float *)(pFVar4 + lVar8 * 0x10 + 0xc) = *param_2;
  return;
}

// SetStateWeight @ 143327300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockBuildPatchProgress::SetStateWeight
          (FMockBuildPatchProgress *this,EBuildPatchState *param_1,float *param_2)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockBuildPatchProgress::SetStateWeight(BuildPatchServices::EBuildPatchState_const&___ptr64,float_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// TogglePauseState @ 143328500

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockBuildPatchProgress::TogglePauseState(FMockBuildPatchProgress *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_bool___cdecl_BuildPatchServices::FMockBuildPatchProgress::TogglePauseState(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return false;
}

// WaitWhilePaused @ 143329630

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall
BuildPatchServices::FMockBuildPatchProgress::WaitWhilePaused(FMockBuildPatchProgress *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_double___cdecl_BuildPatchServices::FMockBuildPatchProgress::WaitWhilePaused(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return 0.0;
}

