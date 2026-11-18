// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraNanite
// Functions: 8

// FNiagaraRendererNanite @ 14da3fb70

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

FNiagaraRendererNanite * __thiscall
FNiagaraRendererNanite::FNiagaraRendererNanite
          (FNiagaraRendererNanite *this,Type param_1,UNiagaraRendererProperties *param_2,
          FNiagaraEmitterInstance *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  FNiagaraDataSet *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UNiagaraNaniteRendererProperties *pUVar8;
  FNiagaraRendererNanite *pFVar9;
  FNiagaraTypeDefinition *pFVar10;
  ForElementType<FNiagaraRendererNanite::FMeshData> FVar11;
  int local_res8 [2];
  int local_res20 [2];
  int local_58;
  int local_54;
  FNiagaraVariableBase local_50;
  FNiagaraVariableBase local_44;
  
  FNiagaraRenderer::FNiagaraRenderer((FNiagaraRenderer *)this,param_1,param_2,param_3);
  this->MeshIndexComponentOffset = -1;
  this->RendererVisComponentOffset = -1;
  this->_padding_ = (longlong)&___7FNiagaraRendererNanite__6B_;
  piVar1 = &(this->MeshDatas).ArrayNum;
  piVar2 = &(this->MeshDatas).ArrayMax;
  (this->MeshDatas).AllocatorInstance.SecondaryData =
       (ForElementType<FNiagaraRendererNanite::FMeshData>)0x0;
  *piVar1 = 0;
  *piVar2 = 4;
  pUVar8 = CastChecked<UNiagaraNaniteRendererProperties_const_,UNiagaraRendererProperties_const_>
                     (param_2);
  iVar4 = (pUVar8->Meshes).ArrayNum;
  iVar7 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraRendererNanite::FMeshData>_>
                    (0x50,0x10,iVar4,&(this->MeshDatas).AllocatorInstance,piVar1,piVar2);
  FVar11 = (this->MeshDatas).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FNiagaraRendererNanite::FMeshData>)0x0) {
    FVar11 = (ForElementType<FNiagaraRendererNanite::FMeshData>)&this->MeshDatas;
  }
  DefaultConstructItems<FNiagaraRendererNanite::FMeshData,int>
            ((void *)((longlong)FVar11 + (longlong)iVar7 * 0x50),iVar4);
  if (param_3->ParticleDataSet == (FNiagaraDataSet *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParticleDataSet",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                       ,0x3a,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FNiagaraRendererNanite *)(*pcVar5)();
      return pFVar9;
    }
  }
  this_00 = param_3->ParticleDataSet;
  if ((pUVar8->MeshIndexBinding).bBindingExistsOnSource != '\x01' ||
      (pUVar8->MeshIndexBinding).bIsCachedParticleValue != '\0') {
    pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                        (&(pUVar8->MeshIndexBinding).ParamMapVariable.TypeDefHandle);
    local_50.Name = (pUVar8->MeshIndexBinding).DataSetName;
    local_50.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(&local_50.TypeDefHandle,pFVar10);
    FNiagaraDataSet::GetVariableComponentOffsets
              (this_00,&local_50,local_res20,&this->MeshIndexComponentOffset,local_res8);
  }
  if ((pUVar8->RendererVisibilityTagBinding).bBindingExistsOnSource != '\x01' ||
      (pUVar8->RendererVisibilityTagBinding).bIsCachedParticleValue != '\0') {
    pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                        (&(pUVar8->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle);
    local_44.Name = (pUVar8->RendererVisibilityTagBinding).DataSetName;
    local_44.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(&local_44.TypeDefHandle,pFVar10);
    FNiagaraDataSet::GetVariableComponentOffsets
              (this_00,&local_44,&local_54,&this->RendererVisComponentOffset,&local_58);
  }
  return this;
}

// ~FNiagaraRendererNanite @ 14da40bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraRendererNanite::~FNiagaraRendererNanite(FNiagaraRendererNanite *this)

{
  ForElementType<FNiagaraRendererNanite::FMeshData> FVar1;
  
  this->_padding_ = (longlong)&___7FNiagaraRendererNanite__6B_;
  ReleaseComponents(this);
  FVar1 = (this->MeshDatas).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<FNiagaraRendererNanite::FMeshData>)0x0) {
    FVar1 = (ForElementType<FNiagaraRendererNanite::FMeshData>)&this->MeshDatas;
  }
  DestructItems<FNiagaraRendererNanite::FMeshData,int>
            ((FMeshData *)FVar1,(this->MeshDatas).ArrayNum);
  FVar1 = (this->MeshDatas).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FNiagaraRendererNanite::FMeshData>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FNiagaraRenderer::~FNiagaraRenderer((FNiagaraRenderer *)this);
  return;
}

// operator() @ 14da40f10

