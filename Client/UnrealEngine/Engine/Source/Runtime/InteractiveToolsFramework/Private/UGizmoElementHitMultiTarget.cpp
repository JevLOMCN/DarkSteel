// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 19

// StaticClass @ 14966c7d0

UClass * __cdecl UGizmoElementHitMultiTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementHitMultiTarget",
               &Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.InnerSingleton,
               StaticRegisterNativesUGizmoElementHitMultiTarget,0x80,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementHitMultiTarget>,
               InternalVTableHelperCtorCaller<UGizmoElementHitMultiTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.InnerSingleton;
}

// UGizmoElementHitMultiTarget @ 149684d10

UGizmoElementHitMultiTarget * __thiscall
UGizmoElementHitMultiTarget::UGizmoElementHitMultiTarget
          (UGizmoElementHitMultiTarget *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoClickMultiTarget__;
  (this->GizmoElement).field0_0x0.DebugPtr = (UGizmoElementBase *)0x0;
  (this->GizmoViewContext).field0_0x0.DebugPtr = (UGizmoViewContext *)0x0;
  (this->GizmoTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  *(undefined8 *)&this->Condition = 0;
  *(undefined8 *)&(this->Condition).field_0x28 = 0;
  return this;
}

// UGizmoElementHitMultiTarget @ 149684d60

UGizmoElementHitMultiTarget * __thiscall
UGizmoElementHitMultiTarget::UGizmoElementHitMultiTarget
          (UGizmoElementHitMultiTarget *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoClickMultiTarget__;
  (this->GizmoElement).field0_0x0.DebugPtr = (UGizmoElementBase *)0x0;
  (this->GizmoViewContext).field0_0x0.DebugPtr = (UGizmoViewContext *)0x0;
  (this->GizmoTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  *(undefined8 *)&this->Condition = 0;
  *(undefined8 *)&(this->Condition).field_0x28 = 0;
  return this;
}

// ~UGizmoElementHitMultiTarget @ 149689b20

void __thiscall
UGizmoElementHitMultiTarget::~UGizmoElementHitMultiTarget(UGizmoElementHitMultiTarget *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoClickMultiTarget__;
  if (*(longlong *)&this->Condition != 0) {
    plVar1 = *(longlong **)&(this->Condition).field_0x28;
    plVar2 = (longlong *)&(this->Condition).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IGizmoClickMultiTarget__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Construct @ 149699bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoElementHitMultiTarget * __cdecl
UGizmoElementHitMultiTarget::Construct
          (UGizmoElementBase *param_1,UGizmoViewContext *param_2,UObject *param_3)

{
  UClass *pUVar1;
  UGizmoElementHitMultiTarget *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FObjectInitializer::AssertIfInConstructor
            (param_3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._8_8_ = param_3;
  pUVar2 = (UGizmoElementHitMultiTarget *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar3 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UGizmoElementBase *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (pUVar2->GizmoElement).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UGizmoViewContext *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (pUVar2->GizmoViewContext).field0_0x0.DebugPtr = param_2;
  return pUVar2;
}

// GetPrivateStaticClass @ 1496a5370

UClass * __cdecl UGizmoElementHitMultiTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementHitMultiTarget",
               &Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.InnerSingleton,
               StaticRegisterNativesUGizmoElementHitMultiTarget,0x80,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementHitMultiTarget>,
               InternalVTableHelperCtorCaller<UGizmoElementHitMultiTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.InnerSingleton;
}

// IsHit @ 1496ada10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputRayHit * __thiscall
UGizmoElementHitMultiTarget::IsHit
          (UGizmoElementHitMultiTarget *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined8 *puVar7;
  FInputRayHit *pFVar8;
  ISceneViewInterface *pIVar9;
  float fVar10;
  undefined1 auStack_1d8 [32];
  FInputDeviceRay *local_1b8;
  TVector<double> *local_1b0;
  undefined4 *local_1a8;
  undefined4 local_198;
  undefined1 local_194;
  TOptional<double> local_190;
  TVector<double>_u_0 local_180;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 local_f8 [96];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  if (((this->_padding_ == 0) || (this->_padding_ == 0)) || (this->_padding_ == 0)) {
LAB_1496adc35:
    FInputRayHit::FInputRayHit(__return_storage_ptr__);
  }
  else {
    if (this->_padding_ != 0) {
      bVar6 = UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FInputDeviceRay_const_&)>
              ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FInputDeviceRay_const_&)>
                            *)&this->_padding_,param_1);
      if (!bVar6) goto LAB_1496adc35;
    }
    local_ff = 1;
    puVar7 = (undefined8 *)
             (**(code **)(*(longlong *)this->_padding_ + 0x2c0))
                       ((longlong *)this->_padding_,local_f8);
    lVar1 = this->_padding_;
    local_168 = *puVar7;
    uStack_160 = puVar7[1];
    local_158 = puVar7[2];
    uStack_150 = puVar7[3];
    dVar4 = (double)puVar7[4];
    dVar5 = (double)puVar7[5];
    dVar3 = (double)puVar7[6];
    uStack_130 = puVar7[7];
    local_128 = puVar7[8];
    uStack_120 = puVar7[9];
    local_118 = puVar7[10];
    uStack_110 = puVar7[0xb];
    if (lVar1 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InGizmoViewContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\BaseGizmos\\GizmoElementBase.h"
                         ,0x71,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FInputRayHit *)(*pcVar2)();
        return pFVar8;
      }
    }
    pIVar9 = (ISceneViewInterface *)(lVar1 + 0x28);
    local_148 = dVar4;
    dStack_140 = dVar5;
    local_138 = dVar3;
    local_100 = (**(code **)((longlong)*pIVar9 + 0x40))(pIVar9);
    local_190.bIsSet = false;
    if (lVar1 == 0) {
      pIVar9 = (ISceneViewInterface *)0x0;
    }
    local_180._s_0.X = dVar4;
    local_180._s_0.Y = dVar5;
    local_180._s_0.Z = dVar3;
    fVar10 = UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale
                       (pIVar9,(TVector<double> *)&local_180._s_0,true,&local_190);
    local_1a8 = &local_198;
    local_1b0 = &(param_1->WorldRay).Direction;
    local_108 = (double)fVar10;
    local_198 = 0;
    local_194 = 0;
    local_1b8 = param_1;
    (**(code **)(*(longlong *)this->_padding_ + 0x2c8))
              ((longlong *)this->_padding_,__return_storage_ptr__,this->_padding_,&local_168);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUGizmoElementHitMultiTarget @ 1496c2980

void __cdecl UGizmoElementHitMultiTarget::StaticRegisterNativesUGizmoElementHitMultiTarget(void)

{
  return;
}

// UpdateHittableState @ 1496c3f20

void __thiscall
UGizmoElementHitMultiTarget::UpdateHittableState
          (UGizmoElementHitMultiTarget *this,bool param_1,uint param_2,bool param_3)

{
  UGizmoElementBase *pUVar1;
  
  pUVar1 = (this->GizmoElement).field0_0x0.DebugPtr;
  if (pUVar1 != (UGizmoElementBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496c3f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x3f0))();
    return;
  }
  return;
}

