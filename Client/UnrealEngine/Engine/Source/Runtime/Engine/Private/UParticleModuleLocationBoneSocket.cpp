// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 35

// StaticClass @ 147304b90

UClass * __cdecl UParticleModuleLocationBoneSocket::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationBoneSocket.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationBoneSocket",
               &Z_Registration_Info_UClass_UParticleModuleLocationBoneSocket.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationBoneSocket,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLocationBoneSocket>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationBoneSocket>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationBoneSocket.InnerSingleton;
}

// UParticleModuleLocationBoneSocket @ 14730a560

UParticleModuleLocationBoneSocket * __thiscall
UParticleModuleLocationBoneSocket::UParticleModuleLocationBoneSocket
          (UParticleModuleLocationBoneSocket *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLocationBoneSocket__6B_;
  (this->SourceLocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceLocations).ArrayNum = 0;
  (this->SourceLocations).ArrayMax = 0;
  (this->SkelMeshActorParamName).ComparisonIndex = 0;
  (this->SkelMeshActorParamName).Number = 0;
  return this;
}

// ~UParticleModuleLocationBoneSocket @ 14730b6c0

void __thiscall
UParticleModuleLocationBoneSocket::~UParticleModuleLocationBoneSocket
          (UParticleModuleLocationBoneSocket *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleLocationBoneSocket__6B_;
  pFVar1 = (this->SourceLocations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleLocationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// CanTickInAnyThread @ 14730d810

bool __thiscall
UParticleModuleLocationBoneSocket::CanTickInAnyThread(UParticleModuleLocationBoneSocket *this)

{
  return true;
}

// GetPrivateStaticClass @ 14730de20

UClass * __cdecl UParticleModuleLocationBoneSocket::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationBoneSocket.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationBoneSocket",
               &Z_Registration_Info_UClass_UParticleModuleLocationBoneSocket.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationBoneSocket,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLocationBoneSocket>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationBoneSocket>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationBoneSocket.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleLocationBoneSocket @ 14730fd80

void __cdecl
UParticleModuleLocationBoneSocket::StaticRegisterNativesUParticleModuleLocationBoneSocket(void)

{
  return;
}

// TouchesMeshRotation @ 147310000

bool __thiscall
UParticleModuleLocationBoneSocket::TouchesMeshRotation(UParticleModuleLocationBoneSocket *this)

{
  return true;
}

// UParticleModuleLocationBoneSocket @ 14815ca30

UParticleModuleLocationBoneSocket * __thiscall
UParticleModuleLocationBoneSocket::UParticleModuleLocationBoneSocket
          (UParticleModuleLocationBoneSocket *this,FObjectInitializer *param_1)

{
  FConstructorStatics FVar1;
  ulonglong uVar2;
  
  UObject::UObject((UObject *)this,param_1);
  uVar2 = (ulonglong)_tls_index;
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleLocationBoneSocket__6B_;
  (this->SourceLocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceLocations).ArrayNum = 0;
  (this->SourceLocations).ArrayMax = 0;
  (this->SkelMeshActorParamName).ComparisonIndex = 0;
  (this->SkelMeshActorParamName).Number = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::ConstructorStatics.NAME_BoneSocketActor,L"BoneSocketActor");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x4f;
  (this->SourceType).Value = '\x01';
  FVar1 = ::ConstructorStatics;
  this->bOrientMeshEmitters = 1;
  this->SkelMeshActorParamName = FVar1.NAME_BoneSocketActor;
  this->SourceIndexMode = Direct;
  this->NumPreSelectedIndices = 10;
  this->InheritVelocityScale = 1.0;
  return this;
}

// AutoPopulateInstanceProperties @ 148166d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleModuleLocationBoneSocket::AutoPopulateInstanceProperties
          (UParticleModuleLocationBoneSocket *this,UParticleSystemComponent *param_1)

{
  int *piVar1;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                         ,0x719,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = 0;
  pTVar2 = &param_1->InstanceParameters;
  if (0 < (param_1->InstanceParameters).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (param_1->InstanceParameters).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(FName *)((pTVar2->AllocatorInstance).Data + lVar8) == this->SkelMeshActorParamName) {
        return;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0xe0;
    } while ((int)uVar7 < (param_1->InstanceParameters).ArrayNum);
  }
  piVar1 = &(param_1->InstanceParameters).ArrayMax;
  uVar7 = (param_1->InstanceParameters).ArrayNum;
  if (uVar7 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10e0,&pTVar2->AllocatorInstance,piVar1);
    (param_1->InstanceParameters).ArrayNum = uVar7;
  }
  lVar8 = (longlong)(int)uVar7 * 0xe0;
  (param_1->InstanceParameters).ArrayNum = uVar7 + 1;
  memset((pTVar2->AllocatorInstance).Data + lVar8,0,0xe0);
  FVar3 = this->SkelMeshActorParamName;
  uVar9 = ~uVar7 >> 0x1f;
  uVar6 = 0;
  if ((int)uVar7 < (param_1->InstanceParameters).ArrayNum) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(FName *)((pTVar2->AllocatorInstance).Data + lVar8) = FVar3;
  uVar6 = 0;
  if ((int)uVar7 < (param_1->InstanceParameters).ArrayNum) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (pTVar2->AllocatorInstance).Data[lVar8 + 8] = (FScriptContainerElement)0x6;
  uVar6 = 0;
  if ((int)uVar7 < (param_1->InstanceParameters).ArrayNum) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar7 * 0xe0 + 0x50) = 0;
  return;
}

// FinalUpdate @ 148173650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UParticleModuleLocationBoneSocket::FinalUpdate
          (UParticleModuleLocationBoneSocket *this,FUpdateContext *param_1)

