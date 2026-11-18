// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 14

// StaticClass @ 14c696000

UClass * __cdecl UMovieScenePrimitiveMaterialTrackExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieScenePrimitiveMaterialTrackExtensions",
               &Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.
                InnerSingleton,StaticRegisterNativesUMovieScenePrimitiveMaterialTrackExtensions,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScenePrimitiveMaterialTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieScenePrimitiveMaterialTrackExtensions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.InnerSingleton;
}

// UMovieScenePrimitiveMaterialTrackExtensions @ 14c6987c0

UMovieScenePrimitiveMaterialTrackExtensions * __thiscall
UMovieScenePrimitiveMaterialTrackExtensions::UMovieScenePrimitiveMaterialTrackExtensions
          (UMovieScenePrimitiveMaterialTrackExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieScenePrimitiveMaterialTrackExtensions__6B_;
  return this;
}

// UMovieScenePrimitiveMaterialTrackExtensions @ 14c6987f0

UMovieScenePrimitiveMaterialTrackExtensions * __thiscall
UMovieScenePrimitiveMaterialTrackExtensions::UMovieScenePrimitiveMaterialTrackExtensions
          (UMovieScenePrimitiveMaterialTrackExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieScenePrimitiveMaterialTrackExtensions__6B_;
  return this;
}

// ~UMovieScenePrimitiveMaterialTrackExtensions @ 14c698d60

void __thiscall
UMovieScenePrimitiveMaterialTrackExtensions::~UMovieScenePrimitiveMaterialTrackExtensions
          (UMovieScenePrimitiveMaterialTrackExtensions *this)

