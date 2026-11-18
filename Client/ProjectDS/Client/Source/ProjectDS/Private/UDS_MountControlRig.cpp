// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b4fda30

UClass * __cdecl UDS_MountControlRig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountControlRig",
               &Z_Registration_Info_UClass_UDS_MountControlRig.InnerSingleton,
               StaticRegisterNativesUDS_MountControlRig,0xd30,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MountControlRig>,
               InternalVTableHelperCtorCaller<UDS_MountControlRig>,local_res8,
               UDS_ControlRig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountControlRig.InnerSingleton;
}

// UDS_MountControlRig @ 14b500a50

UDS_MountControlRig * __thiscall
UDS_MountControlRig::UDS_MountControlRig(UDS_MountControlRig *this,FVTableHelper *param_1)

{
  UDS_ControlRig::UDS_ControlRig((UDS_ControlRig *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x290 = &_vftable__for__INodeMappingProviderInterface__;
  *(undefined ***)&this->field_0x298 = &_vftable__for__IRigHierarchyProvider__;
  *(undefined ***)&this->field_0x2a0 = &_vftable__for__IMeshDeformerProducer__;
  (this->AnimFootTraceInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimFootTraceInfoList).ArrayNum = 0;
  (this->AnimFootTraceInfoList).ArrayMax = 0;
  (this->MountAnimBP).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->DesiredLocationMap = 0;
  *(undefined8 *)&(this->DesiredLocationMap).field_0x8 = 0;
  *(undefined8 *)&(this->DesiredLocationMap).field_0x20 = 0;
  this->FootTraceDebug = false;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x28 = 0;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x34 = 0;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DesiredLocationMap).field_0x40 = 0;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x48 = 0;
  *(undefined8 *)&this->CurrentLocationMap = 0;
  *(undefined8 *)&(this->CurrentLocationMap).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentLocationMap).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x34 = 0;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurrentLocationMap).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x48 = 0;
  this->SpineLength = 0.0;
  return this;
}

// UDS_MountControlRig @ 14b500b60

UDS_MountControlRig * __thiscall
UDS_MountControlRig::UDS_MountControlRig(UDS_MountControlRig *this,FObjectInitializer *param_1)

{
  UDS_ControlRig::UDS_ControlRig((UDS_ControlRig *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x290 = &_vftable__for__INodeMappingProviderInterface__;
  *(undefined ***)&this->field_0x298 = &_vftable__for__IRigHierarchyProvider__;
  *(undefined ***)&this->field_0x2a0 = &_vftable__for__IMeshDeformerProducer__;
  (this->AnimFootTraceInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimFootTraceInfoList).ArrayNum = 0;
  (this->AnimFootTraceInfoList).ArrayMax = 0;
  (this->MountAnimBP).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->DesiredLocationMap = 0;
  *(undefined8 *)&(this->DesiredLocationMap).field_0x8 = 0;
  *(undefined8 *)&(this->DesiredLocationMap).field_0x20 = 0;
  this->FootTraceDebug = false;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x28 = 0;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x34 = 0;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DesiredLocationMap).field_0x40 = 0;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x48 = 0;
  *(undefined8 *)&this->CurrentLocationMap = 0;
  *(undefined8 *)&(this->CurrentLocationMap).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentLocationMap).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x34 = 0;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurrentLocationMap).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x48 = 0;
  this->SpineLength = 0.0;
  return this;
}

// ~UDS_MountControlRig @ 14b502260

void __thiscall UDS_MountControlRig::~UDS_MountControlRig(UDS_MountControlRig *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x290 = &_vftable__for__INodeMappingProviderInterface__;
  *(undefined ***)&this->field_0x298 = &_vftable__for__IRigHierarchyProvider__;
  *(undefined ***)&this->field_0x2a0 = &_vftable__for__IMeshDeformerProducer__;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurrentLocationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurrentLocationMap);
  *(undefined4 *)&(this->DesiredLocationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DesiredLocationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DesiredLocationMap);
  pFVar2 = (this->AnimFootTraceInfoList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ControlRig::~UDS_ControlRig((UDS_ControlRig *)this);
  return;
}

// GetPrivateStaticClass @ 14b5044e0

UClass * __cdecl UDS_MountControlRig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountControlRig",
               &Z_Registration_Info_UClass_UDS_MountControlRig.InnerSingleton,
               StaticRegisterNativesUDS_MountControlRig,0xd30,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MountControlRig>,
               InternalVTableHelperCtorCaller<UDS_MountControlRig>,local_res8,
               UDS_ControlRig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountControlRig.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b505a90

bool __thiscall UDS_MountControlRig::ShouldNotifyChangedCharState(UDS_MountControlRig *this)

{
  return true;
}

// StaticRegisterNativesUDS_MountControlRig @ 14b505b00

void __cdecl UDS_MountControlRig::StaticRegisterNativesUDS_MountControlRig(void)

{
  return;
}

