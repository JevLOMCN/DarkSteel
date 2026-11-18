// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 19

// ~ISourceControlProvider @ 146b01320

void __thiscall ISourceControlProvider::~ISourceControlProvider(ISourceControlProvider *this)

{
  *this = (ISourceControlProvider)&___7ISourceControlProvider__6B_;
  return;
}

// Create @ 146b10670

TUniquePtr<ISourceControlProvider,TDefaultDelete<ISourceControlProvider>_> __thiscall
ISourceControlProvider::Create
          (ISourceControlProvider *this,TStringView<wchar_t> *param_1,
          FSourceControlInitSettings *param_2)

{
  param_1->DataPtr = (wchar_t *)0x0;
  return (TUniquePtr<ISourceControlProvider,TDefaultDelete<ISourceControlProvider>_>)
         (ISourceControlProvider *)param_1;
}

// Execute @ 146b14710

Type __thiscall
ISourceControlProvider::Execute
          (ISourceControlProvider *this,TSharedRef<ISourceControlOperation,1> *param_1,
          TArray<UPackage_*,TSizedDefaultAllocator<32>_> *param_2,Type param_3,
          TDelegate<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,ECommandResult::Type),FDefaultDelegateUserPolicy>
          *param_4)

{
  Type TVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  
  USourceControlHelpers::PackageFilenames(&local_28,param_2);
  local_18 = 0;
  uStack_10 = 0;
  TVar1 = (**(code **)((longlong)*this + 0xf0))(this,param_1,&local_18,&local_28,param_3,param_4);
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return TVar1;
}

// Execute @ 146b147b0

Type __thiscall
ISourceControlProvider::Execute
          (ISourceControlProvider *this,TSharedRef<ISourceControlOperation,1> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,Type param_3,
          TDelegate<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,ECommandResult::Type),FDefaultDelegateUserPolicy>
          *param_4)

{
  Type TVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  TVar1 = (**(code **)((longlong)*this + 0xf0))(0,param_1,&local_18,param_2,param_3,param_4);
  return TVar1;
}

// Execute @ 146b147f0

Type __thiscall
ISourceControlProvider::Execute
          (ISourceControlProvider *this,TSharedRef<ISourceControlOperation,1> *param_1,
          FString *param_2,Type param_3,
          TDelegate<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,ECommandResult::Type),FDefaultDelegateUserPolicy>
          *param_4)

{
  int iVar1;
  Type TVar2;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  if (1 < (param_2->Data).ArrayNum) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_18,(int *)((longlong)&local_10 + 4));
    local_10 = CONCAT44(local_10._4_4_,iVar1 + 1);
    ::FString::FString((FString *)(local_18.Data + (longlong)iVar1 * 0x10),param_2);
  }
  TVar2 = (**(code **)((longlong)*this + 0xe8))(this,param_1,&local_18,param_3,param_4);
  DestructItems<FString,int>((FString *)local_18.Data,(int)local_10);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return TVar2;
}

// Execute @ 146b148b0

Type __thiscall
ISourceControlProvider::Execute
          (ISourceControlProvider *this,TSharedRef<ISourceControlOperation,1> *param_1,
          UPackage *param_2,Type param_3,
          TDelegate<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,ECommandResult::Type),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  Type TVar2;
  FString *pFVar3;
  FString local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0xd0);
  pFVar3 = USourceControlHelpers::PackageFilename(&local_18,param_2);
  TVar2 = (*pcVar1)(this,param_1,pFVar3,param_3,param_4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return TVar2;
}

// Execute @ 146b14930

