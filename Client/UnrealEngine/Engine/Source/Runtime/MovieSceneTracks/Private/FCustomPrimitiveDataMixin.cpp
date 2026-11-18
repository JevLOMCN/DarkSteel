// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// CreateEntity @ 146786990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FCustomPrimitiveDataMixin::CreateEntity
          (FCustomPrimitiveDataMixin *this,UMovieSceneEntitySystemLinker *param_1,FObjectKey param_2
          ,FName param_3,FComponentTypeID param_4,
          TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *param_5,
          FAnimatedCustomPrimitiveDataInfo *param_6)

{
  FMovieSceneEntityID *pFVar1;
  double *pdVar2;
  double dVar3;
  ushort uVar4;
  TComponentTypeID<double> TVar5;
  int iVar6;
  FComponentRegistry *pFVar7;
  code *pcVar8;
  bool bVar9;
  EEntityThreadingModel EVar10;
  FMovieSceneEntityID FVar11;
  uint uVar12;
  FMovieSceneTracksComponentTypes *pFVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  undefined6 extraout_var;
  ForAnyElementType _Str;
  longlong lVar16;
  longlong lVar17;
  undefined1 uVar18;
  FMovieSceneEntityID *pFVar19;
  float fVar20;
  FName local_res20;
  ushort uStack_15e;
  FString local_130;
  FObjectKey local_120;
  FObjectKey local_118;
  FBuiltInComponentTypes *local_110;
  FEntityBuilderImplBase local_108;
  TComponentTypeID<UObject_*> local_100;
  UObject *local_f8;
  undefined1 local_f0;
  TComponentTypeID<FMovieSceneBlendChannelID> local_e8;
  FMovieSceneBlendChannelID local_e6;
  undefined1 local_e2;
  TComponentTypeID<double> local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined4 local_c8;
  double local_c0;
  undefined1 local_b8;
  ushort local_b0;
  ushort local_ae;
  ushort local_ac;
  ushort local_aa;
  undefined1 local_a8;
  undefined4 local_a0;
  undefined4 local_58;
  undefined4 local_54;
  
  local_res20 = param_3;
  local_110 = FBuiltInComponentTypes::Get();
  pFVar13 = FMovieSceneTracksComponentTypes::Get();
  fVar20 = 0.0;
  pFVar19 = param_5->DataPtr;
  pFVar1 = pFVar19 + param_5->ArrayNum;
  if (pFVar19 != pFVar1) {
    do {
      uVar4 = pFVar19->Value;
      TVar5 = (pFVar13->FloatParameter).InitialValue;
      if ((uVar4 == 0xffff) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Entity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                             ,0x1a8,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((TVar5 != (TComponentTypeID<double>)0xffff) &&
         (uVar12 = *(uint *)(*(longlong *)&(param_1->EntityManager).EntityLocations +
                            (ulonglong)uVar4 * 8), (short)uVar12 != -1)) {
        lVar16 = (ulonglong)(uVar12 & 0xffff) * 0x38 +
                 *(longlong *)&(param_1->EntityManager).EntityAllocationMasks;
        if (((int)(uint)(ushort)TVar5 < *(int *)(lVar16 + 0x30)) &&
           ((*(uint *)(lVar16 + (ulonglong)((ushort)TVar5 >> 5) * 4) >> ((ushort)TVar5 & 0x1f) & 1)
            != 0)) {
          lVar16 = *(longlong *)
                    (*(longlong *)&(param_1->EntityManager).EntityAllocations +
                    (ulonglong)(uVar12 & 0xffff) * 8);
          EVar10 = FEntityManager::GetThreadingModel(&param_1->EntityManager);
          lVar17 = *(longlong *)(lVar16 + 0x28);
          lVar16 = (ulonglong)*(ushort *)(lVar16 + 0xc) * 0x38 + lVar17;
          for (; lVar17 != lVar16; lVar17 = lVar17 + 0x38) {
            if (*(TComponentTypeID<double> *)(lVar17 + 0x36) == TVar5) {
              if (EVar10 != NoThreading) {
                AcquireSRWLockShared((PSRWLOCK)(lVar17 + 0x20));
              }
              LOCK();
              *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + 1;
              UNLOCK();
              uStack_15e = (ushort)(uVar12 >> 0x10);
              pdVar2 = (double *)(*(longlong *)(lVar17 + 0x18) + (ulonglong)uStack_15e * 8);
              if (pdVar2 != (double *)0x0) {
                dVar3 = *pdVar2;
                uVar18 = 1;
                LOCK();
                *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + -1;
                UNLOCK();
                fVar20 = (float)dVar3;
                if (EVar10 != NoThreading) {
                  ReleaseSRWLockShared((PSRWLOCK)(lVar17 + 0x20));
                }
                goto LAB_146786ca0;
              }
              LOCK();
              *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + -1;
              UNLOCK();
              if (EVar10 != NoThreading) {
                ReleaseSRWLockShared((PSRWLOCK)(lVar17 + 0x20));
              }
              break;
            }
          }
        }
      }
      pFVar19 = pFVar19 + 1;
    } while (pFVar19 != pFVar1);
  }
  local_120 = param_2;
  pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_120);
  if (pUVar14 != (UObject *)0x0) {
    pUVar15 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar6 = (int)pUVar15->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar15->_padding_)) {
      ::FName::ToString(&local_res20,&local_130);
      bVar9 = ::FString::IsNumeric(&local_130);
      if ((!bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParameterNameString.IsNumeric()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneCustomPrimitiveDataSystem.cpp"
                             ,0x94,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      _Str.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        _Str.Data = local_130.Data.AllocatorInstance.Data;
      }
      uVar12 = _wtoi((wchar_t *)_Str.Data);
      if ((0x23 < uVar12) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("DataIndex >= 0 && DataIndex < FCustomPrimitiveData::NumCustomPrimitiveDataFloats"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneCustomPrimitiveDataSystem.cpp"
                             ,0x96,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (((int)uVar12 < 0) || (*(int *)(pUVar14 + 0x12) <= (int)uVar12)) {
        uVar18 = 0;
      }
      else {
        uVar18 = 1;
        fVar20 = *(float *)(*(longlong *)&pUVar14[0x11].field_0x20 + (longlong)(int)uVar12 * 4);
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      goto LAB_146786ca0;
    }
  }
  uVar18 = 0;
LAB_146786ca0:
  local_118 = param_2;
  local_f8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_118);
  local_100 = local_110->BoundObject;
  local_e8 = local_110->BlendChannelOutput;
  local_e0 = local_110->DoubleResult[0];
  local_e6 = param_6->BlendChannelID;
  local_d8 = 0;
  local_a0._0_3_ = CONCAT12(uVar18,(pFVar13->FloatParameter).InitialValue);
  local_c8 = local_a0;
  local_b0 = (pFVar13->FloatParameter).PropertyTag.Value;
  local_ae = (pFVar13->Tags).CustomPrimitiveData.Value;
  local_ac = param_4.Value;
  local_aa = (local_110->Tags).NeedsLink.Value;
  local_c0 = (double)fVar20;
  local_108 = (FEntityBuilderImplBase)
              &
              ___7__TEntityBuilder_U__TAdd_PEAVUObject___MovieScene_UE__U__TAdd_UFMovieSceneBlendChannelID___23_U__TAdd_N_23_U__TAddConditional_N_23_UFAdd_23_U723_U723_U723__MovieScene_UE__6B_
  ;
  local_f0 = 1;
  local_e2 = 1;
  local_d0 = 1;
  local_b8 = 1;
  local_a8 = 1;
  local_58 = 0;
  local_54 = 0x180;
  FVar11 = FEntityBuilderImplBase::CreateEntity
                     (&local_108,(FEntityManager *)&stack0x00000018,
                      (FComponentMask *)&param_1->EntityManager);
  FVar11.Value = *(ushort *)CONCAT62(extraout_var,FVar11.Value);
  (param_6->OutputEntityID).Value = FVar11.Value;
  pFVar7 = (param_1->EntityManager).ComponentRegistry;
  local_108 = (FEntityBuilderImplBase)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_5->ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FEntityManager::CopyComponents
            (&param_1->EntityManager,(FMovieSceneEntityID)param_5->DataPtr->Value,FVar11,
             &pFVar7->CopyAndMigrationMask);
  return;
}

// InitializeSoleInput @ 1467a5350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FCustomPrimitiveDataMixin::InitializeSoleInput
          (FCustomPrimitiveDataMixin *this,UMovieSceneEntitySystemLinker *param_1,FObjectKey param_2
          ,FName param_3,FMovieSceneEntityID param_4,FAnimatedCustomPrimitiveDataInfo *param_5)

{
  atomic<int> *paVar1;
  float fVar2;
  atomic<int> aVar3;
  ushort uVar4;
  TComponentTypeID<double> TVar5;
  FComponentTypeID FVar6;
  EComponentHeaderLockMode EVar7;
  code *pcVar8;
  FMovieSceneTracksComponentTypes *pFVar9;
  FComponentHeader *pFVar10;
  bool bVar11;
  uint uVar12;
  FBuiltInComponentTypes *pFVar13;
  TBitArray<TFixedAllocator<12>_> *pTVar14;
  TTypeCompatibleBytes<unsigned_int> *pTVar15;
  UObject *pUVar16;
  UClass *pUVar17;
  double *pdVar18;
  FComponentHeader *pFVar19;
  ForAnyElementType _Str;
  FComponentHeader *pFVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  FMovieSceneTracksComponentTypes **ppFVar24;
  FComponentHeader *pFVar25;
  FName local_res20;
  undefined1 auStackY_178 [32];
  <lambda_1> local_140 [4];
  ushort local_13c;
  ushort local_13a;
  FMovieSceneTracksComponentTypes *local_138;
  FString local_130;
  int local_120;
  FObjectKey local_118;
  FEntityInfo local_110;
  TBitArray<TFixedAllocator<12>_> local_f8;
  TBitArray<TFixedAllocator<12>_> local_c0;
  TTypeCompatibleBytes<unsigned_int> local_88 [4];
  TTypeCompatibleBytes<unsigned_int> local_78 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_70 [2];
  TTypeCompatibleBytes<unsigned_int> local_68 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_60 [2];
  int local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_res20 = param_3;
  pFVar13 = FBuiltInComponentTypes::Get();
  local_138 = FMovieSceneTracksComponentTypes::Get();
  pTVar14 = &FEntityManager::GetEntityType(&param_1->EntityManager,param_4)->Bits;
  ppFVar24 = (FMovieSceneTracksComponentTypes **)&local_13c;
  local_13c = (pFVar13->Tags).RestoreState.Value;
  pFVar25 = (FComponentHeader *)0x0;
  local_13a = (pFVar13->Tags).AlwaysCacheInitialValue.Value;
  local_c0.MaxBits = 0x180;
  local_c0.NumBits = 0;
  pFVar19 = pFVar25;
  while( true ) {
    uVar4 = *(ushort *)ppFVar24;
    iVar22 = ((uint)uVar4 - (uint)pFVar19) + 1;
    uVar12 = (uint)pFVar19;
    if (0 < iVar22) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_c0,false,iVar22);
      uVar12 = local_c0.NumBits;
    }
    if (((int)uVar12 <= (int)(uint)uVar4) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    ppFVar24 = (FMovieSceneTracksComponentTypes **)((longlong)ppFVar24 + 2);
    pTVar15 = local_c0.AllocatorInstance.InlineData + (uVar4 >> 5);
    *(uint *)pTVar15->Pad = *(uint *)pTVar15->Pad | 1 << ((byte)uVar4 & 0x1f);
    if (ppFVar24 == &local_138) break;
    pFVar19 = (FComponentHeader *)(ulonglong)(uint)local_c0.NumBits;
  }
  local_f8.NumBits = 0;
  local_f8.MaxBits = 0x180;
  Core::Private::
  BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::BitwiseAND<TFixedAllocator<12>,TFixedAllocator<12>_>_::__l2::<lambda_1>_>
            (pTVar14,&local_c0,&local_f8,MinSize,local_140);
  iVar22 = local_f8.NumBits;
  pFVar9 = local_138;
  uVar12 = local_f8.NumBits + 0x1f;
  local_58 = local_f8.NumBits;
  local_88[0].Pad[0] = local_f8.AllocatorInstance.InlineData[0].Pad[0];
  local_88[0].Pad[1] = local_f8.AllocatorInstance.InlineData[0].Pad[1];
  local_88[0].Pad[2] = local_f8.AllocatorInstance.InlineData[0].Pad[2];
  local_88[0].Pad[3] = local_f8.AllocatorInstance.InlineData[0].Pad[3];
  local_88[1].Pad[0] = local_f8.AllocatorInstance.InlineData[1].Pad[0];
  local_88[1].Pad[1] = local_f8.AllocatorInstance.InlineData[1].Pad[1];
  local_88[1].Pad[2] = local_f8.AllocatorInstance.InlineData[1].Pad[2];
  local_88[1].Pad[3] = local_f8.AllocatorInstance.InlineData[1].Pad[3];
  local_88[2].Pad[0] = local_f8.AllocatorInstance.InlineData[2].Pad[0];
  local_88[2].Pad[1] = local_f8.AllocatorInstance.InlineData[2].Pad[1];
  local_88[2].Pad[2] = local_f8.AllocatorInstance.InlineData[2].Pad[2];
  local_88[2].Pad[3] = local_f8.AllocatorInstance.InlineData[2].Pad[3];
  local_88[3].Pad[0] = local_f8.AllocatorInstance.InlineData[3].Pad[0];
  local_88[3].Pad[1] = local_f8.AllocatorInstance.InlineData[3].Pad[1];
  local_88[3].Pad[2] = local_f8.AllocatorInstance.InlineData[3].Pad[2];
  local_88[3].Pad[3] = local_f8.AllocatorInstance.InlineData[3].Pad[3];
  local_54 = local_f8.MaxBits;
  local_f8.NumBits = 0;
  local_f8.MaxBits = 0;
  local_78[0].Pad[0] = local_f8.AllocatorInstance.InlineData[4].Pad[0];
  local_78[0].Pad[1] = local_f8.AllocatorInstance.InlineData[4].Pad[1];
  local_78[0].Pad[2] = local_f8.AllocatorInstance.InlineData[4].Pad[2];
  local_78[0].Pad[3] = local_f8.AllocatorInstance.InlineData[4].Pad[3];
  local_78[1].Pad[0] = local_f8.AllocatorInstance.InlineData[5].Pad[0];
  local_78[1].Pad[1] = local_f8.AllocatorInstance.InlineData[5].Pad[1];
  local_78[1].Pad[2] = local_f8.AllocatorInstance.InlineData[5].Pad[2];
  local_78[1].Pad[3] = local_f8.AllocatorInstance.InlineData[5].Pad[3];
  aTStack_70[0].Pad[0] = local_f8.AllocatorInstance.InlineData[6].Pad[0];
  aTStack_70[0].Pad[1] = local_f8.AllocatorInstance.InlineData[6].Pad[1];
  aTStack_70[0].Pad[2] = local_f8.AllocatorInstance.InlineData[6].Pad[2];
  aTStack_70[0].Pad[3] = local_f8.AllocatorInstance.InlineData[6].Pad[3];
  aTStack_70[1].Pad[0] = local_f8.AllocatorInstance.InlineData[7].Pad[0];
  aTStack_70[1].Pad[1] = local_f8.AllocatorInstance.InlineData[7].Pad[1];
  aTStack_70[1].Pad[2] = local_f8.AllocatorInstance.InlineData[7].Pad[2];
  aTStack_70[1].Pad[3] = local_f8.AllocatorInstance.InlineData[7].Pad[3];
  local_68[0].Pad[0] = local_f8.AllocatorInstance.InlineData[8].Pad[0];
  local_68[0].Pad[1] = local_f8.AllocatorInstance.InlineData[8].Pad[1];
  local_68[0].Pad[2] = local_f8.AllocatorInstance.InlineData[8].Pad[2];
  local_68[0].Pad[3] = local_f8.AllocatorInstance.InlineData[8].Pad[3];
  local_68[1].Pad[0] = local_f8.AllocatorInstance.InlineData[9].Pad[0];
  local_68[1].Pad[1] = local_f8.AllocatorInstance.InlineData[9].Pad[1];
  local_68[1].Pad[2] = local_f8.AllocatorInstance.InlineData[9].Pad[2];
  local_68[1].Pad[3] = local_f8.AllocatorInstance.InlineData[9].Pad[3];
  aTStack_60[0].Pad[0] = local_f8.AllocatorInstance.InlineData[10].Pad[0];
  aTStack_60[0].Pad[1] = local_f8.AllocatorInstance.InlineData[10].Pad[1];
  aTStack_60[0].Pad[2] = local_f8.AllocatorInstance.InlineData[10].Pad[2];
  aTStack_60[0].Pad[3] = local_f8.AllocatorInstance.InlineData[10].Pad[3];
  aTStack_60[1].Pad[0] = local_f8.AllocatorInstance.InlineData[0xb].Pad[0];
  aTStack_60[1].Pad[1] = local_f8.AllocatorInstance.InlineData[0xb].Pad[1];
  aTStack_60[1].Pad[2] = local_f8.AllocatorInstance.InlineData[0xb].Pad[2];
  aTStack_60[1].Pad[3] = local_f8.AllocatorInstance.InlineData[0xb].Pad[3];
  if (uVar12 >> 5 != 0) {
    pTVar15 = local_88;
    pFVar19 = pFVar25;
LAB_1467a54d0:
    if (*(int *)pTVar15->Pad == 0) goto code_r0x0001467a54d5;
    local_120 = 0;
    bVar11 = *(int *)local_88[(longlong)pFVar19].Pad != 0;
    if (bVar11) {
      for (; (*(uint *)local_88[(longlong)pFVar19].Pad >> local_120 & 1) == 0;
          local_120 = local_120 + 1) {
      }
    }
    iVar23 = 0x20;
    if (bVar11) {
      iVar23 = local_120;
    }
    iVar23 = iVar23 + (int)pFVar19 * 0x20;
    if (iVar22 <= iVar23) goto LAB_1467a5501;
    goto LAB_1467a5507;
  }
LAB_1467a5501:
  iVar23 = -1;
LAB_1467a5507:
  TVar5 = (local_138->FloatParameter).InitialValue;
  if (((TVar5 == (TComponentTypeID<double>)0xffff) || (pTVar14->NumBits <= (int)(uint)(ushort)TVar5)
      ) || ((*(uint *)(pTVar14->AllocatorInstance).InlineData[(ushort)TVar5 >> 5].Pad >>
             ((ushort)TVar5 & 0x1f) & 1) == 0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (((iVar23 != -1) && (!bVar11)) &&
     (local_118 = param_2, pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_118),
     pUVar16 != (UObject *)0x0)) {
    pUVar17 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar22 = (int)pUVar17->_padding_;
    if ((iVar22 <= *(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar22 * 8) ==
        &pUVar17->_padding_)) {
      ::FName::ToString(&local_res20,&local_130);
      bVar11 = ::FString::IsNumeric(&local_130);
      if ((!bVar11) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParameterNameString.IsNumeric()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneCustomPrimitiveDataSystem.cpp"
                              ,0xbe,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      _Str.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        _Str.Data = local_130.Data.AllocatorInstance.Data;
      }
      uVar12 = _wtoi((wchar_t *)_Str.Data);
      if ((0x23 < uVar12) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("DataIndex >= 0 && DataIndex < FCustomPrimitiveData::NumCustomPrimitiveDataFloats"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneCustomPrimitiveDataSystem.cpp"
                              ,0xc0,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)(pUVar16 + 0x12))) {
        fVar2 = *(float *)(*(longlong *)&pUVar16[0x11].field_0x20 + (longlong)(int)uVar12 * 4);
        FVar6.Value = *(ushort *)&(pFVar9->FloatParameter).InitialValue;
        FEntityManager::AddComponent(&param_1->EntityManager,param_4,FVar6);
        FEntityManager::GetEntity(&param_1->EntityManager,&local_110,param_4);
        if (local_110.Data.Allocation != (FEntityAllocation *)0x0) {
          pFVar19 = (local_110.Data.Allocation)->ComponentHeaders;
          pFVar20 = pFVar19 + (local_110.Data.Allocation)->NumComponents;
          for (; pFVar10 = pFVar25, pFVar19 != pFVar20; pFVar19 = pFVar19 + 1) {
            if ((pFVar19->ComponentType).Value == FVar6.Value) {
              pFVar10 = pFVar19;
              if (pFVar19 != (FComponentHeader *)0x0) goto LAB_1467a56e4;
              break;
            }
          }
          pFVar19 = pFVar10;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Header",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                              ,0x2db,L"");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
LAB_1467a56e4:
          EVar7 = (local_110.Data.Allocation)->LockMode;
          if (EVar7 == Mutex) {
            AcquireSRWLockExclusive((PSRWLOCK)&pFVar19->ReadWriteLock);
          }
          LOCK();
          paVar1 = &pFVar19->ScheduledAccessCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + 1);
          UNLOCK();
          if ((aVar3 != (atomic<int>)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PreviousAccessCount == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                  ,0x487,
                                  L"Component header is still in use when it is being opened for write!"
                                 ), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pdVar18 = FComponentHeader::GetValuePtr(pFVar19,local_110.Data.ComponentOffset);
          *pdVar18 = (double)fVar2;
          if (pFVar19 != (FComponentHeader *)0x0) {
            if ((FComponentHeader *)pFVar19->SerialNumber != (FComponentHeader *)0x0) {
              pFVar25 = (FComponentHeader *)pFVar19->SerialNumber;
            }
            pFVar19->SerialNumber = (ulong64)pFVar25;
            LOCK();
            pFVar19->ScheduledAccessCount = (atomic<int>)((int)pFVar19->ScheduledAccessCount + -1);
            UNLOCK();
            if (EVar7 == Mutex) {
              ReleaseSRWLockExclusive((PSRWLOCK)&pFVar19->ReadWriteLock);
            }
          }
        }
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar13 = FBuiltInComponentTypes::Get();
  FEntityManager::RemoveComponent
            (&param_1->EntityManager,param_4,
             (FComponentTypeID)*(ushort *)&pFVar13->HierarchicalBlendTarget);
  return;
code_r0x0001467a54d5:
  uVar21 = (int)pFVar19 + 1;
  pFVar19 = (FComponentHeader *)(ulonglong)uVar21;
  pTVar15 = pTVar15 + 1;
  if ((int)(uVar12 >> 5) <= (int)uVar21) goto LAB_1467a5501;
  goto LAB_1467a54d0;
}

