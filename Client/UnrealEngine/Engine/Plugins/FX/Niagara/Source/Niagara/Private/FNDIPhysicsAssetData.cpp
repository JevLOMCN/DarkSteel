// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// Init @ 148ec6c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148ec7199) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNDIPhysicsAssetData::Init
          (FNDIPhysicsAssetData *this,UNiagaraDataInterfacePhysicsAsset *param_1,
          FNiagaraSystemInstance *param_2)

{
  TArray<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TWeakObjectPtr<UPhysicsAsset,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  ETickingGroup EVar9;
  uint uVar10;
  UObject *pUVar11;
  FNDIPhysicsAssetBuffer *this_00;
  USkeletalMeshComponent *pUVar12;
  USkeletalMesh *pUVar13;
  TBoxSphereBounds<double,double> *pTVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  double dVar19;
  undefined1 auStackY_1f8 [32];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  FWeakObjectPtr local_180;
  TArray<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  local_178;
  FNDIPhysicsAssetData *local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  undefined1 local_130;
  TBoxSphereBounds<double,double> local_128;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this->AssetBuffer = (FNDIPhysicsAssetBuffer *)0x0;
  if ((param_1 != (UNiagaraDataInterfacePhysicsAsset *)0x0) &&
     (param_2 != (FNiagaraSystemInstance *)0x0)) {
    local_e8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_e8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_e8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_e8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_168 = this;
    UNiagaraDataInterfacePhysicsAsset::ExtractSourceComponent(param_1,param_2,&local_e8);
    pTVar1 = &param_1->SourceComponents;
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.ArrayNum = (param_1->SourceComponents).ArrayNum;
    lVar16 = (longlong)local_178.ArrayNum;
    _Src = (pTVar1->AllocatorInstance).Data;
    if (local_178.ArrayNum == 0) {
      local_178.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_178.ArrayNum,0,&local_178.AllocatorInstance,local_178.ArrayNum,
                 &local_178.ArrayMax);
      memcpy(local_178.AllocatorInstance.Data,_Src,lVar16 << 3);
    }
    EVar9 = ComputeTickingGroup(&local_178);
    pTVar2 = &param_1->PhysicsAssets;
    this->TickingGroup = EVar9;
    if ((0 < (param_1->PhysicsAssets).ArrayNum) &&
       (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data), bVar8))
    {
      if (((param_1->PhysicsAssets).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data);
      if ((pUVar11 != (UObject *)0x0) &&
         ((param_1->PhysicsAssets).ArrayNum == (param_1->SourceComponents).ArrayNum)) {
        NDIPhysicsAssetLocal::CreateInternalArrays
                  (pTVar2,pTVar1,&this->AssetArrays,&param_2->WorldTransform,&local_e8);
      }
    }
    this_00 = ::operator_new(0x80);
    if (this_00 == (FNDIPhysicsAssetBuffer *)0x0) {
      this_00 = (FNDIPhysicsAssetBuffer *)0x0;
    }
    else {
      this_00->_padding_ = 0;
      *(FNameEntryId *)&this_00->_padding_ = 0;
      *(uint *)((longlong)&this_00->_padding_ + 4) = 0;
      *(FNameEntryId *)&this_00->_padding_ = 0;
      *(uint *)((longlong)&this_00->_padding_ + 4) = 0;
      this_00->_padding_ = 0;
      (this_00->WorldTransformBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
      (this_00->WorldTransformBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      *(undefined8 *)&(this_00->WorldTransformBuffer).NumBytes = 0;
      (this_00->InverseTransformBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
      (this_00->InverseTransformBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      *(undefined8 *)&(this_00->InverseTransformBuffer).NumBytes = 0;
      (this_00->ElementExtentBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
      (this_00->ElementExtentBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      *(undefined8 *)&(this_00->ElementExtentBuffer).NumBytes = 0;
      (this_00->PhysicsTypeBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
      (this_00->PhysicsTypeBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      *(undefined8 *)&(this_00->PhysicsTypeBuffer).NumBytes = 0;
      FRenderResource::FRenderResource((FRenderResource *)this_00);
      this_00->_padding_ = (longlong)&___7FNDIPhysicsAssetBuffer__6B_;
      (this_00->WorldTransformBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
      (this_00->WorldTransformBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      (this_00->WorldTransformBuffer).NumBytes = 0;
      (this_00->InverseTransformBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
      (this_00->InverseTransformBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      (this_00->InverseTransformBuffer).NumBytes = 0;
      (this_00->ElementExtentBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
      (this_00->ElementExtentBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      (this_00->ElementExtentBuffer).NumBytes = 0;
      (this_00->PhysicsTypeBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
      (this_00->PhysicsTypeBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      (this_00->PhysicsTypeBuffer).NumBytes = 0;
    }
    this->AssetBuffer = this_00;
    BeginInitResource((FRenderResource *)this_00,(FRenderCommandPipe *)0x0);
    uVar15 = 0;
    local_1b8 = ___xmm_47efffffe000000047efffffe0000000;
    local_1b8 = ___xmm_47efffffe000000047efffffe0000000;
    dStack_1b0 = _UNK_150b28868;
    local_198 = ___xmm_c7efffffe0000000c7efffffe0000000;
    local_198 = ___xmm_c7efffffe0000000c7efffffe0000000;
    dStack_190 = _UNK_150b2d318;
    local_1a8 = ___xmm_c7efffffe000000047efffffe0000000;
    local_1a8 = ___xmm_c7efffffe000000047efffffe0000000;
    dStack_1a0 = _UNK_151d21698;
    if (0 < (param_1->PhysicsAssets).ArrayNum) {
      lVar16 = 0;
      do {
        uVar18 = ~uVar15 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar15 < (param_1->PhysicsAssets).ArrayNum) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_180 = *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + lVar16);
        bVar8 = FWeakObjectPtr::IsValid(&local_180);
        dVar6 = dStack_190;
        if ((bVar8) && (pUVar11 = FWeakObjectPtr::Get(&local_180), pUVar11 != (UObject *)0x0)) {
          uVar10 = 0;
          if ((int)uVar15 < (param_1->SourceComponents).ArrayNum) {
            uVar10 = uVar18;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar17 = (longlong)(int)uVar15;
          bVar8 = FWeakObjectPtr::IsValid
                            ((FWeakObjectPtr *)((pTVar1->AllocatorInstance).Data + lVar17 * 8));
          if (bVar8) {
            uVar10 = 0;
            if ((int)uVar15 < (param_1->SourceComponents).ArrayNum) {
              uVar10 = uVar18;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                          ((pTVar1->AllocatorInstance).Data + lVar17 * 8));
            if (pUVar11 == (UObject *)0x0) goto LAB_148ec70bd;
            uVar10 = 0;
            if ((int)uVar15 < (param_1->SourceComponents).ArrayNum) {
              uVar10 = uVar18;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar12 = (USkeletalMeshComponent *)
                      FWeakObjectPtr::Get((FWeakObjectPtr *)
                                          ((pTVar1->AllocatorInstance).Data + lVar17 * 8));
            pUVar13 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar12);
            if (pUVar13 == (USkeletalMesh *)0x0) goto LAB_148ec70bd;
            uVar10 = 0;
            if ((int)uVar15 < (param_1->SourceComponents).ArrayNum) {
              uVar10 = uVar18;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar12 = (USkeletalMeshComponent *)
                      FWeakObjectPtr::Get((FWeakObjectPtr *)
                                          ((pTVar1->AllocatorInstance).Data + lVar17 * 8));
            pUVar13 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar12);
          }
          else {
LAB_148ec70bd:
            pUVar11 = FWeakObjectPtr::Get(&local_180);
            pUVar13 = (USkeletalMesh *)(**(code **)(*(longlong *)(pUVar11 + 1) + 0x20))(pUVar11 + 1)
            ;
          }
          if (pUVar13 != (USkeletalMesh *)0x0) {
            pTVar14 = USkeletalMesh::GetImportedBounds(pUVar13,&local_128);
            local_130 = 1;
            local_160 = (pTVar14->Origin).field0_0x0._s_0.X;
            dStack_158 = (pTVar14->Origin).field0_0x0._s_0.Y;
            local_150 = (pTVar14->Origin).field0_0x0._s_0.Z;
            dStack_148 = local_160 + (pTVar14->BoxExtent).field0_0x0._s_0.X;
            local_140 = dStack_158 + (pTVar14->BoxExtent).field0_0x0._s_0.Y;
            local_160 = local_160 - (pTVar14->BoxExtent).field0_0x0._s_0.X;
            dStack_158 = dStack_158 - (pTVar14->BoxExtent).field0_0x0._s_0.Y;
            dStack_138 = local_150 + (pTVar14->BoxExtent).field0_0x0._s_0.Z;
            local_150 = local_150 - (pTVar14->BoxExtent).field0_0x0._s_0.Z;
            dVar6 = local_160;
            if (local_1b8 <= local_160) {
              dVar6 = local_1b8;
            }
            dVar19 = dStack_158;
            if (dStack_1b0 <= dStack_158) {
              dVar19 = dStack_1b0;
            }
            dVar7 = local_150;
            if (local_1a8 <= local_150) {
              dVar7 = local_1a8;
            }
            dVar4 = dStack_148;
            if (dStack_148 <= dStack_1a0) {
              dVar4 = dStack_1a0;
            }
            dVar5 = local_140;
            if (local_140 <= local_198) {
              dVar5 = local_198;
            }
            local_1b8 = dVar6;
            dStack_1b0 = dVar19;
            local_1a8 = dVar7;
            dStack_1a0 = dVar4;
            local_198 = dVar5;
            dVar6 = dStack_138;
            if (dStack_138 <= dStack_190) {
              dVar6 = dStack_190;
            }
          }
        }
        dStack_190 = dVar6;
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 8;
        this = local_168;
      } while ((int)uVar15 < (param_1->PhysicsAssets).ArrayNum);
    }
    dVar6 = __real_3fe0000000000000;
    (this->BoxOrigin).field0_0x0._s_0.X = (dStack_1a0 + local_1b8) * __real_3fe0000000000000;
    (this->BoxOrigin).field0_0x0._s_0.Y = (local_198 + dStack_1b0) * dVar6;
    (this->BoxOrigin).field0_0x0._s_0.Z = (dStack_190 + local_1a8) * dVar6;
    (this->BoxExtent).field0_0x0._s_0.X = dStack_1a0 - local_1b8;
    (this->BoxExtent).field0_0x0._s_0.Y = local_198 - dStack_1b0;
    (this->BoxExtent).field0_0x0._s_0.Z = dStack_190 - local_1a8;
  }
  return;
}

// Release @ 148ece3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNDIPhysicsAssetData::Release(FNDIPhysicsAssetData *this)

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
  FNDIPhysicsAssetBuffer *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNDIPhysicsAssetBuffer *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFStack_70 = this->AssetBuffer;
  if (pFStack_70 != (FNDIPhysicsAssetBuffer *)0x0) {
    local_60 = (undefined ***)0x0;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNDIPhysicsAssetData::Release'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNDIPhysicsAssetData::Release'::`5'::<lambda_1>,1,0>::
                _vftable_;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNDIPhysicsAssetData::Release_::__l5::TSTR_DeleteResource441>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
               TRenderCommandTag<`FNDIPhysicsAssetData::Release'::__l5::TSTR_DeleteResource441>::Get
                         ();
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
    this->AssetBuffer = (FNDIPhysicsAssetBuffer *)0x0;
  }
  return;
}

// Update @ 148ed5310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNDIPhysicsAssetData::Update
          (FNDIPhysicsAssetData *this,UNiagaraDataInterfacePhysicsAsset *param_1,
          FNiagaraSystemInstance *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  ETickingGroup EVar3;
  UObject *pUVar4;
  longlong lVar5;
  undefined1 auStackY_e8 [32];
  TArray<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_a8
  ;
  TTransform<double> local_98;
  ulonglong local_38;
  
  if ((param_1 != (UNiagaraDataInterfacePhysicsAsset *)0x0) &&
     (local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8,
     param_2 != (FNiagaraSystemInstance *)0x0)) {
    local_98.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_98.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_98.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_98.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_98.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_98.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    UNiagaraDataInterfacePhysicsAsset::ExtractSourceComponent(param_1,param_2,&local_98);
    local_a8.ArrayNum = (param_1->SourceComponents).ArrayNum;
    lVar5 = (longlong)local_a8.ArrayNum;
    _Src = (param_1->SourceComponents).AllocatorInstance.Data;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_a8.ArrayNum == 0) {
      local_a8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_a8.ArrayNum,0,&local_a8.AllocatorInstance,local_a8.ArrayNum,
                 &local_a8.ArrayMax);
      memcpy(local_a8.AllocatorInstance.Data,_Src,lVar5 << 3);
    }
    EVar3 = ComputeTickingGroup(&local_a8);
    this->TickingGroup = EVar3;
    if ((0 < (param_1->PhysicsAssets).ArrayNum) &&
       (bVar2 = FWeakObjectPtr::IsValid
                          ((FWeakObjectPtr *)(param_1->PhysicsAssets).AllocatorInstance.Data), bVar2
       )) {
      if (((param_1->PhysicsAssets).ArrayNum < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1->PhysicsAssets).AllocatorInstance.Data
                                  );
      if ((pUVar4 != (UObject *)0x0) &&
         ((param_1->PhysicsAssets).ArrayNum == (param_1->SourceComponents).ArrayNum)) {
        NDIPhysicsAssetLocal::UpdateInternalArrays
                  (&param_1->PhysicsAssets,&param_1->SourceComponents,&this->AssetArrays,
                   &param_2->WorldTransform,&local_98);
      }
    }
  }
  return;
}

