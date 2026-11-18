// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// SetCheatIndex_WrapperImpl @ 14b6fc370

void __cdecl UDS_VM_WB_CheatSlot::SetCheatIndex_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::CheatIndex.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CheatIndex.FieldName;
  if (*(int *)((longlong)param_1 + 0xa0) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xa0) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetTab_WrapperImpl @ 14b6fc380

void __cdecl UDS_VM_WB_CheatSlot::SetTab_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::Tab.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::Tab.FieldName;
  if (*(int *)((longlong)param_1 + 0xa4) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xa4) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetCheatName_WrapperImpl @ 14b6fc390

void __cdecl UDS_VM_WB_CheatSlot::SetCheatName_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::CheatName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::CheatName.FieldName;
  iVar3 = *(int *)((longlong)param_1 + 0xb0);
  if (iVar3 == *(int *)((longlong)param_2 + 8)) {
    if (iVar3 < 2) {
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)((longlong)param_1 + 0xa8),*(wchar_t **)param_2);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + *(int *)((longlong)param_2 + 8) == 1;
  }
  if (!bVar4) {
    ::FString::operator=((FString *)((longlong)param_1 + 0xa8),param_2);
    FStack_18 = FVar1;
    iStack_10 = iVar2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetCommand_WrapperImpl @ 14b6fc3a0

void __cdecl UDS_VM_WB_CheatSlot::SetCommand_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::Command.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Command.FieldName;
  iVar3 = *(int *)((longlong)param_1 + 0xc0);
  if (iVar3 == *(int *)((longlong)param_2 + 8)) {
    if (iVar3 < 2) {
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)((longlong)param_1 + 0xb8),*(wchar_t **)param_2);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + *(int *)((longlong)param_2 + 8) == 1;
  }
  if (!bVar4) {
    ::FString::operator=((FString *)((longlong)param_1 + 0xb8),param_2);
    FStack_18 = FVar1;
    iStack_10 = iVar2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetClickConfirmButton_WrapperImpl @ 14b6fc3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UDS_VM_WB_CheatSlot::SetClickConfirmButton_WrapperImpl(void *param_1,void *param_2)

{
  ulonglong uVar1;
  void *_Src;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  UDS_CheatData *this;
  FDS_CheatSlotInfo *pFVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 auStackY_178 [32];
  undefined1 auStack_138 [8];
  FString FStack_130;
  longlong *plStack_120;
  uint uStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  longlong *plStack_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  int iStack_b8;
  int iStack_b4;
  FString FStack_b0;
  FString FStack_a0;
  undefined1 auStack_90 [32];
  uint *puStack_70;
  uint uStack_68;
  undefined8 uStack_60;
  int iStack_5c;
  ForElementType<FSetElementId> FStack_50;
  int iStack_48;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x118));
  if (bVar4) {
    this = (UDS_CheatData *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x118));
    pFVar5 = UDS_CheatData::GetCheatSlotInfo(this,*(int *)((longlong)param_1 + 0xa0));
    iStack_b8 = pFVar5->CheatIndex;
    iStack_b4 = pFVar5->Tab;
    ::FString::FString(&FStack_b0,&pFVar5->CheatName);
    ::FString::FString(&FStack_a0,&pFVar5->Command);
    _uStack_68 = ___xmm_00000000ffffffff0000008000000000;
    uStack_60 = _UNK_150631d98;
    auStack_90._0_8_ = 0;
    auStack_90._8_8_ = 0;
    puStack_70 = (uint *)0x0;
    FStack_50 = (ForElementType<FSetElementId>)0x0;
    uVar10 = 0;
    iStack_48 = 0;
    TSet<TTuple<int,FDS_CheatSlotParam>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<int,FDS_CheatSlotParam>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>,FDefaultSetAllocator>
                 *)auStack_90,
                (TSet<TTuple<int,FDS_CheatSlotParam>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>,FDefaultSetAllocator>
                 *)&pFVar5->CheatSlotParamMap);
    FStack_130.Data.ArrayNum = *(int *)((longlong)param_1 + 0xc0);
    lVar8 = (longlong)FStack_130.Data.ArrayNum;
    _Src = *(void **)((longlong)param_1 + 0xb8);
    FStack_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (FStack_130.Data.ArrayNum == 0) {
      FStack_130.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,FStack_130.Data.ArrayNum,0,(ForAnyElementType *)&FStack_130,
                 FStack_130.Data.ArrayNum,&FStack_130.Data.ArrayMax);
      memcpy(FStack_130.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
    }
    uVar9 = uStack_68;
    uStack_114 = 1;
    uStack_104 = uVar10;
    uStack_100 = 0;
    if (uStack_68 != 0) {
      puVar11 = (uint *)(auStack_90 + 0x10);
      if (puStack_70 != (uint *)0x0) {
        puVar11 = puStack_70;
      }
      uVar12 = *puVar11;
      uStack_100 = 0;
      uVar10 = 0;
      while (uVar12 == 0) {
        lVar8 = (longlong)(int)uVar10;
        uStack_100 = uStack_100 + 0x20;
        uVar10 = uVar10 + 1;
        uStack_104 = uStack_68;
        if ((int)((uStack_68 - 1) + ((int)(uStack_68 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
        goto LAB_14bfb9430;
        uVar12 = puVar11[lVar8 + 1];
      }
      uStack_114 = -uVar12 & uVar12;
      uVar1 = (ulonglong)uStack_114 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_f0 = (int)lVar8;
      uStack_104 = iStack_f0 + -1 + uStack_100;
      if ((int)uStack_68 < (int)uStack_104) {
        uStack_104 = uStack_68;
      }
    }
LAB_14bfb9430:
    plStack_120 = (longlong *)auStack_90;
    pTStack_110 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_90 + 0x10);
    iStack_f8 = auStack_90._8_4_ - iStack_5c;
    uVar12 = uStack_68 & 0xffffffe0;
    uStack_108 = 0xffffffff;
    TStack_e0.CurrentBitIndex = uStack_104;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    TStack_e0._padding_ = CONCAT44(uStack_114,uVar10);
    iVar7 = (int)uStack_68 >> 5;
    TStack_e0._28_4_ = uStack_104;
    TStack_e0.BaseBitIndex = uStack_100;
    uStack_c0 = CONCAT44(uStack_f4,iStack_f8);
    bVar6 = (byte)_uStack_68;
    uStack_118 = uVar10;
    uStack_fc = uStack_104;
    plStack_e8 = plStack_120;
    TStack_e0.Array = pTStack_110;
    if ((int)uStack_68 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (uVar9 != uStack_68) {
      puVar11 = (uint *)(auStack_90 + 0x10);
      if (puStack_70 != (uint *)0x0) {
        puVar11 = puStack_70;
      }
      uVar10 = -1 << (bVar6 & 0x1f) & puVar11[iVar7];
      while (uVar10 == 0) {
        lVar8 = (longlong)iVar7;
        uVar12 = uVar12 + 0x20;
        iVar7 = iVar7 + 1;
        uVar9 = uStack_68;
        if ((int)((uStack_68 - 1) + ((int)(uStack_68 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
        goto LAB_14bfb9550;
        uVar10 = puVar11[lVar8 + 1];
      }
      uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar9 = (int)lVar8 + -1 + uVar12;
      if ((int)uStack_68 < (int)uVar9) {
        uVar9 = uStack_68;
      }
    }
LAB_14bfb9550:
    plVar3 = plStack_e8;
    if ((int)plStack_e8[1] - *(int *)((longlong)plStack_e8 + 0x34) != (int)uStack_c0) {
      `TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_138);
    }
    if (((TStack_e0.CurrentBitIndex != uVar9) ||
        (TStack_e0.Array != (TBitArray<FDefaultBitArrayAllocator> *)(auStack_90 + 0x10))) ||
       (plVar3 != (longlong *)auStack_90)) {
      lVar8 = *plVar3 + (longlong)TStack_e0.CurrentBitIndex * 0x50;
      if (*(char *)(lVar8 + 0x28) != '\0') {
        if (*(int *)(lVar8 + 0x38) < 2) {
          if (*(char *)(lVar8 + 0x40) == '\x01') goto LAB_14bfb9604;
        }
        else {
          ::FString::AppendChars(&FStack_130," ",1);
          uVar10 = *(int *)(lVar8 + 0x38) - 1;
          if (*(int *)(lVar8 + 0x38) == 0) {
            uVar10 = 0;
          }
          ::FString::AppendChars(&FStack_130,*(wchar_t **)(lVar8 + 0x30),uVar10);
        }
      }
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
      goto LAB_14bfb9550;
    }
    UDS_GameInstance::ConsoleCommand(&FStack_130);
LAB_14bfb9604:
    if (FStack_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_130.Data.AllocatorInstance.Data);
    }
    iStack_48 = 0;
    if (FStack_50 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_50);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)auStack_90);
    if (FStack_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a0.Data.AllocatorInstance.Data);
    }
    if (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetSlotBackColor_WrapperImpl @ 14b6fc3c0

void __cdecl UDS_VM_WB_CheatSlot::SetSlotBackColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0x108)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0x10c))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0x110))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0x114))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::SlotBackColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::SlotBackColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0x108) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0x10c) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x110) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x114) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b6fc3d0

UClass * __cdecl UDS_VM_WB_CheatSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WB_CheatSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WB_CheatSlot",
               &Z_Registration_Info_UClass_UDS_VM_WB_CheatSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_WB_CheatSlot,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WB_CheatSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_WB_CheatSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WB_CheatSlot.InnerSingleton;
}

// UDS_VM_WB_CheatSlot @ 14b6fff80

UDS_VM_WB_CheatSlot * __thiscall
UDS_VM_WB_CheatSlot::UDS_VM_WB_CheatSlot(UDS_VM_WB_CheatSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatSlot__6B_;
  (this->CheatName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CheatName).Data.ArrayNum = 0;
  (this->CheatName).Data.ArrayMax = 0;
  (this->Command).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Command).Data.ArrayNum = 0;
  (this->Command).Data.ArrayMax = 0;
  (this->VM_CheatParam1).field0_0x0.DebugPtr = (UDS_VM_WB_CheatParam *)0x0;
  (this->VM_CheatParam2).field0_0x0.DebugPtr = (UDS_VM_WB_CheatParam *)0x0;
  (this->VM_CheatParam3).field0_0x0.DebugPtr = (UDS_VM_WB_CheatParam *)0x0;
  (this->VM_CheatParam4).field0_0x0.DebugPtr = (UDS_VM_WB_CheatParam *)0x0;
  (this->ClickConfirmButton)._padding_ = '\0';
  (this->ClickConfirmButton).bIsCustomSelected = false;
  (this->ClickConfirmButton).bIsLacked = false;
  (this->ClickConfirmButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickConfirmButton).Delegate = 0;
  *(undefined8 *)&(this->ClickConfirmButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickConfirmButton).Delegate.field_0x10 = 0;
  this->CheatIndex = 0;
  this->Tab = 0;
  (this->SlotBackColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->CheatData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_WB_CheatSlot @ 14b700030

UDS_VM_WB_CheatSlot * __thiscall
UDS_VM_WB_CheatSlot::UDS_VM_WB_CheatSlot(UDS_VM_WB_CheatSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatSlot__6B_;
  (this->CheatName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CheatName).Data.ArrayNum = 0;
  (this->CheatName).Data.ArrayMax = 0;
  (this->Command).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Command).Data.ArrayNum = 0;
  (this->Command).Data.ArrayMax = 0;
  (this->VM_CheatParam1).field0_0x0.DebugPtr = (UDS_VM_WB_CheatParam *)0x0;
  (this->VM_CheatParam2).field0_0x0.DebugPtr = (UDS_VM_WB_CheatParam *)0x0;
  (this->VM_CheatParam3).field0_0x0.DebugPtr = (UDS_VM_WB_CheatParam *)0x0;
  (this->VM_CheatParam4).field0_0x0.DebugPtr = (UDS_VM_WB_CheatParam *)0x0;
  (this->ClickConfirmButton)._padding_ = '\0';
  (this->ClickConfirmButton).bIsCustomSelected = false;
  (this->ClickConfirmButton).bIsLacked = false;
  (this->ClickConfirmButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickConfirmButton).Delegate = 0;
  *(undefined8 *)&(this->ClickConfirmButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickConfirmButton).Delegate.field_0x10 = 0;
  this->CheatIndex = 0;
  this->Tab = 0;
  (this->SlotBackColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->CheatData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_WB_CheatSlot @ 14b702ac0

void __thiscall UDS_VM_WB_CheatSlot::~UDS_VM_WB_CheatSlot(UDS_VM_WB_CheatSlot *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickConfirmButton).Delegate);
  pvVar1 = *(void **)&(this->ClickConfirmButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickConfirmButton).Delegate);
  pFVar2 = (this->Command).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CheatName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b705c80

IClassDescriptor * __thiscall
UDS_VM_WB_CheatSlot::GetFieldNotificationDescriptor(UDS_VM_WB_CheatSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WB_CheatSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b706590

UClass * __cdecl UDS_VM_WB_CheatSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WB_CheatSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WB_CheatSlot",
               &Z_Registration_Info_UClass_UDS_VM_WB_CheatSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_WB_CheatSlot,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WB_CheatSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_WB_CheatSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WB_CheatSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WB_CheatSlot @ 14b7075a0

void __cdecl UDS_VM_WB_CheatSlot::StaticRegisterNativesUDS_VM_WB_CheatSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_WB_CheatSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsEmptySlot @ 14b7087d0

void __cdecl UDS_VM_WB_CheatSlot::execIsEmptySlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsEmptySlot((UDS_VM_WB_CheatSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// CheatSlotMakeParam @ 14bf9d470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDS_VM_WB_CheatSlot::CheatSlotMakeParam
          (UDS_VM_WB_CheatSlot *this,int param_1,
          TWeakObjectPtr<UDS_VM_WB_CheatParam,FWeakObjectPtr> param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  UDS_CheatData *this_00;
  FDS_CheatSlotInfo *pFVar5;
  FDS_ViewModelContext *pFVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_01;
  UDS_ViewModelBase *this_02;
  ForElementType<FSetElementId> FVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  FWeakObjectPtr local_res18 [2];
  undefined1 auStackY_108 [32];
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  int local_b8;
  int local_b4;
  FString local_b0;
  FString local_a0;
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_res18[0] = param_2.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
  if ((bVar4) && (bVar4 = FWeakObjectPtr::IsValid(local_res18), bVar4)) {
    this_00 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
    pFVar5 = UDS_CheatData::GetCheatSlotInfo(this_00,this->CheatIndex);
    local_b8 = pFVar5->CheatIndex;
    local_b4 = pFVar5->Tab;
    ::FString::FString(&local_b0,&pFVar5->CheatName);
    ::FString::FString(&local_a0,&pFVar5->Command);
    pFVar10 = (FDS_ViewModelContext *)0x0;
    local_68 = ___xmm_00000000ffffffff0000008000000000;
    uStack_60 = _UNK_150631d98;
    local_90._0_8_ = (FScriptContainerElement *)0x0;
    local_90._8_8_ = 0;
    local_70 = (void *)0x0;
    local_50 = (ForElementType<FSetElementId>)0x0;
    local_48 = 0;
    TSet<TTuple<int,FDS_CheatSlotParam>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<int,FDS_CheatSlotParam>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>,FDefaultSetAllocator>
                 *)local_90,
                (TSet<TTuple<int,FDS_CheatSlotParam>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>,FDefaultSetAllocator>
                 *)&pFVar5->CheatSlotParamMap);
    if (local_90._8_4_ != uStack_60._4_4_) {
      FVar8 = (ForElementType<FSetElementId>)local_58;
      if (local_50 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = local_50;
      }
      for (iVar1 = *(int *)((longlong)FVar8 + (ulonglong)(local_48 - 1U & param_1) * 4); iVar1 != -1
          ; iVar1 = *(int *)(local_90._0_8_ + (longlong)iVar1 * 0x50 + 0x48)) {
        if (*(int *)(local_90._0_8_ + (longlong)iVar1 * 0x50) == param_1) {
          pFVar6 = ::operator_new(0x28);
          pFVar9 = pFVar10;
          if (pFVar6 != (FDS_ViewModelContext *)0x0) {
            *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
            *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
            (pFVar6->ViewModelName).ComparisonIndex = 0;
            (pFVar6->ViewModelName).Number = 0;
            pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_CheatParam__6B_;
            pFVar6[1]._padding_ = 0;
            pFVar9 = pFVar6;
          }
          pFVar6 = ::operator_new(0x20);
          if (pFVar6 != (FDS_ViewModelContext *)0x0) {
            *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
            *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
            pFVar6->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CheatParam__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
            ;
            ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
            *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar9;
            pFVar10 = pFVar6;
          }
          if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pUVar7 = FDS_ViewModelContext_CheatParam::StaticStruct();
          *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar7;
          this_01 = UDS_ViewModelContextManager::GetInst();
          if (this_01 != (UDS_ViewModelContextManager *)0x0) {
            if (pFVar10 != (FDS_ViewModelContext *)0x0) {
              LOCK();
              *(atomic<int> *)&pFVar10->DerivedStaticStruct =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
              UNLOCK();
            }
            local_d8.Object = pFVar9;
            local_d8.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar10;
            UDS_ViewModelContextManager::RegisterContext(this_01,&local_d8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d8.SharedReferenceCount.ReferenceController);
          }
          pFVar9->ViewModelTemplateKey = W_CheatParam;
          *(int *)&pFVar9[1]._padding_ = this->CheatIndex;
          *(int *)((longlong)&pFVar9[1]._padding_ + 4) = param_1;
          this_02 = (UDS_ViewModelBase *)FWeakObjectPtr::Get(local_res18);
          if (pFVar10 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar10->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_c8.Object = pFVar9;
          local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10
          ;
          UDS_ViewModelBase::SetContext(this_02,&local_c8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar10);
          break;
        }
      }
    }
    local_48 = 0;
    if (local_50 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_50);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_90,0,local_90._8_4_);
    iVar1 = SUB84(local_90._8_8_,4);
    local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
    }
    uVar3 = local_68._4_4_;
    local_68 = (ulonglong)local_68._4_4_ << 0x20;
    uStack_60 = 0xffffffff;
    if (0x80 < uVar3) {
      local_68 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_90._0_8_);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// InitViewModel @ 14bfaf3e0

void __thiscall UDS_VM_WB_CheatSlot::InitViewModel(UDS_VM_WB_CheatSlot *this)

{
  UDS_VM_WB_CheatParam *pUVar1;
  longlong *plVar2;
  FName local_18;
  int local_10;
  
  if ((this->VM_CheatParam1).field0_0x0.DebugPtr == (UDS_VM_WB_CheatParam *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_WB_CheatParam>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_WB_CheatParam *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_CheatParam1).field0_0x0.DebugPtr = pUVar1;
    local_10 = FFieldNotificationClassDescriptor::VM_CheatParam1.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::VM_CheatParam1.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  plVar2 = &this->_padding_;
  if ((this->VM_CheatParam2).field0_0x0.DebugPtr == (UDS_VM_WB_CheatParam *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_WB_CheatParam>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_WB_CheatParam *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_CheatParam2).field0_0x0.DebugPtr = pUVar1;
    local_10 = FFieldNotificationClassDescriptor::VM_CheatParam2.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::VM_CheatParam2.FieldName;
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  }
  if ((this->VM_CheatParam3).field0_0x0.DebugPtr == (UDS_VM_WB_CheatParam *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_WB_CheatParam>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_WB_CheatParam *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_CheatParam3).field0_0x0.DebugPtr = pUVar1;
    local_10 = FFieldNotificationClassDescriptor::VM_CheatParam3.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::VM_CheatParam3.FieldName;
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  }
  if ((this->VM_CheatParam4).field0_0x0.DebugPtr == (UDS_VM_WB_CheatParam *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_WB_CheatParam>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_WB_CheatParam *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_CheatParam4).field0_0x0.DebugPtr = pUVar1;
    local_10 = FFieldNotificationClassDescriptor::VM_CheatParam4.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::VM_CheatParam4.FieldName;
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  }
  return;
}

// IsEmptySlot @ 14bfb2f90

bool __thiscall UDS_VM_WB_CheatSlot::IsEmptySlot(UDS_VM_WB_CheatSlot *this)

{
  return this->CheatIndex < 1;
}

// OnClickConfirmButton @ 14bfb9280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDS_VM_WB_CheatSlot::OnClickConfirmButton(UDS_VM_WB_CheatSlot *this,FDS_ButtonEventField *param_1)

{
  ulonglong uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  UDS_CheatData *this_00;
  FDS_CheatSlotInfo *pFVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 auStackY_178 [32];
  undefined1 local_138 [8];
  FString local_130;
  longlong *local_120;
  uint uStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  int local_b8;
  int local_b4;
  FString local_b0;
  FString local_a0;
  undefined1 local_90 [32];
  uint *local_70;
  uint local_68;
  undefined8 uStack_60;
  int iStack_5c;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar4 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
  if (bVar4) {
    this_00 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
    pFVar5 = UDS_CheatData::GetCheatSlotInfo(this_00,this->CheatIndex);
    local_b8 = pFVar5->CheatIndex;
    local_b4 = pFVar5->Tab;
    ::FString::FString(&local_b0,&pFVar5->CheatName);
    ::FString::FString(&local_a0,&pFVar5->Command);
    _local_68 = ___xmm_00000000ffffffff0000008000000000;
    uStack_60 = _UNK_150631d98;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_70 = (uint *)0x0;
    local_50 = (ForElementType<FSetElementId>)0x0;
    uVar10 = 0;
    local_48 = 0;
    TSet<TTuple<int,FDS_CheatSlotParam>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<int,FDS_CheatSlotParam>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>,FDefaultSetAllocator>
                 *)local_90,
                (TSet<TTuple<int,FDS_CheatSlotParam>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>,FDefaultSetAllocator>
                 *)&pFVar5->CheatSlotParamMap);
    local_130.Data.ArrayNum = (this->Command).Data.ArrayNum;
    lVar8 = (longlong)local_130.Data.ArrayNum;
    _Src = (this->Command).Data.AllocatorInstance.Data;
    local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_130.Data.ArrayNum == 0) {
      local_130.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_130.Data.ArrayNum,0,(ForAnyElementType *)&local_130,
                 local_130.Data.ArrayNum,&local_130.Data.ArrayMax);
      memcpy(local_130.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
    }
    uVar9 = local_68;
    uStack_114 = 1;
    uStack_104 = uVar10;
    local_100 = 0;
    if (local_68 != 0) {
      puVar11 = (uint *)(local_90 + 0x10);
      if (local_70 != (uint *)0x0) {
        puVar11 = local_70;
      }
      uVar12 = *puVar11;
      local_100 = 0;
      uVar10 = 0;
      while (uVar12 == 0) {
        lVar8 = (longlong)(int)uVar10;
        local_100 = local_100 + 0x20;
        uVar10 = uVar10 + 1;
        uStack_104 = local_68;
        if ((int)((local_68 - 1) + ((int)(local_68 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
        goto LAB_14bfb9430;
        uVar12 = puVar11[lVar8 + 1];
      }
      uStack_114 = -uVar12 & uVar12;
      uVar1 = (ulonglong)uStack_114 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_f0 = (int)lVar8;
      uStack_104 = local_f0 + -1 + local_100;
      if ((int)local_68 < (int)uStack_104) {
        uStack_104 = local_68;
      }
    }
LAB_14bfb9430:
    local_120 = (longlong *)local_90;
    local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10);
    iStack_f8 = local_90._8_4_ - iStack_5c;
    uVar12 = local_68 & 0xffffffe0;
    uStack_108 = 0xffffffff;
    TStack_e0.CurrentBitIndex = uStack_104;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    TStack_e0._padding_ = CONCAT44(uStack_114,uVar10);
    iVar7 = (int)local_68 >> 5;
    TStack_e0._28_4_ = uStack_104;
    TStack_e0.BaseBitIndex = local_100;
    uStack_c0 = CONCAT44(uStack_f4,iStack_f8);
    bVar6 = (byte)_local_68;
    uStack_118 = uVar10;
    uStack_fc = uStack_104;
    local_e8 = local_120;
    TStack_e0.Array = local_110;
    if ((int)local_68 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (uVar9 != local_68) {
      puVar11 = (uint *)(local_90 + 0x10);
      if (local_70 != (uint *)0x0) {
        puVar11 = local_70;
      }
      uVar10 = -1 << (bVar6 & 0x1f) & puVar11[iVar7];
      while (uVar10 == 0) {
        lVar8 = (longlong)iVar7;
        uVar12 = uVar12 + 0x20;
        iVar7 = iVar7 + 1;
        uVar9 = local_68;
        if ((int)((local_68 - 1) + ((int)(local_68 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
        goto LAB_14bfb9550;
        uVar10 = puVar11[lVar8 + 1];
      }
      uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar9 = (int)lVar8 + -1 + uVar12;
      if ((int)local_68 < (int)uVar9) {
        uVar9 = local_68;
      }
    }
LAB_14bfb9550:
    plVar3 = local_e8;
    if ((int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34) != (int)uStack_c0) {
      `TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_138);
    }
    if (((TStack_e0.CurrentBitIndex != uVar9) ||
        (TStack_e0.Array != (TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10))) ||
       (plVar3 != (longlong *)local_90)) {
      lVar8 = *plVar3 + (longlong)TStack_e0.CurrentBitIndex * 0x50;
      if (*(char *)(lVar8 + 0x28) != '\0') {
        if (*(int *)(lVar8 + 0x38) < 2) {
          if (*(char *)(lVar8 + 0x40) == '\x01') goto LAB_14bfb9604;
        }
        else {
          ::FString::AppendChars(&local_130," ",1);
          uVar10 = *(int *)(lVar8 + 0x38) - 1;
          if (*(int *)(lVar8 + 0x38) == 0) {
            uVar10 = 0;
          }
          ::FString::AppendChars(&local_130,*(wchar_t **)(lVar8 + 0x30),uVar10);
        }
      }
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
      goto LAB_14bfb9550;
    }
    UDS_GameInstance::ConsoleCommand(&local_130);
LAB_14bfb9604:
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    local_48 = 0;
    if (local_50 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_50);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_90);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnSetViewModel @ 14bfc23c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_VM_WB_CheatSlot::OnSetViewModel
          (UDS_VM_WB_CheatSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  FString *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDS_ViewModelContext *pFVar4;
  UDS_VM_WB_CheatParam *pUVar5;
  FName FVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  UDS_DataManager *this_00;
  TWeakObjectPtr<UDS_CheatData,FWeakObjectPtr> TVar11;
  UDS_CheatData *this_01;
  FDS_CheatSlotInfo *pFVar12;
  undefined1 auStackY_218 [32];
  FName local_1d8 [2];
  FWeakObjectPtr local_1c8;
  FWeakObjectPtr local_1c0;
  FWeakObjectPtr local_1b8;
  UDS_VM_WB_CheatParam *local_1b0;
  UDS_VM_WB_CheatParam *local_1a8;
  UDS_VM_WB_CheatParam *local_1a0;
  UDS_VM_WB_CheatParam *local_198 [2];
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  FName local_158;
  int local_150;
  FName local_148;
  int local_140;
  FName local_138;
  int local_130;
  FName local_128;
  int local_120;
  FName local_118;
  int local_110;
  FName local_108;
  int local_100;
  TSharedPtr<FDS_ViewModelContext_CheatSlot,1> local_f8;
  TSharedPtr<FDS_ViewModelContext,1> local_e8 [2];
  undefined1 local_c8 [104];
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this_00 = UDS_DataManager::GetInst();
  if (this_00 == (UDS_DataManager *)0x0) goto LAB_14bfc29b8;
  TVar11 = UDS_DataManager::GetCheatData(this_00);
                    /* WARNING: Load size is inaccurate */
  (this->CheatData).WeakPtr = *TVar11.WeakPtr;
  bVar9 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
  if ((!bVar9) || (pFVar4 = param_1->Object, pFVar4 == (FDS_ViewModelContext *)0x0))
  goto LAB_14bfc29b8;
  local_e8[0].SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_e8[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e8[0].Object = pFVar4;
  SafeCast<FDS_ViewModelContext_CheatSlot>(&local_f8,local_e8);
  FVar6 = FFieldNotificationClassDescriptor::CheatIndex.FieldName;
  if (local_f8.Object != (FDS_ViewModelContext_CheatSlot *)0x0) {
    if (this->CheatIndex != (local_f8.Object)->CheatIndex) {
      local_180 = FFieldNotificationClassDescriptor::CheatIndex.BitNumber;
      this->CheatIndex = (local_f8.Object)->CheatIndex;
      local_188 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    }
    this_01 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
    pFVar12 = UDS_CheatData::GetCheatSlotInfo(this_01,(local_f8.Object)->CheatIndex);
    FDS_CheatSlotInfo::FDS_CheatSlotInfo((FDS_CheatSlotInfo *)local_c8,pFVar12);
    FVar6 = FFieldNotificationClassDescriptor::Tab.FieldName;
    if (this->Tab != local_c8._4_4_) {
      local_170 = FFieldNotificationClassDescriptor::Tab.BitNumber;
      this->Tab = local_c8._4_4_;
      local_178 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
    }
    iVar7 = FFieldNotificationClassDescriptor::CheatName.BitNumber;
    pFVar2 = &this->CheatName;
    iVar10 = (this->CheatName).Data.ArrayNum;
    local_1d8[0] = FFieldNotificationClassDescriptor::CheatName.FieldName;
    if (iVar10 == local_c8._16_4_) {
      if (1 < iVar10) {
        iVar10 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar2->Data).AllocatorInstance.Data,
                            (wchar_t *)local_c8._8_8_);
        bVar9 = iVar10 == 0;
        goto LAB_14bfc256f;
      }
    }
    else {
      bVar9 = iVar10 + local_c8._16_4_ == 1;
LAB_14bfc256f:
      uVar8 = local_c8._8_8_;
      if (!bVar9) {
        if (pFVar2 != (FString *)(local_c8 + 8)) {
          iVar10 = (this->CheatName).Data.ArrayMax;
          piVar1 = &(this->CheatName).Data.ArrayMax;
          (this->CheatName).Data.ArrayNum = local_c8._16_4_;
          if ((local_c8._16_4_ == 0) && (iVar10 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_c8._16_4_,iVar10,(ForAnyElementType *)pFVar2,local_c8._16_4_,piVar1
                      );
            if (local_c8._16_4_ != 0) {
              memcpy((pFVar2->Data).AllocatorInstance.Data,(void *)uVar8,
                     (longlong)(int)local_c8._16_4_ * 2);
            }
          }
        }
        local_168 = local_1d8[0];
        local_160 = iVar7;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
      }
    }
    iVar7 = FFieldNotificationClassDescriptor::Command.BitNumber;
    pFVar2 = &this->Command;
    iVar10 = (this->Command).Data.ArrayNum;
    local_1d8[0] = FFieldNotificationClassDescriptor::Command.FieldName;
    if (iVar10 == local_c8._32_4_) {
      if (1 < iVar10) {
        iVar10 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar2->Data).AllocatorInstance.Data,
                            (wchar_t *)local_c8._24_8_);
        bVar9 = iVar10 == 0;
        goto LAB_14bfc2632;
      }
    }
    else {
      bVar9 = iVar10 + local_c8._32_4_ == 1;
LAB_14bfc2632:
      uVar8 = local_c8._24_8_;
      if (!bVar9) {
        if (pFVar2 != (FString *)(local_c8 + 0x18)) {
          iVar10 = (this->Command).Data.ArrayMax;
          piVar1 = &(this->Command).Data.ArrayMax;
          (this->Command).Data.ArrayNum = local_c8._32_4_;
          if ((local_c8._32_4_ == 0) && (iVar10 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_c8._32_4_,iVar10,(ForAnyElementType *)pFVar2,local_c8._32_4_,piVar1
                      );
            if (local_c8._32_4_ != 0) {
              memcpy((pFVar2->Data).AllocatorInstance.Data,(void *)uVar8,
                     (longlong)(int)local_c8._32_4_ * 2);
            }
          }
        }
        local_158 = local_1d8[0];
        local_150 = iVar7;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
      }
    }
    pUVar5 = (this->VM_CheatParam1).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 != (UDS_VM_WB_CheatParam *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_VM_WB_CheatParam *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
    }
    local_1c8.ObjectIndex = 0;
    local_1c8.ObjectSerialNumber = 0;
    local_1b0 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_WB_CheatParam *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)&local_1b0);
    CheatSlotMakeParam(this,0,(TWeakObjectPtr<UDS_VM_WB_CheatParam,FWeakObjectPtr>)local_1c8);
    pUVar5 = (this->VM_CheatParam2).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 != (UDS_VM_WB_CheatParam *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_VM_WB_CheatParam *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
    }
    local_1c0.ObjectIndex = 0;
    local_1c0.ObjectSerialNumber = 0;
    local_1a8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_WB_CheatParam *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=(&local_1c0,(FObjectPtr)&local_1a8);
    CheatSlotMakeParam(this,1,(TWeakObjectPtr<UDS_VM_WB_CheatParam,FWeakObjectPtr>)local_1c0);
    pUVar5 = (this->VM_CheatParam3).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 != (UDS_VM_WB_CheatParam *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_VM_WB_CheatParam *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
    }
    local_1b8.ObjectIndex = 0;
    local_1b8.ObjectSerialNumber = 0;
    local_1a0 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_WB_CheatParam *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=(&local_1b8,(FObjectPtr)&local_1a0);
    CheatSlotMakeParam(this,2,(TWeakObjectPtr<UDS_VM_WB_CheatParam,FWeakObjectPtr>)local_1b8);
    pUVar5 = (this->VM_CheatParam4).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 != (UDS_VM_WB_CheatParam *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_VM_WB_CheatParam *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
    }
    local_1d8[0].ComparisonIndex.Value = 0;
    local_1d8[0].Number = 0;
    local_198[0] = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_WB_CheatParam *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)local_1d8,(FObjectPtr)local_198);
    CheatSlotMakeParam(this,3,(TWeakObjectPtr<UDS_VM_WB_CheatParam,FWeakObjectPtr>)local_1d8[0]);
    local_140 = FFieldNotificationClassDescriptor::VM_CheatParam1.BitNumber;
    local_148 = FFieldNotificationClassDescriptor::VM_CheatParam1.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    local_130 = FFieldNotificationClassDescriptor::VM_CheatParam2.BitNumber;
    local_138 = FFieldNotificationClassDescriptor::VM_CheatParam2.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_138);
    local_120 = FFieldNotificationClassDescriptor::VM_CheatParam3.BitNumber;
    local_128 = FFieldNotificationClassDescriptor::VM_CheatParam3.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_128);
    local_110 = FFieldNotificationClassDescriptor::VM_CheatParam4.BitNumber;
    local_118 = FFieldNotificationClassDescriptor::VM_CheatParam4.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_118);
    local_100 = FFieldNotificationClassDescriptor::IsEmptySlot.BitNumber;
    local_108 = FFieldNotificationClassDescriptor::IsEmptySlot.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_108);
    local_58 = 0;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_c8 + 0x28));
    if ((FScriptContainerElement *)local_c8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._24_8_);
    }
    if ((FScriptContainerElement *)local_c8._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._8_8_);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