// FootTrace @ 14b8c35a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UDS_MountControlRig::FootTrace(UDS_MountControlRig *this,FName param_1,float param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FName FVar6;
  bool bVar7;
  uint uVar8;
  FHitResult *pFVar9;
  TVector<double> *pTVar10;
  TVector<double> *pTVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  FName local_res10;
  undefined1 auStack_468 [32];
  FName local_438;
  FRigElementKey local_430;
  FRigElementKey local_420;
  FString local_410;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined4 uStack_3e8;
  undefined1 uStack_3e4;
  undefined2 uStack_3e3;
  undefined1 uStack_3e1;
  TVector<double>_u_0 local_3e0;
  TVector<double>_u_0 local_3c8;
  FString local_3b0;
  TTransform<double> local_398;
  undefined8 local_2e8;
  double dStack_2b0;
  undefined4 local_244;
  byte local_23b;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  FHitResult local_1e8;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_468;
  local_res10 = param_1;
  memset(&local_2e8,0,0x100);
  fVar23 = __real_42c80000;
  lVar16 = (longlong)(this->AnimFootTraceInfoList).ArrayNum;
  uVar13 = 0;
  uStack_3e3 = 0;
  uStack_3e1 = 0;
  uVar8 = 0;
  local_3f0 = 0;
  uStack_3e8 = 0xffffffff;
  uStack_3e4 = 0;
  local_2e8._4_4_ = 0x3f800000;
  local_244 = 0xffffffff;
  local_400 = 0;
  uStack_3f8 = 0;
  local_230 = 0;
  uStack_228 = 0;
  uStack_218 = 0xffffffff;
  local_220 = 0;
  uVar17 = uVar13;
  uVar18 = uVar13;
  fVar24 = fVar23;
  if (0 < lVar16) {
    do {
      uVar20 = (uint)uVar13;
      uVar15 = ~uVar20 >> 0x1f;
      uVar19 = uVar8;
      if ((int)uVar20 < (this->AnimFootTraceInfoList).ArrayNum) {
        uVar19 = uVar15;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(FName *)((this->AnimFootTraceInfoList).AllocatorInstance.Data + uVar18) == local_res10)
      {
        uVar19 = uVar8;
        if ((int)uVar20 < (this->AnimFootTraceInfoList).ArrayNum) {
          uVar19 = uVar15;
        }
        if ((uVar19 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar23 = *(float *)((this->AnimFootTraceInfoList).AllocatorInstance.Data +
                           (longlong)(int)uVar20 * 0x10 + 8);
        if ((int)uVar20 < (this->AnimFootTraceInfoList).ArrayNum) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar24 = *(float *)((this->AnimFootTraceInfoList).AllocatorInstance.Data +
                           (longlong)(int)uVar20 * 0x10 + 0xc);
        break;
      }
      uVar13 = (ulonglong)(uVar20 + 1);
      uVar17 = uVar17 + 1;
      uVar18 = uVar18 + 0x10;
    } while ((longlong)uVar17 < lVar16);
  }
  local_430.Name = local_res10;
  local_430.Type = Bone;
  UDS_ControlRig::GetRigTransform((UDS_ControlRig *)this,&local_e8,&local_430,GlobalSpace,false);
  dVar21 = (double)fVar23;
  local_3c8._s_0.X =
       dVar21 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
       local_e8.Translation.XY.m128d_f64[0];
  dVar22 = (double)fVar24;
  local_3c8._s_0.Z =
       dVar21 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z +
       local_e8.Translation.ZW.m128d_f64[0];
  local_3c8._s_0.Y =
       dVar21 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
       local_e8.Translation.XY.m128d_f64[1];
  local_3e0._s_0.Y =
       local_e8.Translation.XY.m128d_f64[1] -
       dVar22 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  local_3e0._s_0.X =
       local_e8.Translation.XY.m128d_f64[0] -
       dVar22 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  local_3e0._s_0.Z =
       local_e8.Translation.ZW.m128d_f64[0] -
       dVar22 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  pFVar9 = GetHitResult(this,&local_1e8,(TVector<double> *)&local_3c8._s_0,
                        (TVector<double> *)&local_3e0._s_0);
  FVar6 = local_res10;
  lVar16 = 2;
  puVar12 = &local_2e8;
  do {
    uVar1 = *(undefined8 *)&pFVar9->Distance;
    uVar3 = *(undefined8 *)&pFVar9->Location;
    uVar4 = *(undefined8 *)&(pFVar9->Location).field_0x8;
    *puVar12 = *(undefined8 *)pFVar9;
    puVar12[1] = uVar1;
    uVar1 = *(undefined8 *)&(pFVar9->Location).field_0x10;
    uVar5 = *(undefined8 *)&pFVar9->ImpactPoint;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    uVar3 = *(undefined8 *)&(pFVar9->ImpactPoint).field_0x8;
    uVar4 = *(undefined8 *)&(pFVar9->ImpactPoint).field_0x10;
    puVar12[4] = uVar1;
    puVar12[5] = uVar5;
    uVar1 = *(undefined8 *)&pFVar9->Normal;
    uVar5 = *(undefined8 *)&(pFVar9->Normal).field_0x8;
    puVar12[6] = uVar3;
    puVar12[7] = uVar4;
    uVar3 = *(undefined8 *)&(pFVar9->Normal).field_0x10;
    uVar4 = *(undefined8 *)&pFVar9->ImpactNormal;
    puVar12[8] = uVar1;
    puVar12[9] = uVar5;
    uVar1 = *(undefined8 *)&(pFVar9->ImpactNormal).field_0x8;
    uVar5 = *(undefined8 *)&(pFVar9->ImpactNormal).field_0x10;
    puVar12[10] = uVar3;
    puVar12[0xb] = uVar4;
    uVar3 = *(undefined8 *)&pFVar9->TraceStart;
    uVar4 = *(undefined8 *)&(pFVar9->TraceStart).field_0x8;
    puVar12[0xc] = uVar1;
    puVar12[0xd] = uVar5;
    puVar12[0xe] = uVar3;
    puVar12[0xf] = uVar4;
    lVar16 = lVar16 + -1;
    pFVar9 = (FHitResult *)&(pFVar9->TraceStart).field_0x10;
    puVar12 = puVar12 + 0x10;
  } while (lVar16 != 0);
  uVar8 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  pTVar10 = TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
                        *)&this->DesiredLocationMap,uVar8 + FVar6.Number,&local_res10);
  FVar6 = local_res10;
  uVar8 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  pTVar11 = TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
                        *)&this->CurrentLocationMap,uVar8 + FVar6.Number,&local_res10);
  dVar21 = __real_3fb99999a0000000;
  uVar19 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  (pTVar10->field0_0x0)._s_0.X = local_e8.Translation.XY.m128d_f64[0];
  (pTVar10->field0_0x0)._s_0.Y = local_e8.Translation.XY.m128d_f64[1];
  (pTVar10->field0_0x0)._s_0.Z = local_e8.Translation.ZW.m128d_f64[0];
  uVar20 = (uint)*(undefined8 *)&pTVar11->field0_0x0 & uVar8;
  uVar15 = (uint)((ulonglong)*(undefined8 *)&pTVar11->field0_0x0 >> 0x20) & uVar19;
  if ((((double)CONCAT44(uVar15,uVar20) < dVar21 || (double)CONCAT44(uVar15,uVar20) == dVar21) &&
      (uVar1 = *(undefined8 *)((longlong)&pTVar11->field0_0x0 + 8), uVar20 = (uint)uVar1 & uVar8,
      uVar15 = (uint)((ulonglong)uVar1 >> 0x20) & uVar19,
      (double)CONCAT44(uVar15,uVar20) < dVar21 || (double)CONCAT44(uVar15,uVar20) == dVar21)) &&
     (uVar1 = *(undefined8 *)((longlong)&pTVar11->field0_0x0 + 0x10), uVar8 = (uint)uVar1 & uVar8,
     uVar19 = (uint)((ulonglong)uVar1 >> 0x20) & uVar19,
     (double)CONCAT44(uVar19,uVar8) < dVar21 || (double)CONCAT44(uVar19,uVar8) == dVar21)) {
    (pTVar11->field0_0x0)._s_0.X = local_e8.Translation.XY.m128d_f64[0];
    (pTVar11->field0_0x0)._s_0.Y = local_e8.Translation.XY.m128d_f64[1];
    (pTVar11->field0_0x0)._s_0.Z = local_e8.Translation.ZW.m128d_f64[0];
  }
  if ((local_23b & 1) != 0) {
    (pTVar10->field0_0x0)._s_0.Z = dStack_2b0 + (pTVar10->field0_0x0)._s_0.Z;
  }
  dVar21 = ((pTVar10->field0_0x0)._s_0.X - (pTVar11->field0_0x0)._s_0.X) * __real_3fd0000000000000 +
           (pTVar11->field0_0x0)._s_0.X;
  local_398.Translation.ZW.m128d_f64[0] =
       ((pTVar10->field0_0x0)._s_0.Z - (pTVar11->field0_0x0)._s_0.Z) * __real_3fd0000000000000 +
       (pTVar11->field0_0x0)._s_0.Z;
  dVar22 = ((pTVar10->field0_0x0)._s_0.Y - (pTVar11->field0_0x0)._s_0.Y) * __real_3fd0000000000000 +
           (pTVar11->field0_0x0)._s_0.Y;
  (pTVar11->field0_0x0)._s_0.X = dVar21;
  (pTVar11->field0_0x0)._s_0.Z = local_398.Translation.ZW.m128d_f64[0];
  local_398.Translation.ZW.m128d_f64[1] = 0.0;
  *(double *)((longlong)&pTVar11->field0_0x0 + 8) = dVar22;
  local_398.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_398.Rotation.XY.m128d_f64[0] = local_e8.Rotation.XY.m128d_f64[0];
  local_398.Rotation.XY.m128d_f64[1] = local_e8.Rotation.XY.m128d_f64[1];
  local_398.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_398.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar22,0);
  local_398.Translation.XY.m128d_f64[0] = dVar21;
  local_398.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar22 >> 0x20);
  local_398.Rotation.ZW.m128d_f64[0] = local_e8.Rotation.ZW.m128d_f64[0];
  local_398.Rotation.ZW.m128d_f64[1] = local_e8.Rotation.ZW.m128d_f64[1];
  ::FName::ToString(&local_res10,&local_3b0);
  ::FString::PrintfImpl(&local_410,L"Control_%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_410.Data.ArrayNum != 0) {
    FVar14.Data = local_410.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_438,(wchar_t *)FVar14.Data);
  if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_410.Data.AllocatorInstance.Data);
  }
  if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
  }
  local_420.Name = local_438;
  local_420.Type = Control;
  UDS_ControlRig::SetRigTransform((UDS_ControlRig *)this,&local_420,&local_398,GlobalSpace);
  return;
}

