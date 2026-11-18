// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// FCameraActorAttachmentInfoArrayReader @ 14d5fb680

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCameraActorAttachmentInfoArrayReader * __thiscall
UE::Cameras::FCameraActorAttachmentInfoArrayReader::FCameraActorAttachmentInfoArrayReader
          (FCameraActorAttachmentInfoArrayReader *this,
          TArrayView<FCameraActorAttachmentInfo_const_,int> *param_1,FCameraContextDataID param_2)

{
  TArrayView<FCameraActorAttachmentInfo_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (this->DataID).Value = param_2.Value;
  (this->Readers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Readers).ArrayNum = 0;
  (this->Readers).ArrayMax = 0;
  CacheAttachmentInfos(this,&local_18);
  return this;
}

// CacheAttachmentInfos @ 14d60d540

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
UE::Cameras::FCameraActorAttachmentInfoArrayReader::CacheAttachmentInfos
          (FCameraActorAttachmentInfoArrayReader *this,
          TArrayView<FCameraActorAttachmentInfo_const_,int> *param_1)

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
                      (0x58,8,uVar6 - iVar5,(ForAnyElementType *)this,piVar1,
                       &(this->Readers).ArrayMax);
    DefaultConstructItems<UE::Cameras::FCameraActorAttachmentInfoReader,int>
              ((this->Readers).AllocatorInstance.Data + (longlong)iVar4 * 0x58,uVar6 - iVar5);
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
        pFVar7 = (this->Readers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x58;
        iVar5 = (*piVar1 - uVar6) - uVar8;
        if (iVar5 != 0) {
          memmove(pFVar7,pFVar7 + (longlong)(int)uVar8 * 0x58,(longlong)iVar5 * 0x58);
        }
        *piVar1 = *piVar1 - uVar8;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,(ForAnyElementType *)this,*piVar1,&(this->Readers).ArrayMax);
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
      FCameraActorAttachmentInfoReader::CacheAttachmentInfo
                ((FCameraActorAttachmentInfoReader *)(pFVar7 + (longlong)(int)uVar8 * 0x58),
                 param_1->DataPtr + (int)uVar8);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < param_1->ArrayNum);
  }
  return;
}

