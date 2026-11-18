// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b4fe400

UClass * __cdecl UDS_MountDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountDataSet",
               &Z_Registration_Info_UClass_UDS_MountDataSet.InnerSingleton,
               StaticRegisterNativesUDS_MountDataSet,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_MountDataSet>,
               InternalVTableHelperCtorCaller<UDS_MountDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountDataSet.InnerSingleton;
}

// UDS_MountDataSet @ 14b500cd0

UDS_MountDataSet * __thiscall
UDS_MountDataSet::UDS_MountDataSet(UDS_MountDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MountDataSet__6B_;
  (this->MountInvenInfo).PlayerUID = 0;
  (this->MountInvenInfo).ExtendedSlotCount = 0;
  (this->MountInvenInfo).SelectedMountUID = 0;
  (this->MountInfo).MountEntity = 0;
  (this->MountInfo).SeatIndex = 0;
  return this;
}

// UDS_MountDataSet @ 14b500d20

UDS_MountDataSet * __thiscall
UDS_MountDataSet::UDS_MountDataSet(UDS_MountDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MountDataSet__6B_;
  (this->MountInvenInfo).PlayerUID = 0;
  (this->MountInvenInfo).ExtendedSlotCount = 0;
  (this->MountInvenInfo).SelectedMountUID = 0;
  (this->MountInfo).MountEntity = 0;
  (this->MountInfo).SeatIndex = 0;
  return this;
}

// ~UDS_MountDataSet @ 14b502380

void __thiscall UDS_MountDataSet::~UDS_MountDataSet(UDS_MountDataSet *this)

{
  this->_padding_ = (longlong)&___7UDS_MountDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b504660

UClass * __cdecl UDS_MountDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountDataSet",
               &Z_Registration_Info_UClass_UDS_MountDataSet.InnerSingleton,
               StaticRegisterNativesUDS_MountDataSet,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_MountDataSet>,
               InternalVTableHelperCtorCaller<UDS_MountDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_MountDataSet @ 14b505b20

void __cdecl UDS_MountDataSet::StaticRegisterNativesUDS_MountDataSet(void)

{
  return;
}

// GetCurrMountMaxLoadCapacity @ 14ba466d0

int __thiscall UDS_MountDataSet::GetCurrMountMaxLoadCapacity(UDS_MountDataSet *this)

{
  long64 lVar1;
  bool bVar2;
  UObject *pUVar3;
  ulong64 uVar4;
  FWeakObjectPtr local_res8;
  
  lVar1 = (this->MountInvenInfo).SelectedMountUID;
  bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (bVar2) {
    uVar4 = 0;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    uVar4 = *(ulong64 *)(pUVar3 + 1);
  }
  UDS_MountData::GetData((ulong64)&local_res8,uVar4,SUB81(lVar1,0));
  bVar2 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (bVar2) {
    return 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res8);
  return *(int *)&pUVar3[4].field_0x4;
}

// GetMountDataList @ 14ba4d170

void __thiscall
UDS_MountDataSet::GetMountDataList
          (UDS_MountDataSet *this,
          TArray<TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FObjectPtr_u_0 *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 FVar6;
  FObjectPtr_u_0 FVar7;
  int iVar8;
  longlong lVar9;
  FObjectPtr_u_0 FVar10;
  FWeakObjectPtr local_res8;
  FObjectPtr_u_0 local_res10;
  
  piVar1 = &param_1->ArrayMax;
  FVar10.Handle = (UObject *)0x0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  lVar9 = (longlong)(int)this->_padding_;
  FVar7.Handle = FVar10.Handle;
  FVar6.Handle = FVar10.Handle;
  if (0 < lVar9) {
    do {
      iVar8 = FVar6._0_4_;
      if ((-1 < iVar8) && (iVar8 < (int)this->_padding_)) {
        if ((iVar8 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (FObjectPtr_u_0 *)(this->_padding_ + (longlong)FVar7.Handle * 8);
        FVar6.Handle = FVar10.Handle;
        if (*(longlong *)(this->_padding_ + (longlong)FVar7.Handle * 8) != 0) {
          pUVar5 = Z_Construct_UClass_UDS_MountData_NoRegister();
          bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
          if (bVar3) {
            FVar6.Handle = this_00->Handle;
          }
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6.Handle != (UObject *)0x0)
           ) {
          UE::GC::MarkAsReachable(FVar6.Handle);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res10 = FVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6.Handle != (UObject *)0x0)
           ) {
          UE::GC::MarkAsReachable(FVar6.Handle);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
        bVar3 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
        if (!bVar3) {
          iVar4 = param_1->ArrayNum;
          if (iVar4 == *piVar1) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar4 + 1;
          *(FWeakObjectPtr *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_res8;
        }
      }
      FVar6._0_4_ = iVar8 + 1;
      FVar6._4_4_ = 0;
      FVar7.Handle = (UObject *)&(FVar7.Handle)->field_0x1;
    } while ((longlong)FVar7.Handle < lVar9);
  }
  return;
}

// GetMountID @ 14ba4d320

int __thiscall UDS_MountDataSet::GetMountID(UDS_MountDataSet *this)

{
  bool bVar1;
  int iVar2;
  UDS_NPCMountData *this_00;
  FWeakObjectPtr local_res8 [4];
  
  if ((this->MountInfo).MountEntity != 0) {
    UDS_NPCMountData::GetData((ulong64)local_res8);
    bVar1 = TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr> *)local_res8,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_NPCMountData *)FWeakObjectPtr::Get(local_res8);
      iVar2 = UDS_NPCMountData::GetMountID(this_00);
      return iVar2;
    }
  }
  return 0;
}

