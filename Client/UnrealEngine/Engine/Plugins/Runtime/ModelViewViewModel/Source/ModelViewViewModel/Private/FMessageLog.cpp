// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 7

// FMessageLog @ 14a73f4a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FMessageLog * __thiscall UE::MVVM::FMessageLog::FMessageLog(FMessageLog *this,UUserWidget *param_1)

{
  UUserWidget *local_res8;
  
  ::FMessageLog::FMessageLog((FMessageLog *)this,&LogName);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  (this->UserWidget).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->UserWidget).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// AddBindingToken @ 14a741ad0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UE::MVVM::FMessageLog::AddBindingToken
          (FMessageLog *this,TSharedRef<FTokenizedMessage,1> *param_1,UMVVMViewClass *param_2,
          FMVVMViewClass_Binding *param_3,FMVVMViewClass_BindingKey param_4)

{
  FTokenizedMessage *this_00;
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  TSharedRef<FTextToken,1> *pTVar4;
  TSharedRef<IMessageToken,1> local_88;
  TSharedPtr<FCulture,1> local_78;
  TSharedRef<FTokenizedMessage,1> local_68;
  TSharedRef<FTextToken,1> local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  this_00 = param_1->Object;
  local_78.Object = (FCulture *)0x0;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar1 = FText::AsNumber(&local_28,param_4.Index,(FNumberFormattingOptions *)0x0,&local_78);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"FMVVMMessageLog",L"BindingTokenToken",L"binding: {0}");
  pFVar3 = FTextFormat::FTextFormat(&local_18,pFVar2,Default);
  pFVar1 = FText::Format<FText>(&local_48,pFVar3,pFVar1);
  pTVar4 = FTextToken::Create(&local_58,pFVar1,true);
  local_88.Object = (IMessageToken *)pTVar4->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FTokenizedMessage::AddToken(this_00,&local_68,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Error @ 14a747340

TSharedRef<FTokenizedMessage,1> * __thiscall
UE::MVVM::FMessageLog::Error
          (FMessageLog *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,FText *param_1)

{
  Message(this,__return_storage_ptr__,Error,param_1);
  return __return_storage_ptr__;
}

// Info @ 14a755900

TSharedRef<FTokenizedMessage,1> * __thiscall
UE::MVVM::FMessageLog::Info
          (FMessageLog *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,FText *param_1)

{
  Message(this,__return_storage_ptr__,Info,param_1);
  return __return_storage_ptr__;
}

// Message @ 14a75b700

TSharedRef<FTokenizedMessage,1> * __thiscall
UE::MVVM::FMessageLog::Message
          (FMessageLog *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,Type param_1,
          FText *param_2)

{
  FTokenizedMessage *pFVar1;
  FText *pFVar2;
  TSharedRef<FTextToken,1> *pTVar3;
  UObject *pUVar4;
  FName local_res8;
  TSharedRef<IMessageToken,1> local_48;
  TSharedRef<FTextToken,1> local_38;
  TSharedRef<FTextToken,1> local_28;
  FText local_18;
  
  pFVar2 = FText::FText((FText *)&local_48);
  FTokenizedMessage::Create(__return_storage_ptr__,param_1,pFVar2);
  if (local_48.Object != (IMessageToken *)0x0) {
    (**(code **)((local_48.Object)->_padding_ + 0x10))();
  }
  pFVar1 = __return_storage_ptr__->Object;
  pTVar3 = FTextToken::Create(&local_28,param_2,true);
  local_48.Object = (IMessageToken *)pTVar3->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FTokenizedMessage::AddToken(pFVar1,(TSharedRef<FTokenizedMessage,1> *)&local_38,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pUVar4 = FWeakObjectPtr::Get(&(this->UserWidget).WeakPtr);
  if (pUVar4 != (UObject *)0x0) {
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
    local_res8.Number = *(uint *)&pUVar4->field_0x1c;
    pFVar1 = __return_storage_ptr__->Object;
    pFVar2 = FText::FromName(&local_18,&local_res8);
    pTVar3 = FTextToken::Create(&local_38,pFVar2,true);
    local_48.Object = (IMessageToken *)pTVar3->Object;
    local_48.SharedReferenceCount.ReferenceController =
         (pTVar3->SharedReferenceCount).ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(pFVar1,(TSharedRef<FTokenizedMessage,1> *)&local_28,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  ::FMessageLog::AddMessage((FMessageLog *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// PerformanceWarning @ 14a75c050

TSharedRef<FTokenizedMessage,1> * __thiscall
UE::MVVM::FMessageLog::PerformanceWarning
          (FMessageLog *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,FText *param_1)

{
  Message(this,__return_storage_ptr__,PerformanceWarning,param_1);
  return __return_storage_ptr__;
}

// Warning @ 14a7682c0

TSharedRef<FTokenizedMessage,1> * __thiscall
UE::MVVM::FMessageLog::Warning
          (FMessageLog *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,FText *param_1)

{
  Message(this,__return_storage_ptr__,Warning,param_1);
  return __return_storage_ptr__;
}

