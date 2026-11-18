// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// Run @ 146868b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FGatherTransformOrigin::Run
          (FGatherTransformOrigin *this,FEntityAllocationWriteContext param_1)

{
  FInstanceRegistry *pFVar1;
  undefined1 *puVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  double *pdVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  int iVar19;
  UObjectBaseUtility *this_00;
  UClass *pUVar20;
  longlong *plVar21;
  UClass *pUVar22;
  TTransform<double> *pTVar23;
  FSparseArrayAllocationInfo *pFVar24;
  undefined1 *puVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  uint uVar29;
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [8];
  FPlaybackCapabilityPtr local_1e0;
  FSparseArrayAllocationInfo local_1d0 [5];
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_208;
  TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator>::Empty
            (this->TransformOriginsByInstanceID,
             *(int *)&(this->InstanceRegistry->Instances).field_0x8 -
             *(int *)&(this->InstanceRegistry->Instances).field_0x34);
  pFVar1 = this->InstanceRegistry;
  iVar27 = 0;
  if (0 < *(int *)&(pFVar1->Instances).field_0x8) {
    lVar28 = 0;
    uVar29 = 1;
    do {
      if ((-1 < iVar27) && (iVar27 < *(int *)&(pFVar1->Instances).field_0x28)) {
        if ((*(int *)&(pFVar1->Instances).field_0x28 <= iVar27) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar2 = *(undefined1 **)&(pFVar1->Instances).field_0x20;
        puVar25 = &(pFVar1->Instances).field_0x10;
        if (puVar2 != (undefined1 *)0x0) {
          puVar25 = puVar2;
        }
        iVar19 = iVar27;
        if (iVar27 < 0) {
          iVar19 = iVar27 + 0x1f;
        }
        if ((*(uint *)(puVar25 + (longlong)(iVar19 >> 5) * 4) & uVar29) != 0) {
          lVar26 = *(longlong *)&pFVar1->Instances + lVar28;
          if (((short)*(undefined4 *)(lVar26 + 0x13a) == (short)*(undefined4 *)(lVar26 + 0x132)) &&
             ((short)((uint)*(undefined4 *)(lVar26 + 0x13a) >> 0x10) ==
              (short)((uint)*(undefined4 *)(lVar26 + 0x132) >> 0x10))) {
            lVar3 = *(longlong *)(lVar26 + 0x118);
            pTVar4 = *(TReferenceControllerBase<1> **)(lVar26 + 0x120);
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            bVar18 = IsInGameThread();
            if (!bVar18) {
              local_1e8[0] = bVar18;
              `UE::MovieScene::FSharedPlaybackState::FindCapability<IMovieScenePlaybackClient>'::
              __l2::<lambda_1>::operator()(local_1e8);
            }
            IMovieScenePlaybackClient::GetPlaybackCapabilityID();
            FPlaybackCapabilitiesImpl::FindCapability
                      ((FPlaybackCapabilitiesImpl *)(lVar3 + 0x38),&local_1e0,
                       1 << ((byte)local_1e8._4_4_ & 0x1f));
            if (local_1e0.Ptr != (longlong *)0x0) {
              plVar21 = local_1e0.Ptr;
              if (local_1e0.StorageMode != Inline) {
                if ((local_1e0.StorageMode != RawPointer) &&
                   (local_1e0.StorageMode != SharedPointer)) {
                  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("false",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                                      ,0x30,L"Unexpected playback capability storage mode");
                  if (bVar18) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  goto LAB_146868e18;
                }
                plVar21 = *(longlong **)local_1e0.Ptr;
              }
              if ((plVar21 != (longlong *)0x0) &&
                 (this_00 = (UObjectBaseUtility *)(**(code **)(*plVar21 + 0x18))(),
                 this_00 != (UObjectBaseUtility *)0x0)) {
                pUVar20 = Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister();
                plVar21 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar20);
                if (plVar21 == (longlong *)0x0) {
                  pUVar20 = *(UClass **)&this_00->field_0x10;
                  pUVar22 = Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister();
                  bVar18 = UClass::ImplementsInterface(pUVar20,pUVar22);
                  if (!bVar18) goto LAB_146868e18;
                  pTVar23 = IMovieSceneTransformOrigin::Execute_BP_GetTransformOrigin
                                      (&local_f8,(UObject *)this_00);
                }
                else {
                  (**(code **)(*plVar21 + 0x10))(plVar21,&local_158);
                  pTVar23 = &local_158;
                }
                uVar17 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
                uVar16 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
                uVar15 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
                local_178 = (pTVar23->Scale3D).XY.m128d_f64[0];
                dStack_170 = (pTVar23->Scale3D).XY.m128d_f64[1];
                local_168 = (pTVar23->Scale3D).ZW.m128d_f64[0];
                dStack_160 = (pTVar23->Scale3D).ZW.m128d_f64[1];
                dVar7 = (pTVar23->Rotation).XY.m128d_f64[0];
                dVar8 = (pTVar23->Rotation).XY.m128d_f64[1];
                dVar9 = (pTVar23->Rotation).ZW.m128d_f64[0];
                dVar10 = (pTVar23->Rotation).ZW.m128d_f64[1];
                dVar11 = (pTVar23->Translation).XY.m128d_f64[0];
                dVar12 = (pTVar23->Translation).XY.m128d_f64[1];
                dVar13 = (pTVar23->Translation).ZW.m128d_f64[0];
                dVar14 = (pTVar23->Translation).ZW.m128d_f64[1];
                pFVar24 = TSparseArrayBase<96,16,FDefaultSparseArrayAllocator>::InsertUninitialized
                                    ((TSparseArrayBase<96,16,FDefaultSparseArrayAllocator> *)
                                     this->TransformOriginsByInstanceID,local_1d0,iVar27);
                pdVar5 = pFVar24->Pointer;
                if (pdVar5 != (double *)0x0) {
                  *pdVar5 = dVar7;
                  pdVar5[1] = dVar8;
                  pdVar5[2] = dVar9;
                  pdVar5[3] = dVar10;
                  pdVar5[4] = dVar11;
                  pdVar5[5] = dVar12;
                  pdVar5[6] = dVar13;
                  pdVar5[7] = dVar14;
                  pdVar5[8] = (double)uVar15;
                  pdVar5[9] = (double)uVar16;
                  pdVar5[10] = (double)uVar17;
                  pdVar5[0xb] = 0.0;
                }
              }
            }
LAB_146868e18:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
          }
        }
      }
      iVar27 = iVar27 + 1;
      uVar29 = uVar29 << 1 | (uint)((int)uVar29 < 0);
      lVar28 = lVar28 + 0x140;
    } while (iVar27 < *(int *)&(pFVar1->Instances).field_0x8);
  }
  return;
}

