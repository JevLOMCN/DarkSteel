// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 27

// StaticClass @ 14962b9e0

UClass * __cdecl UGizmoElementArrowHead::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementArrowHead.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementArrowHead",
               &Z_Registration_Info_UClass_UGizmoElementArrowHead.InnerSingleton,
               StaticRegisterNativesUGizmoElementArrowHead,0x268,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementArrowHead>,
               InternalVTableHelperCtorCaller<UGizmoElementArrowHead>,local_res8,
               UGizmoElementGroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementArrowHead.InnerSingleton;
}

// UGizmoElementArrowHead @ 14963b160

UGizmoElementArrowHead * __thiscall
UGizmoElementArrowHead::UGizmoElementArrowHead(UGizmoElementArrowHead *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  UGizmoElementGroupBase::UGizmoElementGroupBase((UGizmoElementGroupBase *)this,param_1);
  this->bUpdate = true;
  local_res8[0] = 0;
  this->_padding_ = (longlong)&___7UGizmoElementArrowHead__6B_;
  (this->ConeElement).field0_0x0.DebugPtr = (UGizmoElementCone *)0x0;
  (this->BoxElement).field0_0x0.DebugPtr = (UGizmoElementBox *)0x0;
  (this->SphereElement).field0_0x0.DebugPtr = (UGizmoElementSphere *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->SideDirection).field0_0x0._s_0.X = 0.0;
  (this->SideDirection).field0_0x0._s_0.Z = 0.0;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  (this->SideDirection).field0_0x0._s_0.Y = 1.0;
  this->Length = 0.5;
  this->Radius = 0.75;
  this->NumSides = 0x20;
  this->Type = Cone;
  (this->HitMask).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->HitMask).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UGizmoElementArrowHead @ 14963b240

UGizmoElementArrowHead * __thiscall
UGizmoElementArrowHead::UGizmoElementArrowHead(UGizmoElementArrowHead *this)

{
  undefined8 uVar1;
  FObjectInitializer *pFVar2;
  UObject *pUVar3;
  UGizmoElementCone *pUVar4;
  undefined8 local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  UGizmoElementGroupBase::UGizmoElementGroupBase((UGizmoElementGroupBase *)this,pFVar2);
  this->bUpdate = true;
  this->_padding_ = (longlong)&___7UGizmoElementArrowHead__6B_;
  (this->ConeElement).field0_0x0.DebugPtr = (UGizmoElementCone *)0x0;
  (this->BoxElement).field0_0x0.DebugPtr = (UGizmoElementBox *)0x0;
  (this->SphereElement).field0_0x0.DebugPtr = (UGizmoElementSphere *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8 = 0;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  (this->SideDirection).field0_0x0._s_0.X = 0.0;
  (this->SideDirection).field0_0x0._s_0.Y = 1.0;
  (this->SideDirection).field0_0x0._s_0.Z = 0.0;
  this->Type = Cone;
  this->Length = 0.5;
  this->Radius = 0.75;
  this->NumSides = 0x20;
  (this->HitMask).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->HitMask).WeakPtr,(FObjectPtr)&local_res8);
  this->Type = Cone;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UGizmoElementCone>(pUVar3);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UGizmoElementCone *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ConeElement).field0_0x0.DebugPtr = pUVar4;
  (this->BoxElement).field0_0x0.DebugPtr = (UGizmoElementBox *)0x0;
  (this->SphereElement).field0_0x0.DebugPtr = (UGizmoElementSphere *)0x0;
  UGizmoElementGroupBase::Add((UGizmoElementGroupBase *)this,(UGizmoElementBase *)pUVar4);
  return this;
}

// ~UGizmoElementArrowHead @ 14963ea30

void __thiscall UGizmoElementArrowHead::~UGizmoElementArrowHead(UGizmoElementArrowHead *this)

{
  this->_padding_ = (longlong)&___7UGizmoElementArrowHead__6B_;
  UGizmoElementGroupBase::~UGizmoElementGroupBase((UGizmoElementGroupBase *)this);
  return;
}

// operator() @ 149640050

