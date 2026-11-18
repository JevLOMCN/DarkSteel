// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 10

// Error<> @ 14cfffc40

void __cdecl FLiveLinkLog::Error<>(TCheckedFormatStringPrivate<wchar_t> param_1)

{
  FLiveLinkSubjectKey local_28;
  
  local_28.Source.A = 0;
  local_28.Source.B = 0;
  local_28.Source.C = 0;
  local_28.Source.D = 0;
  local_28.SubjectName.Name.ComparisonIndex.Value = 0;
  local_28.SubjectName.Name.Number = 0;
  Log_Internal<>(Error,(FName)0x0,&local_28,param_1);
  return;
}

// Log_Internal<> @ 14d00a030

void __cdecl
FLiveLinkLog::Log_Internal<>
          (Type param_1,FName param_2,FLiveLinkSubjectKey *param_3,
          TCheckedFormatStringPrivate<wchar_t> param_4)

{
  code *pcVar1;
  TUniquePtr<FLiveLinkLog,TDefaultDelete<FLiveLinkLog>_> TVar2;
  FString local_18;
  
  TVar2.Ptr = Instance.Ptr;
  if (Instance.Ptr != (FLiveLinkLog *)0x0) {
    pcVar1 = *(code **)((longlong)*Instance.Ptr + 0x20);
    ::FString::PrintfImpl(&local_18,param_4.FormatString);
    (*pcVar1)(TVar2.Ptr,param_1,param_2,param_3,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Log_Internal<int> @ 14d00a0c0

void __cdecl
FLiveLinkLog::Log_Internal<int>
          (Type param_1,FName param_2,FLiveLinkSubjectKey *param_3,
          TCheckedFormatStringPrivate<wchar_t,int> param_4,int param_5)

{
  code *pcVar1;
  TUniquePtr<FLiveLinkLog,TDefaultDelete<FLiveLinkLog>_> TVar2;
  FString local_18;
  
  TVar2.Ptr = Instance.Ptr;
  if (Instance.Ptr != (FLiveLinkLog *)0x0) {
    pcVar1 = *(code **)((longlong)*Instance.Ptr + 0x20);
    ::FString::PrintfImpl(&local_18,param_4.FormatString);
    (*pcVar1)(TVar2.Ptr,param_1,param_2,param_3,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Log_Internal<wchar_t_const_*,wchar_t_const_*> @ 14d00a150

void __cdecl
FLiveLinkLog::Log_Internal<wchar_t_const_*,wchar_t_const_*>
          (Type param_1,FName param_2,FLiveLinkSubjectKey *param_3,
          TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*> param_4,
          wchar_t *param_5,wchar_t *param_6)

{
  code *pcVar1;
  TUniquePtr<FLiveLinkLog,TDefaultDelete<FLiveLinkLog>_> TVar2;
  FString local_18;
  
  TVar2.Ptr = Instance.Ptr;
  if (Instance.Ptr != (FLiveLinkLog *)0x0) {
    pcVar1 = *(code **)((longlong)*Instance.Ptr + 0x20);
    ::FString::PrintfImpl(&local_18,param_4.FormatString);
    (*pcVar1)(TVar2.Ptr,param_1,param_2,param_3,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Log_Internal<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*> @ 14d00a1f0

void __cdecl
FLiveLinkLog::Log_Internal<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
          (Type param_1,FName param_2,FLiveLinkSubjectKey *param_3,
          TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
          param_4,wchar_t *param_5,wchar_t *param_6,wchar_t *param_7)

{
  code *pcVar1;
  TUniquePtr<FLiveLinkLog,TDefaultDelete<FLiveLinkLog>_> TVar2;
  FString local_18;
  
  TVar2.Ptr = Instance.Ptr;
  if (Instance.Ptr != (FLiveLinkLog *)0x0) {
    pcVar1 = *(code **)((longlong)*Instance.Ptr + 0x20);
    ::FString::PrintfImpl(&local_18,param_4.FormatString);
    (*pcVar1)(TVar2.Ptr,param_1,param_2,param_3,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Warning<> @ 14d00ced0

void __cdecl FLiveLinkLog::Warning<>(TCheckedFormatStringPrivate<wchar_t> param_1)

{
  FLiveLinkSubjectKey local_28;
  
  local_28.Source.A = 0;
  local_28.Source.B = 0;
  local_28.Source.C = 0;
  local_28.Source.D = 0;
  local_28.SubjectName.Name.ComparisonIndex.Value = 0;
  local_28.SubjectName.Name.Number = 0;
  Log_Internal<>(Warning,(FName)0x0,&local_28,param_1);
  return;
}

// Warning<wchar_t_const_*> @ 14d00cf10

void __cdecl
FLiveLinkLog::Warning<wchar_t_const_*>
          (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*> param_1,wchar_t *param_2)

{
  FLiveLinkSubjectKey local_28;
  
  local_28.Source.A = 0;
  local_28.Source.B = 0;
  local_28.Source.C = 0;
  local_28.Source.D = 0;
  local_28.SubjectName.Name.ComparisonIndex.Value = 0;
  local_28.SubjectName.Name.Number = 0;
  Log_Internal<wchar_t_const_*>(Warning,(FName)0x0,&local_28,param_1,param_2);
  return;
}

// Warning<wchar_t_const_*,wchar_t_const_*> @ 14d00cf50

void __cdecl
FLiveLinkLog::Warning<wchar_t_const_*,wchar_t_const_*>
          (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*> param_1,
          wchar_t *param_2,wchar_t *param_3)

{
  FLiveLinkSubjectKey local_28;
  
  local_28.Source.A = 0;
  local_28.Source.B = 0;
  local_28.Source.C = 0;
  local_28.Source.D = 0;
  local_28.SubjectName.Name.ComparisonIndex.Value = 0;
  local_28.SubjectName.Name.Number = 0;
  Log_Internal<wchar_t_const_*,wchar_t_const_*>
            (Warning,(FName)0x0,&local_28,param_1,param_2,param_3);
  return;
}

// Warning<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*> @ 14d00cfa0

void __cdecl
FLiveLinkLog::Warning<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
          (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
           param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4)

{
  FLiveLinkSubjectKey local_20;
  
  local_20.Source.A = 0;
  local_20.Source.B = 0;
  local_20.Source.C = 0;
  local_20.Source.D = 0;
  local_20.SubjectName.Name.ComparisonIndex.Value = 0;
  local_20.SubjectName.Name.Number = 0;
  Log_Internal<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
            (Warning,(FName)0x0,&local_20,param_1,param_2,param_3,param_4);
  return;
}

// ~FLiveLinkLog @ 14d016020

void __thiscall FLiveLinkLog::~FLiveLinkLog(FLiveLinkLog *this)

{
  return;
}