{
  int iVar1;
  FParticleEmitterInstance *this_00;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FModuleLocationBoneSocketInstancePayload *this_01;
  USkeletalMeshComponent *this_02;
  USkeletalMesh *pUVar7;
  TTransform<double> *pTVar8;
  FRandomStream *pFVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStackY_128 [32];
  USkeletalMeshSocket *local_e0;
  FUpdateContext *local_d8;
  FParticleEmitterInstance *local_d0;
  TVector<double> local_c8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  this_00 = (FParticleEmitterInstance *)param_1->_padding_;
  local_d8 = param_1;
  local_d0 = this_00;
  this_01 = (FModuleLocationBoneSocketInstancePayload *)
            FParticleEmitterInstance::GetModuleInstanceData(this_00,(UParticleModule *)this);
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
  if (bVar4) {
    this_02 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
    if ((this_00->ParticleData != (uchar *)0x0) && ((this->SourceType).Value == '\x01')) {
      lVar11 = param_1->_padding_;
      bVar4 = false;
      lVar2 = *(longlong *)(lVar11 + 0x168);
      iVar1 = *(int *)(lVar11 + 0x188);
      lVar3 = *(longlong *)(lVar11 + 0x170);
      iVar10 = *(int *)(lVar11 + 0x18c) + -1;
      lVar11 = (longlong)iVar10;
      if (-1 < iVar10) {
        iVar10 = param_1->Offset;
        do {
          lVar12 = (ulonglong)((uint)*(ushort *)(lVar3 + lVar11 * 2) * iVar1) + lVar2;
          if (((((*(uint *)(lVar12 + 0x6c) & 0x4000000) == 0) &&
               (this_02 != (USkeletalMeshComponent *)0x0)) &&
              (pUVar7 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_02),
              pUVar7 != (USkeletalMesh *)0x0)) &&
             ((bVar5 = GetSocketInfoForSourceIndex
                                 (this,this_01,this_02,*(int *)(iVar10 + lVar12),&local_e0,&local_c8
                                 ), bVar5 &&
              (iVar6 = USkinnedMeshComponent::GetBoneIndex
                                 ((USkinnedMeshComponent *)this_02,local_e0->BoneName), iVar6 != -1)
              ))) {
            bVar5 = USkinnedMeshComponent::IsBoneHidden((USkinnedMeshComponent *)this_02,iVar6);
            if (!bVar5) {
              pTVar8 = USkinnedMeshComponent::GetBoneTransform
                                 ((USkinnedMeshComponent *)this_02,&local_a8,iVar6);
              local_c8.field0_0x0._s_0.Z = (pTVar8->Scale3D).ZW.m128d_f64[0];
              if ((((pTVar8->Scale3D).XY.m128d_f64[0] !=
                    UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) ||
                  ((pTVar8->Scale3D).XY.m128d_f64[1] !=
                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) ||
                 (local_c8.field0_0x0._s_0.Z !=
                  UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) goto LAB_14817381d;
            }
            *(undefined4 *)(lVar12 + 0x90) = 0x3f8ccccd;
            bVar4 = true;
          }
LAB_14817381d:
          param_1 = local_d8;
          lVar11 = lVar11 + -1;
        } while (-1 < lVar11);
        if (bVar4) {
          (**(code **)(local_d0->_padding_ + 0xe0))();
        }
      }
    }
    pFVar9 = &FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                        ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this)->
              RandomStream;
    if (pFVar9 == (FRandomStream *)0x0) {
      pFVar9 = (FRandomStream *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
    }
    RegeneratePreSelectedIndices(this,this_01,this_02,pFVar9);
  }
  return;
}

// GetBoneInfoForSourceIndex @ 148178590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UParticleModuleLocationBoneSocket::GetBoneInfoForSourceIndex
          (UParticleModuleLocationBoneSocket *this,FModuleLocationBoneSocketInstancePayload *param_1
          ,USkeletalMeshComponent *param_2,int param_3,TMatrix<double> *param_4,
          TVector<double> *param_5)

{
  double dVar1;
  EBoneSocketSourceIndexMode EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  TMatrix<double> *pTVar14;
  longlong lVar15;
  undefined1 auStackY_158 [32];
  USkeletalMeshSocket *local_128;
  TVector<double> *local_120;
  TVector<double>_u_0 local_118;
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_118._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_118._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_118._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_120 = param_5;
  if ((this->SourceType).Value == '\x01') {
    local_128 = (USkeletalMeshSocket *)0x0;
    bVar9 = GetSocketInfoForSourceIndex
                      (this,param_1,param_2,param_3,&local_128,(TVector<double> *)&local_118._s_0);
    if (bVar9) {
      USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)param_2,local_128->BoneName);
    }
  }
  else {
    EVar2 = this->SourceIndexMode;
    if (EVar2 == SourceLocations) {
      uVar11 = 0;
      if (param_3 < (this->SourceLocations).ArrayNum) {
        uVar11 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      lVar15 = (longlong)param_3 * 0x20;
      iVar12 = USkinnedMeshComponent::GetBoneIndex
                         ((USkinnedMeshComponent *)param_2,
                          *(FName *)((this->SourceLocations).AllocatorInstance.Data + lVar15));
      uVar11 = 0;
      if (param_3 < (this->SourceLocations).ArrayNum) {
        uVar11 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      pFVar3 = (this->SourceLocations).AllocatorInstance.Data;
      dVar7 = *(double *)(pFVar3 + lVar15 + 8) + (this->UniversalOffset).field0_0x0._s_0.X;
      dVar5 = *(double *)(pFVar3 + lVar15 + 0x10) + (this->UniversalOffset).field0_0x0._s_0.Y;
      dVar1 = *(double *)(pFVar3 + lVar15 + 0x18) + (this->UniversalOffset).field0_0x0._s_0.Z;
      param_5 = local_120;
    }
    else if (EVar2 == PreSelectedIndices) {
      piVar13 = TPreallocatedArrayProxy<int>::operator[]
                          (&param_1->PreSelectedBoneSocketIndices,param_3);
      dVar7 = (this->UniversalOffset).field0_0x0._s_0.X;
      dVar5 = *(double *)((longlong)&(this->UniversalOffset).field0_0x0 + 8);
      dVar1 = (this->UniversalOffset).field0_0x0._s_0.Z;
      iVar12 = *piVar13;
    }
    else {
      if (EVar2 != Direct) {
        return false;
      }
      dVar7 = (this->UniversalOffset).field0_0x0._s_0.X;
      dVar5 = *(double *)((longlong)&(this->UniversalOffset).field0_0x0 + 8);
      dVar1 = (this->UniversalOffset).field0_0x0._s_0.Z;
      iVar12 = param_3;
    }
    if (iVar12 != -1) {
      pTVar14 = USkinnedMeshComponent::GetBoneMatrix
                          ((USkinnedMeshComponent *)param_2,&local_f8,iVar12);
      dVar8 = pTVar14->M[0][1];
      param_4->M[0][0] = pTVar14->M[0][0];
      param_4->M[0][1] = dVar8;
      dVar8 = pTVar14->M[0][3];
      param_4->M[0][2] = pTVar14->M[0][2];
      param_4->M[0][3] = dVar8;
      dVar8 = pTVar14->M[1][1];
      param_4->M[1][0] = pTVar14->M[1][0];
      param_4->M[1][1] = dVar8;
      dVar8 = pTVar14->M[1][3];
      param_4->M[1][2] = pTVar14->M[1][2];
      param_4->M[1][3] = dVar8;
      dVar8 = pTVar14->M[2][1];
      param_4->M[2][0] = pTVar14->M[2][0];
      param_4->M[2][1] = dVar8;
      dVar8 = pTVar14->M[2][3];
      param_4->M[2][2] = pTVar14->M[2][2];
      param_4->M[2][3] = dVar8;
      dVar8 = pTVar14->M[3][1];
      param_4->M[3][0] = pTVar14->M[3][0];
      param_4->M[3][1] = dVar8;
      dVar8 = pTVar14->M[3][3];
      param_4->M[3][2] = pTVar14->M[3][2];
      param_4->M[3][3] = dVar8;
      auVar6._8_4_ = SUB84(dVar5,0);
      auVar6._0_8_ = dVar7;
      auVar6._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined1 (*) [16])&param_5->field0_0x0 = auVar6;
      *(double *)((longlong)&param_5->field0_0x0 + 0x10) = dVar1;
      return true;
    }
  }
  return false;
}

// GetMaxSourceIndex @ 14817a6c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UParticleModuleLocationBoneSocket::GetMaxSourceIndex
          (UParticleModuleLocationBoneSocket *this,FModuleLocationBoneSocketInstancePayload *param_1
          ,USkeletalMeshComponent *param_2)

{
  EBoneSocketSourceIndexMode EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  USkeletalMesh *pUVar5;
  
  if (param_1 == (FModuleLocationBoneSocketInstancePayload *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Payload",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                       ,0x78d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  EVar1 = this->SourceIndexMode;
  if (EVar1 == SourceLocations) {
    return (this->SourceLocations).ArrayNum;
  }
  if (EVar1 == PreSelectedIndices) {
    return this->NumPreSelectedIndices;
  }
  if (EVar1 == Direct) {
    if ((this->SourceType).Value != '\x01') {
      iVar4 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)param_2);
      return iVar4;
    }
    pUVar5 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_2);
    if (pUVar5 != (USkeletalMesh *)0x0) {
      pUVar5 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_2);
      iVar4 = USkeletalMesh::NumSockets(pUVar5);
      return iVar4;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7003914095707555740>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                       ,0x79c,"SourceComponent->GetSkeletalMeshAsset()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return 0;
}