void __thiscall `UGizmoElementArrowHead::LineTrace'::__l2::<lambda_1>::operator()(void *this)

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
  plVar1 = *(longlong **)(*(longlong *)this + 0x200);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496400b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x4a0))(plVar1,*(undefined4 *)(*(longlong *)this + 0x140));
    return;
  }
  return;
}

// operator() @ 1496401a0

void __thiscall
`UGizmoElementArrowHead::Update'::__l2::<lambda_1>::operator()
          (void *this,UGizmoElementBase *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x560);
  puVar2 = (undefined4 *)(**(code **)(**(longlong **)this + 0x568))(*(longlong **)this,local_18);
  local_28 = *puVar2;
  uStack_24 = puVar2[1];
  uStack_20 = puVar2[2];
  uStack_1c = puVar2[3];
  (*pcVar1)(param_1,&local_28,0);
  pcVar1 = *(code **)(param_1->_padding_ + 0x588);
  puVar2 = (undefined4 *)(**(code **)(**(longlong **)this + 0x590))(*(longlong **)this,local_18);
  local_28 = *puVar2;
  uStack_24 = puVar2[1];
  uStack_20 = puVar2[2];
  uStack_1c = puVar2[3];
  (*pcVar1)(param_1,&local_28,0);
  pcVar1 = *(code **)(param_1->_padding_ + 0x5b0);
  puVar2 = (undefined4 *)(**(code **)(**(longlong **)this + 0x5b8))(*(longlong **)this,local_18);
  local_28 = *puVar2;
  uStack_24 = puVar2[1];
  uStack_20 = puVar2[2];
  uStack_1c = puVar2[3];
  (*pcVar1)(param_1,&local_28,0);
  pcVar1 = *(code **)(param_1->_padding_ + 0x5d8);
  puVar2 = (undefined4 *)(**(code **)(**(longlong **)this + 0x5e0))(*(longlong **)this,local_18);
  local_28 = *puVar2;
  uStack_24 = puVar2[1];
  uStack_20 = puVar2[2];
  uStack_1c = puVar2[3];
  (*pcVar1)(param_1,&local_28,0);
  pcVar1 = *(code **)(param_1->_padding_ + 0x600);
  puVar2 = (undefined4 *)(**(code **)(**(longlong **)this + 0x608))(*(longlong **)this,local_18);
  local_28 = *puVar2;
  uStack_24 = puVar2[1];
  uStack_20 = puVar2[2];
  uStack_1c = puVar2[3];
  (*pcVar1)(param_1,&local_28,0);
  (**(code **)(param_1->_padding_ + 0x4c0))(param_1,*(undefined8 *)(*(longlong *)this + 0x34),0);
  (**(code **)(param_1->_padding_ + 0x4e0))(param_1,*(undefined8 *)(*(longlong *)this + 0x40),0);
  (**(code **)(param_1->_padding_ + 0x500))(param_1,*(undefined8 *)(*(longlong *)this + 0x4c),0);
  (**(code **)(param_1->_padding_ + 0x520))(param_1,*(undefined8 *)(*(longlong *)this + 0x58),0);
                    /* WARNING: Could not recover jumptable at 0x00014964031c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x540))(param_1,*(undefined8 *)(*(longlong *)this + 100),0);
  return;
}

// GetCenter @ 149652970

TVector<double> * __thiscall
UGizmoElementArrowHead::GetCenter
          (UGizmoElementArrowHead *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Center).field0_0x0._s_0.Y;
  dVar1 = (this->Center).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Center).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetDirection @ 149652cb0

TVector<double> * __thiscall
UGizmoElementArrowHead::GetDirection
          (UGizmoElementArrowHead *this,TVector<double> *__return_storage_ptr__)

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

// GetLength @ 1496550b0

float __thiscall UGizmoElementArrowHead::GetLength(UGizmoElementArrowHead *this)

{
  return this->Length;
}

// GetNumSides @ 149655240

int __thiscall UGizmoElementArrowHead::GetNumSides(UGizmoElementArrowHead *this)

{
  return this->NumSides;
}

// GetPrivateStaticClass @ 1496568d0

UClass * __cdecl UGizmoElementArrowHead::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementArrowHead.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementArrowHead",
               &Z_Registration_Info_UClass_UGizmoElementArrowHead.InnerSingleton,
               StaticRegisterNativesUGizmoElementArrowHead,0x268,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoElementArrowHead>,
               InternalVTableHelperCtorCaller<UGizmoElementArrowHead>,local_res8,
               UGizmoElementGroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementArrowHead.InnerSingleton;
}

// GetRadius @ 149658680

float __thiscall UGizmoElementArrowHead::GetRadius(UGizmoElementArrowHead *this)

{
  return this->Radius;
}

// GetSideDirection @ 1496586c0

TVector<double> * __thiscall
UGizmoElementArrowHead::GetSideDirection
          (UGizmoElementArrowHead *this,TVector<double> *__return_storage_ptr__)

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

// GetType @ 149658b20

EGizmoElementArrowHeadType __thiscall UGizmoElementArrowHead::GetType(UGizmoElementArrowHead *this)

{
  return this->Type;
}

// LineTrace @ 14965b1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputRayHit * __thiscall
UGizmoElementArrowHead::LineTrace
          (UGizmoElementArrowHead *this,FInputRayHit *__return_storage_ptr__,
          UGizmoViewContext *param_1,FLineTraceTraversalState *param_2,TVector<double> *param_3,
          TVector<double> *param_4,FLineTraceOutput *param_5)

{
  EGizmoElementArrowHeadType EVar1;
  UGizmoElementCone *pUVar2;
  UGizmoElementBox *pUVar3;
  UGizmoElementSphere *pUVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  UObject *pUVar8;
  FInputRayHit *pFVar9;
  void *this_00;
  undefined ***pppuVar10;
  undefined1 auStack_2c8 [32];
  TVector<double> *local_2a8;
  TVector<double> *local_2a0;
  FLineTraceOutput *local_298;
  FWeakObjectPtr local_288 [2];
  uint local_278;
  undefined4 uStack_274;
  undefined8 uStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  UGizmoElementArrowHead *local_248;
  FWeakObjectPtr FStack_240;
  undefined8 local_238;
  UGizmoElementArrowHead *local_230;
  uint local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  double local_218;
  double dStack_210;
  double local_208;
  longlong lStack_200;
  UGizmoElementArrowHead *local_1f8;
  FWeakObjectPtr FStack_1f0;
  uint local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  longlong lStack_1c0;
  UGizmoElementArrowHead *local_1b8;
  FWeakObjectPtr FStack_1b0;
  uint local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  double dStack_190;
  double local_188;
  longlong lStack_180;
  UGizmoElementArrowHead *local_178;
  FWeakObjectPtr FStack_170;
  char local_168 [64];
  code *local_128;
  undefined **local_118;
  UGizmoElementArrowHead *pUStack_110;
  undefined8 local_108;
  undefined ***local_100;
  undefined8 local_f8;
  undefined **local_e8;
  UGizmoElementArrowHead *pUStack_e0;
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
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2c8;
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
  cVar6 = (**(code **)(this->_padding_ + 0x6a8))(this,param_1,&this->Center,&local_c8);
  if (cVar6 == '\0') {
    FInputRayHit::FInputRayHit(__return_storage_ptr__);
  }
  else {
    local_e8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UGizmoElementArrowHead::LineTrace'::`2'::<lambda_1>,0,0>::
                _vftable_;
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGizmoElementArrowHead::LineTrace'::__l2::<lambda_1>,void>::Call
    ;
    local_100 = (undefined ***)0x0;
    local_d0 = 0;
    local_f8 = 0;
    local_118 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UGizmoElementArrowHead::LineTrace'::`2'::<lambda_1>,0,0>::
                 _vftable_;
    local_108 = local_d8;
    pUStack_110 = this;
    pUStack_e0 = this;
    pUVar8 = FWeakObjectPtr::Get(&(this->HitMask).WeakPtr);
    if (pUVar8 != (UObject *)0x0) {
      local_298 = param_5;
      local_2a0 = param_4;
      local_2a8 = param_3;
      (**(code **)(*(longlong *)pUVar8 + 0x2c8))(pUVar8,local_168,param_1,param_2);
      if (local_168[0] != '\0') {
        pUVar2 = (this->ConeElement).field0_0x0.DebugPtr;
        if (pUVar2 != (UGizmoElementCone *)0x0) {
          (**(code **)(pUVar2->_padding_ + 0x4a0))();
        }
        pUVar3 = (this->BoxElement).field0_0x0.DebugPtr;
        if (pUVar3 != (UGizmoElementBox *)0x0) {
          (**(code **)(pUVar3->_padding_ + 0x4a0))();
        }
        pUVar4 = (this->SphereElement).field0_0x0.DebugPtr;
        if (pUVar4 != (UGizmoElementSphere *)0x0) {
          (**(code **)(pUVar4->_padding_ + 0x4a0))();
        }
      }
    }
    uStack_270 = __real_47efffffe0000000;
    local_258 = __real_3ff0000000000000;
    local_278 = local_278 & 0xffffff00;
    local_268 = 0.0;
    dStack_260 = 0.0;
    uStack_250 = (uStack_250 >> 8 & 0xffffff) << 8;
    local_248 = (UGizmoElementArrowHead *)0x0;
    local_288[0].ObjectIndex = 0;
    local_288[0].ObjectSerialNumber = 0;
    local_238 = 0;
    FWeakObjectPtr::operator=(local_288,(FObjectPtr)&local_238);
    FStack_240 = local_288[0];
    EVar1 = this->Type;
    if (EVar1 == Cone) {
      pUVar2 = (this->ConeElement).field0_0x0.DebugPtr;
      if (pUVar2 == (UGizmoElementCone *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InElement",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrowHead.cpp"
                           ,0x6c,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FInputRayHit *)(*pcVar5)();
          return pFVar9;
        }
      }
      local_298 = param_5;
      local_2a0 = param_4;
      local_2a8 = param_3;
      (**(code **)(pUVar2->_padding_ + 0x2c8))(pUVar2,&local_228,param_1,&local_c8);
      local_268 = local_218;
      dStack_260 = dStack_210;
      local_278 = local_228;
      uStack_274 = uStack_224;
      uStack_270 = CONCAT44(uStack_21c,uStack_220);
      local_248 = local_1f8;
      FStack_240 = FStack_1f0;
      local_258 = local_208;
      uStack_250 = lStack_200;
    }
    else if (EVar1 == Cube) {
      pUVar3 = (this->BoxElement).field0_0x0.DebugPtr;
      if (pUVar3 == (UGizmoElementBox *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InElement",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrowHead.cpp"
                           ,0x6c,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FInputRayHit *)(*pcVar5)();
          return pFVar9;
        }
      }
      local_298 = param_5;
      local_2a0 = param_4;
      local_2a8 = param_3;
      (**(code **)(pUVar3->_padding_ + 0x2c8))(pUVar3,&local_1e8,param_1,&local_c8);
      local_268 = local_1d8;
      dStack_260 = dStack_1d0;
      local_278 = local_1e8;
      uStack_274 = uStack_1e4;
      uStack_270 = CONCAT44(uStack_1dc,uStack_1e0);
      local_248 = local_1b8;
      FStack_240 = FStack_1b0;
      local_258 = local_1c8;
      uStack_250 = lStack_1c0;
      uStack_220 = uStack_1e0;
      uStack_21c = uStack_1dc;
    }
    else if (EVar1 == Sphere) {
      pUVar4 = (this->SphereElement).field0_0x0.DebugPtr;
      if (pUVar4 == (UGizmoElementSphere *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InElement",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrowHead.cpp"
                           ,0x6c,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FInputRayHit *)(*pcVar5)();
          return pFVar9;
        }
      }
      local_298 = param_5;
      local_2a0 = param_4;
      local_2a8 = param_3;
      (**(code **)(pUVar4->_padding_ + 0x2c8))(pUVar4,&local_1a8,param_1,&local_c8);
      local_268 = local_198;
      dStack_260 = dStack_190;
      local_278 = local_1a8;
      uStack_274 = uStack_1a4;
      uStack_270 = CONCAT44(uStack_19c,uStack_1a0);
      local_248 = local_178;
      FStack_240 = FStack_170;
      local_258 = local_188;
      uStack_250 = lStack_180;
      uStack_220 = uStack_1a0;
      uStack_21c = uStack_19c;
    }
    else {
      uStack_220 = (undefined4)uStack_270;
      uStack_21c = uStack_270._4_4_;
    }
    if ((char)local_278 != '\0') {
      local_230 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&FStack_240,(FObjectPtr)&local_230);
      uStack_250 = CONCAT44((int)this->_padding_,(undefined4)uStack_250);
      uStack_220 = (undefined4)uStack_270;
      uStack_21c = uStack_270._4_4_;
      local_248 = this;
    }
    *(uint *)__return_storage_ptr__ = local_278;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = uStack_274;
    *(undefined4 *)&__return_storage_ptr__->HitDepth = uStack_220;
    *(undefined4 *)((longlong)&__return_storage_ptr__->HitDepth + 4) = uStack_21c;
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = local_268;
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = dStack_260;
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = local_258;
    __return_storage_ptr__->bHasHitNormal = (bool)(undefined1)uStack_250;
    *(undefined3 *)&__return_storage_ptr__->field_0x29 = uStack_250._1_3_;
    __return_storage_ptr__->HitIdentifier = uStack_250._4_4_;
    __return_storage_ptr__->HitOwner = local_248;
    (__return_storage_ptr__->HitObject).WeakPtr = FStack_240;
    UE::Core::Private::Function::CheckCallable(local_128);
    pcVar5 = local_128;
    pppuVar10 = &local_118;
    if (local_100 != (undefined ***)0x0) {
      pppuVar10 = local_100;
    }
    this_00 = (void *)(*(code *)(*pppuVar10)[1])();
    if (pcVar5 == UE::Core::Private::Function::
                  TFunctionRefCaller<`UGizmoElementArrowHead::LineTrace'::__l2::<lambda_1>,void>::
                  Call) {
      `UGizmoElementArrowHead::LineTrace'::__l2::<lambda_1>::operator()(this_00);
    }
    else {
      (*pcVar5)();
    }
    if (local_128 != (code *)0x0) {
      pppuVar10 = &local_118;
      if (local_100 != (undefined ***)0x0) {
        pppuVar10 = local_100;
      }
      (*(code *)(*pppuVar10)[2])();
    }
  }
  return __return_storage_ptr__;
}

// Render @ 149660070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGizmoElementArrowHead::Render
          (UGizmoElementArrowHead *this,IToolsContextRenderAPI *param_1,
          FRenderTraversalState *param_2)

{
  EGizmoElementArrowHeadType EVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  FWeakObjectPtr FVar15;
  double *pdVar16;
  bool bVar17;
  char cVar18;
  double *pdVar19;
  longlong lVar20;
  FRenderTraversalState *pFVar21;
  UGizmoElementBox *pUVar22;
  undefined1 auStack_1b8 [32];
  double local_198 [46];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if ((param_1 == (IToolsContextRenderAPI *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("RenderAPI",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrowHead.cpp"
                          ,0x29,L""), bVar17)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->bUpdate != false) {
    (**(code **)(this->_padding_ + 0x898))(this);
  }
  lVar20 = 2;
  pdVar16 = local_198;
  do {
    pFVar21 = param_2;
    pdVar19 = pdVar16;
    dVar11 = (pFVar21->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
    dVar12 = (pFVar21->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
    dVar13 = (pFVar21->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
    param_2 = (FRenderTraversalState *)
              &(pFVar21->MeshRenderState).HoverMaterial.bOverridesChildState;
    *pdVar19 = (pFVar21->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
    pdVar19[1] = dVar11;
    dVar11 = (pFVar21->LocalToWorldTransform).Translation.XY.m128d_f64[0];
    dVar14 = (pFVar21->LocalToWorldTransform).Translation.XY.m128d_f64[1];
    pdVar19[2] = dVar12;
    pdVar19[3] = dVar13;
    dVar12 = (pFVar21->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
    dVar13 = (pFVar21->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
    pdVar19[4] = dVar11;
    pdVar19[5] = dVar14;
    dVar11 = (pFVar21->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
    dVar14 = (pFVar21->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
    pdVar19[6] = dVar12;
    pdVar19[7] = dVar13;
    dVar12 = (pFVar21->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
    dVar13 = (pFVar21->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
    pdVar19[8] = dVar11;
    pdVar19[9] = dVar14;
    dVar11 = pFVar21->PixelToWorldScale;
    dVar14 = *(double *)&pFVar21->InteractionState;
    pdVar19[10] = dVar12;
    pdVar19[0xb] = dVar13;
    dVar12 = *(double *)&(pFVar21->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber;
    FVar15 = (pFVar21->MeshRenderState).HoverMaterial.Value.WeakPtr;
    pdVar19[0xc] = dVar11;
    pdVar19[0xd] = dVar14;
    pdVar19[0xe] = dVar12;
    *(FWeakObjectPtr *)(pdVar19 + 0xf) = FVar15;
    lVar20 = lVar20 + -1;
    pdVar16 = pdVar19 + 0x10;
  } while (lVar20 != 0);
  dVar11 = *(double *)&(pFVar21->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber;
  FVar15 = (pFVar21->MeshRenderState).SelectMaterial.Value.WeakPtr;
  dVar12 = *(double *)&(pFVar21->MeshRenderState).SelectMaterial.bOverridesChildState;
  pdVar19[0x10] = *(double *)param_2;
  pdVar19[0x11] = dVar11;
  dVar11 = *(double *)&(pFVar21->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber;
  dVar13 = *(double *)&(pFVar21->MeshRenderState).VertexColor.Value.field0_0x0;
  *(FWeakObjectPtr *)(pdVar19 + 0x12) = FVar15;
  pdVar19[0x13] = dVar12;
  dVar12 = *(double *)((longlong)&(pFVar21->MeshRenderState).VertexColor.Value.field0_0x0 + 8);
  dVar14 = *(double *)&(pFVar21->MeshRenderState).VertexColor.bHasValue;
  pdVar19[0x14] = dVar11;
  pdVar19[0x15] = dVar13;
  dVar11 = *(double *)((longlong)&(pFVar21->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4);
  dVar13 = *(double *)
            ((longlong)&(pFVar21->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc);
  pdVar19[0x16] = dVar12;
  pdVar19[0x17] = dVar14;
  fVar3 = (pFVar21->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.R;
  fVar4 = (pFVar21->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.G;
  fVar5 = (pFVar21->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.B;
  fVar6 = (pFVar21->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.A;
  pdVar19[0x18] = dVar11;
  pdVar19[0x19] = dVar13;
  uVar7 = *(undefined4 *)&(pFVar21->MeshRenderState).InteractVertexColor.bHasValue;
  fVar8 = (pFVar21->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.R;
  fVar9 = (pFVar21->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.G;
  fVar10 = (pFVar21->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.B;
  *(float *)(pdVar19 + 0x1a) = fVar3;
  *(float *)((longlong)pdVar19 + 0xd4) = fVar4;
  *(float *)(pdVar19 + 0x1b) = fVar5;
  *(float *)((longlong)pdVar19 + 0xdc) = fVar6;
  *(undefined4 *)(pdVar19 + 0x1c) = uVar7;
  *(float *)((longlong)pdVar19 + 0xe4) = fVar8;
  *(float *)(pdVar19 + 0x1d) = fVar9;
  *(float *)((longlong)pdVar19 + 0xec) = fVar10;
  cVar18 = (**(code **)(this->_padding_ + 0x698))(this,param_1,&this->Center,local_198);
  if (cVar18 != '\0') {
    EVar1 = this->Type;
    if (EVar1 == Cone) {
      pUVar22 = (UGizmoElementBox *)(this->ConeElement).field0_0x0.DebugPtr;
    }
    else if (EVar1 == Cube) {
      pUVar22 = (this->BoxElement).field0_0x0.DebugPtr;
    }
    else {
      if (EVar1 != Sphere) {
        return;
      }
      pUVar22 = (UGizmoElementBox *)(this->SphereElement).field0_0x0.DebugPtr;
    }
    if ((pUVar22 == (UGizmoElementBox *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InElement",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrowHead.cpp"
                            ,0x37,L""), bVar17)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(pUVar22->_padding_ + 0x2b0))(pUVar22,param_1,local_198);
  }
  return;
}

// SetCenter @ 1496613f0

void __thiscall
UGizmoElementArrowHead::SetCenter(UGizmoElementArrowHead *this,TVector<double> *param_1)

{
  double dVar1;
  
  if ((((param_1->field0_0x0)._s_0.X != (this->Center).field0_0x0._s_0.X) ||
      ((param_1->field0_0x0)._s_0.Y != (this->Center).field0_0x0._s_0.Y)) ||
     ((param_1->field0_0x0)._s_0.Z != (this->Center).field0_0x0._s_0.Z)) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    (this->Center).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->Center).field0_0x0._s_0.Y = dVar1;
    (this->Center).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    this->bUpdate = true;
  }
  return;
}

// SetDirection @ 149661710

void __thiscall
UGizmoElementArrowHead::SetDirection(UGizmoElementArrowHead *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Direction).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Direction).field0_0x0._s_0.Y = dVar1;
  (this->Direction).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  UE::Math::TVector<double>::Normalize(&this->Direction,__real_3e45798ee0000000);
  this->bUpdate = true;
  return;
}

// SetHitMask @ 149661de0

void __thiscall
UGizmoElementArrowHead::SetHitMask
          (UGizmoElementArrowHead *this,TWeakObjectPtr<UGizmoElementBase,FWeakObjectPtr> *param_1)

{
  (this->HitMask).WeakPtr = param_1->WeakPtr;
  return;
}

// SetLength @ 149661ec0

void __thiscall UGizmoElementArrowHead::SetLength(UGizmoElementArrowHead *this,float param_1)

{
  if (param_1 != this->Length) {
    this->Length = param_1;
    this->bUpdate = true;
  }
  return;
}

// SetNumSides @ 1496622c0

void __thiscall UGizmoElementArrowHead::SetNumSides(UGizmoElementArrowHead *this,int param_1)

{
  if (this->NumSides != param_1) {
    this->NumSides = param_1;
    this->bUpdate = true;
  }
  return;
}

// SetPixelHitDistanceThreshold @ 1496624f0

void __thiscall
UGizmoElementArrowHead::SetPixelHitDistanceThreshold(UGizmoElementArrowHead *this,float param_1)

{
  if (param_1 != *(float *)&this->_padding_) {
    *(float *)&this->_padding_ = param_1;
    this->bUpdate = true;
  }
  return;
}

// SetRadius @ 149662510

void __thiscall UGizmoElementArrowHead::SetRadius(UGizmoElementArrowHead *this,float param_1)

{
  if (param_1 != this->Radius) {
    this->Radius = param_1;
    this->bUpdate = true;
  }
  return;
}

// SetSideDirection @ 149662570

void __thiscall
UGizmoElementArrowHead::SetSideDirection(UGizmoElementArrowHead *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->SideDirection).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->SideDirection).field0_0x0._s_0.Y = dVar1;
  (this->SideDirection).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  UE::Math::TVector<double>::Normalize(&this->SideDirection,__real_3e45798ee0000000);
  this->bUpdate = true;
  return;
}

// SetType @ 1496630d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UGizmoElementArrowHead::SetType(UGizmoElementArrowHead *this,EGizmoElementArrowHeadType param_1)

{
  UObject *pUVar1;
  UGizmoElementCone *pUVar2;
  UClass *pUVar3;
  UGizmoElementBox *pUVar4;
  UGizmoElementSphere *pUVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_1 == this->Type) {
    return;
  }
  this->Type = param_1;
  if (param_1 == Cone) {
    pUVar1 = GetTransientPackageAsObject();
    pUVar2 = NewObject<UGizmoElementCone>(pUVar1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UGizmoElementCone *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ConeElement).field0_0x0.DebugPtr = pUVar2;
    UGizmoElementGroupBase::Add((UGizmoElementGroupBase *)this,(UGizmoElementBase *)pUVar2);
    pUVar4 = (this->BoxElement).field0_0x0.DebugPtr;
LAB_14966314c:
    if (pUVar4 != (UGizmoElementBox *)0x0) {
      UGizmoElementGroupBase::Remove((UGizmoElementGroupBase *)this,(UGizmoElementBase *)pUVar4);
    }
    pUVar2 = (UGizmoElementCone *)(this->SphereElement).field0_0x0.DebugPtr;
  }
  else {
    if (param_1 == Cube) {
      pUVar1 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar3 = Z_Construct_UClass_UGizmoElementBox_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar3);
      local_98._8_8_ = pUVar1;
      pUVar4 = (UGizmoElementBox *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar6 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar6 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UGizmoElementBox *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->BoxElement).field0_0x0.DebugPtr = pUVar4;
      UGizmoElementGroupBase::Add((UGizmoElementGroupBase *)this,(UGizmoElementBase *)pUVar4);
      pUVar4 = (UGizmoElementBox *)(this->ConeElement).field0_0x0.DebugPtr;
      goto LAB_14966314c;
    }
    if (param_1 != Sphere) goto LAB_1496632c1;
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UGizmoElementSphere_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._8_8_ = pUVar1;
    pUVar5 = (UGizmoElementSphere *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UGizmoElementSphere *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->SphereElement).field0_0x0.DebugPtr = pUVar5;
    UGizmoElementGroupBase::Add((UGizmoElementGroupBase *)this,(UGizmoElementBase *)pUVar5);
    pUVar4 = (this->BoxElement).field0_0x0.DebugPtr;
    if (pUVar4 != (UGizmoElementBox *)0x0) {
      UGizmoElementGroupBase::Remove((UGizmoElementGroupBase *)this,(UGizmoElementBase *)pUVar4);
    }
    pUVar2 = (this->ConeElement).field0_0x0.DebugPtr;
  }
  if (pUVar2 != (UGizmoElementCone *)0x0) {
    UGizmoElementGroupBase::Remove((UGizmoElementGroupBase *)this,(UGizmoElementBase *)pUVar2);
  }
LAB_1496632c1:
  (**(code **)(this->_padding_ + 0x898))(this);
  return;
}

// StaticRegisterNativesUGizmoElementArrowHead @ 149664b50

void __cdecl UGizmoElementArrowHead::StaticRegisterNativesUGizmoElementArrowHead(void)

{
  return;
}

// Update @ 149665880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UGizmoElementArrowHead::Update(UGizmoElementArrowHead *this)

{
  undefined8 uVar1;
  EGizmoElementArrowHeadType EVar2;
  UGizmoElementCone *pUVar3;
  UGizmoElementSphere *pUVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  UGizmoElementBox *pUVar8;
  double dVar9;
  UGizmoElementArrowHead *local_res8 [4];
  undefined1 local_58 [16];
  double local_48;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined8 local_30;
  undefined1 local_28 [16];
  double local_18;
  
  EVar2 = this->Type;
  local_res8[0] = this;
  if (EVar2 == Cone) {
    pUVar3 = (this->ConeElement).field0_0x0.DebugPtr;
    if (pUVar3 != (UGizmoElementCone *)0x0) {
      dVar9 = (double)(this->Length * __real_3f666666);
      dVar6 = (this->Direction).field0_0x0._s_0.Y * dVar9;
      local_48 = dVar9 * (this->Direction).field0_0x0._s_0.Z;
      local_58._8_4_ = SUB84(dVar6,0);
      local_58._0_8_ = (this->Direction).field0_0x0._s_0.X * dVar9;
      local_58._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      (**(code **)(pUVar3->_padding_ + 0x6b8))(pUVar3,local_58);
      pUVar3 = (this->ConeElement).field0_0x0.DebugPtr;
      uVar1 = *(undefined8 *)((longlong)&(this->Direction).field0_0x0 + 0x10);
      local_40 = *(uint *)&(this->Direction).field0_0x0 ^
                 (uint)__xmm_80000000000000008000000000000000;
      uStack_3c = *(uint *)((longlong)&(this->Direction).field0_0x0 + 4) ^
                  __xmm_80000000000000008000000000000000._4_4_;
      uStack_38 = *(uint *)((longlong)&(this->Direction).field0_0x0 + 8) ^
                  __xmm_80000000000000008000000000000000._8_4_;
      uStack_34 = *(uint *)((longlong)&(this->Direction).field0_0x0 + 0xc) ^
                  __xmm_80000000000000008000000000000000._12_4_;
      local_30 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
      (**(code **)(pUVar3->_padding_ + 0x6c8))(pUVar3,&local_40);
      pUVar3 = (this->ConeElement).field0_0x0.DebugPtr;
      (**(code **)(pUVar3->_padding_ + 0x6d8))(pUVar3,this->Length);
      pUVar3 = (this->ConeElement).field0_0x0.DebugPtr;
      (**(code **)(pUVar3->_padding_ + 0x6e8))(pUVar3,this->Radius);
      pUVar3 = (this->ConeElement).field0_0x0.DebugPtr;
      (**(code **)(pUVar3->_padding_ + 0x6f8))(pUVar3,this->NumSides);
      pUVar3 = (this->ConeElement).field0_0x0.DebugPtr;
      (**(code **)(pUVar3->_padding_ + 0x3c8))(pUVar3,(int)this->_padding_);
      pUVar3 = (this->ConeElement).field0_0x0.DebugPtr;
      (**(code **)(pUVar3->_padding_ + 0x4a0))(pUVar3,(int)this->_padding_);
      pUVar3 = (this->ConeElement).field0_0x0.DebugPtr;
      (**(code **)(pUVar3->_padding_ + 0x708))(pUVar3,1);
      pUVar8 = (UGizmoElementBox *)(this->ConeElement).field0_0x0.DebugPtr;
      goto LAB_149665af3;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<419347683224846638>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrowHead.cpp"
                       ,0x12e,"ConeElement");
    if (!bVar7) {
      this->bUpdate = false;
      return;
    }
  }
  else if (EVar2 == Cube) {
    pUVar8 = (this->BoxElement).field0_0x0.DebugPtr;
    if (pUVar8 != (UGizmoElementBox *)0x0) {
      (**(code **)(pUVar8->_padding_ + 0x6b8))(pUVar8,&UE::Math::TVector<double>::ZeroVector);
      pUVar8 = (this->BoxElement).field0_0x0.DebugPtr;
      (**(code **)(pUVar8->_padding_ + 0x6c8))(pUVar8,&this->Direction);
      pUVar8 = (this->BoxElement).field0_0x0.DebugPtr;
      (**(code **)(pUVar8->_padding_ + 0x6d8))(pUVar8,&this->SideDirection);
      pUVar8 = (this->BoxElement).field0_0x0.DebugPtr;
      local_18 = (double)this->Length;
      local_28._8_4_ = SUB84(local_18,0);
      local_28._0_8_ = local_18;
      local_28._12_4_ = (int)((ulonglong)local_18 >> 0x20);
      (**(code **)(pUVar8->_padding_ + 0x6e8))(pUVar8,local_28);
      pUVar8 = (this->BoxElement).field0_0x0.DebugPtr;
      (**(code **)(pUVar8->_padding_ + 0x3c8))(pUVar8,(int)this->_padding_);
      pUVar8 = (this->BoxElement).field0_0x0.DebugPtr;
      (**(code **)(pUVar8->_padding_ + 0x4a0))(pUVar8,(int)this->_padding_);
      pUVar8 = (this->BoxElement).field0_0x0.DebugPtr;
LAB_149665af3:
      `UGizmoElementArrowHead::Update'::__l2::<lambda_1>::operator()
                (local_res8,(UGizmoElementBase *)pUVar8);
      this->bUpdate = false;
      return;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<419347683224846654>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrowHead.cpp"
                       ,0x13e,"BoxElement");
    if (!bVar7) {
      this->bUpdate = false;
      return;
    }
  }
  else {
    if (EVar2 != Sphere) {
      this->bUpdate = false;
      return;
    }
    pUVar4 = (this->SphereElement).field0_0x0.DebugPtr;
    if (pUVar4 != (UGizmoElementSphere *)0x0) {
      (**(code **)(pUVar4->_padding_ + 0x6b8))(pUVar4,&UE::Math::TVector<double>::ZeroVector);
      pUVar4 = (this->SphereElement).field0_0x0.DebugPtr;
      (**(code **)(pUVar4->_padding_ + 0x6c8))(pUVar4,this->Radius);
      pUVar4 = (this->SphereElement).field0_0x0.DebugPtr;
      (**(code **)(pUVar4->_padding_ + 0x6d8))(pUVar4,this->NumSides);
      pUVar4 = (this->SphereElement).field0_0x0.DebugPtr;
      (**(code **)(pUVar4->_padding_ + 0x3c8))(pUVar4,(int)this->_padding_);
      pUVar4 = (this->SphereElement).field0_0x0.DebugPtr;
      (**(code **)(pUVar4->_padding_ + 0x4a0))(pUVar4,(int)this->_padding_);
      pUVar8 = (UGizmoElementBox *)(this->SphereElement).field0_0x0.DebugPtr;
      goto LAB_149665af3;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<419347683224846668>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\GizmoElementArrowHead.cpp"
                       ,0x14c,"SphereElement");
    if (!bVar7) {
      this->bUpdate = false;
      return;
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

