// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Exec_Dev @ 1488899b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FDeferredExecCommandTest::RunTest'::__l2::FExecCommandHandler::Exec_Dev
          (void *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  wchar_t *local_res18 [2];
  
  local_res18[0] = param_2;
  bVar1 = FParse::Command(local_res18,L"Test_DeferredCommand",true);
  if (bVar1) {
    *(undefined1 *)((longlong)this + 8) = 1;
    return true;
  }
  return false;
}

// Exec_Dev @ 1488899f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FExecCommandTargetVariantsTest::RunTest'::__l2::FExecCommandHandler::Exec_Dev
          (void *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  wchar_t *local_res18 [2];
  
  local_res18[0] = param_2;
  bVar1 = FParse::Command(local_res18,L"Test_DevCommand",true);
  if (bVar1) {
    *(undefined1 *)((longlong)this + 9) = 1;
    return true;
  }
  return false;
}

// Exec_Dev @ 148889a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FSelfRegisteringExecCommandTest::RunTest'::__l2::FExecCommandHandler::Exec_Dev
          (void *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  wchar_t *local_res18 [2];
  
  local_res18[0] = param_2;
  bVar1 = FParse::Command(local_res18,L"Test_Command",true);
  if (bVar1) {
    *(undefined1 *)((longlong)this + 8) = 1;
    return true;
  }
  return false;
}

// Exec_Editor @ 148889a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FExecCommandTargetVariantsTest::RunTest'::__l2::FExecCommandHandler::Exec_Editor
          (void *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  wchar_t *local_res18 [2];
  
  local_res18[0] = param_2;
  bVar1 = FParse::Command(local_res18,L"Test_EditorCommand",true);
  if (bVar1) {
    *(undefined1 *)((longlong)this + 8) = 1;
    return true;
  }
  return false;
}

// Exec_Runtime @ 148889ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FExecCommandTargetVariantsTest::RunTest'::__l2::FExecCommandHandler::Exec_Runtime
          (void *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  wchar_t *local_res18 [2];
  
  local_res18[0] = param_2;
  bVar1 = FParse::Command(local_res18,L"Test_RuntimeCommand",true);
  if (bVar1) {
    *(undefined1 *)((longlong)this + 10) = 1;
    return true;
  }
  return false;
}

