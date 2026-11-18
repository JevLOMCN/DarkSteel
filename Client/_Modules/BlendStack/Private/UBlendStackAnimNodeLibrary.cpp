// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 33

// StaticClass @ 14a85baa0

UClass * __cdecl UBlendStackAnimNodeLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendStackAnimNodeLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/BlendStack",L"BlendStackAnimNodeLibrary",
               &Z_Registration_Info_UClass_UBlendStackAnimNodeLibrary.InnerSingleton,
               StaticRegisterNativesUBlendStackAnimNodeLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UBlendStackAnimNodeLibrary>,
               InternalVTableHelperCtorCaller<UBlendStackAnimNodeLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendStackAnimNodeLibrary.InnerSingleton;
}

// UBlendStackAnimNodeLibrary @ 14a862520

UBlendStackAnimNodeLibrary * __thiscall
UBlendStackAnimNodeLibrary::UBlendStackAnimNodeLibrary
          (UBlendStackAnimNodeLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlendStackAnimNodeLibrary__6B_;
  return this;
}

// UBlendStackAnimNodeLibrary @ 14a862550

UBlendStackAnimNodeLibrary * __thiscall
UBlendStackAnimNodeLibrary::UBlendStackAnimNodeLibrary
          (UBlendStackAnimNodeLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlendStackAnimNodeLibrary__6B_;
  return this;
}

// ~UBlendStackAnimNodeLibrary @ 14a862730

void __thiscall
UBlendStackAnimNodeLibrary::~UBlendStackAnimNodeLibrary(UBlendStackAnimNodeLibrary *this)

{
  *(undefined ***)this = &___7UBlendStackAnimNodeLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// BlendTo @ 14a864100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlendStackAnimNodeLibrary::BlendTo
          (FAnimUpdateContext *param_1,FBlendStackAnimNodeReference *param_2,
          UAnimationAsset *param_3,float param_4,bool param_5,bool param_6,float param_7,
          TVector<double> *param_8,float param_9,float param_10)

{
  EAnimSyncMethod EVar1;
  Type TVar2;
  FAnimNode_BlendStack *this;
  FAnimationUpdateContext *pFVar3;
  FName *pFVar4;
  undefined1 local_res18 [16];
  
  if (param_3 != (UAnimationAsset *)0x0) {
    this = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStack>((FAnimNodeReference *)param_2);
    if (this == (FAnimNode_BlendStack *)0x0) {
      if (2 < (byte)LogBlendStack._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
      }
    }
    else {
      pFVar3 = FAnimUpdateContext::GetContext(param_1);
      if (pFVar3 == (FAnimationUpdateContext *)0x0) {
        if (2 < (byte)LogBlendStack._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
        }
      }
      else {
        EVar1 = (**(code **)(this->_padding_ + 0x118))(this);
        TVar2 = (**(code **)(this->_padding_ + 0x110))(this);
        pFVar4 = (FName *)(**(code **)(this->_padding_ + 0x108))(this,local_res18);
        FAnimNode_BlendStack_Standalone::BlendTo
                  ((FAnimNode_BlendStack_Standalone *)this,pFVar3,param_3,param_4,param_5,param_6,
                   (this->MirrorDataTable).field0_0x0.DebugPtr,param_7,
                   (this->BlendProfile).field0_0x0.DebugPtr,this->BlendOption,
                   this->bUseInertialBlend,this->InertialBlendNodeTag,param_8,param_9,param_10,
                   *pFVar4,TVar2,EVar1,false);
      }
    }
  }
  return;
}

// BlendToWithSettings @ 14a8642d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlendStackAnimNodeLibrary::BlendToWithSettings
          (FAnimUpdateContext *param_1,FBlendStackAnimNodeReference *param_2,
          UAnimationAsset *param_3,float param_4,bool param_5,bool param_6,float param_7,
          UBlendProfile *param_8,EAlphaBlendOption param_9,bool param_10,TVector<double> *param_11,
          float param_12,float param_13)

{
  EAnimSyncMethod EVar1;
  Type TVar2;
  FAnimNode_BlendStack *this;
  FAnimationUpdateContext *pFVar3;
  FName *pFVar4;
  undefined1 local_res18 [16];
  
  if (param_3 != (UAnimationAsset *)0x0) {
    this = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStack>((FAnimNodeReference *)param_2);
    if (this == (FAnimNode_BlendStack *)0x0) {
      if (2 < (byte)LogBlendStack._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
      }
    }
    else {
      pFVar3 = FAnimUpdateContext::GetContext(param_1);
      if (pFVar3 == (FAnimationUpdateContext *)0x0) {
        if (2 < (byte)LogBlendStack._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
        }
      }
      else {
        EVar1 = (**(code **)(this->_padding_ + 0x118))(this);
        TVar2 = (**(code **)(this->_padding_ + 0x110))(this);
        pFVar4 = (FName *)(**(code **)(this->_padding_ + 0x108))(this,local_res18);
        FAnimNode_BlendStack_Standalone::BlendTo
                  ((FAnimNode_BlendStack_Standalone *)this,pFVar3,param_3,param_4,param_5,param_6,
                   (this->MirrorDataTable).field0_0x0.DebugPtr,param_7,param_8,param_9,param_10,
                   this->InertialBlendNodeTag,param_11,param_12,param_13,*pFVar4,TVar2,EVar1,false);
      }
    }
  }
  return;
}

// ConvertToBlendStackNode @ 14a8656d0

FBlendStackAnimNodeReference * __cdecl
UBlendStackAnimNodeLibrary::ConvertToBlendStackNode
          (FBlendStackAnimNodeReference *__return_storage_ptr__,FAnimNodeReference *param_1,
          EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_BlendStack();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack,(UObject *)pUVar3,
                           L"AnimNode_BlendStack");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14a86575b;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton)->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_2 = Succeeded;
      pUVar4 = param_1->AnimNodeStruct;
      pUVar5 = (UScriptStruct *)param_1->AnimNode;
      goto LAB_14a865763;
    }
  }
