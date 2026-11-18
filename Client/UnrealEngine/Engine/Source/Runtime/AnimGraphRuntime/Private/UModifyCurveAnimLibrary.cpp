// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 19

// StaticClass @ 1463e8ce0

UClass * __cdecl UModifyCurveAnimLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyCurveAnimLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"ModifyCurveAnimLibrary",
               &Z_Registration_Info_UClass_UModifyCurveAnimLibrary.InnerSingleton,
               StaticRegisterNativesUModifyCurveAnimLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UModifyCurveAnimLibrary>,
               InternalVTableHelperCtorCaller<UModifyCurveAnimLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyCurveAnimLibrary.InnerSingleton;
}

// UModifyCurveAnimLibrary @ 146407ac0

UModifyCurveAnimLibrary * __thiscall
UModifyCurveAnimLibrary::UModifyCurveAnimLibrary
          (UModifyCurveAnimLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UModifyCurveAnimLibrary__6B_;
  return this;
}

// UModifyCurveAnimLibrary @ 146407af0

UModifyCurveAnimLibrary * __thiscall
UModifyCurveAnimLibrary::UModifyCurveAnimLibrary
          (UModifyCurveAnimLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UModifyCurveAnimLibrary__6B_;
  return this;
}

// ~UModifyCurveAnimLibrary @ 1464097f0

void __thiscall UModifyCurveAnimLibrary::~UModifyCurveAnimLibrary(UModifyCurveAnimLibrary *this)

{
  *(undefined ***)this = &___7UModifyCurveAnimLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ConvertToModifyCurveNode @ 146421d80

FModifyCurveAnimNodeReference * __cdecl
UModifyCurveAnimLibrary::ConvertToModifyCurveNode
          (FModifyCurveAnimNodeReference *__return_storage_ptr__,FAnimNodeReference *param_1,
          EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve,(UObject *)pUVar3,
                           L"AnimNode_ModifyCurve");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_146421e0b;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton)->_padding_
    ;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_2 = Succeeded;
      pUVar4 = param_1->AnimNodeStruct;
      pUVar5 = (UScriptStruct *)param_1->AnimNode;
      goto LAB_146421e13;
    }
  }
LAB_146421e0b:
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar5 = pUVar4;
LAB_146421e13:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar5;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// GetAlpha @ 1464475f0

float __cdecl UModifyCurveAnimLibrary::GetAlpha(FModifyCurveAnimNodeReference *param_1)

{
  float local_res10 [2];
  float *local_res18 [2];
  code *local_18;
  undefined4 **local_10;
  
  local_res18[0] = local_res10;
  local_res10[0] = 0.0;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModifyCurveAnimLibrary::GetAlpha'::__l2::<lambda_1>,void,FAnimNode_ModifyCurve_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_ModifyCurve>
            ((FAnimNodeReference *)param_1,L"GetAlpha",
             (TFunctionRef<void___cdecl(FAnimNode_ModifyCurve_&)> *)&local_18);
  return local_res10[0];
}

// GetApplyMode @ 146447990

EModifyCurveApplyMode __cdecl
UModifyCurveAnimLibrary::GetApplyMode(FModifyCurveAnimNodeReference *param_1)

{
  EModifyCurveApplyMode local_res10 [8];
  EModifyCurveApplyMode *local_res18 [2];
  code *local_18;
  undefined1 **local_10;
  
  local_res18[0] = local_res10;
  local_res10[0] = Blend;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModifyCurveAnimLibrary::GetApplyMode'::__l2::<lambda_1>,void,FAnimNode_ModifyCurve_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_ModifyCurve>
            ((FAnimNodeReference *)param_1,L"GetApplyMode",
             (TFunctionRef<void___cdecl(FAnimNode_ModifyCurve_&)> *)&local_18);
  return local_res10[0];
}

// GetPrivateStaticClass @ 14644d5a0

UClass * __cdecl UModifyCurveAnimLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyCurveAnimLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"ModifyCurveAnimLibrary",
               &Z_Registration_Info_UClass_UModifyCurveAnimLibrary.InnerSingleton,
               StaticRegisterNativesUModifyCurveAnimLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UModifyCurveAnimLibrary>,
               InternalVTableHelperCtorCaller<UModifyCurveAnimLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyCurveAnimLibrary.InnerSingleton;
}