// GetParticleLocation @ 14817b630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UParticleModuleLocationBoneSocket::GetParticleLocation
          (UParticleModuleLocationBoneSocket *this,FModuleLocationBoneSocketInstancePayload *param_1
          ,FParticleEmitterInstance *param_2,USkeletalMeshComponent *param_3,int param_4,
          TVector<double> *param_5,TQuat<double> *param_6)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  USkeletalMesh *pUVar11;
  TQuat<double> *pTVar12;
  double *pdVar13;
  TMatrix<double> *this_00;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auStackY_398 [32];
  USkeletalMeshSocket *local_368;
  TVector<double>_u_0 local_360;
  TRotator<double> local_348;
  TVector<double> local_330;
  TQuat<double> local_318;
  TQuat<double> local_2f8;
  TMatrix<double> local_2d8;
  TMatrix<double> local_258;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_398;
  if ((param_3 == (USkeletalMeshComponent *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSkelMeshComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                         ,0x84e,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    uVar10 = (*pcVar1)();
    return (bool)uVar10;
  }
  if ((this->SourceType).Value == '\x01') {
    pUVar11 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_3);
    if ((pUVar11 == (USkeletalMesh *)0x0) ||
       (bVar9 = GetSocketInfoForSourceIndex(this,param_1,param_3,param_4,&local_368,&local_330),
       !bVar9)) {
      return false;
    }
    local_348.Roll = 0.0;
    local_348.Pitch = 0.0;
    local_348.Yaw = 0.0;
    bVar9 = USkeletalMeshSocket::GetSocketMatrixWithOffset
                      (local_368,&local_258,param_3,&local_330,&local_348);
    if (!bVar9) {
      return false;
    }
    (param_5->field0_0x0)._s_0.X = local_258.M[3][0];
    (param_5->field0_0x0)._s_0.Y = local_258.M[3][1];
    (param_5->field0_0x0)._s_0.Z = local_258.M[3][2];
    if (param_6 == (TQuat<double> *)0x0) goto LAB_14817b848;
    UE::Math::TMatrix<double>::RemoveScaling(&local_258,__real_3e45798ee0000000);
    pTVar12 = &local_318;
    this_00 = &local_258;
  }
  else {
    bVar9 = GetBoneInfoForSourceIndex
                      (this,param_1,param_3,param_4,&local_158,(TVector<double> *)&local_360._s_0);
    if (!bVar9) {
      return false;
    }
    local_2d8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
    local_2d8.M[1][1] = _UNK_15061cbc8;
    local_2d8.M[0][2] = 0.0;
    local_2d8.M[0][3] = 0.0;
    local_2d8.M[1][2] = 0.0;
    local_2d8.M[1][3] = 0.0;
    local_2d8.M[2][0] = 0.0;
    local_2d8.M[2][1] = 0.0;
    local_2d8.M[3][0] = local_360._s_0.X;
    local_2d8.M[3][1] = local_360._s_0.Y;
    local_2d8.M[3][2] = local_360._s_0.Z;
    local_2d8.M[3][3] = __real_3ff0000000000000;
    local_2d8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
    local_2d8.M[0][1] = _UNK_150689518;
    local_2d8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
    local_2d8.M[2][3] = _UNK_150689518;
    VectorMatrixMultiply(&local_1d8,&local_2d8,&local_158);
    (param_5->field0_0x0)._s_0.X = local_1d8.M[3][0];
    (param_5->field0_0x0)._s_0.Y = local_1d8.M[3][1];
    (param_5->field0_0x0)._s_0.Z = local_1d8.M[3][2];
    if (param_6 == (TQuat<double> *)0x0) goto LAB_14817b848;
    UE::Math::TMatrix<double>::RemoveScaling(&local_1d8,__real_3e45798ee0000000);
    pTVar12 = &local_2f8;
    this_00 = &local_1d8;
  }
  pTVar12 = UE::Math::TMatrix<double>::ToQuat(this_00,pTVar12);
  dVar2 = pTVar12->Y;
  param_6->X = pTVar12->X;
  param_6->Y = dVar2;
  dVar2 = pTVar12->W;
  param_6->Z = pTVar12->Z;
  param_6->W = dVar2;
LAB_14817b848:
  if (((param_2->CurrentLODLevel->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace != 0) {
    pdVar13 = (double *)(**(code **)((longlong)*param_2->Component + 0x10))();
    dVar17 = (param_5->field0_0x0)._s_0.Z - pdVar13[6];
    dVar6 = (param_5->field0_0x0)._s_0.X - pdVar13[4];
    dVar7 = (param_5->field0_0x0)._s_0.Y - pdVar13[5];
    uVar36 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar31 = *pdVar13 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar32 = pdVar13[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar39._8_4_ = SUB84(dVar7,0);
    auVar39._0_8_ = dVar6;
    auVar39._12_4_ = uVar36;
    dVar2 = pdVar13[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar3 = pdVar13[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar25._8_4_ = SUB84(dVar32,0);
    auVar25._0_8_ = dVar31;
    uVar33 = (undefined4)((ulonglong)dVar32 >> 0x20);
    auVar25._12_4_ = uVar33;
    auVar27._8_4_ = SUB84(dVar32,0);
    auVar27._0_8_ = dVar31;
    auVar27._12_4_ = uVar33;
    auVar23._8_4_ = SUB84(dVar3,0);
    auVar23._0_8_ = dVar2;
    auVar23._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    auVar28 = blendpd(auVar27,auVar23,2);
    auVar22._8_4_ = SUB84(dVar7,0);
    auVar22._0_8_ = dVar6;
    auVar22._12_4_ = uVar36;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar17;
    auVar23 = blendpd(auVar22,auVar8,2);
    dVar26 = auVar25._8_8_;
    auVar18._8_4_ = SUB84(dVar2,0);
    auVar18._0_8_ = dVar26;
    auVar18._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    auVar40._0_8_ = auVar39._8_8_ * dVar31 - dVar26 * dVar6;
    auVar40._8_8_ = dVar17 * dVar32 - auVar18._8_8_ * dVar7;
    auVar24._0_8_ = auVar23._0_8_ * dVar2 - auVar28._0_8_ * dVar17;
    auVar24._8_8_ = auVar23._8_8_ * dVar3 - auVar28._8_8_ * 0.0;
    dVar4 = auVar40._8_8_ + auVar40._8_8_;
    dVar5 = auVar24._0_8_ + auVar24._0_8_;
    uVar33 = SUB84(dVar5,0);
    uVar36 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar23 = blendpd(auVar40,auVar24,2);
    auVar37._8_4_ = uVar33;
    auVar37._0_8_ = dVar4;
    auVar37._12_4_ = uVar36;
    auVar19._8_4_ = uVar33;
    auVar19._0_8_ = dVar4;
    auVar19._12_4_ = uVar36;
    auVar34._8_4_ = uVar33;
    auVar34._0_8_ = dVar4;
    auVar34._12_4_ = uVar36;
    auVar41._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar41._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    auVar23 = blendpd(auVar34,auVar41,2);
    auVar38._0_8_ = auVar37._8_8_ * dVar31 - dVar4 * dVar26;
    auVar38._8_8_ = auVar41._0_8_ * dVar32 - auVar19._8_8_ * dVar2;
    auVar20._8_4_ = SUB84(auVar41._8_8_,0);
    auVar20._0_8_ = auVar41._0_8_;
    auVar20._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
    auVar35._0_8_ = auVar23._0_8_ * dVar2 - auVar41._0_8_ * auVar28._0_8_;
    auVar35._8_8_ = auVar23._8_8_ * dVar3 - auVar20._8_8_ * auVar28._8_8_;
    auVar23 = *(undefined1 (*) [16])(pdVar13 + 10);
    auVar29._0_8_ =
         (double)CONCAT44(*(uint *)((longlong)pdVar13 + 0x44) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          *(uint *)(pdVar13 + 8) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar29._8_4_ = *(uint *)(pdVar13 + 9) & _UNK_15061cc88;
    auVar29._12_4_ = *(uint *)((longlong)pdVar13 + 0x4c) & _UNK_15061cc8c;
    lVar14 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar23._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar23._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                    *(undefined1 (*) [16])(pdVar13 + 8));
    lVar15 = -(ulonglong)(auVar29._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar16 = -(ulonglong)(auVar29._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar21._8_4_ = SUB84(auVar38._8_8_,0);
    auVar21._0_8_ = auVar38._0_8_;
    auVar21._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
    auVar30._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar15 >> 0x20) & auVar28._4_4_,
                          ~(uint)lVar15 & auVar28._0_4_);
    auVar30._8_4_ = ~(uint)lVar16 & auVar28._8_4_;
    auVar30._12_4_ = ~(uint)((ulonglong)lVar16 >> 0x20) & auVar28._12_4_;
    auVar28._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar28._0_8_ = auVar23._0_8_;
    auVar28._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar28);
    auVar28 = blendpd(auVar38,auVar35,2);
    (param_5->field0_0x0)._s_0.X = auVar30._0_8_ * (dVar4 * dVar3 + dVar6 + auVar21._8_8_);
    (param_5->field0_0x0)._s_0.Y = auVar30._8_8_ * (dVar5 * dVar3 + dVar7 + auVar35._0_8_);
    (param_5->field0_0x0)._s_0.Z =
         (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar23._4_4_,
                          ~(uint)lVar14 & auVar23._0_4_) *
         (auVar41._0_8_ * dVar3 + dVar17 + auVar28._0_8_);
  }
  return true;
}

// GetSkeletalMeshComponentSource @ 14817d680

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
UParticleModuleLocationBoneSocket::GetSkeletalMeshComponentSource
          (UParticleModuleLocationBoneSocket *this,FContext *param_1,
          FModuleLocationBoneSocketInstancePayload *param_2)

{
  int iVar1;
  bool bVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  longlong *plVar5;
  UClass *pUVar6;
  AActor *pAVar7;
  USkeletalMeshComponent *pUVar8;
  FRandomStream *pFVar9;
  USkeletalMeshComponent *pUVar10;
  USkeletalMeshComponent *pUVar11;
  bool bVar12;
  FWeakObjectPtr local_res10;
  AActor *local_res20;
  FWeakObjectPtr local_48;
  USkeletalMeshComponent *local_40;
  
  if (param_1->Owner == (FParticleEmitterInstance *)0x0) {
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_48);
    (param_2->SourceComponent).WeakPtr = local_res10;
    return;
  }
  local_res10 = (FWeakObjectPtr)param_1;
  plVar5 = (longlong *)(**(code **)((longlong)*param_1->Owner->Component + 0x138))();
  pUVar10 = (USkeletalMeshComponent *)0x0;
  if (plVar5 == (longlong *)0x0) {
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_48);
    (param_2->SourceComponent).WeakPtr = local_res10;
    return;
  }
  local_res20 = (AActor *)0x0;
  (**(code **)(*plVar5 + 0xb90))(plVar5,this->SkelMeshActorParamName,&local_res20);
  pUVar11 = (USkeletalMeshComponent *)plVar5[0x1a];
  if (pUVar11 == (USkeletalMeshComponent *)0x0) {
LAB_14817d788:
    pAVar7 = (AActor *)FWeakObjectPtr::Get(&(param_2->CachedActor).WeakPtr);
    bVar12 = local_res20 != pAVar7;
    pUVar11 = pUVar10;
  }
  else {
    pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_14817d788;
    pAVar7 = (AActor *)FWeakObjectPtr::Get(&(param_2->CachedActor).WeakPtr);
    bVar12 = local_res20 != pAVar7;
    pUVar8 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
    if (pUVar11 != pUVar8) {
      bVar2 = true;
      goto LAB_14817d7a2;
    }
  }
  bVar2 = false;
LAB_14817d7a2:
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_2);
  if (((!bVar4) || (bVar12)) || (bVar2)) {
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    local_40 = (USkeletalMeshComponent *)0x0;
    FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_40);
    (param_2->SourceComponent).WeakPtr = local_48;
    local_40 = (USkeletalMeshComponent *)local_res20;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FWeakObjectPtr::operator=(&(param_2->CachedActor).WeakPtr,(FObjectPtr)&local_40);
    pAVar7 = local_res20;
    if (local_res20 != (AActor *)0x0) {
      pUVar6 = Z_Construct_UClass_ASkeletalMeshActor_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if (((*(int *)(pAVar7->_padding_ + 0x38) < iVar1) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar6->_padding_)) || (pAVar7 == (AActor *)0x0)) {
        if ((local_res20 != (AActor *)0x0) &&
           (pUVar8 = AActor::FindComponentByClass<USkeletalMeshComponent>(local_res20),
           pUVar10 = (USkeletalMeshComponent *)0x0, pUVar8 != (USkeletalMeshComponent *)0x0)) {
          pUVar10 = pUVar8;
        }
      }
      else {
        pUVar10 = (USkeletalMeshComponent *)pAVar7[1]._padding_;
      }
    }
    if ((pUVar11 != (USkeletalMeshComponent *)0x0) || (pUVar10 != (USkeletalMeshComponent *)0x0)) {
      if (pUVar11 == (USkeletalMeshComponent *)0x0) {
        pUVar11 = pUVar10;
      }
      local_40 = pUVar11;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)param_2,(FObjectPtr)&local_40);
      FVar3 = local_res10;
      pFVar9 = &FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                          (*(FParticleEmitterInstance **)local_res10,(UParticleModule *)this)->
                RandomStream;
      if (pFVar9 == (FRandomStream *)0x0) {
        pFVar9 = (FRandomStream *)
                 (**(code **)((longlong)*(*(FParticleEmitterInstance **)FVar3)->Component + 0x120))
                           ();
      }
      RegeneratePreSelectedIndices(this,param_2,pUVar11,pFVar9);
    }
  }
  return;
}