LAB_14a86575b:
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar5 = pUVar4;
LAB_14a865763:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar5;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// ForceBlendNextUpdate @ 14a865b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UBlendStackAnimNodeLibrary::ForceBlendNextUpdate(FBlendStackAnimNodeReference *param_1)

{
  FAnimNode_BlendStack *pFVar1;
  
  pFVar1 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStack>((FAnimNodeReference *)param_1);
  if (pFVar1 != (FAnimNode_BlendStack *)0x0) {
    pFVar1->bForceBlendNextUpdate = true;
    return;
  }
  if (2 < (byte)LogBlendStack._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
    return;
  }
  return;
}

// GetCurrentAsset @ 14a8666d0

/* WARNING: Enum "Type": Some values do not have unique names */

UAnimationAsset * __cdecl
UBlendStackAnimNodeLibrary::GetCurrentAsset(FBlendStackAnimNodeReference *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FAnimNode_BlendStack *pFVar1;
  UAnimationAsset *pUVar2;
  
  pFVar1 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStack>((FAnimNodeReference *)param_1);
  if (pFVar1 != (FAnimNode_BlendStack *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00014a8666ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UAnimationAsset *)(*UNRECOVERED_JUMPTABLE)(pFVar1,UNRECOVERED_JUMPTABLE);
    return pUVar2;
  }
  if (2 < (byte)LogBlendStack._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
  }
  return (UAnimationAsset *)0x0;
}

