// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 8

// AddFieldValueChangedDelegate @ 14a741db0

FDelegateHandle __thiscall
UE::MVVM::FMVVMFieldNotificationDelegates::AddFieldValueChangedDelegate
          (FMVVMFieldNotificationDelegates *this,UObject *param_1,FFieldId *param_2,
          TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  ForAnyElementType *this_01;
  bool bVar5;
  int iVar6;
  FDelegateHandle FVar7;
  ForElementType<unsigned_int> FVar8;
  int iVar9;
  undefined1 in_stack_00000028;
  undefined7 in_stack_00000029;
  TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
  local_48;
  FScriptContainerElement *local_38;
  undefined4 local_30;
  
  this_01 = (ForAnyElementType *)CONCAT71(in_stack_00000029,in_stack_00000028);
  *(undefined8 *)param_1 = 0;
  if (*(longlong *)param_3 != 0) {
    local_48._0_8_ = *(undefined8 *)param_3;
    local_38 = this_01->Data;
    local_30 = *(undefined4 *)&this_01[1].Data;
    local_48._8_4_ = *(undefined4 *)&param_3->field_0x8;
    this_01->Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&this_01[1].Data = 0;
    FVar7 = FieldNotification::FFieldMulticastDelegate::Add
                      (&this->Delegates,(UObject *)&stack0x00000010,param_2,&local_48);
    lVar3 = *(longlong *)FVar7.ID;
    *(longlong *)param_1 = lVar3;
    if (lVar3 != 0) {
      iVar2 = *(int *)&param_3->field_0x8;
      this_00 = &this->EnabledFieldNotifications;
      iVar9 = (iVar2 - (this->EnabledFieldNotifications).NumBits) + 1;
      if (0 < iVar9) {
        iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar9);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar6,iVar9,false);
      }
      if ((iVar2 < 0) || ((this->EnabledFieldNotifications).NumBits <= iVar2)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          FVar7.ID = (*pcVar4)();
          return (FDelegateHandle)FVar7.ID;
        }
      }
      FVar8 = (this->EnabledFieldNotifications).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<unsigned_int>)0x0) {
        FVar8 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar8 +
                       (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
    }
  }
  if ((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)this_01->Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_01,0,0,0x10);
    *(undefined4 *)&this_01[1].Data = 0;
  }
  if (this_01->Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(this_01->Data);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// AddFieldValueChangedDelegate @ 14a741f40

void __thiscall
UE::MVVM::FMVVMFieldNotificationDelegates::AddFieldValueChangedDelegate
          (FMVVMFieldNotificationDelegates *this,UObject *param_1,FFieldId *param_2,
          FFieldValueChangedDynamicDelegate *param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  longlong local_res18;
  FName local_18;
  int local_10;
  
  if (param_2->FieldName != (FName)0x0) {
    local_18 = param_2->FieldName;
    local_10 = param_2->BitNumber;
    FieldNotification::FFieldMulticastDelegate::Add
              (&this->Delegates,(UObject *)&local_res18,(FFieldId *)param_1,
               (FFieldValueChangedDynamicDelegate *)&local_18);
    if (local_res18 != 0) {
      iVar2 = param_2->BitNumber;
      iVar6 = (iVar2 - (this->EnabledFieldNotifications).NumBits) + 1;
      this_00 = &this->EnabledFieldNotifications;
      if (0 < iVar6) {
        iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar6);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar5,iVar6,false);
      }
      if ((iVar2 < 0) || ((this->EnabledFieldNotifications).NumBits <= iVar2)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FVar7 = (this->EnabledFieldNotifications).AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<unsigned_int>)0x0) {
        FVar7 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar7 +
                       (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
    }
  }
  return;
}

// BroadcastFieldValueChanged @ 14a743f50

void __thiscall
UE::MVVM::FMVVMFieldNotificationDelegates::BroadcastFieldValueChanged
          (FMVVMFieldNotificationDelegates *this,UObject *param_1,FFieldId *param_2)

{
  uint uVar1;
  ForElementType<unsigned_int> FVar2;
  FFieldId local_18;
  
  if (((param_2->FieldName != (FName)0x0) && (uVar1 = param_2->BitNumber, -1 < (int)uVar1)) &&
     ((int)uVar1 < (this->EnabledFieldNotifications).NumBits)) {
    FVar2 = (this->EnabledFieldNotifications).AllocatorInstance.SecondaryData;
    if (FVar2 == (ForElementType<unsigned_int>)0x0) {
      FVar2 = (ForElementType<unsigned_int>)&this->EnabledFieldNotifications;
    }
    if ((*(uint *)((longlong)FVar2 +
                  (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) {
      local_18.FieldName = param_2->FieldName;
      local_18.BitNumber = param_2->BitNumber;
      FieldNotification::FFieldMulticastDelegate::Broadcast(&this->Delegates,param_1,&local_18);
    }
  }
  return;
}

// GetView @ 14a754ad0

TArray<UE::FieldNotification::FFieldMulticastDelegate::FDelegateView,TSizedDefaultAllocator<32>_> *
__thiscall
UE::MVVM::FMVVMFieldNotificationDelegates::GetView
          (FMVVMFieldNotificationDelegates *this,
          TArray<UE::FieldNotification::FFieldMulticastDelegate::FDelegateView,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FieldNotification::FFieldMulticastDelegate::GetView(&this->Delegates,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// RemoveAllFieldValueChangedDelegates @ 14a75cc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::MVVM::FMVVMFieldNotificationDelegates::RemoveAllFieldValueChangedDelegates
          (FMVVMFieldNotificationDelegates *this,UObject *param_1,void *param_2)

{
  undefined1 auStack_58 [32];
  FRemoveAllResult local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_2 != (void *)0x0) {
    FieldNotification::FFieldMulticastDelegate::RemoveAll
              (&this->Delegates,&local_38,param_1,param_2);
    if (&this->EnabledFieldNotifications != &local_38.HasFields) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                (&this->EnabledFieldNotifications,&local_38.HasFields);
    }
    if (local_38.HasFields.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_38.HasFields.AllocatorInstance.SecondaryData);
    }
    return local_38.RemoveCount;
  }
  return 0;
}

// RemoveAllFieldValueChangedDelegates @ 14a75cca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::MVVM::FMVVMFieldNotificationDelegates::RemoveAllFieldValueChangedDelegates
          (FMVVMFieldNotificationDelegates *this,UObject *param_1,FFieldId *param_2,void *param_3)

{
  undefined1 auStackY_88 [32];
  FFieldId local_58;
  FRemoveAllResult local_48;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if ((param_2->FieldName == (FName)0x0) || (param_3 == (void *)0x0)) {
    local_48.RemoveCount = 0;
  }
  else {
    local_58.FieldName = param_2->FieldName;
    local_58.BitNumber = param_2->BitNumber;
    FieldNotification::FFieldMulticastDelegate::RemoveAll
              (&this->Delegates,&local_48,param_1,&local_58,param_3);
    if (&this->EnabledFieldNotifications != &local_48.HasFields) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                (&this->EnabledFieldNotifications,&local_48.HasFields);
    }
    if (local_48.HasFields.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_48.HasFields.AllocatorInstance.SecondaryData);
    }
  }
  return local_48.RemoveCount;
}

