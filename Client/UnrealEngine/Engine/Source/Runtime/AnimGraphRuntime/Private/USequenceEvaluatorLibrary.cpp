// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 26

// StaticClass @ 1463db4f0

UClass * __cdecl USequenceEvaluatorLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequenceEvaluatorLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"SequenceEvaluatorLibrary",
               &Z_Registration_Info_UClass_USequenceEvaluatorLibrary.InnerSingleton,
               StaticRegisterNativesUSequenceEvaluatorLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USequenceEvaluatorLibrary>,
               InternalVTableHelperCtorCaller<USequenceEvaluatorLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequenceEvaluatorLibrary.InnerSingleton;
}

// USequenceEvaluatorLibrary @ 146407c80

USequenceEvaluatorLibrary * __thiscall
USequenceEvaluatorLibrary::USequenceEvaluatorLibrary
          (USequenceEvaluatorLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USequenceEvaluatorLibrary__6B_;
  return this;
}

// USequenceEvaluatorLibrary @ 146407cb0

USequenceEvaluatorLibrary * __thiscall
USequenceEvaluatorLibrary::USequenceEvaluatorLibrary
          (USequenceEvaluatorLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USequenceEvaluatorLibrary__6B_;
  return this;
}

// ~USequenceEvaluatorLibrary @ 1464098d0

void __thiscall
USequenceEvaluatorLibrary::~USequenceEvaluatorLibrary(USequenceEvaluatorLibrary *this)

{
  *(undefined ***)this = &___7USequenceEvaluatorLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14640e120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`USequenceEvaluatorLibrary::AdvanceTime'::__l2::<lambda_1>::operator()
          (void *this,FAnimNode_SequenceEvaluator *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  FAnimationUpdateContext *pFVar5;
  FStaticBasicLogRecord *pFVar6;
  float fVar7;
  float local_res8 [2];
  
  pFVar5 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)this);
  if (pFVar5 == (FAnimationUpdateContext *)0x0) {
    if ((byte)LogSequenceEvaluatorLibrary._0_1_ < 3) {
      return;
    }
    pFVar6 = &::LOG_Static;
  }
  else {
    local_res8[0] = (float)(**(code **)(*(longlong *)param_1 + 0x178))(param_1);
    fVar7 = (float)(**(code **)(*(longlong *)param_1 + 0xb8))(param_1);
    fVar1 = pFVar5->DeltaTime;
    fVar2 = *(float *)((longlong)this + 8);
    bVar3 = (bool)(**(code **)(*(longlong *)param_1 + 0xd0))(param_1);
    FAnimationRuntime::AdvanceTime(bVar3,fVar1 * fVar2,local_res8,fVar7);
    cVar4 = (**(code **)(*(longlong *)param_1 + 0x158))(param_1,local_res8[0]);
    if (cVar4 != '\0') {
      return;
    }
    if ((byte)LogSequenceEvaluatorLibrary._0_1_ < 3) {
      return;
    }
    pFVar6 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogSequenceEvaluatorLibrary);
  return;
}

// operator() @ 14640ec90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`USequenceEvaluatorLibrary::SetExplicitFrame'::__l2::<lambda_1>::operator()
          (void *this,FAnimNode_SequenceEvaluator *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined4 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  uVar1 = *(undefined4 *)this;
  if (CachedId_ExplicitFrame.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_ExplicitFrame,"ExplicitFrame");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_ExplicitFrame,(FAnimNode_Base *)param_1,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_ExplicitFrame.Id = pFVar7->Id;
    CachedId_ExplicitFrame.Index = pFVar7->Index;
  }
  iVar4 = CachedId_ExplicitFrame.Index;
  FVar3 = CachedId_ExplicitFrame.Id;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_28.Id = FVar3;
  local_28.Index = iVar4;
  puVar8 = FAnimNodeData::GetInstanceData
                     (*(FAnimNodeData **)&param_1->field_0x8,&local_28,(FAnimNode_Base *)param_1,
                      (UObject *)0x0);
  if (puVar8 == (undefined4 *)0x0) {
    if (2 < (byte)LogSequenceEvaluatorLibrary._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogSequenceEvaluatorLibrary);
    }
    return;
  }
  *puVar8 = uVar1;
  return;
}

