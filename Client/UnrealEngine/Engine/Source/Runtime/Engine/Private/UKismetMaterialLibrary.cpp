// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 147d52330

UClass * __cdecl UKismetMaterialLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetMaterialLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetMaterialLibrary",
               &Z_Registration_Info_UClass_UKismetMaterialLibrary.InnerSingleton,
               StaticRegisterNativesUKismetMaterialLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetMaterialLibrary>,
               InternalVTableHelperCtorCaller<UKismetMaterialLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetMaterialLibrary.InnerSingleton;
}

// UKismetMaterialLibrary @ 147d7a0f0

UKismetMaterialLibrary * __thiscall
UKismetMaterialLibrary::UKismetMaterialLibrary(UKismetMaterialLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetMaterialLibrary__6B_;
  return this;
}

// UKismetMaterialLibrary @ 147d7a120

UKismetMaterialLibrary * __thiscall
UKismetMaterialLibrary::UKismetMaterialLibrary
          (UKismetMaterialLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetMaterialLibrary__6B_;
  return this;
}

// ~UKismetMaterialLibrary @ 147d7bab0

void __thiscall UKismetMaterialLibrary::~UKismetMaterialLibrary(UKismetMaterialLibrary *this)

{
  *(undefined ***)this = &___7UKismetMaterialLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CreateDynamicMaterialInstance @ 147d93f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMaterialInstanceDynamic * __cdecl
UKismetMaterialLibrary::CreateDynamicMaterialInstance
          (UObject *param_1,UMaterialInterface *param_2,FName param_3,EMIDCreationFlags param_4)

{
  bool bVar1;
  UWorld *this;
  UMaterialInstanceDynamic *this_00;
  
  if (param_2 != (UMaterialInterface *)0x0) {
    this = UEngine::GetWorldFromContextObject(GEngine,param_1,ReturnNull);
    if ((((param_4 & Transient) != None) || (this == (UWorld *)0x0)) ||
       (bVar1 = UWorld::IsGameWorld(this), bVar1)) {
      param_1 = (UObject *)0x0;
    }
    this_00 = UMaterialInstanceDynamic::Create(param_2,param_1,param_3);
    if (param_1 == (UObject *)0x0) {
      UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transient);
    }
    return this_00;
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// GetPrivateStaticClass @ 147da7ff0

UClass * __cdecl UKismetMaterialLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetMaterialLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetMaterialLibrary",
               &Z_Registration_Info_UClass_UKismetMaterialLibrary.InnerSingleton,
               StaticRegisterNativesUKismetMaterialLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetMaterialLibrary>,
               InternalVTableHelperCtorCaller<UKismetMaterialLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetMaterialLibrary.InnerSingleton;
}

// GetScalarParameterValue @ 147da8c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

float __cdecl
UKismetMaterialLibrary::GetScalarParameterValue
          (UObject *param_1,UMaterialParameterCollection *param_2,FName param_3)

{
  FTokenizedMessage *pFVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *this;
  UMaterialParameterCollectionInstance *this_00;
  FText *pFVar4;
  FMessageLog *this_01;
  TSharedRef<FTokenizedMessage,1> *pTVar5;
  TSharedRef<FTextToken,1> *pTVar6;
  TSharedRef<FUObjectToken,1> *pTVar7;
  FTextFormat *pFVar8;
  float fVar9;
  float local_res10 [2];
  FName local_res18;
  FName local_res20;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_198
  ;
  TSharedRef<IMessageToken,1> local_188;
  TSharedRef<IMessageToken,1> local_178;
  TSharedRef<IMessageToken,1> local_168;
  FString local_158;
  FFormatArgumentValue local_148;
  FText local_128;
  TSharedRef<FTokenizedMessage,1> local_118;
  TSharedRef<FTextToken,1> local_108;
  FText local_f8;
  FText local_e8;
  TSharedRef<FTokenizedMessage,1> local_d8;
  TSharedRef<FUObjectToken,1> local_c8;
  FText local_b8;
  TSharedRef<FTokenizedMessage,1> local_a8;
  TSharedRef<FTextToken,1> local_98;
  FText local_88;
  TSharedRef<FTokenizedMessage,1> local_78;
  FText local_68;
  FTextFormat local_58;
  FMessageLog local_48;
  
  local_res10[0] = 0.0;
  fVar9 = 0.0;
  if (param_2 != (UMaterialParameterCollection *)0x0) {
    local_res18 = param_3;
    this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this == (UWorld *)0x0) {
      return local_res10[0];
    }
    this_00 = UWorld::GetParameterCollectionInstance(this,param_2);
    bVar3 = UMaterialParameterCollectionInstance::GetScalarParameterValue
                      (this_00,local_res18,local_res10);
    fVar9 = local_res10[0];
    if ((!bVar3) && (this_00->bLoggedMissingParameterWarning == false)) {
      local_198.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.Pairs.ArrayNum = 0;
      local_198.Pairs.ArrayMax = 0;
      pFVar4 = FText::FromName(&local_128,&local_res18);
      local_148.Type = Text;
      FText::FText((FText *)&local_148.TextValue,pFVar4);
      if ((local_148.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar9 = (float)(*pcVar2)();
        return fVar9;
      }
      ::FString::FString(&local_158,L"ParamName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_198,&local_158,&local_148);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_148.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_148.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_128.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
      }
      ::FName::FName(&local_res20,"PIE");
      this_01 = FMessageLog::FMessageLog(&local_48,&local_res20);
      pFVar4 = FText::FText(&local_68);
      pTVar5 = FMessageLog::Warning(this_01,&local_78,pFVar4);
      pFVar1 = pTVar5->Object;
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_88,L"KismetMaterialLibrary",L"GetScalarParamOn",
                          L"GetScalarParameterValue called on");
      pTVar6 = FTextToken::Create(&local_98,pFVar4,true);
      local_168.Object = (IMessageToken *)pTVar6->Object;
      local_168.SharedReferenceCount.ReferenceController =
           (pTVar6->SharedReferenceCount).ReferenceController;
      if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar5 = FTokenizedMessage::AddToken(pFVar1,&local_a8,&local_168);
      pFVar1 = pTVar5->Object;
      pFVar4 = FText::FText(&local_b8);
      pTVar7 = FUObjectToken::Create(&local_c8,(UObject *)param_2,pFVar4);
      local_178.Object = (IMessageToken *)pTVar7->Object;
      local_178.SharedReferenceCount.ReferenceController =
           (pTVar7->SharedReferenceCount).ReferenceController;
      if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar5 = FTokenizedMessage::AddToken(pFVar1,&local_d8,&local_178);
      pFVar1 = pTVar5->Object;
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_e8,L"KismetMaterialLibrary",L"WithInvalidParam",
                          L"with invalid ParameterName \'{ParamName}\'. This is likely due to a Blueprint error."
                         );
      pFVar8 = FTextFormat::FTextFormat(&local_58,pFVar4,Default);
      pFVar4 = FText::Format(&local_f8,pFVar8,&local_198);
      pTVar6 = FTextToken::Create(&local_108,pFVar4,true);
      local_188.Object = (IMessageToken *)pTVar6->Object;
      local_188.SharedReferenceCount.ReferenceController =
           (pTVar6->SharedReferenceCount).ReferenceController;
      if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTokenizedMessage::AddToken(pFVar1,&local_118,&local_188);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.SharedReferenceCount.ReferenceController);
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog(&local_48);
      this_00->bLoggedMissingParameterWarning = true;
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_198.Pairs.AllocatorInstance.Data,
                 local_198.Pairs.ArrayNum);
      fVar9 = local_res10[0];
      if ((TTuple<FString,FFormatArgumentValue> *)local_198.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_198.Pairs.AllocatorInstance.Data);
        fVar9 = local_res10[0];
      }
    }
  }
  return fVar9;
}

