// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// FGLTFLightMapConverter @ 14e5d2290

FGLTFLightMapConverter * __thiscall
FGLTFLightMapConverter::FGLTFLightMapConverter
          (FGLTFLightMapConverter *this,FGLTFConvertBuilder *param_1)

{
  *(FGLTFConvertBuilder **)&this->field_0x58 = param_1;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x34 = 0x80;
  *(undefined4 *)&this->field_0x3c = 0;
  *(undefined4 *)&this->field_0x38 = 0xffffffff;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined4 *)&this->field_0x50 = 0;
  *(undefined ***)this = &___7FGLTFLightMapConverter__6B_;
  return this;
}

// Convert @ 14e5e7720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FGLTFJsonLightMap * __thiscall
FGLTFLightMapConverter::Convert(FGLTFLightMapConverter *this,UStaticMeshComponent *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  UStaticMesh *this_00;
  FLightMap *pFVar9;
  TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*> *pTVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  FStaticMeshLODResources *this_01;
  FMeshMapBuildData *pFVar18;
  longlong *plVar19;
  FGLTFJsonLightMap *pFVar20;
  TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*> *this_02;
  FGLTFJsonLightMap *pFVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined1 *puVar24;
  int iVar25;
  ForAnyElementType *pFVar26;
  longlong *plVar27;
  FGLTFJsonLightMap *pFVar28;
  FGLTFJsonTexture *pFVar29;
  undefined4 *puVar30;
  undefined1 auStack_218 [32];
  FGLTFJsonLightMap **local_1f8;
  FScriptContainerElement *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  FName local_1c8 [2];
  FGLTFJsonLightMap *local_1b8;
  int local_1b0;
  ulonglong local_1a8;
  TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*> *local_1a0;
  FGLTFJsonTexture *local_198;
  undefined1 local_190 [8];
  ulonglong local_188;
  ulonglong *local_180;
  FGLTFJsonTexture **local_178;
  longlong local_168 [4];
  undefined4 local_148 [8];
  ulonglong local_128;
  longlong local_108 [4];
  undefined4 local_e8 [10];
  char local_c0;
  int local_b0;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_218;
  if (*(char *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0xa4) != '\0') {
    this_00 = (param_1->StaticMesh).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (this_00 == (UStaticMesh *)0x0) {
        return (FGLTFJsonLightMap *)0x0;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    else if (this_00 == (UStaticMesh *)0x0) {
      return (FGLTFJsonLightMap *)0x0;
    }
    iVar25 = param_1->ForcedLodModel + -1;
    iVar17 = *(int *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0x98);
    if (iVar25 < 1) {
      if (param_1->bOverrideMinLOD == '\0') {
        iVar25 = (this_00->MinLOD).Default;
      }
      else {
        iVar25 = param_1->MinLOD;
      }
      if (iVar25 < iVar17) {
        iVar25 = iVar17;
      }
    }
    iVar16 = UStaticMesh::GetNumLODs(this_00);
    iVar17 = iVar16 + -1;
    if (iVar25 < iVar16 + -1) {
      iVar17 = iVar25;
    }
    this_01 = UStaticMesh::GetLODForExport(this_00,iVar17);
    iVar17 = this_00->LightMapCoordinateIndex;
    if (((((-1 < iVar17) &&
          (local_1b0 = iVar17, iVar25 = FStaticMeshLODResources::GetNumTexCoords(this_01),
          iVar17 < iVar25)) && (0 < (param_1->LODData).ArrayNum)) &&
        ((pFVar18 = UStaticMeshComponent::GetMeshMapBuildData
                              (param_1,(FStaticMeshComponentLODInfo *)
                                       (param_1->LODData).AllocatorInstance.Data,true),
         pFVar18 != (FMeshMapBuildData *)0x0 &&
         (pFVar9 = (pFVar18->LightMap).Reference, pFVar9 != (FLightMap *)0x0)))) &&
       (plVar19 = (longlong *)(**(code **)(pFVar9->_padding_ + 0x30))(), plVar19 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar19 + 0x18))(plVar19,local_168);
      if ((local_b0 != 2) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type == LMIT_Texture",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneManagement.h"
                              ,0x1bf,L""), bVar15)) {
        pcVar12 = (code *)swi(3);
        pFVar20 = (FGLTFJsonLightMap *)(*pcVar12)();
        return pFVar20;
      }
      if (local_128 != 0) {
        local_1a8 = local_128;
        pTVar10 = *(TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*> **)
                   (*(longlong *)&this->field_0x58 + 0x948);
        (**(code **)(pTVar10->_padding_ + 8))(pTVar10,&local_1a8);
        local_188 = local_1a8;
        uVar22 = ((uint)(local_1a8 >> 0x14) & 0xffff ^ (uint)(local_1a8 >> 4)) * -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        uVar22 = uVar22 >> 0x10 ^ uVar22;
        if (*(int *)&(pTVar10->CachedOutputs).field_0x8 !=
            *(int *)&(pTVar10->CachedOutputs).field_0x34) {
          puVar24 = *(undefined1 **)&(pTVar10->CachedOutputs).field_0x40;
          if (puVar24 == (undefined1 *)0x0) {
            puVar24 = &(pTVar10->CachedOutputs).field_0x38;
          }
          iVar17 = *(int *)(puVar24 +
                           (ulonglong)(*(int *)&(pTVar10->CachedOutputs).field_0x48 - 1U & uVar22) *
                           4);
          if (iVar17 != -1) {
            do {
              lVar1 = *(longlong *)&pTVar10->CachedOutputs + (longlong)iVar17 * 0x18;
              if (*(ulonglong *)(*(longlong *)&pTVar10->CachedOutputs + (longlong)iVar17 * 0x18) ==
                  local_1a8) {
                puVar23 = (undefined8 *)(lVar1 + 8);
                if (lVar1 == 0) {
                  puVar23 = (undefined8 *)0x0;
                }
                if (puVar23 != (undefined8 *)0x0) {
                  pFVar29 = (FGLTFJsonTexture *)*puVar23;
                  goto LAB_14e5e79a1;
                }
                break;
              }
              iVar17 = *(int *)(lVar1 + 0x10);
            } while (iVar17 != -1);
          }
        }
        local_1a0 = pTVar10;
        this_02 = UE::Core::Private::
                  DereferenceIfNecessary<TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*>,TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*>_*>
                            (&local_1a0);
        local_198 = (FGLTFJsonTexture *)
                    TGLTFConverter<FGLTFJsonTexture*___ptr64,ULightMapTexture2D_const*___ptr64>::
                    _vcall__16__flat______
                              ((TGLTFConverter<FGLTFJsonTexture*___ptr64,ULightMapTexture2D_const*___ptr64>
                                *)this_02);
        local_180 = &local_188;
        local_1f8 = (FGLTFJsonLightMap **)0x0;
        local_178 = &local_198;
        TSet<TTuple<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*>,TDefaultMapHashableKeyFuncs<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*,0>,FDefaultSetAllocator>
        ::
        EmplaceByHash<TPairInitializer<TTuple<ULightMapTexture2D_const_*>_&&,FGLTFJsonTexture_*_const_&>_>
                  ((TSet<TTuple<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*>,TDefaultMapHashableKeyFuncs<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*,0>,FDefaultSetAllocator>
                    *)&pTVar10->CachedOutputs,(uint)local_190,
                   (TPairInitializer<TTuple<ULightMapTexture2D_const_*>_&&,FGLTFJsonTexture_*_const_&>
                    *)(ulonglong)uVar22,(bool *)&local_180);
        pFVar29 = local_198;
LAB_14e5e79a1:
        if (pFVar29 != (FGLTFJsonTexture *)0x0) {
          lVar1 = *(longlong *)&this->field_0x58;
          dVar5 = (double)plVar19[0x1c];
          dVar6 = (double)plVar19[0x1e];
          puVar30 = local_e8;
          if (local_c0 != '\0') {
            puVar30 = local_148;
          }
          dVar7 = (double)plVar19[0x1f];
          plVar27 = local_108;
          if (local_c0 != '\0') {
            plVar27 = local_168;
          }
          dVar8 = (double)plVar19[0x1d];
          pFVar21 = ::operator_new(0xb0);
          pFVar28 = (FGLTFJsonLightMap *)0x0;
          pFVar20 = pFVar28;
          if (pFVar21 != (FGLTFJsonLightMap *)0x0) {
            *(undefined4 *)&pFVar21->_padding_ = *(undefined4 *)(lVar1 + 0x360);
            pFVar21->_padding_ = (longlong)&___7FGLTFJsonLightMap__6B_;
            (pFVar21->Texture)._padding_ = (longlong)&___7FGLTFJsonTextureInfo__6B_;
            (pFVar21->Texture).Transform._padding_ = (longlong)&___7FGLTFJsonTextureTransform__6B_;
            (pFVar21->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar21->Name).Data.ArrayNum = 0;
            (pFVar21->Name).Data.ArrayMax = 0;
            (pFVar21->Texture).Index = (FGLTFJsonTexture *)0x0;
            (pFVar21->Texture).TexCoord = 0;
            *(undefined8 *)&(pFVar21->Texture).Transform.Offset.field_0x8 =
                 FGLTFJsonVector2::Zero._8_8_;
            *(undefined ***)&(pFVar21->Texture).Transform.Offset = &___7FGLTFJsonVector2__6B_;
            *(undefined8 *)&(pFVar21->Texture).Transform.Scale.field_0x8 =
                 FGLTFJsonVector2::One._8_8_;
            *(undefined ***)&(pFVar21->Texture).Transform.Scale = &___7FGLTFJsonVector2__6B_;
            (pFVar21->Texture).Transform.Rotation = 0.0;
            uVar14 = FGLTFJsonVector4::One._16_8_;
            uVar13 = FGLTFJsonVector4::One._8_8_;
            *(undefined ***)&pFVar21->LightMapScale = &___7FGLTFJsonVector4__6B_;
            *(undefined8 *)&(pFVar21->LightMapScale).field_0x8 = uVar13;
            *(undefined8 *)&(pFVar21->LightMapScale).field_0x10 = uVar14;
            uVar14 = FGLTFJsonVector4::Zero._16_8_;
            uVar13 = FGLTFJsonVector4::Zero._8_8_;
            *(undefined ***)&pFVar21->LightMapAdd = &___7FGLTFJsonVector4__6B_;
            *(undefined8 *)&(pFVar21->LightMapAdd).field_0x8 = uVar13;
            *(undefined8 *)&(pFVar21->LightMapAdd).field_0x10 = uVar14;
            *(undefined4 *)&(pFVar21->CoordinateScaleBias).field_0x8 = 0x3f800000;
            *(undefined8 *)&(pFVar21->CoordinateScaleBias).field_0xc = 0x3f800000;
            *(undefined4 *)&(pFVar21->CoordinateScaleBias).field_0x14 = 0;
            *(undefined ***)&pFVar21->CoordinateScaleBias = &___7FGLTFJsonVector4__6B_;
            pFVar20 = pFVar21;
          }
          pFVar26 = (ForAnyElementType *)(lVar1 + 0x358);
          pFVar11 = pFVar26->Data;
          local_1b8 = pFVar20;
          if ((pFVar11 <= (FScriptContainerElement *)&local_1b8) &&
             ((FScriptContainerElement *)&local_1b8 <
              pFVar11 + (longlong)*(int *)(lVar1 + 0x364) * 8)) {
            local_1e0 = (longlong)*(int *)(lVar1 + 0x360);
            local_1d8 = 8;
            local_1f8 = &local_1b8;
            local_1f0 = pFVar11;
            local_1e8 = (longlong)*(int *)(lVar1 + 0x364);
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar15) {
              pcVar12 = (code *)swi(3);
              pFVar20 = (FGLTFJsonLightMap *)(*pcVar12)();
              return pFVar20;
            }
          }
          iVar17 = *(int *)(lVar1 + 0x360);
          if (iVar17 == *(int *)(lVar1 + 0x364)) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,pFVar26,(int *)(lVar1 + 0x364));
          }
          *(int *)(lVar1 + 0x360) = iVar17 + 1;
          *(FGLTFJsonLightMap **)(pFVar26->Data + (longlong)iVar17 * 8) = local_1b8;
          local_1c8[0] = (FName)param_1->_padding_;
          ::FName::ToString(local_1c8,&pFVar20->Name);
          (pFVar20->Texture).TexCoord = local_1b0;
          (pFVar20->Texture).Index = pFVar29;
          lVar1 = plVar27[1];
          pFVar21 = (FGLTFJsonLightMap *)&(pFVar20->LightMapScale).field_0x8;
          if (pFVar20 == (FGLTFJsonLightMap *)0xffffffffffffff98) {
            pFVar21 = pFVar28;
          }
          pFVar21->_padding_ = *plVar27;
          pFVar21->_padding_ = lVar1;
          uVar2 = puVar30[2];
          uVar3 = puVar30[3];
          pFVar21 = (FGLTFJsonLightMap *)&(pFVar20->LightMapAdd).field_0x8;
          if (pFVar20 == (FGLTFJsonLightMap *)0xffffffffffffff80) {
            pFVar21 = pFVar28;
          }
          uVar4 = puVar30[1];
          *(undefined4 *)&pFVar21->_padding_ = *puVar30;
          *(undefined4 *)((longlong)&pFVar21->_padding_ + 4) = uVar4;
          *(undefined4 *)&pFVar21->_padding_ = uVar2;
          *(undefined4 *)((longlong)&pFVar21->_padding_ + 4) = uVar3;
          pFVar21 = (FGLTFJsonLightMap *)&(pFVar20->CoordinateScaleBias).field_0x8;
          if (pFVar20 == (FGLTFJsonLightMap *)0xffffffffffffff68) {
            pFVar21 = pFVar28;
          }
          *(float *)&pFVar21->_padding_ = (float)dVar5;
          *(float *)((longlong)&pFVar21->_padding_ + 4) = (float)dVar8;
          *(float *)&pFVar21->_padding_ = (float)dVar6;
          *(float *)((longlong)&pFVar21->_padding_ + 4) = (float)dVar7;
          return pFVar20;
        }
      }
    }
  }
  return (FGLTFJsonLightMap *)0x0;
}

