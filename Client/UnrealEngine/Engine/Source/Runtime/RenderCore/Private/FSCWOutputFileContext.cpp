// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// ModalErrorOrLog<int,int> @ 145e3e030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSCWOutputFileContext::ModalErrorOrLog<int,int>
          (FSCWOutputFileContext *this,TCheckedFormatStringPrivate<wchar_t,int,int> param_1,
          int param_2,int param_3)

{
  longlong lVar1;
  FThreadSafeBool FVar2;
  bool bVar3;
  long64 lVar4;
  FOutputDeviceRedirector *this_00;
  FText *pFVar5;
  FText *pFVar6;
  FString local_48;
  FString local_38;
  FText local_28;
  FText local_18;
  
  ::FString::PrintfImpl(&local_48,param_1.FormatString);
  (**(code **)(*(longlong *)this->OutputFile + 0x18))(this->OutputFile,&local_28);
  ::FString::PrintfImpl
            (&local_38,
             L"File path: \"%s\"\n%s\nForgot to build ShaderCompileWorker or delete invalidated DerivedDataCache?"
            );
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  local_48.Data.ArrayNum = local_38.Data.ArrayNum;
  local_48.Data.ArrayMax = local_38.Data.ArrayMax;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_28.TextData.Reference);
  }
  lVar1 = this->FileSize;
  if (lVar1 < 1) {
    ::FString::FString(&local_38,L"Corrupted ShaderCompileWorker output file");
    this_00 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::Panic(this_00);
    bVar3 = FApp::IsUnattended();
    FVar2 = bModalReported;
    if (bVar3) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    else {
      LOCK();
      bModalReported = (FThreadSafeBool)0x1;
      UNLOCK();
      if (FVar2 != (FThreadSafeBool)0x0) {
                    /* WARNING: Subroutine does not return */
        FWindowsPlatformProcess::SleepInfinite();
      }
      if (1 < (byte)LogShaders._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      pFVar5 = FText::FromString(&local_18,&local_38);
      pFVar6 = FText::FromString(&local_28,&local_48);
      FMessageDialog::Open(Ok,pFVar6,pFVar5);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      FWindowsPlatformMisc::RequestExit(true,L"ShaderCompiler.ModalErrorOrLog");
    }
  }
  else {
    lVar4 = (**(code **)(*(longlong *)this->OutputFile + 0x28))();
    ::FString::FString(&local_38,L"Corrupted ShaderCompileWorker output file");
    ModalErrorOrLog(&local_38,&local_48,lVar4,lVar1,true);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// ModalErrorOrLog<int,wchar_t_const_*,int> @ 145e3e240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSCWOutputFileContext::ModalErrorOrLog<int,wchar_t_const_*,int>
          (FSCWOutputFileContext *this,
          TCheckedFormatStringPrivate<wchar_t,int,wchar_t_const_*,int> param_1,int param_2,
          wchar_t *param_3,int param_4)

{
  longlong lVar1;
  FThreadSafeBool FVar2;
  bool bVar3;
  long64 lVar4;
  FOutputDeviceRedirector *this_00;
  FText *pFVar5;
  FText *pFVar6;
  FString local_48;
  FString local_38;
  FText local_28;
  FText local_18;
  
  ::FString::PrintfImpl(&local_48,param_1.FormatString);
  (**(code **)(*(longlong *)this->OutputFile + 0x18))(this->OutputFile,&local_28);
  ::FString::PrintfImpl
            (&local_38,
             L"File path: \"%s\"\n%s\nForgot to build ShaderCompileWorker or delete invalidated DerivedDataCache?"
            );
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  local_48.Data.ArrayNum = local_38.Data.ArrayNum;
  local_48.Data.ArrayMax = local_38.Data.ArrayMax;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_28.TextData.Reference);
  }
  lVar1 = this->FileSize;
  if (lVar1 < 1) {
    ::FString::FString(&local_38,L"Corrupted ShaderCompileWorker output file");
    this_00 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::Panic(this_00);
    bVar3 = FApp::IsUnattended();
    FVar2 = bModalReported;
    if (bVar3) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    else {
      LOCK();
      bModalReported = (FThreadSafeBool)0x1;
      UNLOCK();
      if (FVar2 != (FThreadSafeBool)0x0) {
                    /* WARNING: Subroutine does not return */
        FWindowsPlatformProcess::SleepInfinite();
      }
      if (1 < (byte)LogShaders._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      pFVar5 = FText::FromString(&local_18,&local_38);
      pFVar6 = FText::FromString(&local_28,&local_48);
      FMessageDialog::Open(Ok,pFVar6,pFVar5);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      FWindowsPlatformMisc::RequestExit(true,L"ShaderCompiler.ModalErrorOrLog");
    }
  }
  else {
    lVar4 = (**(code **)(*(longlong *)this->OutputFile + 0x28))();
    ::FString::FString(&local_38,L"Corrupted ShaderCompileWorker output file");
    ModalErrorOrLog(&local_38,&local_48,lVar4,lVar1,true);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

