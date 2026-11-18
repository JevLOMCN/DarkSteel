// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// FCameraActorTargetInfoArrayReader @ 14d655140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCameraActorTargetInfoArrayReader * __thiscall
UE::Cameras::FCameraActorTargetInfoArrayReader::FCameraActorTargetInfoArrayReader
          (FCameraActorTargetInfoArrayReader *this,
          TArrayView<FCameraActorTargetInfo_const_,int> *param_1,FCameraContextDataID param_2)

{
  TArrayView<FCameraActorTargetInfo_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (this->DataID).Value = param_2.Value;
  (this->Readers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Readers).ArrayNum = 0;
  (this->Readers).ArrayMax = 0;
  CacheTargetInfos(this,&local_18);
  return this;
}

// CacheTargetInfos @ 14d65d200

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
UE::Cameras::FCameraActorTargetInfoArrayReader::CacheTargetInfos
          (FCameraActorTargetInfoArrayReader *this,
          TArrayView<FCameraActorTargetInfo_const_,int> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  
  uVar6 = param_1->ArrayNum;
  piVar1 = &(this->Readers).ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < (int)uVar6) {
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x70,8,uVar6 - iVar5,(ForAnyElementType *)this,piVar1,
                       &(this->Readers).ArrayMax);
    DefaultConstructItems<UE::Cameras::FCameraActorTargetInfoReader,int>
              ((this->Readers).AllocatorInstance.Data + (longlong)iVar4 * 0x70,uVar6 - iVar5);
  }
  else {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if ((int)uVar6 < iVar5) {
      uVar8 = iVar5 - uVar6;
      if (((int)(uVar8 | uVar6) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar8 != 0) {
        pFVar7 = (this->Readers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x70;
        iVar5 = (*piVar1 - uVar6) - uVar8;
        if (iVar5 != 0) {
          memmove(pFVar7,pFVar7 + (longlong)(int)uVar8 * 0x70,(longlong)iVar5 * 0x70);
        }
        *piVar1 = *piVar1 - uVar8;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,8,(ForAnyElementType *)this,*piVar1,&(this->Readers).ArrayMax);
      }
    }
  }
  uVar8 = 0;
  if (0 < (int)uVar6) {
    do {
      uVar6 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = (this->Readers).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FCameraActorTargetInfoReader::CacheTargetInfo
                ((FCameraActorTargetInfoReader *)(pFVar7 + (longlong)(int)uVar8 * 0x70),
                 param_1->DataPtr + (int)uVar8);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < param_1->ArrayNum);
  }
  return;
}