// operator() @ 14640ee20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`USequenceEvaluatorLibrary::SetSequenceWithInertialBlending'::__l2::<lambda_1>::operator()
          (void *this,FAnimNode_SequenceEvaluator *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  FAnimationUpdateContext *this_00;
  IInertializationRequester *pIVar4;
  FInertializationRequest local_68;
  
  lVar3 = (**(code **)(*(longlong *)param_1 + 0x170))(param_1);
  lVar1 = *(longlong *)this;
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x150))(param_1,lVar1);
  if ((cVar2 == '\0') && (2 < (byte)LogSequenceEvaluatorLibrary._0_1_)) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogSequenceEvaluatorLibrary);
  }
  if ((lVar3 != lVar1) && (0.0 < *(float *)((longlong)this + 0x10))) {
    this_00 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)((longlong)this + 8));
    if (this_00 == (FAnimationUpdateContext *)0x0) {
      if (2 < (byte)LogSequenceEvaluatorLibrary._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogSequenceEvaluatorLibrary);
      }
    }
    else {
      pIVar4 = FAnimationBaseContext::GetMessage<UE::Anim::IInertializationRequester>
                         ((FAnimationBaseContext *)this_00);
      if (pIVar4 != (IInertializationRequester *)0x0) {
        FInertializationRequest::FInertializationRequest(&local_68);
        local_68.NodeId = *(int *)((longlong)&this_00->_padding_ + 4);
        local_68.Duration = *(float *)((longlong)this + 0x10);
        local_68.AnimInstance.field0_0x0 =
             (TObjectPtr<UObject>_u_0)
             ((TObjectPtr<UObject>_u_0 *)(this_00->_padding_ + 0x140))->DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_68.AnimInstance.field0_0x0.DebugPtr != (TObjectPtr<UObject>_u_0)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_68.AnimInstance.field0_0x0);
        }
        (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,&local_68);
        if (local_68.DescriptionString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_68.DescriptionString.Data.AllocatorInstance.Data);
        }
        if (local_68.Description_DEPRECATED.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.Description_DEPRECATED.TextData.Reference + 0x10))();
        }
      }
    }
  }
  return;
}

// AdvanceTime @ 1464157c0

FSequenceEvaluatorReference * __cdecl
USequenceEvaluatorLibrary::AdvanceTime
          (FSequenceEvaluatorReference *__return_storage_ptr__,FAnimUpdateContext *param_1,
          FSequenceEvaluatorReference *param_2,float param_3)

{
  undefined8 uVar1;
  FAnimUpdateContext *local_28;
  float local_20;
  code *local_18;
  FAnimUpdateContext **local_10;
  
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`USequenceEvaluatorLibrary::AdvanceTime'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
             ::Call;
  local_28 = param_1;
  local_20 = param_3;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>
            ((FAnimNodeReference *)param_2,L"AdvanceTime",
             (TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_2;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// ConvertToSequenceEvaluator @ 1464220b0

FSequenceEvaluatorReference * __cdecl
USequenceEvaluatorLibrary::ConvertToSequenceEvaluator
          (FSequenceEvaluatorReference *__return_storage_ptr__,FAnimNodeReference *param_1,
          EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar3,
                           L"AnimNode_SequenceEvaluator");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14642213b;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton)->
                 _padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton)->_padding_))
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
      goto LAB_146422143;
    }
  }
LAB_14642213b:
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar5 = pUVar4;
LAB_146422143:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar5;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// GetAccumulatedTime @ 1464471a0

float __cdecl USequenceEvaluatorLibrary::GetAccumulatedTime(FSequenceEvaluatorReference *param_1)

{
  float local_res10 [2];
  float *local_res18 [2];
  code *local_18;
  undefined4 **local_10;
  
  local_res18[0] = local_res10;
  local_res10[0] = 0.0;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`USequenceEvaluatorLibrary::GetAccumulatedTime'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>
            ((FAnimNodeReference *)param_1,L"GetAccumulatedTime",
             (TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator_&)> *)&local_18);
  return local_res10[0];
}

// GetPrivateStaticClass @ 14644d710

UClass * __cdecl USequenceEvaluatorLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequenceEvaluatorLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"SequenceEvaluatorLibrary",
               &Z_Registration_Info_UClass_USequenceEvaluatorLibrary.InnerSingleton,
               StaticRegisterNativesUSequenceEvaluatorLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USequenceEvaluatorLibrary>,
               InternalVTableHelperCtorCaller<USequenceEvaluatorLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequenceEvaluatorLibrary.InnerSingleton;
}

// GetSequence @ 14644ec30

UAnimSequenceBase * __cdecl
USequenceEvaluatorLibrary::GetSequence(FSequenceEvaluatorReference *param_1)