// SetAlpha @ 146467ae0

FModifyCurveAnimNodeReference * __cdecl
UModifyCurveAnimLibrary::SetAlpha
          (FModifyCurveAnimNodeReference *__return_storage_ptr__,
          FModifyCurveAnimNodeReference *param_1,float param_2)

{
  undefined8 uVar1;
  float local_res18 [4];
  code *local_18;
  float *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModifyCurveAnimLibrary::SetAlpha'::__l2::<lambda_1>,void,FAnimNode_ModifyCurve_&>
             ::Call;
  local_res18[0] = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_ModifyCurve>
            ((FAnimNodeReference *)param_1,L"SetAlpha",
             (TFunctionRef<void___cdecl(FAnimNode_ModifyCurve_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetApplyMode @ 146467ba0

FModifyCurveAnimNodeReference * __cdecl
UModifyCurveAnimLibrary::SetApplyMode
          (FModifyCurveAnimNodeReference *__return_storage_ptr__,
          FModifyCurveAnimNodeReference *param_1,EModifyCurveApplyMode param_2)

{
  undefined8 uVar1;
  EModifyCurveApplyMode local_res18 [16];
  code *local_18;
  EModifyCurveApplyMode *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModifyCurveAnimLibrary::SetApplyMode'::__l2::<lambda_1>,void,FAnimNode_ModifyCurve_&>
             ::Call;
  local_res18[0] = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_ModifyCurve>
            ((FAnimNodeReference *)param_1,L"SetApplyMode",
             (TFunctionRef<void___cdecl(FAnimNode_ModifyCurve_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetCurveMap @ 1464689b0

FModifyCurveAnimNodeReference * __cdecl
UModifyCurveAnimLibrary::SetCurveMap
          (FModifyCurveAnimNodeReference *__return_storage_ptr__,
          FModifyCurveAnimNodeReference *param_1,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_2)

{
  undefined8 uVar1;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_res8;
  code *local_18;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> **local_10;
  
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModifyCurveAnimLibrary::SetCurveMap'::__l2::<lambda_1>,void,FAnimNode_ModifyCurve_&>
             ::Call;
  local_res8 = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_ModifyCurve>
            ((FAnimNodeReference *)param_1,L"SetCurveMap",
             (TFunctionRef<void___cdecl(FAnimNode_ModifyCurve_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUModifyCurveAnimLibrary @ 14646e790

void __cdecl UModifyCurveAnimLibrary::StaticRegisterNativesUModifyCurveAnimLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UModifyCurveAnimLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertToModifyCurveNode @ 14647f9b0

void __cdecl
UModifyCurveAnimLibrary::execConvertToModifyCurveNode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimNodeReference *pFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FModifyCurveAnimNodeReference *pFVar4;
  FAnimNodeReference *pFVar5;
  EAnimNodeReferenceConversionResult *pEVar6;
  EAnimNodeReferenceConversionResult local_res10 [8];
  FAnimNodeReference local_28;
  FModifyCurveAnimNodeReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Failed;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_28;
  if (pFVar1 != (FAnimNodeReference *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EAnimNodeReferenceConversionResult *)0x0) {
    pEVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = ConvertToModifyCurveNode(&local_18,pFVar5,pEVar6);
  uVar3 = *(undefined8 *)&pFVar4->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar4;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  return;
}

// execConvertToModifyCurveNodePure @ 14647fac0

void __cdecl
UModifyCurveAnimLibrary::execConvertToModifyCurveNodePure
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  bool bVar5;
  uchar uVar6;
  UPackage *pUVar7;
  undefined8 uVar8;
  uchar *puVar9;
  uchar *puVar10;
  undefined8 uVar11;
  uchar *puVar12;
  uchar local_res10 [8];
  uchar local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar8 = 0;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar9 = local_38;
  if (puVar10 != (uchar *)0x0) {
    puVar9 = puVar10;
  }
  local_28 = 0;
  uStack_20 = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar12 = (uchar *)&local_28;
  if (puVar10 != (uchar *)0x0) {
    puVar12 = puVar10;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar10 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = *(longlong *)(puVar9 + 8);
  if (lVar4 != 0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve,(UObject *)pUVar7,
                           L"AnimNode_ModifyCurve");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14647fc4a;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton)->_padding_
    ;
    if ((*(int *)(lVar4 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar6 = '\x01';
      uVar8 = *(undefined8 *)puVar9;
      uVar11 = *(undefined8 *)(puVar9 + 8);
      goto LAB_14647fc4f;
    }
  }
LAB_14647fc4a:
  uVar6 = '\0';
  uVar11 = uVar8;
LAB_14647fc4f:
  *(undefined8 *)puVar12 = uVar8;
  *(undefined8 *)(puVar12 + 8) = uVar11;
  *puVar10 = uVar6;
  return;
}

// execGetAlpha @ 1464812d0

void __cdecl UModifyCurveAnimLibrary::execGetAlpha(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined4 local_res10 [2];
  undefined4 *local_res18;
  FAnimNodeReference local_28;
  code *local_18;
  undefined4 **local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res18 = local_res10;
  local_10 = &local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModifyCurveAnimLibrary::GetAlpha'::__l2::<lambda_1>,void,FAnimNode_ModifyCurve_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_ModifyCurve>
            (this,L"GetAlpha",(TFunctionRef<void___cdecl(FAnimNode_ModifyCurve_&)> *)&local_18);
  *(undefined4 *)param_3 = local_res10[0];
  return;
}

// execGetApplyMode @ 146481730

void __cdecl
UModifyCurveAnimLibrary::execGetApplyMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  FAnimNodeReference local_28;
  code *local_18;
  undefined1 **local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 2;
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res18 = local_res10;
  local_10 = &local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModifyCurveAnimLibrary::GetApplyMode'::__l2::<lambda_1>,void,FAnimNode_ModifyCurve_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_ModifyCurve>
            (this,L"GetApplyMode",(TFunctionRef<void___cdecl(FAnimNode_ModifyCurve_&)> *)&local_18);
  *(undefined1 *)param_3 = local_res10[0];
  return;
}

// execSetAlpha @ 146485dd0

void __cdecl UModifyCurveAnimLibrary::execSetAlpha(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  FAnimNodeReference local_38;
  code *local_28;
  undefined4 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.AnimNode = (FAnimNode_Base *)0x0;
  local_38.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = local_res10[0];
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModifyCurveAnimLibrary::SetAlpha'::__l2::<lambda_1>,void,FAnimNode_ModifyCurve_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_ModifyCurve>
            (this,L"SetAlpha",(TFunctionRef<void___cdecl(FAnimNode_ModifyCurve_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetApplyMode @ 146485ff0

void __cdecl
UModifyCurveAnimLibrary::execSetApplyMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  FAnimNodeReference local_38;
  code *local_28;
  undefined1 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.AnimNode = (FAnimNode_Base *)0x0;
  local_38.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = local_res10[0];
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModifyCurveAnimLibrary::SetApplyMode'::__l2::<lambda_1>,void,FAnimNode_ModifyCurve_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_ModifyCurve>
            (this,L"SetApplyMode",(TFunctionRef<void___cdecl(FAnimNode_ModifyCurve_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetCurveMap @ 1464865b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UModifyCurveAnimLibrary::execSetCurveMap(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  ulonglong uVar3;
  FAnimNodeReference *this;
  undefined1 auStackY_d8 [32];
  ForAnyElementType *local_a8;
  FAnimNodeReference local_a0;
  code *local_90;
  uchar **local_88;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_a0.AnimNode = (FAnimNode_Base *)0x0;
  local_a0.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  this = &local_a0;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_a8 = &local_78;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    local_a8 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  local_88 = (uchar **)&local_a8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModifyCurveAnimLibrary::SetCurveMap'::__l2::<lambda_1>,void,FAnimNode_ModifyCurve_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_ModifyCurve>
            (this,L"SetCurveMap",(TFunctionRef<void___cdecl(FAnimNode_ModifyCurve_&)> *)&local_90);
  pUVar2 = this->AnimNodeStruct;
  local_30 = 0;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar3 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

