// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 10

// StaticClass @ 14ec44310

UClass * __cdecl UAchievementBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAchievementBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"AchievementBlueprintLibrary",
               &Z_Registration_Info_UClass_UAchievementBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUAchievementBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAchievementBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UAchievementBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAchievementBlueprintLibrary.InnerSingleton;
}

// UAchievementBlueprintLibrary @ 14ec53120

UAchievementBlueprintLibrary * __thiscall
UAchievementBlueprintLibrary::UAchievementBlueprintLibrary
          (UAchievementBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAchievementBlueprintLibrary__6B_;
  return this;
}

// UAchievementBlueprintLibrary @ 14ec53150

UAchievementBlueprintLibrary * __thiscall
UAchievementBlueprintLibrary::UAchievementBlueprintLibrary
          (UAchievementBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAchievementBlueprintLibrary__6B_;
  return this;
}

// ~UAchievementBlueprintLibrary @ 14ec56ae0

void __thiscall
UAchievementBlueprintLibrary::~UAchievementBlueprintLibrary(UAchievementBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UAchievementBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetCachedAchievementDescription @ 14ec73d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAchievementBlueprintLibrary::GetCachedAchievementDescription
          (UObject *param_1,APlayerController *param_2,FName param_3,bool *param_4,FText *param_5,
          FText *param_6,FText *param_7,bool *param_8)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  FText *pFVar4;
  bool bVar5;
  int iVar6;
  FText *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FString *pFVar10;
  ForAnyElementType FVar11;
  longlong *plVar12;
  undefined1 local_res10 [8];
  FName local_res18;
  bool *local_res20;
  longlong *local_108;
  TReferenceControllerBase<1> *local_100;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  bool local_c8;
  undefined8 local_c0;
  TSharedPtr<FUniqueNetId_const_,1> local_b8;
  FUniqueNetId *local_a8;
  FSharedReferencer<1> local_a0;
  IOnlineSubsystem *local_98;
  wchar_t *local_90;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  FName local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  *param_4 = false;
  local_res18 = param_3;
  local_res20 = param_4;
  pFVar7 = FText::GetEmpty();
  pFVar4 = param_5;
  pIVar1 = (pFVar7->TextData).Reference;
  pIVar2 = (param_5->TextData).Reference;
  if (pIVar2 != pIVar1) {
    (param_5->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&param_5);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  pFVar4->Flags = pFVar7->Flags;
  pFVar8 = FText::GetEmpty();
  pFVar7 = param_6;
  pIVar1 = (pFVar8->TextData).Reference;
  pIVar2 = (param_6->TextData).Reference;
  if (pIVar2 != pIVar1) {
    (param_6->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&param_6);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  pFVar7->Flags = pFVar8->Flags;
  pFVar9 = FText::GetEmpty();
  pFVar8 = param_7;
  pIVar1 = (pFVar9->TextData).Reference;
  pIVar2 = (param_7->TextData).Reference;
  if (pIVar2 != pIVar1) {
    (param_7->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&param_7);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  pFVar8->Flags = pFVar9->Flags;
  local_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *param_8 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  UEngine::GetWorldFromContextObject(GEngine,param_1,ReturnNull);
  local_98 = IOnlineSubsystem::Get(&local_80);
  local_90 = L"GetCachedAchievementDescription";
  if (local_98 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_78,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar11.Data = local_78.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar11.Data,Warning,(FName)0x0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  local_a8 = (FUniqueNetId *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((param_2 == (APlayerController *)0x0) || (param_2->_padding_ == 0)) {
    ::FString::PrintfImpl(&local_58,L"%s - Invalid player state");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar11.Data = local_58.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar11.Data,Warning,(FName)0x0);
    local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  }
  else {
    FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)(param_2->_padding_ + 0x2d0),&local_b8);
    local_a8 = local_b8.Object;
    local_b8.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_a0,&local_b8.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    if (local_a8 != (FUniqueNetId *)0x0) {
      if (local_98 != (IOnlineSubsystem *)0x0) {
        (**(code **)(local_98->_padding_ + 0xa8))(local_98,&local_108);
        if (local_108 == (longlong *)0x0) {
          FFrame::KismetExecutionMessage
                    (L"Achievements not supported by Online Subsystem",Warning,(FName)0x0);
        }
        else {
          FText::FText(&local_f8);
          FText::FText(&local_e8);
          FText::FText(&local_d8);
          local_c0 = 0;
          plVar12 = local_108;
          if ((local_108 == (longlong *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), plVar12 = local_108, bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = *(code **)(*plVar12 + 0x30);
          pFVar10 = ::FName::ToString(&local_res18,&local_48);
          iVar6 = (*pcVar3)(plVar12,pFVar10,&local_f8);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (iVar6 == 0) {
            *local_res20 = true;
            pIVar1 = (pFVar4->TextData).Reference;
            if (pIVar1 != local_f8.TextData.Reference) {
              (pFVar4->TextData).Reference = local_f8.TextData.Reference;
              if (local_f8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_f8.TextData.Reference + 8))
                          (local_f8.TextData.Reference,local_res10);
              }
              if (pIVar1 != (ITextData *)0x0) {
                (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
              }
            }
            pFVar4->Flags = local_f8.Flags;
            pIVar1 = (pFVar7->TextData).Reference;
            if (pIVar1 != local_e8.TextData.Reference) {
              (pFVar7->TextData).Reference = local_e8.TextData.Reference;
              if (local_e8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_e8.TextData.Reference + 8))
                          (local_e8.TextData.Reference,local_88);
              }
              if (pIVar1 != (ITextData *)0x0) {
                (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
              }
            }
            pFVar7->Flags = local_e8.Flags;
            pIVar1 = (pFVar8->TextData).Reference;
            if (pIVar1 != local_d8.TextData.Reference) {
              (pFVar8->TextData).Reference = local_d8.TextData.Reference;
              if (local_d8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_d8.TextData.Reference + 8))
                          (local_d8.TextData.Reference,local_84);
              }
              if (pIVar1 != (ITextData *)0x0) {
                (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
              }
            }
            pFVar8->Flags = local_d8.Flags;
            *param_8 = local_c8;
          }
          if (local_d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))
                      (local_d8.TextData.Reference);
          }
          if (local_e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
          }
          if (local_f8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_100);
            goto LAB_14ec74149;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_100);
      }
      goto LAB_14ec74149;
    }
    ::FString::PrintfImpl(&local_68,L"%s - Cannot map local player to unique net ID");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar11.Data = local_68.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar11.Data,Warning,(FName)0x0);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_14ec74149:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.ReferenceController);
  return;
}

