// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 23

// StaticClass @ 14a895bf0

UClass * __cdecl UMotionMatchingAnimNodeLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionMatchingAnimNodeLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"MotionMatchingAnimNodeLibrary",
               &Z_Registration_Info_UClass_UMotionMatchingAnimNodeLibrary.InnerSingleton,
               StaticRegisterNativesUMotionMatchingAnimNodeLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMotionMatchingAnimNodeLibrary>,
               InternalVTableHelperCtorCaller<UMotionMatchingAnimNodeLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionMatchingAnimNodeLibrary.InnerSingleton;
}

// UMotionMatchingAnimNodeLibrary @ 14a8ace60

UMotionMatchingAnimNodeLibrary * __thiscall
UMotionMatchingAnimNodeLibrary::UMotionMatchingAnimNodeLibrary
          (UMotionMatchingAnimNodeLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMotionMatchingAnimNodeLibrary__6B_;
  return this;
}

// UMotionMatchingAnimNodeLibrary @ 14a8ace90

UMotionMatchingAnimNodeLibrary * __thiscall
UMotionMatchingAnimNodeLibrary::UMotionMatchingAnimNodeLibrary
          (UMotionMatchingAnimNodeLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMotionMatchingAnimNodeLibrary__6B_;
  return this;
}

// ~UMotionMatchingAnimNodeLibrary @ 14a8ae070

void __thiscall
UMotionMatchingAnimNodeLibrary::~UMotionMatchingAnimNodeLibrary
          (UMotionMatchingAnimNodeLibrary *this)

{
  *(undefined ***)this = &___7UMotionMatchingAnimNodeLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ConvertToMotionMatchingNode @ 14a8b21f0

FMotionMatchingAnimNodeReference * __cdecl
UMotionMatchingAnimNodeLibrary::ConvertToMotionMatchingNode
          (FMotionMatchingAnimNodeReference *__return_storage_ptr__,FAnimNodeReference *param_1,
          EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar3,
                           L"AnimNode_MotionMatching");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14a8b227b;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton)->
                 _padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_2 = Succeeded;
      pUVar4 = param_1->AnimNodeStruct;
      pUVar5 = (UScriptStruct *)param_1->AnimNode;
      goto LAB_14a8b2283;
    }
  }
LAB_14a8b227b:
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar5 = pUVar4;
LAB_14a8b2283:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar5;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// GetMotionMatchingBlendSettings @ 14a8bb040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingAnimNodeLibrary::GetMotionMatchingBlendSettings
          (FMotionMatchingAnimNodeReference *param_1,FMotionMatchingBlueprintBlendSettings *param_2,
          bool *param_3)