// GetExternalVariablesImpl @ 14b8c6050

TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> * __thiscall
UDS_MountControlRig::GetExternalVariablesImpl
          (UDS_MountControlRig *this,
          TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1)

{
  UStruct *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FProperty *pFVar7;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  longlong lVar10;
  FName local_res8;
  FName local_res10;
  longlong local_78;
  FProperty *pFStack_70;
  FName local_68;
  FName FStack_60;
  undefined1 local_58;
  byte bStack_57;
  byte bStack_56;
  undefined1 uStack_55;
  int iStack_54;
  undefined1 *puStack_50;
  longlong local_48;
  FProperty *pFStack_40;
  FName local_38;
  FName FStack_30;
  undefined1 local_28;
  byte bStack_27;
  byte bStack_26;
  undefined1 uStack_25;
  int iStack_24;
  undefined1 *puStack_20;
  
  URigVMHost::GetExternalVariablesImpl((URigVMHost *)this,__return_storage_ptr__,param_1);
  pUVar1 = *(UStruct **)&this->field_0x10;
  pFVar6 = ::FName::FName(&local_res8,0x15,L"AnimFootTraceInfoList",FNAME_Add);
  pFVar7 = UStruct::FindPropertyByName(pUVar1,*pFVar6);
  lVar10 = 0;
  if (pFVar7 != (FProperty *)0x0) {
    uStack_55 = 0;
    local_68.ComparisonIndex.Value = 0;
    local_68.Number = 0;
    FStack_60.ComparisonIndex.Value = 0;
    FStack_60.Number = 0;
    local_58 = 0;
    bVar4 = IsThisNotNull(pFVar7,"FField::GetFName");
    local_78 = lVar10;
    if (bVar4) {
      local_78 = pFVar7->_padding_;
    }
    bStack_57 = ~(byte)(pFVar7->PropertyFlags >> 0x10) & 1;
    bStack_56 = (byte)(pFVar7->PropertyFlags >> 4) & 1;
    pFStack_70 = pFVar7;
    if ((pFVar7->ArrayDim < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4)
       ) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    puStack_50 = &this->field_0x0 + pFVar7->Offset_Internal;
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar7 = (FProperty *)pFVar7[1]._padding_;
      local_58 = 1;
    }
    iStack_54 = pFVar7->ElementSize * pFVar7->ArrayDim;
    RigVMPropertyUtils::GetTypeFromProperty(pFVar7,&local_68,(UObject **)&FStack_60);
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 <
         pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    lVar9 = (longlong)iVar5;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(longlong *)(pFVar2 + lVar9 * 0x30) = local_78;
    *(FProperty **)(pFVar2 + lVar9 * 0x30 + 8) = pFStack_70;
    *(FName *)(pFVar2 + lVar9 * 0x30 + 0x10) = local_68;
    ((FName *)(pFVar2 + lVar9 * 0x30 + 0x10))[1] = FStack_60;
    *(ulonglong *)(pFVar2 + lVar9 * 0x30 + 0x20) =
         CONCAT44(iStack_54,CONCAT13(uStack_55,CONCAT12(bStack_56,CONCAT11(bStack_57,local_58))));
    *(undefined1 **)(pFVar2 + lVar9 * 0x30 + 0x20 + 8) = puStack_50;
  }
  pUVar1 = *(UStruct **)&this->field_0x10;
  pFVar6 = ::FName::FName(&local_res10,0xe,L"FootTraceDebug",FNAME_Add);
  pFVar7 = UStruct::FindPropertyByName(pUVar1,*pFVar6);
  if (pFVar7 != (FProperty *)0x0) {
    uStack_25 = 0;
    local_38.ComparisonIndex.Value = 0;
    local_38.Number = 0;
    FStack_30.ComparisonIndex.Value = 0;
    FStack_30.Number = 0;
    local_28 = 0;
    bVar4 = IsThisNotNull(pFVar7,"FField::GetFName");
    if (bVar4) {
      lVar10 = pFVar7->_padding_;
    }
    bStack_27 = ~(byte)(pFVar7->PropertyFlags >> 0x10) & 1;
    bStack_26 = (byte)(pFVar7->PropertyFlags >> 4) & 1;
    local_48 = lVar10;
    pFStack_40 = pFVar7;
    if ((pFVar7->ArrayDim < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4)
       ) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    puStack_20 = &this->field_0x0 + pFVar7->Offset_Internal;
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar7 = (FProperty *)pFVar7[1]._padding_;
      local_28 = 1;
    }
    iStack_24 = pFVar7->ElementSize * pFVar7->ArrayDim;
    RigVMPropertyUtils::GetTypeFromProperty(pFVar7,&local_38,(UObject **)&FStack_30);
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
         pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    lVar10 = (longlong)iVar5;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(longlong *)(pFVar2 + lVar10 * 0x30) = local_48;
    *(FProperty **)(pFVar2 + lVar10 * 0x30 + 8) = pFStack_40;
    *(FName *)(pFVar2 + lVar10 * 0x30 + 0x10) = local_38;
    ((FName *)(pFVar2 + lVar10 * 0x30 + 0x10))[1] = FStack_30;
    *(ulonglong *)(pFVar2 + lVar10 * 0x30 + 0x20) =
         CONCAT44(iStack_24,CONCAT13(uStack_25,CONCAT12(bStack_26,CONCAT11(bStack_27,local_28))));
    *(undefined1 **)(pFVar2 + lVar10 * 0x30 + 0x20 + 8) = puStack_20;
  }
  return __return_storage_ptr__;
}

