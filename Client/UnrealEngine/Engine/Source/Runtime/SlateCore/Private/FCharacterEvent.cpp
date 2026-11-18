// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// StaticStruct @ 1424c6620

UScriptStruct * __cdecl FCharacterEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCharacterEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FCharacterEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCharacterEvent,(UObject *)pUVar1,
                         L"CharacterEvent");
  }
  return Z_Registration_Info_UScriptStruct_FCharacterEvent.OuterSingleton;
}

// ToText @ 1424c6660

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall FCharacterEvent::ToText(FCharacterEvent *this,FText *__return_storage_ptr__)

{
  FString *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FText local_48;
  FString local_38;
  FText local_28;
  FTextFormat local_18;
  
  pFVar1 = ::FString::ConstructFromPtrSize(&local_38,&this->Character,1);
  pFVar2 = FText::FromString(&local_28,pFVar1);
  pFVar3 = FText::AsLocalizable_Advanced_LocText(&local_48,L"Events",L"Char",L"Char({0})");
  pFVar4 = FTextFormat::FTextFormat(&local_18,pFVar3,Default);
  FText::Format<FText>(__return_storage_ptr__,pFVar4,pFVar2);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FCharacterEvent @ 1424e9740

FCharacterEvent * __thiscall FCharacterEvent::FCharacterEvent(FCharacterEvent *this)

{
  LARGE_INTEGER local_res8;
  
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  *(ushort *)&this->_padding_ = local_res8.s.LowPart._0_2_ & 0xfe00;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  QueryPerformanceCounter(&local_res8);
  this->_padding_ = CONCAT62(local_res8.QuadPart._2_6_,local_res8.s.LowPart._0_2_);
  this->_padding_ = (longlong)&___7FCharacterEvent__6B_;
  this->Character = L'\0';
  return this;
}

// ~FCharacterEvent @ 1424ec650

void __thiscall FCharacterEvent::~FCharacterEvent(FCharacterEvent *this)

{
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  return;
}