// GetSocketInfoForSourceIndex @ 14817dee0

bool __thiscall
UParticleModuleLocationBoneSocket::GetSocketInfoForSourceIndex
          (UParticleModuleLocationBoneSocket *this,FModuleLocationBoneSocketInstancePayload *param_1
          ,USkeletalMeshComponent *param_2,int param_3,USkeletalMeshSocket **param_4,
          TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  EBoneSocketSourceIndexMode EVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  USkeletalMesh *pUVar10;
  USkeletalMeshSocket *pUVar11;
  uint *puVar12;
  uint uVar13;
  longlong lVar14;
  UParticleModuleLocationBoneSocket *local_res8 [2];
  USkeletalMeshComponent *local_res18;
  uint local_res20 [2];
  UParticleModuleLocationBoneSocket *local_88;
  USkeletalMeshComponent **local_80;
  UParticleModuleLocationBoneSocket *local_78;
  uint *local_70;
  UParticleModuleLocationBoneSocket *local_68;
  uint *local_60;
  UParticleModuleLocationBoneSocket *local_58;
  uint *local_50;
  UParticleModuleLocationBoneSocket *local_48;
  
  local_res18 = param_2;
  local_res20[0] = param_3;
  if ((((this->SourceType).Value != '\x01') &&
      (local_res8[0] = this,
      bVar8 = `UParticleModuleLocationBoneSocket::GetSocketInfoForSourceIndex'::__l3::<lambda_1>::
              operator()(local_res8), !bVar8)) ||
     ((local_res18 == (USkeletalMeshComponent *)0x0 &&
      (local_88 = this,
      bVar8 = `UParticleModuleLocationBoneSocket::GetSocketInfoForSourceIndex'::__l3::<lambda_2>::
              operator()(&local_88), !bVar8)))) {
    return false;
  }
  pUVar10 = USkeletalMeshComponent::GetSkeletalMeshAsset(local_res18);
  if (pUVar10 == (USkeletalMesh *)0x0) {
    local_80 = &local_res18;
    local_78 = this;
    bVar8 = `UParticleModuleLocationBoneSocket::GetSocketInfoForSourceIndex'::__l3::<lambda_3>::
            operator()(&local_80);
    if (!bVar8) {
      return false;
    }
  }
  EVar5 = this->SourceIndexMode;
  if (EVar5 == SourceLocations) {
    if (((int)local_res20[0] < 0) || ((this->SourceLocations).ArrayNum <= (int)local_res20[0])) {
      local_50 = local_res20;
      local_48 = this;
      bVar8 = `UParticleModuleLocationBoneSocket::GetSocketInfoForSourceIndex'::__l9::<lambda_4>::
              operator()(&local_50);
      if (!bVar8) {
        return false;
      }
    }
    pUVar10 = USkeletalMeshComponent::GetSkeletalMeshAsset(local_res18);
    lVar14 = (longlong)(int)local_res20[0];
    pcVar6 = *(code **)(pUVar10->_padding_ + 0x3f0);
    uVar13 = 0;
    if ((int)local_res20[0] < (this->SourceLocations).ArrayNum) {
      uVar13 = ~local_res20[0] >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    pUVar11 = (USkeletalMeshSocket *)
              (*pcVar6)(pUVar10,*(undefined8 *)
                                 ((this->SourceLocations).AllocatorInstance.Data + lVar14 * 0x20));
    lVar14 = (longlong)(int)local_res20[0];
    *param_4 = pUVar11;
    uVar13 = 0;
    if ((int)local_res20[0] < (this->SourceLocations).ArrayNum) {
      uVar13 = ~local_res20[0] >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    pFVar7 = (this->SourceLocations).AllocatorInstance.Data;
    lVar14 = lVar14 * 0x20;
    dVar1 = *(double *)(pFVar7 + lVar14 + 0x10);
    dVar2 = *(double *)(pFVar7 + lVar14 + 0x18);
    dVar3 = (this->UniversalOffset).field0_0x0._s_0.Y;
    dVar4 = (this->UniversalOffset).field0_0x0._s_0.Z;
    (param_5->field0_0x0)._s_0.X =
         (this->UniversalOffset).field0_0x0._s_0.X + *(double *)(pFVar7 + lVar14 + 8);
    (param_5->field0_0x0)._s_0.Y = dVar1 + dVar3;
    (param_5->field0_0x0)._s_0.Z = dVar2 + dVar4;
  }
  else {
    if (EVar5 == PreSelectedIndices) {
      if (param_1 == (FModuleLocationBoneSocketInstancePayload *)0x0) {
        local_70 = local_res20;
        local_68 = this;
        bVar8 = `UParticleModuleLocationBoneSocket::GetSocketInfoForSourceIndex'::__l15::<lambda_5>
                ::operator()(&local_70);
        if (!bVar8) {
          return false;
        }
      }
      if (((int)local_res20[0] < 0) ||
         ((param_1->PreSelectedBoneSocketIndices).ArrayMax <= (int)local_res20[0])) {
        local_60 = local_res20;
        local_58 = this;
        bVar8 = `UParticleModuleLocationBoneSocket::GetSocketInfoForSourceIndex'::__l15::<lambda_6>
                ::operator()(&local_60);
        if (!bVar8) {
          return false;
        }
      }
      pUVar10 = USkeletalMeshComponent::GetSkeletalMeshAsset(local_res18);
      puVar12 = (uint *)TPreallocatedArrayProxy<int>::operator[]
                                  (&param_1->PreSelectedBoneSocketIndices,local_res20[0]);
      uVar13 = *puVar12;
    }
    else {
      if (EVar5 != Direct) goto LAB_14817e175;
      pUVar10 = USkeletalMeshComponent::GetSkeletalMeshAsset(local_res18);
      uVar13 = local_res20[0];
    }
    pUVar11 = USkeletalMesh::GetSocketByIndex(pUVar10,uVar13);
    *param_4 = pUVar11;
    dVar1 = (this->UniversalOffset).field0_0x0._s_0.Y;
    (param_5->field0_0x0)._s_0.X = (this->UniversalOffset).field0_0x0._s_0.X;
    (param_5->field0_0x0)._s_0.Y = dVar1;
    (param_5->field0_0x0)._s_0.Z = (this->UniversalOffset).field0_0x0._s_0.Z;
  }
LAB_14817e175:
  return *param_4 != (USkeletalMeshSocket *)0x0;
}

// PostLoad @ 14818c400

void __thiscall UParticleModuleLocationBoneSocket::PostLoad(UParticleModuleLocationBoneSocket *this)

{
  UObject::PostLoad((UObject *)this);
  if (0 < (this->SourceLocations).ArrayNum) {
    this->SourceIndexMode = SourceLocations;
    return;
  }
  if (this->bUpdatePositionEachFrame == 0 && this->bInheritBoneVelocity == 1) {
    this->SourceIndexMode = PreSelectedIndices;
    return;
  }
  this->SourceIndexMode = Direct;
  return;
}

// PrepPerInstanceBlock @ 14818d8f0

uint __thiscall
UParticleModuleLocationBoneSocket::PrepPerInstanceBlock
          (UParticleModuleLocationBoneSocket *this,FParticleEmitterInstance *param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_14;
  
  if (param_2 != (void *)0x0) {
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 8) = 0;
    *(undefined8 *)((longlong)param_2 + 0x10) = 0;
    *(undefined8 *)((longlong)param_2 + 0x18) = 0;
    *(undefined8 *)((longlong)param_2 + 0x20) = 0;
    *(undefined8 *)((longlong)param_2 + 0x28) = 0;
    *(undefined8 *)((longlong)param_2 + 0x30) = 0;
    *(undefined8 *)((longlong)param_2 + 0x38) = 0;
    *(undefined8 *)((longlong)param_2 + 0x40) = 0;
    iVar1 = this->NumPreSelectedIndices;
    if (this->NumPreSelectedIndices < (this->SourceLocations).ArrayNum) {
      iVar1 = (this->SourceLocations).ArrayNum;
    }
    if (0 < iVar1) {
      uVar2 = (iVar1 + 6) * 0xc;
      *(ulonglong *)((longlong)param_2 + 0x18) = CONCAT44(uStack_14,iVar1);
      *(longlong *)((longlong)param_2 + 0x20) = (longlong)param_2 + 0x48;
      *(ulonglong *)((longlong)param_2 + 0x28) = CONCAT44(uStack_14,iVar1);
      *(ulonglong *)((longlong)param_2 + 0x30) = (ulonglong)uVar2 + (longlong)param_2;
      *(ulonglong *)((longlong)param_2 + 0x38) = CONCAT44(uStack_14,iVar1);
      *(ulonglong *)((longlong)param_2 + 0x40) =
           (ulonglong)(uVar2 + iVar1 * 0xc) + (longlong)param_2;
    }
  }
  return 0xffffffff;
}