// GetHitResult @ 14b8c6a90

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

FHitResult * __thiscall
UDS_MountControlRig::GetHitResult
          (UDS_MountControlRig *this,FHitResult *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  EObjectTypeQuery EVar4;
  int iVar5;
  FHitResult *pFVar6;
  FScriptContainerElement local_68 [8];
  AActor *local_60;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_58;
  TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> local_48 [2];
  undefined8 local_28;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined2 uStack_1b;
  undefined1 uStack_19;
  
  local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48[0].ArrayNum = 0;
  local_48[0].ArrayMax = 0;
  EVar4 = UEngineTypes::ConvertToObjectType(ECC_WorldStatic);
  local_68[0] = SUB41(EVar4,0);
  if (((local_48[0].AllocatorInstance.Data <= local_68) &&
      (local_68 < local_48[0].AllocatorInstance.Data + local_48[0].ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FHitResult *)(*pcVar1)();
    return pFVar6;
  }
  iVar5 = local_48[0].ArrayNum;
  if (local_48[0].ArrayNum == local_48[0].ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&local_48[0].AllocatorInstance,&local_48[0].ArrayMax);
  }
  local_48[0].ArrayNum = iVar5 + 1;
  local_48[0].AllocatorInstance.Data[iVar5] = local_68[0];
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_60 = UControlRig::GetHostingActor((UControlRig *)this);
  if (((local_58.AllocatorInstance.Data <= (FScriptContainerElement *)&local_60) &&
      ((FScriptContainerElement *)&local_60 <
       local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FHitResult *)(*pcVar1)();
    return pFVar6;
  }
  iVar5 = local_58.ArrayNum;
  if (local_58.ArrayNum == local_58.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_58.AllocatorInstance,&local_58.ArrayMax);
  }
  local_58.ArrayNum = iVar5 + 1;
  *(AActor **)(local_58.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_60;
  memset(__return_storage_ptr__,0,0x100);
  fVar2 = __real_41200000;
  (__return_storage_ptr__->HitObjectHandle).ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  uStack_1b = 0;
  uStack_19 = 0;
  local_28 = 0;
  uStack_20 = 0xffffffff;
  uStack_1c = 0;
  __return_storage_ptr__->Time = 1.0;
  __return_storage_ptr__->MyItem = -1;
  (__return_storage_ptr__->HitObjectHandle).ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (__return_storage_ptr__->HitObjectHandle).InstanceIndex = -1;
  (__return_storage_ptr__->HitObjectHandle).ResolutionStatus = Invalid;
  *(undefined3 *)&(__return_storage_ptr__->HitObjectHandle).field_0x1d = 0;
  UDS_ControlRig::SphereTraceByObjectTypes
            ((UDS_ControlRig *)this,param_1,param_2,fVar2,local_48,&local_58,__return_storage_ptr__)
  ;
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OnChangedCharState @ 14b8d4c10

void __thiscall
UDS_MountControlRig::OnChangedCharState
          (UDS_MountControlRig *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  return;
}

// OnDeInitialize @ 14b8d5960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_MountControlRig::OnDeInitialize(UDS_MountControlRig *this)

{
  code *pcVar1;
  FDS_EntityBase *pFVar2;
  
  if (*(longlong *)&this->field_0xc50 != 0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x4b8);
    pFVar2 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->field_0xc50);
    (*pcVar1)(this,pFVar2);
  }
  return;
}

