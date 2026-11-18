// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 22

// StaticClass @ 14c693b80

UClass * __cdecl UMovieScenePropertyTrackExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePropertyTrackExtensions.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieScenePropertyTrackExtensions",
               &Z_Registration_Info_UClass_UMovieScenePropertyTrackExtensions.InnerSingleton,
               StaticRegisterNativesUMovieScenePropertyTrackExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePropertyTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieScenePropertyTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePropertyTrackExtensions.InnerSingleton;
}

// UMovieScenePropertyTrackExtensions @ 14c698820

UMovieScenePropertyTrackExtensions * __thiscall
UMovieScenePropertyTrackExtensions::UMovieScenePropertyTrackExtensions
          (UMovieScenePropertyTrackExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieScenePropertyTrackExtensions__6B_;
  return this;
}

// UMovieScenePropertyTrackExtensions @ 14c698850

UMovieScenePropertyTrackExtensions * __thiscall
UMovieScenePropertyTrackExtensions::UMovieScenePropertyTrackExtensions
          (UMovieScenePropertyTrackExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieScenePropertyTrackExtensions__6B_;
  return this;
}

// ~UMovieScenePropertyTrackExtensions @ 14c698d80

void __thiscall
UMovieScenePropertyTrackExtensions::~UMovieScenePropertyTrackExtensions
          (UMovieScenePropertyTrackExtensions *this)

