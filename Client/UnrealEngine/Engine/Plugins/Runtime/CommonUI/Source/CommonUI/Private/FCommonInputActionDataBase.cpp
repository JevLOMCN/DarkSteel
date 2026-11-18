// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 16

// StaticStruct @ 14a784860

UScriptStruct * __cdecl FCommonInputActionDataBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCommonInputActionDataBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonUI();
    Z_Registration_Info_UScriptStruct_FCommonInputActionDataBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputActionDataBase,(UObject *)pUVar1,
                         L"CommonInputActionDataBase");
  }
  return Z_Registration_Info_UScriptStruct_FCommonInputActionDataBase.OuterSingleton;
}

// FCommonInputActionDataBase @ 14a7aa3f0

FCommonInputActionDataBase * __thiscall
FCommonInputActionDataBase::FCommonInputActionDataBase(FCommonInputActionDataBase *this)

{
  this->_padding_ = (longlong)&___7FCommonInputActionDataBase__6B_;
  FText::FText(&this->DisplayName);
  FText::FText(&this->HoldDisplayName);
  this->NavBarPriority = 0;
  (this->KeyboardInputTypeInfo).Key.KeyName.ComparisonIndex = 0;
  (this->KeyboardInputTypeInfo).Key.KeyName.Number = 0;
  (this->KeyboardInputTypeInfo).Key.KeyDetails.Object = (FKeyDetails *)0x0;
  (this->KeyboardInputTypeInfo).Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FSlateBrush::FSlateBrush(&(this->KeyboardInputTypeInfo).OverrideBrush);
  (this->KeyboardInputTypeInfo).OverrrideState = Enabled;
  (this->KeyboardInputTypeInfo).bActionRequiresHold = false;
  (this->KeyboardInputTypeInfo).OverrideBrush.DrawAs.Value = '\0';
  (this->KeyboardInputTypeInfo).HoldTime = 0.5;
  (this->KeyboardInputTypeInfo).HoldRollbackTime = 0.0;
  (this->DefaultGamepadInputTypeInfo).Key.KeyName.ComparisonIndex = 0;
  (this->DefaultGamepadInputTypeInfo).Key.KeyName.Number = 0;
  (this->DefaultGamepadInputTypeInfo).Key.KeyDetails.Object = (FKeyDetails *)0x0;
  (this->DefaultGamepadInputTypeInfo).Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FSlateBrush::FSlateBrush(&(this->DefaultGamepadInputTypeInfo).OverrideBrush);
  (this->DefaultGamepadInputTypeInfo).OverrrideState = Enabled;
  (this->DefaultGamepadInputTypeInfo).bActionRequiresHold = false;
  (this->DefaultGamepadInputTypeInfo).OverrideBrush.DrawAs.Value = '\0';
  (this->DefaultGamepadInputTypeInfo).HoldTime = 0.5;
  (this->DefaultGamepadInputTypeInfo).HoldRollbackTime = 0.0;
  *(undefined8 *)&this->GamepadInputOverrides = 0;
  *(undefined8 *)&(this->GamepadInputOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->GamepadInputOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->GamepadInputOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->GamepadInputOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->GamepadInputOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GamepadInputOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->GamepadInputOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->GamepadInputOverrides).field_0x48 = 0;
  (this->TouchInputTypeInfo).Key.KeyName.ComparisonIndex = 0;
  (this->TouchInputTypeInfo).Key.KeyName.Number = 0;
  (this->TouchInputTypeInfo).Key.KeyDetails.Object = (FKeyDetails *)0x0;
  (this->TouchInputTypeInfo).Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FSlateBrush::FSlateBrush(&(this->TouchInputTypeInfo).OverrideBrush);
  (this->TouchInputTypeInfo).OverrrideState = Enabled;
  (this->TouchInputTypeInfo).bActionRequiresHold = false;
  (this->TouchInputTypeInfo).OverrideBrush.DrawAs.Value = '\0';
  (this->TouchInputTypeInfo).HoldTime = 0.5;
  (this->TouchInputTypeInfo).HoldRollbackTime = 0.0;
  return this;
}

// ~FCommonInputActionDataBase @ 14a7b1590

void __thiscall
FCommonInputActionDataBase::~FCommonInputActionDataBase(FCommonInputActionDataBase *this)