// OnExecuteForwardSolve @ 14b8d6320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UDS_MountControlRig::OnExecuteForwardSolve(UDS_MountControlRig *this,float param_1)

{
  FName FVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  uint uVar5;
  FName *pFVar6;
  TVector<double> *pTVar7;
  TVector<double> *pTVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined1 auStack_2c8 [32];
  FName local_298;
  FRigElementKey local_290;
  double local_280;
  FRigElementKey local_278 [2];
  FRigElementKey local_260;
  double local_250;
  TTransform<double> local_248;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  pFVar6 = ::FName::FName(&local_298,L"L_Foot");
  FootTrace(this,*pFVar6,param_1);
  pFVar6 = ::FName::FName(&local_298,L"R_Foot");
  FootTrace(this,*pFVar6,param_1);
  pFVar6 = ::FName::FName(&local_298,L"L_Hand");
  FootTrace(this,*pFVar6,param_1);
  pFVar6 = ::FName::FName(&local_298,L"R_Hand");
  FootTrace(this,*pFVar6,param_1);
  pFVar6 = ::FName::FName(&local_298,L"Pelvis");
  local_278[0].Type = Bone;
  local_278[0].Name = *pFVar6;
  UDS_ControlRig::GetRigTransform((UDS_ControlRig *)this,&local_1e8,local_278,GlobalSpace,false);
  pFVar6 = ::FName::FName(&local_298,L"Control_Pelvis");
  local_290.Type = Control;
  local_290.Name = *pFVar6;
  pFVar6 = ::FName::FName(&local_298,L"L_Foot");
  local_278[0].Type = Bone;
  local_278[0].Name = *pFVar6;
  UDS_ControlRig::GetRigTransform((UDS_ControlRig *)this,&local_188,local_278,GlobalSpace,false);
  pFVar6 = ::FName::FName(&local_298,L"R_Foot");
  local_278[0].Type = Bone;
  local_278[0].Name = *pFVar6;
  UDS_ControlRig::GetRigTransform((UDS_ControlRig *)this,&local_128,local_278,GlobalSpace,false);
  pFVar6 = ::FName::FName(&local_298,L"L_Foot");
  FVar1 = *pFVar6;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pTVar7 = TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
                       *)&this->CurrentLocationMap,uVar5 + FVar1.Number,pFVar6);
  pFVar6 = ::FName::FName((FName *)local_278,L"R_Foot");
  FVar1 = *pFVar6;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pTVar8 = TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
                       *)&this->CurrentLocationMap,uVar5 + FVar1.Number,pFVar6);
  fVar10 = (float)(local_128.Translation.ZW.m128d_f64[0] - (pTVar8->field0_0x0)._s_0.Z);
  fVar9 = (float)(local_188.Translation.ZW.m128d_f64[0] - (pTVar7->field0_0x0)._s_0.Z);
  if (fVar10 <= fVar9) {
    fVar10 = fVar9;
  }
  local_250 = local_1e8.Translation.ZW.m128d_f64[0] +
              (double)(float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000);
  local_248.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_248.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_248.Rotation.XY.m128d_f64[0] = local_1e8.Rotation.XY.m128d_f64[0];
  local_248.Rotation.XY.m128d_f64[1] = local_1e8.Rotation.XY.m128d_f64[1];
  local_248.Translation.ZW.m128d_f64[1] = 0.0;
  local_248.Rotation.ZW.m128d_f64[0] = local_1e8.Rotation.ZW.m128d_f64[0];
  local_248.Rotation.ZW.m128d_f64[1] = local_1e8.Rotation.ZW.m128d_f64[1];
  local_248.Translation.ZW.m128d_f64[0] = local_250;
  UDS_ControlRig::SetRigTransform((UDS_ControlRig *)this,&local_290,&local_248,GlobalSpace);
  pFVar6 = ::FName::FName((FName *)local_278,L"Spine2");
  local_290.Type = Bone;
  local_290.Name = *pFVar6;
  UDS_ControlRig::GetRigTransform((UDS_ControlRig *)this,&local_1e8,&local_290,GlobalSpace,false);
  pFVar6 = ::FName::FName((FName *)local_278,L"Control_Spine2");
  local_260.Type = Control;
  local_260.Name = *pFVar6;
  pFVar6 = ::FName::FName((FName *)local_278,L"L_Hand");
  local_290.Type = Bone;
  local_290.Name = *pFVar6;
  UDS_ControlRig::GetRigTransform((UDS_ControlRig *)this,&local_128,&local_290,GlobalSpace,false);
  pFVar6 = ::FName::FName((FName *)local_278,L"R_Hand");
  local_290.Type = Bone;
  local_290.Name = *pFVar6;
  UDS_ControlRig::GetRigTransform((UDS_ControlRig *)this,&local_c8,&local_290,GlobalSpace,false);
  pFVar6 = ::FName::FName((FName *)local_278,L"L_Hand");
  FVar1 = *pFVar6;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pTVar7 = TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
                       *)&this->CurrentLocationMap,uVar5 + FVar1.Number,pFVar6);
  pFVar6 = ::FName::FName(&local_298,L"R_Hand");
  FVar1 = *pFVar6;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pTVar8 = TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
                       *)&this->CurrentLocationMap,uVar5 + FVar1.Number,pFVar6);
  local_280 = local_128.Translation.ZW.m128d_f64[0];
  fVar10 = (float)(local_c8.Translation.ZW.m128d_f64[0] - (pTVar8->field0_0x0)._s_0.Z);
  fVar9 = (float)(local_128.Translation.ZW.m128d_f64[0] - (pTVar7->field0_0x0)._s_0.Z);
  if (fVar10 <= fVar9) {
    fVar10 = fVar9;
  }
  pFVar6 = ::FName::FName((FName *)local_278,L"Pelvis");
  local_290.Type = Bone;
  local_290.Name = *pFVar6;
  UDS_ControlRig::GetRigTransform((UDS_ControlRig *)this,&local_188,&local_290,GlobalSpace,false);
  local_280 = local_1e8.Translation.ZW.m128d_f64[0] +
              (double)(float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000);
  dVar2 = local_1e8.Translation.XY.m128d_f64[0] - local_188.Translation.XY.m128d_f64[0];
  dVar13 = local_1e8.Translation.XY.m128d_f64[1] - local_188.Translation.XY.m128d_f64[1];
  dVar11 = local_280 - local_188.Translation.ZW.m128d_f64[0];
  dVar3 = dVar13 * dVar13 + dVar2 * dVar2 + dVar11 * dVar11;
  if (this->SpineLength * this->SpineLength < (float)dVar3) {
    uVar12 = dVar11;
    uVar14 = dVar13;
    uVar4 = dVar2;
    if ((dVar3 != __real_3ff0000000000000) &&
       (uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       __real_3e45798ee0000000 <= dVar3)) {
      dVar3 = __real_3ff0000000000000 / SQRT(dVar3);
      uVar12 = dVar11 * dVar3;
      uVar14 = dVar13 * dVar3;
      uVar4 = dVar2 * dVar3;
    }
    dVar2 = (double)this->SpineLength;
    local_280 = (double)uVar12 * dVar2 + local_188.Translation.ZW.m128d_f64[0];
    local_1e8.Translation.XY.m128d_f64[0] =
         dVar2 * (double)uVar4 + local_188.Translation.XY.m128d_f64[0];
    local_1e8.Translation.XY.m128d_f64[1] =
         dVar2 * (double)uVar14 + local_188.Translation.XY.m128d_f64[1];
  }
  local_248.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_248.Rotation.XY.m128d_f64[0] = local_1e8.Rotation.XY.m128d_f64[0];
  local_248.Rotation.XY.m128d_f64[1] = local_1e8.Rotation.XY.m128d_f64[1];
  local_248.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_248.Translation.ZW.m128d_f64[0] = local_280;
  local_248.Translation.ZW.m128d_f64[1] = 0.0;
  local_248.Rotation.ZW.m128d_f64[0] = local_1e8.Rotation.ZW.m128d_f64[0];
  local_248.Rotation.ZW.m128d_f64[1] = local_1e8.Rotation.ZW.m128d_f64[1];
  local_248.Translation.XY.m128d_f64[1]._0_4_ = SUB84(local_1e8.Translation.XY.m128d_f64[1],0);
  local_248.Translation.XY.m128d_f64[0] = local_1e8.Translation.XY.m128d_f64[0];
  local_248.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)local_1e8.Translation.XY.m128d_f64[1] >> 0x20);
  UDS_ControlRig::SetRigTransform((UDS_ControlRig *)this,&local_260,&local_248,GlobalSpace);
  return;
}

