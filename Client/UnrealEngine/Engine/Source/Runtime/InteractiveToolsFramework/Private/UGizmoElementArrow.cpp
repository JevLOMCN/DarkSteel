// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 38

// StaticClass @ 14962bcb0

UClass * __cdecl UGizmoElementArrow::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementArrow.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementArrow",
               &Z_Registration_Info_UClass_UGizmoElementArrow.InnerSingleton,
               StaticRegisterNativesUGizmoElementArrow,0x270,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementArrow>,
               InternalVTableHelperCtorCaller<UGizmoElementArrow>,local_res8,
               UGizmoElementGroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementArrow.InnerSingleton;
}

// UGizmoElementArrow @ 14963ae00

UGizmoElementArrow * __thiscall
UGizmoElementArrow::UGizmoElementArrow(UGizmoElementArrow *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  UGizmoElementGroupBase::UGizmoElementGroupBase((UGizmoElementGroupBase *)this,param_1);
  this->bUpdateArrowBody = true;
  this->bUpdateArrowHead = true;
  local_res8[0] = 0;
  this->_padding_ = (longlong)&___7UGizmoElementArrow__6B_;
  (this->CylinderElement).field0_0x0.DebugPtr = (UGizmoElementCylinder *)0x0;
  (this->HeadElement).field0_0x0.DebugPtr = (UGizmoElementArrowHead *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Base).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Base).field0_0x0._s_0.Y = (double)uVar1;
  (this->Base).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->SideDirection).field0_0x0._s_0.X = 0.0;
  (this->SideDirection).field0_0x0._s_0.Z = 0.0;
  this->bEndCaps = false;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  (this->SideDirection).field0_0x0._s_0.Y = 1.0;
  this->BodyLength = 1.5;
  this->BodyRadius = 0.5;
  this->HeadLength = 0.5;
  this->HeadRadius = 0.75;
  this->NumSides = 0x20;
  this->HeadType = Cone;
  (this->HitMask).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->HitMask).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UGizmoElementArrow @ 14963aef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoElementArrow * __thiscall UGizmoElementArrow::UGizmoElementArrow(UGizmoElementArrow *this)

{
  undefined8 uVar1;
  FObjectInitializer *pFVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UGizmoElementCylinder *pUVar5;
  UGizmoElementArrowHead *pUVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar2 = FObjectInitializer::Get();
  UGizmoElementGroupBase::UGizmoElementGroupBase((UGizmoElementGroupBase *)this,pFVar2);
  this->bUpdateArrowBody = true;
  this->bUpdateArrowHead = true;
  local_a8[0] = 0;
  this->_padding_ = (longlong)&___7UGizmoElementArrow__6B_;
  (this->CylinderElement).field0_0x0.DebugPtr = (UGizmoElementCylinder *)0x0;
  (this->HeadElement).field0_0x0.DebugPtr = (UGizmoElementArrowHead *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Base).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Base).field0_0x0._s_0.Y = (double)uVar1;
  (this->Base).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->SideDirection).field0_0x0._s_0.X = 0.0;
  (this->SideDirection).field0_0x0._s_0.Z = 0.0;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  (this->SideDirection).field0_0x0._s_0.Y = 1.0;
  this->bEndCaps = false;
  this->HeadType = Cone;
  this->BodyLength = 1.5;
  this->BodyRadius = 0.5;
  this->HeadLength = 0.5;
  this->HeadRadius = 0.75;
  this->NumSides = 0x20;
  (this->HitMask).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->HitMask).WeakPtr,(FObjectPtr)local_a8);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  this->HeadType = Cone;
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UGizmoElementCylinder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._8_8_ = pUVar3;
  pUVar5 = (UGizmoElementCylinder *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar7 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UGizmoElementCylinder *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->CylinderElement).field0_0x0.DebugPtr = pUVar5;
  UGizmoElementGroupBase::Add((UGizmoElementGroupBase *)this,(UGizmoElementBase *)pUVar5);
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = UGizmoElementArrowHead::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._8_8_ = pUVar3;
  pUVar6 = (UGizmoElementArrowHead *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar7 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UGizmoElementArrowHead *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->HeadElement).field0_0x0.DebugPtr = pUVar6;
  (**(code **)(pUVar6->_padding_ + 0x888))(pUVar6,this->HeadType);
  UGizmoElementGroupBase::Add
            ((UGizmoElementGroupBase *)this,
             (UGizmoElementBase *)(this->HeadElement).field0_0x0.DebugPtr);
  return this;
}