// GetTotalSlotCount @ 14ba50e30

int __thiscall UDS_MountDataSet::GetTotalSlotCount(UDS_MountDataSet *this)

{
  FDS_MountRegisterListTableRow *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FDS_MountRegisterListTableRow_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  FDS_MountRegisterListTableRow::GetAll(&local_18);
  if (local_18.ArrayNum != 0) {
    if (local_18.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    this_00 = *(FDS_MountRegisterListTableRow **)local_18.AllocatorInstance.Data;
    bVar2 = FDS_MountRegisterListTableRow::IsValid(this_00);
    if (bVar2) {
      iVar3 = (this->MountInvenInfo).ExtendedSlotCount * this_00->ExtendValue +
              this_00->DefaultSlotCount;
      goto LAB_14ba50eaf;
    }
  }
  iVar3 = -1;
LAB_14ba50eaf:
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return iVar3;
}

// UpdateData @ 14ba7c8a0

void __thiscall UDS_MountDataSet::UpdateData(UDS_MountDataSet *this,SqlMountInvenInfoTable *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  FDS_MountInvenInfo *pFVar6;
  UDS_MountEvent *pUVar7;
  UObject *pUVar8;
  FObjectPtr_u_0 *this_00;
  UClass *pUVar9;
  longlong *plVar10;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  FDS_MountInvenInfo local_28;
  
  uVar1 = (this->MountInvenInfo).SelectedMountUID;
  pFVar6 = FDS_MountInvenInfo::FDS_MountInvenInfo(&local_28,param_1);
  iVar5 = pFVar6->ExtendedSlotCount;
  uVar3 = *(undefined4 *)&pFVar6->field_0xc;
  (this->MountInvenInfo).PlayerUID = pFVar6->PlayerUID;
  (this->MountInvenInfo).ExtendedSlotCount = iVar5;
  *(undefined4 *)&(this->MountInvenInfo).field_0xc = uVar3;
  (this->MountInvenInfo).SelectedMountUID = pFVar6->SelectedMountUID;
  uVar2 = (this->MountInvenInfo).SelectedMountUID;
  if (uVar1 != uVar2) {
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar10 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar10 = &this->_padding_;
      }
      iVar5 = *(int *)((longlong)plVar10 +
                      ((ulonglong)((int)this->_padding_ - 1) & (uVar2 >> 0x20) * 0x17 + uVar2) * 4);
      if (iVar5 != -1) {
        do {
          if (*(ulonglong *)(this->_padding_ + (longlong)iVar5 * 0x18) == uVar2) {
            this_00 = (FObjectPtr_u_0 *)
                      TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                      ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                                     *)&this->_padding_,uVar2);
            pUVar8 = (UObject *)0x0;
            if (this_00->Handle != (UObject *)0x0) {
              pUVar9 = Z_Construct_UClass_UDS_MountData_NoRegister();
              bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar9);
              if (bVar4) {
                pUVar8 = this_00->Handle;
              }
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar8);
            }
            local_res8.ObjectIndex = 0;
            local_res8.ObjectSerialNumber = 0;
            local_res18 = pUVar8;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar8);
            }
            goto LAB_14ba7c955;
          }
          iVar5 = *(int *)(this->_padding_ + 0x10 + (longlong)iVar5 * 0x18);
        } while (iVar5 != -1);
      }
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = (UObject *)0x0;
LAB_14ba7c955:
    iVar5 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    pUVar7 = UDS_MountEvent::GetEvent();
    if (pUVar7 != (UDS_MountEvent *)0x0) {
      bVar4 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
      if (!bVar4) {
        pUVar8 = FWeakObjectPtr::Get(&local_res8);
        iVar5 = *(int *)&pUVar8[2].field_0x18;
      }
      bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar7->OnChangedSelectedMount);
      if (bVar4) {
        TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar7->OnChangedSelectedMount).Delegate,iVar5);
      }
    }
  }
  *(undefined1 *)&this->_padding_ = 1;
  bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar4) {
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar8[3].field_0x20 = 1;
  }
  return;
}

