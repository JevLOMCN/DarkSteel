// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 23

// StaticClass @ 14a73b120

UClass * __cdecl UMVVMViewModelBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewModelBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewModelBase",
               &Z_Registration_Info_UClass_UMVVMViewModelBase.InnerSingleton,
               StaticRegisterNativesUMVVMViewModelBase,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMViewModelBase>,
               InternalVTableHelperCtorCaller<UMVVMViewModelBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewModelBase.InnerSingleton;
}

// UMVVMViewModelBase @ 14a740070

UMVVMViewModelBase * __thiscall
UMVVMViewModelBase::UMVVMViewModelBase(UMVVMViewModelBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->NotificationDelegates).Delegates.AddedEmplaceAt = 0xffff;
  (this->NotificationDelegates).Delegates.Delegates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->NotificationDelegates).Delegates.Delegates.ArrayNum = 0;
  (this->NotificationDelegates).Delegates.Delegates.ArrayMax = 0;
  (this->NotificationDelegates).Delegates.DelegateLockCount = 0;
  (this->NotificationDelegates).Delegates.CompactionCount = 0;
  (this->NotificationDelegates).EnabledFieldNotifications.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->NotificationDelegates).EnabledFieldNotifications.NumBits = 0;
  (this->NotificationDelegates).EnabledFieldNotifications.MaxBits = 0x80;
  return this;
}

// UMVVMViewModelBase @ 14a7400d0

UMVVMViewModelBase * __thiscall
UMVVMViewModelBase::UMVVMViewModelBase(UMVVMViewModelBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->NotificationDelegates).Delegates.AddedEmplaceAt = 0xffff;
  (this->NotificationDelegates).Delegates.Delegates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->NotificationDelegates).Delegates.Delegates.ArrayNum = 0;
  (this->NotificationDelegates).Delegates.Delegates.ArrayMax = 0;
  (this->NotificationDelegates).Delegates.DelegateLockCount = 0;
  (this->NotificationDelegates).Delegates.CompactionCount = 0;
  (this->NotificationDelegates).EnabledFieldNotifications.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->NotificationDelegates).EnabledFieldNotifications.NumBits = 0;
  (this->NotificationDelegates).EnabledFieldNotifications.MaxBits = 0x80;
  return this;
}

// ~UMVVMViewModelBase @ 14a740990

void __thiscall UMVVMViewModelBase::~UMVVMViewModelBase(UMVVMViewModelBase *this)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FVar1 = (this->NotificationDelegates).EnabledFieldNotifications.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  DestructItems<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,int>
            ((FInvocationElement *)
             (this->NotificationDelegates).Delegates.Delegates.AllocatorInstance.Data,
             (this->NotificationDelegates).Delegates.Delegates.ArrayNum);
  pFVar2 = (this->NotificationDelegates).Delegates.Delegates.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddFieldValueChangedDelegate @ 14a742040

FDelegateHandle __thiscall
UMVVMViewModelBase::AddFieldValueChangedDelegate
          (UMVVMViewModelBase *this,FFieldId *param_1,
          TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *param_2)

