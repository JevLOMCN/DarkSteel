// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 3

// Configure @ 14eb0c840

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

void __thiscall
UE::NNERuntimeORT::Private::FEnvironment::Configure(FEnvironment *this,FConfig *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  Env EVar1;
  code *pcVar2;
  undefined3 uVar3;
  int iVar4;
  bool bVar5;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EVar1 = this->OrtEnvironment;
  (*Ort::Global<void>::api_->ReleaseEnv)((OrtEnv *)0x0);
  if (EVar1 != (Env)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OrtEnvironment == Ort::Env(nullptr)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTEnv.cpp"
                       ,0x12,L"Ort::Env already created!");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = *(undefined3 *)&param_1->field_0x1;
  iVar4 = param_1->IntraOpNumThreads;
  (this->Config).bUseGlobalThreadPool = param_1->bUseGlobalThreadPool;
  *(undefined3 *)&(this->Config).field_0x1 = uVar3;
  (this->Config).IntraOpNumThreads = iVar4;
  (this->Config).InterOpNumThreads = param_1->InterOpNumThreads;
                    /* WARNING: Could not recover jumptable at 0x00014eb0c8d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// CreateOrtEnv @ 14eb119c0

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

void __thiscall UE::NNERuntimeORT::Private::FEnvironment::CreateOrtEnv(FEnvironment *this)

{
  Env EVar1;
  code *pcVar2;
  bool bVar3;
  OrtStatus *pOVar4;
  OrtThreadingOptions *local_res8;
  Env local_res10;
  Env local_res18;
  
  EVar1 = this->OrtEnvironment;
  (*Ort::Global<void>::api_->ReleaseEnv)((OrtEnv *)0x0);
  if (EVar1 != (Env)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OrtEnvironment == Ort::Env(nullptr)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTEnv.cpp"
                       ,0x26,L"Ort::Env already created!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->Config).bUseGlobalThreadPool != false) {
    local_res8 = (OrtThreadingOptions *)0x0;
    pOVar4 = (*Ort::Global<void>::api_->CreateThreadingOptions)(&local_res8);
    Ort::ThrowOnError(pOVar4);
    pOVar4 = (*Ort::Global<void>::api_->SetGlobalIntraOpNumThreads)
                       (local_res8,(this->Config).IntraOpNumThreads);
    Ort::ThrowOnError(pOVar4);
    pOVar4 = (*Ort::Global<void>::api_->SetGlobalInterOpNumThreads)
                       (local_res8,(this->Config).InterOpNumThreads);
    Ort::ThrowOnError(pOVar4);
    local_res10 = (Env)0x0;
    pOVar4 = (*Ort::Global<void>::api_->CreateEnvWithGlobalThreadPools)
                       (ORT_LOGGING_LEVEL_WARNING,"",local_res8,(OrtEnv **)&local_res10);
    Ort::ThrowOnError(pOVar4);
    pOVar4 = (*Ort::Global<void>::api_->SetLanguageProjection)
                       ((OrtEnv *)local_res10,ORT_PROJECTION_CPLUSPLUS);
    Ort::ThrowOnError(pOVar4);
    (*Ort::Global<void>::api_->ReleaseEnv)((OrtEnv *)this->OrtEnvironment);
    this->OrtEnvironment = local_res10;
    local_res10 = (Env)0x0;
    (*Ort::Global<void>::api_->ReleaseEnv)((OrtEnv *)0x0);
    (*Ort::Global<void>::api_->ReleaseThreadingOptions)(local_res8);
    return;
  }
  local_res18 = (Env)0x0;
  pOVar4 = (*Ort::Global<void>::api_->CreateEnv)
                     (ORT_LOGGING_LEVEL_WARNING,"",(OrtEnv **)&local_res18);
  Ort::ThrowOnError(pOVar4);
  pOVar4 = (*Ort::Global<void>::api_->SetLanguageProjection)
                     ((OrtEnv *)local_res18,ORT_PROJECTION_CPLUSPLUS);
  Ort::ThrowOnError(pOVar4);
  (*Ort::Global<void>::api_->ReleaseEnv)((OrtEnv *)this->OrtEnvironment);
  this->OrtEnvironment = local_res18;
  local_res18 = (Env)0x0;
  (*Ort::Global<void>::api_->ReleaseEnv)((OrtEnv *)0x0);
  return;
}

// GetOrtEnv @ 14eb15a10

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

Env * __thiscall UE::NNERuntimeORT::Private::FEnvironment::GetOrtEnv(FEnvironment *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  Env EVar1;
  code *pcVar2;
  bool bVar3;
  Env *pEVar4;
  OrtStatus *pOVar5;
  OrtThreadingOptions *local_res8;
  Env local_res10;
  Env local_res18;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EVar1 = this->OrtEnvironment;
  (*Ort::Global<void>::api_->ReleaseEnv)((OrtEnv *)0x0);
  if (EVar1 == (Env)0x0) {
    EVar1 = this->OrtEnvironment;
    (*Ort::Global<void>::api_->ReleaseEnv)((OrtEnv *)0x0);
    if (EVar1 != (Env)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OrtEnvironment == Ort::Env(nullptr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTEnv.cpp"
                         ,0x26,L"Ort::Env already created!");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pEVar4 = (Env *)(*pcVar2)();
        return pEVar4;
      }
    }
    if ((this->Config).bUseGlobalThreadPool == false) {
      local_res18 = (Env)0x0;
      pOVar5 = (*Ort::Global<void>::api_->CreateEnv)
                         (ORT_LOGGING_LEVEL_WARNING,"",(OrtEnv **)&local_res18);
      Ort::ThrowOnError(pOVar5);
      pOVar5 = (*Ort::Global<void>::api_->SetLanguageProjection)
                         ((OrtEnv *)local_res18,ORT_PROJECTION_CPLUSPLUS);
      Ort::ThrowOnError(pOVar5);
      (*Ort::Global<void>::api_->ReleaseEnv)((OrtEnv *)this->OrtEnvironment);
      this->OrtEnvironment = local_res18;
      local_res18 = (Env)0x0;
      (*Ort::Global<void>::api_->ReleaseEnv)((OrtEnv *)0x0);
    }
    else {
      local_res8 = (OrtThreadingOptions *)0x0;
      pOVar5 = (*Ort::Global<void>::api_->CreateThreadingOptions)(&local_res8);
      Ort::ThrowOnError(pOVar5);
      pOVar5 = (*Ort::Global<void>::api_->SetGlobalIntraOpNumThreads)
                         (local_res8,(this->Config).IntraOpNumThreads);
      Ort::ThrowOnError(pOVar5);
      pOVar5 = (*Ort::Global<void>::api_->SetGlobalInterOpNumThreads)
                         (local_res8,(this->Config).InterOpNumThreads);
      Ort::ThrowOnError(pOVar5);
      local_res10 = (Env)0x0;
      pOVar5 = (*Ort::Global<void>::api_->CreateEnvWithGlobalThreadPools)
                         (ORT_LOGGING_LEVEL_WARNING,"",local_res8,(OrtEnv **)&local_res10);
      Ort::ThrowOnError(pOVar5);
      pOVar5 = (*Ort::Global<void>::api_->SetLanguageProjection)
                         ((OrtEnv *)local_res10,ORT_PROJECTION_CPLUSPLUS);
      Ort::ThrowOnError(pOVar5);
      (*Ort::Global<void>::api_->ReleaseEnv)((OrtEnv *)this->OrtEnvironment);
      this->OrtEnvironment = local_res10;
      local_res10 = (Env)0x0;
      (*Ort::Global<void>::api_->ReleaseEnv)((OrtEnv *)0x0);
      (*Ort::Global<void>::api_->ReleaseThreadingOptions)(local_res8);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return &this->OrtEnvironment;
}

