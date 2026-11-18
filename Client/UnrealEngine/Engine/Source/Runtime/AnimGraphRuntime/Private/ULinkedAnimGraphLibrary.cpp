// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 13

// StaticClass @ 1463d8380

UClass * __cdecl ULinkedAnimGraphLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULinkedAnimGraphLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"LinkedAnimGraphLibrary",
               &Z_Registration_Info_UClass_ULinkedAnimGraphLibrary.InnerSingleton,
               StaticRegisterNativesULinkedAnimGraphLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULinkedAnimGraphLibrary>,
               InternalVTableHelperCtorCaller<ULinkedAnimGraphLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULinkedAnimGraphLibrary.InnerSingleton;
}

// ULinkedAnimGraphLibrary @ 146407a00

ULinkedAnimGraphLibrary * __thiscall
ULinkedAnimGraphLibrary::ULinkedAnimGraphLibrary
          (ULinkedAnimGraphLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULinkedAnimGraphLibrary__6B_;
  return this;
}

// ULinkedAnimGraphLibrary @ 146407a30

ULinkedAnimGraphLibrary * __thiscall
ULinkedAnimGraphLibrary::ULinkedAnimGraphLibrary
          (ULinkedAnimGraphLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULinkedAnimGraphLibrary__6B_;
  return this;
}

// ~ULinkedAnimGraphLibrary @ 1464097b0

void __thiscall ULinkedAnimGraphLibrary::~ULinkedAnimGraphLibrary(ULinkedAnimGraphLibrary *this)

{
  *(undefined ***)this = &___7ULinkedAnimGraphLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ConvertToLinkedAnimGraph @ 146421c30

FLinkedAnimGraphReference * __cdecl
ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraph
          (FLinkedAnimGraphReference *__return_storage_ptr__,FAnimNodeReference *param_1,
          EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UScriptStruct *pUVar4;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    pUVar3 = FAnimNode_LinkedAnimGraph::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *param_2 = Succeeded;
        pUVar4 = param_1->AnimNodeStruct;
        pUVar3 = (UScriptStruct *)param_1->AnimNode;
        goto LAB_146421c9a;
      }
    }
  }
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar3 = pUVar4;
LAB_146421c9a:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar3;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// GetLinkedAnimInstance @ 14644b560

/* WARNING: Enum "Type": Some values do not have unique names */

UAnimInstance * __cdecl
ULinkedAnimGraphLibrary::GetLinkedAnimInstance(FLinkedAnimGraphReference *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  UClass *pUVar5;
  
  if (((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) &&
     (pUVar4 = FAnimNode_LinkedAnimGraph::StaticStruct(), pUVar4 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar2 = *(longlong *)param_1, lVar2 != 0)) {
      if (*(longlong *)(lVar2 + 0x30) == 0) {
        return (UAnimInstance *)0x0;
      }
      if ((*(uint *)(*(longlong *)(lVar2 + 0x30) + 8) >> 0x1e & 1) != 0) {
        return (UAnimInstance *)0x0;
      }
      if (*(longlong *)(lVar2 + 0x30) == 0) {
        return (UAnimInstance *)0x0;
      }
      pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x30),pUVar5);
      if (!bVar3) {
        return (UAnimInstance *)0x0;
      }
      return *(UAnimInstance **)(lVar2 + 0x30);
    }
  }
  if ((byte)LogAnimation._0_1_ < 3) {
    return (UAnimInstance *)0x0;
  }
  UE::Logging::Private::BasicLog<3>
            ((FStaticBasicLogRecord *)
             &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_LinkedAnimGraph>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_LinkedAnimGraph&___ptr64)>)const___ptr64'
              ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  return (UAnimInstance *)0x0;
}

// GetPrivateStaticClass @ 14644d420

UClass * __cdecl ULinkedAnimGraphLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULinkedAnimGraphLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"LinkedAnimGraphLibrary",
               &Z_Registration_Info_UClass_ULinkedAnimGraphLibrary.InnerSingleton,
               StaticRegisterNativesULinkedAnimGraphLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULinkedAnimGraphLibrary>,
               InternalVTableHelperCtorCaller<ULinkedAnimGraphLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULinkedAnimGraphLibrary.InnerSingleton;
}

