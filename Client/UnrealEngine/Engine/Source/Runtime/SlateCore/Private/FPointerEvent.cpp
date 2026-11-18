// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// StaticStruct @ 1424c6a00

UScriptStruct * __cdecl FPointerEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPointerEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FPointerEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPointerEvent,(UObject *)pUVar1,L"PointerEvent");
  }
  return Z_Registration_Info_UScriptStruct_FPointerEvent.OuterSingleton;
}

// ToText @ 1424c6a40

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall FPointerEvent::ToText(FPointerEvent *this,FText *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FText local_78;
  FText local_68;
  FTextFormat local_58 [5];
  
  fVar1 = *(float *)&(this->CursorDelta).field_0x4;
  fVar2 = *(float *)&this->CursorDelta;
  fVar3 = *(float *)&(this->ScreenSpacePosition).field_0x4;
  fVar4 = *(float *)&this->ScreenSpacePosition;
  pFVar5 = FKey::GetDisplayName(&this->EffectingButton,&local_68,true);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"Events",L"Pointer",L"Pointer(key:{0}, pos:{1}x{2}, delta:{3}x{4})"
                     );
  pFVar7 = FTextFormat::FTextFormat(local_58,pFVar6,Default);
  FText::Format<FText,float,float,float,float>
            (__return_storage_ptr__,pFVar7,pFVar5,fVar4,fVar3,fVar2,fVar1);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// IsPointerEvent @ 1424c6b20

bool __thiscall FPointerEvent::IsPointerEvent(FPointerEvent *this)

{
  return true;
}

// FPointerEvent @ 1424e9f50

FPointerEvent * __thiscall FPointerEvent::FPointerEvent(FPointerEvent *this)

{
  LARGE_INTEGER local_res8;
  
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(ushort *)&this->_padding_ = (ushort)this->_padding_ & 0xfe00;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  QueryPerformanceCounter(&local_res8);
  this->_padding_ = (longlong)local_res8;
  this->_padding_ = (longlong)&___7FPointerEvent__6B_;
  this->ScreenSpacePosition = (FDeprecateSlateVector2D)0x0;
  this->LastScreenSpacePosition = (FDeprecateSlateVector2D)0x0;
  this->CursorDelta = (FDeprecateSlateVector2D)0x0;
  this->PressedButtons =
       (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)&FTouchKeySet::EmptySet;
  (this->EffectingButton).KeyName.ComparisonIndex = 0;
  (this->EffectingButton).KeyName.Number = 0;
  (this->EffectingButton).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->PointerIndex = 0;
  this->TouchpadIndex = 0;
  this->Force = 1.0;
  this->bIsTouchEvent = false;
  this->GestureType = None;
  this->WheelOrGestureDelta = (FDeprecateSlateVector2D)0x0;
  this->bIsDirectionInvertedFromDevice = false;
  this->bIsTouchForceChanged = false;
  this->bIsTouchFirstMove = false;
  return this;
}

// ~FPointerEvent @ 1424ec900

void __thiscall FPointerEvent::~FPointerEvent(FPointerEvent *this)

{
  this->_padding_ = (longlong)&___7FPointerEvent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  return;
}

