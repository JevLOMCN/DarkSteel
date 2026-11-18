// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// operator== @ 14a0c83a0

bool __thiscall
FRigVMFunctionArgument::operator==(FRigVMFunctionArgument *this,FRigVMFunctionArgument *param_1)

{
  int iVar1;
  
  iVar1 = wcscmp((wchar_t *)this->_padding_,(wchar_t *)param_1->_padding_);
  if (iVar1 == 0) {
    iVar1 = wcscmp((wchar_t *)this->_padding_,(wchar_t *)param_1->_padding_);
    if (iVar1 == 0) {
      return (char)this->_padding_ == (char)param_1->_padding_;
    }
  }
  return false;
}

// Serialize_NoLock @ 14a10f370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FRigVMFunctionArgument::Serialize_NoLock(FRigVMFunctionArgument *this,FArchive *param_1)

{
  TSharedPtr<FString,1> *pTVar1;
  undefined4 uVar2;
  FString *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  wchar_t *pwVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  wchar_t *pwVar11;
  TReferenceControllerBase<1> *pTVar12;
  uint local_res10 [2];
  uint local_res18 [2];
  TReferenceControllerBase<1> *local_res20;
  TReferenceControllerBase<1> *local_78;
  FSharedReferencer<1> FStack_70;
  TReferenceControllerBase<1> *local_68;
  FSharedReferencer<1> FStack_60;
  FString local_58;
  FString local_48;
  
  if ((param_1->field_0x28 & 1) == 0) {
    ::FString::FString(&local_48,(wchar_t *)this->_padding_);
    ::FString::FString(&local_58,(wchar_t *)this->_padding_);
    ::operator<<(param_1,&local_48);
    ::operator<<(param_1,&local_58);
    plVar4 = *(longlong **)&param_1->field_0x8;
    local_res18[0] = (uint)(byte)this->_padding_;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    return;
  }
  FStack_70.ReferenceController = ::operator_new(0x20);
  pwVar11 = L"";
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
  if (FStack_70.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_78 = ___xmm_00000000000000000000000000000010;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_70.ReferenceController = _UNK_150651568;
    pTVar9 = pTVar10;
  }
  else {
    local_res20 = FStack_70.ReferenceController + 1;
    (FStack_70.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FStack_70.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_70.ReferenceController)->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VFString___00_SharedPointerInternals__6B_;
    FStack_70.ReferenceController[1]._padding_ = 0;
    FStack_70.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_70.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    if ((local_res20 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    LOCK();
    (FStack_70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar8 = local_res20;
    pTVar9 = FStack_70.ReferenceController;
    local_78 = local_res20;
  }
  if (&this->NameString != (TSharedPtr<FString,1> *)&local_78) {
    (this->NameString).Object = (FString *)pTVar8;
    local_78 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NameString).SharedReferenceCount,&FStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  FStack_60.ReferenceController = ::operator_new(0x20);
  if (FStack_60.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_68 = ___xmm_00000000000000000000000000000010;
    FStack_60.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_60.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12 = FStack_60.ReferenceController + 1;
    (FStack_60.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_60.ReferenceController)->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VFString___00_SharedPointerInternals__6B_;
    FStack_60.ReferenceController[1]._padding_ = 0;
    FStack_60.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_60.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    LOCK();
    (FStack_60.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_60.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar10 = FStack_60.ReferenceController;
    local_68 = pTVar12;
  }
  pTVar1 = &this->TypeString;
  if (pTVar1 != (TSharedPtr<FString,1> *)&local_68) {
    pTVar1->Object = (FString *)pTVar12;
    local_68 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TypeString).SharedReferenceCount,&FStack_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  ::operator<<(param_1,(this->NameString).Object);
  ::operator<<(param_1,pTVar1->Object);
  if (((this->NameString).Object == (FString *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->NameString).Object;
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  this->_padding_ = (longlong)pwVar7;
  if ((pTVar1->Object == (FString *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pTVar1->Object->Data).ArrayNum != 0) {
    pwVar11 = (wchar_t *)(pTVar1->Object->Data).AllocatorInstance.Data;
  }
  this->_padding_ = (longlong)pwVar11;
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = 0;
  if ((undefined4 *)plVar4[1] < (undefined4 *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) != 0) {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      *(undefined1 *)&this->_padding_ = (undefined1)local_res10[0];
      return;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    *(undefined1 *)&this->_padding_ = (undefined1)local_res10[0];
    return;
  }
  uVar2 = *(undefined4 *)*plVar4;
  *plVar4 = *plVar4 + 4;
  local_res10[0]._0_1_ = (undefined1)uVar2;
  *(undefined1 *)&this->_padding_ = (undefined1)local_res10[0];
  return;
}

