// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 10

// StaticStruct @ 14cf2d970

UScriptStruct * __cdecl FARTraceResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FARTraceResult.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UScriptStruct_FARTraceResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FARTraceResult,(UObject *)pUVar1,L"ARTraceResult"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FARTraceResult.OuterSingleton;
}

// FARTraceResult @ 14cf40970

FARTraceResult * __thiscall
FARTraceResult::FARTraceResult
          (FARTraceResult *this,TSharedPtr<FARSupportInterface,1> *param_1,float param_2,
          EARLineTraceChannels param_3,TTransform<double> *param_4,UARTrackedGeometry *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  double dVar2;
  
  this->DistanceFromCamera = param_2;
  this->TraceChannel = param_3;
  dVar2 = (param_4->Rotation).XY.m128d_f64[1];
  (this->LocalTransform).Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
  (this->LocalTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_4->Rotation).ZW.m128d_f64[1];
  (this->LocalTransform).Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
  (this->LocalTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_4->Translation).XY.m128d_f64[1];
  (this->LocalTransform).Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
  (this->LocalTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_4->Translation).ZW.m128d_f64[1];
  (this->LocalTransform).Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
  (this->LocalTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_4->Scale3D).XY.m128d_f64[1];
  (this->LocalTransform).Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
  (this->LocalTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_4->Scale3D).ZW.m128d_f64[1];
  (this->LocalTransform).Scale3D.ZW.m128d_f64[0] = (param_4->Scale3D).ZW.m128d_f64[0];
  (this->LocalTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  (this->TrackedGeometry).field0_0x0.DebugPtr = param_5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UARTrackedGeometry *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_5);
  }
  (this->ARSystem).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ARSystem).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// FARTraceResult @ 14cf40a10

FARTraceResult * __thiscall FARTraceResult::FARTraceResult(FARTraceResult *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  this->DistanceFromCamera = 0.0;
  this->TraceChannel = None;
  auVar14._8_4_ = SUB84((double)fVar4,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Rotation.XY.m128d_f64 = auVar14;
  (this->LocalTransform).Rotation.ZW.m128d_f64[0] = (double)fVar7;
  (this->LocalTransform).Rotation.ZW.m128d_f64[1] = (double)fVar10;
  (this->LocalTransform).Translation.XY.m128d_f64[0] = (double)fVar2;
  (this->LocalTransform).Translation.XY.m128d_f64[1] = (double)fVar5;
  (this->LocalTransform).Translation.ZW.m128d_f64[0] = (double)fVar8;
  (this->LocalTransform).Translation.ZW.m128d_f64[1] = (double)fVar11;
  (this->LocalTransform).Scale3D.XY.m128d_f64[0] = (double)fVar3;
  (this->LocalTransform).Scale3D.XY.m128d_f64[1] = (double)fVar6;
  auVar13._8_4_ = SUB84((double)fVar12,0);
  auVar13._0_8_ = (double)fVar9;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Scale3D.ZW.m128d_f64 = auVar13;
  (this->TrackedGeometry).field0_0x0.DebugPtr = (UARTrackedGeometry *)0x0;
  (this->ARSystem).Object = (FARSupportInterface *)0x0;
  (this->ARSystem).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return this;
}

// GetDistanceFromCamera @ 14cf50bc0

float __thiscall FARTraceResult::GetDistanceFromCamera(FARTraceResult *this)

{
  return this->DistanceFromCamera;
}

// GetLocalToTrackingTransform @ 14cf51d60

TTransform<double> * __thiscall
FARTraceResult::GetLocalToTrackingTransform
          (FARTraceResult *this,TTransform<double> *__return_storage_ptr__)

{
  FARSupportInterface *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  TTransform<double> *pTVar7;
  
  if ((this->ARSystem).Object == (FARSupportInterface *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TTransform<double> *)(*pcVar2)();
      return pTVar7;
    }
  }
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  pFVar1 = (this->ARSystem).Object;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar4;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar4;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar5;
  UE::Math::TTransform<double>::Multiply
            (__return_storage_ptr__,&this->LocalTransform,&pFVar1->AlignmentTransform);
  return __return_storage_ptr__;
}

