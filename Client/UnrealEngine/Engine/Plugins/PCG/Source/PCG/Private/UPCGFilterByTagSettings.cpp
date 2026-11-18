// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 149b2fdd0

UClass * __cdecl UPCGFilterByTagSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGFilterByTagSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGFilterByTagSettings",
               &Z_Registration_Info_UClass_UPCGFilterByTagSettings.InnerSingleton,
               StaticRegisterNativesUPCGFilterByTagSettings,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGFilterByTagSettings>,
               InternalVTableHelperCtorCaller<UPCGFilterByTagSettings>,local_res8,
               UPCGFilterDataBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGFilterByTagSettings.InnerSingleton;
}

// UPCGFilterByTagSettings @ 149b57560

UPCGFilterByTagSettings * __thiscall
UPCGFilterByTagSettings::UPCGFilterByTagSettings
          (UPCGFilterByTagSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGFilterByTagSettings__6B_;
  this->Operation = KeepTagged;
  this->Operator = Equal;
  (this->SelectedTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedTags).Data.ArrayNum = 0;
  (this->SelectedTags).Data.ArrayMax = 0;
  this->bTokenizeOnWhiteSpace = false;
  return this;
}

// UPCGFilterByTagSettings @ 149b575b0

UPCGFilterByTagSettings * __thiscall
UPCGFilterByTagSettings::UPCGFilterByTagSettings
          (UPCGFilterByTagSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGFilterByTagSettings__6B_;
  this->Operation = KeepTagged;
  this->Operator = Equal;
  (this->SelectedTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedTags).Data.ArrayNum = 0;
  (this->SelectedTags).Data.ArrayMax = 0;
  this->bTokenizeOnWhiteSpace = false;
  return this;
}

// ~UPCGFilterByTagSettings @ 149b59240

void __thiscall UPCGFilterByTagSettings::~UPCGFilterByTagSettings(UPCGFilterByTagSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGFilterByTagSettings__6B_;
  pFVar1 = (this->SelectedTags).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGFilterDataBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6b4d0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGFilterByTagSettings::CreateElement
          (UPCGFilterByTagSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGFilterByTagElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGFilterByTagElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetAdditionalTitleInformation @ 149b8d610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
UPCGFilterByTagSettings::GetAdditionalTitleInformation
          (UPCGFilterByTagSettings *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FText *this_00;
  FString *pFVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  bool bVar11;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  
  if (this->bTokenizeOnWhiteSpace == false) {
    pTVar3 = PCGHelpers::GetStringArrayFromCommaSeparatedList(&local_38,&this->SelectedTags);
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar7 = pTVar3->ArrayNum;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
    DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    FVar5.Data = local_38.AllocatorInstance.Data;
  }
  else {
    pTVar3 = PCGHelpers::GetStringArrayFromCommaSeparatedString
                       (&local_48,&this->SelectedTags,(FPCGContext *)0x0);
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar7 = pTVar3->ArrayNum;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
    DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    FVar5.Data = local_48.AllocatorInstance.Data;
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  pTVar3 = &local_48;
  bVar11 = this->Operation != KeepTagged;
  pwVar10 = L"Tag (Keep):";
  pwVar9 = L"FilteredTagKeep";
  if (bVar11) {
    pwVar10 = L"Tag (Remove):";
    pwVar9 = L"FilteredTagRemove";
    pTVar3 = &local_38;
  }
  this_00 = FText::AsLocalizable_Advanced_LocText((FText *)pTVar3,L"PCGFilterByTag",pwVar9,pwVar10);
  pFVar4 = FText::ToString(this_00);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = (pFVar4->Data).ArrayNum;
  lVar8 = (longlong)local_50;
  _Src = (pFVar4->Data).AllocatorInstance.Data;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,_Src,lVar8 * 2);
  }
  if ((bVar11) && (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    (**(code **)(*(longlong *)local_38.AllocatorInstance.Data + 0x10))();
  }
  if ((!bVar11) && (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    (**(code **)(*(longlong *)local_48.AllocatorInstance.Data + 0x10))();
  }
  iVar2 = local_50;
  FVar5.Data = local_58.Data;
  if (iVar7 == 0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
    (__return_storage_ptr__->Data).ArrayNum = local_50;
    if (local_50 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_50,0,(ForAnyElementType *)__return_storage_ptr__,local_50,piVar1);
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,FVar5.Data,(longlong)iVar2 * 2);
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    iVar7 = 0;
  }
  else {
    if (iVar7 == 1) {
      ::FString::PrintfImpl(__return_storage_ptr__,L"%s %s");
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      DestructItems<FString,int>((FString *)pFVar6,1);
      goto LAB_149b8d8e2;
    }
    FText::AsLocalizable_Advanced_LocText
              ((FText *)&local_38,L"PCGFilterByTag",L"FilterMultipleTags",L"(multiple)");
    FText::ToString((FText *)&local_38);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s %s");
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_38.AllocatorInstance.Data + 0x10))();
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  DestructItems<FString,int>((FString *)pFVar6,iVar7);
  if (pFVar6 == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
LAB_149b8d8e2:
  FMemory::Free(pFVar6);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b911c0

UClass * __cdecl UPCGFilterByTagSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGFilterByTagSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGFilterByTagSettings",
               &Z_Registration_Info_UClass_UPCGFilterByTagSettings.InnerSingleton,
               StaticRegisterNativesUPCGFilterByTagSettings,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGFilterByTagSettings>,
               InternalVTableHelperCtorCaller<UPCGFilterByTagSettings>,local_res8,
               UPCGFilterDataBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGFilterByTagSettings.InnerSingleton;
}

// StaticRegisterNativesUPCGFilterByTagSettings @ 149b98560

void __cdecl UPCGFilterByTagSettings::StaticRegisterNativesUPCGFilterByTagSettings(void)

{
  return;
}

