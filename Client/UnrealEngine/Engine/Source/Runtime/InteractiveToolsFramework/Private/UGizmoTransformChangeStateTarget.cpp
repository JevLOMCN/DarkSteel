// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 11

// StaticClass @ 149670b50

UClass * __cdecl UGizmoTransformChangeStateTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoTransformChangeStateTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoTransformChangeStateTarget",
               &Z_Registration_Info_UClass_UGizmoTransformChangeStateTarget.InnerSingleton,
               StaticRegisterNativesUGizmoTransformChangeStateTarget,0x140,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoTransformChangeStateTarget>,
               InternalVTableHelperCtorCaller<UGizmoTransformChangeStateTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoTransformChangeStateTarget.InnerSingleton;
}

// UGizmoTransformChangeStateTarget @ 149686650

UGizmoTransformChangeStateTarget * __thiscall
UGizmoTransformChangeStateTarget::UGizmoTransformChangeStateTarget
          (UGizmoTransformChangeStateTarget *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->TargetComponent).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&_vftable__for__IGizmoStateTarget__;
  FText::FText(&this->ChangeDescription);
  *(undefined8 *)&this->TransactionManager = 0;
  *(undefined8 *)&(this->TransactionManager).field_0x8 = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->InitialTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->InitialTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->InitialTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->InitialTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->InitialTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->InitialTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->FinalTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->FinalTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->FinalTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->FinalTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->FinalTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->FinalTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->FinalTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->FinalTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->FinalTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->FinalTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->FinalTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->FinalTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->DependentChangeSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DependentChangeSources).ArrayNum = 0;
  (this->DependentChangeSources).ArrayMax = 0;
  (this->ExternalDependentChangeSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalDependentChangeSources).ArrayNum = 0;
  (this->ExternalDependentChangeSources).ArrayMax = 0;
  return this;
}

// UGizmoTransformChangeStateTarget @ 149686770

UGizmoTransformChangeStateTarget * __thiscall
UGizmoTransformChangeStateTarget::UGizmoTransformChangeStateTarget
          (UGizmoTransformChangeStateTarget *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->TargetComponent).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&_vftable__for__IGizmoStateTarget__;
  FText::FText(&this->ChangeDescription);
  *(undefined8 *)&this->TransactionManager = 0;
  *(undefined8 *)&(this->TransactionManager).field_0x8 = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->InitialTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->InitialTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->InitialTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->InitialTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->InitialTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->InitialTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->FinalTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->FinalTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->FinalTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->FinalTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->FinalTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->FinalTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->FinalTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->FinalTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->FinalTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->FinalTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->FinalTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->FinalTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->DependentChangeSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DependentChangeSources).ArrayNum = 0;
  (this->DependentChangeSources).ArrayMax = 0;
  (this->ExternalDependentChangeSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalDependentChangeSources).ArrayNum = 0;
  (this->ExternalDependentChangeSources).ArrayMax = 0;
  return this;
}

// ~UGizmoTransformChangeStateTarget @ 14968a220

