// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// FNDI_Landscape_SharedResource @ 149169520

FNDI_Landscape_SharedResource * __thiscall
FNDI_Landscape_SharedResource::FNDI_Landscape_SharedResource
          (FNDI_Landscape_SharedResource *this,FResourceKey *param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UPhysicalMaterial_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  
  pTVar2 = &(this->ResourceKey).PhysicalMaterials;
  (this->LandscapeTextures).Ptr = (FLandscapeTextureResource *)0x0;
  *(undefined8 *)&(this->LandscapeLWCTile).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->LandscapeLWCTile).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->ActorToWorldTransform).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->ActorToWorldTransform).M[0][1] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->ActorToWorldTransform).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->ActorToWorldTransform).M[0][3] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->ActorToWorldTransform).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->ActorToWorldTransform).M[1][1] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->ActorToWorldTransform).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->ActorToWorldTransform).M[1][3] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->ActorToWorldTransform).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->ActorToWorldTransform).M[2][1] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->ActorToWorldTransform).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->ActorToWorldTransform).M[2][3] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->ActorToWorldTransform).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->ActorToWorldTransform).M[3][1] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->ActorToWorldTransform).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->ActorToWorldTransform).M[3][3] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->WorldToActorTransform).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->WorldToActorTransform).M[0][1] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->WorldToActorTransform).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->WorldToActorTransform).M[0][3] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->WorldToActorTransform).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->WorldToActorTransform).M[1][1] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->WorldToActorTransform).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->WorldToActorTransform).M[1][3] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->WorldToActorTransform).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->WorldToActorTransform).M[2][1] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->WorldToActorTransform).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->WorldToActorTransform).M[2][3] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->WorldToActorTransform).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->WorldToActorTransform).M[3][1] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->WorldToActorTransform).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->WorldToActorTransform).M[3][3] = dVar6;
  (this->UvScaleBias).field0_0x0._s_0.X = 1.0;
  (this->UvScaleBias).field0_0x0._s_0.Y = 1.0;
  (this->CellCount).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->TextureWorldGridSize).field0_0x0._s_0.X = 1.0;
  (this->TextureWorldGridSize).field0_0x0._s_0.Y = 1.0;
  (this->UvScaleBias).field0_0x0._s_0.Z = 0.0;
  (this->UvScaleBias).field0_0x0._s_0.W = 0.0;
  (this->ResourceKey).Source.WeakPtr = (param_1->Source).WeakPtr;
  piVar1 = &(this->ResourceKey).PhysicalMaterials.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->PhysicalMaterials).ArrayNum;
  pFVar5 = (param_1->PhysicalMaterials).AllocatorInstance.Data;
  (this->ResourceKey).PhysicalMaterials.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  pTVar3 = &(this->ResourceKey).CapturedRegions;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ResourceKey).CapturedRegions.ArrayMax;
  iVar4 = (param_1->CapturedRegions).ArrayNum;
  pFVar5 = (param_1->CapturedRegions).AllocatorInstance.Data;
  (this->ResourceKey).CapturedRegions.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  (this->ResourceKey).MinCaptureRegion.field0_0x0 = (param_1->MinCaptureRegion).field0_0x0;
  (this->ResourceKey).MaxCaptureRegion.field0_0x0 = (param_1->MaxCaptureRegion).field0_0x0;
  (this->ResourceKey).IncludesCachedHeight = param_1->IncludesCachedHeight;
  (this->ResourceKey).IncludesCachedPhysMat = param_1->IncludesCachedPhysMat;
  this->ShaderPhysicsDataUserCount = (atomic<int>)0x0;
  this->CurrentState = Uninitialized;
  this->NextState = Uninitialized;
  return this;
}

// operator() @ 14916d960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FNDI_Landscape_SharedResource::Release'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  (**(code **)(**(longlong **)this + 0x20))();
  puVar1 = *(undefined8 **)this;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar2 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar2;
    *(undefined8 **)&param_1->field_0x30 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &TRHILambdaCommand<FRHICommandListImmediate,``FNDI_Landscape_SharedResource::Release'::`5'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = L"TRHILambdaCommand";
    puVar2[2] = puVar1;
  }
  else if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014916d9ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// CanBeDestroyed @ 149171480

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FNDI_Landscape_SharedResource::CanBeDestroyed(FNDI_Landscape_SharedResource *this)

