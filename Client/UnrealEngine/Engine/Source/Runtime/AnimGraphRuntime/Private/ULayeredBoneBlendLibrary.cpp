// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 14

// StaticClass @ 1463d4170

UClass * __cdecl ULayeredBoneBlendLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULayeredBoneBlendLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"LayeredBoneBlendLibrary",
               &Z_Registration_Info_UClass_ULayeredBoneBlendLibrary.InnerSingleton,
               StaticRegisterNativesULayeredBoneBlendLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULayeredBoneBlendLibrary>,
               InternalVTableHelperCtorCaller<ULayeredBoneBlendLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULayeredBoneBlendLibrary.InnerSingleton;
}

// ULayeredBoneBlendLibrary @ 1464079a0

ULayeredBoneBlendLibrary * __thiscall
ULayeredBoneBlendLibrary::ULayeredBoneBlendLibrary
          (ULayeredBoneBlendLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULayeredBoneBlendLibrary__6B_;
  return this;
}

// ULayeredBoneBlendLibrary @ 1464079d0

ULayeredBoneBlendLibrary * __thiscall
ULayeredBoneBlendLibrary::ULayeredBoneBlendLibrary
          (ULayeredBoneBlendLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULayeredBoneBlendLibrary__6B_;
  return this;
}

// ~ULayeredBoneBlendLibrary @ 146409790

void __thiscall ULayeredBoneBlendLibrary::~ULayeredBoneBlendLibrary(ULayeredBoneBlendLibrary *this)

{
  *(undefined ***)this = &___7ULayeredBoneBlendLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14640e7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`ULayeredBoneBlendLibrary::SetBlendMask'::__l2::<lambda_1>::operator()
          (void *this,FAnimNode_LayeredBoneBlend *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FAnimationUpdateContext *pFVar6;
  USkeleton *this_00;
  UBlendProfile *pUVar7;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar6 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)this);
  if (pFVar6 == (FAnimationUpdateContext *)0x0) {
    if ((byte)LogAnimation._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    return;
  }
  this_00 = FAnimInstanceProxy::GetSkeleton((FAnimInstanceProxy *)pFVar6->_padding_);
  if (this_00 == (USkeleton *)0x0) {
    if ((byte)LogAnimation._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    return;
  }
  if (param_1->BlendMode != BlendMask) {
    if ((byte)LogAnimation._0_1_ < 3) {
      return;
    }
    ::FName::ToString((FName *)((longlong)this + 0xc),&local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
    return;
  }
  if ((*(int *)((longlong)this + 8) < 0) ||
     ((param_1->BlendPoses).ArrayNum <= *(int *)((longlong)this + 8))) {
    if ((byte)LogAnimation._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    return;
  }
  pUVar7 = USkeleton::GetBlendProfile(this_00,(FName *)((longlong)this + 0xc));
  if (pUVar7 == (UBlendProfile *)0x0) {
    if ((byte)LogAnimation._0_1_ < 3) {
      return;
    }
    ::FName::ToString((FName *)((longlong)this + 0xc),&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
LAB_14640e95f:
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return;
  }
  if (pUVar7->Mode != BlendMask) {
    if ((byte)LogAnimation._0_1_ < 3) {
      return;
    }
    ::FName::ToString((FName *)((longlong)this + 0xc),&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    goto LAB_14640e95f;
  }
  uVar1 = *(uint *)((longlong)this + 8);
  if ((param_1->BlendMode != BlendMask) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlendMode == ELayeredBoneBlendMode::BlendMask",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_LayeredBoneBlend.cpp"
                         ,0x136,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((int)uVar1 < 0) || ((param_1->BlendPoses).ArrayNum <= (int)uVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlendPoses.IsValidIndex(InPoseIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_LayeredBoneBlend.cpp"
                       ,0x137,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (-1 < (int)uVar1) goto LAB_14640ea40;
  }
  else {
LAB_14640ea40:
    if ((int)uVar1 < (param_1->BlendMasks).ArrayNum) goto LAB_14640ea67;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("BlendMasks.IsValidIndex(InPoseIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_LayeredBoneBlend.cpp"
                     ,0x138,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14640ea67:
  uVar5 = 0;
  if ((int)uVar1 < (param_1->BlendMasks).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_1->BlendMasks).AllocatorInstance.Data;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(UBlendProfile **)(pFVar2 + (longlong)(int)uVar1 * 8) = pUVar7;
  (param_1->SkeletonGuid).A = 0;
  (param_1->SkeletonGuid).B = 0;
  (param_1->SkeletonGuid).C = 0;
  (param_1->SkeletonGuid).D = 0;
  param_1->RequiredBonesSerialNumber = 0;
  (param_1->VirtualBoneGuid).A = 0;
  (param_1->VirtualBoneGuid).B = 0;
  (param_1->VirtualBoneGuid).C = 0;
  (param_1->VirtualBoneGuid).D = 0;
  return;
}

// ConvertToLayeredBoneBlend @ 146421b70

FLayeredBoneBlendReference * __cdecl
ULayeredBoneBlendLibrary::ConvertToLayeredBoneBlend
          (FLayeredBoneBlendReference *__return_storage_ptr__,FAnimNodeReference *param_1,
          EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend,(UObject *)pUVar3,
                           L"AnimNode_LayeredBoneBlend");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_146421bfb;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton)->
                 _padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton)->_padding_))
    {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_2 = Succeeded;
      pUVar4 = param_1->AnimNodeStruct;
      pUVar5 = (UScriptStruct *)param_1->AnimNode;
      goto LAB_146421c03;
    }
  }
LAB_146421bfb:
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar5 = pUVar4;
LAB_146421c03:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar5;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// GetNumPoses @ 14644beb0

int __cdecl ULayeredBoneBlendLibrary::GetNumPoses(FLayeredBoneBlendReference *param_1)

{
  int local_res10 [2];
  int *local_res18 [2];
  code *local_18;
  undefined4 **local_10;
  
  local_res18[0] = local_res10;
  local_res10[0] = 0;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`ULayeredBoneBlendLibrary::GetNumPoses'::__l2::<lambda_1>,void,FAnimNode_LayeredBoneBlend_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_LayeredBoneBlend>
            ((FAnimNodeReference *)param_1,L"GetNumPoses",
             (TFunctionRef<void___cdecl(FAnimNode_LayeredBoneBlend_&)> *)&local_18);
  return local_res10[0];
}