{
  void *pvVar1;
  TReferenceControllerBase<1> *pTVar2;
  ITextData *pIVar3;
  
  (this->TouchInputTypeInfo).OverrideBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TouchInputTypeInfo).OverrideBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TouchInputTypeInfo).Key.KeyDetails.SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->GamepadInputOverrides).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GamepadInputOverrides).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GamepadInputOverrides);
  pTVar2 = (this->DefaultGamepadInputTypeInfo).OverrideBrush.ResourceHandle.Data.
           SharedReferenceCount.ReferenceController;
  (this->DefaultGamepadInputTypeInfo).OverrideBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DefaultGamepadInputTypeInfo).Key.KeyDetails.SharedReferenceCount.
             ReferenceController);
  pTVar2 = (this->KeyboardInputTypeInfo).OverrideBrush.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->KeyboardInputTypeInfo).OverrideBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->KeyboardInputTypeInfo).Key.KeyDetails.SharedReferenceCount.ReferenceController);
  pIVar3 = (this->HoldDisplayName).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->DisplayName).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  return;
}

// AddGamepadInputOverride @ 14a7be3e0

void __thiscall
FCommonInputActionDataBase::AddGamepadInputOverride
          (FCommonInputActionDataBase *this,FName *param_1,FCommonInputTypeInfo *param_2)

{
  TPairInitializer<FName_const_&,FCommonInputTypeInfo_const_&> local_res8 [2];
  FName *local_18;
  FCommonInputTypeInfo *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FName,FCommonInputTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FCommonInputTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FCommonInputTypeInfo_const_&>_>
            ((TSet<TTuple<FName,FCommonInputTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FCommonInputTypeInfo,0>,FDefaultSetAllocator>
              *)&this->GamepadInputOverrides,local_res8,(bool *)&local_18);
  return;
}

// CanDisplayInReflector @ 14a7c3a50

bool __thiscall
FCommonInputActionDataBase::CanDisplayInReflector
          (FCommonInputActionDataBase *this,ECommonInputType param_1,FName *param_2)

