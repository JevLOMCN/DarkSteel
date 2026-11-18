// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 10

// StaticClass @ 1463e6a80

UClass * __cdecl UBlendListBaseLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendListBaseLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"BlendListBaseLibrary",
               &Z_Registration_Info_UClass_UBlendListBaseLibrary.InnerSingleton,
               StaticRegisterNativesUBlendListBaseLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlendListBaseLibrary>,
               InternalVTableHelperCtorCaller<UBlendListBaseLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendListBaseLibrary.InnerSingleton;
}

// UBlendListBaseLibrary @ 1464077a0

UBlendListBaseLibrary * __thiscall
UBlendListBaseLibrary::UBlendListBaseLibrary(UBlendListBaseLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlendListBaseLibrary__6B_;
  return this;
}

// UBlendListBaseLibrary @ 1464077d0

UBlendListBaseLibrary * __thiscall
UBlendListBaseLibrary::UBlendListBaseLibrary
          (UBlendListBaseLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlendListBaseLibrary__6B_;
  return this;
}

// ~UBlendListBaseLibrary @ 146409710

void __thiscall UBlendListBaseLibrary::~UBlendListBaseLibrary(UBlendListBaseLibrary *this)

{
  *(undefined ***)this = &___7UBlendListBaseLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ConvertToBlendListBase @ 146421750

FBlendListBaseReference * __cdecl
UBlendListBaseLibrary::ConvertToBlendListBase
          (FBlendListBaseReference *__return_storage_ptr__,FAnimNodeReference *param_1,
          EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase,(UObject *)pUVar3,
                           L"AnimNode_BlendListBase");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1464217db;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton)->
                 _padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_2 = Succeeded;
      pUVar4 = param_1->AnimNodeStruct;
      pUVar5 = (UScriptStruct *)param_1->AnimNode;
      goto LAB_1464217e3;
    }
  }
LAB_1464217db:
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar5 = pUVar4;
LAB_1464217e3:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar5;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14644d060

UClass * __cdecl UBlendListBaseLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendListBaseLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"BlendListBaseLibrary",
               &Z_Registration_Info_UClass_UBlendListBaseLibrary.InnerSingleton,
               StaticRegisterNativesUBlendListBaseLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlendListBaseLibrary>,
               InternalVTableHelperCtorCaller<UBlendListBaseLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendListBaseLibrary.InnerSingleton;
}

// ResetNode @ 146464450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UBlendListBaseLibrary::ResetNode(FBlendListBaseReference *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UPackage *pUVar4;
  
  if ((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase,(UObject *)pUVar4,
                           L"AnimNode_BlendListBase");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1464644db;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(FAnimNode_BlendListBase **)param_1 != (FAnimNode_BlendListBase *)0x0)) {
      FAnimNode_BlendListBase::Initialize(*(FAnimNode_BlendListBase **)param_1);
      return;
    }
  }
LAB_1464644db:
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendListBase>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_BlendListBase&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return;
}

// StaticRegisterNativesUBlendListBaseLibrary @ 14646e5d0

void __cdecl UBlendListBaseLibrary::StaticRegisterNativesUBlendListBaseLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UBlendListBaseLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertToBlendListBase @ 14647e5f0

void __cdecl
UBlendListBaseLibrary::execConvertToBlendListBase(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  UPackage *pUVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar local_res10 [8];
  uchar local_28 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar7 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar8 = local_28;
  if (puVar7 != (uchar *)0x0) {
    puVar8 = puVar7;
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
  puVar7 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = *(longlong *)(puVar8 + 8);
  if (lVar3 != 0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase,(UObject *)pUVar6,
                           L"AnimNode_BlendListBase");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14647e73f;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      *puVar7 = '\x01';
      uVar4 = *(undefined8 *)(puVar8 + 8);
      *(undefined8 *)param_3 = *(undefined8 *)puVar8;
      *(undefined8 *)((longlong)param_3 + 8) = uVar4;
      return;
    }
  }
LAB_14647e73f:
  *puVar7 = '\0';
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return;
}

// execResetNode @ 146485b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UBlendListBaseLibrary::execResetNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UPackage *pUVar5;
  longlong *plVar6;
  longlong local_18 [2];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_18[0] = 0;
  local_18[1] = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  plVar6 = local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar6 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*plVar6 != 0) && (lVar3 = plVar6[1], lVar3 != 0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase,(UObject *)pUVar5,
                           L"AnimNode_BlendListBase");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_146485c0f;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((FAnimNode_BlendListBase *)*plVar6 != (FAnimNode_BlendListBase *)0x0)) {
      FAnimNode_BlendListBase::Initialize((FAnimNode_BlendListBase *)*plVar6);
      return;
    }
  }
LAB_146485c0f:
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendListBase>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_BlendListBase&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return;
}

