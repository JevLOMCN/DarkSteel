// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 6

// FKeyDetails @ 14238d7d0

FKeyDetails * __thiscall FKeyDetails::FKeyDetails(FKeyDetails *this,FKeyDetails *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ITextData *pIVar2;
  byte bVar3;
  undefined1 local_res8 [8];
  
  (this->Key).KeyName = (param_1->Key).KeyName;
  (this->Key).KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  pTVar1 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->PairedAxis = param_1->PairedAxis;
  (this->PairedAxisKey).KeyName = (param_1->PairedAxisKey).KeyName;
  (this->PairedAxisKey).KeyDetails.Object = (param_1->PairedAxisKey).KeyDetails.Object;
  pTVar1 = (param_1->PairedAxisKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->PairedAxisKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->VirtualKeyValue).KeyName = (param_1->VirtualKeyValue).KeyName;
  (this->VirtualKeyValue).KeyDetails.Object = (param_1->VirtualKeyValue).KeyDetails.Object;
  pTVar1 = (param_1->VirtualKeyValue).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->VirtualKeyValue).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->MenuCategory = param_1->MenuCategory;
  bVar3 = (this->bIsModifierKey ^ param_1->bIsModifierKey) & 1 ^ this->field_0x58;
  this->field_0x58 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x58) & 2 ^ bVar3;
  this->field_0x58 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x58) & 4 ^ bVar3;
  this->field_0x58 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x58) & 8 ^ bVar3;
  this->field_0x58 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x58) & 0x10 ^ bVar3;
  this->field_0x58 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x58) & 0x20 ^ bVar3;
  this->field_0x58 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x58) & 0x40 ^ bVar3;
  this->field_0x58 = bVar3;
  this->field_0x58 = (bVar3 ^ param_1->field_0x58) & 0x7f ^ param_1->field_0x58;
  bVar3 = (this->bIsVirtual ^ param_1->bIsVirtual) & 1 ^ this->field_0x59;
  this->field_0x59 = bVar3;
  this->field_0x59 = (bVar3 ^ param_1->field_0x59) & 2 ^ bVar3;
  this->AxisType = param_1->AxisType;
  (this->LongDisplayName).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_1->LongDisplayName).Value.TextData.Reference;
  (this->LongDisplayName).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  (this->LongDisplayName).Value.Flags = (param_1->LongDisplayName).Value.Flags;
  (this->LongDisplayName).bIsSet = (param_1->LongDisplayName).bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->LongDisplayName).Getter,&(param_1->LongDisplayName).Getter);
  (this->ShortDisplayName).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_1->ShortDisplayName).Value.TextData.Reference;
  (this->ShortDisplayName).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  (this->ShortDisplayName).Value.Flags = (param_1->ShortDisplayName).Value.Flags;
  (this->ShortDisplayName).bIsSet = (param_1->ShortDisplayName).bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->ShortDisplayName).Getter,&(param_1->ShortDisplayName).Getter);
  return this;
}

// FKeyDetails @ 14238d990

FKeyDetails * __thiscall
FKeyDetails::FKeyDetails
          (FKeyDetails *this,FKey *param_1,TAttribute<FText> *param_2,TAttribute<FText> *param_3,
          uint param_4,FName param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  ITextData *pIVar2;
  
  (this->Key).KeyName = param_1->KeyName;
  (this->Key).KeyDetails.Object = (param_1->KeyDetails).Object;
  pTVar1 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->PairedAxisKey).KeyName.ComparisonIndex = 0;
  (this->PairedAxisKey).KeyName.Number = 0;
  (this->PairedAxisKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->PairedAxisKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VirtualKeyValue).KeyName.ComparisonIndex = 0;
  (this->VirtualKeyValue).KeyName.Number = 0;
  (this->VirtualKeyValue).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->VirtualKeyValue).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->MenuCategory = param_5;
  this->PairedAxis = Unpaired;
  (this->LongDisplayName).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_2->Value).TextData.Reference;
  (this->LongDisplayName).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_5);
  }
  (this->LongDisplayName).Value.Flags = (param_2->Value).Flags;
  (this->LongDisplayName).bIsSet = param_2->bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->LongDisplayName).Getter,&param_2->Getter);
  (this->ShortDisplayName).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_3->Value).TextData.Reference;
  (this->ShortDisplayName).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_5);
  }
  (this->ShortDisplayName).Value.Flags = (param_3->Value).Flags;
  (this->ShortDisplayName).bIsSet = param_3->bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->ShortDisplayName).Getter,&param_3->Getter);
  CommonInit(this,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return this;
}

// FKeyDetails @ 14238dab0