// GetVectorParameterValue @ 147daa440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FLinearColor * __cdecl
UKismetMaterialLibrary::GetVectorParameterValue
          (FLinearColor *__return_storage_ptr__,UObject *param_1,
          UMaterialParameterCollection *param_2,FName param_3)

{
  FTokenizedMessage *pFVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *this;
  UMaterialParameterCollectionInstance *this_00;
  FText *pFVar4;
  FLinearColor *pFVar5;
  FMessageLog *this_01;
  TSharedRef<FTokenizedMessage,1> *pTVar6;
  TSharedRef<FTextToken,1> *pTVar7;
  TSharedRef<FUObjectToken,1> *pTVar8;
  FTextFormat *pFVar9;
  FName local_res8;
  FName local_res20;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_198
  ;
  TSharedRef<IMessageToken,1> local_188;
  TSharedRef<IMessageToken,1> local_178;
  TSharedRef<IMessageToken,1> local_168;
  FString local_158;
  FFormatArgumentValue local_148;
  FText local_128;
  TSharedRef<FTokenizedMessage,1> local_118;
  TSharedRef<FTextToken,1> local_108;
  FText local_f8;
  FText local_e8;
  TSharedRef<FTokenizedMessage,1> local_d8;
  TSharedRef<FUObjectToken,1> local_c8;
  FText local_b8;
  TSharedRef<FTokenizedMessage,1> local_a8;
  TSharedRef<FTextToken,1> local_98;
  FText local_88;
  TSharedRef<FTokenizedMessage,1> local_78;
  FText local_68;
  FTextFormat local_58;
  FMessageLog local_48;
  
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black;
  if (param_2 != (UMaterialParameterCollection *)0x0) {
    local_res20 = param_3;
    this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      this_00 = UWorld::GetParameterCollectionInstance(this,param_2);
      bVar3 = UMaterialParameterCollectionInstance::GetVectorParameterValue
                        (this_00,local_res20,__return_storage_ptr__);
      if ((!bVar3) && (this_00->bLoggedMissingParameterWarning == false)) {
        local_198.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.Pairs.ArrayNum = 0;
        local_198.Pairs.ArrayMax = 0;
        pFVar4 = FText::FromName(&local_128,&local_res20);
        local_148.Type = Text;
        FText::FText((FText *)&local_148.TextValue,pFVar4);
        if (local_148.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FLinearColor *)(*pcVar2)();
            return pFVar5;
          }
        }
        ::FString::FString(&local_158,L"ParamName");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_198,&local_158,&local_148);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        if (local_148.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_148.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_128.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
        }
        ::FName::FName(&local_res8,"PIE");
        this_01 = FMessageLog::FMessageLog(&local_48,&local_res8);
        pFVar4 = FText::FText(&local_68);
        pTVar6 = FMessageLog::Warning(this_01,&local_78,pFVar4);
        pFVar1 = pTVar6->Object;
        pFVar4 = FText::AsLocalizable_Advanced_LocText
                           (&local_88,L"KismetMaterialLibrary",L"GetVectorParamOn",
                            L"GetVectorParameterValue called on");
        pTVar7 = FTextToken::Create(&local_98,pFVar4,true);
        local_168.Object = (IMessageToken *)pTVar7->Object;
        local_168.SharedReferenceCount.ReferenceController =
             (pTVar7->SharedReferenceCount).ReferenceController;
        if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar6 = FTokenizedMessage::AddToken(pFVar1,&local_a8,&local_168);
        pFVar1 = pTVar6->Object;
        pFVar4 = FText::FText(&local_b8);
        pTVar8 = FUObjectToken::Create(&local_c8,(UObject *)param_2,pFVar4);
        local_178.Object = (IMessageToken *)pTVar8->Object;
        local_178.SharedReferenceCount.ReferenceController =
             (pTVar8->SharedReferenceCount).ReferenceController;
        if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar6 = FTokenizedMessage::AddToken(pFVar1,&local_d8,&local_178);
        pFVar1 = pTVar6->Object;
        pFVar4 = FText::AsLocalizable_Advanced_LocText
                           (&local_e8,L"KismetMaterialLibrary",L"WithInvalidParam",
                            L"with invalid ParameterName \'{ParamName}\'. This is likely due to a Blueprint error."
                           );
        pFVar9 = FTextFormat::FTextFormat(&local_58,pFVar4,Default);
        pFVar4 = FText::Format(&local_f8,pFVar9,&local_198);
        pTVar7 = FTextToken::Create(&local_108,pFVar4,true);
        local_188.Object = (IMessageToken *)pTVar7->Object;
        local_188.SharedReferenceCount.ReferenceController =
             (pTVar7->SharedReferenceCount).ReferenceController;
        if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FTokenizedMessage::AddToken(pFVar1,&local_118,&local_188);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_118.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_188.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108.SharedReferenceCount.ReferenceController);
        if (local_f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
        }
        if (local_e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_178.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.SharedReferenceCount.ReferenceController);
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
        FMessageLog::~FMessageLog(&local_48);
        this_00->bLoggedMissingParameterWarning = true;
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                  ((TTuple<FString,FFormatArgumentValue> *)local_198.Pairs.AllocatorInstance.Data,
                   local_198.Pairs.ArrayNum);
        if ((TTuple<FString,FFormatArgumentValue> *)local_198.Pairs.AllocatorInstance.Data !=
            (TTuple<FString,FFormatArgumentValue> *)0x0) {
          FMemory::Free(local_198.Pairs.AllocatorInstance.Data);
        }
      }
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// SetScalarParameterValue @ 147dc1170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UKismetMaterialLibrary::SetScalarParameterValue
          (UObject *param_1,UMaterialParameterCollection *param_2,FName param_3,float param_4)

