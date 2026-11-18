// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// StaticStruct @ 1424c62a0

UScriptStruct * __cdecl FKeyEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKeyEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FKeyEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKeyEvent,(UObject *)pUVar1,L"KeyEvent");
  }
  return Z_Registration_Info_UScriptStruct_FKeyEvent.OuterSingleton;
}

// IsKeyEvent @ 1424c62e0

bool __thiscall FKeyEvent::IsKeyEvent(FKeyEvent *this)

{
  return true;
}

// FKeyEvent @ 1424e9bd0

FKeyEvent * __thiscall
FKeyEvent::FKeyEvent
          (FKeyEvent *this,FKey *param_1,FModifierKeysState *param_2,uint param_3,bool param_4,
          uint param_5,uint param_6)

{
  TReferenceControllerBase<1> *pTVar1;
  LARGE_INTEGER local_res8;
  
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  *(FModifierKeysState *)&this->_padding_ = *param_2;
  *(bool *)((longlong)&this->_padding_ + 2) = param_4;
  *(uint *)((longlong)&this->_padding_ + 4) = param_3;
  *(uint *)&this->_padding_ = param_3;
  this->_padding_ = 0;
  QueryPerformanceCounter(&local_res8);
  this->_padding_ = (longlong)local_res8;
  this->_padding_ = (longlong)&___7FKeyEvent__6B_;
  (this->Key).KeyName = param_1->KeyName;
  (this->Key).KeyDetails.Object = (param_1->KeyDetails).Object;
  pTVar1 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->CharacterCode = param_5;
  this->KeyCode = param_6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return this;
}

// FKeyEvent @ 1424e9c80

FKeyEvent * __thiscall
FKeyEvent::FKeyEvent
          (FKeyEvent *this,FKey *param_1,FModifierKeysState *param_2,FInputDeviceId param_3,
          bool param_4,uint param_5,uint param_6,TOptional<int> param_7)

{
  TReferenceControllerBase<1> *pTVar1;
  IPlatformInputDeviceMapper *pIVar2;
  LARGE_INTEGER local_res8;
  undefined3 in_stack_00000029;
  
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  *(FModifierKeysState *)&this->_padding_ = *param_2;
  *(bool *)((longlong)&this->_padding_ + 2) = param_4;
  *(int *)&this->_padding_ = param_3.InternalId;
  this->_padding_ = 0;
  QueryPerformanceCounter(&local_res8);
  this->_padding_ = (longlong)local_res8;
  pIVar2 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar2->_padding_ + 0x68))(pIVar2,&param_4,(int)this->_padding_);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = _param_4;
  this->_padding_ = (longlong)&___7FKeyEvent__6B_;
  (this->Key).KeyName = param_1->KeyName;
  (this->Key).KeyDetails.Object = (param_1->KeyDetails).Object;
  pTVar1 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->CharacterCode = param_5;
  this->KeyCode = param_6;
  if (*(char *)((longlong)param_7 + 4) != '\0') {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)param_7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return this;
}

// FKeyEvent @ 1424e9d60

FKeyEvent * __thiscall FKeyEvent::FKeyEvent(FKeyEvent *this)

{
  LARGE_INTEGER local_res8;
  
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  *(ushort *)&this->_padding_ = local_res8.s.LowPart._0_2_ & 0xfe00;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  QueryPerformanceCounter(&local_res8);
  this->_padding_ = CONCAT62(local_res8.QuadPart._2_6_,local_res8.s.LowPart._0_2_);
  this->_padding_ = (longlong)&___7FKeyEvent__6B_;
  (this->Key).KeyName.ComparisonIndex = 0;
  (this->Key).KeyName.Number = 0;
  (this->Key).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->CharacterCode = 0;
  this->KeyCode = 0;
  return this;
}

// ~FKeyEvent @ 1424ec7d0

void __thiscall FKeyEvent::~FKeyEvent(FKeyEvent *this)

{
  this->_padding_ = (longlong)&___7FKeyEvent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Key).KeyDetails.SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  return;
}

// operator= @ 1424ed5f0

FKeyEvent * __thiscall FKeyEvent::operator=(FKeyEvent *this,FKeyEvent *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FKeyDetails *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  *(short *)&this->_padding_ = (short)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  (this->Key).KeyName = (param_1->Key).KeyName;
  pTVar1 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->Key).KeyDetails.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.Object = pFVar2;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->CharacterCode = param_1->CharacterCode;
  this->KeyCode = param_1->KeyCode;
  return this;
}

// ToText @ 142520d60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall FKeyEvent::ToText(FKeyEvent *this,FText *__return_storage_ptr__)

{
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pFVar1 = FKey::GetDisplayName(&this->Key,&local_28,true);
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_38,L"Events",L"Key",L"Key({0})");
  pFVar3 = FTextFormat::FTextFormat(&local_18,pFVar2,Default);
  FText::Format<FText>(__return_storage_ptr__,pFVar3,pFVar1);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