// UpdateHittableState @ 1496c3f40

void __thiscall
UGizmoElementHitMultiTarget::UpdateHittableState
          (UGizmoElementHitMultiTarget *this,bool param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496c3f4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this[-1].Condition.field_0x8 + 0x2d0))
            (&this[-1].Condition.field_0x8,param_1,param_2,0);
  return;
}

// UpdateHoverState @ 1496c3ff0

void __thiscall
UGizmoElementHitMultiTarget::UpdateHoverState
          (UGizmoElementHitMultiTarget *this,bool param_1,uint param_2,bool param_3)

{
  longlong lVar1;
  UGizmoElementBase *pUVar2;
  undefined8 uVar3;
  undefined4 in_register_00000084;
  ulonglong uVar4;
  undefined7 in_register_00000089;
  ulonglong uVar5;
  int local_res8;
  char local_resc;
  
  uVar5 = CONCAT71(in_register_00000089,param_3);
  pUVar2 = (this->GizmoElement).field0_0x0.DebugPtr;
  uVar4 = (ulonglong)param_2;
  if (pUVar2 != (UGizmoElementBase *)0x0) {
    lVar1 = pUVar2->_padding_;
    if (param_1) {
      uVar3 = 1;
      uVar4 = CONCAT44(in_register_00000084,param_2);
    }
    else {
      (**(code **)(lVar1 + 0x418))(pUVar2,&local_res8,CONCAT44(in_register_00000084,param_2),uVar5);
      if ((local_resc != '\0') && (local_res8 == 2)) {
        return;
      }
      pUVar2 = (this->GizmoElement).field0_0x0.DebugPtr;
      uVar5 = (ulonglong)param_3;
      uVar3 = 0;
      lVar1 = pUVar2->_padding_;
    }
    (**(code **)(lVar1 + 0x408))(pUVar2,uVar3,uVar4,uVar5);
  }
  return;
}