{
  bool bVar1;
  FName *pFVar2;
  FKey local_28;
  
  if (param_1 == MouseAndKeyboard) {
    return true;
  }
  if (param_1 == Gamepad) {
    pFVar2 = (FName *)(**(code **)(this->_padding_ + 0x20))();
    local_28.KeyDetails.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar2 + 2);
    local_28.KeyName = *pFVar2;
    local_28.KeyDetails.Object = *(FKeyDetails **)(pFVar2 + 1);
    if ((FName)local_28.KeyDetails.SharedReferenceCount.ReferenceController != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_28.KeyDetails.SharedReferenceCount.ReferenceController + 8) =
           (atomic<int>)
           ((int)*(atomic<int> *)
                  ((longlong)local_28.KeyDetails.SharedReferenceCount.ReferenceController + 8) + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar1 = FKey::IsValid(&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
    return bVar1;
  }
  return param_1 == Touch;
}

// GetCurrentInputActionIcon @ 14a7e1690

FSlateBrush * __thiscall
FCommonInputActionDataBase::GetCurrentInputActionIcon
          (FCommonInputActionDataBase *this,FSlateBrush *__return_storage_ptr__,
          UCommonInputSubsystem *param_1)

{
  ECommonInputType EVar1;
  bool bVar2;
  FName *pFVar3;
  UCommonInputPlatformSettings *this_00;
  FName FVar4;
  FSlateBrush *pFVar5;
  FKey local_e8;
  FSlateBrush local_c8;
  
  pFVar3 = (FName *)(**(code **)(this->_padding_ + 0x18))(this,param_1);
  FSlateBrush::FSlateBrush(&local_c8);
  this_00 = UCommonInputPlatformSettings::Get();
  FVar4 = UCommonInputSubsystem::GetCurrentGamepadName(param_1);
  FVar4 = *(FName *)FVar4;
  EVar1 = UCommonInputSubsystem::GetCurrentInputType(param_1);
  local_e8.KeyDetails.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(pFVar3 + 2);
  local_e8.KeyName = *pFVar3;
  local_e8.KeyDetails.Object = *(FKeyDetails **)(pFVar3 + 1);
  if ((FName)local_e8.KeyDetails.SharedReferenceCount.ReferenceController != (FName)0x0) {
    LOCK();
    *(int *)((longlong)local_e8.KeyDetails.SharedReferenceCount.ReferenceController + 8) =
         *(int *)((longlong)local_e8.KeyDetails.SharedReferenceCount.ReferenceController + 8) + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  bVar2 = UCommonInputPlatformSettings::TryGetInputBrush(this_00,&local_c8,&local_e8,EVar1,FVar4);
  if (bVar2) {
    pFVar5 = &local_c8;
  }
  else {
    pFVar5 = FStyleDefaults::GetNoBrush();
  }
  FSlateBrush::FSlateBrush(__return_storage_ptr__,pFVar5);
  local_c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetCurrentInputTypeInfo @ 14a7e1790

FCommonInputTypeInfo * __thiscall
FCommonInputActionDataBase::GetCurrentInputTypeInfo
          (FCommonInputActionDataBase *this,UCommonInputSubsystem *param_1)

{
  ECommonInputType EVar1;
  FCommonInputTypeInfo *pFVar2;
  FName local_res8 [2];
  
  EVar1 = MouseAndKeyboard;
  local_res8[0] = FCommonInputDefaults::GamepadGeneric;
  if (param_1 != (UCommonInputSubsystem *)0x0) {
    EVar1 = UCommonInputSubsystem::GetCurrentInputType(param_1);
    local_res8[0] = UCommonInputSubsystem::GetCurrentGamepadName(param_1);
    local_res8[0] = *(FName *)local_res8[0];
  }
  pFVar2 = (FCommonInputTypeInfo *)(**(code **)(this->_padding_ + 0x20))(this,EVar1,local_res8);
  return pFVar2;
}

// GetDefaultGamepadInputTypeInfo @ 14a7e1940

FCommonInputTypeInfo * __thiscall
FCommonInputActionDataBase::GetDefaultGamepadInputTypeInfo(FCommonInputActionDataBase *this)

{
  return &this->DefaultGamepadInputTypeInfo;
}

// GetInputTypeInfo @ 14a7e3100

/* WARNING: Enum "Type": Some values do not have unique names */

FCommonInputTypeInfo * __thiscall
FCommonInputActionDataBase::GetInputTypeInfo
          (FCommonInputActionDataBase *this,ECommonInputType param_1,FName *param_2)

{
  bool bVar1;
  FCommonInputTypeInfo *pFVar2;
  FCommonInputTypeInfo *pFVar3;
  FKey local_28;
  
  if (param_1 == MouseAndKeyboard) {
    return &this->KeyboardInputTypeInfo;
  }
  if (param_1 == Gamepad) {
    pFVar2 = TMapBase<FName,FCommonInputTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonInputTypeInfo,0>_>
             ::Find((TMapBase<FName,FCommonInputTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonInputTypeInfo,0>_>
                     *)&this->GamepadInputOverrides,*param_2);
    pFVar3 = &this->DefaultGamepadInputTypeInfo;
    if (pFVar2 != (FCommonInputTypeInfo *)0x0) {
      pFVar3 = pFVar2;
    }
    if (5 < (byte)LogCommonUI._0_1_) {
      local_28.KeyDetails.SharedReferenceCount.ReferenceController =
           (pFVar3->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      local_28.KeyName = (pFVar3->Key).KeyName;
      local_28.KeyDetails.Object = (pFVar3->Key).KeyDetails.Object;
      if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      bVar1 = FKey::IsValid(&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
      if (!bVar1) {
        FText::ToString(&this->DisplayName);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
      }
    }
    return pFVar3;
  }
  pFVar3 = &this->KeyboardInputTypeInfo;
  if (param_1 == Touch) {
    pFVar3 = &this->TouchInputTypeInfo;
  }
  return pFVar3;
}

// HasGamepadInputOverride @ 14a7f0c10

bool __thiscall
FCommonInputActionDataBase::HasGamepadInputOverride(FCommonInputActionDataBase *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->GamepadInputOverrides).field_0x8 !=
      *(int *)&(this->GamepadInputOverrides).field_0x34) {
    puVar4 = *(undefined1 **)&(this->GamepadInputOverrides).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->GamepadInputOverrides).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->GamepadInputOverrides).field_0x48 - 1U &
                              FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)((longlong)iVar3 * 0x100 + *(longlong *)&this->GamepadInputOverrides) == FVar1
           ) goto LAB_14a7f0c8f;
        iVar3 = *(int *)((longlong)iVar3 * 0x100 + 0xf0 + *(longlong *)&this->GamepadInputOverrides)
        ;
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14a7f0c8f:
  return iVar3 != -1;
}

