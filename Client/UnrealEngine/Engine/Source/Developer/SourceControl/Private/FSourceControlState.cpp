// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 6

// StaticStruct @ 146af5170

UScriptStruct * __cdecl FSourceControlState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSourceControlState.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_SourceControl();
    Z_Registration_Info_UScriptStruct_FSourceControlState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSourceControlState,(UObject *)pUVar1,
                         L"SourceControlState");
  }
  return Z_Registration_Info_UScriptStruct_FSourceControlState.OuterSingleton;
}

// FSourceControlState @ 146b00400

FSourceControlState * __thiscall
FSourceControlState::FSourceControlState(FSourceControlState *this,FSourceControlState *param_1)

{
  bool bVar1;
  
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.AllocatorInstance.Data = (param_1->Filename).Data.AllocatorInstance.Data;
  (param_1->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = (param_1->Filename).Data.ArrayNum;
  (this->Filename).Data.ArrayMax = (param_1->Filename).Data.ArrayMax;
  (param_1->Filename).Data.ArrayNum = 0;
  (param_1->Filename).Data.ArrayMax = 0;
  this->bIsValid = param_1->bIsValid;
  this->bIsUnknown = param_1->bIsUnknown;
  this->bCanCheckIn = param_1->bCanCheckIn;
  this->bCanCheckOut = param_1->bCanCheckOut;
  this->bIsCheckedOut = param_1->bIsCheckedOut;
  this->bIsCurrent = param_1->bIsCurrent;
  this->bIsSourceControlled = param_1->bIsSourceControlled;
  this->bIsAdded = param_1->bIsAdded;
  this->bIsDeleted = param_1->bIsDeleted;
  this->bIsIgnored = param_1->bIsIgnored;
  this->bCanEdit = param_1->bCanEdit;
  this->bCanDelete = param_1->bCanDelete;
  this->bIsModified = param_1->bIsModified;
  this->bCanAdd = param_1->bCanAdd;
  this->bIsConflicted = param_1->bIsConflicted;
  this->bCanRevert = param_1->bCanRevert;
  bVar1 = param_1->bIsCheckedOutOther;
  (this->CheckedOutOther).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bIsCheckedOutOther = bVar1;
  (this->CheckedOutOther).Data.AllocatorInstance.Data =
       (param_1->CheckedOutOther).Data.AllocatorInstance.Data;
  (param_1->CheckedOutOther).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CheckedOutOther).Data.ArrayNum = (param_1->CheckedOutOther).Data.ArrayNum;
  (this->CheckedOutOther).Data.ArrayMax = (param_1->CheckedOutOther).Data.ArrayMax;
  (param_1->CheckedOutOther).Data.ArrayNum = 0;
  (param_1->CheckedOutOther).Data.ArrayMax = 0;
  this->bIsCheckedOutInOtherBranch = param_1->bIsCheckedOutInOtherBranch;
  this->bIsModifiedInOtherBranch = param_1->bIsModifiedInOtherBranch;
  (this->PreviousUser).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousUser).Data.AllocatorInstance.Data =
       (param_1->PreviousUser).Data.AllocatorInstance.Data;
  (param_1->PreviousUser).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousUser).Data.ArrayNum = (param_1->PreviousUser).Data.ArrayNum;
  (this->PreviousUser).Data.ArrayMax = (param_1->PreviousUser).Data.ArrayMax;
  (param_1->PreviousUser).Data.ArrayNum = 0;
  (param_1->PreviousUser).Data.ArrayMax = 0;
  return this;
}

// FSourceControlState @ 146b004f0

FSourceControlState * __thiscall
FSourceControlState::FSourceControlState(FSourceControlState *this,FSourceControlState *param_1)

{
  ::FString::FString(&this->Filename,&param_1->Filename);
  this->bIsValid = param_1->bIsValid;
  this->bIsUnknown = param_1->bIsUnknown;
  this->bCanCheckIn = param_1->bCanCheckIn;
  this->bCanCheckOut = param_1->bCanCheckOut;
  this->bIsCheckedOut = param_1->bIsCheckedOut;
  this->bIsCurrent = param_1->bIsCurrent;
  this->bIsSourceControlled = param_1->bIsSourceControlled;
  this->bIsAdded = param_1->bIsAdded;
  this->bIsDeleted = param_1->bIsDeleted;
  this->bIsIgnored = param_1->bIsIgnored;
  this->bCanEdit = param_1->bCanEdit;
  this->bCanDelete = param_1->bCanDelete;
  this->bIsModified = param_1->bIsModified;
  this->bCanAdd = param_1->bCanAdd;
  this->bIsConflicted = param_1->bIsConflicted;
  this->bCanRevert = param_1->bCanRevert;
  this->bIsCheckedOutOther = param_1->bIsCheckedOutOther;
  ::FString::FString(&this->CheckedOutOther,&param_1->CheckedOutOther);
  this->bIsCheckedOutInOtherBranch = param_1->bIsCheckedOutInOtherBranch;
  this->bIsModifiedInOtherBranch = param_1->bIsModifiedInOtherBranch;
  ::FString::FString(&this->PreviousUser,&param_1->PreviousUser);
  return this;
}

