// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 1

// JsonObjectStringToUStruct<FUserGeneratedContentLocalizationDescriptor> @ 146b40ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
FJsonObjectConverter::JsonObjectStringToUStruct<FUserGeneratedContentLocalizationDescriptor>
          (FString *param_1,FUserGeneratedContentLocalizationDescriptor *param_2,long64 param_3,
          long64 param_4,bool param_5,FText *param_6,
          TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
          *param_7)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar6;
  UPackage *pUVar7;
  FText *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  wchar_t *pwVar12;
  StackState local_128;
  TSharedPtr<FJsonObject,1> local_e8;
  TSharedRef<FJsonObject,1> local_d8;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FText local_48;
  FTextFormat local_38;
  
  local_e8.Object = (FJsonObject *)0x0;
  local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = TJsonStringReader<wchar_t>::Create(&local_c8,param_1);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  local_128.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Identifier.Data.ArrayNum = 0;
  local_128.Identifier.Data.ArrayMax = 0;
  local_128.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Array.ArrayNum = 0;
  local_128.Array.ArrayMax = 0;
  local_128.Object.Object = (FJsonObject *)0x0;
  local_128.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_128,None);
  if (bVar4) {
    bVar4 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_128,&local_e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_128.Array.AllocatorInstance.Data,
               local_128.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_128.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_128.Array.AllocatorInstance.Data);
    }
    if (local_128.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Identifier.Data.AllocatorInstance.Data);
    }
    if ((!bVar4) || (local_e8.Object == (FJsonObject *)0x0)) goto LAB_146b40fbe;
    pwVar12 = L"";
    if ((local_e8.Object == (FJsonObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_d8.Object = local_e8.Object;
    local_d8.SharedReferenceCount.ReferenceController =
         local_e8.SharedReferenceCount.ReferenceController;
    if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_e8.Object == (FJsonObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_Localization();
      Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor,
                           (UObject *)pUVar7,L"UserGeneratedContentLocalizationDescriptor");
    }
    bVar4 = JsonObjectToUStruct(&local_d8,
                                (UStruct *)
                                Z_Registration_Info_UScriptStruct_FUserGeneratedContentLocalizationDescriptor
                                .OuterSingleton,param_2,param_3,param_4,param_5,param_6,param_7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
    if (bVar4) {
      bVar4 = true;
      goto LAB_146b41292;
    }
    if (2 < (byte)LogJson._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_bool___cdecl_FJsonObjectConverter::JsonObjectStringToUStruct<FUserGeneratedContentLocalizationDescriptor>(FString_const&___ptr64,FUserGeneratedContentLocalizationDescriptor*___ptr64,__int64,__int64,bool,FText*___ptr64,TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const&___ptr64,FProperty*___ptr64,void*___ptr64),FDefaultDelegateUserPolicy>_const*___ptr64)'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogJson);
    }
    if (param_6 != (FText *)0x0) {
      pFVar9 = FText::FText(&local_78,param_6);
      if ((param_1->Data).ArrayNum != 0) {
        pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      pFVar10 = FText::FromString(&local_68,pwVar12);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"JsonObjectConverter",L"FailJsonObjectConversion",
                          L"JsonObjectStringToUStruct - Unable to deserialize. json=[{0}]\n{1}");
      pFVar11 = FTextFormat::FTextFormat(&local_58,pFVar8,Default);
      pFVar9 = FText::Format<FText,FText>(&local_b8,pFVar11,pFVar10,pFVar9);
      FText::operator=(param_6,pFVar9);
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      goto LAB_146b41285;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_128.Array.AllocatorInstance.Data,
               local_128.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_128.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_128.Array.AllocatorInstance.Data);
    }
    if (local_128.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Identifier.Data.AllocatorInstance.Data);
    }
LAB_146b40fbe:
    pwVar12 = L"";
    if (2 < (byte)LogJson._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_bool___cdecl_FJsonObjectConverter::JsonObjectStringToUStruct<FUserGeneratedContentLocalizationDescriptor>(FString_const&___ptr64,FUserGeneratedContentLocalizationDescriptor*___ptr64,__int64,__int64,bool,FText*___ptr64,TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const&___ptr64,FProperty*___ptr64,void*___ptr64),FDefaultDelegateUserPolicy>_const*___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogJson);
    }
    if (param_6 != (FText *)0x0) {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      pFVar9 = FText::FromString(&local_48,pwVar12);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_88,L"JsonObjectConverter",L"FailJsonObjectDeserialize",
                           L"JsonObjectStringToUStruct - Unable to parse. json=[{0}]");
      pFVar11 = FTextFormat::FTextFormat(&local_38,pFVar10,Default);
      pFVar9 = FText::Format<FText>(&local_98,pFVar11,pFVar9);
      FText::operator=(param_6,pFVar9);
      local_a8.TextData.Reference = local_88.TextData.Reference;
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        local_a8.TextData.Reference = local_88.TextData.Reference;
      }
LAB_146b41285:
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
    }
  }
  bVar4 = false;
LAB_146b41292:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  return bVar4;
}

