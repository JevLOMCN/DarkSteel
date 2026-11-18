// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 13

// StaticClass @ 14a896ea0

UClass * __cdecl UMotionMatchingInteractionAnimNodeLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionMatchingInteractionAnimNodeLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"MotionMatchingInteractionAnimNodeLibrary",
               &Z_Registration_Info_UClass_UMotionMatchingInteractionAnimNodeLibrary.InnerSingleton,
               StaticRegisterNativesUMotionMatchingInteractionAnimNodeLibrary,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionMatchingInteractionAnimNodeLibrary>,
               InternalVTableHelperCtorCaller<UMotionMatchingInteractionAnimNodeLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionMatchingInteractionAnimNodeLibrary.InnerSingleton;
}

// UMotionMatchingInteractionAnimNodeLibrary @ 14a8acec0

UMotionMatchingInteractionAnimNodeLibrary * __thiscall
UMotionMatchingInteractionAnimNodeLibrary::UMotionMatchingInteractionAnimNodeLibrary
          (UMotionMatchingInteractionAnimNodeLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMotionMatchingInteractionAnimNodeLibrary__6B_;
  return this;
}

// UMotionMatchingInteractionAnimNodeLibrary @ 14a8acef0

UMotionMatchingInteractionAnimNodeLibrary * __thiscall
UMotionMatchingInteractionAnimNodeLibrary::UMotionMatchingInteractionAnimNodeLibrary
          (UMotionMatchingInteractionAnimNodeLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMotionMatchingInteractionAnimNodeLibrary__6B_;
  return this;
}

// ~UMotionMatchingInteractionAnimNodeLibrary @ 14a8ae090

void __thiscall
UMotionMatchingInteractionAnimNodeLibrary::~UMotionMatchingInteractionAnimNodeLibrary
          (UMotionMatchingInteractionAnimNodeLibrary *this)

{
  *(undefined ***)this = &___7UMotionMatchingInteractionAnimNodeLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ConvertToMotionMatchingInteractionNode @ 14a8b2130

FMotionMatchingInteractionAnimNodeReference * __cdecl
UMotionMatchingInteractionAnimNodeLibrary::ConvertToMotionMatchingInteractionNode
          (FMotionMatchingInteractionAnimNodeReference *__return_storage_ptr__,
          FAnimNodeReference *param_1,EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatchingInteraction,
                           (UObject *)pUVar3,L"AnimNode_MotionMatchingInteraction");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14a8b21bb;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.
                 OuterSingleton)->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.OuterSingleton)->
         _padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_2 = Succeeded;
      pUVar4 = param_1->AnimNodeStruct;
      pUVar5 = (UScriptStruct *)param_1->AnimNode;
      goto LAB_14a8b21c3;
    }
  }
LAB_14a8b21bb:
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar5 = pUVar4;
LAB_14a8b21c3:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar5;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a8bcfd0

UClass * __cdecl UMotionMatchingInteractionAnimNodeLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionMatchingInteractionAnimNodeLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"MotionMatchingInteractionAnimNodeLibrary",
               &Z_Registration_Info_UClass_UMotionMatchingInteractionAnimNodeLibrary.InnerSingleton,
               StaticRegisterNativesUMotionMatchingInteractionAnimNodeLibrary,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionMatchingInteractionAnimNodeLibrary>,
               InternalVTableHelperCtorCaller<UMotionMatchingInteractionAnimNodeLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionMatchingInteractionAnimNodeLibrary.InnerSingleton;
}

// IsInteracting @ 14a8c0ce0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UMotionMatchingInteractionAnimNodeLibrary::IsInteracting
          (FMotionMatchingInteractionAnimNodeReference *param_1)

{
  FAnimNode_MotionMatchingInteraction *pFVar1;
  
  pFVar1 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatchingInteraction>
                     ((FAnimNodeReference *)param_1);
  if (pFVar1 != (FAnimNode_MotionMatchingInteraction *)0x0) {
    return (pFVar1->CurrentResult).bIsInteraction;
  }
  if (2 < (byte)LogPoseSearch._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
  }
  return false;
}

