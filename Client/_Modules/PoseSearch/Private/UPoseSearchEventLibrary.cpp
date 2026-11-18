// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 8

// StaticClass @ 14a8d6a60

UClass * __cdecl UPoseSearchEventLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchEventLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchEventLibrary",
               &Z_Registration_Info_UClass_UPoseSearchEventLibrary.InnerSingleton,
               StaticRegisterNativesUPoseSearchEventLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPoseSearchEventLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchEventLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchEventLibrary.InnerSingleton;
}

// UPoseSearchEventLibrary @ 14a8e1480

UPoseSearchEventLibrary * __thiscall
UPoseSearchEventLibrary::UPoseSearchEventLibrary
          (UPoseSearchEventLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPoseSearchEventLibrary__6B_;
  return this;
}

// UPoseSearchEventLibrary @ 14a8e14b0

UPoseSearchEventLibrary * __thiscall
UPoseSearchEventLibrary::UPoseSearchEventLibrary
          (UPoseSearchEventLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPoseSearchEventLibrary__6B_;
  return this;
}

// ~UPoseSearchEventLibrary @ 14a8e2cc0

void __thiscall UPoseSearchEventLibrary::~UPoseSearchEventLibrary(UPoseSearchEventLibrary *this)

{
  *(undefined ***)this = &___7UPoseSearchEventLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14a8fc040

UClass * __cdecl UPoseSearchEventLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchEventLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchEventLibrary",
               &Z_Registration_Info_UClass_UPoseSearchEventLibrary.InnerSingleton,
               StaticRegisterNativesUPoseSearchEventLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPoseSearchEventLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchEventLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchEventLibrary.InnerSingleton;
}

// StaticRegisterNativesUPoseSearchEventLibrary @ 14a908d10

void __cdecl UPoseSearchEventLibrary::StaticRegisterNativesUPoseSearchEventLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPoseSearchEventLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdatePoseSearchEvent @ 14a90a070

void __cdecl
UPoseSearchEventLibrary::UpdatePoseSearchEvent
          (FPoseSearchEvent *param_1,bool param_2,float param_3,FPoseSearchEvent *param_4)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  float fVar4;
  
  if ((param_2) && ((param_1->EventTag).TagName != (FName)0x0)) {
    fVar4 = param_1->TimeToEvent;
    bVar1 = param_1->bEnablePoseFilters;
    bVar2 = param_1->bUsePlayRateRangeOverride;
    sVar3 = param_1->_padding_;
    (param_4->EventTag).TagName = (param_1->EventTag).TagName;
    param_4->TimeToEvent = fVar4;
    param_4->bEnablePoseFilters = bVar1;
    param_4->bUsePlayRateRangeOverride = bVar2;
    param_4->_padding_ = sVar3;
    param_4->PlayRateRangeOverride = param_1->PlayRateRangeOverride;
    return;
  }
  fVar4 = param_4->TimeToEvent - param_3;
  param_4->TimeToEvent = fVar4;
  if (fVar4 < 0.0) {
    param_4->TimeToEvent = 0.0;
    (param_4->EventTag).TagName = (FName)0x0;
  }
  return;
}

// execUpdatePoseSearchEvent @ 14a90bc30

void __cdecl
UPoseSearchEventLibrary::execUpdatePoseSearchEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  FProperty *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  int local_res10 [2];
  float local_res20 [2];
  longlong local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  local_60 = 0;
  local_58 = 0;
  local_54 = 0x100;
  local_50 = 0x3f800000;
  local_4c = 0x3f800000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res10[0] = 0;
  plVar5 = &local_60;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar5 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar6 = local_res10[0] == 0;
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_48 = 0;
  uStack_40 = 0;
  uStack_3c = 0x100;
  local_38 = 0x3f800000;
  uStack_34 = 0x3f800000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  plVar4 = &local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar4 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bVar6) || (*plVar5 == 0)) {
    fVar1 = *(float *)(plVar4 + 1);
    *(float *)(plVar4 + 1) = fVar1 - local_res20[0];
    if (fVar1 - local_res20[0] < 0.0) {
      *(undefined4 *)(plVar4 + 1) = 0;
      *plVar4 = 0;
    }
  }
  else {
    lVar3 = plVar5[1];
    *plVar4 = *plVar5;
    plVar4[1] = lVar3;
    plVar4[2] = plVar5[2];
  }
  return;
}

