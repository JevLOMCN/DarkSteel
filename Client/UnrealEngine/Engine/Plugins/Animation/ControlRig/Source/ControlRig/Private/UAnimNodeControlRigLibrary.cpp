// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 12

// StaticClass @ 14a1ff810

UClass * __cdecl UAnimNodeControlRigLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNodeControlRigLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"AnimNodeControlRigLibrary",
               &Z_Registration_Info_UClass_UAnimNodeControlRigLibrary.InnerSingleton,
               StaticRegisterNativesUAnimNodeControlRigLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UAnimNodeControlRigLibrary>,
               InternalVTableHelperCtorCaller<UAnimNodeControlRigLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNodeControlRigLibrary.InnerSingleton;
}

// UAnimNodeControlRigLibrary @ 14a2215e0

UAnimNodeControlRigLibrary * __thiscall
UAnimNodeControlRigLibrary::UAnimNodeControlRigLibrary
          (UAnimNodeControlRigLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimNodeControlRigLibrary__6B_;
  return this;
}

// UAnimNodeControlRigLibrary @ 14a221610

UAnimNodeControlRigLibrary * __thiscall
UAnimNodeControlRigLibrary::UAnimNodeControlRigLibrary
          (UAnimNodeControlRigLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimNodeControlRigLibrary__6B_;
  return this;
}

// ~UAnimNodeControlRigLibrary @ 14a226330

void __thiscall
UAnimNodeControlRigLibrary::~UAnimNodeControlRigLibrary(UAnimNodeControlRigLibrary *this)

{
  *(undefined ***)this = &___7UAnimNodeControlRigLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14a22c3d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UAnimNodeControlRigLibrary::SetControlRigClass'::__l2::<lambda_1>::operator()
          (void *this,FAnimNode_ControlRig *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  
  pUVar2 = *(UClass **)this;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar3 = (param_1->DefaultControlRigClass).Class.field0_0x0.DebugPtr;
  if (pUVar3 != (UClass *)0x0) {
    pUVar5 = UControlRig::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && ((param_1->DefaultControlRigClass).Class.field0_0x0.DebugPtr != (UClass *)0x0))
      goto LAB_14a22c467;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_1->ControlRigClass).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (param_1->DefaultControlRigClass).Class.field0_0x0 = (param_1->ControlRigClass).Class.field0_0x0;
LAB_14a22c467:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (param_1->ControlRigClass).Class.field0_0x0.DebugPtr = pUVar2;
  return;
}

// ConvertToControlRig @ 14a248fb0

FControlRigReference * __cdecl
UAnimNodeControlRigLibrary::ConvertToControlRig
          (FControlRigReference *__return_storage_ptr__,FAnimNodeReference *param_1,
          EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ControlRig,(UObject *)pUVar3,
                           L"AnimNode_ControlRig");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14a24903b;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton)->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_2 = Succeeded;
      pUVar4 = param_1->AnimNodeStruct;
      pUVar5 = (UScriptStruct *)param_1->AnimNode;
      goto LAB_14a249043;
    }
  }
LAB_14a24903b:
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar5 = pUVar4;
LAB_14a249043:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar5;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a267990

UClass * __cdecl UAnimNodeControlRigLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNodeControlRigLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"AnimNodeControlRigLibrary",
               &Z_Registration_Info_UClass_UAnimNodeControlRigLibrary.InnerSingleton,
               StaticRegisterNativesUAnimNodeControlRigLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UAnimNodeControlRigLibrary>,
               InternalVTableHelperCtorCaller<UAnimNodeControlRigLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNodeControlRigLibrary.InnerSingleton;
}

// SetControlRigClass @ 14a291640

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FControlRigReference * __cdecl
UAnimNodeControlRigLibrary::SetControlRigClass
          (FControlRigReference *__return_storage_ptr__,FControlRigReference *param_1,
          TSubclassOf<UControlRig> param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  UPackage *pUVar5;
  UObject *local_res8;
  
  local_res8 = *(UObject **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  if ((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ControlRig,(UObject *)pUVar5,
                           L"AnimNode_ControlRig");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14a2916ea;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton)->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*(FAnimNode_ControlRig **)param_1 != (FAnimNode_ControlRig *)0x0)) {
      `UAnimNodeControlRigLibrary::SetControlRigClass'::__l2::<lambda_1>::operator()
                (&local_res8,*(FAnimNode_ControlRig **)param_1);
      goto LAB_14a29170d;
    }
  }
LAB_14a2916ea:
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_ControlRig>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_ControlRig&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_14a29170d:
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUAnimNodeControlRigLibrary @ 14a297f30

void __cdecl UAnimNodeControlRigLibrary::StaticRegisterNativesUAnimNodeControlRigLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UAnimNodeControlRigLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertToControlRig @ 14a2afdf0

void __cdecl
UAnimNodeControlRigLibrary::execConvertToControlRig(UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimNodeReference *pFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FControlRigReference *pFVar4;
  FAnimNodeReference *pFVar5;
  EAnimNodeReferenceConversionResult *pEVar6;
  EAnimNodeReferenceConversionResult local_res10 [8];
  FAnimNodeReference local_28;
  FControlRigReference local_18;
  
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
  pFVar4 = ConvertToControlRig(&local_18,pFVar5,pEVar6);
  uVar3 = *(undefined8 *)&pFVar4->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar4;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  return;
}

// execConvertToControlRigPure @ 14a2aff00

void __cdecl
UAnimNodeControlRigLibrary::execConvertToControlRigPure
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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ControlRig,(UObject *)pUVar7,
                           L"AnimNode_ControlRig");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14a2b008a;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton)->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar6 = '\x01';
      uVar8 = *(undefined8 *)puVar9;
      uVar11 = *(undefined8 *)(puVar9 + 8);
      goto LAB_14a2b008f;
    }
  }
LAB_14a2b008a:
  uVar6 = '\0';
  uVar11 = uVar8;
LAB_14a2b008f:
  *(undefined8 *)puVar12 = uVar8;
  *(undefined8 *)(puVar12 + 8) = uVar11;
  *puVar10 = uVar6;
  return;
}

// execSetControlRigClass @ 14a2b5c10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAnimNodeControlRigLibrary::execSetControlRigClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UObject *pUVar5;
  UPackage *pUVar6;
  longlong *plVar7;
  UObject *local_res10;
  UObject *local_res18 [2];
  longlong local_38 [2];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10 = (UObject *)0x0;
  plVar7 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar7 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  local_res18[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  if ((*plVar7 != 0) && (lVar3 = plVar7[1], lVar3 != 0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ControlRig,(UObject *)pUVar6,
                           L"AnimNode_ControlRig");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14a2b5d83;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton)->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_ControlRig.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((FAnimNode_ControlRig *)*plVar7 != (FAnimNode_ControlRig *)0x0)) {
      `UAnimNodeControlRigLibrary::SetControlRigClass'::__l2::<lambda_1>::operator()
                (local_res18,(FAnimNode_ControlRig *)*plVar7);
      goto LAB_14a2b5da6;
    }
  }
LAB_14a2b5d83:
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_ControlRig>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_ControlRig&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_14a2b5da6:
  lVar3 = plVar7[1];
  *(longlong *)param_3 = *plVar7;
  *(longlong *)((longlong)param_3 + 8) = lVar3;
  return;
}