void __thiscall
UGizmoTransformChangeStateTarget::~UGizmoTransformChangeStateTarget
          (UGizmoTransformChangeStateTarget *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoStateTarget__;
  pFVar1 = (this->ExternalDependentChangeSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource>_>,int>
            ((TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource>_> *)
             (this->DependentChangeSources).AllocatorInstance.Data,
             (this->DependentChangeSources).ArrayNum);
  pFVar1 = (this->DependentChangeSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->ChangeDescription).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IGizmoStateTarget__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginUpdate @ 149693640

void __thiscall
UGizmoTransformChangeStateTarget::BeginUpdate(UGizmoTransformChangeStateTarget *this)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  UObject *pUVar8;
  undefined8 *puVar9;
  undefined1 local_res8 [8];
  
  bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar7) {
    if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
      (**(code **)(*(longlong *)this->_padding_ + 0x10))
                ((longlong *)this->_padding_,&this->_padding_);
    }
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    uVar5 = *(undefined4 *)&pUVar8[0xc].field_0x18;
    uVar6 = *(undefined4 *)&pUVar8[0xc].field_0x1c;
    (this->ChangeDescription).TextData.Reference = *(ITextData **)&pUVar8[0xc].field_0x10;
    (this->ChangeDescription).Flags = uVar5;
    *(undefined4 *)&(this->ChangeDescription).field_0xc = uVar6;
    uVar3 = *(undefined8 *)(pUVar8 + 0xd);
    *(undefined8 *)&this->TransactionManager = *(undefined8 *)&pUVar8[0xc].field_0x20;
    *(undefined8 *)&(this->TransactionManager).field_0x8 = uVar3;
    dVar4 = *(double *)&pUVar8[0xd].field_0x10;
    this->_padding_ = *(longlong *)&pUVar8[0xd].field_0x8;
    (this->InitialTransform).Rotation.XY.m128d_f64[0] = dVar4;
    dVar4 = *(double *)&pUVar8[0xd].field_0x20;
    (this->InitialTransform).Rotation.XY.m128d_f64[1] = *(double *)&pUVar8[0xd].field_0x18;
    (this->InitialTransform).Rotation.ZW.m128d_f64[0] = dVar4;
    dVar4 = *(double *)&pUVar8[0xe].field_0x8;
    (this->InitialTransform).Rotation.ZW.m128d_f64[1] = *(double *)(pUVar8 + 0xe);
    (this->InitialTransform).Translation.XY.m128d_f64[0] = dVar4;
    dVar4 = *(double *)&pUVar8[0xe].field_0x18;
    (this->InitialTransform).Translation.XY.m128d_f64[1] = *(double *)&pUVar8[0xe].field_0x10;
    (this->InitialTransform).Translation.ZW.m128d_f64[0] = dVar4;
    puVar9 = (undefined8 *)(this->FinalTransform).Translation.ZW.m128d_f64[1];
    iVar2 = *(int *)(this->FinalTransform).Scale3D.XY.m128d_f64;
    puVar1 = puVar9 + iVar2;
    while( true ) {
      if (*(int *)(this->FinalTransform).Scale3D.XY.m128d_f64 != iVar2) {
        `TCheckedPointerIterator<TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar9 == puVar1) break;
      (**(code **)(*(longlong *)*puVar9 + 8))();
      puVar9 = puVar9 + 1;
    }
    puVar9 = (undefined8 *)(this->FinalTransform).Scale3D.XY.m128d_f64[1];
    iVar2 = *(int *)(this->FinalTransform).Scale3D.ZW.m128d_f64;
    puVar1 = puVar9 + iVar2;
    while( true ) {
      if (*(int *)(this->FinalTransform).Scale3D.ZW.m128d_f64 != iVar2) {
        `TCheckedPointerIterator<IToolCommandChangeSource_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar9 == puVar1) break;
      (**(code **)(*(longlong *)*puVar9 + 8))();
      puVar9 = puVar9 + 1;
    }
  }
  return;
}

// Construct @ 149699f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoTransformChangeStateTarget * __cdecl
UGizmoTransformChangeStateTarget::Construct
          (USceneComponent *param_1,FText *param_2,IToolContextTransactionProvider *param_3,
          UObject *param_4)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  UClass *pUVar3;
  UGizmoTransformChangeStateTarget *pUVar4;
  UObject *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  FString local_c8;
  FString local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FObjectInitializer::AssertIfInConstructor
            (param_4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._8_8_ = param_4;
  pUVar4 = (UGizmoTransformChangeStateTarget *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(pUVar4->TargetComponent).WeakPtr,(FObjectPtr)&local_c8);
  pIVar1 = (param_2->TextData).Reference;
  pIVar2 = (pUVar4->ChangeDescription).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (pUVar4->ChangeDescription).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_c8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (pUVar4->ChangeDescription).Flags = param_2->Flags;
  *(IToolContextTransactionProvider **)&(pUVar4->TransactionManager).field_0x8 = param_3;
  if (param_3 != (IToolContextTransactionProvider *)0x0) {
    pUVar5 = (UObject *)(**(code **)((longlong)*param_3 + 8))(param_3);
    if (pUVar5 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      *(UObject **)&pUVar4->TransactionManager = pUVar5;
      return pUVar4;
    }
    pFVar6 = GetTypeName<UObject>(&local_c8);
    pwVar7 = L"";
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar6 = GetFullNameForCastLogError<IToolContextTransactionProvider>(&local_b8,param_3);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar8);
  }
  pFVar6 = GetTypeName<UObject>(&local_c8);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// EndUpdate @ 14969dd80

void __thiscall UGizmoTransformChangeStateTarget::EndUpdate(UGizmoTransformChangeStateTarget *this)

