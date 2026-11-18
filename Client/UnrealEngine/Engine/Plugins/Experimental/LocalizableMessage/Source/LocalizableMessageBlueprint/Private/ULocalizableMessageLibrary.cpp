// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizableMessageBlueprint
// Functions: 14

// StaticClass @ 14e9c1120

UClass * __cdecl ULocalizableMessageLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalizableMessageLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LocalizableMessageBlueprint",L"LocalizableMessageLibrary",
               &Z_Registration_Info_UClass_ULocalizableMessageLibrary.InnerSingleton,
               StaticRegisterNativesULocalizableMessageLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<ULocalizableMessageLibrary>,
               InternalVTableHelperCtorCaller<ULocalizableMessageLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalizableMessageLibrary.InnerSingleton;
}

// ULocalizableMessageLibrary @ 14e9c1420

ULocalizableMessageLibrary * __thiscall
ULocalizableMessageLibrary::ULocalizableMessageLibrary
          (ULocalizableMessageLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULocalizableMessageLibrary__6B_;
  return this;
}

// ULocalizableMessageLibrary @ 14e9c1450

ULocalizableMessageLibrary * __thiscall
ULocalizableMessageLibrary::ULocalizableMessageLibrary
          (ULocalizableMessageLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULocalizableMessageLibrary__6B_;
  return this;
}

// ~ULocalizableMessageLibrary @ 14e9c1480

void __thiscall
ULocalizableMessageLibrary::~ULocalizableMessageLibrary(ULocalizableMessageLibrary *this)

{
  *(undefined ***)this = &___7ULocalizableMessageLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// Conv_LocalizableMessageToText @ 14e9c1500

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
ULocalizableMessageLibrary::Conv_LocalizableMessageToText
          (FText *__return_storage_ptr__,UObject *param_1,FLocalizableMessage *param_2)

{
  ILocalizableMessageModule *pIVar1;
  FLocalizableMessageProcessor *this;
  UObject *local_res8;
  FLocalizationContext local_38;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_38.WorldContext.WeakPtr.ObjectIndex = 0;
  local_38.WorldContext.WeakPtr.ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_38,(FObjectPtr)&local_res8);
  local_38.LanguageOverride.Object = (FCulture *)0x0;
  local_38.LanguageOverride.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_38.LocaleOverride.Object = (FCulture *)0x0;
  local_38.LocaleOverride.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pIVar1 = ILocalizableMessageModule::Get();
  this = (FLocalizableMessageProcessor *)(**(code **)((longlong)*pIVar1 + 0x40))(pIVar1);
  FLocalizableMessageProcessor::Localize(this,__return_storage_ptr__,param_2,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.LocaleOverride.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.LanguageOverride.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// EqualEqual_LocalizableMessage @ 14e9c1600

bool __cdecl
ULocalizableMessageLibrary::EqualEqual_LocalizableMessage
          (FLocalizableMessage *param_1,FLocalizableMessage *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (param_1->Key).Data.ArrayNum;
  iVar1 = (param_2->Key).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Key).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_2->Key).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_14e9bee53;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_14e9bee53:
    if (!bVar3) {
      return false;
    }
  }
  iVar2 = (param_1->DefaultText).Data.ArrayNum;
  iVar1 = (param_2->DefaultText).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_14e9bee86;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->DefaultText).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_2->DefaultText).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_14e9bee86:
  iVar2 = (param_1->Substitutions).ArrayNum;
  if ((iVar2 == (param_2->Substitutions).ArrayNum) &&
     (bVar3 = CompareItems<FLocalizableMessageParameterEntry,int>
                        ((FLocalizableMessageParameterEntry *)
                         (param_1->Substitutions).AllocatorInstance.Data,
                         (FLocalizableMessageParameterEntry *)
                         (param_2->Substitutions).AllocatorInstance.Data,iVar2), bVar3)) {
    return true;
  }
  return false;
}

// GetPrivateStaticClass @ 14e9c1610

UClass * __cdecl ULocalizableMessageLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalizableMessageLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LocalizableMessageBlueprint",L"LocalizableMessageLibrary",
               &Z_Registration_Info_UClass_ULocalizableMessageLibrary.InnerSingleton,
               StaticRegisterNativesULocalizableMessageLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<ULocalizableMessageLibrary>,
               InternalVTableHelperCtorCaller<ULocalizableMessageLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalizableMessageLibrary.InnerSingleton;
}

// IsEmpty_LocalizableMessage @ 14e9c16d0

bool __cdecl ULocalizableMessageLibrary::IsEmpty_LocalizableMessage(FLocalizableMessage *param_1)

{
  if (((param_1->Key).Data.ArrayNum < 2) && ((param_1->DefaultText).Data.ArrayNum < 2)) {
    return true;
  }
  return false;
}

// Reset_LocalizableMessage @ 14e9c16f0

void __cdecl ULocalizableMessageLibrary::Reset_LocalizableMessage(FLocalizableMessage *param_1)

{
  int *piVar1;
  int iVar2;
  FLocalizableMessageParameterEntry *pFVar3;
  
  ::FString::Reset(&param_1->Key,0);
  ::FString::Reset(&param_1->DefaultText,0);
  piVar1 = &(param_1->Substitutions).ArrayMax;
  pFVar3 = (FLocalizableMessageParameterEntry *)(param_1->Substitutions).AllocatorInstance.Data;
  iVar2 = (param_1->Substitutions).ArrayNum;
  if (-1 < (param_1->Substitutions).ArrayMax) {
    DestructItems<FLocalizableMessageParameterEntry,int>(pFVar3,iVar2);
    (param_1->Substitutions).ArrayNum = 0;
    return;
  }
  DestructItems<FLocalizableMessageParameterEntry,int>(pFVar3,iVar2);
  (param_1->Substitutions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(param_1->Substitutions).AllocatorInstance,0,piVar1);
  }
  return;
}