{
  UBlendProfile *pUVar1;
  FAnimNode_MotionMatching *pFVar2;
  
  pFVar2 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatching>
                     ((FAnimNodeReference *)param_1);
  if (pFVar2 != (FAnimNode_MotionMatching *)0x0) {
    param_2->BlendOption = pFVar2->BlendOption;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (pFVar2->BlendProfile).field0_0x0.DebugPtr, pUVar1 != (UBlendProfile *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (param_2->BlendProfile).field0_0x0 = (pFVar2->BlendProfile).field0_0x0;
    param_2->BlendTime = pFVar2->BlendTime;
    param_2->bUseInertialBlend = pFVar2->bUseInertialBlend;
    return;
  }
  param_2->BlendTime = 0.2;
  (param_2->BlendProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  param_2->BlendOption = HermiteCubic;
  param_2->bUseInertialBlend = false;
  if (2 < (byte)LogPoseSearch._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
  }
  return;
}

// GetMotionMatchingSearchResult @ 14a8bb0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingAnimNodeLibrary::GetMotionMatchingSearchResult
          (FMotionMatchingAnimNodeReference *param_1,FPoseSearchBlueprintResult *param_2,
          bool *param_3)

{
  FPoseSearchBlueprintResult *pFVar1;
  FAnimNode_MotionMatching *pFVar2;
  TObjectPtr<UObject>_u_0 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined1 local_79;
  undefined8 local_78;
  double local_70;
  double dStack_68;
  double local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 local_4b;
  undefined1 local_49;
  FName local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  pFVar2 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatching>
                     ((FAnimNodeReference *)param_1);
  if (pFVar2 == (FAnimNode_MotionMatching *)0x0) {
    local_7b = 0;
    local_79 = 0;
    local_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_4b = 0;
    local_49 = 0;
    local_80 = 0;
    local_7c = 0;
    local_4c = 0;
    local_88.DebugPtr = (UObject *)0x0;
    local_58 = 0;
    local_40 = (void *)0x0;
    local_38 = 0;
    local_30 = (void *)0x0;
    local_28 = 0;
    local_20 = (void *)0x0;
    local_18 = 0;
    local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_78 = 0x3f800000;
    local_50 = 0x7f7fffff;
    local_48 = UE::PoseSearch::DefaultRole;
    FPoseSearchBlueprintResult::operator=(param_2,(FPoseSearchBlueprintResult *)&local_88.ObjectPtr)
    ;
    if (local_20 != (void *)0x0) {
      FMemory::Free(local_20);
    }
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
    if (local_40 != (void *)0x0) {
      FMemory::Free(local_40);
    }
    *param_3 = false;
    if (2 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else {
    pFVar1 = &(pFVar2->MotionMatchingState).SearchResult;
    FPoseSearchBlueprintResult::operator=(param_2,pFVar1);
    *param_3 = (pFVar1->SelectedAnim).field0_0x0.DebugPtr != (UObject *)0x0;
  }
  return;
}

// GetPrivateStaticClass @ 14a8bcf10

UClass * __cdecl UMotionMatchingAnimNodeLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionMatchingAnimNodeLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"MotionMatchingAnimNodeLibrary",
               &Z_Registration_Info_UClass_UMotionMatchingAnimNodeLibrary.InnerSingleton,
               StaticRegisterNativesUMotionMatchingAnimNodeLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMotionMatchingAnimNodeLibrary>,
               InternalVTableHelperCtorCaller<UMotionMatchingAnimNodeLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionMatchingAnimNodeLibrary.InnerSingleton;
}

// OverrideMotionMatchingBlendSettings @ 14a8c1cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingAnimNodeLibrary::OverrideMotionMatchingBlendSettings
          (FMotionMatchingAnimNodeReference *param_1,FMotionMatchingBlueprintBlendSettings *param_2,
          bool *param_3)

{
  UBlendProfile *pUVar1;
  FAnimNode_MotionMatching *pFVar2;
  
  pFVar2 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatching>
                     ((FAnimNodeReference *)param_1);
  if (pFVar2 != (FAnimNode_MotionMatching *)0x0) {
    pFVar2->BlendOption = param_2->BlendOption;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (param_2->BlendProfile).field0_0x0.DebugPtr, pUVar1 != (UBlendProfile *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (pFVar2->BlendProfile).field0_0x0 = (param_2->BlendProfile).field0_0x0;
    pFVar2->BlendTime = param_2->BlendTime;
    pFVar2->bUseInertialBlend = param_2->bUseInertialBlend;
    return;
  }
  if (2 < (byte)LogPoseSearch._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
  }
  return;
}

// ResetDatabasesToSearch @ 14a8c5580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingAnimNodeLibrary::ResetDatabasesToSearch
          (FMotionMatchingAnimNodeReference *param_1,EPoseSearchInterruptMode param_2)

{
  FAnimNode_MotionMatching *pFVar1;
  
  pFVar1 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatching>
                     ((FAnimNodeReference *)param_1);
  if (pFVar1 != (FAnimNode_MotionMatching *)0x0) {
    (pFVar1->DatabasesToSearch).ArrayNum = 0;
    if ((pFVar1->DatabasesToSearch).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(pFVar1->DatabasesToSearch).AllocatorInstance,0,
                 &(pFVar1->DatabasesToSearch).ArrayMax);
    }
    pFVar1->bOverrideDatabaseInput = false;
    pFVar1->NextUpdateInterruptMode = param_2;
    return;
  }
  if (2 < (byte)LogPoseSearch._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
  }
  return;
}

// SetDatabaseToSearch @ 14a8cd430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingAnimNodeLibrary::SetDatabaseToSearch
          (FMotionMatchingAnimNodeReference *param_1,UPoseSearchDatabase *param_2,
          EPoseSearchInterruptMode param_3)

{
  FAnimNode_MotionMatching *this;
  UPoseSearchDatabase *local_res20;
  TArrayView<UPoseSearchDatabase_*_const,int> local_18;
  
  this = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatching>((FAnimNodeReference *)param_1)
  ;
  if (this != (FAnimNode_MotionMatching *)0x0) {
    local_18.ArrayNum = 1;
    local_18.DataPtr = &local_res20;
    local_res20 = param_2;
    FAnimNode_MotionMatching::SetDatabasesToSearch(this,&local_18,param_3);
    return;
  }
  if (2 < (byte)LogPoseSearch._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
  }
  return;
}

// SetDatabasesToSearch @ 14a8cd5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingAnimNodeLibrary::SetDatabasesToSearch
          (FMotionMatchingAnimNodeReference *param_1,
          TArray<UPoseSearchDatabase_*,TSizedDefaultAllocator<32>_> *param_2,
          EPoseSearchInterruptMode param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnimNode_MotionMatching *this;
  undefined4 uStack_1c;
  TArrayView<UPoseSearchDatabase_*_const,int> local_18;
  
  this = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatching>((FAnimNodeReference *)param_1)
  ;
  if (this == (FAnimNode_MotionMatching *)0x0) {
    if (2 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = (UPoseSearchDatabase **)pFVar2;
  FAnimNode_MotionMatching::SetDatabasesToSearch(this,&local_18,param_3);
  return;
}

// SetInterruptMode @ 14a8cd670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingAnimNodeLibrary::SetInterruptMode
          (FMotionMatchingAnimNodeReference *param_1,EPoseSearchInterruptMode param_2)

{
  FAnimNode_MotionMatching *pFVar1;
  
  pFVar1 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatching>
                     ((FAnimNodeReference *)param_1);
  if (pFVar1 != (FAnimNode_MotionMatching *)0x0) {
    pFVar1->NextUpdateInterruptMode = param_2;
    return;
  }
  if (2 < (byte)LogPoseSearch._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    return;
  }
  return;
}

// StaticRegisterNativesUMotionMatchingAnimNodeLibrary @ 14a8ce2d0

void __cdecl
UMotionMatchingAnimNodeLibrary::StaticRegisterNativesUMotionMatchingAnimNodeLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertToMotionMatchingNode @ 14a8d2a60

void __cdecl
UMotionMatchingAnimNodeLibrary::execConvertToMotionMatchingNode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimNodeReference *pFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FMotionMatchingAnimNodeReference *pFVar4;
  FAnimNodeReference *pFVar5;
  EAnimNodeReferenceConversionResult *pEVar6;
  EAnimNodeReferenceConversionResult local_res10 [8];
  FAnimNodeReference local_28;
  FMotionMatchingAnimNodeReference local_18;
  
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
  pFVar4 = ConvertToMotionMatchingNode(&local_18,pFVar5,pEVar6);
  uVar3 = *(undefined8 *)&pFVar4->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar4;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  return;
}

// execConvertToMotionMatchingNodePure @ 14a8d2b70

void __cdecl
UMotionMatchingAnimNodeLibrary::execConvertToMotionMatchingNodePure
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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching,(UObject *)pUVar7,
                           L"AnimNode_MotionMatching");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14a8d2cfa;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatching.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar6 = '\x01';
      uVar8 = *(undefined8 *)puVar9;
      uVar11 = *(undefined8 *)(puVar9 + 8);
      goto LAB_14a8d2cff;
    }
  }
LAB_14a8d2cfa:
  uVar6 = '\0';
  uVar11 = uVar8;
LAB_14a8d2cff:
  *(undefined8 *)puVar12 = uVar8;
  *(undefined8 *)(puVar12 + 8) = uVar11;
  *puVar10 = uVar6;
  return;
}

