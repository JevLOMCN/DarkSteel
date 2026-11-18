// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 11

// StaticClass @ 14a85ac60

UClass * __cdecl UBlendStackInputAnimNodeLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendStackInputAnimNodeLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/BlendStack",L"BlendStackInputAnimNodeLibrary",
               &Z_Registration_Info_UClass_UBlendStackInputAnimNodeLibrary.InnerSingleton,
               StaticRegisterNativesUBlendStackInputAnimNodeLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlendStackInputAnimNodeLibrary>,
               InternalVTableHelperCtorCaller<UBlendStackInputAnimNodeLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendStackInputAnimNodeLibrary.InnerSingleton;
}

// UBlendStackInputAnimNodeLibrary @ 14a862580

UBlendStackInputAnimNodeLibrary * __thiscall
UBlendStackInputAnimNodeLibrary::UBlendStackInputAnimNodeLibrary
          (UBlendStackInputAnimNodeLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlendStackInputAnimNodeLibrary__6B_;
  return this;
}

// UBlendStackInputAnimNodeLibrary @ 14a8625b0

UBlendStackInputAnimNodeLibrary * __thiscall
UBlendStackInputAnimNodeLibrary::UBlendStackInputAnimNodeLibrary
          (UBlendStackInputAnimNodeLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlendStackInputAnimNodeLibrary__6B_;
  return this;
}

// ~UBlendStackInputAnimNodeLibrary @ 14a862750

void __thiscall
UBlendStackInputAnimNodeLibrary::~UBlendStackInputAnimNodeLibrary
          (UBlendStackInputAnimNodeLibrary *this)

{
  *(undefined ***)this = &___7UBlendStackInputAnimNodeLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ConvertToBlendStackInputNode @ 14a865610

FBlendStackInputAnimNodeReference * __cdecl
UBlendStackInputAnimNodeLibrary::ConvertToBlendStackInputNode
          (FBlendStackInputAnimNodeReference *__return_storage_ptr__,FAnimNodeReference *param_1,
          EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_BlendStack();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStackInput,(UObject *)pUVar3,
                           L"AnimNode_BlendStackInput");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14a86569b;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton)->
                 _padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_2 = Succeeded;
      pUVar4 = param_1->AnimNodeStruct;
      pUVar5 = (UScriptStruct *)param_1->AnimNode;
      goto LAB_14a8656a3;
    }
  }
LAB_14a86569b:
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar5 = pUVar4;
LAB_14a8656a3:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar5;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a866c80

UClass * __cdecl UBlendStackInputAnimNodeLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendStackInputAnimNodeLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/BlendStack",L"BlendStackInputAnimNodeLibrary",
               &Z_Registration_Info_UClass_UBlendStackInputAnimNodeLibrary.InnerSingleton,
               StaticRegisterNativesUBlendStackInputAnimNodeLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlendStackInputAnimNodeLibrary>,
               InternalVTableHelperCtorCaller<UBlendStackInputAnimNodeLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendStackInputAnimNodeLibrary.InnerSingleton;
}

// GetProperties @ 14a866d40

void __cdecl
UBlendStackInputAnimNodeLibrary::GetProperties
          (FBlendStackInputAnimNodeReference *param_1,UAnimationAsset **param_2,float *param_3)

{
  FBlendStackAnimPlayer *this;
  FAnimNode_BlendStackInput *pFVar1;
  UAnimationAsset *pUVar2;
  float fVar3;
  
  *param_2 = (UAnimationAsset *)0x0;
  *param_3 = 0.0;
  pFVar1 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStackInput>
                     ((FAnimNodeReference *)param_1);
  if (((pFVar1 != (FAnimNode_BlendStackInput *)0x0) &&
      (pFVar1->Player != (FBlendStackAnimPlayer **)0x0)) &&
     (this = *pFVar1->Player, this != (FBlendStackAnimPlayer *)0x0)) {
    pUVar2 = FBlendStackAnimPlayer::GetAnimationAsset(this);
    *param_2 = pUVar2;
    fVar3 = FBlendStackAnimPlayer::GetAccumulatedTime(this);
    *param_3 = fVar3;
  }
  return;
}

// StaticRegisterNativesUBlendStackInputAnimNodeLibrary @ 14a869230

void __cdecl
UBlendStackInputAnimNodeLibrary::StaticRegisterNativesUBlendStackInputAnimNodeLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UBlendStackInputAnimNodeLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertToBlendStackInputNode @ 14a86a5b0

void __cdecl
UBlendStackInputAnimNodeLibrary::execConvertToBlendStackInputNode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimNodeReference *pFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FBlendStackInputAnimNodeReference *pFVar4;
  FAnimNodeReference *pFVar5;
  EAnimNodeReferenceConversionResult *pEVar6;
  EAnimNodeReferenceConversionResult local_res10 [8];
  FAnimNodeReference local_28;
  FBlendStackInputAnimNodeReference local_18;
  
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
  pFVar4 = ConvertToBlendStackInputNode(&local_18,pFVar5,pEVar6);
  uVar3 = *(undefined8 *)&pFVar4->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar4;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  return;
}

// execConvertToBlendStackInputNodePure @ 14a86a6c0

void __cdecl
UBlendStackInputAnimNodeLibrary::execConvertToBlendStackInputNodePure
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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_BlendStack();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStackInput,(UObject *)pUVar7,
                           L"AnimNode_BlendStackInput");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14a86a84a;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar6 = '\x01';
      uVar8 = *(undefined8 *)puVar9;
      uVar11 = *(undefined8 *)(puVar9 + 8);
      goto LAB_14a86a84f;
    }
  }
LAB_14a86a84a:
  uVar6 = '\0';
  uVar11 = uVar8;
LAB_14a86a84f:
  *(undefined8 *)puVar12 = uVar8;
  *(undefined8 *)(puVar12 + 8) = uVar11;
  *puVar10 = uVar6;
  return;
}

// execGetProperties @ 14a86b300

void __cdecl
UBlendStackInputAnimNodeLibrary::execGetProperties(UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimNodeReference *pFVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  FBlendStackAnimPlayer *this;
  FAnimNode_BlendStackInput *pFVar4;
  UAnimationAsset *pUVar5;
  FAnimNodeReference *this_00;
  float *pfVar6;
  uchar *puVar7;
  float fVar8;
  float local_res10 [2];
  uchar local_res20 [8];
  FAnimNodeReference local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this_00 = &local_28;
  if (pFVar1 != (FAnimNodeReference *)0x0) {
    this_00 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar7 = local_res20;
  if (puVar2 != (uchar *)0x0) {
    puVar7 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar6 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar6 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar7[0] = '\0';
  puVar7[1] = '\0';
  puVar7[2] = '\0';
  puVar7[3] = '\0';
  puVar7[4] = '\0';
  puVar7[5] = '\0';
  puVar7[6] = '\0';
  puVar7[7] = '\0';
  *pfVar6 = 0.0;
  pFVar4 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStackInput>(this_00);
  if (((pFVar4 != (FAnimNode_BlendStackInput *)0x0) &&
      (pFVar4->Player != (FBlendStackAnimPlayer **)0x0)) &&
     (this = *pFVar4->Player, this != (FBlendStackAnimPlayer *)0x0)) {
    pUVar5 = FBlendStackAnimPlayer::GetAnimationAsset(this);
    *(UAnimationAsset **)puVar7 = pUVar5;
    fVar8 = FBlendStackAnimPlayer::GetAccumulatedTime(this);
    *pfVar6 = fVar8;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar7);
  }
  return;
}