{
  FTokenizedMessage *pFVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *this;
  UMaterialParameterCollectionInstance *this_00;
  FText *pFVar4;
  FMessageLog *this_01;
  TSharedRef<FTokenizedMessage,1> *pTVar5;
  TSharedRef<FTextToken,1> *pTVar6;
  TSharedRef<FUObjectToken,1> *pTVar7;
  FTextFormat *pFVar8;
  FName local_res10;
  FName local_res18 [2];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1a8
  ;
  TSharedRef<IMessageToken,1> local_198;
  TSharedRef<IMessageToken,1> local_188;
  TSharedRef<IMessageToken,1> local_178;
  FString local_168;
  FFormatArgumentValue local_158;
  FText local_138;
  TSharedRef<FTokenizedMessage,1> local_128;
  TSharedRef<FTextToken,1> local_118;
  FText local_108;
  FText local_f8;
  TSharedRef<FTokenizedMessage,1> local_e8;
  TSharedRef<FUObjectToken,1> local_d8;
  FText local_c8;
  TSharedRef<FTokenizedMessage,1> local_b8;
  TSharedRef<FTextToken,1> local_a8;
  FText local_98;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FTextFormat local_68;
  FMessageLog local_58;
  
  if (param_2 != (UMaterialParameterCollection *)0x0) {
    local_res18[0] = param_3;
    this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      this_00 = UWorld::GetParameterCollectionInstance(this,param_2);
      bVar3 = UMaterialParameterCollectionInstance::SetScalarParameterValue
                        (this_00,local_res18[0],param_4);
      if ((!bVar3) && (this_00->bLoggedMissingParameterWarning == false)) {
        local_1a8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.Pairs.ArrayNum = 0;
        local_1a8.Pairs.ArrayMax = 0;
        pFVar4 = FText::FromName(&local_138,local_res18);
        local_158.Type = Text;
        FText::FText((FText *)&local_158.TextValue,pFVar4);
        if ((local_158.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ::FString::FString(&local_168,L"ParamName");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_1a8,&local_168,&local_158);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if (local_158.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_158.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_138.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
        }
        ::FName::FName(&local_res10,"PIE");
        this_01 = FMessageLog::FMessageLog(&local_58,&local_res10);
        pFVar4 = FText::FText(&local_78);
        pTVar5 = FMessageLog::Warning(this_01,&local_88,pFVar4);
        pFVar1 = pTVar5->Object;
        pFVar4 = FText::AsLocalizable_Advanced_LocText
                           (&local_98,L"KismetMaterialLibrary",L"SetScalarParamOn",
                            L"SetScalarParameterValue called on");
        pTVar6 = FTextToken::Create(&local_a8,pFVar4,true);
        local_178.Object = (IMessageToken *)pTVar6->Object;
        local_178.SharedReferenceCount.ReferenceController =
             (pTVar6->SharedReferenceCount).ReferenceController;
        if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar5 = FTokenizedMessage::AddToken(pFVar1,&local_b8,&local_178);
        pFVar1 = pTVar5->Object;
        pFVar4 = FText::FText(&local_c8);
        pTVar7 = FUObjectToken::Create(&local_d8,(UObject *)param_2,pFVar4);
        local_188.Object = (IMessageToken *)pTVar7->Object;
        local_188.SharedReferenceCount.ReferenceController =
             (pTVar7->SharedReferenceCount).ReferenceController;
        if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar5 = FTokenizedMessage::AddToken(pFVar1,&local_e8,&local_188);
        pFVar1 = pTVar5->Object;
        pFVar4 = FText::AsLocalizable_Advanced_LocText
                           (&local_f8,L"KismetMaterialLibrary",L"WithInvalidParam",
                            L"with invalid ParameterName \'{ParamName}\'. This is likely due to a Blueprint error."
                           );
        pFVar8 = FTextFormat::FTextFormat(&local_68,pFVar4,Default);
        pFVar4 = FText::Format(&local_108,pFVar8,&local_1a8);
        pTVar6 = FTextToken::Create(&local_118,pFVar4,true);
        local_198.Object = (IMessageToken *)pTVar6->Object;
        local_198.SharedReferenceCount.ReferenceController =
             (pTVar6->SharedReferenceCount).ReferenceController;
        if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FTokenizedMessage::AddToken(pFVar1,&local_128,&local_198);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_128.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_198.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_118.SharedReferenceCount.ReferenceController);
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
        }
        if (local_f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_188.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_178.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
        FMessageLog::~FMessageLog(&local_58);
        this_00->bLoggedMissingParameterWarning = true;
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                  ((TTuple<FString,FFormatArgumentValue> *)local_1a8.Pairs.AllocatorInstance.Data,
                   local_1a8.Pairs.ArrayNum);
        if ((TTuple<FString,FFormatArgumentValue> *)local_1a8.Pairs.AllocatorInstance.Data !=
            (TTuple<FString,FFormatArgumentValue> *)0x0) {
          FMemory::Free(local_1a8.Pairs.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// SetVectorParameterValue @ 147dc1c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UKismetMaterialLibrary::SetVectorParameterValue
          (UObject *param_1,UMaterialParameterCollection *param_2,FName param_3,
          FLinearColor *param_4)

{
  FTokenizedMessage *pFVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *this;
  UMaterialParameterCollectionInstance *this_00;
  FText *pFVar4;
  FMessageLog *this_01;
  TSharedRef<FTokenizedMessage,1> *pTVar5;
  TSharedRef<FTextToken,1> *pTVar6;
  TSharedRef<FUObjectToken,1> *pTVar7;
  FTextFormat *pFVar8;
  FName local_res10;
  FName local_res18 [2];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_198
  ;
  TSharedRef<IMessageToken,1> local_188;
  TSharedRef<IMessageToken,1> local_178;
  TSharedRef<IMessageToken,1> local_168;
  FString local_158;
  FFormatArgumentValue local_148;
  FText local_128;
  TSharedRef<FTokenizedMessage,1> local_118;
  TSharedRef<FTextToken,1> local_108;
  FText local_f8;
  FText local_e8;
  TSharedRef<FTokenizedMessage,1> local_d8;
  TSharedRef<FUObjectToken,1> local_c8;
  FText local_b8;
  TSharedRef<FTokenizedMessage,1> local_a8;
  TSharedRef<FTextToken,1> local_98;
  FText local_88;
  TSharedRef<FTokenizedMessage,1> local_78;
  FText local_68;
  FTextFormat local_58;
  FMessageLog local_48;
  
  if (param_2 != (UMaterialParameterCollection *)0x0) {
    local_res18[0] = param_3;
    this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      this_00 = UWorld::GetParameterCollectionInstance(this,param_2);
      bVar3 = UMaterialParameterCollectionInstance::SetVectorParameterValue
                        (this_00,local_res18[0],param_4);
      if ((!bVar3) && (this_00->bLoggedMissingParameterWarning == false)) {
        local_198.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.Pairs.ArrayNum = 0;
        local_198.Pairs.ArrayMax = 0;
        pFVar4 = FText::FromName(&local_128,local_res18);
        local_148.Type = Text;
        FText::FText((FText *)&local_148.TextValue,pFVar4);
        if ((local_148.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ::FString::FString(&local_158,L"ParamName");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_198,&local_158,&local_148);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        if (local_148.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_148.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_128.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
        }
        ::FName::FName(&local_res10,"PIE");
        this_01 = FMessageLog::FMessageLog(&local_48,&local_res10);
        pFVar4 = FText::FText(&local_68);
        pTVar5 = FMessageLog::Warning(this_01,&local_78,pFVar4);
        pFVar1 = pTVar5->Object;
        pFVar4 = FText::AsLocalizable_Advanced_LocText
                           (&local_88,L"KismetMaterialLibrary",L"SetVectorParamOn",
                            L"SetVectorParameterValue called on");
        pTVar6 = FTextToken::Create(&local_98,pFVar4,true);
        local_168.Object = (IMessageToken *)pTVar6->Object;
        local_168.SharedReferenceCount.ReferenceController =
             (pTVar6->SharedReferenceCount).ReferenceController;
        if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar5 = FTokenizedMessage::AddToken(pFVar1,&local_a8,&local_168);
        pFVar1 = pTVar5->Object;
        pFVar4 = FText::FText(&local_b8);
        pTVar7 = FUObjectToken::Create(&local_c8,(UObject *)param_2,pFVar4);
        local_178.Object = (IMessageToken *)pTVar7->Object;
        local_178.SharedReferenceCount.ReferenceController =
             (pTVar7->SharedReferenceCount).ReferenceController;
        if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar5 = FTokenizedMessage::AddToken(pFVar1,&local_d8,&local_178);
        pFVar1 = pTVar5->Object;
        pFVar4 = FText::AsLocalizable_Advanced_LocText
                           (&local_e8,L"KismetMaterialLibrary",L"WithInvalidParam",
                            L"with invalid ParameterName \'{ParamName}\'. This is likely due to a Blueprint error."
                           );
        pFVar8 = FTextFormat::FTextFormat(&local_58,pFVar4,Default);
        pFVar4 = FText::Format(&local_f8,pFVar8,&local_198);
        pTVar6 = FTextToken::Create(&local_108,pFVar4,true);
        local_188.Object = (IMessageToken *)pTVar6->Object;
        local_188.SharedReferenceCount.ReferenceController =
             (pTVar6->SharedReferenceCount).ReferenceController;
        if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FTokenizedMessage::AddToken(pFVar1,&local_118,&local_188);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_118.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_188.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108.SharedReferenceCount.ReferenceController);
        if (local_f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
        }
        if (local_e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_178.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.SharedReferenceCount.ReferenceController);
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
        FMessageLog::~FMessageLog(&local_48);
        this_00->bLoggedMissingParameterWarning = true;
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                  ((TTuple<FString,FFormatArgumentValue> *)local_198.Pairs.AllocatorInstance.Data,
                   local_198.Pairs.ArrayNum);
        if ((TTuple<FString,FFormatArgumentValue> *)local_198.Pairs.AllocatorInstance.Data !=
            (TTuple<FString,FFormatArgumentValue> *)0x0) {
          FMemory::Free(local_198.Pairs.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// StaticRegisterNativesUKismetMaterialLibrary @ 147dc4190

void __cdecl UKismetMaterialLibrary::StaticRegisterNativesUKismetMaterialLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UKismetMaterialLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateDynamicMaterialInstance @ 147de8240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UKismetMaterialLibrary::execCreateDynamicMaterialInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  FName FVar3;
  UMaterialInterface *pUVar4;
  bool bVar5;
  UWorld *this;
  UMaterialInstanceDynamic *this_00;
  UObject *pUVar6;
  byte local_res10 [8];
  FName local_res18;
  UMaterialInterface *local_res20;
  UObject *local_38 [2];
  
  local_38[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20 = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar6 = local_38[0];
  pUVar4 = local_res20;
  FVar3 = local_res18;
  bVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UMaterialInterface *)0x0) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  this = UEngine::GetWorldFromContextObject(GEngine,local_38[0],ReturnNull);
  if (((bVar2 & 1) == 0) && (this != (UWorld *)0x0)) {
    bVar5 = UWorld::IsGameWorld(this);
    if (!bVar5) goto LAB_147de83af;
  }
  pUVar6 = (UObject *)0x0;
LAB_147de83af:
  this_00 = UMaterialInstanceDynamic::Create(pUVar4,pUVar6,FVar3);
  if (pUVar6 == (UObject *)0x0) {
    UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transient);
  }
  *(UMaterialInstanceDynamic **)param_3 = this_00;
  return;
}

// execGetScalarParameterValue @ 147dfe060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UKismetMaterialLibrary::execGetScalarParameterValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTokenizedMessage *pFVar2;
  code *pcVar3;
  UMaterialParameterCollection *pUVar4;
  bool bVar5;
  UWorld *this;
  UMaterialParameterCollectionInstance *this_00;
  FText *pFVar6;
  FMessageLog *this_01;
  TSharedRef<FTokenizedMessage,1> *pTVar7;
  TSharedRef<FTextToken,1> *pTVar8;
  TSharedRef<FUObjectToken,1> *pTVar9;
  FTextFormat *pFVar10;
  float fVar11;
  float local_res10 [2];
  FName local_res18;
  UMaterialParameterCollection *local_res20;
  UObject *local_1c8;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1c0
  ;
  FName local_1b0;
  FName local_1a8;
  TSharedRef<IMessageToken,1> local_1a0;
  TSharedRef<IMessageToken,1> local_190;
  TSharedRef<IMessageToken,1> local_180;
  FString local_170;
  FFormatArgumentValue local_160;
  FText local_140;
  TSharedRef<FTokenizedMessage,1> local_130;
  TSharedRef<FTextToken,1> local_120;
  FText local_110;
  FText local_100;
  TSharedRef<FTokenizedMessage,1> local_f0;
  TSharedRef<FUObjectToken,1> local_e0;
  FText local_d0;
  TSharedRef<FTokenizedMessage,1> local_c0;
  TSharedRef<FTextToken,1> local_b0;
  FText local_a0;
  TSharedRef<FTokenizedMessage,1> local_90;
  FText local_80;
  FTextFormat local_70;
  FMessageLog local_60;
  
  local_1c8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  local_res20 = (UMaterialParameterCollection *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar4 = local_res20;
  local_res10[0] = 0.0;
  local_1b0 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar11 = 0.0;
  if ((local_res20 != (UMaterialParameterCollection *)0x0) &&
     (this = UEngine::GetWorldFromContextObject(GEngine,local_1c8,LogAndReturnNull),
     fVar11 = local_res10[0], this != (UWorld *)0x0)) {
    this_00 = UWorld::GetParameterCollectionInstance(this,pUVar4);
    bVar5 = UMaterialParameterCollectionInstance::GetScalarParameterValue
                      (this_00,local_1b0,local_res10);
    if ((!bVar5) && (this_00->bLoggedMissingParameterWarning == false)) {
      local_1c0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c0.Pairs.ArrayNum = 0;
      local_1c0.Pairs.ArrayMax = 0;
      pFVar6 = FText::FromName(&local_140,&local_1b0);
      local_160.Type = Text;
      FText::FText((FText *)&local_160.TextValue,pFVar6);
      if ((local_160.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::FString(&local_170,L"ParamName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_1c0,&local_170,&local_160);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      if (local_160.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_160.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_140.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
      }
      ::FName::FName(&local_1a8,"PIE");
      this_01 = FMessageLog::FMessageLog(&local_60,&local_1a8);
      pFVar6 = FText::FText(&local_80);
      pTVar7 = FMessageLog::Warning(this_01,&local_90,pFVar6);
      pFVar2 = pTVar7->Object;
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_a0,L"KismetMaterialLibrary",L"GetScalarParamOn",
                          L"GetScalarParameterValue called on");
      pTVar8 = FTextToken::Create(&local_b0,pFVar6,true);
      local_180.Object = (IMessageToken *)pTVar8->Object;
      local_180.SharedReferenceCount.ReferenceController =
           (pTVar8->SharedReferenceCount).ReferenceController;
      if (local_180.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar7 = FTokenizedMessage::AddToken(pFVar2,&local_c0,&local_180);
      pFVar2 = pTVar7->Object;
      pFVar6 = FText::FText(&local_d0);
      pTVar9 = FUObjectToken::Create(&local_e0,(UObject *)pUVar4,pFVar6);
      local_190.Object = (IMessageToken *)pTVar9->Object;
      local_190.SharedReferenceCount.ReferenceController =
           (pTVar9->SharedReferenceCount).ReferenceController;
      if (local_190.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar7 = FTokenizedMessage::AddToken(pFVar2,&local_f0,&local_190);
      pFVar2 = pTVar7->Object;
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_100,L"KismetMaterialLibrary",L"WithInvalidParam",
                          L"with invalid ParameterName \'{ParamName}\'. This is likely due to a Blueprint error."
                         );
      pFVar10 = FTextFormat::FTextFormat(&local_70,pFVar6,Default);
      pFVar6 = FText::Format(&local_110,pFVar10,&local_1c0);
      pTVar8 = FTextToken::Create(&local_120,pFVar6,true);
      local_1a0.Object = (IMessageToken *)pTVar8->Object;
      local_1a0.SharedReferenceCount.ReferenceController =
           (pTVar8->SharedReferenceCount).ReferenceController;
      if (local_1a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTokenizedMessage::AddToken(pFVar2,&local_130,&local_1a0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_130.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_120.SharedReferenceCount.ReferenceController);
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      if (local_100.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_190.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e0.SharedReferenceCount.ReferenceController);
      if (local_d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_180.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.SharedReferenceCount.ReferenceController);
      if (local_a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.SharedReferenceCount.ReferenceController);
      if (local_80.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog(&local_60);
      this_00->bLoggedMissingParameterWarning = true;
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_1c0.Pairs.AllocatorInstance.Data,
                 local_1c0.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_1c0.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_1c0.Pairs.AllocatorInstance.Data);
      }
    }
    *(float *)param_3 = local_res10[0];
    return;
  }
  *(float *)param_3 = fVar11;
  return;
}

// execGetVectorParameterValue @ 147e00a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UKismetMaterialLibrary::execGetVectorParameterValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTokenizedMessage *pFVar2;
  code *pcVar3;
  UMaterialParameterCollection *pUVar4;
  bool bVar5;
  UWorld *this;
  UMaterialParameterCollectionInstance *this_00;
  FText *pFVar6;
  FMessageLog *this_01;
  TSharedRef<FTokenizedMessage,1> *pTVar7;
  TSharedRef<FTextToken,1> *pTVar8;
  TSharedRef<FUObjectToken,1> *pTVar9;
  FTextFormat *pFVar10;
  FName local_res10;
  UMaterialParameterCollection *local_res18;
  UObject *local_res20;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1c8
  ;
  FName local_1b8;
  FName local_1b0;
  TSharedRef<IMessageToken,1> local_1a8;
  TSharedRef<IMessageToken,1> local_198;
  TSharedRef<IMessageToken,1> local_188;
  FString local_178;
  FLinearColor_u_0 local_168;
  FFormatArgumentValue local_158;
  FText local_138;
  TSharedRef<FTokenizedMessage,1> local_128;
  TSharedRef<FTextToken,1> local_118;
  FText local_108;
  FText local_f8;
  TSharedRef<FTokenizedMessage,1> local_e8;
  TSharedRef<FUObjectToken,1> local_d8;
  FText local_c8;
  TSharedRef<FTokenizedMessage,1> local_b8;
  TSharedRef<FTextToken,1> local_a8;
  FText local_98;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FTextFormat local_68;
  FMessageLog local_58;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UMaterialParameterCollection *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1b8 = local_res10;
  local_168 = FLinearColor::Black.field0_0x0;
  if ((local_res18 != (UMaterialParameterCollection *)0x0) &&
     (this = UEngine::GetWorldFromContextObject(GEngine,local_res20,LogAndReturnNull),
     this != (UWorld *)0x0)) {
    this_00 = UWorld::GetParameterCollectionInstance(this,pUVar4);
    bVar5 = UMaterialParameterCollectionInstance::GetVectorParameterValue
                      (this_00,local_1b8,(FLinearColor *)&local_168._s_0);
    if ((!bVar5) && (this_00->bLoggedMissingParameterWarning == false)) {
      local_1c8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.Pairs.ArrayNum = 0;
      local_1c8.Pairs.ArrayMax = 0;
      pFVar6 = FText::FromName(&local_138,&local_1b8);
      local_158.Type = Text;
      FText::FText((FText *)&local_158.TextValue,pFVar6);
      if ((local_158.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::FString(&local_178,L"ParamName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_1c8,&local_178,&local_158);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (local_158.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_158.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_138.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
      }
      ::FName::FName(&local_1b0,"PIE");
      this_01 = FMessageLog::FMessageLog(&local_58,&local_1b0);
      pFVar6 = FText::FText(&local_78);
      pTVar7 = FMessageLog::Warning(this_01,&local_88,pFVar6);
      pFVar2 = pTVar7->Object;
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_98,L"KismetMaterialLibrary",L"GetVectorParamOn",
                          L"GetVectorParameterValue called on");
      pTVar8 = FTextToken::Create(&local_a8,pFVar6,true);
      local_188.Object = (IMessageToken *)pTVar8->Object;
      local_188.SharedReferenceCount.ReferenceController =
           (pTVar8->SharedReferenceCount).ReferenceController;
      if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar7 = FTokenizedMessage::AddToken(pFVar2,&local_b8,&local_188);
      pFVar2 = pTVar7->Object;
      pFVar6 = FText::FText(&local_c8);
      pTVar9 = FUObjectToken::Create(&local_d8,(UObject *)pUVar4,pFVar6);
      local_198.Object = (IMessageToken *)pTVar9->Object;
      local_198.SharedReferenceCount.ReferenceController =
           (pTVar9->SharedReferenceCount).ReferenceController;
      if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar7 = FTokenizedMessage::AddToken(pFVar2,&local_e8,&local_198);
      pFVar2 = pTVar7->Object;
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_f8,L"KismetMaterialLibrary",L"WithInvalidParam",
                          L"with invalid ParameterName \'{ParamName}\'. This is likely due to a Blueprint error."
                         );
      pFVar10 = FTextFormat::FTextFormat(&local_68,pFVar6,Default);
      pFVar6 = FText::Format(&local_108,pFVar10,&local_1c8);
      pTVar8 = FTextToken::Create(&local_118,pFVar6,true);
      local_1a8.Object = (IMessageToken *)pTVar8->Object;
      local_1a8.SharedReferenceCount.ReferenceController =
           (pTVar8->SharedReferenceCount).ReferenceController;
      if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTokenizedMessage::AddToken(pFVar2,&local_128,&local_1a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_128.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog(&local_58);
      this_00->bLoggedMissingParameterWarning = true;
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_1c8.Pairs.AllocatorInstance.Data,
                 local_1c8.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_1c8.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_1c8.Pairs.AllocatorInstance.Data);
      }
    }
  }
  *(undefined8 *)param_3 = local_168._0_8_;
  *(undefined8 *)((longlong)param_3 + 8) = local_168._8_8_;
  return;
}

// execSetScalarParameterValue @ 147e30cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UKismetMaterialLibrary::execSetScalarParameterValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTokenizedMessage *pFVar2;
  code *pcVar3;
  float fVar4;
  UMaterialParameterCollection *pUVar5;
  bool bVar6;
  UWorld *this;
  UMaterialParameterCollectionInstance *this_00;
  FText *pFVar7;
  FMessageLog *this_01;
  TSharedRef<FTokenizedMessage,1> *pTVar8;
  TSharedRef<FTextToken,1> *pTVar9;
  TSharedRef<FUObjectToken,1> *pTVar10;
  FTextFormat *pFVar11;
  float local_res10 [2];
  FName local_res20;
  UMaterialParameterCollection *local_1c8;
  UObject *local_1c0;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1b8
  ;
  FName local_1a8;
  FName local_1a0;
  TSharedRef<IMessageToken,1> local_198;
  TSharedRef<IMessageToken,1> local_188;
  TSharedRef<IMessageToken,1> local_178;
  FString local_168;
  FFormatArgumentValue local_158;
  FText local_138;
  TSharedRef<FTokenizedMessage,1> local_128;
  TSharedRef<FTextToken,1> local_118;
  FText local_108;
  FText local_f8;
  TSharedRef<FTokenizedMessage,1> local_e8;
  TSharedRef<FUObjectToken,1> local_d8;
  FText local_c8;
  TSharedRef<FTokenizedMessage,1> local_b8;
  TSharedRef<FTextToken,1> local_a8;
  FText local_98;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FTextFormat local_68;
  FMessageLog local_58;
  
  local_1c0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  local_1c8 = (UMaterialParameterCollection *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_1c8;
  fVar4 = local_res10[0];
  local_1a8 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_1c8 != (UMaterialParameterCollection *)0x0) &&
     (this = UEngine::GetWorldFromContextObject(GEngine,local_1c0,LogAndReturnNull),
     this != (UWorld *)0x0)) {
    this_00 = UWorld::GetParameterCollectionInstance(this,pUVar5);
    bVar6 = UMaterialParameterCollectionInstance::SetScalarParameterValue(this_00,local_1a8,fVar4);
    if ((!bVar6) && (this_00->bLoggedMissingParameterWarning == false)) {
      local_1b8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.Pairs.ArrayNum = 0;
      local_1b8.Pairs.ArrayMax = 0;
      pFVar7 = FText::FromName(&local_138,&local_1a8);
      local_158.Type = Text;
      FText::FText((FText *)&local_158.TextValue,pFVar7);
      if ((local_158.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::FString(&local_168,L"ParamName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_1b8,&local_168,&local_158);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_158.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_158.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_138.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
      }
      ::FName::FName(&local_1a0,"PIE");
      this_01 = FMessageLog::FMessageLog(&local_58,&local_1a0);
      pFVar7 = FText::FText(&local_78);
      pTVar8 = FMessageLog::Warning(this_01,&local_88,pFVar7);
      pFVar2 = pTVar8->Object;
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_98,L"KismetMaterialLibrary",L"SetScalarParamOn",
                          L"SetScalarParameterValue called on");
      pTVar9 = FTextToken::Create(&local_a8,pFVar7,true);
      local_178.Object = (IMessageToken *)pTVar9->Object;
      local_178.SharedReferenceCount.ReferenceController =
           (pTVar9->SharedReferenceCount).ReferenceController;
      if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar8 = FTokenizedMessage::AddToken(pFVar2,&local_b8,&local_178);
      pFVar2 = pTVar8->Object;
      pFVar7 = FText::FText(&local_c8);
      pTVar10 = FUObjectToken::Create(&local_d8,(UObject *)pUVar5,pFVar7);
      local_188.Object = (IMessageToken *)pTVar10->Object;
      local_188.SharedReferenceCount.ReferenceController =
           (pTVar10->SharedReferenceCount).ReferenceController;
      if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar8 = FTokenizedMessage::AddToken(pFVar2,&local_e8,&local_188);
      pFVar2 = pTVar8->Object;
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_f8,L"KismetMaterialLibrary",L"WithInvalidParam",
                          L"with invalid ParameterName \'{ParamName}\'. This is likely due to a Blueprint error."
                         );
      pFVar11 = FTextFormat::FTextFormat(&local_68,pFVar7,Default);
      pFVar7 = FText::Format(&local_108,pFVar11,&local_1b8);
      pTVar9 = FTextToken::Create(&local_118,pFVar7,true);
      local_198.Object = (IMessageToken *)pTVar9->Object;
      local_198.SharedReferenceCount.ReferenceController =
           (pTVar9->SharedReferenceCount).ReferenceController;
      if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTokenizedMessage::AddToken(pFVar2,&local_128,&local_198);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_128.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog(&local_58);
      this_00->bLoggedMissingParameterWarning = true;
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_1b8.Pairs.AllocatorInstance.Data,
                 local_1b8.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_1b8.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_1b8.Pairs.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// execSetVectorParameterValue @ 147e32420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UKismetMaterialLibrary::execSetVectorParameterValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTokenizedMessage *pFVar2;
  code *pcVar3;
  UMaterialParameterCollection *pUVar4;
  bool bVar5;
  UWorld *this;
  UMaterialParameterCollectionInstance *this_00;
  FText *pFVar6;
  FMessageLog *this_01;
  TSharedRef<FTokenizedMessage,1> *pTVar7;
  TSharedRef<FTextToken,1> *pTVar8;
  TSharedRef<FUObjectToken,1> *pTVar9;
  FTextFormat *pFVar10;
  FLinearColor *pFVar11;
  FName local_res10 [2];
  UMaterialParameterCollection *local_res20;
  UObject *local_1d8;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1d0
  ;
  FName local_1c0;
  FName local_1b8;
  TSharedRef<IMessageToken,1> local_1b0;
  TSharedRef<IMessageToken,1> local_1a0;
  TSharedRef<IMessageToken,1> local_190;
  FLinearColor local_180;
  FString local_170;
  FFormatArgumentValue local_160;
  FText local_140;
  TSharedRef<FTokenizedMessage,1> local_130;
  TSharedRef<FTextToken,1> local_120;
  FText local_110;
  FText local_100;
  TSharedRef<FTokenizedMessage,1> local_f0;
  TSharedRef<FUObjectToken,1> local_e0;
  FText local_d0;
  TSharedRef<FTokenizedMessage,1> local_c0;
  TSharedRef<FTextToken,1> local_b0;
  FText local_a0;
  TSharedRef<FTokenizedMessage,1> local_90;
  FText local_80;
  FTextFormat local_70;
  FMessageLog local_60;
  
  local_1d8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  local_res20 = (UMaterialParameterCollection *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  pUVar4 = local_res20;
  pFVar11 = &local_180;
  if ((FLinearColor *)param_2->MostRecentPropertyAddress != (FLinearColor *)0x0) {
    pFVar11 = (FLinearColor *)param_2->MostRecentPropertyAddress;
  }
  local_1c0 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res20 != (UMaterialParameterCollection *)0x0) &&
     (this = UEngine::GetWorldFromContextObject(GEngine,local_1d8,LogAndReturnNull),
     this != (UWorld *)0x0)) {
    this_00 = UWorld::GetParameterCollectionInstance(this,pUVar4);
    bVar5 = UMaterialParameterCollectionInstance::SetVectorParameterValue(this_00,local_1c0,pFVar11)
    ;
    if ((!bVar5) && (this_00->bLoggedMissingParameterWarning == false)) {
      local_1d0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d0.Pairs.ArrayNum = 0;
      local_1d0.Pairs.ArrayMax = 0;
      pFVar6 = FText::FromName(&local_140,&local_1c0);
      local_160.Type = Text;
      FText::FText((FText *)&local_160.TextValue,pFVar6);
      if ((local_160.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::FString(&local_170,L"ParamName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_1d0,&local_170,&local_160);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      if (local_160.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_160.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_140.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
      }
      ::FName::FName(&local_1b8,"PIE");
      this_01 = FMessageLog::FMessageLog(&local_60,&local_1b8);
      pFVar6 = FText::FText(&local_80);
      pTVar7 = FMessageLog::Warning(this_01,&local_90,pFVar6);
      pFVar2 = pTVar7->Object;
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_a0,L"KismetMaterialLibrary",L"SetVectorParamOn",
                          L"SetVectorParameterValue called on");
      pTVar8 = FTextToken::Create(&local_b0,pFVar6,true);
      local_190.Object = (IMessageToken *)pTVar8->Object;
      local_190.SharedReferenceCount.ReferenceController =
           (pTVar8->SharedReferenceCount).ReferenceController;
      if (local_190.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar7 = FTokenizedMessage::AddToken(pFVar2,&local_c0,&local_190);
      pFVar2 = pTVar7->Object;
      pFVar6 = FText::FText(&local_d0);
      pTVar9 = FUObjectToken::Create(&local_e0,(UObject *)pUVar4,pFVar6);
      local_1a0.Object = (IMessageToken *)pTVar9->Object;
      local_1a0.SharedReferenceCount.ReferenceController =
           (pTVar9->SharedReferenceCount).ReferenceController;
      if (local_1a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar7 = FTokenizedMessage::AddToken(pFVar2,&local_f0,&local_1a0);
      pFVar2 = pTVar7->Object;
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_100,L"KismetMaterialLibrary",L"WithInvalidParam",
                          L"with invalid ParameterName \'{ParamName}\'. This is likely due to a Blueprint error."
                         );
      pFVar10 = FTextFormat::FTextFormat(&local_70,pFVar6,Default);
      pFVar6 = FText::Format(&local_110,pFVar10,&local_1d0);
      pTVar8 = FTextToken::Create(&local_120,pFVar6,true);
      local_1b0.Object = (IMessageToken *)pTVar8->Object;
      local_1b0.SharedReferenceCount.ReferenceController =
           (pTVar8->SharedReferenceCount).ReferenceController;
      if (local_1b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTokenizedMessage::AddToken(pFVar2,&local_130,&local_1b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_130.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_120.SharedReferenceCount.ReferenceController);
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      if (local_100.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e0.SharedReferenceCount.ReferenceController);
      if (local_d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_190.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.SharedReferenceCount.ReferenceController);
      if (local_a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.SharedReferenceCount.ReferenceController);
      if (local_80.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog(&local_60);
      this_00->bLoggedMissingParameterWarning = true;
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_1d0.Pairs.AllocatorInstance.Data,
                 local_1d0.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_1d0.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_1d0.Pairs.AllocatorInstance.Data);
      }
    }
  }
  return;
}