// GetCachedAchievementProgress @ 14ec74180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAchievementBlueprintLibrary::GetCachedAchievementProgress
          (UObject *param_1,APlayerController *param_2,FName param_3,bool *param_4,float *param_5)

{
  code *pcVar1;
  FUniqueNetId *pFVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  longlong *plVar7;
  FName local_res18;
  FName local_res20;
  FSharedReferencer<1> local_d0;
  IOnlineSubsystem *local_c8;
  wchar_t *local_c0;
  TSharedPtr<FUniqueNetId_const_,1> local_b8;
  longlong *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68;
  undefined8 local_60;
  double local_58;
  FString local_50;
  
  *param_4 = false;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  *param_5 = 0.0;
  local_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_res18 = param_3;
  UEngine::GetWorldFromContextObject(GEngine,param_1,ReturnNull);
  local_c8 = IOnlineSubsystem::Get(&local_res20);
  local_c0 = L"GetCachedAchievementProgress";
  if (local_c8 == (IOnlineSubsystem *)0x0) {
    ::FString::PrintfImpl(&local_98,L"%s - Invalid or uninitialized OnlineSubsystem");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar6.Data = local_98.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((param_2 == (APlayerController *)0x0) || (param_2->_padding_ == 0)) {
    ::FString::PrintfImpl(&local_78,L"%s - Invalid player state");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
    local_88.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
  }
  else {
    FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)(param_2->_padding_ + 0x2d0),&local_b8);
    pFVar2 = local_b8.Object;
    local_b8.Object = (FUniqueNetId *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_d0,&local_b8.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    if (pFVar2 != (FUniqueNetId *)0x0) {
      if (local_c8 != (IOnlineSubsystem *)0x0) {
        (**(code **)(local_c8->_padding_ + 0xa8))(local_c8,&local_a8);
        if (local_a8 == (longlong *)0x0) {
          FFrame::KismetExecutionMessage
                    (L"Achievements not supported by Online Subsystem",Warning,(FName)0x0);
        }
        else {
          local_68 = (void *)0x0;
          local_60 = 0;
          plVar7 = local_a8;
          if ((local_a8 == (longlong *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), plVar7 = local_a8, bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcVar1 = *(code **)(*plVar7 + 0x20);
          pFVar5 = ::FName::ToString(&local_res18,&local_50);
          if ((pFVar2 == (FUniqueNetId *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar4 = (*pcVar1)(plVar7,pFVar2,pFVar5,&local_68);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          if (iVar4 == 0) {
            *param_4 = true;
            *param_5 = (float)local_58;
          }
          if (local_68 != (void *)0x0) {
            FMemory::Free(local_68);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a0);
            goto LAB_14ec74420;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0);
      }
      goto LAB_14ec74420;
    }
    ::FString::PrintfImpl(&local_88,L"%s - Cannot map local player to unique net ID");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar6.Data = local_88.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_14ec74420:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.ReferenceController);
  return;
}

// GetPrivateStaticClass @ 14ec77640

UClass * __cdecl UAchievementBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAchievementBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"AchievementBlueprintLibrary",
               &Z_Registration_Info_UClass_UAchievementBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUAchievementBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAchievementBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UAchievementBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAchievementBlueprintLibrary.InnerSingleton;
}

// StaticRegisterNativesUAchievementBlueprintLibrary @ 14ec99550

void __cdecl UAchievementBlueprintLibrary::StaticRegisterNativesUAchievementBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAchievementBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCachedAchievementDescription @ 14eca59e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAchievementBlueprintLibrary::execGetCachedAchievementDescription
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FProperty *pFVar2;
  bool *pbVar3;
  FText *pFVar4;
  bool *pbVar5;
  FText *pFVar6;
  FText *pFVar7;
  bool local_res10 [8];
  bool local_res20 [8];
  FName local_78;
  APlayerController *local_70;
  UObject *local_68;
  FText local_60;
  FText local_50;
  FText local_40;
  
  local_68 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_70 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar5 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_40);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  pFVar7 = &local_40;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar7 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_50);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pFVar6 = &local_50;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar6 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_60);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pFVar1 = (FText *)param_2->MostRecentPropertyAddress;
  local_res20[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_60;
  if (pFVar1 != (FText *)0x0) {
    pFVar4 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pbVar3 = local_res20;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetCachedAchievementDescription(local_68,local_70,local_78,pbVar5,pFVar7,pFVar6,pFVar4,pbVar3);
  if (local_60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  return;
}

// execGetCachedAchievementProgress @ 14eca5ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAchievementBlueprintLibrary::execGetCachedAchievementProgress
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool *pbVar1;
  FProperty *pFVar2;
  float *pfVar3;
  bool *pbVar4;
  bool local_res10 [8];
  float local_res20 [2];
  FName local_28;
  APlayerController *local_20;
  UObject *local_18 [2];
  
  local_18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_20 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar1 = (bool *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar4 = local_res10;
  if (pbVar1 != (bool *)0x0) {
    pbVar4 = pbVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar3 = local_res20;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetCachedAchievementProgress(local_18[0],local_20,local_28,pbVar4,pfVar3);
  return;
}