{
  longlong lVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FDelegateHandle FVar7;
  longlong *this_00;
  FScriptContainerElement *pFVar8;
  ForAnyElementType *in_R9;
  int iVar9;
  TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
  local_68;
  ForAnyElementType local_58;
  int local_50;
  FScriptContainerElement *local_48;
  int local_40;
  
  lVar1 = *(longlong *)param_2;
  pFVar8 = in_R9->Data;
  iVar2 = *(int *)&param_2->field_0x8;
  iVar9 = *(int *)&in_R9[1].Data;
  *(undefined4 *)&in_R9[1].Data = 0;
  in_R9->Data = (FScriptContainerElement *)0x0;
  (param_1->FieldName).ComparisonIndex = 0;
  (param_1->FieldName).Number = 0;
  local_58.Data = pFVar8;
  local_50 = iVar9;
  if (lVar1 != 0) {
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    local_68._0_8_ = lVar1;
    local_68._8_4_ = iVar2;
    local_48 = pFVar8;
    local_40 = iVar9;
    FVar7 = UE::FieldNotification::FFieldMulticastDelegate::Add
                      ((FFieldMulticastDelegate *)&this->_padding_,(UObject *)&stack0x00000018,
                       (FFieldId *)&this[-1].NotificationDelegates.Delegates.DelegateLockCount,
                       &local_68);
    FVar3 = *(FName *)FVar7.ID;
    param_1->FieldName = FVar3;
    if (FVar3 != (FName)0x0) {
      this_00 = &this->_padding_;
      iVar9 = (iVar2 - (this->NotificationDelegates).Delegates.Delegates.ArrayNum) + 1;
      if (0 < iVar9) {
        iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)this_00,iVar9);
        TBitArray<FDefaultBitArrayAllocator>::SetRange
                  ((TBitArray<FDefaultBitArrayAllocator> *)this_00,iVar6,iVar9,false);
      }
      if (((iVar2 < 0) || ((this->NotificationDelegates).Delegates.Delegates.ArrayNum <= iVar2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        FVar7.ID = (*pcVar4)();
        return (FDelegateHandle)FVar7.ID;
      }
      pFVar8 = (this->NotificationDelegates).Delegates.Delegates.AllocatorInstance.Data;
      if (pFVar8 == (FScriptContainerElement *)0x0) {
        pFVar8 = (FScriptContainerElement *)this_00;
      }
      *(uint *)(pFVar8 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4) =
           *(uint *)(pFVar8 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4) |
           1 << ((byte)iVar2 & 0x1f);
    }
  }
  if (local_50 != 0) {
    if (local_58.Data == (FScriptContainerElement *)0x0) goto LAB_14a7421d5;
    (*(code *)**(undefined8 **)local_58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
LAB_14a7421d5:
  if ((*(int *)&in_R9[1].Data != 0) && (in_R9->Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)in_R9->Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(in_R9,0,0,0x10);
    *(undefined4 *)&in_R9[1].Data = 0;
  }
  if (in_R9->Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(in_R9->Data);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// BroadcastFieldValueChanged @ 14a7440e0

void __thiscall
UMVVMViewModelBase::BroadcastFieldValueChanged(UMVVMViewModelBase *this,FFieldId *param_1)

{
  FScriptContainerElement *pFVar1;
  FFieldId local_18;
  
  local_18.FieldName = param_1->FieldName;
  local_18.BitNumber = param_1->BitNumber;
  if (((local_18.FieldName != (FName)0x0) && (-1 < local_18.BitNumber)) &&
     (local_18.BitNumber < (this->NotificationDelegates).Delegates.Delegates.ArrayNum)) {
    pFVar1 = (this->NotificationDelegates).Delegates.Delegates.AllocatorInstance.Data;
    if (pFVar1 == (FScriptContainerElement *)0x0) {
      pFVar1 = (FScriptContainerElement *)&this->_padding_;
    }
    if ((*(uint *)(pFVar1 + (longlong)
                            ((int)(local_18.BitNumber + (local_18.BitNumber >> 0x1f & 0x1fU)) >> 5)
                            * 4) >> (local_18.BitNumber & 0x1fU) & 1) != 0) {
      UE::FieldNotification::FFieldMulticastDelegate::Broadcast
                ((FFieldMulticastDelegate *)&this->_padding_,
                 (UObject *)&this[-1].NotificationDelegates.Delegates.DelegateLockCount,&local_18);
    }
  }
  return;
}

// GetFieldNotificationDescriptor @ 14a7515e0

IClassDescriptor * __thiscall
UMVVMViewModelBase::GetFieldNotificationDescriptor(UMVVMViewModelBase *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UMVVMViewModelBase::GetFieldNotificationDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Local__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Local;
}

// GetNotificationDelegateView @ 14a751eb0

TArray<UE::FieldNotification::FFieldMulticastDelegate::FDelegateView,TSizedDefaultAllocator<32>_> *
__thiscall
UMVVMViewModelBase::GetNotificationDelegateView
          (UMVVMViewModelBase *this,
          TArray<UE::FieldNotification::FFieldMulticastDelegate::FDelegateView,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  UE::FieldNotification::FFieldMulticastDelegate::GetView
            (&(this->NotificationDelegates).Delegates,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a753fb0

UClass * __cdecl UMVVMViewModelBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewModelBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewModelBase",
               &Z_Registration_Info_UClass_UMVVMViewModelBase.InnerSingleton,
               StaticRegisterNativesUMVVMViewModelBase,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMViewModelBase>,
               InternalVTableHelperCtorCaller<UMVVMViewModelBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewModelBase.InnerSingleton;
}

// K2_AddFieldValueChangedDelegate @ 14a75a400

void __thiscall
UMVVMViewModelBase::K2_AddFieldValueChangedDelegate
          (UMVVMViewModelBase *this,FFieldNotificationId param_1,
          FFieldValueChangedDynamicDelegate *param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  ForElementType<unsigned_int> FVar7;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong local_68;
  int local_60;
  FFieldValueChangedDynamicDelegate local_58;
  int local_40;
  longlong *local_38;
  FName local_30;
  code *local_28;
  longlong **local_20;
  
  if (param_1.FieldName != (FName)0x0) {
    puVar5 = (undefined8 *)(**(code **)(this->_padding_ + 0x30))();
    local_68 = 0;
    local_38 = &local_68;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
               ::Call;
    local_30 = param_1.FieldName;
    (**(code **)*puVar5)(puVar5,this->_padding_,&local_28);
    if (local_68 == 0) {
      local_res10[0] = 0;
      `UMVVMViewModelBase::K2_AddFieldValueChangedDelegate'::__l5::<lambda_1>::operator()
                (local_res10);
    }
    local_58._16_8_ = local_68;
    local_40 = local_60;
    if (local_68 != 0) {
      local_58._0_8_ = local_68;
      local_58._8_4_ = local_60;
      UE::FieldNotification::FFieldMulticastDelegate::Add
                (&(this->NotificationDelegates).Delegates,(UObject *)&local_res18,(FFieldId *)this,
                 &local_58);
      if (local_res18 != 0) {
        this_00 = &(this->NotificationDelegates).EnabledFieldNotifications;
        iVar6 = (local_60 - (this->NotificationDelegates).EnabledFieldNotifications.NumBits) + 1;
        if (0 < iVar6) {
          iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar6);
          TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar4,iVar6,false);
        }
        if (((local_60 < 0) ||
            ((this->NotificationDelegates).EnabledFieldNotifications.NumBits <= local_60)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar7 = (this->NotificationDelegates).EnabledFieldNotifications.AllocatorInstance.
                SecondaryData;
        if (FVar7 == (ForElementType<unsigned_int>)0x0) {
          FVar7 = (ForElementType<unsigned_int>)this_00;
        }
        puVar1 = (uint *)((longlong)FVar7 +
                         (longlong)((int)(local_60 + (local_60 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)local_60 & 0x1f);
      }
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// K2_BroadcastFieldValueChanged @ 14a75a590

void __thiscall
UMVVMViewModelBase::K2_BroadcastFieldValueChanged
          (UMVVMViewModelBase *this,FFieldNotificationId param_1)

{
  undefined8 *puVar1;
  ForElementType<unsigned_int> FVar2;
  FName local_38;
  uint local_30;
  undefined1 local_28 [16];
  code *local_18;
  undefined1 *local_10;
  
  puVar1 = (undefined8 *)(**(code **)(this->_padding_ + 0x30))();
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  local_28._0_8_ = &local_38;
  local_10 = local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
             ::Call;
  local_28._8_8_ = param_1.FieldName;
  (**(code **)*puVar1)(puVar1,this->_padding_,&local_18);
  if (((local_38 != (FName)0x0) && (-1 < (int)local_30)) &&
     ((int)local_30 < (this->NotificationDelegates).EnabledFieldNotifications.NumBits)) {
    FVar2 = (this->NotificationDelegates).EnabledFieldNotifications.AllocatorInstance.SecondaryData;
    if (FVar2 == (ForElementType<unsigned_int>)0x0) {
      FVar2 = (ForElementType<unsigned_int>)&(this->NotificationDelegates).EnabledFieldNotifications
      ;
    }
    if ((*(uint *)((longlong)FVar2 +
                  (longlong)((int)(local_30 + ((int)local_30 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (local_30 & 0x1f) & 1) != 0) {
      local_28._0_4_ = local_38.ComparisonIndex.Value;
      local_28._4_4_ = local_38.Number;
      local_28._8_4_ = local_30;
      UE::FieldNotification::FFieldMulticastDelegate::Broadcast
                (&(this->NotificationDelegates).Delegates,(UObject *)this,(FFieldId *)local_28);
    }
  }
  return;
}

// K2_RemoveFieldValueChangedDelegate @ 14a75aae0

void __thiscall
UMVVMViewModelBase::K2_RemoveFieldValueChangedDelegate
          (UMVVMViewModelBase *this,FFieldNotificationId param_1,
          FFieldValueChangedDynamicDelegate *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  ForElementType<unsigned_int> FVar9;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  longlong local_88;
  uint local_80;
  longlong local_78;
  uint local_70;
  undefined1 local_68 [16];
  longlong *local_58;
  FName local_50;
  code *local_48;
  longlong **local_40;
  
  if (param_1.FieldName != (FName)0x0) {
    puVar8 = (undefined8 *)(**(code **)(this->_padding_ + 0x30))();
    local_88 = 0;
    local_58 = &local_88;
    local_40 = &local_58;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
               ::Call;
    local_50 = param_1.FieldName;
    (**(code **)*puVar8)(puVar8,this->_padding_,&local_48);
    if (local_88 == 0) {
      local_res10[0] = 0;
      `UMVVMViewModelBase::K2_RemoveFieldValueChangedDelegate'::__l5::<lambda_1>::operator()
                (local_res10);
    }
    local_res18 = local_88;
    local_78 = local_88;
    local_70 = local_80;
    if (((local_88 != 0) && (-1 < (int)local_80)) &&
       ((int)local_80 < (this->NotificationDelegates).EnabledFieldNotifications.NumBits)) {
      pTVar1 = &(this->NotificationDelegates).EnabledFieldNotifications;
      if (((this->NotificationDelegates).EnabledFieldNotifications.NumBits <= (int)local_80) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar9 = (this->NotificationDelegates).EnabledFieldNotifications.AllocatorInstance.
              SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar1;
      }
      lVar3 = (longlong)((int)(local_80 + ((int)local_80 >> 0x1f & 0x1fU)) >> 5) * 4;
      if ((*(uint *)((longlong)FVar9 + lVar3) >> (local_80 & 0x1f) & 1) != 0) {
        local_68._8_4_ = local_80;
        local_68._0_8_ = local_res18;
        UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom
                  (&(this->NotificationDelegates).Delegates,(UObject *)&local_res18,(FFieldId *)this
                   ,(FFieldValueChangedDynamicDelegate *)local_68);
        if ((((int)local_80 < 0) ||
            ((this->NotificationDelegates).EnabledFieldNotifications.NumBits <= (int)local_80)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar9 = (this->NotificationDelegates).EnabledFieldNotifications.AllocatorInstance.
                SecondaryData;
        if (FVar9 == (ForElementType<unsigned_int>)0x0) {
          FVar9 = (ForElementType<unsigned_int>)pTVar1;
        }
        puVar2 = (uint *)((longlong)FVar9 + lVar3);
        uVar7 = 1 << ((byte)local_80 & 0x1f);
        uVar4 = *puVar2;
        if (local_res18._1_1_ == '\0') {
          uVar7 = ~uVar7 & uVar4;
        }
        else {
          uVar7 = uVar7 | uVar4;
        }
        *puVar2 = uVar7;
      }
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// RemoveAllFieldValueChangedDelegates @ 14a75cd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UMVVMViewModelBase::RemoveAllFieldValueChangedDelegates(UMVVMViewModelBase *this,void *param_1)

{
  undefined1 auStack_58 [32];
  FRemoveAllResult local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1 != (void *)0x0) {
    UE::FieldNotification::FFieldMulticastDelegate::RemoveAll
              ((FFieldMulticastDelegate *)&this->_padding_,&local_38,
               (UObject *)&this[-1].NotificationDelegates.Delegates.DelegateLockCount,param_1);
    if ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_ != &local_38.HasFields) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,&local_38.HasFields);
    }
    if (local_38.HasFields.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_38.HasFields.AllocatorInstance.SecondaryData);
    }
    return local_38.RemoveCount;
  }
  return 0;
}

// RemoveAllFieldValueChangedDelegates @ 14a75cdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UMVVMViewModelBase::RemoveAllFieldValueChangedDelegates
          (UMVVMViewModelBase *this,FFieldId *param_1,void *param_2)

{
  undefined1 auStackY_78 [32];
  FFieldId local_48;
  FRemoveAllResult local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_48.FieldName = param_1->FieldName;
  local_48.BitNumber = param_1->BitNumber;
  if ((local_48.FieldName != (FName)0x0) && (param_2 != (void *)0x0)) {
    UE::FieldNotification::FFieldMulticastDelegate::RemoveAll
              ((FFieldMulticastDelegate *)&this->_padding_,&local_38,
               (UObject *)&this[-1].NotificationDelegates.Delegates.DelegateLockCount,&local_48,
               param_2);
    if ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_ != &local_38.HasFields) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,&local_38.HasFields);
    }
    if (local_38.HasFields.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_38.HasFields.AllocatorInstance.SecondaryData);
    }
    return local_38.RemoveCount;
  }
  return 0;
}

// RemoveFieldValueChangedDelegate @ 14a75dab0

bool __thiscall
UMVVMViewModelBase::RemoveFieldValueChangedDelegate
          (UMVVMViewModelBase *this,FFieldId *param_1,FDelegateHandle param_2)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FName local_res8;
  FName local_38;
  int local_30;
  
  local_res8 = param_1->FieldName;
  iVar2 = param_1->BitNumber;
  if ((((local_res8 != (FName)0x0) && (param_2.ID != 0)) && (-1 < iVar2)) &&
     (iVar2 < (this->NotificationDelegates).Delegates.Delegates.ArrayNum)) {
    if (((this->NotificationDelegates).Delegates.Delegates.ArrayNum <= iVar2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar6 = (this->NotificationDelegates).Delegates.Delegates.AllocatorInstance.Data;
    uVar7 = 1 << ((byte)iVar2 & 0x1f);
    lVar1 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4;
    if (pFVar6 == (FScriptContainerElement *)0x0) {
      pFVar6 = (FScriptContainerElement *)&this->_padding_;
    }
    if ((*(uint *)(pFVar6 + lVar1) & uVar7) == 0) {
      uVar5 = 0;
    }
    else {
      local_38 = local_res8;
      local_30 = iVar2;
      UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom
                ((FFieldMulticastDelegate *)&this->_padding_,(UObject *)&local_res8,
                 (FFieldId *)&this[-1].NotificationDelegates.Delegates.DelegateLockCount,
                 (FDelegateHandle)&local_38);
      uVar5 = (undefined1)local_res8.ComparisonIndex.Value;
      if (((this->NotificationDelegates).Delegates.Delegates.ArrayNum <= iVar2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar6 = (this->NotificationDelegates).Delegates.Delegates.AllocatorInstance.Data;
      if (pFVar6 == (FScriptContainerElement *)0x0) {
        pFVar6 = (FScriptContainerElement *)&this->_padding_;
      }
      if (local_res8.ComparisonIndex.Value._1_1_ == '\0') {
        uVar7 = ~uVar7 & *(uint *)(pFVar6 + lVar1);
      }
      else {
        uVar7 = uVar7 | *(uint *)(pFVar6 + lVar1);
      }
      *(uint *)(pFVar6 + lVar1) = uVar7;
    }
    return (bool)uVar5;
  }
  return false;
}

// StaticRegisterNativesUMVVMViewModelBase @ 14a760250

void __cdecl UMVVMViewModelBase::StaticRegisterNativesUMVVMViewModelBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMVVMViewModelBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 14a768f70

UObject * __thiscall UMVVMViewModelBase::_getUObject(UMVVMViewModelBase *this)

{
  return (UObject *)&this[-1].NotificationDelegates.Delegates.DelegateLockCount;
}

// execK2_AddFieldValueChangedDelegate @ 14a76b8a0

void __cdecl
UMVVMViewModelBase::execK2_AddFieldValueChangedDelegate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 *this;
  undefined1 *puVar8;
  undefined1 local_res10 [16];
  longlong local_res20;
  longlong local_b8;
  int local_b0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  int local_80;
  longlong local_78;
  int local_70;
  FMRSWRecursiveAccessDetector local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  code *local_40;
  longlong **local_38;
  FReadAccessScope local_30;
  
  local_res20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0 = 0;
  local_98 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_68.State = (atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a8,&local_30);
  local_60 = local_a0;
  local_58 = local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  lVar3 = local_res20;
  if (local_res20 != 0) {
    puVar6 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 1) + 0x30))(param_1 + 1);
    local_50 = &local_b8;
    local_38 = &local_50;
    local_b8 = 0;
    local_40 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
               ::Call;
    local_48 = lVar3;
    (**(code **)*puVar6)(puVar6,*(undefined8 *)&param_1->field_0x10,&local_40);
    if (local_b8 == 0) {
      local_res10[0] = 0;
      `UMVVMViewModelBase::K2_AddFieldValueChangedDelegate'::__l5::<lambda_1>::operator()
                (local_res10);
    }
    local_78 = local_b8;
    local_70 = local_b0;
    if (local_b8 != 0) {
      local_90._8_8_ = local_b8;
      local_80 = local_b0;
      UE::FieldNotification::FFieldMulticastDelegate::Add
                ((FFieldMulticastDelegate *)&param_1[1].field_0x8,(UObject *)local_90,
                 (FFieldId *)param_1,(FFieldValueChangedDynamicDelegate *)(local_90 + 8));
      if (local_90._0_8_ != 0) {
        this = &param_1[1].field_0x20;
        iVar7 = (local_b0 - *(int *)&param_1[2].field_0x10) + 1;
        if (0 < iVar7) {
          iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            ((TBitArray<FDefaultBitArrayAllocator> *)this,iVar7);
          TBitArray<FDefaultBitArrayAllocator>::SetRange
                    ((TBitArray<FDefaultBitArrayAllocator> *)this,iVar5,iVar7,false);
        }
        if ((local_b0 < 0) || (*(int *)&param_1[2].field_0x10 <= local_b0)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        puVar8 = *(undefined1 **)&param_1[2].field_0x8;
        if (*(undefined1 **)&param_1[2].field_0x8 == (undefined1 *)0x0) {
          puVar8 = this;
        }
        *(uint *)(puVar8 + (longlong)((int)(local_b0 + (local_b0 >> 0x1f & 0x1fU)) >> 5) * 4) =
             *(uint *)(puVar8 + (longlong)((int)(local_b0 + (local_b0 >> 0x1f & 0x1fU)) >> 5) * 4) |
             1 << ((byte)local_b0 & 0x1f);
      }
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

// execK2_BroadcastFieldValueChanged @ 14a76bae0

void __cdecl
UMVVMViewModelBase::execK2_BroadcastFieldValueChanged
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 local_res8;
  FName local_38;
  uint local_30;
  undefined1 local_28 [16];
  code *local_18;
  undefined1 *local_10;
  
  local_res8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 1) + 0x30))();
  local_28._0_8_ = &local_38;
  local_10 = local_28;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
             ::Call;
  local_28._8_8_ = uVar2;
  (**(code **)*puVar3)(puVar3,*(undefined8 *)&param_1->field_0x10,&local_18);
  if (((local_38 != (FName)0x0) && (-1 < (int)local_30)) &&
     ((int)local_30 < *(int *)&param_1[2].field_0x10)) {
    puVar4 = *(undefined1 **)&param_1[2].field_0x8;
    if (*(undefined1 **)&param_1[2].field_0x8 == (undefined1 *)0x0) {
      puVar4 = &param_1[1].field_0x20;
    }
    if ((*(uint *)(puVar4 + (longlong)((int)(local_30 + ((int)local_30 >> 0x1f & 0x1fU)) >> 5) * 4)
         >> (local_30 & 0x1f) & 1) != 0) {
      local_28._0_4_ = local_38.ComparisonIndex.Value;
      local_28._4_4_ = local_38.Number;
      local_28._8_4_ = local_30;
      UE::FieldNotification::FFieldMulticastDelegate::Broadcast
                ((FFieldMulticastDelegate *)&param_1[1].field_0x8,param_1,(FFieldId *)local_28);
    }
  }
  return;
}

// execK2_RemoveFieldValueChangedDelegate @ 14a76c2a0

void __cdecl
UMVVMViewModelBase::execK2_RemoveFieldValueChangedDelegate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  undefined8 local_50;
  undefined8 local_48;
  FFieldValueChangedDynamicDelegate local_40;
  FReadAccessScope local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50 = 0;
  local_48 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_40._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_58,&local_28);
  local_40._8_8_ = local_50;
  local_40._16_8_ = local_48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  K2_RemoveFieldValueChangedDelegate
            ((UMVVMViewModelBase *)param_1,(FFieldNotificationId)local_res10,&local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// execK2_SetPropertyValue @ 14a76c3d0

void __cdecl
UMVVMViewModelBase::execK2_SetPropertyValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  UClass *pUVar9;
  undefined8 *puVar10;
  FText *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  void *local_res18;
  undefined8 local_res20;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  FBlueprintExceptionInfo local_b8;
  FBlueprintExceptionInfo local_a0;
  longlong *local_88;
  longlong local_80;
  code *local_78;
  longlong **local_70;
  FText local_68;
  FText local_58;
  
  local_res18 = param_3;
  FProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = param_2->MostRecentProperty;
  puVar3 = param_2->MostRecentPropertyAddress;
  FProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar4 = param_2->MostRecentProperty;
  puVar5 = param_2->MostRecentPropertyAddress;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1 != (UObject *)0x0) {
    pUVar9 = StaticClass();
    iVar1 = (int)pUVar9->_padding_;
    if ((((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar9->_padding_)) && (pFVar2 != (FProperty *)0x0)) && (pFVar4 != (FProperty *)0x0)) {
      puVar10 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 1) + 0x30))(param_1 + 1);
      bVar7 = IsThisNotNull(pFVar2,"FField::GetFName");
      if (bVar7) {
        local_80 = pFVar2->_padding_;
      }
      else {
        local_80 = 0;
        local_res20 = 0;
      }
      local_88 = &local_d8;
      local_70 = &local_88;
      local_d8 = 0;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
                 ::Call;
      (**(code **)*puVar10)(puVar10,*(undefined8 *)&param_1->field_0x10,&local_78);
      if (local_d8 == 0) {
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_68,L"MVVMViewModelBase",L"Bad FieldId",
                             L"Failed to find the FieldId that correspond to the set value.");
        local_b8.EventType = AccessViolation;
        local_b8.Description.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(pFVar11->TextData).Reference;
        if (local_b8.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_b8.Description.field0_0x0.TypedValue.TextData.Reference +
                      8))(local_b8.Description.field0_0x0.TypedValue.TextData.Reference,local_res8);
        }
        local_b8.Description.field0_0x0.TypedValue.Flags = pFVar11->Flags;
        if ((local_b8.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
        FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_b8);
        if (local_b8.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_b8.Description.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        cVar8 = '\0';
      }
      else {
        cVar8 = (**(code **)(pFVar2->_padding_ + 0xb8))(pFVar2,puVar3,puVar5,0);
        if (cVar8 == '\0') {
          FProperty::SetValue_InContainer(pFVar2,param_1,puVar5);
          local_c0 = local_d0;
          local_c8 = local_d8;
          (**(code **)(*(longlong *)(param_1 + 1) + 0x38))(param_1 + 1,&local_c8);
        }
      }
      goto LAB_14a76c6e5;
    }
  }
  cVar8 = '\0';
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      (&local_58,L"MVVMViewModelBase",L"MissingInputProperty",
                       L"Failed to resolve the input parameter for SetPropertyValue.");
  local_a0.EventType = AccessViolation;
  local_a0.Description.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(pFVar11->TextData).Reference;
  if (local_a0.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_a0.Description.field0_0x0.TypedValue.TextData.Reference + 8))
              (local_a0.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
  }
  local_a0.Description.field0_0x0.TypedValue.Flags = pFVar11->Flags;
  if ((local_a0.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_a0);
  if (local_a0.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_a0.Description.field0_0x0.TypedValue.TextData.Reference + 0x10)
    )();
  }
LAB_14a76c6e5:
  *(bool *)local_res18 = cVar8 == '\0';
  return;
}

// operator() @ 150553c00

bool __thiscall
`UMVVMViewModelBase::K2_AddFieldValueChangedDelegate'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7494720010284171242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7494720010284171242>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150553c40

bool __thiscall
`UMVVMViewModelBase::K2_RemoveFieldValueChangedDelegate'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7494720010284171225>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7494720010284171225>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