// GetPrivateStaticClass @ 14644d360

UClass * __cdecl ULayeredBoneBlendLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULayeredBoneBlendLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"LayeredBoneBlendLibrary",
               &Z_Registration_Info_UClass_ULayeredBoneBlendLibrary.InnerSingleton,
               StaticRegisterNativesULayeredBoneBlendLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULayeredBoneBlendLibrary>,
               InternalVTableHelperCtorCaller<ULayeredBoneBlendLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULayeredBoneBlendLibrary.InnerSingleton;
}

// SetBlendMask @ 146467f00

FLayeredBoneBlendReference * __cdecl
ULayeredBoneBlendLibrary::SetBlendMask
          (FLayeredBoneBlendReference *__return_storage_ptr__,FAnimUpdateContext *param_1,
          FLayeredBoneBlendReference *param_2,int param_3,FName param_4)

{
  undefined8 uVar1;
  code *local_38;
  FAnimUpdateContext **local_30;
  FAnimUpdateContext *local_28;
  int local_20;
  FName local_1c;
  
  local_1c = param_4;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`ULayeredBoneBlendLibrary::SetBlendMask'::__l2::<lambda_1>,void,FAnimNode_LayeredBoneBlend_&>
             ::Call;
  local_28 = param_1;
  local_20 = param_3;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_LayeredBoneBlend>
            ((FAnimNodeReference *)param_2,L"SetBlendMask",
             (TFunctionRef<void___cdecl(FAnimNode_LayeredBoneBlend_&)> *)&local_38);
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_2;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesULayeredBoneBlendLibrary @ 14646e6d0

void __cdecl ULayeredBoneBlendLibrary::StaticRegisterNativesULayeredBoneBlendLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertToLayeredBlendPerBonePure @ 14647f130

void __cdecl
ULayeredBoneBlendLibrary::execConvertToLayeredBlendPerBonePure
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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend,(UObject *)pUVar7,
                           L"AnimNode_LayeredBoneBlend");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14647f2ba;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton)->_padding_))
    {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar6 = '\x01';
      uVar8 = *(undefined8 *)puVar9;
      uVar11 = *(undefined8 *)(puVar9 + 8);
      goto LAB_14647f2bf;
    }
  }
LAB_14647f2ba:
  uVar6 = '\0';
  uVar11 = uVar8;
LAB_14647f2bf:
  *(undefined8 *)puVar12 = uVar8;
  *(undefined8 *)(puVar12 + 8) = uVar11;
  *puVar10 = uVar6;
  return;
}

// execConvertToLayeredBoneBlend @ 14647f2f0

void __cdecl
ULayeredBoneBlendLibrary::execConvertToLayeredBoneBlend
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimNodeReference *pFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FLayeredBoneBlendReference *pFVar4;
  FAnimNodeReference *pFVar5;
  EAnimNodeReferenceConversionResult *pEVar6;
  EAnimNodeReferenceConversionResult local_res10 [8];
  FAnimNodeReference local_28;
  FLayeredBoneBlendReference local_18;
  
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
  pFVar4 = ConvertToLayeredBoneBlend(&local_18,pFVar5,pEVar6);
  uVar3 = *(undefined8 *)&pFVar4->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar4;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  return;
}

// execGetNumPoses @ 1464821c0

void __cdecl
ULayeredBoneBlendLibrary::execGetNumPoses(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined4 local_res10 [2];
  undefined4 *local_res18 [2];
  FAnimNodeReference local_28;
  code *local_18;
  undefined4 **local_10;
  
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
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
  local_res10[0] = 0;
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res18[0] = local_res10;
  local_10 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`ULayeredBoneBlendLibrary::GetNumPoses'::__l2::<lambda_1>,void,FAnimNode_LayeredBoneBlend_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_LayeredBoneBlend>
            (this,L"GetNumPoses",
             (TFunctionRef<void___cdecl(FAnimNode_LayeredBoneBlend_&)> *)&local_18);
  *(undefined4 *)param_3 = local_res10[0];
  return;
}

