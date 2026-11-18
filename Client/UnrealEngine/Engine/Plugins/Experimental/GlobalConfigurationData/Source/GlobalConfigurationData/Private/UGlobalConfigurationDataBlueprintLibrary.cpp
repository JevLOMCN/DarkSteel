// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GlobalConfigurationData
// Functions: 30

// StaticClass @ 14e9bacd0

UClass * __cdecl UGlobalConfigurationDataBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGlobalConfigurationDataBlueprintLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GlobalConfigurationData",L"GlobalConfigurationDataBlueprintLibrary",
               &Z_Registration_Info_UClass_UGlobalConfigurationDataBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUGlobalConfigurationDataBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UGlobalConfigurationDataBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UGlobalConfigurationDataBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGlobalConfigurationDataBlueprintLibrary.InnerSingleton;
}

// UGlobalConfigurationDataBlueprintLibrary @ 14e9bb410

UGlobalConfigurationDataBlueprintLibrary * __thiscall
UGlobalConfigurationDataBlueprintLibrary::UGlobalConfigurationDataBlueprintLibrary
          (UGlobalConfigurationDataBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGlobalConfigurationDataBlueprintLibrary__6B_;
  return this;
}

// UGlobalConfigurationDataBlueprintLibrary @ 14e9bb440

UGlobalConfigurationDataBlueprintLibrary * __thiscall
UGlobalConfigurationDataBlueprintLibrary::UGlobalConfigurationDataBlueprintLibrary
          (UGlobalConfigurationDataBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGlobalConfigurationDataBlueprintLibrary__6B_;
  return this;
}

// ~UGlobalConfigurationDataBlueprintLibrary @ 14e9bb470