{
  UAnimSequenceBase *local_res10;
  UAnimSequenceBase **local_res18 [2];
  code *local_18;
  undefined8 **local_10;
  
  local_res18[0] = &local_res10;
  local_res10 = (UAnimSequenceBase *)0x0;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`USequenceEvaluatorLibrary::GetSequence'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>
            ((FAnimNodeReference *)param_1,L"GetAccumulatedTime",
             (TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator_&)> *)&local_18);
  return local_res10;
}

// SetExplicitFrame @ 146468d30

FSequenceEvaluatorReference * __cdecl
USequenceEvaluatorLibrary::SetExplicitFrame
          (FSequenceEvaluatorReference *__return_storage_ptr__,FSequenceEvaluatorReference *param_1,
          int param_2)

{
  undefined8 uVar1;
  int local_res18 [4];
  code *local_18;
  int *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`USequenceEvaluatorLibrary::SetExplicitFrame'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
             ::Call;
  local_res18[0] = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>
            ((FAnimNodeReference *)param_1,L"SetExplicitTime",
             (TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetExplicitTime @ 146468db0

FSequenceEvaluatorReference * __cdecl
USequenceEvaluatorLibrary::SetExplicitTime
          (FSequenceEvaluatorReference *__return_storage_ptr__,FSequenceEvaluatorReference *param_1,
          float param_2)

{
  undefined8 uVar1;
  float local_res18 [4];
  code *local_18;
  float *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`USequenceEvaluatorLibrary::SetExplicitTime'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
             ::Call;
  local_res18[0] = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>
            ((FAnimNodeReference *)param_1,L"SetExplicitTime",
             (TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetSequence @ 14646adc0

FSequenceEvaluatorReference * __cdecl
USequenceEvaluatorLibrary::SetSequence
          (FSequenceEvaluatorReference *__return_storage_ptr__,FSequenceEvaluatorReference *param_1,
          UAnimSequenceBase *param_2)

{
  undefined8 uVar1;
  UAnimSequenceBase *local_res8;
  code *local_18;
  UAnimSequenceBase **local_10;
  
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`USequenceEvaluatorLibrary::SetSequence'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
             ::Call;
  local_res8 = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>
            ((FAnimNodeReference *)param_1,L"SetSequence",
             (TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetSequenceWithInertialBlending @ 14646af00

FSequenceEvaluatorReference * __cdecl
USequenceEvaluatorLibrary::SetSequenceWithInertialBlending
          (FSequenceEvaluatorReference *__return_storage_ptr__,FAnimUpdateContext *param_1,
          FSequenceEvaluatorReference *param_2,UAnimSequenceBase *param_3,float param_4)

{
  undefined8 uVar1;
  code *local_38;
  UAnimSequenceBase **local_30;
  UAnimSequenceBase *local_28;
  FAnimUpdateContext *local_20;
  float local_18;
  
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`USequenceEvaluatorLibrary::SetSequenceWithInertialBlending'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
             ::Call;
  local_18 = param_4;
  local_28 = param_3;
  local_20 = param_1;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>
            ((FAnimNodeReference *)param_2,L"SetSequenceWithInterialBlending",
             (TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator_&)> *)&local_38);
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_2;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUSequenceEvaluatorLibrary @ 14646e810

void __cdecl USequenceEvaluatorLibrary::StaticRegisterNativesUSequenceEvaluatorLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_USequenceEvaluatorLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAdvanceTime @ 14647db70

void __cdecl
USequenceEvaluatorLibrary::execAdvanceTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uchar *puVar8;
  FAnimNodeReference *this;
  undefined4 local_res10 [2];
  uchar local_58 [8];
  longlong *plStack_50;
  FAnimNodeReference local_48;
  uchar *local_38;
  undefined4 local_30;
  code *local_28;
  uchar **local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  plStack_50 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar8 = local_58;
  if (puVar3 != (uchar *)0x0) {
    puVar8 = puVar3;
  }
  local_48.AnimNode = (FAnimNode_Base *)0x0;
  local_48.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  this = &local_48;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_30 = local_res10[0];
  local_20 = &local_38;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`USequenceEvaluatorLibrary::AdvanceTime'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = puVar8;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>
            (this,L"AdvanceTime",
             (TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator_&)> *)&local_28);
  uVar5 = *(undefined4 *)((longlong)&this->AnimNode + 4);
  uVar6 = *(undefined4 *)&this->AnimNodeStruct;
  uVar7 = *(undefined4 *)((longlong)&this->AnimNodeStruct + 4);
  *(undefined4 *)param_3 = *(undefined4 *)&this->AnimNode;
  *(undefined4 *)((longlong)param_3 + 4) = uVar5;
  *(undefined4 *)((longlong)param_3 + 8) = uVar6;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar7;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_50 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_50 + 8))(plStack_50,1);
    }
  }
  return;
}

// execConvertToSequenceEvaluator @ 146480160

void __cdecl
USequenceEvaluatorLibrary::execConvertToSequenceEvaluator
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimNodeReference *pFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FSequenceEvaluatorReference *pFVar4;
  FAnimNodeReference *pFVar5;
  EAnimNodeReferenceConversionResult *pEVar6;
  EAnimNodeReferenceConversionResult local_res10 [8];
  FAnimNodeReference local_28;
  FSequenceEvaluatorReference local_18;
  
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
  pFVar4 = ConvertToSequenceEvaluator(&local_18,pFVar5,pEVar6);
  uVar3 = *(undefined8 *)&pFVar4->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar4;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  return;
}

