// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 4

// BeginParallelTasks @ 146b50eb0

void __thiscall FLocFileSCCNotifies::BeginParallelTasks(FLocFileSCCNotifies *this)

{
  atomic<unsigned_short> *paVar1;
  FLocalizationSCC *pFVar2;
  
  pFVar2 = (this->SourceControlInfo).Object;
  if (pFVar2 != (FLocalizationSCC *)0x0) {
    LOCK();
    paVar1 = &pFVar2->ParallelTasksCount;
    *paVar1 = (atomic<unsigned_short>)((short)*paVar1 + 1);
    UNLOCK();
  }
  return;
}

// EndParallelTasks @ 146b57050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLocFileSCCNotifies::EndParallelTasks(FLocFileSCCNotifies *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TLogFieldName<char_const_(&)[3]> local_res8;
  TLogFieldName<char_const_(&)[6]> local_res10 [3];
  FText local_18;
  
  if ((this->SourceControlInfo).Object != (FLocalizationSCC *)0x0) {
    FText::FText(&local_18);
    if ((this->SourceControlInfo).Object == (FLocalizationSCC *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = FLocalizationSCC::EndParallelTasks((this->SourceControlInfo).Object,&local_18);
    if ((!bVar2) && (1 < (byte)LogLocalizationSourceControl._0_1_)) {
      local_res8.Name = (char (*) [3])&s_id;
      pFVar3 = FText::ToString(&local_18);
      local_res10[0].Name = (char (*) [6])0x1513fe210;
      UE::Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[6]>,FString_const_&,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                ((FLogCategoryBase *)&LogLocalizationSourceControl,&::LOG_Static,local_res10,pFVar3,
                 &local_res8,&LocalizationSourceControlUtil::LocalizationLogIdentifier);
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// PostFileWrite @ 146b81d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLocFileSCCNotifies::PostFileWrite(FLocFileSCCNotifies *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TLogFieldName<char_const_(&)[3]> local_res8;
  TLogFieldName<char_const_(&)[6]> local_res18;
  TLogFieldName<char_const_(&)[5]> local_res20;
  FText local_18;
  
  if ((this->SourceControlInfo).Object != (FLocalizationSCC *)0x0) {
    FText::FText(&local_18);
    if ((this->SourceControlInfo).Object == (FLocalizationSCC *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = FLocalizationSCC::CheckOutFile((this->SourceControlInfo).Object,param_1,&local_18);
    if ((!bVar2) && (1 < (byte)LogLocalizationSourceControl._0_1_)) {
      local_res8.Name = (char (*) [3])&s_id;
      pFVar3 = FText::ToString(&local_18);
      local_res18.Name = (char (*) [6])0x1513fe210;
      local_res20.Name = (char (*) [5])&s_file;
      UE::Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,FString_const_&,UE::Logging::Private::TLogFieldName<char_const_(&)[6]>,FString_const_&,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                ((FLogCategoryBase *)&LogLocalizationSourceControl,&::LOG_Static,&local_res20,
                 param_1,&local_res18,pFVar3,&local_res8,
                 &LocalizationSourceControlUtil::LocalizationLogIdentifier);
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// PreFileWrite @ 146b82160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLocFileSCCNotifies::PreFileWrite(FLocFileSCCNotifies *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TLogFieldName<char_const_(&)[3]> local_res8;
  TLogFieldName<char_const_(&)[6]> local_res18;
  TLogFieldName<char_const_(&)[5]> local_res20;
  FText local_18;
  
  if ((this->SourceControlInfo).Object != (FLocalizationSCC *)0x0) {
    bVar2 = FPaths::FileExists(param_1);
    if (bVar2) {
      FText::FText(&local_18);
      if ((this->SourceControlInfo).Object == (FLocalizationSCC *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      bVar2 = FLocalizationSCC::CheckOutFile((this->SourceControlInfo).Object,param_1,&local_18);
      if ((!bVar2) && (1 < (byte)LogLocalizationSourceControl._0_1_)) {
        local_res8.Name = (char (*) [3])&s_id;
        pFVar3 = FText::ToString(&local_18);
        local_res18.Name = (char (*) [6])0x1513fe210;
        local_res20.Name = (char (*) [5])&s_file;
        UE::Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,FString_const_&,UE::Logging::Private::TLogFieldName<char_const_(&)[6]>,FString_const_&,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                  ((FLogCategoryBase *)&LogLocalizationSourceControl,&::LOG_Static,&local_res20,
                   param_1,&local_res18,pFVar3,&local_res8,
                   &LocalizationSourceControlUtil::LocalizationLogIdentifier);
      }
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
  }
  return;
}