void __thiscall
UGlobalConfigurationDataBlueprintLibrary::~UGlobalConfigurationDataBlueprintLibrary
          (UGlobalConfigurationDataBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UGlobalConfigurationDataBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetConfigDataBool @ 14e9bb510

bool __cdecl
UGlobalConfigurationDataBlueprintLibrary::GetConfigDataBool(FString *param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FJsonValue,1> TStack_18;
  
  IGlobalConfigurationRouter::TryGetData(&TStack_18,param_1);
  if (TStack_18.Object == (FJsonValue *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (TStack_18.Object == (FJsonValue *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar3 = (**(code **)((TStack_18.Object)->_padding_ + 0x68))(TStack_18.Object,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return (bool)uVar3;
}

// GetConfigDataBoolWithDefault @ 14e9bb520

bool __cdecl
UGlobalConfigurationDataBlueprintLibrary::GetConfigDataBoolWithDefault
          (FString *param_1,bool param_2)

{
  bool bVar1;
  bool local_res18 [16];
  
  bVar1 = UE::GlobalConfigurationData::TryGetData(param_1,local_res18);
  if (bVar1) {
    param_2 = local_res18[0];
  }
  return param_2;
}

// GetConfigDataFloat @ 14e9bb550

bool __cdecl
UGlobalConfigurationDataBlueprintLibrary::GetConfigDataFloat(FString *param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FJsonValue,1> TStack_18;
  
  IGlobalConfigurationRouter::TryGetData(&TStack_18,param_1);
  if (TStack_18.Object == (FJsonValue *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (TStack_18.Object == (FJsonValue *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar3 = (**(code **)((TStack_18.Object)->_padding_ + 0x48))(TStack_18.Object,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return (bool)uVar3;
}

// GetConfigDataFloatWithDefault @ 14e9bb560

float __cdecl
UGlobalConfigurationDataBlueprintLibrary::GetConfigDataFloatWithDefault
          (FString *param_1,float param_2)

{
  bool bVar1;
  float local_res18 [4];
  
  bVar1 = UE::GlobalConfigurationData::TryGetData(param_1,local_res18);
  if (bVar1) {
    return local_res18[0];
  }
  return param_2;
}

// GetConfigDataInt @ 14e9bb5a0

bool __cdecl
UGlobalConfigurationDataBlueprintLibrary::GetConfigDataInt(FString *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FJsonValue,1> TStack_18;
  
  IGlobalConfigurationRouter::TryGetData(&TStack_18,param_1);
  if (TStack_18.Object == (FJsonValue *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (TStack_18.Object == (FJsonValue *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar3 = (**(code **)((TStack_18.Object)->_padding_ + 0x30))(TStack_18.Object,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return (bool)uVar3;
}

// GetConfigDataIntWithDefault @ 14e9bb5b0

int __cdecl
UGlobalConfigurationDataBlueprintLibrary::GetConfigDataIntWithDefault(FString *param_1,int param_2)

{
  bool bVar1;
  int local_res18 [4];
  
  bVar1 = UE::GlobalConfigurationData::TryGetData(param_1,local_res18);
  if (bVar1) {
    param_2 = local_res18[0];
  }
  return param_2;
}

// GetConfigDataObject @ 14e9bb5e0

bool __cdecl
UGlobalConfigurationDataBlueprintLibrary::GetConfigDataObject(FString *param_1,UObject *param_2)

{
  bool bVar1;
  
  if (param_2 != (UObject *)0x0) {
    bVar1 = UE::GlobalConfigurationData::TryGetDataOfType
                      (param_1,*(UStruct **)&param_2->field_0x10,param_2);
    return bVar1;
  }
  return false;
}

// GetConfigDataString @ 14e9bb600

bool __cdecl
UGlobalConfigurationDataBlueprintLibrary::GetConfigDataString(FString *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FJsonValue,1> TStack_18;
  
  IGlobalConfigurationRouter::TryGetData(&TStack_18,param_1);
  if (TStack_18.Object == (FJsonValue *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (TStack_18.Object == (FJsonValue *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar3 = (**(code **)((TStack_18.Object)->_padding_ + 0x58))(TStack_18.Object,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return (bool)uVar3;
}

// GetConfigDataStringWithDefault @ 14e9bb610

FString * __cdecl
UGlobalConfigurationDataBlueprintLibrary::GetConfigDataStringWithDefault
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar2 = UE::GlobalConfigurationData::TryGetData(param_1,&local_18);
  if (bVar2) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  }
  else {
    ::FString::FString(__return_storage_ptr__,param_2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// GetConfigDataStruct @ 14e9bb6a0

bool __cdecl
UGlobalConfigurationDataBlueprintLibrary::GetConfigDataStruct
          (FString *param_1,UScriptStruct *param_2,FInstancedStruct *param_3)

{
  bool bVar1;
  
  if (param_2 != (UScriptStruct *)0x0) {
    FInstancedStruct::InitializeAs(param_3,param_2,(uchar *)0x0);
    bVar1 = UE::GlobalConfigurationData::TryGetDataOfType
                      (param_1,(UStruct *)(param_3->ScriptStruct).field0_0x0.DebugPtr,
                       param_3->StructMemory);
    return bVar1;
  }
  return false;
}

// GetConfigDataText @ 14e9bb6f0

bool __cdecl
UGlobalConfigurationDataBlueprintLibrary::GetConfigDataText(FString *param_1,FText *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  FText *pFVar5;
  FString FStack_38;
  TSharedPtr<FJsonValue,1> TStack_28;
  FText FStack_18;
  
  FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_38.Data.ArrayNum = 0;
  FStack_38.Data.ArrayMax = 0;
  IGlobalConfigurationRouter::TryGetData(&TStack_28,param_1);
  if (TStack_28.Object == (FJsonValue *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_28.SharedReferenceCount.ReferenceController);
  }
  else {
    if (TStack_28.Object == (FJsonValue *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    cVar4 = (**(code **)((TStack_28.Object)->_padding_ + 0x58))(TStack_28.Object,&FStack_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_28.SharedReferenceCount.ReferenceController);
    if (cVar4 != '\0') {
      pFVar5 = FText::FromString(&FStack_18,&FStack_38);
      FText::operator=(param_2,pFVar5);
      if (FStack_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*FStack_18.TextData.Reference + 0x10))();
      }
      bVar2 = true;
      goto LAB_14e9b97fe;
    }
  }
  bVar2 = false;
LAB_14e9b97fe:
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetConfigDataTextWithDefault @ 14e9bb700

FText * __cdecl
UGlobalConfigurationDataBlueprintLibrary::GetConfigDataTextWithDefault
          (FText *__return_storage_ptr__,FString *param_1,FText *param_2)

{
  ITextData *pIVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  FText local_18;
  
  FText::FText(&local_18);
  bVar2 = UE::GlobalConfigurationData::TryGetData(param_1,&local_18);
  if (bVar2) {
    FText::FText(__return_storage_ptr__,&local_18);
  }
  else {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (param_2->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = param_2->Flags;
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e9bb7a0

UClass * __cdecl UGlobalConfigurationDataBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGlobalConfigurationDataBlueprintLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GlobalConfigurationData",L"GlobalConfigurationDataBlueprintLibrary",
               &Z_Registration_Info_UClass_UGlobalConfigurationDataBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUGlobalConfigurationDataBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UGlobalConfigurationDataBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UGlobalConfigurationDataBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGlobalConfigurationDataBlueprintLibrary.InnerSingleton;
}

// StaticRegisterNativesUGlobalConfigurationDataBlueprintLibrary @ 14e9bb860

void __cdecl
UGlobalConfigurationDataBlueprintLibrary::
StaticRegisterNativesUGlobalConfigurationDataBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UGlobalConfigurationDataBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetConfigDataBool @ 14e9bb960

void __cdecl
UGlobalConfigurationDataBlueprintLibrary::execGetConfigDataBool
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool *pbVar3;
  bool local_res10 [8];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
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
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::GlobalConfigurationData::TryGetData(&local_18,pbVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetConfigDataBoolWithDefault @ 14e9bba50

void __cdecl
UGlobalConfigurationDataBlueprintLibrary::execGetConfigDataBoolWithDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  bool local_res10 [8];
  int local_res18 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  uVar3 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::GlobalConfigurationData::TryGetData(&local_18,local_res10);
  if (bVar2) {
    uVar3 = local_res10[0];
  }
  *(undefined1 *)param_3 = uVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetConfigDataFloat @ 14e9bbb50

void __cdecl
UGlobalConfigurationDataBlueprintLibrary::execGetConfigDataFloat
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float *pfVar3;
  float local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0.0;
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
  pfVar3 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::GlobalConfigurationData::TryGetData(&local_18,pfVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetConfigDataFloatWithDefault @ 14e9bbc40

void __cdecl
UGlobalConfigurationDataBlueprintLibrary::execGetConfigDataFloatWithDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float fVar3;
  float local_res10 [2];
  float local_res18 [2];
  FString local_28 [2];
  
  local_28[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28[0].Data.ArrayNum = 0;
  local_28[0].Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
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
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::GlobalConfigurationData::TryGetData(local_28,local_res18);
  if (bVar2) {
    fVar3 = local_res18[0];
  }
  *(float *)param_3 = fVar3;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

// execGetConfigDataInt @ 14e9bbd40

void __cdecl
UGlobalConfigurationDataBlueprintLibrary::execGetConfigDataInt
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int *piVar3;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
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
  piVar3 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::GlobalConfigurationData::TryGetData(&local_18,piVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetConfigDataIntWithDefault @ 14e9bbe30

void __cdecl
UGlobalConfigurationDataBlueprintLibrary::execGetConfigDataIntWithDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
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
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::GlobalConfigurationData::TryGetData(&local_18,local_res18);
  if (bVar2) {
    iVar3 = local_res18[0];
  }
  *(int *)param_3 = iVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetConfigDataObject @ 14e9bbf20

void __cdecl
UGlobalConfigurationDataBlueprintLibrary::execGetConfigDataObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  void *local_res10;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (void *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (void *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = UE::GlobalConfigurationData::TryGetDataOfType
                      (&local_18,*(UStruct **)((longlong)local_res10 + 0x10),local_res10);
  }
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetConfigDataString @ 14e9bc020

void __cdecl
UGlobalConfigurationDataBlueprintLibrary::execGetConfigDataString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::GlobalConfigurationData::TryGetData(&local_18,pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetConfigDataStringWithDefault @ 14e9bc130

void __cdecl
UGlobalConfigurationDataBlueprintLibrary::execGetConfigDataStringWithDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType _Src;
  void *_Src_00;
  bool bVar2;
  longlong lVar3;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FString local_38;
  void *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src_00 = local_28;
  local_48.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_20;
  local_40 = (int)local_20;
  if ((int)local_20 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,&local_48,(int)local_20,&local_3c);
    memcpy(local_48.Data,_Src_00,lVar3 * 2);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  bVar2 = UE::GlobalConfigurationData::TryGetData(&local_18,&local_38);
  _Src.Data = local_48.Data;
  if (bVar2) {
    local_58.Data = local_38.Data.AllocatorInstance.Data;
    local_50._0_4_ = local_38.Data.ArrayNum;
    local_50._4_4_ = local_38.Data.ArrayMax;
  }
  else {
    lVar3 = (longlong)local_40;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50._0_4_ = local_40;
    if (local_40 == 0) {
      local_50._0_4_ = 0;
      local_50._4_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,&local_58,local_40,(int *)((longlong)&local_50 + 4));
      memcpy(local_58.Data,_Src.Data,lVar3 * 2);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (param_3 != &local_58) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_58.Data;
    *(int *)((longlong)param_3 + 8) = (int)local_50;
    *(int *)((longlong)param_3 + 0xc) = local_50._4_4_;
    local_50._0_4_ = 0;
    local_50._4_4_ = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetConfigDataStruct @ 14e9bc360

void __cdecl
UGlobalConfigurationDataBlueprintLibrary::execGetConfigDataStruct
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FInstancedStruct *this;
  UScriptStruct *local_res10;
  FString local_28;
  FInstancedStruct local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10 = (UScriptStruct *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FInstancedStruct::FInstancedStruct(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    this = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UScriptStruct *)0x0) {
    bVar2 = false;
  }
  else {
    FInstancedStruct::InitializeAs(this,local_res10,(uchar *)0x0);
    bVar2 = UE::GlobalConfigurationData::TryGetDataOfType
                      (&local_28,(UStruct *)(this->ScriptStruct).field0_0x0.DebugPtr,
                       this->StructMemory);
  }
  *(bool *)param_3 = bVar2;
  FInstancedStruct::Reset(&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetConfigDataText @ 14e9bc4d0

void __cdecl
UGlobalConfigurationDataBlueprintLibrary::execGetConfigDataText
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FText *pFVar3;
  FString local_28;
  FText local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar3 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::GlobalConfigurationData::TryGetData(&local_28,pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetConfigDataTextWithDefault @ 14e9bc5e0

void __cdecl
UGlobalConfigurationDataBlueprintLibrary::execGetConfigDataTextWithDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TRefCountPtr<ITextData> TVar2;
  bool bVar3;
  undefined1 local_res10 [8];
  FString local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FText::FText(&local_48);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  TVar2.Reference = local_48.TextData.Reference;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 8))
              (local_48.TextData.Reference,local_res10);
  }
  FText::FText(&local_38);
  bVar3 = UE::GlobalConfigurationData::TryGetData(&local_58,&local_38);
  if (bVar3) {
    FText::FText(&local_28,&local_38);
  }
  else {
    local_28.TextData.Reference = TVar2.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res10);
    }
    local_28.Flags = local_48.Flags;
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (TVar2.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
  }
  FText::operator=(param_3,&local_28);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