// OnInitialize @ 14b8d7220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_MountControlRig::OnInitialize(UDS_MountControlRig *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  bool bVar16;
  int iVar17;
  int iVar18;
  UClass *pUVar19;
  UAnimInstance *this_00;
  USkeletalMeshComponent *this_01;
  FName *pFVar20;
  TTransform<double> *pTVar21;
  uint uVar22;
  ulonglong uVar23;
  USkeletalMeshComponent *pUVar24;
  ForAnyElementType FVar25;
  FName FVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  float fVar36;
  undefined1 auStack_118 [32];
  ForAnyElementType local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [8];
  FName local_e0 [5];
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_118;
  UDS_ControlRig::OnInitialize((UDS_ControlRig *)this);
  bVar16 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0xc58);
  if (!bVar16) {
    return;
  }
  local_e0[0] = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xc58);
  FVar26.ComparisonIndex.Value = 0;
  FVar26.Number = 0;
  if (local_e0[0] != (FName)0x0) {
    pUVar19 = Z_Construct_UClass_UDS_MountAnim_NoRegister();
    iVar18 = (int)pUVar19->_padding_;
    if ((iVar18 <= *(int *)(*(longlong *)((longlong)local_e0[0] + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)local_e0[0] + 0x10) + 0x30) + (longlong)iVar18 * 8)
        == &pUVar19->_padding_)) goto LAB_14b8d72a7;
  }
  local_e0[0] = FVar26;