FKeyDetails * __thiscall
FKeyDetails::FKeyDetails
          (FKeyDetails *this,FKey *param_1,TAttribute<FText> *param_2,uint param_3,FName param_4,
          TAttribute<FText> *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  ITextData *pIVar2;
  
  (this->Key).KeyName = param_1->KeyName;
  (this->Key).KeyDetails.Object = (param_1->KeyDetails).Object;
  pTVar1 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->PairedAxisKey).KeyName.ComparisonIndex = 0;
  (this->PairedAxisKey).KeyName.Number = 0;
  (this->PairedAxisKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->PairedAxisKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VirtualKeyValue).KeyName.ComparisonIndex = 0;
  (this->VirtualKeyValue).KeyName.Number = 0;
  (this->VirtualKeyValue).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->VirtualKeyValue).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->MenuCategory = param_4;
  this->PairedAxis = Unpaired;
  (this->LongDisplayName).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_2->Value).TextData.Reference;
  (this->LongDisplayName).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_4);
  }
  (this->LongDisplayName).Value.Flags = (param_2->Value).Flags;
  (this->LongDisplayName).bIsSet = param_2->bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->LongDisplayName).Getter,&param_2->Getter);
  (this->ShortDisplayName).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_5->Value).TextData.Reference;
  (this->ShortDisplayName).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_4);
  }
  (this->ShortDisplayName).Value.Flags = (param_5->Value).Flags;
  (this->ShortDisplayName).bIsSet = param_5->bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->ShortDisplayName).Getter,&param_5->Getter);
  CommonInit(this,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return this;
}

// ~FKeyDetails @ 14238dfe0

void __thiscall FKeyDetails::~FKeyDetails(FKeyDetails *this)

{
  TAttribute<FText>::~TAttribute<FText>(&this->ShortDisplayName);
  TAttribute<FText>::~TAttribute<FText>(&this->LongDisplayName);
  FKey::~FKey(&this->VirtualKeyValue);
  FKey::~FKey(&this->PairedAxisKey);
  FKey::~FKey(&this->Key);
  return;
}

// CommonInit @ 14238ed10

void __thiscall FKeyDetails::CommonInit(FKeyDetails *this,uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  FName FVar4;
  byte bVar5;
  uint uVar6;
  
  uVar6 = ~param_1;
  bVar5 = ((byte)(param_1 >> 3) ^ this->bIsModifierKey) & 1 ^ this->field_0x58;
  bVar5 = ((char)param_1 * '\x02' ^ bVar5) & 2 ^ bVar5;
  bVar5 = ((char)(param_1 >> 1) << 2 ^ bVar5) & 4 ^ bVar5;
  if (((uVar6 & 0x10) == 0) || ((uVar6 & 0x200) == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 0x10;
  }
  bVar2 = (((char)(param_1 >> 2) << 3 ^ bVar5) & 8 ^ bVar5) & 0xef | bVar2;
  if (((uVar6 >> 8 & 1) == 0) || ((uVar6 & 0x200) == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0x40;
  }
  this->field_0x58 =
       (((char)(param_1 >> 7) << 5 ^ bVar2) & 0x20 ^ bVar2) & 0x3f | bVar5 |
       (char)(param_1 >> 9) << 7;
  bVar5 = ((char)(param_1 >> 0xc) * '\x02' ^ this->field_0x59) & 2U ^ this->field_0x59;
  this->field_0x59 = ((byte)(param_1 >> 0xd) ^ bVar5) & 1 ^ bVar5;
  if ((param_1 >> 10 & 1) == 0) {
    if ((param_1 & 0x20) == 0) {
      if ((param_1 >> 0xb & 1) == 0) {
        this->AxisType = -((param_1 & 0x40) != 0) & Axis3D;
      }
      else {
        if ((param_1 & 0x40) != 0) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<488820106382541275>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InputCore\\Private\\InputCoreTypes.cpp"
                             ,0x1db,"(InKeyFlags & EKeyFlags::Axis3D) == 0");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        this->AxisType = Axis2D;
      }
    }
    else {
      if ((param_1 & 0x840) != 0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<488820106382541270>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InputCore\\Private\\InputCoreTypes.cpp"
                           ,0x1d6,"(InKeyFlags & (EKeyFlags::Axis2D | EKeyFlags::Axis3D)) == 0");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this->AxisType = Axis1D;
    }
  }
  else {
    if ((param_1 & 0x860) != 0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<488820106382541265>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InputCore\\Private\\InputCoreTypes.cpp"
                         ,0x1d1,
                         "(InKeyFlags & (EKeyFlags::Axis1D | EKeyFlags::Axis2D | EKeyFlags::Axis3D)) == 0"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->AxisType = Button;
  }
  if (this->MenuCategory == (FName)0x0) {
    if (this->bIsVirtual != 0) {
      this->MenuCategory = EKeys::NAME_VirtualCategory;
      return;
    }
    if (this->bIsGamepadKey != 0) {
      this->MenuCategory = EKeys::NAME_GamepadCategory;
      return;
    }
    FVar4 = EKeys::NAME_KeyboardCategory;
    if (this->bIsMouseButton != 0) {
      FVar4 = EKeys::NAME_MouseCategory;
    }
    this->MenuCategory = FVar4;
  }
  return;
}

// GetDisplayName @ 14238fdd0

FText * __thiscall
FKeyDetails::GetDisplayName(FKeyDetails *this,FText *__return_storage_ptr__,bool param_1)

{
  ITextData *pIVar1;
  longlong lVar2;
  FText *pFVar3;
  undefined1 local_res18 [16];
  
  if ((param_1) || (lVar2 = 0x90, (this->ShortDisplayName).bIsSet == false)) {
    lVar2 = 0x60;
  }
  pFVar3 = TAttribute<FText>::Get
                     ((TAttribute<FText> *)
                      ((longlong)&(this->Key).KeyName.ComparisonIndex.Value + lVar2));
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar3->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
  }
  __return_storage_ptr__->Flags = pFVar3->Flags;
  return __return_storage_ptr__;
}

