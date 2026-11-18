// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 11

// StaticClass @ 14962df50

UClass * __cdecl AGizmoActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGizmoActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoActor",
               &Z_Registration_Info_UClass_AGizmoActor.InnerSingleton,
               StaticRegisterNativesAGizmoActor,0x2c8,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<AGizmoActor>,
               InternalVTableHelperCtorCaller<AGizmoActor>,local_res8,
               AInternalToolFrameworkActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGizmoActor.InnerSingleton;
}

// AGizmoActor @ 1496389e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGizmoActor * __thiscall AGizmoActor::AGizmoActor(AGizmoActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->field_0x2c0 = 0;
  *(undefined ***)this = &___7AGizmoActor__6B_;
  return this;
}

// AGizmoActor @ 149638a10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGizmoActor * __thiscall AGizmoActor::AGizmoActor(AGizmoActor *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  AActor::AActor((AActor *)this,pFVar1);
  this->field_0x2c0 = 0;
  *(undefined ***)this = &___7AGizmoActor__6B_;
  UObjectBase::AtomicallyClearFlags((UObjectBase *)this,RF_Transactional);
  return this;
}

// ~AGizmoActor @ 14963dd30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGizmoActor::~AGizmoActor(AGizmoActor *this)

{
  *(undefined ***)this = &___7AInternalToolFrameworkActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// AddDefaultArrowComponent @ 149647300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoArrowComponent * __cdecl
AGizmoActor::AddDefaultArrowComponent
          (UWorld *param_1,AActor *param_2,UGizmoViewContext *param_3,FLinearColor *param_4,
          TVector<double> *param_5,float param_6)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  UGizmoArrowComponent *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_e8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (param_3 == (UGizmoViewContext *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3467743465075376092>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoActor.cpp"
                       ,0x24,"GizmoViewContext");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UGizmoArrowComponent *)(*pcVar1)();
      return pUVar5;
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = UGizmoArrowComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  local_a8._8_8_ = param_2;
  pUVar5 = (UGizmoArrowComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  AActor::AddInstanceComponent(param_2,(UActorComponent *)pUVar5);
  (**(code **)(*(longlong *)pUVar5 + 0x508))
            (pUVar5,(param_2->RootComponent).field0_0x0.DebugPtr,
             &FAttachmentTransformRules::KeepRelativeTransform,0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UGizmoViewContext *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  *(UGizmoViewContext **)&pUVar5->field_0x570 = param_3;
  pUVar5->field_0x578 = param_3 != (UGizmoViewContext *)0x0;
  dVar2 = (param_5->field0_0x0)._s_0.Y;
  (pUVar5->Direction).field0_0x0._s_0.X = (param_5->field0_0x0)._s_0.X;
  (pUVar5->Direction).field0_0x0._s_0.Y = dVar2;
  (pUVar5->Direction).field0_0x0._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  *(undefined8 *)&pUVar5->field_0x550 = *(undefined8 *)&param_4->field0_0x0;
  *(undefined8 *)&pUVar5->field_0x558 = uVar3;
  pUVar5->Length = param_6;
  UActorComponent::RegisterComponent((UActorComponent *)pUVar5);
  return pUVar5;
}

// AddDefaultBoxComponent @ 149647480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoBoxComponent * __cdecl
AGizmoActor::AddDefaultBoxComponent
          (UWorld *param_1,AActor *param_2,UGizmoViewContext *param_3,FLinearColor *param_4,
          TVector<double> *param_5,TVector<double> *param_6)

{
  code *pcVar1;
  double dVar2;
  longlong lVar3;
  bool bVar4;
  UGizmoBoxComponent *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_e8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (param_3 == (UGizmoViewContext *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3467743465075376032>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoActor.cpp"
                       ,0x60,"GizmoViewContext");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UGizmoBoxComponent *)(*pcVar1)();
      return pUVar5;
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = UGizmoBoxComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  local_a8._8_8_ = param_2;
  pUVar5 = (UGizmoBoxComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  AActor::AddInstanceComponent(param_2,(UActorComponent *)pUVar5);
  (**(code **)(pUVar5->_padding_ + 0x508))
            (pUVar5,(param_2->RootComponent).field0_0x0.DebugPtr,
             &FAttachmentTransformRules::KeepRelativeTransform,0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UGizmoViewContext *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  pUVar5->_padding_ = (longlong)param_3;
  *(bool *)&pUVar5->_padding_ = param_3 != (UGizmoViewContext *)0x0;
  dVar2 = (param_5->field0_0x0)._s_0.Y;
  (pUVar5->Origin).field0_0x0._s_0.X = (param_5->field0_0x0)._s_0.X;
  (pUVar5->Origin).field0_0x0._s_0.Y = dVar2;
  (pUVar5->Origin).field0_0x0._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  lVar3 = *(longlong *)((longlong)&param_4->field0_0x0 + 8);
  pUVar5->_padding_ = *(longlong *)&param_4->field0_0x0;
  pUVar5->_padding_ = lVar3;
  dVar2 = (param_6->field0_0x0)._s_0.Y;
  (pUVar5->Dimensions).field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
  (pUVar5->Dimensions).field0_0x0._s_0.Y = dVar2;
  (pUVar5->Dimensions).field0_0x0._s_0.Z = (param_6->field0_0x0)._s_0.Z;
  UActorComponent::RegisterComponent((UActorComponent *)pUVar5);
  return pUVar5;
}

// AddDefaultCircleComponent @ 149647610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGizmoCircleComponent * __cdecl
AGizmoActor::AddDefaultCircleComponent
          (UWorld *param_1,AActor *param_2,UGizmoViewContext *param_3,FLinearColor *param_4,
          TVector<double> *param_5,float param_6)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  UGizmoCircleComponent *pUVar5;
  
  if (param_3 == (UGizmoViewContext *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3467743465075376053>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoActor.cpp"
                       ,0x4b,"GizmoViewContext");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UGizmoCircleComponent *)(*pcVar1)();
      return pUVar5;
    }
  }
  pUVar5 = NewObject<UGizmoCircleComponent>((UObject *)param_2);
  AActor::AddInstanceComponent(param_2,(UActorComponent *)pUVar5);
  (**(code **)(*(longlong *)pUVar5 + 0x508))
            (pUVar5,(param_2->RootComponent).field0_0x0.DebugPtr,
             &FAttachmentTransformRules::KeepRelativeTransform,0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UGizmoViewContext *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  *(UGizmoViewContext **)&pUVar5->field_0x570 = param_3;
  pUVar5->field_0x578 = param_3 != (UGizmoViewContext *)0x0;
  dVar2 = (param_5->field0_0x0)._s_0.Y;
  (pUVar5->Normal).field0_0x0._s_0.X = (param_5->field0_0x0)._s_0.X;
  (pUVar5->Normal).field0_0x0._s_0.Y = dVar2;
  (pUVar5->Normal).field0_0x0._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  *(undefined8 *)&pUVar5->field_0x550 = *(undefined8 *)&param_4->field0_0x0;
  *(undefined8 *)&pUVar5->field_0x558 = uVar3;
  pUVar5->Radius = param_6;
  UActorComponent::RegisterComponent((UActorComponent *)pUVar5);
  return pUVar5;
}

// AddDefaultLineHandleComponent @ 149647730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoLineHandleComponent * __cdecl
AGizmoActor::AddDefaultLineHandleComponent
          (UWorld *param_1,AActor *param_2,UGizmoViewContext *param_3,FLinearColor *param_4,
          TVector<double> *param_5,TVector<double> *param_6,float param_7,bool param_8)

{
  double dVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  UGizmoLineHandleComponent *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_e8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (param_3 == (UGizmoViewContext *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3467743465075376013>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoActor.cpp"
                       ,0x73,"GizmoViewContext");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UGizmoLineHandleComponent *)(*pcVar2)();
      return pUVar5;
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UGizmoLineHandleComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  local_a8._8_8_ = param_2;
  pUVar5 = (UGizmoLineHandleComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  AActor::AddInstanceComponent(param_2,(UActorComponent *)pUVar5);
  (**(code **)(pUVar5->_padding_ + 0x508))
            (pUVar5,(param_2->RootComponent).field0_0x0.DebugPtr,
             &FAttachmentTransformRules::KeepRelativeTransform,0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UGizmoViewContext *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  pUVar5->_padding_ = (longlong)param_3;
  *(bool *)&pUVar5->_padding_ = param_3 != (UGizmoViewContext *)0x0;
  dVar1 = (param_5->field0_0x0)._s_0.Y;
  (pUVar5->Normal).field0_0x0._s_0.X = (param_5->field0_0x0)._s_0.X;
  (pUVar5->Normal).field0_0x0._s_0.Y = dVar1;
  (pUVar5->Normal).field0_0x0._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  dVar1 = (param_6->field0_0x0)._s_0.Y;
  (pUVar5->Direction).field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
  (pUVar5->Direction).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_6->field0_0x0)._s_0.Z;
  pUVar5->bImageScale = param_8;
  pUVar5->Length = param_7;
  (pUVar5->Direction).field0_0x0._s_0.Z = dVar1;
  lVar3 = *(longlong *)((longlong)&param_4->field0_0x0 + 8);
  pUVar5->_padding_ = *(longlong *)&param_4->field0_0x0;
  pUVar5->_padding_ = lVar3;
  UActorComponent::RegisterComponent((UActorComponent *)pUVar5);
  return pUVar5;
}

// AddDefaultRectangleComponent @ 1496478e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoRectangleComponent * __cdecl
AGizmoActor::AddDefaultRectangleComponent
          (UWorld *param_1,AActor *param_2,UGizmoViewContext *param_3,FLinearColor *param_4,
          TVector<double> *param_5,TVector<double> *param_6)

{
  code *pcVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  UGizmoRectangleComponent *pUVar6;
  UClass *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_e8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (param_3 == (UGizmoViewContext *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3467743465075376073>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoActor.cpp"
                       ,0x37,"GizmoViewContext");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pUVar6 = (UGizmoRectangleComponent *)(*pcVar1)();
      return pUVar6;
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UGizmoRectangleComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar7);
  local_a8._8_8_ = param_2;
  pUVar6 = (UGizmoRectangleComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar8 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  AActor::AddInstanceComponent(param_2,(UActorComponent *)pUVar6);
  (**(code **)(pUVar6->_padding_ + 0x508))
            (pUVar6,(param_2->RootComponent).field0_0x0.DebugPtr,
             &FAttachmentTransformRules::KeepRelativeTransform,0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UGizmoViewContext *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  pUVar6->_padding_ = (longlong)param_3;
  *(bool *)&pUVar6->_padding_ = param_3 != (UGizmoViewContext *)0x0;
  dVar2 = (param_5->field0_0x0)._s_0.Y;
  (pUVar6->DirectionX).field0_0x0._s_0.X = (param_5->field0_0x0)._s_0.X;
  (pUVar6->DirectionX).field0_0x0._s_0.Y = dVar2;
  (pUVar6->DirectionX).field0_0x0._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  dVar2 = (param_6->field0_0x0)._s_0.Y;
  (pUVar6->DirectionY).field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
  (pUVar6->DirectionY).field0_0x0._s_0.Y = dVar2;
  (pUVar6->DirectionY).field0_0x0._s_0.Z = (param_6->field0_0x0)._s_0.Z;
  lVar3 = *(longlong *)&param_4->field0_0x0;
  lVar4 = *(longlong *)((longlong)&param_4->field0_0x0 + 8);
  pUVar6->LengthY = 30.0;
  pUVar6->LengthX = 30.0;
  pUVar6->_padding_ = lVar3;
  pUVar6->_padding_ = lVar4;
  pUVar6->SegmentFlags = '\x06';
  UActorComponent::RegisterComponent((UActorComponent *)pUVar6);
  return pUVar6;
}

// GetPrivateStaticClass @ 149655410

UClass * __cdecl AGizmoActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGizmoActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoActor",
               &Z_Registration_Info_UClass_AGizmoActor.InnerSingleton,
               StaticRegisterNativesAGizmoActor,0x2c8,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<AGizmoActor>,
               InternalVTableHelperCtorCaller<AGizmoActor>,local_res8,
               AInternalToolFrameworkActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGizmoActor.InnerSingleton;
}

// StaticRegisterNativesAGizmoActor @ 149664960

void __cdecl AGizmoActor::StaticRegisterNativesAGizmoActor(void)

{
  return;
}

