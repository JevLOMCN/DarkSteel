// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 13

// StaticClass @ 1463d2d60

UClass * __cdecl USkeletalControlLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalControlLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"SkeletalControlLibrary",
               &Z_Registration_Info_UClass_USkeletalControlLibrary.InnerSingleton,
               StaticRegisterNativesUSkeletalControlLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USkeletalControlLibrary>,
               InternalVTableHelperCtorCaller<USkeletalControlLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalControlLibrary.InnerSingleton;
}

// USkeletalControlLibrary @ 146407e00

USkeletalControlLibrary * __thiscall
USkeletalControlLibrary::USkeletalControlLibrary
          (USkeletalControlLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USkeletalControlLibrary__6B_;
  return this;
}

// USkeletalControlLibrary @ 146407e30

USkeletalControlLibrary * __thiscall
USkeletalControlLibrary::USkeletalControlLibrary
          (USkeletalControlLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USkeletalControlLibrary__6B_;
  return this;
}

// ~USkeletalControlLibrary @ 146409930

void __thiscall USkeletalControlLibrary::~USkeletalControlLibrary(USkeletalControlLibrary *this)

{
  *(undefined ***)this = &___7USkeletalControlLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ConvertToSkeletalControl @ 146422200

FSkeletalControlReference * __cdecl
USkeletalControlLibrary::ConvertToSkeletalControl
          (FSkeletalControlReference *__return_storage_ptr__,FAnimNodeReference *param_1,
          EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,(UObject *)pUVar3
                           ,L"AnimNode_SkeletalControlBase");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14642228b;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton)->
                 _padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton)->_padding_
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_2 = Succeeded;
      pUVar4 = param_1->AnimNodeStruct;
      pUVar5 = (UScriptStruct *)param_1->AnimNode;
      goto LAB_146422293;
    }
  }
LAB_14642228b:
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar5 = pUVar4;
LAB_146422293:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar5;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// GetAlpha @ 146447640

float __cdecl USkeletalControlLibrary::GetAlpha(FSkeletalControlReference *param_1)

{
  float local_res10 [2];
  float *local_res18 [2];
  code *local_18;
  undefined4 **local_10;
  
  local_res18[0] = local_res10;
  local_res10[0] = 0.0;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`USkeletalControlLibrary::GetAlpha'::__l2::<lambda_1>,void,FAnimNode_SkeletalControlBase_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SkeletalControlBase>
            ((FAnimNodeReference *)param_1,L"GetAlpha",
             (TFunctionRef<void___cdecl(FAnimNode_SkeletalControlBase_&)> *)&local_18);
  return local_res10[0];
}

// GetPrivateStaticClass @ 14644da10

UClass * __cdecl USkeletalControlLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalControlLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"SkeletalControlLibrary",
               &Z_Registration_Info_UClass_USkeletalControlLibrary.InnerSingleton,
               StaticRegisterNativesUSkeletalControlLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USkeletalControlLibrary>,
               InternalVTableHelperCtorCaller<USkeletalControlLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalControlLibrary.InnerSingleton;
}

// SetAlpha @ 146467b40

FSkeletalControlReference * __cdecl
USkeletalControlLibrary::SetAlpha
          (FSkeletalControlReference *__return_storage_ptr__,FSkeletalControlReference *param_1,
          float param_2)

{
  undefined8 uVar1;
  float local_res18 [4];
  code *local_18;
  float *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`USkeletalControlLibrary::SetAlpha'::__l2::<lambda_1>,void,FAnimNode_SkeletalControlBase_&>
             ::Call;
  local_res18[0] = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SkeletalControlBase>
            ((FAnimNodeReference *)param_1,L"SetAlpha",
             (TFunctionRef<void___cdecl(FAnimNode_SkeletalControlBase_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUSkeletalControlLibrary @ 14646e8e0

void __cdecl USkeletalControlLibrary::StaticRegisterNativesUSkeletalControlLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_USkeletalControlLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertToSkeletalControl @ 146480710

void __cdecl
USkeletalControlLibrary::execConvertToSkeletalControl
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimNodeReference *pFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FSkeletalControlReference *pFVar4;
  FAnimNodeReference *pFVar5;
  EAnimNodeReferenceConversionResult *pEVar6;
  EAnimNodeReferenceConversionResult local_res10 [8];
  FAnimNodeReference local_28;
  FSkeletalControlReference local_18;
  
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
  pFVar4 = ConvertToSkeletalControl(&local_18,pFVar5,pEVar6);
  uVar3 = *(undefined8 *)&pFVar4->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar4;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  return;
}

// execConvertToSkeletalControlPure @ 146480820

void __cdecl
USkeletalControlLibrary::execConvertToSkeletalControlPure
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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,(UObject *)pUVar7
                           ,L"AnimNode_SkeletalControlBase");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1464809aa;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton)->_padding_
       )) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar6 = '\x01';
      uVar8 = *(undefined8 *)puVar9;
      uVar11 = *(undefined8 *)(puVar9 + 8);
      goto LAB_1464809af;
    }
  }
LAB_1464809aa:
  uVar6 = '\0';
  uVar11 = uVar8;
LAB_1464809af:
  *(undefined8 *)puVar12 = uVar8;
  *(undefined8 *)(puVar12 + 8) = uVar11;
  *puVar10 = uVar6;
  return;
}

// execGetAlpha @ 1464813b0

void __cdecl USkeletalControlLibrary::execGetAlpha(UObject *param_1,FFrame *param_2,void *param_3)

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
             TFunctionRefCaller<`USkeletalControlLibrary::GetAlpha'::__l2::<lambda_1>,void,FAnimNode_SkeletalControlBase_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SkeletalControlBase>
            (this,L"GetAlpha",
             (TFunctionRef<void___cdecl(FAnimNode_SkeletalControlBase_&)> *)&local_18);
  *(undefined4 *)param_3 = local_res10[0];
  return;
}

// execSetAlpha @ 146485ee0

void __cdecl USkeletalControlLibrary::execSetAlpha(UObject *param_1,FFrame *param_2,void *param_3)

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
             TFunctionRefCaller<`USkeletalControlLibrary::SetAlpha'::__l2::<lambda_1>,void,FAnimNode_SkeletalControlBase_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SkeletalControlBase>
            (this,L"SetAlpha",
             (TFunctionRef<void___cdecl(FAnimNode_SkeletalControlBase_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

