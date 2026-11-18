// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 39

// StaticClass @ 14a202fe0

UClass * __cdecl UTransformableControlHandle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformableControlHandle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"TransformableControlHandle",
               &Z_Registration_Info_UClass_UTransformableControlHandle.InnerSingleton,
               StaticRegisterNativesUTransformableControlHandle,0x150,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransformableControlHandle>,
               InternalVTableHelperCtorCaller<UTransformableControlHandle>,local_res8,
               UTransformableHandle::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformableControlHandle.InnerSingleton;
}

// UTransformableControlHandle @ 14a223330

UTransformableControlHandle * __thiscall
UTransformableControlHandle::UTransformableControlHandle
          (UTransformableControlHandle *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *this_01;
  undefined8 local_res8;
  
  UTransformableHandle::UTransformableHandle((UTransformableHandle *)this,param_1);
  this_00 = &(this->ControlRig).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UTransformableControlHandle__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ControlRig).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ControlRig).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ControlRig).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ControlRig).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this_01 = &(this->EvaluationTask).SkeletalMeshComponent;
  (this->ControlName).ComparisonIndex = 0;
  (this->ControlName).Number = 0;
  (this->EvaluationTask).Guid.A = 0;
  (this->EvaluationTask).Guid.B = 0;
  (this->EvaluationTask).Guid.C = 0;
  (this->EvaluationTask).Guid.D = 0;
  this_01->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_01->WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&(this->EvaluationTask).PostEvaluationFunction = 0;
  *(undefined8 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x28 = 0;
  *&(this->Cache).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Cache).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Cache).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Cache).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Cache).Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  *&(this->Cache).Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
  ;
  return this;
}

// UTransformableControlHandle @ 14a223420

UTransformableControlHandle * __thiscall
UTransformableControlHandle::UTransformableControlHandle
          (UTransformableControlHandle *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *this_01;
  undefined8 local_res8;
  
  UTransformableHandle::UTransformableHandle((UTransformableHandle *)this,param_1);
  this_00 = &(this->ControlRig).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UTransformableControlHandle__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ControlRig).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ControlRig).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ControlRig).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ControlRig).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this_01 = &(this->EvaluationTask).SkeletalMeshComponent;
  (this->ControlName).ComparisonIndex = 0;
  (this->ControlName).Number = 0;
  (this->EvaluationTask).Guid.A = 0;
  (this->EvaluationTask).Guid.B = 0;
  (this->EvaluationTask).Guid.C = 0;
  (this->EvaluationTask).Guid.D = 0;
  this_01->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_01->WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&(this->EvaluationTask).PostEvaluationFunction = 0;
  *(undefined8 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x28 = 0;
  *&(this->Cache).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Cache).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Cache).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Cache).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Cache).Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  *&(this->Cache).Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
  ;
  return this;
}

// ~UTransformableControlHandle @ 14a2270d0

void __thiscall
UTransformableControlHandle::~UTransformableControlHandle(UTransformableControlHandle *this)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UTransformableControlHandle__6B_;
  UnregisterDelegates(this);
  if (*(longlong *)&(this->EvaluationTask).PostEvaluationFunction != 0) {
    plVar1 = *(longlong **)&(this->EvaluationTask).PostEvaluationFunction.field_0x28;
    plVar3 = (longlong *)&(this->EvaluationTask).PostEvaluationFunction.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pvVar2 = *(void **)&(this->ControlRig).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UTransformableHandle::~UTransformableHandle((UTransformableHandle *)this);
  return;
}

// operator() @ 14a22f290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UTransformableControlHandle::GetEvaluationTask'::__l14::<lambda_1>::operator()(void *this)

{
  double *pdVar1;
  bool bVar2;
  URigHierarchy *this_00;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0xc));
  if (bVar2) {
    this_00 = (URigHierarchy *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0xc));
    if ((this_00 != (URigHierarchy *)0x0) && (-1 < *(int *)((longlong)this + 8))) {
      URigHierarchy::GetGlobalTransformByIndex(this_00,&local_78,*(int *)((longlong)this + 8),false)
      ;
      pdVar1 = *(double **)this;
      *pdVar1 = local_78.Rotation.XY.m128d_f64[0];
      pdVar1[1] = local_78.Rotation.XY.m128d_f64[1];
      pdVar1[2] = local_78.Rotation.ZW.m128d_f64[0];
      pdVar1[3] = local_78.Rotation.ZW.m128d_f64[1];
      pdVar1[4] = local_78.Translation.XY.m128d_f64[0];
      pdVar1[5] = local_78.Translation.XY.m128d_f64[1];
      pdVar1[6] = local_78.Translation.ZW.m128d_f64[0];
      pdVar1[7] = local_78.Translation.ZW.m128d_f64[1];
      pdVar1[8] = local_78.Scale3D.XY.m128d_f64[0];
      pdVar1[9] = local_78.Scale3D.XY.m128d_f64[1];
      pdVar1[10] = local_78.Scale3D.ZW.m128d_f64[0];
      pdVar1[0xb] = local_78.Scale3D.ZW.m128d_f64[1];
    }
  }
  return;
}

// AddTransformKeys @ 14a23d770

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UTransformableControlHandle::AddTransformKeys
          (UTransformableControlHandle *this,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          EMovieSceneTransformChannel *param_3,FFrameRate *param_4,UMovieSceneSection *param_5,
          bool param_6)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UControlRig *this_00;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  TTransform<double> *pTVar12;
  uint uVar13;
  longlong in_stack_ffffffffffffffa0;
  uint7 uVar14;
  FRigControlModifiedContext local_40;
  
  pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar7 != (UObject *)0x0) {
    pUVar8 = UControlRig::StaticClass();
    iVar9 = (int)pUVar8->_padding_;
    if ((((iVar9 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
          &pUVar8->_padding_)) && (pFVar1 = &this->ControlName, *pFVar1 != (FName)0x0)) &&
       ((iVar9 = param_1->ArrayNum, iVar9 != 0 && (iVar9 == param_2->ArrayNum)))) {
      local_40.KeyMask = *param_3;
      uVar13 = 0;
      local_40.LocalTime = 3.4028235e+38;
      local_40.EventName.ComparisonIndex.Value = 0;
      local_40.EventName.Number = 0;
      local_40.bConstraintUpdate = false;
      local_40.SetKey = Always;
      if (0 < iVar9) {
        lVar11 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar13 < iVar9) {
            uVar6 = ~uVar13 >> 0x1f;
          }
          if (uVar6 == 0) {
            in_stack_ffffffffffffffa0 = (longlong)iVar9;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          lVar10 = (longlong)param_2->ArrayNum;
          uVar6 = 0;
          if ((int)uVar13 < param_2->ArrayNum) {
            uVar6 = ~uVar13 >> 0x1f;
          }
          local_40.LocalTime =
               (float)((longlong)*(int *)((param_1->AllocatorInstance).Data + lVar11) *
                      (longlong)param_4->Denominator) / (float)param_4->Numerator;
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             in_stack_ffffffffffffffa0 = lVar10, bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          pTVar12 = (TTransform<double> *)
                    ((param_2->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x60);
          this_00 = (UControlRig *)
                    TPersistentObjectPtr<FSoftObjectPath>::Get
                              ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
          if (this_00 == (UControlRig *)0x0) {
LAB_14a23d965:
            this_00 = (UControlRig *)0x0;
          }
          else {
            pUVar8 = UControlRig::StaticClass();
            iVar9 = (int)pUVar8->_padding_;
            if ((*(int *)(this_00->_padding_ + 0x38) < iVar9) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
                &pUVar8->_padding_)) goto LAB_14a23d965;
          }
          uVar14 = (uint7)((ulonglong)in_stack_ffffffffffffffa0 >> 8);
          if (param_6) {
            in_stack_ffffffffffffffa0 = (ulonglong)uVar14 << 8;
            (**(code **)(this_00->_padding_ + 0x400))
                      (this_00,pFVar1,pTVar12,1,&local_40,in_stack_ffffffffffffffa0,1);
          }
          else {
            in_stack_ffffffffffffffa0 = (ulonglong)uVar14 << 8;
            UControlRig::SetControlGlobalTransform
                      (this_00,pFVar1,pTVar12,true,&local_40,false,true,false);
          }
          cVar5 = (**(code **)(this_00->_padding_ + 0x490))(this_00);
          if (cVar5 != '\0') {
            (**(code **)(this_00->_padding_ + 0x2d0))(this_00);
          }
          iVar9 = param_1->ArrayNum;
          uVar13 = uVar13 + 1;
          lVar11 = lVar11 + 4;
        } while ((int)uVar13 < iVar9);
      }
      return true;
    }
  }
  return false;
}

// ComputeHash @ 14a246d90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __cdecl UTransformableControlHandle::ComputeHash(UControlRig *param_1,FName *param_2)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FVar1 = *param_2;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar4 = (uVar3 >> 0x10 ^ uVar3) - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar2 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar3 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  return (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// Duplicate @ 14a250980

UTransformableHandle * __thiscall
UTransformableControlHandle::Duplicate(UTransformableControlHandle *this,UObject *param_1)

