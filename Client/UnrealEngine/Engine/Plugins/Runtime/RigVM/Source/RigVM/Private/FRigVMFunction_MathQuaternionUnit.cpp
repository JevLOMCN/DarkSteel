// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a11a280

UScriptStruct * __cdecl FRigVMFunction_MathQuaternionUnit::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionUnit.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionUnit.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit,
                         (UObject *)pUVar1,L"RigVMFunction_MathQuaternionUnit");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionUnit.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionUnit.OuterSingleton;
}

// GetExecuteContextStruct @ 14a11a340

UScriptStruct * __thiscall
FRigVMFunction_MathQuaternionUnit::GetExecuteContextStruct(FRigVMFunction_MathQuaternionUnit *this)

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

// Execute @ 14a11a6b0

void __thiscall FRigVMFunction_MathQuaternionUnit::Execute(FRigVMFunction_MathQuaternionUnit *this)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar11;
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  uint uVar17;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__ == -1) {
      atexit(`FRigVMExecuteContext::Initialize'::__l5::
             _dynamic_atexit_destructor_for__StaticNameCache__);
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
  }
  dVar3 = *(double *)&this->field_0x10;
  dVar4 = *(double *)&this->field_0x18;
  dVar5 = *(double *)&this->field_0x20;
  dVar6 = *(double *)&this->field_0x28;
  dVar9 = dVar5 * dVar5 + dVar3 * dVar3;
  dVar11 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar1 = dVar11 + dVar9;
  dVar9 = dVar9 + dVar11;
  auVar13._8_4_ = SUB84(dVar9,0);
  auVar13._0_8_ = dVar1;
  auVar13._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar13 = sqrtpd(in_XMM4,auVar13);
  uVar7 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar8 = -(ulonglong)(__real_3e45798ee0000000 <= dVar9);
  uVar16 = (uint)(uVar7 >> 0x20);
  uVar17 = (uint)(uVar8 >> 0x20);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar13);
  auVar15._0_8_ = uVar7 & (ulonglong)(auVar14._0_8_ * dVar3);
  uVar2 = uVar8 & (ulonglong)(auVar14._8_8_ * dVar4);
  auVar15._8_4_ = (undefined4)uVar2;
  auVar15._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar14._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar14._4_4_ =
       ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar14._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar14._12_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar13 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar13);
  auVar12._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar12._4_4_ =
       ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar12._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar12._12_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  *(undefined1 (*) [16])&this->field_0x30 = auVar15 | auVar14;
  auVar10._0_8_ = (ulonglong)(auVar13._0_8_ * dVar5) & uVar7;
  uVar8 = (ulonglong)(auVar13._8_8_ * dVar6) & uVar8;
  auVar10._8_4_ = (undefined4)uVar8;
  auVar10._12_4_ = (undefined4)(uVar8 >> 0x20);
  *(undefined1 (*) [16])&this->field_0x40 = auVar12 | auVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a1700

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
FRigVMFunction_MathQuaternionUnit::Execute
          (FRigVMFunction_MathQuaternionUnit *this,FRigVMExecuteContext *param_1)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar11;
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  uint uVar17;
  
  dVar3 = *(double *)&this->field_0x10;
  dVar4 = *(double *)&this->field_0x18;
  dVar5 = *(double *)&this->field_0x20;
  dVar6 = *(double *)&this->field_0x28;
  dVar9 = dVar5 * dVar5 + dVar3 * dVar3;
  dVar11 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar1 = dVar11 + dVar9;
  dVar9 = dVar9 + dVar11;
  auVar13._8_4_ = SUB84(dVar9,0);
  auVar13._0_8_ = dVar1;
  auVar13._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar13 = sqrtpd(in_XMM4,auVar13);
  uVar7 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar8 = -(ulonglong)(__real_3e45798ee0000000 <= dVar9);
  uVar16 = (uint)(uVar7 >> 0x20);
  uVar17 = (uint)(uVar8 >> 0x20);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar13);
  auVar15._0_8_ = uVar7 & (ulonglong)(auVar14._0_8_ * dVar3);
  uVar2 = uVar8 & (ulonglong)(auVar14._8_8_ * dVar4);
  auVar15._8_4_ = (undefined4)uVar2;
  auVar15._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar14._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar14._4_4_ =
       ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar14._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar14._12_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar13 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar13);
  auVar12._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar12._4_4_ =
       ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar12._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar12._12_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar10._0_8_ = (ulonglong)(auVar13._0_8_ * dVar5) & uVar7;
  uVar8 = (ulonglong)(auVar13._8_8_ * dVar6) & uVar8;
  auVar10._8_4_ = (undefined4)uVar8;
  auVar10._12_4_ = (undefined4)(uVar8 >> 0x20);
  *(undefined1 (*) [16])&this->field_0x30 = auVar15 | auVar14;
  *(undefined1 (*) [16])&this->field_0x40 = auVar12 | auVar10;
  return;
}

// RigVMExecute @ 14a1c9230

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
FRigVMFunction_MathQuaternionUnit::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  undefined1 (*pauVar3) [16];
  code *pcVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  double *pdVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar19;
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar24;
  uint uVar25;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar14 = (double *)pFVar2->Ptr;
  }
  else {
    pdVar14 = (double *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  if (iVar1 < 2) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pauVar3 = (undefined1 (*) [16])param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  dVar9 = *pdVar14;
  dVar10 = pdVar14[1];
  dVar11 = pdVar14[2];
  dVar12 = pdVar14[3];
  dVar17 = dVar11 * dVar11 + dVar9 * dVar9;
  dVar19 = dVar12 * dVar12 + dVar10 * dVar10;
  dVar7 = dVar19 + dVar17;
  dVar17 = dVar17 + dVar19;
  auVar21._8_4_ = SUB84(dVar17,0);
  auVar21._0_8_ = dVar7;
  auVar21._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar21 = sqrtpd(in_XMM4,auVar21);
  uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar7);
  uVar16 = -(ulonglong)(__real_3e45798ee0000000 <= dVar17);
  uVar24 = (uint)(uVar15 >> 0x20);
  uVar25 = (uint)(uVar16 >> 0x20);
  auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar21);
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar23._0_8_ = uVar15 & (ulonglong)(auVar22._0_8_ * dVar9);
  uVar8 = uVar16 & (ulonglong)(auVar22._8_8_ * dVar10);
  auVar23._8_4_ = (undefined4)uVar8;
  auVar23._12_4_ = (undefined4)(uVar8 >> 0x20);
  auVar22._0_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar22._4_4_ =
       ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar22._8_4_ = ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar22._12_4_ =
       ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar21);
  *pauVar3 = auVar23 | auVar22;
  auVar18._0_8_ = (ulonglong)(auVar21._0_8_ * dVar11) & uVar15;
  uVar8 = (ulonglong)(auVar21._8_8_ * dVar12) & uVar16;
  auVar18._8_4_ = (undefined4)uVar8;
  auVar18._12_4_ = (undefined4)(uVar8 >> 0x20);
  auVar20._0_4_ = ~(uint)uVar15 & SUB84((double)fVar5,0);
  auVar20._4_4_ = ~uVar24 & (uint)((ulonglong)(double)fVar5 >> 0x20);
  auVar20._8_4_ = ~(uint)uVar16 & SUB84((double)fVar6,0);
  auVar20._12_4_ = ~uVar25 & (uint)((ulonglong)(double)fVar6 >> 0x20);
  pauVar3[1] = auVar20 | auVar18;
  return;
}

// StaticExecute @ 14a1e0340

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
FRigVMFunction_MathQuaternionUnit::StaticExecute
          (FRigVMExecuteContext *param_1,TQuat<double> *param_2,TQuat<double> *param_3)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar11;
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  uint uVar17;
  
  dVar3 = param_2->X;
  dVar4 = param_2->Y;
  dVar5 = param_2->Z;
  dVar6 = param_2->W;
  dVar9 = dVar5 * dVar5 + dVar3 * dVar3;
  dVar11 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar1 = dVar11 + dVar9;
  dVar9 = dVar9 + dVar11;
  auVar13._8_4_ = SUB84(dVar9,0);
  auVar13._0_8_ = dVar1;
  auVar13._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar13 = sqrtpd(in_XMM4,auVar13);
  uVar7 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar8 = -(ulonglong)(__real_3e45798ee0000000 <= dVar9);
  uVar16 = (uint)(uVar7 >> 0x20);
  uVar17 = (uint)(uVar8 >> 0x20);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar13);
  auVar15._0_8_ = uVar7 & (ulonglong)(auVar14._0_8_ * dVar3);
  uVar2 = uVar8 & (ulonglong)(auVar14._8_8_ * dVar4);
  auVar15._8_4_ = (undefined4)uVar2;
  auVar15._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar14._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar14._4_4_ =
       ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar14._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar14._12_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar13 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar13);
  auVar12._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar12._4_4_ =
       ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar12._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar12._12_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar10._0_8_ = (ulonglong)(auVar13._0_8_ * dVar5) & uVar7;
  uVar8 = (ulonglong)(auVar13._8_8_ * dVar6) & uVar8;
  auVar10._8_4_ = (undefined4)uVar8;
  auVar10._12_4_ = (undefined4)(uVar8 >> 0x20);
  param_3->X = (double)SUB168(auVar15 | auVar14,0);
  param_3->Y = (double)SUB168(auVar15 | auVar14,8);
  param_3->Z = (double)SUB168(auVar12 | auVar10,0);
  param_3->W = (double)SUB168(auVar12 | auVar10,8);
  return;
}

