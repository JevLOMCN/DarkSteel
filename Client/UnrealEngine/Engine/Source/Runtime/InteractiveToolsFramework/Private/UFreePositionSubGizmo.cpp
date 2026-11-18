// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 10

// StaticClass @ 14962ca70

UClass * __cdecl UFreePositionSubGizmo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFreePositionSubGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"FreePositionSubGizmo",
               &Z_Registration_Info_UClass_UFreePositionSubGizmo.InnerSingleton,
               StaticRegisterNativesUFreePositionSubGizmo,0x290,0x10,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UFreePositionSubGizmo>,
               InternalVTableHelperCtorCaller<UFreePositionSubGizmo>,local_res8,
               UPlanePositionGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFreePositionSubGizmo.InnerSingleton;
}

// UFreePositionSubGizmo @ 14963a130

UFreePositionSubGizmo * __thiscall
UFreePositionSubGizmo::UFreePositionSubGizmo(UFreePositionSubGizmo *this,FVTableHelper *param_1)

{
  UPlanePositionGizmo::UPlanePositionGizmo((UPlanePositionGizmo *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&this->TransformSource = 0;
  *(undefined8 *)&(this->TransformSource).field_0x8 = 0;
  return this;
}

// UFreePositionSubGizmo @ 14963a190

UFreePositionSubGizmo * __thiscall
UFreePositionSubGizmo::UFreePositionSubGizmo(UFreePositionSubGizmo *this)

{
  UPlanePositionGizmo::UPlanePositionGizmo((UPlanePositionGizmo *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&this->TransformSource = 0;
  *(undefined8 *)&(this->TransformSource).field_0x8 = 0;
  return this;
}

// ~UFreePositionSubGizmo @ 14963e690

void __thiscall UFreePositionSubGizmo::~UFreePositionSubGizmo(UFreePositionSubGizmo *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  UPlanePositionGizmo::~UPlanePositionGizmo((UPlanePositionGizmo *)this);
  return;
}

// operator() @ 149640730

void __thiscall
`UFreePositionSubGizmo::InitializeAsScreenPlaneTranslateGizmo'::__l20::<lambda_2>::operator()
          (void *this,float param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  TTransform<double> *pTVar5;
  UInteractiveGizmoManager *pUVar6;
  UGizmoConstantFrameAxisSource *pUVar7;
  TVector<double>_u_0 *pTVar8;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  pUVar7 = *(UGizmoConstantFrameAxisSource **)(*(longlong *)this + 0x48);
  if (pUVar7 != (UGizmoConstantFrameAxisSource *)0x0) {
    pUVar3 = UGizmoConstantFrameAxisSource::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14964076e;
  }
  pUVar7 = (UGizmoConstantFrameAxisSource *)0x0;
LAB_14964076e:
  if (pUVar7 != (UGizmoConstantFrameAxisSource *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 8));
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 8));
      if (*(longlong *)(pUVar4 + 0xb) == 0) {
        pTVar5 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar5 = (TTransform<double> *)(*(longlong *)(pUVar4 + 0xb) + 0x1f0);
      }
      local_38._0_4_ = *(undefined4 *)(pTVar5->Translation).XY.m128d_f64;
      local_38._4_4_ = *(undefined4 *)((longlong)(pTVar5->Translation).XY.m128d_f64 + 4);
      local_38._8_4_ = *(undefined4 *)((pTVar5->Translation).XY.m128d_f64 + 1);
      local_38._12_4_ = *(undefined4 *)((longlong)(pTVar5->Translation).XY.m128d_f64 + 0xc);
      pTVar8 = &local_38;
      local_38._s_0.Z = (pTVar5->Translation).ZW.m128d_f64[0];
    }
    else {
      pTVar8 = &local_20;
      local_20._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_20._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_20._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    pUVar6 = (UInteractiveGizmoManager *)(**(code **)(**(longlong **)this + 0x2d8))();
    UE::GizmoUtil::UpdateCameraAxisSource(pUVar7,pUVar6,(TVector<double> *)&pTVar8->_s_0);
  }
  return;
}

// GetPrivateStaticClass @ 149655f50

UClass * __cdecl UFreePositionSubGizmo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFreePositionSubGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"FreePositionSubGizmo",
               &Z_Registration_Info_UClass_UFreePositionSubGizmo.InnerSingleton,
               StaticRegisterNativesUFreePositionSubGizmo,0x290,0x10,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UFreePositionSubGizmo>,
               InternalVTableHelperCtorCaller<UFreePositionSubGizmo>,local_res8,
               UPlanePositionGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFreePositionSubGizmo.InnerSingleton;
}

// InitializeAsScreenPlaneTranslateGizmo @ 149659b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UFreePositionSubGizmo::InitializeAsScreenPlaneTranslateGizmo
          (UFreePositionSubGizmo *this,FTransformSubGizmoCommonParams *param_1,
          FTransformSubGizmoSharedState *param_2)

{
  longlong lVar1;
  UTransformProxy *pUVar2;
  UGizmoScaledAndUnscaledTransformSources *pUVar3;
  bool bVar4;
  UPackage *pUVar5;
  UGizmoConstantFrameAxisSource *pUVar6;
  UGizmoPlaneTranslationParameterSource *pUVar7;
  IToolContextTransactionProvider *pIVar8;
  IGizmoAxisSource *pIVar9;
  IGizmoAxisSource *pIVar10;
  IGizmoAxisSource *pIVar11;
  IGizmoAxisSource *pIVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  UGizmoScaledAndUnscaledTransformSources *local_a0;
  FWeakObjectPtr local_98;
  UObject *local_90;
  undefined1 local_88 [16];
  IToolContextTransactionProvider local_78;
  TOptional<FText>_u_0 TStack_70;
  IToolContextTransactionProvider *pIStack_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((param_1->Component == (UPrimitiveComponent *)0x0) ||
     (param_1->TransformProxy == (UTransformProxy *)0x0)) {
    return false;
  }
  pIVar11 = (IGizmoAxisSource *)0x0;
  if ((param_1->Axis == None) ||
     (bVar4 = `UFreePositionSubGizmo::InitializeAsScreenPlaneTranslateGizmo'::__l6::<lambda_1>::
              operator()(local_a8), bVar4)) {
    bVar4 = UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>
                      (this,param_1,param_2,&local_a0);
    if (!bVar4) {
      return false;
    }
  }
  else {
    UE::GizmoUtil::FTransformSubGizmoCommonParams::FTransformSubGizmoCommonParams
              ((FTransformSubGizmoCommonParams *)local_88,param_1);
    local_78 = (IToolContextTransactionProvider)((ulonglong)local_78 & 0xffffffff00000000);
    bVar4 = UE::GizmoUtil::SetCommonSubGizmoProperties<UFreePositionSubGizmo>
                      (this,(FTransformSubGizmoCommonParams *)local_88,param_2,&local_a0);
    if (!bVar4) {
      if (TStack_70.TypedValue.TextData.Reference == (ITextData *)0x0) {
        return false;
      }
      (**(code **)((longlong)*(ITextData *)TStack_70.TypedValue.TextData.Reference + 0x10))();
      return false;
    }
    if (TStack_70.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)TStack_70.TypedValue.TextData.Reference + 0x10))();
    }
  }
  pUVar5 = (UPackage *)param_1->OuterForSubobjects;
  if (pUVar5 == (UPackage *)0x0) {
    pUVar5 = GetTransientPackage();
  }
  if ((param_2 == (FTransformSubGizmoSharedState *)0x0) ||
     (pUVar6 = param_2->CameraAxisSource, pUVar6 == (UGizmoConstantFrameAxisSource *)0x0)) {
    pUVar6 = NewObject<UGizmoConstantFrameAxisSource>((UObject *)pUVar5);
    local_90 = *(UObject **)&param_1->Component->field_0xa8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_90);
    }
    local_98.ObjectIndex = 0;
    local_98.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_90);
    }
    FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_90);
    local_88._0_8_ = this->_padding_;
    pUVar2 = (UTransformProxy *)this->_padding_;
    local_78 = (IToolContextTransactionProvider)this->_padding_;
    TStack_70.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)this->_padding_;
    lVar1 = this->_padding_;
    pIStack_60 = (IToolContextTransactionProvider *)this->_padding_;
    this->_padding_ =
         (longlong)
         UE::Core::Private::Function::
         TFunctionRefCaller<`UFreePositionSubGizmo::InitializeAsScreenPlaneTranslateGizmo'::__l20::<lambda_2>,void,float>
         ::Call;
    this->_padding_ = local_88._8_8_;
    TStack_70.TypedValue.Flags = local_98.ObjectIndex;
    TStack_70._12_4_ = local_98.ObjectSerialNumber;
    *(undefined4 *)&this->_padding_ = 0x51e77af8;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
    this->_padding_ = (longlong)this;
    *(uint *)&this->_padding_ = TStack_70.TypedValue.Flags;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = TStack_70._12_4_;
    *(undefined4 *)&this->_padding_ = 0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    TStack_70._8_8_ = lVar1;
    local_88._8_8_ = pUVar2;
    if ((UPrimitiveComponent *)local_88._0_8_ != (UPrimitiveComponent *)0x0) {
      pIVar8 = &local_78;
      if (pIStack_60 != (IToolContextTransactionProvider *)0x0) {
        pIVar8 = pIStack_60;
      }
      (**(code **)((longlong)*pIVar8 + 0x10))();
    }
    if (param_2 != (FTransformSubGizmoSharedState *)0x0) {
      param_2->CameraAxisSource = pUVar6;
    }
    pIVar12 = pIVar11;
    if (pUVar6 != (UGizmoConstantFrameAxisSource *)0x0) goto LAB_149659d59;
  }
  else {
LAB_149659d59:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    pIVar12 = (IGizmoAxisSource *)&pUVar6->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UGizmoConstantFrameAxisSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  this->_padding_ = (longlong)pUVar6;
  this->_padding_ = (longlong)pIVar12;
  pIVar10 = (IGizmoAxisSource *)&local_a0->_padding_;
  if (local_a0 == (UGizmoScaledAndUnscaledTransformSources *)0x0) {
    pIVar10 = pIVar11;
  }
  pIVar9 = pIVar11;
  if (pUVar6 != (UGizmoConstantFrameAxisSource *)0x0) {
    pIVar9 = pIVar12;
  }
  pUVar7 = UGizmoPlaneTranslationParameterSource::Construct
                     (pIVar9,(IGizmoTransformSource *)pIVar10,(UObject *)pUVar5);
  pIVar12 = pIVar11;
  if (pUVar7 != (UGizmoPlaneTranslationParameterSource *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    pIVar12 = (IGizmoAxisSource *)&pUVar7->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UGizmoPlaneTranslationParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar3 = local_a0;
  this->_padding_ = (longlong)pUVar7;
  this->_padding_ = (longlong)pIVar12;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_a0 == (UGizmoScaledAndUnscaledTransformSources *)0x0) goto LAB_149659e2e;
    UE::GC::MarkAsReachable((UObject *)local_a0);
  }
  if (local_a0 != (UGizmoScaledAndUnscaledTransformSources *)0x0) {
    pIVar11 = (IGizmoAxisSource *)&local_a0->_padding_;
  }
LAB_149659e2e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UGizmoScaledAndUnscaledTransformSources *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  *(UGizmoScaledAndUnscaledTransformSources **)&this->TransformSource = pUVar3;
  *(IGizmoAxisSource **)&(this->TransformSource).field_0x8 = pIVar11;
  return true;
}

// OnClickDrag @ 14965d1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UFreePositionSubGizmo::OnClickDrag(UFreePositionSubGizmo *this,FInputDeviceRay *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  FInputDeviceRay *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((char)this->_padding_ != '\0') {
    local_98 = param_1;
    UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
    pcVar1 = (code *)this->_padding_;
    plVar4 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar4 = (longlong *)this->_padding_;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3);
    if (cVar2 != '\0') {
      UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
      pcVar1 = (code *)this->_padding_;
      plVar4 = &this->_padding_;
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        plVar4 = (longlong *)this->_padding_;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,&local_98,&local_90);
      if (cVar2 != '\0') {
        plVar4 = (longlong *)0x0;
        plVar5 = plVar4;
        if (this->_padding_ != 0) {
          plVar5 = (longlong *)this->_padding_;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5,local_78);
        local_58 = local_90;
        uStack_54 = uStack_8c;
        uStack_50 = uStack_88;
        uStack_4c = uStack_84;
        local_48 = local_80;
        uStack_40 = 0;
        if (this->_padding_ != 0) {
          plVar4 = (longlong *)this->_padding_;
        }
        (**(code **)(*plVar4 + 0x18))(plVar4,local_78);
        return;
      }
    }
    UPlanePositionGizmo::OnClickDrag((UPlanePositionGizmo *)this,param_1);
  }
  return;
}

// StaticRegisterNativesUFreePositionSubGizmo @ 149664a50

void __cdecl UFreePositionSubGizmo::StaticRegisterNativesUFreePositionSubGizmo(void)

{
  return;
}

// operator() @ 150543d10

bool __thiscall
`UFreePositionSubGizmo::InitializeAsScreenPlaneTranslateGizmo'::__l6::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3472299532023234525>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3472299532023234525>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