{
  *(undefined ***)this = &___7UMovieScenePrimitiveMaterialTrackExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetMaterialIndex @ 14c6a0380

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UMovieScenePrimitiveMaterialTrackExtensions::GetMaterialIndex
          (UMovieScenePrimitiveMaterialTrack *param_1)

{
  FComponentMaterialInfo *pFVar1;
  
  if (param_1 == (UMovieScenePrimitiveMaterialTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetMaterialIndex on a null track",Error,(FName)0x0)
    ;
    return -1;
  }
  pFVar1 = UMovieScenePrimitiveMaterialTrack::GetMaterialInfo(param_1);
  return pFVar1->MaterialSlotIndex;
}

// GetMaterialInfo @ 14c6a0410

/* WARNING: Enum "Type": Some values do not have unique names */

FComponentMaterialInfo * __cdecl
UMovieScenePrimitiveMaterialTrackExtensions::GetMaterialInfo
          (FComponentMaterialInfo *__return_storage_ptr__,UMovieScenePrimitiveMaterialTrack *param_1
          )

{
  int iVar1;
  EComponentMaterialType EVar2;
  undefined3 uVar3;
  FComponentMaterialInfo *pFVar4;
  
  if (param_1 == (UMovieScenePrimitiveMaterialTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetMaterialInfo on a null track",Error,(FName)0x0);
    (__return_storage_ptr__->MaterialSlotName).ComparisonIndex = 0;
    (__return_storage_ptr__->MaterialSlotName).Number = 0;
    __return_storage_ptr__->MaterialSlotIndex = 0;
    __return_storage_ptr__->MaterialType = Empty;
    *(undefined3 *)&__return_storage_ptr__->field_0xd = 0;
    return __return_storage_ptr__;
  }
  pFVar4 = UMovieScenePrimitiveMaterialTrack::GetMaterialInfo(param_1);
  iVar1 = pFVar4->MaterialSlotIndex;
  EVar2 = pFVar4->MaterialType;
  uVar3 = *(undefined3 *)&pFVar4->field_0xd;
  __return_storage_ptr__->MaterialSlotName = pFVar4->MaterialSlotName;
  __return_storage_ptr__->MaterialSlotIndex = iVar1;
  __return_storage_ptr__->MaterialType = EVar2;
  *(undefined3 *)&__return_storage_ptr__->field_0xd = uVar3;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14c6a1c90

UClass * __cdecl UMovieScenePrimitiveMaterialTrackExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieScenePrimitiveMaterialTrackExtensions",
               &Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.
                InnerSingleton,StaticRegisterNativesUMovieScenePrimitiveMaterialTrackExtensions,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScenePrimitiveMaterialTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieScenePrimitiveMaterialTrackExtensions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.InnerSingleton;
}

// SetMaterialIndex @ 14c6a5910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePrimitiveMaterialTrackExtensions::SetMaterialIndex
          (UMovieScenePrimitiveMaterialTrack *param_1,int param_2)

{
  FComponentMaterialInfo local_18;
  
  if (param_1 == (UMovieScenePrimitiveMaterialTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetMaterialIndex on a null track",Error,(FName)0x0)
    ;
    return;
  }
  local_18.MaterialSlotName.ComparisonIndex.Value = 0;
  local_18.MaterialSlotName.Number = 0;
  local_18.MaterialType = IndexedMaterial;
  local_18.MaterialSlotIndex = param_2;
  UMovieScenePrimitiveMaterialTrack::SetMaterialInfo(param_1,&local_18);
  return;
}

// SetMaterialInfo @ 14c6a5990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePrimitiveMaterialTrackExtensions::SetMaterialInfo
          (UMovieScenePrimitiveMaterialTrack *param_1,FComponentMaterialInfo *param_2)

{
  if (param_1 == (UMovieScenePrimitiveMaterialTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetMaterialInfo on a null track",Error,(FName)0x0);
    return;
  }
  UMovieScenePrimitiveMaterialTrack::SetMaterialInfo(param_1,param_2);
  return;
}

// StaticRegisterNativesUMovieScenePrimitiveMaterialTrackExtensions @ 14c6a7160

void __cdecl
UMovieScenePrimitiveMaterialTrackExtensions::
StaticRegisterNativesUMovieScenePrimitiveMaterialTrackExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetMaterialIndex @ 14c6af6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePrimitiveMaterialTrackExtensions::execGetMaterialIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FComponentMaterialInfo *pFVar2;
  UMovieScenePrimitiveMaterialTrack *local_res10;
  UMovieScenePrimitiveMaterialTrack *local_res18;
  
  local_res10 = (UMovieScenePrimitiveMaterialTrack *)0x0;
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
  if (local_res10 == (UMovieScenePrimitiveMaterialTrack *)0x0) {
    local_res18 = local_res10;
    FFrame::KismetExecutionMessage(L"Cannot call GetMaterialIndex on a null track",Error,(FName)0x0)
    ;
    *(undefined4 *)param_3 = 0xffffffff;
    return;
  }
  pFVar2 = UMovieScenePrimitiveMaterialTrack::GetMaterialInfo(local_res10);
  *(int *)param_3 = pFVar2->MaterialSlotIndex;
  return;
}

// execGetMaterialInfo @ 14c6af850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePrimitiveMaterialTrackExtensions::execGetMaterialInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FComponentMaterialInfo *pFVar3;
  UMovieScenePrimitiveMaterialTrack *local_res10;
  UMovieScenePrimitiveMaterialTrack *local_res18;
  
  local_res10 = (UMovieScenePrimitiveMaterialTrack *)0x0;
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
  if (local_res10 == (UMovieScenePrimitiveMaterialTrack *)0x0) {
    local_res18 = local_res10;
    FFrame::KismetExecutionMessage(L"Cannot call GetMaterialInfo on a null track",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    return;
  }
  pFVar3 = UMovieScenePrimitiveMaterialTrack::GetMaterialInfo(local_res10);
  uVar2 = *(undefined8 *)&pFVar3->MaterialSlotIndex;
  *(FName *)param_3 = pFVar3->MaterialSlotName;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  return;
}

// execSetMaterialIndex @ 14c6b6f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePrimitiveMaterialTrackExtensions::execSetMaterialIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [4];
  UMovieScenePrimitiveMaterialTrack *local_res20;
  FComponentMaterialInfo local_18;
  
  local_res20 = (UMovieScenePrimitiveMaterialTrack *)0x0;
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
  local_18.MaterialSlotName.ComparisonIndex.Value = 0;
  local_18.MaterialSlotName.Number = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UMovieScenePrimitiveMaterialTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetMaterialIndex on a null track",Error,(FName)0x0)
    ;
    return;
  }
  local_18.MaterialSlotIndex = local_res10[0];
  local_18.MaterialType = IndexedMaterial;
  UMovieScenePrimitiveMaterialTrack::SetMaterialInfo(local_res20,&local_18);
  return;
}

// execSetMaterialInfo @ 14c6b7150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieScenePrimitiveMaterialTrackExtensions::execSetMaterialInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FComponentMaterialInfo *pFVar2;
  UMovieScenePrimitiveMaterialTrack *local_res10 [2];
  undefined8 local_res20;
  FComponentMaterialInfo local_18;
  
  local_res10[0] = (UMovieScenePrimitiveMaterialTrack *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18.MaterialSlotName.ComparisonIndex.Value = 0;
  local_18.MaterialSlotName.Number = 0;
  local_18.MaterialSlotIndex = 0;
  local_18.MaterialType = Empty;
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
  pFVar2 = &local_18;
  if ((FComponentMaterialInfo *)param_2->MostRecentPropertyAddress != (FComponentMaterialInfo *)0x0)
  {
    pFVar2 = (FComponentMaterialInfo *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == (UMovieScenePrimitiveMaterialTrack *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"Cannot call SetMaterialInfo on a null track",Error,(FName)0x0);
    return;
  }
  UMovieScenePrimitiveMaterialTrack::SetMaterialInfo(local_res10[0],pFVar2);
  return;
}