// GetCurrentAssetTime @ 14a866840

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl UBlendStackAnimNodeLibrary::GetCurrentAssetTime(FBlendStackAnimNodeReference *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FAnimNode_BlendStack *pFVar1;
  float fVar2;
  
  pFVar1 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStack>((FAnimNodeReference *)param_1);
  if (pFVar1 != (FAnimNode_BlendStack *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00014a86685f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*UNRECOVERED_JUMPTABLE)(pFVar1,UNRECOVERED_JUMPTABLE);
    return fVar2;
  }
  if (2 < (byte)LogBlendStack._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
  }
  return 0.0;
}

// GetCurrentAssetTimeRemaining @ 14a866890

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl
UBlendStackAnimNodeLibrary::GetCurrentAssetTimeRemaining(FBlendStackAnimNodeReference *param_1)

{
  code *pcVar1;
  FAnimNode_BlendStack *pFVar2;
  float fVar3;
  float fVar4;
  
  pFVar2 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStack>((FAnimNodeReference *)param_1);
  if (pFVar2 != (FAnimNode_BlendStack *)0x0) {
    pcVar1 = *(code **)(pFVar2->_padding_ + 200);
    fVar3 = (float)(**(code **)(pFVar2->_padding_ + 0xb8))(pFVar2);
    fVar4 = (float)(*pcVar1)(pFVar2);
    return fVar3 - fVar4;
  }
  if (2 < (byte)LogBlendStack._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
  }
  return 0.0;
}

// GetCurrentBlendStackAnimAsset @ 14a866910

UAnimationAsset * __cdecl
UBlendStackAnimNodeLibrary::GetCurrentBlendStackAnimAsset(FAnimNodeReference *param_1)

{
  FBlendStackAnimPlayer *this;
  FAnimNode_BlendStackInput *pFVar1;
  UAnimationAsset *pUVar2;
  
  pFVar1 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStackInput>(param_1);
  if (((pFVar1 != (FAnimNode_BlendStackInput *)0x0) &&
      (pFVar1->Player != (FBlendStackAnimPlayer **)0x0)) &&
     (this = *pFVar1->Player, this != (FBlendStackAnimPlayer *)0x0)) {
    pUVar2 = FBlendStackAnimPlayer::GetAnimationAsset(this);
    return pUVar2;
  }
  return (UAnimationAsset *)0x0;
}

// GetCurrentBlendStackAnimAssetMirrorTable @ 14a866950

UMirrorDataTable * __cdecl
UBlendStackAnimNodeLibrary::GetCurrentBlendStackAnimAssetMirrorTable(FAnimNodeReference *param_1)

