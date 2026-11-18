// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// ~ICameraLensEffectInterface @ 1472779d0

void __thiscall
ICameraLensEffectInterface::~ICameraLensEffectInterface(ICameraLensEffectInterface *this)

{
  *this = (ICameraLensEffectInterface)&___7ICameraLensEffectInterface__6B_;
  return;
}

// NotifyWillBePooled @ 1472794f0

void __thiscall ICameraLensEffectInterface::NotifyWillBePooled(ICameraLensEffectInterface *this)

{
  return;
}

// _getUObject @ 147279cb0

UObject * __thiscall ICameraLensEffectInterface::_getUObject(ICameraLensEffectInterface *this)

{
  return (UObject *)0x0;
}

// GetAttachedEmitterTransform @ 1476adc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __cdecl
ICameraLensEffectInterface::GetAttachedEmitterTransform
          (TTransform<double> *__return_storage_ptr__,AActor *param_1,TVector<double> *param_2,
          TRotator<double> *param_3,float param_4)

{
  double dVar1;
  UClass *pUVar2;
  longlong *plVar3;
  double *pdVar4;
  TQuat<double> *pTVar5;
  float fVar6;
  float fVar7;
  __m128d _Var8;
  undefined1 auStack_1c8 [32];
  TQuat<double> local_1a8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if (param_1 != (AActor *)0x0) {
    pUVar2 = UCameraLensEffectInterface::StaticClass();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      pdVar4 = (double *)(**(code **)(*plVar3 + 0x20))(plVar3);
      local_128.Rotation.XY.m128d_f64[0] = *pdVar4;
      local_128.Rotation.XY.m128d_f64[1] = pdVar4[1];
      local_128.Rotation.ZW.m128d_f64[0] = pdVar4[2];
      local_128.Rotation.ZW.m128d_f64[1] = pdVar4[3];
      local_1a8.X = pdVar4[4];
      local_128.Translation.XY.m128d_f64[0] = pdVar4[4];
      local_1a8.Y._0_4_ = *(undefined4 *)(pdVar4 + 5);
      local_1a8.Y._4_4_ = *(undefined4 *)((longlong)pdVar4 + 0x2c);
      dVar1 = pdVar4[6];
      local_128.Translation.ZW.m128d_f64[1] = pdVar4[7];
      local_128.Scale3D.XY.m128d_f64[0] = pdVar4[8];
      local_128.Scale3D.XY.m128d_f64[1] = pdVar4[9];
      local_128.Scale3D.ZW.m128d_f64[0] = pdVar4[10];
      local_128.Scale3D.ZW.m128d_f64[1] = pdVar4[0xb];
      local_128.Translation.XY.m128d_f64[1]._0_4_ = local_1a8.Y._0_4_;
      local_128.Translation.XY.m128d_f64[1]._4_4_ = local_1a8.Y._4_4_;
      local_128.Translation.ZW.m128d_f64[0] = dVar1;
      fVar6 = (float)(**(code **)(*plVar3 + 0x28))(plVar3);
      if ((CameraLensEffectCVars::bAttachedEmitterTransformOptimizationEnabled == false) ||
         (__real_322bcc77 <
          (float)((uint)(fVar6 - param_4) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        fVar6 = tanf(fVar6 * __real_3c0efa35);
        fVar7 = tanf(param_4 * __real_3c0efa35);
        local_1a8.X = local_1a8.X * (double)(fVar6 / fVar7);
        local_128.Translation.ZW.m128d_f64[1] = 0.0;
        local_128.Translation.XY.m128d_f64[1]._0_4_ = local_1a8.Y._0_4_;
        local_128.Translation.XY.m128d_f64[1]._4_4_ = local_1a8.Y._4_4_;
        local_128.Translation.XY.m128d_f64[0] = local_1a8.X;
        local_128.Translation.ZW.m128d_f64[0] = dVar1;
      }
      pTVar5 = UE::Math::TRotator<double>::Quaternion(param_3,&local_1a8);
      local_c8.Translation.XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
      local_c8.Translation.XY.m128d_f64[1] = (param_2->field0_0x0)._s_0.Y;
      local_c8.Rotation.ZW.m128d_f64[0] = pTVar5->Z;
      local_c8.Rotation.ZW.m128d_f64[1] = pTVar5->W;
      local_c8.Rotation.XY.m128d_f64[0] = pTVar5->X;
      local_c8.Rotation.XY.m128d_f64[1] = pTVar5->Y;
      local_c8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_c8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_188.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_c8.Translation.ZW.m128d_f64[0] = (param_2->field0_0x0)._s_0.Z;
      local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_188.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_c8.Translation.ZW.m128d_f64[1] = 0.0;
      local_c8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      local_c8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
      local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_188.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_188.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_188.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_188.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_188,&local_128,&local_c8);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_188.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_188.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_188.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_188.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_188.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_188.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_188.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_188.Translation.ZW.m128d_f64[1];
      _Var8.m128d_f64[1] = local_188.Scale3D.ZW.m128d_f64[1];
      _Var8.m128d_f64[0] = local_188.Scale3D.ZW.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_188.Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_188.Scale3D.XY.m128d_f64[1];
      goto LAB_1476adeb3;
    }
  }
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
  _Var8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
LAB_1476adeb3:
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var8.m128d_f64;
  return __return_storage_ptr__;
}

