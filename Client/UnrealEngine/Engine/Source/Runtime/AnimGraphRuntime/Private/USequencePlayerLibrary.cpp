// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 34

// StaticClass @ 1463e76e0

UClass * __cdecl USequencePlayerLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequencePlayerLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"SequencePlayerLibrary",
               &Z_Registration_Info_UClass_USequencePlayerLibrary.InnerSingleton,
               StaticRegisterNativesUSequencePlayerLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USequencePlayerLibrary>,
               InternalVTableHelperCtorCaller<USequencePlayerLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequencePlayerLibrary.InnerSingleton;
}

// USequencePlayerLibrary @ 146407ce0

USequencePlayerLibrary * __thiscall
USequencePlayerLibrary::USequencePlayerLibrary(USequencePlayerLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USequencePlayerLibrary__6B_;
  return this;
}

// USequencePlayerLibrary @ 146407d10

USequencePlayerLibrary * __thiscall
USequencePlayerLibrary::USequencePlayerLibrary
          (USequencePlayerLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USequencePlayerLibrary__6B_;
  return this;
}

// ~USequencePlayerLibrary @ 1464098f0

void __thiscall USequencePlayerLibrary::~USequencePlayerLibrary(USequencePlayerLibrary *this)

{
  *(undefined ***)this = &___7USequencePlayerLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14640ef70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`USequencePlayerLibrary::SetSequenceWithInertialBlending'::__l2::<lambda_1>::operator()
          (void *this,FAnimNode_SequencePlayer *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  FAnimationUpdateContext *this_00;
  IInertializationRequester *pIVar4;
  FInertializationRequest local_68;
  
  lVar3 = (**(code **)(param_1->_padding_ + 0x148))(param_1);
  lVar1 = *(longlong *)this;
  cVar2 = (**(code **)(param_1->_padding_ + 0x158))(param_1,lVar1);
  if ((cVar2 == '\0') && (2 < (byte)LogSequencePlayerLibrary._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSequencePlayerLibrary);
  }
  if ((lVar3 != lVar1) && (0.0 < *(float *)((longlong)this + 0x10))) {
    this_00 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)((longlong)this + 8));
    if (this_00 == (FAnimationUpdateContext *)0x0) {
      if (2 < (byte)LogSequencePlayerLibrary._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogSequencePlayerLibrary);
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

// ComputePlayRateFromDuration @ 14641ffc0

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl
USequencePlayerLibrary::ComputePlayRateFromDuration(FSequencePlayerReference *param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  longlong *plVar5;
  float fVar6;
  
  fVar6 = __real_3f800000;
  if (param_2 <= 0.0) {
    return __real_3f800000;
  }
  if (((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) &&
     (pUVar4 = FAnimNode_SequencePlayer::StaticStruct(), pUVar4 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong **)param_1 != (longlong *)0x0)) {
      plVar5 = (longlong *)(**(code **)(**(longlong **)param_1 + 0x148))();
      if (plVar5 == (longlong *)0x0) {
        return fVar6;
      }
      fVar6 = (float)(**(code **)(*plVar5 + 0x2c0))(plVar5);
      return fVar6 / param_2;
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    return fVar6;
  }
  return fVar6;
}

// ConvertToSequencePlayer @ 146422170

FSequencePlayerReference * __cdecl
USequencePlayerLibrary::ConvertToSequencePlayer
          (FSequencePlayerReference *__return_storage_ptr__,FAnimNodeReference *param_1,
          EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UScriptStruct *pUVar4;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    pUVar3 = FAnimNode_SequencePlayer::StaticStruct();
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
        goto LAB_1464221da;
      }
    }
  }
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar3 = pUVar4;
LAB_1464221da:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar3;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// GetAccumulatedTime @ 1464471f0

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl USequencePlayerLibrary::GetAccumulatedTime(FSequencePlayerReference *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  float fVar5;
  
  if (((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) &&
     (pUVar4 = FAnimNode_SequencePlayer::StaticStruct(), pUVar4 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong **)param_1 != (longlong *)0x0)) {
      fVar5 = (float)(**(code **)(**(longlong **)param_1 + 0xa8))();
      return fVar5;
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return 0.0;
}

// GetLoopAnimation @ 14644b8a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl USequencePlayerLibrary::GetLoopAnimation(FSequencePlayerReference *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  UScriptStruct *pUVar5;
  
  if (((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) &&
     (pUVar5 = FAnimNode_SequencePlayer::StaticStruct(), pUVar5 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong **)param_1 != (longlong *)0x0)) {
      uVar4 = (**(code **)(**(longlong **)param_1 + 0xd0))();
      return (bool)uVar4;
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return false;
}

// GetPlayRate @ 14644c710

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl USequencePlayerLibrary::GetPlayRate(FSequencePlayerReference *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  float fVar5;
  
  fVar5 = __real_3f800000;
  if (((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) &&
     (pUVar4 = FAnimNode_SequencePlayer::StaticStruct(), pUVar4 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong **)param_1 != (longlong *)0x0)) {
      fVar5 = (float)(**(code **)(**(longlong **)param_1 + 0x170))();
      return fVar5;
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return fVar5;
}

// GetPrivateStaticClass @ 14644d7d0

UClass * __cdecl USequencePlayerLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequencePlayerLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"SequencePlayerLibrary",
               &Z_Registration_Info_UClass_USequencePlayerLibrary.InnerSingleton,
               StaticRegisterNativesUSequencePlayerLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USequencePlayerLibrary>,
               InternalVTableHelperCtorCaller<USequencePlayerLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequencePlayerLibrary.InnerSingleton;
}

// GetSequence @ 14644ec80

/* WARNING: Enum "Type": Some values do not have unique names */

FSequencePlayerReference * __cdecl
USequencePlayerLibrary::GetSequence
          (FSequencePlayerReference *__return_storage_ptr__,FSequencePlayerReference *param_1,
          UAnimSequenceBase **param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  UAnimSequenceBase *pUVar6;
  
  if ((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) {
    pUVar5 = FAnimNode_SequencePlayer::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (*(longlong **)param_1 != (longlong *)0x0)) {
        pUVar6 = (UAnimSequenceBase *)(**(code **)(**(longlong **)param_1 + 0x148))();
        *param_2 = pUVar6;
        goto LAB_14644ed13;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_14644ed13:
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  return __return_storage_ptr__;
}

// GetSequencePure @ 14644ed40

/* WARNING: Enum "Type": Some values do not have unique names */

UAnimSequenceBase * __cdecl
USequencePlayerLibrary::GetSequencePure(FSequencePlayerReference *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  UAnimSequenceBase *pUVar5;
  
  if (((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) &&
     (pUVar4 = FAnimNode_SequencePlayer::StaticStruct(), pUVar4 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong **)param_1 != (longlong *)0x0)) {
      pUVar5 = (UAnimSequenceBase *)(**(code **)(**(longlong **)param_1 + 0x148))();
      return pUVar5;
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return (UAnimSequenceBase *)0x0;
}

// GetStartPosition @ 14644f690

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl USequencePlayerLibrary::GetStartPosition(FSequencePlayerReference *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  float fVar5;
  
  if (((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) &&
     (pUVar4 = FAnimNode_SequencePlayer::StaticStruct(), pUVar4 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong **)param_1 != (longlong *)0x0)) {
      fVar5 = (float)(**(code **)(**(longlong **)param_1 + 0x180))();
      return fVar5;
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return 0.0;
}

// SetAccumulatedTime @ 146467a00

/* WARNING: Enum "Type": Some values do not have unique names */

FSequencePlayerReference * __cdecl
USequencePlayerLibrary::SetAccumulatedTime
          (FSequencePlayerReference *__return_storage_ptr__,FSequencePlayerReference *param_1,
          float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  
  if ((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) {
    pUVar6 = FAnimNode_SequencePlayer::StaticStruct();
    if (pUVar6 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (plVar3 = *(longlong **)param_1, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0xb0))(plVar3,param_2);
        goto LAB_146467a93;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_146467a93:
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar4;
  return __return_storage_ptr__;
}

// SetPlayRate @ 14646a5e0

/* WARNING: Enum "Type": Some values do not have unique names */

FSequencePlayerReference * __cdecl
USequencePlayerLibrary::SetPlayRate
          (FSequencePlayerReference *__return_storage_ptr__,FSequencePlayerReference *param_1,
          float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  UScriptStruct *pUVar7;
  
  if ((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) {
    pUVar7 = FAnimNode_SequencePlayer::StaticStruct();
    if (pUVar7 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (plVar3 = *(longlong **)param_1, plVar3 != (longlong *)0x0)) {
        cVar6 = (**(code **)(*plVar3 + 0x198))(plVar3,param_2);
        if ((cVar6 == '\0') && (2 < (byte)LogSequencePlayerLibrary._0_1_)) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_p_1512b8740,
                     (FLogCategoryBase *)&LogSequencePlayerLibrary);
        }
        goto LAB_14646a693;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_14646a693:
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar4;
  return __return_storage_ptr__;
}

// SetSequence @ 14646ae20

/* WARNING: Enum "Type": Some values do not have unique names */

FSequencePlayerReference * __cdecl
USequencePlayerLibrary::SetSequence
          (FSequencePlayerReference *__return_storage_ptr__,FSequencePlayerReference *param_1,
          UAnimSequenceBase *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  UScriptStruct *pUVar7;
  
  if ((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) {
    pUVar7 = FAnimNode_SequencePlayer::StaticStruct();
    if (pUVar7 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (plVar3 = *(longlong **)param_1, plVar3 != (longlong *)0x0)) {
        cVar6 = (**(code **)(*plVar3 + 0x158))(plVar3,param_2);
        if ((cVar6 == '\0') && (2 < (byte)LogSequencePlayerLibrary._0_1_)) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_s_1512b8818,
                     (FLogCategoryBase *)&LogSequencePlayerLibrary);
        }
        goto LAB_14646aed3;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_14646aed3:
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar4;
  return __return_storage_ptr__;
}

// SetSequenceWithInertialBlending @ 14646af70

/* WARNING: Enum "Type": Some values do not have unique names */

FSequencePlayerReference * __cdecl
USequencePlayerLibrary::SetSequenceWithInertialBlending
          (FSequencePlayerReference *__return_storage_ptr__,FAnimUpdateContext *param_1,
          FSequencePlayerReference *param_2,UAnimSequenceBase *param_3,float param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  UAnimSequenceBase *local_28;
  FAnimUpdateContext *local_20;
  float local_18;
  
  local_18 = param_4;
  local_28 = param_3;
  local_20 = param_1;
  if ((*(longlong *)param_2 != 0) && (lVar2 = *(longlong *)&param_2->field_0x8, lVar2 != 0)) {
    pUVar5 = FAnimNode_SequencePlayer::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (*(FAnimNode_SequencePlayer **)param_2 != (FAnimNode_SequencePlayer *)0x0)) {
        `USequencePlayerLibrary::SetSequenceWithInertialBlending'::__l2::<lambda_1>::operator()
                  (&local_28,*(FAnimNode_SequencePlayer **)param_2);
        goto LAB_14646b00f;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_14646b00f:
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_2;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  return __return_storage_ptr__;
}

