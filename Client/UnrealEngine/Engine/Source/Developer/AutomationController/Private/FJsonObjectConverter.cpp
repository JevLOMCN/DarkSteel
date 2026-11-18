// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 1

// JsonObjectStringToUStruct<FAutomatedTestPassResults> @ 148c51860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
FJsonObjectConverter::JsonObjectStringToUStruct<FAutomatedTestPassResults>
          (FString *param_1,FAutomatedTestPassResults *param_2,long64 param_3,long64 param_4,
          bool param_5,FText *param_6,
          TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
          *param_7)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar7;
  UPackage *pUVar8;
  FText *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  wchar_t *pwVar13;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1b8;
  StackState local_1a8;
  TSharedPtr<FJsonObject,1> local_168;
  TSharedRef<FJsonObject,1> local_158;
  FTextFormat local_148;
  FText local_138;
  FTextFormat local_128;
  FText local_118;
  FFormatArgumentValue local_108;
  FFormatArgumentValue local_e8;
  undefined4 local_c8;
  FText local_b8;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FText local_48;
  FTextFormat local_38;
  
  local_168.Object = (FJsonObject *)0x0;
  local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = TJsonStringReader<wchar_t>::Create(&local_a8,param_1);
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar7->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  local_1a8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Identifier.Data.ArrayNum = 0;
  local_1a8.Identifier.Data.ArrayMax = 0;
  local_1a8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Object.Object = (FJsonObject *)0x0;
  local_1a8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1a8.Array.ArrayNum = 0;
  local_1a8.Array.ArrayMax = 0;
  bVar5 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_1a8,None);
  if (bVar5) {
    bVar5 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_1a8,&local_168);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_1a8.Array.AllocatorInstance.Data,
               local_1a8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_1a8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_1a8.Array.AllocatorInstance.Data);
    }
    if (local_1a8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Identifier.Data.AllocatorInstance.Data);
    }
    if ((!bVar5) || (local_168.Object == (FJsonObject *)0x0)) goto LAB_148c5192c;
    pwVar13 = L"";
    if ((local_168.Object == (FJsonObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_158.Object = local_168.Object;
    local_158.SharedReferenceCount.ReferenceController =
         local_168.SharedReferenceCount.ReferenceController;
    if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_168.Object == (FJsonObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (Z_Registration_Info_UScriptStruct_FAutomatedTestPassResults.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_AutomationController();
      Z_Registration_Info_UScriptStruct_FAutomatedTestPassResults.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestPassResults,(UObject *)pUVar8,
                           L"AutomatedTestPassResults");
    }
    bVar5 = JsonObjectToUStruct(&local_158,
                                (UStruct *)
                                Z_Registration_Info_UScriptStruct_FAutomatedTestPassResults.
                                OuterSingleton,param_2,param_3,param_4,param_5,param_6,param_7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (bVar5) {
      bVar5 = true;
      goto LAB_148c51e65;
    }
    if (2 < (byte)LogJson._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_bool___cdecl_FJsonObjectConverter::JsonObjectStringToUStruct<FAutomatedTestPassResults>(FString_const&___ptr64,FAutomatedTestPassResults*___ptr64,__int64,__int64,bool,FText*___ptr64,TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const&___ptr64,FProperty*___ptr64,void*___ptr64),FDefaultDelegateUserPolicy>_const*___ptr64)'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogJson);
    }
    if (param_6 != (FText *)0x0) {
      pFVar10 = FText::FText(&local_78,param_6);
      if ((param_1->Data).ArrayNum != 0) {
        pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      pFVar11 = FText::FromString(&local_68,pwVar13);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_98,L"JsonObjectConverter",L"FailJsonObjectConversion",
                          L"JsonObjectStringToUStruct - Unable to deserialize. json=[{0}]\n{1}");
      pFVar12 = FTextFormat::FTextFormat(&local_58,pFVar9,Default);
      local_e8.Type = Text;
      FText::FText((FText *)&local_e8.TextValue,pFVar11);
      if ((local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      local_c8 = 4;
      FText::FText(&local_b8,pFVar10);
      if ((local_b8.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_1c8.AllocatorInstance,2,&local_1c8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_1c8.AllocatorInstance.Data,&local_e8,2);
      local_148.TextFormatData.Object = (pFVar12->TextFormatData).Object;
      local_148.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar12->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_148.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_148.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_148.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_138,&local_148,&local_1c8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum);
      if ((FFormatArgumentValue *)local_1c8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_1c8.AllocatorInstance.Data);
      }
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar12->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar3 = (pFVar11->TextData).Reference;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))();
      }
      pIVar3 = (pFVar10->TextData).Reference;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))();
      }
      FText::operator=(param_6,&local_138);
      if (local_138.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
      }
      goto LAB_148c51e58;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_1a8.Array.AllocatorInstance.Data,
               local_1a8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_1a8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_1a8.Array.AllocatorInstance.Data);
    }
    if (local_1a8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Identifier.Data.AllocatorInstance.Data);
    }
LAB_148c5192c:
    pwVar13 = L"";
    if (2 < (byte)LogJson._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_bool___cdecl_FJsonObjectConverter::JsonObjectStringToUStruct<FAutomatedTestPassResults>(FString_const&___ptr64,FAutomatedTestPassResults*___ptr64,__int64,__int64,bool,FText*___ptr64,TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const&___ptr64,FProperty*___ptr64,void*___ptr64),FDefaultDelegateUserPolicy>_const*___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogJson);
    }
    if (param_6 != (FText *)0x0) {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      pFVar10 = FText::FromString(&local_48,pwVar13);
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_88,L"JsonObjectConverter",L"FailJsonObjectDeserialize",
                           L"JsonObjectStringToUStruct - Unable to parse. json=[{0}]");
      pFVar12 = FTextFormat::FTextFormat(&local_38,pFVar11,Default);
      local_108.Type = Text;
      FText::FText((FText *)&local_108.TextValue,pFVar10);
      if ((local_108.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_1b8.AllocatorInstance.Data,&local_108,1);
      local_128.TextFormatData.Object = (pFVar12->TextFormatData).Object;
      local_128.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar12->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_128.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_128.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_128.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_118,&local_128,&local_1b8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
      if ((FFormatArgumentValue *)local_1b8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_1b8.AllocatorInstance.Data);
      }
      if (local_108.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_108.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar12->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar3 = (pFVar10->TextData).Reference;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))();
      }
      FText::operator=(param_6,&local_118);
      local_98.TextData.Reference = local_88.TextData.Reference;
      if (local_118.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
        local_98.TextData.Reference = local_88.TextData.Reference;
      }
LAB_148c51e58:
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
    }
  }
  bVar5 = false;
LAB_148c51e65:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  return bVar5;
}

