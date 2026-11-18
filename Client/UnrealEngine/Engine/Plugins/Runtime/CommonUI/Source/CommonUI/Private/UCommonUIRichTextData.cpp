// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 8

// StaticClass @ 14a77fc80

UClass * __cdecl UCommonUIRichTextData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUIRichTextData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUIRichTextData",
               &Z_Registration_Info_UClass_UCommonUIRichTextData.InnerSingleton,
               StaticRegisterNativesUCommonUIRichTextData,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonUIRichTextData>,
               InternalVTableHelperCtorCaller<UCommonUIRichTextData>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUIRichTextData.InnerSingleton;
}

// UCommonUIRichTextData @ 14a7af790

UCommonUIRichTextData * __thiscall
UCommonUIRichTextData::UCommonUIRichTextData(UCommonUIRichTextData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCommonUIRichTextData__6B_;
  (this->InlineIconSet).field0_0x0.DebugPtr = (UDataTable *)0x0;
  return this;
}

// UCommonUIRichTextData @ 14a7af7c0

UCommonUIRichTextData * __thiscall
UCommonUIRichTextData::UCommonUIRichTextData
          (UCommonUIRichTextData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCommonUIRichTextData__6B_;
  (this->InlineIconSet).field0_0x0.DebugPtr = (UDataTable *)0x0;
  return this;
}

// ~UCommonUIRichTextData @ 14a7b3890

void __thiscall UCommonUIRichTextData::~UCommonUIRichTextData(UCommonUIRichTextData *this)

{
  this->_padding_ = (longlong)&___7UCommonUIRichTextData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// FindIcon @ 14a7dc490

FRichTextIconData * __thiscall
UCommonUIRichTextData::FindIcon(UCommonUIRichTextData *this,FName *param_1)

{
  UDataTable *this_00;
  FName FVar1;
  UPackage *pUVar2;
  FRichTextIconData *pFVar3;
  ForAnyElementType FVar4;
  FString local_18;
  
  ::FString::FString(&local_18,L"UCommonUIRichTextData::FindIcon");
  this_00 = (this->InlineIconSet).field0_0x0.DebugPtr;
  FVar1 = *param_1;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  if (Z_Registration_Info_UScriptStruct_FRichTextIconData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_CommonUI();
    Z_Registration_Info_UScriptStruct_FRichTextIconData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRichTextIconData,(UObject *)pUVar2,
                         L"RichTextIconData");
  }
  pFVar3 = (FRichTextIconData *)
           UDataTable::FindRowInternal
                     (this_00,Z_Registration_Info_UScriptStruct_FRichTextIconData.OuterSingleton,
                      FVar1,(wchar_t *)FVar4.Data,true);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pFVar3;
}

// Get @ 14a7dffc0

UCommonUIRichTextData * __cdecl UCommonUIRichTextData::Get(void)

{
  code *pcVar1;
  bool bVar2;
  UCommonUISettings *pUVar3;
  UCommonUIRichTextData *pUVar4;
  
  pUVar3 = ICommonUIModule::GetSettings();
  if (pUVar3->bDefaultDataLoaded != false) {
    return (pUVar3->RichTextDataInstance).field0_0x0.DebugPtr;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2728553711960850556>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonUISettings.cpp"
                     ,0x7c,"bDefaultDataLoaded");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UCommonUIRichTextData *)(*pcVar1)();
    return pUVar4;
  }
  return (pUVar3->RichTextDataInstance).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14a7e6840

UClass * __cdecl UCommonUIRichTextData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUIRichTextData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUIRichTextData",
               &Z_Registration_Info_UClass_UCommonUIRichTextData.InnerSingleton,
               StaticRegisterNativesUCommonUIRichTextData,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonUIRichTextData>,
               InternalVTableHelperCtorCaller<UCommonUIRichTextData>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUIRichTextData.InnerSingleton;
}

// StaticRegisterNativesUCommonUIRichTextData @ 14a81e960

void __cdecl UCommonUIRichTextData::StaticRegisterNativesUCommonUIRichTextData(void)

{
  return;
}