// SetStartPosition @ 14646b210

/* WARNING: Enum "Type": Some values do not have unique names */

FSequencePlayerReference * __cdecl
USequencePlayerLibrary::SetStartPosition
          (FSequencePlayerReference *__return_storage_ptr__,FSequencePlayerReference *param_1,
          float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  UScriptStruct *pUVar7;
  
  if ((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) {
    pUVar7 = FAnimNode_SequencePlayer::StaticStruct();
    if (pUVar7 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (plVar3 = *(longlong **)param_1, plVar3 != (longlong *)0x0)) {
        cVar6 = (**(code **)(*plVar3 + 400))(plVar3,param_2);
        if ((cVar6 == '\0') && (2 < (byte)LogSequencePlayerLibrary._0_1_)) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_s_1512b85b8,
                     (FLogCategoryBase *)&LogSequencePlayerLibrary);
        }
        goto LAB_14646b2c3;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_14646b2c3:
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar4;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUSequencePlayerLibrary @ 14646e850

void __cdecl USequencePlayerLibrary::StaticRegisterNativesUSequencePlayerLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_USequencePlayerLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execComputePlayRateFromDuration @ 14647de50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
USequencePlayerLibrary::execComputePlayRateFromDuration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  UScriptStruct *pUVar6;
  longlong *plVar7;
  float local_res10 [2];
  float local_res18;
  longlong local_58 [6];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_res10[0] = 0.0;
  plVar7 = local_58;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar7 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar5 = local_res10[0];
  local_res18 = __real_3f800000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (0.0 < local_res10[0]) {
    if (((*plVar7 != 0) && (lVar3 = plVar7[1], lVar3 != 0)) &&
       (pUVar6 = FAnimNode_SequencePlayer::StaticStruct(), pUVar6 != (UScriptStruct *)0x0)) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && ((longlong *)*plVar7 != (longlong *)0x0)) {
        plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar7 + 0x148))();
        if (plVar7 != (longlong *)0x0) {
          local_res18 = (float)(**(code **)(*plVar7 + 0x2c0))(plVar7);
          local_res18 = local_res18 / fVar5;
        }
        goto LAB_14647dfe4;
      }
    }
    if (2 < (byte)LogAnimation._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    }
  }
