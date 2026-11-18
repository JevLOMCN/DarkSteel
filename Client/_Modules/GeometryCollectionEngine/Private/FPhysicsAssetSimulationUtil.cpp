// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// BuildParams @ 1463aba50

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

void __cdecl
FPhysicsAssetSimulationUtil::BuildParams
          (UObject *param_1,AActor *param_2,USkeletalMeshComponent *param_3,UPhysicsAsset *param_4,
          FSkeletalMeshPhysicsProxyParams *param_5)

{
  FBoneHierarchy *pFVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  USceneComponent *pUVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  TUniquePtr<FAnalyticImplicitGroup,TDefaultDelete<FAnalyticImplicitGroup>_> TVar24;
  float fVar25;
  float fVar26;
  AActor *pAVar27;
  USkeletalMeshComponent *pUVar28;
  bool bVar29;
  uint uVar30;
  uint uVar31;
  USkeletalMesh *pUVar32;
  longlong lVar33;
  undefined8 *puVar34;
  FAnalyticImplicitGroup *pFVar35;
  int *piVar36;
  FAnalyticImplicitGroup *pFVar37;
  TSphere<double,3> *pTVar38;
  TSphere<double,3> *pTVar39;
  TQuat<double> *pTVar40;
  TBox<double,3> *this;
  FTaperedCylinder *this_00;
  FAnalyticImplicitGroup **ppFVar41;
  uint *puVar42;
  TTransform<double> *pTVar43;
  int iVar44;
  uint uVar45;
  longlong lVar46;
  ulonglong uVar47;
  undefined1 *puVar48;
  ulonglong uVar49;
  FScriptContainerElement *pFVar50;
  uint uVar51;
  longlong lVar52;
  uint uVar53;
  uint uVar54;
  FKBoxElem *this_01;
  FKTaperedCapsuleElem *this_02;
  int iVar55;
  FScriptContainerElement *pFVar56;
  FReferenceSkeleton *this_03;
  FKBoxElem *pFVar57;
  FKTaperedCapsuleElem *pFVar58;
  FSkeletalMeshPhysicsProxyParams *pFVar59;
  float fVar60;
  double dVar61;
  double dVar62;
  undefined1 auVar63 [16];
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  float fVar72;
  uint uVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  uint uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined1 auStackY_9d8 [32];
  TUniquePtr<FAnalyticImplicitGroup,TDefaultDelete<FAnalyticImplicitGroup>_> local_998;
  undefined1 local_990;
  undefined1 local_98f;
  undefined1 local_98e;
  undefined1 local_98d;
  undefined1 local_98c;
  undefined1 local_98b;
  undefined1 local_98a [2];
  uint local_988;
  float local_984;
  float local_980 [2];
  AActor *local_978;
  UObject *local_970;
  int local_968;
  undefined4 local_964;
  FReferenceSkeleton *local_960;
  FSkeletalMeshPhysicsProxyParams *local_958;
  ForAnyElementType local_950;
  undefined8 local_948;
  TArray<int,TSizedDefaultAllocator<32>_> local_940;
  TVector<double>_u_0 local_930;
  double local_918;
  double dStack_910;
  double local_908;
  double dStack_900;
  double local_8f8;
  double dStack_8f0;
  char local_8e8;
  undefined4 local_8e7;
  undefined2 local_8e3;
  undefined1 local_8e1;
  uint local_8e0;
  uint local_8dc;
  int local_8d8 [2];
  TUniquePtr<FAnalyticImplicitGroup,TDefaultDelete<FAnalyticImplicitGroup>_> local_8d0;
  FBoneHierarchy *local_8c8;
  FScriptContainerElement *local_8c0;
  FScriptContainerElement *local_8b8;
  UPhysicsAsset *local_8b0;
  USkeletalMeshComponent *local_8a8;
  FName local_8a0;
  FName local_898;
  FName local_890;
  longlong local_888;
  longlong local_880;
  FName local_878;
  FName local_870;
  FName local_868;
  FString local_860;
  FString local_850;
  FString local_840;
  undefined1 local_830 [16];
  double local_820;
  FName local_818;
  FString local_810;
  FString local_800;
  FString local_7f0;
  uint local_7e0;
  uint uStack_7dc;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined8 local_7d0;
  double local_7c8;
  TVector<double,3> local_7c0;
  TVector<double,3> local_7a8;
  FKBoxElem local_788;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  double local_708;
  double local_700;
  double dStack_6f8;
  double local_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  double local_698;
  double dStack_690;
  double local_688;
  double dStack_680;
  double local_678;
  double dStack_670;
  double local_668;
  double dStack_660;
  double local_658;
  double dStack_650;
  double local_648;
  double dStack_640;
  undefined1 local_638 [24];
  undefined1 local_620 [24];
  double local_608;
  double dStack_600;
  double local_5f8;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  TQuat<double> local_578;
  TQuat<double> local_558;
  TQuat<double> local_538;
  TTransform<double> local_518;
  TTransform<double> local_4b8;
  TTransform<double> local_458;
  TTransform<double> local_3f8;
  TTransform<double> local_398;
  TTransform<double> local_338;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  double local_1b8 [2];
  double local_1a8 [2];
  double local_198 [2];
  double local_188 [2];
  double local_178 [2];
  double local_168 [2];
  undefined1 local_158 [96];
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_9d8;
  pUVar5 = (param_2->RootComponent).field0_0x0.DebugPtr;
  local_958 = param_5;
  if (pUVar5 == (USceneComponent *)0x0) {
    pTVar43 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar43 = &pUVar5->ComponentToWorld;
  }
  dVar62 = (pTVar43->Rotation).XY.m128d_f64[1];
  (param_5->InitialTransform).Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
  (param_5->InitialTransform).Rotation.XY.m128d_f64[1] = dVar62;
  dVar62 = (pTVar43->Rotation).ZW.m128d_f64[1];
  (param_5->InitialTransform).Rotation.ZW.m128d_f64[0] = (pTVar43->Rotation).ZW.m128d_f64[0];
  (param_5->InitialTransform).Rotation.ZW.m128d_f64[1] = dVar62;
  dVar62 = (pTVar43->Translation).XY.m128d_f64[1];
  (param_5->InitialTransform).Translation.XY.m128d_f64[0] = (pTVar43->Translation).XY.m128d_f64[0];
  (param_5->InitialTransform).Translation.XY.m128d_f64[1] = dVar62;
  dVar62 = (pTVar43->Translation).ZW.m128d_f64[1];
  (param_5->InitialTransform).Translation.ZW.m128d_f64[0] = (pTVar43->Translation).ZW.m128d_f64[0];
  (param_5->InitialTransform).Translation.ZW.m128d_f64[1] = dVar62;
  dVar62 = (pTVar43->Scale3D).XY.m128d_f64[1];
  (param_5->InitialTransform).Scale3D.XY.m128d_f64[0] = (pTVar43->Scale3D).XY.m128d_f64[0];
  (param_5->InitialTransform).Scale3D.XY.m128d_f64[1] = dVar62;
  dVar62 = (pTVar43->Scale3D).ZW.m128d_f64[1];
  (param_5->InitialTransform).Scale3D.ZW.m128d_f64[0] = (pTVar43->Scale3D).ZW.m128d_f64[0];
  (param_5->InitialTransform).Scale3D.ZW.m128d_f64[1] = dVar62;
  dVar62 = (param_5->InitialTransform).Rotation.XY.m128d_f64[1];
  dVar78 = (param_5->InitialTransform).Rotation.ZW.m128d_f64[0];
  dVar75 = (param_5->InitialTransform).Rotation.ZW.m128d_f64[1];
  (param_5->LocalToWorld).Rotation.XY.m128d_f64[0] =
       (param_5->InitialTransform).Rotation.XY.m128d_f64[0];
  (param_5->LocalToWorld).Rotation.XY.m128d_f64[1] = dVar62;
  dVar62 = (param_5->InitialTransform).Translation.XY.m128d_f64[0];
  dVar74 = (param_5->InitialTransform).Translation.XY.m128d_f64[1];
  (param_5->LocalToWorld).Rotation.ZW.m128d_f64[0] = dVar78;
  (param_5->LocalToWorld).Rotation.ZW.m128d_f64[1] = dVar75;
  dVar78 = (param_5->InitialTransform).Translation.ZW.m128d_f64[0];
  dVar75 = (param_5->InitialTransform).Translation.ZW.m128d_f64[1];
  (param_5->LocalToWorld).Translation.XY.m128d_f64[0] = dVar62;
  (param_5->LocalToWorld).Translation.XY.m128d_f64[1] = dVar74;
  dVar62 = (param_5->InitialTransform).Scale3D.XY.m128d_f64[0];
  dVar74 = (param_5->InitialTransform).Scale3D.XY.m128d_f64[1];
  (param_5->LocalToWorld).Translation.ZW.m128d_f64[0] = dVar78;
  (param_5->LocalToWorld).Translation.ZW.m128d_f64[1] = dVar75;
  uVar8 = *(undefined4 *)(param_5->InitialTransform).Scale3D.ZW.m128d_f64;
  uVar9 = *(undefined4 *)((longlong)(param_5->InitialTransform).Scale3D.ZW.m128d_f64 + 4);
  uVar80 = *(undefined4 *)((param_5->InitialTransform).Scale3D.ZW.m128d_f64 + 1);
  uVar81 = *(undefined4 *)((longlong)(param_5->InitialTransform).Scale3D.ZW.m128d_f64 + 0xc);
  (param_5->LocalToWorld).Scale3D.XY.m128d_f64[0] = dVar62;
  (param_5->LocalToWorld).Scale3D.XY.m128d_f64[1] = dVar74;
  *(undefined4 *)(param_5->LocalToWorld).Scale3D.ZW.m128d_f64 = uVar8;
  *(undefined4 *)((longlong)(param_5->LocalToWorld).Scale3D.ZW.m128d_f64 + 4) = uVar9;
  *(undefined4 *)((param_5->LocalToWorld).Scale3D.ZW.m128d_f64 + 1) = uVar80;
  *(undefined4 *)((longlong)(param_5->LocalToWorld).Scale3D.ZW.m128d_f64 + 0xc) = uVar81;
  local_978 = param_2;
  local_970 = param_1;
  local_8b0 = param_4;
  local_8a8 = param_3;
  (**(code **)(param_2->_padding_ + 0x358))(param_2,1,local_620,local_638);
  pUVar32 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_3);
  if (pUVar32 != (USkeletalMesh *)0x0) {
    lVar33 = (**(code **)(pUVar32->_padding_ + 0x400))(pUVar32);
    puVar34 = (undefined8 *)(**(code **)(pUVar32->_padding_ + 0x398))(pUVar32);
    if ((((param_4 != (UPhysicsAsset *)0x0) && (lVar33 != 0)) && (puVar34 != (undefined8 *)0x0)) &&
       (*(int *)(puVar34 + 1) != 0)) {
      this_03 = (FReferenceSkeleton *)(lVar33 + 0x48);
      local_960 = this_03;
      if ((*(int *)(puVar34 + 1) < 1) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(int *)(*(longlong *)*puVar34 + 0x18) < 1) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar31 = (param_4->SkeletalBodySetups).ArrayNum;
      pFVar1 = &param_5->BoneHierarchy;
      piVar36 = &(param_5->BoneHierarchy).ImplicitGroups.ArrayMax;
      pFVar50 = (pFVar1->ImplicitGroups).AllocatorInstance.Data;
      iVar55 = (param_5->BoneHierarchy).ImplicitGroups.ArrayNum;
      local_8c8 = pFVar1;
      if ((param_5->BoneHierarchy).ImplicitGroups.ArrayMax < 0) {
        DestructItems<TUniquePtr<FAnalyticImplicitGroup,TDefaultDelete<FAnalyticImplicitGroup>_>,int>
                  ((TUniquePtr<FAnalyticImplicitGroup,TDefaultDelete<FAnalyticImplicitGroup>_> *)
                   pFVar50,iVar55);
        (param_5->BoneHierarchy).ImplicitGroups.ArrayNum = 0;
        if (*piVar36 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,(ForAnyElementType *)pFVar1,0,piVar36);
        }
      }
      else {
        DestructItems<TUniquePtr<FAnalyticImplicitGroup,TDefaultDelete<FAnalyticImplicitGroup>_>,int>
                  ((TUniquePtr<FAnalyticImplicitGroup,TDefaultDelete<FAnalyticImplicitGroup>_> *)
                   pFVar50,iVar55);
        (param_5->BoneHierarchy).ImplicitGroups.ArrayNum = 0;
      }
      if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
      }
      if (*piVar36 < (int)uVar31) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar31,(ForAnyElementType *)pFVar1,
                   (param_5->BoneHierarchy).ImplicitGroups.ArrayNum,piVar36);
      }
      iVar55 = (param_5->BoneHierarchy).BoneIndices.ArrayMax;
      piVar36 = &(param_5->BoneHierarchy).BoneIndices.ArrayMax;
      (param_5->BoneHierarchy).BoneIndices.ArrayNum = 0;
      if (iVar55 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(param_5->BoneHierarchy).BoneIndices.AllocatorInstance,0,piVar36);
      }
      if (*piVar36 < (int)uVar31) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar31,&(param_5->BoneHierarchy).BoneIndices.AllocatorInstance,
                   (param_5->BoneHierarchy).BoneIndices.ArrayNum,piVar36);
      }
      TSet<TTuple<int,FAnalyticImplicitGroup_*>,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<int,FAnalyticImplicitGroup_*>,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>,FDefaultSetAllocator>
               *)&(param_5->BoneHierarchy).BoneToShapeGroup);
      TSet<TTuple<int,FAnalyticImplicitGroup_*>,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<int,FAnalyticImplicitGroup_*>,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>,FDefaultSetAllocator>
                 *)&(param_5->BoneHierarchy).BoneToShapeGroup,uVar31);
      uVar9 = _UNK_15066df7c;
      uVar8 = _UNK_15066df78;
      uVar54 = __xmm_80000000000000008000000000000000._4_4_;
      uVar31 = (uint)__xmm_80000000000000008000000000000000;
      fVar21 = __real_322bcc77;
      local_8dc = (local_8b0->SkeletalBodySetups).ArrayNum;
      uVar47 = (ulonglong)(int)local_8dc;
      pFVar56 = (local_8b0->SkeletalBodySetups).AllocatorInstance.Data;
      uVar80 = (undefined4)__real_3e45798ee0000000;
      uVar81 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      pFVar50 = pFVar56 + uVar47 * 8;
      local_940.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_940.ArrayNum = 0;
      local_940.ArrayMax = 0;
      fVar72 = __real_38d1b717;
      uVar45 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar79 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar75 = __real_3f1a36e2e0000000;
      dVar74 = ___xmm_00000000000000003ff0000000000000;
      dVar76 = _UNK_150689518;
      dVar62 = ___xmm_3ff00000000000003ff0000000000000;
      dVar78 = _UNK_150689688;
      local_8c0 = pFVar50;
      while( true ) {
        pFVar37 = (FAnalyticImplicitGroup *)0x0;
        local_8b8 = pFVar56;
        if ((local_8b0->SkeletalBodySetups).ArrayNum != (int)uVar47) {
          local_990 = 0;
          `TCheckedPointerIterator<USkeletalBodySetup_*_const,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_990);
        }
        if (pFVar56 == pFVar50) break;
        lVar33 = *(longlong *)pFVar56;
        local_880 = lVar33;
        if (lVar33 != 0) {
          pFVar35 = ::operator_new(0x140);
          if (pFVar35 != (FAnalyticImplicitGroup *)0x0) {
            iVar55 = -1;
            if ((*(FName *)(lVar33 + 0x28) != (FName)0x0) &&
               (piVar36 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                  *)&this_03->FinalNameToIndexMap,*(FName *)(lVar33 + 0x28)),
               piVar36 != (int *)0x0)) {
              iVar55 = *piVar36;
            }
            pFVar37 = FAnalyticImplicitGroup::FAnalyticImplicitGroup
                                (pFVar35,(FName *)(lVar33 + 0x28),iVar55);
          }
          local_998.Ptr = pFVar37;
          if (((pFVar37->BoneIndex < 0) ||
              ((this_03->FinalRefBoneInfo).ArrayNum <= pFVar37->BoneIndex)) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ReferenceSkeleton.IsValidIndex(AnalyticShapeGroup->GetBoneIndex())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\PhysicsAssetSimulation.cpp"
                                  ,0x44,L""), bVar29)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_518.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_518.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_518.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_518.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          local_518.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_518.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          uVar30 = (local_998.Ptr)->BoneIndex;
          uVar64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar65 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar66 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar67 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          dVar61 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          if ((-1 < (int)uVar30) && ((int)uVar30 < (this_03->FinalRefBoneInfo).ArrayNum)) {
            local_988 = FReferenceSkeleton::GetParentIndex(this_03,uVar30);
            (local_998.Ptr)->ParentBoneIndex = local_988;
            uVar73 = 0;
            if ((int)uVar30 < (this_03->FinalRefBonePose).ArrayNum) {
              uVar73 = ~uVar30 >> 0x1f;
            }
            if ((uVar73 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar50 = (this_03->FinalRefBonePose).AllocatorInstance.Data;
            lVar46 = (longlong)(int)uVar30 * 0x60;
            dVar61 = *(double *)(pFVar50 + lVar46 + 8);
            dVar77 = *(double *)(pFVar50 + lVar46 + 0x10);
            dVar10 = *(double *)(pFVar50 + lVar46 + 0x10 + 8);
            dVar11 = *(double *)(pFVar50 + lVar46 + 0x20);
            dVar12 = *(double *)(pFVar50 + lVar46 + 0x20 + 8);
            dVar13 = *(double *)(pFVar50 + lVar46 + 0x30);
            dVar14 = *(double *)(pFVar50 + lVar46 + 0x30 + 8);
            dVar15 = *(double *)(pFVar50 + lVar46 + 0x40);
            dVar16 = *(double *)(pFVar50 + lVar46 + 0x40 + 8);
            dVar17 = *(double *)(pFVar50 + lVar46 + 0x50);
            dVar18 = *(double *)(pFVar50 + lVar46 + 0x50 + 8);
            ((local_998.Ptr)->RefBoneXf).Rotation.XY.m128d_f64[0] = *(double *)(pFVar50 + lVar46);
            ((local_998.Ptr)->RefBoneXf).Rotation.XY.m128d_f64[1] = dVar61;
            ((local_998.Ptr)->RefBoneXf).Rotation.ZW.m128d_f64[0] = dVar77;
            ((local_998.Ptr)->RefBoneXf).Rotation.ZW.m128d_f64[1] = dVar10;
            ((local_998.Ptr)->RefBoneXf).Translation.XY.m128d_f64[0] = dVar11;
            ((local_998.Ptr)->RefBoneXf).Translation.XY.m128d_f64[1] = dVar12;
            ((local_998.Ptr)->RefBoneXf).Translation.ZW.m128d_f64[0] = dVar13;
            ((local_998.Ptr)->RefBoneXf).Translation.ZW.m128d_f64[1] = dVar14;
            ((local_998.Ptr)->RefBoneXf).Scale3D.XY.m128d_f64[0] = dVar15;
            ((local_998.Ptr)->RefBoneXf).Scale3D.XY.m128d_f64[1] = dVar16;
            ((local_998.Ptr)->RefBoneXf).Scale3D.ZW.m128d_f64[0] = dVar17;
            ((local_998.Ptr)->RefBoneXf).Scale3D.ZW.m128d_f64[1] = dVar18;
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&local_940,(int *)&local_988);
            local_518.Rotation.XY.m128d_f64 = *&((local_998.Ptr)->RefBoneXf).Rotation.XY.m128d_f64;
            local_518.Rotation.ZW.m128d_f64 = *&((local_998.Ptr)->RefBoneXf).Rotation.ZW.m128d_f64;
            local_518.Translation.XY.m128d_f64 =
                 *&((local_998.Ptr)->RefBoneXf).Translation.XY.m128d_f64;
            local_518.Translation.ZW.m128d_f64 =
                 *&((local_998.Ptr)->RefBoneXf).Translation.ZW.m128d_f64;
            local_518.Scale3D.XY.m128d_f64 = *&((local_998.Ptr)->RefBoneXf).Scale3D.XY.m128d_f64;
            local_518.Scale3D.ZW.m128d_f64 = *&((local_998.Ptr)->RefBoneXf).Scale3D.ZW.m128d_f64;
            uVar30 = local_988;
            while (local_988 = uVar30, uVar30 != 0xffffffff) {
              uVar73 = 0;
              if ((int)uVar30 < (this_03->FinalRefBonePose).ArrayNum) {
                uVar73 = ~uVar30 >> 0x1f;
              }
              if ((uVar73 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              UE::Math::TTransform<double>::Multiply
                        (&local_518,&local_518,
                         (TTransform<double> *)
                         ((this_03->FinalRefBonePose).AllocatorInstance.Data +
                         (longlong)(int)uVar30 * 0x60));
              uVar30 = FReferenceSkeleton::GetParentIndex(this_03,local_988);
            }
            UE::Math::TTransform<double>::Multiply(&local_518,&local_518,&param_5->InitialTransform)
            ;
            uVar64 = local_518.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar65 = local_518.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar66 = local_518.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar67 = local_518.Scale3D.XY.m128d_f64[1]._4_4_;
            dVar61 = local_518.Scale3D.ZW.m128d_f64[0];
          }
          cVar4 = *(char *)(lVar33 + 0x30);
          if (cVar4 == '\0') {
            (local_998.Ptr)->RigidBodyState = Chaos_Object_UserDefined;
          }
          else if (cVar4 == '\x01') {
            (local_998.Ptr)->RigidBodyState = Chaos_Object_Kinematic;
          }
          else if (cVar4 == '\x02') {
            (local_998.Ptr)->RigidBodyState = Chaos_Object_Dynamic;
          }
          local_930._0_4_ = uVar64;
          local_930._4_4_ = uVar65;
          local_930._8_4_ = uVar66;
          local_930._12_4_ = uVar67;
          local_930._s_0.Z = dVar61;
          local_718 = uVar64;
          uStack_714 = uVar65;
          uStack_710 = uVar66;
          uStack_70c = uVar67;
          local_708 = dVar61;
          FAnalyticImplicitGroup::Init
                    (local_998.Ptr,
                     *(int *)(lVar33 + 0x80) * 3 + *(int *)(lVar33 + 0x70) + *(int *)(lVar33 + 0x60)
                     + *(int *)(lVar33 + 0x50) + *(int *)(lVar33 + 0x40),
                     param_5->CollisionType == Chaos_Surface_Volumetric);
          uVar30 = *(int *)(lVar33 + 0x40) + *(int *)(lVar33 + 0x80) * 2;
          if (uVar30 != 0) {
            if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
            }
            if (((local_998.Ptr)->Spheres).ArrayMax < (int)uVar30) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar30,&((local_998.Ptr)->Spheres).AllocatorInstance,
                         ((local_998.Ptr)->Spheres).ArrayNum,&((local_998.Ptr)->Spheres).ArrayMax);
            }
            iVar55 = *(int *)(lVar33 + 0x40);
            lVar46 = *(longlong *)(lVar33 + 0x38);
            lVar52 = (longlong)iVar55 * 0x50 + lVar46;
            while( true ) {
              if (*(int *)(lVar33 + 0x40) != iVar55) {
                local_98f = 0;
                `TCheckedPointerIterator<FKSphereElem_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_98f);
              }
              this_03 = local_960;
              fVar72 = __real_38d1b717;
              if (lVar46 == lVar52) break;
              dVar61 = (double)CONCAT44(local_930._4_4_,local_930._0_4_) -
                       (double)CONCAT44(local_930._12_4_,local_930._8_4_);
              if (((dVar75 <= (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar79,
                                               SUB84(dVar61,0) & uVar45)) ||
                  (dVar61 = (double)CONCAT44(local_930._4_4_,local_930._0_4_) - local_930._s_0.Z,
                  dVar75 <= (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar79,
                                             SUB84(dVar61,0) & uVar45))) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("FMath::Abs(Scale3D[0] - Scale3D[1]) < (1.e-4f) && FMath::Abs(Scale3D[0] - Scale3D[2]) < (1.e-4f)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\PhysicsAssetSimulation.cpp"
                                      ,0x85,L""), bVar29)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              TVar24.Ptr = local_998.Ptr;
              dVar61 = (double)*(float *)(lVar46 + 0x48) *
                       (double)CONCAT44(local_930._4_4_,local_930._0_4_);
              if ((double)CONCAT44(uVar81,uVar80) <= dVar61) {
                local_398.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_398.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_398.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_398.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                local_398.Translation.ZW.m128d_f64[0] = *(double *)(lVar46 + 0x40);
                local_398.Translation.XY.m128d_f64[0] = *(double *)(lVar46 + 0x30);
                local_398.Translation.XY.m128d_f64[1] = *(double *)(lVar46 + 0x38);
                local_398.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_398.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_398.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_398.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                local_398.Translation.ZW.m128d_f64[1] = 0.0;
                pTVar38 = ::operator_new(0x30);
                pTVar39 = (TSphere<double,3> *)0x0;
                if (pTVar38 != (TSphere<double,3> *)0x0) {
                  local_7c0._16_8_ = 0;
                  local_7c0._0_8_ = 0;
                  local_7c0._8_8_ = 0;
                  pTVar39 = Chaos::TSphere<double,3>::TSphere<double,3>(pTVar38,&local_7c0,dVar61);
                }
                FAnalyticImplicitGroup::Add(TVar24.Ptr,&local_398,pTVar39);
                if (4 < (byte)USkeletalMeshSimulationComponentLogging._0_1_) {
                  local_818 = (FName)param_2->_padding_;
                  ::FName::ToString(&local_818,&local_800);
                  ::FString::operator[](&local_800,0);
                  UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,
                             (FLogCategoryBase *)&USkeletalMeshSimulationComponentLogging);
                  if (local_800.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_800.Data.AllocatorInstance.Data);
                  }
                }
              }
              lVar46 = lVar46 + 0x50;
            }
          }
          uVar30 = *(uint *)(lVar33 + 0x50);
          if (uVar30 != 0) {
            if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
            }
            if (((local_998.Ptr)->Boxes).ArrayMax < (int)uVar30) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar30,&((local_998.Ptr)->Boxes).AllocatorInstance,
                         ((local_998.Ptr)->Boxes).ArrayNum,&((local_998.Ptr)->Boxes).ArrayMax);
            }
            pAVar27 = local_978;
            dVar74 = _UNK_150689688;
            dVar75 = ___xmm_3ff00000000000003ff0000000000000;
            dVar78 = _UNK_150689518;
            dVar62 = ___xmm_00000000000000003ff0000000000000;
            fVar72 = __real_3f000000;
            iVar55 = *(int *)(lVar33 + 0x50);
            this_01 = *(FKBoxElem **)(lVar33 + 0x48);
            pFVar57 = this_01 + iVar55;
            while( true ) {
              if (*(int *)(lVar33 + 0x50) != iVar55) {
                local_98e = 0;
                `TCheckedPointerIterator<FKBoxElem_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_98e);
              }
              if (this_01 == pFVar57) break;
              FKBoxElem::GetFinalScaled
                        (this_01,&local_788,(TVector<double> *)&local_930._s_0,
                         &UE::Math::TTransform<double>::Identity);
              if (((fVar21 <= local_788.X) && (fVar21 <= local_788.Y)) && (fVar21 <= local_788.Z)) {
                pTVar40 = UE::Math::TRotator<double>::Quaternion(&this_01->Rotation,&local_538);
                TVar24.Ptr = local_998.Ptr;
                local_338.Translation.ZW.m128d_f64[0] = (this_01->Center).field0_0x0._s_0.Z;
                local_698 = pTVar40->X;
                dStack_690 = pTVar40->Y;
                local_688 = pTVar40->Z;
                dStack_680 = pTVar40->W;
                uVar3 = *(undefined8 *)((longlong)&(this_01->Center).field0_0x0 + 8);
                local_338.Translation.XY.m128d_f64[0]._0_4_ =
                     *(undefined4 *)&(this_01->Center).field0_0x0;
                local_338.Translation.XY.m128d_f64[0]._4_4_ =
                     *(undefined4 *)((longlong)&(this_01->Center).field0_0x0 + 4);
                local_338.Translation.XY.m128d_f64[1]._0_4_ = (undefined4)uVar3;
                local_338.Translation.XY.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20)
                ;
                dVar76 = (double)(local_788.X * fVar72);
                dVar77 = (double)(local_788.Z * fVar72);
                local_338.Translation.ZW.m128d_f64[1] = 0.0;
                local_338.Scale3D.XY.m128d_f64[0] = dVar75;
                local_338.Scale3D.XY.m128d_f64[1] = dVar74;
                local_338.Scale3D.ZW.m128d_f64[0] = dVar62;
                local_338.Scale3D.ZW.m128d_f64[1] = dVar78;
                dVar61 = (double)(local_788.Y * fVar72);
                local_338.Rotation.XY.m128d_f64[0] = local_698;
                local_338.Rotation.XY.m128d_f64[1] = dStack_690;
                local_338.Rotation.ZW.m128d_f64[0] = local_688;
                local_338.Rotation.ZW.m128d_f64[1] = dStack_680;
                this = ::operator_new(0x50);
                if (this != (TBox<double,3> *)0x0) {
                  Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\x01');
                  this->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
                  *(ulonglong *)&(this->AABB).MMin =
                       CONCAT44((uint)((ulonglong)dVar76 >> 0x20) ^ uVar54,SUB84(dVar76,0) ^ uVar31)
                  ;
                  *(ulonglong *)&(this->AABB).MMin.field_0x8 =
                       CONCAT44((uint)((ulonglong)dVar61 >> 0x20) ^ uVar54,SUB84(dVar61,0) ^ uVar31)
                  ;
                  *(ulonglong *)&(this->AABB).MMin.field_0x10 =
                       CONCAT44((uint)((ulonglong)dVar77 >> 0x20) ^ uVar54,SUB84(dVar77,0) ^ uVar31)
                  ;
                  *(double *)&(this->AABB).MMax = dVar76;
                  *(double *)&(this->AABB).MMax.field_0x8 = dVar61;
                  *(double *)&(this->AABB).MMax.field_0x10 = dVar77;
                }
                FAnalyticImplicitGroup::Add(TVar24.Ptr,&local_338,this);
                if (4 < (byte)USkeletalMeshSimulationComponentLogging._0_1_) {
                  local_8a0 = (FName)pAVar27->_padding_;
                  ::FName::ToString(&local_8a0,&local_860);
                  iVar44 = local_860.Data.ArrayNum + -1;
                  if (local_860.Data.ArrayNum == 0) {
                    iVar44 = 0;
                  }
                  if ((iVar44 < 1) &&
                     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValidIndex(Index)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                          ,0x107,
                                          L"String index out of bounds: Index %i from a string with a length of %i"
                                         ), bVar29)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,
                             (FLogCategoryBase *)&USkeletalMeshSimulationComponentLogging);
                  if (local_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_860.Data.AllocatorInstance.Data);
                  }
                }
              }
              FKBoxElem::~FKBoxElem(&local_788);
              this_01 = this_01 + 1;
            }
            uVar80 = (undefined4)__real_3e45798ee0000000;
            uVar81 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
            this_03 = local_960;
            param_2 = local_978;
            fVar72 = __real_38d1b717;
            uVar45 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            uVar79 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            dVar75 = __real_3f1a36e2e0000000;
            dVar74 = ___xmm_00000000000000003ff0000000000000;
            dVar76 = _UNK_150689518;
            dVar62 = ___xmm_3ff00000000000003ff0000000000000;
            dVar78 = _UNK_150689688;
          }
          uVar30 = *(uint *)(lVar33 + 0x60);
          if (uVar30 != 0) {
            if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
            }
            if (((local_998.Ptr)->Spheres).ArrayMax < (int)uVar30) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar30,&((local_998.Ptr)->Spheres).AllocatorInstance,
                         ((local_998.Ptr)->Spheres).ArrayNum,&((local_998.Ptr)->Spheres).ArrayMax);
            }
            iVar55 = *(int *)(lVar33 + 0x60);
            lVar46 = *(longlong *)(lVar33 + 0x58);
            lVar52 = (longlong)iVar55 * 0x68 + lVar46;
            while( true ) {
              if (*(int *)(lVar33 + 0x60) != iVar55) {
                local_98d = 0;
                `TCheckedPointerIterator<FKSphylElem_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_98d);
              }
              this_03 = local_960;
              fVar72 = __real_38d1b717;
              if (lVar46 == lVar52) break;
              dVar61 = (double)CONCAT44(local_930._4_4_,local_930._0_4_) -
                       (double)CONCAT44(local_930._12_4_,local_930._8_4_);
              if (((dVar75 <= (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar79,
                                               SUB84(dVar61,0) & uVar45)) ||
                  (dVar61 = (double)CONCAT44(local_930._4_4_,local_930._0_4_) - local_930._s_0.Z,
                  dVar75 <= (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar79,
                                             SUB84(dVar61,0) & uVar45))) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("FMath::Abs(Scale3D[0] - Scale3D[1]) < (1.e-4f) && FMath::Abs(Scale3D[0] - Scale3D[2]) < (1.e-4f)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\PhysicsAssetSimulation.cpp"
                                      ,0xcc,L""), bVar29)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              dVar61 = (double)*(float *)(lVar46 + 0x60) *
                       (double)CONCAT44(local_930._4_4_,local_930._0_4_);
              if ((double)CONCAT44(uVar81,uVar80) <= dVar61) {
                pTVar40 = UE::Math::TRotator<double>::Quaternion
                                    ((TRotator<double> *)(lVar46 + 0x48),&local_578);
                TVar24.Ptr = local_998.Ptr;
                local_2d8.Translation.ZW.m128d_f64[0] = *(double *)(lVar46 + 0x40);
                local_678 = pTVar40->X;
                dStack_670 = pTVar40->Y;
                local_668 = pTVar40->Z;
                dStack_660 = pTVar40->W;
                local_2d8.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(lVar46 + 0x30);
                local_2d8.Translation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)(lVar46 + 0x34);
                local_2d8.Translation.XY.m128d_f64[1]._0_4_ =
                     (undefined4)*(undefined8 *)(lVar46 + 0x38);
                local_2d8.Translation.XY.m128d_f64[1]._4_4_ =
                     (undefined4)((ulonglong)*(undefined8 *)(lVar46 + 0x38) >> 0x20);
                local_2d8.Translation.ZW.m128d_f64[1] = 0.0;
                local_2d8.Rotation.XY.m128d_f64[0] = local_678;
                local_2d8.Rotation.XY.m128d_f64[1] = dStack_670;
                local_2d8.Rotation.ZW.m128d_f64[0] = local_668;
                local_2d8.Rotation.ZW.m128d_f64[1] = dStack_660;
                local_2d8.Scale3D.XY.m128d_f64[0] = dVar62;
                local_2d8.Scale3D.XY.m128d_f64[1] = dVar78;
                local_2d8.Scale3D.ZW.m128d_f64[0] = dVar74;
                local_2d8.Scale3D.ZW.m128d_f64[1] = dVar76;
                pTVar38 = ::operator_new(0x30);
                pTVar39 = (TSphere<double,3> *)0x0;
                if (pTVar38 != (TSphere<double,3> *)0x0) {
                  local_7a8._16_8_ = 0;
                  local_7a8._0_8_ = 0;
                  local_7a8._8_8_ = 0;
                  pTVar39 = Chaos::TSphere<double,3>::TSphere<double,3>(pTVar38,&local_7a8,dVar61);
                }
                FAnalyticImplicitGroup::Add(TVar24.Ptr,&local_2d8,pTVar39);
                if (4 < (byte)USkeletalMeshSimulationComponentLogging._0_1_) {
                  local_898 = (FName)param_2->_padding_;
                  ::FName::ToString(&local_898,&local_7f0);
                  ::FString::operator[](&local_7f0,0);
                  UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,
                             (FLogCategoryBase *)&USkeletalMeshSimulationComponentLogging);
                  if (local_7f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_7f0.Data.AllocatorInstance.Data);
                  }
                }
              }
              lVar46 = lVar46 + 0x68;
            }
          }
          uVar30 = *(uint *)(lVar33 + 0x80);
          if (uVar30 != 0) {
            if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
            }
            if (((local_998.Ptr)->TaperedCylinders).ArrayMax < (int)uVar30) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar30,&((local_998.Ptr)->TaperedCylinders).AllocatorInstance,
                         ((local_998.Ptr)->TaperedCylinders).ArrayNum,
                         &((local_998.Ptr)->TaperedCylinders).ArrayMax);
            }
            pAVar27 = local_978;
            fVar22 = __real_3f000000;
            iVar55 = *(int *)(lVar33 + 0x80);
            this_02 = *(FKTaperedCapsuleElem **)(lVar33 + 0x78);
            pFVar58 = this_02 + iVar55;
            while( true ) {
              if (*(int *)(lVar33 + 0x80) != iVar55) {
                local_98c = 0;
                `TCheckedPointerIterator<FKTaperedCapsuleElem_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_98c);
              }
              this_03 = local_960;
              dVar75 = __real_3f1a36e2e0000000;
              if (this_02 == pFVar58) break;
              FKTaperedCapsuleElem::GetScaledRadii
                        (this_02,(TVector<double> *)&local_930._s_0,&local_984,local_980);
              if ((fVar21 <= local_984) || (fVar21 <= local_980[0])) {
                pTVar40 = UE::Math::TRotator<double>::Quaternion(&this_02->Rotation,&local_558);
                local_4b8.Translation.ZW.m128d_f64[0] = (this_02->Center).field0_0x0._s_0.Z;
                local_658 = pTVar40->X;
                dStack_650 = pTVar40->Y;
                local_648 = pTVar40->Z;
                dStack_640 = pTVar40->W;
                local_4b8.Translation.XY.m128d_f64[0]._0_4_ =
                     *(undefined4 *)&(this_02->Center).field0_0x0;
                local_4b8.Translation.XY.m128d_f64[0]._4_4_ =
                     *(undefined4 *)((longlong)&(this_02->Center).field0_0x0 + 4);
                uVar3 = *(undefined8 *)((longlong)&(this_02->Center).field0_0x0 + 8);
                local_4b8.Translation.XY.m128d_f64[1]._0_4_ = (undefined4)uVar3;
                local_4b8.Translation.XY.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20)
                ;
                local_4b8.Translation.ZW.m128d_f64[1] = 0.0;
                local_4b8.Rotation.XY.m128d_f64[0] = local_658;
                local_4b8.Rotation.XY.m128d_f64[1] = dStack_650;
                local_4b8.Rotation.ZW.m128d_f64[0] = local_648;
                local_4b8.Rotation.ZW.m128d_f64[1] = dStack_640;
                local_4b8.Scale3D.XY.m128d_f64[0] = dVar62;
                local_4b8.Scale3D.XY.m128d_f64[1] = dVar78;
                local_4b8.Scale3D.ZW.m128d_f64[0] = dVar74;
                local_4b8.Scale3D.ZW.m128d_f64[1] = dVar76;
                fVar60 = FKTaperedCapsuleElem::GetScaledCylinderLength
                                   (this_02,(TVector<double> *)&local_930._s_0);
                TVar24.Ptr = local_998.Ptr;
                dVar75 = (double)(fVar60 * fVar22);
                this_00 = ::operator_new(0x90);
                fVar26 = local_980[0];
                fVar25 = local_984;
                if (this_00 != (FTaperedCylinder *)0x0) {
                  uVar30 = SUB84(dVar75,0) ^ uVar31;
                  uVar73 = (uint)((ulonglong)dVar75 >> 0x20) ^ uVar54;
                  local_7d0 = CONCAT44(uVar73,uVar30);
                  local_7e0 = uVar31;
                  uStack_7dc = uVar54;
                  uStack_7d8 = uVar8;
                  uStack_7d4 = uVar9;
                  Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)this_00,3,'\t');
                  dVar78 = __real_3ff0000000000000;
                  this_00->_padding_ = (longlong)&___7FTaperedCylinder_Chaos__6B_;
                  local_820 = dVar75 - (double)CONCAT44(uVar73,uVar30);
                  dVar62 = local_820 * local_820;
                  if (dVar62 == dVar78) {
LAB_1463acac8:
                    dVar62 = 0.0;
                    uVar64 = 0;
                    uVar65 = 0;
                    local_830._8_8_ = 0;
                  }
                  else {
                    if ((double)CONCAT44(uVar81,uVar80) <= dVar62) {
                      local_7c8 = dVar78 / SQRT(dVar62);
                      local_820 = local_7c8 * local_820;
                      goto LAB_1463acac8;
                    }
                    uVar64 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                    uVar65 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                    local_820 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    dVar62 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
                    local_830 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
                  }
                  *(undefined4 *)&(this_00->MPlane1).MX = 0x80000000;
                  *(undefined4 *)&(this_00->MPlane1).MX.field_0x4 = 0x80000000;
                  *(float *)&(this_00->MPlane1).MX.field_0x8 =
                       (float)(double)CONCAT44(uVar73,uVar30);
                  uVar23 = __xmm_80000000800000008000000080000000;
                  *(ulonglong *)&(this_00->MPlane1).MNormal =
                       CONCAT44((float)dVar62,(float)(double)CONCAT44(uVar65,uVar64));
                  *(float *)&(this_00->MPlane1).MNormal.field_0x8 = (float)local_820;
                  uVar51 = *(uint *)&(this_00->MPlane1).MNormal;
                  uVar53 = *(uint *)&(this_00->MPlane1).MNormal.field_0x4;
                  uVar2 = *(uint *)&(this_00->MPlane1).MNormal.field_0x8;
                  *(undefined8 *)&(this_00->MPlane2).MX = 0;
                  *(float *)&(this_00->MPlane2).MX.field_0x8 = fVar60 * fVar22;
                  *(uint *)&(this_00->MPlane2).MNormal = uVar51 ^ uVar23;
                  dVar62 = dVar75 - (double)CONCAT44(uVar73,uVar30);
                  *(uint *)&(this_00->MPlane2).MNormal.field_0x4 = uVar53 ^ uVar23;
                  *(uint *)&(this_00->MPlane2).MNormal.field_0x8 = uVar2 ^ uVar23;
                  this_00->MHeight =
                       (float)(double)CONCAT44((uint)((ulonglong)dVar62 >> 0x20) & uVar79,
                                               SUB84(dVar62,0) & uVar45);
                  this_00->MRadius1 = fVar25;
                  this_00->MRadius2 = fVar26;
                  *(ulonglong *)&(this_00->MLocalBoundingBox).MMin = CONCAT44(uStack_7dc,local_7e0);
                  *(ulonglong *)&(this_00->MLocalBoundingBox).MMin.field_0x8 =
                       CONCAT44(uStack_7d4,uStack_7d8);
                  *(ulonglong *)&(this_00->MLocalBoundingBox).MMax = CONCAT44(uStack_7dc,local_7e0);
                  *(ulonglong *)&(this_00->MLocalBoundingBox).MMax.field_0x8 =
                       CONCAT44(uStack_7d4,uStack_7d8);
                  *(undefined8 *)&(this_00->MLocalBoundingBox).MMin.field_0x10 = local_7d0;
                  *(undefined8 *)&(this_00->MLocalBoundingBox).MMax.field_0x10 = local_7d0;
                  *(undefined1 *)((longlong)&this_00->_padding_ + 4) = 1;
                  dVar62 = *(double *)&(this_00->MLocalBoundingBox).MMin.field_0x10;
                  dVar78 = dVar75;
                  if (dVar62 <= dVar75) {
                    dVar78 = dVar62;
                  }
                  auVar63 = minpd(*(undefined1 (*) [16])&(this_00->MLocalBoundingBox).MMin,
                                  ZEXT816(0));
                  *(undefined1 (*) [16])&(this_00->MLocalBoundingBox).MMin = auVar63;
                  *(double *)&(this_00->MLocalBoundingBox).MMin.field_0x10 = dVar78;
                  dVar62 = *(double *)&(this_00->MLocalBoundingBox).MMax.field_0x10;
                  if (dVar62 <= dVar75) {
                    dVar62 = dVar75;
                  }
                  auVar63 = maxpd(*(undefined1 (*) [16])&(this_00->MLocalBoundingBox).MMax,
                                  ZEXT816(0));
                  *(undefined1 (*) [16])&(this_00->MLocalBoundingBox).MMax = auVar63;
                  *(double *)&(this_00->MLocalBoundingBox).MMax.field_0x10 = dVar62;
                  dVar78 = _UNK_150689688;
                  dVar62 = ___xmm_3ff00000000000003ff0000000000000;
                  fVar72 = this_00->MRadius2;
                  if (this_00->MRadius2 <= this_00->MRadius1) {
                    fVar72 = this_00->MRadius1;
                  }
                  local_6f0 = (double)fVar72;
                  local_608 = *(double *)&(this_00->MLocalBoundingBox).MMin - local_6f0;
                  local_700 = local_6f0 + *(double *)&(this_00->MLocalBoundingBox).MMax;
                  local_5f8 = *(double *)&(this_00->MLocalBoundingBox).MMin.field_0x10 - local_6f0;
                  dStack_6f8 = local_6f0 + *(double *)&(this_00->MLocalBoundingBox).MMax.field_0x8;
                  dStack_600 = *(double *)&(this_00->MLocalBoundingBox).MMin.field_0x8 - local_6f0;
                  local_6f0 = local_6f0 + *(double *)&(this_00->MLocalBoundingBox).MMax.field_0x10;
                  *(double *)&(this_00->MLocalBoundingBox).MMin = local_608;
                  *(double *)&(this_00->MLocalBoundingBox).MMin.field_0x8 = dStack_600;
                  *(double *)&(this_00->MLocalBoundingBox).MMax = local_700;
                  *(double *)&(this_00->MLocalBoundingBox).MMax.field_0x8 = dStack_6f8;
                  *(double *)&(this_00->MLocalBoundingBox).MMax.field_0x10 = local_6f0;
                  *(double *)&(this_00->MLocalBoundingBox).MMin.field_0x10 = local_5f8;
                  fVar72 = __real_38d1b717;
                }
                FAnalyticImplicitGroup::Add(TVar24.Ptr,&local_4b8,this_00);
                if (fVar72 < local_984) {
                  local_278.Translation.XY.m128d_f64[0] = (this_02->Center).field0_0x0._s_0.X;
                  local_278.Translation.XY.m128d_f64[1] = (this_02->Center).field0_0x0._s_0.Y;
                  uVar66 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                  uVar67 = (undefined4)
                           ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
                  ;
                  uVar64 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                  uVar65 = (undefined4)
                           ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
                  ;
                  local_278.Translation.ZW.m128d_f64[0] =
                       (this_02->Center).field0_0x0._s_0.Z - dVar75;
                  local_278.Rotation.XY.m128d_f64[1]._0_4_ = uVar66;
                  local_278.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_278.Rotation.XY.m128d_f64[1]._4_4_ = uVar67;
                  local_278.Rotation.ZW.m128d_f64[1]._0_4_ = uVar64;
                  local_278.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_278.Rotation.ZW.m128d_f64[1]._4_4_ = uVar65;
                  local_458.Rotation.XY.m128d_f64[1]._0_4_ = uVar66;
                  local_458.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_458.Rotation.XY.m128d_f64[1]._4_4_ = uVar67;
                  local_458.Rotation.ZW.m128d_f64[1]._0_4_ = uVar64;
                  local_458.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_458.Rotation.ZW.m128d_f64[1]._4_4_ = uVar65;
                  uVar66 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                  uVar67 = (undefined4)
                           ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
                  ;
                  uVar64 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                  uVar65 = (undefined4)
                           ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
                  ;
                  local_278.Translation.ZW.m128d_f64[1] = 0.0;
                  local_458.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_458.Translation.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                  local_458.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_458.Translation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                  local_278.Scale3D.XY.m128d_f64[1]._0_4_ = uVar66;
                  local_278.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_278.Scale3D.XY.m128d_f64[1]._4_4_ = uVar67;
                  local_278.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar64;
                  local_278.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_278.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar65;
                  local_458.Scale3D.XY.m128d_f64[1]._0_4_ = uVar66;
                  local_458.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_458.Scale3D.XY.m128d_f64[1]._4_4_ = uVar67;
                  local_458.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar64;
                  local_458.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_458.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar65;
                  UE::Math::TTransform<double>::Multiply(&local_458,&local_278,&local_4b8);
                  TVar24.Ptr = local_998.Ptr;
                  pTVar39 = ::operator_new(0x30);
                  fVar25 = local_984;
                  if (pTVar39 != (TSphere<double,3> *)0x0) {
                    Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)pTVar39,3,'\0');
                    pTVar39->_padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
                    *(undefined8 *)&pTVar39->Center = 0;
                    *(undefined4 *)&(pTVar39->Center).field_0x8 = 0;
                    fVar72 = __real_38d1b717;
                    *(float *)&pTVar39->_padding_ = fVar25;
                  }
                  FAnalyticImplicitGroup::Add(TVar24.Ptr,&local_458,pTVar39);
                }
                if (fVar72 < local_980[0]) {
                  local_218.Translation.ZW.m128d_f64[0] =
                       dVar75 + (this_02->Center).field0_0x0._s_0.Z;
                  uVar70 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                  uVar71 = (undefined4)
                           ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
                  ;
                  uVar68 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                  uVar69 = (undefined4)
                           ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
                  ;
                  local_218.Translation.XY.m128d_f64[0]._0_4_ =
                       *(undefined4 *)&(this_02->Center).field0_0x0;
                  local_218.Translation.XY.m128d_f64[0]._4_4_ =
                       *(undefined4 *)((longlong)&(this_02->Center).field0_0x0 + 4);
                  local_218.Translation.XY.m128d_f64[1]._0_4_ =
                       *(undefined4 *)((longlong)&(this_02->Center).field0_0x0 + 8);
                  local_218.Translation.XY.m128d_f64[1]._4_4_ =
                       (undefined4)
                       ((ulonglong)*(undefined8 *)((longlong)&(this_02->Center).field0_0x0 + 8) >>
                       0x20);
                  uVar66 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                  uVar67 = (undefined4)
                           ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
                  ;
                  uVar64 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                  uVar65 = (undefined4)
                           ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
                  ;
                  local_218.Translation.ZW.m128d_f64[1] = 0.0;
                  local_3f8.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_3f8.Translation.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                  local_3f8.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_3f8.Translation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                  local_218.Rotation.XY.m128d_f64[1]._0_4_ = uVar70;
                  local_218.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_218.Rotation.XY.m128d_f64[1]._4_4_ = uVar71;
                  local_218.Rotation.ZW.m128d_f64[1]._0_4_ = uVar68;
                  local_218.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_218.Rotation.ZW.m128d_f64[1]._4_4_ = uVar69;
                  local_218.Scale3D.XY.m128d_f64[1]._0_4_ = uVar66;
                  local_218.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_218.Scale3D.XY.m128d_f64[1]._4_4_ = uVar67;
                  local_218.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar64;
                  local_218.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_218.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar65;
                  local_3f8.Rotation.XY.m128d_f64[1]._0_4_ = uVar70;
                  local_3f8.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_3f8.Rotation.XY.m128d_f64[1]._4_4_ = uVar71;
                  local_3f8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar68;
                  local_3f8.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_3f8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar69;
                  local_3f8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar66;
                  local_3f8.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_3f8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar67;
                  local_3f8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar64;
                  local_3f8.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_3f8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar65;
                  UE::Math::TTransform<double>::Multiply(&local_3f8,&local_218,&local_4b8);
                  TVar24.Ptr = local_998.Ptr;
                  pTVar39 = ::operator_new(0x30);
                  fVar25 = local_980[0];
                  if (pTVar39 != (TSphere<double,3> *)0x0) {
                    Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)pTVar39,3,'\0');
                    pTVar39->_padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
                    *(undefined8 *)&pTVar39->Center = 0;
                    *(undefined4 *)&(pTVar39->Center).field_0x8 = 0;
                    fVar72 = __real_38d1b717;
                    *(float *)&pTVar39->_padding_ = fVar25;
                  }
                  FAnalyticImplicitGroup::Add(TVar24.Ptr,&local_3f8,pTVar39);
                }
                if (4 < (byte)USkeletalMeshSimulationComponentLogging._0_1_) {
                  local_890 = (FName)pAVar27->_padding_;
                  ::FName::ToString(&local_890,&local_850);
                  iVar44 = local_850.Data.ArrayNum + -1;
                  if (local_850.Data.ArrayNum == 0) {
                    iVar44 = 0;
                  }
                  if ((iVar44 < 1) &&
                     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValidIndex(Index)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                          ,0x107,
                                          L"String index out of bounds: Index %i from a string with a length of %i"
                                         ), bVar29)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  UE::Logging::Private::BasicLog<5>
                            ((FStaticBasicLogRecord *)&PTR_u_USkeletalMeshSi_1512866f8,
                             (FLogCategoryBase *)&USkeletalMeshSimulationComponentLogging);
                  if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_850.Data.AllocatorInstance.Data);
                  }
                }
              }
              this_02 = this_02 + 1;
              dVar74 = ___xmm_00000000000000003ff0000000000000;
              dVar76 = _UNK_150689518;
            }
          }
          uVar30 = *(uint *)(lVar33 + 0x70);
          if (uVar30 != 0) {
            if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
            }
            if (((local_998.Ptr)->ConvexHulls).ArrayMax < (int)uVar30) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar30,&((local_998.Ptr)->ConvexHulls).AllocatorInstance,
                         ((local_998.Ptr)->ConvexHulls).ArrayNum,
                         &((local_998.Ptr)->ConvexHulls).ArrayMax);
            }
            local_8e0 = *(uint *)(lVar33 + 0x70);
            uVar47 = (ulonglong)(int)local_8e0;
            lVar46 = *(longlong *)(lVar33 + 0x68);
            lVar52 = uVar47 * 0x100 + lVar46;
            local_888 = lVar52;
            while( true ) {
              if (*(int *)(lVar33 + 0x70) != (int)uVar47) {
                local_98b = 0;
                `TCheckedPointerIterator<FKConvexElem_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_98b);
              }
              this_03 = local_960;
              fVar72 = __real_38d1b717;
              dVar74 = ___xmm_00000000000000003ff0000000000000;
              dVar76 = _UNK_150689518;
              if (lVar46 == lVar52) break;
              iVar55 = *(int *)(lVar46 + 0x38);
              if (3 < iVar55) {
                local_5d8 = *(undefined8 *)(lVar46 + 0x90);
                uStack_5d0 = *(undefined8 *)(lVar46 + 0x98);
                uVar49 = 0;
                local_5c8 = *(undefined8 *)(lVar46 + 0xa0);
                uStack_5c0 = *(undefined8 *)(lVar46 + 0xa8);
                local_5b8 = *(undefined8 *)(lVar46 + 0xb0);
                uStack_5b0 = *(undefined8 *)(lVar46 + 0xb8);
                local_5a8 = *(undefined8 *)(lVar46 + 0xc0);
                uStack_5a0 = *(undefined8 *)(lVar46 + 200);
                local_950.Data = (FScriptContainerElement *)0x0;
                local_6e8 = *(undefined8 *)(lVar46 + 0xd0);
                uStack_6e0 = *(undefined8 *)(lVar46 + 0xd8);
                local_948 = 0;
                local_6d8 = *(undefined8 *)(lVar46 + 0xe0);
                local_6d0 = local_6e8;
                uStack_6c8 = uStack_6e0;
                local_6c0 = local_6d8;
                local_6b8 = local_6e8;
                uStack_6b0 = uStack_6e0;
                local_6a8 = local_6d8;
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,iVar55,&local_950,(int *)&local_948,
                           (int *)((longlong)&local_948 + 4));
                local_8e8 = '\0';
                local_8e7 = 0;
                local_8e3 = 0;
                local_918 = 0.0;
                dStack_910 = 0.0;
                local_8e1 = 0;
                uVar30 = 0;
                local_908 = 0.0;
                dStack_900 = 0.0;
                local_8f8 = 0.0;
                dStack_8f0 = 0.0;
                uVar47 = uVar49;
                do {
                  uVar51 = (uint)uVar47;
                  uVar53 = ~uVar51 >> 0x1f;
                  uVar73 = uVar30;
                  if ((int)uVar51 < *(int *)(lVar46 + 0x38)) {
                    uVar73 = uVar53;
                  }
                  if ((uVar73 == 0) &&
                     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar29)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  puVar34 = (undefined8 *)(uVar49 + *(longlong *)(lVar46 + 0x30));
                  uVar19 = *puVar34;
                  uVar20 = puVar34[1];
                  uVar3 = *(undefined8 *)(uVar49 + 0x10 + *(longlong *)(lVar46 + 0x30));
                  uVar73 = uVar30;
                  if ((int)uVar51 < (int)local_948) {
                    uVar73 = uVar53;
                  }
                  if ((uVar73 == 0) &&
                     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar29)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  *(undefined8 *)(local_950.Data + uVar49) = uVar19;
                  *(undefined8 *)(local_950.Data + uVar49 + 8) = uVar20;
                  *(undefined8 *)(local_950.Data + uVar49 + 0x10) = uVar3;
                  uVar73 = uVar30;
                  if ((int)uVar51 < (int)local_948) {
                    uVar73 = uVar53;
                  }
                  if ((uVar73 == 0) &&
                     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar29)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar52 = local_888;
                  if (local_8e8 == '\0') {
                    local_918 = *(double *)(local_950.Data + uVar49);
                    dStack_910 = *(double *)(local_950.Data + uVar49 + 8);
                    local_8e8 = '\x01';
                    local_908 = *(double *)(local_950.Data + uVar49 + 0x10);
                    dStack_900 = local_918;
                    local_8f8 = dStack_910;
                    dStack_8f0 = local_908;
                  }
                  else {
                    if (*(double *)(local_950.Data + uVar49) <= local_918) {
                      local_918 = *(double *)(local_950.Data + uVar49);
                    }
                    uVar64 = SUB84(dStack_910,0);
                    uVar65 = (undefined4)((ulonglong)dStack_910 >> 0x20);
                    dVar74 = *(double *)(local_950.Data + uVar49 + 8);
                    if (dVar74 <= dStack_910) {
                      uVar64 = SUB84(dVar74,0);
                      uVar65 = (undefined4)((ulonglong)dVar74 >> 0x20);
                    }
                    if (*(double *)(local_950.Data + uVar49 + 0x10) <= local_908) {
                      local_908 = *(double *)(local_950.Data + uVar49 + 0x10);
                    }
                    dStack_910 = (double)CONCAT44(uVar65,uVar64);
                    uVar64 = SUB84(dStack_900,0);
                    uVar65 = (undefined4)((ulonglong)dStack_900 >> 0x20);
                    dVar74 = *(double *)(local_950.Data + uVar49);
                    if (dStack_900 <= dVar74) {
                      uVar64 = SUB84(dVar74,0);
                      uVar65 = (undefined4)((ulonglong)dVar74 >> 0x20);
                    }
                    if (local_8f8 <= *(double *)(local_950.Data + uVar49 + 8)) {
                      local_8f8 = *(double *)(local_950.Data + uVar49 + 8);
                    }
                    dStack_900 = (double)CONCAT44(uVar65,uVar64);
                    uVar64 = SUB84(dStack_8f0,0);
                    uVar65 = (undefined4)((ulonglong)dStack_8f0 >> 0x20);
                    dVar74 = *(double *)(local_950.Data + uVar49 + 0x10);
                    if (dStack_8f0 <= dVar74) {
                      uVar64 = SUB84(dVar74,0);
                      uVar65 = (undefined4)((ulonglong)dVar74 >> 0x20);
                    }
                    dStack_8f0 = (double)CONCAT44(uVar65,uVar64);
                  }
                  uVar47 = (ulonglong)(uVar51 + 1);
                  uVar49 = uVar49 + 0x18;
                } while ((int)(uVar51 + 1) < iVar55);
                if (local_950.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_950.Data);
                }
              }
              lVar46 = lVar46 + 0x100;
              uVar47 = (ulonglong)local_8e0;
              lVar33 = local_880;
            }
          }
          FBoneHierarchy::Add(local_8c8,&local_998);
          TVar24.Ptr = local_998.Ptr;
          pFVar50 = local_8c0;
          param_5 = local_958;
          param_2 = local_978;
          if (local_998.Ptr != (FAnalyticImplicitGroup *)0x0) {
            FAnalyticImplicitGroup::~FAnalyticImplicitGroup(local_998.Ptr);
            ::operator_delete(TVar24.Ptr,0x140);
            pFVar50 = local_8c0;
            param_5 = local_958;
            param_2 = local_978;
          }
        }
        pFVar56 = local_8b8 + 8;
        uVar47 = (ulonglong)local_8dc;
      }
      pFVar59 = param_5;
      if (0 < local_940.ArrayNum) {
        lVar33 = 0;
        do {
          uVar54 = (uint)pFVar37;
          uVar31 = 0;
          if ((int)uVar54 < local_940.ArrayNum) {
            uVar31 = ~uVar54 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar31 = *(uint *)(local_940.AllocatorInstance.Data + lVar33);
          if (uVar31 != 0xffffffff) {
            if (*(int *)&(local_958->BoneHierarchy).BoneToShapeGroup.field_0x8 !=
                *(int *)&(local_958->BoneHierarchy).BoneToShapeGroup.field_0x34) {
              puVar6 = *(undefined1 **)&(local_958->BoneHierarchy).BoneToShapeGroup.field_0x40;
              puVar48 = &(local_958->BoneHierarchy).BoneToShapeGroup.field_0x38;
              if (puVar6 != (undefined1 *)0x0) {
                puVar48 = puVar6;
              }
              iVar55 = *(int *)(puVar48 +
                               (ulonglong)
                               (*(int *)&(local_958->BoneHierarchy).BoneToShapeGroup.field_0x48 - 1U
                               & uVar31) * 4);
              if (iVar55 != -1) {
                lVar46 = *(longlong *)&(local_958->BoneHierarchy).BoneToShapeGroup;
                do {
                  if (*(uint *)(lVar46 + (longlong)iVar55 * 0x18) == uVar31) goto LAB_1463ad566;
                  iVar55 = *(int *)(lVar46 + 0x10 + (longlong)iVar55 * 0x18);
                } while (iVar55 != -1);
              }
            }
            if ((((int)uVar31 < 0) || ((this_03->FinalRefBoneInfo).ArrayNum <= (int)uVar31)) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ReferenceSkeleton.IsValidIndex(ParentId)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\PhysicsAssetSimulation.cpp"
                                    ,0x12a,L""), bVar29)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar35 = ::operator_new(0x140);
            pFVar37 = (FAnalyticImplicitGroup *)0x0;
            if (pFVar35 != (FAnalyticImplicitGroup *)0x0) {
              uVar45 = 0;
              if ((int)uVar31 < (this_03->FinalRefBoneInfo).ArrayNum) {
                uVar45 = ~uVar31 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_878 = *(FName *)((this_03->FinalRefBoneInfo).AllocatorInstance.Data +
                                    (longlong)(int)uVar31 * 0xc);
              pFVar37 = FAnalyticImplicitGroup::FAnalyticImplicitGroup(pFVar35,&local_878,uVar31);
            }
            local_8d0.Ptr = pFVar37;
            local_968 = FReferenceSkeleton::GetParentIndex(this_03,uVar31);
            (local_8d0.Ptr)->ParentBoneIndex = local_968;
            FBoneHierarchy::Add(&param_5->BoneHierarchy,&local_8d0);
            if (4 < (byte)USkeletalMeshSimulationComponentLogging._0_1_) {
              local_870 = (FName)local_978->_padding_;
              ::FName::ToString(&local_870,&local_810);
              ::FString::operator[](&local_810,0);
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&USkeletalMeshSimulationComponentLogging)
              ;
              if (local_810.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_810.Data.AllocatorInstance.Data);
              }
            }
            if (local_968 != -1) {
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        (&local_940,&local_968);
            }
            TVar24.Ptr = local_8d0.Ptr;
            if (local_8d0.Ptr != (FAnalyticImplicitGroup *)0x0) {
              FAnalyticImplicitGroup::~FAnalyticImplicitGroup(local_8d0.Ptr);
              ::operator_delete(TVar24.Ptr,0x140);
            }
          }
LAB_1463ad566:
          pFVar37 = (FAnalyticImplicitGroup *)(ulonglong)(uVar54 + 1);
          lVar33 = lVar33 + 4;
          pFVar59 = local_958;
          param_2 = local_978;
        } while ((int)(uVar54 + 1) < local_940.ArrayNum);
      }
      if (((int)pFVar37 != local_940.ArrayNum) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == ParentIds.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\PhysicsAssetSimulation.cpp"
                              ,0x140,L""), bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FBoneHierarchy::InitHierarchy(&pFVar59->BoneHierarchy);
      FBoneHierarchy::PrepareForUpdate(&pFVar59->BoneHierarchy);
      pUVar5 = (param_2->RootComponent).field0_0x0.DebugPtr;
      if (pUVar5 == (USceneComponent *)0x0) {
        pTVar43 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar43 = &pUVar5->ComponentToWorld;
      }
      FBoneHierarchy::SetActorWorldSpaceTransform(&pFVar59->BoneHierarchy,pTVar43);
      pFVar50 = (pFVar59->BoneHierarchy).BoneIndices.AllocatorInstance.Data;
      iVar55 = (pFVar59->BoneHierarchy).BoneIndices.ArrayNum;
      local_8c8 = (FBoneHierarchy *)(pFVar50 + (longlong)iVar55 * 4);
      while( true ) {
        pFVar1 = local_8c8;
        if ((pFVar59->BoneHierarchy).BoneIndices.ArrayNum != iVar55) {
          local_98a[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_98a);
        }
        if ((FBoneHierarchy *)pFVar50 == pFVar1) break;
        iVar44 = *(int *)pFVar50;
        local_1b8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
        local_1b8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        local_1a8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
        local_1a8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
        local_198[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        local_198[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        local_188[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        local_188[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
        local_178[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
        local_178[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
        local_168[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
        local_168[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        local_964 = 0xffffffff;
        local_8d8[0] = iVar44;
        pUVar32 = USkeletalMeshComponent::GetSkeletalMeshAsset(local_8a8);
        pcVar7 = *(code **)(pUVar32->_padding_ + 0x3f8);
        ppFVar41 = TMapBase<int,FAnalyticImplicitGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>_>
                   ::FindChecked((TMapBase<int,FAnalyticImplicitGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>_>
                                  *)&(pFVar59->BoneHierarchy).BoneToShapeGroup,iVar44);
        lVar33 = (*pcVar7)(pUVar32,(*ppFVar41)->BoneName,local_1b8,local_8d8);
        pUVar28 = local_8a8;
        uVar8 = local_964;
        if (lVar33 == 0) {
          pcVar7 = *(code **)(local_8a8->_padding_ + 0x520);
          ppFVar41 = TMapBase<int,FAnalyticImplicitGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>_>
                     ::FindChecked((TMapBase<int,FAnalyticImplicitGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>_>
                                    *)&(pFVar59->BoneHierarchy).BoneToShapeGroup,iVar44);
          pTVar43 = (TTransform<double> *)(*pcVar7)(pUVar28,local_158,(*ppFVar41)->BoneName,3);
          FBoneHierarchy::SetAnimLocalSpaceTransform(&pFVar59->BoneHierarchy,iVar44,pTVar43);
          pFVar50 = pFVar50 + 4;
          pFVar59 = local_958;
        }
        else {
          puVar42 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                           *)&(pFVar59->BoneHierarchy).BoneToTransformIndex,iVar44);
          uVar31 = *puVar42;
          uVar54 = 0;
          if ((int)uVar31 < (pFVar59->BoneHierarchy).SocketIndices.ArrayNum) {
            uVar54 = ~uVar31 >> 0x1f;
          }
          if ((uVar54 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar50 = pFVar50 + 4;
          *(undefined4 *)
           ((pFVar59->BoneHierarchy).SocketIndices.AllocatorInstance.Data +
           (longlong)(int)uVar31 * 4) = uVar8;
          pFVar59 = local_958;
        }
      }
      FBoneHierarchy::PrepareAnimWorldSpaceTransforms(&pFVar59->BoneHierarchy);
      if (4 < (byte)USkeletalMeshSimulationComponentLogging._0_1_) {
        local_868 = (FName)local_978->_padding_;
        ::FName::ToString(&local_868,&local_840);
        iVar55 = local_840.Data.ArrayNum + -1;
        if (local_840.Data.ArrayNum == 0) {
          iVar55 = 0;
        }
        if ((iVar55 < 1) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                ,0x107,
                                L"String index out of bounds: Index %i from a string with a length of %i"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&USkeletalMeshSimulationComponentLogging);
        if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_840.Data.AllocatorInstance.Data);
        }
      }
      if (local_940.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_940.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// UpdateAnimState @ 1463cd990

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

bool __cdecl
FPhysicsAssetSimulationUtil::UpdateAnimState
          (UObject *param_1,AActor *param_2,USkeletalMeshComponent *param_3,float param_4,
          FSkeletalMeshPhysicsProxyParams *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  USceneComponent *pUVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  USkeletalMesh *pUVar10;
  longlong lVar11;
  uint *puVar12;
  USkeletalMeshSocket *this;
  FAnalyticImplicitGroup **ppFVar13;
  TTransform<double> *pTVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  undefined1 local_128 [8];
  FScriptContainerElement *local_120;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_118;
  TTransform<double> local_108;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar17 = 0;
  pUVar10 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_3);
  if (((pUVar10 == (USkeletalMesh *)0x0) ||
      (lVar11 = (**(code **)(pUVar10->_padding_ + 0x398))(pUVar10), lVar11 == 0)) ||
     (*(int *)(lVar11 + 8) == 0)) {
    bVar7 = false;
  }
  else {
    FBoneHierarchy::PrepareForUpdate(&param_5->BoneHierarchy);
    pUVar5 = (param_2->RootComponent).field0_0x0.DebugPtr;
    pTVar14 = &pUVar5->ComponentToWorld;
    if (pUVar5 == (USceneComponent *)0x0) {
      pTVar14 = &UE::Math::TTransform<double>::Identity;
    }
    FBoneHierarchy::SetActorWorldSpaceTransform(&param_5->BoneHierarchy,pTVar14);
    USkeletalMeshComponent::GetBoneSpaceTransforms(param_3,&local_118);
    pFVar16 = (param_5->BoneHierarchy).BoneIndices.AllocatorInstance.Data;
    iVar1 = (param_5->BoneHierarchy).BoneIndices.ArrayNum;
    pFVar15 = pFVar16 + (longlong)iVar1 * 4;
    local_120 = pFVar15;
    while( true ) {
      if ((param_5->BoneHierarchy).BoneIndices.ArrayNum != iVar1) {
        local_128[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_128);
      }
      if (pFVar16 == pFVar15) break;
      iVar2 = *(int *)pFVar16;
      if ((-1 < iVar2) && (iVar2 < local_118.ArrayNum)) {
        puVar12 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                          ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                         *)&(param_5->BoneHierarchy).BoneToTransformIndex,iVar2);
        iVar3 = (param_5->BoneHierarchy).SocketIndices.ArrayNum;
        uVar4 = *puVar12;
        uVar9 = 0;
        if ((int)uVar4 < iVar3) {
          uVar9 = ~uVar4 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (local_138 = (longlong)(int)uVar4, local_130 = (longlong)iVar3,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        iVar3 = *(int *)((param_5->BoneHierarchy).SocketIndices.AllocatorInstance.Data +
                        (longlong)(int)uVar4 * 4);
        if (iVar3 == -1) {
          pcVar6 = *(code **)(param_3->_padding_ + 0x520);
          ppFVar13 = TMapBase<int,FAnalyticImplicitGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>_>
                     ::FindChecked((TMapBase<int,FAnalyticImplicitGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>_>
                                    *)&(param_5->BoneHierarchy).BoneToShapeGroup,iVar2);
          pTVar14 = (TTransform<double> *)(*pcVar6)(param_3,local_a8,(*ppFVar13)->BoneName,3);
        }
        else {
          pUVar10 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_3);
          this = USkeletalMesh::GetSocketByIndex(pUVar10,iVar3);
          pTVar14 = USkeletalMeshSocket::GetSocketLocalTransform(this,&local_108);
        }
        FBoneHierarchy::SetAnimLocalSpaceTransform(&param_5->BoneHierarchy,iVar2,pTVar14);
        iVar17 = iVar17 + 1;
        pFVar15 = local_120;
      }
      pFVar16 = pFVar16 + 4;
    }
    bVar7 = 0 < iVar17;
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
  }
  return bVar7;
}