// GetAttachmentTransform @ 14d6187f0

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
UE::Cameras::FCameraActorAttachmentInfoArrayReader::GetAttachmentTransform
          (FCameraActorAttachmentInfoArrayReader *this,FCameraContextDataTable *param_1,
          TTransform<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  FCameraContextDataID FVar2;
  FCameraActorAttachmentInfo *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  FCameraContextDataTable *pFVar15;
  bool bVar16;
  undefined1 uVar17;
  int iVar18;
  UPackage *pUVar19;
  FScriptArray *pFVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  TTransform<double> *pTVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  FCameraActorAttachmentInfoReader *this_00;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  float fVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  uint uVar44;
  uint uVar45;
  uint uVar46;
  undefined1 auVar43 [16];
  double dVar47;
  double dVar49;
  undefined4 uVar51;
  undefined1 auVar48 [16];
  double dVar50;
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined4 uVar57;
  float fVar58;
  undefined1 local_res8 [8];
  FCameraContextDataTable *local_res10;
  TTransform<double> *local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_e8;
  int local_e0 [2];
  TArrayView<FCameraActorAttachmentInfo_const_,int> local_d8;
  undefined4 local_bc;
  
  FVar2.Value = (this->DataID).Value;
  local_res10 = param_1;
  local_res18 = param_2;
  if (FVar2.Value != 0xffffffff) {
    if (Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar19 = Z_Construct_UPackage__Script_GameplayCameras();
      Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCameraActorAttachmentInfo,(UObject *)pUVar19,
                           L"CameraActorAttachmentInfo");
    }
    pFVar20 = FCameraContextDataTable::TryGetArrayData
                        (param_1,FVar2,Struct,
                         (UObject *)
                         Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton
                         ,true);
    if (pFVar20 != (FScriptArray *)0x0) {
      iVar18 = *(int *)&pFVar20->field_0x8;
      pFVar3 = *(FCameraActorAttachmentInfo **)pFVar20;
      if ((iVar18 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar16)) {
        pcVar4 = (code *)swi(3);
        uVar17 = (*pcVar4)();
        return (bool)uVar17;
      }
      local_d8._12_4_ = local_bc;
      local_d8.ArrayNum = iVar18;
      local_d8.DataPtr = pFVar3;
      CacheAttachmentInfos(this,&local_d8);
    }
  }
  uVar21 = (this->Readers).ArrayNum;
  if (uVar21 == 0) {
    return false;
  }
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  if ((int)uVar21 < 1) {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
  }
  else {
    iVar18 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x70,0x10,uVar21,&local_e8,local_e0,local_e0 + 1);
    DefaultConstructItems<_UE::Cameras::FCameraActorAttachmentInfoArrayReader::GetAttachmentTransform_::__l2::FComputedAttachmentInfo,int>
              (local_e8.Data + (longlong)iVar18 * 0x70,uVar21);
  }
  pFVar15 = local_res10;
  iVar18 = (this->Readers).ArrayNum;
  uVar21 = 0;
  if (0 < iVar18) {
    lVar25 = 0;
    lVar26 = 0;
    do {
      uVar44 = 0;
      if ((int)uVar21 < iVar18) {
        uVar44 = ~uVar21 >> 0x1f;
      }
      if ((uVar44 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar4 = (code *)swi(3);
        uVar17 = (*pcVar4)();
        return (bool)uVar17;
      }
      this_00 = (FCameraActorAttachmentInfoReader *)
                ((this->Readers).AllocatorInstance.Data + lVar26);
      uVar44 = 0;
      if ((int)uVar21 < local_e0[0]) {
        uVar44 = ~uVar21 >> 0x1f;
      }
      if ((uVar44 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar4 = (code *)swi(3);
        uVar17 = (*pcVar4)();
        return (bool)uVar17;
      }
      pTVar23 = (TTransform<double> *)(local_e8.Data + lVar25);
      bVar16 = FCameraActorAttachmentInfoReader::GetAttachmentTransform(this_00,pFVar15,pTVar23);
      if (bVar16) {
        fVar58 = (this_00->CachedAttachmentInfo).Weight;
      }
      else {
        fVar58 = 0.0;
      }
      *(float *)pTVar23[1].Rotation.XY.m128d_f64 = fVar58;
      uVar21 = uVar21 + 1;
      iVar18 = (this->Readers).ArrayNum;
      lVar26 = lVar26 + 0x58;
      lVar25 = lVar25 + 0x70;
      param_2 = local_res18;
    } while ((int)uVar21 < iVar18);
  }
  iVar18 = local_e0[0];
  fVar58 = 0.0;
  pFVar24 = local_e8.Data + (longlong)local_e0[0] * 0x70;
  FVar22.Data = local_e8.Data;
  while( true ) {
    if (local_e0[0] != iVar18) {
      `TCheckedPointerIterator<`UE::Cameras::FCameraActorAttachmentInfoArrayReader::GetAttachmentTransform'::__l2::FComputedAttachmentInfo_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar22.Data == pFVar24) break;
    fVar58 = fVar58 + *(float *)(FVar22.Data + 0x60);
    FVar22.Data = FVar22.Data + 0x70;
  }
  if (fVar58 == 0.0) {
    bVar16 = false;
  }
  else {
    iVar18 = local_e0[0];
    *&(param_2->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(param_2->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(param_2->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    fVar14 = __real_3f7fff58;
    *&(param_2->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    fVar13 = __real_3727c5ac;
    *&(param_2->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(param_2->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    pFVar24 = local_e8.Data + (longlong)local_e0[0] * 0x70;
    FVar22.Data = local_e8.Data;
    while( true ) {
      if (local_e0[0] != iVar18) {
        `TCheckedPointerIterator<`UE::Cameras::FCameraActorAttachmentInfoArrayReader::GetAttachmentTransform'::__l2::FComputedAttachmentInfo,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (FVar22.Data == pFVar24) break;
      if ((*(float *)(FVar22.Data + 0x60) <= 0.0) ||
         (fVar31 = *(float *)(FVar22.Data + 0x60) / fVar58, fVar31 <= fVar13)) {
LAB_14d618d4e:
        FVar22.Data = FVar22.Data + 0x70;
      }
      else {
        if (fVar31 < fVar14) {
          dVar47 = (double)fVar31;
          dVar49 = (double)fVar31;
          dVar50 = (double)fVar31;
          dVar11 = (double)fVar31;
          uVar57 = (undefined4)((ulonglong)dVar11 >> 0x20);
          dVar42 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
          auVar33._8_4_ = SUB84(dVar11,0);
          auVar33._0_8_ = dVar50;
          auVar33._12_4_ = uVar57;
          dVar53 = *(double *)(FVar22.Data + 0x30);
          dVar52 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar11) *
                   (param_2->Translation).ZW.m128d_f64[1] +
                   auVar33._8_8_ * *(double *)(FVar22.Data + 0x38);
          auVar34._8_4_ = SUB84(dVar49,0);
          auVar34._0_8_ = dVar47;
          uVar51 = (undefined4)((ulonglong)dVar49 >> 0x20);
          auVar34._12_4_ = uVar51;
          dVar32 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar49) *
                   (param_2->Translation).XY.m128d_f64[1] +
                   auVar34._8_8_ * *(double *)(FVar22.Data + 0x28);
          auVar35._8_4_ = SUB84(dVar11,0);
          auVar35._0_8_ = dVar50;
          auVar35._12_4_ = uVar57;
          auVar41._8_4_ = SUB84(dVar32,0);
          auVar41._0_8_ =
               (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar47) *
               (param_2->Translation).XY.m128d_f64[0] + dVar47 * *(double *)(FVar22.Data + 0x20);
          auVar41._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
          *(undefined1 (*) [16])(param_2->Translation).XY.m128d_f64 = auVar41;
          auVar7._8_4_ = SUB84(dVar52,0);
          auVar7._0_8_ = (dVar42 - dVar50) * (param_2->Translation).ZW.m128d_f64[0] +
                         dVar50 * dVar53;
          auVar7._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
          *(undefined1 (*) [16])(param_2->Translation).ZW.m128d_f64 = auVar7;
          dVar53 = *(double *)(FVar22.Data + 0x50);
          dVar42 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
          dVar52 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar11) *
                   (param_2->Scale3D).ZW.m128d_f64[1] +
                   auVar35._8_8_ * *(double *)(FVar22.Data + 0x58);
          auVar36._8_4_ = SUB84(dVar49,0);
          auVar36._0_8_ = dVar47;
          auVar36._12_4_ = uVar51;
          dVar32 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar49) *
                   (param_2->Scale3D).XY.m128d_f64[1] +
                   auVar36._8_8_ * *(double *)(FVar22.Data + 0x48);
          auVar55._8_4_ = SUB84(dVar32,0);
          auVar55._0_8_ =
               (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar47) *
               (param_2->Scale3D).XY.m128d_f64[0] + dVar47 * *(double *)(FVar22.Data + 0x40);
          auVar55._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
          *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64 = auVar55;
          auVar8._8_4_ = SUB84(dVar52,0);
          auVar8._0_8_ = (dVar42 - dVar50) * (param_2->Scale3D).ZW.m128d_f64[0] + dVar50 * dVar53;
          auVar8._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
          *(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64 = auVar8;
          auVar41 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
          dVar32 = (param_2->Rotation).ZW.m128d_f64[0] * *(double *)(FVar22.Data + 0x10) +
                   (param_2->Rotation).XY.m128d_f64[0] * *(double *)FVar22.Data;
          dVar42 = (param_2->Rotation).ZW.m128d_f64[1] * *(double *)(FVar22.Data + 0x18) +
                   (param_2->Rotation).XY.m128d_f64[1] * *(double *)(FVar22.Data + 8);
          dVar52 = 0.0 - auVar41._0_8_;
          dVar53 = 0.0 - auVar41._8_8_;
          auVar37._8_4_ = SUB84(dVar42,0);
          auVar37._0_8_ = dVar32;
          auVar37._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
          auVar55 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
          lVar25 = -(ulonglong)(0.0 <= auVar37._8_8_ + dVar32);
          lVar26 = -(ulonglong)(0.0 <= dVar32 + dVar42);
          uVar21 = (uint)lVar25;
          uVar44 = (uint)((ulonglong)lVar25 >> 0x20);
          uVar45 = (uint)lVar26;
          uVar46 = (uint)((ulonglong)lVar26 >> 0x20);
          dVar32 = 0.0 - auVar55._0_8_;
          dVar42 = 0.0 - auVar55._8_8_;
          auVar54._0_4_ = ~uVar21 & SUB84(dVar32,0);
          auVar54._4_4_ = ~uVar44 & (uint)((ulonglong)dVar32 >> 0x20);
          auVar54._8_4_ = ~uVar45 & SUB84(dVar42,0);
          auVar54._12_4_ = ~uVar46 & (uint)((ulonglong)dVar42 >> 0x20);
          auVar5._4_4_ = auVar55._4_4_ & uVar44;
          auVar5._0_4_ = auVar55._0_4_ & uVar21;
          auVar5._8_4_ = auVar55._8_4_ & uVar45;
          auVar5._12_4_ = auVar55._12_4_ & uVar46;
          dVar47 = SUB168(auVar54 | auVar5,0) *
                   (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar47) +
                   dVar47 * *(double *)FVar22.Data;
          dVar49 = SUB168(auVar54 | auVar5,8) *
                   (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar49) +
                   dVar49 * *(double *)(FVar22.Data + 8);
          auVar48._0_4_ = ~uVar21 & SUB84(dVar52,0);
          auVar48._4_4_ = ~uVar44 & (uint)((ulonglong)dVar52 >> 0x20);
          auVar48._8_4_ = ~uVar45 & SUB84(dVar53,0);
          auVar48._12_4_ = ~uVar46 & (uint)((ulonglong)dVar53 >> 0x20);
          auVar9._4_4_ = auVar41._4_4_ & uVar44;
          auVar9._0_4_ = auVar41._0_4_ & uVar21;
          auVar9._8_4_ = auVar41._8_4_ & uVar45;
          auVar9._12_4_ = auVar41._12_4_ & uVar46;
          auVar38._8_4_ = SUB84(dVar49,0);
          auVar38._0_8_ = dVar47;
          auVar38._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
          dVar52 = SUB168(auVar48 | auVar9,0) *
                   (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar50) +
                   dVar50 * *(double *)(FVar22.Data + 0x10);
          dVar50 = SUB168(auVar48 | auVar9,8) *
                   (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar11) +
                   dVar11 * *(double *)(FVar22.Data + 0x18);
          dVar32 = dVar52 * dVar52 + dVar47 * dVar47;
          dVar42 = dVar50 * dVar50 + auVar38._8_8_ * dVar49;
          auVar39._8_4_ = SUB84(dVar42,0);
          auVar39._0_8_ = dVar32;
          auVar39._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
          auVar40._0_8_ = auVar39._8_8_ + dVar32;
          auVar40._8_8_ = dVar32 + dVar42;
          uVar27 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar40._0_8_);
          uVar29 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar40._8_8_);
          uVar28 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar40._0_8_);
          uVar30 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar40._8_8_);
          auVar41 = sqrtpd(auVar40,auVar40);
          auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar41);
          auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar41);
          auVar56._0_8_ = uVar27 & (ulonglong)(auVar55._0_8_ * dVar47);
          uVar12 = uVar29 & (ulonglong)(auVar55._8_8_ * dVar49);
          auVar56._8_4_ = (undefined4)uVar12;
          auVar56._12_4_ = (undefined4)(uVar12 >> 0x20);
          auVar43._0_8_ = uVar28 & (ulonglong)(auVar41._0_8_ * dVar52);
          uVar12 = uVar30 & (ulonglong)(auVar41._8_8_ * dVar50);
          auVar43._8_4_ = (undefined4)uVar12;
          auVar43._12_4_ = (undefined4)(uVar12 >> 0x20);
          auVar10._4_4_ =
               ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar10._0_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar10._8_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar10._12_4_ =
               ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar6._4_4_ = ~(uint)(uVar28 >> 0x20) &
                         GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar6._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar6._8_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar6._12_4_ =
               ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64 = auVar56 | auVar10;
          *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64 = auVar43 | auVar6;
          goto LAB_14d618d4e;
        }
        dVar32 = *(double *)(FVar22.Data + 8);
        (param_2->Rotation).XY.m128d_f64[0] = *(double *)FVar22.Data;
        (param_2->Rotation).XY.m128d_f64[1] = dVar32;
        dVar32 = *(double *)(FVar22.Data + 0x18);
        (param_2->Rotation).ZW.m128d_f64[0] = *(double *)(FVar22.Data + 0x10);
        (param_2->Rotation).ZW.m128d_f64[1] = dVar32;
        dVar32 = *(double *)(FVar22.Data + 0x28);
        (param_2->Translation).XY.m128d_f64[0] = *(double *)(FVar22.Data + 0x20);
        (param_2->Translation).XY.m128d_f64[1] = dVar32;
        dVar32 = *(double *)(FVar22.Data + 0x38);
        (param_2->Translation).ZW.m128d_f64[0] = *(double *)(FVar22.Data + 0x30);
        (param_2->Translation).ZW.m128d_f64[1] = dVar32;
        dVar32 = *(double *)(FVar22.Data + 0x48);
        (param_2->Scale3D).XY.m128d_f64[0] = *(double *)(FVar22.Data + 0x40);
        (param_2->Scale3D).XY.m128d_f64[1] = dVar32;
        pFVar1 = FVar22.Data + 0x50;
        dVar32 = *(double *)(FVar22.Data + 0x58);
        FVar22.Data = FVar22.Data + 0x70;
        (param_2->Scale3D).ZW.m128d_f64[0] = *(double *)pFVar1;
        (param_2->Scale3D).ZW.m128d_f64[1] = dVar32;
      }
    }
    bVar16 = true;
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return bVar16;
}

// Initialize @ 14d61f910

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
UE::Cameras::FCameraActorAttachmentInfoArrayReader::Initialize
          (FCameraActorAttachmentInfoArrayReader *this,
          TArrayView<FCameraActorAttachmentInfo_const_,int> *param_1,FCameraContextDataID param_2)

{
  TArrayView<FCameraActorAttachmentInfo_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (this->DataID).Value = param_2.Value;
  CacheAttachmentInfos(this,&local_18);
  return;
}