LAB_14647dfe4:
  *(float *)param_3 = local_res18;
  return;
}

// execConvertToSequencePlayer @ 146480430

void __cdecl
USequencePlayerLibrary::execConvertToSequencePlayer(UObject *param_1,FFrame *param_2,void *param_3)

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
     (pUVar6 = FAnimNode_SequencePlayer::StaticStruct(), pUVar6 != (UScriptStruct *)0x0)) {
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

// execConvertToSequencePlayerPure @ 146480580

void __cdecl
USequencePlayerLibrary::execConvertToSequencePlayerPure
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
    pUVar7 = FAnimNode_SequencePlayer::StaticStruct();
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
        goto LAB_1464806e6;
      }
    }
  }
  uVar6 = '\0';
  uVar11 = uVar8;
LAB_1464806e6:
  *(undefined8 *)puVar12 = uVar8;
  *(undefined8 *)(puVar12 + 8) = uVar11;
  *puVar10 = uVar6;
  return;
}

// execGetAccumulatedTime @ 1464811a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
USequencePlayerLibrary::execGetAccumulatedTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong local_18 [2];
  
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
  plVar6 = local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar6 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*plVar6 != 0) && (lVar3 = plVar6[1], lVar3 != 0)) &&
     (pUVar5 = FAnimNode_SequencePlayer::StaticStruct(), pUVar5 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((longlong *)*plVar6 != (longlong *)0x0)) {
      uVar7 = (**(code **)(*(longlong *)*plVar6 + 0xa8))();
      goto LAB_1464812ac;
    }
  }
  uVar7 = 0;
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    uVar7 = 0;
  }