{
  FBlendStackAnimPlayer *pFVar1;
  FAnimNode_BlendStackInput *pFVar2;
  UMirrorDataTable *pUVar3;
  
  pFVar2 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStackInput>(param_1);
  if (((pFVar2 != (FAnimNode_BlendStackInput *)0x0) &&
      (pFVar2->Player != (FBlendStackAnimPlayer **)0x0)) &&
     (pFVar1 = *pFVar2->Player, pFVar1 != (FBlendStackAnimPlayer *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014a86697d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar3 = (UMirrorDataTable *)(**(code **)((pFVar1->MirrorNode)._padding_ + 0xa0))();
    return pUVar3;
  }
  return (UMirrorDataTable *)0x0;
}

// GetCurrentBlendStackAnimAssetMirrored @ 14a8669a0

bool __cdecl
UBlendStackAnimNodeLibrary::GetCurrentBlendStackAnimAssetMirrored(FAnimNodeReference *param_1)

{
  FBlendStackAnimPlayer *pFVar1;
  undefined1 uVar2;
  FAnimNode_BlendStackInput *pFVar3;
  
  pFVar3 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStackInput>(param_1);
  if (((pFVar3 != (FAnimNode_BlendStackInput *)0x0) &&
      (pFVar3->Player != (FBlendStackAnimPlayer **)0x0)) &&
     (pFVar1 = *pFVar3->Player, pFVar1 != (FBlendStackAnimPlayer *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014a8669cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((pFVar1->MirrorNode)._padding_ + 0xb0))();
    return (bool)uVar2;
  }
  return false;
}

// GetCurrentBlendStackAnimAssetTime @ 14a8669f0

float __cdecl
UBlendStackAnimNodeLibrary::GetCurrentBlendStackAnimAssetTime(FAnimNodeReference *param_1)

{
  FBlendStackAnimPlayer *this;
  FAnimNode_BlendStackInput *pFVar1;
  float fVar2;
  
  pFVar1 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStackInput>(param_1);
  if (((pFVar1 != (FAnimNode_BlendStackInput *)0x0) &&
      (pFVar1->Player != (FBlendStackAnimPlayer **)0x0)) &&
     (this = *pFVar1->Player, this != (FBlendStackAnimPlayer *)0x0)) {
    fVar2 = FBlendStackAnimPlayer::GetAccumulatedTime(this);
    return fVar2;
  }
  return 0.0;
}

// GetCurrentBlendStackAnimIsActive @ 14a866a30

bool __cdecl
UBlendStackAnimNodeLibrary::GetCurrentBlendStackAnimIsActive(FAnimNodeReference *param_1)

{
  FBlendStackAnimPlayer *pFVar1;
  FAnimNode_BlendStackInput *pFVar2;
  
  pFVar2 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStackInput>(param_1);
  if (((pFVar2 != (FAnimNode_BlendStackInput *)0x0) &&
      (pFVar2->Player != (FBlendStackAnimPlayer **)0x0)) &&
     (pFVar1 = *pFVar2->Player, pFVar1 != (FBlendStackAnimPlayer *)0x0)) {
    return pFVar1->bIsActive;
  }
  return false;
}

// GetPrivateStaticClass @ 14a866bc0

UClass * __cdecl UBlendStackAnimNodeLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendStackAnimNodeLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/BlendStack",L"BlendStackAnimNodeLibrary",
               &Z_Registration_Info_UClass_UBlendStackAnimNodeLibrary.InnerSingleton,
               StaticRegisterNativesUBlendStackAnimNodeLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UBlendStackAnimNodeLibrary>,
               InternalVTableHelperCtorCaller<UBlendStackAnimNodeLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendStackAnimNodeLibrary.InnerSingleton;
}

// IsCurrentAssetLooping @ 14a867e60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UBlendStackAnimNodeLibrary::IsCurrentAssetLooping(FBlendStackAnimNodeReference *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  FAnimNode_BlendStack *pFVar2;
  
  pFVar2 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStack>((FAnimNodeReference *)param_1);
  if (pFVar2 != (FAnimNode_BlendStack *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00014a867e7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(pFVar2,UNRECOVERED_JUMPTABLE);
    return (bool)uVar1;
  }
  if (2 < (byte)LogBlendStack._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
  }
  return false;
}

// StaticRegisterNativesUBlendStackAnimNodeLibrary @ 14a8691f0

void __cdecl UBlendStackAnimNodeLibrary::StaticRegisterNativesUBlendStackAnimNodeLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_UBlendStackAnimNodeLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBlendTo @ 14a869c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UBlendStackAnimNodeLibrary::execBlendTo(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  int iVar3;
  FAnimUpdateContext *pFVar4;
  FProperty *pFVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UAnimationAsset *pUVar10;
  EAnimSyncMethod EVar11;
  Type TVar12;
  FAnimNode_BlendStack *this;
  FAnimationUpdateContext *pFVar13;
  FName *pFVar14;
  FStaticBasicLogRecord *pFVar15;
  FAnimNodeReference *this_00;
  bool bVar16;
  bool bVar17;
  int local_res20 [2];
  int local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8 [2];
  UAnimationAsset *local_e0;
  FAnimUpdateContext *local_d8;
  undefined1 local_d0 [8];
  longlong *plStack_c8;
  FAnimNodeReference local_c0;
  double local_b0;
  double dStack_a8;
  double local_a0;
  TVector<double>_u_0 local_98 [4];
  
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_d0 = (undefined1  [8])0x0;
  plStack_c8 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d0);
  }
  pFVar4 = (FAnimUpdateContext *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_d8 = (FAnimUpdateContext *)local_d0;
  if (pFVar4 != (FAnimUpdateContext *)0x0) {
    local_d8 = pFVar4;
  }
  local_c0.AnimNode = (FAnimNode_Base *)0x0;
  local_c0.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_e0 = (UAnimationAsset *)0x0;
  this_00 = &local_c0;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this_00 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_e8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar16 = local_res20[0] != 0;
  local_f8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  bVar17 = local_f8 != 0;
  local_ec = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_ec,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_ec);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_f0 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_f4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f4,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f4);
  }
  pUVar10 = local_e0;
  fVar9 = local_e8[0];
  fVar8 = local_ec;
  fVar7 = local_f0;
  fVar6 = local_f4;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98[0]._s_0.X = local_b0;
  local_98[0]._s_0.Y = dStack_a8;
  local_98[0]._s_0.Z = local_a0;
  if (local_e0 == (UAnimationAsset *)0x0) goto LAB_14a86a04d;
  this = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStack>(this_00);
  if (this == (FAnimNode_BlendStack *)0x0) {
    if ((byte)LogBlendStack._0_1_ < 3) goto LAB_14a86a04d;
    pFVar15 = &::LOG_Static;
  }
  else {
    pFVar13 = FAnimUpdateContext::GetContext(local_d8);
    if (pFVar13 != (FAnimationUpdateContext *)0x0) {
      EVar11 = (**(code **)(this->_padding_ + 0x118))(this);
      TVar12 = (**(code **)(this->_padding_ + 0x110))(this);
      pFVar14 = (FName *)(**(code **)(this->_padding_ + 0x108))(this,&local_d8);
      FAnimNode_BlendStack_Standalone::BlendTo
                ((FAnimNode_BlendStack_Standalone *)this,pFVar13,pUVar10,fVar9,bVar16,bVar17,
                 (this->MirrorDataTable).field0_0x0.DebugPtr,fVar8,
                 (this->BlendProfile).field0_0x0.DebugPtr,this->BlendOption,this->bUseInertialBlend,
                 this->InertialBlendNodeTag,(TVector<double> *)&local_98[0]._s_0,fVar7,fVar6,
                 *pFVar14,TVar12,EVar11,false);
      goto LAB_14a86a04d;
    }
    if ((byte)LogBlendStack._0_1_ < 3) goto LAB_14a86a04d;
    pFVar15 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar15,(FLogCategoryBase *)&LogBlendStack);
