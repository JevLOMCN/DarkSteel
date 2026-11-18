// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 4

// FGroupedSpriteSceneProxy @ 14ace7ef0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGroupedSpriteSceneProxy * __thiscall
FGroupedSpriteSceneProxy::FGroupedSpriteSceneProxy
          (FGroupedSpriteSceneProxy *this,UPaperGroupedSpriteComponent *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FSceneInterface *this_00;
  code *pcVar14;
  void *_Src;
  double dVar15;
  FScriptContainerElement *pFVar16;
  FWeakObjectPtr *pFVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  bool bVar23;
  undefined1 uVar24;
  EShaderPlatform EVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  undefined8 *puVar30;
  FGroupedSpriteSceneProxy *pFVar31;
  longlong lVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  longlong *plVar36;
  ulonglong uVar37;
  uint uVar38;
  UObject *pUVar39;
  longlong lVar40;
  ForElementType<UTexture_*> *_Dst;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *pTVar41;
  longlong *plVar42;
  TArray<TWeakObjectPtr<UBodySetup,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar43;
  uint uVar44;
  FScriptContainerElement *pFVar45;
  ForElementType<UTexture_*> FVar46;
  FScriptContainerElement *pFVar47;
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined1 auStackY_2b8 [32];
  undefined1 local_267;
  undefined1 local_266;
  undefined1 local_265;
  undefined4 local_264;
  undefined4 local_260;
  uint local_25c;
  ulonglong local_258;
  FWeakObjectPtr local_250;
  longlong local_248;
  ForElementType<UTexture_*> local_240;
  ulonglong local_238;
  UPaperGroupedSpriteComponent *local_230;
  ForAnyElementType local_228;
  int local_220 [2];
  undefined8 *local_218;
  float local_210;
  float fStack_20c;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  longlong *local_1d8;
  FGroupedSpriteSceneProxy *local_1d0;
  int *local_1c8;
  UObject *local_1c0;
  int *local_1b8;
  FScriptContainerElement *local_1b0;
  TVector<float>_u_0 local_1a8;
  TVector<float>_u_0 local_19c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float local_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  <unnamed_type_Vector> local_13c;
  <unnamed_type_Vector> local_138;
  undefined4 uStack_134;
  undefined1 local_128 [8];
  double local_120;
  double local_118;
  ForElementType<UTexture_*> local_110;
  int local_e8;
  int local_e4;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_230 = param_1;
  local_1d0 = this;
  FPaperRenderSceneProxy::FPaperRenderSceneProxy
            ((FPaperRenderSceneProxy *)this,(UPrimitiveComponent *)param_1);
  this_00 = *(FSceneInterface **)&this->field_0x220;
  *(undefined ***)this = &___7FGroupedSpriteSceneProxy__6B_;
  piVar1 = &(this->BodySetupTransforms).ArrayMax;
  this->MyComponent = param_1;
  piVar2 = &(this->BodySetups).ArrayMax;
  (this->PerInstanceRenderData).Object = (FPerInstanceRenderData *)0x0;
  (this->PerInstanceRenderData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BodySetupTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BodySetupTransforms).ArrayNum = 0;
  *piVar1 = 0;
  (this->BodySetups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BodySetups).ArrayNum = 0;
  *piVar2 = 0;
  pcVar14 = *(code **)(param_1->_padding_ + 0xaa8);
  local_1c8 = piVar1;
  local_1b8 = piVar2;
  EVar25 = FSceneInterface::GetShaderPlatform(this_00);
  puVar30 = (undefined8 *)(*pcVar14)(param_1,local_128,EVar25);
  *(undefined8 *)&this->field_0x630 = *puVar30;
  this->NumInstances = (param_1->PerInstanceSpriteData).ArrayNum;
  bVar22 = AllowDebugViewmodes();
  if ((bVar22) && (iVar26 = (**(code **)(param_1->_padding_ + 0x5e0))(param_1), iVar26 != 0)) {
    uVar44 = this->NumInstances;
    bVar22 = true;
    if ((int)uVar44 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar44);
    }
    if (*piVar1 < (int)uVar44) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,uVar44,&(this->BodySetupTransforms).AllocatorInstance,
                 (this->BodySetupTransforms).ArrayNum,piVar1);
    }
    uVar44 = this->NumInstances;
    if ((int)uVar44 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar44);
    }
    if (*piVar2 < (int)uVar44) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar44,&(this->BodySetups).AllocatorInstance,(this->BodySetups).ArrayNum,piVar2
                );
    }
  }
  else {
    bVar22 = false;
  }
  iVar26 = this->NumInstances;
  uVar44 = 0;
  local_228.Data = (FScriptContainerElement *)0x0;
  local_220[0] = 0;
  local_220[1] = 0;
  iVar27 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar26,&local_228,local_220,local_220 + 1);
  memset(local_228.Data + (longlong)iVar27 * 4,0,(longlong)iVar26 << 2);
  if (0 < this->NumInstances) {
    local_258 = 0;
    local_238 = 0;
    do {
      uVar37 = local_238;
      uVar38 = 0;
      if ((int)uVar44 < (param_1->PerInstanceSpriteData).ArrayNum) {
        uVar38 = ~uVar44 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar14 = (code *)swi(3);
        pFVar31 = (FGroupedSpriteSceneProxy *)(*pcVar14)();
        return pFVar31;
      }
      pFVar45 = (param_1->PerInstanceSpriteData).AllocatorInstance.Data;
      local_218 = *(undefined8 **)(pFVar45 + uVar37 + 0x80);
      if (local_218 != (undefined8 *)0x0) {
        iVar26 = *(int *)(local_218 + 8);
        local_248 = local_218[0xd];
        _Src = (void *)local_218[7];
        local_110.SecondaryData = (ForElementType<UTexture_*>)0x0;
        local_e4 = 4;
        local_e8 = iVar26;
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>_>
                  (8,8,iVar26,4,&local_110,iVar26,&local_e4);
        FVar46 = (ForElementType<UTexture_*>)&local_110;
        if (local_110.SecondaryData != (ForElementType<UTexture_*>)0x0) {
          FVar46 = local_110.SecondaryData;
        }
        if (iVar26 != 0) {
          memcpy((void *)FVar46,_Src,(longlong)iVar26 << 3);
        }
        lVar32 = (**(code **)(local_230->_padding_ + 0x690))
                           (local_230,*(undefined4 *)(pFVar45 + uVar37 + 0x8c));
        uVar38 = *(int *)&this->field_0x288 - 1;
        if (-1 < (int)uVar38) {
          lVar40 = (longlong)(int)uVar38 * 0x48;
          do {
            uVar28 = 0;
            if ((int)uVar38 < *(int *)&this->field_0x288) {
              uVar28 = ~uVar38 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar14 = (code *)swi(3);
              pFVar31 = (FGroupedSpriteSceneProxy *)(*pcVar14)();
              return pFVar31;
            }
            plVar42 = (longlong *)(*(longlong *)&this->field_0x280 + lVar40);
            if ((*plVar42 == lVar32) && (plVar42[1] == local_248)) {
              iVar26 = (int)plVar42[7];
              if (iVar26 == local_e8) {
                FVar46 = (ForElementType<UTexture_*>)&local_110;
                if (local_110.SecondaryData != (ForElementType<UTexture_*>)0x0) {
                  FVar46 = local_110.SecondaryData;
                }
                plVar36 = plVar42 + 2;
                if ((longlong *)plVar42[6] != (longlong *)0x0) {
                  plVar36 = (longlong *)plVar42[6];
                }
                if ((iVar26 == 0) ||
                   (iVar26 = memcmp(plVar36,(void *)FVar46,(longlong)iVar26 << 3), iVar26 == 0)) {
                  if (uVar38 != 0xffffffff) goto LAB_14ace8458;
                  break;
                }
              }
            }
            lVar40 = lVar40 + -0x48;
            uVar38 = uVar38 - 1;
          } while (-1 < (int)uVar38);
        }
        uVar38 = *(uint *)&this->field_0x288;
        uVar28 = uVar38;
        if (uVar38 == *(uint *)&this->field_0x28c) {
          uVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)&this->field_0x280,
                              (int *)&this->field_0x28c);
          *(uint *)&this->field_0x288 = uVar28;
        }
        plVar42 = (longlong *)0x0;
        *(uint *)&this->field_0x288 = uVar28 + 1;
        uVar29 = 0;
        if ((int)uVar28 < (int)(uVar28 + 1)) {
          uVar29 = ~uVar28 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar14 = (code *)swi(3);
          pFVar31 = (FGroupedSpriteSceneProxy *)(*pcVar14)();
          return pFVar31;
        }
        iVar26 = local_e8;
        plVar36 = (longlong *)(*(longlong *)&this->field_0x280 + (longlong)(int)uVar28 * 0x48);
        if (plVar36 != (longlong *)0x0) {
          plVar36[6] = 0;
          *(undefined4 *)(plVar36 + 7) = 0;
          *(undefined4 *)((longlong)plVar36 + 0x3c) = 4;
          *(undefined4 *)(plVar36 + 8) = 0xffffffff;
          *(undefined4 *)((longlong)plVar36 + 0x44) = 0;
          plVar42 = plVar36;
        }
        _Dst = (ForElementType<UTexture_*> *)(plVar42 + 2);
        plVar42[1] = local_248;
        *plVar42 = lVar32;
        if (_Dst != &local_110) {
          lVar32 = (longlong)local_e8;
          piVar1 = (int *)((longlong)plVar42 + 0x3c);
          *(int *)(plVar42 + 7) = local_e8;
          local_240 = (ForElementType<UTexture_*>)&local_110;
          if (local_110.SecondaryData != (ForElementType<UTexture_*>)0x0) {
            local_240 = local_110.SecondaryData;
          }
          if ((local_e8 == 0) && (*piVar1 == 0)) {
            *piVar1 = 4;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>_>
                      (8,8,local_e8,*piVar1,_Dst,local_e8,piVar1);
            if ((ForElementType<UTexture_*> *)plVar42[6] != (ForElementType<UTexture_*> *)0x0) {
              _Dst = (ForElementType<UTexture_*> *)plVar42[6];
            }
            if (iVar26 != 0) {
              memcpy(_Dst,(void *)local_240,lVar32 << 3);
            }
          }
        }
LAB_14ace8458:
        uVar37 = local_258;
        uVar28 = 0;
        if ((int)uVar44 < local_220[0]) {
          uVar28 = ~uVar44 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar14 = (code *)swi(3);
          pFVar31 = (FGroupedSpriteSceneProxy *)(*pcVar14)();
          return pFVar31;
        }
        *(uint *)(local_228.Data + uVar37 * 4) = uVar38;
        *(int *)((longlong)plVar42 + 0x44) =
             *(int *)((longlong)plVar42 + 0x44) + *(int *)(local_218 + 0x16);
        uVar37 = local_238;
        param_1 = local_230;
        if (local_110.SecondaryData != (ForElementType<UTexture_*>)0x0) {
          FMemory::Free((void *)local_110.SecondaryData);
          uVar37 = local_238;
          param_1 = local_230;
        }
      }
      local_258 = local_258 + 1;
      local_238 = uVar37 + 0x90;
      uVar44 = uVar44 + 1;
    } while ((int)uVar44 < this->NumInstances);
  }
  iVar27 = 0;
  iVar26 = *(int *)&this->field_0x288;
  lVar40 = *(longlong *)&this->field_0x280;
  lVar32 = lVar40 + (longlong)iVar26 * 0x48;
  while( true ) {
    if (*(int *)&this->field_0x288 != iVar26) {
      local_267 = 0;
      `TCheckedPointerIterator<FSpriteRenderSection,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_267);
    }
    if (lVar40 == lVar32) break;
    *(int *)(lVar40 + 0x40) = iVar27;
    iVar27 = iVar27 + *(int *)(lVar40 + 0x44);
    *(undefined4 *)(lVar40 + 0x44) = 0;
    lVar40 = lVar40 + 0x48;
  }
  puVar3 = &this->field_0x290;
  local_1d8 = (longlong *)puVar3;
  if ((*(int *)&this->field_0x298 != 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Vertices.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\GroupedSpriteSceneProxy.cpp"
                          ,0x78,L""), bVar23)) {
    pcVar14 = (code *)swi(3);
    pFVar31 = (FGroupedSpriteSceneProxy *)(*pcVar14)();
    return pFVar31;
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x58,4,iVar27,(ForAnyElementType *)puVar3,(int *)&this->field_0x298,
             (int *)&this->field_0x29c);
  pFVar47 = (param_1->PerInstanceSpriteData).AllocatorInstance.Data;
  pTVar41 = &this->BodySetupTransforms;
  pTVar43 = &this->BodySetups;
  uVar52 = SUB84(__real_3ff0000000000000,0);
  uVar53 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar58 = (undefined4)__real_3e45798ee0000000;
  uVar59 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  uVar54 = (undefined4)__real_406fc00000000000;
  uVar55 = (undefined4)((ulonglong)__real_406fc00000000000 >> 0x20);
  pFVar45 = pFVar47 + 0x50;
  iVar26 = (local_230->PerInstanceSpriteData).ArrayNum;
  uVar37 = (ulonglong)iVar26;
  uVar56 = (undefined4)__real_3fe0000000000000;
  uVar57 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  local_1b0 = pFVar47 + uVar37 * 0x90;
  local_25c = 0;
  local_258 = CONCAT44(local_258._4_4_,iVar26);
  local_248 = 0;
  do {
    pFVar16 = local_1b0;
    pUVar39 = (UObject *)0x0;
    if ((local_230->PerInstanceSpriteData).ArrayNum != (int)uVar37) {
      local_266 = 0;
      `TCheckedPointerIterator<FSpriteInstanceData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_266);
    }
    if (pFVar47 == pFVar16) {
      if (local_228.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data);
      }
      return this;
    }
    dVar15 = *(double *)(pFVar45 + 0x30);
    if (dVar15 != 0.0) {
      uVar44 = 0;
      if ((int)local_25c < local_220[0]) {
        uVar44 = ~local_25c >> 0x1f;
      }
      if ((uVar44 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar14 = (code *)swi(3);
        pFVar31 = (FGroupedSpriteSceneProxy *)(*pcVar14)();
        return pFVar31;
      }
      uVar44 = *(uint *)(local_228.Data + local_248);
      lVar32 = (longlong)(int)uVar44;
      uVar38 = 0;
      if ((int)uVar44 < *(int *)&this->field_0x288) {
        uVar38 = ~uVar44 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar14 = (code *)swi(3);
        pFVar31 = (FGroupedSpriteSceneProxy *)(*pcVar14)();
        return pFVar31;
      }
      lVar40 = *(longlong *)&this->field_0x280;
      iVar26 = *(int *)(lVar40 + 0x44 + lVar32 * 0x48);
      local_218 = (undefined8 *)
                  (*local_1d8 +
                  ((longlong)*(int *)(lVar40 + 0x40 + lVar32 * 0x48) + (longlong)iVar26) * 0x58);
      *(int *)(lVar40 + 0x44 + lVar32 * 0x48) = *(int *)((longlong)dVar15 + 0xb0) + iVar26;
      dVar21 = __real_3ff0000000000000;
      dVar4 = *(double *)pFVar47;
      dVar5 = *(double *)(pFVar45 + -0x48);
      dVar51 = *(double *)(pFVar45 + -0x40);
      dVar49 = dVar4 * dVar4 + dVar5 * dVar5 + dVar51 * dVar51;
      local_1f8 = dVar51;
      dStack_200 = dVar5;
      local_208 = dVar4;
      if (dVar49 != (double)CONCAT44(uVar53,uVar52)) {
        if ((double)CONCAT44(uVar59,uVar58) <= dVar49) {
          local_120 = (double)CONCAT44(uVar53,uVar52) / SQRT(dVar49);
          local_1f8 = local_120 * dVar51;
          dStack_200 = local_120 * dVar5;
          local_208 = local_120 * dVar4;
        }
        else {
          local_208 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          dStack_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        }
      }
      local_1f0 = *(double *)(pFVar45 + -0x30);
      dVar49 = *(double *)(pFVar45 + -0x28);
      dVar6 = *(double *)(pFVar45 + -0x20);
      iVar27 = (int)ROUND(local_208 * (double)CONCAT44(uVar55,uVar54) +
                          (double)CONCAT44(uVar57,uVar56)) >> 1;
      iVar26 = 0x7f;
      if (iVar27 < 0x7f) {
        iVar26 = iVar27;
      }
      uVar33 = 0x80;
      if (-0x80 < iVar26) {
        uVar33 = (char)iVar26;
      }
      iVar27 = (int)ROUND(dStack_200 * (double)CONCAT44(uVar55,uVar54) +
                          (double)CONCAT44(uVar57,uVar56)) >> 1;
      iVar26 = 0x7f;
      if (iVar27 < 0x7f) {
        iVar26 = iVar27;
      }
      uVar34 = 0x80;
      if (-0x80 < iVar26) {
        uVar34 = (char)iVar26;
      }
      iVar27 = (int)ROUND(local_1f8 * (double)CONCAT44(uVar55,uVar54) +
                          (double)CONCAT44(uVar57,uVar56)) >> 1;
      iVar26 = 0x7f;
      if (iVar27 < 0x7f) {
        iVar26 = iVar27;
      }
      uVar35 = 0x80;
      if (-0x80 < iVar26) {
        uVar35 = (char)iVar26;
      }
      local_264 = CONCAT13(0x7f,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
      uVar44 = local_264;
      dVar50 = local_1f0 * local_1f0 + dVar49 * dVar49 + dVar6 * dVar6;
      local_1e0 = dVar6;
      dStack_1e8 = dVar49;
      if (dVar50 != (double)CONCAT44(uVar53,uVar52)) {
        if ((double)CONCAT44(uVar59,uVar58) <= dVar50) {
          local_118 = (double)CONCAT44(uVar53,uVar52) / SQRT(dVar50);
          local_1f0 = local_1f0 * local_118;
          local_1e0 = local_118 * dVar6;
          dStack_1e8 = local_118 * dVar49;
        }
        else {
          local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_1e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_1e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      dVar50 = *(double *)pFVar45;
      dVar7 = *(double *)(pFVar45 + 0x28);
      dVar8 = *(double *)(pFVar45 + -0x18);
      dVar9 = *(double *)(pFVar45 + 8);
      iVar27 = (int)ROUND(local_1f0 * (double)CONCAT44(uVar55,uVar54) +
                          (double)CONCAT44(uVar57,uVar56)) >> 1;
      iVar26 = 0x7f;
      if (iVar27 < 0x7f) {
        iVar26 = iVar27;
      }
      uVar33 = 0x80;
      if (-0x80 < iVar26) {
        uVar33 = (char)iVar26;
      }
      dVar10 = *(double *)(pFVar45 + -0x38);
      iVar27 = (int)ROUND(dStack_1e8 * (double)CONCAT44(uVar55,uVar54) +
                          (double)CONCAT44(uVar57,uVar56)) >> 1;
      iVar26 = 0x7f;
      if (iVar27 < 0x7f) {
        iVar26 = iVar27;
      }
      dVar20 = dVar51 * dVar8 - dVar10 * dVar6;
      uVar34 = 0x80;
      if (-0x80 < iVar26) {
        uVar34 = (char)iVar26;
      }
      dVar11 = *(double *)(pFVar45 + 0x20);
      iVar27 = (int)ROUND(local_1e0 * (double)CONCAT44(uVar55,uVar54) +
                          (double)CONCAT44(uVar57,uVar56)) >> 1;
      iVar26 = 0x7f;
      if (iVar27 < 0x7f) {
        iVar26 = iVar27;
      }
      dVar18 = dVar51 * dVar9 - dVar50 * dVar10;
      dVar12 = *(double *)(pFVar45 + -8);
      uVar35 = 0x80;
      if (-0x80 < iVar26) {
        uVar35 = (char)iVar26;
      }
      dVar19 = dVar9 * dVar6 - dVar50 * dVar8;
      dVar13 = *(double *)(pFVar45 + 0x18);
      dVar10 = dVar51 * dVar7 - dVar11 * dVar10;
      dVar51 = dVar7 * dVar50 - dVar11 * dVar9;
      dVar6 = dVar7 * dVar6 - dVar11 * dVar8;
      FVar46 = *(ForElementType<UTexture_*> *)((longlong)dVar15 + 0xa8);
      uVar52 = *(undefined4 *)(pFVar45 + 0x38);
      uVar24 = 0x7f;
      if (((((dVar51 * dVar49 - dVar6 * dVar12) + dVar19 * dVar13) * dVar4 -
           ((dVar51 * dVar5 - dVar10 * dVar12) + dVar18 * dVar13) * *(double *)(pFVar45 + -0x30)) +
          ((dVar6 * dVar5 - dVar10 * dVar49) + dVar20 * dVar13) * *(double *)(pFVar45 + -0x10)) -
          ((dVar19 * dVar5 - dVar18 * dVar49) + dVar20 * dVar12) * *(double *)(pFVar45 + 0x10) <
          __real_0000000000000000) {
        uVar24 = 0x81;
      }
      uVar37 = (ulonglong)*(int *)((longlong)dVar15 + 0xb0);
      local_260 = CONCAT13(uVar24,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
      uVar38 = local_260;
      local_240 = (ForElementType<UTexture_*>)(uVar37 * 0x20 + (longlong)FVar46);
      local_238 = CONCAT44(local_238._4_4_,*(int *)((longlong)dVar15 + 0xb0));
      while( true ) {
        if (*(int *)((longlong)dVar15 + 0xb0) != (int)uVar37) {
          local_265 = 0;
          `TCheckedPointerIterator<UE::Math::TVector4<double>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_265);
        }
        if (FVar46 == local_240) break;
        dVar4 = *(double *)((longlong)FVar46 + 8);
        dVar5 = *(double *)FVar46;
        dVar49 = dVar4 * PaperAxisY.field0_0x0._s_0.X + dVar5 * PaperAxisX.field0_0x0._s_0.X;
        dVar51 = dVar4 * PaperAxisY.field0_0x0._s_0.Y + dVar5 * PaperAxisX.field0_0x0._s_0.Y;
        dVar4 = dVar4 * PaperAxisY.field0_0x0._s_0.Z + dVar5 * PaperAxisX.field0_0x0._s_0.Z;
        fStack_20c = (float)*(double *)((longlong)FVar46 + 0x18);
        local_210 = (float)*(double *)((longlong)FVar46 + 0x10);
        auVar48 = pmovsxbd(ZEXT416((uint)fStack_20c),ZEXT416(uVar38));
        local_19c._0_8_ =
             CONCAT44((float)auVar48._4_4_ * _UNK_151040074,
                      (float)auVar48._0_4_ * ___xmm_3c0102043c0102043c0102043c010204);
        local_19c._s_0.Z = (float)auVar48._8_4_ * _UNK_151040078;
        auVar48 = pmovsxbd(auVar48,ZEXT416(uVar44));
        local_188 = (float)(*(double *)(pFVar45 + -0x30) * dVar51 + *(double *)pFVar47 * dVar49 +
                            *(double *)(pFVar45 + -0x10) * dVar4 +
                           *(double *)(pFVar45 + 0x10) * dVar21);
        local_1a8._0_8_ =
             CONCAT44((float)auVar48._4_4_ * _UNK_151040074,
                      (float)auVar48._0_4_ * ___xmm_3c0102043c0102043c0102043c010204);
        local_1a8._s_0.Z = (float)auVar48._8_4_ * _UNK_151040078;
        fStack_184 = (float)(*(double *)(pFVar45 + -0x28) * dVar51 +
                             *(double *)(pFVar47 + 8) * dVar49 + *(double *)(pFVar45 + -8) * dVar4 +
                            *(double *)(pFVar45 + 0x18) * dVar21);
        fStack_180 = (float)(*(double *)(pFVar45 + -0x20) * dVar51 +
                             *(double *)(pFVar45 + -0x40) * dVar49 + dVar4 * *(double *)pFVar45 +
                            *(double *)(pFVar45 + 0x20) * dVar21);
        FPackedNormal::FPackedNormal
                  ((FPackedNormal *)&local_13c._s_0,(TVector<float> *)&local_1a8._s_0);
        FPackedNormal::FPackedNormal
                  ((FPackedNormal *)&local_138._s_0,(TVector<float> *)&local_19c._s_0);
        uVar37 = local_238 & 0xffffffff;
        fStack_17c = local_210;
        fStack_178 = fStack_20c;
        *local_218 = CONCAT44(fStack_184,local_188);
        local_218[1] = CONCAT44(local_210,fStack_180);
        fStack_16c = local_210;
        fStack_168 = fStack_20c;
        local_15c = local_210;
        fStack_158 = fStack_20c;
        fStack_14c = local_210;
        fStack_148 = fStack_20c;
        fStack_174 = local_210;
        fStack_170 = fStack_20c;
        local_218[2] = CONCAT44(local_210,fStack_20c);
        local_218[3] = CONCAT44(local_210,fStack_20c);
        fStack_164 = local_210;
        fStack_160 = fStack_20c;
        local_218[4] = CONCAT44(local_210,fStack_20c);
        local_218[5] = CONCAT44(local_210,fStack_20c);
        fStack_154 = local_210;
        fStack_150 = fStack_20c;
        local_218[6] = CONCAT44(local_210,fStack_20c);
        local_218[7] = CONCAT44(local_210,fStack_20c);
        fStack_144 = local_210;
        fStack_140 = fStack_20c;
        local_218[8] = CONCAT44(local_210,fStack_20c);
        local_218[9] = CONCAT44(local_13c.Packed,fStack_20c);
        local_138._s_0.W = 0x7f;
        local_218[10] = CONCAT44(uVar52,local_138.Packed);
        local_218 = local_218 + 0xb;
        FVar46 = (ForElementType<UTexture_*>)((longlong)FVar46 + 0x20);
        uStack_134 = uVar52;
      }
      pUVar39 = *(UObject **)((longlong)dVar15 + 0x98);
      uVar52 = SUB84(__real_3ff0000000000000,0);
      uVar53 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      uVar54 = (undefined4)__real_406fc00000000000;
      uVar55 = (undefined4)((ulonglong)__real_406fc00000000000 >> 0x20);
      uVar56 = (undefined4)__real_3fe0000000000000;
      uVar57 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      pTVar43 = &local_1d0->BodySetups;
      uVar58 = (undefined4)__real_3e45798ee0000000;
      uVar59 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      pTVar41 = &local_1d0->BodySetupTransforms;
      this = local_1d0;
    }
    if (bVar22) {
      pFVar16 = (pTVar41->AllocatorInstance).Data;
      if (((pFVar16 <= pFVar47) && (pFVar47 < pFVar16 + (longlong)pTVar41->ArrayMax * 0x80)) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar23)) {
        pcVar14 = (code *)swi(3);
        pFVar31 = (FGroupedSpriteSceneProxy *)(*pcVar14)();
        return pFVar31;
      }
      iVar26 = pTVar41->ArrayNum;
      if (iVar26 == pTVar41->ArrayMax) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1080,&pTVar41->AllocatorInstance,local_1c8);
      }
      pTVar41->ArrayNum = iVar26 + 1;
      dVar15 = *(double *)(pFVar47 + 8);
      pFVar16 = (pTVar41->AllocatorInstance).Data;
      lVar32 = (longlong)iVar26 * 0x80;
      *(double *)(pFVar16 + lVar32) = *(double *)pFVar47;
      *(double *)(pFVar16 + lVar32 + 8) = dVar15;
      dVar15 = *(double *)(pFVar47 + 0x18);
      *(double *)(pFVar16 + lVar32 + 0x10) = *(double *)(pFVar47 + 0x10);
      *(double *)(pFVar16 + lVar32 + 0x10 + 8) = dVar15;
      dVar15 = *(double *)(pFVar47 + 0x28);
      *(double *)(pFVar16 + lVar32 + 0x20) = *(double *)(pFVar47 + 0x20);
      *(double *)(pFVar16 + lVar32 + 0x20 + 8) = dVar15;
      dVar15 = *(double *)(pFVar47 + 0x38);
      *(double *)(pFVar16 + lVar32 + 0x30) = *(double *)(pFVar47 + 0x30);
      *(double *)(pFVar16 + lVar32 + 0x30 + 8) = dVar15;
      dVar15 = *(double *)(pFVar47 + 0x48);
      *(double *)(pFVar16 + lVar32 + 0x40) = *(double *)(pFVar47 + 0x40);
      *(double *)(pFVar16 + lVar32 + 0x40 + 8) = dVar15;
      dVar15 = *(double *)(pFVar47 + 0x58);
      *(double *)(pFVar16 + lVar32 + 0x50) = *(double *)(pFVar47 + 0x50);
      *(double *)(pFVar16 + lVar32 + 0x50 + 8) = dVar15;
      dVar15 = *(double *)(pFVar47 + 0x68);
      *(double *)(pFVar16 + lVar32 + 0x60) = *(double *)(pFVar47 + 0x60);
      *(double *)(pFVar16 + lVar32 + 0x60 + 8) = dVar15;
      dVar15 = *(double *)(pFVar47 + 0x78);
      *(double *)(pFVar16 + lVar32 + 0x70) = *(double *)(pFVar47 + 0x70);
      *(double *)(pFVar16 + lVar32 + 0x70 + 8) = dVar15;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar39 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar39);
      }
      local_250.ObjectIndex = 0;
      local_250.ObjectSerialNumber = 0;
      local_1c0 = pUVar39;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar39 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar39);
      }
      FWeakObjectPtr::operator=(&local_250,(FObjectPtr)&local_1c0);
      pFVar17 = (FWeakObjectPtr *)(pTVar43->AllocatorInstance).Data;
      if (((pFVar17 <= &local_250) && (&local_250 < pFVar17 + pTVar43->ArrayMax)) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar23)) {
        pcVar14 = (code *)swi(3);
        pFVar31 = (FGroupedSpriteSceneProxy *)(*pcVar14)();
        return pFVar31;
      }
      iVar26 = pTVar43->ArrayNum;
      if (iVar26 == pTVar43->ArrayMax) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar43->AllocatorInstance,local_1b8);
      }
      pTVar43->ArrayNum = iVar26 + 1;
      *(FWeakObjectPtr *)((pTVar43->AllocatorInstance).Data + (longlong)iVar26 * 8) = local_250;
    }
    pFVar47 = pFVar47 + 0x90;
    local_248 = local_248 + 4;
    local_25c = local_25c + 1;
    pFVar45 = pFVar45 + 0x90;
    uVar37 = local_258 & 0xffffffff;
  } while( true );
}

// DebugDrawCollision @ 14acf5390

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGroupedSpriteSceneProxy::DebugDrawCollision
          (FGroupedSpriteSceneProxy *this,FSceneView *param_1,int param_2,
          FMeshElementCollector *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UBodySetup *pUVar4;
  uint uVar5;
  undefined1 auStackY_128 [32];
  FLinearColor_u_0 local_e8;
  FMeshElementCollector *local_d8;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  uVar5 = 0;
  local_d8 = param_3;
  if (0 < (this->BodySetups).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->BodySetups).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar4 = (UBodySetup *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((this->BodySetups).AllocatorInstance.Data +
                                   (longlong)(int)uVar5 * 8));
      if (pUVar4 != (UBodySetup *)0x0) {
        uVar3 = 0;
        if ((int)uVar5 < (this->BodySetupTransforms).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        VectorMatrixMultiply
                  (&local_c8,
                   (TMatrix<double> *)
                   ((this->BodySetupTransforms).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x80
                   ),(TMatrix<double> *)&this->field_0x110);
        local_e8._s_0.R = FLinearColor::sRGBToLinearTable[0x9d];
        local_e8._s_0.G = FLinearColor::sRGBToLinearTable[0x95];
        local_e8._s_0.B = FLinearColor::sRGBToLinearTable[0xdf];
        local_e8._s_0.A = 1.0;
        FPaperRenderSceneProxy::DebugDrawBodySetup
                  ((FPaperRenderSceneProxy *)this,param_1,param_2,local_d8,pUVar4,&local_c8,
                   (FLinearColor *)&local_e8._s_0,param_4);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (this->BodySetups).ArrayNum);
  }
  return;
}

// FindOrAddSection @ 14acf78d0

FSpriteRenderSection * __thiscall
FGroupedSpriteSceneProxy::FindOrAddSection
          (FGroupedSpriteSceneProxy *this,FSpriteDrawCallRecord *param_1,UMaterialInterface *param_2
          )

{
  undefined1 *puVar1;
  UTexture *pUVar2;
  ForElementType<UTexture_*> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FSpriteRenderSection *pFVar8;
  ForElementType<UTexture_*> _Buf1;
  ForElementType<UTexture_*> _Buf2;
  uint uVar9;
  FSpriteRenderSection *pFVar10;
  longlong lVar11;
  
  puVar1 = &this->field_0x280;
  pFVar8 = (FSpriteRenderSection *)0x0;
  uVar9 = *(int *)&this->field_0x288 - 1;
  if (-1 < (int)uVar9) {
    lVar11 = (longlong)(int)uVar9 * 0x48;
    do {
      uVar6 = 0;
      if ((int)uVar9 < *(int *)&this->field_0x288) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FSpriteRenderSection *)(*pcVar4)();
        return pFVar8;
      }
      pFVar10 = (FSpriteRenderSection *)(*(longlong *)puVar1 + lVar11);
      if (pFVar10->Material == param_2) {
        pUVar2 = (param_1->BaseTexture).field0_0x0.DebugPtr;
        if (pUVar2 == (UTexture *)0x0) {
          bVar5 = pFVar10->BaseTexture == (UTexture *)0x0;
        }
        else {
          bVar5 = pUVar2 == pFVar10->BaseTexture;
        }
        if (bVar5) {
          iVar7 = (pFVar10->AdditionalTextures).ArrayNum;
          if (iVar7 == (param_1->AdditionalTextures).ArrayNum) {
            FVar3 = (param_1->AdditionalTextures).AllocatorInstance.SecondaryData;
            _Buf2 = (ForElementType<UTexture_*>)&param_1->AdditionalTextures;
            if (FVar3 != (ForElementType<UTexture_*>)0x0) {
              _Buf2 = FVar3;
            }
            FVar3 = (pFVar10->AdditionalTextures).AllocatorInstance.SecondaryData;
            _Buf1 = (ForElementType<UTexture_*>)&pFVar10->AdditionalTextures;
            if (FVar3 != (ForElementType<UTexture_*>)0x0) {
              _Buf1 = FVar3;
            }
            if (iVar7 == 0) {
              return pFVar10;
            }
            iVar7 = memcmp((void *)_Buf1,(void *)_Buf2,(longlong)iVar7 << 3);
            if (iVar7 == 0) {
              return pFVar10;
            }
          }
        }
      }
      lVar11 = lVar11 + -0x48;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  uVar9 = *(uint *)&this->field_0x288;
  if (uVar9 == *(uint *)&this->field_0x28c) {
    uVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)puVar1,(int *)&this->field_0x28c);
    *(uint *)&this->field_0x288 = uVar9;
  }
  *(uint *)&this->field_0x288 = uVar9 + 1;
  uVar6 = 0;
  if ((int)uVar9 < (int)(uVar9 + 1)) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSpriteRenderSection *)(*pcVar4)();
    return pFVar8;
  }
  pFVar10 = (FSpriteRenderSection *)(*(longlong *)puVar1 + (longlong)(int)uVar9 * 0x48);
  if (pFVar10 != (FSpriteRenderSection *)0x0) {
    (pFVar10->AdditionalTextures).AllocatorInstance.SecondaryData = (ForElementType<UTexture_*>)0x0;
    pFVar10->BaseTexture = (UTexture *)0x0;
    (pFVar10->AdditionalTextures).ArrayNum = 0;
    (pFVar10->AdditionalTextures).ArrayMax = 4;
    pFVar10->VertexOffset = -1;
    pFVar10->NumVertices = 0;
    pFVar8 = pFVar10;
  }
  pFVar8->Material = param_2;
  pFVar8->BaseTexture = (UTexture *)(param_1->BaseTexture).field0_0x0;
  TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&pFVar8->AdditionalTextures,&param_1->AdditionalTextures);
  pFVar8->VertexOffset = *(int *)&this->field_0x298;
  return pFVar8;
}

// GetTypeHash @ 14ad01d60

ulong64 __thiscall FGroupedSpriteSceneProxy::GetTypeHash(FGroupedSpriteSceneProxy *this)

{
  return 0x1552d0c98;
}