LAB_14b8d72a7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0[0] != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e0[0]);
  }
  FWeakObjectPtr::operator=(&(this->MountAnimBP).WeakPtr,(FObjectPtr)local_e0);
  this_00 = (UAnimInstance *)FWeakObjectPtr::Get(&(this->MountAnimBP).WeakPtr);
  this_01 = UAnimInstance::GetSkelMeshComponentChecked(this_00);
  if (this_01 != (USkeletalMeshComponent *)0x0) {
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    pFVar20 = ::FName::FName(local_e0,L"Spine");
    iVar17 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)this_01,*pFVar20);
    iVar18 = (int)local_f0;
    if ((int)local_f0 == local_f0._4_4_) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    *(int *)(local_f8.Data + (longlong)iVar18 * 4) = iVar17;
    local_f0._0_4_ = iVar18 + 1;
    pFVar20 = ::FName::FName(local_e0,L"Spine1");
    iVar18 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)this_01,*pFVar20);
    if ((int)local_f0 == local_f0._4_4_) {
      local_f0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    *(int *)(local_f8.Data + (longlong)(int)local_f0 * 4) = iVar18;
    local_f0._0_4_ = (int)local_f0 + 1;
    pFVar20 = ::FName::FName(local_e0,L"Spine2");
    iVar17 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)this_01,*pFVar20);
    iVar18 = (int)local_f0;
    if ((int)local_f0 == local_f0._4_4_) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    auVar15 = ___xmm_7ff00000000000007ff0000000000000;
    uVar14 = _UNK_15061cc8c;
    uVar13 = _UNK_15061cc88;
    uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    iVar1 = iVar18 + 1;
    fVar36 = 0.0;
    local_f0 = CONCAT44(local_f0._4_4_,iVar1);
    *(int *)(local_f8.Data + (longlong)iVar18 * 4) = iVar17;
    uVar23 = (ulonglong)iVar1;
    pFVar2 = local_f8.Data + uVar23 * 4;
    FVar25.Data = local_f8.Data;
    while( true ) {
      if ((int)uVar23 != iVar1) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_e8);
      }
      if (FVar25.Data == pFVar2) break;
      pUVar24 = this_01;
      pTVar21 = USkinnedMeshComponent::GetRefPoseTransform
                          ((USkinnedMeshComponent *)this_01,&local_b8,*(int *)FVar25.Data);
      uVar32 = auVar15._0_4_;
      uVar33 = auVar15._4_4_;
      uVar34 = auVar15._8_4_;
      uVar35 = auVar15._12_4_;
      dVar29 = auVar15._0_8_;
      dVar28 = auVar15._8_8_;
      lVar27 = -(ulonglong)
                ((double)CONCAT44(local_b8.Rotation.ZW.m128d_f64[1]._4_4_ & uVar35,
                                  local_b8.Rotation.ZW.m128d_f64[1]._0_4_ & uVar34) == dVar28);
      auVar3._8_4_ = (int)lVar27;
      auVar3._0_8_ = -(ulonglong)
                      ((double)CONCAT44(local_b8.Rotation.ZW.m128d_f64[0]._4_4_ & uVar33,
                                        local_b8.Rotation.ZW.m128d_f64[0]._0_4_ & uVar32) == dVar29)
      ;
      auVar3._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
      uVar22 = movmskpd((int)pUVar24,auVar3);
      lVar27 = -(ulonglong)
                ((double)CONCAT44(local_b8.Rotation.XY.m128d_f64[1]._4_4_ & uVar35,
                                  local_b8.Rotation.XY.m128d_f64[1]._0_4_ & uVar34) == dVar28);
      auVar7._8_4_ = (int)lVar27;
      auVar7._0_8_ = -(ulonglong)
                      ((double)CONCAT44(local_b8.Rotation.XY.m128d_f64[0]._4_4_ & uVar33,
                                        local_b8.Rotation.XY.m128d_f64[0]._0_4_ & uVar32) == dVar29)
      ;
      auVar7._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
      iVar18 = movmskpd((int)pTVar21,auVar7);
      if ((uVar22 & 0x3fffffff) == 0 && iVar18 == 0) {
        lVar27 = -(ulonglong)
                  ((double)CONCAT44(local_b8.Translation.ZW.m128d_f64[1]._4_4_ & uVar35,
                                    local_b8.Translation.ZW.m128d_f64[1]._0_4_ & uVar34) == dVar28);
        auVar4._8_4_ = (int)lVar27;
        auVar4._0_8_ = -(ulonglong)
                        ((double)CONCAT44(local_b8.Translation.ZW.m128d_f64[0]._4_4_ & uVar33,
                                          local_b8.Translation.ZW.m128d_f64[0]._0_4_ & uVar32) ==
                        dVar29);
        auVar4._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
        uVar22 = movmskpd(0,auVar4);
        lVar27 = -(ulonglong)
                  ((double)CONCAT44(local_b8.Translation.XY.m128d_f64[1]._4_4_ & uVar35,
                                    local_b8.Translation.XY.m128d_f64[1]._0_4_ & uVar34) == dVar28);
        auVar8._8_4_ = (int)lVar27;
        auVar8._0_8_ = -(ulonglong)
                        ((double)CONCAT44(local_b8.Translation.XY.m128d_f64[0]._4_4_ & uVar33,
                                          local_b8.Translation.XY.m128d_f64[0]._0_4_ & uVar32) ==
                        dVar29);
        auVar8._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
        iVar18 = movmskpd(iVar18,auVar8);
        if ((uVar22 & 0x3fffffff) == 0 && iVar18 == 0) {
          lVar27 = -(ulonglong)
                    ((double)CONCAT44(local_b8.Scale3D.ZW.m128d_f64[1]._4_4_ & uVar35,
                                      local_b8.Scale3D.ZW.m128d_f64[1]._0_4_ & uVar34) == dVar28);
          auVar5._8_4_ = (int)lVar27;
          auVar5._0_8_ = -(ulonglong)
                          ((double)CONCAT44(local_b8.Scale3D.ZW.m128d_f64[0]._4_4_ & uVar33,
                                            local_b8.Scale3D.ZW.m128d_f64[0]._0_4_ & uVar32) ==
                          dVar29);
          auVar5._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
          uVar22 = movmskpd(0,auVar5);
          lVar27 = -(ulonglong)
                    ((double)CONCAT44(local_b8.Scale3D.XY.m128d_f64[1]._4_4_ & uVar35,
                                      local_b8.Scale3D.XY.m128d_f64[1]._0_4_ & uVar34) == dVar28);
          auVar9._8_4_ = (int)lVar27;
          auVar9._0_8_ = -(ulonglong)
                          ((double)CONCAT44(local_b8.Scale3D.XY.m128d_f64[0]._4_4_ & uVar33,
                                            local_b8.Scale3D.XY.m128d_f64[0]._0_4_ & uVar32) ==
                          dVar29);
          auVar9._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
          iVar18 = movmskpd(iVar18,auVar9);
          if ((uVar22 & 0x3fffffff) == 0 && iVar18 == 0) {
            dVar28 = local_b8.Rotation.ZW.m128d_f64[0] * local_b8.Rotation.ZW.m128d_f64[0] +
                     local_b8.Rotation.XY.m128d_f64[0] * local_b8.Rotation.XY.m128d_f64[0];
            dVar30 = local_b8.Rotation.ZW.m128d_f64[1] * local_b8.Rotation.ZW.m128d_f64[1] +
                     local_b8.Rotation.XY.m128d_f64[1] * local_b8.Rotation.XY.m128d_f64[1];
            dVar29 = dVar30 + dVar28;
            dVar28 = dVar28 + dVar30;
            dVar30 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar29;
            dVar31 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar28;
            dVar29 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar29;
            dVar28 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar28;
            lVar27 = -(ulonglong)
                      ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
                      (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar14,
                                       SUB84(dVar31,0) & uVar13));
            auVar6._8_4_ = (int)lVar27;
            auVar6._0_8_ = -(ulonglong)
                            ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                            (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar12,
                                             SUB84(dVar30,0) & uVar11));
            auVar6._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
            uVar22 = movmskpd(0,auVar6);
            lVar27 = -(ulonglong)
                      ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
                      (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar14,
                                       SUB84(dVar28,0) & uVar13));
            auVar10._8_4_ = (int)lVar27;
            auVar10._0_8_ =
                 -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                  (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar12,
                                   SUB84(dVar29,0) & uVar11));
            auVar10._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
            iVar18 = movmskpd(iVar18,auVar10);
            if ((uVar22 & 0x3fffffff) == 0 && iVar18 == 0) {
              fVar36 = (float)(SQRT(local_b8.Translation.XY.m128d_f64[0] *
                                    local_b8.Translation.XY.m128d_f64[0] +
                                    local_b8.Translation.XY.m128d_f64[1] *
                                    local_b8.Translation.XY.m128d_f64[1] +
                                    local_b8.Translation.ZW.m128d_f64[0] *
                                    local_b8.Translation.ZW.m128d_f64[0]) + (double)fVar36);
            }
          }
        }
      }
      uVar23 = local_f0 & 0xffffffff;
      FVar25.Data = FVar25.Data + 4;
    }
    this->SpineLength = fVar36;
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
  }
  return;
}

// SetAnimFootTraceInfoList @ 14b8e6bf0

void __thiscall
UDS_MountControlRig::SetAnimFootTraceInfoList
          (UDS_MountControlRig *this,
          TArray<FDS_AnimFootTraceInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FDS_AnimFootTraceInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar2 = &this->AnimFootTraceInfoList;
  if (pTVar2 != param_1) {
    iVar3 = (this->AnimFootTraceInfoList).ArrayMax;
    piVar1 = &(this->AnimFootTraceInfoList).ArrayMax;
    _Src = (param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
    (this->AnimFootTraceInfoList).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
    if (iVar4 != 0) {
      memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 << 4);
    }
  }
  return;
}

