// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 33

// AllowsDiffAgainstDepot @ 146b04b40

bool __thiscall
FDefaultSourceControlProvider::AllowsDiffAgainstDepot(FDefaultSourceControlProvider *this)

{
  return true;
}

// CanCancelOperation @ 146b05780

bool __thiscall
FDefaultSourceControlProvider::CanCancelOperation
          (FDefaultSourceControlProvider *this,TSharedRef<ISourceControlOperation,1> *param_1)

{
  return false;
}

// CanExecuteOperation @ 146b05790

bool __thiscall
FDefaultSourceControlProvider::CanExecuteOperation
          (FDefaultSourceControlProvider *this,TSharedRef<ISourceControlOperation,1> *param_1)

{
  return false;
}

// CancelOperation @ 146b057c0

void __thiscall
FDefaultSourceControlProvider::CancelOperation
          (FDefaultSourceControlProvider *this,TSharedRef<ISourceControlOperation,1> *param_1)

{
  return;
}

// Close @ 146b088c0

void __thiscall FDefaultSourceControlProvider::Close(FDefaultSourceControlProvider *this)

{
  return;
}

// Execute @ 146b146f0

Type __thiscall
FDefaultSourceControlProvider::Execute
          (FDefaultSourceControlProvider *this,TSharedRef<ISourceControlOperation,1> *param_1,
          TSharedPtr<ISourceControlChangelist,1> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,Type param_4,
          TDelegate<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,ECommandResult::Type),FDefaultDelegateUserPolicy>
          *param_5)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return Failed;
}

// GetCachedStateByPredicate @ 146b16e20

TArray<TSharedRef<ISourceControlState,1>,TSizedDefaultAllocator<32>_> * __thiscall
FDefaultSourceControlProvider::GetCachedStateByPredicate
          (FDefaultSourceControlProvider *this,
          TArray<TSharedRef<ISourceControlState,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,
          TFunctionRef<bool___cdecl(TSharedRef<ISourceControlState,1>_const_&)> *param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetChangelists @ 146b16ec0

TArray<TSharedRef<ISourceControlChangelist,1>,TSizedDefaultAllocator<32>_> * __thiscall
FDefaultSourceControlProvider::GetChangelists
          (FDefaultSourceControlProvider *this,
          TArray<TSharedRef<ISourceControlChangelist,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,Type param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetLabels @ 146b18440

TArray<TSharedRef<ISourceControlLabel,1>,TSizedDefaultAllocator<32>_> * __thiscall
FDefaultSourceControlProvider::GetLabels
          (FDefaultSourceControlProvider *this,
          TArray<TSharedRef<ISourceControlLabel,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FString *param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetName @ 146b18890

FName * __thiscall FDefaultSourceControlProvider::GetName(FDefaultSourceControlProvider *this)

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

// GetNumLocalChanges @ 146b18ba0

TOptional<int> __thiscall
FDefaultSourceControlProvider::GetNumLocalChanges(FDefaultSourceControlProvider *this)

{
  TOptional<int> in_RDX;
  
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
  return in_RDX;
}

// GetState @ 146b1a700

Type __thiscall
FDefaultSourceControlProvider::GetState
          (FDefaultSourceControlProvider *this,
          TArray<TSharedRef<ISourceControlChangelist,1>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSharedRef<ISourceControlChangelistState,1>,TSizedDefaultAllocator<32>_> *param_2,
          Type param_3)

{
  return Failed;
}

// GetState @ 146b1a710

Type __thiscall
FDefaultSourceControlProvider::GetState
          (FDefaultSourceControlProvider *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSharedRef<ISourceControlState,1>,TSizedDefaultAllocator<32>_> *param_2,
          Type param_3)

{
  return Failed;
}

// GetStateBranchAtIndex @ 146b1ab60

bool __thiscall
FDefaultSourceControlProvider::GetStateBranchAtIndex
          (FDefaultSourceControlProvider *this,int param_1,FString *param_2)

{
  return false;
}

// GetStateBranchIndex @ 146b1ab70

int __thiscall
FDefaultSourceControlProvider::GetStateBranchIndex
          (FDefaultSourceControlProvider *this,FString *param_1)

{
  return -1;
}

// GetStatus @ 146b1ab80

TMap<ISourceControlProvider::EStatus,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ISourceControlProvider::EStatus,FString,0>_>
* __thiscall
FDefaultSourceControlProvider::GetStatus
          (FDefaultSourceControlProvider *this,
          TMap<ISourceControlProvider::EStatus,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ISourceControlProvider::EStatus,FString,0>_>
          *__return_storage_ptr__)

{
  char cVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined4 local_res8 [4];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  cVar1 = (**(code **)((longlong)*this + 0x38))();
  pwVar3 = L"Yes";
  pwVar2 = L"No";
  if (cVar1 != '\0') {
    pwVar2 = L"Yes";
  }
  ::FString::FString((FString *)local_28,pwVar2);
  local_38._0_8_ = local_res8;
  local_res8[0] = 0;
  local_38._8_8_ = local_28;
  TSet<TTuple<enum_ISourceControlProvider::EStatus,FString>,TDefaultMapHashableKeyFuncs<enum_ISourceControlProvider::EStatus,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_ISourceControlProvider::EStatus_&&,FString_&&>_>
            (__return_storage_ptr__,
             (TPairInitializer<ISourceControlProvider::EStatus_&&,FString_&&> *)(local_res8 + 2),
             (bool *)local_38);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  cVar1 = (**(code **)((longlong)*this + 0x38))(this);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)((longlong)*this + 0x40))(this);
    if (cVar1 != '\0') goto LAB_146b1ac3b;
  }
  pwVar3 = L"No";
LAB_146b1ac3b:
  ::FString::FString((FString *)local_38,pwVar3);
  local_28._0_8_ = local_res8;
  local_res8[0] = 1;
  local_28._8_8_ = local_38;
  TSet<TTuple<enum_ISourceControlProvider::EStatus,FString>,TDefaultMapHashableKeyFuncs<enum_ISourceControlProvider::EStatus,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_ISourceControlProvider::EStatus_&&,FString_&&>_>
            (__return_storage_ptr__,
             (TPairInitializer<ISourceControlProvider::EStatus_&&,FString_&&> *)(local_res8 + 2),
             (bool *)local_28);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  return __return_storage_ptr__;
}

