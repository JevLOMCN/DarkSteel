// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 32

// StaticClass @ 14c691ca0

UClass * __cdecl UMovieSceneTrackExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneTrackExtensions",
               &Z_Registration_Info_UClass_UMovieSceneTrackExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneTrackExtensions,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieSceneTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackExtensions.InnerSingleton;
}

// UMovieSceneTrackExtensions @ 14c698c80

UMovieSceneTrackExtensions * __thiscall
UMovieSceneTrackExtensions::UMovieSceneTrackExtensions
          (UMovieSceneTrackExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneTrackExtensions__6B_;
  return this;
}

// UMovieSceneTrackExtensions @ 14c698cb0

UMovieSceneTrackExtensions * __thiscall
UMovieSceneTrackExtensions::UMovieSceneTrackExtensions
          (UMovieSceneTrackExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneTrackExtensions__6B_;
  return this;
}

// ~UMovieSceneTrackExtensions @ 14c698fe0

void __thiscall
UMovieSceneTrackExtensions::~UMovieSceneTrackExtensions(UMovieSceneTrackExtensions *this)

{
  *(undefined ***)this = &___7UMovieSceneTrackExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddSection @ 14c69a540

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneSection * __cdecl UMovieSceneTrackExtensions::AddSection(UMovieSceneTrack *param_1)

{
  FSectionParameter FVar1;
  
  if (param_1 == (UMovieSceneTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call AddSection on a null track",Error,(FName)0x0);
    return (UMovieSceneSection *)0x0;
  }
  FVar1.Section = (UMovieSceneSection *)(**(code **)(param_1->_padding_ + 0x358))();
  if (FVar1.Section != (UMovieSceneSection *)0x0) {
    UMovieSceneTrack::AddSection(param_1,FVar1);
  }
  return FVar1.Section;
}

// GetColorTint @ 14c69e410

/* WARNING: Enum "Type": Some values do not have unique names */

FColor __cdecl UMovieSceneTrackExtensions::GetColorTint(UMovieSceneTrack *param_1)

{
  undefined1 in_DL;
  undefined7 in_register_00000011;
  
  if (CONCAT71(in_register_00000011,in_DL) == 0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetColorTint on a null track",Error,(FName)0x0);
    *(undefined4 *)&param_1->_padding_ = 0;
    return (FColor)SUB84(param_1,0);
  }
  *(undefined4 *)&param_1->_padding_ = 0;
  return (FColor)SUB84(param_1,0);
}

// GetDisplayName @ 14c69ea20

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __cdecl
UMovieSceneTrackExtensions::GetDisplayName(FText *__return_storage_ptr__,UMovieSceneTrack *param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  UMovieSceneTrack *local_res10 [3];
  
  if (param_1 == (UMovieSceneTrack *)0x0) {
    local_res10[0] = param_1;
    FFrame::KismetExecutionMessage(L"Cannot call GetDisplayName on a null track",Error,(FName)0x0);
  }
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14c6a24d0

UClass * __cdecl UMovieSceneTrackExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneTrackExtensions",
               &Z_Registration_Info_UClass_UMovieSceneTrackExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneTrackExtensions,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieSceneTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackExtensions.InnerSingleton;
}

// GetSectionToKey @ 14c6a26f0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneSection * __cdecl UMovieSceneTrackExtensions::GetSectionToKey(UMovieSceneTrack *param_1)

{
  UMovieSceneSection *pUVar1;
  
  if (param_1 == (UMovieSceneTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetSectionToKey on a null track",Error,(FName)0x0);
    return (UMovieSceneSection *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c6a271f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UMovieSceneSection *)(**(code **)(param_1->_padding_ + 0x338))();
  return pUVar1;
}

// GetSections @ 14c6a2730

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneTrackExtensions::GetSections
          (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMovieSceneTrack *param_1)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  if (param_1 == (UMovieSceneTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetSections on a null track",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  puVar3 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x360))(param_1);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)(puVar3 + 1);
  _Src = (void *)*puVar3;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  }
  return __return_storage_ptr__;
}

// GetSortingOrder @ 14c6a2820

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl UMovieSceneTrackExtensions::GetSortingOrder(UMovieSceneTrack *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == (UMovieSceneTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetSortingOrder on a null track",Error,(FName)0x0);
    iVar1 = -1;
  }
  return iVar1;
}

// GetTrackRowDisplayName @ 14c6a35b0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __cdecl
UMovieSceneTrackExtensions::GetTrackRowDisplayName
          (FText *__return_storage_ptr__,UMovieSceneTrack *param_1,int param_2)

{
  ITextData *pIVar1;
  FText *pFVar2;
  UMovieSceneTrack *local_res10 [3];
  
  if (param_1 == (UMovieSceneTrack *)0x0) {
    local_res10[0] = param_1;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetTrackRowDisplayName on a null track",Error,(FName)0x0);
  }
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// RemoveSection @ 14c6a4ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTrackExtensions::RemoveSection(UMovieSceneTrack *param_1,UMovieSceneSection *param_2)

{
  if (param_1 == (UMovieSceneTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call RemoveSection on a null track",Error,(FName)0x0);
    return;
  }
  if (param_2 == (UMovieSceneSection *)0x0) {
    return;
  }
  (**(code **)(param_1->_padding_ + 8))(&param_1->_padding_);
  UMovieSceneSection::OnRemovedFromTrack(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001462302d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x378))(param_1,param_2);
  return;
}

// SetColorTint @ 14c6a5200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieSceneTrackExtensions::SetColorTint(UMovieSceneTrack *param_1,FColor *param_2)

{
  if (param_1 == (UMovieSceneTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetColorTint on a null track",Error,(FName)0x0);
    return;
  }
  return;
}

// SetDisplayName @ 14c6a53c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieSceneTrackExtensions::SetDisplayName(UMovieSceneTrack *param_1,FText *param_2)

{
  if (param_1 == (UMovieSceneTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetDisplayName on a null track",Error,(FName)0x0);
    return;
  }
  Z_Construct_UClass_UMovieSceneNameableTrack_NoRegister();
  return;
}

// SetSectionToKey @ 14c6a6450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTrackExtensions::SetSectionToKey(UMovieSceneTrack *param_1,UMovieSceneSection *param_2)

{
  if (param_1 == (UMovieSceneTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetSectionToKey on a null track",Error,(FName)0x0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c6a6470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x330))(param_1,(char)param_2);
  return;
}

// SetSortingOrder @ 14c6a64a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieSceneTrackExtensions::SetSortingOrder(UMovieSceneTrack *param_1,int param_2)

{
  if (param_1 == (UMovieSceneTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetSortingOrder on a null track",Error,(FName)0x0);
    return;
  }
  return;
}

// SetTrackRowDisplayName @ 14c6a6f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTrackExtensions::SetTrackRowDisplayName
          (UMovieSceneTrack *param_1,FText *param_2,int param_3)

{
  if (param_1 == (UMovieSceneTrack *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetTrackRowDisplayName on a null track",Error,(FName)0x0);
    return;
  }
  Z_Construct_UClass_UMovieSceneNameableTrack_NoRegister();
  return;
}

// StaticRegisterNativesUMovieSceneTrackExtensions @ 14c6a7420

void __cdecl UMovieSceneTrackExtensions::StaticRegisterNativesUMovieSceneTrackExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneTrackExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddSection @ 14c6a9bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTrackExtensions::execAddSection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneTrack *this;
  FSectionParameter FVar2;
  UMovieSceneTrack *local_res10;
  undefined8 local_res18;
  
  local_res10 = (UMovieSceneTrack *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UMovieSceneTrack *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"Cannot call AddSection on a null track",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
    return;
  }
  FVar2.Section = (UMovieSceneSection *)(**(code **)(local_res10->_padding_ + 0x358))(local_res10);
  if (FVar2.Section != (UMovieSceneSection *)0x0) {
    UMovieSceneTrack::AddSection(this,FVar2);
  }
  *(UMovieSceneSection **)param_3 = FVar2.Section;
  return;
}

// execGetColorTint @ 14c6ade60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTrackExtensions::execGetColorTint(UObject *param_1,FFrame *param_2,void *param_3)

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
    FFrame::KismetExecutionMessage(L"Cannot call GetColorTint on a null track",Error,(FName)0x0);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetDisplayName @ 14c6ae430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTrackExtensions::execGetDisplayName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  undefined8 local_res10 [2];
  longlong local_res20;
  FText local_18;
  
  local_res20 = 0;
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
  if (local_res20 == 0) {
    local_res10[0] = 0;
    FFrame::KismetExecutionMessage(L"Cannot call GetDisplayName on a null track",Error,(FName)0x0);
  }
  pFVar2 = FText::GetEmpty();
  local_18.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res10);
  }
  local_18.Flags = pFVar2->Flags;
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetSectionToKey @ 14c6b1920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTrackExtensions::execGetSectionToKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  longlong *local_res10;
  undefined8 local_res18;
  
  local_res10 = (longlong *)0x0;
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
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"Cannot call GetSectionToKey on a null track",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
    return;
  }
  uVar2 = (**(code **)(*local_res10 + 0x338))();
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execGetSections @ 14c6b19e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTrackExtensions::execGetSections(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  void *_Src;
  undefined8 *puVar3;
  longlong *local_res10;
  undefined8 local_res18;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"Cannot call GetSections on a null track",Error,(FName)0x0);
    local_20 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*local_res10 + 0x360))();
    local_28.Data = (FScriptContainerElement *)0x0;
    iVar1 = *(int *)(puVar3 + 1);
    _Src = (void *)*puVar3;
    local_20 = CONCAT44(local_20._4_4_,iVar1);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
      memcpy(local_28.Data,_Src,(longlong)iVar1 << 3);
    }
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_20;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// execGetSortingOrder @ 14c6b1c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTrackExtensions::execGetSortingOrder(UObject *param_1,FFrame *param_2,void *param_3)

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
    FFrame::KismetExecutionMessage(L"Cannot call GetSortingOrder on a null track",Error,(FName)0x0);
    *(undefined4 *)param_3 = 0xffffffff;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetTrackRowDisplayName @ 14c6b2610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTrackExtensions::execGetTrackRowDisplayName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  undefined4 local_res10 [2];
  undefined8 local_res20;
  longlong local_28;
  FText local_20;
  
  local_28 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28 == 0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetTrackRowDisplayName on a null track",Error,(FName)0x0);
  }
  pFVar2 = FText::GetEmpty();
  local_20.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 8))
              (local_20.TextData.Reference,&local_res20);
  }
  local_20.Flags = pFVar2->Flags;
  FText::operator=(param_3,&local_20);
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return;
}