// SetAvailabilities @ 14a8cd320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingInteractionAnimNodeLibrary::SetAvailabilities
          (FMotionMatchingInteractionAnimNodeReference *param_1,
          TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_> *param_2)

{
  FAnimNode_MotionMatchingInteraction *pFVar1;
  
  pFVar1 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatchingInteraction>
                     ((FAnimNodeReference *)param_1);
  if (pFVar1 != (FAnimNode_MotionMatchingInteraction *)0x0) {
    TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_>::operator=
              (&pFVar1->Availabilities,param_2);
    return;
  }
  if (2 < (byte)LogPoseSearch._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    return;
  }
  return;
}

// StaticRegisterNativesUMotionMatchingInteractionAnimNodeLibrary @ 14a8ce310

void __cdecl
UMotionMatchingInteractionAnimNodeLibrary::
StaticRegisterNativesUMotionMatchingInteractionAnimNodeLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMotionMatchingInteractionAnimNodeLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertToMotionMatchingInteractionNode @ 14a8d2790

void __cdecl
UMotionMatchingInteractionAnimNodeLibrary::execConvertToMotionMatchingInteractionNode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimNodeReference *pFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FMotionMatchingInteractionAnimNodeReference *pFVar4;
  FAnimNodeReference *pFVar5;
  EAnimNodeReferenceConversionResult *pEVar6;
  EAnimNodeReferenceConversionResult local_res10 [8];
  FAnimNodeReference local_28;
  FMotionMatchingInteractionAnimNodeReference local_18;
  
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
  pFVar4 = ConvertToMotionMatchingInteractionNode(&local_18,pFVar5,pEVar6);
  uVar3 = *(undefined8 *)&pFVar4->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar4;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  return;
}

// execConvertToMotionMatchingInteractionNodePure @ 14a8d28a0

void __cdecl
UMotionMatchingInteractionAnimNodeLibrary::execConvertToMotionMatchingInteractionNodePure
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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatchingInteraction,
                           (UObject *)pUVar7,L"AnimNode_MotionMatchingInteraction");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14a8d2a2a;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.
                 OuterSingleton)->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.OuterSingleton)->
         _padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar6 = '\x01';
      uVar8 = *(undefined8 *)puVar9;
      uVar11 = *(undefined8 *)(puVar9 + 8);
      goto LAB_14a8d2a2f;
    }
  }
LAB_14a8d2a2a:
  uVar6 = '\0';
  uVar11 = uVar8;
LAB_14a8d2a2f:
  *(undefined8 *)puVar12 = uVar8;
  *(undefined8 *)(puVar12 + 8) = uVar11;
  *puVar10 = uVar6;
  return;
}

// execIsInteracting @ 14a8d3a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingInteractionAnimNodeLibrary::execIsInteracting
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNode_MotionMatchingInteraction *pFVar2;
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
  pFVar2 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatchingInteraction>(this);
  if (pFVar2 != (FAnimNode_MotionMatchingInteraction *)0x0) {
    *(bool *)param_3 = (pFVar2->CurrentResult).bIsInteraction;
    return;
  }
  if (2 < (byte)LogPoseSearch._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetAvailabilities @ 14a8d4840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingInteractionAnimNodeLibrary::execSetAvailabilities
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNode_MotionMatchingInteraction *pFVar2;
  FAnimNodeReference *this;
  TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_> local_28;
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
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  this = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
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
  pTVar3 = &local_28;
  if ((TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatchingInteraction>(this);
  if (pFVar2 == (FAnimNode_MotionMatchingInteraction *)0x0) {
    if (2 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else {
    TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_>::operator=
              (&pFVar2->Availabilities,pTVar3);
  }
  DestructItems<FPoseSearchInteractionAvailability,int>
            ((FPoseSearchInteractionAvailability *)local_28.AllocatorInstance.Data,local_28.ArrayNum
            );
  if ((FPoseSearchInteractionAvailability *)local_28.AllocatorInstance.Data !=
      (FPoseSearchInteractionAvailability *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