{
  FLandscapeTextureResource *pFVar1;
  UObject *pUVar2;
  FName local_res8;
  FString local_18;
  
  if ((0 < (int)this->ShaderPhysicsDataUserCount) && (this->CurrentState != Released)) {
    return false;
  }
  pFVar1 = (this->LandscapeTextures).Ptr;
  if (((pFVar1 != (FLandscapeTextureResource *)0x0) && ((int)pFVar1->_padding_ != -1)) &&
     (1 < (byte)LogNiagara._0_1_)) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ResourceKey);
    if (pUVar2 == (UObject *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res8.Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(&local_res8,&local_18);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// CanRepresent @ 1491718f0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FNDI_Landscape_SharedResource::CanRepresent
          (FNDI_Landscape_SharedResource *this,FResourceKey *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  if (((((this->CurrentState == Released) ||
        (bVar6 = TWeakObjectPtr<ALandscape_const_,FWeakObjectPtr>::
                 UEOpEquals<ALandscape_const_,bool>(&(this->ResourceKey).Source,&param_1->Source),
        !bVar6)) ||
       ((param_1->IncludesCachedHeight != false &&
        ((this->ResourceKey).IncludesCachedHeight == false)))) ||
      (((((param_1->IncludesCachedPhysMat != false &&
          ((this->ResourceKey).IncludesCachedPhysMat == false)) ||
         ((param_1->MinCaptureRegion).field0_0x0._s_0.X <
          (this->ResourceKey).MinCaptureRegion.field0_0x0._s_0.X)) ||
        (((this->ResourceKey).MaxCaptureRegion.field0_0x0._s_0.X <
          (param_1->MaxCaptureRegion).field0_0x0._s_0.X ||
         ((param_1->MinCaptureRegion).field0_0x0._s_0.Y <
          (this->ResourceKey).MinCaptureRegion.field0_0x0._s_0.Y)))) ||
       ((this->ResourceKey).MaxCaptureRegion.field0_0x0._s_0.Y <
        (param_1->MaxCaptureRegion).field0_0x0._s_0.Y)))) ||
     (iVar2 = (param_1->PhysicalMaterials).ArrayNum,
     (this->ResourceKey).PhysicalMaterials.ArrayNum < iVar2)) {
    return false;
  }
  uVar9 = 0;
  if (0 < iVar2) {
    do {
      uVar8 = 0;
      if ((int)uVar9 < (param_1->PhysicalMaterials).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar4 = (param_1->PhysicalMaterials).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar9 < (this->ResourceKey).PhysicalMaterials.ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      bVar6 = TWeakObjectPtr<UPhysicalMaterial_const_,FWeakObjectPtr>::
              UEOpEquals<UPhysicalMaterial_const_,bool>
                        ((TWeakObjectPtr<UPhysicalMaterial_const_,FWeakObjectPtr> *)
                         ((this->ResourceKey).PhysicalMaterials.AllocatorInstance.Data +
                         (longlong)(int)uVar9 * 8),
                         (TWeakObjectPtr<UPhysicalMaterial_const_,FWeakObjectPtr> *)
                         (pFVar4 + (longlong)(int)uVar9 * 8));
      if (!bVar6) {
        return false;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (param_1->PhysicalMaterials).ArrayNum);
  }
  pFVar11 = (param_1->CapturedRegions).AllocatorInstance.Data;
  uVar9 = 0;
  iVar2 = (this->ResourceKey).CapturedRegions.ArrayNum;
  lVar10 = 0;
  iVar3 = (param_1->CapturedRegions).ArrayNum;
  pFVar4 = pFVar11 + (longlong)iVar3 * 8;
  do {
    if ((param_1->CapturedRegions).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TIntPoint<int>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar11 == pFVar4) {
      return (int)uVar9 < iVar2;
    }
    for (; lVar10 < iVar2; lVar10 = lVar10 + 1) {
      uVar8 = 0;
      if ((int)uVar9 < (this->ResourceKey).CapturedRegions.ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar1 = (this->ResourceKey).CapturedRegions.AllocatorInstance.Data + lVar10 * 8;
      if ((*(int *)pFVar1 == *(int *)pFVar11) && (*(int *)(pFVar1 + 4) == *(int *)(pFVar11 + 4)))
      break;
      uVar9 = uVar9 + 1;
    }
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// Initialize @ 149185550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall FNDI_Landscape_SharedResource::Initialize(FNDI_Landscape_SharedResource *this)

{
  int *piVar1;
  TMatrix<double> *pTVar2;
  FLandscapeTextureResource *pFVar3;
  ULandscapeHeightfieldCollisionComponent *this_00;
  UPhysicalMaterial *pUVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  TIntPoint<int>_u_0 *pTVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  UObject *pUVar14;
  FLandscapeTextureResource *pFVar15;
  undefined8 *puVar16;
  TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *pTVar17;
  TTransform<double> *pTVar18;
  TMatrix<double> *pTVar19;
  int iVar20;
  longlong lVar21;
  FScriptContainerElement FVar22;
  FScriptContainerElement *this_01;
  longlong lVar23;
  TIntPoint<int>_u_0 *pTVar24;
  TTransform<double> *pTVar25;
  TIntPoint<int>_u_0 TVar26;
  ulonglong uVar27;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar28;
  uint uVar29;
  int iVar30;
  ulonglong uVar31;
  uint uVar32;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar33;
  FScriptContainerElement *pFVar34;
  float fVar35;
  FScriptContainerElement *pFVar36;
  double dVar37;
  double dVar39;
  undefined1 auVar38 [16];
  float fVar40;
  int iVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  atomic<int> aVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined1 auStackY_398 [32];
  FScriptContainerElement local_348;
  undefined1 local_347;
  undefined1 local_346 [2];
  uint local_344;
  int local_340;
  undefined4 local_33c;
  ForAnyElementType local_338;
  undefined8 local_330;
  undefined8 local_328;
  TArray<float,TSizedDefaultAllocator<32>_> *local_320;
  TIntPoint<int>_u_0 *local_318;
  int local_310;
  uint local_30c;
  int local_308;
  int local_304;
  FNDI_Landscape_SharedResource *local_300;
  TArray<float,TSizedDefaultAllocator<32>_> *local_2f8;
  ulonglong local_2f0;
  undefined8 local_2e8;
  TIntPoint<int>_u_0_s_0 local_2e0;
  longlong local_2d8;
  TIntPoint<int>_u_0_s_0 local_2d0;
  TIntPoint<int>_u_0_s_0 local_2c8;
  undefined8 local_2c0;
  FScriptContainerElement *local_2b8;
  TIntPoint<int>_u_0_s_0 local_2b0;
  TIntPoint<int>_u_0 *local_2a8;
  TIntPoint<int>_u_0 local_2a0;
  ulonglong local_298;
  undefined8 local_290;
  FScriptContainerElement *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  FScriptContainerElement *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  TVector<double>_u_0 local_268;
  double local_250;
  double local_248;
  double local_240;
  undefined1 local_238 [16];
  TArrayView<float,int> local_228;
  undefined1 local_218 [16];
  TVector<double>_u_0 local_208;
  TTransform<double> local_1e8;
  TMatrix<double> local_158;
  undefined1 local_d8 [64];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_300 = this;
  pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ResourceKey);
  local_2d8 = (**(code **)(*(longlong *)&pUVar14[0x11].field_0x18 + 0x18))();
  if (local_2d8 == 0) {
    return;
  }
  pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ResourceKey);
  local_2b0 = (this->ResourceKey).MaxCaptureRegion.field0_0x0._s_0;
  local_344 = *(uint *)&pUVar14[0x2f].field_0x18;
  iVar20 = (local_2b0.X - (this->ResourceKey).MinCaptureRegion.field0_0x0._s_0.X) + 1;
  iVar12 = (local_2b0.Y - (this->ResourceKey).MinCaptureRegion.field0_0x0._s_0.Y) + 1;
  local_328 = CONCAT44(iVar12,iVar20);
  local_290 = local_328;
  local_340 = iVar20 * local_344 + 1;
  local_308 = iVar12 * local_344 + 1;
  uVar29 = local_308 * local_340;
  uVar31 = (ulonglong)uVar29;
  TVar26._s_0.Y = local_308;
  TVar26._s_0.X = local_340;
  local_2a0 = TVar26;
  pFVar15 = ::operator_new(0x80);
  if (pFVar15 == (FLandscapeTextureResource *)0x0) {
    pFVar15 = (FLandscapeTextureResource *)0x0;
  }
  else {
    FRenderResource::FRenderResource((FRenderResource *)pFVar15);
    pFVar15->_padding_ = (longlong)&___7FLandscapeTextureResource__6B_;
    (pFVar15->HeightTexture).Buffer.Reference = (FRHITexture *)0x0;
    (pFVar15->HeightTexture).SRV.Reference = (FRHIShaderResourceView *)0x0;
    (pFVar15->HeightTexture).NumBytes = 0;
    (pFVar15->PhysMatTexture).Buffer.Reference = (FRHITexture *)0x0;
    (pFVar15->PhysMatTexture).SRV.Reference = (FRHIShaderResourceView *)0x0;
    (pFVar15->PhysMatTexture).NumBytes = 0;
    (pFVar15->CellCount).field0_0x0 = TVar26;
    (pFVar15->HeightValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar15->HeightValues).ArrayNum = 0;
    (pFVar15->HeightValues).ArrayMax = 0;
    (pFVar15->PhysMatValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar15->PhysMatValues).ArrayNum = 0;
    (pFVar15->PhysMatValues).ArrayMax = 0;
    pFVar15->GpuMemoryUsage = 0;
  }
  pTVar33 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
  if (this == (FNDI_Landscape_SharedResource *)local_238) {
    if (pFVar15 == (FLandscapeTextureResource *)0x0) goto LAB_1491856ca;
    puVar16 = (undefined8 *)pFVar15->_padding_;
  }
  else {
    pFVar3 = (this->LandscapeTextures).Ptr;
    (this->LandscapeTextures).Ptr = pFVar15;
    if (pFVar3 == (FLandscapeTextureResource *)0x0) goto LAB_1491856ca;
    puVar16 = (undefined8 *)pFVar3->_padding_;
    pFVar15 = pFVar3;
  }
  (*(code *)*puVar16)(pFVar15,1);
LAB_1491856ca:
  if ((this->ResourceKey).IncludesCachedHeight == false) {
    local_2f8 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    pTVar28 = pTVar33;
  }
  else {
    pFVar15 = (this->LandscapeTextures).Ptr;
    pTVar28 = &pFVar15->HeightValues;
    local_33c = 0;
    local_2f8 = pTVar28;
    if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar31);
    }
    piVar1 = &(pFVar15->HeightValues).ArrayMax;
    if ((pFVar15->HeightValues).ArrayMax < (int)uVar29) {
      (pFVar15->HeightValues).ArrayNum = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar29,&pTVar28->AllocatorInstance,0,piVar1);
    }
    (pFVar15->HeightValues).ArrayNum = 0;
    if (*piVar1 != uVar29) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar29,&pTVar28->AllocatorInstance,0,piVar1);
    }
    uVar27 = uVar31;
    if (0 < (int)uVar29) {
      do {
        pFVar34 = (pTVar28->AllocatorInstance).Data;
        if (((pFVar34 <= (FScriptContainerElement *)&local_33c) &&
            ((FScriptContainerElement *)&local_33c < pFVar34 + (longlong)*piVar1 * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar12 = (pFVar15->HeightValues).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar28->AllocatorInstance,piVar1);
        }
        (pFVar15->HeightValues).ArrayNum = iVar12 + 1;
        *(undefined4 *)((pTVar28->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_33c;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
  }
  if ((this->ResourceKey).IncludesCachedPhysMat == false) {
    local_320 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
  }
  else {
    pFVar15 = (this->LandscapeTextures).Ptr;
    pTVar33 = (TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar15->PhysMatValues;
    local_348 = (FScriptContainerElement)0xff;
    local_320 = pTVar33;
    if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar31);
    }
    piVar1 = &(pFVar15->PhysMatValues).ArrayMax;
    if ((pFVar15->PhysMatValues).ArrayMax < (int)uVar29) {
      (pFVar15->PhysMatValues).ArrayNum = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar29,(ForAnyElementType *)pTVar33,0,piVar1);
    }
    (pFVar15->PhysMatValues).ArrayNum = 0;
    if (*piVar1 != uVar29) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar29,(ForAnyElementType *)pTVar33,0,piVar1);
    }
    if (0 < (int)uVar29) {
      do {
        pFVar34 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)pTVar33)->AllocatorInstance
                  ).Data;
        if (((pFVar34 <= &local_348) && (&local_348 < pFVar34 + *piVar1)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar12 = (pFVar15->PhysMatValues).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,(ForAnyElementType *)pTVar33,piVar1);
        }
        (pFVar15->PhysMatValues).ArrayNum = iVar12 + 1;
        (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)pTVar33)->AllocatorInstance).Data
        [iVar12] = local_348;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
    }
  }
  local_2e0 = (this->ResourceKey).MinCaptureRegion.field0_0x0._s_0;
  local_30c = (this->ResourceKey).CapturedRegions.ArrayNum;
  uVar31 = (ulonglong)(int)local_30c;
  pTVar24 = (TIntPoint<int>_u_0 *)(this->ResourceKey).CapturedRegions.AllocatorInstance.Data;
  local_298 = (ulonglong)(local_2e0.X * local_344);
  local_2a8 = pTVar24 + uVar31;
  local_304 = local_2e0.Y * local_344;
  do {
    pTVar10 = local_2a8;
    uVar29 = local_344;
    local_318 = pTVar24;
    if ((this->ResourceKey).CapturedRegions.ArrayNum != (int)uVar31) {
      local_347 = 0;
      `TCheckedPointerIterator<UE::Math::TIntPoint<int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_347);
    }
    fVar35 = __real_3f800000;
    if (pTVar24 == pTVar10) {
      (this->CellCount).field0_0x0 = local_2a0;
      dVar8 = (double)(fVar35 / (float)local_340);
      dVar7 = (double)(fVar35 / (float)local_308);
      fVar35 = __real_3f000000 - (float)(int)local_298;
      fVar40 = __real_3f000000 - (float)local_304;
      (this->UvScaleBias).field0_0x0._s_0.X = dVar8;
      (this->UvScaleBias).field0_0x0._s_0.Y = dVar7;
      dVar7 = (double)fVar40 * dVar7;
      auVar6._8_4_ = SUB84(dVar7,0);
      auVar6._0_8_ = (double)fVar35 * dVar8;
      auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(this->UvScaleBias).field0_0x0 + 0x10) = auVar6;
      pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ResourceKey);
      pTVar25 = &UE::Math::TTransform<double>::Identity;
      if (*(longlong *)(pUVar14 + 0xb) == 0) {
        pTVar18 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar18 = (TTransform<double> *)(*(longlong *)(pUVar14 + 0xb) + 0x1f0);
      }
      local_1e8.Rotation.XY.m128d_f64[0] = (pTVar18->Rotation).XY.m128d_f64[0];
      local_1e8.Rotation.XY.m128d_f64[1] = (pTVar18->Rotation).XY.m128d_f64[1];
      local_1e8.Rotation.ZW.m128d_f64[0] = (pTVar18->Rotation).ZW.m128d_f64[0];
      local_1e8.Rotation.ZW.m128d_f64[1] = (pTVar18->Rotation).ZW.m128d_f64[1];
      local_208._s_0.X = (pTVar18->Translation).XY.m128d_f64[0];
      local_208._s_0.Y = (pTVar18->Translation).XY.m128d_f64[1];
      local_208._s_0.Z = (pTVar18->Translation).ZW.m128d_f64[0];
      local_1e8.Scale3D.XY.m128d_f64[0] = (pTVar18->Scale3D).XY.m128d_f64[0];
      local_1e8.Scale3D.XY.m128d_f64[1] = (pTVar18->Scale3D).XY.m128d_f64[1];
      local_1e8.Scale3D.ZW.m128d_f64[0] = (pTVar18->Scale3D).ZW.m128d_f64[0];
      local_1e8.Scale3D.ZW.m128d_f64[1] = (pTVar18->Scale3D).ZW.m128d_f64[1];
      TLargeWorldRenderPosition<double>::TLargeWorldRenderPosition<double><double>
                ((TLargeWorldRenderPosition<double> *)&local_268._s_0,
                 (TVector<double> *)&local_208._s_0);
      (this->LandscapeLWCTile).field0_0x0._s_0.X = (float)local_268._s_0.X;
      (this->LandscapeLWCTile).field0_0x0._s_0.Y = (float)local_268._s_0.Y;
      (this->LandscapeLWCTile).field0_0x0._s_0.Z = (float)local_268._s_0.Z;
      local_1e8.Translation.ZW.m128d_f64[0] = (double)(float)local_240;
      local_1e8.Translation.ZW.m128d_f64[1] = 0.0;
      local_1e8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)(float)local_248,0);
      local_1e8.Translation.XY.m128d_f64[0] = (double)(float)local_250;
      local_1e8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)(float)local_248 >> 0x20);
      pTVar19 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_1e8,&local_158);
      dVar8 = __real_3e45798ee0000000;
      pTVar2 = &this->ActorToWorldTransform;
      dVar7 = pTVar19->M[0][1];
      pTVar2->M[0][0] = pTVar19->M[0][0];
      (this->ActorToWorldTransform).M[0][1] = dVar7;
      dVar7 = pTVar19->M[0][3];
      (this->ActorToWorldTransform).M[0][2] = pTVar19->M[0][2];
      (this->ActorToWorldTransform).M[0][3] = dVar7;
      dVar7 = pTVar19->M[1][1];
      (this->ActorToWorldTransform).M[1][0] = pTVar19->M[1][0];
      (this->ActorToWorldTransform).M[1][1] = dVar7;
      dVar7 = pTVar19->M[1][3];
      (this->ActorToWorldTransform).M[1][2] = pTVar19->M[1][2];
      (this->ActorToWorldTransform).M[1][3] = dVar7;
      dVar7 = pTVar19->M[2][1];
      (this->ActorToWorldTransform).M[2][0] = pTVar19->M[2][0];
      (this->ActorToWorldTransform).M[2][1] = dVar7;
      dVar7 = pTVar19->M[2][3];
      (this->ActorToWorldTransform).M[2][2] = pTVar19->M[2][2];
      (this->ActorToWorldTransform).M[2][3] = dVar7;
      dVar7 = pTVar19->M[3][1];
      (this->ActorToWorldTransform).M[3][0] = pTVar19->M[3][0];
      (this->ActorToWorldTransform).M[3][1] = dVar7;
      dVar7 = pTVar19->M[3][3];
      (this->ActorToWorldTransform).M[3][2] = pTVar19->M[3][2];
      (this->ActorToWorldTransform).M[3][3] = dVar7;
      dVar7 = pTVar2->M[0][0];
      if (((dVar8 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
          || (dVar7 = (this->ActorToWorldTransform).M[0][1],
             dVar8 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
             )) || (((dVar7 = (this->ActorToWorldTransform).M[0][2],
                     dVar8 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                              SUB84(dVar7,0) &
                                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
                     ((((dVar7 = (this->ActorToWorldTransform).M[1][0],
                        dVar8 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                 SUB84(dVar7,0) &
                                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
                        (dVar7 = (this->ActorToWorldTransform).M[1][1],
                        dVar8 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                 SUB84(dVar7,0) &
                                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
                       (dVar7 = (this->ActorToWorldTransform).M[1][2],
                       dVar8 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                SUB84(dVar7,0) &
                                                (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
                      ((dVar7 = (this->ActorToWorldTransform).M[2][0],
                       dVar8 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                SUB84(dVar7,0) &
                                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
                       (dVar7 = (this->ActorToWorldTransform).M[2][1],
                       dVar8 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                SUB84(dVar7,0) &
                                                (uint)__xmm_7fffffffffffffff7fffffffffffffff)))))))
                    || (dVar7 = (this->ActorToWorldTransform).M[2][2],
                       iVar12 = UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_,
                       iVar20 = UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_,
                       iVar30 = UE::Math::TMatrix<double>::Identity.M[1][1]._0_4_,
                       iVar41 = UE::Math::TMatrix<double>::Identity.M[1][1]._4_4_,
                       uVar42 = UE::Math::TMatrix<double>::Identity.M[1][2]._0_4_,
                       uVar43 = UE::Math::TMatrix<double>::Identity.M[1][2]._4_4_,
                       aVar44 = UE::Math::TMatrix<double>::Identity.M[1][3]._0_4_,
                       uVar45 = UE::Math::TMatrix<double>::Identity.M[1][3]._4_4_,
                       uVar46 = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_,
                       uVar47 = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_,
                       uVar48 = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_,
                       uVar49 = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_,
                       uVar50 = UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_,
                       uVar51 = UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_,
                       uVar52 = UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_,
                       uVar53 = UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_,
                       uVar54 = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_,
                       uVar55 = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_,
                       uVar56 = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_,
                       uVar57 = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_,
                       uVar58 = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_,
                       uVar59 = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_,
                       uVar60 = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_,
                       uVar61 = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_,
                       pFVar34 = (FScriptContainerElement *)
                                 UE::Math::TMatrix<double>::Identity.M[0][2],
                       dVar39 = UE::Math::TMatrix<double>::Identity.M[0][3],
                       pFVar36 = (FScriptContainerElement *)
                                 UE::Math::TMatrix<double>::Identity.M[0][0],
                       dVar37 = UE::Math::TMatrix<double>::Identity.M[0][1],
                       dVar8 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                SUB84(dVar7,0) &
                                                (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
        FMath::MatrixInverse((TMatrix<double> *)local_d8,pTVar2);
        iVar12 = local_d8._32_4_;
        iVar20 = local_d8._36_4_;
        iVar30 = local_d8._40_4_;
        iVar41 = local_d8._44_4_;
        uVar42 = local_d8._48_4_;
        uVar43 = local_d8._52_4_;
        aVar44 = (atomic<int>)local_d8._56_4_;
        uVar45 = local_d8._60_4_;
        uVar46 = local_98;
        uVar47 = uStack_94;
        uVar48 = uStack_90;
        uVar49 = uStack_8c;
        uVar50 = local_88;
        uVar51 = uStack_84;
        uVar52 = uStack_80;
        uVar53 = uStack_7c;
        uVar54 = local_78;
        uVar55 = uStack_74;
        uVar56 = uStack_70;
        uVar57 = uStack_6c;
        uVar58 = local_68;
        uVar59 = uStack_64;
        uVar60 = uStack_60;
        uVar61 = uStack_5c;
        pFVar34 = (FScriptContainerElement *)local_d8._16_8_;
        dVar39 = (double)local_d8._24_8_;
        pFVar36 = (FScriptContainerElement *)local_d8._0_8_;
        dVar37 = (double)local_d8._8_8_;
      }
      (this->WorldToActorTransform).M[0][0] = (double)pFVar36;
      (this->WorldToActorTransform).M[0][1] = dVar37;
      (this->WorldToActorTransform).M[0][2] = (double)pFVar34;
      (this->WorldToActorTransform).M[0][3] = dVar39;
      *(int *)(this->WorldToActorTransform).M[1] = iVar12;
      *(int *)((longlong)(this->WorldToActorTransform).M[1] + 4) = iVar20;
      *(int *)((this->WorldToActorTransform).M[1] + 1) = iVar30;
      *(int *)((longlong)(this->WorldToActorTransform).M[1] + 0xc) = iVar41;
      *(undefined4 *)((this->WorldToActorTransform).M[1] + 2) = uVar42;
      *(undefined4 *)((longlong)(this->WorldToActorTransform).M[1] + 0x14) = uVar43;
      *(atomic<int> *)((this->WorldToActorTransform).M[1] + 3) = aVar44;
      *(undefined4 *)((longlong)(this->WorldToActorTransform).M[1] + 0x1c) = uVar45;
      *(undefined4 *)(this->WorldToActorTransform).M[2] = uVar46;
      *(undefined4 *)((longlong)(this->WorldToActorTransform).M[2] + 4) = uVar47;
      *(undefined4 *)((this->WorldToActorTransform).M[2] + 1) = uVar48;
      *(undefined4 *)((longlong)(this->WorldToActorTransform).M[2] + 0xc) = uVar49;
      *(undefined4 *)((this->WorldToActorTransform).M[2] + 2) = uVar50;
      *(undefined4 *)((longlong)(this->WorldToActorTransform).M[2] + 0x14) = uVar51;
      *(undefined4 *)((this->WorldToActorTransform).M[2] + 3) = uVar52;
      *(undefined4 *)((longlong)(this->WorldToActorTransform).M[2] + 0x1c) = uVar53;
      *(undefined4 *)(this->WorldToActorTransform).M[3] = uVar54;
      *(undefined4 *)((longlong)(this->WorldToActorTransform).M[3] + 4) = uVar55;
      *(undefined4 *)((this->WorldToActorTransform).M[3] + 1) = uVar56;
      *(undefined4 *)((longlong)(this->WorldToActorTransform).M[3] + 0xc) = uVar57;
      *(undefined4 *)((this->WorldToActorTransform).M[3] + 2) = uVar58;
      *(undefined4 *)((longlong)(this->WorldToActorTransform).M[3] + 0x14) = uVar59;
      *(undefined4 *)((this->WorldToActorTransform).M[3] + 3) = uVar60;
      *(undefined4 *)((longlong)(this->WorldToActorTransform).M[3] + 0x1c) = uVar61;
      pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ResourceKey);
      if (*(longlong *)(pUVar14 + 0xb) != 0) {
        pTVar25 = (TTransform<double> *)(*(longlong *)(pUVar14 + 0xb) + 0x1f0);
      }
      uVar42 = *(undefined4 *)((longlong)(pTVar25->Scale3D).XY.m128d_f64 + 4);
      uVar43 = *(undefined4 *)((pTVar25->Scale3D).XY.m128d_f64 + 1);
      uVar45 = *(undefined4 *)((longlong)(pTVar25->Scale3D).XY.m128d_f64 + 0xc);
      *(undefined4 *)&(this->TextureWorldGridSize).field0_0x0 =
           *(undefined4 *)(pTVar25->Scale3D).XY.m128d_f64;
      *(undefined4 *)((longlong)&(this->TextureWorldGridSize).field0_0x0 + 4) = uVar42;
      auVar9._4_8_ = dVar39;
      auVar9._0_4_ = uVar42;
      auVar38._0_8_ = auVar9._0_8_ << 0x20;
      auVar38._8_4_ = uVar43;
      auVar38._12_4_ = uVar45;
      (this->TextureWorldGridSize).field0_0x0._s_0.Y = auVar38._8_8_;
      BeginInitResource((FRenderResource *)(this->LandscapeTextures).Ptr,(FRenderCommandPipe *)0x0);
      return;
    }
    pTVar17 = TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                      *)(local_2d8 + 0xa0),(TIntPoint<int>)pTVar24->_s_0);
    if ((pTVar17 ==
         (TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *)0x0) ||
       (this_00 = *(ULandscapeHeightfieldCollisionComponent **)&pTVar17->field_0x8,
       this_00 == (ULandscapeHeightfieldCollisionComponent *)0x0)) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6494258729309963166>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceLandscape.cpp"
                          ,0x39e,"CollisionComponent != nullptr");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      if (pTVar28 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
        local_2d0 = pTVar24->_s_0;
        iVar20 = local_2d0.X - (this->ResourceKey).MinCaptureRegion.field0_0x0._s_0.X;
        local_288 = (pTVar28->AllocatorInstance).Data;
        iVar12 = pTVar28->ArrayNum;
        iVar30 = (local_2d0.Y - (this->ResourceKey).MinCaptureRegion.field0_0x0._s_0.Y) * local_344;
        local_2e8 = CONCAT44(iVar30,iVar20);
        if ((iVar12 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_228._8_8_ = CONCAT44(uStack_27c,iVar12);
        local_228.DataPtr = (float *)local_288;
        iStack_280 = iVar12;
        ULandscapeHeightfieldCollisionComponent::FillHeightTile
                  (this_00,&local_228,local_340 * iVar30 + iVar20 * uVar29,local_340);
        pTVar24 = local_318;
        uVar29 = local_344;
      }
      if (pTVar33 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
        local_2c8 = pTVar24->_s_0;
        iVar12 = pTVar33->ArrayNum;
        iVar20 = local_2c8.X - (this->ResourceKey).MinCaptureRegion.field0_0x0._s_0.X;
        iVar30 = local_2c8.Y - (this->ResourceKey).MinCaptureRegion.field0_0x0._s_0.Y;
        local_278 = (pTVar33->AllocatorInstance).Data;
        local_2c0 = CONCAT44(iVar30,iVar20);
        uVar29 = iVar20 * uVar29;
        local_2f0 = (ulonglong)uVar29;
        iVar30 = iVar30 * local_344;
        local_310 = iVar30;
        if ((iVar12 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_218._8_8_ = CONCAT44(uStack_26c,iVar12);
        local_218._0_8_ = local_278;
        iStack_270 = iVar12;
        ULandscapeHeightfieldCollisionComponent::FillMaterialIndexTile
                  (this_00,(TArrayView<unsigned_char,int> *)local_218,iVar30 * local_340 + uVar29,
                   local_340);
        iVar12 = (this_00->CookedPhysicalMaterials).ArrayNum;
        local_338.Data = (FScriptContainerElement *)0x0;
        pFVar34 = (this_00->CookedPhysicalMaterials).AllocatorInstance.Data;
        local_330 = 0;
        local_2b8 = pFVar34 + (longlong)iVar12 * 8;
        while( true ) {
          pFVar36 = local_2b8;
          if ((this_00->CookedPhysicalMaterials).ArrayNum != iVar12) {
            local_346[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UPhysicalMaterial>_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_346);
          }
          pTVar33 = local_320;
          if (pFVar34 == pFVar36) break;
          pUVar4 = *(UPhysicalMaterial **)pFVar34;
          pFVar36 = (local_300->ResourceKey).PhysicalMaterials.AllocatorInstance.Data;
          iVar20 = (local_300->ResourceKey).PhysicalMaterials.ArrayNum;
          for (this_01 = pFVar36; this_01 != pFVar36 + (longlong)iVar20 * 8; this_01 = this_01 + 8)
          {
            bVar11 = TWeakObjectPtr<UPhysicalMaterial_const_,FWeakObjectPtr>::
                     UEOpEquals<UPhysicalMaterial,bool>
                               ((TWeakObjectPtr<UPhysicalMaterial_const_,FWeakObjectPtr> *)this_01,
                                pUVar4);
            if (bVar11) {
              lVar23 = (longlong)this_01 - (longlong)pFVar36 >> 3;
              if ((0xff < (int)lVar23) &&
                 (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<6494258729309963184>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceLandscape.cpp"
                                      ,0x3b0,"RemapIndex <= TNumericLimits<uint8>::Max()"), bVar11))
              {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              goto LAB_149185baf;
            }
          }
          lVar23 = 0xffffffff;
LAB_149185baf:
          if ((int)local_330 == local_330._4_4_) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&local_338,(int *)((longlong)&local_330 + 4));
            local_330 = CONCAT44(local_330._4_4_,iVar20);
          }
          lVar21 = (longlong)(int)local_330;
          pFVar34 = pFVar34 + 8;
          local_330 = CONCAT44(local_330._4_4_,(int)local_330 + 1);
          local_338.Data[lVar21] = SUB81(lVar23,0);
        }
        if (0 < (int)local_344) {
          uVar27 = (ulonglong)local_344;
          uVar29 = local_310 * local_340 + (int)local_2f0;
          lVar21 = (longlong)(local_310 * local_340 + (int)local_2f0);
          uVar31 = (ulonglong)local_344;
          local_2f0 = (ulonglong)local_344;
          lVar23 = lVar21;
          uVar32 = uVar29;
          do {
            do {
              uVar13 = 0;
              if ((int)uVar29 < pTVar33->ArrayNum) {
                uVar13 = ~uVar29 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar34 = (pTVar33->AllocatorInstance).Data;
              FVar22 = pFVar34[lVar21];
              if ((int)(uint)(byte)FVar22 < (int)local_330) {
                FVar22 = local_338.Data[(byte)FVar22];
              }
              else {
                FVar22 = (FScriptContainerElement)0xff;
              }
              pFVar34[lVar21] = FVar22;
              uVar29 = uVar29 + 1;
              lVar21 = lVar21 + 1;
              uVar31 = uVar31 - 1;
            } while (uVar31 != 0);
            uVar29 = uVar32 + local_340;
            lVar21 = lVar23 + local_340;
            uVar27 = uVar27 - 1;
            uVar31 = local_2f0;
            lVar23 = lVar21;
            uVar32 = uVar29;
          } while (uVar27 != 0);
        }
        pTVar24 = local_318;
        this = local_300;
        pTVar33 = local_320;
        if (local_338.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.Data);
          pTVar24 = local_318;
          this = local_300;
          pTVar33 = local_320;
        }
      }
    }
    pTVar24 = pTVar24 + 1;
    uVar31 = (ulonglong)local_30c;
    pTVar28 = local_2f8;
  } while( true );
}

// IsUsed @ 1491866d0

bool __thiscall FNDI_Landscape_SharedResource::IsUsed(FNDI_Landscape_SharedResource *this)

{
  if ((0 < (int)this->ShaderPhysicsDataUserCount) && (this->CurrentState != Released)) {
    return true;
  }
  return false;
}

// RegisterUser @ 1491896d0

void __thiscall
FNDI_Landscape_SharedResource::RegisterUser
          (FNDI_Landscape_SharedResource *this,FNDI_SharedResourceUsage *param_1,bool param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1->RequiresCpuAccess != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Usage.RequiresCpuAccess == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceLandscape.cpp"
                       ,0x36d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->RequiresGpuAccess != false) {
    LOCK();
    paVar1 = &this->ShaderPhysicsDataUserCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x0) {
      this->NextState = Initialized;
      if ((param_2) && (this->CurrentState != Initialized)) {
        Initialize(this);
        this->CurrentState = Initialized;
      }
    }
  }
  return;
}

// Release @ 14918a750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNDI_Landscape_SharedResource::Release(FNDI_Landscape_SharedResource *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FLandscapeTextureResource *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FLandscapeTextureResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFStack_70 = (this->LandscapeTextures).Ptr;
  (this->LandscapeTextures).Ptr = (FLandscapeTextureResource *)0x0;
  if (pFStack_70 != (FLandscapeTextureResource *)0x0) {
    local_60 = (undefined ***)0x0;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNDI_Landscape_SharedResource::Release'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNDI_Landscape_SharedResource::Release'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNDI_Landscape_SharedResource::Release_::__l5::TSTR_BeginDestroyCommand991>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FNDI_Landscape_SharedResource::Release'::__l5::TSTR_BeginDestroyCommand991>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// UnregisterUser @ 14918fc30

void __thiscall
FNDI_Landscape_SharedResource::UnregisterUser
          (FNDI_Landscape_SharedResource *this,FNDI_SharedResourceUsage *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1->RequiresCpuAccess != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Usage.RequiresCpuAccess == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceLandscape.cpp"
                       ,0x37f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->RequiresGpuAccess != false) {
    LOCK();
    paVar1 = &this->ShaderPhysicsDataUserCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      this->NextState = Released;
    }
  }
  return;
}

// UpdateState @ 149190640

void __thiscall
FNDI_Landscape_SharedResource::UpdateState(FNDI_Landscape_SharedResource *this,bool *param_1)

{
  EResourceState EVar1;
  
  EVar1 = this->NextState;
  *param_1 = false;
  if (EVar1 != this->CurrentState) {
    if (EVar1 == Initialized) {
      Initialize(this);
    }
    else if (EVar1 == Released) {
      Release(this);
      *param_1 = true;
    }
    this->CurrentState = EVar1;
  }
  return;
}