// execSetBlendMask @ 146486100

void __cdecl
ULayeredBoneBlendLibrary::execSetBlendMask(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FAnimNodeReference *this;
  uchar *puVar8;
  undefined4 local_res10 [2];
  undefined8 local_res18 [2];
  uchar local_78 [8];
  longlong *plStack_70;
  FAnimNodeReference local_68;
  code *local_58;
  uchar **local_50;
  uchar *local_48;
  undefined4 local_40;
  undefined8 local_3c;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  plStack_70 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar8 = local_78;
  if (puVar3 != (uchar *)0x0) {
    puVar8 = puVar3;
  }
  local_68.AnimNode = (FAnimNode_Base *)0x0;
  local_68.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  this = &local_68;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_40 = local_res10[0];
  local_3c = local_res18[0];
  local_50 = &local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`ULayeredBoneBlendLibrary::SetBlendMask'::__l2::<lambda_1>,void,FAnimNode_LayeredBoneBlend_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = puVar8;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_LayeredBoneBlend>
            (this,L"SetBlendMask",
             (TFunctionRef<void___cdecl(FAnimNode_LayeredBoneBlend_&)> *)&local_58);
  uVar5 = *(undefined4 *)((longlong)&this->AnimNode + 4);
  uVar6 = *(undefined4 *)&this->AnimNodeStruct;
  uVar7 = *(undefined4 *)((longlong)&this->AnimNodeStruct + 4);
  *(undefined4 *)param_3 = *(undefined4 *)&this->AnimNode;
  *(undefined4 *)((longlong)param_3 + 4) = uVar5;
  *(undefined4 *)((longlong)param_3 + 8) = uVar6;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar7;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_70 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_70 + 8))(plStack_70,1);
    }
  }
  return;
}