// HasHoldBindings @ 14a7f0cb0

bool __thiscall FCommonInputActionDataBase::HasHoldBindings(FCommonInputActionDataBase *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((this->DefaultGamepadInputTypeInfo).bActionRequiresHold != false) {
    return true;
  }
  iVar12 = 0;
  puVar1 = &(this->GamepadInputOverrides).field_0x10;
  iVar3 = *(int *)&(this->GamepadInputOverrides).field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->GamepadInputOverrides).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14a7f0d6d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14a7f0d6d:
  uVar11 = *(uint *)&(this->GamepadInputOverrides).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->GamepadInputOverrides).field_0x8 -
                       *(int *)&(this->GamepadInputOverrides).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->GamepadInputOverrides).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->GamepadInputOverrides).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14a7f0e80;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14a7f0e80:
  while( true ) {
    if (*(int *)&(this->GamepadInputOverrides).field_0x8 -
        *(int *)&(this->GamepadInputOverrides).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (*(char *)((longlong)TStack_60.CurrentBitIndex * 0x100 + 0x29 +
                 *(longlong *)&this->GamepadInputOverrides) != '\0') {
      return true;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if ((this->KeyboardInputTypeInfo).bActionRequiresHold != false) {
    return true;
  }
  return (this->TouchInputTypeInfo).bActionRequiresHold != false;
}

// IsKeyBoundToInputActionData @ 14a7f5f20

bool __thiscall
FCommonInputActionDataBase::IsKeyBoundToInputActionData
          (FCommonInputActionDataBase *this,FKey *param_1,UCommonInputSubsystem *param_2)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName *pFVar4;
  
  pFVar4 = (FName *)(**(code **)(this->_padding_ + 0x18))(this,param_2);
  FVar1 = pFVar4[2];
  FVar2 = *pFVar4;
  if (FVar1 != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)FVar1 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar1 + 8) + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FVar3 = param_1->KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar1);
  return FVar3 == FVar2;
}

// IsKeyBoundToInputActionData @ 14a7f5f80

bool __thiscall
FCommonInputActionDataBase::IsKeyBoundToInputActionData
          (FCommonInputActionDataBase *this,FKey *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  FName *pFVar11;
  FScriptContainerElement *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FScriptContainerElement *local_res10;
  
  local_res8 = 0;
  pTVar2 = (this->KeyboardInputTypeInfo).Key.KeyDetails.SharedReferenceCount.ReferenceController;
  FVar3 = (this->KeyboardInputTypeInfo).Key.KeyName;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  bVar6 = false;
  if (param_1->KeyName == FVar3) {
    pTVar13 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
LAB_14a7f5ff3:
    bVar7 = true;
    bVar9 = true;
    if (!bVar6) goto LAB_14a7f6001;
  }
  else {
    pTVar13 = (this->TouchInputTypeInfo).Key.KeyDetails.SharedReferenceCount.ReferenceController;
    FVar3 = (this->TouchInputTypeInfo).Key.KeyName;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar6 = true;
    if (param_1->KeyName == FVar3) goto LAB_14a7f5ff3;
    bVar9 = false;
  }
  bVar7 = bVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
LAB_14a7f6001:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (!bVar7) {
    pTVar10 = UCommonInputBaseControllerData::GetRegisteredGamepads();
    pFVar12 = (pTVar10->AllocatorInstance).Data;
    iVar1 = pTVar10->ArrayNum;
    local_res10 = pFVar12 + (longlong)iVar1 * 8;
    while( true ) {
      pFVar8 = local_res10;
      if (pTVar10->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (pFVar12 == pFVar8) {
        return false;
      }
      pFVar11 = (FName *)(**(code **)(this->_padding_ + 0x20))(this,1,pFVar12);
      FVar3 = pFVar11[2];
      FVar4 = *pFVar11;
      if (FVar3 != (FName)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)FVar3 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)FVar3 + 8) + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      FVar5 = param_1->KeyName;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar3);
      if (FVar5 == FVar4) break;
      pFVar12 = pFVar12 + 8;
    }
  }
  return true;
}

// OnPostDataImport @ 14a7fe510

void __thiscall
FCommonInputActionDataBase::OnPostDataImport
          (FCommonInputActionDataBase *this,UDataTable *param_1,FName param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  return;
}