// operator= @ 146b01500

FSourceControlState * __thiscall
FSourceControlState::operator=(FSourceControlState *this,FSourceControlState *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  
  if (this != param_1) {
    pFVar2 = (this->Filename).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->Filename).Data.AllocatorInstance.Data = (param_1->Filename).Data.AllocatorInstance.Data;
    (param_1->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Filename).Data.ArrayNum = (param_1->Filename).Data.ArrayNum;
    (this->Filename).Data.ArrayMax = (param_1->Filename).Data.ArrayMax;
    (param_1->Filename).Data.ArrayNum = 0;
    (param_1->Filename).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->CheckedOutOther;
  this->bIsValid = param_1->bIsValid;
  pFVar3 = &this->CheckedOutOther;
  this->bIsUnknown = param_1->bIsUnknown;
  this->bCanCheckIn = param_1->bCanCheckIn;
  this->bCanCheckOut = param_1->bCanCheckOut;
  this->bIsCheckedOut = param_1->bIsCheckedOut;
  this->bIsCurrent = param_1->bIsCurrent;
  this->bIsSourceControlled = param_1->bIsSourceControlled;
  this->bIsAdded = param_1->bIsAdded;
  this->bIsDeleted = param_1->bIsDeleted;
  this->bIsIgnored = param_1->bIsIgnored;
  this->bCanEdit = param_1->bCanEdit;
  this->bCanDelete = param_1->bCanDelete;
  this->bIsModified = param_1->bIsModified;
  this->bCanAdd = param_1->bCanAdd;
  this->bIsConflicted = param_1->bIsConflicted;
  this->bCanRevert = param_1->bCanRevert;
  this->bIsCheckedOutOther = param_1->bIsCheckedOutOther;
  if (pFVar3 != pFVar1) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CheckedOutOther).Data.ArrayNum = (param_1->CheckedOutOther).Data.ArrayNum;
    (this->CheckedOutOther).Data.ArrayMax = (param_1->CheckedOutOther).Data.ArrayMax;
    (param_1->CheckedOutOther).Data.ArrayNum = 0;
    (param_1->CheckedOutOther).Data.ArrayMax = 0;
  }
  pFVar1 = &this->PreviousUser;
  this->bIsCheckedOutInOtherBranch = param_1->bIsCheckedOutInOtherBranch;
  pFVar3 = &param_1->PreviousUser;
  this->bIsModifiedInOtherBranch = param_1->bIsModifiedInOtherBranch;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PreviousUser).Data.ArrayNum = (param_1->PreviousUser).Data.ArrayNum;
    (this->PreviousUser).Data.ArrayMax = (param_1->PreviousUser).Data.ArrayMax;
    (param_1->PreviousUser).Data.ArrayNum = 0;
    (param_1->PreviousUser).Data.ArrayMax = 0;
  }
  return this;
}

// operator= @ 146b01660

FSourceControlState * __thiscall
FSourceControlState::operator=(FSourceControlState *this,FSourceControlState *param_1)

{
  ::FString::operator=(&this->Filename,&param_1->Filename);
  this->bIsValid = param_1->bIsValid;
  this->bIsUnknown = param_1->bIsUnknown;
  this->bCanCheckIn = param_1->bCanCheckIn;
  this->bCanCheckOut = param_1->bCanCheckOut;
  this->bIsCheckedOut = param_1->bIsCheckedOut;
  this->bIsCurrent = param_1->bIsCurrent;
  this->bIsSourceControlled = param_1->bIsSourceControlled;
  this->bIsAdded = param_1->bIsAdded;
  this->bIsDeleted = param_1->bIsDeleted;
  this->bIsIgnored = param_1->bIsIgnored;
  this->bCanEdit = param_1->bCanEdit;
  this->bCanDelete = param_1->bCanDelete;
  this->bIsModified = param_1->bIsModified;
  this->bCanAdd = param_1->bCanAdd;
  this->bIsConflicted = param_1->bIsConflicted;
  this->bCanRevert = param_1->bCanRevert;
  this->bIsCheckedOutOther = param_1->bIsCheckedOutOther;
  ::FString::operator=(&this->CheckedOutOther,&param_1->CheckedOutOther);
  this->bIsCheckedOutInOtherBranch = param_1->bIsCheckedOutInOtherBranch;
  this->bIsModifiedInOtherBranch = param_1->bIsModifiedInOtherBranch;
  ::FString::operator=(&this->PreviousUser,&param_1->PreviousUser);
  return this;
}