void __thiscall
`FNiagaraRendererNanite::ReleaseComponents'::__l20::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  
  iVar3 = *(int *)((longlong)this + 0x28);
  piVar1 = (int *)((longlong)this + 0x28);
  if (*(FWeakObjectPtr **)((longlong)this + 0x20) != (FWeakObjectPtr *)0x0) {
    this = *(FWeakObjectPtr **)((longlong)this + 0x20);
  }
  pFVar2 = (FWeakObjectPtr *)((longlong)this + (longlong)iVar3 * 8);
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (this == pFVar2) break;
    local_res8 = *(FWeakObjectPtr *)this;
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    if (pUVar4 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar4 + 0x4a0))(pUVar4,0);
    }
    this = (void *)((longlong)this + 8);
  }
  return;
}

// GetMaxCustomFloats @ 14da433c0

int __cdecl FNiagaraRendererNanite::GetMaxCustomFloats(void)

{
  return 0x40;
}

// Initialize @ 14da445b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraRendererNanite::Initialize
          (FNiagaraRendererNanite *this,UNiagaraRendererProperties *param_1,
          FNiagaraEmitterInstance *param_2,FNiagaraSystemInstanceController *param_3)

{
  ForElementType<FNiagaraRendererNanite::FMeshData> FVar1;
  longlong *plVar2;
  longlong lVar3;
  ForElementType<unsigned_int> *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  UNiagaraNaniteRendererProperties *this_00;
  TQuat<float> *pTVar13;
  UStaticMesh *pUVar14;
  UClass *pUVar15;
  ForElementType<unsigned_int> *pFVar16;
  ForElementType<FNiagaraRendererNanite::FMeshData> FVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  ForElementType<unsigned_int> *pFVar22;
  FNiagaraNaniteMeshRendererMeshProperties *this_01;
  longlong *plVar23;
  uint uVar24;
  undefined1 auVar25 [8];
  undefined1 local_res8 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  ForElementType<unsigned_int> local_88;
  longlong local_80;
  longlong local_78;
  UNiagaraNaniteRendererProperties *local_70;
  longlong local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  TQuat<float> local_48;
  
  FNiagaraRenderer::Initialize((FNiagaraRenderer *)this,param_1,param_2,param_3);
  this_00 = CastChecked<UNiagaraNaniteRendererProperties_const_,UNiagaraRendererProperties_const_>
                      (param_1);
  local_98._4_4_ = 0;
  if (0 < (this->MeshDatas).ArrayNum) {
    local_78 = 0;
    local_68 = 0;
    local_70 = this_00;
    do {
      lVar21 = local_68;
      lVar19 = local_78;
      uVar24 = local_98._4_4_;
      uVar20 = ~local_98._4_4_;
      uVar11 = 0;
      if ((int)local_98._4_4_ < (this_00->Meshes).ArrayNum) {
        uVar11 = uVar20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_01 = (FNiagaraNaniteMeshRendererMeshProperties *)
                ((this_00->Meshes).AllocatorInstance.Data + lVar19);
      uVar11 = 0;
      if ((int)uVar24 < (this->MeshDatas).ArrayNum) {
        uVar11 = uVar20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar1 = (this->MeshDatas).AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<FNiagaraRendererNanite::FMeshData>)&this->MeshDatas;
      if (FVar1 != (ForElementType<FNiagaraRendererNanite::FMeshData>)0x0) {
        FVar17 = FVar1;
      }
      lVar21 = lVar21 + (longlong)FVar17;
      *(undefined8 *)(lVar21 + 8) = *(undefined8 *)&(this_01->Scale).field0_0x0;
      *(float *)(lVar21 + 0x10) = (this_01->Scale).field0_0x0._s_0.Z;
      local_58 = lVar21;
      pTVar13 = UE::Math::TRotator<float>::Quaternion(&this_01->Rotation,&local_48);
      uVar6 = *(undefined8 *)&pTVar13->Z;
      *(undefined8 *)(lVar21 + 0x20) = *(undefined8 *)pTVar13;
      *(undefined8 *)(lVar21 + 0x28) = uVar6;
      pUVar14 = FNiagaraNaniteMeshRendererMeshProperties::GetResolvedMesh(this_01,param_2);
      if (pUVar14 != (UStaticMesh *)0x0) {
        local_90 = (undefined1  [8])0x0;
        local_88 = (ForElementType<unsigned_int>)0x0;
        UNiagaraNaniteRendererProperties::GetMeshUsedMaterials
                  (this_00,this_01,param_2,
                   (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)local_90);
        UNiagaraNaniteRendererProperties::ApplyMaterialOverrides
                  (this_00,param_2,
                   (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)local_90);
        uVar8 = local_88._0_4_;
        uVar18 = (ulonglong)(int)local_88._0_4_;
        local_60 = (FScriptContainerElement *)((longlong)local_90 + uVar18 * 8);
        auVar25 = local_90;
        while( true ) {
          pFVar9 = local_60;
          if ((int)uVar18 != uVar8) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          uVar24 = local_98._4_4_;
          if (auVar25 == (undefined1  [8])pFVar9) break;
          plVar2 = (longlong *)this->_padding_;
          pFVar22 = (ForElementType<unsigned_int> *)(lVar21 + 0x30);
          lVar7 = this->_padding_;
          lVar19 = *(longlong *)auVar25;
          local_80 = lVar19;
          for (plVar23 = plVar2; plVar23 != plVar2 + (int)lVar7; plVar23 = plVar23 + 1) {
            lVar3 = *plVar23;
            if (lVar3 == lVar19) {
LAB_14da44810:
              local_98._0_4_ = (undefined4)((longlong)plVar23 - (longlong)plVar2 >> 3);
              goto LAB_14da4482c;
            }
            if (lVar3 != 0) {
              pUVar15 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
              iVar12 = (int)pUVar15->_padding_;
              lVar19 = local_80;
              if ((iVar12 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar12 * 8) ==
                  &pUVar15->_padding_)) {
                if (*(longlong *)(lVar3 + 0x130) == 0) {
                  bVar10 = local_80 == 0;
                }
                else {
                  bVar10 = *(longlong *)(lVar3 + 0x130) == local_80;
                }
                if (bVar10) goto LAB_14da44810;
              }
            }
          }
          local_98[0] = 0xff;
          local_98[1] = 0xff;
          local_98[2] = 0xff;
          local_98[3] = 0xff;
LAB_14da4482c:
          pFVar4 = *(ForElementType<unsigned_int> **)(lVar21 + 0x40);
          pFVar16 = pFVar22;
          if (pFVar4 != (ForElementType<unsigned_int> *)0x0) {
            pFVar16 = pFVar4;
          }
          if (pFVar16 <= (ForElementType<unsigned_int> *)local_98) {
            pFVar16 = pFVar22;
            if (pFVar4 != (ForElementType<unsigned_int> *)0x0) {
              pFVar16 = pFVar4;
            }
            if ((local_98 < pFVar16->InlineData + (longlong)*(int *)(lVar21 + 0x4c) * 4) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar12 = *(int *)(lVar21 + 0x48);
          if (iVar12 == *(int *)(lVar21 + 0x4c)) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                               (0x404,pFVar22,(int *)(lVar21 + 0x4c));
          }
          *(int *)(lVar21 + 0x48) = iVar12 + 1;
          if (*(ForElementType<unsigned_int> **)(lVar21 + 0x40) !=
              (ForElementType<unsigned_int> *)0x0) {
            pFVar22 = *(ForElementType<unsigned_int> **)(lVar21 + 0x40);
          }
          auVar25 = (undefined1  [8])((longlong)auVar25 + 8);
          *(undefined4 *)(pFVar22->InlineData + (longlong)iVar12 * 4) = local_98._0_4_;
          uVar18 = (ulonglong)local_88 & 0xffffffff;
          lVar21 = local_58;
        }
        this_00 = local_70;
        lVar19 = local_78;
        if (local_90 != (undefined1  [8])0x0) {
          FMemory::Free((void *)local_90);
          this_00 = local_70;
          lVar19 = local_78;
        }
      }
      local_98._4_4_ = uVar24 + 1;
      local_68 = local_68 + 0x50;
      local_78 = lVar19 + 0x30;
    } while ((int)local_98._4_4_ < (this->MeshDatas).ArrayNum);
  }
  return;
}

// OnSystemComplete_GameThread @ 14da44d20

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
FNiagaraRendererNanite::OnSystemComplete_GameThread
          (FNiagaraRendererNanite *this,UNiagaraRendererProperties *param_1,
          FNiagaraEmitterInstance *param_2)

{
  ForElementType<FNiagaraRendererNanite::FMeshData> FVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_> FVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ForElementType<FNiagaraRendererNanite::FMeshData> FVar13;
  undefined1 auStackY_158 [32];
  FWeakObjectPtr FStack_108;
  FWeakObjectPtr FStack_100;
  FWeakObjectPtr FStack_f8;
  UObject *pUStack_f0;
  uchar auStack_e8 [8];
  uchar auStack_e0 [16];
  undefined8 uStack_d0;
  code *apcStack_c8 [5];
  undefined8 *puStack_a0;
  uchar auStack_98 [8];
  uchar auStack_90 [8];
  UObject *pUStack_88;
  uchar auStack_80 [24];
  undefined1 auStack_68 [24];
  uchar auStack_50 [8];
  ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_> FStack_48;
  int iStack_40;
  int iStack_3c;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  bVar5 = IsInGameThread();
  uVar6 = (this->MeshDatas).ArrayNum;
  uVar11 = 0;
  if (bVar5) {
    uVar12 = uVar11;
    if (0 < (int)uVar6) {
      do {
        uVar10 = (uint)uVar12;
        uVar6 = 0;
        if ((int)uVar10 < (this->MeshDatas).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar1 = (this->MeshDatas).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FNiagaraRendererNanite::FMeshData>)&this->MeshDatas;
        if (FVar1 != (ForElementType<FNiagaraRendererNanite::FMeshData>)0x0) {
          FVar13 = FVar1;
        }
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar13 + uVar11));
        if (pUVar7 != (UObject *)0x0) {
          (**(code **)(*(longlong *)pUVar7 + 0x4a0))(pUVar7,0);
          FStack_100.ObjectIndex = 0;
          FStack_100.ObjectSerialNumber = 0;
          uStack_d0 = 0;
          FWeakObjectPtr::operator=(&FStack_100,(FObjectPtr)&uStack_d0);
          *(FWeakObjectPtr *)((longlong)FVar13 + uVar11) = FStack_100;
        }
        uVar11 = uVar11 + 0x50;
        uVar12 = (ulonglong)(uVar10 + 1);
      } while ((int)(uVar10 + 1) < (this->MeshDatas).ArrayNum);
    }
  }
  else {
    FStack_48 = (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)0x0;
    iStack_40 = 0;
    iStack_3c = 4;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if (4 < (int)uVar6) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>_>
                (8,4,uVar6,
                 (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_> *)
                 auStack_68,0,&iStack_3c);
    }
    uVar12 = uVar11;
    if (0 < (this->MeshDatas).ArrayNum) {
      do {
        uVar10 = (uint)uVar11;
        uVar6 = 0;
        if ((int)uVar10 < (this->MeshDatas).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar1 = (this->MeshDatas).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FNiagaraRendererNanite::FMeshData>)&this->MeshDatas;
        if (FVar1 != (ForElementType<FNiagaraRendererNanite::FMeshData>)0x0) {
          FVar13 = FVar1;
        }
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar13 + uVar12));
        if (pUVar7 != (UObject *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          FStack_108.ObjectIndex = 0;
          FStack_108.ObjectSerialNumber = 0;
          pUStack_f0 = pUVar7;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          FWeakObjectPtr::operator=(&FStack_108,(FObjectPtr)&pUStack_f0);
          FVar8 = (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)
                  auStack_68;
          if (FStack_48 !=
              (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)0x0) {
            FVar8 = FStack_48;
          }
          if ((ulonglong)FVar8 <= &FStack_108) {
            FVar8 = (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)
                    auStack_68;
            if (FStack_48 !=
                (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)0x0) {
              FVar8 = FStack_48;
            }
            if ((&FStack_108 < (FWeakObjectPtr *)((longlong)FVar8 + (longlong)iStack_3c * 8)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if (iStack_40 == iStack_3c) {
            iStack_40 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>_>
                                  (0x408,(ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>
                                          *)auStack_68,&iStack_3c);
          }
          FStack_f8.ObjectIndex = 0;
          FStack_f8.ObjectSerialNumber = 0;
          lVar9 = (longlong)iStack_40;
          FVar8 = (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)
                  auStack_68;
          if (FStack_48 !=
              (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)0x0) {
            FVar8 = FStack_48;
          }
          auStack_e0[0] = '\0';
          auStack_e0[1] = '\0';
          auStack_e0[2] = '\0';
          auStack_e0[3] = '\0';
          auStack_e0[4] = '\0';
          auStack_e0[5] = '\0';
          auStack_e0[6] = '\0';
          auStack_e0[7] = '\0';
          iStack_40 = iStack_40 + 1;
          *(FWeakObjectPtr *)((longlong)FVar8 + lVar9 * 8) = FStack_108;
          FWeakObjectPtr::operator=(&FStack_f8,(FObjectPtr)auStack_e0);
          *(FWeakObjectPtr *)((longlong)FVar13 + uVar12) = FStack_f8;
        }
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar12 = uVar12 + 0x50;
      } while ((int)(uVar10 + 1) < (this->MeshDatas).ArrayNum);
    }
    iVar4 = iStack_3c;
    iVar3 = iStack_40;
    FVar8 = FStack_48;
    if (0 < iStack_40) {
      if (FStack_48 ==
          (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)0x0) {
        auStack_e0[0] = auStack_68[0];
        auStack_e0[1] = auStack_68[1];
        auStack_e0[2] = auStack_68[2];
        auStack_e0[3] = auStack_68[3];
        auStack_e0[4] = auStack_68[4];
        auStack_e0[5] = auStack_68[5];
        auStack_e0[6] = auStack_68[6];
        auStack_e0[7] = auStack_68[7];
        auStack_e0[8] = auStack_68[8];
        auStack_e0[9] = auStack_68[9];
        auStack_e0[10] = auStack_68[10];
        auStack_e0[0xb] = auStack_68[0xb];
        auStack_e0[0xc] = auStack_68[0xc];
        auStack_e0[0xd] = auStack_68[0xd];
        auStack_e0[0xe] = auStack_68[0xe];
        auStack_e0[0xf] = auStack_68[0xf];
        pUStack_f0 = (UObject *)auStack_68._16_8_;
        auStack_e8[0] = auStack_50[0];
        auStack_e8[1] = auStack_50[1];
        auStack_e8[2] = auStack_50[2];
        auStack_e8[3] = auStack_50[3];
        auStack_e8[4] = auStack_50[4];
        auStack_e8[5] = auStack_50[5];
        auStack_e8[6] = auStack_50[6];
        auStack_e8[7] = auStack_50[7];
      }
      else {
        pUStack_f0 = pUStack_88;
        auStack_e8[0] = auStack_80[0];
        auStack_e8[1] = auStack_80[1];
        auStack_e8[2] = auStack_80[2];
        auStack_e8[3] = auStack_80[3];
        auStack_e8[4] = auStack_80[4];
        auStack_e8[5] = auStack_80[5];
        auStack_e8[6] = auStack_80[6];
        auStack_e8[7] = auStack_80[7];
        auStack_e0[0] = auStack_98[0];
        auStack_e0[1] = auStack_98[1];
        auStack_e0[2] = auStack_98[2];
        auStack_e0[3] = auStack_98[3];
        auStack_e0[4] = auStack_98[4];
        auStack_e0[5] = auStack_98[5];
        auStack_e0[6] = auStack_98[6];
        auStack_e0[7] = auStack_98[7];
        auStack_e0[8] = auStack_90[0];
        auStack_e0[9] = auStack_90[1];
        auStack_e0[10] = auStack_90[2];
        auStack_e0[0xb] = auStack_90[3];
        auStack_e0[0xc] = auStack_90[4];
        auStack_e0[0xd] = auStack_90[5];
        auStack_e0[0xe] = auStack_90[6];
        auStack_e0[0xf] = auStack_90[7];
      }
      iStack_3c = 4;
      FStack_48 = (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)0x0;
      iStack_40 = 0;
      apcStack_c8[0] = (code *)0x0;
      puStack_a0 = FMemory::Malloc(0x38,8);
      puStack_a0[5] = 0;
      *puStack_a0 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FNiagaraRendererNanite::ReleaseComponents'::`20'::<lambda_1>,1,1>
                     ::_vftable_;
      if (FVar8 == (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)0x0)
      {
        puStack_a0[1] = auStack_e0._0_8_;
        puStack_a0[2] = auStack_e0._8_8_;
        puStack_a0[3] = pUStack_f0;
        puStack_a0[4] = auStack_e8;
      }
      *(ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_> *)
       (puStack_a0 + 5) = FVar8;
      *(int *)(puStack_a0 + 6) = iVar3;
      *(int *)((longlong)puStack_a0 + 0x34) = iVar4;
      if ((uchar *)(puStack_a0 + 1) != (uchar *)0x0) {
        apcStack_c8[0] =
             UE::Core::Private::Function::
             TFunctionRefCaller<`FNiagaraRendererNanite::ReleaseComponents'::__l20::<lambda_1>,void>
             ::Call;
      }
      AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)apcStack_c8);
    }
    if (FStack_48 !=
        (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)0x0) {
      FMemory::Free((void *)FStack_48);
    }
  }
  return;
}

// PostSystemTick_GameThread @ 14da45180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraRendererNanite::PostSystemTick_GameThread
          (FNiagaraRendererNanite *this,UNiagaraRendererProperties *param_1,
          FNiagaraEmitterInstance *param_2)

{
  FUpdateInstancesContext *pFVar1;
  byte bVar2;
  FNiagaraDataBuffer *pFVar3;
  ForElementType<FNiagaraRendererNanite::FMeshData> FVar4;
  UObject *pUVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  TQuat<float> TVar14;
  TQuat<float> TVar15;
  USceneComponent *this_00;
  bool bVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  UNiagaraNaniteRendererProperties *pUVar20;
  int *piVar21;
  FNiagaraPosition *pFVar22;
  TQuat<float> *pTVar23;
  TVector<float> *pTVar24;
  FNiagaraTypeDefinition *pFVar25;
  TTransform<double> *pTVar26;
  UNiagaraStaticMeshComponent *this_01;
  UStaticMesh *pUVar27;
  UClass *pUVar28;
  UWorld *pUVar29;
  FScriptContainerElement *pFVar30;
  FNiagaraParameterStore *pFVar31;
  TTransform<double> *this_02;
  FWeakObjectPtr FVar32;
  longlong *plVar33;
  uint uVar34;
  uint uVar35;
  FNiagaraEmitterInstance *pFVar36;
  UStaticMesh *pUVar37;
  TRefCountPtr<FNiagaraDataBuffer> TVar38;
  FScriptContainerElement *pFVar39;
  FNiagaraSystemInstance *pFVar40;
  FNiagaraParameterStore *this_03;
  undefined8 uVar41;
  byte bVar42;
  undefined4 *puVar43;
  FWeakObjectPtr *this_04;
  longlong lVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  float fVar63;
  undefined4 uVar64;
  float fVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar76 [16];
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  float fVar98;
  undefined4 uVar99;
  float fVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  undefined4 uVar103;
  float fVar104;
  undefined4 uVar105;
  float fVar106;
  undefined4 uVar107;
  float fVar108;
  undefined4 uVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined4 uVar119;
  undefined4 uVar120;
  undefined4 uVar121;
  undefined4 uVar122;
  undefined1 auStack_ac8 [32];
  longlong local_aa8;
  longlong local_aa0;
  byte local_a98;
  char local_a97;
  uint local_a94;
  FNiagaraSystemInstance *local_a90;
  FNiagaraEmitterInstance *local_a88;
  code *local_a80;
  longlong local_a78;
  float local_a70;
  float local_a6c;
  float local_a68;
  USceneComponent *local_a60;
  undefined8 local_a58;
  TVector<float>_u_0 local_a50 [2];
  code *local_a38;
  undefined8 uStack_a30;
  longlong local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  longlong *plStack_a10;
  UNiagaraNaniteRendererProperties *local_a08;
  UNiagaraStaticMeshComponent *local_a00;
  TQuat<float> local_9f8;
  undefined8 local_9e8;
  int iStack_9e0;
  undefined4 uStack_9dc;
  TTransform<double> local_9d8;
  TTransform<double> local_978;
  undefined4 local_918;
  undefined4 uStack_914;
  int iStack_910;
  undefined4 uStack_90c;
  code *local_908 [5];
  undefined8 *local_8e0;
  FNiagaraPosition local_8d8;
  TVector<float> local_8cc;
  FNiagaraPosition local_8c0;
  TVector<float> local_8b4;
  TQuat<float> local_8a8;
  TQuat<float> local_898;
  float local_888;
  float fStack_884;
  float fStack_880;
  float fStack_87c;
  float local_878;
  float fStack_874;
  float fStack_870;
  float fStack_86c;
  float local_868;
  float fStack_864;
  float fStack_860;
  float fStack_85c;
  float local_858;
  float fStack_854;
  float fStack_850;
  float fStack_84c;
  float local_848;
  float fStack_844;
  float fStack_840;
  float fStack_83c;
  float local_838;
  float fStack_834;
  float fStack_830;
  float fStack_82c;
  float local_828;
  float fStack_824;
  float fStack_820;
  float fStack_81c;
  float local_818;
  float fStack_814;
  float fStack_810;
  float fStack_80c;
  float local_808;
  float fStack_804;
  float fStack_800;
  float fStack_7fc;
  float local_7f8;
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7ec;
  float local_7e8;
  float fStack_7e4;
  float fStack_7e0;
  float fStack_7dc;
  float local_7d8;
  float fStack_7d4;
  float fStack_7d0;
  float fStack_7cc;
  undefined1 local_7c8 [432];
  undefined1 local_618 [8];
  float fStack_610;
  float fStack_60c;
  undefined1 local_608 [8];
  float fStack_600;
  float fStack_5fc;
  undefined1 local_5f8 [8];
  float fStack_5f0;
  float fStack_5ec;
  undefined1 local_5e8 [8];
  float fStack_5e0;
  float fStack_5dc;
  undefined1 local_5d8 [8];
  float fStack_5d0;
  float fStack_5cc;
  undefined1 local_5c8 [8];
  float fStack_5c0;
  float fStack_5bc;
  TVector<float>_u_0 local_5b8;
  undefined1 local_5a8 [128];
  FUpdateInstancesContext local_528;
  FUpdateInstancesContext local_308;
  ulonglong local_e8;
  ForElementType<FNiagaraRendererNanite::FMeshData> FVar44;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_ac8;
  local_a88 = param_2;
  if ((param_2->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParticleDataSet",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                          ,0x3a,L""), bVar16)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar40 = param_2->ParentSystemInstance;
  pFVar3 = param_2->ParticleDataSet->CurrentData;
  local_a90 = pFVar40;
  if (pFVar40 == (FNiagaraSystemInstance *)0x0) {
    local_a60 = (USceneComponent *)0x0;
  }
  else {
    local_a60 = (USceneComponent *)FWeakObjectPtr::Get(&(pFVar40->AttachComponent).WeakPtr);
  }
  if (((pFVar3 == (FNiagaraDataBuffer *)0x0) || (local_a60 == (USceneComponent *)0x0)) ||
     (bVar16 = FNiagaraRenderer::IsRendererEnabled((FNiagaraRenderer *)this,param_1,param_2),
     !bVar16)) {
LAB_14da4525a:
    ReleaseComponents(this);
  }
  else {
    pUVar20 = CastChecked<UNiagaraNaniteRendererProperties_const_,UNiagaraRendererProperties_const_>
                        (param_1);
    local_a08 = pUVar20;
    if (pUVar20->SourceMode == Particles) {
      iVar17 = (**(code **)(param_2->_padding_ + 0x58))(param_2);
      if (iVar17 == 0) goto LAB_14da4525a;
    }
    else {
      iVar17 = 1;
    }
    if (((0 < (pUVar20->MaterialParameters).AttributeBindings.ArrayNum) ||
        (0 < (pUVar20->MaterialParameters).ScalarParameters.ArrayNum)) ||
       ((0 < (pUVar20->MaterialParameters).VectorParameters.ArrayNum ||
        (0 < (pUVar20->MaterialParameters).TextureParameters.ArrayNum)))) {
      local_a78 = this->_padding_;
      iVar18 = (int)this->_padding_;
      local_a80 = *(code **)(this->_padding_ + 0x78);
      if ((iVar18 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_9e8 = local_a78;
      lVar45 = local_9e8;
      local_9e8._0_4_ = (undefined4)local_a78;
      local_9e8._4_4_ = (undefined4)((ulonglong)local_a78 >> 0x20);
      local_918 = (undefined4)local_9e8;
      uStack_914 = local_9e8._4_4_;
      uStack_90c = uStack_9dc;
      local_9e8 = lVar45;
      iStack_9e0 = iVar18;
      iStack_910 = iVar18;
      (*local_a80)(this,&pUVar20->MaterialParameters,param_2,&local_918);
    }
    TVar14 = UE::Math::TQuat<float>::Identity;
    bVar42 = param_2->bLocalSpace;
    if ((*(char *)((longlong)&this->_padding_ + 4) == '\0') ||
       (local_a97 = '\0', pUVar20->SourceMode != Particles)) {
      local_a97 = '\x01';
    }
    this_03 = &param_2->RendererBindings;
    local_a70 = (float)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_a50[0]._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    local_7c8._8_8_ = (FNiagaraGpuComputeDispatchInterface *)0x0;
    local_7c8._24_8_ = (FNiagaraDataBuffer *)0x0;
    local_a6c = (float)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_a68 = (float)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_a50[0]._0_8_ = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
    local_9f8 = UE::Math::TQuat<float>::Identity;
    local_a98 = bVar42;
    memset(local_7c8 + 0x20,0,0x100);
    TVar15 = UE::Math::TQuat<float>::Identity;
    local_7c8._412_4_ = 0;
    local_7c8._416_4_ = 0;
    local_7c8._288_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_7c8._296_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    UE::Math::TQuat<float>::Identity.X = TVar14.X;
    UE::Math::TQuat<float>::Identity.Y = TVar14.Y;
    UE::Math::TQuat<float>::Identity.Z = TVar14.Z;
    UE::Math::TQuat<float>::Identity.W = TVar14.W;
    local_7c8._304_4_ = UE::Math::TQuat<float>::Identity.X;
    local_7c8._308_4_ = UE::Math::TQuat<float>::Identity.Y;
    local_7c8._312_4_ = UE::Math::TQuat<float>::Identity.Z;
    local_7c8._316_4_ = UE::Math::TQuat<float>::Identity.W;
    local_7c8._320_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_7c8._328_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    UE::Math::TQuat<float>::Identity.X = TVar14.X;
    UE::Math::TQuat<float>::Identity.Y = TVar14.Y;
    UE::Math::TQuat<float>::Identity.Z = TVar14.Z;
    UE::Math::TQuat<float>::Identity.W = TVar14.W;
    local_7c8._336_4_ = UE::Math::TQuat<float>::Identity.X;
    local_7c8._340_4_ = UE::Math::TQuat<float>::Identity.Y;
    local_7c8._344_4_ = UE::Math::TQuat<float>::Identity.Z;
    local_7c8._348_4_ = UE::Math::TQuat<float>::Identity.W;
    local_7c8._352_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_7c8._360_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_7c8._364_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_7c8._372_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    UE::Math::TQuat<float>::Identity.X = TVar14.X;
    UE::Math::TQuat<float>::Identity.Y = TVar14.Y;
    UE::Math::TQuat<float>::Identity.Z = TVar14.Z;
    UE::Math::TQuat<float>::Identity.W = TVar14.W;
    local_7c8._384_4_ = UE::Math::TQuat<float>::Identity.X;
    local_7c8._388_4_ = UE::Math::TQuat<float>::Identity.Y;
    local_7c8._392_4_ = UE::Math::TQuat<float>::Identity.Z;
    local_7c8._396_4_ = UE::Math::TQuat<float>::Identity.W;
    local_7c8._400_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_7c8._408_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_7c8._420_4_ = -1;
    local_7c8._424_4_ = -1;
    _local_618 = UE::Math::TTransform<float>::Identity.Rotation;
    _local_608 = UE::Math::TTransform<float>::Identity.Translation;
    _local_5f8 = UE::Math::TTransform<float>::Identity.Scale3D;
    _local_5e8 = UE::Math::TTransform<float>::Identity.Rotation;
    _local_5d8 = UE::Math::TTransform<float>::Identity.Translation;
    _local_5c8 = UE::Math::TTransform<float>::Identity.Scale3D;
    local_5b8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_5b8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    UE::Math::TQuat<float>::Identity = TVar15;
    local_7c8._0_8_ = pUVar20;
    local_7c8._16_4_ = iVar17;
    TRefCountPtr<FNiagaraDataBuffer>::operator=
              ((TRefCountPtr<FNiagaraDataBuffer> *)(local_7c8 + 0x18),pFVar3);
    if (*(char *)((longlong)&this->_padding_ + 4) == '\x01') {
      local_7c8._8_8_ = FNiagaraGpuComputeDispatchInterface::Get(pFVar40->World);
    }
    else {
      local_7c8._8_8_ = (FNiagaraGpuComputeDispatchInterface *)0x0;
    }
    uVar34 = 0;
    if (0 < (pUVar20->PerInstanceDataBindings).ArrayNum) {
      lVar45 = 0;
      puVar43 = (undefined4 *)(local_7c8 + 0x20);
      do {
        iVar17 = (pUVar20->PerInstanceDataBindings).ArrayNum;
        uVar35 = 0;
        if ((int)uVar34 < iVar17) {
          uVar35 = ~uVar34 >> 0x1f;
        }
        if (uVar35 == 0) {
          local_aa8 = (longlong)(int)uVar34;
          local_aa0 = (longlong)iVar17;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar39 = (pUVar20->PerInstanceDataBindings).AllocatorInstance.Data + lVar45;
        piVar21 = (int *)(**(code **)(this_03->_padding_ + 0x58))(this_03,pFVar39,0);
        if (((piVar21 == (int *)0x0) || (*piVar21 == -1)) ||
           (pFVar30 = (param_2->RendererBindings).ParameterData.AllocatorInstance.Data + *piVar21,
           pFVar30 == (FScriptContainerElement *)0x0)) {
          uVar46 = *(undefined4 *)(pFVar39 + 0x10);
        }
        else {
          uVar46 = *(undefined4 *)(pFVar30 + (longlong)*(int *)(pFVar39 + 0xc) * 4);
        }
        *puVar43 = uVar46;
        uVar34 = uVar34 + 1;
        puVar43 = puVar43 + 1;
        lVar45 = lVar45 + 0x14;
        pFVar40 = local_a90;
        bVar42 = local_a98;
      } while ((int)uVar34 < (pUVar20->PerInstanceDataBindings).ArrayNum);
    }
    pFVar22 = FNiagaraParameterStore::GetParameterValueOrDefault<FNiagaraPosition>
                        (this_03,&local_8d8,&(pUVar20->PositionBinding).ParamMapVariable,
                         (FNiagaraPosition *)&local_a70);
    local_7c8._320_8_ = *(undefined8 *)pFVar22;
    local_7c8._328_4_ = *(undefined4 *)&pFVar22->field_0x8;
    pTVar23 = FNiagaraParameterStore::GetParameterValueOrDefault<UE::Math::TQuat<float>_>
                        (this_03,&local_8a8,&(pUVar20->RotationBinding).ParamMapVariable,&local_9f8)
    ;
    local_7c8._336_16_ = *(undefined1 (*) [16])pTVar23;
    pTVar24 = FNiagaraParameterStore::GetParameterValueOrDefault<UE::Math::TVector<float>_>
                        (this_03,&local_8cc,&(pUVar20->ScaleBinding).ParamMapVariable,
                         (TVector<float> *)&local_a50[0]._s_0);
    local_7c8._352_8_ = *(undefined8 *)&pTVar24->field0_0x0;
    local_7c8._360_4_ = (pTVar24->field0_0x0)._s_0.Z;
    pFVar22 = FNiagaraParameterStore::GetParameterValueOrDefault<FNiagaraPosition>
                        (this_03,&local_8c0,&(pUVar20->PreviousPositionBinding).ParamMapVariable,
                         (FNiagaraPosition *)&local_a70);
    local_7c8._364_8_ = *(undefined8 *)pFVar22;
    local_7c8._372_4_ = *(undefined4 *)&pFVar22->field_0x8;
    pTVar23 = FNiagaraParameterStore::GetParameterValueOrDefault<UE::Math::TQuat<float>_>
                        (this_03,&local_898,&(pUVar20->PreviousRotationBinding).ParamMapVariable,
                         &local_9f8);
    local_7c8._384_16_ = *(undefined1 (*) [16])pTVar23;
    pTVar24 = FNiagaraParameterStore::GetParameterValueOrDefault<UE::Math::TVector<float>_>
                        (this_03,&local_8b4,&(pUVar20->PreviousScaleBinding).ParamMapVariable,
                         (TVector<float> *)&local_a50[0]._s_0);
    local_7c8._400_8_ = *(undefined8 *)&pTVar24->field0_0x0;
    local_7c8._408_4_ = (pTVar24->field0_0x0)._s_0.Z;
    pFVar25 = FNiagaraTypeDefinitionHandle::Resolve
                        (&(pUVar20->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle);
    iVar17 = FNiagaraTypeDefinition::GetSize(pFVar25);
    if ((iVar17 != 4) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parameter.GetSizeInBytes() == sizeof(T)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                            ,0x1ae,L""), bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar31 = this_03;
    piVar21 = (int *)(**(code **)(this_03->_padding_ + 0x58))
                               (this_03,&(pUVar20->RendererVisibilityTagBinding).ParamMapVariable,0)
    ;
    iVar17 = (int)pFVar31;
    if ((piVar21 == (int *)0x0) || (*piVar21 == -1)) {
      iVar18 = pUVar20->RendererVisibility;
    }
    else {
      pFVar31 = this_03;
      iVar18 = FNiagaraParameterStore::GetParameterValueFromOffset<int>(this_03,*piVar21);
      iVar17 = (int)pFVar31;
    }
    local_5b8._0_8_ = *(undefined8 *)&(pFVar40->LWCTile).field0_0x0;
    local_7c8._416_4_ = iVar18;
    local_7c8._420_4_ = this->MeshIndexComponentOffset;
    local_7c8._424_4_ = this->RendererVisComponentOffset;
    fVar19 = (pFVar40->LWCTile).field0_0x0._s_0.Z;
    fVar57 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[0];
    fVar59 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[1];
    fVar49 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[2];
    fVar53 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[3];
    fVar63 = UE::Math::TTransform<float>::Identity.Translation.m128_i32[0];
    fVar65 = UE::Math::TTransform<float>::Identity.Translation.m128_i32[1];
    fVar48 = UE::Math::TTransform<float>::Identity.Translation.m128_i32[2];
    fVar52 = UE::Math::TTransform<float>::Identity.Translation.m128_i32[3];
    fVar98 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[0];
    fVar100 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[1];
    fVar47 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[2];
    fVar51 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[3];
    local_5b8._s_0.Z = fVar19;
    if (local_a97 == '\0') {
      if (bVar42 == 0) {
        _local_618 = UE::Math::TTransform<float>::Identity.Rotation;
        _local_608 = UE::Math::TTransform<float>::Identity.Translation;
        _local_5f8 = UE::Math::TTransform<float>::Identity.Scale3D;
      }
      else {
        local_808 = (float)(pFVar40->WorldTransform).Scale3D.XY.m128d_f64[0];
        fStack_804 = (float)(pFVar40->WorldTransform).Scale3D.XY.m128d_f64[1];
        local_818 = (float)(pFVar40->WorldTransform).Translation.XY.m128d_f64[0];
        fStack_814 = (float)(pFVar40->WorldTransform).Translation.XY.m128d_f64[1];
        local_828 = (float)(pFVar40->WorldTransform).Rotation.XY.m128d_f64[0];
        fStack_824 = (float)(pFVar40->WorldTransform).Rotation.XY.m128d_f64[1];
        fStack_800 = (float)(pFVar40->WorldTransform).Scale3D.ZW.m128d_f64[0];
        fStack_7fc = (float)(pFVar40->WorldTransform).Scale3D.ZW.m128d_f64[1];
        fStack_810 = (float)(pFVar40->WorldTransform).Translation.ZW.m128d_f64[0];
        fStack_80c = (float)(pFVar40->WorldTransform).Translation.ZW.m128d_f64[1];
        fStack_820 = (float)(pFVar40->WorldTransform).Rotation.ZW.m128d_f64[0];
        fStack_81c = (float)(pFVar40->WorldTransform).Rotation.ZW.m128d_f64[1];
        local_5f8._4_4_ = fStack_804;
        local_5f8._0_4_ = local_808;
        fStack_5f0 = fStack_800;
        fStack_5ec = fStack_7fc;
        fVar98 = (float)(pFVar40->WorldTransform).Scale3D.XY.m128d_f64[0];
        fVar100 = (float)(pFVar40->WorldTransform).Scale3D.XY.m128d_f64[1];
        fVar47 = (float)(pFVar40->WorldTransform).Scale3D.ZW.m128d_f64[0];
        fVar51 = (float)(pFVar40->WorldTransform).Scale3D.ZW.m128d_f64[1];
        fVar48 = (float)(pFVar40->WorldTransform).Translation.ZW.m128d_f64[0];
        fVar52 = (float)(pFVar40->WorldTransform).Translation.ZW.m128d_f64[1];
        local_608._4_4_ = fStack_814;
        local_608._0_4_ = local_818;
        fStack_600 = fStack_810;
        fStack_5fc = fStack_80c;
        fVar63 = (float)(pFVar40->WorldTransform).Translation.XY.m128d_f64[0];
        fVar65 = (float)(pFVar40->WorldTransform).Translation.XY.m128d_f64[1];
        fVar49 = (float)(pFVar40->WorldTransform).Rotation.ZW.m128d_f64[0];
        fVar53 = (float)(pFVar40->WorldTransform).Rotation.ZW.m128d_f64[1];
        local_618._4_4_ = fStack_824;
        local_618._0_4_ = local_828;
        fStack_610 = fStack_820;
        fStack_60c = fStack_81c;
        fVar57 = (float)(pFVar40->WorldTransform).Rotation.XY.m128d_f64[0];
        fVar59 = (float)(pFVar40->WorldTransform).Rotation.XY.m128d_f64[1];
        local_7f8 = fVar57;
        fStack_7f4 = fVar59;
        fStack_7f0 = fVar49;
        fStack_7ec = fVar53;
        local_7e8 = fVar63;
        fStack_7e4 = fVar65;
        fStack_7e0 = fVar48;
        fStack_7dc = fVar52;
        local_7d8 = fVar98;
        fStack_7d4 = fVar100;
        fStack_7d0 = fVar47;
        fStack_7cc = fVar51;
      }
      local_5c8._4_4_ = fVar100;
      local_5c8._0_4_ = fVar98;
      fStack_5c0 = fVar47;
      fStack_5bc = fVar51;
    }
    else {
      fVar72 = GlobalVectorConstants::SmallNumber.m128_f32[0];
      fVar73 = GlobalVectorConstants::SmallNumber.m128_f32[1];
      fVar74 = GlobalVectorConstants::SmallNumber.m128_f32[2];
      fVar75 = GlobalVectorConstants::SmallNumber.m128_f32[3];
      uVar46 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar50 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar54 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar55 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      uVar56 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar58 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar60 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar61 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar62 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      uVar64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      uVar66 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      uVar67 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      uVar85 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      uVar86 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      uVar87 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      uVar88 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      uVar89 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar90 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar91 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar92 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar93 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      uVar94 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      uVar95 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      uVar96 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      fVar104 = fVar57;
      fVar106 = fVar59;
      fVar108 = fVar49;
      fVar110 = fVar53;
      fVar111 = fVar63;
      fVar112 = fVar65;
      fVar113 = fVar48;
      fVar114 = fVar52;
      fVar115 = fVar98;
      fVar116 = fVar100;
      fVar117 = fVar47;
      fVar118 = fVar51;
      if (bVar42 == 0) {
        lVar45 = -(ulonglong)
                  ((double)fVar75 <
                  (double)CONCAT44(_UNK_15061cc8c &
                                   *(uint *)((longlong)
                                             (pFVar40->WorldTransform).Scale3D.ZW.m128d_f64 + 0xc),
                                   _UNK_15061cc88 &
                                   *(uint *)((pFVar40->WorldTransform).Scale3D.ZW.m128d_f64 + 1)));
        auVar10._8_4_ = (int)lVar45;
        auVar10._0_8_ =
             -(ulonglong)
              ((double)fVar74 <
              (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                               *(uint *)((longlong)(pFVar40->WorldTransform).Scale3D.ZW.m128d_f64 +
                                        4),
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                               *(uint *)(pFVar40->WorldTransform).Scale3D.ZW.m128d_f64));
        auVar10._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
        uVar34 = movmskpd(fVar19,auVar10);
        lVar45 = -(ulonglong)
                  ((double)fVar73 <
                  (double)CONCAT44(_UNK_15061cc8c &
                                   *(uint *)((longlong)
                                             (pFVar40->WorldTransform).Scale3D.XY.m128d_f64 + 0xc),
                                   _UNK_15061cc88 &
                                   *(uint *)((pFVar40->WorldTransform).Scale3D.XY.m128d_f64 + 1)));
        auVar8._8_4_ = (int)lVar45;
        auVar8._0_8_ = -(ulonglong)
                        ((double)fVar72 <
                        (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                         *(uint *)((longlong)
                                                   (pFVar40->WorldTransform).Scale3D.XY.m128d_f64 +
                                                  4),
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                         *(uint *)(pFVar40->WorldTransform).Scale3D.XY.m128d_f64));
        auVar8._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
        iVar17 = movmskpd(iVar17,auVar8);
        if ((uVar34 & 0x3fffffff) == 0 && iVar17 == 0) {
          local_9d8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_9d8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_9d8.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_9d8.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_9d8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_9d8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          uVar68 = uVar46;
          uVar69 = uVar50;
          uVar70 = uVar54;
          uVar71 = uVar55;
          uVar77 = uVar56;
          uVar78 = uVar58;
          uVar79 = uVar60;
          uVar80 = uVar61;
          uVar81 = uVar62;
          uVar82 = uVar64;
          uVar83 = uVar66;
          uVar84 = uVar67;
          uVar97 = uVar85;
          uVar99 = uVar86;
          uVar101 = uVar87;
          uVar102 = uVar88;
          uVar103 = uVar93;
          uVar105 = uVar94;
          uVar107 = uVar95;
          uVar109 = uVar96;
          uVar119 = uVar89;
          uVar120 = uVar90;
          uVar121 = uVar91;
          uVar122 = uVar92;
          fVar19 = 0.0;
        }
        else {
          this_02 = &pFVar40->WorldTransform;
          pTVar26 = UE::Math::TTransform<double>::InverseFast(this_02,&local_9d8);
          iVar17 = (int)this_02;
          fVar72 = GlobalVectorConstants::SmallNumber.m128_f32[0];
          fVar73 = GlobalVectorConstants::SmallNumber.m128_f32[1];
          fVar74 = GlobalVectorConstants::SmallNumber.m128_f32[2];
          fVar75 = GlobalVectorConstants::SmallNumber.m128_f32[3];
          uVar85 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar86 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar87 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar88 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar89 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar90 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar91 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar92 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar93 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar94 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar95 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar96 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          uVar46 = local_9d8.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar50 = local_9d8.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar54 = local_9d8.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar55 = local_9d8.Scale3D.ZW.m128d_f64[1]._4_4_;
          uVar56 = local_9d8.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar58 = local_9d8.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar60 = local_9d8.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar61 = local_9d8.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar62 = local_9d8.Translation.ZW.m128d_f64[0]._0_4_;
          uVar64 = local_9d8.Translation.ZW.m128d_f64[0]._4_4_;
          uVar66 = local_9d8.Translation.ZW.m128d_f64[1]._0_4_;
          uVar67 = local_9d8.Translation.ZW.m128d_f64[1]._4_4_;
          uVar68 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar69 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar70 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar71 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
          uVar77 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar78 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar79 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar80 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar81 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          uVar82 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          uVar83 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
          uVar84 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
          uVar97 = local_9d8.Translation.XY.m128d_f64[0]._0_4_;
          uVar99 = local_9d8.Translation.XY.m128d_f64[0]._4_4_;
          uVar101 = local_9d8.Translation.XY.m128d_f64[1]._0_4_;
          uVar102 = local_9d8.Translation.XY.m128d_f64[1]._4_4_;
          uVar103 = local_9d8.Rotation.XY.m128d_f64[0]._0_4_;
          uVar105 = local_9d8.Rotation.XY.m128d_f64[0]._4_4_;
          uVar107 = local_9d8.Rotation.XY.m128d_f64[1]._0_4_;
          uVar109 = local_9d8.Rotation.XY.m128d_f64[1]._4_4_;
          uVar119 = local_9d8.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar120 = local_9d8.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar121 = local_9d8.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar122 = local_9d8.Rotation.ZW.m128d_f64[1]._4_4_;
          fVar19 = SUB84(pTVar26,0);
        }
        fStack_860 = (float)(double)CONCAT44(uVar50,uVar46);
        fStack_85c = (float)(double)CONCAT44(uVar55,uVar54);
        local_868 = (float)(double)CONCAT44(uVar58,uVar56);
        fStack_864 = (float)(double)CONCAT44(uVar61,uVar60);
        fVar57 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[0];
        fVar59 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[1];
        fVar49 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[2];
        fVar53 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[3];
        fStack_870 = (float)(double)CONCAT44(uVar64,uVar62);
        fStack_86c = (float)(double)CONCAT44(uVar67,uVar66);
        fVar63 = UE::Math::TTransform<float>::Identity.Translation.m128_i32[0];
        fVar65 = UE::Math::TTransform<float>::Identity.Translation.m128_i32[1];
        fVar48 = UE::Math::TTransform<float>::Identity.Translation.m128_i32[2];
        fVar52 = UE::Math::TTransform<float>::Identity.Translation.m128_i32[3];
        local_878 = (float)(double)CONCAT44(uVar99,uVar97);
        fStack_874 = (float)(double)CONCAT44(uVar102,uVar101);
        fVar98 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[0];
        fVar100 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[1];
        fVar47 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[2];
        fVar51 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[3];
        fStack_880 = (float)(double)CONCAT44(uVar120,uVar119);
        fStack_87c = (float)(double)CONCAT44(uVar122,uVar121);
        local_888 = (float)(double)CONCAT44(uVar105,uVar103);
        fStack_884 = (float)(double)CONCAT44(uVar109,uVar107);
        uVar46 = uVar68;
        uVar50 = uVar69;
        uVar54 = uVar70;
        uVar55 = uVar71;
        uVar56 = uVar77;
        uVar58 = uVar78;
        uVar60 = uVar79;
        uVar61 = uVar80;
        uVar62 = uVar81;
        uVar64 = uVar82;
        uVar66 = uVar83;
        uVar67 = uVar84;
        fVar104 = local_888;
        fVar106 = fStack_884;
        fVar108 = fStack_880;
        fVar110 = fStack_87c;
        fVar111 = local_878;
        fVar112 = fStack_874;
        fVar113 = fStack_870;
        fVar114 = fStack_86c;
        fVar115 = local_868;
        fVar116 = fStack_864;
        fVar117 = fStack_860;
        fVar118 = fStack_85c;
      }
      local_618._4_4_ = fVar106;
      local_618._0_4_ = fVar104;
      fStack_610 = fVar108;
      fStack_60c = fVar110;
      local_608._4_4_ = fVar112;
      local_608._0_4_ = fVar111;
      fStack_600 = fVar113;
      fStack_5fc = fVar114;
      local_5f8._4_4_ = fVar116;
      local_5f8._0_4_ = fVar115;
      fStack_5f0 = fVar117;
      fStack_5ec = fVar118;
      if (bVar42 == 0) {
        auVar76._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              *(uint *)((longlong)(pFVar40->WorldTransform).Scale3D.ZW.m128d_f64 + 4
                                       ),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              *(uint *)(pFVar40->WorldTransform).Scale3D.ZW.m128d_f64);
        auVar76._8_4_ =
             _UNK_15061cc88 & *(uint *)((pFVar40->WorldTransform).Scale3D.ZW.m128d_f64 + 1);
        auVar76._12_4_ =
             _UNK_15061cc8c &
             *(uint *)((longlong)(pFVar40->WorldTransform).Scale3D.ZW.m128d_f64 + 0xc);
        lVar45 = -(ulonglong)((double)fVar75 < auVar76._8_8_);
        auVar9._8_4_ = (int)lVar45;
        auVar9._0_8_ = -(ulonglong)((double)fVar74 < auVar76._0_8_);
        auVar9._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
        uVar34 = movmskpd(fVar19,auVar9);
        lVar45 = -(ulonglong)
                  ((double)fVar73 <
                  (double)CONCAT44(_UNK_15061cc8c &
                                   *(uint *)((longlong)
                                             (pFVar40->WorldTransform).Scale3D.XY.m128d_f64 + 0xc),
                                   _UNK_15061cc88 &
                                   *(uint *)((pFVar40->WorldTransform).Scale3D.XY.m128d_f64 + 1)));
        auVar7._8_4_ = (int)lVar45;
        auVar7._0_8_ = -(ulonglong)
                        ((double)fVar72 <
                        (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                         *(uint *)((longlong)
                                                   (pFVar40->WorldTransform).Scale3D.XY.m128d_f64 +
                                                  4),
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                         *(uint *)(pFVar40->WorldTransform).Scale3D.XY.m128d_f64));
        auVar7._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
        iVar17 = movmskpd(iVar17,auVar7);
        if ((uVar34 & 0x3fffffff) != 0 || iVar17 != 0) {
          UE::Math::TTransform<double>::InverseFast(&pFVar40->WorldTransform,&local_978);
          uVar93 = local_978.Rotation.XY.m128d_f64[0]._0_4_;
          uVar94 = local_978.Rotation.XY.m128d_f64[0]._4_4_;
          uVar95 = local_978.Rotation.XY.m128d_f64[1]._0_4_;
          uVar96 = local_978.Rotation.XY.m128d_f64[1]._4_4_;
          uVar89 = local_978.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar90 = local_978.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar91 = local_978.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar92 = local_978.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar85 = local_978.Translation.XY.m128d_f64[0]._0_4_;
          uVar86 = local_978.Translation.XY.m128d_f64[0]._4_4_;
          uVar87 = local_978.Translation.XY.m128d_f64[1]._0_4_;
          uVar88 = local_978.Translation.XY.m128d_f64[1]._4_4_;
          uVar62 = local_978.Translation.ZW.m128d_f64[0]._0_4_;
          uVar64 = local_978.Translation.ZW.m128d_f64[0]._4_4_;
          uVar66 = local_978.Translation.ZW.m128d_f64[1]._0_4_;
          uVar67 = local_978.Translation.ZW.m128d_f64[1]._4_4_;
          uVar56 = local_978.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar58 = local_978.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar60 = local_978.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar61 = local_978.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar46 = local_978.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar50 = local_978.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar54 = local_978.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar55 = local_978.Scale3D.ZW.m128d_f64[1]._4_4_;
        }
        local_978.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar55;
        local_978.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar54;
        local_978.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar50;
        local_978.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar46;
        local_978.Scale3D.XY.m128d_f64[1]._4_4_ = uVar61;
        local_978.Scale3D.XY.m128d_f64[1]._0_4_ = uVar60;
        local_978.Scale3D.XY.m128d_f64[0]._4_4_ = uVar58;
        local_978.Scale3D.XY.m128d_f64[0]._0_4_ = uVar56;
        local_978.Translation.ZW.m128d_f64[1]._4_4_ = uVar67;
        local_978.Translation.ZW.m128d_f64[1]._0_4_ = uVar66;
        local_978.Translation.ZW.m128d_f64[0]._4_4_ = uVar64;
        local_978.Translation.ZW.m128d_f64[0]._0_4_ = uVar62;
        local_978.Translation.XY.m128d_f64[1]._4_4_ = uVar88;
        local_978.Translation.XY.m128d_f64[1]._0_4_ = uVar87;
        local_978.Translation.XY.m128d_f64[0]._4_4_ = uVar86;
        local_978.Translation.XY.m128d_f64[0]._0_4_ = uVar85;
        local_978.Rotation.ZW.m128d_f64[1]._4_4_ = uVar92;
        local_978.Rotation.ZW.m128d_f64[1]._0_4_ = uVar91;
        local_978.Rotation.ZW.m128d_f64[0]._4_4_ = uVar90;
        local_978.Rotation.ZW.m128d_f64[0]._0_4_ = uVar89;
        local_978.Rotation.XY.m128d_f64[1]._4_4_ = uVar96;
        local_978.Rotation.XY.m128d_f64[1]._0_4_ = uVar95;
        local_978.Rotation.XY.m128d_f64[0]._4_4_ = uVar94;
        local_978.Rotation.XY.m128d_f64[0]._0_4_ = uVar93;
        fVar47 = (float)(double)CONCAT44(local_978.Scale3D.ZW.m128d_f64[0]._4_4_,
                                         local_978.Scale3D.ZW.m128d_f64[0]._0_4_);
        fVar51 = (float)(double)CONCAT44(local_978.Scale3D.ZW.m128d_f64[1]._4_4_,
                                         local_978.Scale3D.ZW.m128d_f64[1]._0_4_);
        fVar98 = (float)(double)CONCAT44(local_978.Scale3D.XY.m128d_f64[0]._4_4_,
                                         local_978.Scale3D.XY.m128d_f64[0]._0_4_);
        fVar100 = (float)(double)CONCAT44(local_978.Scale3D.XY.m128d_f64[1]._4_4_,
                                          local_978.Scale3D.XY.m128d_f64[1]._0_4_);
        fVar48 = (float)(double)CONCAT44(local_978.Translation.ZW.m128d_f64[0]._4_4_,
                                         local_978.Translation.ZW.m128d_f64[0]._0_4_);
        fVar52 = (float)(double)CONCAT44(local_978.Translation.ZW.m128d_f64[1]._4_4_,
                                         local_978.Translation.ZW.m128d_f64[1]._0_4_);
        fVar63 = (float)(double)CONCAT44(local_978.Translation.XY.m128d_f64[0]._4_4_,
                                         local_978.Translation.XY.m128d_f64[0]._0_4_);
        fVar65 = (float)(double)CONCAT44(local_978.Translation.XY.m128d_f64[1]._4_4_,
                                         local_978.Translation.XY.m128d_f64[1]._0_4_);
        fVar57 = (float)(double)CONCAT44(local_978.Rotation.XY.m128d_f64[0]._4_4_,
                                         local_978.Rotation.XY.m128d_f64[0]._0_4_);
        fVar59 = (float)(double)CONCAT44(local_978.Rotation.XY.m128d_f64[1]._4_4_,
                                         local_978.Rotation.XY.m128d_f64[1]._0_4_);
        fVar49 = (float)(double)CONCAT44(local_978.Rotation.ZW.m128d_f64[0]._4_4_,
                                         local_978.Rotation.ZW.m128d_f64[0]._0_4_);
        fVar53 = (float)(double)CONCAT44(local_978.Rotation.ZW.m128d_f64[1]._4_4_,
                                         local_978.Rotation.ZW.m128d_f64[1]._0_4_);
        local_858 = fVar57;
        fStack_854 = fVar59;
        fStack_850 = fVar49;
        fStack_84c = fVar53;
        local_848 = fVar63;
        fStack_844 = fVar65;
        fStack_840 = fVar48;
        fStack_83c = fVar52;
        local_838 = fVar98;
        fStack_834 = fVar100;
        fStack_830 = fVar47;
        fStack_82c = fVar51;
      }
      local_5c8._4_4_ = fVar100;
      local_5c8._0_4_ = fVar98;
      fStack_5c0 = fVar47;
      fStack_5bc = fVar51;
    }
    local_5d8._4_4_ = fVar65;
    local_5d8._0_4_ = fVar63;
    fStack_5d0 = fVar48;
    fStack_5cc = fVar52;
    local_5e8._4_4_ = fVar59;
    local_5e8._0_4_ = fVar57;
    fStack_5e0 = fVar49;
    fStack_5dc = fVar53;
    pFVar25 = FNiagaraTypeDefinitionHandle::Resolve
                        (&(pUVar20->MeshIndexBinding).ParamMapVariable.TypeDefHandle);
    iVar17 = FNiagaraTypeDefinition::GetSize(pFVar25);
    if ((iVar17 != 4) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parameter.GetSizeInBytes() == sizeof(T)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                            ,0x1a1,L""), bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_a98 = '\0';
    piVar21 = (int *)(**(code **)(this_03->_padding_ + 0x58))
                               (this_03,&(pUVar20->MeshIndexBinding).ParamMapVariable,0);
    if ((piVar21 == (int *)0x0) || (*piVar21 == -1)) {
      local_a94 = (uint)local_a90;
    }
    else {
      local_a94 = FNiagaraParameterStore::GetParameterValueFromOffset<int>(this_03,*piVar21);
      local_a98 = '\x01';
    }
    pFVar36 = local_a88;
    if (pUVar20->SourceMode == Particles) {
      (**(code **)(local_a88->_padding_ + 0x58))(local_a88);
    }
    uVar34 = 0;
    local_a90 = (FNiagaraSystemInstance *)((ulonglong)local_a90 & 0xffffffff00000000);
    if (0 < (this->MeshDatas).ArrayNum) {
      local_a78 = 0;
      do {
        lVar45 = local_a78;
        iVar17 = (this->MeshDatas).ArrayNum;
        uVar35 = 0;
        if ((int)uVar34 < iVar17) {
          uVar35 = ~uVar34 >> 0x1f;
        }
        if (uVar35 == 0) {
          local_aa8 = (longlong)(int)uVar34;
          local_aa0 = (longlong)iVar17;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        FVar4 = (this->MeshDatas).AllocatorInstance.SecondaryData;
        FVar44 = (ForElementType<FNiagaraRendererNanite::FMeshData>)&this->MeshDatas;
        if (FVar4 != (ForElementType<FNiagaraRendererNanite::FMeshData>)0x0) {
          FVar44 = FVar4;
        }
        this_04 = (FWeakObjectPtr *)((longlong)FVar44 + lVar45);
        this_01 = (UNiagaraStaticMeshComponent *)FWeakObjectPtr::Get(this_04);
        if ((local_7c8._416_4_ == pUVar20->RendererVisibility) &&
           ((local_a98 == '\0' || (local_a94 == uVar34)))) {
          local_7c8._296_4_ = this_04[2].ObjectIndex;
          local_7c8._288_8_ = this_04[1];
          iVar17 = (pUVar20->Meshes).ArrayNum;
          local_7c8._304_16_ = *(undefined1 (*) [16])(this_04 + 4);
          uVar35 = 0;
          if ((int)uVar34 < iVar17) {
            uVar35 = ~uVar34 >> 0x1f;
          }
          local_7c8._412_4_ = uVar34;
          if (uVar35 == 0) {
            local_aa8 = (longlong)(int)uVar34;
            local_aa0 = (longlong)iVar17;
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          pUVar27 = FNiagaraNaniteMeshRendererMeshProperties::GetResolvedMesh
                              ((FNiagaraNaniteMeshRendererMeshProperties *)
                               ((pUVar20->Meshes).AllocatorInstance.Data +
                               (longlong)(int)uVar34 * 0x30),pFVar36);
          if (this_01 == (UNiagaraStaticMeshComponent *)0x0) {
            pUVar37 = (UStaticMesh *)0x0;
          }
          else {
            pUVar37 = (UStaticMesh *)this_01->_padding_;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar37 != (UStaticMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar37);
            }
          }
          this_00 = local_a60;
          if (pUVar37 == pUVar27) {
LAB_14da4617e:
            if (this_01 != (UNiagaraStaticMeshComponent *)0x0) {
LAB_14da46187:
              pUVar5 = (UObject *)this_01->_padding_;
              if (UE::GC::GIsIncrementalReachabilityPending == false) {
                if (pUVar5 != (UObject *)0x0) goto LAB_14da461c4;
              }
              else if (pUVar5 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar5);
LAB_14da461c4:
                if (local_a97 == '\0') {
                  NiagaraRendererNaniteLocal::FUpdateInstancesContext::FUpdateInstancesContext
                            (&local_308,(FUpdateInstancesContext *)local_7c8);
                  local_908[0] = (code *)0x0;
                  local_8e0 = (undefined8 *)0x0;
                  local_8e0 = FMemory::Malloc(0x230,0x10);
                  pFVar1 = (FUpdateInstancesContext *)(local_8e0 + 2);
                  *local_8e0 = &UE::Core::Private::Function::
                                TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::`54'::<lambda_2>,0,1>
                                ::_vftable_;
                  NiagaraRendererNaniteLocal::FUpdateInstancesContext::FUpdateInstancesContext
                            (pFVar1,&local_308);
                  if (pFVar1 != (FUpdateInstancesContext *)0x0) {
                    local_908[0] = UE::Core::Private::Function::
                                   TFunctionRefCaller<`FNiagaraRendererNanite::PostSystemTick_GameThread'::__l54::<lambda_2>,void,FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&>
                                   ::Call;
                  }
                  UNiagaraStaticMeshComponent::UpdateInstanceGPU
                            (this_01,local_7c8._16_4_,
                             (TFunction<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&)>
                              *)local_908);
                  TVar38.Reference = local_308.DataToRender.Reference;
                }
                else {
                  NiagaraRendererNaniteLocal::FUpdateInstancesContext::FUpdateInstancesContext
                            (&local_528,(FUpdateInstancesContext *)local_7c8);
                  local_a38 = (code *)0x0;
                  plStack_a10 = (longlong *)0x0;
                  plStack_a10 = FMemory::Malloc(0x230,0x10);
                  pFVar1 = (FUpdateInstancesContext *)(plStack_a10 + 2);
                  *plStack_a10 = (longlong)
                                 &UE::Core::Private::Function::
                                  TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::`52'::<lambda_1>,0,1>
                                  ::_vftable_;
                  NiagaraRendererNaniteLocal::FUpdateInstancesContext::FUpdateInstancesContext
                            (pFVar1,&local_528);
                  uVar46 = local_7c8._16_4_;
                  if (pFVar1 != (FUpdateInstancesContext *)0x0) {
                    local_a38 = UE::Core::Private::Function::
                                TFunctionRefCaller<`FNiagaraRendererNanite::PostSystemTick_GameThread'::__l52::<lambda_1>,void,FInstanceSceneDataBuffers::FWriteView_&>
                                ::Call;
                  }
                  if ((this_01->bUseCpuOnlyUpdates != true) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("bUseCpuOnlyUpdates == true",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\NiagaraNanite\\Source\\NiagaraNanite\\Private\\Renderer\\NiagaraStaticMeshComponent.cpp"
                                          ,0xcb,L""), bVar16)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  this_01->NumInstances = uVar46;
                  lVar45 = *(longlong *)&this_01->PendingCpuUpdateFunction;
                  uVar41 = *(undefined8 *)&(this_01->PendingCpuUpdateFunction).field_0x8;
                  lVar11 = *(longlong *)&(this_01->PendingCpuUpdateFunction).field_0x10;
                  uVar12 = *(undefined8 *)&(this_01->PendingCpuUpdateFunction).field_0x18;
                  uVar13 = *(undefined8 *)&(this_01->PendingCpuUpdateFunction).field_0x20;
                  plVar33 = *(longlong **)&(this_01->PendingCpuUpdateFunction).field_0x28;
                  *(code **)&this_01->PendingCpuUpdateFunction = local_a38;
                  *(undefined8 *)&(this_01->PendingCpuUpdateFunction).field_0x8 = uStack_a30;
                  *(longlong *)&(this_01->PendingCpuUpdateFunction).field_0x10 = local_a28;
                  *(undefined8 *)&(this_01->PendingCpuUpdateFunction).field_0x18 = uStack_a20;
                  *(undefined8 *)&(this_01->PendingCpuUpdateFunction).field_0x20 = local_a18;
                  *(longlong **)&(this_01->PendingCpuUpdateFunction).field_0x28 = plStack_a10;
                  local_a38 = (code *)lVar45;
                  uStack_a30 = uVar41;
                  local_a28 = lVar11;
                  uStack_a20 = uVar12;
                  local_a18 = uVar13;
                  plStack_a10 = plVar33;
                  UActorComponent::MarkRenderStateDirty((UActorComponent *)this_01);
                  TVar38.Reference = local_528.DataToRender.Reference;
                  if (local_a38 != (code *)0x0) {
                    plVar33 = &local_a28;
                    if (plStack_a10 != (longlong *)0x0) {
                      plVar33 = plStack_a10;
                    }
                    (**(code **)(*plVar33 + 0x10))();
                    TVar38.Reference = local_528.DataToRender.Reference;
                  }
                }
                if (TVar38.Reference != (FNiagaraDataBuffer *)0x0) {
                  if (((int)(TVar38.Reference)->_padding_ < 1) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsBeingRead()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                          ,0x2c,L""), bVar16)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  LOCK();
                  *(int *)&(TVar38.Reference)->_padding_ = (int)(TVar38.Reference)->_padding_ + -1;
                  UNLOCK();
                }
              }
            }
          }
          else {
            if (pUVar27 != (UStaticMesh *)0x0) {
              if (this_01 == (UNiagaraStaticMeshComponent *)0x0) {
                FObjectInitializer::AssertIfInConstructor
                          ((UObject *)local_a60,
                           L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                          );
                pUVar28 = UNiagaraStaticMeshComponent::StaticClass();
                FStaticConstructObjectParameters::FStaticConstructObjectParameters
                          ((FStaticConstructObjectParameters *)local_5a8,pUVar28);
                local_5a8._8_8_ = this_00;
                this_01 = (UNiagaraStaticMeshComponent *)
                          StaticConstructObject_Internal
                                    ((FStaticConstructObjectParameters *)local_5a8);
                if (local_5a8._64_8_ != 0) {
                  plVar33 = (longlong *)(local_5a8 + 0x50);
                  if ((longlong *)local_5a8._104_8_ != (longlong *)0x0) {
                    plVar33 = (longlong *)local_5a8._104_8_;
                  }
                  (**(code **)(*plVar33 + 0x10))();
                }
                UObjectBase::AtomicallySetFlags((UObjectBase *)this_01,RF_Transient);
                (**(code **)(this_01->_padding_ + 0x5f8))(this_01,2);
                (**(code **)(this_01->_padding_ + 0xb28))(this_01,pUVar27);
                local_a58 = 0;
                USceneComponent::SetupAttachment((USceneComponent *)this_01,this_00,(FName)0x0);
                pUVar29 = (UWorld *)this_00->_padding_;
                if (pUVar29 == (UWorld *)0x0) {
                  pUVar29 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
                }
                UActorComponent::RegisterComponentWithWorld
                          ((UActorComponent *)this_01,pUVar29,(FRegisterComponentContext *)0x0);
                if ((*(char *)((longlong)&this->_padding_ + 4) == '\0') ||
                   (pUVar20->SourceMode != Particles)) {
                  bVar16 = true;
                }
                else {
                  bVar16 = false;
                }
                this_01->bUseCpuOnlyUpdates = bVar16;
                this_01->NumCustomDataFloats = (pUVar20->PerInstanceDataFloatComponents).ArrayNum;
                pUVar28 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
                iVar17 = (int)pUVar28->_padding_;
                if ((iVar17 <= *(int *)(this_00->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
                    &pUVar28->_padding_)) {
                  bVar42 = *(byte *)((longlong)&this_01->_padding_ + 6);
                  bVar2 = *(byte *)((longlong)&this_01->_padding_ + 4);
                  *(byte *)((longlong)&this_01->_padding_ + 6) =
                       (bVar42 ^ *(byte *)((longlong)&this_00[1]._padding_ + 6)) & 1 ^ bVar42;
                  bVar42 = *(byte *)((longlong)&this_01->_padding_ + 1);
                  *(byte *)((longlong)&this_01->_padding_ + 4) =
                       (bVar2 ^ *(byte *)((longlong)&this_00[1]._padding_ + 4)) & 0x40 ^ bVar2;
                  *(byte *)((longlong)&this_01->_padding_ + 1) =
                       (bVar42 ^ *(byte *)((longlong)&this_00[1]._padding_ + 1)) & 0x40 ^ bVar42;
                  *(undefined1 *)((longlong)&this_01->_padding_ + 2) =
                       *(undefined1 *)((longlong)&this_00[1]._padding_ + 2);
                  *(undefined4 *)((longlong)&this_01->_padding_ + 4) =
                       *(undefined4 *)((longlong)&this_00[1]._padding_ + 4);
                  *(int *)&this_01->_padding_ = (int)this_00[1]._padding_;
                  *(undefined4 *)((longlong)&this_01->_padding_ + 4) =
                       *(undefined4 *)((longlong)&this_00[1]._padding_ + 4);
                }
                (**(code **)(this_01->_padding_ + 0x2b8))(this_01,0);
                (**(code **)(this_01->_padding_ + 0x4c0))(this_01,this_00);
                uVar35 = 0;
                if (0 < this_04[9].ObjectIndex) {
                  lVar45 = 0;
                  do {
                    uVar34 = 0;
                    if ((int)uVar35 < this_04[9].ObjectIndex) {
                      uVar34 = ~uVar35 >> 0x1f;
                    }
                    if (uVar34 == 0) {
                      local_aa8 = (longlong)(int)uVar35;
                      local_aa0 = (longlong)this_04[9].ObjectIndex;
                      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar16) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                    }
                    FVar32 = (FWeakObjectPtr)(this_04 + 6);
                    if (this_04[8] != (FWeakObjectPtr)0x0) {
                      FVar32 = this_04[8];
                    }
                    iVar17 = *(int *)((longlong)FVar32 + lVar45);
                    local_a80 = *(code **)(this_01->_padding_ + 0x6b8);
                    if ((iVar17 < 0) || ((int)this->_padding_ <= iVar17)) {
                      uVar41 = 0;
                    }
                    else {
                      iVar18 = (int)this->_padding_;
                      if ((iVar18 <= iVar17) &&
                         (local_aa8 = (longlong)iVar17, local_aa0 = (longlong)iVar18,
                         bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar16)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      uVar41 = *(undefined8 *)(this->_padding_ + (longlong)iVar17 * 8);
                    }
                    (*local_a80)(this_01,uVar35,uVar41);
                    uVar35 = uVar35 + 1;
                    lVar45 = lVar45 + 4;
                  } while ((int)uVar35 < this_04[9].ObjectIndex);
                  pUVar20 = local_a08;
                  uVar34 = (uint)local_a90;
                }
                local_a00 = this_01;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this_01);
                }
                FWeakObjectPtr::operator=(this_04,(FObjectPtr)&local_a00);
                goto LAB_14da4617e;
              }
              (**(code **)(this_01->_padding_ + 0xb28))(this_01,pUVar27);
              goto LAB_14da46187;
            }
            if (this_01 != (UNiagaraStaticMeshComponent *)0x0) {
              (**(code **)(this_01->_padding_ + 0xb28))(this_01,0);
            }
          }
        }
        else if (this_01 != (UNiagaraStaticMeshComponent *)0x0) {
          (**(code **)(this_01->_padding_ + 0xb28))(this_01,0);
        }
        uVar34 = uVar34 + 1;
        local_a78 = local_a78 + 0x50;
        local_a90 = (FNiagaraSystemInstance *)CONCAT44(local_a90._4_4_,uVar34);
        pFVar36 = local_a88;
      } while ((int)uVar34 < (this->MeshDatas).ArrayNum);
    }
    uVar41 = local_7c8._24_8_;
    if ((FNiagaraDataBuffer *)local_7c8._24_8_ != (FNiagaraDataBuffer *)0x0) {
      if (((int)*(longlong *)(local_7c8._24_8_ + 8) < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsBeingRead()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x2c,L""), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      *(int *)(uVar41 + 8) = (int)*(longlong *)(uVar41 + 8) + -1;
      UNLOCK();
    }
  }
  return;
}

// ReleaseComponents @ 14da463d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraRendererNanite::ReleaseComponents(FNiagaraRendererNanite *this)

{
  ForElementType<FNiagaraRendererNanite::FMeshData> FVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_> FVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ForElementType<FNiagaraRendererNanite::FMeshData> FVar13;
  undefined1 auStackY_158 [32];
  FWeakObjectPtr local_108;
  FWeakObjectPtr local_100;
  FWeakObjectPtr local_f8;
  UObject *local_f0;
  uchar auStack_e8 [8];
  uchar local_e0 [16];
  undefined8 local_d0;
  code *local_c8 [5];
  undefined8 *local_a0;
  uchar local_98 [8];
  uchar auStack_90 [8];
  UObject *local_88;
  uchar auStack_80 [24];
  undefined1 local_68 [24];
  uchar auStack_50 [8];
  ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  bVar5 = IsInGameThread();
  uVar6 = (this->MeshDatas).ArrayNum;
  uVar11 = 0;
  if (bVar5) {
    uVar12 = uVar11;
    if (0 < (int)uVar6) {
      do {
        uVar10 = (uint)uVar12;
        uVar6 = 0;
        if ((int)uVar10 < (this->MeshDatas).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar1 = (this->MeshDatas).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FNiagaraRendererNanite::FMeshData>)&this->MeshDatas;
        if (FVar1 != (ForElementType<FNiagaraRendererNanite::FMeshData>)0x0) {
          FVar13 = FVar1;
        }
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar13 + uVar11));
        if (pUVar7 != (UObject *)0x0) {
          (**(code **)(*(longlong *)pUVar7 + 0x4a0))(pUVar7,0);
          local_100.ObjectIndex = 0;
          local_100.ObjectSerialNumber = 0;
          local_d0 = 0;
          FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_d0);
          *(FWeakObjectPtr *)((longlong)FVar13 + uVar11) = local_100;
        }
        uVar11 = uVar11 + 0x50;
        uVar12 = (ulonglong)(uVar10 + 1);
      } while ((int)(uVar10 + 1) < (this->MeshDatas).ArrayNum);
    }
  }
  else {
    local_48 = (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)0x0;
    local_40 = 0;
    local_3c = 4;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if (4 < (int)uVar6) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>_>
                (8,4,uVar6,
                 (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_> *)
                 local_68,0,&local_3c);
    }
    uVar12 = uVar11;
    if (0 < (this->MeshDatas).ArrayNum) {
      do {
        uVar10 = (uint)uVar11;
        uVar6 = 0;
        if ((int)uVar10 < (this->MeshDatas).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar1 = (this->MeshDatas).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FNiagaraRendererNanite::FMeshData>)&this->MeshDatas;
        if (FVar1 != (ForElementType<FNiagaraRendererNanite::FMeshData>)0x0) {
          FVar13 = FVar1;
        }
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar13 + uVar12));
        if (pUVar7 != (UObject *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          local_108.ObjectIndex = 0;
          local_108.ObjectSerialNumber = 0;
          local_f0 = pUVar7;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          FWeakObjectPtr::operator=(&local_108,(FObjectPtr)&local_f0);
          FVar8 = (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)
                  local_68;
          if (local_48 !=
              (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)0x0) {
            FVar8 = local_48;
          }
          if ((ulonglong)FVar8 <= &local_108) {
            FVar8 = (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)
                    local_68;
            if (local_48 !=
                (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)0x0) {
              FVar8 = local_48;
            }
            if ((&local_108 < (FWeakObjectPtr *)((longlong)FVar8 + (longlong)local_3c * 8)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if (local_40 == local_3c) {
            local_40 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>_>
                                 (0x408,(ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>
                                         *)local_68,&local_3c);
          }
          local_f8.ObjectIndex = 0;
          local_f8.ObjectSerialNumber = 0;
          lVar9 = (longlong)local_40;
          FVar8 = (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)
                  local_68;
          if (local_48 !=
              (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)0x0) {
            FVar8 = local_48;
          }
          local_e0[0] = '\0';
          local_e0[1] = '\0';
          local_e0[2] = '\0';
          local_e0[3] = '\0';
          local_e0[4] = '\0';
          local_e0[5] = '\0';
          local_e0[6] = '\0';
          local_e0[7] = '\0';
          local_40 = local_40 + 1;
          *(FWeakObjectPtr *)((longlong)FVar8 + lVar9 * 8) = local_108;
          FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)local_e0);
          *(FWeakObjectPtr *)((longlong)FVar13 + uVar12) = local_f8;
        }
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar12 = uVar12 + 0x50;
      } while ((int)(uVar10 + 1) < (this->MeshDatas).ArrayNum);
    }
    iVar4 = local_3c;
    iVar3 = local_40;
    FVar8 = local_48;
    if (0 < local_40) {
      if (local_48 ==
          (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)0x0) {
        local_e0[0] = local_68[0];
        local_e0[1] = local_68[1];
        local_e0[2] = local_68[2];
        local_e0[3] = local_68[3];
        local_e0[4] = local_68[4];
        local_e0[5] = local_68[5];
        local_e0[6] = local_68[6];
        local_e0[7] = local_68[7];
        local_e0[8] = local_68[8];
        local_e0[9] = local_68[9];
        local_e0[10] = local_68[10];
        local_e0[0xb] = local_68[0xb];
        local_e0[0xc] = local_68[0xc];
        local_e0[0xd] = local_68[0xd];
        local_e0[0xe] = local_68[0xe];
        local_e0[0xf] = local_68[0xf];
        local_f0 = (UObject *)local_68._16_8_;
        auStack_e8[0] = auStack_50[0];
        auStack_e8[1] = auStack_50[1];
        auStack_e8[2] = auStack_50[2];
        auStack_e8[3] = auStack_50[3];
        auStack_e8[4] = auStack_50[4];
        auStack_e8[5] = auStack_50[5];
        auStack_e8[6] = auStack_50[6];
        auStack_e8[7] = auStack_50[7];
      }
      else {
        local_f0 = local_88;
        auStack_e8[0] = auStack_80[0];
        auStack_e8[1] = auStack_80[1];
        auStack_e8[2] = auStack_80[2];
        auStack_e8[3] = auStack_80[3];
        auStack_e8[4] = auStack_80[4];
        auStack_e8[5] = auStack_80[5];
        auStack_e8[6] = auStack_80[6];
        auStack_e8[7] = auStack_80[7];
        local_e0[0] = local_98[0];
        local_e0[1] = local_98[1];
        local_e0[2] = local_98[2];
        local_e0[3] = local_98[3];
        local_e0[4] = local_98[4];
        local_e0[5] = local_98[5];
        local_e0[6] = local_98[6];
        local_e0[7] = local_98[7];
        local_e0[8] = auStack_90[0];
        local_e0[9] = auStack_90[1];
        local_e0[10] = auStack_90[2];
        local_e0[0xb] = auStack_90[3];
        local_e0[0xc] = auStack_90[4];
        local_e0[0xd] = auStack_90[5];
        local_e0[0xe] = auStack_90[6];
        local_e0[0xf] = auStack_90[7];
      }
      local_3c = 4;
      local_48 = (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)0x0;
      local_40 = 0;
      local_c8[0] = (code *)0x0;
      local_a0 = FMemory::Malloc(0x38,8);
      local_a0[5] = 0;
      *local_a0 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FNiagaraRendererNanite::ReleaseComponents'::`20'::<lambda_1>,1,1>
                   ::_vftable_;
      if (FVar8 == (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)0x0)
      {
        local_a0[1] = local_e0._0_8_;
        local_a0[2] = local_e0._8_8_;
        local_a0[3] = local_f0;
        local_a0[4] = auStack_e8;
      }
      *(ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_> *)(local_a0 + 5)
           = FVar8;
      *(int *)(local_a0 + 6) = iVar3;
      *(int *)((longlong)local_a0 + 0x34) = iVar4;
      if ((uchar *)(local_a0 + 1) != (uchar *)0x0) {
        local_c8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FNiagaraRendererNanite::ReleaseComponents'::__l20::<lambda_1>,void>
                      ::Call;
      }
      AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_c8);
    }
    if (local_48 != (ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>)0x0
       ) {
      FMemory::Free((void *)local_48);
    }
  }
  return;
}