LAB_1464812ac:
  *(undefined4 *)param_3 = uVar7;
  return;
}

// execGetLoopAnimation @ 146481df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
USequencePlayerLibrary::execGetLoopAnimation(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *pUVar6;
  longlong *plVar7;
  longlong local_18 [2];
  
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
     (pUVar6 = FAnimNode_SequencePlayer::StaticStruct(), pUVar6 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((longlong *)*plVar7 != (longlong *)0x0)) {
      uVar5 = (**(code **)(*(longlong *)*plVar7 + 0xd0))();
      goto LAB_146481ef7;
    }
  }
  uVar5 = 0;
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    uVar5 = 0;
  }
LAB_146481ef7:
  *(undefined1 *)param_3 = uVar5;
  return;
}

// execGetPlayRate @ 146482380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USequencePlayerLibrary::execGetPlayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong local_18 [2];
  
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
  uVar7 = __real_3f800000;
  plVar6 = local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar6 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*plVar6 != 0) && (lVar3 = plVar6[1], lVar3 != 0)) &&
     (pUVar5 = FAnimNode_SequencePlayer::StaticStruct(), pUVar5 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((longlong *)*plVar6 != (longlong *)0x0)) {
      uVar7 = (**(code **)(*(longlong *)*plVar6 + 0x170))();
      goto LAB_146482491;
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_146482491:
  *(undefined4 *)param_3 = uVar7;
  return;
}

