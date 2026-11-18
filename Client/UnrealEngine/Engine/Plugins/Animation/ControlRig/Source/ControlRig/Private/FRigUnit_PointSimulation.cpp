// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticStruct @ 14a4a32a0

UScriptStruct * __cdecl FRigUnit_PointSimulation::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_PointSimulation.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_PointSimulation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PointSimulation,(UObject *)pUVar1,
                         L"RigUnit_PointSimulation");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_PointSimulation.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_PointSimulation.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4a3320

UScriptStruct * __thiscall
FRigUnit_PointSimulation::GetExecuteContextStruct(FRigUnit_PointSimulation *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// Execute @ 14a4a3640

/* WARNING: Removing unreachable block (ram,0x00014a4a381e) */
/* WARNING: Removing unreachable block (ram,0x00014a4a382c) */

void __thiscall FRigUnit_PointSimulation::Execute(FRigUnit_PointSimulation *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
     _thread_safe_static_guard_0__ == -1)) {
    atexit(`FRigVMExecuteContext::Initialize'::__l5::
           _dynamic_atexit_destructor_for__StaticNameCache__);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  if (((this->Points).ArrayNum < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->Links).ArrayNum < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->Forces).ArrayNum < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->CollisionVolumes).ArrayNum < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->BoneTargets).ArrayNum < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetUpgradeInfo @ 14a4adfa0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_PointSimulation::GetUpgradeInfo
          (FRigUnit_PointSimulation *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FRigUnit_PointSimulation @ 14a513250

FRigUnit_PointSimulation * __thiscall
FRigUnit_PointSimulation::FRigUnit_PointSimulation(FRigUnit_PointSimulation *this)

{
  double dVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  FLinearColor FVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  __m128d _Var17;
  __m128d _Var18;
  __m128d _Var19;
  __m128d _Var20;
  __m128d _Var21;
  __m128d _Var22;
  uint local_a8;
  uint uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined ***)this = &___7FRigUnit_PointSimulation__6B_;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  (this->Links).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Links).ArrayNum = 0;
  (this->Links).ArrayMax = 0;
  (this->Forces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Forces).ArrayNum = 0;
  (this->Forces).ArrayMax = 0;
  (this->CollisionVolumes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionVolumes).ArrayNum = 0;
  (this->CollisionVolumes).ArrayMax = 0;
  (this->BoneTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneTargets).ArrayNum = 0;
  (this->BoneTargets).ArrayMax = 0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 = auVar9;
  (this->DebugSettings).bEnabled = false;
  (this->DebugSettings).Scale = 1.0;
  (this->DebugSettings).CollisionScale = 50.0;
  (this->DebugSettings).bDrawPointsAsSpheres = false;
  (this->DebugSettings).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Blue.field0_0x0;
  *&(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Bezier).D.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Bezier).D.field0_0x0._s_0.Y = (double)uVar13;
  (this->Bezier).D.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  dVar10 = (this->Bezier).D.field0_0x0._s_0.X;
  dVar11 = (this->Bezier).D.field0_0x0._s_0.Y;
  dVar1 = (this->Bezier).D.field0_0x0._s_0.Z;
  (this->Bezier).C.field0_0x0._s_0.X = dVar10;
  (this->Bezier).C.field0_0x0._s_0.Y = dVar11;
  (this->Bezier).B.field0_0x0._s_0.X = dVar10;
  (this->Bezier).B.field0_0x0._s_0.Y = dVar11;
  (this->Bezier).A.field0_0x0._s_0.X = dVar10;
  (this->Bezier).A.field0_0x0._s_0.Y = dVar11;
  (this->Bezier).C.field0_0x0._s_0.Z = dVar1;
  (this->Bezier).B.field0_0x0._s_0.Z = dVar1;
  (this->Bezier).A.field0_0x0._s_0.Z = dVar1;
  (this->WorkData).Simulation._padding_ = 0x3c888889;
  *(undefined4 *)&(this->WorkData).Simulation._padding_ = 0;
  (this->WorkData).Simulation._padding_ = (longlong)&___7FCRSimPointContainer__6B_;
  (this->WorkData).Simulation.Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Simulation.Points.ArrayNum = 0;
  (this->WorkData).Simulation.Points.ArrayMax = 0;
  (this->WorkData).Simulation.Springs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Simulation.Springs.ArrayNum = 0;
  (this->WorkData).Simulation.Springs.ArrayMax = 0;
  (this->WorkData).Simulation.Forces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Simulation.Forces.ArrayNum = 0;
  (this->WorkData).Simulation.Forces.ArrayMax = 0;
  (this->WorkData).Simulation.CollisionVolumes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WorkData).Simulation.CollisionVolumes.ArrayNum = 0;
  (this->WorkData).Simulation.CollisionVolumes.ArrayMax = 0;
  (this->WorkData).Simulation.Constraints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Simulation.Constraints.ArrayNum = 0;
  (this->WorkData).Simulation.Constraints.ArrayMax = 0;
  (this->WorkData).Simulation.PreviousStep.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Simulation.PreviousStep.ArrayNum = 0;
  (this->WorkData).Simulation.PreviousStep.ArrayMax = 0;
  (this->WorkData).BoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).BoneIndices.ArrayNum = 0;
  (this->WorkData).BoneIndices.ArrayMax = 0;
  this->SimulatedStepsPerSecond = 60.0;
  this->IntegratorType = Verlet;
  this->VerletBlend = 4.0;
  this->bLimitLocalPosition = true;
  this->bPropagateToChildren = true;
  (this->PrimaryAimAxis).field0_0x0._s_0.X = 1.0;
  (this->PrimaryAimAxis).field0_0x0._s_0.Y = 0.0;
  (this->PrimaryAimAxis).field0_0x0._s_0.Z = 0.0;
  (this->SecondaryAimAxis).field0_0x0._s_0.X = 0.0;
  (this->SecondaryAimAxis).field0_0x0._s_0.Y = 1.0;
  (this->SecondaryAimAxis).field0_0x0._s_0.Z = 0.0;
  _Var22 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var21 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var20 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var19 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var18 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  _Var17 = UE::Math::TTransform<double>::Identity.Rotation.XY;
  FVar12 = FLinearColor::Blue;
  local_a8 = local_a8 & 0xffffff00;
  uStack_9c = uStack_9c & 0xffffff00;
  (this->DebugSettings).bEnabled = (bool)(char)local_a8;
  *(int3 *)&(this->DebugSettings).field_0x1 = (int3)(local_a8 >> 8);
  (this->DebugSettings).Scale = 1.0;
  (this->DebugSettings).CollisionScale = 50.0;
  (this->DebugSettings).bDrawPointsAsSpheres = (bool)(char)uStack_9c;
  *(int3 *)&(this->DebugSettings).field_0xd = (int3)(uStack_9c >> 8);
  (this->DebugSettings).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar12.field0_0x0;
  *&(this->DebugSettings).WorldOffset.Rotation.XY.m128d_f64 = _Var17.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Rotation.ZW.m128d_f64 = _Var18.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.XY.m128d_f64 = _Var19.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Translation.ZW.m128d_f64 = _Var20.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.XY.m128d_f64 = _Var21.m128d_f64;
  *&(this->DebugSettings).WorldOffset.Scale3D.ZW.m128d_f64 = _Var22.m128d_f64;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Bezier).A.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Bezier).A.field0_0x0._s_0.Y = (double)uVar14;
  local_90 = (undefined4)uVar13;
  uStack_8c = (undefined4)((ulonglong)uVar13 >> 0x20);
  uStack_88 = (undefined4)uVar14;
  uStack_84 = (undefined4)((ulonglong)uVar14 >> 0x20);
  *(undefined4 *)((longlong)&(this->Bezier).A.field0_0x0 + 0x10) = uVar15;
  *(undefined4 *)((longlong)&(this->Bezier).A.field0_0x0 + 0x14) = uVar16;
  *(undefined4 *)&(this->Bezier).B.field0_0x0 = local_90;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 4) = uStack_8c;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 8) = uStack_88;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 0xc) = uStack_84;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 0x10) = uVar15;
  *(undefined4 *)((longlong)&(this->Bezier).B.field0_0x0 + 0x14) = uVar16;
  (this->Bezier).C.field0_0x0._s_0.X = (double)uVar13;
  (this->Bezier).C.field0_0x0._s_0.Y = (double)uVar14;
  *(undefined4 *)((longlong)&(this->Bezier).C.field0_0x0 + 0x10) = uVar15;
  *(undefined4 *)((longlong)&(this->Bezier).C.field0_0x0 + 0x14) = uVar16;
  *(undefined4 *)&(this->Bezier).D.field0_0x0 = local_90;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 4) = uStack_8c;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 8) = uStack_88;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 0xc) = uStack_84;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 0x10) = uVar15;
  *(undefined4 *)((longlong)&(this->Bezier).D.field0_0x0 + 0x14) = uVar16;
  return this;
}

// ~FRigUnit_PointSimulation @ 14a518a50

void __thiscall FRigUnit_PointSimulation::~FRigUnit_PointSimulation(FRigUnit_PointSimulation *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->WorkData).BoneIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FCRSimPointContainer::~FCRSimPointContainer(&(this->WorkData).Simulation);
  pFVar1 = (this->BoneTargets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionVolumes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Forces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Links).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Points).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7FRigVMStruct__6B_;
  return;
}

// Execute @ 14a52b590

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
FRigUnit_PointSimulation::Execute(FRigUnit_PointSimulation *this,FRigVMExecuteContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Points).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->Links).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->Forces).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->CollisionVolumes).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->BoneTargets).ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RigVMExecute @ 14a54ca40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigUnit_PointSimulation::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  FRigVMMemoryHandle *pFVar7;
  uchar *puVar8;
  uchar *puVar9;
  FRigVMSlice *pFVar10;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar4 = pFVar7->Ptr;
  }
  else {
    puVar4 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar5 = pFVar7[1].Ptr;
  }
  else {
    puVar5 = FRigVMPropertyPath::GetData_Internal
                       (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  if (iVar1 < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar7[2].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xc);
  FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xd);
  FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xe);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar10->Offset + pFVar10->Index);
  if (*(int *)(puVar9 + 8) < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)(puVar8 + 8) < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)(puVar6 + 8) < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)(puVar5 + 8) < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)(puVar4 + 8) < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  return;
}

// StaticExecute @ 14a588750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigUnit_PointSimulation::StaticExecute
          (FRigVMExecuteContext *param_1,TArrayView<FRigVMSimPoint_const_,int> *param_2,
          TArrayView<FCRSimLinearSpring_const_,int> *param_3,
          TArrayView<FCRSimPointForce_const_,int> *param_4,
          TArrayView<FCRSimSoftCollision_const_,int> *param_5,float param_6,
          ERigVMSimPointIntegrateType param_7,float param_8,
          TArrayView<FRigUnit_PointSimulation_BoneTarget_const_,int> *param_9,bool param_10,
          bool param_11,TVector<double> *param_12,TVector<double> *param_13,
          FRigUnit_PointSimulation_DebugSettings *param_14,FRigVMFourPointBezier *param_15,
          FRigUnit_PointSimulation_WorkData *param_16)

{
  return;
}

