// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 12

// StaticClass @ 149314410

UClass * __cdecl UNiagaraPreviewAxis::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis.InnerSingleton,
               StaticRegisterNativesUNiagaraPreviewAxis,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis.InnerSingleton;
}

// UNiagaraPreviewAxis @ 1493354e0

UNiagaraPreviewAxis * __thiscall
UNiagaraPreviewAxis::UNiagaraPreviewAxis(UNiagaraPreviewAxis *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraPreviewAxis__6B_;
  return this;
}

// UNiagaraPreviewAxis @ 149335510

UNiagaraPreviewAxis * __thiscall
UNiagaraPreviewAxis::UNiagaraPreviewAxis(UNiagaraPreviewAxis *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraPreviewAxis__6B_;
  return this;
}

// ~UNiagaraPreviewAxis @ 149336d20

void __thiscall UNiagaraPreviewAxis::~UNiagaraPreviewAxis(UNiagaraPreviewAxis *this)

{
  *(undefined ***)this = &___7UNiagaraPreviewAxis__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyToPreview @ 14933cbd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraPreviewAxis::ApplyToPreview
          (UNiagaraPreviewAxis *this,UNiagaraComponent *param_1,int param_2,bool param_3,
          FString *param_4)

{
  UFunction *this_00;
  UClass *pUVar1;
  int iVar2;
  int iVar3;
  UNiagaraComponent *local_38;
  int local_30;
  undefined1 local_2c;
  FString local_28;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UNiagaraPreviewAxis_ApplyToPreview);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    iVar3 = (param_4->Data).ArrayNum;
    iVar2 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    local_38 = param_1;
    local_30 = param_2;
    local_2c = param_3;
    ::FString::AssignRange(&local_28,(wchar_t *)(param_4->Data).AllocatorInstance.Data,iVar2);
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_38);
    iVar3 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AssignRange(param_4,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)(*(longlong *)this + 0x2b8))(this,param_1,param_2,param_3,param_4);
  }
  return;
}

// ApplyToPreview_Implementation @ 14933cce0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraPreviewAxis::ApplyToPreview_Implementation
          (UNiagaraPreviewAxis *this,UNiagaraComponent *param_1,int param_2,bool param_3,
          FString *param_4)

{
  return;
}

// GetPrivateStaticClass @ 149355e30

UClass * __cdecl UNiagaraPreviewAxis::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraPreviewAxis.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewAxis",
               &Z_Registration_Info_UClass_UNiagaraPreviewAxis.InnerSingleton,
               StaticRegisterNativesUNiagaraPreviewAxis,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraPreviewAxis>,
               InternalVTableHelperCtorCaller<UNiagaraPreviewAxis>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraPreviewAxis.InnerSingleton;
}

// Num @ 14935f920

int __thiscall UNiagaraPreviewAxis::Num(UNiagaraPreviewAxis *this)

{
  int iVar1;
  UFunction *this_00;
  UClass *pUVar2;
  int local_res10 [6];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UNiagaraPreviewAxis_Num);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = 0;
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,local_res10);
    return local_res10[0];
  }
                    /* WARNING: Could not recover jumptable at 0x00014935f983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(longlong *)this + 0x2b0))(this);
  return iVar1;
}

// Num_Implementation @ 14935f990

int __thiscall UNiagaraPreviewAxis::Num_Implementation(UNiagaraPreviewAxis *this)

{
  return 1;
}

// StaticRegisterNativesUNiagaraPreviewAxis @ 149370360

void __cdecl UNiagaraPreviewAxis::StaticRegisterNativesUNiagaraPreviewAxis(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraPreviewAxis_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execApplyToPreview @ 149375fb0

void __cdecl UNiagaraPreviewAxis::execApplyToPreview(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  bool bVar3;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 local_res20;
  void *local_28;
  undefined8 local_20;
  
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
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_28 = (void *)0x0;
  local_20 = 0;
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
  ppvVar2 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res20,local_res10[0],bVar3,ppvVar2);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execNum @ 149376250

void __cdecl UNiagaraPreviewAxis::execNum(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