Type __thiscall
ISourceControlProvider::Execute
          (ISourceControlProvider *this,TSharedRef<ISourceControlOperation,1> *param_1,
          TSharedPtr<ISourceControlChangelist,1> *param_2,Type param_3,
          TDelegate<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,ECommandResult::Type),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  Type TVar2;
  FString *local_28;
  undefined8 local_20;
  ISourceControlChangelist *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pcVar1 = *(code **)((longlong)*this + 0xf0);
  local_28 = (FString *)0x0;
  local_20 = 0;
  local_18 = param_2->Object;
  local_10 = (param_2->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  TVar2 = (*pcVar1)(this,param_1,&local_18,&local_28,param_3,param_4);
  DestructItems<FString,int>(local_28,(int)local_20);
  if (local_28 != (FString *)0x0) {
    FMemory::Free(local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return TVar2;
}

// Execute @ 146b149d0

Type __thiscall
ISourceControlProvider::Execute
          (ISourceControlProvider *this,TSharedRef<ISourceControlOperation,1> *param_1,Type param_2,
          TDelegate<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,ECommandResult::Type),FDefaultDelegateUserPolicy>
          *param_3)

{
  Type TVar1;
  FString *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_28 = (FString *)0x0;
  local_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  TVar1 = (**(code **)((longlong)*this + 0xf0))(0,param_1,&local_18,&local_28,param_2,param_3);
  DestructItems<FString,int>(local_28,(int)local_20);
  if (local_28 != (FString *)0x0) {
    FMemory::Free(local_28);
  }
  return TVar1;
}

// GetLabel @ 146b183c0

TSharedPtr<ISourceControlLabel,1> * __thiscall
ISourceControlProvider::GetLabel
          (ISourceControlProvider *this,TSharedPtr<ISourceControlLabel,1> *__return_storage_ptr__,
          FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<ISourceControlLabel,1> *local_18;
  int local_10;
  
  (**(code **)((longlong)*this + 0x118))(this,&local_18);
  if (local_10 < 1) {
    __return_storage_ptr__->Object = (ISourceControlLabel *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = local_18->Object;
    pTVar1 = (local_18->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  DestructItems<TSharedRef<ISourceControlLabel,1>,int>(local_18,local_10);
  if (local_18 != (TSharedRef<ISourceControlLabel,1> *)0x0) {
    FMemory::Free(local_18);
  }
  return __return_storage_ptr__;
}

// GetState @ 146b1a720

TSharedPtr<ISourceControlChangelistState,1> * __thiscall
ISourceControlProvider::GetState
          (ISourceControlProvider *this,
          TSharedPtr<ISourceControlChangelistState,1> *__return_storage_ptr__,
          TSharedRef<ISourceControlChangelist,1> *param_1,Type param_2)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  ISourceControlChangelistState *pIVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<ISourceControlChangelistState,1> *pTVar6;
  TSharedRef<ISourceControlChangelistState,1> *local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  TSharedRef<ISourceControlChangelist,1> local_28;
  
  local_48 = (TSharedRef<ISourceControlChangelistState,1> *)0x0;
  local_40 = 0;
  pcVar1 = *(code **)((longlong)*this + 0x80);
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_38,1,&local_2c);
  ConstructItems<TSharedRef<ISourceControlChangelist,1>,TSharedRef<ISourceControlChangelist,1>,int>
            (local_38.Data,&local_28,1);
  iVar5 = (*pcVar1)(this,&local_38,&local_48,param_2);
  DestructItems<TSharedRef<ISourceControlChangelist,1>,int>
            ((TSharedRef<ISourceControlChangelist,1> *)local_38.Data,local_30);
  if ((TSharedRef<ISourceControlChangelist,1> *)local_38.Data !=
      (TSharedRef<ISourceControlChangelist,1> *)0x0) {
    FMemory::Free(local_38.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if ((iVar5 == 1) && ((int)local_40 != 0)) {
    if ((int)local_40 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedPtr<ISourceControlChangelistState,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    pTVar2 = (local_48->SharedReferenceCount).ReferenceController;
    pIVar3 = local_48->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pIVar3;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    __return_storage_ptr__->Object = (ISourceControlChangelistState *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  DestructItems<TSharedRef<ISourceControlChangelistState,1>,int>(local_48,(int)local_40);
  if (local_48 != (TSharedRef<ISourceControlChangelistState,1> *)0x0) {
    FMemory::Free(local_48);
  }
  return __return_storage_ptr__;
}

// GetState @ 146b1a8a0

TSharedPtr<ISourceControlState,1> * __thiscall
ISourceControlProvider::GetState
          (ISourceControlProvider *this,TSharedPtr<ISourceControlState,1> *__return_storage_ptr__,
          FString *param_1,Type param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  ISourceControlState *pIVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<ISourceControlState,1> *pTVar6;
  longlong lVar7;
  TSharedRef<ISourceControlState,1> *local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FString local_38;
  
  local_38.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar7 = (longlong)local_38.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_58 = (TSharedRef<ISourceControlState,1> *)0x0;
  local_50 = 0;
  pcVar1 = *(code **)((longlong)*this + 0xa0);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_48,1,&local_3c);
  ConstructItems<FString,FString,int>(local_48.Data,&local_38,1);
  iVar5 = (*pcVar1)(this,&local_48,&local_58,param_2);
  DestructItems<FString,int>((FString *)local_48.Data,local_40);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((iVar5 == 1) && ((int)local_50 != 0)) {
    if ((int)local_50 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedPtr<ISourceControlState,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    pTVar2 = (local_58->SharedReferenceCount).ReferenceController;
    pIVar3 = local_58->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pIVar3;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pIVar3;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  else {
    __return_storage_ptr__->Object = (ISourceControlState *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  DestructItems<TSharedRef<ISourceControlState,1>,int>(local_58,(int)local_50);
  if (local_58 != (TSharedRef<ISourceControlState,1> *)0x0) {
    FMemory::Free(local_58);
  }
  return __return_storage_ptr__;
}

// GetState @ 146b1aa80

TSharedPtr<ISourceControlState,1> * __thiscall
ISourceControlProvider::GetState
          (ISourceControlProvider *this,TSharedPtr<ISourceControlState,1> *__return_storage_ptr__,
          UPackage *param_1,Type param_2)

{
  code *pcVar1;
  FString *pFVar2;
  FString local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0x90);
  pFVar2 = USourceControlHelpers::PackageFilename(&local_18,param_1);
  (*pcVar1)(this,__return_storage_ptr__,pFVar2,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetState @ 146b1aaf0

Type __thiscall
ISourceControlProvider::GetState
          (ISourceControlProvider *this,TArray<UPackage_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSharedRef<ISourceControlState,1>,TSizedDefaultAllocator<32>_> *param_2,
          Type param_3)

{
  Type TVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  USourceControlHelpers::PackageFilenames(&local_18,param_1);
  TVar1 = (**(code **)((longlong)*this + 0xa0))(this,&local_18,param_2,param_3);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return TVar1;
}

// Init @ 146b1b860

FInitResult * __thiscall
ISourceControlProvider::Init
          (ISourceControlProvider *this,FInitResult *__return_storage_ptr__,EInitFlags param_1)

{
  bool bVar1;
  
  (**(code **)((longlong)*this + 0x10))(this,param_1 & AttemptConnection);
  __return_storage_ptr__->bIsAvailable = false;
  *(undefined8 *)&__return_storage_ptr__->ConnectionSettings = 0;
  *(undefined8 *)&(__return_storage_ptr__->ConnectionSettings).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->ConnectionSettings).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ConnectionSettings).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ConnectionSettings).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->ConnectionSettings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->ConnectionSettings).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->ConnectionSettings).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ConnectionSettings).field_0x48 = 0;
  FText::FText(&(__return_storage_ptr__->Errors).ErrorMessage);
  (__return_storage_ptr__->Errors).AdditionalErrors.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Errors).AdditionalErrors.ArrayNum = 0;
  (__return_storage_ptr__->Errors).AdditionalErrors.ArrayMax = 0;
  bVar1 = (bool)(**(code **)((longlong)*this + 0x40))(this);
  __return_storage_ptr__->bIsAvailable = bVar1;
  return __return_storage_ptr__;
}

// Login @ 146b1d260

Type __thiscall
ISourceControlProvider::Login
          (ISourceControlProvider *this,FString *param_1,Type param_2,
          TDelegate<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,ECommandResult::Type),FDefaultDelegateUserPolicy>
          *param_3)

{
  ISourceControlProvider IVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  FConnect *pFVar5;
  TRawPtrProxy<FConnect> local_res8;
  TSharedRef<FConnect,1> local_38;
  FConnect *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  pFVar5 = ::operator_new(0x78);
  if (pFVar5 != (FConnect *)0x0) {
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    (pFVar5->OutErrorText).TextData.Reference = (ITextData *)0x0;
    *(undefined8 *)&(pFVar5->OutErrorText).Flags = 0;
    pFVar5->_padding_ = (longlong)&___7FConnect__6B_;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    (pFVar5->Password).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Password).Data.ArrayNum = 0;
    (pFVar5->Password).Data.ArrayMax = 0;
    FText::FText(&pFVar5->OutErrorText);
    if ((((pFVar5->_padding_ != 0) && (pFVar5->_padding_ != 0)) &&
        (0 < *(int *)(pFVar5->_padding_ + 8))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
  }
  local_res8.Object = pFVar5;
  TSharedRef<FConnect,1>::TSharedRef<FConnect,1><FConnect>(&local_38,&local_res8);
  ::FString::operator=(&(local_38.Object)->Password,param_1);
  IVar1 = *this;
  local_28 = local_38.Object;
  pTStack_20 = local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TVar4 = (**(code **)((longlong)IVar1 + 0xe0))(this,&local_28,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return TVar4;
}

// RegisterStateBranches @ 146b22750

void __thiscall
ISourceControlProvider::RegisterStateBranches
          (ISourceControlProvider *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  if (0 < param_2->ArrayNum) {
                    /* WARNING: Could not recover jumptable at 0x000146b2275d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this + 0x60))(this,param_1,(param_2->AllocatorInstance).Data);
    return;
  }
  return;
}

// SwitchWorkspace @ 146b27ae0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

Type __thiscall
ISourceControlProvider::SwitchWorkspace
          (ISourceControlProvider *this,TStringView<wchar_t> *param_1,
          FSourceControlResultInfo *param_2,FString *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  int iVar5;
  FName *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_88;
  FText local_78;
  FString local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FFormatArgumentValue local_28;
  
  local_88.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Pairs.ArrayNum = 0;
  local_88.Pairs.ArrayMax = 0;
  pFVar6 = (FName *)(**(code **)((longlong)*this + 0x20))();
  pFVar7 = FText::FromName(&local_58,pFVar6);
  local_28.Type = Text;
  FText::FText((FText *)&local_28.TextValue,pFVar7);
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
  }
  ::FString::FString(&local_68,L"ProviderName");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_88,&local_68,&local_28);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"ISourceControlProvider",L"UnsupportedOperationSwitchWorkspace",
                      L"SwitchWorkspace is not supported by revision control provider \'{ProviderName}\'"
                     );
  pFVar8 = FTextFormat::FTextFormat(&local_38,pFVar7,Default);
  FText::Format(&local_78,pFVar8,&local_88);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  pFVar7 = (FText *)(param_2->ErrorMessages).AllocatorInstance.Data;
  if ((pFVar7 <= &local_78) && (&local_78 < pFVar7 + (param_2->ErrorMessages).ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
  }
  iVar5 = (param_2->ErrorMessages).ArrayNum;
  piVar1 = &(param_2->ErrorMessages).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(param_2->ErrorMessages).AllocatorInstance,piVar1);
  }
  (param_2->ErrorMessages).ArrayNum = iVar5 + 1;
  pFVar9 = (param_2->ErrorMessages).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  *(ITextData **)pFVar9 = local_78.TextData.Reference;
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 8))
              (local_78.TextData.Reference,local_res8);
  }
  *(uint *)(pFVar9 + 8) = local_78.Flags;
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_88.Pairs.AllocatorInstance.Data,
             local_88.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_88.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_88.Pairs.AllocatorInstance.Data);
  }
  return Failed;
}

// TryToDownloadFileFromBackgroundThread @ 146b29830

bool __thiscall
ISourceControlProvider::TryToDownloadFileFromBackgroundThread
          (ISourceControlProvider *this,TSharedRef<FDownloadFile,1> *param_1,FString *param_2)

{
  undefined1 uVar1;
  int iVar2;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_18,(int *)((longlong)&local_10 + 4));
  local_10 = CONCAT44(local_10._4_4_,iVar2 + 1);
  ::FString::FString((FString *)(local_18.Data + (longlong)iVar2 * 0x10),param_2);
  uVar1 = (**(code **)((longlong)*this + 0x128))(this,param_1,&local_18);
  DestructItems<FString,int>((FString *)local_18.Data,(int)local_10);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return (bool)uVar1;
}

// TryToDownloadFileFromBackgroundThread @ 146b298e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
ISourceControlProvider::TryToDownloadFileFromBackgroundThread
          (ISourceControlProvider *this,TSharedRef<FDownloadFile,1> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FFormatArgumentValue local_28;
  
  local_88.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Pairs.ArrayNum = 0;
  local_88.Pairs.ArrayMax = 0;
  pFVar4 = (FName *)(**(code **)((longlong)*this + 0x20))();
  pFVar5 = FText::FromName(&local_58,pFVar4);
  local_28.Type = Text;
  FText::FText((FText *)&local_28.TextValue,pFVar5);
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  ::FString::FString(&local_78,L"ProviderName");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_88,&local_78,&local_28);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"ISourceControlProvider",
                      L"UnsupportedOperationTryToDownloadFileFromBackgroundThread",
                      L"TryToDownloadFileFromBackgroundThread is not supported by revision control provider \'{ProviderName}\'"
                     );
  pFVar6 = FTextFormat::FTextFormat(&local_38,pFVar5,Default);
  FText::Format(&local_68,pFVar6,&local_88);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  (**(code **)(param_1->Object->_padding_ + 0x28))(param_1->Object,&local_68);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_88.Pairs.AllocatorInstance.Data,
             local_88.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_88.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_88.Pairs.AllocatorInstance.Data);
  }
  return false;
}