// GetParticleComponents @ 1476b2800

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UFXSystemComponent_*,TSizedDefaultAllocator<32>_> * __thiscall
ICameraLensEffectInterface::GetParticleComponents
          (ICameraLensEffectInterface *this,
          TArray<UFXSystemComponent_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  AActor *this_00;
  UClass *pUVar2;
  
  if (this != (ICameraLensEffectInterface *)0x0) {
    this_00 = (AActor *)(**(code **)((longlong)*this + 8))();
    if (this_00 != (AActor *)0x0) {
      pUVar2 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) goto LAB_1476b2845;
    }
  }
  this_00 = (AActor *)0x0;
LAB_1476b2845:
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  AActor::GetComponents<UFXSystemComponent,TSizedDefaultAllocator<32>_>
            (this_00,__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// GetPrimaryParticleComponent @ 1476b3690

UFXSystemComponent * __thiscall
ICameraLensEffectInterface::GetPrimaryParticleComponent(ICameraLensEffectInterface *this)

{
  code *pcVar1;
  bool bVar2;
  UFXSystemComponent *pUVar3;
  undefined8 *local_18;
  int local_10;
  
  (**(code **)((longlong)*this + 0x10))(this,&local_18);
  if (local_10 == 0) {
    pUVar3 = (UFXSystemComponent *)0x0;
  }
  else {
    if (local_10 < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UFXSystemComponent *)(*pcVar1)();
        return pUVar3;
      }
    }
    pUVar3 = (UFXSystemComponent *)*local_18;
  }
  if (local_18 != (undefined8 *)0x0) {
    FMemory::Free(local_18);
  }
  return pUVar3;
}

// UpdateLocation @ 1476cc9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
ICameraLensEffectInterface::UpdateLocation
          (ICameraLensEffectInterface *this,TVector<double> *param_1,TRotator<double> *param_2,
          float param_3)

{
  int iVar1;
  AActor *this_00;
  UClass *pUVar2;
  TTransform<double> *pTVar3;
  undefined1 auStackY_c8 [32];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (this != (ICameraLensEffectInterface *)0x0) {
    this_00 = (AActor *)(**(code **)((longlong)*this + 8))();
    if (this_00 != (AActor *)0x0) {
      pUVar2 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) goto LAB_1476cca06;
    }
  }
  this_00 = (AActor *)0x0;
LAB_1476cca06:
  if (this_00 != (AActor *)0x0) {
    pTVar3 = GetAttachedEmitterTransform(&local_98,this_00,param_1,param_2,param_3);
    AActor::SetActorTransform(this_00,pTVar3,false,(FHitResult *)0x0,None);
  }
  return;
}

// execGetParticleComponents @ 1476d0c30

void __cdecl
ICameraLensEffectInterface::execGetParticleComponents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x10))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execGetPrimaryParticleComponent @ 1476d0cc0

void __cdecl
ICameraLensEffectInterface::execGetPrimaryParticleComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x18))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

