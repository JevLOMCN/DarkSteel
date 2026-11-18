// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// StaticClass @ 147306710

UClass * __cdecl UParticleModuleLocationSkelVertSurface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationSkelVertSurface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationSkelVertSurface",
               &Z_Registration_Info_UClass_UParticleModuleLocationSkelVertSurface.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationSkelVertSurface,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLocationSkelVertSurface>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationSkelVertSurface>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationSkelVertSurface.InnerSingleton;
}

// UParticleModuleLocationSkelVertSurface @ 14730ab40

UParticleModuleLocationSkelVertSurface * __thiscall
UParticleModuleLocationSkelVertSurface::UParticleModuleLocationSkelVertSurface
          (UParticleModuleLocationSkelVertSurface *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLocationSkelVertSurface__6B_;
  (this->SkelMeshActorParamName).ComparisonIndex = 0;
  (this->SkelMeshActorParamName).Number = 0;
  (this->ValidAssociatedBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidAssociatedBones).ArrayNum = 0;
  (this->ValidAssociatedBones).ArrayMax = 0;
  (this->ValidMaterialIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidMaterialIndices).ArrayNum = 0;
  (this->ValidMaterialIndices).ArrayMax = 0;
  return this;
}

// ~UParticleModuleLocationSkelVertSurface @ 14730ba00