// PostSerialize @ 14a8029e0

void __thiscall
FCommonInputActionDataBase::PostSerialize(FCommonInputActionDataBase *this,FArchive *param_1)

{
  UObject *pUVar1;
  undefined1 *puVar2;
  TMap<FName,FCommonInputTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonInputTypeInfo,0>_>
  *this_00;
  ulonglong uVar3;
  UObject *pUVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  UClass *this_01;
  longlong lVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  FName *pFVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  UObject *pUVar20;
  int iVar21;
  undefined1 *puVar22;
  undefined1 local_res10 [8];
  int local_res18;
  undefined1 *local_res20;
  undefined4 uStack_15c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  FCommonInputTypeInfo local_128;
  
  if (((param_1->field_0x28 & 1) == 0) ||
     (iVar10 = FArchiveState::CustomVer
                         ((FArchiveState *)param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID)
     , 0x10 < iVar10)) {
    return;
  }
  this_01 = Z_Construct_UClass_UCommonInputSettings_NoRegister();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  pUVar4 = (this_01->ClassDefaultObject).field0_0x0.DebugPtr;
  iVar19 = 0;
  uVar11 = 1;
  iVar21 = 0;
  pUVar1 = pUVar4 + 7;
  iVar10 = *(int *)&pUVar4[7].field_0x18;
  puVar2 = &pUVar4[6].field_0x18;
  iVar12 = 0;
  if (iVar10 != 0) {
    pUVar20 = *(UObject **)&pUVar4[7].field_0x10;
    if (*(UObject **)&pUVar4[7].field_0x10 == (UObject *)0x0) {
      pUVar20 = pUVar1;
    }
    uVar18 = *(uint *)&pUVar20->field_0x0;
    iVar21 = 0;
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar19;
      iVar21 = iVar21 + 0x20;
      iVar19 = iVar19 + 1;
      iVar12 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14a802b01;
      uVar18 = *(uint *)(&pUVar20->field_0x0 + lVar13 * 4 + 4);
    }
    uVar11 = -uVar18 & uVar18;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res18 = (int)lVar13;
    iVar12 = local_res18 + -1 + iVar21;
    if (iVar10 < iVar12) {
      iVar12 = iVar10;
    }
  }