// SetFromStatus @ 146b24a20

void __thiscall
FSourceControlState::SetFromStatus
          (FSourceControlState *this,TSharedPtr<ISourceControlState,1> *param_1)

{
  int *piVar1;
  void *_Src;
  code *pcVar2;
  ForAnyElementType _Src_00;
  int iVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  if (param_1->Object == (ISourceControlState *)0x0) {
    this->bIsValid = false;
    return;
  }
  this->bIsValid = true;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0x110))();
  this->bIsUnknown = bVar4;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0xd8))();
  this->bIsSourceControlled = bVar4;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0x78))();
  this->bCanCheckIn = bVar4;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0x80))();
  this->bCanCheckOut = bVar4;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0x88))();
  this->bIsCheckedOut = bVar4;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0xd0))();
  this->bIsCurrent = bVar4;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0xe8))();
  this->bIsAdded = bVar4;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0xf0))();
  this->bIsDeleted = bVar4;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0xf8))();
  this->bIsIgnored = bVar4;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0x100))();
  this->bCanEdit = bVar4;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0x108))();
  this->bCanDelete = bVar4;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0x120))();
  this->bCanAdd = bVar4;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0x128))();
  this->bIsConflicted = bVar4;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0x130))();
  this->bCanRevert = bVar4;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0x118))();
  this->bIsModified = bVar4;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0x90))(param_1->Object,0);
  this->bIsCheckedOutOther = bVar4;
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar10 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0x98))(param_1->Object,&local_58);
  this->bIsCheckedOutInOtherBranch = bVar4;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  bVar4 = (bool)(**(code **)(*(longlong *)param_1->Object + 0xa0))(param_1->Object,&local_48);
  this->bIsModifiedInOtherBranch = bVar4;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar6 = (FString *)(**(code **)(*(longlong *)param_1->Object + 0x68))();
  ::FString::operator=(&this->Filename,pFVar6);
  if (this->bIsCheckedOutOther != false) {
    if ((param_1->Object == (ISourceControlState *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*(longlong *)param_1->Object + 0x90))(param_1->Object,&this->CheckedOutOther);
  }
  if ((param_1->Object == (ISourceControlState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = (**(code **)(*(longlong *)param_1->Object + 8))();
  if (0 < iVar5) {
    do {
      if ((param_1->Object == (ISourceControlState *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar7 = (longlong *)
               (**(code **)(*(longlong *)param_1->Object + 0x10))(param_1->Object,local_38,iVar10);
      plVar7 = (longlong *)*plVar7;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      if (plVar7 != (longlong *)0x0) {
        puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x40))(plVar7);
        local_68.Data = (FScriptContainerElement *)0x0;
        local_60 = *(int *)(puVar8 + 1);
        lVar9 = (longlong)local_60;
        _Src = (void *)*puVar8;
        if (local_60 == 0) {
          local_5c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_60,0,&local_68,local_60,&local_5c);
          memcpy(local_68.Data,_Src,lVar9 * 2);
        }
        iVar3 = local_60;
        _Src_00.Data = local_68.Data;
        if (1 < local_60) {
          pFVar6 = &this->PreviousUser;
          if (pFVar6 != (FString *)&local_68) {
            iVar10 = (this->PreviousUser).Data.ArrayMax;
            piVar1 = &(this->PreviousUser).Data.ArrayMax;
            (this->PreviousUser).Data.ArrayNum = local_60;
            if ((local_60 == 0) && (iVar10 == 0)) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_60,iVar10,(ForAnyElementType *)pFVar6,local_60,piVar1);
              if (iVar3 != 0) {
                memcpy((pFVar6->Data).AllocatorInstance.Data,_Src_00.Data,(longlong)iVar3 * 2);
              }
            }
          }
          if (local_68.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_68.Data);
          return;
        }
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar5);
  }
  return;
}