// UpdateData @ 14ba7ca70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MountDataSet::UpdateData(UDS_MountDataSet *this,SqlMountListTable *param_1,DirtyFlag *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_LogManager *pUVar3;
  ulong64 uVar4;
  undefined1 auStackY_1c8 [32];
  FWeakObjectPtr local_198 [2];
  FDS_MountList local_188;
  FDS_MountTableStatusInfo local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  FDS_MountList::FDS_MountList(&local_188,param_1);
  local_148.StandardSpeed = 0;
  local_148.StandardSprintSpeed = 0;
  local_148.InventorySlot = 0;
  local_148.MountLoadCapacity = 0;
  FDS_MountTableStatusInfo::SetData(&local_148,&local_188);
  if (*param_2 == DirtyFlag_Delete) {
    UDS_DataSetBase::RemoveData((UDS_DataSetBase *)this,local_188.MountUID);
  }
  else {
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (bVar1) {
      uVar4 = 0;
    }
    else {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      uVar4 = *(ulong64 *)(pUVar2 + 1);
    }
    UDS_MountData::GetData((ulong64)local_198,uVar4,SUB81(local_188.MountUID,0));
    bVar1 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> *)local_198,(void *)0x0);
    if (bVar1) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_MountDataSet::UpdateData",0x1c,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x51,L"mountData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar2 = FWeakObjectPtr::Get(local_198);
      *(long64 *)&pUVar2[2].field_0x8 = local_188.PlayerUID;
      *(long64 *)&pUVar2[2].field_0x10 = local_188.MountUID;
      *(int *)&pUVar2[2].field_0x18 = local_188.MountTID;
      ::FString::operator=((FString *)&pUVar2[2].field_0x20,&local_188.MountNickname);
      *(int *)&pUVar2[3].field_0x8 = local_188.Hunger;
      *(int *)&pUVar2[3].field_0xc = local_188.Fatigue;
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)&pUVar2[3].field_0x10,
                 &local_188.EquipItemIDList);
      *(undefined1 *)(pUVar2 + 2) = 1;
      *(int *)&pUVar2[3].field_0x20 = local_148.StandardSpeed;
      *(int *)&pUVar2[3].field_0x24 = local_148.StandardSprintSpeed;
      *(int *)&pUVar2[4].field_0x0 = local_148.InventorySlot;
      *(int *)&pUVar2[4].field_0x4 = local_148.MountLoadCapacity;
      bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&pUVar2[1].field_0x20,
                         (void *)0x0);
      if (!bVar1) {
        pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar2[1].field_0x20);
        pUVar2[4].field_0x8 = 1;
        bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                           (void *)0x0);
        if (!bVar1) {
          pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
          pUVar2[3].field_0x20 = 1;
        }
      }
    }
  }
  if (local_188.EquipItemIDList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.EquipItemIDList.AllocatorInstance.Data);
  }
  if (local_188.MountNickname.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.MountNickname.Data.AllocatorInstance.Data);
  }
  return;
}