// GetStatusText @ 146b1ad60

FText * __thiscall
FDefaultSourceControlProvider::GetStatusText
          (FDefaultSourceControlProvider *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"DefaultSourceControlProvider",L"SourceControlDisabled",
             L"Revision control is disabled");
  return __return_storage_ptr__;
}

// Init @ 146b1b7d0

void __thiscall
FDefaultSourceControlProvider::Init(FDefaultSourceControlProvider *this,bool param_1)

{
  FMessageLog *this_00;
  FText *pFVar1;
  FName local_res18 [2];
  TSharedRef<FTokenizedMessage,1> local_58;
  FText local_48;
  FMessageLog local_38;
  
  ::FName::FName(local_res18,"SourceControl");
  this_00 = FMessageLog::FMessageLog(&local_38,local_res18);
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"DefaultSourceControlProvider",L"SourceControlDisabled",
                      L"Revision control is disabled");
  FMessageLog::Info(this_00,&local_58,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_38);
  return;
}

// IsAtLatestRevision @ 146b1bbc0

TOptional<bool> __thiscall
FDefaultSourceControlProvider::IsAtLatestRevision(FDefaultSourceControlProvider *this)

{
  longlong in_RDX;
  
  *(undefined1 *)(in_RDX + 1) = 0;
  return SUB82(in_RDX,0);
}

// IsAvailable @ 146b1bca0

bool __thiscall FDefaultSourceControlProvider::IsAvailable(FDefaultSourceControlProvider *this)

{
  return false;
}

// IsEnabled @ 146b1bdb0

bool __thiscall FDefaultSourceControlProvider::IsEnabled(FDefaultSourceControlProvider *this)

{
  return false;
}

// MakeSettingsWidget @ 146b1d3b0

TSharedRef<SWidget,1> * __thiscall
FDefaultSourceControlProvider::MakeSettingsWidget
          (FDefaultSourceControlProvider *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// QueryStateBranchConfig @ 146b221a0

bool __thiscall
FDefaultSourceControlProvider::QueryStateBranchConfig
          (FDefaultSourceControlProvider *this,FString *param_1,FString *param_2)

{
  return false;
}

// RegisterSourceControlStateChanged_Handle @ 146b22720

FDelegateHandle __thiscall
FDefaultSourceControlProvider::RegisterSourceControlStateChanged_Handle
          (FDefaultSourceControlProvider *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  *(undefined8 *)param_1 = 0;
  return (FDelegateHandle)(ulong64)param_1;
}

// RegisterStateBranches @ 146b22740

void __thiscall
FDefaultSourceControlProvider::RegisterStateBranches
          (FDefaultSourceControlProvider *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  return;
}

// Tick @ 146b283d0

void __thiscall FDefaultSourceControlProvider::Tick(FDefaultSourceControlProvider *this)

{
  return;
}

// UnregisterSourceControlStateChanged_Handle @ 146b29d80

void __thiscall
FDefaultSourceControlProvider::UnregisterSourceControlStateChanged_Handle
          (FDefaultSourceControlProvider *this,FDelegateHandle param_1)

{
  return;
}

// UsesChangelists @ 146b29ff0

bool __thiscall FDefaultSourceControlProvider::UsesChangelists(FDefaultSourceControlProvider *this)

{
  return false;
}

// UsesCheckout @ 146b2a000

bool __thiscall FDefaultSourceControlProvider::UsesCheckout(FDefaultSourceControlProvider *this)

{
  return false;
}

// UsesFileRevisions @ 146b2a180

bool __thiscall
FDefaultSourceControlProvider::UsesFileRevisions(FDefaultSourceControlProvider *this)

{
  return true;
}

// UsesLocalReadOnlyState @ 146b2a190

bool __thiscall
FDefaultSourceControlProvider::UsesLocalReadOnlyState(FDefaultSourceControlProvider *this)

{
  return true;
}

// UsesSnapshots @ 146b2a1a0

bool __thiscall FDefaultSourceControlProvider::UsesSnapshots(FDefaultSourceControlProvider *this)

{
  return false;
}

// UsesUncontrolledChangelists @ 146b2a1b0

bool __thiscall
FDefaultSourceControlProvider::UsesUncontrolledChangelists(FDefaultSourceControlProvider *this)

{
  return true;
}