// ~UGizmoElementArrow @ 14963ea10

void __thiscall UGizmoElementArrow::~UGizmoElementArrow(UGizmoElementArrow *this)

{
  this->_padding_ = (longlong)&___7UGizmoElementArrow__6B_;
  UGizmoElementGroupBase::~UGizmoElementGroupBase((UGizmoElementGroupBase *)this);
  return;
}

// operator() @ 14963ffb0

void __thiscall `UGizmoElementArrow::LineTrace'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)this + 0x1f0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4a0))(plVar1,*(undefined4 *)(*(longlong *)this + 0x140));
  }
  plVar1 = *(longlong **)(*(longlong *)this + 0x1f8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4a0))(plVar1,*(undefined4 *)(*(longlong *)this + 0x140));
  }
  plVar1 = *(longlong **)(*(longlong *)this + 0x1f0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4b0))(plVar1,*(undefined4 *)(*(longlong *)this + 0x144));
  }
  plVar1 = *(longlong **)(*(longlong *)this + 0x1f8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149640038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x4b0))(plVar1,*(undefined4 *)(*(longlong *)this + 0x144));
    return;
  }
  return;
}

// GetBase @ 1496527e0

TVector<double> * __thiscall
UGizmoElementArrow::GetBase(UGizmoElementArrow *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Base).field0_0x0._s_0.Y;
  dVar1 = (this->Base).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Base).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetBodyLength @ 149652810

float __thiscall UGizmoElementArrow::GetBodyLength(UGizmoElementArrow *this)

{
  return this->BodyLength;
}

// GetBodyRadius @ 149652820

float __thiscall UGizmoElementArrow::GetBodyRadius(UGizmoElementArrow *this)

{
  return this->BodyRadius;
}

// GetDashParameters @ 1496529f0

void __thiscall
UGizmoElementArrow::GetDashParameters(UGizmoElementArrow *this,float *param_1,float *param_2)

{
  UGizmoElementCylinder *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  pUVar1 = (this->CylinderElement).field0_0x0.DebugPtr;
  if (pUVar1 != (UGizmoElementCylinder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149652a39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x720))();
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5038325473789083323>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrow.cpp"
                     ,0x145,"CylinderElement");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// GetDirection @ 149652c80

TVector<double> * __thiscall
UGizmoElementArrow::GetDirection(UGizmoElementArrow *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Direction).field0_0x0._s_0.Y;
  dVar1 = (this->Direction).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Direction).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetEndCaps @ 149654e00

bool __thiscall UGizmoElementArrow::GetEndCaps(UGizmoElementArrow *this)

{
  return this->bEndCaps;
}

// GetHeadLength @ 149655060

float __thiscall UGizmoElementArrow::GetHeadLength(UGizmoElementArrow *this)

{
  return this->HeadLength;
}

// GetHeadRadius @ 149655070

float __thiscall UGizmoElementArrow::GetHeadRadius(UGizmoElementArrow *this)

{
  return this->HeadRadius;
}

// GetHeadType @ 149655080

EGizmoElementArrowHeadType __thiscall UGizmoElementArrow::GetHeadType(UGizmoElementArrow *this)

{
  return this->HeadType;
}

// GetNumSides @ 149655230

int __thiscall UGizmoElementArrow::GetNumSides(UGizmoElementArrow *this)

{
  return this->NumSides;
}

// GetPrivateStaticClass @ 149656810

UClass * __cdecl UGizmoElementArrow::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementArrow.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementArrow",
               &Z_Registration_Info_UClass_UGizmoElementArrow.InnerSingleton,
               StaticRegisterNativesUGizmoElementArrow,0x270,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementArrow>,
               InternalVTableHelperCtorCaller<UGizmoElementArrow>,local_res8,
               UGizmoElementGroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementArrow.InnerSingleton;
}

// GetSideDirection @ 149658690

TVector<double> * __thiscall
UGizmoElementArrow::GetSideDirection
          (UGizmoElementArrow *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->SideDirection).field0_0x0._s_0.Y;
  dVar1 = (this->SideDirection).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->SideDirection).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// IsDashed @ 14965a0e0

bool __thiscall UGizmoElementArrow::IsDashed(UGizmoElementArrow *this)

{
  UGizmoElementCylinder *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pUVar1 = (this->CylinderElement).field0_0x0.DebugPtr;
  if (pUVar1 != (UGizmoElementCylinder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014965a12b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(pUVar1->_padding_ + 0x710))();
    return (bool)uVar4;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5038325473789083341>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrow.cpp"
                     ,0x133,"CylinderElement");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// LineTrace @ 14965ae60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputRayHit * __thiscall
UGizmoElementArrow::LineTrace
          (UGizmoElementArrow *this,FInputRayHit *__return_storage_ptr__,UGizmoViewContext *param_1,
          FLineTraceTraversalState *param_2,TVector<double> *param_3,TVector<double> *param_4,
          FLineTraceOutput *param_5)

{
  UGizmoElementCylinder *pUVar1;
  UGizmoElementArrowHead *pUVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  UObject *pUVar6;
  FInputRayHit *pFVar7;
  char *pcVar8;
  void *this_00;
  undefined ***pppuVar9;
  undefined1 auStack_238 [32];
  TVector<double> *local_218;
  TVector<double> *local_210;
  FLineTraceOutput *local_208;
  UGizmoElementArrow *local_1f8 [2];
  bool local_1e8;
  char cStack_1e7;
  char cStack_1e6;
  char cStack_1e5;
  char cStack_1e4;
  char cStack_1e3;
  char cStack_1e2;
  char cStack_1e1;
  char cStack_1e0;
  char cStack_1df;
  char cStack_1de;
  char cStack_1dd;
  char cStack_1dc;
  char cStack_1db;
  char cStack_1da;
  char cStack_1d9;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  int iStack_1bc;
  UGizmoElementArrow *local_1b8;
  FWeakObjectPtr FStack_1b0;
  char local_1a8 [64];
  undefined1 local_168 [64];
  code *local_128;
  undefined **local_118;
  UGizmoElementArrow *pUStack_110;
  undefined8 local_108;
  undefined ***local_100;
  undefined8 local_f8;
  undefined **local_e8;
  UGizmoElementArrow *pUStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_c8 = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
  dStack_c0 = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
  local_b8 = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
  dStack_b0 = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
  local_a8 = (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[0];
  dStack_a0 = (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[1];
  local_88 = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
  dStack_80 = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
  local_98 = (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
  dStack_90 = (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
  local_68 = *(undefined4 *)&param_2->PixelToWorldScale;
  uStack_64 = *(undefined4 *)((longlong)&param_2->PixelToWorldScale + 4);
  uStack_60._0_1_ = param_2->bIsPerspectiveProjection;
  uStack_60._1_1_ = param_2->HitSortType;
  uStack_60._2_2_ = *(undefined2 *)&param_2->field_0x6a;
  uStack_5c = *(undefined4 *)&param_2->field_0x6c;
  local_78 = *(undefined4 *)(param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64;
  uStack_74 = *(undefined4 *)((longlong)(param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 4);
  uStack_70 = *(undefined4 *)((param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 1);
  uStack_6c = *(undefined4 *)((longlong)(param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 0xc)
  ;
  cVar4 = (**(code **)(this->_padding_ + 0x6a8))(this,param_1,&this->Base,&local_c8);
  if (cVar4 == '\0') {
    FInputRayHit::FInputRayHit(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  local_e8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGizmoElementArrow::LineTrace'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  local_128 = UE::Core::Private::Function::
              TFunctionRefCaller<`UGizmoElementArrow::LineTrace'::__l2::<lambda_1>,void>::Call;
  local_100 = (undefined ***)0x0;
  local_d0 = 0;
  local_f8 = 0;
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UGizmoElementArrow::LineTrace'::`2'::<lambda_1>,0,0>::
               _vftable_;
  local_108 = local_d8;
  pUStack_110 = this;
  pUStack_e0 = this;
  pUVar6 = FWeakObjectPtr::Get(&(this->HitMask).WeakPtr);
  if (pUVar6 != (UObject *)0x0) {
    local_208 = param_5;
    local_210 = param_4;
    local_218 = param_3;
    (**(code **)(*(longlong *)pUVar6 + 0x2c8))(pUVar6,local_1a8,param_1,param_2);
    if (local_1a8[0] != '\0') {
      pUVar1 = (this->CylinderElement).field0_0x0.DebugPtr;
      if (pUVar1 != (UGizmoElementCylinder *)0x0) {
        (**(code **)(pUVar1->_padding_ + 0x4a0))(pUVar1,0);
      }
      pUVar2 = (this->HeadElement).field0_0x0.DebugPtr;
      if (pUVar2 != (UGizmoElementArrowHead *)0x0) {
        (**(code **)(pUVar2->_padding_ + 0x4a0))(pUVar2,0);
      }
    }
  }
  if (((this->CylinderElement).field0_0x0.DebugPtr == (UGizmoElementCylinder *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CylinderElement",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrow.cpp"
                         ,0x71,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FInputRayHit *)(*pcVar3)();
    return pFVar7;
  }
  pUVar1 = (this->CylinderElement).field0_0x0.DebugPtr;
  local_208 = param_5;
  local_210 = param_4;
  local_218 = param_3;
  (**(code **)(pUVar1->_padding_ + 0x2c8))(pUVar1,&local_1e8,param_1,&local_c8);
  if (local_1e8 == false) {
    if (((this->HeadElement).field0_0x0.DebugPtr == (UGizmoElementArrowHead *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeadElement",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrow.cpp"
                           ,0x76,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FInputRayHit *)(*pcVar3)();
      return pFVar7;
    }
    pUVar2 = (this->HeadElement).field0_0x0.DebugPtr;
    local_208 = param_5;
    local_210 = param_4;
    local_218 = param_3;
    pcVar8 = (char *)(**(code **)(pUVar2->_padding_ + 0x2c8))(pUVar2,local_168,param_1,&local_c8);
    local_1e8 = (bool)*pcVar8;
    cStack_1e7 = pcVar8[1];
    cStack_1e6 = pcVar8[2];
    cStack_1e5 = pcVar8[3];
    cStack_1e4 = pcVar8[4];
    cStack_1e3 = pcVar8[5];
    cStack_1e2 = pcVar8[6];
    cStack_1e1 = pcVar8[7];
    cStack_1e0 = pcVar8[8];
    cStack_1df = pcVar8[9];
    cStack_1de = pcVar8[10];
    cStack_1dd = pcVar8[0xb];
    cStack_1dc = pcVar8[0xc];
    cStack_1db = pcVar8[0xd];
    cStack_1da = pcVar8[0xe];
    cStack_1d9 = pcVar8[0xf];
    local_1d8 = *(undefined4 *)(pcVar8 + 0x10);
    uStack_1d4 = *(undefined4 *)(pcVar8 + 0x14);
    uStack_1d0 = *(undefined4 *)(pcVar8 + 0x18);
    uStack_1cc = *(undefined4 *)(pcVar8 + 0x1c);
    local_1c8 = *(undefined4 *)(pcVar8 + 0x20);
    uStack_1c4 = *(undefined4 *)(pcVar8 + 0x24);
    uStack_1c0 = *(undefined4 *)(pcVar8 + 0x28);
    iStack_1bc = *(int *)(pcVar8 + 0x2c);
    local_1b8 = *(UGizmoElementArrow **)(pcVar8 + 0x30);
    FStack_1b0.ObjectIndex = *(int *)(pcVar8 + 0x38);
    FStack_1b0.ObjectSerialNumber = *(int *)(pcVar8 + 0x3c);
    if (local_1e8 == false) goto LAB_14965b103;
  }
  local_1f8[0] = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&FStack_1b0,(FObjectPtr)local_1f8);
  iStack_1bc = (int)this->_padding_;
  local_1b8 = this;
LAB_14965b103:
  __return_storage_ptr__->bHit = local_1e8;
  __return_storage_ptr__->field_0x1 = cStack_1e7;
  __return_storage_ptr__->field_0x2 = cStack_1e6;
  __return_storage_ptr__->field_0x3 = cStack_1e5;
  __return_storage_ptr__->field_0x4 = cStack_1e4;
  __return_storage_ptr__->field_0x5 = cStack_1e3;
  __return_storage_ptr__->field_0x6 = cStack_1e2;
  __return_storage_ptr__->field_0x7 = cStack_1e1;
  *(char *)&__return_storage_ptr__->HitDepth = cStack_1e0;
  *(char *)((longlong)&__return_storage_ptr__->HitDepth + 1) = cStack_1df;
  *(char *)((longlong)&__return_storage_ptr__->HitDepth + 2) = cStack_1de;
  *(char *)((longlong)&__return_storage_ptr__->HitDepth + 3) = cStack_1dd;
  *(char *)((longlong)&__return_storage_ptr__->HitDepth + 4) = cStack_1dc;
  *(char *)((longlong)&__return_storage_ptr__->HitDepth + 5) = cStack_1db;
  *(char *)((longlong)&__return_storage_ptr__->HitDepth + 6) = cStack_1da;
  *(char *)((longlong)&__return_storage_ptr__->HitDepth + 7) = cStack_1d9;
  *(undefined4 *)&(__return_storage_ptr__->HitNormal).field0_0x0 = local_1d8;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->HitNormal).field0_0x0 + 4) = uStack_1d4;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->HitNormal).field0_0x0 + 8) = uStack_1d0;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->HitNormal).field0_0x0 + 0xc) = uStack_1cc;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->HitNormal).field0_0x0 + 0x10) = local_1c8;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->HitNormal).field0_0x0 + 0x14) = uStack_1c4;
  *(undefined4 *)&__return_storage_ptr__->bHasHitNormal = uStack_1c0;
  __return_storage_ptr__->HitIdentifier = iStack_1bc;
  __return_storage_ptr__->HitOwner = local_1b8;
  (__return_storage_ptr__->HitObject).WeakPtr.ObjectIndex = FStack_1b0.ObjectIndex;
  (__return_storage_ptr__->HitObject).WeakPtr.ObjectSerialNumber = FStack_1b0.ObjectSerialNumber;
  UE::Core::Private::Function::CheckCallable(local_128);
  pcVar3 = local_128;
  pppuVar9 = &local_118;
  if (local_100 != (undefined ***)0x0) {
    pppuVar9 = local_100;
  }
  this_00 = (void *)(*(code *)(*pppuVar9)[1])();
  if (pcVar3 == UE::Core::Private::Function::
                TFunctionRefCaller<`UGizmoElementArrow::LineTrace'::__l2::<lambda_1>,void>::Call) {
    `UGizmoElementArrow::LineTrace'::__l2::<lambda_1>::operator()(this_00);
  }
  else {
    (*pcVar3)();
  }
  if (local_128 != (code *)0x0) {
    pppuVar9 = &local_118;
    if (local_100 != (undefined ***)0x0) {
      pppuVar9 = local_100;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  return __return_storage_ptr__;
}

// Render @ 14965fe80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGizmoElementArrow::Render
          (UGizmoElementArrow *this,IToolsContextRenderAPI *param_1,FRenderTraversalState *param_2)

{
  UGizmoElementCylinder *pUVar1;
  UGizmoElementArrowHead *pUVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  FWeakObjectPtr FVar16;
  double *pdVar17;
  bool bVar18;
  char cVar19;
  double *pdVar20;
  longlong lVar21;
  FRenderTraversalState *pFVar22;
  undefined1 auStack_1b8 [32];
  double local_198 [46];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if (param_1 == (IToolsContextRenderAPI *)0x0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("RenderAPI",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrow.cpp"
                        ,0x37,L"");
    if (bVar18) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bUpdateArrowBody != false) {
    (**(code **)(this->_padding_ + 0x8e8))(this);
  }
  if (this->bUpdateArrowHead != false) {
    (**(code **)(this->_padding_ + 0x8f0))(this);
  }
  lVar21 = 2;
  pdVar17 = local_198;
  do {
    pFVar22 = param_2;
    pdVar20 = pdVar17;
    dVar12 = (pFVar22->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
    dVar13 = (pFVar22->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
    dVar14 = (pFVar22->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
    param_2 = (FRenderTraversalState *)
              &(pFVar22->MeshRenderState).HoverMaterial.bOverridesChildState;
    *pdVar20 = (pFVar22->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
    pdVar20[1] = dVar12;
    dVar12 = (pFVar22->LocalToWorldTransform).Translation.XY.m128d_f64[0];
    dVar15 = (pFVar22->LocalToWorldTransform).Translation.XY.m128d_f64[1];
    pdVar20[2] = dVar13;
    pdVar20[3] = dVar14;
    dVar13 = (pFVar22->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
    dVar14 = (pFVar22->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
    pdVar20[4] = dVar12;
    pdVar20[5] = dVar15;
    dVar12 = (pFVar22->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
    dVar15 = (pFVar22->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
    pdVar20[6] = dVar13;
    pdVar20[7] = dVar14;
    dVar13 = (pFVar22->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
    dVar14 = (pFVar22->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
    pdVar20[8] = dVar12;
    pdVar20[9] = dVar15;
    dVar12 = pFVar22->PixelToWorldScale;
    dVar15 = *(double *)&pFVar22->InteractionState;
    pdVar20[10] = dVar13;
    pdVar20[0xb] = dVar14;
    dVar13 = *(double *)&(pFVar22->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber;
    FVar16 = (pFVar22->MeshRenderState).HoverMaterial.Value.WeakPtr;
    pdVar20[0xc] = dVar12;
    pdVar20[0xd] = dVar15;
    pdVar20[0xe] = dVar13;
    *(FWeakObjectPtr *)(pdVar20 + 0xf) = FVar16;
    lVar21 = lVar21 + -1;
    pdVar17 = pdVar20 + 0x10;
  } while (lVar21 != 0);
  dVar12 = *(double *)&(pFVar22->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber;
  FVar16 = (pFVar22->MeshRenderState).SelectMaterial.Value.WeakPtr;
  dVar13 = *(double *)&(pFVar22->MeshRenderState).SelectMaterial.bOverridesChildState;
  pdVar20[0x10] = *(double *)param_2;
  pdVar20[0x11] = dVar12;
  dVar12 = *(double *)&(pFVar22->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber;
  dVar14 = *(double *)&(pFVar22->MeshRenderState).VertexColor.Value.field0_0x0;
  *(FWeakObjectPtr *)(pdVar20 + 0x12) = FVar16;
  pdVar20[0x13] = dVar13;
  dVar13 = *(double *)((longlong)&(pFVar22->MeshRenderState).VertexColor.Value.field0_0x0 + 8);
  dVar15 = *(double *)&(pFVar22->MeshRenderState).VertexColor.bHasValue;
  pdVar20[0x14] = dVar12;
  pdVar20[0x15] = dVar14;
  dVar12 = *(double *)((longlong)&(pFVar22->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4);
  dVar14 = *(double *)
            ((longlong)&(pFVar22->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc);
  pdVar20[0x16] = dVar13;
  pdVar20[0x17] = dVar15;
  fVar4 = (pFVar22->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.R;
  fVar5 = (pFVar22->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.G;
  fVar6 = (pFVar22->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.B;
  fVar7 = (pFVar22->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.A;
  pdVar20[0x18] = dVar12;
  pdVar20[0x19] = dVar14;
  uVar8 = *(undefined4 *)&(pFVar22->MeshRenderState).InteractVertexColor.bHasValue;
  fVar9 = (pFVar22->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.R;
  fVar10 = (pFVar22->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.G;
  fVar11 = (pFVar22->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.B;
  *(float *)(pdVar20 + 0x1a) = fVar4;
  *(float *)((longlong)pdVar20 + 0xd4) = fVar5;
  *(float *)(pdVar20 + 0x1b) = fVar6;
  *(float *)((longlong)pdVar20 + 0xdc) = fVar7;
  *(undefined4 *)(pdVar20 + 0x1c) = uVar8;
  *(float *)((longlong)pdVar20 + 0xe4) = fVar9;
  *(float *)(pdVar20 + 0x1d) = fVar10;
  *(float *)((longlong)pdVar20 + 0xec) = fVar11;
  cVar19 = (**(code **)(this->_padding_ + 0x698))(this,param_1,&this->Base,local_198);
  if (cVar19 != '\0') {
    if ((this->CylinderElement).field0_0x0.DebugPtr == (UGizmoElementCylinder *)0x0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("CylinderElement",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrow.cpp"
                          ,0x48,L"");
      if (bVar18) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar1 = (this->CylinderElement).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,param_1,local_198);
    if ((this->HeadElement).field0_0x0.DebugPtr == (UGizmoElementArrowHead *)0x0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("HeadElement",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrow.cpp"
                          ,0x4b,L"");
      if (bVar18) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar2 = (this->HeadElement).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,param_1,local_198);
  }
  return;
}

// SetBase @ 149661330

void __thiscall UGizmoElementArrow::SetBase(UGizmoElementArrow *this,TVector<double> *param_1)

{
  double dVar1;
  
  if ((((param_1->field0_0x0)._s_0.X != (this->Base).field0_0x0._s_0.X) ||
      ((param_1->field0_0x0)._s_0.Y != (this->Base).field0_0x0._s_0.Y)) ||
     ((param_1->field0_0x0)._s_0.Z != (this->Base).field0_0x0._s_0.Z)) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    (this->Base).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->Base).field0_0x0._s_0.Y = dVar1;
    (this->Base).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    this->bUpdateArrowBody = true;
    this->bUpdateArrowHead = true;
  }
  return;
}

// SetBodyLength @ 149661390

void __thiscall UGizmoElementArrow::SetBodyLength(UGizmoElementArrow *this,float param_1)

{
  if (param_1 != this->BodyLength) {
    this->BodyLength = param_1;
    this->bUpdateArrowBody = true;
    this->bUpdateArrowHead = true;
  }
  return;
}

// SetBodyRadius @ 1496613c0

void __thiscall UGizmoElementArrow::SetBodyRadius(UGizmoElementArrow *this,float param_1)

{
  if (param_1 != this->BodyRadius) {
    this->BodyRadius = param_1;
    this->bUpdateArrowBody = true;
    this->bUpdateArrowHead = true;
  }
  return;
}

// SetDashParameters @ 149661660

void __thiscall
UGizmoElementArrow::SetDashParameters
          (UGizmoElementArrow *this,float param_1,TOptional<float> *param_2)

{
  UGizmoElementCylinder *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  pUVar1 = (this->CylinderElement).field0_0x0.DebugPtr;
  if (pUVar1 != (UGizmoElementCylinder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496616a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x718))();
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5038325473789083331>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrow.cpp"
                     ,0x13d,"CylinderElement");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// SetDirection @ 1496616c0

void __thiscall UGizmoElementArrow::SetDirection(UGizmoElementArrow *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Direction).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Direction).field0_0x0._s_0.Y = dVar1;
  (this->Direction).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  UE::Math::TVector<double>::Normalize(&this->Direction,__real_3e45798ee0000000);
  this->bUpdateArrowBody = true;
  this->bUpdateArrowHead = true;
  return;
}

// SetEndCaps @ 149661ce0

void __thiscall UGizmoElementArrow::SetEndCaps(UGizmoElementArrow *this,bool param_1)

{
  if (this->bEndCaps != param_1) {
    this->bEndCaps = param_1;
    this->bUpdateArrowHead = true;
  }
  return;
}

// SetHeadLength @ 149661d60

void __thiscall UGizmoElementArrow::SetHeadLength(UGizmoElementArrow *this,float param_1)

{
  if (param_1 != this->HeadLength) {
    this->HeadLength = param_1;
    this->bUpdateArrowHead = true;
  }
  return;
}

// SetHeadRadius @ 149661d80

void __thiscall UGizmoElementArrow::SetHeadRadius(UGizmoElementArrow *this,float param_1)

{
  if (param_1 != this->HeadRadius) {
    this->HeadRadius = param_1;
    this->bUpdateArrowHead = true;
  }
  return;
}

// SetHeadType @ 149661da0

void __thiscall
UGizmoElementArrow::SetHeadType(UGizmoElementArrow *this,EGizmoElementArrowHeadType param_1)

{
  if (param_1 != this->HeadType) {
    this->HeadType = param_1;
                    /* WARNING: Could not recover jumptable at 0x000149661db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x8f0))();
    return;
  }
  return;
}

// SetHitMask @ 149661dc0

void __thiscall
UGizmoElementArrow::SetHitMask
          (UGizmoElementArrow *this,TWeakObjectPtr<UGizmoElementBase,FWeakObjectPtr> *param_1)

{
  (this->HitMask).WeakPtr = param_1->WeakPtr;
  return;
}

// SetIsDashed @ 149661e10

void __thiscall UGizmoElementArrow::SetIsDashed(UGizmoElementArrow *this,bool param_1)

{
  UGizmoElementCylinder *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  pUVar1 = (this->CylinderElement).field0_0x0.DebugPtr;
  if (pUVar1 != (UGizmoElementCylinder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149661e59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x708))();
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5038325473789083349>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrow.cpp"
                     ,299,"CylinderElement");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// SetMinimumPixelHitDistanceThreshold @ 149661ee0

void __thiscall
UGizmoElementArrow::SetMinimumPixelHitDistanceThreshold(UGizmoElementArrow *this,float param_1)

{
  if (param_1 != *(float *)((longlong)&this->_padding_ + 4)) {
    *(float *)((longlong)&this->_padding_ + 4) = param_1;
    this->bUpdateArrowBody = true;
    this->bUpdateArrowHead = true;
  }
  return;
}

// SetNumSides @ 1496622a0

void __thiscall UGizmoElementArrow::SetNumSides(UGizmoElementArrow *this,int param_1)

{
  if (this->NumSides != param_1) {
    this->NumSides = param_1;
    this->bUpdateArrowBody = true;
    this->bUpdateArrowHead = true;
  }
  return;
}

// SetPixelHitDistanceThreshold @ 1496624c0

void __thiscall
UGizmoElementArrow::SetPixelHitDistanceThreshold(UGizmoElementArrow *this,float param_1)

{
  if (param_1 != *(float *)&this->_padding_) {
    *(float *)&this->_padding_ = param_1;
    this->bUpdateArrowBody = true;
    this->bUpdateArrowHead = true;
  }
  return;
}

// SetSideDirection @ 149662530

void __thiscall
UGizmoElementArrow::SetSideDirection(UGizmoElementArrow *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->SideDirection).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->SideDirection).field0_0x0._s_0.Y = dVar1;
  (this->SideDirection).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  UE::Math::TVector<double>::Normalize(&this->SideDirection,__real_3e45798ee0000000);
  this->bUpdateArrowHead = true;
  return;
}

// StaticRegisterNativesUGizmoElementArrow @ 149664b40

void __cdecl UGizmoElementArrow::StaticRegisterNativesUGizmoElementArrow(void)

{
  return;
}

// UpdateArrowBody @ 149665d70

void __thiscall UGizmoElementArrow::UpdateArrowBody(UGizmoElementArrow *this)

{
  UGizmoElementCylinder *pUVar1;
  
  pUVar1 = (this->CylinderElement).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x6b8))(pUVar1,&UE::Math::TVector<double>::ZeroVector);
  pUVar1 = (this->CylinderElement).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x6c8))(pUVar1,&this->Direction);
  pUVar1 = (this->CylinderElement).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x6d8))(pUVar1,this->BodyLength);
  pUVar1 = (this->CylinderElement).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x6f8))(pUVar1,this->NumSides);
  pUVar1 = (this->CylinderElement).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x6e8))(pUVar1,this->BodyRadius);
  pUVar1 = (this->CylinderElement).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x4a0))(pUVar1,(int)this->_padding_);
  this->bUpdateArrowBody = false;
  return;
}

// UpdateArrowHead @ 149665e20

void __thiscall UGizmoElementArrow::UpdateArrowHead(UGizmoElementArrow *this)

{
  UGizmoElementArrowHead *pUVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  undefined1 local_28 [16];
  double local_18;
  
  if ((this->HeadElement).field0_0x0.DebugPtr == (UGizmoElementArrowHead *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HeadElement",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrow.cpp"
                       ,0x159,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->HeadElement).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x888))(pUVar1,this->HeadType);
  pUVar1 = (this->HeadElement).field0_0x0.DebugPtr;
  dVar5 = (double)this->BodyLength;
  dVar3 = (this->Direction).field0_0x0._s_0.Y * dVar5;
  local_18 = dVar5 * (this->Direction).field0_0x0._s_0.Z;
  local_28._8_4_ = SUB84(dVar3,0);
  local_28._0_8_ = (this->Direction).field0_0x0._s_0.X * dVar5;
  local_28._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  (**(code **)(pUVar1->_padding_ + 0x828))(pUVar1,local_28);
  pUVar1 = (this->HeadElement).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x838))(pUVar1,&this->Direction);
  pUVar1 = (this->HeadElement).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x848))(pUVar1,&this->SideDirection);
  pUVar1 = (this->HeadElement).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x858))(pUVar1,this->HeadLength);
  pUVar1 = (this->HeadElement).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x868))(pUVar1,this->HeadRadius);
  pUVar1 = (this->HeadElement).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x878))(pUVar1,this->NumSides);
  pUVar1 = (this->HeadElement).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x3c8))(pUVar1,(int)this->_padding_);
  pUVar1 = (this->HeadElement).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x4a0))(pUVar1,(int)this->_padding_);
  this->bUpdateArrowHead = false;
  return;
}