LAB_14a802b01:
  uVar18 = *(uint *)&pUVar4[7].field_0x18;
  uVar17 = uVar18 & 0xffffffe0;
  TStack_150._padding_ = CONCAT44(uVar11,iVar19);
  TStack_150.CurrentBitIndex = iVar12;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar18 >> 5;
  TStack_150._28_4_ = iVar12;
  TStack_150.BaseBitIndex = iVar21;
  uStack_130 = CONCAT44(uStack_15c,*(int *)&pUVar4[6].field_0x20 - *(int *)&pUVar4[7].field_0x24);
  local_res20 = puVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)pUVar1;
  if ((((int)uVar18 < 0) || (iVar10 < (int)uVar18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar11 = *(uint *)&pUVar4[7].field_0x18;
  puVar22 = puVar2;
  if (uVar18 != uVar11) {
    pUVar20 = *(UObject **)&pUVar4[7].field_0x10;
    if (*(UObject **)&pUVar4[7].field_0x10 == (UObject *)0x0) {
      pUVar20 = pUVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(&pUVar20->field_0x0 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar19;
      uVar17 = uVar17 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_14a802c10;
      uVar18 = *(uint *)(&pUVar20->field_0x0 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar18 = (int)lVar13 + -1 + uVar17;
    if ((int)uVar11 < (int)uVar18) {
      uVar18 = uVar11;
    }
  }
LAB_14a802c10:
  if (*(int *)&pUVar4[6].field_0x20 - *(int *)&pUVar4[7].field_0x24 != (int)uStack_130) {
    `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
  }
  lVar13 = (longlong)TStack_150.CurrentBitIndex;
  if (((TStack_150.CurrentBitIndex == uVar18) && ((UObject *)TStack_150.Array == pUVar1)) &&
     (puVar2 == puVar22)) {
    return;
  }
  lVar5 = *(longlong *)puVar2;
  this_00 = &this->GamepadInputOverrides;
  lVar6 = *(longlong *)(lVar5 + lVar13 * 0x18);
  uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar6);
  if (*(int *)&(this->GamepadInputOverrides).field_0x8 !=
      *(int *)&(this->GamepadInputOverrides).field_0x34) {
    puVar7 = *(undefined1 **)&(this->GamepadInputOverrides).field_0x40;
    puVar22 = &(this->GamepadInputOverrides).field_0x38;
    puVar15 = puVar22;
    if (puVar7 != (undefined1 *)0x0) {
      puVar15 = puVar7;
    }
    iVar10 = *(int *)(puVar15 +
                     (ulonglong)
                     (*(int *)&(this->GamepadInputOverrides).field_0x48 - 1U &
                     (int)((ulonglong)lVar6 >> 0x20) + uVar11) * 4);
    if (iVar10 != -1) {
      do {
        plVar14 = (longlong *)((longlong)iVar10 * 0x100 + *(longlong *)this_00);
        if (*plVar14 == lVar6) {
          pFVar16 = (FName *)(plVar14 + 2);
          if (plVar14 == (longlong *)0x0) {
            pFVar16 = (FName *)0x0;
          }
          if (pFVar16 != (FName *)0x0) {
            lVar5 = lVar5 + lVar13 * 0x18;
            lVar13 = *(longlong *)(lVar5 + 8);
            uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar13);
            if (*(int *)&(this->GamepadInputOverrides).field_0x8 ==
                *(int *)&(this->GamepadInputOverrides).field_0x34) goto LAB_14a802d5c;
            puVar7 = *(undefined1 **)&(this->GamepadInputOverrides).field_0x40;
            if (puVar7 != (undefined1 *)0x0) {
              puVar22 = puVar7;
            }
            iVar10 = *(int *)(puVar22 +
                             (ulonglong)
                             (*(int *)&(this->GamepadInputOverrides).field_0x48 - 1U &
                             (int)((ulonglong)lVar13 >> 0x20) + uVar11) * 4);
            if (iVar10 == -1) goto LAB_14a802d5c;
            goto LAB_14a802d40;
          }
          break;
        }
        iVar10 = (int)plVar14[0x1e];
      } while (iVar10 != -1);
    }
  }
  goto LAB_14a802ddf;
  while (iVar10 = *(int *)((longlong)iVar10 * 0x100 + 0xf0 + *(longlong *)this_00), iVar10 != -1) {
LAB_14a802d40:
    if (*(longlong *)((longlong)iVar10 * 0x100 + *(longlong *)this_00) == lVar13)
    goto LAB_14a802ddf;
  }
LAB_14a802d5c:
  local_128.Key.KeyName = *pFVar16;
  local_128.Key.KeyDetails.Object = *(FKeyDetails **)(pFVar16 + 1);
  local_128.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(pFVar16 + 2);
  if ((FName)local_128.Key.KeyDetails.SharedReferenceCount.ReferenceController != (FName)0x0) {
    LOCK();
    *(atomic<int> *)
     ((longlong)local_128.Key.KeyDetails.SharedReferenceCount.ReferenceController + 8) =
         (atomic<int>)
         ((int)*(atomic<int> *)
                ((longlong)local_128.Key.KeyDetails.SharedReferenceCount.ReferenceController + 8) +
         1);
    UNLOCK();
  }
  local_128.OverrrideState = (EInputActionState)pFVar16[3].ComparisonIndex.Value;
  local_128.HoldTime = (float)pFVar16[3].Number;
  local_128.HoldRollbackTime = (float)pFVar16[4].ComparisonIndex.Value;
  local_128.bActionRequiresHold = *(bool *)((longlong)&pFVar16[3].ComparisonIndex.Value + 1);
  FSlateBrush::FSlateBrush(&local_128.OverrideBrush,(FSlateBrush *)(pFVar16 + 6));
  TMapBase<FName,FCommonInputTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonInputTypeInfo,0>_>
  ::Emplace<FName_const_&,FCommonInputTypeInfo>
            ((TMapBase<FName,FCommonInputTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonInputTypeInfo,0>_>
              *)this_00,(FName *)(lVar5 + 8),&local_128);
  local_128.OverrideBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.OverrideBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.Key.KeyDetails.SharedReferenceCount.ReferenceController);
LAB_14a802ddf:
  TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  puVar22 = local_res20;
  goto LAB_14a802c10;
}

// Serialize @ 14a815840

bool __thiscall
FCommonInputActionDataBase::Serialize(FCommonInputActionDataBase *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  return false;
}