LAB_14a86a04d:
  if (plStack_c8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_c8 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plStack_c8 + 8))(plStack_c8,1);
    }
  }
  return;
}

// execBlendToWithSettings @ 14a86a0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlendStackAnimNodeLibrary::execBlendToWithSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  int iVar3;
  FAnimUpdateContext *pFVar4;
  FProperty *pFVar5;
  EAlphaBlendOption EVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UBlendProfile *pUVar11;
  UAnimationAsset *pUVar12;
  EAnimSyncMethod EVar13;
  Type TVar14;
  FAnimNode_BlendStack *this;
  FAnimationUpdateContext *pFVar15;
  FName *pFVar16;
  FStaticBasicLogRecord *pFVar17;
  bool bVar18;
  bool bVar19;
  EAlphaBlendOption local_res10 [16];
  bool local_res20;
  int local_114;
  int local_110;
  int local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  UBlendProfile *local_f8;
  UAnimationAsset *local_f0;
  FAnimUpdateContext *local_e8;
  undefined1 local_e0 [8];
  longlong *plStack_d8;
  FAnimNodeReference *local_d0;
  FAnimNodeReference local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  TVector<double>_u_0 local_98 [4];
  
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_e0 = (undefined1  [8])0x0;
  plStack_d8 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e0);
  }
  pFVar4 = (FAnimUpdateContext *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_e8 = (FAnimUpdateContext *)local_e0;
  if (pFVar4 != (FAnimUpdateContext *)0x0) {
    local_e8 = pFVar4;
  }
  local_c8.AnimNode = (FAnimNode_Base *)0x0;
  local_c8.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_f0 = (UAnimationAsset *)0x0;
  local_d0 = &local_c8;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    local_d0 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_fc = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_fc,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_fc);
  }
  local_114 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_114,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_114);
  }
  bVar18 = local_114 != 0;
  local_110 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  bVar19 = local_110 != 0;
  local_100 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_f8 = (UBlendProfile *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_res10[0] = Linear;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_10c = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_10c,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_10c);
  }
  local_res20 = local_10c != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_104 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_104,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_104);
  }
  local_108 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  pUVar12 = local_f0;
  pUVar11 = local_f8;
  fVar10 = local_fc;
  fVar9 = local_100;
  fVar8 = local_104;
  fVar7 = local_108;
  EVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98[0]._s_0.X = local_b8;
  local_98[0]._s_0.Y = dStack_b0;
  local_98[0]._s_0.Z = local_a8;
  if (local_f0 == (UAnimationAsset *)0x0) goto LAB_14a86a553;
  this = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStack>(local_d0);
  if (this == (FAnimNode_BlendStack *)0x0) {
    if ((byte)LogBlendStack._0_1_ < 3) goto LAB_14a86a553;
    pFVar17 = &::LOG_Static;
  }
  else {
    pFVar15 = FAnimUpdateContext::GetContext(local_e8);
    if (pFVar15 != (FAnimationUpdateContext *)0x0) {
      EVar13 = (**(code **)(this->_padding_ + 0x118))(this);
      TVar14 = (**(code **)(this->_padding_ + 0x110))(this);
      pFVar16 = (FName *)(**(code **)(this->_padding_ + 0x108))(this,&local_e8);
      FAnimNode_BlendStack_Standalone::BlendTo
                ((FAnimNode_BlendStack_Standalone *)this,pFVar15,pUVar12,fVar10,bVar18,bVar19,
                 (this->MirrorDataTable).field0_0x0.DebugPtr,fVar9,pUVar11,EVar6,local_res20,
                 this->InertialBlendNodeTag,(TVector<double> *)&local_98[0]._s_0,fVar8,fVar7,
                 *pFVar16,TVar14,EVar13,false);
      goto LAB_14a86a553;
    }
    if ((byte)LogBlendStack._0_1_ < 3) goto LAB_14a86a553;
    pFVar17 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar17,(FLogCategoryBase *)&LogBlendStack);
