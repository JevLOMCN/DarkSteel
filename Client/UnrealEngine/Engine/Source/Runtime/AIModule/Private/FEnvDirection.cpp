// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// StaticStruct @ 146f0f2f0

UScriptStruct * __cdecl FEnvDirection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnvDirection.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FEnvDirection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnvDirection,(UObject *)pUVar1,L"EnvDirection");
  }
  return Z_Registration_Info_UScriptStruct_FEnvDirection.OuterSingleton;
}

// ToText @ 146f7a770

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall FEnvDirection::ToText(FEnvDirection *this,FText *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  ForAnyElementType FVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_128
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_118
  ;
  FString local_108;
  FText local_f8;
  FString local_e8;
  FText local_d8;
  FString local_c8;
  FText local_b8;
  FFormatArgumentValue local_a8;
  FFormatArgumentValue local_88;
  FFormatArgumentValue local_68;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  FTextFormat local_18;
  
  pUVar8 = (UClass *)0x0;
  if ((this->DirMode).Value != '\0') {
    pUVar9 = (this->Rotation).Class.field0_0x0.DebugPtr;
    local_118.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Pairs.ArrayNum = 0;
    local_118.Pairs.ArrayMax = 0;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar9 == (UClass *)0x0) goto LAB_146f7aa49;
      UE::GC::MarkAsReachable((UObject *)pUVar9);
LAB_146f7aa1b:
      pUVar4 = UEnvQueryContext::StaticClass();
      if (pUVar4 == (UClass *)0x0) goto LAB_146f7aa49;
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar9->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_146f7aa49;
    }
    else {
      if (pUVar9 != (UClass *)0x0) goto LAB_146f7aa1b;
LAB_146f7aa49:
      pUVar9 = pUVar8;
    }
    UEnvQueryTypes::GetShortTypeName(&local_b8,(UObject *)pUVar9);
    local_68.Type = Text;
    FText::FText((FText *)&local_68.TextValue,&local_b8);
    if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    ::FString::FString(&local_c8,L"Rotation");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_118,&local_c8,&local_68);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_68.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"EnvQueryGenerator",L"DescribeRotation",L"[{Rotation} rotation]")
    ;
    pFVar6 = FTextFormat::FTextFormat(&local_18,pFVar5,Default);
    FText::Format(__return_storage_ptr__,pFVar6,&local_118);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_118.Pairs.AllocatorInstance.Data,
               local_118.Pairs.ArrayNum);
    FVar7.Data = local_118.Pairs.AllocatorInstance.Data;
    goto LAB_146f7ab45;
  }
  pUVar9 = (this->LineFrom).Class.field0_0x0.DebugPtr;
  local_128.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Pairs.ArrayNum = 0;
  local_128.Pairs.ArrayMax = 0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar9 == (UClass *)0x0) goto LAB_146f7a7f9;
    UE::GC::MarkAsReachable((UObject *)pUVar9);
LAB_146f7a7cb:
    pUVar4 = UEnvQueryContext::StaticClass();
    if (pUVar4 == (UClass *)0x0) goto LAB_146f7a7f9;
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar9->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_146f7a7f9;
  }
  else {
    if (pUVar9 != (UClass *)0x0) goto LAB_146f7a7cb;
LAB_146f7a7f9:
    pUVar9 = pUVar8;
  }
  UEnvQueryTypes::GetShortTypeName(&local_f8,(UObject *)pUVar9);
  local_a8.Type = Text;
  FText::FText((FText *)&local_a8.TextValue,&local_f8);
  if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  ::FString::FString(&local_108,L"LineFrom");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_128,&local_108,&local_a8);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
  }
  pUVar9 = (this->LineTo).Class.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar9 != (UClass *)0x0) goto LAB_146f7a8bc;
LAB_146f7a8ea:
    pUVar9 = pUVar8;
  }
  else {
    if (pUVar9 == (UClass *)0x0) goto LAB_146f7a8ea;
    UE::GC::MarkAsReachable((UObject *)pUVar9);
LAB_146f7a8bc:
    pUVar4 = UEnvQueryContext::StaticClass();
    if (pUVar4 == (UClass *)0x0) goto LAB_146f7a8ea;
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar9->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_146f7a8ea;
  }
  UEnvQueryTypes::GetShortTypeName(&local_d8,(UObject *)pUVar9);
  local_88.Type = Text;
  FText::FText((FText *)&local_88.TextValue,&local_d8);
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  ::FString::FString(&local_e8,L"LineTo");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_128,&local_e8,&local_88);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"EnvQueryGenerator",L"DescribeLineFromAndTo",
                      L"[From: {LineFrom} To: {LineTo}]");
  pFVar6 = FTextFormat::FTextFormat(&local_28,pFVar5,Default);
  FText::Format(__return_storage_ptr__,pFVar6,&local_128);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_128.Pairs.AllocatorInstance.Data,
             local_128.Pairs.ArrayNum);
  FVar7.Data = local_128.Pairs.AllocatorInstance.Data;
LAB_146f7ab45:
  if ((TTuple<FString,FFormatArgumentValue> *)FVar7.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return __return_storage_ptr__;
}