// GetLocalToWorldTransform @ 14cf51f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
FARTraceResult::GetLocalToWorldTransform
          (FARTraceResult *this,TTransform<double> *__return_storage_ptr__)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  TTransform<double> *pTVar7;
  undefined1 auStack_f8 [32];
  TTransform<double> local_d8;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((this->ARSystem).Object == (FARSupportInterface *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TTransform<double> *)(*pcVar2)();
      return pTVar7;
    }
  }
  local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_d8,&this->LocalTransform,&((this->ARSystem).Object)->AlignmentTransform);
  if ((this->ARSystem).Object == (FARSupportInterface *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TTransform<double> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pIVar1 = ((this->ARSystem).Object)->XRTrackingSystem;
  pTVar7 = (TTransform<double> *)(**(code **)((longlong)*pIVar1 + 0x90))(pIVar1,local_78);
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar4;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar4;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar5;
  UE::Math::TTransform<double>::Multiply(__return_storage_ptr__,&local_d8,pTVar7);
  return __return_storage_ptr__;
}

// GetLocalTransform @ 14cf523f0

TTransform<double> * __thiscall
FARTraceResult::GetLocalTransform(FARTraceResult *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->LocalTransform).Rotation.XY.m128d_f64[1];
  dVar2 = (this->LocalTransform).Rotation.ZW.m128d_f64[0];
  dVar3 = (this->LocalTransform).Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (this->LocalTransform).Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->LocalTransform).Translation.XY.m128d_f64[0];
  dVar4 = (this->LocalTransform).Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->LocalTransform).Translation.ZW.m128d_f64[0];
  dVar3 = (this->LocalTransform).Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (this->LocalTransform).Scale3D.XY.m128d_f64[0];
  dVar4 = (this->LocalTransform).Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->LocalTransform).Scale3D.ZW.m128d_f64[0];
  dVar3 = (this->LocalTransform).Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// GetTraceChannel @ 14cf56460

EARLineTraceChannels __thiscall FARTraceResult::GetTraceChannel(FARTraceResult *this)

{
  return this->TraceChannel;
}

// GetTrackedGeometry @ 14cf564c0

UARTrackedGeometry * __thiscall FARTraceResult::GetTrackedGeometry(FARTraceResult *this)

{
  return (this->TrackedGeometry).field0_0x0.DebugPtr;
}

// SetLocalToWorldTransform @ 14cf5fea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FARTraceResult::SetLocalToWorldTransform(FARTraceResult *this,TTransform<double> *param_1)

