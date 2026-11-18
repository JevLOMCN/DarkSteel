// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 2

// GetInstance @ 14e69e470

FInterchangePropertyTracksHelper * __cdecl
UE::Interchange::Private::FInterchangePropertyTracksHelper::GetInstance(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FInterchangePropertyTracksHelper(&::Instance);
      atexit(`UE::Interchange::Private::FInterchangePropertyTracksHelper::GetInstance'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
      return &::Instance;
    }
  }
  return &::Instance;
}

// GetSection @ 14e6a0f00

/* WARNING: Enum "EInterchangePropertyTracks": Some values do not have unique names */

UMovieSceneSection * __thiscall
UE::Interchange::Private::FInterchangePropertyTracksHelper::GetSection
          (FInterchangePropertyTracksHelper *this,UMovieScene *param_1,
          UInterchangeAnimationTrackNode *param_2,FGuid *param_3,EInterchangePropertyTracks param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  UEnum *pUVar4;
  UObject *pUVar5;
  bool bVar6;
  UMovieSceneByteTrack *this_00;
  UClass *pUVar7;
  UMovieSceneSection *pUVar8;
  EMovieSceneCompletionMode EVar9;
  int iVar10;
  undefined1 *puVar11;
  UObject *local_res8;
  UObject *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  if (*(int *)&(this->PropertyTracks).field_0x8 != *(int *)&(this->PropertyTracks).field_0x34) {
    puVar11 = *(undefined1 **)&(this->PropertyTracks).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->PropertyTracks).field_0x38;
    }
    iVar10 = *(int *)(puVar11 +
                     (ulonglong)
                     (*(int *)&(this->PropertyTracks).field_0x48 - AffectDynamicIndirectLighting &
                     param_4) * 4);
    if (iVar10 != -1) {
      lVar3 = *(longlong *)&this->PropertyTracks;
      do {
        if (*(EInterchangePropertyTracks *)(lVar3 + (longlong)iVar10 * 0x48) == param_4) {
          if (iVar10 == -1) {
            return (UMovieSceneSection *)0x0;
          }
          lVar3 = lVar3 + (longlong)iVar10 * 0x48;
          if (lVar3 == 0) {
            return (UMovieSceneSection *)0x0;
          }
          if (lVar3 == -8) {
            return (UMovieSceneSection *)0x0;
          }
          FindObjectClass<UMovieSceneTrack>((wchar_t *)&local_res8);
          pUVar5 = local_res8;
          if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
            GC::MarkAsReachable(local_res8);
          }
          this_00 = (UMovieSceneByteTrack *)
                    UMovieScene::FindTrack
                              (param_1,(TSubclassOf<UMovieSceneTrack>)&local_res8,param_3,
                               (FName *)(lVar3 + 0x28));
          if (this_00 != (UMovieSceneByteTrack *)0x0) {
            pUVar7 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
            iVar10 = (int)pUVar7->_padding_;
            if ((iVar10 <= *(int *)(this_00->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
                &pUVar7->_padding_)) {
              (**(code **)(this_00->_padding_ + 0x318))(this_00);
              goto LAB_14e6a109d;
            }
          }
          local_48 = pUVar5;
          if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
            GC::MarkAsReachable(pUVar5);
          }
          this_00 = (UMovieSceneByteTrack *)
                    UMovieScene::AddTrack(param_1,(TSubclassOf<UMovieSceneTrack>)&local_48,param_3);
          if (this_00 == (UMovieSceneByteTrack *)0x0) {
            return (UMovieSceneSection *)0x0;
          }
          pUVar7 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
          iVar10 = (int)pUVar7->_padding_;
          if (*(int *)(this_00->_padding_ + 0x38) < iVar10) {
            return (UMovieSceneSection *)0x0;
          }
          if ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
              &pUVar7->_padding_) {
            return (UMovieSceneSection *)0x0;
          }
          UMovieScenePropertyTrack::SetPropertyNameAndPath
                    ((UMovieScenePropertyTrack *)this_00,*(FName *)(lVar3 + 0x28),
                     (FString *)(lVar3 + 0x18));
LAB_14e6a109d:
          cVar2 = *(char *)(lVar3 + 0x38);
          puVar1 = (undefined8 *)(lVar3 + 0x30);
          if ((cVar2 == '\0') && (puVar1 != (undefined8 *)0x0)) {
            pUVar7 = Z_Construct_UClass_UMovieSceneByteTrack_NoRegister();
            iVar10 = (int)pUVar7->_padding_;
            if (((iVar10 <= *(int *)(this_00->_padding_ + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar10 * 8)
                 == &pUVar7->_padding_)) && (this_00 != (UMovieSceneByteTrack *)0x0)) {
              UMovieSceneByteTrack::SetEnum(this_00,(UEnum *)*puVar1);
            }
          }
          else if ((cVar2 == '\x01') && (puVar1 != (undefined8 *)0x0)) {
            pUVar7 = Z_Construct_UClass_UMovieSceneDoubleVectorTrack_NoRegister();
            iVar10 = (int)pUVar7->_padding_;
            if (((*(int *)(this_00->_padding_ + 0x38) < iVar10) ||
                ((longlong *)
                 *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar10 * 8)
                 != &pUVar7->_padding_)) || (this_00 == (UMovieSceneByteTrack *)0x0)) {
              pUVar7 = Z_Construct_UClass_UMovieSceneFloatVectorTrack_NoRegister();
              iVar10 = (int)pUVar7->_padding_;
              if (((iVar10 <= *(int *)(this_00->_padding_ + 0x38)) &&
                  ((longlong *)
                   *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar10 * 8)
                   == &pUVar7->_padding_)) && (this_00 != (UMovieSceneByteTrack *)0x0)) {
                *(undefined4 *)&(this_00->Enum).field0_0x0 = *(undefined4 *)puVar1;
              }
            }
            else {
              *(undefined4 *)&(this_00->Enum).field0_0x0 = *(undefined4 *)puVar1;
            }
          }
          else if ((cVar2 == '\x02') && (puVar1 != (undefined8 *)0x0)) {
            pUVar7 = Z_Construct_UClass_UMovieSceneObjectPropertyTrack_NoRegister();
            iVar10 = (int)pUVar7->_padding_;
            if ((iVar10 <= *(int *)(this_00->_padding_ + 0x38)) &&
               (((longlong *)
                 *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar10 * 8)
                 == &pUVar7->_padding_ && (this_00 != (UMovieSceneByteTrack *)0x0)))) {
              pUVar4 = (UEnum *)*puVar1;
              if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UEnum *)0x0)) {
                GC::MarkAsReachable((UObject *)pUVar4);
              }
              (this_00->Enum).field0_0x0.DebugPtr = pUVar4;
            }
          }
          param_4 = param_4 & ~CameraPostProcessSettingsLumenFullSkylightLeakingDistance;
          pUVar8 = UMovieScenePropertyTrack::FindOrAddSection
                             ((UMovieScenePropertyTrack *)this_00,(FFrameNumber)0x0,(bool *)&param_4
                             );
          if (pUVar8 == (UMovieSceneSection *)0x0) {
            return (UMovieSceneSection *)0x0;
          }
          if ((undefined1)param_4 != AffectDistanceFieldLighting) {
            bVar6 = UInterchangeAnimationTrackBaseNode::GetCustomCompletionMode
                              ((UInterchangeAnimationTrackBaseNode *)param_2,(int *)&local_res8);
            local_48 = (UObject *)CONCAT71(local_48._1_7_,2);
            EVar9 = ProjectDefault;
            if (bVar6) {
              EVar9 = (EMovieSceneCompletionMode)local_res8;
            }
            (pUVar8->EvalOptions).CompletionMode = EVar9;
            local_38 = CONCAT31(local_38._1_3_,2);
            local_40 = local_38;
            local_48 = (UObject *)((ulonglong)local_48 & 0xffffffff);
            local_3c = 0;
            (**(code **)(pUVar8->_padding_ + 0x2c8))(pUVar8,&local_48);
            return pUVar8;
          }
          return pUVar8;
        }
        iVar10 = *(int *)(lVar3 + 0x40 + (longlong)iVar10 * 0x48);
      } while (iVar10 != -1);
    }
  }
  return (UMovieSceneSection *)0x0;
}