// RemoveFieldValueChangedDelegate @ 14a75d800

bool __thiscall
UE::MVVM::FMVVMFieldNotificationDelegates::RemoveFieldValueChangedDelegate
          (FMVVMFieldNotificationDelegates *this,UObject *param_1,FFieldId *param_2,
          FFieldValueChangedDynamicDelegate *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  undefined1 local_res18;
  char local_res19;
  FName local_18;
  int local_10;
  
  if (((param_2->FieldName == (FName)0x0) || (uVar2 = param_2->BitNumber, (int)uVar2 < 0)) ||
     ((this->EnabledFieldNotifications).NumBits <= (int)uVar2)) {
    return false;
  }
  FVar8 = (this->EnabledFieldNotifications).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<unsigned_int>)0x0) {
    FVar8 = (ForElementType<unsigned_int>)&this->EnabledFieldNotifications;
  }
  if ((*(uint *)((longlong)FVar8 + (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4)
       >> (uVar2 & 0x1f) & 1) != 0) {
    local_18 = param_2->FieldName;
    local_10 = param_2->BitNumber;
    FieldNotification::FFieldMulticastDelegate::RemoveFrom
              (&this->Delegates,(UObject *)&stack0x00000018,(FFieldId *)param_1,
               (FFieldValueChangedDynamicDelegate *)&local_18);
    iVar3 = param_2->BitNumber;
    if ((iVar3 < 0) || ((this->EnabledFieldNotifications).NumBits <= iVar3)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    FVar8 = (this->EnabledFieldNotifications).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)&this->EnabledFieldNotifications;
    }
    puVar1 = (uint *)((longlong)FVar8 + (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4)
    ;
    uVar7 = 1 << ((byte)iVar3 & 0x1f);
    uVar2 = *puVar1;
    if (local_res19 == '\0') {
      uVar7 = ~uVar7 & uVar2;
    }
    else {
      uVar7 = uVar7 | uVar2;
    }
    *puVar1 = uVar7;
    return (bool)local_res18;
  }
  return false;
}

// RemoveFieldValueChangedDelegate @ 14a75d950

bool __thiscall
UE::MVVM::FMVVMFieldNotificationDelegates::RemoveFieldValueChangedDelegate
          (FMVVMFieldNotificationDelegates *this,UObject *param_1,FFieldId *param_2,
          FDelegateHandle param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  undefined1 local_res18;
  char local_res19;
  FName local_18;
  int local_10;
  
  if ((((param_2->FieldName == (FName)0x0) || (param_3.ID == 0)) ||
      (uVar2 = param_2->BitNumber, (int)uVar2 < 0)) ||
     ((this->EnabledFieldNotifications).NumBits <= (int)uVar2)) {
    return false;
  }
  FVar8 = (this->EnabledFieldNotifications).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<unsigned_int>)0x0) {
    FVar8 = (ForElementType<unsigned_int>)&this->EnabledFieldNotifications;
  }
  if ((*(uint *)((longlong)FVar8 + (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4)
       >> (uVar2 & 0x1f) & 1) != 0) {
    local_18 = param_2->FieldName;
    local_10 = param_2->BitNumber;
    FieldNotification::FFieldMulticastDelegate::RemoveFrom
              (&this->Delegates,(UObject *)&stack0x00000018,(FFieldId *)param_1,
               (FDelegateHandle)&local_18);
    iVar3 = param_2->BitNumber;
    if ((iVar3 < 0) || ((this->EnabledFieldNotifications).NumBits <= iVar3)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    FVar8 = (this->EnabledFieldNotifications).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)&this->EnabledFieldNotifications;
    }
    puVar1 = (uint *)((longlong)FVar8 + (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4)
    ;
    uVar7 = 1 << ((byte)iVar3 & 0x1f);
    uVar2 = *puVar1;
    if (local_res19 == '\0') {
      uVar7 = ~uVar7 & uVar2;
    }
    else {
      uVar7 = uVar7 | uVar2;
    }
    *puVar1 = uVar7;
    return (bool)local_res18;
  }
  return false;
}