// execConvertToSequenceEvaluatorPure @ 146480270

void __cdecl
USequenceEvaluatorLibrary::execConvertToSequenceEvaluatorPure
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
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar7,
                           L"AnimNode_SequenceEvaluator");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1464803fa;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton)->_padding_))
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
      goto LAB_1464803ff;
    }
  }
LAB_1464803fa:
  uVar6 = '\0';
  uVar11 = uVar8;
LAB_1464803ff:
  *(undefined8 *)puVar12 = uVar8;
  *(undefined8 *)(puVar12 + 8) = uVar11;
  *puVar10 = uVar6;
  return;
}

// execGetAccumulatedTime @ 1464810c0

void __cdecl
USequenceEvaluatorLibrary::execGetAccumulatedTime(UObject *param_1,FFrame *param_2,void *param_3)

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
             TFunctionRefCaller<`USequenceEvaluatorLibrary::GetAccumulatedTime'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>
            (this,L"GetAccumulatedTime",
             (TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator_&)> *)&local_18);
  *(undefined4 *)param_3 = local_res10[0];
  return;
}

// execGetSequence @ 146482a30

void __cdecl
USequenceEvaluatorLibrary::execGetSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined8 local_res10;
  undefined8 *local_res18 [2];
  FAnimNodeReference local_28;
  code *local_18;
  undefined8 **local_10;
  
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
  local_res10 = 0;
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res18[0] = &local_res10;
  local_10 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`USequenceEvaluatorLibrary::GetSequence'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>
            (this,L"GetAccumulatedTime",
             (TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator_&)> *)&local_18);
  *(undefined8 *)param_3 = local_res10;
  return;
}

// execSetExplicitFrame @ 1464867a0

void __cdecl
USequenceEvaluatorLibrary::execSetExplicitFrame(UObject *param_1,FFrame *param_2,void *param_3)

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
  FIntProperty::StaticClass();
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
             TFunctionRefCaller<`USequenceEvaluatorLibrary::SetExplicitFrame'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>
            (this,L"SetExplicitTime",
             (TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetExplicitTime @ 1464868b0

void __cdecl
USequenceEvaluatorLibrary::execSetExplicitTime(UObject *param_1,FFrame *param_2,void *param_3)

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
             TFunctionRefCaller<`USequenceEvaluatorLibrary::SetExplicitTime'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>
            (this,L"SetExplicitTime",
             (TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetSequence @ 146487240

void __cdecl
USequenceEvaluatorLibrary::execSetSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  FAnimNodeReference local_38;
  code *local_28;
  undefined8 *local_20;
  
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
  local_res10 = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18[0] = local_res10;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`USequenceEvaluatorLibrary::SetSequence'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>
            (this,L"SetSequence",
             (TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetSequenceWithInertialBlending @ 1464874e0

void __cdecl
USequenceEvaluatorLibrary::execSetSequenceWithInertialBlending
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  undefined8 *local_50;
  undefined8 local_48;
  uchar *local_40;
  undefined4 local_38;
  
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
  local_res18[0] = 0;
  this = &local_68;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38 = local_res10[0];
  local_48 = local_res18[0];
  local_50 = &local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`USequenceEvaluatorLibrary::SetSequenceWithInertialBlending'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40 = puVar8;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>
            (this,L"SetSequenceWithInterialBlending",
             (TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator_&)> *)&local_58);
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