// execRemoveSection @ 14c6b52f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTrackExtensions::execRemoveSection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneTrack *local_res10 [2];
  FSectionParameter local_res20;
  
  local_res10[0] = (UMovieSceneTrack *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20.Section = (UMovieSceneSection *)0x0;
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
  if (local_res10[0] == (UMovieSceneTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call RemoveSection on a null track",Error,(FName)0x0);
    return;
  }
  if (local_res20.Section != (UMovieSceneSection *)0x0) {
    UMovieSceneTrack::RemoveSection(local_res10[0],local_res20);
  }
  return;
}

// execSetColorTint @ 14c6b5a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTrackExtensions::execSetColorTint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [16];
  longlong local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == 0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetColorTint on a null track",Error,(FName)0x0);
  }
  return;
}

// execSetDisplayName @ 14c6b6000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTrackExtensions::execSetDisplayName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10 [2];
  undefined8 local_res20;
  FText local_18;
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"Cannot call SetDisplayName on a null track",Error,(FName)0x0);
  }
  else {
    Z_Construct_UClass_UMovieSceneNameableTrack_NoRegister();
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execSetSectionToKey @ 14c6b8700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTrackExtensions::execSetSectionToKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *local_res10 [2];
  undefined8 local_res20;
  
  local_res10[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0;
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
  if (local_res10[0] == (longlong *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetSectionToKey on a null track",Error,(FName)0x0);
    return;
  }
  (**(code **)(*local_res10[0] + 0x330))(local_res10[0],local_res20);
  return;
}

// execSetSortingOrder @ 14c6b88d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTrackExtensions::execSetSortingOrder(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  longlong local_res20;
  
  local_res20 = 0;
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
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == 0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetSortingOrder on a null track",Error,(FName)0x0);
  }
  return;
}

// execSetTrackRowDisplayName @ 14c6b9570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTrackExtensions::execSetTrackRowDisplayName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  longlong local_res20;
  FText local_20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FText::FText(&local_20);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == 0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetTrackRowDisplayName on a null track",Error,(FName)0x0);
  }
  else {
    Z_Construct_UClass_UMovieSceneNameableTrack_NoRegister();
  }
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return;
}

