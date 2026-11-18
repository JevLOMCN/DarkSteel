// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 14

// StaticClass @ 14c691be0

UClass * __cdecl UMovieSceneMaterialTrackExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneMaterialTrackExtensions",
               &Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneMaterialTrackExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneMaterialTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneMaterialTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.InnerSingleton;
}

// UMovieSceneMaterialTrackExtensions @ 14c698760

UMovieSceneMaterialTrackExtensions * __thiscall
UMovieSceneMaterialTrackExtensions::UMovieSceneMaterialTrackExtensions
          (UMovieSceneMaterialTrackExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneMaterialTrackExtensions__6B_;
  return this;
}

// UMovieSceneMaterialTrackExtensions @ 14c698790

UMovieSceneMaterialTrackExtensions * __thiscall
UMovieSceneMaterialTrackExtensions::UMovieSceneMaterialTrackExtensions
          (UMovieSceneMaterialTrackExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneMaterialTrackExtensions__6B_;
  return this;
}

// ~UMovieSceneMaterialTrackExtensions @ 14c698d40

void __thiscall
UMovieSceneMaterialTrackExtensions::~UMovieSceneMaterialTrackExtensions
          (UMovieSceneMaterialTrackExtensions *this)

{
  *(undefined ***)this = &___7UMovieSceneMaterialTrackExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetMaterialIndex @ 14c6a0340

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UMovieSceneMaterialTrackExtensions::GetMaterialIndex(UMovieSceneComponentMaterialTrack *param_1)

{
  if (param_1 == (UMovieSceneComponentMaterialTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetMaterialIndex on a null track",Error,(FName)0x0)
    ;
    return -1;
  }
  return (param_1->MaterialInfo).MaterialSlotIndex;
}

// GetMaterialInfo @ 14c6a03c0

/* WARNING: Enum "Type": Some values do not have unique names */

FComponentMaterialInfo * __cdecl
UMovieSceneMaterialTrackExtensions::GetMaterialInfo
          (FComponentMaterialInfo *__return_storage_ptr__,UMovieSceneComponentMaterialTrack *param_1
          )

{
  int iVar1;
  EComponentMaterialType EVar2;
  undefined3 uVar3;
  
  if (param_1 == (UMovieSceneComponentMaterialTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetMaterialInfo on a null track",Error,(FName)0x0);
    (__return_storage_ptr__->MaterialSlotName).ComparisonIndex = 0;
    (__return_storage_ptr__->MaterialSlotName).Number = 0;
    __return_storage_ptr__->MaterialSlotIndex = 0;
    __return_storage_ptr__->MaterialType = Empty;
    *(undefined3 *)&__return_storage_ptr__->field_0xd = 0;
    return __return_storage_ptr__;
  }
  iVar1 = (param_1->MaterialInfo).MaterialSlotIndex;
  EVar2 = (param_1->MaterialInfo).MaterialType;
  uVar3 = *(undefined3 *)&(param_1->MaterialInfo).field_0xd;
  __return_storage_ptr__->MaterialSlotName = (param_1->MaterialInfo).MaterialSlotName;
  __return_storage_ptr__->MaterialSlotIndex = iVar1;
  __return_storage_ptr__->MaterialType = EVar2;
  *(undefined3 *)&__return_storage_ptr__->field_0xd = uVar3;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14c6a1bd0

UClass * __cdecl UMovieSceneMaterialTrackExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneMaterialTrackExtensions",
               &Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneMaterialTrackExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneMaterialTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneMaterialTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.InnerSingleton;
}

// SetMaterialIndex @ 14c6a58c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneMaterialTrackExtensions::SetMaterialIndex
          (UMovieSceneComponentMaterialTrack *param_1,int param_2)

{
  undefined4 uStack_c;
  
  if (param_1 == (UMovieSceneComponentMaterialTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetMaterialIndex on a null track",Error,(FName)0x0)
    ;
    return;
  }
  (param_1->MaterialInfo).MaterialSlotName.ComparisonIndex = 0;
  (param_1->MaterialInfo).MaterialSlotName.Number = 0;
  (param_1->MaterialInfo).MaterialSlotIndex = param_2;
  (param_1->MaterialInfo).MaterialType = 1;
  *(undefined3 *)&(param_1->MaterialInfo).field_0xd = uStack_c._1_3_;
  return;
}

// SetMaterialInfo @ 14c6a5960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneMaterialTrackExtensions::SetMaterialInfo
          (UMovieSceneComponentMaterialTrack *param_1,FComponentMaterialInfo *param_2)

{
  int iVar1;
  EComponentMaterialType EVar2;
  undefined3 uVar3;
  
  if (param_1 == (UMovieSceneComponentMaterialTrack *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetMaterialInfo on a null track",Error,(FName)0x0);
    return;
  }
  iVar1 = param_2->MaterialSlotIndex;
  EVar2 = param_2->MaterialType;
  uVar3 = *(undefined3 *)&param_2->field_0xd;
  (param_1->MaterialInfo).MaterialSlotName = param_2->MaterialSlotName;
  (param_1->MaterialInfo).MaterialSlotIndex = iVar1;
  (param_1->MaterialInfo).MaterialType = EVar2;
  *(undefined3 *)&(param_1->MaterialInfo).field_0xd = uVar3;
  return;
}

// StaticRegisterNativesUMovieSceneMaterialTrackExtensions @ 14c6a7120

void __cdecl
UMovieSceneMaterialTrackExtensions::StaticRegisterNativesUMovieSceneMaterialTrackExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetMaterialIndex @ 14c6af610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneMaterialTrackExtensions::execGetMaterialIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10;
  longlong local_res18;
  
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
    local_res18 = local_res10;
    FFrame::KismetExecutionMessage(L"Cannot call GetMaterialIndex on a null track",Error,(FName)0x0)
    ;
    *(undefined4 *)param_3 = 0xffffffff;
    return;
  }
  *(undefined4 *)param_3 = *(undefined4 *)(local_res10 + 0x148);
  return;
}

// execGetMaterialInfo @ 14c6af790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneMaterialTrackExtensions::execGetMaterialInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  longlong local_res10;
  longlong local_res18;
  
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
    local_res18 = local_res10;
    FFrame::KismetExecutionMessage(L"Cannot call GetMaterialInfo on a null track",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    return;
  }
  uVar2 = *(undefined8 *)(local_res10 + 0x148);
  *(undefined8 *)param_3 = *(undefined8 *)(local_res10 + 0x140);
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  return;
}

// execSetMaterialIndex @ 14c6b6e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneMaterialTrackExtensions::execSetMaterialIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  longlong local_res20;
  undefined4 uStack_c;
  
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
    FFrame::KismetExecutionMessage(L"Cannot call SetMaterialIndex on a null track",Error,(FName)0x0)
    ;
    return;
  }
  uStack_c = CONCAT31(uStack_c._1_3_,1);
  *(undefined8 *)(local_res20 + 0x140) = 0;
  *(ulonglong *)(local_res20 + 0x148) = CONCAT44(uStack_c,local_res10[0]);
  return;
}

// execSetMaterialInfo @ 14c6b7040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneMaterialTrackExtensions::execSetMaterialInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  uchar *puVar3;
  longlong local_res10 [2];
  undefined8 local_res20;
  uchar local_18 [16];
  
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
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = '\0';
  local_18[0xb] = '\0';
  local_18[0xc] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar3 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"Cannot call SetMaterialInfo on a null track",Error,(FName)0x0);
    return;
  }
  uVar2 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(local_res10[0] + 0x140) = *(undefined8 *)puVar3;
  *(undefined8 *)(local_res10[0] + 0x148) = uVar2;
  return;
}