{
  __m128d *p_Var1;
  VectorRegister4Double *pVVar2;
  FARSupportInterface *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  double *pdVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  int iVar24;
  undefined4 extraout_EAX;
  uint uVar25;
  uint uVar26;
  IXRTrackingSystem *pIVar27;
  TTransform<double> *pTVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined4 uVar58;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar59;
  undefined4 uVar61;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar60;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined1 auVar91 [16];
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [16];
  uint local_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  double local_2a8;
  double dStack_2a0;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_318;
  if ((this->ARSystem).Object == (FARSupportInterface *)0x0) {
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar23) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar27 = ((this->ARSystem).Object)->XRTrackingSystem;
  (**(code **)((longlong)*pIVar27 + 0x90))(pIVar27,&local_118);
  uVar58 = SUB84(pIVar27,0);
  if ((this->ARSystem).Object == (FARSupportInterface *)0x0) {
    uVar58 = 0x50613840;
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar23) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar22 = _UNK_15061cc8c;
  uVar21 = _UNK_15061cc88;
  uVar20 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  pFVar3 = (this->ARSystem).Object;
  local_2a8 = (pFVar3->AlignmentTransform).Translation.ZW.m128d_f64[0];
  dStack_2a0 = (pFVar3->AlignmentTransform).Translation.ZW.m128d_f64[1];
  local_2c8 = *(undefined4 *)(pFVar3->AlignmentTransform).Rotation.XY.m128d_f64;
  uStack_2c4 = *(undefined4 *)((longlong)(pFVar3->AlignmentTransform).Rotation.XY.m128d_f64 + 4);
  dVar9 = (pFVar3->AlignmentTransform).Rotation.XY.m128d_f64[0];
  pdVar15 = (pFVar3->AlignmentTransform).Rotation.XY.m128d_f64 + 1;
  uStack_2c0 = *(undefined4 *)pdVar15;
  uStack_2bc = *(undefined4 *)((longlong)(pFVar3->AlignmentTransform).Rotation.XY.m128d_f64 + 0xc);
  dVar10 = *pdVar15;
  auVar51._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & local_c8._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & local_c8._0_4_);
  auVar51._8_4_ = _UNK_15061cc88 & local_c8._8_4_;
  auVar51._12_4_ = _UNK_15061cc8c & local_c8._12_4_;
  p_Var1 = &(pFVar3->AlignmentTransform).Rotation.ZW;
  local_2d8 = *(undefined4 *)p_Var1->m128d_f64;
  uStack_2d4 = *(undefined4 *)((longlong)(pFVar3->AlignmentTransform).Rotation.ZW.m128d_f64 + 4);
  dVar7 = p_Var1->m128d_f64[0];
  pdVar15 = (pFVar3->AlignmentTransform).Rotation.ZW.m128d_f64 + 1;
  uStack_2d0 = *(undefined4 *)pdVar15;
  uStack_2cc = *(undefined4 *)((longlong)(pFVar3->AlignmentTransform).Rotation.ZW.m128d_f64 + 0xc);
  dVar8 = *pdVar15;
  pVVar2 = &(pFVar3->AlignmentTransform).Translation;
  local_2b8 = *(undefined4 *)(pVVar2->XY).m128d_f64;
  uStack_2b4 = *(undefined4 *)((longlong)(pFVar3->AlignmentTransform).Translation.XY.m128d_f64 + 4);
  dVar11 = (pVVar2->XY).m128d_f64[0];
  pdVar15 = (pFVar3->AlignmentTransform).Translation.XY.m128d_f64 + 1;
  uStack_2b0 = *(undefined4 *)pdVar15;
  uStack_2ac = *(undefined4 *)
                ((longlong)(pFVar3->AlignmentTransform).Translation.XY.m128d_f64 + 0xc);
  dVar12 = *pdVar15;
  auVar38 = *(undefined1 (*) [16])(pFVar3->AlignmentTransform).Scale3D.XY.m128d_f64;
  p_Var1 = &(pFVar3->AlignmentTransform).Scale3D.ZW;
  uVar16 = *(uint *)p_Var1->m128d_f64;
  uVar17 = *(uint *)((longlong)(pFVar3->AlignmentTransform).Scale3D.ZW.m128d_f64 + 4);
  dVar60 = p_Var1->m128d_f64[0];
  uVar26 = *(uint *)((pFVar3->AlignmentTransform).Scale3D.ZW.m128d_f64 + 1);
  uVar18 = *(uint *)((longlong)(pFVar3->AlignmentTransform).Scale3D.ZW.m128d_f64 + 0xc);
  uVar92 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & local_d8._0_4_;
  uVar93 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ & local_d8._4_4_;
  uVar94 = _UNK_15061cc88 & local_d8._8_4_;
  uVar95 = _UNK_15061cc8c & local_d8._12_4_;
  auVar75._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar51._8_8_);
  auVar75._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar51._0_8_);
  uVar25 = movmskpd(uVar58,auVar75);
  auVar43._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < (double)CONCAT44(uVar95,uVar94));
  auVar43._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < (double)CONCAT44(uVar93,uVar92));
  iVar24 = movmskpd((int)pFVar3,auVar43);
  if ((uVar25 & 0x3fffffff) == 0 && iVar24 == 0) {
    local_298.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_298.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_298.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_298.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_298.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_298.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    auVar13._4_8_ = in_XMM4._8_8_;
    auVar13._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar67._0_8_ = auVar13._0_8_ << 0x20;
    auVar67._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar67._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar68._8_8_ = auVar67._8_8_;
    auVar68._0_8_ = local_c8._0_8_;
    local_118 = local_118 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dStack_110 = dStack_110 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    uVar89 = SUB84(dStack_110,0);
    uVar90 = (undefined4)((ulonglong)dStack_110 >> 0x20);
    local_108 = local_108 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dStack_100 = dStack_100 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar87 = SUB84(dStack_100,0);
    uVar88 = (undefined4)((ulonglong)dStack_100 >> 0x20);
    lVar29 = -(ulonglong)
              ((double)CONCAT44(local_c8._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                local_c8._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,local_d8);
    lVar30 = -(ulonglong)
              ((double)CONCAT44(uVar93,uVar92) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar31 = -(ulonglong)
              ((double)CONCAT44(uVar95,uVar94) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    local_298.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar30 & auVar43._0_4_;
    local_298.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar30 >> 0x20) & auVar43._4_4_;
    local_298.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar31 & auVar43._8_4_;
    local_298.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar31 >> 0x20) & auVar43._12_4_;
    auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar68);
    auVar81._0_8_ =
         (double)CONCAT44(local_298.Scale3D.XY.m128d_f64[0]._4_4_,
                          local_298.Scale3D.XY.m128d_f64[0]._0_4_);
    auVar81._8_4_ = local_298.Scale3D.XY.m128d_f64[1]._0_4_;
    auVar81._12_4_ = local_298.Scale3D.XY.m128d_f64[1]._4_4_;
    auVar74._8_4_ = uVar89;
    auVar74._0_8_ = local_118;
    auVar74._12_4_ = uVar90;
    local_f8 = auVar81._0_8_ * local_f8;
    dStack_f0 = auVar81._8_8_ * dStack_f0;
    local_298.Scale3D.ZW.m128d_f64[0] =
         (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar43._4_4_,
                          ~(uint)lVar29 & auVar43._0_4_);
    uVar58 = SUB84(dStack_f0,0);
    auVar77._8_4_ = uVar58;
    auVar77._0_8_ = local_f8;
    uVar61 = (undefined4)((ulonglong)dStack_f0 >> 0x20);
    auVar77._12_4_ = uVar61;
    auVar62._8_4_ = uVar89;
    auVar62._0_8_ = local_118;
    auVar62._12_4_ = uVar90;
    local_e8 = local_298.Scale3D.ZW.m128d_f64[0] * local_e8;
    uVar85 = SUB84(dStack_e0 * 0.0,0);
    uVar86 = (undefined4)((ulonglong)(dStack_e0 * 0.0) >> 0x20);
    auVar6._8_4_ = uVar87;
    auVar6._0_8_ = local_108;
    auVar6._12_4_ = uVar88;
    auVar75 = blendpd(auVar74,auVar6,2);
    auVar32._8_4_ = uVar58;
    auVar32._0_8_ = local_f8;
    auVar32._12_4_ = uVar61;
    auVar44._8_4_ = uVar58;
    auVar44._0_8_ = local_f8;
    auVar44._12_4_ = uVar61;
    auVar78._0_8_ = auVar77._8_8_ * local_118 - local_f8 * auVar62._8_8_;
    auVar78._8_8_ = local_e8 * dStack_110 - auVar32._8_8_ * local_108;
    auVar5._8_4_ = uVar85;
    auVar5._0_8_ = local_e8;
    auVar5._12_4_ = uVar86;
    auVar43 = blendpd(auVar44,auVar5,2);
    auVar52._8_4_ = SUB84(auVar78._8_8_,0);
    auVar52._0_8_ = auVar78._0_8_;
    auVar52._12_4_ = (int)((ulonglong)auVar78._8_8_ >> 0x20);
    auVar33._8_4_ = uVar85;
    auVar33._0_8_ = local_e8;
    auVar33._12_4_ = uVar86;
    auVar45._0_8_ = auVar43._0_8_ * local_108 - local_e8 * auVar75._0_8_;
    auVar45._8_8_ = auVar43._8_8_ * dStack_100 - auVar33._8_8_ * auVar75._8_8_;
    dVar50 = auVar52._8_8_ + auVar52._8_8_;
    dVar59 = auVar45._0_8_ + auVar45._0_8_;
    auVar43 = blendpd(auVar78,auVar45,2);
    auVar79._0_8_ = auVar43._0_8_ + auVar43._0_8_;
    auVar79._8_8_ = auVar43._8_8_ + auVar43._8_8_;
    auVar46._8_4_ = uVar87;
    auVar46._0_8_ = dStack_100;
    auVar46._12_4_ = uVar88;
    uVar58 = SUB84(dVar59,0);
    auVar69._8_4_ = uVar58;
    auVar69._0_8_ = dVar50;
    uVar61 = (undefined4)((ulonglong)dVar59 >> 0x20);
    auVar69._12_4_ = uVar61;
    auVar34._8_4_ = uVar58;
    auVar34._0_8_ = dVar50;
    auVar34._12_4_ = uVar61;
    auVar63._8_4_ = uVar58;
    auVar63._0_8_ = dVar50;
    auVar63._12_4_ = uVar61;
    auVar43 = blendpd(auVar63,auVar79,2);
    auVar70._0_8_ = auVar69._8_8_ * local_118 - dVar50 * auVar62._8_8_;
    auVar70._8_8_ = auVar79._0_8_ * dStack_110 - auVar34._8_8_ * local_108;
    auVar35._8_4_ = SUB84(auVar79._8_8_,0);
    auVar35._0_8_ = auVar79._0_8_;
    auVar35._12_4_ = (int)((ulonglong)auVar79._8_8_ >> 0x20);
    auVar64._0_8_ = auVar43._0_8_ * local_108 - auVar79._0_8_ * auVar75._0_8_;
    auVar64._8_8_ = auVar43._8_8_ * dStack_100 - auVar35._8_8_ * auVar75._8_8_;
    auVar36._8_4_ = SUB84(auVar70._8_8_,0);
    auVar36._0_8_ = auVar70._0_8_;
    auVar36._12_4_ = (int)((ulonglong)auVar70._8_8_ >> 0x20);
    in_XMM4 = blendpd(auVar70,auVar64,2);
    local_298.Translation.ZW.m128d_f64[1] = 0.0;
    local_298.Translation.ZW.m128d_f64[0] =
         0.0 - (dStack_100 * auVar79._0_8_ + local_e8 + in_XMM4._0_8_);
    local_298.Rotation.XY.m128d_f64[1]._0_4_ = uVar89;
    local_298.Rotation.XY.m128d_f64[0] = local_118;
    local_298.Rotation.XY.m128d_f64[1]._4_4_ = uVar90;
    local_298.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_298.Rotation.ZW.m128d_f64[1]._0_4_ = uVar87;
    local_298.Rotation.ZW.m128d_f64[0] = local_108;
    local_298.Rotation.ZW.m128d_f64[1]._4_4_ = uVar88;
    local_298.Translation.XY.m128d_f64[1] =
         0.0 - (auVar46._8_8_ * dVar59 + dStack_f0 + auVar64._0_8_);
    local_298.Translation.XY.m128d_f64[0] = 0.0 - (dStack_100 * dVar50 + local_f8 + auVar36._8_8_);
  }
  pTVar28 = &local_178;
  local_178.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_178.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_178.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_178.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_178.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_178.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_178.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_178.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_178.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_178.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_178.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_2f8 = auVar38;
  local_2e8 = uVar16;
  uStack_2e4 = uVar17;
  uStack_2e0 = uVar26;
  uStack_2dc = uVar18;
  UE::Math::TTransform<double>::Multiply(pTVar28,param_1,&local_298);
  auVar53._0_8_ = (double)CONCAT44(uVar17 & uVar20,uVar16 & uVar19);
  auVar53._8_4_ = uVar26 & uVar21;
  auVar53._12_4_ = uVar18 & uVar22;
  auVar47._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar53._8_8_);
  auVar47._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar53._0_8_);
  uVar26 = movmskpd((int)pTVar28,auVar47);
  auVar54._0_8_ = (double)CONCAT44(auVar38._4_4_ & uVar20,auVar38._0_4_ & uVar19);
  auVar54._8_4_ = auVar38._8_4_ & uVar21;
  auVar54._12_4_ = auVar38._12_4_ & uVar22;
  auVar37._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar54._8_8_);
  auVar37._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar54._0_8_);
  iVar24 = movmskpd(extraout_EAX,auVar37);
  if ((uVar26 & 0x3fffffff) == 0 && iVar24 == 0) {
    local_238.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_238.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_238.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_238.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_238.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_238.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    dVar7 = dVar7 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar8 = dVar8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar85 = SUB84(dVar8,0);
    uVar86 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar14._4_8_ = in_XMM4._8_8_;
    auVar14._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar71._0_8_ = auVar14._0_8_ << 0x20;
    auVar71._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar71._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    dVar9 = dVar9 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar10 = dVar10 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    uVar58 = SUB84(dVar10,0);
    uVar61 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar72._8_8_ = auVar71._8_8_;
    auVar72._0_8_ = dVar60;
    local_238.Rotation.XY.m128d_f64[1]._0_4_ = uVar58;
    local_238.Rotation.XY.m128d_f64[0] = dVar9;
    local_238.Rotation.XY.m128d_f64[1]._4_4_ = uVar61;
    lVar29 = -(ulonglong)
              ((double)CONCAT44(uVar20 & uVar17,uVar19 & uVar16) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar38);
    lVar30 = -(ulonglong)
              ((double)CONCAT44(auVar38._4_4_ & uVar20,auVar38._0_4_ & uVar19) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar31 = -(ulonglong)
              ((double)CONCAT44(auVar38._12_4_ & uVar22,auVar38._8_4_ & uVar21) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    local_238.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar30 & auVar43._0_4_;
    local_238.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar30 >> 0x20) & auVar43._4_4_;
    local_238.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar31 & auVar43._8_4_;
    local_238.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar31 >> 0x20) & auVar43._12_4_;
    auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar72);
    dVar11 = dVar11 * (double)CONCAT44(local_238.Scale3D.XY.m128d_f64[0]._4_4_,
                                       local_238.Scale3D.XY.m128d_f64[0]._0_4_);
    dVar12 = dVar12 * (double)CONCAT44(local_238.Scale3D.XY.m128d_f64[1]._4_4_,
                                       local_238.Scale3D.XY.m128d_f64[1]._0_4_);
    uVar87 = (undefined4)((ulonglong)dVar12 >> 0x20);
    auVar55._8_4_ = uVar58;
    auVar55._0_8_ = dVar9;
    auVar55._12_4_ = uVar61;
    local_238.Scale3D.ZW.m128d_f64[0] =
         (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar38._4_4_,
                          ~(uint)lVar29 & auVar38._0_4_);
    dVar60 = auVar55._8_8_;
    auVar39._8_4_ = SUB84(dVar7,0);
    auVar39._0_8_ = dVar60;
    auVar39._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar82._8_4_ = SUB84(dVar12,0);
    auVar82._0_8_ = dVar11;
    auVar82._12_4_ = uVar87;
    auVar91._0_8_ = local_2a8 * local_238.Scale3D.ZW.m128d_f64[0];
    auVar91._8_8_ = dStack_2a0 * 0.0;
    auVar76._8_4_ = uVar58;
    auVar76._0_8_ = dVar9;
    auVar76._12_4_ = uVar61;
    auVar48._8_4_ = SUB84(dVar12,0);
    auVar48._0_8_ = dVar11;
    auVar48._12_4_ = uVar87;
    auVar80._8_4_ = uVar85;
    auVar80._0_8_ = dVar7;
    auVar80._12_4_ = uVar86;
    auVar43 = blendpd(auVar48,auVar91,2);
    auVar83._0_8_ = auVar82._8_8_ * dVar9 - dVar60 * dVar11;
    auVar83._8_8_ = auVar91._0_8_ * dVar10 - auVar39._8_8_ * dVar12;
    auVar73._8_4_ = SUB84(auVar83._8_8_,0);
    auVar73._0_8_ = auVar83._0_8_;
    auVar73._12_4_ = (int)((ulonglong)auVar83._8_8_ >> 0x20);
    auVar38._8_4_ = uVar85;
    auVar38._0_8_ = dVar7;
    auVar38._12_4_ = uVar86;
    auVar75 = blendpd(auVar76,auVar38,2);
    auVar49._0_8_ = auVar43._0_8_ * dVar7 - auVar75._0_8_ * auVar91._0_8_;
    auVar49._8_8_ = auVar43._8_8_ * dVar8 - auVar75._8_8_ * auVar91._8_8_;
    dVar50 = auVar73._8_8_ + auVar73._8_8_;
    dVar59 = auVar49._0_8_ + auVar49._0_8_;
    auVar38 = blendpd(auVar83,auVar49,2);
    auVar84._0_8_ = auVar38._0_8_ + auVar38._0_8_;
    auVar84._8_8_ = auVar38._8_8_ + auVar38._8_8_;
    uVar58 = SUB84(dVar59,0);
    auVar65._8_4_ = uVar58;
    auVar65._0_8_ = dVar50;
    uVar61 = (undefined4)((ulonglong)dVar59 >> 0x20);
    auVar65._12_4_ = uVar61;
    auVar40._8_4_ = uVar58;
    auVar40._0_8_ = dVar50;
    auVar40._12_4_ = uVar61;
    auVar56._8_4_ = uVar58;
    auVar56._0_8_ = dVar50;
    auVar56._12_4_ = uVar61;
    auVar38 = blendpd(auVar56,auVar84,2);
    auVar66._0_8_ = auVar65._8_8_ * dVar9 - dVar50 * dVar60;
    auVar66._8_8_ = auVar84._0_8_ * dVar10 - auVar40._8_8_ * dVar7;
    auVar41._8_4_ = SUB84(auVar84._8_8_,0);
    auVar41._0_8_ = auVar84._0_8_;
    auVar41._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
    auVar57._0_8_ = auVar38._0_8_ * dVar7 - auVar84._0_8_ * auVar75._0_8_;
    auVar57._8_8_ = auVar38._8_8_ * dVar8 - auVar41._8_8_ * auVar75._8_8_;
    auVar42._8_4_ = SUB84(auVar66._8_8_,0);
    auVar42._0_8_ = auVar66._0_8_;
    auVar42._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
    auVar38 = blendpd(auVar66,auVar57,2);
    local_238.Rotation.ZW.m128d_f64[1]._0_4_ = uVar85;
    local_238.Rotation.ZW.m128d_f64[0] = dVar7;
    local_238.Rotation.ZW.m128d_f64[1]._4_4_ = uVar86;
    local_238.Translation.XY.m128d_f64[1] = 0.0 - (dVar59 * dVar8 + dVar12 + auVar57._0_8_);
    local_238.Translation.XY.m128d_f64[0] = 0.0 - (dVar50 * auVar80._8_8_ + dVar11 + auVar42._8_8_);
    local_238.Translation.ZW.m128d_f64[1] = 0.0;
    local_238.Translation.ZW.m128d_f64[0] =
         0.0 - (auVar84._0_8_ * auVar80._8_8_ + auVar91._0_8_ + auVar38._0_8_);
    local_238.Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  local_1d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1d8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_1d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_1d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_1d8,&local_178,&local_238);
  (this->LocalTransform).Rotation.XY.m128d_f64[0] = local_1d8.Rotation.XY.m128d_f64[0];
  (this->LocalTransform).Rotation.XY.m128d_f64[1] = local_1d8.Rotation.XY.m128d_f64[1];
  (this->LocalTransform).Rotation.ZW.m128d_f64[0] = local_1d8.Rotation.ZW.m128d_f64[0];
  (this->LocalTransform).Rotation.ZW.m128d_f64[1] = local_1d8.Rotation.ZW.m128d_f64[1];
  (this->LocalTransform).Translation.XY.m128d_f64[0] = local_1d8.Translation.XY.m128d_f64[0];
  (this->LocalTransform).Translation.XY.m128d_f64[1] = local_1d8.Translation.XY.m128d_f64[1];
  (this->LocalTransform).Translation.ZW.m128d_f64[0] = local_1d8.Translation.ZW.m128d_f64[0];
  (this->LocalTransform).Translation.ZW.m128d_f64[1] = local_1d8.Translation.ZW.m128d_f64[1];
  (this->LocalTransform).Scale3D.XY.m128d_f64[0] = local_1d8.Scale3D.XY.m128d_f64[0];
  (this->LocalTransform).Scale3D.XY.m128d_f64[1] = local_1d8.Scale3D.XY.m128d_f64[1];
  (this->LocalTransform).Scale3D.ZW.m128d_f64[0] = local_1d8.Scale3D.ZW.m128d_f64[0];
  (this->LocalTransform).Scale3D.ZW.m128d_f64[1] = local_1d8.Scale3D.ZW.m128d_f64[1];
  return;
}