{
  *(undefined ***)this = &___7UMovieScenePropertyTrackExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetByteTrackEnum @ 14c69d610

/* WARNING: Enum "Type": Some values do not have unique names */

UEnum * __cdecl UMovieScenePropertyTrackExtensions::GetByteTrackEnum(UMovieSceneByteTrack *param_1)

{
  UEnum *pUVar1;
  
  if (param_1 == (UMovieSceneByteTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetByteTrackEnum on a null track",Error,(FName)0x0)
    ;
    return (UEnum *)0x0;
  }
  pUVar1 = UMovieSceneByteTrack::GetEnum(param_1);
  return pUVar1;
}

// GetObjectPropertyClass @ 14c6a0580

/* WARNING: Enum "Type": Some values do not have unique names */

UClass * __cdecl
UMovieScenePropertyTrackExtensions::GetObjectPropertyClass(UMovieSceneObjectPropertyTrack *param_1)

{
  if (param_1 == (UMovieSceneObjectPropertyTrack *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call AddEventRepeaterSection on a null track",Error,(FName)0x0);
    return (UClass *)0x0;
  }
  return (param_1->PropertyClass).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14c6a1d50

UClass * __cdecl UMovieScenePropertyTrackExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePropertyTrackExtensions.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieScenePropertyTrackExtensions",
               &Z_Registration_Info_UClass_UMovieScenePropertyTrackExtensions.InnerSingleton,
               StaticRegisterNativesUMovieScenePropertyTrackExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePropertyTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieScenePropertyTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePropertyTrackExtensions.InnerSingleton;
}

// GetPropertyName @ 14c6a2590

/* WARNING: Enum "Type": Some values do not have unique names */

FName __cdecl UMovieScenePropertyTrackExtensions::GetPropertyName(UMovieScenePropertyTrack *param_1)

{
  undefined1 in_DL;
  undefined7 in_register_00000011;
  
  if (CONCAT71(in_register_00000011,in_DL) == 0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetPropertyName on a null track",Error,(FName)0x0);
    param_1->_padding_ = 0;
    return (FName)param_1;
  }
  param_1->_padding_ = *(longlong *)(CONCAT71(in_register_00000011,in_DL) + 0x120);
  return (FName)param_1;
}

// GetPropertyPath @ 14c6a25f0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
UMovieScenePropertyTrackExtensions::GetPropertyPath
          (FString *__return_storage_ptr__,UMovieScenePropertyTrack *param_1)

{
  FName local_res10 [3];
  
  if (param_1 == (UMovieScenePropertyTrack *)0x0) {
    local_res10[0].ComparisonIndex.Value = 0;
    local_res10[0].Number = 0;
    FFrame::KismetExecutionMessage(L"Cannot call GetPropertyPath on a null track",Error,(FName)0x0);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_res10[0] = (param_1->PropertyBinding).PropertyPath;
  ::FName::ToString(local_res10,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetUniqueTrackName @ 14c6a38b0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __cdecl
UMovieScenePropertyTrackExtensions::GetUniqueTrackName(UMovieScenePropertyTrack *param_1)

{
  undefined1 in_DL;
  undefined7 in_register_00000011;
  
  if (CONCAT71(in_register_00000011,in_DL) == 0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetUniqueTrackName on a null track",Error,(FName)0x0);
    param_1->_padding_ = 0;
    return (FName)param_1;
  }
  param_1->_padding_ = 0;
  return (FName)param_1;
}

// SetByteTrackEnum @ 14c6a5170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePropertyTrackExtensions::SetByteTrackEnum(UMovieSceneByteTrack *param_1,UEnum *param_2)

{
  if (param_1 == (UMovieSceneByteTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetByteTrackEnum on a null track",Error,(FName)0x0)
    ;
    return;
  }
  UMovieSceneByteTrack::SetEnum(param_1,param_2);
  return;
}

// SetObjectPropertyClass @ 14c6a5a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePropertyTrackExtensions::SetObjectPropertyClass
          (UMovieSceneObjectPropertyTrack *param_1,UClass *param_2,bool param_3)

{
  if (param_1 == (UMovieSceneObjectPropertyTrack *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetObjectPropertyClass on a null track",Error,(FName)0x0);
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (param_1->PropertyClass).field0_0x0.DebugPtr = param_2;
  return;
}

// SetPropertyNameAndPath @ 14c6a6090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePropertyTrackExtensions::SetPropertyNameAndPath
          (UMovieScenePropertyTrack *param_1,FName *param_2,FString *param_3)

{
  if (param_1 == (UMovieScenePropertyTrack *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetPropertyNameAndPath on a null track",Error,(FName)0x0);
    return;
  }
  UMovieScenePropertyTrack::SetPropertyNameAndPath(param_1,*param_2,param_3);
  return;
}

// StaticRegisterNativesUMovieScenePropertyTrackExtensions @ 14c6a71a0

void __cdecl
UMovieScenePropertyTrackExtensions::StaticRegisterNativesUMovieScenePropertyTrackExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UMovieScenePropertyTrackExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetByteTrackEnum @ 14c6ad440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePropertyTrackExtensions::execGetByteTrackEnum
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UEnum *pUVar2;
  UMovieSceneByteTrack *local_res10;
  undefined8 local_res18;
  
  local_res10 = (UMovieSceneByteTrack *)0x0;
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
  if (local_res10 == (UMovieSceneByteTrack *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"Cannot call GetByteTrackEnum on a null track",Error,(FName)0x0)
    ;
    *(undefined8 *)param_3 = 0;
    return;
  }
  pUVar2 = UMovieSceneByteTrack::GetEnum(local_res10);
  *(UEnum **)param_3 = pUVar2;
  return;
}

// execGetObjectPropertyClass @ 14c6afbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePropertyTrackExtensions::execGetObjectPropertyClass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10 [2];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call AddEventRepeaterSection on a null track",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
    return;
  }
  *(undefined8 *)param_3 = *(undefined8 *)(local_res10[0] + 0x148);
  return;
}

// execGetPropertyName @ 14c6b1680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePropertyTrackExtensions::execGetPropertyName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10 [2];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage(L"Cannot call GetPropertyName on a null track",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
    return;
  }
  *(undefined8 *)param_3 = *(undefined8 *)(local_res10[0] + 0x120);
  return;
}

// execGetPropertyPath @ 14c6b1740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePropertyTrackExtensions::execGetPropertyPath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10;
  FName local_res18;
  FString local_18;
  
  local_res10 = 0;
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
  if (local_res10 == 0) {
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
    FFrame::KismetExecutionMessage(L"Cannot call GetPropertyPath on a null track",Error,(FName)0x0);
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_res18 = *(FName *)(local_res10 + 0x128);
    ::FName::ToString(&local_res18,&local_18);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetUniqueTrackName @ 14c6b2b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePropertyTrackExtensions::execGetUniqueTrackName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10 [2];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetUniqueTrackName on a null track",Error,(FName)0x0);
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execSetByteTrackEnum @ 14c6b5880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePropertyTrackExtensions::execSetByteTrackEnum
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneByteTrack *local_res10 [2];
  UEnum *local_res20;
  
  local_res10[0] = (UMovieSceneByteTrack *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UEnum *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == (UMovieSceneByteTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetByteTrackEnum on a null track",Error,(FName)0x0)
    ;
    return;
  }
  UMovieSceneByteTrack::SetEnum(local_res10[0],local_res20);
  return;
}

// execSetObjectPropertyClass @ 14c6b7490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePropertyTrackExtensions::execSetObjectPropertyClass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  longlong lVar3;
  undefined4 local_res10 [2];
  UObject *local_res20;
  longlong local_18 [2];
  
  local_18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
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
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar3 = local_18[0];
  pUVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_18[0] == 0) {
    local_18[1] = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call SetObjectPropertyClass on a null track",Error,(FName)0x0);
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  *(UObject **)(lVar3 + 0x148) = pUVar2;
  return;
}

// execSetPropertyNameAndPath @ 14c6b7fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePropertyTrackExtensions::execSetPropertyNameAndPath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FName local_res10;
  UMovieScenePropertyTrack *local_res20;
  FString local_20;
  
  local_res20 = (UMovieScenePropertyTrack *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  pFVar2 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UMovieScenePropertyTrack *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetPropertyNameAndPath on a null track",Error,(FName)0x0);
  }
  else {
    UMovieScenePropertyTrack::SetPropertyNameAndPath(local_res20,*pFVar2,&local_20);
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