// execGetMotionMatchingBlendSettings @ 14a8d3270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingAnimNodeLibrary::execGetMotionMatchingBlendSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float *pfVar1;
  FProperty *pFVar2;
  UBlendProfile *pUVar3;
  FAnimNode_MotionMatching *pFVar4;
  FAnimNodeReference *this;
  float *pfVar5;
  undefined1 local_res10 [8];
  FAnimNodeReference local_38;
  float local_28 [2];
  undefined8 local_20;
  undefined2 local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_38.AnimNode = (FAnimNode_Base *)0x0;
  local_38.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28[0] = 0.2;
  local_20 = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_18 = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  pfVar1 = (float *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar5 = local_28;
  if (pfVar1 != (float *)0x0) {
    pfVar5 = pfVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatching>(this);
  if (pFVar4 == (FAnimNode_MotionMatching *)0x0) {
    *pfVar5 = 0.2;
    pfVar5[2] = 0.0;
    pfVar5[3] = 0.0;
    *(undefined2 *)(pfVar5 + 4) = 2;
    if (2 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else {
    *(EAlphaBlendOption *)(pfVar5 + 4) = pFVar4->BlendOption;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = (pFVar4->BlendProfile).field0_0x0.DebugPtr, pUVar3 != (UBlendProfile *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    *(TObjectPtr<UBlendProfile>_u_0 *)(pfVar5 + 2) = (pFVar4->BlendProfile).field0_0x0;
    *pfVar5 = pFVar4->BlendTime;
    *(bool *)((longlong)pfVar5 + 0x11) = pFVar4->bUseInertialBlend;
  }
  return;
}

// execGetMotionMatchingSearchResult @ 14a8d3430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingAnimNodeLibrary::execGetMotionMatchingSearchResult
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FPoseSearchBlueprintResult *pFVar1;
  TObjectPtr<UObject>_u_0 *pTVar2;
  FProperty *pFVar3;
  FAnimNode_MotionMatching *pFVar4;
  TObjectPtr<UObject>_u_0 *this;
  uchar *puVar5;
  FAnimNodeReference *this_00;
  uchar local_res10 [8];
  FAnimNodeReference local_128;
  TObjectPtr<UObject>_u_0 local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined2 local_10b;
  undefined1 local_109;
  undefined8 local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined2 local_db;
  undefined1 local_d9;
  FName local_d8;
  void *local_d0;
  undefined8 local_c8;
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  TObjectPtr<UObject>_u_0 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  double local_80;
  double dStack_78;
  double local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  FName local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_128.AnimNode = (FAnimNode_Base *)0x0;
  local_128.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_98.DebugPtr = (UObject *)0x0;
  local_90 = 0;
  this_00 = &local_128;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this_00 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_8c = 0;
  local_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_58 = UE::PoseSearch::DefaultRole;
  local_88 = 0x3f800000;
  local_84 = 0;
  local_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_68 = 0;
  local_60 = 0x7f7fffff;
  local_5c = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar2 = (TObjectPtr<UObject>_u_0 *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_98;
  if (pTVar2 != (TObjectPtr<UObject>_u_0 *)0x0) {
    this = pTVar2;
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
  puVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatching>(this_00);
  if (pFVar4 == (FAnimNode_MotionMatching *)0x0) {
    local_10b = 0;
    local_109 = 0;
    local_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_db = 0;
    local_d9 = 0;
    local_110 = 0;
    local_10c = 0;
    local_dc = 0;
    local_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_108 = 0x3f800000;
    local_118.DebugPtr = (UObject *)0x0;
    local_e8 = 0;
    local_e0 = 0x7f7fffff;
    local_d8 = UE::PoseSearch::DefaultRole;
    local_d0 = (void *)0x0;
    local_c8 = 0;
    local_c0 = (void *)0x0;
    local_b8 = 0;
    local_b0 = (void *)0x0;
    local_a8 = 0;
    FPoseSearchBlueprintResult::operator=
              ((FPoseSearchBlueprintResult *)&this->ObjectPtr,
               (FPoseSearchBlueprintResult *)&local_118.ObjectPtr);
    if (local_b0 != (void *)0x0) {
      FMemory::Free(local_b0);
    }
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
    }
    if (local_d0 != (void *)0x0) {
      FMemory::Free(local_d0);
    }
    *puVar5 = '\0';
    if (2 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else {
    pFVar1 = &(pFVar4->MotionMatchingState).SearchResult;
    FPoseSearchBlueprintResult::operator=((FPoseSearchBlueprintResult *)&this->ObjectPtr,pFVar1);
    *puVar5 = (pFVar1->SelectedAnim).field0_0x0.DebugPtr != (UObject *)0x0;
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execOverrideMotionMatchingBlendSettings @ 14a8d3b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingAnimNodeLibrary::execOverrideMotionMatchingBlendSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float *pfVar1;
  FProperty *pFVar2;
  FAnimNode_MotionMatching *pFVar3;
  FAnimNodeReference *this;
  float *pfVar4;
  undefined1 local_res10 [8];
  FAnimNodeReference local_38;
  float local_28 [2];
  undefined8 local_20;
  undefined2 local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_38.AnimNode = (FAnimNode_Base *)0x0;
  local_38.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28[0] = 0.2;
  local_20 = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_18 = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  pfVar1 = (float *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar4 = local_28;
  if (pfVar1 != (float *)0x0) {
    pfVar4 = pfVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatching>(this);
  if (pFVar3 == (FAnimNode_MotionMatching *)0x0) {
    if (2 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else {
    pFVar3->BlendOption = *(EAlphaBlendOption *)(pfVar4 + 4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)(pfVar4 + 2) != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)(pfVar4 + 2));
    }
    (pFVar3->BlendProfile).field0_0x0 = *(TObjectPtr<UBlendProfile>_u_0 *)(pfVar4 + 2);
    pFVar3->BlendTime = *pfVar4;
    pFVar3->bUseInertialBlend = *(bool *)((longlong)pfVar4 + 0x11);
  }
  return;
}

// execResetDatabasesToSearch @ 14a8d3e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingAnimNodeLibrary::execResetDatabasesToSearch
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EPoseSearchInterruptMode EVar2;
  FAnimNode_MotionMatching *pFVar3;
  FAnimNodeReference *this;
  EPoseSearchInterruptMode local_res10 [8];
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
  local_res10[0] = DoNotInterrupt;
  this = &local_18;
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
  EVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatching>(this);
  if (pFVar3 == (FAnimNode_MotionMatching *)0x0) {
    if (2 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else {
    (pFVar3->DatabasesToSearch).ArrayNum = 0;
    if ((pFVar3->DatabasesToSearch).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(pFVar3->DatabasesToSearch).AllocatorInstance,0,
                 &(pFVar3->DatabasesToSearch).ArrayMax);
    }
    pFVar3->bOverrideDatabaseInput = false;
    pFVar3->NextUpdateInterruptMode = EVar2;
  }
  return;
}

// execSetDatabaseToSearch @ 14a8d4990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingAnimNodeLibrary::execSetDatabaseToSearch
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EPoseSearchInterruptMode EVar2;
  UPoseSearchDatabase *pUVar3;
  FAnimNode_MotionMatching *this;
  FAnimNodeReference *this_00;
  EPoseSearchInterruptMode local_res10 [8];
  UPoseSearchDatabase *local_res20;
  UPoseSearchDatabase *local_38;
  FAnimNodeReference local_30;
  TArrayView<UPoseSearchDatabase_*_const,int> local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_30.AnimNode = (FAnimNode_Base *)0x0;
  local_30.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res20 = (UPoseSearchDatabase *)0x0;
  this_00 = &local_30;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this_00 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = DoNotInterrupt;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_res20;
  EVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatching>(this_00);
  if (this != (FAnimNode_MotionMatching *)0x0) {
    local_18.ArrayNum = 1;
    local_18.DataPtr = &local_38;
    local_38 = pUVar3;
    FAnimNode_MotionMatching::SetDatabasesToSearch(this,&local_18,EVar2);
    return;
  }
  if (2 < (byte)LogPoseSearch._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
  }
  return;
}

// execSetDatabasesToSearch @ 14a8d4b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingAnimNodeLibrary::execSetDatabasesToSearch
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  EPoseSearchInterruptMode EVar4;
  bool bVar5;
  FAnimNode_MotionMatching *this;
  void **ppvVar6;
  FAnimNodeReference *this_00;
  EPoseSearchInterruptMode local_res10 [8];
  void *local_58;
  undefined8 local_50;
  FAnimNodeReference local_48;
  UPoseSearchDatabase **local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<UPoseSearchDatabase_*_const,int> local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_48.AnimNode = (FAnimNode_Base *)0x0;
  local_48.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  this_00 = &local_48;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this_00 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = DoNotInterrupt;
  ppvVar6 = &local_58;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  EVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatching>(this_00);
  if (this == (FAnimNode_MotionMatching *)0x0) {
    if (2 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else {
    local_38 = *ppvVar6;
    iVar1 = *(int *)(ppvVar6 + 1);
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = iVar1;
    local_28.DataPtr = local_38;
    iStack_30 = iVar1;
    FAnimNode_MotionMatching::SetDatabasesToSearch(this,&local_28,EVar4);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execSetInterruptMode @ 14a8d4d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMotionMatchingAnimNodeLibrary::execSetInterruptMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EPoseSearchInterruptMode EVar2;
  FAnimNode_MotionMatching *pFVar3;
  FAnimNodeReference *this;
  EPoseSearchInterruptMode local_res10 [8];
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
  local_res10[0] = DoNotInterrupt;
  this = &local_18;
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
  EVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_MotionMatching>(this);
  if (pFVar3 != (FAnimNode_MotionMatching *)0x0) {
    pFVar3->NextUpdateInterruptMode = EVar2;
    return;
  }
  if (2 < (byte)LogPoseSearch._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
  }
  return;
}