{
  TTransform<double> *pTVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  double dVar5;
  bool bVar6;
  UObject *pUVar7;
  FComponentWorldTransformChange *pFVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  FComponentWorldTransformChange *pFVar14;
  FComponentWorldTransformChange *local_res8;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_68 [2];
  longlong *local_58 [3];
  
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar6) {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar1 = (TTransform<double> *)((this->InitialTransform).Translation.ZW.m128d_f64 + 1);
    dVar5 = *(double *)&pUVar7[0xc].field_0x18;
    (pTVar1->Rotation).XY.m128d_f64[0] = *(double *)&pUVar7[0xc].field_0x10;
    (this->InitialTransform).Scale3D.XY.m128d_f64[0] = dVar5;
    dVar5 = *(double *)(pUVar7 + 0xd);
    (this->InitialTransform).Scale3D.XY.m128d_f64[1] = *(double *)&pUVar7[0xc].field_0x20;
    (this->InitialTransform).Scale3D.ZW.m128d_f64[0] = dVar5;
    dVar5 = *(double *)&pUVar7[0xd].field_0x10;
    (this->InitialTransform).Scale3D.ZW.m128d_f64[1] = *(double *)&pUVar7[0xd].field_0x8;
    (this->FinalTransform).Rotation.XY.m128d_f64[0] = dVar5;
    dVar5 = *(double *)&pUVar7[0xd].field_0x20;
    (this->FinalTransform).Rotation.XY.m128d_f64[1] = *(double *)&pUVar7[0xd].field_0x18;
    (this->FinalTransform).Rotation.ZW.m128d_f64[0] = dVar5;
    dVar5 = *(double *)&pUVar7[0xe].field_0x8;
    (this->FinalTransform).Rotation.ZW.m128d_f64[1] = *(double *)(pUVar7 + 0xe);
    (this->FinalTransform).Translation.XY.m128d_f64[0] = dVar5;
    dVar5 = *(double *)&pUVar7[0xe].field_0x18;
    (this->FinalTransform).Translation.XY.m128d_f64[1] = *(double *)&pUVar7[0xe].field_0x10;
    (this->FinalTransform).Translation.ZW.m128d_f64[0] = dVar5;
    if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
      pFVar8 = ::operator_new(0x100);
      pFVar14 = (FComponentWorldTransformChange *)0x0;
      local_res8 = pFVar14;
      if (pFVar8 != (FComponentWorldTransformChange *)0x0) {
        local_res8 = FComponentWorldTransformChange::FComponentWorldTransformChange
                               (pFVar8,(TTransform<double> *)&this->ChangeDescription,pTVar1);
      }
      pFVar8 = pFVar14;
      if (this->_padding_ != 0) {
        pFVar8 = (FComponentWorldTransformChange *)this->_padding_;
      }
      pcVar3 = *(code **)(pFVar8->_padding_ + 0x20);
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (*pcVar3)(pFVar8,pUVar7,&local_res8,&this->_padding_);
      plVar13 = (longlong *)(this->FinalTransform).Translation.ZW.m128d_f64[1];
      iVar2 = *(int *)(this->FinalTransform).Scale3D.XY.m128d_f64;
      plVar12 = plVar13 + iVar2;
      local_res18 = plVar12;
      while( true ) {
        if (*(int *)(this->FinalTransform).Scale3D.XY.m128d_f64 != iVar2) {
          `TCheckedPointerIterator<TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
        }
        if (plVar13 == plVar12) break;
        (**(code **)(*(longlong *)*plVar13 + 0x10))((longlong *)*plVar13,&local_res10);
        if (local_res10 != (longlong *)0x0) {
          uVar9 = (**(code **)(*(longlong *)*plVar13 + 0x18))();
          pFVar8 = pFVar14;
          if (this->_padding_ != 0) {
            pFVar8 = (FComponentWorldTransformChange *)this->_padding_;
          }
          pcVar3 = *(code **)(pFVar8->_padding_ + 0x20);
          uVar10 = (**(code **)(*(longlong *)*plVar13 + 0x20))((longlong *)*plVar13,local_68);
          local_res20 = local_res10;
          local_res10 = (longlong *)0x0;
          (*pcVar3)(pFVar8,uVar9,&local_res20,uVar10);
          if (local_68[0] != (longlong *)0x0) {
            (**(code **)(*local_68[0] + 0x10))();
          }
          plVar12 = local_res18;
          if (local_res10 != (longlong *)0x0) {
            (**(code **)(*local_res10 + 0x48))(local_res10,1);
          }
        }
        plVar13 = plVar13 + 1;
      }
      iVar2 = *(int *)(this->FinalTransform).Scale3D.ZW.m128d_f64;
      uVar11 = (ulonglong)iVar2;
      plVar13 = (longlong *)(this->FinalTransform).Scale3D.XY.m128d_f64[1];
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar2);
      plVar12 = plVar13 + uVar11;
      local_res20 = plVar12;
      while( true ) {
        if (*(int *)(this->FinalTransform).Scale3D.ZW.m128d_f64 != (int)uVar11) {
          `TCheckedPointerIterator<IToolCommandChangeSource_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_res8);
        }
        if (plVar13 == plVar12) break;
        plVar4 = (longlong *)*plVar13;
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_res18);
        if (local_res18 != (longlong *)0x0) {
          uVar9 = (**(code **)(*plVar4 + 0x18))(plVar4);
          pFVar8 = pFVar14;
          if (this->_padding_ != 0) {
            pFVar8 = (FComponentWorldTransformChange *)this->_padding_;
          }
          pcVar3 = *(code **)(pFVar8->_padding_ + 0x20);
          uVar10 = (**(code **)(*plVar4 + 0x20))(plVar4,local_58);
          local_68[0] = local_res18;
          local_res18 = (longlong *)0x0;
          (*pcVar3)(pFVar8,uVar9,local_68,uVar10);
          if (local_58[0] != (longlong *)0x0) {
            (**(code **)(*local_58[0] + 0x10))();
          }
          plVar12 = local_res20;
          if (local_res18 != (longlong *)0x0) {
            (**(code **)(*local_res18 + 0x48))(local_res18,1);
          }
        }
        uVar11 = (ulonglong)local_res10 & 0xffffffff;
        plVar13 = plVar13 + 1;
      }
      if (this->_padding_ != 0) {
        pFVar14 = (FComponentWorldTransformChange *)this->_padding_;
      }
      (**(code **)(pFVar14->_padding_ + 0x18))(pFVar14);
    }
  }
  return;
}

