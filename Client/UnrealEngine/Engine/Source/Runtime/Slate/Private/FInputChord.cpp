// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// StaticStruct @ 1426e6390

UScriptStruct * __cdecl FInputChord::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInputChord.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UScriptStruct_FInputChord.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInputChord,(UObject *)pUVar1,L"InputChord");
  }
  return Z_Registration_Info_UScriptStruct_FInputChord.OuterSingleton;
}

// FInputChord @ 1426fc150

FInputChord * __thiscall FInputChord::FInputChord(FInputChord *this,uchar param_1,FKey *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  
  (this->Key).KeyName = param_2->KeyName;
  (this->Key).KeyDetails.Object = (param_2->KeyDetails).Object;
  pTVar1 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = ((uint)(param_1 >> 2) ^ this->bShift) & 1 ^ *(uint *)&this->field_0x18;
  uVar2 = (uVar2 ^ (uint)param_1 * 2) & 2 ^ uVar2;
  uVar2 = (uVar2 ^ (uint)param_1 * 2) & 4 ^ uVar2;
  *(uint *)&this->field_0x18 = (uVar2 ^ param_1) & 8 ^ uVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return this;
}

// FInputChord @ 1426fc1d0

FInputChord * __thiscall FInputChord::FInputChord(FInputChord *this)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  FSharedReferencer<1> FVar3;
  
  (this->Key).KeyName = EKeys::Invalid.KeyName;
  (this->Key).KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  FVar3 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  this->bShift = 0;
  this->bCmd = 0;
  this->bAlt = 0;
  this->bCtrl = 0;
  return this;
}

// operator= @ 1427031a0

FInputChord * __thiscall FInputChord::operator=(FInputChord *this,FInputChord *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FKeyDetails *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  
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
  uVar4 = (this->bShift ^ param_1->bShift) & 1 ^ *(uint *)&this->field_0x18;
  *(uint *)&this->field_0x18 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0x18) & 2 ^ uVar4;
  *(uint *)&this->field_0x18 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_1->field_0x18) & 4 ^ uVar4;
  *(uint *)&this->field_0x18 = uVar4;
  *(uint *)&this->field_0x18 = (uVar4 ^ *(uint *)&param_1->field_0x18) & 8 ^ uVar4;
  return this;
}

// GetInputText @ 14273ee40

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FInputChord::GetInputText(FInputChord *this,FText *__return_storage_ptr__,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_d8;
  FText local_c8;
  TOptional<FText>_u_0 local_b8;
  FString local_a8;
  FString local_98;
  FFormatArgumentValue local_88;
  FFormatArgumentValue local_68;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  local_d8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Pairs.ArrayNum = 0;
  local_d8.Pairs.ArrayMax = 0;
  local_b8.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_b8.TypedValue.Flags = 0;
  pFVar3 = GetModifierText(this,&local_48,(TOptional<FText> *)&local_b8.TypedValue);
  local_88.Type = Text;
  FText::FText((FText *)&local_88.TextValue,pFVar3);
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(&local_a8,L"Modifiers");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_d8,&local_a8,&local_88);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  FText::FText(&local_c8);
  bVar2 = FKey::IsValid(&this->Key);
  if (bVar2) {
    bVar2 = FKey::IsModifierKey(&this->Key);
    if (!bVar2) {
      pFVar3 = FKey::GetDisplayName(&this->Key,&local_38,param_1);
      FText::operator=(&local_c8,pFVar3);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
    }
  }
  local_68.Type = Text;
  FText::FText((FText *)&local_68.TextValue,&local_c8);
  if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(&local_98,L"Key");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_d8,&local_98,&local_68);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_68.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"FInputChord",L"InputText",L"{Modifiers}{Key}");
  pFVar4 = FTextFormat::FTextFormat(&local_18,pFVar3,Default);
  FText::Format(__return_storage_ptr__,pFVar4,&local_d8);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_d8.Pairs.AllocatorInstance.Data,
             local_d8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_d8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_d8.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetKeyText @ 14273f240

FText * __thiscall
FInputChord::GetKeyText(FInputChord *this,FText *__return_storage_ptr__,bool param_1)

