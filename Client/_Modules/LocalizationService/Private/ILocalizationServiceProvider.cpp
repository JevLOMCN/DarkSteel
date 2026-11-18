// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizationService
// Functions: 5

// ~ILocalizationServiceProvider @ 146b2e310

void __thiscall
ILocalizationServiceProvider::~ILocalizationServiceProvider(ILocalizationServiceProvider *this)

{
  *this = (ILocalizationServiceProvider)&___7ILocalizationServiceProvider__6B_;
  return;
}

// Execute @ 146b314f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

Type __thiscall
ILocalizationServiceProvider::Execute
          (ILocalizationServiceProvider *this,TSharedRef<ILocalizationServiceOperation,1> *param_1,
          FLocalizationServiceTranslationIdentifier *param_2,Type param_3,
          TDelegate<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
          *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  int iVar3;
  Type TVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x840,&local_18,(int *)((longlong)&local_10 + 4));
  uVar2 = *(undefined8 *)&(param_2->LocalizationTargetGuid).C;
  pFVar5 = local_18.Data + (longlong)iVar3 * 0x40;
  local_10 = CONCAT44(local_10._4_4_,iVar3 + 1);
  *(undefined8 *)&pFVar5->field_0x0 = *(undefined8 *)&param_2->LocalizationTargetGuid;
  *(undefined8 *)(pFVar5 + 8) = uVar2;
  *(FCulture **)(pFVar5 + 0x10) = (param_2->Culture).Object;
  pTVar1 = (param_2->Culture).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar5 + 0x18) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString((FString *)(pFVar5 + 0x20),&param_2->Namespace);
  ::FString::FString((FString *)(pFVar5 + 0x30),&param_2->Source);
  TVar4 = (**(code **)((longlong)*this + 0x68))(this,param_1,&local_18,param_3,param_4);
  DestructItems<FLocalizationServiceTranslationIdentifier,int>
            ((FLocalizationServiceTranslationIdentifier *)local_18.Data,(int)local_10);
  if ((FLocalizationServiceTranslationIdentifier *)local_18.Data !=
      (FLocalizationServiceTranslationIdentifier *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return TVar4;
}

// Execute @ 146b315f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

Type __thiscall
ILocalizationServiceProvider::Execute
          (ILocalizationServiceProvider *this,TSharedRef<ILocalizationServiceOperation,1> *param_1,
          Type param_2,
          TDelegate<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
          *param_3)

{
  Type TVar1;
  FLocalizationServiceTranslationIdentifier *local_18;
  undefined8 local_10;
  
  local_18 = (FLocalizationServiceTranslationIdentifier *)0x0;
  local_10 = 0;
  TVar1 = (**(code **)((longlong)*this + 0x68))(this,param_1,&local_18,param_2,param_3);
  DestructItems<FLocalizationServiceTranslationIdentifier,int>(local_18,(int)local_10);
  if (local_18 != (FLocalizationServiceTranslationIdentifier *)0x0) {
    FMemory::Free(local_18);
  }
  return TVar1;
}

// GetState @ 146b32080

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedPtr<ILocalizationServiceState,1> * __thiscall
ILocalizationServiceProvider::GetState
          (ILocalizationServiceProvider *this,
          TSharedPtr<ILocalizationServiceState,1> *__return_storage_ptr__,
          FLocalizationServiceTranslationIdentifier *param_1,Type param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  ILocalizationServiceState *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<ILocalizationServiceState,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType local_38;
  undefined8 local_30;
  TSharedRef<ILocalizationServiceState,1> *local_28;
  undefined8 local_20;
  
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_28 = (TSharedRef<ILocalizationServiceState,1> *)0x0;
  local_20 = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x840,&local_38,(int *)((longlong)&local_30 + 4));
  uVar4 = *(undefined8 *)&(param_1->LocalizationTargetGuid).C;
  pFVar8 = local_38.Data + (longlong)iVar6 * 0x40;
  local_30 = CONCAT44(local_30._4_4_,iVar6 + 1);
  *(undefined8 *)&pFVar8->field_0x0 = *(undefined8 *)&param_1->LocalizationTargetGuid;
  *(undefined8 *)(pFVar8 + 8) = uVar4;
  *(FCulture **)(pFVar8 + 0x10) = (param_1->Culture).Object;
  pTVar1 = (param_1->Culture).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 0x18) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString((FString *)(pFVar8 + 0x20),&param_1->Namespace);
  ::FString::FString((FString *)(pFVar8 + 0x30),&param_1->Source);
  iVar6 = (**(code **)((longlong)*this + 0x50))(this,&local_38,&local_28,param_2);
  if (iVar6 == 1) {
    if ((int)local_20 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<ILocalizationServiceState,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pTVar1 = (local_28->SharedReferenceCount).ReferenceController;
    pIVar2 = local_28->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pIVar2;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pIVar2;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    }
  }
  else {
    __return_storage_ptr__->Object = (ILocalizationServiceState *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  DestructItems<TSharedRef<ILocalizationServiceState,1>,int>(local_28,(int)local_20);
  if (local_28 != (TSharedRef<ILocalizationServiceState,1> *)0x0) {
    FMemory::Free(local_28);
  }
  DestructItems<FLocalizationServiceTranslationIdentifier,int>
            ((FLocalizationServiceTranslationIdentifier *)local_38.Data,(int)local_30);
  if ((FLocalizationServiceTranslationIdentifier *)local_38.Data !=
      (FLocalizationServiceTranslationIdentifier *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// Login @ 146b32e20

Type __thiscall
ILocalizationServiceProvider::Login
          (ILocalizationServiceProvider *this,FString *param_1,Type param_2,
          TDelegate<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  FConnectToProvider *pFVar4;
  TRawPtrProxy<FConnectToProvider> local_res8;
  TSharedRef<FConnectToProvider,1> local_78;
  FConnectToProvider *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FString local_38;
  FString local_28;
  
  pFVar4 = ::operator_new(0x38);
  if (pFVar4 == (FConnectToProvider *)0x0) {
    pFVar4 = (FConnectToProvider *)0x0;
  }
  else {
    (pFVar4->OutErrorText).TextData.Reference = (ITextData *)0x0;
    *(undefined8 *)&(pFVar4->OutErrorText).Flags = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = (longlong)&___7FConnectToProvider__6B_;
    (pFVar4->Password).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->Password).Data.ArrayNum = 0;
    (pFVar4->Password).Data.ArrayMax = 0;
    FText::FText(&pFVar4->OutErrorText);
    if (((pFVar4->_padding_ != 0) && (pFVar4->_padding_ != 0)) &&
       (0 < *(int *)(pFVar4->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3 = (*pcVar1)();
        return TVar3;
      }
    }
  }
  local_res8.Object = pFVar4;
  TSharedRef<FConnectToProvider,1>::TSharedRef<FConnectToProvider,1><FConnectToProvider>
            (&local_78,&local_res8);
  ::FString::operator=(&(local_78.Object)->Password,param_1);
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  pcVar1 = *(code **)((longlong)*this + 0x58);
  ::FString::FString(&local_38,"");
  ::FString::FString(&local_28,"");
  local_68 = local_78.Object;
  pTStack_60 = local_78.SharedReferenceCount.ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TVar3 = (*pcVar1)(this,&local_68,&local_58,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return TVar3;
}

