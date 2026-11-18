// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizationService
// Functions: 16

// CanCancelOperation @ 146b2e7d0

bool __thiscall
FDefaultLocalizationServiceProvider::CanCancelOperation
          (FDefaultLocalizationServiceProvider *this,
          TSharedRef<ILocalizationServiceOperation,1> *param_1)

{
  return false;
}

// CancelOperation @ 146b2e7e0

void __thiscall
FDefaultLocalizationServiceProvider::CancelOperation
          (FDefaultLocalizationServiceProvider *this,
          TSharedRef<ILocalizationServiceOperation,1> *param_1)

{
  return;
}

// Close @ 146b2e820

void __thiscall
FDefaultLocalizationServiceProvider::Close(FDefaultLocalizationServiceProvider *this)

{
  return;
}

// CustomizeSettingsDetails @ 146b31250

void __thiscall
FDefaultLocalizationServiceProvider::CustomizeSettingsDetails
          (FDefaultLocalizationServiceProvider *this,IDetailCategoryBuilder *param_1)

{
  return;
}

// CustomizeTargetDetails @ 146b31260

void __thiscall
FDefaultLocalizationServiceProvider::CustomizeTargetDetails
          (FDefaultLocalizationServiceProvider *this,IDetailCategoryBuilder *param_1,
          TWeakObjectPtr<ULocalizationTarget,FWeakObjectPtr> param_2)

{
  return;
}

// CustomizeTargetSetToolbar @ 146b31270

void __thiscall
FDefaultLocalizationServiceProvider::CustomizeTargetSetToolbar
          (FDefaultLocalizationServiceProvider *this,TSharedRef<FExtender,1> *param_1,
          TWeakObjectPtr<ULocalizationTargetSet,FWeakObjectPtr> param_2)

{
  return;
}

// CustomizeTargetToolbar @ 146b31280

void __thiscall
FDefaultLocalizationServiceProvider::CustomizeTargetToolbar
          (FDefaultLocalizationServiceProvider *this,TSharedRef<FExtender,1> *param_1,
          TWeakObjectPtr<ULocalizationTarget,FWeakObjectPtr> param_2)

{
  return;
}

// Execute @ 146b314e0

Type __thiscall
FDefaultLocalizationServiceProvider::Execute
          (FDefaultLocalizationServiceProvider *this,
          TSharedRef<ILocalizationServiceOperation,1> *param_1,
          TArray<FLocalizationServiceTranslationIdentifier,TSizedDefaultAllocator<32>_> *param_2,
          Type param_3,
          TDelegate<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
          *param_4)

{
  return Failed;
}

// GetDisplayName @ 146b319d0

FText * __thiscall
FDefaultLocalizationServiceProvider::GetDisplayName
          (FDefaultLocalizationServiceProvider *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"DefaultLocalizationServiceProvider",
             L"DefaultLocalizationServiceProviderDisplayName",L"None");
  return __return_storage_ptr__;
}

// GetName @ 146b31d10

FName * __thiscall
FDefaultLocalizationServiceProvider::GetName(FDefaultLocalizationServiceProvider *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ProviderName,"None");
      _Init_thread_footer(&::_TSS0);
      return &ProviderName;
    }
  }
  return &ProviderName;
}

// GetState @ 146b32070

Type __thiscall
FDefaultLocalizationServiceProvider::GetState
          (FDefaultLocalizationServiceProvider *this,
          TArray<FLocalizationServiceTranslationIdentifier,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSharedRef<ILocalizationServiceState,1>,TSizedDefaultAllocator<32>_> *param_2,
          Type param_3)

{
  return Failed;
}

// GetStatusText @ 146b32210

FText * __thiscall
FDefaultLocalizationServiceProvider::GetStatusText
          (FDefaultLocalizationServiceProvider *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"DefaultLocalizationServiceProvider",
             L"LocalizationServiceDisabled",L"Localization service is disabled");
  return __return_storage_ptr__;
}

// Init @ 146b32530

void __thiscall
FDefaultLocalizationServiceProvider::Init(FDefaultLocalizationServiceProvider *this,bool param_1)

{
  FMessageLog *this_00;
  FText *pFVar1;
  FName local_res18 [2];
  TSharedRef<FTokenizedMessage,1> local_58;
  FText local_48;
  FMessageLog local_38;
  
  ::FName::FName(local_res18,"LocalizationService");
  this_00 = FMessageLog::FMessageLog(&local_38,local_res18);
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"DefaultLocalizationServiceProvider",L"LocalizationServiceDisabled"
                      ,L"Localization service is disabled");
  FMessageLog::Info(this_00,&local_58,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_38);
  return;
}

// IsAvailable @ 146b32830

bool __thiscall
FDefaultLocalizationServiceProvider::IsAvailable(FDefaultLocalizationServiceProvider *this)

{
  return false;
}

// IsEnabled @ 146b32860

bool __thiscall
FDefaultLocalizationServiceProvider::IsEnabled(FDefaultLocalizationServiceProvider *this)

{
  return false;
}

// Tick @ 146b337e0

void __thiscall FDefaultLocalizationServiceProvider::Tick(FDefaultLocalizationServiceProvider *this)

{
  return;
}