// HasLinkedAnimInstance @ 1464509c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl ULinkedAnimGraphLibrary::HasLinkedAnimInstance(FLinkedAnimGraphReference *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  UClass *pUVar5;
  
  if (((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) &&
     (pUVar4 = FAnimNode_LinkedAnimGraph::StaticStruct(), pUVar4 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar2 = *(longlong *)param_1, lVar2 != 0)) {
      if ((*(longlong *)(lVar2 + 0x30) != 0) &&
         (((*(uint *)(*(longlong *)(lVar2 + 0x30) + 8) >> 0x1e & 1) == 0 &&
          (*(longlong *)(lVar2 + 0x30) != 0)))) {
        pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x30),pUVar5);
        if (bVar3) {
          return *(longlong *)(lVar2 + 0x30) != 0;
        }
      }
      return false;
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_LinkedAnimGraph>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_LinkedAnimGraph&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return false;
}

// StaticRegisterNativesULinkedAnimGraphLibrary @ 14646e710

void __cdecl ULinkedAnimGraphLibrary::StaticRegisterNativesULinkedAnimGraphLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ULinkedAnimGraphLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertToLinkedAnimGraph @ 14647f400

void __cdecl
ULinkedAnimGraphLibrary::execConvertToLinkedAnimGraph
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
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
  if ((lVar3 != 0) &&
     (pUVar6 = FAnimNode_LinkedAnimGraph::StaticStruct(), pUVar6 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
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
  *puVar7 = '\0';
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return;
}

// execConvertToLinkedAnimGraphPure @ 14647f550

void __cdecl
ULinkedAnimGraphLibrary::execConvertToLinkedAnimGraphPure
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  bool bVar5;
  uchar uVar6;
  UScriptStruct *pUVar7;
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
    pUVar7 = FAnimNode_LinkedAnimGraph::StaticStruct();
    if (pUVar7 != (UScriptStruct *)0x0) {
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        uVar6 = '\x01';
        uVar8 = *(undefined8 *)puVar9;
        uVar11 = *(undefined8 *)(puVar9 + 8);
        goto LAB_14647f6b6;
      }
    }
  }
  uVar6 = '\0';
  uVar11 = uVar8;
LAB_14647f6b6:
  *(undefined8 *)puVar12 = uVar8;
  *(undefined8 *)(puVar12 + 8) = uVar11;
  *puVar10 = uVar6;
  return;
}

// execGetLinkedAnimInstance @ 146481bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ULinkedAnimGraphLibrary::execGetLinkedAnimInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  UClass *pUVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong local_18 [2];
  
  uVar7 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18[0] = 0;
  local_18[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  plVar8 = local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*plVar8 != 0) && (lVar3 = plVar8[1], lVar3 != 0)) &&
     (pUVar5 = FAnimNode_LinkedAnimGraph::StaticStruct(), pUVar5 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (lVar3 = *plVar8, lVar3 != 0)) {
      if (((*(longlong *)(lVar3 + 0x30) != 0) &&
          ((*(uint *)(*(longlong *)(lVar3 + 0x30) + 8) >> 0x1e & 1) == 0)) &&
         (*(longlong *)(lVar3 + 0x30) != 0)) {
        pUVar6 = Z_Construct_UClass_UAnimInstance_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)(lVar3 + 0x30),pUVar6);
        uVar7 = 0;
        if (bVar4) {
          uVar7 = *(undefined8 *)(lVar3 + 0x30);
        }
      }
      goto LAB_146481cb9;
    }
  }
  uVar7 = 0;
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_LinkedAnimGraph>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_LinkedAnimGraph&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    *(undefined8 *)param_3 = 0;
    return;
  }
LAB_146481cb9:
  *(undefined8 *)param_3 = uVar7;
  return;
}

// execHasLinkedAnimInstance @ 146483220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ULinkedAnimGraphLibrary::execHasLinkedAnimInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_18 [2];
  
  lVar8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18[0] = 0;
  local_18[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  plVar7 = local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar7 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*plVar7 != 0) && (lVar3 = plVar7[1], lVar3 != 0)) &&
     (pUVar5 = FAnimNode_LinkedAnimGraph::StaticStruct(), pUVar5 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (lVar3 = *plVar7, lVar3 != 0)) {
      if ((*(longlong *)(lVar3 + 0x30) != 0) &&
         (((*(uint *)(*(longlong *)(lVar3 + 0x30) + 8) >> 0x1e & 1) == 0 &&
          (*(longlong *)(lVar3 + 0x30) != 0)))) {
        pUVar6 = Z_Construct_UClass_UAnimInstance_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)(lVar3 + 0x30),pUVar6);
        lVar8 = 0;
        if (bVar4) {
          lVar8 = *(longlong *)(lVar3 + 0x30);
        }
      }
      bVar4 = lVar8 != 0;
      goto LAB_146483357;
    }
  }
  bVar4 = false;
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_LinkedAnimGraph>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_LinkedAnimGraph&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    bVar4 = false;
  }
LAB_146483357:
  *(bool *)param_3 = bVar4;
  return;
}