{
  FName FVar1;
  UClass *pUVar2;
  UTransformableHandle *pUVar3;
  
  FVar1 = (FName)this->_padding_;
  pUVar2 = StaticClass();
  pUVar3 = (UTransformableHandle *)DuplicateObject_Internal(pUVar2,(UObject *)this,param_1,FVar1);
  pUVar3[1]._padding_ = *(longlong *)&(this->ControlRig).SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&pUVar3[1]._padding_,
             (FSoftObjectPath *)&(this->ControlRig).SoftObjectPtr.field_0x8);
  *(FName *)&pUVar3[1].bNotifying = this->ControlName;
  return pUVar3;
}

// GetBoundComponent @ 14a25f950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

USceneComponent * __thiscall
UTransformableControlHandle::GetBoundComponent(UTransformableControlHandle *this)

{
  USkeletalMeshComponent *pUVar1;
  UControlRigComponent *pUVar2;
  
  pUVar1 = GetSkeletalMesh(this);
  if (pUVar1 == (USkeletalMeshComponent *)0x0) {
    pUVar2 = GetControlRigComponent(this);
    return (USceneComponent *)pUVar2;
  }
  return (USceneComponent *)pUVar1;
}

// GetControlElement @ 14a260190

FRigControlElement * __thiscall
UTransformableControlHandle::GetControlElement(UTransformableControlHandle *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FRigControlElement *pFVar4;
  
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar2 == (UObject *)0x0) {
    return (FRigControlElement *)0x0;
  }
  pUVar3 = UControlRig::StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if (*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) {
    return (FRigControlElement *)0x0;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar3->_padding_) {
    return (FRigControlElement *)0x0;
  }
  if (this->ControlName == (FName)0x0) {
    return (FRigControlElement *)0x0;
  }
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = UControlRig::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14a26022a;
  }
  pUVar2 = (UObject *)0x0;