// StaticRegisterNativesULocalizableMessageLibrary @ 14e9c1780

void __cdecl ULocalizableMessageLibrary::StaticRegisterNativesULocalizableMessageLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ULocalizableMessageLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConv_LocalizableMessageToText @ 14e9c1880

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
ULocalizableMessageLibrary::execConv_LocalizableMessageToText
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  ILocalizableMessageModule *pIVar3;
  FLocalizableMessageProcessor *this;
  FLocalizableMessage *pFVar4;
  UObject *local_res10 [2];
  UObject *local_res20;
  FText local_88;
  FLocalizationContext local_78;
  FLocalizableMessage local_50;
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FLocalizableMessage::FLocalizableMessage(&local_50);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pUVar2 = local_res10[0];
  pFVar4 = &local_50;
  if ((FLocalizableMessage *)param_2->MostRecentPropertyAddress != (FLocalizableMessage *)0x0) {
    pFVar4 = (FLocalizableMessage *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  local_78.WorldContext.WeakPtr.ObjectIndex = 0;
  local_78.WorldContext.WeakPtr.ObjectSerialNumber = 0;
  local_res20 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_78,(FObjectPtr)&local_res20);
  local_78.LanguageOverride.Object = (FCulture *)0x0;
  local_78.LanguageOverride.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_78.LocaleOverride.Object = (FCulture *)0x0;
  local_78.LocaleOverride.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pIVar3 = ILocalizableMessageModule::Get();
  this = (FLocalizableMessageProcessor *)(**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
  FLocalizableMessageProcessor::Localize(this,&local_88,pFVar4,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.LocaleOverride.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.LanguageOverride.SharedReferenceCount.ReferenceController);
  FText::operator=(param_3,&local_88);
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  FLocalizableMessage::~FLocalizableMessage(&local_50);
  return;
}

// execEqualEqual_LocalizableMessage @ 14e9c1a40

void __cdecl
ULocalizableMessageLibrary::execEqualEqual_LocalizableMessage
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FLocalizableMessage *pFVar3;
  FLocalizableMessage *this;
  FLocalizableMessage local_68;
  FLocalizableMessage local_38;
  
  FLocalizableMessage::FLocalizableMessage(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  this = &local_38;
  if ((FLocalizableMessage *)param_2->MostRecentPropertyAddress != (FLocalizableMessage *)0x0) {
    this = (FLocalizableMessage *)param_2->MostRecentPropertyAddress;
  }
  FLocalizableMessage::FLocalizableMessage(&local_68);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pFVar3 = &local_68;
  if ((FLocalizableMessage *)param_2->MostRecentPropertyAddress != (FLocalizableMessage *)0x0) {
    pFVar3 = (FLocalizableMessage *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FLocalizableMessage::operator==(this,pFVar3);
  *(bool *)param_3 = bVar2;
  FLocalizableMessage::~FLocalizableMessage(&local_68);
  FLocalizableMessage::~FLocalizableMessage(&local_38);
  return;
}

// execIsEmpty_LocalizableMessage @ 14e9c1b60

void __cdecl
ULocalizableMessageLibrary::execIsEmpty_LocalizableMessage
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FLocalizableMessage *pFVar3;
  FLocalizableMessage local_38;
  
  FLocalizableMessage::FLocalizableMessage(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar3 = &local_38;
  if ((FLocalizableMessage *)param_2->MostRecentPropertyAddress != (FLocalizableMessage *)0x0) {
    pFVar3 = (FLocalizableMessage *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((pFVar3->Key).Data.ArrayNum < 2) && ((pFVar3->DefaultText).Data.ArrayNum < 2)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)param_3 = uVar2;
  FLocalizableMessage::~FLocalizableMessage(&local_38);
  return;
}

// execReset_LocalizableMessage @ 14e9c1c20

void __cdecl
ULocalizableMessageLibrary::execReset_LocalizableMessage
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FLocalizableMessageParameterEntry *pFVar3;
  int *piVar4;
  FLocalizableMessage *this;
  FLocalizableMessage local_38;
  
  FLocalizableMessage::FLocalizableMessage(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  this = &local_38;
  if ((FLocalizableMessage *)param_2->MostRecentPropertyAddress != (FLocalizableMessage *)0x0) {
    this = (FLocalizableMessage *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::Reset(&this->Key,0);
  ::FString::Reset(&this->DefaultText,0);
  piVar4 = &(this->Substitutions).ArrayMax;
  pFVar3 = (FLocalizableMessageParameterEntry *)(this->Substitutions).AllocatorInstance.Data;
  iVar1 = (this->Substitutions).ArrayNum;
  if (*piVar4 < 0) {
    DestructItems<FLocalizableMessageParameterEntry,int>(pFVar3,iVar1);
    (this->Substitutions).ArrayNum = 0;
    if (*piVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->Substitutions).AllocatorInstance,0,piVar4);
    }
  }
  else {
    DestructItems<FLocalizableMessageParameterEntry,int>(pFVar3,iVar1);
    (this->Substitutions).ArrayNum = 0;
  }
  FLocalizableMessage::~FLocalizableMessage(&local_38);
  return;
}