LAB_14a86a553:
  if (plStack_d8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_d8 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plStack_d8 + 8))(plStack_d8,1);
    }
  }
  return;
}

// execConvertToBlendStackNode @ 14a86a880

void __cdecl
UBlendStackAnimNodeLibrary::execConvertToBlendStackNode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimNodeReference *pFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FBlendStackAnimNodeReference *pFVar4;
  FAnimNodeReference *pFVar5;
  EAnimNodeReferenceConversionResult *pEVar6;
  EAnimNodeReferenceConversionResult local_res10 [8];
  FAnimNodeReference local_28;
  FBlendStackAnimNodeReference local_18;
  
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
  pFVar4 = ConvertToBlendStackNode(&local_18,pFVar5,pEVar6);
  uVar3 = *(undefined8 *)&pFVar4->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar4;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  return;
}

// execConvertToBlendStackNodePure @ 14a86a990

void __cdecl
UBlendStackAnimNodeLibrary::execConvertToBlendStackNodePure
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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_BlendStack();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack,(UObject *)pUVar7,
                           L"AnimNode_BlendStack");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14a86ab1a;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton)->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar6 = '\x01';
      uVar8 = *(undefined8 *)puVar9;
      uVar11 = *(undefined8 *)(puVar9 + 8);
      goto LAB_14a86ab1f;
    }
  }