LAB_14a26022a:
                    /* WARNING: Could not recover jumptable at 0x00014a260242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FRigControlElement *)
           (**(code **)(*(longlong *)pUVar2 + 0x3c8))(pUVar2,&this->ControlName);
  return pFVar4;
}

// GetControlRigComponent @ 14a2609d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRigComponent * __thiscall
UTransformableControlHandle::GetControlRigComponent(UTransformableControlHandle *this)

{
  int iVar1;
  longlong *plVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UControlRigComponent *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar3 == (UObject *)0x0) {
LAB_14a260aab:
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pUVar4 = UControlRig::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14a260aab;
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
    if (pUVar3 == (UObject *)0x0) {
LAB_14a260a50:
      pUVar3 = (UObject *)0x0;
    }
    else {
      pUVar4 = UControlRig::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) goto LAB_14a260a50;
    }
    plVar2 = *(longlong **)&pUVar3[0x17].field_0x8;
    pTVar6 = *(TReferenceControllerBase<1> **)&pUVar3[0x17].field_0x10;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if ((plVar2 != (longlong *)0x0) &&
       (pUVar5 = (UControlRigComponent *)(**(code **)(*plVar2 + 0x28))(plVar2),
       pUVar5 != (UControlRigComponent *)0x0)) {
      pUVar4 = UControlRigComponent::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) goto LAB_14a260ab6;
    }
  }
  pUVar5 = (UControlRigComponent *)0x0;
LAB_14a260ab6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return pUVar5;
}

// GetDoubleChannels @ 14a2622a0

TArrayView<FMovieSceneDoubleChannel_*,int> * __thiscall
UTransformableControlHandle::GetDoubleChannels
          (UTransformableControlHandle *this,
          TArrayView<FMovieSceneDoubleChannel_*,int> *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  *__return_storage_ptr__ = EmptyChannelsView;
  return __return_storage_ptr__;
}

// GetEvaluationBinding @ 14a2634a0

FControlEvaluationGraphBinding * __cdecl UTransformableControlHandle::GetEvaluationBinding(void)

{
  return &EvaluationBinding;
}

// GetEvaluationTask @ 14a2634b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FAnimationEvaluationTask * __thiscall
UTransformableControlHandle::GetEvaluationTask(UTransformableControlHandle *this)

{
  FAnimationEvaluationTask *pFVar1;
  int iVar2;
  URigHierarchy *this_00;
  undefined8 uVar3;
  FWeakObjectPtr *pFVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  FRigControlElement *pFVar12;
  FWeakObjectPtr FVar13;
  FGuid *pFVar14;
  UObject *pUVar15;
  UClass *pUVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  FWeakObjectPtr *pFVar19;
  undefined1 auStack_b8 [32];
  FWeakObjectPtr local_98;
  FGuid local_90;
  int iStack_80;
  undefined4 uStack_7c;
  code *local_78;
  undefined8 uStack_70;
  FWeakObjectPtr local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar12 = GetControlElement(this);
  if ((pFVar12 == (FRigControlElement *)0x0) ||
     (FVar13 = (FWeakObjectPtr)GetSkeletalMesh(this), FVar13 == (FWeakObjectPtr)0x0)) {
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = (FWeakObjectPtr *)0x0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    local_78 = (code *)0x0;
    uStack_70 = 0;
    local_68.ObjectIndex = 0;
    local_68.ObjectSerialNumber = 0;
    local_98.ObjectIndex = 0;
    local_98.ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_98);
    *(code **)&(this->EvaluationTask).Guid = local_78;
    (this->EvaluationTask).Guid.C = (undefined4)uStack_70;
    (this->EvaluationTask).Guid.D = uStack_70._4_4_;
    (this->EvaluationTask).SkeletalMeshComponent.WeakPtr = local_68;
    local_58 = *(longlong *)&(this->EvaluationTask).PostEvaluationFunction;
    uVar5 = *(undefined8 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x8;
    lVar6 = *(longlong *)&(this->EvaluationTask).PostEvaluationFunction.field_0x10;
    uVar7 = *(undefined8 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x18;
    uVar3 = *(undefined8 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x20;
    plStack_30 = *(longlong **)&(this->EvaluationTask).PostEvaluationFunction.field_0x28;
    *(undefined8 *)&(this->EvaluationTask).PostEvaluationFunction = 0;
    *(FWeakObjectPtr **)&(this->EvaluationTask).PostEvaluationFunction.field_0x8 = uStack_50;
    *(undefined4 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x10 = (undefined4)local_48;
    *(undefined4 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x14 = local_48._4_4_;
    *(undefined4 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x18 = (undefined4)uStack_40
    ;
    *(undefined4 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x1c = uStack_40._4_4_;
    *(undefined4 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x20 = (undefined4)local_38;
    *(undefined4 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x24 = local_38._4_4_;
    *(undefined4 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x28 = 0;
    *(undefined4 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x2c = 0;
    uStack_50 = (FWeakObjectPtr *)uVar5;
    local_48 = lVar6;
    uStack_40 = uVar7;
    local_38 = uVar3;
    if (local_58 != 0) {
      plVar18 = &local_48;
      if (plStack_30 != (longlong *)0x0) {
        plVar18 = plStack_30;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    goto LAB_14a263798;
  }
  pFVar1 = &this->EvaluationTask;
  if ((((this->EvaluationTask).Guid.D == 0 && (this->EvaluationTask).Guid.C == 0) &&
      (this->EvaluationTask).Guid.B == 0) && (pFVar1->Guid).A == 0) {
    pFVar14 = FGuid::NewGuid(&local_90);
    uVar11 = pFVar14->B;
    uVar8 = pFVar14->C;
    uVar9 = pFVar14->D;
    (pFVar1->Guid).A = pFVar14->A;
    (pFVar1->Guid).B = uVar11;
    (this->EvaluationTask).Guid.C = uVar8;
    (this->EvaluationTask).Guid.D = uVar9;
  }
  bVar10 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::
           UEOpEquals<USkeletalMeshComponent,bool>
                     (&(this->EvaluationTask).SkeletalMeshComponent,(USkeletalMeshComponent *)FVar13
                     );
  if (bVar10) goto LAB_14a263798;
  local_98 = FVar13;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)FVar13);
  }
  FWeakObjectPtr::operator=
            (&(this->EvaluationTask).SkeletalMeshComponent.WeakPtr,(FObjectPtr)&local_98);
  pUVar15 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar15 == (UObject *)0x0) {
LAB_14a26365a:
    pUVar15 = (UObject *)0x0;
  }
  else {
    pUVar16 = UControlRig::StaticClass();
    iVar2 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar16->_padding_)) goto LAB_14a26365a;
  }
  this_00 = *(URigHierarchy **)&pUVar15[0x14].field_0x18;
  uVar11 = URigHierarchy::GetIndex(this_00,(FRigElementKey *)&pFVar12->field_0x10,true);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (URigHierarchy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_98.ObjectIndex = 0;
  local_98.ObjectSerialNumber = 0;
  local_90._0_8_ = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (URigHierarchy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_90);
  local_90._0_8_ = &this->Cache;
  local_90.D = local_98.ObjectIndex;
  iStack_80 = local_98.ObjectSerialNumber;
  local_78 = (code *)0x0;
  local_90.C = uVar11;
  puVar17 = FMemory::Malloc(0x20,8);
  *puVar17 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UTransformableControlHandle::GetEvaluationTask'::`14'::<lambda_1>,0,1>
              ::_vftable_;
  puVar17[1] = local_90._0_8_;
  puVar17[2] = CONCAT44(local_90.D,local_90.C);
  puVar17[3] = CONCAT44(uStack_7c,iStack_80);
  lVar6 = *(longlong *)&(this->EvaluationTask).PostEvaluationFunction;
  uVar5 = *(undefined8 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x8;
  uVar7 = *(undefined8 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x18;
  uVar3 = *(undefined8 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x20;
  pFVar4 = *(FWeakObjectPtr **)&(this->EvaluationTask).PostEvaluationFunction.field_0x28;
  if (puVar17 + 1 != (longlong *)0x0) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UTransformableControlHandle::GetEvaluationTask'::__l14::<lambda_1>,void>
               ::Call;
  }
  *(code **)&(this->EvaluationTask).PostEvaluationFunction = local_78;
  *(undefined8 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x8 = uStack_70;
  uStack_50._0_4_ = SUB84(puVar17,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)puVar17 >> 0x20);
  *(int *)&(this->EvaluationTask).PostEvaluationFunction.field_0x10 = local_68.ObjectIndex;
  *(int *)&(this->EvaluationTask).PostEvaluationFunction.field_0x14 = local_68.ObjectSerialNumber;
  *(undefined4 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x18 = (undefined4)uStack_60;
  *(undefined4 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x1c = uStack_60._4_4_;
  *(undefined4 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x24 = local_58._4_4_;
  *(undefined4 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x28 = (undefined4)uStack_50;
  *(undefined4 *)&(this->EvaluationTask).PostEvaluationFunction.field_0x2c = uStack_50._4_4_;
  local_68.ObjectIndex = *(int *)&(this->EvaluationTask).PostEvaluationFunction.field_0x10;
  local_68.ObjectSerialNumber = *(int *)&(this->EvaluationTask).PostEvaluationFunction.field_0x14;
  uStack_60 = uVar7;
  local_58 = uVar3;
  uStack_50 = pFVar4;
  if (lVar6 != 0) {
    pFVar19 = &local_68;
    if (pFVar4 != (FWeakObjectPtr *)0x0) {
      pFVar19 = pFVar4;
    }
    local_78 = (code *)lVar6;
    uStack_70 = uVar5;
    (**(code **)((longlong)*pFVar19 + 0x10))();
  }
LAB_14a263798:
  return &this->EvaluationTask;
}

// GetFloatChannels @ 14a263b30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArrayView<FMovieSceneFloatChannel_*,int> * __thiscall
UTransformableControlHandle::GetFloatChannels
          (UTransformableControlHandle *this,
          TArrayView<FMovieSceneFloatChannel_*,int> *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  int iVar1;
  UControlRig *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UControlRig *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar2 != (UControlRig *)0x0) {
    pUVar3 = UControlRig::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14a263b83;
  }
  pUVar2 = (UControlRig *)0x0;
LAB_14a263b83:
  FControlRigSequencerHelpers::GetFloatChannels
            (__return_storage_ptr__,pUVar2,&this->ControlName,param_1);
  return __return_storage_ptr__;
}

// GetGlobalTransform @ 14a263db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
UTransformableControlHandle::GetGlobalTransform
          (UTransformableControlHandle *this,TTransform<double> *__return_storage_ptr__)

{
  URigHierarchy *this_00;
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  bool bVar21;
  int iVar22;
  FRigControlElement *pFVar23;
  USkeletalMeshComponent *pUVar24;
  UClass *pUVar25;
  UObject *pUVar26;
  FAnimationEvaluationTask *pFVar27;
  FAnimationEvaluator *this_01;
  TTransform<double> *pTVar28;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar23 = GetControlElement(this);
  if ((pFVar23 == (FRigControlElement *)0x0) ||
     ((pUVar24 = GetSkeletalMesh(this), pUVar24 == (USkeletalMeshComponent *)0x0 &&
      (pUVar24 = (USkeletalMeshComponent *)GetControlRigComponent(this),
      pUVar24 == (USkeletalMeshComponent *)0x0)))) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    return __return_storage_ptr__;
  }
  pTVar28 = (TTransform<double> *)&pUVar24->_padding_;
  bVar21 = TransformableHandleUtils::SkipTicking();
  if (bVar21) {
    pUVar25 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar22 = (int)pUVar25->_padding_;
    if ((iVar22 <= *(int *)(pUVar24->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar22 * 8) ==
        &pUVar25->_padding_)) {
      pUVar26 = TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
      if (pUVar26 == (UObject *)0x0) {
LAB_14a263e99:
        pUVar26 = (UObject *)0x0;
      }
      else {
        pUVar25 = UControlRig::StaticClass();
        iVar22 = (int)pUVar25->_padding_;
        if ((*(int *)(*(longlong *)&pUVar26->field_0x10 + 0x38) < iVar22) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar26->field_0x10 + 0x30) + (longlong)iVar22 * 8) !=
            &pUVar25->_padding_)) goto LAB_14a263e99;
      }
      if (*(int *)&pUVar26[10].field_0x10 == 0) {
        pFVar27 = GetEvaluationTask(this);
        this_01 = TransformableHandleUtils::EvaluateComponent((USceneComponent *)pUVar24,pFVar27);
        if (pUVar24->_padding_ != 0) {
          local_a8 = 0;
          pTVar28 = UE::Anim::FAnimationEvaluator::GetGlobalTransform(this_01,&local_98,(FName)0x0);
          fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
          fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
          auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          auVar3._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar3;
          auVar4._8_4_ = SUB84((double)fVar2,0);
          auVar4._0_8_ = (double)fVar1;
          auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
          *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar4;
          fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
          fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
          auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          auVar5._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar5;
          auVar6._8_4_ = SUB84((double)fVar2,0);
          auVar6._0_8_ = (double)fVar1;
          auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
          *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar6;
          fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
          auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          auVar7._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar7;
          auVar8._8_4_ = SUB84((double)fVar2,0);
          auVar8._0_8_ = (double)fVar1;
          auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
          *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar8;
          goto LAB_14a263f2f;
        }
      }
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar9;
      auVar10._8_4_ = SUB84((double)fVar2,0);
      auVar10._0_8_ = (double)fVar1;
      auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar10;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
      auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      auVar11._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar11;
      auVar12._8_4_ = SUB84((double)fVar2,0);
      auVar12._0_8_ = (double)fVar1;
      auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar12;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
      auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      auVar13._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar13;
      auVar14._8_4_ = SUB84((double)fVar2,0);
      auVar14._0_8_ = (double)fVar1;
      auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar14;
LAB_14a263f2f:
      UE::Math::TTransform<double>::Multiply(__return_storage_ptr__,&this->Cache,pTVar28);
      return __return_storage_ptr__;
    }
  }
  pUVar26 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar26 != (UObject *)0x0) {
    pUVar25 = UControlRig::StaticClass();
    iVar22 = (int)pUVar25->_padding_;
    if ((iVar22 <= *(int *)(*(longlong *)&pUVar26->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar26->field_0x10 + 0x30) + (longlong)iVar22 * 8) ==
        &pUVar25->_padding_)) goto LAB_14a263ffe;
  }
  pUVar26 = (UObject *)0x0;
LAB_14a263ffe:
  this_00 = *(URigHierarchy **)&pUVar26[0x14].field_0x18;
  iVar22 = URigHierarchy::GetIndex(this_00,(FRigElementKey *)&pFVar23->field_0x10,true);
  URigHierarchy::GetGlobalTransformByIndex(this_00,&local_98,iVar22,false);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar1;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar16;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar2,0);
  auVar18._0_8_ = (double)fVar1;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar18;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar1;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar20;
  UE::Math::TTransform<double>::Multiply(__return_storage_ptr__,&local_98,pTVar28);
  return __return_storage_ptr__;
}

// GetHash @ 14a264370

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall UTransformableControlHandle::GetHash(UTransformableControlHandle *this)

{
  int iVar1;
  uint uVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UControlRig *pUVar5;
  
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar3 == (UObject *)0x0) {
    return 0;
  }
  pUVar4 = UControlRig::StaticClass();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) {
    return 0;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar4->_padding_) {
    return 0;
  }
  if (this->ControlName == (FName)0x0) {
    return 0;
  }
  pUVar5 = (UControlRig *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar5 != (UControlRig *)0x0) {
    pUVar4 = UControlRig::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_14a264403;
  }
  pUVar5 = (UControlRig *)0x0;
LAB_14a264403:
  uVar2 = ComputeHash(pUVar5,&this->ControlName);
  return uVar2;
}

// GetLocalTransform @ 14a264e40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTransform<double> * __thiscall
UTransformableControlHandle::GetLocalTransform
          (UTransformableControlHandle *this,TTransform<double> *__return_storage_ptr__)

{
  URigHierarchy *this_00;
  char cVar1;
  int iVar2;
  FRigControlElement *pFVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pFVar3 = GetControlElement(this);
  if (pFVar3 == (FRigControlElement *)0x0) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    return __return_storage_ptr__;
  }
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 == (UObject *)0x0) {
LAB_14a264ef6:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = UControlRig::StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar5->_padding_)) goto LAB_14a264ef6;
  }
  cVar1 = (**(code **)(*(longlong *)pUVar4 + 0x490))(pUVar4);
  if (cVar1 == '\0') {
    pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
    if (pUVar4 != (UObject *)0x0) {
      pUVar5 = UControlRig::StaticClass();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) goto LAB_14a264f88;
    }
    pUVar4 = (UObject *)0x0;
LAB_14a264f88:
    this_00 = *(URigHierarchy **)&pUVar4[0x14].field_0x18;
    iVar2 = URigHierarchy::GetIndex(this_00,(FRigElementKey *)&pFVar3->field_0x10,true);
    URigHierarchy::GetLocalTransformByIndex(this_00,__return_storage_ptr__,iVar2,false);
    return __return_storage_ptr__;
  }
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = UControlRig::StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_14a264f3e;
  }
  pUVar4 = (UObject *)0x0;
LAB_14a264f3e:
  (**(code **)(*(longlong *)pUVar4 + 0x408))(pUVar4,__return_storage_ptr__,&this->ControlName);
  return __return_storage_ptr__;
}

// GetPrerequisiteObject @ 14a267710

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UObject * __thiscall
UTransformableControlHandle::GetPrerequisiteObject(UTransformableControlHandle *this)

{
  USkeletalMeshComponent *pUVar1;
  UControlRigComponent *pUVar2;
  
  pUVar1 = GetSkeletalMesh(this);
  if (pUVar1 == (USkeletalMeshComponent *)0x0) {
    pUVar2 = GetControlRigComponent(this);
    return (UObject *)pUVar2;
  }
  return (UObject *)pUVar1;
}

// GetPrimaryPrerequisite @ 14a267740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FTickPrerequisite * __thiscall
UTransformableControlHandle::GetPrimaryPrerequisite
          (UTransformableControlHandle *this,FTickPrerequisite *__return_storage_ptr__,bool param_1)

{
  FTickFunction *pFVar1;
  USkeletalMeshComponent *pUVar2;
  USkeletalMeshComponent *local_res20;
  
  if (param_1) {
    pFVar1 = (FTickFunction *)(**(code **)(this->_padding_ + 800))();
    if (pFVar1 != (FTickFunction *)0x0) {
      pUVar2 = GetSkeletalMesh(this);
      if (pUVar2 == (USkeletalMeshComponent *)0x0) {
        pUVar2 = (USkeletalMeshComponent *)GetControlRigComponent(this);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (USkeletalMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (__return_storage_ptr__->PrerequisiteObject).WeakPtr = (FWeakObjectPtr)0x0;
      local_res20 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (USkeletalMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res20);
      __return_storage_ptr__->PrerequisiteTickFunction = pFVar1;
      return __return_storage_ptr__;
    }
  }
  *__return_storage_ptr__ = DummyPrerex;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a2683b0

UClass * __cdecl UTransformableControlHandle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformableControlHandle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"TransformableControlHandle",
               &Z_Registration_Info_UClass_UTransformableControlHandle.InnerSingleton,
               StaticRegisterNativesUTransformableControlHandle,0x150,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransformableControlHandle>,
               InternalVTableHelperCtorCaller<UTransformableControlHandle>,local_res8,
               UTransformableHandle::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformableControlHandle.InnerSingleton;
}

// GetSkeletalMesh @ 14a26b780

USkeletalMeshComponent * __thiscall
UTransformableControlHandle::GetSkeletalMesh(UTransformableControlHandle *this)

{
  int iVar1;
  longlong *plVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  USkeletalMeshComponent *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar3 == (UObject *)0x0) {
LAB_14a26b85b:
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pUVar4 = UControlRig::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14a26b85b;
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
    if (pUVar3 == (UObject *)0x0) {
LAB_14a26b800:
      pUVar3 = (UObject *)0x0;
    }
    else {
      pUVar4 = UControlRig::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) goto LAB_14a26b800;
    }
    plVar2 = *(longlong **)&pUVar3[0x17].field_0x8;
    pTVar6 = *(TReferenceControllerBase<1> **)&pUVar3[0x17].field_0x10;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if ((plVar2 != (longlong *)0x0) &&
       (pUVar5 = (USkeletalMeshComponent *)(**(code **)(*plVar2 + 0x28))(plVar2),
       pUVar5 != (USkeletalMeshComponent *)0x0)) {
      pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) goto LAB_14a26b866;
    }
  }
  pUVar5 = (USkeletalMeshComponent *)0x0;
LAB_14a26b866:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return pUVar5;
}

// GetTarget @ 14a26ba50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TWeakObjectPtr<UObject,FWeakObjectPtr> __thiscall
UTransformableControlHandle::GetTarget(UTransformableControlHandle *this)

{
  USkeletalMeshComponent *pUVar1;
  FWeakObjectPtr in_RDX;
  USkeletalMeshComponent *local_res10;
  
  pUVar1 = GetSkeletalMesh(this);
  if (pUVar1 == (USkeletalMeshComponent *)0x0) {
    pUVar1 = (USkeletalMeshComponent *)GetControlRigComponent(this);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)in_RDX = 0;
  local_res10 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res10);
  return (TWeakObjectPtr<UObject,FWeakObjectPtr>)in_RDX;
}

// GetTickFunction @ 14a26bc50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FTickFunction * __thiscall
UTransformableControlHandle::GetTickFunction(UTransformableControlHandle *this)

{
  USkeletalMeshComponent *pUVar1;
  FTickFunction *pFVar2;
  
  pUVar1 = GetSkeletalMesh(this);
  if (pUVar1 == (USkeletalMeshComponent *)0x0) {
    pUVar1 = (USkeletalMeshComponent *)GetControlRigComponent(this);
  }
  pFVar2 = (FTickFunction *)&pUVar1->_padding_;
  if (pUVar1 == (USkeletalMeshComponent *)0x0) {
    pFVar2 = (FTickFunction *)0x0;
  }
  return pFVar2;
}

// HasDirectDependencyWith @ 14a26f300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UTransformableControlHandle::HasDirectDependencyWith
          (UTransformableControlHandle *this,UTransformableHandle *param_1)

{
  ForElementType<FRigBaseElement_*> FVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  ulonglong uVar4;
  URigHierarchy *this_00;
  FRigTransformElement *pFVar5;
  UControlRig *pUVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  USkeletalMeshComponent *pUVar12;
  FRigControlElement *pFVar13;
  UModularRig *this_01;
  UClass *pUVar14;
  UObject *pUVar15;
  URigHierarchy *pUVar16;
  URigHierarchy *pUVar17;
  uint uVar18;
  URigHierarchy *pUVar19;
  ForElementType<FRigBaseElement_*> FVar20;
  ForAnyElementType FVar21;
  undefined1 auStackY_108 [32];
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined1 local_c0 [8];
  TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  IRigDependenciesProvider local_88;
  TArray<FRigBaseElement_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_78;
  TArray<FRigBaseElement_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar11 = (**(code **)(param_1->_padding_ + 0x328))(param_1);
  if (uVar11 == 0) {
    return false;
  }
  pUVar12 = GetSkeletalMesh(this);
  if ((pUVar12 != (USkeletalMeshComponent *)0x0) ||
     (pUVar12 = (USkeletalMeshComponent *)GetControlRigComponent(this),
     pUVar12 != (USkeletalMeshComponent *)0x0)) {
    uVar18 = ((uint)((ulonglong)pUVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar12 >> 4)) *
             -0x7a143595;
    uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
    if ((uVar18 >> 0x10 ^ uVar18) == uVar11) {
      return true;
    }
    for (uVar4 = pUVar12->_padding_; uVar4 != 0; uVar4 = *(ulonglong *)(uVar4 + 0xd0)) {
      uVar18 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      if ((uVar18 >> 0x10 ^ uVar18) == uVar11) {
        return true;
      }
    }
  }
  pFVar13 = GetControlElement(this);
  if (pFVar13 == (FRigControlElement *)0x0) {
    return false;
  }
  this_01 = (UModularRig *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (this_01 == (UModularRig *)0x0) {
LAB_14a26f43c:
    this_01 = (UModularRig *)0x0;
  }
  else {
    pUVar14 = UControlRig::StaticClass();
    iVar3 = (int)pUVar14->_padding_;
    if ((*(int *)(*(longlong *)&this_01->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar14->_padding_)) goto LAB_14a26f43c;
  }
  pUVar15 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar15 == (UObject *)0x0) {
LAB_14a26f472:
    pUVar15 = (UObject *)0x0;
  }
  else {
    pUVar14 = UControlRig::StaticClass();
    iVar3 = (int)pUVar14->_padding_;
    if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar14->_padding_)) goto LAB_14a26f472;
  }
  this_00 = *(URigHierarchy **)&pUVar15[0x14].field_0x18;
  URigHierarchy::GetParents(this_00,&local_78,(FRigBaseElement *)pFVar13,true);
  FVar20 = (ForElementType<FRigBaseElement_*>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FRigBaseElement_*>)0x0) {
    FVar20 = local_78.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<FRigBaseElement_*>)((longlong)FVar20 + (longlong)local_78.ArrayNum * 8);
  for (; FVar20 != FVar1; FVar20 = (ForElementType<FRigBaseElement_*>)((longlong)FVar20 + 8)) {
    uVar18 = ComputeHash((UControlRig *)this_01,(FName *)(*(longlong *)FVar20 + 0x14));
    if (uVar18 == uVar11) {
      if (FVar20 != (ForElementType<FRigBaseElement_*>)0x0) {
        bVar9 = true;
        goto LAB_14a26f534;
      }
      break;
    }
  }
  URigHierarchy::GetElementsOfType<FRigControlElement>(this_00,&local_b8,false);
  FVar8.Data = local_b8.AllocatorInstance.Data;
  pFVar2 = local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayNum * 8;
  for (FVar21.Data = local_b8.AllocatorInstance.Data; FVar21.Data != pFVar2;
      FVar21.Data = FVar21.Data + 8) {
    uVar18 = ComputeHash((UControlRig *)this_01,(FName *)(*(longlong *)FVar21.Data + 0x14));
    if (uVar18 == uVar11) {
      uVar11 = (uint)((longlong)FVar21.Data - (longlong)FVar8.Data >> 3);
      if (uVar11 != 0xffffffff) {
        pUVar19 = (URigHierarchy *)0x0;
        uVar18 = 0;
        if ((int)uVar11 < local_b8.ArrayNum) {
          uVar18 = ~uVar11 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar5 = *(FRigTransformElement **)
                  (local_b8.AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
        if (this_01 != (UModularRig *)0x0) {
          pUVar14 = UModularRig::StaticClass();
          iVar3 = (int)pUVar14->_padding_;
          if ((*(int *)(*(longlong *)&this_01->field_0x10 + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar14->_padding_)) goto LAB_14a26f754;
          local_a8 = *(undefined8 *)&pFVar13->field_0x10;
          local_a0 = *(undefined4 *)&pFVar13->field_0x18;
          URigHierarchy::GetModuleFName(this_00,(FRigElementKey *)local_d0);
          pUVar16 = pUVar19;
          if ((FName)local_d0 != (FName)0x0) {
            pUVar16 = (URigHierarchy *)UModularRig::FindModule(this_01,(FName *)local_d0);
          }
          local_98 = pFVar5->_padding_;
          local_90 = (undefined4)pFVar5->_padding_;
          URigHierarchy::GetModuleFName(this_00,(FRigElementKey *)local_c0);
          local_c8 = 0;
          pUVar17 = pUVar19;
          if ((FName)local_c0 != (FName)0x0) {
            pUVar17 = (URigHierarchy *)UModularRig::FindModule(this_01,(FName *)local_c0);
          }
          if ((pUVar16 == (URigHierarchy *)0x0) || (pUVar17 == (URigHierarchy *)0x0))
          goto LAB_14a26f754;
          if (pUVar16 != pUVar17) {
            pUVar19 = *(URigHierarchy **)&pUVar16->MetadataTagChangedDelegate;
            goto joined_r0x00014a26f741;
          }
          pUVar6 = (((TObjectPtr<UControlRig> *)&pUVar16->_padding_)->field0_0x0).DebugPtr;
          if ((pUVar6 == (UControlRig *)0x0) || (((uint)pUVar6->_padding_ >> 0x1e & 1) != 0)) {
            (((TObjectPtr<UControlRig> *)&pUVar16->_padding_)->field0_0x0).DebugPtr =
                 (UControlRig *)0x0;
          }
          else {
            pUVar6 = (((TObjectPtr<UControlRig> *)&pUVar16->_padding_)->field0_0x0).DebugPtr;
            if (pUVar6 != (UControlRig *)0x0) {
              pUVar19 = (pUVar6->DynamicHierarchy).field0_0x0.DebugPtr;
            }
          }
          URigHierarchy::GetParents(pUVar19,&local_60,(FRigBaseElement *)pFVar5,true);
          FVar20 = (ForElementType<FRigBaseElement_*>)&local_60;
          if (local_60.AllocatorInstance.SecondaryData != (ForElementType<FRigBaseElement_*>)0x0) {
            FVar20 = local_60.AllocatorInstance.SecondaryData;
          }
          FVar1 = (ForElementType<FRigBaseElement_*>)
                  ((longlong)FVar20 + (longlong)local_60.ArrayNum * 8);
          goto joined_r0x00014a26f702;
        }
      }
      break;
    }
  }
  goto LAB_14a26f51c;
joined_r0x00014a26f741:
  if (pUVar19 == (URigHierarchy *)0x0) goto LAB_14a26f754;
  if (pUVar19 == pUVar17) goto LAB_14a26f78e;
  pUVar19 = *(URigHierarchy **)&pUVar19->MetadataTagChangedDelegate;
  goto joined_r0x00014a26f741;
joined_r0x00014a26f702:
  if (FVar20 == FVar1) goto LAB_14a26f712;
  if (*(FRigControlElement **)FVar20 == pFVar13) {
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<FRigBaseElement_*>)0x0) {
      FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
    }
    goto LAB_14a26f51c;
  }
  FVar20 = (ForElementType<FRigBaseElement_*>)((longlong)FVar20 + 8);
  goto joined_r0x00014a26f702;
LAB_14a26f712:
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<FRigBaseElement_*>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
LAB_14a26f754:
  if (this_00 != (URigHierarchy *)0x0) {
    local_88.bInteractiveDialogEnabled = false;
    local_88._9_7_ = 0;
    local_88._padding_ = (longlong)&___7FEmptyRigDependenciesProvider__6B_;
    bVar9 = URigHierarchy::CanCauseCycle
                      (this_00,pFVar5,(FRigTransformElement *)pFVar13,&local_88,(FString *)0x0);
    if (bVar9) {
LAB_14a26f78e:
      bVar9 = true;
      goto LAB_14a26f51e;
    }
  }
LAB_14a26f51c:
  bVar9 = false;
LAB_14a26f51e:
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
LAB_14a26f534:
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FRigBaseElement_*>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return bVar9;
}

// IsValid @ 14a2756e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UTransformableControlHandle::IsValid(UTransformableControlHandle *this,bool param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  longlong lVar4;
  USkeletalMeshComponent *pUVar5;
  UControlRigComponent *pUVar6;
  
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar2 == (UObject *)0x0) {
    return false;
  }
  pUVar3 = UControlRig::StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if (*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) {
    return false;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar3->_padding_) {
    return false;
  }
  if (this->ControlName == (FName)0x0) {
    return false;
  }
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = UControlRig::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14a275786;
  }
  pUVar2 = (UObject *)0x0;
LAB_14a275786:
  lVar4 = (**(code **)(*(longlong *)pUVar2 + 0x3c8))(pUVar2,&this->ControlName);
  if ((lVar4 != 0) &&
     (((!param_1 || (pUVar5 = GetSkeletalMesh(this), pUVar5 != (USkeletalMeshComponent *)0x0)) ||
      (pUVar6 = GetControlRigComponent(this), pUVar6 != (UControlRigComponent *)0x0)))) {
    return true;
  }
  return false;
}

// OnControlModified @ 14a277490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a277657) */
/* WARNING: Removing unreachable block (ram,0x00014a2777e7) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTransformableControlHandle::OnControlModified
          (UTransformableControlHandle *this,UControlRig *param_1,FRigControlElement *param_2,
          FRigControlModifiedContext *param_3)

{
  int iVar1;
  FName FVar2;
  bool bVar3;
  char cVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  USkeletalMeshComponent *pUVar7;
  undefined8 *puVar8;
  longlong lVar9;
  FName *pFVar10;
  code *pcVar11;
  undefined1 auStack_d8 [32];
  UControlRig *local_b8;
  UControlRig *local_b0;
  code *local_a8;
  FSoftObjectPath local_a0;
  FName *local_80;
  code *local_78;
  undefined **local_68;
  UControlRig *pUStack_60;
  int local_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  if (param_1 == (UControlRig *)0x0) {
    return;
  }
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FRigControlElement *)0x0) {
    return;
  }
  if ((char)this->_padding_ != '\0') {
    return;
  }
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar5 == (UObject *)0x0) {
    return;
  }
  pUVar6 = UControlRig::StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if (*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar6->_padding_) {
    return;
  }
  local_b8 = (UControlRig *)0x0;
  if (this->ControlName == (FName)0x0) {
    return;
  }
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            UTransformableHandle::HandleModified((UTransformableHandle *)this);
  bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(this_00);
  if (!bVar3) {
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_a0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_a0.AssetPath.AssetName.Number = 0;
  local_a0.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_a0.AssetPath.PackageName.Number = 0;
  local_a0.SubPathString.Data.ArrayNum = 0;
  local_a0.SubPathString.Data.ArrayMax = 0;
  local_a8 = (code *)0x0;
  local_b8 = (UControlRig *)0x0;
  FUtf8String::Reset(&local_a0.SubPathString,0);
  local_b8 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&local_a8,(FObjectPtr)&local_b8);
  bVar3 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&(this->ControlRig).SoftObjectPtr.field_0x8,&local_a0);
  if (local_a0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.SubPathString.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return;
  }
  bVar3 = param_3->bConstraintUpdate;
  FVar2.ComparisonIndex.Value = *(uint *)&param_2->field_0x14;
  FVar2.Number = *(uint *)&param_2->field_0x18;
  if (FVar2 == this->ControlName) {
    EnterCriticalSection((LPCRITICAL_SECTION)&UE::Private::NotificationLock);
    if (param_3->bConstraintUpdate != false) {
      EvaluationBinding.bPendingFlush = true;
    }
    local_a0.SubPathString.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)TSoftObjectPtr<UControlRig>::Get(&this->ControlRig);
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::`17'::<lambda_1>,0,0>
                ::_vftable_;
    local_a0.AssetPath.AssetName =
         (FName)&UE::Core::Private::Function::
                 TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::`17'::<lambda_1>,0,0>
                 ::_vftable_;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UTransformableControlHandle::OnControlModified'::__l17::<lambda_1>,void>
               ::Call;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UTransformableControlHandle::OnControlModified'::__l17::<lambda_1>,void>
               ::Call;
    local_80 = (FName *)0x0;
    local_50 = 0;
    local_a0.SubPathString.Data.ArrayNum = local_58;
    local_a0.SubPathString.Data.ArrayMax = iStack_54;
    pUStack_60 = (UControlRig *)local_a0.SubPathString.Data.AllocatorInstance.Data;
    local_b0 = TSoftObjectPtr<UControlRig>::Get(&this->ControlRig);
    TSet<UControlRig_*,DefaultKeyFuncs<UControlRig_*,0>,FDefaultSetAllocator>::
    Emplace<UControlRig_*>(&UE::Private::NotifyingRigs,&local_b8,(bool *)&local_b0);
    UTransformableHandle::Notify((UTransformableHandle *)this,bVar3 != false,false);
    bVar3 = TransformableHandleUtils::SkipTicking();
    if (bVar3) {
      pUVar7 = GetSkeletalMesh(this);
      TransformableHandleUtils::MarkComponentForEvaluation((USceneComponent *)pUVar7,false);
    }
    UE::Core::Private::Function::CheckCallable(local_a8);
    pcVar11 = local_a8;
    pFVar10 = &local_a0.AssetPath.AssetName;
    if (local_80 != (FName *)0x0) {
      pFVar10 = local_80;
    }
    puVar8 = (undefined8 *)(**(code **)((longlong)*pFVar10 + 8))();
  }
  else {
    if (bVar3 == false) {
      return;
    }
    pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
    if (pUVar5 == (UObject *)0x0) {
LAB_14a277768:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = UControlRig::StaticClass();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14a277768;
    }
    lVar9 = (**(code **)(*(longlong *)pUVar5 + 0x3c8))(pUVar5,&this->ControlName);
    if (lVar9 == 0) {
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&UE::Private::NotificationLock);
    if (param_3->bConstraintUpdate != false) {
      EvaluationBinding.bPendingFlush = true;
    }
    local_a0.SubPathString.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)TSoftObjectPtr<UControlRig>::Get(&this->ControlRig);
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::`30'::<lambda_2>,0,0>
                ::_vftable_;
    local_a0.AssetPath.AssetName =
         (FName)&UE::Core::Private::Function::
                 TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::`30'::<lambda_2>,0,0>
                 ::_vftable_;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UTransformableControlHandle::OnControlModified'::__l30::<lambda_2>,void>
               ::Call;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UTransformableControlHandle::OnControlModified'::__l30::<lambda_2>,void>
               ::Call;
    local_80 = (FName *)0x0;
    local_50 = 0;
    local_a0.SubPathString.Data.ArrayNum = local_58;
    local_a0.SubPathString.Data.ArrayMax = iStack_54;
    pUStack_60 = (UControlRig *)local_a0.SubPathString.Data.AllocatorInstance.Data;
    local_b0 = TSoftObjectPtr<UControlRig>::Get(&this->ControlRig);
    TSet<UControlRig_*,DefaultKeyFuncs<UControlRig_*,0>,FDefaultSetAllocator>::
    Emplace<UControlRig_*>(&UE::Private::NotifyingRigs,&local_b8,(bool *)&local_b0);
    pUVar6 = Z_Construct_UClass_UTickableConstraint_NoRegister();
    pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
    if ((pUVar5 == (UObject *)0x0) ||
       (cVar4 = (**(code **)(*(longlong *)pUVar5 + 0x2d0))(pUVar5), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
    if (pUVar5 == (UObject *)0x0) {
LAB_14a277878:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = UControlRig::StaticClass();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14a277878;
    }
    cVar4 = (**(code **)(*(longlong *)pUVar5 + 0x490))(pUVar5);
    if ((cVar4 == '\0') && (bVar3)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    UTransformableHandle::Notify((UTransformableHandle *)this,UpperDependencyUpdated,bVar3);
    bVar3 = TransformableHandleUtils::SkipTicking();
    if (bVar3) {
      pUVar7 = GetSkeletalMesh(this);
      TransformableHandleUtils::MarkComponentForEvaluation((USceneComponent *)pUVar7,false);
    }
    UE::Core::Private::Function::CheckCallable(local_a8);
    pcVar11 = local_a8;
    pFVar10 = &local_a0.AssetPath.AssetName;
    if (local_80 != (FName *)0x0) {
      pFVar10 = local_80;
    }
    puVar8 = (undefined8 *)(**(code **)((longlong)*pFVar10 + 8))();
    if (pcVar11 ==
        UE::Core::Private::Function::
        TFunctionRefCaller<`UTransformableControlHandle::OnControlModified'::__l30::<lambda_2>,void>
        ::Call) {
      TSet<UControlRig_*,DefaultKeyFuncs<UControlRig_*,0>,FDefaultSetAllocator>::Remove
                (&UE::Private::NotifyingRigs,(UControlRig *)*puVar8);
      goto LAB_14a2776d5;
    }
  }
  (*pcVar11)(puVar8);
LAB_14a2776d5:
  if (local_a8 != (code *)0x0) {
    pFVar10 = &local_a0.AssetPath.AssetName;
    if (local_80 != (FName *)0x0) {
      pFVar10 = local_80;
    }
    (**(code **)((longlong)*pFVar10 + 0x10))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&UE::Private::NotificationLock);
  return;
}

// OnControlRigBound @ 14a277920

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UTransformableControlHandle::OnControlRigBound
          (UTransformableControlHandle *this,UControlRig *param_1)

{
  int iVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this_01;
  UControlRig *local_res10;
  undefined1 local_38 [8];
  FSoftObjectPath local_30;
  
  if (param_1 == (UControlRig *)0x0) {
    return;
  }
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar5 == (UObject *)0x0) {
    return;
  }
  pUVar6 = UControlRig::StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if (*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar6->_padding_) {
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_30.AssetPath.AssetName.Number = 0;
  local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_30.AssetPath.PackageName.Number = 0;
  local_30.SubPathString.Data.ArrayNum = 0;
  local_30.SubPathString.Data.ArrayMax = 0;
  local_38 = (undefined1  [8])0x0;
  local_res10 = (UControlRig *)0x0;
  FUtf8String::Reset(&local_30.SubPathString,0);
  local_res10 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_38,(FObjectPtr)&local_res10);
  bVar4 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&(this->ControlRig).SoftObjectPtr.field_0x8,&local_30);
  if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    return;
  }
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = UControlRig::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14a277a46;
  }
  pUVar5 = (UObject *)0x0;
LAB_14a277a46:
  plVar2 = *(longlong **)&pUVar5[0x17].field_0x8;
  pTVar3 = *(TReferenceControllerBase<1> **)&pUVar5[0x17].field_0x10;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (plVar2 != (longlong *)0x0) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)(*plVar2 + 0x10))(plVar2);
    bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject(this_00,this);
    if (!bVar4) {
      this_01 = (TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                 *)(**(code **)(*plVar2 + 0x10))(plVar2);
      TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
      AddUObject<UTransformableControlHandle>
                (this_01,(UTransformableControlHandle *)&local_res10,(pmf_3f10437e)this);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// OnHierarchyModified @ 14a277d10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UTransformableControlHandle::OnHierarchyModified
          (UTransformableControlHandle *this,ERigHierarchyNotification param_1,
          URigHierarchy *param_2,FRigNotificationSubject *param_3)

{
  int iVar1;
  URigHierarchy *this_00;
  FRigBaseElement *pFVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UControlRig *pUVar5;
  FName local_res8;
  
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar3 == (UObject *)0x0) {
    return;
  }
  pUVar4 = UControlRig::StaticClass();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar4->_padding_) {
    return;
  }
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = UControlRig::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14a277daa;
  }
  pUVar3 = (UObject *)0x0;
LAB_14a277daa:
  this_00 = *(URigHierarchy **)&pUVar3[0x14].field_0x18;
  if ((this_00 != (URigHierarchy *)0x0) && (param_2 == this_00)) {
    pFVar2 = param_3->Element;
    if (param_1 == ElementAdded) {
      pUVar5 = TSoftObjectPtr<UControlRig>::Get(&this->ControlRig);
      UE::Private::FixModularRigControlName(pUVar5,this);
    }
    else if ((param_1 == ElementRenamed) &&
            (URigHierarchy::GetPreviousName(this_00,(FRigElementKey *)&local_res8),
            local_res8 == this->ControlName)) {
      this->ControlName = (pFVar2->Key).Name;
    }
  }
  return;
}

// OnObjectBoundToControlRig @ 14a278280

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTransformableControlHandle::OnObjectBoundToControlRig
          (UTransformableControlHandle *this,UObject *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  USkeletalMeshComponent *this_00;
  UWorld *pUVar7;
  
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 == (UObject *)0x0) {
    return;
  }
  pUVar5 = UControlRig::StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar5->_padding_) {
    return;
  }
  if (param_1 == (UObject *)0x0) {
    return;
  }
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = UControlRig::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14a27831a;
  }
  pUVar4 = (UObject *)0x0;
LAB_14a27831a:
  pTVar2 = *(TReferenceControllerBase<1> **)&pUVar4[0x17].field_0x10;
  plVar3 = *(longlong **)&pUVar4[0x17].field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((((plVar3 != (longlong *)0x0) &&
       (pUVar4 = (UObject *)(**(code **)(*plVar3 + 0x28))(), pUVar4 == param_1)) &&
      ((pUVar6 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this), pUVar6 != (UWorld *)0x0 ||
       (((this_00 = GetSkeletalMesh(this), this_00 != (USkeletalMeshComponent *)0x0 ||
         (this_00 = (USkeletalMeshComponent *)GetControlRigComponent(this),
         this_00 != (USkeletalMeshComponent *)0x0)) &&
        ((pUVar6 = (UWorld *)this_00->_padding_, pUVar6 != (UWorld *)0x0 ||
         (pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00),
         pUVar6 != (UWorld *)0x0)))))))) &&
     (pUVar7 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1), pUVar7 == pUVar6)) {
    UTransformableHandle::Notify((UTransformableHandle *)this,ComponentUpdated,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// PostLoad @ 14a27ccb0

void __thiscall UTransformableControlHandle::PostLoad(UTransformableControlHandle *this)

{
  UObject::PostLoad((UObject *)this);
  RegisterDelegates(this);
  return;
}

// PreEvaluate @ 14a27cd00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTransformableControlHandle::PreEvaluate(UTransformableControlHandle *this,bool param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UControlRig *pUVar6;
  USkeletalMeshComponent *pUVar7;
  FAnimationEvaluationTask *pFVar8;
  
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 == (UObject *)0x0) {
    return;
  }
  pUVar5 = UControlRig::StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar5->_padding_) {
    return;
  }
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 == (UObject *)0x0) {
LAB_14a27cd8f:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = UControlRig::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14a27cd8f;
  }
  if (*(int *)&pUVar4[10].field_0x10 != 0) {
    return;
  }
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 == (UObject *)0x0) {
LAB_14a27cdd2:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = UControlRig::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14a27cdd2;
  }
  cVar2 = (**(code **)(*(longlong *)pUVar4 + 0x490))(pUVar4);
  if (cVar2 != '\0') {
    pUVar6 = TSoftObjectPtr<UControlRig>::Get(&this->ControlRig);
    bVar3 = UE::Private::IsRigNotifying(pUVar6);
    if (bVar3) {
      return;
    }
    pUVar7 = GetSkeletalMesh(this);
    if ((pUVar7 != (USkeletalMeshComponent *)0x0) &&
       (bVar3 = USkeletalMeshComponent::PoseTickedThisFrame(pUVar7), !bVar3)) goto LAB_14a27ce88;
  }
  bVar3 = TransformableHandleUtils::SkipTicking();
  if (bVar3) {
    pFVar8 = GetEvaluationTask(this);
    pUVar7 = GetSkeletalMesh(this);
    TransformableHandleUtils::EvaluateComponent((USceneComponent *)pUVar7,pFVar8);
    return;
  }
  if (param_1) {
LAB_14a27ce88:
    (**(code **)(this->_padding_ + 0x2f0))(this);
    return;
  }
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = UControlRig::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14a27ce7a;
  }
  pUVar4 = (UObject *)0x0;
LAB_14a27ce7a:
  (**(code **)(*(longlong *)pUVar4 + 0x2d0))(pUVar4);
  return;
}

// RegisterDelegates @ 14a27fb90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UTransformableControlHandle::RegisterDelegates(UTransformableControlHandle *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong lVar5;
  UControlRig *pUVar6;
  FControlEvaluationGraphBinding local_res8 [8];
  
  UnregisterDelegates(this);
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if ((pUVar3 == (UObject *)0x0) && (*(longlong *)&(this->ControlRig).SoftObjectPtr.field_0x8 != 0))
  {
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
    if (pUVar3 == (UObject *)0x0) {
      if (*(longlong *)&(this->ControlRig).SoftObjectPtr.field_0x8 != 0) {
        FSoftObjectPath::TryLoad
                  ((FSoftObjectPath *)&(this->ControlRig).SoftObjectPtr.field_0x8,
                   (FUObjectSerializeContext *)0x0);
        pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                           ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
        if (pUVar3 != (UObject *)0x0) goto LAB_14a27fbe8;
      }
    }
    else {
LAB_14a27fbe8:
      UControlRig::StaticClass();
    }
  }
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar3 == (UObject *)0x0) {
    return;
  }
  pUVar4 = UControlRig::StaticClass();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar4->_padding_) {
    return;
  }
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = UControlRig::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      pUVar4 = UModularRig::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_ &&
           (lVar5 = (**(code **)(*(longlong *)pUVar3 + 0x3c8))(pUVar3,&this->ControlName),
           lVar5 != 0)) && (*(FName *)(lVar5 + 0x14) != this->ControlName)))) {
        this->ControlName = *(FName *)(lVar5 + 0x14);
      }
    }
  }
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar3 == (UObject *)0x0) {
LAB_14a27fcee:
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar4 = UControlRig::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14a27fcee;
  }
  if (*(longlong *)&pUVar3[0x14].field_0x18 != 0) {
    TMulticastDelegateRegistration<void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UTransformableControlHandle>
              ((void *)(*(longlong *)&pUVar3[0x14].field_0x18 + 0x28),
               (UTransformableControlHandle *)local_res8,(pmf_686392c0)this);
  }
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar3 == (UObject *)0x0) {
LAB_14a27fd48:
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar4 = UControlRig::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14a27fd48;
  }
  bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar3 + 0x3a),
                     &EvaluationBinding);
  if (!bVar2) {
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
    if (pUVar3 == (UObject *)0x0) {
LAB_14a27fd95:
      pUVar3 = (UObject *)0x0;
    }
    else {
      pUVar4 = UControlRig::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) goto LAB_14a27fd95;
    }
    TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FControlEvaluationGraphBinding>
              ((TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                *)(pUVar3 + 0x3a),local_res8,(pmf_23f11218)0x1552ad840);
  }
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar3 == (UObject *)0x0) {
LAB_14a27fdea:
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar4 = UControlRig::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14a27fdea;
  }
  TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UTransformableControlHandle>
            ((TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
              *)(pUVar3 + 0x3a),(UTransformableControlHandle *)local_res8,(pmf_f3a22cb3)this);
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar3 == (UObject *)0x0) {
LAB_14a27fe3b:
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar4 = UControlRig::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14a27fe3b;
  }
  bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[0x3c].field_0x10,
                     this);
  if (!bVar2) {
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
    if (pUVar3 == (UObject *)0x0) {
LAB_14a27fe84:
      pUVar3 = (UObject *)0x0;
    }
    else {
      pUVar4 = UControlRig::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) goto LAB_14a27fe84;
    }
    TMulticastDelegateRegistration<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>::
    AddUObject<UTransformableControlHandle>
              ((TMulticastDelegateRegistration<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
                *)&pUVar3[0x3c].field_0x10,(UTransformableControlHandle *)local_res8,
               (pmf_a01f6e4a)this);
  }
  pUVar6 = (UControlRig *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar6 != (UControlRig *)0x0) {
    pUVar4 = UControlRig::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_14a27fed7;
  }
  pUVar6 = (UControlRig *)0x0;
LAB_14a27fed7:
  OnControlRigBound(this,pUVar6);
  return;
}

// ResolveBoundObjects @ 14a289ca0

void __thiscall
UTransformableControlHandle::ResolveBoundObjects
          (UTransformableControlHandle *this,FMovieSceneSequenceID param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_2,UObject *param_3)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uStackX_24;
  undefined1 local_90 [8];
  FSoftObjectPath local_88;
  UObject *local_68;
  FWeakObjectPtr local_60;
  UObject *local_58;
  UObject *local_50;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_48;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_38;
  
  if (param_3 == (UObject *)0x0) goto LAB_14a289f33;
  pUVar9 = UControlRig::StaticClass();
  iVar1 = (int)pUVar9->_padding_;
  if ((*(int *)(*(longlong *)&param_3->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar9->_padding_)) goto LAB_14a289f33;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_3);
  }
  local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_88.AssetPath.AssetName.Number = 0;
  local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_88.AssetPath.PackageName.Number = 0;
  local_88.SubPathString.Data.ArrayNum = 0;
  local_88.SubPathString.Data.ArrayMax = 0;
  local_90 = (undefined1  [8])0x0;
  FUtf8String::Reset(&local_88.SubPathString,0);
  local_68 = param_3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_3);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_90,(FObjectPtr)&local_68);
  bVar8 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&(this->ControlRig).SoftObjectPtr.field_0x8,&local_88);
  if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
  }
  if (bVar8) goto LAB_14a289f33;
  pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar10 != (UObject *)0x0) {
    pUVar9 = UControlRig::StaticClass();
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar9->_padding_)) {
      pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
      if (pUVar10 == (UObject *)0x0) {
LAB_14a289df3:
        pUVar10 = (UObject *)0x0;
      }
      else {
        pUVar9 = UControlRig::StaticClass();
        iVar1 = (int)pUVar9->_padding_;
        if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar9->_padding_)) goto LAB_14a289df3;
      }
      if (*(longlong *)&pUVar10->field_0x10 != *(longlong *)&param_3->field_0x10)
      goto LAB_14a289f33;
    }
  }
  local_48.Object = param_2->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMovieSceneObjectBindingID::ResolveBoundObjects
            ((FMovieSceneObjectBindingID *)((longlong)&this->_padding_ + 4),&local_38,param_1,
             &local_48);
  if (local_38.ArrayNum < 1) goto LAB_14a289f33;
  local_60 = (local_38.DataPtr)->WeakPtr;
  pUVar10 = FWeakObjectPtr::Get(&local_60);
  local_58 = FControlRigObjectBinding::GetBindableObject(pUVar10);
  pTVar2 = *(TReferenceControllerBase<1> **)&param_3[0x17].field_0x10;
  bVar8 = false;
  lVar3 = *(longlong *)&param_3[0x17].field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar3 == 0) {
    pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_24 << 0x20);
LAB_14a289ee4:
    bVar6 = false;
    bVar7 = false;
    if (bVar8) goto LAB_14a289eec;
  }
  else {
    pTVar11 = *(TReferenceControllerBase<1> **)&param_3[0x17].field_0x10;
    plVar4 = *(longlong **)&param_3[0x17].field_0x8;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar4 == (longlong *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pUVar10 = (UObject *)(**(code **)(*plVar4 + 0x28))(plVar4);
    if (pUVar10 != local_58) {
      bVar8 = true;
      goto LAB_14a289ee4;
    }
    bVar7 = true;
LAB_14a289eec:
    bVar6 = bVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar6) {
    UnregisterDelegates(this);
    local_50 = param_3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_3);
    }
    FSoftObjectPtr::operator=(&(this->ControlRig).SoftObjectPtr,(FObjectPtr)&local_50);
    RegisterDelegates(this);
  }
LAB_14a289f33:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetGlobalTransform @ 14a293cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTransformableControlHandle::SetGlobalTransform
          (UTransformableControlHandle *this,TTransform<double> *param_1)

{
  URigHierarchy *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  FRigControlElement *pFVar4;
  USkeletalMeshComponent *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UControlRig *this_01;
  TTransform<double> *pTVar8;
  undefined1 auStackY_d8 [32];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar4 = GetControlElement(this);
  if (pFVar4 == (FRigControlElement *)0x0) {
    return;
  }
  pUVar5 = GetSkeletalMesh(this);
  if ((pUVar5 == (USkeletalMeshComponent *)0x0) &&
     (pUVar5 = (USkeletalMeshComponent *)GetControlRigComponent(this),
     pUVar5 == (USkeletalMeshComponent *)0x0)) {
    return;
  }
  pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar6 == (UObject *)0x0) {
LAB_14a293da0:
    pUVar6 = (UObject *)0x0;
  }
  else {
    pUVar7 = UControlRig::StaticClass();
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) goto LAB_14a293da0;
  }
  this_00 = *(URigHierarchy **)&pUVar6[0x14].field_0x18;
  iVar2 = -1;
  if ((this_00 != (URigHierarchy *)0x0) && (bVar1 = TransformableHandleUtils::SkipTicking(), bVar1))
  {
    iVar2 = URigHierarchy::GetPoseVersion(this_00,(FRigTransformElement *)pFVar4);
  }
  this_01 = (UControlRig *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (this_01 != (UControlRig *)0x0) {
    pUVar7 = UControlRig::StaticClass();
    iVar3 = (int)pUVar7->_padding_;
    if ((iVar3 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar7->_padding_)) goto LAB_14a293e00;
  }
  this_01 = (UControlRig *)0x0;
LAB_14a293e00:
  pTVar8 = UE::Math::TTransform<double>::GetRelativeTransform
                     (param_1,&local_98,(TTransform<double> *)&pUVar5->_padding_);
  UControlRig::SetControlGlobalTransform
            (this_01,(FName *)&pFVar4->field_0x14,pTVar8,false,&Context,false,false,false);
  if (((this_00 != (URigHierarchy *)0x0) && (bVar1 = TransformableHandleUtils::SkipTicking(), bVar1)
      ) && (iVar3 = URigHierarchy::GetPoseVersion(this_00,(FRigTransformElement *)pFVar4),
           iVar3 != iVar2)) {
    TransformableHandleUtils::MarkComponentForEvaluation((USceneComponent *)pUVar5,false);
  }
  return;
}

// SetLocalTransform @ 14a2943b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTransformableControlHandle::SetLocalTransform
          (UTransformableControlHandle *this,TTransform<double> *param_1)

{
  URigHierarchy *this_00;
  URigHierarchy *this_01;
  bool bVar1;
  int iVar2;
  int iVar3;
  FRigControlElement *pFVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  USkeletalMeshComponent *pUVar7;
  TTransform<double> local_78;
  
  pFVar4 = GetControlElement(this);
  if (pFVar4 == (FRigControlElement *)0x0) {
    return;
  }
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar5 == (UObject *)0x0) {
LAB_14a29442a:
    pUVar5 = (UObject *)0x0;
  }
  else {
    pUVar6 = UControlRig::StaticClass();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) goto LAB_14a29442a;
  }
  this_00 = *(URigHierarchy **)&pUVar5[0x14].field_0x18;
  iVar2 = URigHierarchy::GetIndex(this_00,(FRigElementKey *)&pFVar4->field_0x10,true);
  pUVar7 = GetSkeletalMesh(this);
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = UControlRig::StaticClass();
    iVar3 = (int)pUVar6->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar6->_padding_)) goto LAB_14a294485;
  }
  pUVar5 = (UObject *)0x0;
LAB_14a294485:
  this_01 = *(URigHierarchy **)&pUVar5[0x14].field_0x18;
  iVar3 = -1;
  if (((this_01 != (URigHierarchy *)0x0) && (pUVar7 != (USkeletalMeshComponent *)0x0)) &&
     (bVar1 = TransformableHandleUtils::SkipTicking(), bVar1)) {
    iVar3 = URigHierarchy::GetPoseVersion(this_01,(FRigTransformElement *)pFVar4);
  }
  local_78.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  local_78.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
  local_78.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  local_78.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
  local_78.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  local_78.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
  local_78.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  local_78.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
  local_78.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  local_78.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
  local_78.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  local_78.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
  URigHierarchy::SetLocalTransformByIndex(this_00,iVar2,&local_78,false,true,false,false);
  if (((this_01 != (URigHierarchy *)0x0) && (pUVar7 != (USkeletalMeshComponent *)0x0)) &&
     ((bVar1 = TransformableHandleUtils::SkipTicking(), bVar1 &&
      (iVar2 = URigHierarchy::GetPoseVersion(this_01,(FRigTransformElement *)pFVar4), iVar2 != iVar3
      )))) {
    TransformableHandleUtils::MarkComponentForEvaluation((USceneComponent *)pUVar7,false);
  }
  return;
}

// StaticRegisterNativesUTransformableControlHandle @ 14a298190

void __cdecl UTransformableControlHandle::StaticRegisterNativesUTransformableControlHandle(void)

{
  return;
}

// TickTarget @ 14a29c1e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UTransformableControlHandle::TickTarget(UTransformableControlHandle *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UControlRig *pUVar6;
  USkeletalMeshComponent *pUVar7;
  UControlRigComponent *this_00;
  
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 == (UObject *)0x0) {
    return;
  }
  pUVar5 = UControlRig::StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar5->_padding_) {
    return;
  }
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 == (UObject *)0x0) {
LAB_14a29c266:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = UControlRig::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14a29c266;
  }
  cVar2 = (**(code **)(*(longlong *)pUVar4 + 0x490))(pUVar4);
  if (cVar2 == '\0') goto LAB_14a29c2ba;
  pUVar6 = (UControlRig *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar6 == (UControlRig *)0x0) {
LAB_14a29c2ac:
    pUVar6 = (UControlRig *)0x0;
  }
  else {
    pUVar5 = UControlRig::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_14a29c2ac;
  }
  bVar3 = UE::Private::IsRigNotifying(pUVar6);
  if (bVar3) {
    return;
  }
LAB_14a29c2ba:
  pUVar7 = GetSkeletalMesh(this);
  if (pUVar7 == (USkeletalMeshComponent *)0x0) {
    this_00 = GetControlRigComponent(this);
    if (this_00 != (UControlRigComponent *)0x0) {
      UControlRigComponent::Update(this_00,0.0);
    }
    return;
  }
  bVar3 = TransformableHandleUtils::SkipTicking();
  if (!bVar3) {
    TransformableHandleUtils::TickDependantComponents((USceneComponent *)pUVar7);
    return;
  }
  pUVar7 = GetSkeletalMesh(this);
  TransformableHandleUtils::EvaluateComponent((USceneComponent *)pUVar7);
  return;
}

// UnregisterDelegates @ 14a2a1890

void __thiscall UTransformableControlHandle::UnregisterDelegates(UTransformableControlHandle *this)

{
  int iVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 == (UObject *)0x0) {
    return;
  }
  pUVar5 = UControlRig::StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar5->_padding_) {
    return;
  }
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 == (UObject *)0x0) {
LAB_14a2a1916:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = UControlRig::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14a2a1916;
  }
  if (*(longlong *)&pUVar4[0x14].field_0x18 != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (*(longlong *)&pUVar4[0x14].field_0x18 + 0x28),this);
  }
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 == (UObject *)0x0) {
LAB_14a2a1964:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = UControlRig::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14a2a1964;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar4 + 0x3a),this);
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 == (UObject *)0x0) {
LAB_14a2a19a9:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = UControlRig::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14a2a19a9;
  }
  plVar2 = *(longlong **)&pUVar4[0x17].field_0x8;
  pTVar3 = *(TReferenceControllerBase<1> **)&pUVar4[0x17].field_0x10;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (plVar2 != (longlong *)0x0) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(**(code **)(*plVar2 + 0x10))();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ControlRig);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = UControlRig::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14a2a1a16;
  }
  pUVar4 = (UObject *)0x0;
LAB_14a2a1a16:
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[0x3c].field_0x10,this);
  return;
}