// UpdateHoverState @ 1496c4070

void __thiscall
UGizmoElementHitMultiTarget::UpdateHoverState
          (UGizmoElementHitMultiTarget *this,bool param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496c407b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this[-1].Condition.field_0x8 + 0x2b0))
            (&this[-1].Condition.field_0x8,param_1,param_2,0);
  return;
}

// UpdateInteractingState @ 1496c4220

void __thiscall
UGizmoElementHitMultiTarget::UpdateInteractingState
          (UGizmoElementHitMultiTarget *this,bool param_1,uint param_2,bool param_3)

{
  UGizmoElementBase *pUVar1;
  
  pUVar1 = (this->GizmoElement).field0_0x0.DebugPtr;
  if (pUVar1 != (UGizmoElementBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496c4231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x408))(pUVar1,param_1 * '\x02');
    return;
  }
  return;
}

// UpdateInteractingState @ 1496c4240

void __thiscall
UGizmoElementHitMultiTarget::UpdateInteractingState
          (UGizmoElementHitMultiTarget *this,bool param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496c424b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this[-1].Condition.field_0x8 + 0x2b8))
            (&this[-1].Condition.field_0x8,param_1,param_2,0);
  return;
}

// UpdateSelectedState @ 1496c54f0

void __thiscall
UGizmoElementHitMultiTarget::UpdateSelectedState
          (UGizmoElementHitMultiTarget *this,bool param_1,uint param_2,bool param_3)

{
  UGizmoElementBase *pUVar1;
  
  pUVar1 = (this->GizmoElement).field0_0x0.DebugPtr;
  if (pUVar1 != (UGizmoElementBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496c5503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x408))(pUVar1,-param_1 & 3);
    return;
  }
  return;
}

// UpdateSelectedState @ 1496c5520

void __thiscall
UGizmoElementHitMultiTarget::UpdateSelectedState
          (UGizmoElementHitMultiTarget *this,bool param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496c552b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this[-1].Condition.field_0x8 + 0x2c0))
            (&this[-1].Condition.field_0x8,param_1,param_2,0);
  return;
}

// UpdateSubdueState @ 1496c5a70

void __thiscall
UGizmoElementHitMultiTarget::UpdateSubdueState
          (UGizmoElementHitMultiTarget *this,bool param_1,uint param_2,bool param_3)

{
  UGizmoElementBase *pUVar1;
  
  pUVar1 = (this->GizmoElement).field0_0x0.DebugPtr;
  if (pUVar1 != (UGizmoElementBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496c5a82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x408))(pUVar1,(ulonglong)param_1 << 2);
    return;
  }
  return;
}

// UpdateSubdueState @ 1496c5a90

void __thiscall
UGizmoElementHitMultiTarget::UpdateSubdueState
          (UGizmoElementHitMultiTarget *this,bool param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496c5a9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this[-1].Condition.field_0x8 + 0x2c8))
            (&this[-1].Condition.field_0x8,param_1,param_2,0);
  return;
}

// _getUObject @ 1496ca7c0

UObject * __thiscall UGizmoElementHitMultiTarget::_getUObject(UGizmoElementHitMultiTarget *this)

{
  return (UObject *)&this[-1].Condition.field_0x8;
}