// ComputeTargetInfos @ 14d65db70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraActorTargetInfoArrayReader::ComputeTargetInfos
          (FCameraActorTargetInfoArrayReader *this,FCameraContextDataTable *param_1,
          TArray<UE::Cameras::FCameraActorComputedTargetInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FCameraContextDataID FVar2;
  FCameraActorTargetInfo *pFVar3;
  USkeletalMeshComponent *pUVar4;
  AActor *pAVar5;
  USceneComponent *pUVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  UPackage *pUVar13;
  FScriptArray *pFVar14;
  FCameraActorTargetInfoReader *pFVar15;
  TTransform<double> *pTVar16;
  TVector<double>_u_0 *pTVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  uint uVar20;
  FCameraActorTargetInfoReader *this_00;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  float fVar23;
  undefined1 auStackY_188 [32];
  undefined1 local_148 [8];
  longlong local_140;
  FCameraActorTargetInfo *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FCameraContextDataTable *local_128;
  TArrayView<FCameraActorTargetInfo_const_,int> local_118;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_188;
  FVar2.Value = (this->DataID).Value;
  local_128 = param_1;
  if (FVar2.Value != 0xffffffff) {
    if (Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar13 = Z_Construct_UPackage__Script_GameplayCameras();
      Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCameraActorTargetInfo,(UObject *)pUVar13,
                           L"CameraActorTargetInfo");
    }
    pFVar14 = FCameraContextDataTable::TryGetArrayData
                        (param_1,FVar2,Struct,
                         (UObject *)
                         Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton,
                         true);
    if (pFVar14 != (FScriptArray *)0x0) {
      iVar12 = *(int *)&pFVar14->field_0x8;
      pFVar3 = *(FCameraActorTargetInfo **)pFVar14;
      if ((iVar12 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      uStack_12c = local_cc;
      local_118._12_4_ = local_cc;
      local_118.ArrayNum = iVar12;
      local_138 = pFVar3;
      iStack_130 = iVar12;
      local_118.DataPtr = pFVar3;
      CacheTargetInfos(this,&local_118);
    }
  }
  uVar22 = (this->Readers).ArrayNum;
  if (uVar22 != 0) {
    iVar12 = param_2->ArrayNum;
    piVar1 = &param_2->ArrayNum;
    if (iVar12 < (int)uVar22) {
      iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xa0,0x10,uVar22 - iVar12,&param_2->AllocatorInstance,piVar1,
                          &param_2->ArrayMax);
      DefaultConstructItems<UE::Cameras::FCameraActorComputedTargetInfo,int>
                ((param_2->AllocatorInstance).Data + (longlong)iVar11 * 0xa0,uVar22 - iVar12);
    }
    else {
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      if ((int)uVar22 < iVar12) {
        uVar20 = iVar12 - uVar22;
        if (((int)(uVar20 | uVar22) < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        if (uVar20 != 0) {
          pFVar18 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar22 * 0xa0;
          iVar12 = (*piVar1 - uVar22) - uVar20;
          if (iVar12 != 0) {
            memmove(pFVar18,pFVar18 + (longlong)(int)uVar20 * 0xa0,(longlong)iVar12 * 0xa0);
          }
          *piVar1 = *piVar1 - uVar20;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xa0,0x10,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
        }
      }
    }
    iVar12 = (this->Readers).ArrayNum;
    uVar22 = 0;
    if (0 < iVar12) {
      lVar19 = 0;
      local_140 = 0;
      local_138 = (FCameraActorTargetInfo *)0x0;
      do {
        pFVar3 = local_138;
        uVar20 = 0;
        if ((int)uVar22 < iVar12) {
          uVar20 = ~uVar22 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        this_00 = (FCameraActorTargetInfoReader *)
                  ((this->Readers).AllocatorInstance.Data + (longlong)pFVar3);
        uVar20 = 0;
        if ((int)uVar22 < *piVar1) {
          uVar20 = ~uVar22 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar18 = (param_2->AllocatorInstance).Data;
        FVar2.Value = (this_00->DataID).Value;
        if (FVar2.Value != 0xffffffff) {
          if (Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar13 = Z_Construct_UPackage__Script_GameplayCameras();
            Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FCameraActorTargetInfo,(UObject *)pUVar13
                                 ,L"CameraActorTargetInfo");
          }
          pFVar15 = (FCameraActorTargetInfoReader *)
                    FCameraContextDataTable::TryGetData
                              (local_128,FVar2,Struct,
                               (UObject *)
                               Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.
                               OuterSingleton,true);
          if (pFVar15 == (FCameraActorTargetInfoReader *)0x0) {
            pFVar15 = this_00;
          }
          FCameraActorTargetInfoReader::CacheTargetInfo(this_00,&pFVar15->DefaultTargetInfo);
        }
        pUVar4 = this_00->CachedSkeletalMeshComponent;
        if ((pUVar4 == (USkeletalMeshComponent *)0x0) || (this_00->CachedBoneName == (FName)0x0)) {
          pAVar5 = (this_00->CachedTargetInfo).Actor.field0_0x0.DebugPtr;
          if (pAVar5 != (AActor *)0x0) {
            pUVar6 = (pAVar5->RootComponent).field0_0x0.DebugPtr;
            if (pUVar6 == (USceneComponent *)0x0) {
              pTVar16 = &UE::Math::TTransform<double>::Identity;
            }
            else {
              pTVar16 = &pUVar6->ComponentToWorld;
            }
            dVar8 = (pTVar16->Rotation).XY.m128d_f64[1];
            *(double *)(pFVar18 + lVar19) = (pTVar16->Rotation).XY.m128d_f64[0];
            *(double *)(pFVar18 + lVar19 + 8) = dVar8;
            pTVar17 = &local_f0;
            dVar8 = (pTVar16->Rotation).ZW.m128d_f64[1];
            *(double *)(pFVar18 + lVar19 + 0x10) = (pTVar16->Rotation).ZW.m128d_f64[0];
            *(double *)(pFVar18 + lVar19 + 0x10 + 8) = dVar8;
            dVar8 = (pTVar16->Translation).XY.m128d_f64[1];
            *(double *)(pFVar18 + lVar19 + 0x20) = (pTVar16->Translation).XY.m128d_f64[0];
            *(double *)(pFVar18 + lVar19 + 0x20 + 8) = dVar8;
            dVar8 = (pTVar16->Translation).ZW.m128d_f64[1];
            *(double *)(pFVar18 + lVar19 + 0x30) = (pTVar16->Translation).ZW.m128d_f64[0];
            *(double *)(pFVar18 + lVar19 + 0x30 + 8) = dVar8;
            dVar8 = (pTVar16->Scale3D).XY.m128d_f64[1];
            *(double *)(pFVar18 + lVar19 + 0x40) = (pTVar16->Scale3D).XY.m128d_f64[0];
            *(double *)(pFVar18 + lVar19 + 0x40 + 8) = dVar8;
            dVar8 = (pTVar16->Scale3D).ZW.m128d_f64[1];
            *(double *)(pFVar18 + lVar19 + 0x50) = (pTVar16->Scale3D).ZW.m128d_f64[0];
            *(double *)(pFVar18 + lVar19 + 0x50 + 8) = dVar8;
            local_f0._s_0.X = (double)*(undefined8 *)(pFVar18 + lVar19 + 0x20);
            local_f0._s_0.Y = (double)*(undefined8 *)(pFVar18 + lVar19 + 0x20 + 8);
            local_f0._s_0.Z = (double)*(undefined8 *)(pFVar18 + lVar19 + 0x30);
            goto LAB_14d65dfdc;
          }
        }
        else {
          (**(code **)(pUVar4->_padding_ + 0x520))(pUVar4,&local_c8,this_00->CachedBoneName,0);
          pTVar17 = &local_108;
          *(undefined8 *)(pFVar18 + lVar19) = local_c8;
          *(undefined8 *)(pFVar18 + lVar19 + 8) = uStack_c0;
          *(undefined8 *)(pFVar18 + lVar19 + 0x10) = local_b8;
          *(undefined8 *)(pFVar18 + lVar19 + 0x10 + 8) = uStack_b0;
          *(undefined8 *)(pFVar18 + lVar19 + 0x20) = local_a8;
          *(undefined8 *)(pFVar18 + lVar19 + 0x20 + 8) = uStack_a0;
          *(undefined8 *)(pFVar18 + lVar19 + 0x30) = local_98;
          *(undefined8 *)(pFVar18 + lVar19 + 0x30 + 8) = uStack_90;
          *(undefined8 *)(pFVar18 + lVar19 + 0x40) = local_88;
          *(undefined8 *)(pFVar18 + lVar19 + 0x40 + 8) = uStack_80;
          *(undefined8 *)(pFVar18 + lVar19 + 0x50) = local_78;
          *(undefined8 *)(pFVar18 + lVar19 + 0x50 + 8) = uStack_70;
          local_108._s_0.X = (double)*(undefined8 *)(pFVar18 + lVar19 + 0x20);
          local_108._s_0.Y = (double)*(undefined8 *)(pFVar18 + lVar19 + 0x20 + 8);
          local_108._s_0.Z = (double)*(undefined8 *)(pFVar18 + lVar19 + 0x30);
LAB_14d65dfdc:
          FCameraActorTargetInfoReader::ComputeTargetBounds
                    (this_00,(TVector<double> *)&pTVar17->_s_0,
                     (TBoxSphereBounds<double,double> *)(pFVar18 + lVar19 + 0x60));
        }
        uVar22 = uVar22 + 1;
        local_138 = (FCameraActorTargetInfo *)((longlong)local_138 + 0x70);
        *(float *)(pFVar18 + lVar19 + 0x98) = (this_00->CachedTargetInfo).Weight;
        local_140 = local_140 + 1;
        iVar12 = (this->Readers).ArrayNum;
        lVar19 = lVar19 + 0xa0;
      } while ((int)uVar22 < iVar12);
    }
    iVar12 = *piVar1;
    pFVar18 = (param_2->AllocatorInstance).Data;
    fVar23 = 0.0;
    pFVar21 = pFVar18 + (longlong)iVar12 * 0xa0;
    while( true ) {
      if (*piVar1 != iVar12) {
        local_148[0] = 0;
        `TCheckedPointerIterator<UE::Cameras::FCameraActorComputedTargetInfo_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_148);
      }
      if (pFVar18 == pFVar21) break;
      fVar23 = fVar23 + *(float *)(pFVar18 + 0x98);
      pFVar18 = pFVar18 + 0xa0;
    }
    if (fVar23 != 0.0) {
      uVar22 = 0;
      if (0 < (this->Readers).ArrayNum) {
        lVar19 = 0;
        do {
          uVar20 = 0;
          if ((int)uVar22 < *piVar1) {
            uVar20 = ~uVar22 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          pFVar18 = (param_2->AllocatorInstance).Data;
          uVar22 = uVar22 + 1;
          *(float *)(pFVar18 + lVar19 + 0x98) = *(float *)(pFVar18 + lVar19 + 0x98) / fVar23;
          lVar19 = lVar19 + 0xa0;
        } while ((int)uVar22 < (this->Readers).ArrayNum);
      }
      return true;
    }
  }
  return false;
}

// Initialize @ 14d6624f0

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
UE::Cameras::FCameraActorTargetInfoArrayReader::Initialize
          (FCameraActorTargetInfoArrayReader *this,
          TArrayView<FCameraActorTargetInfo_const_,int> *param_1,FCameraContextDataID param_2)

{
  TArrayView<FCameraActorTargetInfo_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (this->DataID).Value = param_2.Value;
  CacheTargetInfos(this,&local_18);
  return;
}

