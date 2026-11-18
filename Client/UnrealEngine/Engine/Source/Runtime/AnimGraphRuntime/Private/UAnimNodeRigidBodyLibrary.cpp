// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 12

// StaticClass @ 1463d2130

UClass * __cdecl UAnimNodeRigidBodyLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNodeRigidBodyLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"AnimNodeRigidBodyLibrary",
               &Z_Registration_Info_UClass_UAnimNodeRigidBodyLibrary.InnerSingleton,
               StaticRegisterNativesUAnimNodeRigidBodyLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimNodeRigidBodyLibrary>,
               InternalVTableHelperCtorCaller<UAnimNodeRigidBodyLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNodeRigidBodyLibrary.InnerSingleton;
}

// UAnimNodeRigidBodyLibrary @ 146407580

UAnimNodeRigidBodyLibrary * __thiscall
UAnimNodeRigidBodyLibrary::UAnimNodeRigidBodyLibrary
          (UAnimNodeRigidBodyLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimNodeRigidBodyLibrary__6B_;
  return this;
}

// UAnimNodeRigidBodyLibrary @ 1464075b0

UAnimNodeRigidBodyLibrary * __thiscall
UAnimNodeRigidBodyLibrary::UAnimNodeRigidBodyLibrary
          (UAnimNodeRigidBodyLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimNodeRigidBodyLibrary__6B_;
  return this;
}

// ~UAnimNodeRigidBodyLibrary @ 146409660

void __thiscall
UAnimNodeRigidBodyLibrary::~UAnimNodeRigidBodyLibrary(UAnimNodeRigidBodyLibrary *this)

{
  *(undefined ***)this = &___7UAnimNodeRigidBodyLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ConvertToRigidBodyAnimNode @ 146421f30

FRigidBodyAnimNodeReference * __cdecl
UAnimNodeRigidBodyLibrary::ConvertToRigidBodyAnimNode
          (FRigidBodyAnimNodeReference *__return_storage_ptr__,FAnimNodeReference *param_1,
          EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar3 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBody,(UObject *)pUVar3,
                           L"AnimNode_RigidBody");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_146421fbb;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton)->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_2 = Succeeded;
      pUVar4 = param_1->AnimNodeStruct;
      pUVar5 = (UScriptStruct *)param_1->AnimNode;
      goto LAB_146421fc3;
    }
  }
LAB_146421fbb:
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar5 = pUVar4;
LAB_146421fc3:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar5;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// ConvertToRigidBodyAnimNodePure @ 146421ff0

void __cdecl
UAnimNodeRigidBodyLibrary::ConvertToRigidBodyAnimNodePure
          (FAnimNodeReference *param_1,FRigidBodyAnimNodeReference *param_2,bool *param_3)

{
  int iVar1;
  UPackage *pUVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  
  pUVar3 = param_1->AnimNodeStruct;
  if (pUVar3 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBody,(UObject *)pUVar2,
                           L"AnimNode_RigidBody");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_146422079;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton)->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar3 = param_1->AnimNodeStruct;
      bVar4 = true;
      pUVar5 = (UScriptStruct *)param_1->AnimNode;
      goto LAB_14642207f;
    }
  }
LAB_146422079:
  bVar4 = false;
  pUVar3 = (UScriptStruct *)0x0;
  pUVar5 = pUVar3;
LAB_14642207f:
  *(UScriptStruct **)param_2 = pUVar5;
  *(UScriptStruct **)&param_2->field_0x8 = pUVar3;
  *param_3 = bVar4;
  return;
}

// GetPrivateStaticClass @ 14644cca0

UClass * __cdecl UAnimNodeRigidBodyLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNodeRigidBodyLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"AnimNodeRigidBodyLibrary",
               &Z_Registration_Info_UClass_UAnimNodeRigidBodyLibrary.InnerSingleton,
               StaticRegisterNativesUAnimNodeRigidBodyLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimNodeRigidBodyLibrary>,
               InternalVTableHelperCtorCaller<UAnimNodeRigidBodyLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNodeRigidBodyLibrary.InnerSingleton;
}

// SetOverridePhysicsAsset @ 14646a180

/* WARNING: Enum "Type": Some values do not have unique names */

FRigidBodyAnimNodeReference * __cdecl
UAnimNodeRigidBodyLibrary::SetOverridePhysicsAsset
          (FRigidBodyAnimNodeReference *__return_storage_ptr__,FRigidBodyAnimNodeReference *param_1,
          UPhysicsAsset *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  UPackage *pUVar5;
  
  if ((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBody,(UObject *)pUVar5,
                           L"AnimNode_RigidBody");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14646a214;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton)->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*(longlong *)param_1 != 0)) {
      *(UPhysicsAsset **)(*(longlong *)param_1 + 200) = param_2;
      goto LAB_14646a237;
    }
  }
LAB_14646a214:
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_RigidBody>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_RigidBody&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_14646a237:
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUAnimNodeRigidBodyLibrary @ 14646e520

void __cdecl UAnimNodeRigidBodyLibrary::StaticRegisterNativesUAnimNodeRigidBodyLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UAnimNodeRigidBodyLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertToRigidBodyAnimNode @ 14647fe90

void __cdecl
UAnimNodeRigidBodyLibrary::execConvertToRigidBodyAnimNode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimNodeReference *pFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FRigidBodyAnimNodeReference *pFVar4;
  FAnimNodeReference *pFVar5;
  EAnimNodeReferenceConversionResult *pEVar6;
  EAnimNodeReferenceConversionResult local_res10 [8];
  FAnimNodeReference local_28;
  FRigidBodyAnimNodeReference local_18;
  
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
  pFVar4 = ConvertToRigidBodyAnimNode(&local_18,pFVar5,pEVar6);
  uVar3 = *(undefined8 *)&pFVar4->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar4;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  return;
}

// execConvertToRigidBodyAnimNodePure @ 14647ffa0

void __cdecl
UAnimNodeRigidBodyLibrary::execConvertToRigidBodyAnimNodePure
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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar7 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBody,(UObject *)pUVar7,
                           L"AnimNode_RigidBody");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14648012a;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton)->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar6 = '\x01';
      uVar8 = *(undefined8 *)puVar9;
      uVar11 = *(undefined8 *)(puVar9 + 8);
      goto LAB_14648012f;
    }
  }
LAB_14648012a:
  uVar6 = '\0';
  uVar11 = uVar8;
LAB_14648012f:
  *(undefined8 *)puVar12 = uVar8;
  *(undefined8 *)(puVar12 + 8) = uVar11;
  *puVar10 = uVar6;
  return;
}

// execSetOverridePhysicsAsset @ 146486cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAnimNodeRigidBodyLibrary::execSetOverridePhysicsAsset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  UPackage *pUVar6;
  longlong *plVar7;
  undefined8 local_res10;
  longlong local_28 [2];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28[0] = 0;
  local_28[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10 = 0;
  plVar7 = local_28;
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
  uVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*plVar7 != 0) && (lVar3 = plVar7[1], lVar3 != 0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBody,(UObject *)pUVar6,
                           L"AnimNode_RigidBody");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_146486e33;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton)->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*plVar7 != 0)) {
      *(undefined8 *)(*plVar7 + 200) = uVar5;
      goto LAB_146486e56;
    }
  }
LAB_146486e33:
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_RigidBody>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_RigidBody&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_146486e56:
  lVar3 = plVar7[1];
  *(longlong *)param_3 = *plVar7;
  *(longlong *)((longlong)param_3 + 8) = lVar3;
  return;
}