LAB_14a86ab1a:
  uVar6 = '\0';
  uVar11 = uVar8;
LAB_14a86ab1f:
  *(undefined8 *)puVar12 = uVar8;
  *(undefined8 *)(puVar12 + 8) = uVar11;
  *puVar10 = uVar6;
  return;
}

// execForceBlendNextUpdate @ 14a86ab50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlendStackAnimNodeLibrary::execForceBlendNextUpdate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNode_BlendStack *pFVar2;
  FAnimNodeReference *this;
  FAnimNodeReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStack>(this);
  if (pFVar2 != (FAnimNode_BlendStack *)0x0) {
    pFVar2->bForceBlendNextUpdate = true;
    return;
  }
  if (2 < (byte)LogBlendStack._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
  }
  return;
}

// execGetCurrentAsset @ 14a86ac10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlendStackAnimNodeLibrary::execGetCurrentAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNode_BlendStack *pFVar2;
  undefined8 uVar3;
  FAnimNodeReference *this;
  FAnimNodeReference local_18;
  
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStack>(this);
  if (pFVar2 != (FAnimNode_BlendStack *)0x0) {
    uVar3 = (**(code **)(pFVar2->_padding_ + 0xa0))(pFVar2);
    *(undefined8 *)param_3 = uVar3;
    return;
  }
  if (2 < (byte)LogBlendStack._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetCurrentAssetTime @ 14a86acf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlendStackAnimNodeLibrary::execGetCurrentAssetTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNode_BlendStack *pFVar2;
  FAnimNodeReference *this;
  undefined4 uVar3;
  FAnimNodeReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStack>(this);
  if (pFVar2 == (FAnimNode_BlendStack *)0x0) {
    if (2 < (byte)LogBlendStack._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
    }
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(pFVar2->_padding_ + 0xc0))(pFVar2);
  }
  *(undefined4 *)param_3 = uVar3;
  return;
}

