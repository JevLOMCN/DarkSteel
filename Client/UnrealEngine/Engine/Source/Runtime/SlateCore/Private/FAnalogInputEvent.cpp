// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// StaticStruct @ 1424c6390

UScriptStruct * __cdecl FAnalogInputEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnalogInputEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FAnalogInputEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnalogInputEvent,(UObject *)pUVar1,
                         L"AnalogInputEvent");
  }
  return Z_Registration_Info_UScriptStruct_FAnalogInputEvent.OuterSingleton;
}

// ToText @ 1424c63d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall FAnalogInputEvent::ToText(FAnalogInputEvent *this,FText *__return_storage_ptr__)

{
  float fVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_c8;
  FKey local_b8;
  FTextFormat local_a0;
  FFormatArgumentValue local_88;
  undefined4 local_68;
  float local_60;
  longlong *local_58;
  undefined4 local_50;
  FText local_48;
  FText local_38;
  FTextFormat local_28 [2];
  
  local_b8.KeyName = (FName)this->_padding_;
  fVar1 = this->AnalogValue;
  local_b8.KeyDetails.Object = (FKeyDetails *)this->_padding_;
  local_b8.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)this->_padding_;
  if (local_b8.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  pFVar5 = FKey::GetDisplayName(&local_b8,&local_38,true);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"Events",L"AnalogInput",L"AnalogInput(key:{0}, value:{1}");
  pFVar7 = FTextFormat::FTextFormat(local_28,pFVar6,Default);
  local_88.Type = Text;
  FText::FText((FText *)&local_88.TextValue,pFVar5);
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
  }
  local_58 = (longlong *)0x0;
  local_50 = 0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68 = 2;
  local_c8.ArrayNum = 2;
  local_60 = fVar1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_c8.AllocatorInstance,2,&local_c8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_c8.AllocatorInstance.Data,&local_88,2);
  local_a0.TextFormatData.Object = (pFVar7->TextFormatData).Object;
  local_a0.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar7->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_a0.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a0.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a0.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(__return_storage_ptr__,&local_a0,&local_c8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar2 = (pFVar5->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.KeyDetails.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FAnalogInputEvent @ 1424e9530

FAnalogInputEvent * __thiscall FAnalogInputEvent::FAnalogInputEvent(FAnalogInputEvent *this)

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
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this->AnalogValue = 0.0;
  this->_padding_ = (longlong)&___7FAnalogInputEvent__6B_;
  return this;
}

// ~FAnalogInputEvent @ 1424ec610

void __thiscall FAnalogInputEvent::~FAnalogInputEvent(FAnalogInputEvent *this)

{
  this->_padding_ = (longlong)&___7FKeyEvent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  return;
}