void __thiscall
UParticleModuleLocationSkelVertSurface::~UParticleModuleLocationSkelVertSurface
          (UParticleModuleLocationSkelVertSurface *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleLocationSkelVertSurface__6B_;
  pFVar1 = (this->ValidMaterialIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ValidAssociatedBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleLocationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// CanTickInAnyThread @ 14730d820

bool __thiscall
UParticleModuleLocationSkelVertSurface::CanTickInAnyThread
          (UParticleModuleLocationSkelVertSurface *this)

{
  return false;
}

// GetPrivateStaticClass @ 14730e5a0

UClass * __cdecl UParticleModuleLocationSkelVertSurface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationSkelVertSurface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationSkelVertSurface",
               &Z_Registration_Info_UClass_UParticleModuleLocationSkelVertSurface.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationSkelVertSurface,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLocationSkelVertSurface>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationSkelVertSurface>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationSkelVertSurface.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleLocationSkelVertSurface @ 14730fe20

void __cdecl
UParticleModuleLocationSkelVertSurface::StaticRegisterNativesUParticleModuleLocationSkelVertSurface
          (void)

{
  return;
}

// TouchesMeshRotation @ 147310010

bool __thiscall
UParticleModuleLocationSkelVertSurface::TouchesMeshRotation
          (UParticleModuleLocationSkelVertSurface *this)

{
  return true;
}

// UParticleModuleLocationSkelVertSurface @ 14815d2b0

UParticleModuleLocationSkelVertSurface * __thiscall
UParticleModuleLocationSkelVertSurface::UParticleModuleLocationSkelVertSurface
          (UParticleModuleLocationSkelVertSurface *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  FConstructorStatics FVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  UObject::UObject((UObject *)this,param_1);
  uVar4 = (ulonglong)_tls_index;
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleLocationSkelVertSurface__6B_;
  pvVar3 = ThreadLocalStoragePointer;
  (this->SkelMeshActorParamName).ComparisonIndex = 0;
  (this->SkelMeshActorParamName).Number = 0;
  (this->ValidAssociatedBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidAssociatedBones).ArrayNum = 0;
  (this->ValidAssociatedBones).ArrayMax = 0;
  lVar1 = *(longlong *)((longlong)pvVar3 + uVar4 * 8);
  (this->ValidMaterialIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidMaterialIndices).ArrayNum = 0;
  (this->ValidMaterialIndices).ArrayMax = 0;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::ConstructorStatics.NAME_VertSurfaceActor,L"VertSurfaceActor");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x4f;
  (this->SourceType).Value = '\0';
  FVar2 = ::ConstructorStatics;
  this->bOrientMeshEmitters = 1;
  this->bEnforceNormalCheck = 0;
  this->bInheritUV = 0;
  this->SkelMeshActorParamName = FVar2.NAME_VertSurfaceActor;
  this->InheritUVChannel = 0;
  this->InheritVelocityScale = 1.0;
  return this;
}

// AutoPopulateInstanceProperties @ 148166f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleModuleLocationSkelVertSurface::AutoPopulateInstanceProperties
          (UParticleModuleLocationSkelVertSurface *this,UParticleSystemComponent *param_1)

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
                         ,0xa5d,L""), bVar5)) {
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

// FinalUpdate @ 1481738c0

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
UParticleModuleLocationSkelVertSurface::FinalUpdate
          (UParticleModuleLocationSkelVertSurface *this,FUpdateContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr *this_00;
  USkinnedMeshComponent *this_01;
  TVector<float> *pTVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_f8 [32];
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  this_00 = (FWeakObjectPtr *)
            FParticleEmitterInstance::GetModuleInstanceData
                      ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this);
  bVar2 = FWeakObjectPtr::IsValid(this_00);
  if ((((bVar2) && (this_00[9].ObjectIndex != -1)) &&
      (this_01 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(this_00),
      this->bInheritBoneVelocity != 0)) && (iVar4 = 0, 0 < this_00[2].ObjectSerialNumber)) {
    lVar5 = 0;
    do {
      if ((((byte)~(byte)((uint)iVar4 >> 0x18) >> 7 &
           (iVar4 < this_00[3].ObjectIndex || this_00[3].ObjectIndex == 0 && iVar4 == 0)) == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & ((Index < ArrayMax) | ((Index == 0) & (ArrayMax == 0)))"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                             ,0x36c,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)(lVar5 + (longlong)this_00[4]) != -1) {
        USkinnedMeshComponent::GetBoneMatrix
                  (this_01,&local_d8,*(int *)(lVar5 + (longlong)this_00[4]));
        fVar6 = (float)local_d8.M[3][0];
        fVar7 = (float)local_d8.M[3][1];
        fVar8 = (float)local_d8.M[3][2];
        pTVar3 = TPreallocatedArrayProxy<UE::Math::TVector<float>_>::operator[]
                           ((TPreallocatedArrayProxy<UE::Math::TVector<float>_> *)(this_00 + 5),
                            iVar4);
        (pTVar3->field0_0x0)._s_0.X = fVar6;
        (pTVar3->field0_0x0)._s_0.Y = fVar7;
        (pTVar3->field0_0x0)._s_0.Z = fVar8;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 4;
    } while (iVar4 < this_00[2].ObjectSerialNumber);
  }
  return;
}

// GetParticleLocation @ 14817bac0

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

bool __thiscall
UParticleModuleLocationSkelVertSurface::GetParticleLocation
          (UParticleModuleLocationSkelVertSurface *this,FContext *param_1,
          FModuleLocationVertSurfaceInstancePayload *param_2,USkeletalMeshComponent *param_3,
          int param_4,TVector<double> *param_5,TQuat<double> *param_6,bool param_7)

{
  FMultiSizeIndexContainer *this_00;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uchar uVar9;
  FSkeletalMeshLODRenderData *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  bool bVar28;
  undefined1 uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  FSkeletalMeshRenderData *pFVar33;
  FSkinWeightVertexBuffer *pFVar34;
  TVector<float> *pTVar35;
  double *pdVar36;
  FRawStaticIndexBuffer16or32Interface *pFVar37;
  TQuat<double> *pTVar38;
  longlong lVar39;
  longlong lVar40;
  ulonglong uVar41;
  longlong lVar42;
  ulonglong uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
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
  undefined4 uVar92;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  double dVar93;
  undefined1 auVar94 [16];
  double dVar97;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  double dVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  double dVar108;
  double dVar109;
  double dVar115;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined4 uVar116;
  double dVar117;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  double dVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  uint uVar131;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  uint uVar132;
  TVector<double>_u_0 local_2e0;
  TVector<double>_u_0 local_2c8;
  FSkeletalMeshLODRenderData *local_2b0;
  FMultiSizeIndexContainer *local_2a8;
  TVector<double>_u_0 local_2a0;
  TVector<double>_u_0 local_288;
  FContext *local_270;
  undefined1 local_268 [48];
  TMatrix<double> local_238;
  TVector<float> local_1b8;
  TVector<float> local_1ac;
  TVector<float> local_1a0 [14];
  TQuat<double> local_f8 [6];
  
  local_270 = param_1;
  if ((param_3 == (USkeletalMeshComponent *)0x0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("InSkelMeshComponent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                          ,0xb18,L""), bVar28)) {
    pcVar11 = (code *)swi(3);
    uVar29 = (*pcVar11)();
    return (bool)uVar29;
  }
  pFVar33 = USkinnedMeshComponent::GetSkeletalMeshRenderData((USkinnedMeshComponent *)param_3);
  if (pFVar33 != (FSkeletalMeshRenderData *)0x0) {
    uVar131 = param_2->MeshMinLOD;
    uVar132 = 0;
    if ((int)uVar131 < (pFVar33->LODRenderData).Array.ArrayNum) {
      uVar132 = ~uVar131 >> 0x1f;
    }
    if ((uVar132 == 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar28)) {
      pcVar11 = (code *)swi(3);
      uVar29 = (*pcVar11)();
      return (bool)uVar29;
    }
    pFVar10 = *(FSkeletalMeshLODRenderData **)
               ((pFVar33->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar131 * 8);
    local_2b0 = pFVar10;
    pFVar34 = USkinnedMeshComponent::GetSkinWeightBuffer
                        ((USkinnedMeshComponent *)param_3,param_2->MeshMinLOD);
    uVar9 = (this->SourceType).Value;
    if (uVar9 == '\0') {
      if ((pFVar10->StaticVertexBuffers).PositionVertexBuffer.NumVertices <= (uint)param_4) {
        return false;
      }
      pTVar35 = USkeletalMeshComponent::GetSkinnedVertexPosition
                          (&local_1b8,param_3,param_4,pFVar10,pFVar34);
      dVar98 = (double)param_3->_padding_;
      dVar14 = (double)(pTVar35->field0_0x0)._s_0.Z * (double)param_3->_padding_;
      dVar15 = (double)param_3->_padding_ * 0.0;
      auVar1._0_8_ = param_3->_padding_;
      auVar1._8_8_ = param_3->_padding_;
      dVar108 = (double)param_3->_padding_ * (double)(pTVar35->field0_0x0)._s_0.X;
      dVar115 = (double)param_3->_padding_ * (double)(pTVar35->field0_0x0)._s_0.Y;
      auVar2._0_8_ = param_3->_padding_;
      auVar2._8_8_ = param_3->_padding_;
      auVar99._8_4_ = SUB84(dVar115,0);
      auVar99._0_8_ = dVar108;
      uVar92 = (undefined4)((ulonglong)dVar115 >> 0x20);
      auVar99._12_4_ = uVar92;
      auVar69 = blendpd(auVar2,auVar1,2);
      auVar100._0_8_ = auVar99._8_8_ * (double)auVar2._0_8_ - (double)auVar2._8_8_ * dVar108;
      auVar100._8_8_ = dVar14 * (double)auVar2._8_8_ - (double)auVar1._0_8_ * dVar115;
      auVar94._8_4_ = SUB84(auVar100._8_8_,0);
      auVar94._0_8_ = auVar100._0_8_;
      auVar94._12_4_ = (int)((ulonglong)auVar100._8_8_ >> 0x20);
      auVar44._8_4_ = SUB84(dVar115,0);
      auVar44._0_8_ = dVar108;
      auVar44._12_4_ = uVar92;
      auVar13._8_4_ = SUB84(dVar15,0);
      auVar13._0_8_ = dVar14;
      auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      auVar45 = blendpd(auVar44,auVar13,2);
      auVar46._0_8_ = auVar45._0_8_ * (double)auVar1._0_8_ - auVar69._0_8_ * dVar14;
      auVar46._8_8_ = auVar45._8_8_ * (double)auVar1._8_8_ - auVar69._8_8_ * dVar15;
      auVar3._0_8_ = param_3->_padding_;
      auVar3._8_8_ = param_3->_padding_;
      auVar45 = blendpd(auVar100,auVar46,2);
      dVar93 = auVar94._8_8_ + auVar94._8_8_;
      dVar97 = auVar46._0_8_ + auVar46._0_8_;
      auVar101._0_8_ = auVar45._0_8_ + auVar45._0_8_;
      auVar101._8_8_ = auVar45._8_8_ + auVar45._8_8_;
      auVar83._8_4_ = SUB84(dVar97,0);
      auVar83._0_8_ = dVar93;
      uVar92 = (undefined4)((ulonglong)dVar97 >> 0x20);
      auVar83._12_4_ = uVar92;
      auVar72._8_4_ = SUB84(dVar97,0);
      auVar72._0_8_ = dVar93;
      auVar72._12_4_ = uVar92;
      auVar69 = blendpd(auVar72,auVar101,2);
      auVar84._0_8_ = auVar83._8_8_ * (double)auVar3._0_8_ - (double)auVar3._8_8_ * dVar93;
      auVar84._8_8_ = auVar101._0_8_ * (double)auVar3._8_8_ - (double)auVar1._0_8_ * dVar97;
      auVar45 = blendpd(auVar3,auVar1,2);
      auVar73._0_8_ = auVar69._0_8_ * (double)auVar1._0_8_ - auVar45._0_8_ * auVar101._0_8_;
      auVar73._8_8_ = auVar69._8_8_ * (double)auVar1._8_8_ - auVar45._8_8_ * auVar101._8_8_;
      auVar47._8_4_ = SUB84(auVar84._8_8_,0);
      auVar47._0_8_ = auVar84._0_8_;
      auVar47._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
      auVar45 = blendpd(auVar84,auVar73,2);
      dVar123 = (double)param_3->_padding_;
      dVar15 = (double)param_3->_padding_;
      (param_5->field0_0x0)._s_0.X =
           dVar93 * dVar98 + dVar108 + auVar47._8_8_ + (double)param_3->_padding_;
      (param_5->field0_0x0)._s_0.Y = dVar97 * dVar98 + dVar115 + auVar73._0_8_ + dVar123;
      (param_5->field0_0x0)._s_0.Z = auVar101._0_8_ * dVar98 + dVar14 + auVar45._0_8_ + dVar15;
      dVar15 = UE::Math::TQuat<double>::Identity.Y;
      param_6->X = UE::Math::TQuat<double>::Identity.X;
      param_6->Y = dVar15;
      dVar15 = UE::Math::TQuat<double>::Identity.W;
      param_6->Z = UE::Math::TQuat<double>::Identity.Z;
      param_6->W = dVar15;
    }
    else if (uVar9 == '\x01') {
      this_00 = &pFVar10->MultiSizeIndexContainer;
      local_2a8 = this_00;
      pFVar37 = FMultiSizeIndexContainer::GetIndexBuffer(this_00);
      iVar30 = (**(code **)(pFVar37->_padding_ + 0x50))(pFVar37);
      if (param_4 + 2 < iVar30) {
        pFVar37 = FMultiSizeIndexContainer::GetIndexBuffer(this_00);
        iVar30 = (**(code **)(pFVar37->_padding_ + 0x60))(pFVar37,param_4);
        pFVar37 = FMultiSizeIndexContainer::GetIndexBuffer(this_00);
        iVar31 = (**(code **)(pFVar37->_padding_ + 0x60))(pFVar37,param_4 + 1);
        pFVar37 = FMultiSizeIndexContainer::GetIndexBuffer(local_2a8);
        iVar32 = (**(code **)(pFVar37->_padding_ + 0x60))(pFVar37,param_4 + 2);
        pTVar35 = USkeletalMeshComponent::GetSkinnedVertexPosition
                            (&local_1ac,param_3,iVar30,local_2b0,pFVar34);
        dVar108 = (double)param_3->_padding_;
        auVar45._0_8_ = param_3->_padding_;
        auVar45._8_8_ = param_3->_padding_;
        auVar104._0_8_ = (double)(pTVar35->field0_0x0)._s_0.Z * (double)param_3->_padding_;
        auVar104._8_8_ = (double)param_3->_padding_ * 0.0;
        auVar69._0_8_ = param_3->_padding_;
        auVar69._8_8_ = param_3->_padding_;
        dVar15 = (double)(pTVar35->field0_0x0)._s_0.X * (double)param_3->_padding_;
        dVar123 = (double)(pTVar35->field0_0x0)._s_0.Y * (double)param_3->_padding_;
        uVar92 = (undefined4)((ulonglong)dVar123 >> 0x20);
        auVar71 = blendpd(auVar45,auVar69,2);
        auVar120._8_4_ = SUB84(dVar123,0);
        auVar120._0_8_ = dVar15;
        auVar120._12_4_ = uVar92;
        auVar121._0_8_ = auVar120._8_8_ * (double)auVar45._0_8_ - (double)auVar45._8_8_ * dVar15;
        auVar121._8_8_ = auVar104._0_8_ * (double)auVar45._8_8_ - (double)auVar69._0_8_ * dVar123;
        auVar52._8_4_ = SUB84(dVar123,0);
        auVar52._0_8_ = dVar15;
        auVar52._12_4_ = uVar92;
        auVar45 = blendpd(auVar52,auVar104,2);
        auVar53._0_8_ = auVar45._0_8_ * (double)auVar69._0_8_ - auVar71._0_8_ * auVar104._0_8_;
        auVar53._8_8_ = auVar45._8_8_ * (double)auVar69._8_8_ - auVar71._8_8_ * auVar104._8_8_;
        auVar71._0_8_ = param_3->_padding_;
        auVar71._8_8_ = param_3->_padding_;
        dVar14 = auVar121._8_8_ + auVar121._8_8_;
        dVar98 = auVar53._0_8_ + auVar53._0_8_;
        uVar92 = (undefined4)((ulonglong)dVar98 >> 0x20);
        auVar45 = blendpd(auVar121,auVar53,2);
        auVar85._8_4_ = SUB84(dVar98,0);
        auVar85._0_8_ = dVar14;
        auVar85._12_4_ = uVar92;
        auVar75._8_4_ = SUB84(dVar98,0);
        auVar75._0_8_ = dVar14;
        auVar75._12_4_ = uVar92;
        auVar122._0_8_ = auVar45._0_8_ + auVar45._0_8_;
        auVar122._8_8_ = auVar45._8_8_ + auVar45._8_8_;
        auVar76 = blendpd(auVar75,auVar122,2);
        auVar86._0_8_ = auVar85._8_8_ * (double)auVar71._0_8_ - (double)auVar71._8_8_ * dVar14;
        auVar86._8_8_ = auVar122._0_8_ * (double)auVar71._8_8_ - (double)auVar69._0_8_ * dVar98;
        auVar45 = blendpd(auVar71,auVar69,2);
        auVar54._8_4_ = SUB84(auVar86._8_8_,0);
        auVar54._0_8_ = auVar86._0_8_;
        auVar54._12_4_ = (int)((ulonglong)auVar86._8_8_ >> 0x20);
        auVar77._0_8_ = auVar76._0_8_ * (double)auVar69._0_8_ - auVar45._0_8_ * auVar122._0_8_;
        auVar77._8_8_ = auVar76._8_8_ * (double)auVar69._8_8_ - auVar45._8_8_ * auVar122._8_8_;
        dVar93 = dVar14 * dVar108 + dVar15 + auVar54._8_8_ + (double)param_3->_padding_;
        dVar97 = dVar98 * dVar108 + dVar123 + auVar77._0_8_ + (double)param_3->_padding_;
        auVar45 = blendpd(auVar86,auVar77,2);
        dVar117 = auVar122._0_8_ * dVar108 + auVar104._0_8_ + auVar45._0_8_ +
                  (double)param_3->_padding_;
        pTVar35 = USkeletalMeshComponent::GetSkinnedVertexPosition
                            (local_1a0,param_3,iVar31,local_2b0,pFVar34);
        dVar108 = (double)param_3->_padding_;
        auVar76._0_8_ = param_3->_padding_;
        auVar76._8_8_ = param_3->_padding_;
        auVar105._0_8_ = (double)(pTVar35->field0_0x0)._s_0.Z * (double)param_3->_padding_;
        auVar105._8_8_ = (double)param_3->_padding_ * 0.0;
        auVar4._0_8_ = param_3->_padding_;
        auVar4._8_8_ = param_3->_padding_;
        dVar15 = (double)(pTVar35->field0_0x0)._s_0.X * (double)param_3->_padding_;
        dVar123 = (double)(pTVar35->field0_0x0)._s_0.Y * (double)param_3->_padding_;
        uVar92 = (undefined4)((ulonglong)dVar123 >> 0x20);
        auVar69 = blendpd(auVar76,auVar4,2);
        auVar112._8_4_ = SUB84(dVar123,0);
        auVar112._0_8_ = dVar15;
        auVar112._12_4_ = uVar92;
        auVar113._0_8_ = auVar112._8_8_ * (double)auVar76._0_8_ - (double)auVar76._8_8_ * dVar15;
        auVar113._8_8_ = auVar105._0_8_ * (double)auVar76._8_8_ - (double)auVar4._0_8_ * dVar123;
        auVar55._8_4_ = SUB84(dVar123,0);
        auVar55._0_8_ = dVar15;
        auVar55._12_4_ = uVar92;
        auVar45 = blendpd(auVar55,auVar105,2);
        auVar56._0_8_ = auVar45._0_8_ * (double)auVar4._0_8_ - auVar69._0_8_ * auVar105._0_8_;
        auVar56._8_8_ = auVar45._8_8_ * (double)auVar4._8_8_ - auVar69._8_8_ * auVar105._8_8_;
        auVar5._0_8_ = param_3->_padding_;
        auVar5._8_8_ = param_3->_padding_;
        auVar45 = blendpd(auVar113,auVar56,2);
        dVar14 = auVar113._8_8_ + auVar113._8_8_;
        dVar98 = auVar56._0_8_ + auVar56._0_8_;
        uVar92 = (undefined4)((ulonglong)dVar98 >> 0x20);
        auVar114._0_8_ = auVar45._0_8_ + auVar45._0_8_;
        auVar114._8_8_ = auVar45._8_8_ + auVar45._8_8_;
        auVar87._8_4_ = SUB84(dVar98,0);
        auVar87._0_8_ = dVar14;
        auVar87._12_4_ = uVar92;
        auVar78._8_4_ = SUB84(dVar98,0);
        auVar78._0_8_ = dVar14;
        auVar78._12_4_ = uVar92;
        auVar69 = blendpd(auVar78,auVar114,2);
        auVar88._0_8_ = auVar87._8_8_ * (double)auVar5._0_8_ - (double)auVar5._8_8_ * dVar14;
        auVar88._8_8_ = auVar114._0_8_ * (double)auVar5._8_8_ - (double)auVar4._0_8_ * dVar98;
        auVar57._8_4_ = SUB84(auVar88._8_8_,0);
        auVar57._0_8_ = auVar88._0_8_;
        auVar57._12_4_ = (int)((ulonglong)auVar88._8_8_ >> 0x20);
        auVar45 = blendpd(auVar5,auVar4,2);
        auVar79._0_8_ = auVar69._0_8_ * (double)auVar4._0_8_ - auVar45._0_8_ * auVar114._0_8_;
        auVar79._8_8_ = auVar69._8_8_ * (double)auVar4._8_8_ - auVar45._8_8_ * auVar114._8_8_;
        auVar45 = blendpd(auVar88,auVar79,2);
        dVar14 = dVar14 * dVar108 + dVar15 + auVar57._8_8_ + (double)param_3->_padding_;
        dVar98 = dVar98 * dVar108 + dVar123 + auVar79._0_8_ + (double)param_3->_padding_;
        dVar109 = auVar114._0_8_ * dVar108 + auVar105._0_8_ + auVar45._0_8_ +
                  (double)param_3->_padding_;
        pTVar35 = USkeletalMeshComponent::GetSkinnedVertexPosition
                            ((TVector<float> *)local_268,param_3,iVar32,local_2b0,pFVar34);
        dVar21 = __real_3e45798ee0000000;
        auVar106._0_8_ = (double)(pTVar35->field0_0x0)._s_0.Z * (double)param_3->_padding_;
        auVar106._8_8_ = (double)param_3->_padding_ * 0.0;
        auVar6._0_8_ = param_3->_padding_;
        auVar6._8_8_ = param_3->_padding_;
        dVar20 = (double)param_3->_padding_;
        auVar7._0_8_ = param_3->_padding_;
        auVar7._8_8_ = param_3->_padding_;
        dVar15 = (double)(pTVar35->field0_0x0)._s_0.X * (double)param_3->_padding_;
        dVar123 = (double)(pTVar35->field0_0x0)._s_0.Y * (double)param_3->_padding_;
        uVar92 = (undefined4)((ulonglong)dVar123 >> 0x20);
        auVar69 = blendpd(auVar6,auVar7,2);
        auVar125._8_4_ = SUB84(dVar123,0);
        auVar125._0_8_ = dVar15;
        auVar125._12_4_ = uVar92;
        auVar126._0_8_ = auVar125._8_8_ * (double)auVar6._0_8_ - (double)auVar6._8_8_ * dVar15;
        auVar126._8_8_ = auVar106._0_8_ * (double)auVar6._8_8_ - (double)auVar7._0_8_ * dVar123;
        auVar58._8_4_ = SUB84(dVar123,0);
        auVar58._0_8_ = dVar15;
        auVar58._12_4_ = uVar92;
        auVar45 = blendpd(auVar58,auVar106,2);
        auVar59._0_8_ = auVar45._0_8_ * (double)auVar7._0_8_ - auVar69._0_8_ * auVar106._0_8_;
        auVar59._8_8_ = auVar45._8_8_ * (double)auVar7._8_8_ - auVar69._8_8_ * auVar106._8_8_;
        auVar8._0_8_ = param_3->_padding_;
        auVar8._8_8_ = param_3->_padding_;
        auVar45 = blendpd(auVar126,auVar59,2);
        dVar108 = auVar126._8_8_ + auVar126._8_8_;
        dVar115 = auVar59._0_8_ + auVar59._0_8_;
        uVar92 = (undefined4)((ulonglong)dVar115 >> 0x20);
        auVar127._0_8_ = auVar45._0_8_ + auVar45._0_8_;
        auVar127._8_8_ = auVar45._8_8_ + auVar45._8_8_;
        auVar89._8_4_ = SUB84(dVar115,0);
        auVar89._0_8_ = dVar108;
        auVar89._12_4_ = uVar92;
        auVar80._8_4_ = SUB84(dVar115,0);
        auVar80._0_8_ = dVar108;
        auVar80._12_4_ = uVar92;
        auVar69 = blendpd(auVar80,auVar127,2);
        auVar90._0_8_ = auVar89._8_8_ * (double)auVar8._0_8_ - (double)auVar8._8_8_ * dVar108;
        auVar90._8_8_ = auVar127._0_8_ * (double)auVar8._8_8_ - (double)auVar7._0_8_ * dVar115;
        auVar45 = blendpd(auVar8,auVar7,2);
        auVar81._0_8_ = auVar69._0_8_ * (double)auVar7._0_8_ - auVar45._0_8_ * auVar127._0_8_;
        auVar81._8_8_ = auVar69._8_8_ * (double)auVar7._8_8_ - auVar45._8_8_ * auVar127._8_8_;
        auVar60._8_4_ = SUB84(auVar90._8_8_,0);
        auVar60._0_8_ = auVar90._0_8_;
        auVar60._12_4_ = (int)((ulonglong)auVar90._8_8_ >> 0x20);
        dVar15 = dVar108 * dVar20 + dVar15 + auVar60._8_8_ + (double)param_3->_padding_;
        local_268._8_8_ = dVar115 * dVar20 + dVar123 + auVar81._0_8_ + (double)param_3->_padding_;
        uVar92 = (undefined4)((ulonglong)local_268._8_8_ >> 0x20);
        auVar45 = blendpd(auVar90,auVar81,2);
        auVar61._8_4_ = (int)local_268._8_8_;
        auVar61._0_8_ = dVar15;
        auVar61._12_4_ = uVar92;
        local_2a0._s_0.X = dVar15 - dVar93;
        auVar17._4_8_ = auVar61._8_8_;
        auVar17._0_4_ = (int)((ulonglong)dVar15 >> 0x20);
        auVar62._0_8_ = auVar17._0_8_ << 0x20;
        auVar62._8_4_ = (int)local_268._8_8_;
        auVar62._12_4_ = uVar92;
        dVar123 = auVar127._0_8_ * dVar20 + auVar106._0_8_ + auVar45._0_8_ +
                  (double)param_3->_padding_;
        local_268._0_8_ = auVar62._8_8_;
        local_2a0._s_0.Y = (double)local_268._0_8_ - dVar97;
        local_2a0._s_0.Z = dVar123 - dVar117;
        UE::Math::TVector<double>::Normalize
                  ((TVector<double> *)&local_2a0._s_0,__real_3e45798ee0000000);
        local_2e0._s_0.X = dVar14 - dVar93;
        auVar18._4_8_ = auVar106._8_8_;
        auVar18._0_4_ = (int)((ulonglong)dVar14 >> 0x20);
        auVar107._0_8_ = auVar18._0_8_ << 0x20;
        auVar107._8_4_ = SUB84(dVar98,0);
        auVar107._12_4_ = (int)((ulonglong)dVar98 >> 0x20);
        local_2e0._s_0.Y = auVar107._8_8_ - dVar97;
        local_2e0._s_0.Z = dVar109 - dVar117;
        UE::Math::TVector<double>::Normalize((TVector<double> *)&local_2e0._s_0,dVar21);
        auVar91._0_8_ = local_2e0._s_0.Z * local_2a0._s_0.X;
        auVar91._8_8_ = 0;
        local_2c8._s_0.X = local_2e0._s_0.Z * local_2a0._s_0.Y - local_2e0._s_0.Y * local_2a0._s_0.Z
        ;
        local_2c8._s_0.Y = local_2e0._s_0.X * local_2a0._s_0.Z - auVar91._0_8_;
        local_2c8._s_0.Z = local_2e0._s_0.Y * local_2a0._s_0.X - local_2e0._s_0.X * local_2a0._s_0.Y
        ;
        UE::Math::TVector<double>::Normalize((TVector<double> *)&local_2c8._s_0,dVar21);
        uVar27 = local_2c8._s_0.Z;
        uVar26 = local_2c8._s_0.Y;
        uVar25 = local_2c8._s_0.X;
        uVar24 = local_2e0._s_0.Z;
        uVar23 = local_2e0._s_0.Y;
        uVar22 = local_2e0._s_0.X;
        if (((this->bEnforceNormalCheck == 0) || (!param_7)) ||
           ((this->NormalCheckTolerance + this->NormalCheckTolerance) - __real_3f800000 <=
            (float)(local_2c8._s_0.Y * (this->NormalToCompare).field0_0x0._s_0.Y +
                    local_2c8._s_0.X * (this->NormalToCompare).field0_0x0._s_0.X +
                   local_2c8._s_0.Z * (this->NormalToCompare).field0_0x0._s_0.Z))) {
          dVar98 = (auVar107._8_8_ + dVar97 + (double)local_268._0_8_) * __real_3fd5555555555555;
          dVar123 = (dVar109 + dVar117 + dVar123) * __real_3fd5555555555555;
          (param_5->field0_0x0)._s_0.X = (dVar14 + dVar93 + dVar15) * __real_3fd5555555555555;
          (param_5->field0_0x0)._s_0.Y = dVar98;
          (param_5->field0_0x0)._s_0.Z = dVar123;
          dVar15 = UE::Math::TQuat<double>::Identity.Y;
          if (this->bOrientMeshEmitters == 0) {
            param_6->X = UE::Math::TQuat<double>::Identity.X;
            param_6->Y = dVar15;
            dVar15 = UE::Math::TQuat<double>::Identity.W;
            param_6->Z = UE::Math::TQuat<double>::Identity.Z;
            param_6->W = dVar15;
          }
          else {
            local_288._s_0.X =
                 local_2c8._s_0.Y * local_2e0._s_0.Z - local_2c8._s_0.Z * local_2e0._s_0.Y;
            local_288._s_0.Y =
                 local_2c8._s_0.Z * local_2e0._s_0.X - local_2c8._s_0.X * local_2e0._s_0.Z;
            local_288._s_0.Z =
                 local_2c8._s_0.X * local_2e0._s_0.Y - local_2c8._s_0.Y * local_2e0._s_0.X;
            UE::Math::TVector<double>::Normalize((TVector<double> *)&local_288._s_0,dVar21);
            local_238.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
            local_238.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
            local_238.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
            local_238.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
            local_238.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
            local_238.M[1][0] = local_288._s_0.X;
            local_238.M[1][1] = local_288._s_0.Y;
            local_238.M[1][2] = local_288._s_0.Z;
            local_238.M[0][0] = (double)uVar22;
            local_238.M[0][1] = (double)uVar23;
            local_238.M[0][2] = (double)uVar24;
            local_238.M[2][0] = (double)uVar25;
            local_238.M[2][1] = (double)uVar26;
            local_238.M[2][2] = (double)uVar27;
            local_238.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
            local_238.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
            pTVar38 = UE::Math::TQuat<double>::TQuat<double>(local_f8,&local_238);
            dVar15 = pTVar38->Y;
            param_6->X = pTVar38->X;
            param_6->Y = dVar15;
            dVar15 = pTVar38->Z;
            dVar123 = pTVar38->W;
            param_6->Z = dVar15;
            param_6->W = dVar123;
            dVar14 = param_6->X;
            dVar98 = param_6->Y;
            dVar93 = dVar15 * dVar15 + dVar14 * dVar14;
            dVar97 = dVar123 * dVar123 + dVar98 * dVar98;
            auVar63._8_4_ = SUB84(dVar97,0);
            auVar63._0_8_ = dVar93;
            auVar63._12_4_ = (int)((ulonglong)dVar97 >> 0x20);
            auVar64._0_8_ = auVar63._8_8_ + dVar93;
            auVar64._8_8_ = dVar93 + dVar97;
            auVar45 = sqrtpd(auVar91,auVar64);
            uVar41 = -(ulonglong)(dVar21 <= auVar64._0_8_);
            uVar43 = -(ulonglong)(dVar21 <= auVar64._8_8_);
            auVar69 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar45)
            ;
            uVar131 = (uint)(uVar41 >> 0x20);
            uVar132 = (uint)(uVar43 >> 0x20);
            auVar96._0_8_ = uVar41 & (ulonglong)(auVar69._0_8_ * dVar14);
            uVar19 = uVar43 & (ulonglong)(auVar69._8_8_ * dVar98);
            auVar96._8_4_ = (undefined4)uVar19;
            auVar96._12_4_ = (undefined4)(uVar19 >> 0x20);
            auVar67._0_4_ =
                 ~(uint)uVar41 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
            auVar67._4_4_ =
                 ~uVar131 &
                 (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
            auVar67._8_4_ =
                 ~(uint)uVar43 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            auVar67._12_4_ =
                 ~uVar132 &
                 (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar45)
            ;
            auVar82._0_4_ =
                 ~(uint)uVar41 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
            auVar82._4_4_ =
                 ~uVar131 &
                 (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
            auVar82._8_4_ =
                 ~(uint)uVar43 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            auVar82._12_4_ =
                 ~uVar132 &
                 (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            param_6->X = (double)SUB168(auVar96 | auVar67,0);
            param_6->Y = (double)SUB168(auVar96 | auVar67,8);
            auVar68._0_8_ = (ulonglong)(auVar45._0_8_ * dVar15) & uVar41;
            uVar43 = (ulonglong)(auVar45._8_8_ * dVar123) & uVar43;
            auVar68._8_4_ = (undefined4)uVar43;
            auVar68._12_4_ = (undefined4)(uVar43 >> 0x20);
            param_6->Z = (double)SUB168(auVar82 | auVar68,0);
            param_6->W = (double)SUB168(auVar82 | auVar68,8);
          }
          goto LAB_14817bd75;
        }
      }
      return false;
    }
  }
LAB_14817bd75:
  if (((local_270->Owner->CurrentLODLevel->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace != 0
     ) {
    pdVar36 = (double *)(**(code **)((longlong)*local_270->Owner->Component + 0x10))();
    dVar93 = (param_5->field0_0x0)._s_0.Z - pdVar36[6];
    dVar14 = (param_5->field0_0x0)._s_0.X - pdVar36[4];
    dVar98 = (param_5->field0_0x0)._s_0.Y - pdVar36[5];
    uVar116 = (undefined4)((ulonglong)dVar98 >> 0x20);
    dVar108 = *pdVar36 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar115 = pdVar36[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar128._8_4_ = SUB84(dVar98,0);
    auVar128._0_8_ = dVar14;
    auVar128._12_4_ = uVar116;
    auVar95._0_8_ = pdVar36[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    auVar95._8_8_ = pdVar36[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar70._8_4_ = SUB84(dVar115,0);
    auVar70._0_8_ = dVar108;
    uVar92 = (undefined4)((ulonglong)dVar115 >> 0x20);
    auVar70._12_4_ = uVar92;
    auVar124._8_4_ = SUB84(auVar95._8_8_,0);
    auVar124._0_8_ = auVar95._0_8_;
    auVar124._12_4_ = (int)((ulonglong)auVar95._8_8_ >> 0x20);
    dVar97 = auVar70._8_8_;
    auVar74._8_4_ = SUB84(dVar115,0);
    auVar74._0_8_ = dVar108;
    auVar74._12_4_ = uVar92;
    auVar48._8_4_ = SUB84(auVar95._0_8_,0);
    auVar48._0_8_ = dVar97;
    auVar48._12_4_ = (int)((ulonglong)auVar95._0_8_ >> 0x20);
    auVar69 = blendpd(auVar74,auVar95,2);
    auVar129._0_8_ = auVar128._8_8_ * dVar108 - dVar97 * dVar14;
    auVar129._8_8_ = dVar93 * dVar115 - auVar48._8_8_ * dVar98;
    auVar65._8_4_ = SUB84(dVar98,0);
    auVar65._0_8_ = dVar14;
    auVar65._12_4_ = uVar116;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = dVar93;
    auVar45 = blendpd(auVar65,auVar16,2);
    auVar66._0_8_ = auVar45._0_8_ * auVar95._0_8_ - auVar69._0_8_ * dVar93;
    auVar66._8_8_ = auVar45._8_8_ * auVar95._8_8_ - auVar69._8_8_ * 0.0;
    auVar45 = blendpd(auVar129,auVar66,2);
    dVar15 = auVar129._8_8_ + auVar129._8_8_;
    dVar123 = auVar66._0_8_ + auVar66._0_8_;
    uVar92 = SUB84(dVar123,0);
    uVar116 = (undefined4)((ulonglong)dVar123 >> 0x20);
    auVar130._0_8_ = auVar45._0_8_ + auVar45._0_8_;
    auVar130._8_8_ = auVar45._8_8_ + auVar45._8_8_;
    auVar118._8_4_ = uVar92;
    auVar118._0_8_ = dVar15;
    auVar118._12_4_ = uVar116;
    auVar49._8_4_ = uVar92;
    auVar49._0_8_ = dVar15;
    auVar49._12_4_ = uVar116;
    auVar110._8_4_ = uVar92;
    auVar110._0_8_ = dVar15;
    auVar110._12_4_ = uVar116;
    auVar45 = blendpd(auVar110,auVar130,2);
    auVar102._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)pdVar36 + 0x44),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)(pdVar36 + 8));
    auVar102._8_4_ = _UNK_15061cc88 & *(uint *)(pdVar36 + 9);
    auVar102._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)pdVar36 + 0x4c);
    auVar119._0_8_ = auVar118._8_8_ * dVar108 - dVar15 * dVar97;
    auVar119._8_8_ = auVar130._0_8_ * dVar115 - auVar49._8_8_ * auVar95._0_8_;
    auVar50._8_4_ = SUB84(auVar130._8_8_,0);
    auVar50._0_8_ = auVar130._0_8_;
    auVar50._12_4_ = (int)((ulonglong)auVar130._8_8_ >> 0x20);
    auVar111._0_8_ = auVar45._0_8_ * auVar95._0_8_ - auVar130._0_8_ * auVar69._0_8_;
    auVar111._8_8_ = auVar45._8_8_ * auVar95._8_8_ - auVar50._8_8_ * auVar69._8_8_;
    auVar45 = *(undefined1 (*) [16])(pdVar36 + 10);
    lVar39 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar45._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar45._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar69 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                    *(undefined1 (*) [16])(pdVar36 + 8));
    lVar40 = -(ulonglong)(auVar102._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar42 = -(ulonglong)(auVar102._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar51._8_4_ = SUB84(auVar119._8_8_,0);
    auVar51._0_8_ = auVar119._0_8_;
    auVar51._12_4_ = (int)((ulonglong)auVar119._8_8_ >> 0x20);
    auVar103._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar40 >> 0x20) & auVar69._4_4_,
                          ~(uint)lVar40 & auVar69._0_4_);
    auVar103._8_4_ = ~(uint)lVar42 & auVar69._8_4_;
    auVar103._12_4_ = ~(uint)((ulonglong)lVar42 >> 0x20) & auVar69._12_4_;
    auVar12._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar12._0_8_ = auVar45._0_8_;
    auVar12._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar12);
    auVar69 = blendpd(auVar119,auVar111,2);
    (param_5->field0_0x0)._s_0.X =
         auVar103._0_8_ * (dVar15 * auVar124._8_8_ + dVar14 + auVar51._8_8_);
    (param_5->field0_0x0)._s_0.Y =
         auVar103._8_8_ * (dVar123 * auVar95._8_8_ + dVar98 + auVar111._0_8_);
    (param_5->field0_0x0)._s_0.Z =
         (double)CONCAT44(~(uint)((ulonglong)lVar39 >> 0x20) & auVar45._4_4_,
                          ~(uint)lVar39 & auVar45._0_4_) *
         (auVar130._0_8_ * auVar124._8_8_ + dVar93 + auVar69._0_8_);
  }
  (param_5->field0_0x0)._s_0.X =
       (param_5->field0_0x0)._s_0.X + (this->UniversalOffset).field0_0x0._s_0.X;
  (param_5->field0_0x0)._s_0.Y =
       (this->UniversalOffset).field0_0x0._s_0.Y + (param_5->field0_0x0)._s_0.Y;
  (param_5->field0_0x0)._s_0.Z =
       (this->UniversalOffset).field0_0x0._s_0.Z + (param_5->field0_0x0)._s_0.Z;
  return true;
}

// GetSkeletalMeshComponentSource @ 14817d8e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleModuleLocationSkelVertSurface::GetSkeletalMeshComponentSource
          (UParticleModuleLocationSkelVertSurface *this,FContext *param_1,
          FModuleLocationVertSurfaceInstancePayload *param_2)

{
  FParticleEmitterInstance *this_00;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  AActor *pAVar7;
  UClass *pUVar8;
  USkeletalMesh *pUVar9;
  FSceneInterface *pFVar10;
  FSkeletalMeshRenderData *this_01;
  FSkinWeightVertexBuffer *pFVar11;
  FRawStaticIndexBuffer16or32Interface *pFVar12;
  FWeakObjectPtr *this_02;
  USkeletalMeshComponent *pUVar13;
  longlong lVar14;
  int *piVar15;
  UObjectBaseUtility *this_03;
  uint uVar16;
  USkeletalMeshComponent *pUVar17;
  int iVar18;
  USkeletalMeshComponent *pUVar19;
  USkeletalMeshComponent *pUVar20;
  bool bVar21;
  USkeletalMeshComponent *local_res10 [2];
  int local_res20;
  AActor *local_a8;
  FWeakObjectPtr local_a0;
  undefined8 local_98;
  undefined8 local_90;
  AActor *local_88;
  FMultiSizeIndexContainer *local_80;
  longlong local_78;
  FString local_70;
  void *local_60 [2];
  FString local_50;
  
  pUVar19 = (USkeletalMeshComponent *)0x0;
  local_res10[0] = (USkeletalMeshComponent *)((ulonglong)local_res10[0] & 0xffffffff00000000);
  this_00 = param_1->Owner;
  if (this_00 == (FParticleEmitterInstance *)0x0) {
    return;
  }
  plVar6 = (longlong *)(**(code **)((longlong)*this_00->Component + 0x138))();
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  local_a8 = (AActor *)0x0;
  (**(code **)(*plVar6 + 0xb90))(plVar6,this->SkelMeshActorParamName,&local_a8);
  pAVar7 = (AActor *)FWeakObjectPtr::Get(&(param_2->CachedActor).WeakPtr);
  bVar21 = pAVar7 == local_a8;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_2);
  if ((bVar3) && (bVar21)) {
    return;
  }
  local_a0.ObjectIndex = 0;
  local_a0.ObjectSerialNumber = 0;
  local_90 = 0;
  FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_90);
  (param_2->SourceComponent).WeakPtr = local_a0;
  local_88 = local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  FWeakObjectPtr::operator=(&(param_2->CachedActor).WeakPtr,(FObjectPtr)&local_88);
  pAVar7 = local_a8;
  if (local_a8 == (AActor *)0x0) {
    return;
  }
  pUVar8 = Z_Construct_UClass_ASkeletalMeshActor_NoRegister();
  iVar4 = (int)pUVar8->_padding_;
  if (((*(int *)(pAVar7->_padding_ + 0x38) < iVar4) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar4 * 8)
       != &pUVar8->_padding_)) || (pAVar7 == (AActor *)0x0)) {
    pUVar13 = AActor::FindComponentByClass<USkeletalMeshComponent>(local_a8);
    pUVar17 = pUVar19;
  }
  else {
    pUVar13 = (USkeletalMeshComponent *)pAVar7[1]._padding_;
    pUVar17 = pUVar13;
  }
  if (((pUVar13 == (USkeletalMeshComponent *)0x0) ||
      (pFVar10 = UActorComponent::GetScene((UActorComponent *)pUVar13), pUVar17 = pUVar13,
      pFVar10 == (FSceneInterface *)0x0)) ||
     (pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar13), pUVar9 == (USkeletalMesh *)0x0
     )) goto LAB_14817da26;
  this_01 = USkinnedMeshComponent::GetSkeletalMeshRenderData((USkinnedMeshComponent *)pUVar13);
  pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar13);
  iVar4 = (**(code **)(pUVar9->_padding_ + 0x448))(pUVar9,0);
  uVar5 = FSkeletalMeshRenderData::GetFirstValidLODIdx(this_01,iVar4);
  if (uVar5 == 0xffffffff) goto LAB_14817da26;
  pFVar11 = USkinnedMeshComponent::GetSkinWeightBuffer((USkinnedMeshComponent *)pUVar13,uVar5);
  uVar16 = 0;
  if ((int)uVar5 < (this_01->LODRenderData).Array.ArrayNum) {
    uVar16 = ~uVar5 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar14 = *(longlong *)
            ((this_01->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
  local_res20 = *(int *)(lVar14 + 300);
  if (((pFVar11 == (FSkinWeightVertexBuffer *)0x0) || ((pFVar11->DataVertexBuffer).NumVertices == 0)
      ) || ((pFVar11->DataVertexBuffer).bNeedsCPUAccess == false)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  local_78 = *(longlong *)(lVar14 + 0x28);
  if (local_78 == 0) {
LAB_14817dc36:
    local_res10[0] = (USkeletalMeshComponent *)((ulonglong)local_res10[0] & 0xffffffffffffff00);
LAB_14817dc3e:
    bVar21 = false;
  }
  else {
    local_80 = (FMultiSizeIndexContainer *)(lVar14 + 0x20);
    pFVar12 = FMultiSizeIndexContainer::GetIndexBuffer(local_80);
    if (pFVar12 == (FRawStaticIndexBuffer16or32Interface *)0x0) goto LAB_14817dc36;
    local_res10[0] = (USkeletalMeshComponent *)CONCAT71(local_res10[0]._1_7_,1);
    pFVar12 = FMultiSizeIndexContainer::GetIndexBuffer(local_80);
    iVar4 = (**(code **)(pFVar12->_padding_ + 0x50))(pFVar12);
    if (iVar4 < 1) goto LAB_14817dc3e;
    bVar21 = true;
  }
  if (((local_res20 != 0) && (pFVar11 != (FSkinWeightVertexBuffer *)0x0)) &&
     (((bVar3 && ((local_78 != 0 && ((char)local_res10[0] != '\0')))) && (bVar21)))) {
    param_2->MeshMinLOD = uVar5;
    local_res10[0] = pUVar13;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_2,(FObjectPtr)local_res10);
    this_02 = (FWeakObjectPtr *)
              FParticleEmitterInstance::GetModuleInstanceData(this_00,(UParticleModule *)this);
    pUVar13 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(this_02);
    if (pUVar13 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    pUVar17 = pUVar19;
    pUVar20 = pUVar19;
    uVar5 = 0;
    if (0 < (this->ValidAssociatedBones).ArrayNum) {
      do {
        pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar13);
        lVar14 = (**(code **)(pUVar9->_padding_ + 800))(pUVar9);
        uVar16 = (uint)pUVar19;
        uVar5 = 0;
        if ((int)uVar16 < (this->ValidAssociatedBones).ArrayNum) {
          uVar5 = ~uVar16 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_98 = 0;
        FVar1 = *(FName *)((longlong)&pUVar20->_padding_ +
                          (longlong)(this->ValidAssociatedBones).AllocatorInstance.Data);
        if ((((FVar1 != (FName)0x0) &&
             (piVar15 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                *)(lVar14 + 0x90),FVar1), piVar15 != (int *)0x0)) &&
            (iVar4 = *piVar15, iVar4 != -1)) &&
           (iVar18 = (int)pUVar17, iVar18 < (this->ValidAssociatedBones).ArrayNum)) {
          piVar15 = TPreallocatedArrayProxy<int>::operator[]
                              ((TPreallocatedArrayProxy<int> *)(this_02 + 3),iVar18);
          pUVar17 = (USkeletalMeshComponent *)(ulonglong)(iVar18 + 1);
          *piVar15 = iVar4;
        }
        uVar5 = (uint)pUVar17;
        pUVar19 = (USkeletalMeshComponent *)(ulonglong)(uVar16 + 1);
        pUVar20 = (USkeletalMeshComponent *)&pUVar20->_padding_;
      } while ((int)(uVar16 + 1) < (this->ValidAssociatedBones).ArrayNum);
    }
    this_02[2].ObjectSerialNumber = uVar5;
    return;
  }
LAB_14817da26:
  if (((2 < (byte)LogParticles._0_1_) &&
      (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
      2 < (byte)LogParticles._0_1_)) &&
     ((UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
      2 < (byte)LogParticles._0_1_ &&
      ((UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
       2 < (byte)LogParticles._0_1_ &&
       (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
       2 < (byte)LogParticles._0_1_)))))) {
    if (pUVar17 != (USkeletalMeshComponent *)0x0) {
      pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar17);
      pUVar19 = (USkeletalMeshComponent *)&DAT_00000001;
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar9,&local_70,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if ((pUVar19 != (USkeletalMeshComponent *)0x0) &&
       (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (2 < (byte)LogParticles._0_1_) {
      (**(code **)((longlong)*this_00->Component + 0x88))(this_00->Component,local_60);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (local_60[0] != (void *)0x0) {
        FMemory::Free(local_60[0]);
      }
      if (2 < (byte)LogParticles._0_1_) {
        this_03 = (UObjectBaseUtility *)(**(code **)((longlong)*this_00->Component + 0xd8))();
        UObjectBaseUtility::GetFullName(this_03,&local_50,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_System___s_151a2c400,
                   (FLogCategoryBase *)&LogParticles);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        if (2 < (byte)LogParticles._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        }
      }
    }
  }
  (**(code **)((longlong)*this_00->Component + 0x130))();
  return;
}

// PostLoad @ 14818c450

void __thiscall
UParticleModuleLocationSkelVertSurface::PostLoad(UParticleModuleLocationSkelVertSurface *this)

{
  float fVar1;
  FPackageFileVersion FVar2;
  float fVar3;
  
  UObject::PostLoad((UObject *)this);
  fVar1 = __real_43340000;
  fVar3 = this->NormalCheckToleranceDegrees;
  if (fVar3 <= __real_43340000) {
    if (fVar3 < 0.0) {
      this->NormalCheckToleranceDegrees = 0.0;
      fVar3 = 0.0;
    }
  }
  else {
    this->NormalCheckToleranceDegrees = 180.0;
    fVar3 = fVar1;
  }
  fVar3 = __real_3f800000 - fVar3 * __real_3bb60b61;
  this->NormalCheckTolerance = (fVar3 + fVar3) - __real_3f800000;
  FVar2 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar2 < 0x1ab) {
    this->bOrientMeshEmitters = 0;
  }
  return;
}

// PrepPerInstanceBlock @ 14818d9a0

uint __thiscall
UParticleModuleLocationSkelVertSurface::PrepPerInstanceBlock
          (UParticleModuleLocationSkelVertSurface *this,FParticleEmitterInstance *param_1,
          void *param_2)

{
  int iVar1;
  undefined4 uStack_14;
  
  if (param_2 != (void *)0x0) {
    iVar1 = (this->ValidAssociatedBones).ArrayNum;
    *(ulonglong *)((longlong)param_2 + 0x18) = CONCAT44(uStack_14,iVar1);
    *(longlong *)((longlong)param_2 + 0x20) = (longlong)param_2 + 0x50;
    *(ulonglong *)((longlong)param_2 + 0x28) = CONCAT44(uStack_14,iVar1);
    *(ulonglong *)((longlong)param_2 + 0x30) = (ulonglong)(iVar1 * 4 + 0x50) + (longlong)param_2;
    *(ulonglong *)((longlong)param_2 + 0x38) = CONCAT44(uStack_14,iVar1);
    *(ulonglong *)((longlong)param_2 + 0x40) =
         (ulonglong)(uint)((iVar1 + 5) * 0x10) + (longlong)param_2;
  }
  return 0xffffffff;
}

// RequiredBytes @ 148191870

uint __thiscall
UParticleModuleLocationSkelVertSurface::RequiredBytes
          (UParticleModuleLocationSkelVertSurface *this,UParticleModuleTypeDataBase *param_1)

{
  return 4;
}

// RequiredBytesPerInstance @ 148191940

uint __thiscall
UParticleModuleLocationSkelVertSurface::RequiredBytesPerInstance
          (UParticleModuleLocationSkelVertSurface *this)

{
  return (this->ValidAssociatedBones).ArrayNum * 0x34 + 0x50;
}

// Spawn @ 14819bf90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UParticleModuleLocationSkelVertSurface::Spawn
          (UParticleModuleLocationSkelVertSurface *this,FSpawnContext *param_1)

{
  TVector<float> *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uchar uVar6;
  longlong lVar7;
  int *piVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  FName FVar17;
  bool bVar18;
  bool bVar19;
  USkeletalMeshComponent *pUVar20;
  FParticleRandomSeedInstancePayload *pFVar21;
  bool bVar22;
  bool bVar23;
  char cVar24;
  bool bVar25;
  byte bVar26;
  uint uVar27;
  int iVar28;
  FColor FVar29;
  int iVar30;
  FName *pFVar31;
  FThreadSafeStaticStat<FStat_STAT_ParticleSkelMeshSurfTime> FVar32;
  FModuleLocationVertSurfaceInstancePayload *this_01;
  FSkeletalMeshRenderData *pFVar33;
  TVector<float> *pTVar34;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  FRawStaticIndexBuffer16or32Interface *pFVar35;
  TVector2<double> *pTVar36;
  double *pdVar37;
  FBaseParticle *pFVar38;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  byte bVar39;
  uint uVar40;
  int *piVar41;
  FName FVar42;
  int iVar43;
  uint uVar44;
  FMultiSizeIndexContainer *pFVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  uint uVar48;
  FParticleEmitterInstance *pFVar49;
  FName FVar50;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  double dVar62;
  double dVar65;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined4 uVar69;
  undefined4 uVar70;
  double dVar71;
  double dVar74;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined4 local_1d8;
  int local_1d4;
  int local_1d0;
  FColor_u_0 local_1cc;
  USkeletalMeshComponent *local_1c8;
  longlong local_1c0;
  int local_1b8;
  int local_1b4;
  longlong local_1b0;
  FParticleRandomSeedInstancePayload *local_1a8;
  FParticleEmitterInstance *local_1a0;
  FName local_198;
  FName local_190;
  TVector<double>_u_0 local_180;
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  undefined1 local_160 [4];
  undefined1 local_15c [4];
  FSpawnContext *local_158;
  FSpawnContext *local_150;
  LARGE_INTEGER local_148;
  undefined1 local_140 [16];
  FStatMessage local_130;
  TQuat<double> local_118;
  TVector<double>_u_0 local_f8;
  TVector2<double> local_e0;
  TVector2<double> local_d0;
  TVector2<double> local_c0;
  TVector2<double> local_b0 [7];
  
  pFVar49 = (FParticleEmitterInstance *)param_1->_padding_;
  FVar32 = StatPtr_STAT_ParticleSkelMeshSurfTime;
  local_1a0 = pFVar49;
  if (StatPtr_STAT_ParticleSkelMeshSurfTime ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSkelMeshSurfTime>)0x0) {
    pFVar31 = ::FName::FName((FName *)local_140,"STAT_ParticleSkelMeshSurfTime");
    FVar32 = (FThreadSafeStaticStat<FStat_STAT_ParticleSkelMeshSurfTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleSkelMeshSurfTime,*pFVar31
                        ,L"Particle SkelMeshSurf Time GT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar42 = *(FName *)FVar32;
  bVar19 = false;
  bVar18 = false;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  bVar23 = false;
  bVar22 = false;
  if ((FVar42.ComparisonIndex.Value.Value == 0) && (FVar42.Number == 0)) {
LAB_14819c106:
    bVar19 = bVar23;
    bVar18 = bVar22;
    bVar22 = false;
    FVar42 = local_190;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1cc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1cc._s_0,(char *)*(FName *)((longlong)FVar32 + 0x10));
      bVar19 = false;
      bVar18 = true;
      bVar23 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_198.ComparisonIndex.Value = FVar42.ComparisonIndex.Value.Value;
        local_198.Number = FVar42.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_198,(wchar_t *)*(FName *)((longlong)FVar32 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                   ,0x8dd);
        bVar19 = true;
        bVar18 = true;
        bVar23 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14819c106;
    FThreadStats::AddMessage(FVar42,CycleScopeStart);
    bVar22 = true;
  }
  this_01 = (FModuleLocationVertSurfaceInstancePayload *)
            FParticleEmitterInstance::GetModuleInstanceData(pFVar49,(UParticleModule *)this);
  if (this_01 == (FModuleLocationVertSurfaceInstancePayload *)0x0) goto LAB_14819ccf7;
  local_1a8 = FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                        ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this);
  if (local_1a8 == (FParticleRandomSeedInstancePayload *)0x0) {
    local_1a8 = (FParticleRandomSeedInstancePayload *)
                (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
  }
  GetSkeletalMeshComponentSource(this,(FContext *)param_1,this_01);
  bVar23 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
  if ((!bVar23) || (this_01->MeshMinLOD == -1)) {
LAB_14819cce9:
    pFVar38 = param_1->ParticleBase;
LAB_14819cced:
    pFVar38->RelativeTime = 1.1;
    goto LAB_14819ccf7;
  }
  local_1c8 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
  if ((local_1c8 == (USkeletalMeshComponent *)0x0) ||
     (pFVar33 = USkinnedMeshComponent::GetSkeletalMeshRenderData((USkinnedMeshComponent *)local_1c8)
     , pFVar33 == (FSkeletalMeshRenderData *)0x0)) goto LAB_14819ccf7;
  uVar27 = this_01->MeshMinLOD;
  uVar48 = 0;
  if ((int)uVar27 < (pFVar33->LODRenderData).Array.ArrayNum) {
    uVar48 = ~uVar27 >> 0x1f;
  }
  if ((uVar48 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar23)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar21 = local_1a8;
  fVar5 = __real_3f800000;
  local_1c0 = *(longlong *)
               ((pFVar33->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar27 * 8);
  uVar6 = (this->SourceType).Value;
  local_1d0 = -1;
  if (uVar6 != '\0') {
    if (uVar6 != '\x01') goto LAB_14819ccf7;
    iVar28 = *(int *)(local_1c0 + 0x18);
    uVar27 = (local_1a8->RandomStream).Seed * 0xbb38435 + 0x3619636b;
    (local_1a8->RandomStream).Seed = uVar27;
    fVar55 = (float)(uVar27 >> 9 | 0x3f800000) - fVar5;
    uVar48 = (int)ROUND((fVar55 + fVar55) * ((float)iVar28 - fVar5) + __real_3f000000) >> 1;
    uVar27 = 0;
    if ((int)uVar48 < *(int *)(local_1c0 + 0x18)) {
      uVar27 = ~uVar48 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar7 = *(longlong *)(local_1c0 + 0x10);
    local_1b0 = (longlong)(int)uVar48 * 0x118;
    uVar40 = (pFVar21->RandomStream).Seed * 0xbb38435 + 0x3619636b;
    (pFVar21->RandomStream).Seed = uVar40;
    uVar27 = *(uint *)(lVar7 + 8 + local_1b0);
    uVar44 = 0;
    if ((int)uVar48 < *(int *)(local_1c0 + 0x18)) {
      uVar44 = ~uVar48 >> 0x1f;
    }
    if ((uVar44 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar28 = *(int *)(*(longlong *)(local_1c0 + 0x10) + 4 + local_1b0) +
             (int)((float)uVar27 * ((float)(uVar40 >> 9 | 0x3f800000) - fVar5)) * 3;
    this_01->VertIndex = iVar28;
    local_1d4 = iVar28;
    if (iVar28 == -1) goto LAB_14819ccf7;
    pFVar45 = (FMultiSizeIndexContainer *)(local_1c0 + 0x20);
    pFVar35 = FMultiSizeIndexContainer::GetIndexBuffer(pFVar45);
    iVar30 = (**(code **)(pFVar35->_padding_ + 0x60))(pFVar35,iVar28);
    pFVar35 = FMultiSizeIndexContainer::GetIndexBuffer(pFVar45);
    iVar43 = (**(code **)(pFVar35->_padding_ + 0x60))(pFVar35,iVar28 + 1);
    pFVar35 = FMultiSizeIndexContainer::GetIndexBuffer(pFVar45);
    local_1cc.Bits = (**(code **)(pFVar35->_padding_ + 0x60))(pFVar35,iVar28 + 2);
    pFVar49 = local_1a0;
    pUVar20 = local_1c8;
    local_1d0 = -1;
    local_1d8 = -1;
    local_1b8 = -1;
    local_1b4 = -1;
    bVar23 = VertInfluencedByActiveBone(this,local_1a0,this_01,local_1c8,iVar30,&local_1b4);
    iVar28 = local_1d0;
    iVar30 = -1;
    if (((bVar23) ||
        (bVar23 = VertInfluencedByActiveBone(this,pFVar49,this_01,pUVar20,iVar43,&local_1d8),
        iVar28 = local_1d8, bVar23)) ||
       (bVar23 = VertInfluencedByActiveBone(this,pFVar49,this_01,pUVar20,local_1cc.Bits,&local_1b8),
       iVar28 = local_1d8, iVar30 = local_1b8, bVar23)) {
      if (iVar28 < local_1b4) {
        iVar28 = local_1b4;
      }
      iVar43 = local_1d4;
      if (iVar30 < iVar28) {
        iVar30 = iVar28;
      }
      goto LAB_14819c544;
    }
    pFVar38 = param_1->ParticleBase;
    goto LAB_14819cced;
  }
  iVar28 = *(int *)(local_1c0 + 300);
  uVar27 = (local_1a8->RandomStream).Seed * 0xbb38435 + 0x3619636b;
  (local_1a8->RandomStream).Seed = uVar27;
  iVar43 = (int)(((float)(uVar27 >> 9 | 0x3f800000) - fVar5) * (float)iVar28 - fVar5);
  this_01->VertIndex = iVar43;
  local_1d4 = iVar43;
  if (iVar43 == -1) goto LAB_14819ccf7;
  bVar23 = VertInfluencedByActiveBone(this,pFVar49,this_01,local_1c8,iVar43,&local_1d0);
  iVar30 = local_1d0;
  if (!bVar23) goto LAB_14819cce9;
LAB_14819c544:
  iVar28 = (**(code **)(pFVar49->_padding_ + 0x150))(pFVar49);
  local_1b0 = CONCAT44(local_1b0._4_4_,iVar28);
  if (iVar28 < 1) {
LAB_14819c573:
    bVar23 = false;
  }
  else {
    cVar24 = (**(code **)(pFVar49->_padding_ + 0x158))(pFVar49);
    bVar23 = true;
    if (cVar24 == '\0') goto LAB_14819c573;
  }
  bVar25 = GetParticleLocation(this,(FContext *)param_1,this_01,local_1c8,iVar43,
                               (TVector<double> *)&local_f8._s_0,&local_118,true);
  pFVar38 = param_1->ParticleBase;
  if (!bVar25) {
    pFVar38->RelativeTime = 1.1;
    goto LAB_14819ccf7;
  }
  *(int *)((longlong)&(pFVar38->OldLocation).field0_0x0 + (longlong)param_1->Offset) = iVar43;
  (pFVar38->Location).field0_0x0._s_0.X = local_f8._s_0.X;
  (pFVar38->Location).field0_0x0._s_0.Y = local_f8._s_0.Y;
  (pFVar38->Location).field0_0x0._s_0.Z = local_f8._s_0.Z;
  bVar25 = UE::Math::TVector<double>::ContainsNaN(&pFVar38->Location);
  if (bVar25) {
    local_158 = param_1;
    `UParticleModuleLocationSkelVertSurface::Spawn'::__l40::<lambda_1>::operator()(&local_158);
  }
  if ((this->bInheritBoneVelocity != 0) && (iVar30 != -1)) {
    piVar8 = (this_01->ValidAssociatedBoneIndices).Array;
    for (piVar41 = piVar8; piVar41 < piVar8 + (this_01->ValidAssociatedBoneIndices).ArrayMax;
        piVar41 = piVar41 + 1) {
      if (*piVar41 == iVar30) {
        iVar28 = (int)((longlong)piVar41 - (longlong)piVar8 >> 2);
        if (iVar28 != -1) {
          pTVar34 = TPreallocatedArrayProxy<UE::Math::TVector<float>_>::operator[]
                              (&this_01->BoneVelocities,iVar28);
          fVar5 = this->InheritVelocityScale;
          this_00 = &pFVar38->BaseVelocity;
          fVar55 = (pTVar34->field0_0x0)._s_0.Y;
          fVar61 = (pFVar38->BaseVelocity).field0_0x0._s_0.Y;
          fVar1 = (pTVar34->field0_0x0)._s_0.Z;
          fVar2 = (pFVar38->BaseVelocity).field0_0x0._s_0.Z;
          fVar3 = (pFVar38->BaseVelocity).field0_0x0._s_0.Y;
          fVar4 = (pFVar38->BaseVelocity).field0_0x0._s_0.Z;
          (this_00->field0_0x0)._s_0.X =
               ((pTVar34->field0_0x0)._s_0.X - (this_00->field0_0x0)._s_0.X) * fVar5 +
               (this_00->field0_0x0)._s_0.X;
          (pFVar38->BaseVelocity).field0_0x0._s_0.Y = (fVar55 - fVar61) * fVar5 + fVar3;
          (pFVar38->BaseVelocity).field0_0x0._s_0.Z = (fVar1 - fVar2) * fVar5 + fVar4;
          bVar25 = UE::Math::TVector<float>::ContainsNaN(this_00);
          if (bVar25) {
            local_150 = param_1;
            `UParticleModuleLocationSkelVertSurface::Spawn'::__l46::<lambda_2>::operator()
                      (&local_150);
          }
        }
        break;
      }
    }
  }
  if (this->bInheritVertexColor != 0) {
    uVar6 = (this->SourceType).Value;
    if (uVar6 == '\0') {
      FVar29 = USkinnedMeshComponent::GetVertexColor
                         ((USkinnedMeshComponent *)local_1c8,(int)local_168);
      local_1d8 = *(int *)CONCAT44(extraout_var,FVar29.field0_0x0);
LAB_14819c6cf:
      uVar47 = (ulonglong)local_1d8._1_1_;
      uVar46 = (ulonglong)local_1d8._2_1_;
      bVar26 = local_1d8._3_1_;
      bVar39 = (byte)local_1d8;
    }
    else {
      if (uVar6 != '\x01') goto LAB_14819c6cf;
      pFVar45 = (FMultiSizeIndexContainer *)(local_1c0 + 0x20);
      pFVar35 = FMultiSizeIndexContainer::GetIndexBuffer(pFVar45);
      (**(code **)(pFVar35->_padding_ + 0x60))(pFVar35,iVar43);
      pFVar35 = FMultiSizeIndexContainer::GetIndexBuffer(pFVar45);
      (**(code **)(pFVar35->_padding_ + 0x60))(pFVar35,iVar43 + 1);
      pFVar35 = FMultiSizeIndexContainer::GetIndexBuffer(pFVar45);
      (**(code **)(pFVar35->_padding_ + 0x60))(pFVar35,local_1d4 + 2);
      pUVar20 = local_1c8;
      FVar29 = USkinnedMeshComponent::GetVertexColor
                         ((USkinnedMeshComponent *)local_1c8,(int)local_164);
      uVar27 = *(uint *)CONCAT44(extraout_var_00,FVar29.field0_0x0);
      FVar29 = USkinnedMeshComponent::GetVertexColor
                         ((USkinnedMeshComponent *)pUVar20,(int)local_160);
      uVar48 = *(uint *)CONCAT44(extraout_var_01,FVar29.field0_0x0);
      FVar29 = USkinnedMeshComponent::GetVertexColor
                         ((USkinnedMeshComponent *)pUVar20,(int)local_15c);
      uVar44 = *(uint *)CONCAT44(extraout_var_02,FVar29.field0_0x0);
      uVar46 = (ulonglong)
               (((uVar44 >> 0x10 & 0xff) + (uVar48 >> 0x10 & 0xff) + (uVar27 >> 0x10 & 0xff)) / 3);
      uVar47 = (ulonglong)(((uVar44 >> 8 & 0xff) + (uVar48 >> 8 & 0xff) + (uVar27 >> 8 & 0xff)) / 3)
      ;
      bVar39 = (byte)((ulonglong)((uVar44 & 0xff) + (uVar48 & 0xff) + (uVar27 & 0xff)) / 3);
      bVar26 = (byte)((ulonglong)((uVar44 >> 0x18) + (uVar48 >> 0x18) + (uVar27 >> 0x18)) / 3);
      iVar43 = local_1d4;
    }
    fVar5 = FLinearColor::sRGBToLinearTable[uVar47 & 0xff];
    fVar55 = FLinearColor::sRGBToLinearTable[bVar39];
    fVar61 = (float)bVar26 * __real_3b808081;
    (pFVar38->Color).field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[uVar46 & 0xff];
    (pFVar38->Color).field0_0x0._s_0.G = fVar5;
    (pFVar38->Color).field0_0x0._s_0.B = fVar55;
    (pFVar38->Color).field0_0x0._s_0.A = fVar61;
    fVar5 = FLinearColor::sRGBToLinearTable[uVar47 & 0xff];
    fVar55 = FLinearColor::sRGBToLinearTable[bVar39];
    (pFVar38->BaseColor).field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[uVar46 & 0xff];
    (pFVar38->BaseColor).field0_0x0._s_0.G = fVar5;
    (pFVar38->BaseColor).field0_0x0._s_0.B = fVar55;
    (pFVar38->BaseColor).field0_0x0._s_0.A = fVar61;
  }
  if (this->bInheritUV != 0) {
    uVar6 = (this->SourceType).Value;
    local_140 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    auVar57 = local_140;
    if (uVar6 == '\0') {
      pFVar31 = (FName *)USkinnedMeshComponent::GetVertexUV
                                   ((USkinnedMeshComponent *)local_1c8,&local_e0,iVar43,
                                    this->InheritUVChannel);
      FVar17 = pFVar31[1];
      FVar50 = *pFVar31;
    }
    else if (uVar6 == '\x01') {
      pFVar45 = (FMultiSizeIndexContainer *)(local_1c0 + 0x20);
      pFVar35 = FMultiSizeIndexContainer::GetIndexBuffer(pFVar45);
      iVar30 = (**(code **)(pFVar35->_padding_ + 0x60))(pFVar35,iVar43);
      pFVar35 = FMultiSizeIndexContainer::GetIndexBuffer(pFVar45);
      iVar28 = local_1d4;
      iVar43 = (**(code **)(pFVar35->_padding_ + 0x60))(pFVar35,local_1d4 + 1);
      pFVar35 = FMultiSizeIndexContainer::GetIndexBuffer(pFVar45);
      iVar28 = (**(code **)(pFVar35->_padding_ + 0x60))(pFVar35,iVar28 + 2);
      pUVar20 = local_1c8;
      pTVar36 = USkinnedMeshComponent::GetVertexUV
                          ((USkinnedMeshComponent *)local_1c8,&local_d0,iVar30,
                           this->InheritUVChannel);
      dVar10 = (pTVar36->field0_0x0)._s_0.X;
      dVar11 = (pTVar36->field0_0x0)._s_0.Y;
      pTVar36 = USkinnedMeshComponent::GetVertexUV
                          ((USkinnedMeshComponent *)pUVar20,&local_c0,iVar43,this->InheritUVChannel)
      ;
      dVar12 = (pTVar36->field0_0x0)._s_0.X;
      dVar13 = (pTVar36->field0_0x0)._s_0.Y;
      pTVar36 = USkinnedMeshComponent::GetVertexUV
                          ((USkinnedMeshComponent *)pUVar20,local_b0,iVar28,this->InheritUVChannel);
      FVar17 = (FName)((dVar11 + dVar13 + (pTVar36->field0_0x0)._s_0.Y) * __real_3fd5555555555555);
      FVar50 = (FName)((dVar10 + dVar12 + (pTVar36->field0_0x0)._s_0.X) * __real_3fd5555555555555);
    }
    else {
      local_140._8_8_ = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
      local_140._0_8_ = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
      FVar17 = (FName)local_140._8_8_;
      FVar50 = (FName)local_140._0_8_;
      local_140 = auVar57;
    }
    iVar28 = local_1a0->DynamicParameterDataOffset;
    if (0 < iVar28) {
      *(float *)((longlong)&(pFVar38->OldLocation).field0_0x0 + (longlong)iVar28 + 4) =
           (float)(double)FVar17;
      *(float *)((longlong)&(pFVar38->OldLocation).field0_0x0 + (longlong)iVar28) =
           (float)(double)FVar50;
    }
  }
  pFVar49 = local_1a0;
  if (bVar23) {
    iVar28 = (int)local_1b0;
    if (this->bOrientMeshEmitters != 0) {
      (local_1a8->RandomStream).Seed = (local_1a8->RandomStream).Seed * 0xbb38435 + 0x3619636b;
      __libm_sse2_sincos_();
      dVar10 = extraout_XMM0._0_8_;
      dVar11 = dVar10 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
      dVar65 = extraout_XMM0._8_8_;
      dVar62 = dVar10 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
      dVar10 = dVar10 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
      auVar57._8_4_ = SUB84(dVar62,0);
      auVar57._0_8_ = dVar11;
      auVar57._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
      auVar66._8_4_ = SUB84(local_118.X,0);
      auVar66._0_8_ = local_118.X;
      auVar66._12_4_ = (int)((ulonglong)local_118.X >> 0x20);
      dVar71 = local_118.X * dVar62;
      dVar74 = local_118.X * dVar11;
      auVar56._8_4_ = extraout_XMM0._8_4_;
      auVar56._0_8_ = dVar10;
      auVar56._12_4_ = extraout_XMM0._12_4_;
      auVar68._8_4_ = SUB84(local_118.Z,0);
      auVar68._0_8_ = local_118.Z;
      auVar68._12_4_ = (int)((ulonglong)local_118.Z >> 0x20);
      dVar12 = dVar11 * local_118.Y;
      dVar13 = dVar62 * local_118.Y;
      dVar15 = local_118.Z * dVar10;
      local_118.X = local_118.X * dVar65 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                    dVar11 * local_118.W +
                    dVar10 * local_118.Y *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    local_118.Z * dVar62 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_118.Y = auVar66._8_8_ * dVar10 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                    auVar57._8_8_ * local_118.W +
                    auVar56._8_8_ * local_118.Y *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                    auVar68._8_8_ * dVar11 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      local_118.Z = dVar71 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                    dVar10 * local_118.W +
                    dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                    local_118.Z * dVar65 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_118.W = dVar74 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                    dVar65 * local_118.W +
                    dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                    dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    }
    UE::Math::TQuat<double>::Euler(&local_118,(TVector<double> *)&local_180._s_0);
    if (((pFVar49->CurrentLODLevel->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace != 0) {
      pdVar37 = (double *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x10))();
      dVar12 = *pdVar37 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar13 = pdVar37[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar62 = pdVar37[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar65 = pdVar37[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar71 = local_180._8_8_;
      auVar67._8_4_ = SUB84(dVar13,0);
      auVar67._0_8_ = dVar12;
      auVar67._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      auVar14._8_4_ = SUB84(dVar65,0);
      auVar14._0_8_ = dVar62;
      auVar14._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
      auVar68 = blendpd(auVar67,auVar14,2);
      auVar51._8_4_ = SUB84(dVar62,0);
      auVar51._0_8_ = dVar13;
      auVar51._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
      dVar15 = local_180._0_8_;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = local_180._s_0.Z;
      auVar57 = blendpd(local_180._0_16_,auVar16,2);
      auVar72._0_8_ = dVar71 * dVar12 - dVar13 * dVar15;
      auVar72._8_8_ = local_180._s_0.Z * dVar13 - auVar51._8_8_ * dVar71;
      auVar58._0_8_ = auVar57._0_8_ * dVar62 - local_180._s_0.Z * auVar68._0_8_;
      auVar58._8_8_ = auVar57._8_8_ * dVar65 - auVar68._8_8_ * 0.0;
      auVar57 = blendpd(auVar72,auVar58,2);
      dVar10 = auVar72._8_8_ + auVar72._8_8_;
      dVar11 = auVar58._0_8_ + auVar58._0_8_;
      uVar69 = SUB84(dVar11,0);
      uVar70 = (undefined4)((ulonglong)dVar11 >> 0x20);
      auVar73._0_8_ = auVar57._0_8_ + auVar57._0_8_;
      auVar73._8_8_ = auVar57._8_8_ + auVar57._8_8_;
      auVar63._8_4_ = uVar69;
      auVar63._0_8_ = dVar10;
      auVar63._12_4_ = uVar70;
      auVar52._8_4_ = uVar69;
      auVar52._0_8_ = dVar10;
      auVar52._12_4_ = uVar70;
      auVar59._8_4_ = uVar69;
      auVar59._0_8_ = dVar10;
      auVar59._12_4_ = uVar70;
      auVar57 = blendpd(auVar59,auVar73,2);
      auVar64._0_8_ = auVar63._8_8_ * dVar12 - dVar10 * dVar13;
      auVar64._8_8_ = auVar73._0_8_ * dVar13 - auVar52._8_8_ * dVar62;
      auVar53._8_4_ = SUB84(auVar73._8_8_,0);
      auVar53._0_8_ = auVar73._0_8_;
      auVar53._12_4_ = (int)((ulonglong)auVar73._8_8_ >> 0x20);
      auVar60._0_8_ = auVar57._0_8_ * dVar62 - auVar73._0_8_ * auVar68._0_8_;
      auVar60._8_8_ = auVar57._8_8_ * dVar65 - auVar53._8_8_ * auVar68._8_8_;
      auVar54._8_4_ = SUB84(auVar64._8_8_,0);
      auVar54._0_8_ = auVar64._0_8_;
      auVar54._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
      auVar57 = blendpd(auVar64,auVar60,2);
      dVar11 = dVar11 * dVar65 + dVar71 + auVar60._0_8_;
      local_180._s_0.Z = auVar73._0_8_ * dVar65 + local_180._s_0.Z + auVar57._0_8_;
      local_180._8_4_ = SUB84(dVar11,0);
      local_180._s_0.X = dVar10 * dVar65 + dVar15 + auVar54._8_8_;
      local_180._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    }
    *(float *)((longlong)&(pFVar38->Location).field0_0x0 + (longlong)iVar28) =
         (float)local_180._s_0.X;
    *(float *)((longlong)&(pFVar38->Location).field0_0x0 + (longlong)iVar28 + 4) =
         (float)local_180._s_0.Y;
    *(float *)((longlong)&(pFVar38->Location).field0_0x0 + (longlong)iVar28 + 8) =
         (float)local_180._s_0.Z;
    *(float *)((longlong)&(pFVar38->OldLocation).field0_0x0 + (longlong)iVar28 + 0xc) =
         (float)local_180._s_0.X;
    *(float *)((longlong)&(pFVar38->OldLocation).field0_0x0 + (longlong)iVar28 + 0x10) =
         (float)local_180._s_0.Y;
    *(float *)((longlong)&(pFVar38->OldLocation).field0_0x0 + (longlong)iVar28 + 0x14) =
         (float)local_180._s_0.Z;
  }
LAB_14819ccf7:
  if (bVar18) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar22) && (FVar42 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_130.NameAndInfo.Index = FVar42.ComparisonIndex.Value;
      local_130.NameAndInfo.Number = FVar42.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_148);
      local_130.StatData.Pad[4] = '\0';
      local_130.StatData.Pad[5] = '\0';
      local_130.StatData.Pad[6] = '\0';
      local_130.StatData.Pad[7] = '\0';
      local_130.StatData.Pad[0] = local_148.s.LowPart._0_1_;
      local_130.StatData.Pad[1] = local_148.s.LowPart._1_1_;
      local_130.StatData.Pad[2] = local_148.s.LowPart._2_1_;
      local_130.StatData.Pad[3] = local_148.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_130);
      piVar8 = &this_02->ScopeCount;
      *piVar8 = *piVar8 + -1;
      if (*piVar8 == 0) {
        FThreadStats::Flush(this_02,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// Update @ 1481aeb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UParticleModuleLocationSkelVertSurface::Update
          (UParticleModuleLocationSkelVertSurface *this,FUpdateContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_ParticleSkelMeshSurfTime> FVar19;
  FModuleLocationVertSurfaceInstancePayload *this_00;
  USkeletalMeshComponent *this_01;
  TVector<float> *pTVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  FParticleEmitterInstance *pFVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined4 uVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  float fVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  undefined1 auStackY_278 [32];
  FName local_210;
  FParticleRandomSeedInstancePayload *local_208;
  FColor_u_0 local_200 [2];
  FParticleEmitterInstance *local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  FName local_1e0;
  USkeletalMeshComponent *local_1d8;
  FName local_1d0;
  TVector<double>_u_0 local_1c0;
  FUpdateContext *local_1a8;
  double *local_1a0;
  longlong local_198;
  undefined1 local_188 [32];
  FName local_168;
  TVector<double>_u_0 local_160;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_278;
  uVar24 = 0;
  FVar19 = StatPtr_STAT_ParticleSkelMeshSurfTime;
  if (StatPtr_STAT_ParticleSkelMeshSurfTime ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleSkelMeshSurfTime>)0x0) {
    pFVar18 = ::FName::FName(&local_168,"STAT_ParticleSkelMeshSurfTime");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_ParticleSkelMeshSurfTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleSkelMeshSurfTime,*pFVar18
                        ,L"Particle SkelMeshSurf Time GT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_210 = *(FName *)FVar19;
  bVar11 = false;
  bVar12 = false;
  local_1d0.ComparisonIndex.Value = 0;
  local_1d0.Number = 0;
  bVar13 = false;
  bVar14 = false;
  if ((local_210.ComparisonIndex.Value.Value == 0) && (local_210.Number == 0)) {
LAB_1481aed08:
    bVar12 = bVar14;
    bVar11 = bVar13;
    bVar13 = false;
    local_210 = local_1d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_200[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_200[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1e0.ComparisonIndex.Value = local_210.ComparisonIndex.Value.Value;
        local_1e0.Number = local_210.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1e0,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                   ,0x9b4);
        bVar11 = true;
        bVar12 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481aed08;
    FThreadStats::AddMessage(local_210,CycleScopeStart);
    bVar13 = true;
  }
  pFVar25 = (FParticleEmitterInstance *)param_1->_padding_;
  local_1f8 = pFVar25;
  this_00 = (FModuleLocationVertSurfaceInstancePayload *)
            FParticleEmitterInstance::GetModuleInstanceData(pFVar25,(UParticleModule *)this);
  GetSkeletalMeshComponentSource(this,(FContext *)param_1,this_00);
  bVar14 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if ((!bVar14) || (this_00->MeshMinLOD == -1)) goto LAB_1481af339;
  this_01 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_1d8 = this_01;
  if (this->bInheritBoneVelocity != 0) {
    fVar57 = 0.0;
    if (0.0 < param_1->DeltaTime) {
      fVar57 = __real_3f800000 / param_1->DeltaTime;
    }
    pFVar25 = local_1f8;
    uVar28 = uVar24;
    if (0 < this_00->NumValidAssociatedBoneIndices) {
      do {
        iVar17 = (this_00->ValidAssociatedBoneIndices).ArrayMax;
        iVar21 = (int)uVar24;
        if ((((byte)~(byte)(uVar24 >> 0x18) >> 7 & (iVar21 < iVar17 || iVar17 == 0 && iVar21 == 0))
             == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & ((Index < ArrayMax) | ((Index == 0) & (ArrayMax == 0)))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                                ,0x36c,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar17 = *(int *)(uVar28 + (longlong)(this_00->ValidAssociatedBoneIndices).Array);
        if (iVar17 != -1) {
          USkinnedMeshComponent::GetBoneMatrix((USkinnedMeshComponent *)this_01,&local_148,iVar17);
          fVar48 = (float)local_148.M[3][0];
          fVar52 = (float)local_148.M[3][1];
          fVar56 = (float)local_148.M[3][2];
          pTVar20 = TPreallocatedArrayProxy<UE::Math::TVector<float>_>::operator[]
                              (&this_00->PrevFrameBonePositions,iVar21);
          fVar1 = (pTVar20->field0_0x0)._s_0.X;
          fVar2 = (pTVar20->field0_0x0)._s_0.Y;
          fVar3 = (pTVar20->field0_0x0)._s_0.Z;
          pTVar20 = TPreallocatedArrayProxy<UE::Math::TVector<float>_>::operator[]
                              (&this_00->BoneVelocities,iVar21);
          (pTVar20->field0_0x0)._s_0.X = (fVar48 - fVar1) * fVar57;
          (pTVar20->field0_0x0)._s_0.Y = (fVar52 - fVar2) * fVar57;
          (pTVar20->field0_0x0)._s_0.Z = (fVar56 - fVar3) * fVar57;
        }
        uVar24 = (ulonglong)(iVar21 + 1U);
        pFVar25 = local_1f8;
        uVar28 = uVar28 + 4;
      } while ((int)(iVar21 + 1U) < this_00->NumValidAssociatedBoneIndices);
    }
  }
  if ((this->bUpdatePositionEachFrame == 0) || (pFVar25->ParticleData == (uchar *)0x0))
  goto LAB_1481af339;
  iVar17 = (**(code **)(pFVar25->_padding_ + 0x150))(pFVar25);
  lVar27 = (longlong)iVar17;
  if (iVar17 < 1) {
LAB_1481aef10:
    bVar14 = false;
  }
  else {
    cVar15 = (**(code **)(pFVar25->_padding_ + 0x158))(pFVar25);
    bVar14 = true;
    if (cVar15 == '\0') goto LAB_1481aef10;
  }
  local_1a0 = (double *)(**(code **)*pFVar25->Component)();
  local_208 = FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                        ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this);
  if (local_208 == (FParticleRandomSeedInstancePayload *)0x0) {
    local_208 = (FParticleRandomSeedInstancePayload *)
                (**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
  }
  pFVar25 = local_1f8;
  lVar29 = param_1->_padding_;
  lVar23 = *(longlong *)(lVar29 + 0x168);
  iVar17 = *(int *)(lVar29 + 0x188);
  local_198 = *(longlong *)(lVar29 + 0x170);
  iVar21 = *(int *)(lVar29 + 0x18c) + -1;
  lVar29 = (longlong)iVar21;
  local_1f0 = lVar23;
  if (-1 < iVar21) {
    lVar22 = (longlong)param_1->Offset;
    local_1e8 = lVar22;
    do {
      lVar26 = (ulonglong)((uint)*(ushort *)(local_198 + lVar29 * 2) * iVar17) + lVar23;
      if (((*(uint *)(lVar26 + 0x6c) & 0x4000000) == 0) &&
         (bVar16 = GetParticleLocation(this,(FContext *)param_1,this_00,local_1d8,
                                       *(int *)(lVar22 + lVar26),(TVector<double> *)&local_160._s_0,
                                       (TQuat<double> *)local_188,false), lVar22 = local_1e8,
         lVar23 = local_1f0, bVar16)) {
        *(double *)(lVar26 + 0x18) = local_160._s_0.X;
        *(double *)(lVar26 + 0x20) = local_160._s_0.Y;
        *(double *)(lVar26 + 0x28) = local_160._s_0.Z;
        iVar21 = _finite(*(double *)(lVar26 + 0x18));
        if ((iVar21 == 0) ||
           ((iVar21 = _finite(*(double *)(lVar26 + 0x20)), iVar21 == 0 ||
            (iVar21 = _finite(*(double *)(lVar26 + 0x28)), iVar21 == 0)))) {
          local_1a8 = param_1;
          `UParticleModuleLocationSkelVertSurface::Update'::__l29::<lambda_1>::operator()
                    (&local_1a8);
        }
        lVar22 = local_1e8;
        lVar23 = local_1f0;
        if (bVar14) {
          if (this->bOrientMeshEmitters != 0) {
            (local_208->RandomStream).Seed = (local_208->RandomStream).Seed * 0xbb38435 + 0x3619636b
            ;
            __libm_sse2_sincos_();
            dVar47 = extraout_XMM0._0_8_;
            dVar49 = dVar47 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
            dVar39 = dVar47 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
            dVar47 = dVar47 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
            auVar53._8_4_ = extraout_XMM0._8_4_;
            auVar53._0_8_ = dVar49;
            auVar53._12_4_ = extraout_XMM0._12_4_;
            auVar40._8_4_ = (int)local_188._0_8_;
            auVar40._0_8_ = local_188._0_8_;
            auVar40._12_4_ = SUB84(local_188._0_8_,4);
            dVar8 = local_188._24_8_;
            auVar35._8_4_ = local_188._24_4_;
            auVar35._0_8_ = dVar8;
            auVar35._12_4_ = local_188._28_4_;
            auVar34._8_4_ = (int)local_188._8_8_;
            auVar34._0_8_ = local_188._8_8_;
            auVar34._12_4_ = SUB84(local_188._8_8_,4);
            dVar6 = local_188._16_8_;
            dVar5 = (double)local_188._0_8_ * dVar39;
            dVar7 = (double)local_188._0_8_ * dVar47;
            auVar51._8_4_ = local_188._16_4_;
            auVar51._0_8_ = dVar6;
            auVar51._12_4_ = local_188._20_4_;
            dVar45 = (double)local_188._8_8_ * dVar47;
            dVar46 = (double)local_188._8_8_ * dVar39;
            local_188._0_8_ =
                 (double)local_188._0_8_ * auVar53._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar8 * dVar47 +
                 (double)local_188._8_8_ * dVar49 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar6 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            local_188._8_8_ =
                 auVar40._8_8_ * dVar49 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 auVar35._8_8_ * dVar39 +
                 auVar34._8_8_ * extraout_XMM0._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar51._8_8_ * dVar47 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            dVar7 = dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                    dVar8 * extraout_XMM0._8_8_ +
                    dVar46 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                    dVar6 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
            ;
            local_188._24_4_ = SUB84(dVar7,0);
            local_188._16_8_ =
                 dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dVar8 * dVar49 +
                 dVar45 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar6 * auVar53._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            local_188._28_4_ = (int)((ulonglong)dVar7 >> 0x20);
          }
          UE::Math::TQuat<double>::Euler
                    ((TQuat<double> *)local_188,(TVector<double> *)&local_1c0._s_0);
          if (((pFVar25->CurrentLODLevel->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace != 0)
          {
            dVar46 = local_1c0._0_8_;
            dVar47 = local_1c0._8_8_;
            dVar6 = *local_1a0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar8 = local_1a0[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            dVar39 = local_1a0[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            dVar45 = local_1a0[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            auVar10._8_8_ = 0;
            auVar10._0_8_ = local_1c0._s_0.Z;
            auVar35 = blendpd(local_1c0._0_16_,auVar10,2);
            auVar50._8_4_ = SUB84(dVar8,0);
            auVar50._0_8_ = dVar6;
            auVar50._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            auVar9._8_4_ = SUB84(dVar45,0);
            auVar9._0_8_ = dVar39;
            auVar9._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
            auVar51 = blendpd(auVar50,auVar9,2);
            auVar30._8_4_ = SUB84(dVar39,0);
            auVar30._0_8_ = dVar8;
            auVar30._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
            auVar54._0_8_ = dVar47 * dVar6 - dVar8 * dVar46;
            auVar54._8_8_ = local_1c0._s_0.Z * dVar8 - auVar30._8_8_ * dVar47;
            auVar36._0_8_ = auVar35._0_8_ * dVar39 - auVar51._0_8_ * local_1c0._s_0.Z;
            auVar36._8_8_ = auVar35._8_8_ * dVar45 - auVar51._8_8_ * 0.0;
            auVar35 = blendpd(auVar54,auVar36,2);
            dVar5 = auVar54._8_8_ + auVar54._8_8_;
            dVar7 = auVar36._0_8_ + auVar36._0_8_;
            uVar43 = SUB84(dVar7,0);
            uVar44 = (undefined4)((ulonglong)dVar7 >> 0x20);
            auVar55._0_8_ = auVar35._0_8_ + auVar35._0_8_;
            auVar55._8_8_ = auVar35._8_8_ + auVar35._8_8_;
            auVar41._8_4_ = uVar43;
            auVar41._0_8_ = dVar5;
            auVar41._12_4_ = uVar44;
            auVar31._8_4_ = uVar43;
            auVar31._0_8_ = dVar5;
            auVar31._12_4_ = uVar44;
            auVar37._8_4_ = uVar43;
            auVar37._0_8_ = dVar5;
            auVar37._12_4_ = uVar44;
            auVar35 = blendpd(auVar37,auVar55,2);
            auVar42._0_8_ = auVar41._8_8_ * dVar6 - dVar5 * dVar8;
            auVar42._8_8_ = auVar55._0_8_ * dVar8 - auVar31._8_8_ * dVar39;
            auVar32._8_4_ = SUB84(auVar55._8_8_,0);
            auVar32._0_8_ = auVar55._0_8_;
            auVar32._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
            auVar38._0_8_ = auVar35._0_8_ * dVar39 - auVar55._0_8_ * auVar51._0_8_;
            auVar38._8_8_ = auVar35._8_8_ * dVar45 - auVar32._8_8_ * auVar51._8_8_;
            auVar33._8_4_ = SUB84(auVar42._8_8_,0);
            auVar33._0_8_ = auVar42._0_8_;
            auVar33._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
            auVar35 = blendpd(auVar42,auVar38,2);
            dVar7 = dVar7 * dVar45 + dVar47 + auVar38._0_8_;
            local_1c0._s_0.Z = auVar55._0_8_ * dVar45 + local_1c0._s_0.Z + auVar35._0_8_;
            local_1c0._8_4_ = SUB84(dVar7,0);
            local_1c0._s_0.X = dVar5 * dVar45 + dVar46 + auVar33._8_8_;
            local_1c0._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          }
          *(float *)(lVar26 + 0x18 + lVar27) = (float)local_1c0._s_0.X;
          *(float *)(lVar26 + 0x1c + lVar27) = (float)local_1c0._s_0.Y;
          *(float *)(lVar26 + 0x20 + lVar27) = (float)local_1c0._s_0.Z;
          lVar22 = local_1e8;
          lVar23 = local_1f0;
        }
      }
      lVar29 = lVar29 + -1;
    } while (-1 < lVar29);
  }
LAB_1481af339:
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(local_210,CycleScopeEnd);
  }
  return;
}

// UpdateBoneIndicesList @ 1481b2380

void __thiscall
UParticleModuleLocationSkelVertSurface::UpdateBoneIndicesList
          (UParticleModuleLocationSkelVertSurface *this,FParticleEmitterInstance *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FWeakObjectPtr *this_00;
  USkeletalMeshComponent *this_01;
  USkeletalMesh *pUVar5;
  longlong lVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  
  this_00 = (FWeakObjectPtr *)
            FParticleEmitterInstance::GetModuleInstanceData(param_1,(UParticleModule *)this);
  this_01 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(this_00);
  if (this_01 != (USkeletalMeshComponent *)0x0) {
    uVar9 = 0;
    iVar10 = 0;
    if (0 < (this->ValidAssociatedBones).ArrayNum) {
      lVar11 = 0;
      do {
        pUVar5 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_01);
        lVar6 = (**(code **)(pUVar5->_padding_ + 800))();
        uVar8 = 0;
        if ((int)uVar9 < (this->ValidAssociatedBones).ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar2 = *(FName *)((this->ValidAssociatedBones).AllocatorInstance.Data + lVar11);
        if ((((FVar2 != (FName)0x0) &&
             (piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                               *)(lVar6 + 0x90),FVar2), piVar7 != (int *)0x0)) &&
            (iVar1 = *piVar7, iVar1 != -1)) && (iVar10 < (this->ValidAssociatedBones).ArrayNum)) {
          piVar7 = TPreallocatedArrayProxy<int>::operator[]
                             ((TPreallocatedArrayProxy<int> *)(this_00 + 3),iVar10);
          iVar10 = iVar10 + 1;
          *piVar7 = iVar1;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar9 < (this->ValidAssociatedBones).ArrayNum);
    }
    this_00[2].ObjectSerialNumber = iVar10;
  }
  return;
}

// VertInfluencedByActiveBone @ 1481b4a40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

bool __thiscall
UParticleModuleLocationSkelVertSurface::VertInfluencedByActiveBone
          (UParticleModuleLocationSkelVertSurface *this,FParticleEmitterInstance *param_1,
          FModuleLocationVertSurfaceInstancePayload *param_2,USkeletalMeshComponent *param_3,
          int param_4,int *param_5)

{
  FSkeletalMeshLODRenderData *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FSkeletalMeshRenderData *pFVar4;
  FModuleLocationVertSurfaceInstancePayload *pFVar5;
  uint uVar6;
  uint uVar7;
  FSkelMeshRenderSection *pFVar8;
  longlong lVar9;
  uint local_38;
  int local_34 [3];
  
  pFVar4 = USkinnedMeshComponent::GetSkeletalMeshRenderData((USkinnedMeshComponent *)param_3);
  if (pFVar4 != (FSkeletalMeshRenderData *)0x0) {
    if ((((param_2 == (FModuleLocationVertSurfaceInstancePayload *)0x0) ||
         (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_2), !bVar2)) ||
        (param_2->MeshMinLOD == -1)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstPayload && InstPayload->MeshIsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                           ,0xb76,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar7 = param_2->MeshMinLOD;
    uVar6 = 0;
    if ((int)uVar7 < (pFVar4->LODRenderData).Array.ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = *(FSkeletalMeshLODRenderData **)
               ((pFVar4->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    pFVar5 = (FModuleLocationVertSurfaceInstancePayload *)
             FParticleEmitterInstance::GetModuleInstanceData(param_1,(UParticleModule *)this);
    FSkeletalMeshLODRenderData::GetSectionFromVertexIndex(this_00,param_4,(int *)&local_38,local_34)
    ;
    if (((this_00->RenderSections).ArrayNum <= (int)local_38) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("SectionIndex < LODData.RenderSections.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                           ,0xb81,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar7 = 0;
    if ((int)local_38 < (this_00->RenderSections).ArrayNum) {
      uVar7 = ~local_38 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pFVar8 = (FSkelMeshRenderSection *)
             ((this_00->RenderSections).AllocatorInstance.Data + (longlong)(int)local_38 * 0x118);
    if ((this->ValidMaterialIndices).ArrayNum < 1) {
LAB_1481b4c5a:
      bVar2 = VertInfluencedByActiveBoneTyped
                        (this,this_00,param_2->MeshMinLOD,pFVar8,local_34[0],param_3,pFVar5,param_5)
      ;
      return bVar2;
    }
    uVar7 = 0;
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->ValidMaterialIndices).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(uint *)((this->ValidMaterialIndices).AllocatorInstance.Data + lVar9) ==
          (uint)pFVar8->MaterialIndex) goto LAB_1481b4c5a;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 4;
    } while ((int)uVar7 < (this->ValidMaterialIndices).ArrayNum);
  }
  return false;
}

// VertInfluencedByActiveBoneTyped @ 1481b4ca0

/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */
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
UParticleModuleLocationSkelVertSurface::VertInfluencedByActiveBoneTyped
          (UParticleModuleLocationSkelVertSurface *this,FSkeletalMeshLODRenderData *param_1,
          int param_2,FSkelMeshRenderSection *param_3,int param_4,USkeletalMeshComponent *param_5,
          FModuleLocationVertSurfaceInstancePayload *param_6,int *param_7)

{
  ushort uVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FSkinWeightVertexBuffer *this_00;
  USkeletalMesh *pUVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  
  this_00 = USkinnedMeshComponent::GetSkinWeightBuffer((USkinnedMeshComponent *)param_5,param_2);
  if ((this_00 != (FSkinWeightVertexBuffer *)0x0) && (uVar11 = 0, 0 < param_3->MaxBoneInfluences)) {
    do {
      uVar6 = FSkinWeightVertexBuffer::GetBoneIndex
                        (this_00,param_3->BaseVertexIndex + param_4,uVar11);
      uVar10 = 0;
      if ((int)uVar6 < (param_3->BoneMap).ArrayNum) {
        uVar10 = ~uVar6 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar1 = *(ushort *)((param_3->BoneMap).AllocatorInstance.Data + (longlong)(int)uVar6 * 2);
      uVar10 = (uint)uVar1;
      bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_5->_padding_);
      if (bVar4) {
        pUVar7 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_5);
        lVar8 = (**(code **)(pUVar7->_padding_ + 800))(pUVar7);
        if (((int)param_5->_padding_ != *(int *)(lVar8 + 0x28)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("LeaderBoneMap.Num() == InSkelMeshComponent->GetSkeletalMeshAsset()->GetRefSkeleton().GetNum()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                               ,0xbb6,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (((int)param_5->_padding_ <= (int)(uint)uVar1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar10 = *(uint *)(param_5->_padding_ + (ulonglong)uVar1 * 4);
      }
      if (param_6->NumValidAssociatedBoneIndices == 0) {
LAB_1481b4e66:
        if (param_7 != (int *)0x0) {
          *param_7 = uVar10;
        }
        return true;
      }
      puVar2 = (uint *)(param_6->ValidAssociatedBoneIndices).Array;
      for (puVar9 = puVar2; puVar9 < puVar2 + (param_6->ValidAssociatedBoneIndices).ArrayMax;
          puVar9 = puVar9 + 1) {
        if (*puVar9 == uVar10) {
          if ((int)((longlong)puVar9 - (longlong)puVar2 >> 2) != -1) goto LAB_1481b4e66;
          break;
        }
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < param_3->MaxBoneInfluences);
  }
  return false;
}

// operator() @ 150526650

bool __thiscall
`UParticleModuleLocationSkelVertSurface::Update'::__l29::<lambda_1>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707556333>);
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
                      (&bGEnsureHasExecuted<7003914095707556333>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15052672f;
    }
  }
  bVar4 = false;
LAB_15052672f:
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

// operator() @ 150526780

bool __thiscall
`UParticleModuleLocationSkelVertSurface::Spawn'::__l40::<lambda_1>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707556169>);
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
                      (&bGEnsureHasExecuted<7003914095707556169>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15052685f;
    }
  }
  bVar4 = false;
LAB_15052685f:
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

// operator() @ 150527290

bool __thiscall
`UParticleModuleLocationSkelVertSurface::Spawn'::__l46::<lambda_2>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707556178>);
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
                      (&bGEnsureHasExecuted<7003914095707556178>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15052736f;
    }
  }
  bVar4 = false;
LAB_15052736f:
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