// execGetCurrentAssetTimeRemaining @ 14a86add0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlendStackAnimNodeLibrary::execGetCurrentAssetTimeRemaining
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FAnimNode_BlendStack *pFVar3;
  FAnimNodeReference *this;
  float fVar4;
  float fVar5;
  FAnimNodeReference local_28 [2];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28[0].AnimNode = (FAnimNode_Base *)0x0;
  local_28[0].AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  this = local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStack>(this);
  if (pFVar3 != (FAnimNode_BlendStack *)0x0) {
    pcVar2 = *(code **)(pFVar3->_padding_ + 200);
    fVar4 = (float)(**(code **)(pFVar3->_padding_ + 0xb8))(pFVar3);
    fVar5 = (float)(*pcVar2)(pFVar3);
    *(float *)param_3 = fVar4 - fVar5;
    return;
  }
  if (2 < (byte)LogBlendStack._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetCurrentBlendStackAnimAsset @ 14a86aee0

void __cdecl
UBlendStackAnimNodeLibrary::execGetCurrentBlendStackAnimAsset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FBlendStackAnimPlayer *this;
  FAnimNode_BlendStackInput *pFVar2;
  UAnimationAsset *pUVar3;
  FAnimNodeReference *this_00;
  FAnimNodeReference local_18;
  
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this_00 = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this_00 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStackInput>(this_00);
  if (((pFVar2 != (FAnimNode_BlendStackInput *)0x0) &&
      (pFVar2->Player != (FBlendStackAnimPlayer **)0x0)) &&
     (this = *pFVar2->Player, this != (FBlendStackAnimPlayer *)0x0)) {
    pUVar3 = FBlendStackAnimPlayer::GetAnimationAsset(this);
    *(UAnimationAsset **)param_3 = pUVar3;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetCurrentBlendStackAnimAssetMirrorTable @ 14a86afb0

void __cdecl
UBlendStackAnimNodeLibrary::execGetCurrentBlendStackAnimAssetMirrorTable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FBlendStackAnimPlayer *pFVar2;
  FAnimNode_BlendStackInput *pFVar3;
  undefined8 uVar4;
  FAnimNodeReference *this;
  FAnimNodeReference local_18;
  
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStackInput>(this);
  if (((pFVar3 != (FAnimNode_BlendStackInput *)0x0) &&
      (pFVar3->Player != (FBlendStackAnimPlayer **)0x0)) &&
     (pFVar2 = *pFVar3->Player, pFVar2 != (FBlendStackAnimPlayer *)0x0)) {
    uVar4 = (**(code **)((pFVar2->MirrorNode)._padding_ + 0xa0))();
    *(undefined8 *)param_3 = uVar4;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetCurrentBlendStackAnimAssetMirrored @ 14a86b090

void __cdecl
UBlendStackAnimNodeLibrary::execGetCurrentBlendStackAnimAssetMirrored
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FBlendStackAnimPlayer *pFVar2;
  undefined1 uVar3;
  FAnimNode_BlendStackInput *pFVar4;
  FAnimNodeReference *this;
  FAnimNodeReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStackInput>(this);
  if (((pFVar4 != (FAnimNode_BlendStackInput *)0x0) &&
      (pFVar4->Player != (FBlendStackAnimPlayer **)0x0)) &&
     (pFVar2 = *pFVar4->Player, pFVar2 != (FBlendStackAnimPlayer *)0x0)) {
    uVar3 = (**(code **)((pFVar2->MirrorNode)._padding_ + 0xb0))();
    *(undefined1 *)param_3 = uVar3;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetCurrentBlendStackAnimAssetTime @ 14a86b170

void __cdecl
UBlendStackAnimNodeLibrary::execGetCurrentBlendStackAnimAssetTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FBlendStackAnimPlayer *this;
  FAnimNode_BlendStackInput *pFVar2;
  FAnimNodeReference *this_00;
  float fVar3;
  FAnimNodeReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this_00 = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this_00 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStackInput>(this_00);
  if (((pFVar2 == (FAnimNode_BlendStackInput *)0x0) ||
      (pFVar2->Player == (FBlendStackAnimPlayer **)0x0)) ||
     (this = *pFVar2->Player, this == (FBlendStackAnimPlayer *)0x0)) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = FBlendStackAnimPlayer::GetAccumulatedTime(this);
  }
  *(float *)param_3 = fVar3;
  return;
}

// execGetCurrentBlendStackAnimIsActive @ 14a86b230

void __cdecl
UBlendStackAnimNodeLibrary::execGetCurrentBlendStackAnimIsActive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FBlendStackAnimPlayer *pFVar2;
  FAnimNode_BlendStackInput *pFVar3;
  FAnimNodeReference *this;
  FAnimNodeReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStackInput>(this);
  if (((pFVar3 != (FAnimNode_BlendStackInput *)0x0) &&
      (pFVar3->Player != (FBlendStackAnimPlayer **)0x0)) &&
     (pFVar2 = *pFVar3->Player, pFVar2 != (FBlendStackAnimPlayer *)0x0)) {
    *(bool *)param_3 = pFVar2->bIsActive;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsCurrentAssetLooping @ 14a86b490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlendStackAnimNodeLibrary::execIsCurrentAssetLooping
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FAnimNode_BlendStack *pFVar3;
  FAnimNodeReference *this;
  FAnimNodeReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_BlendStack>(this);
  if (pFVar3 != (FAnimNode_BlendStack *)0x0) {
    uVar2 = (**(code **)(pFVar3->_padding_ + 0xd0))(pFVar3);
    *(undefined1 *)param_3 = uVar2;
    return;
  }
  if (2 < (byte)LogBlendStack._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