// execGetSequence @ 146482b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USequencePlayerLibrary::execGetSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong *plVar2;
  FProperty *pFVar3;
  longlong lVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  undefined8 uVar7;
  uchar *puVar8;
  longlong *plVar9;
  uchar local_res10 [8];
  longlong local_28 [2];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28[0] = 0;
  local_28[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  plVar2 = (longlong *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  plVar9 = local_28;
  if (plVar2 != (longlong *)0x0) {
    plVar9 = plVar2;
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
  puVar8 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*plVar9 != 0) && (lVar4 = plVar9[1], lVar4 != 0)) {
    pUVar6 = FAnimNode_SequencePlayer::StaticStruct();
    if (pUVar6 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && ((longlong *)*plVar9 != (longlong *)0x0)) {
        uVar7 = (**(code **)(*(longlong *)*plVar9 + 0x148))();
        *(undefined8 *)puVar8 = uVar7;
        goto LAB_146482c60;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_146482c60:
  lVar4 = plVar9[1];
  *(longlong *)param_3 = *plVar9;
  *(longlong *)((longlong)param_3 + 8) = lVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar8);
  }
  return;
}

// execGetSequencePure @ 146482ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
USequencePlayerLibrary::execGetSequencePure(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong local_18 [2];
  
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
     (pUVar5 = FAnimNode_SequencePlayer::StaticStruct(), pUVar5 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((longlong *)*plVar7 != (longlong *)0x0)) {
      uVar6 = (**(code **)(*(longlong *)*plVar7 + 0x148))();
      *(undefined8 *)param_3 = uVar6;
      return;
    }
  }
  if ((byte)LogAnimation._0_1_ < 3) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    *(undefined8 *)param_3 = 0;
  }
  return;
}

// execGetStartPosition @ 146482f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
USequencePlayerLibrary::execGetStartPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong local_18 [2];
  
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
  plVar6 = local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar6 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*plVar6 != 0) && (lVar3 = plVar6[1], lVar3 != 0)) &&
     (pUVar5 = FAnimNode_SequencePlayer::StaticStruct(), pUVar5 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((longlong *)*plVar6 != (longlong *)0x0)) {
      uVar7 = (**(code **)(*(longlong *)*plVar6 + 0x180))();
      goto LAB_14648303c;
    }
  }
  uVar7 = 0;
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    uVar7 = 0;
  }
LAB_14648303c:
  *(undefined4 *)param_3 = uVar7;
  return;
}

// execSetAccumulatedTime @ 146485c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
USequencePlayerLibrary::execSetAccumulatedTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 uVar6;
  UScriptStruct *pUVar7;
  longlong *plVar8;
  undefined4 local_res10 [2];
  longlong local_38 [4];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0] = 0;
  plVar8 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*plVar8 != 0) && (lVar3 = plVar8[1], lVar3 != 0)) {
    pUVar7 = FAnimNode_SequencePlayer::StaticStruct();
    if (pUVar7 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (plVar4 = (longlong *)*plVar8, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0xb0))(plVar4,uVar6);
        goto LAB_146485d97;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_146485d97:
  lVar3 = plVar8[1];
  *(longlong *)param_3 = *plVar8;
  *(longlong *)((longlong)param_3 + 8) = lVar3;
  return;
}

// execSetPlayRate @ 146486f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USequencePlayerLibrary::execSetPlayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 uVar6;
  char cVar7;
  UScriptStruct *pUVar8;
  longlong *plVar9;
  undefined4 local_res10 [2];
  longlong local_38 [4];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0] = 0;
  plVar9 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*plVar9 != 0) && (lVar3 = plVar9[1], lVar3 != 0)) {
    pUVar8 = FAnimNode_SequencePlayer::StaticStruct();
    if (pUVar8 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (plVar4 = (longlong *)*plVar9, plVar4 != (longlong *)0x0)) {
        cVar7 = (**(code **)(*plVar4 + 0x198))(plVar4,uVar6);
        if ((cVar7 == '\0') && (2 < (byte)LogSequencePlayerLibrary._0_1_)) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_p_1512b8740,
                     (FLogCategoryBase *)&LogSequencePlayerLibrary);
        }
        goto LAB_1464870f7;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_1464870f7:
  lVar3 = plVar9[1];
  *(longlong *)param_3 = *plVar9;
  *(longlong *)((longlong)param_3 + 8) = lVar3;
  return;
}