{
  bool bVar1;
  FText *pFVar2;
  FText local_18;
  
  FText::FText(__return_storage_ptr__);
  bVar1 = FKey::IsValid(&this->Key);
  if (bVar1) {
    bVar1 = FKey::IsModifierKey(&this->Key);
    if (!bVar1) {
      pFVar2 = FKey::GetDisplayName(&this->Key,&local_18,param_1);
      FText::operator=(__return_storage_ptr__,pFVar2);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
  }
  return __return_storage_ptr__;
}

// GetModifierText @ 142740030

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FInputChord::GetModifierText
          (FInputChord *this,FText *__return_storage_ptr__,TOptional<FText> *param_1)

{
  uint uVar1;
  TRefCountPtr<ITextData> TVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  TOptional<FText> *local_res18;
  undefined1 local_res20 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_238
  ;
  undefined1 local_228 [4];
  undefined1 local_224 [4];
  undefined1 local_220 [4];
  undefined1 local_21c [4];
  undefined1 local_218 [8];
  FText local_210;
  FText local_200;
  FText local_1f0;
  FText local_1e0;
  FFormatArgumentValue local_1d0;
  FFormatArgumentValue local_1b0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FFormatArgumentValue local_120;
  FFormatArgumentValue local_100;
  FFormatArgumentValue local_e0;
  FFormatArgumentValue local_c0;
  FFormatArgumentValue local_a0;
  FText local_80;
  FText local_70;
  FTextFormat local_60 [2];
  
  bVar4 = false;
  local_res8[0] = 0;
  local_res18 = param_1;
  FText::AsLocalizable_Advanced_LocText(&local_1e0,L"FInputChord",L"KeyName_Control",L"Ctrl");
  FText::AsLocalizable_Advanced_LocText(&local_1f0,L"FInputChord",L"KeyName_Command",L"Cmd");
  FText::AsLocalizable_Advanced_LocText(&local_200,L"FInputChord",L"KeyName_Alt",L"Alt");
  FText::AsLocalizable_Advanced_LocText(&local_210,L"FInputChord",L"KeyName_Shift",L"Shift");
  uVar9 = 1;
  if ((this->Key).KeyName == EKeys::Invalid.KeyName) {
    pFVar5 = FText::GetEmpty();
  }
  else {
    pFVar5 = FText::AsLocalizable_Advanced_LocText(&local_80,L"FInputChord",L"ModAppender",L"+");
    bVar4 = true;
    if ((param_1->field0_0x0).TypedValue.TextData.Reference != (ITextData *)0x0) {
      pFVar5 = (FText *)param_1;
    }
  }
  TVar2.Reference = (pFVar5->TextData).Reference;
  if (TVar2.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
  }
  uVar1 = pFVar5->Flags;
  if ((bVar4) && (local_80.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  uVar8 = 0;
  local_238.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.Pairs.ArrayNum = 0;
  local_238.Pairs.ArrayMax = 0;
  if (this->bCtrl != 0) {
    local_120.Type = Text;
    local_120.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_1e0.TextData.Reference;
    if (local_1e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1e0.TextData.Reference + 8))
                (local_1e0.TextData.Reference,local_res10);
    }
    local_120.TextValue.field0_0x0.TypedValue.Flags = local_1e0.Flags;
    if ((local_120.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
    uVar8 = 1;
    ::FString::PrintfImpl(&local_190,L"Mod%d");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_238,&local_190,&local_120);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    if (local_120.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_120.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
  }
  if (this->bCmd != 0) {
    local_100.Type = Text;
    local_100.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_1f0.TextData.Reference;
    if (local_1f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1f0.TextData.Reference + 8))
                (local_1f0.TextData.Reference,local_res20);
    }
    local_100.TextValue.field0_0x0.TypedValue.Flags = local_1f0.Flags;
    if ((local_100.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
    uVar8 = uVar8 + 1;
    ::FString::PrintfImpl(&local_180,L"Mod%d");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_238,&local_180,&local_100);
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    if (local_100.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_100.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
  }
  if (this->bAlt != 0) {
    local_e0.Type = Text;
    local_e0.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_200.TextData.Reference;
    if (local_200.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_200.TextData.Reference + 8))
                (local_200.TextData.Reference,local_228);
    }
    local_e0.TextValue.field0_0x0.TypedValue.Flags = local_200.Flags;
    if ((local_e0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
    uVar8 = uVar8 + 1;
    ::FString::PrintfImpl(&local_170,L"Mod%d");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_238,&local_170,&local_e0);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_e0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_e0.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
  }
  if (this->bShift != 0) {
    local_c0.Type = Text;
    local_c0.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_210.TextData.Reference;
    if (local_210.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_210.TextData.Reference + 8))
                (local_210.TextData.Reference,local_224);
    }
    local_c0.TextValue.field0_0x0.TypedValue.Flags = local_210.Flags;
    if ((local_c0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
    uVar8 = uVar8 + 1;
    ::FString::PrintfImpl(&local_160,L"Mod%d");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_238,&local_160,&local_c0);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_c0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_c0.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
  }
  do {
    if (uVar8 < uVar9) {
      pFVar5 = FText::GetEmpty();
      local_1d0.Type = Text;
      local_1d0.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(pFVar5->TextData).Reference;
      if (local_1d0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1d0.TextValue.field0_0x0.TypedValue.TextData.Reference + 8)
        )(local_1d0.TextValue.field0_0x0.TypedValue.TextData.Reference,local_220);
      }
      local_1d0.TextValue.field0_0x0.TypedValue.Flags = pFVar5->Flags;
      if ((local_1d0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar3)();
        return pFVar5;
      }
      ::FString::PrintfImpl(&local_150,L"Mod%d");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_238,&local_150,&local_1d0);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_1d0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1d0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      pFVar5 = FText::GetEmpty();
      local_1b0.Type = Text;
      local_1b0.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(pFVar5->TextData).Reference;
      if (local_1b0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1b0.TextValue.field0_0x0.TypedValue.TextData.Reference + 8)
        )(local_1b0.TextValue.field0_0x0.TypedValue.TextData.Reference,local_21c);
      }
      local_1b0.TextValue.field0_0x0.TypedValue.Flags = pFVar5->Flags;
      if ((local_1b0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar3)();
        return pFVar5;
      }
      ::FString::PrintfImpl(&local_140,L"Appender%d");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_238,&local_140,&local_1b0);
      uVar7 = local_1b0.TextValue.field0_0x0.TypedValue.TextData.Reference;
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
        uVar7 = local_1b0.TextValue.field0_0x0.TypedValue.TextData.Reference;
      }
    }
    else {
      local_a0.Type = Text;
      local_a0.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)TVar2.Reference;
      if (TVar2.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_218);
      }
      local_a0.TextValue.field0_0x0.TypedValue.Flags = uVar1;
      if ((local_a0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar3)();
        return pFVar5;
      }
      ::FString::PrintfImpl(&local_130,L"Appender%d");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_238,&local_130,&local_a0);
      uVar7 = local_a0.TextValue.field0_0x0.TypedValue.TextData.Reference;
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
        uVar7 = local_a0.TextValue.field0_0x0.TypedValue.TextData.Reference;
      }
    }
    if ((ITextData *)uVar7 != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)uVar7 + 0x10))();
    }
    uVar9 = uVar9 + 1;
    if (4 < (int)uVar9) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_70,L"FInputChord",L"FourModifiers",
                          L"{Mod1}{Appender1}{Mod2}{Appender2}{Mod3}{Appender3}{Mod4}{Appender4}");
      pFVar6 = FTextFormat::FTextFormat(local_60,pFVar5,Default);
      FText::Format(__return_storage_ptr__,pFVar6,&local_238);
      if (local_70.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_238.Pairs.AllocatorInstance.Data,
                 local_238.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_238.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_238.Pairs.AllocatorInstance.Data);
      }
      if (TVar2.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
      }
      if (local_210.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_210.TextData.Reference + 0x10))();
      }
      if (local_200.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
      }
      if (local_1f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
      }
      if (local_1e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1e0.TextData.Reference + 0x10))();
      }
      if (*(longlong **)&local_res18->field0_0x0 != (longlong *)0x0) {
        (**(code **)(**(longlong **)&local_res18->field0_0x0 + 0x10))();
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// GetRelationship @ 1427438a0

ERelationshipType __thiscall FInputChord::GetRelationship(FInputChord *this,FInputChord *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((this->Key).KeyName == (param_1->Key).KeyName) {
    puVar1 = &this->field_0x18;
    uVar3 = *(undefined4 *)puVar1;
    puVar2 = &param_1->field_0x18;
    uVar4 = *(undefined4 *)puVar2;
    if ((((((uVar3 ^ uVar4) & 4) == 0) && (((uVar4 ^ uVar3) & 2) == 0)) &&
        (((param_1->bShift ^ this->bShift) & 1) == 0)) && (((uVar4 ^ uVar3) & 8) == 0)) {
      return Same;
    }
    if ((this->bAlt != 0) || (param_1->bAlt == 0)) {
      if ((((this->bCtrl != 0) || (param_1->bCtrl == 0)) &&
          ((this->bShift != 0 || (ZPULL(uVar4,0,1) == 0)))) &&
         ((this->bCmd != 0 || (param_1->bCmd == 0)))) {
        return Masks;
      }
      if ((this->bAlt != 0) && (param_1->bAlt == 0)) {
        return None;
      }
    }
    if ((((this->bCtrl == 0) || (param_1->bCtrl != 0)) &&
        ((ZPULL(uVar3,0,1) == 0 || (param_1->bShift != 0)))) &&
       ((this->bCmd == 0 || (param_1->bCmd != 0)))) {
      return Masked;
    }
  }
  return None;
}