// GetPrivateStaticClass @ 1496a6450

UClass * __cdecl UGizmoTransformChangeStateTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoTransformChangeStateTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoTransformChangeStateTarget",
               &Z_Registration_Info_UClass_UGizmoTransformChangeStateTarget.InnerSingleton,
               StaticRegisterNativesUGizmoTransformChangeStateTarget,0x140,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoTransformChangeStateTarget>,
               InternalVTableHelperCtorCaller<UGizmoTransformChangeStateTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoTransformChangeStateTarget.InnerSingleton;
}

// StaticRegisterNativesUGizmoTransformChangeStateTarget @ 1496c2b80

void __cdecl
UGizmoTransformChangeStateTarget::StaticRegisterNativesUGizmoTransformChangeStateTarget(void)

{
  return;
}

// __VTableCtorCaller @ 1496ca0f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UGizmoTransformChangeStateTarget::__VTableCtorCaller(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    *(undefined ***)pUVar4 = &_vftable__for__UObject__;
    *(undefined ***)(pUVar4 + 1) = &_vftable__for__IGizmoStateTarget__;
    FText::FText((FText *)&pUVar4[1].field_0x10);
    *(undefined8 *)&pUVar4[1].field_0x20 = 0;
    *(undefined8 *)(pUVar4 + 2) = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[2].field_0x10 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[2].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[2].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 3) = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[3].field_0x8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[3].field_0x10 = (double)fVar1;
    *(double *)&pUVar4[3].field_0x18 = (double)fVar2;
    *(double *)&pUVar4[3].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)(pUVar4 + 4) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[4].field_0x8 = (double)fVar1;
    *(double *)&pUVar4[4].field_0x10 = (double)fVar2;
    *(double *)&pUVar4[4].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[4].field_0x20 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)(pUVar4 + 5) = (double)fVar1;
    *(double *)&pUVar4[5].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[5].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[5].field_0x18 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[5].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 6) = (double)fVar2;
    *(double *)&pUVar4[6].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[6].field_0x10 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[6].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[6].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 7) = (double)fVar3;
    *(undefined8 *)&pUVar4[7].field_0x8 = 0;
    *(undefined8 *)&pUVar4[7].field_0x10 = 0;
    *(undefined8 *)&pUVar4[7].field_0x18 = 0;
    *(undefined8 *)&pUVar4[7].field_0x20 = 0;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// _getUObject @ 1496ca820

UObject * __thiscall
UGizmoTransformChangeStateTarget::_getUObject(UGizmoTransformChangeStateTarget *this)

{
  return (UObject *)(this[-1].FinalTransform.Scale3D.ZW.m128d_f64 + 1);
}

