// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshUtilitiesCommon
// Functions: 2

// FChartFinder @ 144351810

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

FChartFinder * __thiscall
FLayoutUV::FChartFinder::FChartFinder
          (FChartFinder *this,IMeshView *param_1,ELightmapUVVersion param_2)

{
  this->MeshView = param_1;
  this->LayoutVersion = param_2;
  this->NextMeshChartId = 0;
  return this;
}

// FindCharts @ 1443553c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000144358f4e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FLayoutUV::FChartFinder::FindCharts
          (FChartFinder *this,FOverlappingCorners *param_1,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FMeshChart,TSizedDefaultAllocator<32>_> *param_4)

{
  float fVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar15;
  ulonglong uVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  float *pfVar23;
  float *pfVar24;
  longlong *plVar25;
  TVector2<float>_u_0 TVar26;
  uint uVar27;
  ulonglong uVar28;
  ForElementType<FSetElementId> FVar29;
  uint uVar30;
  float *pfVar31;
  int *piVar32;
  uint *puVar33;
  FScriptContainerElement *pFVar34;
  int iVar35;
  float fVar36;
  uint uVar37;
  uint uVar38;
  longlong lVar39;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar40;
  uint uVar41;
  float *pfVar42;
  float fVar43;
  longlong lVar44;
  FScriptContainerElement *pFVar45;
  float fVar46;
  uint uVar47;
  FOverlappingCorners *pFVar48;
  FScriptContainerElement *pFVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auStackY_478 [32];
  uint local_424;
  float local_408;
  float fStack_404;
  uint local_400;
  FIdentityFunctor local_3fc [4];
  float local_3f8;
  float local_3f4;
  undefined1 local_3e8 [12];
  int iStack_3dc;
  float local_3d8;
  float local_3d4;
  FScriptContainerElement *local_3d0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_3c8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_3c0;
  FScriptContainerElement *local_3b8;
  ForAnyElementType local_3b0;
  undefined8 local_3a8;
  FScriptContainerElement *local_3a0;
  undefined8 local_398;
  int *local_390;
  float local_388 [2];
  ulonglong local_380;
  longlong local_378;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_370;
  ulonglong local_360;
  FScriptContainerElement *local_358;
  int local_350;
  uint local_34c;
  undefined8 local_348;
  undefined8 local_340;
  float local_338;
  undefined8 local_334;
  float local_32c;
  undefined8 local_328;
  float local_320;
  undefined1 local_318 [8];
  undefined1 local_310 [8];
  float local_308 [4];
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  float local_2e0;
  float fStack_2dc;
  undefined1 local_2d8 [8];
  undefined1 local_2d0 [8];
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  double local_2a0;
  undefined1 local_298 [12];
  undefined1 local_28c [12];
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  LARGE_INTEGER local_218;
  int *local_210;
  uint *local_208;
  undefined1 local_200 [8];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  FString local_1d8;
  undefined1 local_1c8 [12];
  undefined1 local_1bc [12];
  undefined1 local_1b0 [12];
  undefined1 local_1a4 [12];
  undefined1 local_198 [12];
  undefined1 local_18c [12];
  undefined1 local_180 [12];
  undefined1 local_174 [12];
  undefined1 local_168 [12];
  undefined1 local_15c [20];
  TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
  local_148;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_478;
  local_3c8 = param_3;
  local_3c0 = param_2;
  local_398 = param_1;
  QueryPerformanceCounter((LARGE_INTEGER *)(local_28c + 4));
  local_2a0 = (double)(longlong)local_28c._4_8_ * FGenericPlatformTime::SecondsPerCycle;
  fVar19 = (float)(**(code **)((longlong)*this->MeshView + 8))();
  fVar36 = 0.0;
  local_3b0.Data = (FScriptContainerElement *)0x0;
  local_3a8 = 0;
  uVar41 = (uint)fVar19 / 3;
  local_3d4 = fVar19;
  if ((int)fVar19 < 1) {
    if ((int)fVar19 < 0) goto LAB_144358f57;
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)fVar19,&local_3b0,(int *)&local_3a8,(int *)((longlong)&local_3a8 + 4));
  }
  iVar20 = param_2->ArrayNum;
  piVar32 = &param_2->ArrayNum;
  if (iVar20 < (int)fVar19) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)fVar19 - iVar20,&param_2->AllocatorInstance,piVar32,&param_2->ArrayMax);
  }
  else {
    if ((int)fVar19 < 0) {
LAB_144358f57:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)fVar19);
    }
    if ((int)fVar19 < iVar20) {
      uVar30 = iVar20 - (int)fVar19;
      if (((int)(uVar30 | (uint)fVar19) < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      if (uVar30 != 0) {
        TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_2,(int)fVar19,uVar30);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&param_2->AllocatorInstance,*piVar32,&param_2->ArrayMax);
      }
    }
  }
  fVar60 = fVar19;
  if (fVar19 != 0.0) {
    do {
      uVar30 = 0;
      if ((int)fVar36 < (int)local_3a8) {
        uVar30 = ~(uint)fVar36 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      lVar44 = (longlong)(int)fVar36;
      *(undefined4 *)(local_3b0.Data + lVar44 * 4) = 0xffffffff;
      puVar22 = (undefined8 *)
                (**(code **)((longlong)*this->MeshView + 0x20))(this->MeshView,local_200);
      uVar3 = *puVar22;
      uVar30 = 0;
      if ((int)fVar36 < *piVar32) {
        uVar30 = ~(uint)fVar36 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      fVar36 = (float)((int)fVar36 + 1);
      *(undefined8 *)((param_2->AllocatorInstance).Data + lVar44 * 8) = uVar3;
      param_1 = local_398;
      fVar60 = local_3d4;
    } while ((uint)fVar36 < (uint)local_3d4);
  }
  local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_370.ArrayNum = 0;
  local_370.ArrayMax = 0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_370,uVar41,No);
  uVar30 = 0;
  if ((uint)fVar19 / 3 != 0) {
    do {
      uVar37 = 0;
      if ((int)uVar30 < local_370.ArrayNum) {
        uVar37 = ~uVar30 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      *(uint *)(local_370.AllocatorInstance.Data + (longlong)(int)uVar30 * 4) = uVar30;
      uVar30 = uVar30 + 1;
    } while (uVar30 < uVar41);
  }
  fVar36 = __real_3a800000;
  fVar19 = __real_37a7c5ac;
  uVar30 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar46 = 0.0;
  fVar52 = __real_3e800000;
  if (fVar60 != 0.0) {
    do {
      if ((param_1->bFinishedAdding == false) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("bFinishedAdding",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Public\\OverlappingCorners.h"
                              ,0x27,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      local_380 = CONCAT44(local_380._4_4_,~(uint)fVar46 >> 0x1f);
      uVar37 = 0;
      if ((int)fVar46 < (param_1->IndexBelongsTo).ArrayNum) {
        uVar37 = ~(uint)fVar46 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      uVar37 = *(uint *)((param_1->IndexBelongsTo).AllocatorInstance.Data +
                        (longlong)(int)fVar46 * 4);
      if (uVar37 == 0xffffffff) {
        local_3a0 = (FScriptContainerElement *)&param_1->EmptyArray;
      }
      else {
        uVar27 = 0;
        if ((int)uVar37 < (param_1->Arrays).ArrayNum) {
          uVar27 = ~uVar37 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          iVar20 = (*pcVar10)();
          return iVar20;
        }
        local_3a0 = (param_1->Arrays).AllocatorInstance.Data + (longlong)(int)uVar37 * 0x10;
      }
      local_3f4 = *(float *)(local_3a0 + 8);
      uVar28 = (ulonglong)(int)local_3f4;
      pfVar42 = *(float **)&local_3a0->field_0x0;
      pfVar31 = pfVar42 + uVar28;
      while( true ) {
        if (*(int *)(local_3a0 + 8) != (int)uVar28) {
          local_3fc[0] = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_3fc);
        }
        if (pfVar42 == pfVar31) break;
        fVar60 = *pfVar42;
        if ((uint)fVar46 < (uint)fVar60) {
          local_360 = CONCAT44(local_360._4_4_,(uint)fVar60 / 3);
          local_358 = (FScriptContainerElement *)CONCAT44(local_358._4_4_,(uint)fVar46 / 3);
          pfVar23 = (float *)(**(code **)((longlong)*this->MeshView + 0x10))
                                       (this->MeshView,local_1c8,fVar46);
          pfVar24 = (float *)(**(code **)((longlong)*this->MeshView + 0x10))
                                       (this->MeshView,local_1bc,fVar60);
          if (((fVar19 < (float)((uint)(*pfVar23 - *pfVar24) & uVar30)) ||
              (fVar19 < (float)((uint)(pfVar23[1] - pfVar24[1]) & uVar30))) ||
             (fVar19 < (float)((uint)(pfVar23[2] - pfVar24[2]) & uVar30))) goto LAB_144356128;
          iVar20 = ((uint)fVar60 / 3) * 3;
          local_3d0 = (FScriptContainerElement *)CONCAT44(local_3d0._4_4_,iVar20);
          uVar37 = ((int)fVar46 + 1U) % 3;
          uVar27 = ((int)fVar46 + 2U) % 3;
          iVar35 = ((uint)fVar46 / 3) * 3;
          local_378 = CONCAT44(local_378._4_4_,uVar27);
          local_3b8 = (FScriptContainerElement *)CONCAT44(local_3b8._4_4_,iVar35 + uVar27);
          local_3d8 = (float)(((int)fVar60 + 1U) % 3);
          local_3f8 = (float)(((int)fVar60 + 2U) % 3);
          fVar43 = (float)(iVar20 + (int)local_3f8);
          pfVar23 = (float *)(**(code **)((longlong)*this->MeshView + 0x10))
                                       (this->MeshView,local_1b0);
          pfVar24 = (float *)(**(code **)((longlong)*this->MeshView + 0x10))
                                       (this->MeshView,local_15c,(int)local_3d8 + iVar20);
          if (((fVar19 < (float)((uint)(*pfVar23 - *pfVar24) & uVar30)) ||
              (fVar19 < (float)((uint)(pfVar23[1] - pfVar24[1]) & uVar30))) ||
             (fVar19 < (float)((uint)(pfVar23[2] - pfVar24[2]) & uVar30))) {
            bVar17 = false;
          }
          else {
            bVar17 = true;
          }
          pfVar23 = (float *)(**(code **)((longlong)*this->MeshView + 0x10))
                                       (this->MeshView,local_1a4,iVar35 + uVar37);
          pfVar24 = (float *)(**(code **)((longlong)*this->MeshView + 0x10))
                                       (this->MeshView,local_198,fVar43);
          if (((fVar19 < (float)((uint)(*pfVar23 - *pfVar24) & uVar30)) ||
              (fVar19 < (float)((uint)(pfVar23[1] - pfVar24[1]) & uVar30))) ||
             (fVar19 < (float)((uint)(pfVar23[2] - pfVar24[2]) & uVar30))) {
            bVar18 = false;
          }
          else {
            bVar18 = true;
          }
          if ((!bVar17) && (!bVar18)) goto LAB_144356128;
          if (bVar17) {
            uVar37 = (uint)local_378;
          }
          uVar37 = iVar35 + uVar37;
          if (bVar17) {
            local_3f8 = local_3d8;
          }
          iVar20 = (uint)local_3d0 + (int)local_3f8;
          pfVar23 = (float *)(**(code **)((longlong)*this->MeshView + 0x20))
                                       (this->MeshView,local_1f8,fVar46);
          pfVar24 = (float *)(**(code **)((longlong)*this->MeshView + 0x20))
                                       (this->MeshView,local_1f0,fVar60);
          fVar59 = fVar36;
          if (1 < (int)this->LayoutVersion) {
            fVar59 = fVar19;
          }
          if ((fVar59 < (float)((uint)(*pfVar23 - *pfVar24) & uVar30)) ||
             (fVar59 < (float)((uint)(pfVar23[1] - pfVar24[1]) & uVar30))) {
LAB_144355b7b:
            bVar18 = false;
          }
          else {
            pfVar23 = (float *)(**(code **)((longlong)*this->MeshView + 0x20))
                                         (this->MeshView,local_1e8,uVar37);
            pfVar24 = (float *)(**(code **)((longlong)*this->MeshView + 0x20))
                                         (this->MeshView,local_1e0,iVar20);
            fVar59 = fVar36;
            if (1 < (int)this->LayoutVersion) {
              fVar59 = fVar19;
            }
            if ((fVar59 < (float)((uint)(*pfVar23 - *pfVar24) & uVar30)) ||
               (bVar18 = true, fVar59 < (float)((uint)(pfVar23[1] - pfVar24[1]) & uVar30)))
            goto LAB_144355b7b;
          }
          iVar20 = (uint)local_3d0;
          puVar22 = (undefined8 *)
                    (**(code **)((longlong)*this->MeshView + 0x20))
                              (this->MeshView,local_2d8,(ulonglong)local_3d0 & 0xffffffff);
          uVar3 = *puVar22;
          local_278 = uVar3;
          puVar22 = (undefined8 *)
                    (**(code **)((longlong)*this->MeshView + 0x20))
                              (this->MeshView,local_2d8,iVar20 + 1);
          uVar4 = *puVar22;
          local_270 = uVar4;
          puVar22 = (undefined8 *)
                    (**(code **)((longlong)*this->MeshView + 0x20))
                              (this->MeshView,local_2d8,(uint)local_3d0 + 2);
          fVar51 = local_270._4_4_ - local_278._4_4_;
          uVar5 = *puVar22;
          local_268._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
          fVar56 = local_268._4_4_ - local_278._4_4_;
          fVar59 = (float)uVar3;
          local_268 = uVar5;
          puVar22 = (undefined8 *)
                    (**(code **)((longlong)*this->MeshView + 0x20))(this->MeshView,local_2d0,iVar35)
          ;
          uVar3 = *puVar22;
          local_260 = uVar3;
          plVar25 = (longlong *)
                    (**(code **)((longlong)*this->MeshView + 0x20))
                              (this->MeshView,local_2d0,iVar35 + 1);
          local_390 = (int *)*plVar25;
          local_258 = local_390;
          puVar22 = (undefined8 *)
                    (**(code **)((longlong)*this->MeshView + 0x20))
                              (this->MeshView,local_2d0,iVar35 + 2);
          uVar6 = *puVar22;
          local_250 = uVar6;
          if (!bVar18) {
LAB_144355d15:
            pfVar23 = (float *)(**(code **)((longlong)*this->MeshView + 0x18))
                                         (this->MeshView,local_18c,fVar46);
            pfVar24 = (float *)(**(code **)((longlong)*this->MeshView + 0x18))
                                         (this->MeshView,local_180,fVar60);
            if ((((float)((uint)(*pfVar23 - *pfVar24) & uVar30) <= fVar19) &&
                ((float)((uint)(pfVar23[1] - pfVar24[1]) & uVar30) <= fVar19)) &&
               ((float)((uint)(pfVar23[2] - pfVar24[2]) & uVar30) <= fVar19)) {
              pfVar23 = (float *)(**(code **)((longlong)*this->MeshView + 0x18))
                                           (this->MeshView,local_174,uVar37);
              uVar27 = (int)local_3f8 + (uint)local_3d0;
              pfVar24 = (float *)(**(code **)((longlong)*this->MeshView + 0x18))
                                           (this->MeshView,local_168,uVar27);
              if ((((float)((uint)(*pfVar23 - *pfVar24) & uVar30) <= fVar19) &&
                  ((float)((uint)(pfVar23[1] - pfVar24[1]) & uVar30) <= fVar19)) &&
                 ((float)((uint)(pfVar23[2] - pfVar24[2]) & uVar30) <= fVar19)) {
                uVar21 = 0;
                if ((int)uVar37 < local_3c0->ArrayNum) {
                  uVar21 = ~uVar37 >> 0x1f;
                }
                if ((uVar21 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar10 = (code *)swi(3);
                  iVar20 = (*pcVar10)();
                  return iVar20;
                }
                pFVar34 = (local_3c0->AllocatorInstance).Data;
                iVar20 = 0;
                if ((int)fVar46 < local_3c0->ArrayNum) {
                  iVar20 = (int)local_380;
                }
                if ((iVar20 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar10 = (code *)swi(3);
                  iVar20 = (*pcVar10)();
                  return iVar20;
                }
                fVar59 = *(float *)(pFVar34 + (longlong)(int)uVar37 * 8);
                fVar51 = *(float *)(pFVar34 + (longlong)(int)uVar37 * 8 + 4);
                pFVar34 = (local_3c0->AllocatorInstance).Data;
                piVar32 = &local_3c0->ArrayNum;
                fVar56 = *(float *)(pFVar34 + (longlong)(int)fVar46 * 8);
                fVar63 = *(float *)(pFVar34 + (longlong)(int)fVar46 * 8 + 4);
                uVar37 = 0;
                if ((int)uVar27 < local_3c0->ArrayNum) {
                  uVar37 = ~uVar27 >> 0x1f;
                }
                if ((uVar37 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar10 = (code *)swi(3);
                  iVar20 = (*pcVar10)();
                  return iVar20;
                }
                pFVar34 = (local_3c0->AllocatorInstance).Data;
                uVar37 = 0;
                if ((int)fVar60 < *piVar32) {
                  uVar37 = ~(uint)fVar60 >> 0x1f;
                }
                if ((uVar37 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar10 = (code *)swi(3);
                  iVar20 = (*pcVar10)();
                  return iVar20;
                }
                pFVar49 = (local_3c0->AllocatorInstance).Data;
                fVar53 = fVar36;
                if (1 < (int)this->LayoutVersion) {
                  fVar53 = fVar19;
                }
                fVar52 = __real_3e800000;
                if (((float)((uint)((fVar59 - fVar56) -
                                   (*(float *)(pFVar34 + (longlong)(int)uVar27 * 8) -
                                   *(float *)(pFVar49 + (longlong)(int)fVar60 * 8))) & uVar30) <=
                     fVar53) &&
                   ((float)((uint)((fVar51 - fVar63) -
                                  (*(float *)(pFVar34 + (longlong)(int)uVar27 * 8 + 4) -
                                  *(float *)(pFVar49 + (longlong)(int)fVar60 * 8 + 4))) & uVar30) <=
                    fVar53)) {
                  fVar59 = fVar46;
                  if (bVar17) {
                    fVar43 = fVar60;
                    fVar59 = local_3b8._0_4_;
                  }
                  uVar37 = 0;
                  if ((int)fVar59 < (int)local_3a8) {
                    uVar37 = ~(uint)fVar59 >> 0x1f;
                  }
                  if (uVar37 == 0) {
                    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar17) {
                      pcVar10 = (code *)swi(3);
                      iVar20 = (*pcVar10)();
                      return iVar20;
                    }
                  }
                  fVar52 = __real_3e800000;
                  if (*(int *)(local_3b0.Data + (longlong)(int)fVar59 * 4) < 0) {
                    uVar37 = 0;
                    if ((int)fVar43 < (int)local_3a8) {
                      uVar37 = ~(uint)fVar43 >> 0x1f;
                    }
                    iVar20 = (int)local_3a8;
                    if (uVar37 == 0) {
                      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar17) {
                        pcVar10 = (code *)swi(3);
                        iVar20 = (*pcVar10)();
                        return iVar20;
                      }
                      iVar20 = (int)local_3a8;
                    }
                    fVar52 = __real_3e800000;
                    if (*(int *)(local_3b0.Data + (longlong)(int)fVar43 * 4) < 0) {
                      uVar37 = 0;
                      if ((int)fVar59 < iVar20) {
                        uVar37 = ~(uint)fVar59 >> 0x1f;
                      }
                      if ((uVar37 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar10 = (code *)swi(3);
                        iVar20 = (*pcVar10)();
                        return iVar20;
                      }
                      *(float *)(local_3b0.Data + (longlong)(int)fVar59 * 4) = fVar43;
                      uVar37 = 0;
                      if ((int)fVar43 < (int)local_3a8) {
                        uVar37 = ~(uint)fVar43 >> 0x1f;
                      }
                      if ((uVar37 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar10 = (code *)swi(3);
                        iVar20 = (*pcVar10)();
                        return iVar20;
                      }
                      *(float *)(local_3b0.Data + (longlong)(int)fVar43 * 4) = fVar59;
                      fVar52 = __real_3e800000;
                    }
                  }
                }
              }
            }
            goto LAB_144356128;
          }
          local_250._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
          fVar63 = (float)uVar3;
          if (((local_250._4_4_ - local_260._4_4_) * (local_390._0_4_ - fVar63) -
              (local_258._4_4_ - local_260._4_4_) * ((float)uVar6 - fVar63)) *
              (fVar56 * ((float)uVar4 - fVar59) - fVar51 * ((float)uVar5 - fVar59)) * fVar52 < 0.0)
          goto LAB_144355d15;
          FDisjointSet::Union((FDisjointSet *)&local_370,(uint)local_358,(uint)local_360);
          pfVar42 = pfVar42 + 1;
          uVar28 = (ulonglong)(uint)local_3f4;
        }
        else {
LAB_144356128:
          pfVar42 = pfVar42 + 1;
          uVar28 = (ulonglong)(uint)local_3f4;
        }
      }
      fVar46 = (float)((int)fVar46 + 1);
      param_1 = local_398;
    } while ((uint)fVar46 < (uint)local_3d4);
  }
  pTVar40 = local_3c8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(local_3c8,uVar41,Default);
  uVar37 = 0;
  if (uVar41 != 0) {
    do {
      FDisjointSet::Find((FDisjointSet *)&local_370,uVar37);
      uVar27 = 0;
      if ((int)uVar37 < pTVar40->ArrayNum) {
        uVar27 = ~uVar37 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      *(uint *)((pTVar40->AllocatorInstance).Data + (longlong)(int)uVar37 * 4) = uVar37;
      uVar37 = uVar37 + 1;
    } while (uVar37 < uVar41);
  }
  AlgoImpl::
  IntroSortInternal<unsigned_int,int,FIdentityFunctor,_FLayoutUV::FChartFinder::FindCharts_::__l2::FCompareTris>
            ((uint *)(pTVar40->AllocatorInstance).Data,pTVar40->ArrayNum,local_3fc[0],
             (FDisjointSet *)&local_370);
  uVar27 = __xmm_80000000800000008000000080000000;
  uVar37 = 0;
  local_148.Elements._0_8_ = 0;
  local_148.Elements._8_8_ = 0;
  local_148.Elements._32_8_ = 0;
  local_148.Elements._40_4_ = 0;
  local_148.Elements._44_4_ = 0x80;
  local_148.Elements._48_4_ = 0xffffffff;
  local_148.Elements._52_4_ = 0;
  local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_148.HashSize = 0;
  if (uVar41 != 0) {
    piVar32 = &param_4->ArrayMax;
    auVar58 = ___xmm_ffffffffffffffffffffffffffffffff;
    local_390 = piVar32;
    do {
      uVar21 = param_4->ArrayNum;
      if (uVar21 == *piVar32) {
        uVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x460,&param_4->AllocatorInstance,piVar32);
      }
      param_4->ArrayNum = uVar21 + 1;
      uVar47 = 0;
      if ((int)uVar21 < (int)(uVar21 + 1)) {
        uVar47 = ~uVar21 >> 0x1f;
      }
      local_34c = uVar21;
      if ((uVar47 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      pFVar34 = (param_4->AllocatorInstance).Data;
      local_2c8 = 0x7f7fffff;
      uStack_2c4 = 0x7f7fffff;
      iVar20 = this->NextMeshChartId;
      local_2c0 = 0xff7fffff;
      lVar44 = (longlong)(int)uVar21 * 0x60;
      uStack_2bc = 0xff7fffff;
      this->NextMeshChartId = iVar20 + 1;
      *(undefined8 *)(pFVar34 + lVar44 + 8) = 0x7f7fffff7f7fffff;
      *(int *)(pFVar34 + lVar44 + 0x5c) = iVar20;
      *(undefined8 *)(pFVar34 + lVar44 + 0x10) = 0xff7fffffff7fffff;
      *(undefined4 *)(pFVar34 + lVar44 + 0x18) = 0;
      ((TVector2<float>_u_0 *)(pFVar34 + lVar44 + 0x24))->_s_0 =
           (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      *(undefined8 *)(pFVar34 + lVar44 + 0x2c) = 0;
      *(undefined1 (*) [16])(pFVar34 + lVar44 + 0x4c) = auVar58;
      *(uint *)(pFVar34 + lVar44) = uVar37;
      uVar21 = 0;
      if ((int)uVar37 < pTVar40->ArrayNum) {
        uVar21 = ~uVar37 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      uVar21 = *(uint *)((pTVar40->AllocatorInstance).Data + (longlong)(int)uVar37 * 4);
      uVar47 = 0;
      if ((int)uVar21 < local_370.ArrayNum) {
        uVar47 = ~uVar21 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      local_350 = *(int *)(local_370.AllocatorInstance.Data + (longlong)(int)uVar21 * 4);
      local_210 = &local_350;
      local_208 = &local_34c;
      TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,int_const_&>_>
                (&local_148,(TPairInitializer<unsigned_int_const_&,int_const_&> *)local_28c,
                 (bool *)&local_210);
      for (; uVar37 < uVar41; uVar37 = uVar37 + 1) {
        uVar47 = ~uVar37 >> 0x1f;
        uVar21 = 0;
        if ((int)uVar37 < pTVar40->ArrayNum) {
          uVar21 = uVar47;
        }
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          iVar20 = (*pcVar10)();
          return iVar20;
        }
        lVar39 = (longlong)(int)uVar37;
        uVar21 = *(uint *)((local_3c8->AllocatorInstance).Data + lVar39 * 4);
        uVar38 = 0;
        if ((int)uVar21 < local_370.ArrayNum) {
          uVar38 = ~uVar21 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          iVar20 = (*pcVar10)();
          return iVar20;
        }
        pTVar40 = local_3c8;
        piVar32 = local_390;
        auVar58 = ___xmm_ffffffffffffffffffffffffffffffff;
        if (*(int *)(local_370.AllocatorInstance.Data + (longlong)(int)uVar21 * 4) != local_350)
        break;
        uVar21 = 0;
        if ((int)uVar37 < local_3c8->ArrayNum) {
          uVar21 = uVar47;
        }
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          iVar20 = (*pcVar10)();
          return iVar20;
        }
        uVar21 = *(int *)((pTVar40->AllocatorInstance).Data + lVar39 * 4) * 3;
        puVar22 = (undefined8 *)
                  (**(code **)((longlong)*this->MeshView + 0x10))(this->MeshView,local_298,uVar21);
        local_340 = *puVar22;
        local_338 = *(float *)(puVar22 + 1);
        uVar38 = 0;
        if ((int)uVar21 < local_3c0->ArrayNum) {
          uVar38 = ~uVar21 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          iVar20 = (*pcVar10)();
          return iVar20;
        }
        uVar3 = *(undefined8 *)((local_3c0->AllocatorInstance).Data + (longlong)(int)uVar21 * 8);
        local_2b8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        fVar36 = (float)uVar3;
        fVar19 = *(float *)(pFVar34 + lVar44 + 0x10);
        if (*(float *)(pFVar34 + lVar44 + 0x10) <= fVar36) {
          fVar19 = fVar36;
        }
        fVar60 = fVar36;
        if (*(float *)(pFVar34 + lVar44 + 8) <= fVar36) {
          fVar60 = *(float *)(pFVar34 + lVar44 + 8);
        }
        *(float *)(pFVar34 + lVar44 + 0x10) = fVar19;
        *(float *)(pFVar34 + lVar44 + 8) = fVar60;
        fVar19 = local_2b8._4_4_;
        if (*(float *)(pFVar34 + lVar44 + 0xc) <= local_2b8._4_4_) {
          fVar19 = *(float *)(pFVar34 + lVar44 + 0xc);
        }
        *(float *)(pFVar34 + lVar44 + 0xc) = fVar19;
        fVar19 = *(float *)(pFVar34 + lVar44 + 0x14);
        if (*(float *)(pFVar34 + lVar44 + 0x14) <= local_2b8._4_4_) {
          fVar19 = local_2b8._4_4_;
        }
        *(float *)(pFVar34 + lVar44 + 0x14) = fVar19;
        uVar21 = 0;
        if ((int)uVar37 < local_3c8->ArrayNum) {
          uVar21 = uVar47;
        }
        local_2b8 = uVar3;
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          iVar20 = (*pcVar10)();
          return iVar20;
        }
        local_3f8 = (float)(*(int *)((local_3c8->AllocatorInstance).Data + lVar39 * 4) * 3 + 1);
        puVar22 = (undefined8 *)
                  (**(code **)((longlong)*this->MeshView + 0x10))
                            (this->MeshView,local_298,local_3f8);
        local_334 = *puVar22;
        local_32c = *(float *)(puVar22 + 1);
        uVar21 = 0;
        if ((int)local_3f8 < local_3c0->ArrayNum) {
          uVar21 = ~(uint)local_3f8 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          iVar20 = (*pcVar10)();
          return iVar20;
        }
        uVar3 = *(undefined8 *)((local_3c0->AllocatorInstance).Data + (longlong)(int)local_3f8 * 8);
        local_2b0._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        fVar60 = local_2b0._4_4_;
        fVar52 = (float)uVar3;
        fVar19 = fVar52;
        if (*(float *)(pFVar34 + lVar44 + 8) <= fVar52) {
          fVar19 = *(float *)(pFVar34 + lVar44 + 8);
        }
        *(float *)(pFVar34 + lVar44 + 8) = fVar19;
        fVar19 = *(float *)(pFVar34 + lVar44 + 0xc);
        if (local_2b0._4_4_ <= *(float *)(pFVar34 + lVar44 + 0xc)) {
          fVar19 = local_2b0._4_4_;
        }
        *(float *)(pFVar34 + lVar44 + 0xc) = fVar19;
        fVar19 = *(float *)(pFVar34 + lVar44 + 0x10);
        if (*(float *)(pFVar34 + lVar44 + 0x10) <= fVar52) {
          fVar19 = fVar52;
        }
        *(float *)(pFVar34 + lVar44 + 0x10) = fVar19;
        fVar19 = *(float *)(pFVar34 + lVar44 + 0x14);
        if (*(float *)(pFVar34 + lVar44 + 0x14) <= local_2b0._4_4_) {
          fVar19 = local_2b0._4_4_;
        }
        *(float *)(pFVar34 + lVar44 + 0x14) = fVar19;
        uVar21 = 0;
        if ((int)uVar37 < local_3c8->ArrayNum) {
          uVar21 = uVar47;
        }
        local_2b0 = uVar3;
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          iVar20 = (*pcVar10)();
          return iVar20;
        }
        uVar21 = *(int *)((local_3c8->AllocatorInstance).Data + lVar39 * 4) * 3 + 2;
        puVar22 = (undefined8 *)
                  (**(code **)((longlong)*this->MeshView + 0x10))(this->MeshView,local_298);
        pTVar15 = local_3c0;
        local_320 = *(float *)(puVar22 + 1);
        local_328 = *puVar22;
        uVar47 = 0;
        if ((int)uVar21 < local_3c0->ArrayNum) {
          uVar47 = ~uVar21 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          iVar20 = (*pcVar10)();
          return iVar20;
        }
        local_3d4 = local_328._4_4_ - local_340._4_4_;
        fVar43 = (float)local_334 - (float)local_340;
        fVar59 = local_334._4_4_ - local_340._4_4_;
        fVar51 = local_32c - local_338;
        fVar56 = (float)local_328 - (float)local_340;
        uVar3 = *(undefined8 *)((pTVar15->AllocatorInstance).Data + (longlong)(int)uVar21 * 8);
        local_2a8 = uVar3;
        uVar3 = local_2a8;
        local_2a8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        fVar46 = (float)uVar3;
        fVar19 = fVar46;
        if (*(float *)(pFVar34 + lVar44 + 8) <= fVar46) {
          fVar19 = *(float *)(pFVar34 + lVar44 + 8);
        }
        *(float *)(pFVar34 + lVar44 + 8) = fVar19;
        fVar19 = local_2a8._4_4_;
        if (*(float *)(pFVar34 + lVar44 + 0xc) <= local_2a8._4_4_) {
          fVar19 = *(float *)(pFVar34 + lVar44 + 0xc);
        }
        *(float *)(pFVar34 + lVar44 + 0xc) = fVar19;
        fVar19 = *(float *)(pFVar34 + lVar44 + 0x10);
        if (*(float *)(pFVar34 + lVar44 + 0x10) <= fVar46) {
          fVar19 = fVar46;
        }
        *(float *)(pFVar34 + lVar44 + 0x10) = fVar19;
        fVar19 = *(float *)(pFVar34 + lVar44 + 0x14);
        if (*(float *)(pFVar34 + lVar44 + 0x14) <= local_2a8._4_4_) {
          fVar19 = local_2a8._4_4_;
        }
        local_3d8 = local_320 - local_338;
        *(float *)(pFVar34 + lVar44 + 0x14) = fVar19;
        local_3f4 = local_320 - local_32c;
        fVar63 = local_2a8._4_4_ - local_2b8._4_4_;
        local_2a8._4_4_ = local_2a8._4_4_ - fVar60;
        fVar60 = fVar60 - local_2b8._4_4_;
        fVar19 = fVar52 - fVar36;
        fVar36 = fVar46 - fVar36;
        *(float *)(pFVar34 + lVar44 + 0x18) =
             (float)((uint)(fVar63 * fVar19 - fVar60 * fVar36) & uVar30) * __real_3f000000 +
             *(float *)(pFVar34 + lVar44 + 0x18);
        if ((int)this->LayoutVersion < 10) {
          fVar36 = (float)((uint)fVar36 ^ uVar27);
          fVar46 = fVar43 * fVar63 - fVar56 * fVar60;
          fVar52 = fVar59 * fVar63 - local_3d4 * fVar60;
          fVar43 = fVar43 * fVar36 + fVar56 * fVar19;
          fVar60 = fVar51 * fVar63 - local_3d8 * fVar60;
          fVar59 = fVar59 * fVar36 + local_3d4 * fVar19;
          fVar19 = fVar51 * fVar36 + local_3d8 * fVar19;
          *(float *)(pFVar34 + lVar44 + 0x24) =
               SQRT(fVar52 * fVar52 + fVar46 * fVar46 + fVar60 * fVar60) +
               *(float *)(pFVar34 + lVar44 + 0x24);
          *(float *)(pFVar34 + lVar44 + 0x28) =
               SQRT(fVar59 * fVar59 + fVar43 * fVar43 + fVar19 * fVar19) +
               *(float *)(pFVar34 + lVar44 + 0x28);
        }
        else {
          *(float *)(pFVar34 + lVar44 + 0x2c) =
               SQRT(fVar36 * fVar36 + fVar63 * fVar63) + SQRT(fVar60 * fVar60 + fVar19 * fVar19) +
               SQRT((fVar46 - fVar52) * (fVar46 - fVar52) + local_2a8._4_4_ * local_2a8._4_4_) +
               *(float *)(pFVar34 + lVar44 + 0x2c);
          *(float *)(pFVar34 + lVar44 + 0x30) =
               SQRT(fVar56 * fVar56 + local_3d4 * local_3d4 + local_3d8 * local_3d8) +
               SQRT(fVar43 * fVar43 + fVar59 * fVar59 + fVar51 * fVar51) +
               SQRT(((float)local_328 - (float)local_334) * ((float)local_328 - (float)local_334) +
                    (local_328._4_4_ - local_334._4_4_) * (local_328._4_4_ - local_334._4_4_) +
                    local_3f4 * local_3f4) + *(float *)(pFVar34 + lVar44 + 0x30);
        }
        pTVar40 = local_3c8;
        piVar32 = local_390;
        auVar58 = ___xmm_ffffffffffffffffffffffffffffffff;
        local_2a8 = uVar3;
      }
      *(uint *)(pFVar34 + lVar44 + 4) = uVar37;
      fVar52 = __real_3e800000;
      fVar19 = __real_37a7c5ac;
      fVar36 = __real_3a800000;
    } while (uVar37 < uVar41);
  }
  fVar60 = __real_3f000000;
  local_424 = 0;
  iVar20 = param_4->ArrayNum;
  if (0 < iVar20) {
    local_3a0 = (FScriptContainerElement *)0x0;
    do {
      pFVar34 = local_3a0;
      local_358 = (FScriptContainerElement *)CONCAT44(local_358._4_4_,~local_424 >> 0x1f);
      uVar37 = 0;
      if ((int)local_424 < iVar20) {
        uVar37 = ~local_424 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      local_3d0 = (param_4->AllocatorInstance).Data;
      local_378 = (longlong)pFVar34 * 0x60;
      local_3f8 = *(float *)(local_3d0 + local_378);
      if ((uint)local_3f8 < (uint)*(float *)(local_3d0 + local_378 + 4)) {
        do {
          piVar32 = (int *)(longlong)(int)local_3f8;
          local_3d8 = 0.0;
          local_360 = CONCAT44(local_360._4_4_,~(uint)local_3f8 >> 0x1f);
          local_390 = piVar32;
          uVar37 = ~(uint)local_3f8 >> 0x1f;
          do {
            fVar46 = local_3d8;
            uVar27 = 0;
            if ((int)local_3f8 < pTVar40->ArrayNum) {
              uVar27 = uVar37;
            }
            if ((uVar27 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
            uVar21 = (int)fVar46 +
                     *(int *)((pTVar40->AllocatorInstance).Data + (longlong)piVar32 * 4) * 3;
            uVar27 = ~uVar21 >> 0x1f;
            uVar37 = 0;
            if ((int)uVar21 < (int)local_3a8) {
              uVar37 = uVar27;
            }
            if ((uVar37 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
            lVar44 = (longlong)(int)uVar21;
            if (-1 < *(int *)(local_3b0.Data + lVar44 * 4)) {
              uVar37 = 0;
              if ((int)uVar21 < (int)local_3a8) {
                uVar37 = uVar27;
              }
              if ((uVar37 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                iVar20 = (*pcVar10)();
                return iVar20;
              }
              uVar37 = *(uint *)(local_3b0.Data + lVar44 * 4);
              uVar47 = uVar21 / 3;
              local_380 = CONCAT44(local_380._4_4_,uVar47);
              uVar38 = uVar37 / 3;
              pTVar40 = local_3c8;
              if (uVar47 < uVar38) {
                local_3f4 = (float)(uVar47 * 3 + (uVar21 + 1) % 3);
                local_3b8 = (FScriptContainerElement *)
                            CONCAT44(local_3b8._4_4_,uVar38 * 3 + (uVar37 + 1) % 3);
                uVar47 = 0;
                if ((int)uVar38 < local_370.ArrayNum) {
                  uVar47 = ~uVar38 >> 0x1f;
                }
                if ((uVar47 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  iVar20 = (*pcVar10)();
                  return iVar20;
                }
                if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
                  FVar29 = (ForElementType<FSetElementId>)&local_148.Hash;
                  if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                    FVar29 = local_148.Hash.SecondaryData;
                  }
                  uVar47 = *(uint *)((longlong)FVar29 +
                                    (ulonglong)
                                    (local_148.HashSize - 1U &
                                    *(uint *)(local_370.AllocatorInstance.Data +
                                             (ulonglong)uVar38 * 4)) * 4);
                  while (uVar47 != 0xffffffff) {
                    puVar33 = (uint *)((longlong)(int)uVar47 * 0x10 + local_148.Elements._0_8_);
                    if (*puVar33 ==
                        *(uint *)(local_370.AllocatorInstance.Data + (ulonglong)uVar38 * 4)) {
                      if (puVar33 == (uint *)0x0) goto LAB_144356e61;
                      goto LAB_144356e83;
                    }
                    uVar47 = puVar33[2];
                  }
                }
                puVar33 = (uint *)0x0;
LAB_144356e61:
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Pair != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                    ,0x288,L"");
                if (bVar17) {
                  pcVar10 = (code *)swi(3);
                  iVar20 = (*pcVar10)();
                  return iVar20;
                }
LAB_144356e83:
                local_3d4 = (float)puVar33[1];
                uVar47 = 0;
                if ((int)uVar21 < local_3c0->ArrayNum) {
                  uVar47 = uVar27;
                }
                if ((uVar47 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  iVar20 = (*pcVar10)();
                  return iVar20;
                }
                pTVar15 = local_3c0;
                lVar39 = (longlong)(int)local_3f4;
                local_348 = *(undefined8 *)((local_3c0->AllocatorInstance).Data + lVar44 * 8);
                uVar27 = 0;
                if ((int)local_3f4 < local_3c0->ArrayNum) {
                  uVar27 = ~(uint)local_3f4 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  iVar20 = (*pcVar10)();
                  return iVar20;
                }
                local_398 = *(FOverlappingCorners **)
                             ((pTVar15->AllocatorInstance).Data + lVar39 * 8);
                uVar27 = 0;
                if ((int)uVar37 < pTVar15->ArrayNum) {
                  uVar27 = ~uVar37 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  iVar20 = (*pcVar10)();
                  return iVar20;
                }
                lVar44 = (longlong)(int)local_3b8._0_4_;
                local_280 = *(undefined8 *)
                             ((pTVar15->AllocatorInstance).Data + (longlong)(int)uVar37 * 8);
                uVar37 = 0;
                if ((int)local_3b8._0_4_ < pTVar15->ArrayNum) {
                  uVar37 = ~(uint)local_3b8._0_4_ >> 0x1f;
                }
                if ((uVar37 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  iVar20 = (*pcVar10)();
                  return iVar20;
                }
                uVar3 = *(undefined8 *)((pTVar15->AllocatorInstance).Data + lVar44 * 8);
                fVar46 = (float)local_348;
                fVar43 = local_348._4_4_;
                local_308[0] = (float)local_398 - (float)local_348;
                iVar20 = (int)local_380;
                local_308[1] = local_398._4_4_ - local_348._4_4_;
                puVar22 = (undefined8 *)
                          (**(code **)((longlong)*this->MeshView + 0x20))
                                    (this->MeshView,local_318,(int)local_380 * 3);
                uVar4 = *puVar22;
                local_248 = uVar4;
                puVar22 = (undefined8 *)
                          (**(code **)((longlong)*this->MeshView + 0x20))
                                    (this->MeshView,local_318,iVar20 * 3 + 1);
                uVar5 = *puVar22;
                local_240 = uVar5;
                puVar22 = (undefined8 *)
                          (**(code **)((longlong)*this->MeshView + 0x20))
                                    (this->MeshView,local_318,iVar20 * 3 + 2);
                uVar6 = *puVar22;
                local_238 = uVar6;
                puVar22 = (undefined8 *)
                          (**(code **)((longlong)*this->MeshView + 0x20))
                                    (this->MeshView,local_310,uVar38 * 3);
                uVar7 = *puVar22;
                local_230 = uVar7;
                puVar22 = (undefined8 *)
                          (**(code **)((longlong)*this->MeshView + 0x20))
                                    (this->MeshView,local_310,uVar38 * 3 + 1);
                uVar8 = *puVar22;
                local_228 = uVar8;
                puVar22 = (undefined8 *)
                          (**(code **)((longlong)*this->MeshView + 0x20))
                                    (this->MeshView,local_310,uVar38 * 3 + 2);
                fVar56 = local_240._4_4_ - local_248._4_4_;
                fVar54 = local_238._4_4_ - local_248._4_4_;
                uVar9 = *puVar22;
                fVar51 = (float)uVar4;
                local_220 = uVar9;
                uVar4 = local_220;
                local_220._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
                fVar53 = local_220._4_4_ - local_230._4_4_;
                fVar59 = (float)uVar7;
                fVar63 = local_228._4_4_ - local_230._4_4_;
                fStack_404 = (float)((ulonglong)uVar3 >> 0x20);
                local_3f4 = fVar43 - fStack_404;
                local_408 = (float)uVar3;
                iVar20 = 0;
                if ((int)local_424 < param_4->ArrayNum) {
                  iVar20 = (uint)local_358;
                }
                local_220 = uVar4;
                if ((iVar20 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  iVar20 = (*pcVar10)();
                  return iVar20;
                }
                fVar43 = local_3d4;
                local_3b8 = (param_4->AllocatorInstance).Data + (longlong)local_3a0 * 0x60;
                uVar37 = 0;
                if ((int)local_3d4 < param_4->ArrayNum) {
                  uVar37 = ~(uint)local_3d4 >> 0x1f;
                }
                if ((uVar37 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  iVar20 = (*pcVar10)();
                  return iVar20;
                }
                pFVar34 = (param_4->AllocatorInstance).Data;
                pFVar48 = (FOverlappingCorners *)0x0;
                do {
                  if (((0.0 <= (fVar54 * ((float)uVar5 - fVar51) - fVar56 * ((float)uVar6 - fVar51))
                               * (fVar53 * ((float)uVar8 - fVar59) -
                                 fVar63 * ((float)uVar9 - fVar59)) * fVar52) &&
                      (local_398 = pFVar48, *(int *)(local_3b8 + (longlong)pFVar48 * 4 + 0x4c) == -1
                      )) && (local_380 = (ulonglong)pFVar48 ^ 1,
                            *(int *)(pFVar34 +
                                    ((ulonglong)pFVar48 ^ 1) * 4 +
                                    (longlong)(int)fVar43 * 0x60 + 0x4c) == -1)) {
                    uVar28 = (ulonglong)pFVar48 >> 1;
                    uVar37 = (uint)uVar28;
                    if ((1 < uVar37) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValidIndex(Index)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                            ,0x4b0,L""), bVar17)) {
                      pcVar10 = (code *)swi(3);
                      iVar20 = (*pcVar10)();
                      return iVar20;
                    }
                    lVar44 = local_378;
                    pFVar49 = local_3d0;
                    fVar50 = local_308[uVar28];
                    fVar55 = fVar36;
                    if (1 < (int)this->LayoutVersion) {
                      fVar55 = fVar19;
                    }
                    if (((ulonglong)pFVar48 & 1) == 0) {
                      if ((1 < uVar37) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValidIndex(Index)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                              ,0x4b0,L""), bVar17)) {
                        pcVar10 = (code *)swi(3);
                        iVar20 = (*pcVar10)();
                        return iVar20;
                      }
                      fVar57 = *(float *)(pFVar49 + uVar28 * 4 + lVar44 + 8);
                    }
                    else {
                      if ((1 < uVar37) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValidIndex(Index)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                              ,0x4b0,L""), bVar17)) {
                        pcVar10 = (code *)swi(3);
                        iVar20 = (*pcVar10)();
                        return iVar20;
                      }
                      fVar57 = *(float *)(pFVar49 + uVar28 * 4 + lVar44 + 0x10);
                    }
                    if ((1 < uVar37) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValidIndex(Index)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                            ,0x4b0,L""), bVar17)) {
                      pcVar10 = (code *)swi(3);
                      iVar20 = (*pcVar10)();
                      return iVar20;
                    }
                    lVar44 = local_378;
                    pFVar49 = local_3d0;
                    fVar61 = *(float *)((longlong)&local_348 + uVar28 * 4);
                    fVar62 = fVar36;
                    if (1 < (int)this->LayoutVersion) {
                      fVar62 = fVar19;
                    }
                    if (((ulonglong)pFVar48 & 1) == 0) {
                      if ((1 < uVar37) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValidIndex(Index)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                              ,0x4b0,L""), bVar17)) {
                        pcVar10 = (code *)swi(3);
                        iVar20 = (*pcVar10)();
                        return iVar20;
                      }
                      fVar1 = *(float *)(pFVar49 + uVar28 * 4 + lVar44 + 0x10);
                    }
                    else {
                      if ((1 < uVar37) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValidIndex(Index)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                              ,0x4b0,L""), bVar17)) {
                        pcVar10 = (code *)swi(3);
                        iVar20 = (*pcVar10)();
                        return iVar20;
                      }
                      fVar1 = *(float *)(pFVar49 + uVar28 * 4 + lVar44 + 8);
                    }
                    if ((1 < uVar37) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValidIndex(Index)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                            ,0x4b0,L""), bVar17)) {
                      pcVar10 = (code *)swi(3);
                      iVar20 = (*pcVar10)();
                      return iVar20;
                    }
                    fVar11 = fVar36;
                    if (1 < (int)this->LayoutVersion) {
                      fVar11 = fVar19;
                    }
                    if ((((float)((uint)fVar50 & uVar30) < fVar55) &&
                        ((float)((uint)(fVar61 - fVar57) & uVar30) < fVar62)) &&
                       ((float)((uint)(*(float *)((longlong)&local_280 + uVar28 * 4) - fVar1) &
                               uVar30) < fVar11)) {
                      fVar55 = (*(float *)(local_3b8 + 0x10) - *(float *)(local_3b8 + 8)) * fVar60;
                      fVar57 = (*(float *)(local_3b8 + 0x14) - *(float *)(local_3b8 + 0xc)) * fVar60
                      ;
                      fVar61 = (*(float *)(pFVar34 + (longlong)(int)fVar43 * 0x60 + 0x10) -
                               *(float *)(pFVar34 + (longlong)(int)fVar43 * 0x60 + 8)) * fVar60;
                      local_308[2] = (*(float *)(local_3b8 + 8) + *(float *)(local_3b8 + 0x10)) *
                                     fVar60 - ((*(float *)(pFVar34 +
                                                          (longlong)(int)fVar43 * 0x60 + 8) +
                                               *(float *)(pFVar34 +
                                                         (longlong)(int)fVar43 * 0x60 + 0x10)) *
                                               fVar60 + (fVar46 - local_408));
                      fVar62 = (*(float *)(pFVar34 + (longlong)(int)fVar43 * 0x60 + 0x14) -
                               *(float *)(pFVar34 + (longlong)(int)fVar43 * 0x60 + 0xc)) * fVar60;
                      local_308[3] = (*(float *)(local_3b8 + 0xc) + *(float *)(local_3b8 + 0x14)) *
                                     fVar60 - ((*(float *)(pFVar34 +
                                                          (longlong)(int)fVar43 * 0x60 + 0xc) +
                                               *(float *)(pFVar34 +
                                                         (longlong)(int)fVar43 * 0x60 + 0x14)) *
                                               fVar60 + local_3f4);
                      local_2f8 = fVar55 - fVar61;
                      local_2f4 = fVar57 - fVar62;
                      fVar50 = __real_bf800000;
                      if (((ulonglong)pFVar48 & 1) != 0) {
                        fVar50 = __real_3f800000;
                      }
                      uVar27 = uVar37 ^ 1;
                      local_2f0 = local_308[2] * fVar50 + fVar61 + fVar55;
                      local_2ec = local_308[3] * fVar50 + fVar62 + fVar57;
                      if ((1 < uVar27) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValidIndex(Index)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                              ,0x4b0,L""), bVar17)) {
                        pcVar10 = (code *)swi(3);
                        iVar20 = (*pcVar10)();
                        return iVar20;
                      }
                      fVar50 = local_308[(ulonglong)uVar27 + 2];
                      fVar55 = fVar36;
                      if (1 < (int)this->LayoutVersion) {
                        fVar55 = fVar19;
                      }
                      if ((1 < uVar27) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValidIndex(Index)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                              ,0x4b0,L""), bVar17)) {
                        pcVar10 = (code *)swi(3);
                        iVar20 = (*pcVar10)();
                        return iVar20;
                      }
                      fVar57 = local_308[(ulonglong)uVar27 + 4];
                      fVar61 = fVar36;
                      if (1 < (int)this->LayoutVersion) {
                        fVar61 = fVar19;
                      }
                      if ((1 < uVar37) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValidIndex(Index)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                              ,0x4b0,L""), bVar17)) {
                        pcVar10 = (code *)swi(3);
                        iVar20 = (*pcVar10)();
                        return iVar20;
                      }
                      fVar62 = fVar36;
                      if (1 < (int)this->LayoutVersion) {
                        fVar62 = fVar19;
                      }
                      if ((((float)((uint)fVar50 & uVar30) < fVar55) &&
                          ((float)((uint)fVar57 & uVar30) < fVar61)) &&
                         ((float)((uint)local_308[uVar28 + 6] & uVar30) < fVar62)) {
                        *(float *)(local_3b8 + (longlong)local_398 * 4 + 0x4c) = local_3d4;
                        *(uint *)(pFVar34 + local_380 * 4 + (longlong)(int)fVar43 * 0x60 + 0x4c) =
                             local_424;
                        piVar32 = local_390;
                        pTVar40 = local_3c8;
                        break;
                      }
                    }
                  }
                  uVar37 = (int)pFVar48 + 1;
                  pFVar48 = (FOverlappingCorners *)(ulonglong)uVar37;
                  piVar32 = local_390;
                  pTVar40 = local_3c8;
                } while (uVar37 < 4);
              }
            }
            local_3d8 = (float)((int)local_3d8 + 1);
            fVar52 = __real_3e800000;
            uVar37 = (uint)local_360;
          } while ((int)local_3d8 < 3);
          local_3f8 = (float)((int)local_3f8 + 1);
        } while ((uint)local_3f8 < (uint)*(float *)(local_3d0 + local_378 + 4));
      }
      local_424 = local_424 + 1;
      local_3a0 = (FScriptContainerElement *)((longlong)local_3a0 + 1);
      iVar20 = param_4->ArrayNum;
      fVar52 = __real_3e800000;
    } while ((int)local_424 < iVar20);
  }
  fVar19 = __real_3f800000;
  _local_3e8 = ZEXT816(0);
  if (uVar41 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar41,(ForAnyElementType *)local_3e8,0,(int *)(local_3e8 + 0xc));
  }
  iVar20 = param_4->ArrayNum;
  uVar41 = 0;
  if (0 < iVar20) {
    lVar44 = 0;
    do {
      uVar30 = 0;
      if ((int)uVar41 < iVar20) {
        uVar30 = ~uVar41 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      uVar30 = *(uint *)((param_4->AllocatorInstance).Data + lVar44 + 0x50);
      do {
        uVar37 = uVar30;
        if (uVar37 == 0xffffffff) goto LAB_14435792e;
        uVar30 = 0;
        if ((int)uVar37 < param_4->ArrayNum) {
          uVar30 = ~uVar37 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          iVar20 = (*pcVar10)();
          return iVar20;
        }
        uVar30 = *(uint *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar37 * 0x60 + 0x50);
      } while (uVar30 != uVar41);
      uVar30 = 0;
      if ((int)uVar41 < param_4->ArrayNum) {
        uVar30 = ~uVar41 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      *(undefined4 *)((param_4->AllocatorInstance).Data + lVar44 + 0x4c) = 0xffffffff;
      uVar30 = 0;
      if ((int)uVar37 < param_4->ArrayNum) {
        uVar30 = ~uVar37 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar37 * 0x60 + 0x50) =
           0xffffffff;
LAB_14435792e:
      iVar20 = param_4->ArrayNum;
      uVar41 = uVar41 + 1;
      lVar44 = lVar44 + 0x60;
    } while ((int)uVar41 < iVar20);
  }
  uVar41 = 0;
  if (0 < iVar20) {
    lVar44 = 0;
    do {
      uVar30 = 0;
      if ((int)uVar41 < iVar20) {
        uVar30 = ~uVar41 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      uVar30 = *(uint *)((param_4->AllocatorInstance).Data + lVar44 + 0x58);
      do {
        uVar37 = uVar30;
        if (uVar37 == 0xffffffff) goto LAB_144357ade;
        uVar30 = 0;
        if ((int)uVar37 < param_4->ArrayNum) {
          uVar30 = ~uVar37 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          iVar20 = (*pcVar10)();
          return iVar20;
        }
        uVar30 = *(uint *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar37 * 0x60 + 0x58);
      } while (uVar30 != uVar41);
      uVar30 = 0;
      if ((int)uVar41 < param_4->ArrayNum) {
        uVar30 = ~uVar41 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      *(undefined4 *)((param_4->AllocatorInstance).Data + lVar44 + 0x54) = 0xffffffff;
      uVar30 = 0;
      if ((int)uVar37 < param_4->ArrayNum) {
        uVar30 = ~uVar37 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar37 * 0x60 + 0x58) =
           0xffffffff;
LAB_144357ade:
      iVar20 = param_4->ArrayNum;
      uVar41 = uVar41 + 1;
      lVar44 = lVar44 + 0x60;
    } while ((int)uVar41 < iVar20);
  }
  uVar41 = 0;
  local_3d0 = (FScriptContainerElement *)((ulonglong)local_3d0 & 0xffffffff00000000);
  do {
    iVar20 = param_4->ArrayNum;
    uVar30 = 0;
    if (0 < iVar20) {
      lVar44 = 0;
      do {
        uVar41 = 0;
        if ((int)uVar30 < iVar20) {
          uVar41 = ~uVar30 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          iVar20 = (*pcVar10)();
          return iVar20;
        }
        pFVar34 = (param_4->AllocatorInstance).Data;
        if (*(int *)(pFVar34 + lVar44) != *(int *)(pFVar34 + lVar44 + 4)) {
          uVar41 = *(uint *)(pFVar34 + lVar44 + 0x4c);
          if (uVar41 != 0xffffffff) {
            uVar37 = 0;
            if ((int)uVar41 < param_4->ArrayNum) {
              uVar37 = ~uVar41 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
            pFVar49 = (param_4->AllocatorInstance).Data;
            lVar39 = (longlong)(int)uVar41 * 0x60;
            if ((*(uint *)(pFVar49 + lVar39 + 0x50) != uVar30) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ChartB.Join[ Side ^ 1 ] == i",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                                    ,0x1e8,L""), bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
            if ((*(int *)(pFVar49 + lVar39) == *(int *)(pFVar49 + lVar39 + 4)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ChartB.FirstTri != ChartB.LastTri",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                                    ,0x1e9,L""), bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
          }
          uVar41 = *(uint *)(pFVar34 + lVar44 + 0x50);
          if (uVar41 != 0xffffffff) {
            uVar37 = 0;
            if ((int)uVar41 < param_4->ArrayNum) {
              uVar37 = ~uVar41 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
            pFVar49 = (param_4->AllocatorInstance).Data;
            lVar39 = (longlong)(int)uVar41 * 0x60;
            if ((*(uint *)(pFVar49 + lVar39 + 0x4c) != uVar30) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ChartB.Join[ Side ^ 1 ] == i",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                                    ,0x1e8,L""), bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
            if ((*(int *)(pFVar49 + lVar39) == *(int *)(pFVar49 + lVar39 + 4)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ChartB.FirstTri != ChartB.LastTri",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                                    ,0x1e9,L""), bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
          }
          uVar41 = *(uint *)(pFVar34 + lVar44 + 0x54);
          if (uVar41 != 0xffffffff) {
            uVar37 = 0;
            if ((int)uVar41 < param_4->ArrayNum) {
              uVar37 = ~uVar41 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
            pFVar49 = (param_4->AllocatorInstance).Data;
            lVar39 = (longlong)(int)uVar41 * 0x60;
            if ((*(uint *)(pFVar49 + lVar39 + 0x58) != uVar30) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ChartB.Join[ Side ^ 1 ] == i",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                                    ,0x1e8,L""), bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
            if ((*(int *)(pFVar49 + lVar39) == *(int *)(pFVar49 + lVar39 + 4)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ChartB.FirstTri != ChartB.LastTri",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                                    ,0x1e9,L""), bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
          }
          uVar41 = *(uint *)(pFVar34 + lVar44 + 0x58);
          if (uVar41 != 0xffffffff) {
            uVar37 = 0;
            if ((int)uVar41 < param_4->ArrayNum) {
              uVar37 = ~uVar41 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
            pFVar34 = (param_4->AllocatorInstance).Data;
            lVar39 = (longlong)(int)uVar41 * 0x60;
            if ((*(uint *)(pFVar34 + lVar39 + 0x54) != uVar30) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ChartB.Join[ Side ^ 1 ] == i",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                                    ,0x1e8,L""), bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
            if ((*(int *)(pFVar34 + lVar39) == *(int *)(pFVar34 + lVar39 + 4)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ChartB.FirstTri != ChartB.LastTri",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                                    ,0x1e9,L""), bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
          }
        }
        uVar30 = uVar30 + 1;
        lVar44 = lVar44 + 0x60;
        iVar20 = param_4->ArrayNum;
      } while ((int)uVar30 < iVar20);
      uVar41 = (uint)local_3d0;
    }
    iVar35 = 0;
    uVar30 = 0;
    if (0 < iVar20) {
      lVar44 = 0;
      do {
        uVar37 = 0;
        if ((int)uVar30 < iVar20) {
          uVar37 = ~uVar30 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          iVar20 = (*pcVar10)();
          return iVar20;
        }
        pFVar49 = (param_4->AllocatorInstance).Data;
        uVar30 = uVar30 + 1;
        iVar20 = param_4->ArrayNum;
        lVar39 = lVar44 + 4;
        pFVar34 = pFVar49 + lVar44;
        lVar44 = lVar44 + 0x60;
        iVar35 = iVar35 + (*(int *)(pFVar49 + lVar39) - *(int *)pFVar34);
      } while ((int)uVar30 < iVar20);
    }
    pTVar40 = local_3c8;
    if ((iVar35 != local_3c8->ArrayNum) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumTris == SortedTris.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                            ,0x1f5,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      iVar20 = (*pcVar10)();
      return iVar20;
    }
    iVar35 = 0;
    uVar30 = 0;
    iVar20 = param_4->ArrayNum;
    if (0 < iVar20) {
      lVar44 = 0;
      do {
        uVar37 = 0;
        if ((int)uVar30 < iVar20) {
          uVar37 = ~uVar30 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          iVar20 = (*pcVar10)();
          return iVar20;
        }
        pFVar34 = (param_4->AllocatorInstance).Data + lVar44;
        if ((*(int *)pFVar34 != *(int *)(pFVar34 + 4)) &&
           (*(int *)(pFVar34 + ((ulonglong)(uVar41 * 2) + 0x13) * 4) == -1)) {
          uVar28 = (ulonglong)(uVar41 * 2) ^ 1;
          iVar35 = iVar35 + (*(int *)(pFVar34 + 4) - *(int *)pFVar34);
          uVar37 = *(uint *)(pFVar34 + (uVar28 + 0x13) * 4);
          while (uVar37 != 0xffffffff) {
            uVar27 = 0;
            if ((int)uVar37 < param_4->ArrayNum) {
              uVar27 = ~uVar37 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
            pFVar34 = (param_4->AllocatorInstance).Data + (longlong)(int)uVar37 * 0x60;
            iVar35 = iVar35 + (*(int *)(pFVar34 + 4) - *(int *)pFVar34);
            uVar37 = *(uint *)(pFVar34 + (uVar28 + 0x13) * 4);
          }
        }
        iVar20 = param_4->ArrayNum;
        uVar30 = uVar30 + 1;
        lVar44 = lVar44 + 0x60;
        pTVar40 = local_3c8;
      } while ((int)uVar30 < iVar20);
    }
    if ((iVar35 != pTVar40->ArrayNum) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumTris == SortedTris.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                            ,0x215,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      iVar20 = (*pcVar10)();
      return iVar20;
    }
    uVar30 = 0;
    local_424 = 0;
    local_400 = 0;
    iVar20 = param_4->ArrayNum;
    if (0 < iVar20) {
      local_390 = (int *)(longlong)(int)uVar41;
      local_380 = 0;
      do {
        uVar28 = local_380;
        uVar41 = 0;
        if ((int)local_400 < iVar20) {
          uVar41 = ~local_400 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          iVar20 = (*pcVar10)();
          return iVar20;
        }
        pFVar34 = (param_4->AllocatorInstance).Data + uVar28;
        local_358 = pFVar34;
        fVar36 = *(float *)pFVar34;
        fVar60 = *(float *)(pFVar34 + 4);
        if (fVar36 != fVar60) {
          uVar30 = (uint)local_3d0 * 2;
          uVar41 = *(uint *)(pFVar34 + ((ulonglong)uVar30 + 0x13) * 4);
          if (uVar41 == 0xffffffff) {
            local_3f4 = (float)local_3e8._8_4_;
            if ((uint)fVar36 < (uint)fVar60) {
              do {
                uVar41 = 0;
                if ((int)fVar36 < pTVar40->ArrayNum) {
                  uVar41 = ~(uint)fVar36 >> 0x1f;
                }
                if ((uVar41 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  iVar20 = (*pcVar10)();
                  return iVar20;
                }
                pFVar49 = (pTVar40->AllocatorInstance).Data + (longlong)(int)fVar36 * 4;
                if ((((ulonglong)local_3e8._0_8_ <= pFVar49) &&
                    (pFVar49 < (FScriptContainerElement *)
                               (local_3e8._0_8_ + (longlong)iStack_3dc * 4))) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  iVar20 = (*pcVar10)();
                  return iVar20;
                }
                if (local_3e8._8_4_ == iStack_3dc) {
                  iVar20 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)local_3e8,(int *)(local_3e8 + 0xc))
                  ;
                  local_3e8._8_4_ = iVar20;
                }
                lVar44 = (longlong)(int)local_3e8._8_4_;
                fVar36 = (float)((int)fVar36 + 1);
                local_3e8._8_4_ = local_3e8._8_4_ + 1;
                *(undefined4 *)(local_3e8._0_8_ + lVar44 * 4) = *(undefined4 *)pFVar49;
                fVar60 = *(float *)(pFVar34 + 4);
              } while ((uint)fVar36 < (uint)fVar60);
            }
            local_424 = local_424 + ((int)fVar60 - (int)*(float *)pFVar34);
            uVar28 = (ulonglong)uVar30 ^ 1;
            uVar41 = *(uint *)(pFVar34 + (uVar28 + 0x13) * 4);
            if (uVar41 != 0xffffffff) {
              pFVar49 = (FScriptContainerElement *)((ulonglong)uVar30 ^ 2);
              local_360 = (ulonglong)uVar30 ^ 3;
              local_3b8 = pFVar49;
              do {
                uVar30 = 0;
                if ((int)uVar41 < param_4->ArrayNum) {
                  uVar30 = ~uVar41 >> 0x1f;
                }
                if ((uVar30 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  iVar20 = (*pcVar10)();
                  return iVar20;
                }
                pFVar45 = (param_4->AllocatorInstance).Data + (longlong)(int)uVar41 * 0x60;
                if ((*(uint *)pFVar45 == *(uint *)(pFVar45 + 4)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ChartB.FirstTri != ChartB.LastTri",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                                        ,0x238,L""), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  iVar20 = (*pcVar10)();
                  return iVar20;
                }
                pTVar40 = local_3c8;
                uVar41 = *(uint *)pFVar45;
                uVar30 = *(uint *)(pFVar45 + 4);
                local_388[0] = *(float *)(pFVar34 + 8) - *(float *)(pFVar45 + 8);
                local_388[1] = *(float *)(pFVar34 + 0xc) - *(float *)(pFVar45 + 0xc);
                local_388[(longlong)local_390] =
                     (*(float *)(pFVar34 + (longlong)(local_390 + 1) * 4) -
                     *(float *)(pFVar34 + (longlong)((longlong)local_390 + 2) * 4)) +
                     local_388[(longlong)local_390];
                if (uVar41 < uVar30) {
                  do {
                    uVar37 = ~uVar41 >> 0x1f;
                    uVar30 = 0;
                    if ((int)uVar41 < pTVar40->ArrayNum) {
                      uVar30 = uVar37;
                    }
                    if ((uVar30 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar10 = (code *)swi(3);
                      iVar20 = (*pcVar10)();
                      return iVar20;
                    }
                    pFVar34 = (pTVar40->AllocatorInstance).Data + (longlong)(int)uVar41 * 4;
                    if ((((ulonglong)local_3e8._0_8_ <= pFVar34) &&
                        (pFVar34 < (FScriptContainerElement *)
                                   (local_3e8._0_8_ + (longlong)iStack_3dc * 4))) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar17)) {
                      pcVar10 = (code *)swi(3);
                      iVar20 = (*pcVar10)();
                      return iVar20;
                    }
                    if (local_3e8._8_4_ == iStack_3dc) {
                      iVar20 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,(ForAnyElementType *)local_3e8,
                                          (int *)(local_3e8 + 0xc));
                      local_3e8._8_4_ = iVar20;
                    }
                    lVar44 = (longlong)(int)local_3e8._8_4_;
                    local_3e8._8_4_ = local_3e8._8_4_ + 1;
                    *(undefined4 *)(local_3e8._0_8_ + lVar44 * 4) = *(undefined4 *)pFVar34;
                    uVar30 = 0;
                    if ((int)uVar41 < pTVar40->ArrayNum) {
                      uVar30 = uVar37;
                    }
                    if ((uVar30 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar10 = (code *)swi(3);
                      iVar20 = (*pcVar10)();
                      return iVar20;
                    }
                    pTVar15 = local_3c0;
                    uVar30 = *(int *)((pTVar40->AllocatorInstance).Data + (longlong)(int)uVar41 * 4)
                             * 3;
                    uVar27 = 0;
                    if ((int)uVar30 < local_3c0->ArrayNum) {
                      uVar27 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar27 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar10 = (code *)swi(3);
                      iVar20 = (*pcVar10)();
                      return iVar20;
                    }
                    pFVar34 = (pTVar15->AllocatorInstance).Data;
                    lVar44 = (longlong)(int)uVar30;
                    fVar36 = *(float *)(pFVar34 + lVar44 * 8 + 4);
                    *(float *)(pFVar34 + lVar44 * 8) =
                         local_388[0] + *(float *)(pFVar34 + lVar44 * 8);
                    *(float *)(pFVar34 + lVar44 * 8 + 4) = local_388[1] + fVar36;
                    uVar30 = 0;
                    if ((int)uVar41 < pTVar40->ArrayNum) {
                      uVar30 = uVar37;
                    }
                    if ((uVar30 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar10 = (code *)swi(3);
                      iVar20 = (*pcVar10)();
                      return iVar20;
                    }
                    uVar30 = *(int *)((pTVar40->AllocatorInstance).Data + (longlong)(int)uVar41 * 4)
                             * 3 + 1;
                    uVar27 = 0;
                    if ((int)uVar30 < pTVar15->ArrayNum) {
                      uVar27 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar27 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar10 = (code *)swi(3);
                      iVar20 = (*pcVar10)();
                      return iVar20;
                    }
                    pFVar34 = (pTVar15->AllocatorInstance).Data;
                    lVar44 = (longlong)(int)uVar30;
                    *(float *)(pFVar34 + lVar44 * 8) =
                         local_388[0] + *(float *)(pFVar34 + lVar44 * 8);
                    *(float *)(pFVar34 + lVar44 * 8 + 4) =
                         local_388[1] + *(float *)(pFVar34 + lVar44 * 8 + 4);
                    uVar30 = 0;
                    if ((int)uVar41 < pTVar40->ArrayNum) {
                      uVar30 = uVar37;
                    }
                    if ((uVar30 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar10 = (code *)swi(3);
                      iVar20 = (*pcVar10)();
                      return iVar20;
                    }
                    uVar30 = *(int *)((pTVar40->AllocatorInstance).Data + (longlong)(int)uVar41 * 4)
                             * 3 + 2;
                    uVar37 = 0;
                    if ((int)uVar30 < pTVar15->ArrayNum) {
                      uVar37 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar37 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar10 = (code *)swi(3);
                      iVar20 = (*pcVar10)();
                      return iVar20;
                    }
                    pFVar34 = (pTVar15->AllocatorInstance).Data;
                    uVar41 = uVar41 + 1;
                    lVar44 = (longlong)(int)uVar30;
                    *(float *)(pFVar34 + lVar44 * 8) =
                         local_388[0] + *(float *)(pFVar34 + lVar44 * 8);
                    *(float *)(pFVar34 + lVar44 * 8 + 4) =
                         local_388[1] + *(float *)(pFVar34 + lVar44 * 8 + 4);
                    uVar30 = *(uint *)(pFVar45 + 4);
                    pFVar34 = local_358;
                    pFVar49 = local_3b8;
                  } while (uVar41 < uVar30);
                }
                local_424 = local_424 + (uVar30 - *(uint *)pFVar45);
                *(undefined4 *)(pFVar34 + (uVar28 + 0x13) * 4) =
                     *(undefined4 *)(pFVar45 + (uVar28 + 0x13) * 4);
                *(float *)(pFVar34 + (longlong)(local_390 + 1) * 4) =
                     (*(float *)(pFVar45 + (longlong)(local_390 + 1) * 4) -
                     *(float *)(pFVar45 + (longlong)((longlong)local_390 + 2) * 4)) +
                     *(float *)(pFVar34 + (longlong)(local_390 + 1) * 4);
                if (3 < (int)this->LayoutVersion) {
                  uVar41 = (uint)local_3d0 ^ 1;
                  if ((1 < uVar41) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValidIndex(Index)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                          ,0x4b0,L""), bVar17)) {
                    pcVar10 = (code *)swi(3);
                    iVar20 = (*pcVar10)();
                    return iVar20;
                  }
                  lVar44 = (longlong)(int)uVar41;
                  local_3a0 = pFVar34 + (lVar44 + 2) * 4;
                  if ((1 < uVar41) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValidIndex(Index)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                          ,0x4b0,L""), bVar17)) {
                    pcVar10 = (code *)swi(3);
                    iVar20 = (*pcVar10)();
                    return iVar20;
                  }
                  pFVar48 = (FOverlappingCorners *)(pFVar45 + (lVar44 + 4) * 4);
                  local_398 = pFVar48;
                  if ((1 < uVar41) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValidIndex(Index)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                          ,0x4b0,L""), bVar17)) {
                    pcVar10 = (code *)swi(3);
                    iVar20 = (*pcVar10)();
                    return iVar20;
                  }
                  fVar36 = (*(float *)&(pFVar48->IndexBelongsTo).AllocatorInstance.Data -
                           *(float *)(pFVar45 + (lVar44 + 2) * 4)) +
                           *(float *)(pFVar34 + (lVar44 + 2) * 4);
                  if ((1 < uVar41) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValidIndex(Index)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                          ,0x4b0,L""), bVar17)) {
                    pcVar10 = (code *)swi(3);
                    iVar20 = (*pcVar10)();
                    return iVar20;
                  }
                  fVar60 = *(float *)(pFVar34 + (lVar44 + 4) * 4);
                  if (*(float *)(pFVar34 + (lVar44 + 4) * 4) <= fVar36) {
                    fVar60 = fVar36;
                  }
                  if ((1 < uVar41) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValidIndex(Index)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                          ,0x4b0,L""), bVar17)) {
                    pcVar10 = (code *)swi(3);
                    iVar20 = (*pcVar10)();
                    return iVar20;
                  }
                  *(float *)(pFVar34 + (lVar44 + 4) * 4) = fVar60;
                  pFVar49 = local_3b8;
                }
                *(float *)(pFVar34 + 0x2c) = *(float *)(pFVar34 + 0x2c) + *(float *)(pFVar45 + 0x2c)
                ;
                *(float *)(pFVar34 + 0x30) = *(float *)(pFVar34 + 0x30) + *(float *)(pFVar45 + 0x30)
                ;
                *(float *)(pFVar34 + 0x24) = *(float *)(pFVar45 + 0x24) + *(float *)(pFVar34 + 0x24)
                ;
                *(float *)(pFVar34 + 0x28) = *(float *)(pFVar45 + 0x28) + *(float *)(pFVar34 + 0x28)
                ;
                *(float *)(pFVar34 + 0x18) = *(float *)(pFVar34 + 0x18) + *(float *)(pFVar45 + 0x18)
                ;
                *(undefined8 *)pFVar45 = 0;
                *(undefined8 *)(pFVar45 + 0x2c) = 0;
                *(uint *)(pFVar45 + 0x18) = 0;
                uVar41 = *(uint *)(pFVar45 + (longlong)(pFVar49 + 0x13) * 4);
                if (uVar41 != 0xffffffff) {
                  uVar30 = 0;
                  if ((int)uVar41 < param_4->ArrayNum) {
                    uVar30 = ~uVar41 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar10 = (code *)swi(3);
                    iVar20 = (*pcVar10)();
                    return iVar20;
                  }
                  *(undefined4 *)
                   ((param_4->AllocatorInstance).Data +
                   (((ulonglong)pFVar49 ^ 1) + (longlong)(int)uVar41 * 0x18) * 4 + 0x4c) =
                       0xffffffff;
                  *(undefined4 *)(pFVar45 + (longlong)(pFVar49 + 0x13) * 4) = 0xffffffff;
                }
                uVar16 = local_360;
                uVar41 = *(uint *)(pFVar45 + (local_360 + 0x13) * 4);
                if (uVar41 != 0xffffffff) {
                  uVar30 = 0;
                  if ((int)uVar41 < param_4->ArrayNum) {
                    uVar30 = ~uVar41 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar10 = (code *)swi(3);
                    iVar20 = (*pcVar10)();
                    return iVar20;
                  }
                  *(undefined4 *)
                   ((param_4->AllocatorInstance).Data +
                   ((uVar16 ^ 1) + (longlong)(int)uVar41 * 0x18) * 4 + 0x4c) = 0xffffffff;
                  *(undefined4 *)(pFVar45 + (uVar16 + 0x13) * 4) = 0xffffffff;
                }
                uVar41 = *(uint *)(pFVar34 + (uVar28 + 0x13) * 4);
                pTVar40 = local_3c8;
              } while (uVar41 != 0xffffffff);
            }
            *(float *)pFVar34 = local_3f4;
            *(undefined4 *)(pFVar34 + 4) = local_3e8._8_4_;
            uVar30 = local_424;
          }
          else {
            uVar37 = 0;
            if ((int)uVar41 < param_4->ArrayNum) {
              uVar37 = ~uVar41 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
            pFVar34 = (param_4->AllocatorInstance).Data + (longlong)(int)uVar41 * 0x60;
            if ((*(uint *)(pFVar34 + (((ulonglong)uVar30 ^ 1) + 0x13) * 4) != local_400) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ChartB.Join[ Side ^ 1 ] == i",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                                    ,0x264,L""), bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
            uVar30 = local_424;
            if ((*(int *)pFVar34 == *(int *)(pFVar34 + 4)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ChartB.FirstTri != ChartB.LastTri",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                                    ,0x265,L""), bVar17)) {
              pcVar10 = (code *)swi(3);
              iVar20 = (*pcVar10)();
              return iVar20;
            }
          }
        }
        local_400 = local_400 + 1;
        iVar20 = param_4->ArrayNum;
        local_380 = local_380 + 0x60;
      } while ((int)local_400 < iVar20);
      uVar41 = (uint)local_3d0;
    }
    if ((uVar30 != pTVar40->ArrayNum) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumTris == SortedTris.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                            ,0x268,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      iVar20 = (*pcVar10)();
      return iVar20;
    }
    if ((pTVar40->ArrayNum != local_3e8._8_4_) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("SortedTris.Num() == JoinedSortedTris.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                            ,0x26a,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      iVar20 = (*pcVar10)();
      return iVar20;
    }
    TVar2 = *pTVar40;
    uVar12 = local_3e8._0_4_;
    uVar13 = local_3e8._4_4_;
    uVar14 = local_3e8._8_4_;
    iVar20 = iStack_3dc;
    iStack_3dc = TVar2.ArrayMax;
    local_3e8._0_8_ = TVar2.AllocatorInstance.Data;
    local_3e8._8_4_ = 0;
    *(undefined4 *)&(pTVar40->AllocatorInstance).Data = uVar12;
    *(undefined4 *)((longlong)&(pTVar40->AllocatorInstance).Data + 4) = uVar13;
    pTVar40->ArrayNum = uVar14;
    pTVar40->ArrayMax = iVar20;
    if ((TVar2._8_8_ < 0) && (iStack_3dc != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)local_3e8,0,(int *)(local_3e8 + 0xc));
    }
    uVar41 = uVar41 + 1;
    local_3d0 = (FScriptContainerElement *)CONCAT44(local_3d0._4_4_,uVar41);
  } while (uVar41 < 2);
  iVar20 = param_4->ArrayNum;
  uVar41 = 0;
  if (0 < iVar20) {
    lVar44 = 0;
    do {
      uVar37 = ~uVar41 >> 0x1f;
      uVar30 = 0;
      if ((int)uVar41 < iVar20) {
        uVar30 = uVar37;
      }
      if ((uVar30 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      pFVar34 = (param_4->AllocatorInstance).Data;
      uVar30 = 0;
      if ((int)uVar41 < param_4->ArrayNum) {
        uVar30 = uVar37;
      }
      if ((uVar30 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      if (*(int *)((param_4->AllocatorInstance).Data + lVar44) == *(int *)(pFVar34 + lVar44 + 4)) {
        uVar30 = 0;
        if ((int)uVar41 < param_4->ArrayNum) {
          uVar30 = uVar37;
        }
        if ((uVar30 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          iVar20 = (*pcVar10)();
          return iVar20;
        }
        pFVar34 = (param_4->AllocatorInstance).Data;
        iVar20 = ~uVar41 + param_4->ArrayNum;
        if (1 < iVar20) {
          iVar20 = 1;
        }
        if (iVar20 != 0) {
          memmove(pFVar34 + (longlong)(int)uVar41 * 0x60,
                  pFVar34 + (longlong)(param_4->ArrayNum - iVar20) * 0x60,(longlong)iVar20 * 0x60);
        }
        param_4->ArrayNum = param_4->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,4,&param_4->AllocatorInstance,param_4->ArrayNum,&param_4->ArrayMax);
      }
      else {
        uVar41 = uVar41 + 1;
        lVar44 = lVar44 + 0x60;
      }
      iVar20 = param_4->ArrayNum;
    } while ((int)uVar41 < iVar20);
  }
  fVar60 = __real_38d1b717;
  fVar36 = __real_322bcc77;
  uVar41 = 0;
  if (0 < iVar20) {
    lVar44 = 0;
    do {
      uVar30 = 0;
      if ((int)uVar41 < iVar20) {
        uVar30 = ~uVar41 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar20 = (*pcVar10)();
        return iVar20;
      }
      pFVar34 = (param_4->AllocatorInstance).Data;
      if ((int)this->LayoutVersion < 10) {
        fVar52 = *(float *)(pFVar34 + lVar44 + 0x18);
        if ((int)this->LayoutVersion < 2) {
          TVar26 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          if (fVar52 <= fVar60) goto LAB_144358e26;
        }
        else if (fVar52 <= fVar36) {
          fVar52 = fVar36;
        }
        *(float *)(pFVar34 + lVar44 + 0x24) =
             (fVar19 / fVar52) * *(float *)(pFVar34 + lVar44 + 0x24);
        *(float *)(pFVar34 + lVar44 + 0x28) =
             (fVar19 / fVar52) * *(float *)(pFVar34 + lVar44 + 0x28);
      }
      else {
        if (fVar36 <= *(float *)(pFVar34 + lVar44 + 0x2c)) {
          local_2e0 = *(float *)(pFVar34 + lVar44 + 0x30) / *(float *)(pFVar34 + lVar44 + 0x2c);
          TVar26._s_0.Y = local_2e0;
          TVar26._s_0.X = local_2e0;
          fStack_2dc = local_2e0;
        }
        else {
          local_2e8 = 0x3f800000;
          uStack_2e4 = 0x3f800000;
          TVar26 = (TVector2<float>_u_0)0x3f8000003f800000;
        }
LAB_144358e26:
        *(TVector2<float>_u_0 *)(pFVar34 + lVar44 + 0x24) = TVar26;
      }
      iVar20 = param_4->ArrayNum;
      uVar41 = uVar41 + 1;
      lVar44 = lVar44 + 0x60;
    } while ((int)uVar41 < iVar20);
  }
  QueryPerformanceCounter(&local_218);
  if (6 < (byte)LogLayoutUV._0_1_) {
    FGenericPlatformTime::PrettyTime
              (&local_1d8,
               (double)local_218.QuadPart * FGenericPlatformTime::SecondsPerCycle - local_2a0);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogLayoutUV);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  iVar20 = param_4->ArrayNum;
  if ((FScriptContainerElement *)local_3e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_3e8._0_8_);
  }
  local_148.HashSize = 0;
  if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_148.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_148.Elements);
  if (local_370.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.AllocatorInstance.Data);
  }
  if (local_3b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.Data);
  }
  return iVar20;
}

