// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 14

// StaticClass @ 14ecd42e0

UClass * __cdecl UTurnBasedBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTurnBasedBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"TurnBasedBlueprintLibrary",
               &Z_Registration_Info_UClass_UTurnBasedBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUTurnBasedBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UTurnBasedBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UTurnBasedBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTurnBasedBlueprintLibrary.InnerSingleton;
}

// UTurnBasedBlueprintLibrary @ 14ecda600

UTurnBasedBlueprintLibrary * __thiscall
UTurnBasedBlueprintLibrary::UTurnBasedBlueprintLibrary
          (UTurnBasedBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UTurnBasedBlueprintLibrary__6B_;
  return this;
}

// UTurnBasedBlueprintLibrary @ 14ecda630

UTurnBasedBlueprintLibrary * __thiscall
UTurnBasedBlueprintLibrary::UTurnBasedBlueprintLibrary
          (UTurnBasedBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UTurnBasedBlueprintLibrary__6B_;
  return this;
}

// ~UTurnBasedBlueprintLibrary @ 14ecdbe20

void __thiscall
UTurnBasedBlueprintLibrary::~UTurnBasedBlueprintLibrary(UTurnBasedBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UTurnBasedBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetIsMyTurn @ 14ece7b70

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
UTurnBasedBlueprintLibrary::GetIsMyTurn
          (UObject *param_1,APlayerController *param_2,FString *param_3,bool *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  longlong *local_88;
  TReferenceControllerBase<1> *local_80;
  longlong *local_78;
  TReferenceControllerBase<1> *local_70;
  FString local_68;
  FString local_58;
  FOnlineSubsystemBPCallHelper local_48;
  
  *param_4 = false;
  FOnlineSubsystemBPCallHelper::FOnlineSubsystemBPCallHelper
            (&local_48,L"GetIsMyTurn",param_1,(FName)0x0);
  FOnlineSubsystemBPCallHelper::QueryIDFromPlayerController(&local_48,param_2);
  if ((local_48.UserID.Object != (FUniqueNetId *)0x0) &&
     (local_48.OnlineSub != (IOnlineSubsystem *)0x0)) {
    (**(code **)((local_48.OnlineSub)->_padding_ + 0x100))(local_48.OnlineSub,&local_78);
    if (local_78 == (longlong *)0x0) {
      FFrame::KismetExecutionMessage
                (L"Turn Based Matches not supported by Online Subsystem",Warning,(FName)0x0);
    }
    else {
      plVar7 = local_78;
      if ((local_78 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), plVar7 = local_78, bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = *(code **)(*plVar7 + 0x38);
      pFVar6 = ::FString::FString(&local_58,param_3);
      (*pcVar2)(plVar7,&local_88,pFVar6);
      if (local_88 == (longlong *)0x0) {
        ::FString::PrintfImpl(&local_68,L"Match ID %s not found");
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar8.Data = local_68.Data.AllocatorInstance.Data;
        }
        FFrame::KismetExecutionMessage((wchar_t *)FVar8.Data,Warning,(FName)0x0);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      else {
        if ((local_88 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = (**(code **)(*local_88 + 0x48))();
        if ((local_88 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = (**(code **)(*local_88 + 0x40))();
        *param_4 = iVar4 == iVar5;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.UserID.SharedReferenceCount.ReferenceController);
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetMyPlayerIndex @ 14ece7f50

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
UTurnBasedBlueprintLibrary::GetMyPlayerIndex
          (UObject *param_1,APlayerController *param_2,FString *param_3,int *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  longlong *plVar7;
  longlong *local_88;
  TReferenceControllerBase<1> *local_80;
  longlong *local_78;
  TReferenceControllerBase<1> *local_70;
  FString local_68;
  FString local_58;
  FOnlineSubsystemBPCallHelper local_48;
  
  *param_4 = -1;
  FOnlineSubsystemBPCallHelper::FOnlineSubsystemBPCallHelper
            (&local_48,L"GetMyPlayerIndex",param_1,(FName)0x0);
  FOnlineSubsystemBPCallHelper::QueryIDFromPlayerController(&local_48,param_2);
  if ((local_48.UserID.Object != (FUniqueNetId *)0x0) &&
     (local_48.OnlineSub != (IOnlineSubsystem *)0x0)) {
    (**(code **)((local_48.OnlineSub)->_padding_ + 0x100))(local_48.OnlineSub,&local_78);
    if (local_78 == (longlong *)0x0) {
      FFrame::KismetExecutionMessage
                (L"Turn Based Matches not supported by Online Subsystem",Warning,(FName)0x0);
    }
    else {
      plVar7 = local_78;
      if ((local_78 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), plVar7 = local_78, bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = *(code **)(*plVar7 + 0x38);
      pFVar5 = ::FString::FString(&local_58,param_3);
      (*pcVar2)(plVar7,&local_88,pFVar5);
      if (local_88 == (longlong *)0x0) {
        ::FString::PrintfImpl(&local_68,L"Match ID %s not found");
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar6.Data = local_68.Data.AllocatorInstance.Data;
        }
        FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Warning,(FName)0x0);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      else {
        if ((local_88 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = (**(code **)(*local_88 + 0x40))();
        *param_4 = iVar4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.UserID.SharedReferenceCount.ReferenceController);
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetPlayerDisplayName @ 14ece8420

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
UTurnBasedBlueprintLibrary::GetPlayerDisplayName
          (UObject *param_1,APlayerController *param_2,FString *param_3,int param_4,FString *param_5
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FString *pFVar5;
  longlong *plVar6;
  ForAnyElementType FVar7;
  longlong *local_a0;
  TReferenceControllerBase<1> *local_98;
  longlong *local_90;
  TReferenceControllerBase<1> *local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FOnlineSubsystemBPCallHelper local_50;
  
  FOnlineSubsystemBPCallHelper::FOnlineSubsystemBPCallHelper
            (&local_50,L"GetMyPlayerIndex",param_1,(FName)0x0);
  FOnlineSubsystemBPCallHelper::QueryIDFromPlayerController(&local_50,param_2);
  if ((local_50.UserID.Object == (FUniqueNetId *)0x0) ||
     (local_50.OnlineSub == (IOnlineSubsystem *)0x0)) goto LAB_14ece85fc;
  (**(code **)((local_50.OnlineSub)->_padding_ + 0x100))(local_50.OnlineSub,&local_90);
  if (local_90 == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Turn Based Matches not supported by Online Subsystem",Warning,(FName)0x0);
  }
  else {
    plVar6 = local_90;
    if ((local_90 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), plVar6 = local_90, bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = *(code **)(*plVar6 + 0x38);
    pFVar5 = ::FString::FString(&local_60,param_3);
    (*pcVar2)(plVar6,&local_a0,pFVar5);
    if (local_a0 == (longlong *)0x0) {
      ::FString::PrintfImpl(&local_70,L"Match ID %s not found");
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_70.Data.ArrayNum != 0) {
        FVar7.Data = local_70.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar7.Data,Warning,(FName)0x0);
      local_80.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
LAB_14ece85b9:
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
    else {
      if ((local_a0 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      cVar4 = (**(code **)(*local_a0 + 0x10))(local_a0,param_4,param_5);
      if (cVar4 == '\0') {
        ::FString::PrintfImpl(&local_80,L"Player index %d not within bounds of player array.");
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_80.Data.ArrayNum != 0) {
          FVar7.Data = local_80.Data.AllocatorInstance.Data;
        }
        FFrame::KismetExecutionMessage((wchar_t *)FVar7.Data,Warning,(FName)0x0);
        goto LAB_14ece85b9;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
LAB_14ece85fc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.UserID.SharedReferenceCount.ReferenceController);
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetPrivateStaticClass @ 14ece8650

UClass * __cdecl UTurnBasedBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTurnBasedBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"TurnBasedBlueprintLibrary",
               &Z_Registration_Info_UClass_UTurnBasedBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUTurnBasedBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UTurnBasedBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UTurnBasedBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTurnBasedBlueprintLibrary.InnerSingleton;
}

// RegisterTurnBasedMatchInterfaceObject @ 14ecf7e50

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
UTurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject
          (UObject *param_1,APlayerController *param_2,UObject *param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  FOnlineSubsystemBPCallHelper local_28;
  
  FOnlineSubsystemBPCallHelper::FOnlineSubsystemBPCallHelper
            (&local_28,L"GetIsMyTurn",param_1,(FName)0x0);
  FOnlineSubsystemBPCallHelper::QueryIDFromPlayerController(&local_28,param_2);
  if ((local_28.UserID.Object != (FUniqueNetId *)0x0) &&
     (local_28.OnlineSub != (IOnlineSubsystem *)0x0)) {
    (**(code **)((local_28.OnlineSub)->_padding_ + 0x100))(local_28.OnlineSub,&local_38);
    if (local_38 != (longlong *)0x0) {
      if ((local_38 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*local_38 + 0x48))(local_38,param_3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.UserID.SharedReferenceCount.ReferenceController);
  return;
}

// StaticRegisterNativesUTurnBasedBlueprintLibrary @ 14ecfb700

void __cdecl UTurnBasedBlueprintLibrary::StaticRegisterNativesUTurnBasedBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetIsMyTurn @ 14ed0a040

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
UTurnBasedBlueprintLibrary::execGetIsMyTurn(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  bool *pbVar3;
  bool local_res10 [8];
  APlayerController *local_res20;
  UObject *local_48;
  void *local_40;
  undefined8 local_38;
  FString local_30;
  
  local_48 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_40 = (void *)0x0;
  local_38 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_40;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_38;
  local_30.Data.ArrayNum = (int)local_38;
  if ((int)local_38 == 0) {
    local_30.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_38,0,(ForAnyElementType *)&local_30,(int)local_38,
               &local_30.Data.ArrayMax);
    memcpy(local_30.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  GetIsMyTurn(local_48,local_res20,&local_30,pbVar3);
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}

// execGetMyPlayerIndex @ 14ed0a210

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
UTurnBasedBlueprintLibrary::execGetMyPlayerIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  int *piVar3;
  int local_res10 [2];
  APlayerController *local_res20;
  UObject *local_48;
  void *local_40;
  undefined8 local_38;
  FString local_30;
  
  local_48 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_40 = (void *)0x0;
  local_38 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_40;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_38;
  local_30.Data.ArrayNum = (int)local_38;
  if ((int)local_38 == 0) {
    local_30.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_38,0,(ForAnyElementType *)&local_30,(int)local_38,
               &local_30.Data.ArrayMax);
    memcpy(local_30.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  GetMyPlayerIndex(local_48,local_res20,&local_30,piVar3);
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}

// execGetPlayerDisplayName @ 14ed0a3e0

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
UTurnBasedBlueprintLibrary::execGetPlayerDisplayName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  FString *pFVar4;
  int local_res10 [4];
  APlayerController *local_res20;
  UObject *local_68;
  void *local_60;
  undefined8 local_58;
  FString local_50;
  FString local_40;
  
  local_68 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_60 = (void *)0x0;
  local_58 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  _Src = local_60;
  iVar2 = local_res10[0];
  pFVar4 = &local_40;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar4 = (FString *)param_2->MostRecentPropertyAddress;
  }
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_58;
  local_50.Data.ArrayNum = (int)local_58;
  if ((int)local_58 == 0) {
    local_50.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_58,0,(ForAnyElementType *)&local_50,(int)local_58,
               &local_50.Data.ArrayMax);
    memcpy(local_50.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  GetPlayerDisplayName(local_68,local_res20,&local_50,iVar2,pFVar4);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  return;
}

// execRegisterTurnBasedMatchInterfaceObject @ 14ed0a640

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
UTurnBasedBlueprintLibrary::execRegisterTurnBasedMatchInterfaceObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  APlayerController *pAVar5;
  bool bVar6;
  undefined8 local_res10 [2];
  APlayerController *local_res20;
  UObject *local_58;
  undefined8 local_50;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  FOnlineSubsystemBPCallHelper local_38;
  
  local_58 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pAVar5 = local_res20;
  uVar4 = local_res10[0];
  local_50 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FOnlineSubsystemBPCallHelper::FOnlineSubsystemBPCallHelper
            (&local_38,L"GetIsMyTurn",local_58,(FName)0x0);
  FOnlineSubsystemBPCallHelper::QueryIDFromPlayerController(&local_38,pAVar5);
  if ((local_38.UserID.Object != (FUniqueNetId *)0x0) &&
     (local_38.OnlineSub != (IOnlineSubsystem *)0x0)) {
    (**(code **)((local_38.OnlineSub)->_padding_ + 0x100))(local_38.OnlineSub,&local_48);
    if (local_48 != (longlong *)0x0) {
      if ((local_48 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(*local_48 + 0x48))(local_48,uVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.UserID.SharedReferenceCount.ReferenceController);
  return;
}