// RegeneratePreSelectedIndices @ 14818def0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UParticleModuleLocationBoneSocket::RegeneratePreSelectedIndices
          (UParticleModuleLocationBoneSocket *this,FModuleLocationBoneSocketInstancePayload *param_1
          ,USkeletalMeshComponent *param_2,FRandomStream *param_3)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  USkeletalMesh *this_00;
  int iVar6;
  longlong lVar7;
  float fVar8;
  
  if (this->SourceIndexMode == PreSelectedIndices) {
    if ((this->SourceType).Value == '\x01') {
      this_00 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_2);
      iVar4 = USkeletalMesh::NumSockets(this_00);
    }
    else {
      iVar4 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)param_2);
    }
    fVar2 = __real_3f800000;
    iVar6 = 0;
    if (0 < this->NumPreSelectedIndices) {
      lVar7 = 0;
      fVar8 = (float)iVar4 - __real_3f000000;
      do {
        uVar5 = param_3->Seed * 0xbb38435 + 0x3619636b;
        param_3->Seed = uVar5;
        iVar4 = (param_1->PreSelectedBoneSocketIndices).ArrayMax;
        if ((((byte)~(byte)((uint)iVar6 >> 0x18) >> 7 & (iVar6 < iVar4 || iVar4 == 0 && iVar6 == 0))
             == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & ((Index < ArrayMax) | ((Index == 0) & (ArrayMax == 0)))"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                               ,0x36c,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar6 = iVar6 + 1;
        *(int *)(lVar7 + (longlong)(param_1->PreSelectedBoneSocketIndices).Array) =
             (int)(((float)(uVar5 >> 9 | 0x3f800000) - fVar2) * fVar8);
        lVar7 = lVar7 + 4;
      } while (iVar6 < this->NumPreSelectedIndices);
    }
    if (this->bUpdatePositionEachFrame == 0 && this->bInheritBoneVelocity == 1) {
      UpdatePrevBoneLocationsAndVelocities(this,param_1,param_2,0.0);
    }
  }
  return;
}

// RequiredBytes @ 148191850

uint __thiscall
UParticleModuleLocationBoneSocket::RequiredBytes
          (UParticleModuleLocationBoneSocket *this,UParticleModuleTypeDataBase *param_1)

{
  return 4;
}

// RequiredBytesPerInstance @ 1481918e0

uint __thiscall
UParticleModuleLocationBoneSocket::RequiredBytesPerInstance(UParticleModuleLocationBoneSocket *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->SourceLocations).ArrayNum;
  if (0 < iVar1) {
    this->SourceIndexMode = SourceLocations;
    iVar2 = this->NumPreSelectedIndices;
    if (this->NumPreSelectedIndices < iVar1) {
      iVar2 = iVar1;
    }
    return iVar2 * 0x1c + 0x48;
  }
  if (this->bUpdatePositionEachFrame == 0 && this->bInheritBoneVelocity == 1) {
    this->SourceIndexMode = PreSelectedIndices;
    iVar2 = this->NumPreSelectedIndices;
    if (this->NumPreSelectedIndices < iVar1) {
      iVar2 = iVar1;
    }
    return iVar2 * 0x1c + 0x48;
  }
  this->SourceIndexMode = Direct;
  iVar2 = this->NumPreSelectedIndices;
  if (this->NumPreSelectedIndices < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2 * 0x1c + 0x48;
}

// SelectNextSpawnIndex @ 1481939e0