LAB_14bfc29b8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCheatIndex @ 14bfd6c50

void __thiscall UDS_VM_WB_CheatSlot::SetCheatIndex(UDS_VM_WB_CheatSlot *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CheatIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CheatIndex.FieldName;
  if (this->CheatIndex != *param_1) {
    this->CheatIndex = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetCheatName @ 14bfd6ca0

void __thiscall UDS_VM_WB_CheatSlot::SetCheatName(UDS_VM_WB_CheatSlot *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::CheatName.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::CheatName.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->CheatName).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->CheatName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->CheatName,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetCommand @ 14bfd6fd0

void __thiscall UDS_VM_WB_CheatSlot::SetCommand(UDS_VM_WB_CheatSlot *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::Command.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Command.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->Command).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Command).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->Command,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSlotBackColor @ 14bfdd960

void __thiscall
UDS_VM_WB_CheatSlot::SetSlotBackColor(UDS_VM_WB_CheatSlot *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->SlotBackColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->SlotBackColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->SlotBackColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->SlotBackColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::SlotBackColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::SlotBackColor.FieldName;
    (this->SlotBackColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->SlotBackColor).field0_0x0._s_0.G = fVar1;
    (this->SlotBackColor).field0_0x0._s_0.B = fVar2;
    (this->SlotBackColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTab @ 14bfdda30

void __thiscall UDS_VM_WB_CheatSlot::SetTab(UDS_VM_WB_CheatSlot *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Tab.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Tab.FieldName;
  if (this->Tab != *param_1) {
    this->Tab = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