// execSetSequence @ 146487350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USequencePlayerLibrary::execSetSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 uVar6;
  char cVar7;
  UScriptStruct *pUVar8;
  longlong *plVar9;
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
  plVar9 = local_28;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
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
  uVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*plVar9 != 0) && (lVar3 = plVar9[1], lVar3 != 0)) {
    pUVar8 = FAnimNode_SequencePlayer::StaticStruct();
    if (pUVar8 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (plVar4 = (longlong *)*plVar9, plVar4 != (longlong *)0x0)) {
        cVar7 = (**(code **)(*plVar4 + 0x158))(plVar4,uVar6);
        if ((cVar7 == '\0') && (2 < (byte)LogSequencePlayerLibrary._0_1_)) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_s_1512b8818,
                     (FLogCategoryBase *)&LogSequencePlayerLibrary);
        }
        goto LAB_1464874b2;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_1464874b2:
  lVar3 = plVar9[1];
  *(longlong *)param_3 = *plVar9;
  *(longlong *)((longlong)param_3 + 8) = lVar3;
  return;
}

// execSetSequenceWithInertialBlending @ 1464876b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
USequencePlayerLibrary::execSetSequenceWithInertialBlending
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  int iVar3;
  uchar *puVar4;
  FProperty *pFVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  UScriptStruct *pUVar10;
  longlong *plVar11;
  uchar *puVar12;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  uchar local_68 [8];
  longlong *plStack_60;
  longlong local_58 [3];
  uchar *local_40;
  undefined4 local_38;
  
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_68[0] = '\0';
  local_68[1] = '\0';
  local_68[2] = '\0';
  local_68[3] = '\0';
  local_68[4] = '\0';
  local_68[5] = '\0';
  local_68[6] = '\0';
  local_68[7] = '\0';
  plStack_60 = (longlong *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  puVar4 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar12 = local_68;
  if (puVar4 != (uchar *)0x0) {
    puVar12 = puVar4;
  }
  local_58[0] = 0;
  local_58[1] = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_res18 = 0;
  plVar11 = local_58;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar11 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38 = local_res10[0];
  local_40 = puVar12;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58[2] = local_res18;
  if ((*plVar11 != 0) && (lVar6 = plVar11[1], lVar6 != 0)) {
    pUVar10 = FAnimNode_SequencePlayer::StaticStruct();
    if (pUVar10 != (UScriptStruct *)0x0) {
      iVar3 = (int)pUVar10->_padding_;
      if ((*(int *)(lVar6 + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar10->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if ((bVar9) && ((FAnimNode_SequencePlayer *)*plVar11 != (FAnimNode_SequencePlayer *)0x0)) {
        `USequencePlayerLibrary::SetSequenceWithInertialBlending'::__l2::<lambda_1>::operator()
                  (local_58 + 2,(FAnimNode_SequencePlayer *)*plVar11);
        goto LAB_146487897;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_146487897:
  uVar7 = *(undefined4 *)((longlong)plVar11 + 4);
  lVar6 = plVar11[1];
  uVar8 = *(undefined4 *)((longlong)plVar11 + 0xc);
  *(int *)param_3 = (int)*plVar11;
  *(undefined4 *)((longlong)param_3 + 4) = uVar7;
  *(int *)((longlong)param_3 + 8) = (int)lVar6;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar8;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_60 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plStack_60 + 8))(plStack_60,1);
    }
  }
  return;
}

// execSetStartPosition @ 1464878f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
USequencePlayerLibrary::execSetStartPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 uVar6;
  char cVar7;
  UScriptStruct *pUVar8;
  longlong *plVar9;
  undefined4 local_res10 [2];
  longlong local_38 [4];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0] = 0;
  plVar9 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*plVar9 != 0) && (lVar3 = plVar9[1], lVar3 != 0)) {
    pUVar8 = FAnimNode_SequencePlayer::StaticStruct();
    if (pUVar8 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (plVar4 = (longlong *)*plVar9, plVar4 != (longlong *)0x0)) {
        cVar7 = (**(code **)(*plVar4 + 400))(plVar4,uVar6);
        if ((cVar7 == '\0') && (2 < (byte)LogSequencePlayerLibrary._0_1_)) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_s_1512b85b8,
                     (FLogCategoryBase *)&LogSequencePlayerLibrary);
        }
        goto LAB_146487a57;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_146487a57:
  lVar3 = plVar9[1];
  *(longlong *)param_3 = *plVar9;
  *(longlong *)((longlong)param_3 + 8) = lVar3;
  return;
}