int __thiscall
UParticleModuleLocationBoneSocket::SelectNextSpawnIndex
          (UParticleModuleLocationBoneSocket *this,FModuleLocationBoneSocketInstancePayload *param_1
          ,USkeletalMeshComponent *param_2,FRandomStream *param_3)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (((param_1 == (FModuleLocationBoneSocketInstancePayload *)0x0) ||
      (param_2 == (USkeletalMeshComponent *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstancePayload && SourceComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                         ,0x5b3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = GetMaxSourceIndex(this,param_1,param_2);
  uVar1 = (this->SelectionMethod).Value;
  if ((uVar1 == '\0') || (this->SourceIndexMode == PreSelectedIndices)) {
    iVar6 = param_1->LastSelectedIndex;
    param_1->LastSelectedIndex = iVar6 + 1;
    if (iVar4 <= iVar6 + 1) {
      param_1->LastSelectedIndex = 0;
    }
  }
  else {
    if (uVar1 != '\x01') {
      return -1;
    }
    uVar5 = param_3->Seed * 0xbb38435 + 0x3619636b;
    param_3->Seed = uVar5;
    iVar6 = (int)(((float)(uVar5 >> 9 | 0x3f800000) - __real_3f800000) *
                 ((float)iVar4 - __real_3f000000));
    param_1->LastSelectedIndex = iVar6;
  }
  if (iVar6 == -1) {
    return -1;
  }
  if (iVar4 <= iVar6) {
    return -1;
  }
  return iVar6;
}

// SetSourceIndexMode @ 1481971e0

void __thiscall
UParticleModuleLocationBoneSocket::SetSourceIndexMode(UParticleModuleLocationBoneSocket *this)

{
  if (0 < (this->SourceLocations).ArrayNum) {
    this->SourceIndexMode = SourceLocations;
    return;
  }
  if (this->bUpdatePositionEachFrame == 0 && this->bInheritBoneVelocity == 1) {
    this->SourceIndexMode = PreSelectedIndices;
    return;
  }
  this->SourceIndexMode = Direct;
  return;
}

// Spawn @ 14819abe0

void __thiscall
UParticleModuleLocationBoneSocket::Spawn
          (UParticleModuleLocationBoneSocket *this,FSpawnContext *param_1)

{
  TVector<float> *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  uchar uVar10;
  FParticleEmitterInstance *this_01;
  FBaseParticle *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  char cVar18;
  bool bVar19;
  int iVar20;
  FModuleLocationBoneSocketInstancePayload *this_02;
  FParticleRandomSeedInstancePayload *pFVar21;
  USkeletalMeshComponent *pUVar22;
  TQuat<double> *pTVar23;
  TVector<float> *pTVar24;
  TVector<double> *pTVar25;
  double *pdVar26;
  uint uVar27;
  int iVar28;
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  FSpawnContext *local_res10;
  FSpawnContext *local_res18 [2];
  TVector<double>_u_0 local_128;
  TQuat<double> local_108;
  TVector<double> local_e8 [7];
  
  this_01 = (FParticleEmitterInstance *)param_1->_padding_;
  this_02 = (FModuleLocationBoneSocketInstancePayload *)
            FParticleEmitterInstance::GetModuleInstanceData(this_01,(UParticleModule *)this);
  if (this_02 != (FModuleLocationBoneSocketInstancePayload *)0x0) {
    pFVar21 = FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                        ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this);
    if (pFVar21 == (FParticleRandomSeedInstancePayload *)0x0) {
      pFVar21 = (FParticleRandomSeedInstancePayload *)
                (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
    }
    GetSkeletalMeshComponentSource(this,(FContext *)param_1,this_02);
    bVar17 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_02);
    if (bVar17) {
      pUVar22 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_02);
      if ((pUVar22 == (USkeletalMeshComponent *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstancePayload && SourceComponent",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                              ,0x5b3,L""), bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar20 = GetMaxSourceIndex(this,this_02,pUVar22);
      uVar10 = (this->SelectionMethod).Value;
      if ((uVar10 == '\0') || (this->SourceIndexMode == PreSelectedIndices)) {
        iVar28 = this_02->LastSelectedIndex;
        this_02->LastSelectedIndex = iVar28 + 1;
        if (iVar20 <= iVar28 + 1) {
          this_02->LastSelectedIndex = 0;
        }
      }
      else {
        if (uVar10 != '\x01') {
          return;
        }
        uVar27 = (pFVar21->RandomStream).Seed * 0xbb38435 + 0x3619636b;
        (pFVar21->RandomStream).Seed = uVar27;
        iVar28 = (int)(((float)(uVar27 >> 9 | 0x3f800000) - __real_3f800000) *
                      ((float)iVar20 - __real_3f000000));
        this_02->LastSelectedIndex = iVar28;
      }
      if ((iVar28 != -1) && (iVar28 < iVar20)) {
        local_108.X = UE::Math::TQuat<double>::Identity.X;
        local_108.Y = UE::Math::TQuat<double>::Identity.Y;
        local_108.Z = UE::Math::TQuat<double>::Identity.Z;
        local_108.W = UE::Math::TQuat<double>::Identity.W;
        iVar20 = (**(code **)(this_01->_padding_ + 0x150))(this_01);
        lVar29 = (longlong)iVar20;
        if ((iVar20 < 1) ||
           (cVar18 = (**(code **)(this_01->_padding_ + 0x158))(this_01), cVar18 == '\0')) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        pTVar23 = &local_108;
        if (bVar17) {
          pTVar23 = (TQuat<double> *)0x0;
        }
        bVar19 = GetParticleLocation(this,this_02,this_01,pUVar22,iVar28,
                                     (TVector<double> *)&local_128._s_0,pTVar23);
        if (bVar19) {
          pFVar11 = param_1->ParticleBase;
          *(int *)((longlong)&(pFVar11->OldLocation).field0_0x0 + (longlong)param_1->Offset) =
               iVar28;
          (pFVar11->Location).field0_0x0._s_0.X = local_128._s_0.X;
          (pFVar11->Location).field0_0x0._s_0.Y = local_128._s_0.Y;
          (pFVar11->Location).field0_0x0._s_0.Z = local_128._s_0.Z;
          bVar19 = UE::Math::TVector<double>::ContainsNaN(&pFVar11->Location);
          if (bVar19) {
            local_res10 = param_1;
            `UParticleModuleLocationBoneSocket::Spawn'::__l15::<lambda_1>::operator()(&local_res10);
          }
          if (this->bUpdatePositionEachFrame == 0 && this->bInheritBoneVelocity == 1) {
            pTVar24 = TPreallocatedArrayProxy<UE::Math::TVector<float>_>::operator[]
                                (&this_02->BoneSocketVelocities,iVar28);
            fVar1 = this->InheritVelocityScale;
            this_00 = &pFVar11->BaseVelocity;
            fVar2 = (pTVar24->field0_0x0)._s_0.Y;
            fVar3 = (pFVar11->BaseVelocity).field0_0x0._s_0.Y;
            fVar4 = (pTVar24->field0_0x0)._s_0.Z;
            fVar5 = (pFVar11->BaseVelocity).field0_0x0._s_0.Z;
            fVar6 = (pFVar11->BaseVelocity).field0_0x0._s_0.Y;
            fVar7 = (pFVar11->BaseVelocity).field0_0x0._s_0.Z;
            (this_00->field0_0x0)._s_0.X =
                 ((pTVar24->field0_0x0)._s_0.X - (this_00->field0_0x0)._s_0.X) * fVar1 +
                 (this_00->field0_0x0)._s_0.X;
            (pFVar11->BaseVelocity).field0_0x0._s_0.Y = (fVar2 - fVar3) * fVar1 + fVar6;
            (pFVar11->BaseVelocity).field0_0x0._s_0.Z = (fVar4 - fVar5) * fVar1 + fVar7;
            bVar19 = UE::Math::TVector<float>::ContainsNaN(this_00);
            if (bVar19) {
              local_res18[0] = param_1;
              `UParticleModuleLocationBoneSocket::Spawn'::__l18::<lambda_2>::operator()(local_res18)
              ;
            }
          }
          if (bVar17) {
            pTVar25 = UE::Math::TQuat<double>::Euler(&local_108,local_e8);
            dVar8 = (pTVar25->field0_0x0)._s_0.Y;
            dVar9 = (pTVar25->field0_0x0)._s_0.Z;
            *(float *)((longlong)&(pFVar11->Location).field0_0x0 + lVar29) =
                 (float)(pTVar25->field0_0x0)._s_0.X;
            *(float *)((longlong)&(pFVar11->Location).field0_0x0 + lVar29 + 4) = (float)dVar8;
            *(float *)((longlong)&(pFVar11->Location).field0_0x0 + lVar29 + 8) = (float)dVar9;
            if (((this_01->CurrentLODLevel->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace !=
                0) {
              pdVar26 = (double *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))()
              ;
              dVar43 = *pdVar26 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              dVar44 = pdVar26[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              dVar14 = pdVar26[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              dVar15 = pdVar26[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              dVar16 = (double)*(float *)((longlong)&(pFVar11->Location).field0_0x0 + lVar29 + 8);
              dVar8 = (double)*(float *)((longlong)&(pFVar11->Location).field0_0x0 + lVar29);
              dVar38 = (double)*(float *)((longlong)&(pFVar11->Location).field0_0x0 + lVar29 + 4);
              auVar41._8_4_ = SUB84(dVar44,0);
              auVar41._0_8_ = dVar43;
              auVar41._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
              uVar45 = (undefined4)((ulonglong)dVar38 >> 0x20);
              auVar47._8_4_ = SUB84(dVar38,0);
              auVar47._0_8_ = dVar8;
              auVar47._12_4_ = uVar45;
              auVar33._8_4_ = SUB84(dVar38,0);
              auVar33._0_8_ = dVar8;
              auVar33._12_4_ = uVar45;
              auVar34._8_8_ = 0;
              auVar34._0_8_ = dVar16;
              auVar34 = blendpd(auVar33,auVar34,2);
              auVar49._8_4_ = SUB84(dVar15,0);
              auVar49._0_8_ = dVar14;
              auVar49._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
              auVar42 = blendpd(auVar41,auVar49,2);
              auVar30._8_4_ = SUB84(dVar14,0);
              auVar30._0_8_ = dVar44;
              auVar30._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
              auVar48._0_8_ = auVar47._8_8_ * dVar43 - dVar44 * dVar8;
              auVar48._8_8_ = dVar16 * dVar44 - auVar30._8_8_ * dVar38;
              auVar35._0_8_ = auVar34._0_8_ * dVar14 - auVar42._0_8_ * dVar16;
              auVar35._8_8_ = auVar34._8_8_ * dVar15 - auVar42._8_8_ * 0.0;
              auVar49 = blendpd(auVar48,auVar35,2);
              dVar9 = auVar48._8_8_ + auVar48._8_8_;
              dVar13 = auVar35._0_8_ + auVar35._0_8_;
              uVar45 = SUB84(dVar13,0);
              uVar46 = (undefined4)((ulonglong)dVar13 >> 0x20);
              auVar50._0_8_ = auVar49._0_8_ + auVar49._0_8_;
              auVar50._8_8_ = auVar49._8_8_ + auVar49._8_8_;
              auVar39._8_4_ = uVar45;
              auVar39._0_8_ = dVar9;
              auVar39._12_4_ = uVar46;
              auVar31._8_4_ = uVar45;
              auVar31._0_8_ = dVar9;
              auVar31._12_4_ = uVar46;
              auVar36._8_4_ = uVar45;
              auVar36._0_8_ = dVar9;
              auVar36._12_4_ = uVar46;
              auVar49 = blendpd(auVar36,auVar50,2);
              auVar40._0_8_ = auVar39._8_8_ * dVar43 - dVar9 * dVar44;
              auVar40._8_8_ = auVar50._0_8_ * dVar44 - auVar31._8_8_ * dVar14;
              auVar32._8_4_ = SUB84(auVar50._8_8_,0);
              auVar32._0_8_ = auVar50._0_8_;
              auVar32._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
              auVar37._0_8_ = auVar49._0_8_ * dVar14 - auVar50._0_8_ * auVar42._0_8_;
              auVar37._8_8_ = auVar49._8_8_ * dVar15 - auVar32._8_8_ * auVar42._8_8_;
              auVar42._8_4_ = SUB84(auVar40._8_8_,0);
              auVar42._0_8_ = auVar40._0_8_;
              auVar42._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
              auVar49 = blendpd(auVar40,auVar37,2);
              *(float *)((longlong)&(pFVar11->Location).field0_0x0 + lVar29) =
                   (float)(dVar9 * dVar15 + dVar8 + auVar42._8_8_);
              *(float *)((longlong)&(pFVar11->Location).field0_0x0 + lVar29 + 4) =
                   (float)(dVar13 * dVar15 + dVar38 + auVar37._0_8_);
              *(float *)((longlong)&(pFVar11->Location).field0_0x0 + lVar29 + 8) =
                   (float)(auVar50._0_8_ * dVar15 + dVar16 + auVar49._0_8_);
            }
          }
        }
      }
    }
  }
  return;
}

// Update @ 1481ae020

void __thiscall
UParticleModuleLocationBoneSocket::Update
          (UParticleModuleLocationBoneSocket *this,FUpdateContext *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  FParticleEmitterInstance *this_00;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FModuleLocationBoneSocketInstancePayload *this_01;
  USkeletalMeshComponent *pUVar15;
  TQuat<double> *pTVar16;
  TVector<double> *pTVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  FUpdateContext *local_108;
  double *local_100;
  longlong local_f8;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  undefined1 local_b8 [128];
  
  this_00 = (FParticleEmitterInstance *)param_1->_padding_;
  this_01 = (FModuleLocationBoneSocketInstancePayload *)
            FParticleEmitterInstance::GetModuleInstanceData(this_00,(UParticleModule *)this);
  bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
  if (bVar10) {
    pUVar15 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
    if (this->bUpdatePositionEachFrame == 0 && this->bInheritBoneVelocity == 1) {
      UpdatePrevBoneLocationsAndVelocities(this,this_01,pUVar15,param_1->DeltaTime);
    }
    if ((this->bUpdatePositionEachFrame != 0) && (this_00->ParticleData != (uchar *)0x0)) {
      local_b8._0_4_ = UE::Math::TQuat<double>::Identity.X._0_4_;
      local_b8._4_4_ = UE::Math::TQuat<double>::Identity.X._4_4_;
      local_b8._8_4_ = UE::Math::TQuat<double>::Identity.Y._0_4_;
      local_b8._12_4_ = UE::Math::TQuat<double>::Identity.Y._4_4_;
      local_b8._16_8_ = UE::Math::TQuat<double>::Identity.Z;
      local_b8._24_8_ = UE::Math::TQuat<double>::Identity.W;
      iVar13 = (**(code **)(this_00->_padding_ + 0x150))();
      lVar19 = (longlong)iVar13;
      if ((iVar13 < 1) || (cVar11 = (**(code **)(this_00->_padding_ + 0x158))(), cVar11 == '\0')) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      pTVar16 = (TQuat<double> *)local_b8;
      if (bVar10) {
        pTVar16 = (TQuat<double> *)0x0;
      }
      local_100 = (double *)(**(code **)*this_00->Component)();
      lVar21 = param_1->_padding_;
      lVar4 = *(longlong *)(lVar21 + 0x168);
      iVar13 = *(int *)(lVar21 + 0x188);
      local_f8 = *(longlong *)(lVar21 + 0x170);
      iVar18 = *(int *)(lVar21 + 0x18c) + -1;
      lVar21 = (longlong)iVar18;
      if (-1 < iVar18) {
        iVar18 = param_1->Offset;
        do {
          lVar20 = (ulonglong)((uint)*(ushort *)(local_f8 + lVar21 * 2) * iVar13) + lVar4;
          if (((*(uint *)(lVar20 + 0x6c) & 0x4000000) == 0) &&
             (bVar12 = GetParticleLocation(this,this_01,this_00,pUVar15,*(int *)(iVar18 + lVar20),
                                           (TVector<double> *)&local_d8._s_0,pTVar16), bVar12)) {
            *(double *)(lVar20 + 0x18) = local_d8._s_0.X;
            *(double *)(lVar20 + 0x20) = local_d8._s_0.Y;
            *(double *)(lVar20 + 0x28) = local_d8._s_0.Z;
            iVar14 = _finite(*(double *)(lVar20 + 0x18));
            if ((iVar14 == 0) ||
               ((iVar14 = _finite(*(double *)(lVar20 + 0x20)), iVar14 == 0 ||
                (iVar14 = _finite(*(double *)(lVar20 + 0x28)), iVar14 == 0)))) {
              local_108 = param_1;
              `UParticleModuleLocationBoneSocket::Update'::__l24::<lambda_1>::operator()(&local_108)
              ;
            }
            if (bVar10) {
              pTVar17 = UE::Math::TQuat<double>::Euler
                                  ((TQuat<double> *)local_b8,(TVector<double> *)&local_f0._s_0);
              dVar1 = (pTVar17->field0_0x0)._s_0.Y;
              dVar2 = (pTVar17->field0_0x0)._s_0.Z;
              *(float *)(lVar20 + 0x18 + lVar19) = (float)(pTVar17->field0_0x0)._s_0.X;
              *(float *)(lVar20 + 0x1c + lVar19) = (float)dVar1;
              *(float *)(lVar20 + 0x20 + lVar19) = (float)dVar2;
              if (((this_00->CurrentLODLevel->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace
                  != 0) {
                uVar3 = *(undefined8 *)(lVar20 + 0x18 + lVar19);
                dVar8 = (double)(float)uVar3;
                dVar9 = (double)(float)((ulonglong)uVar3 >> 0x20);
                uVar30 = SUB84(dVar9,0);
                uVar37 = (undefined4)((ulonglong)dVar9 >> 0x20);
                dVar2 = *local_100 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                dVar5 = local_100[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                auVar33._8_4_ = uVar30;
                auVar33._0_8_ = dVar8;
                auVar33._12_4_ = uVar37;
                dVar6 = local_100[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                dVar7 = local_100[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                dVar1 = (double)*(float *)(lVar20 + 0x20 + lVar19);
                auVar31._8_4_ = SUB84(dVar5,0);
                auVar31._0_8_ = dVar2;
                auVar31._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
                auVar32._8_4_ = uVar30;
                auVar32._0_8_ = dVar8;
                auVar32._12_4_ = uVar37;
                auVar22._8_8_ = 0;
                auVar22._0_8_ = dVar1;
                auVar22 = blendpd(auVar32,auVar22,2);
                auVar35._8_4_ = SUB84(dVar7,0);
                auVar35._0_8_ = dVar6;
                auVar35._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
                auVar32 = blendpd(auVar31,auVar35,2);
                auVar34._0_8_ = auVar33._8_8_ * dVar2 - dVar5 * dVar8;
                auVar34._8_8_ = dVar1 * dVar5 - dVar6 * dVar9;
                auVar23._0_8_ = auVar22._0_8_ * dVar6 - auVar32._0_8_ * dVar1;
                auVar23._8_8_ = auVar22._8_8_ * dVar7 - auVar32._8_8_ * 0.0;
                local_f0._8_4_ = uVar30;
                local_f0._0_8_ = dVar8;
                local_f0._12_4_ = uVar37;
                auVar35 = blendpd(auVar34,auVar23,2);
                dVar28 = auVar34._8_8_ + auVar34._8_8_;
                dVar29 = auVar23._0_8_ + auVar23._0_8_;
                auVar36._0_8_ = auVar35._0_8_ + auVar35._0_8_;
                auVar36._8_8_ = auVar35._8_8_ + auVar35._8_8_;
                auVar26._8_4_ = SUB84(dVar29,0);
                auVar26._0_8_ = dVar28;
                uVar30 = (undefined4)((ulonglong)dVar29 >> 0x20);
                auVar26._12_4_ = uVar30;
                auVar24._8_4_ = SUB84(dVar29,0);
                auVar24._0_8_ = dVar28;
                auVar24._12_4_ = uVar30;
                auVar35 = blendpd(auVar24,auVar36,2);
                auVar27._0_8_ = auVar26._8_8_ * dVar2 - dVar28 * dVar5;
                auVar27._8_8_ = auVar36._0_8_ * dVar5 - dVar29 * dVar6;
                auVar25._0_8_ = auVar35._0_8_ * dVar6 - auVar36._0_8_ * auVar32._0_8_;
                auVar25._8_8_ = auVar35._8_8_ * dVar7 - auVar36._8_8_ * auVar32._8_8_;
                auVar35 = blendpd(auVar27,auVar25,2);
                *(float *)(lVar20 + 0x18 + lVar19) = (float)(dVar28 * dVar7 + dVar8 + auVar27._8_8_)
                ;
                local_f0._s_0.Z = auVar36._0_8_ * dVar7 + dVar1 + auVar35._0_8_;
                *(float *)(lVar20 + 0x1c + lVar19) = (float)(dVar29 * dVar7 + dVar9 + auVar25._0_8_)
                ;
                *(float *)(lVar20 + 0x20 + lVar19) = (float)local_f0._s_0.Z;
              }
            }
          }
          lVar21 = lVar21 + -1;
        } while (-1 < lVar21);
      }
    }
  }
  return;
}

// UpdatePrevBoneLocationsAndVelocities @ 1481b3c10

void __thiscall
UParticleModuleLocationBoneSocket::UpdatePrevBoneLocationsAndVelocities
          (UParticleModuleLocationBoneSocket *this,FModuleLocationBoneSocketInstancePayload *param_1
          ,USkeletalMeshComponent *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TVector<float> *pTVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  TVector<double> local_130;
  TMatrix<double> local_118;
  
  fVar22 = 0.0;
  if (0.0 < param_3) {
    fVar22 = __real_3f800000 / param_3;
  }
  uVar17 = 0;
  iVar13 = GetMaxSourceIndex(this,param_1,param_2);
  lVar18 = (longlong)iVar13;
  if (0 < iVar13) {
    lVar15 = 0;
    do {
      bVar11 = GetBoneInfoForSourceIndex(this,param_1,param_2,uVar17,&local_118,&local_130);
      uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      if ((bVar11) && ((int)uVar17 < (param_1->BoneSocketVelocities).ArrayMax)) {
        iVar13 = (param_1->PrevFrameBoneSocketPositions).ArrayMax;
        uVar16 = ~uVar17 >> 0x1f;
        bVar11 = uVar17 == 0;
        fVar19 = (float)local_118.M[3][0];
        uVar14 = (uint)(iVar13 == 0 && bVar11);
        fVar20 = (float)local_118.M[3][1];
        if ((int)uVar17 < iVar13) {
          uVar14 = 1;
        }
        fVar21 = (float)local_118.M[3][2];
        if (((uVar16 & uVar14) == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & ((Index < ArrayMax) | ((Index == 0) & (ArrayMax == 0)))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                                ,0x36c,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar4 = (param_1->PrevFrameBoneSocketPositions).Array;
        fVar1 = *(float *)((longlong)&pTVar4->field0_0x0 + lVar15);
        fVar2 = *(float *)((longlong)&pTVar4->field0_0x0 + lVar15 + 4);
        fVar3 = *(float *)((longlong)&pTVar4->field0_0x0 + lVar15 + 8);
        iVar13 = (param_1->BoneSocketVelocities).ArrayMax;
        uVar14 = (uint)(iVar13 == 0 && bVar11);
        if ((int)uVar17 < iVar13) {
          uVar14 = 1;
        }
        if (((uVar16 & uVar14) == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & ((Index < ArrayMax) | ((Index == 0) & (ArrayMax == 0)))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                                ,0x36c,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar4 = (param_1->BoneSocketVelocities).Array;
        *(float *)((longlong)&pTVar4->field0_0x0 + lVar15) = (fVar19 - fVar1) * fVar22;
        *(float *)((longlong)&pTVar4->field0_0x0 + lVar15 + 4) = (fVar20 - fVar2) * fVar22;
        *(float *)((longlong)&pTVar4->field0_0x0 + lVar15 + 8) = (fVar21 - fVar3) * fVar22;
        iVar13 = (param_1->PrevFrameBoneSocketPositions).ArrayMax;
        uVar14 = (uint)(iVar13 == 0 && bVar11);
        if ((int)uVar17 < iVar13) {
          uVar14 = 1;
        }
        if (((uVar16 & uVar14) == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & ((Index < ArrayMax) | ((Index == 0) & (ArrayMax == 0)))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                                ,0x36c,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar4 = (param_1->PrevFrameBoneSocketPositions).Array;
        *(float *)((longlong)&pTVar4->field0_0x0 + lVar15) = fVar19;
        *(float *)((longlong)&pTVar4->field0_0x0 + lVar15 + 4) = fVar20;
        *(float *)((longlong)&pTVar4->field0_0x0 + lVar15 + 8) = fVar21;
      }
      else {
        iVar13 = (param_1->BoneSocketVelocities).ArrayMax;
        uVar14 = (uint)(iVar13 == 0 && uVar17 == 0);
        if ((int)uVar17 < iVar13) {
          uVar14 = 1;
        }
        if (((~uVar17 >> 0x1f & uVar14) == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & ((Index < ArrayMax) | ((Index == 0) & (ArrayMax == 0)))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                                ,0x36c,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar4 = (param_1->BoneSocketVelocities).Array;
        *(undefined8 *)((longlong)&pTVar4->field0_0x0 + lVar15) = uVar9;
        *(undefined4 *)((longlong)&pTVar4->field0_0x0 + lVar15 + 8) = uVar10;
        dVar6 = (double)param_2->_padding_;
        dVar7 = (double)param_2->_padding_;
        iVar13 = (param_1->PrevFrameBoneSocketPositions).ArrayMax;
        dVar8 = (double)param_2->_padding_;
        uVar14 = (uint)(iVar13 == 0 && uVar17 == 0);
        if ((int)uVar17 < iVar13) {
          uVar14 = 1;
        }
        if (((~uVar17 >> 0x1f & uVar14) == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & ((Index < ArrayMax) | ((Index == 0) & (ArrayMax == 0)))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                                ,0x36c,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar4 = (param_1->PrevFrameBoneSocketPositions).Array;
        *(float *)((longlong)&pTVar4->field0_0x0 + lVar15) = (float)dVar6;
        *(float *)((longlong)&pTVar4->field0_0x0 + lVar15 + 4) = (float)dVar7;
        *(float *)((longlong)&pTVar4->field0_0x0 + lVar15 + 8) = (float)dVar8;
      }
      uVar17 = uVar17 + 1;
      lVar15 = lVar15 + 0xc;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  return;
}

// ValidateLODLevels @ 1481b44a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UParticleModuleLocationBoneSocket::ValidateLODLevels(UParticleEmitter *param_1,int param_2)

{
  TArray<FLocationBoneSocketInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  UParticleModuleLocationBoneSocket *pUVar5;
  FScriptContainerElement *_Src;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  UClass *pUVar11;
  UParticleModuleLocationBoneSocket *pUVar12;
  FName *this;
  FString *pFVar13;
  FObjectPtr_u_0 *pFVar14;
  uint uVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  iVar3 = (param_1->LODLevels).ArrayNum;
  lVar10 = (longlong)iVar3;
  if (1 < iVar3) {
    bVar8 = false;
    uVar15 = 0;
    if (0 < lVar10) {
      uVar18 = 1;
      lVar20 = 0;
      lVar19 = (longlong)param_2;
      do {
        uVar9 = 0;
        if ((int)uVar15 < (param_1->LODLevels).ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar4 = *(longlong *)((param_1->LODLevels).AllocatorInstance.Data + lVar20 * 8);
        uVar9 = 0;
        if (param_2 < *(int *)(lVar4 + 0x40)) {
          uVar9 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar4 = *(longlong *)(lVar4 + 0x38);
        pFVar14 = (FObjectPtr_u_0 *)(lVar4 + lVar19 * 8);
        if (*(longlong *)(lVar4 + lVar19 * 8) == 0) {
          pFVar13 = GetTypeName<UParticleModuleLocationBoneSocket>(&local_58);
          if ((pFVar13->Data).ArrayNum == 0) {
            pwVar16 = L"";
          }
          else {
            pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar16);
        }
        pUVar11 = Z_Construct_UClass_UParticleModuleLocationBoneSocket_NoRegister();
        bVar7 = FObjectPtr::IsA((FObjectPtr *)pFVar14,pUVar11);
        if ((!bVar7) || (pFVar14->Handle == (UObject *)0x0)) {
          pFVar13 = GetTypeName<UParticleModuleLocationBoneSocket>(&local_78);
          pwVar16 = L"";
          if ((pFVar13->Data).ArrayNum == 0) {
            pwVar17 = L"";
          }
          else {
            pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
          }
          pFVar13 = GetFullNameForCastLogError<UParticleModule>
                              (&local_68,(UParticleModule *)pFVar14->Handle);
          if ((pFVar13->Data).ArrayNum != 0) {
            pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar16,pwVar17);
        }
        if ((*(byte *)((longlong)pFVar14->Handle + 100) & 5) != 0) {
          bVar8 = true;
        }
        uVar15 = uVar15 + 1;
        lVar20 = lVar20 + 1;
      } while (lVar20 < lVar10);
      if (bVar8) {
        if (((param_1->LODLevels).ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar20 = *(longlong *)(param_1->LODLevels).AllocatorInstance.Data;
        uVar15 = 0;
        if (param_2 < *(int *)(lVar20 + 0x40)) {
          uVar15 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar12 = CastChecked<UParticleModuleLocationBoneSocket,UParticleModule>
                            ((TObjectPtr<UParticleModule> *)
                             (*(longlong *)(lVar20 + 0x38) + lVar19 * 8),NullChecked);
        if (1 < lVar10) {
          lVar20 = 1;
          pwVar16 = L"";
          do {
            uVar15 = 0;
            if ((int)uVar18 < (param_1->LODLevels).ArrayNum) {
              uVar15 = ~uVar18 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar4 = *(longlong *)((param_1->LODLevels).AllocatorInstance.Data + lVar20 * 8);
            uVar15 = 0;
            if (param_2 < *(int *)(lVar4 + 0x40)) {
              uVar15 = (uint)~param_2 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar14 = (FObjectPtr_u_0 *)(*(longlong *)(lVar4 + 0x38) + lVar19 * 8);
            if (pFVar14->Handle == (UObject *)0x0) {
              pFVar13 = GetTypeName<UParticleModuleLocationBoneSocket>(&local_88);
              if ((pFVar13->Data).ArrayNum != 0) {
                pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(L"nullptr",pwVar16);
            }
            pUVar11 = Z_Construct_UClass_UParticleModuleLocationBoneSocket_NoRegister();
            bVar8 = FObjectPtr::IsA((FObjectPtr *)pFVar14,pUVar11);
            if ((!bVar8) ||
               (pUVar5 = (UParticleModuleLocationBoneSocket *)pFVar14->Handle,
               pUVar5 == (UParticleModuleLocationBoneSocket *)0x0)) {
              pFVar13 = GetTypeName<UParticleModuleLocationBoneSocket>(&local_a8);
              if ((pFVar13->Data).ArrayNum == 0) {
                pwVar17 = L"";
              }
              else {
                pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
              }
              pFVar13 = GetFullNameForCastLogError<UParticleModule>
                                  (&local_98,(UParticleModule *)pFVar14->Handle);
              if ((pFVar13->Data).ArrayNum != 0) {
                pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(pwVar16,pwVar17);
            }
            if ((pUVar5 != pUVar12) &&
               ((pUVar5->SourceLocations).ArrayNum != (pUVar12->SourceLocations).ArrayNum)) {
              if (2 < (byte)LogParticles._0_1_) {
                this = UParticleEmitter::GetEmitterName(param_1);
                ::FName::ToString(this,&local_b8);
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)param_1->_padding_,&local_c8,(UObject *)0x0,None);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
                if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c8.Data.AllocatorInstance.Data);
                }
                if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                }
              }
              pTVar1 = &pUVar5->SourceLocations;
              if (pTVar1 != &pUVar12->SourceLocations) {
                iVar3 = (pUVar12->SourceLocations).ArrayNum;
                piVar2 = &(pUVar5->SourceLocations).ArrayMax;
                _Src = (pUVar12->SourceLocations).AllocatorInstance.Data;
                (pUVar5->SourceLocations).ArrayNum = iVar3;
                if ((iVar3 == 0) && (*piVar2 == 0)) {
                  *piVar2 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
                  if (iVar3 != 0) {
                    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 5);
                  }
                }
              }
            }
            uVar18 = uVar18 + 1;
            lVar20 = lVar20 + 1;
          } while (lVar20 < lVar10);
        }
      }
    }
  }
  return;
}

// operator() @ 1505260f0

bool __thiscall
`UParticleModuleLocationBoneSocket::GetSocketInfoForSourceIndex'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707555819>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707555819>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150526162;
    }
  }
  bVar2 = false;
LAB_150526162:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150526520

bool __thiscall
`UParticleModuleLocationBoneSocket::Update'::__l24::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707555495>);
  if (bVar4) {
    (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0x90))
              (*(longlong **)(**(longlong **)this + 0x10),local_18);
    lVar6 = (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707555495>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505265ff;
    }
  }
  bVar4 = false;
LAB_1505265ff:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505269a0

bool __thiscall
`UParticleModuleLocationBoneSocket::Spawn'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707555407>);
  if (bVar4) {
    (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0x90))
              (*(longlong **)(**(longlong **)this + 0x10),local_18);
    lVar6 = (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707555407>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150526a7f;
    }
  }
  bVar4 = false;
LAB_150526a7f:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150526e60

bool __thiscall
`UParticleModuleLocationBoneSocket::GetSocketInfoForSourceIndex'::__l3::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707555820>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707555820>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150526eca;
    }
  }
  bVar2 = false;
LAB_150526eca:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150527030

bool __thiscall
`UParticleModuleLocationBoneSocket::Spawn'::__l18::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707555412>);
  if (bVar4) {
    (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0x90))
              (*(longlong **)(**(longlong **)this + 0x10),local_18);
    lVar6 = (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707555412>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15052710f;
    }
  }
  bVar4 = false;
LAB_15052710f:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505274f0

bool __thiscall
`UParticleModuleLocationBoneSocket::GetSocketInfoForSourceIndex'::__l3::<lambda_3>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707555821>);
  if (bVar4) {
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)((longlong)this + 8),&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707555821>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150527592;
    }
  }
  bVar4 = false;
LAB_150527592:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505275e0

bool __thiscall
`UParticleModuleLocationBoneSocket::GetSocketInfoForSourceIndex'::__l9::<lambda_4>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707555830>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)((longlong)this + 8),&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707555830>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150527651;
    }
  }
  bVar2 = false;
LAB_150527651:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150527680

bool __thiscall
`UParticleModuleLocationBoneSocket::GetSocketInfoForSourceIndex'::__l15::<lambda_5>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707555843>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)((longlong)this + 8),&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707555843>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505276f1;
    }
  }
  bVar2 = false;
LAB_1505276f1:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150527720

bool __thiscall
`UParticleModuleLocationBoneSocket::GetSocketInfoForSourceIndex'::__l15::<lambda_6>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707555844>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)((longlong)this + 8),&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707555844>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150527791;
    }
  }
  bVar2 = false;
LAB_150527791:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

