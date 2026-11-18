// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 1475887b0

UClass * __cdecl UMirrorDataTable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMirrorDataTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UDataTable::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MirrorDataTable",
               &Z_Registration_Info_UClass_UMirrorDataTable.InnerSingleton,
               StaticRegisterNativesUMirrorDataTable,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMirrorDataTable>,
               InternalVTableHelperCtorCaller<UMirrorDataTable>,local_res8,UDataTable::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMirrorDataTable.InnerSingleton;
}

// UMirrorDataTable @ 1475a7710

UMirrorDataTable * __thiscall
UMirrorDataTable::UMirrorDataTable(UMirrorDataTable *this,FVTableHelper *param_1)

{
  UDataTable::UDataTable((UDataTable *)this,param_1);
  this->bMirrorRootMotion = true;
  this->_padding_ = (longlong)&___7UMirrorDataTable__6B_;
  (this->MirrorFindReplaceExpressions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MirrorFindReplaceExpressions).ArrayNum = 0;
  (this->MirrorFindReplaceExpressions).ArrayMax = 0;
  (this->Skeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  *(undefined8 *)&this->BoneToMirrorBoneIndex = 0;
  *(undefined8 *)&(this->BoneToMirrorBoneIndex).field_0x8 = 0;
  (this->CurveMirrorSourceUIDArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveMirrorSourceUIDArray).ArrayNum = 0;
  (this->CurveMirrorSourceUIDArray).ArrayMax = 0;
  (this->CurveMirrorTargetUIDArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveMirrorTargetUIDArray).ArrayNum = 0;
  (this->CurveMirrorTargetUIDArray).ArrayMax = 0;
  *(undefined8 *)&this->CurveToMirrorCurveMap = 0;
  *(undefined8 *)&(this->CurveToMirrorCurveMap).field_0x8 = 0;
  *(undefined8 *)&(this->CurveToMirrorCurveMap).field_0x20 = 0;
  *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x28 = 0;
  *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x34 = 0;
  *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurveToMirrorCurveMap).field_0x40 = 0;
  *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x48 = 0;
  *(undefined8 *)&this->AnimNotifyToMirrorAnimNotifyMap = 0;
  *(undefined8 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x8 = 0;
  *(undefined8 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x20 = 0;
  *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x28 = 0;
  *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x34 = 0;
  *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x40 = 0;
  *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x48 = 0;
  *(undefined8 *)&this->SyncToMirrorSyncMap = 0;
  *(undefined8 *)&(this->SyncToMirrorSyncMap).field_0x8 = 0;
  *(undefined8 *)&(this->SyncToMirrorSyncMap).field_0x20 = 0;
  *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x28 = 0;
  *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x34 = 0;
  *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SyncToMirrorSyncMap).field_0x40 = 0;
  *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x48 = 0;
  return this;
}

// UMirrorDataTable @ 1475a7850

UMirrorDataTable * __thiscall
UMirrorDataTable::UMirrorDataTable(UMirrorDataTable *this,FObjectInitializer *param_1)

{
  UDataTable::UDataTable((UDataTable *)this,param_1);
  this->_padding_ = (longlong)&___7UMirrorDataTable__6B_;
  (this->MirrorFindReplaceExpressions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MirrorFindReplaceExpressions).ArrayNum = 0;
  (this->MirrorFindReplaceExpressions).ArrayMax = 0;
  (this->Skeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  *(undefined8 *)&this->BoneToMirrorBoneIndex = 0;
  *(undefined8 *)&(this->BoneToMirrorBoneIndex).field_0x8 = 0;
  (this->CurveMirrorSourceUIDArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveMirrorSourceUIDArray).ArrayNum = 0;
  (this->CurveMirrorSourceUIDArray).ArrayMax = 0;
  (this->CurveMirrorTargetUIDArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveMirrorTargetUIDArray).ArrayNum = 0;
  (this->CurveMirrorTargetUIDArray).ArrayMax = 0;
  *(undefined8 *)&this->CurveToMirrorCurveMap = 0;
  *(undefined8 *)&(this->CurveToMirrorCurveMap).field_0x8 = 0;
  *(undefined8 *)&(this->CurveToMirrorCurveMap).field_0x20 = 0;
  this->MirrorAxis = '\x01';
  this->bMirrorRootMotion = true;
  *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x28 = 0;
  *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x34 = 0;
  *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurveToMirrorCurveMap).field_0x40 = 0;
  *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x48 = 0;
  *(undefined8 *)&this->AnimNotifyToMirrorAnimNotifyMap = 0;
  *(undefined8 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x8 = 0;
  *(undefined8 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x20 = 0;
  *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x28 = 0;
  *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x34 = 0;
  *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x40 = 0;
  *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x48 = 0;
  *(undefined8 *)&this->SyncToMirrorSyncMap = 0;
  *(undefined8 *)&(this->SyncToMirrorSyncMap).field_0x8 = 0;
  *(undefined8 *)&(this->SyncToMirrorSyncMap).field_0x20 = 0;
  *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x28 = 0;
  *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x34 = 0;
  *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SyncToMirrorSyncMap).field_0x40 = 0;
  *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x48 = 0;
  return this;
}

// ~UMirrorDataTable @ 1475aaa20

void __thiscall UMirrorDataTable::~UMirrorDataTable(UMirrorDataTable *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMirrorDataTable__6B_;
  *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SyncToMirrorSyncMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SyncToMirrorSyncMap);
  *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnimNotifyToMirrorAnimNotifyMap);
  *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurveToMirrorCurveMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurveToMirrorCurveMap);
  pFVar2 = (this->CurveMirrorTargetUIDArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CurveMirrorSourceUIDArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(void **)&this->BoneToMirrorBoneIndex != (void *)0x0) {
    FMemory::Free(*(void **)&this->BoneToMirrorBoneIndex);
  }
  pFVar2 = (this->MirrorFindReplaceExpressions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDataTable::~UDataTable((UDataTable *)this);
  return;
}

// operator() @ 1475ac260

void __thiscall
`UMirrorDataTable::FillMirrorArrays'::__l2::<lambda_1>::operator()
          (void *this,FName *param_1,FMirrorTableRow *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *this_00
  ;
  TPairInitializer<FName_const_&,FName_const_&> local_res18;
  FName *local_18;
  FName *local_10;
  
  uVar1 = (param_2->MirrorEntryType).Value;
  if (uVar1 == '\x01') {
    this_00 = (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               *)(*(longlong *)this + 0x158);
LAB_1475ac296:
    local_18 = &param_2->Name;
    local_10 = &param_2->MirroredName;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FName_const_&>_>(this_00,&local_res18,(bool *)&local_18);
    return;
  }
  if (uVar1 == '\x02') {
    pFVar2 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
             ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                     *)(*(longlong *)this + 0x108),param_2->MirroredName);
    local_18 = &param_2->Name;
    if ((pFVar2 == (FName *)0x0) || (*pFVar2 != *local_18)) {
      local_10 = &param_2->MirroredName;
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
                ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                  *)(*(longlong *)this + 0x108),&local_res18,(bool *)&local_18);
    }
  }
  else if (uVar1 == '\x03') {
    this_00 = (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               *)(*(longlong *)this + 0x1a8);
    goto LAB_1475ac296;
  }
  return;
}

// FillCompactPoseAndComponentRefRotations @ 1475c7180

void __thiscall
UMirrorDataTable::FillCompactPoseAndComponentRefRotations
          (UMirrorDataTable *this,FBoneContainer *param_1,
          TTypedIndexRange<FCompactPoseBoneIndex,TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>_>
          *param_2,TTypedIndexRange<FCompactPoseBoneIndex,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                   *param_3)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  uint uVar4;
  FSkelMeshRefPoseOverride *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  int iVar21;
  USkeleton *pUVar22;
  TTransform<double> *pTVar23;
  void *_Dst;
  double *pdVar24;
  uint uVar25;
  longlong lVar26;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint local_res10;
  FCompactPoseBoneIndex local_res20 [2];
  FCompactPoseBoneIndex local_c8 [2];
  void *local_c0;
  undefined8 local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  
  local_c0 = (void *)0x0;
  local_b8 = 0;
  pUVar22 = (USkeleton *)FWeakObjectPtr::Get(&(param_1->AssetSkeleton).WeakPtr);
  FillMirrorBoneIndexes
            (this,pUVar22,
             (TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<FSkeletonPoseBoneIndex,TSizedDefaultAllocator<32>_>_>
              *)&local_c0);
  FillCompactPoseMirrorBones
            (param_1,(TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<FSkeletonPoseBoneIndex,TSizedDefaultAllocator<32>_>_>
                      *)&local_c0,param_2);
  iVar21 = *(int *)&param_3->field_0x8;
  puVar1 = &param_3->field_0x8;
  uVar4 = (param_1->BoneIndicesArray).ArrayNum;
  if (iVar21 < (int)uVar4) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,uVar4 - iVar21,(ForAnyElementType *)param_3,(int *)puVar1,
               (int *)&param_3->field_0xc);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar21) {
      uVar25 = iVar21 - uVar4;
      if (((int)(uVar25 | uVar4) < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar25 != 0) {
        _Dst = (void *)((longlong)(int)uVar4 * 0x20 + *(longlong *)param_3);
        iVar21 = (*(int *)puVar1 - uVar25) - uVar4;
        if (iVar21 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar25 * 0x20 + (longlong)_Dst),(longlong)iVar21 << 5
                 );
        }
        *(uint *)puVar1 = *(int *)puVar1 - uVar25;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,0x10,(ForAnyElementType *)param_3,*(int *)puVar1,(int *)&param_3->field_0xc)
        ;
      }
    }
  }
  if ((0 < (int)uVar4) && (0 < (param_1->RefSkeleton->FinalRefBonePose).ArrayNum)) {
    local_res20[0] = (FCompactPoseBoneIndex)0x0;
    pTVar23 = FBoneContainer::GetRefPoseTransform(param_1,local_res20);
    dVar9 = (pTVar23->Rotation).XY.m128d_f64[0];
    dVar13 = (pTVar23->Rotation).XY.m128d_f64[1];
    dVar14 = (pTVar23->Rotation).ZW.m128d_f64[0];
    dVar15 = (pTVar23->Rotation).ZW.m128d_f64[1];
    if ((*(int *)puVar1 < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pdVar24 = *(double **)param_3;
    *pdVar24 = dVar9;
    pdVar24[1] = dVar13;
    pdVar24[2] = dVar14;
    pdVar24[3] = dVar15;
  }
  local_res10 = 1;
  if (1 < (int)uVar4) {
    do {
      FBoneContainer::GetParentBoneIndex(param_1,local_c8);
      lVar26 = (longlong)(int)local_c8[0];
      uVar25 = 0;
      if ((int)local_c8[0] < *(int *)puVar1) {
        uVar25 = ~(uint)local_c8[0] >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (param_1->RefPoseOverride).Object;
      pdVar24 = (double *)(lVar26 * 0x20 + *(longlong *)param_3);
      if (pFVar5 == (FSkelMeshRefPoseOverride *)0x0) {
        pTVar27 = &param_1->RefSkeleton->FinalRefBonePose;
      }
      else {
        pTVar27 = &pFVar5->RefBonePoses;
      }
      uVar25 = 0;
      if ((int)local_res10 < (param_1->BoneIndicesArray).ArrayNum) {
        uVar25 = ~local_res10 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(ushort *)
               ((param_1->BoneIndicesArray).AllocatorInstance.Data + (longlong)(int)local_res10 * 2)
      ;
      if ((pTVar27->ArrayNum <= (int)(uint)uVar3) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (pTVar27->AllocatorInstance).Data;
      dVar9 = *pdVar24;
      dVar13 = pdVar24[1];
      dVar14 = pdVar24[2];
      dVar15 = pdVar24[3];
      lVar26 = (ulonglong)uVar3 * 0x60;
      pFVar2 = pFVar6 + lVar26 + 0x10;
      dVar16 = *(double *)pFVar2;
      dVar17 = *(double *)(pFVar2 + 8);
      pFVar6 = pFVar6 + lVar26;
      dVar18 = *(double *)pFVar6;
      dVar19 = *(double *)(pFVar6 + 8);
      uVar25 = 0;
      if ((int)local_res10 < *(int *)puVar1) {
        uVar25 = ~local_res10 >> 0x1f;
      }
      dVar11 = dVar9 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar15 * dVar18 +
               dVar13 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar14 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar12 = dVar9 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               dVar15 * dVar19 +
               dVar13 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               dVar14 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      uVar30 = SUB84(dVar12,0);
      uVar31 = (undefined4)((ulonglong)dVar12 >> 0x20);
      dVar12 = dVar9 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar15 * dVar16 +
               dVar13 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar14 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar9 = dVar9 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar15 * dVar17 +
              dVar13 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar14 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      uVar28 = SUB84(dVar9,0);
      uVar29 = (undefined4)((ulonglong)dVar9 >> 0x20);
      local_a8._8_4_ = uVar30;
      local_a8._0_8_ = dVar11;
      local_a8._12_4_ = uVar31;
      local_98._8_4_ = uVar28;
      local_98._0_8_ = dVar12;
      local_98._12_4_ = uVar29;
      if ((uVar25 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar26 = *(longlong *)param_3;
      auVar10._8_4_ = uVar30;
      auVar10._0_8_ = dVar11;
      auVar10._12_4_ = uVar31;
      *(undefined1 (*) [16])((longlong)(int)local_res10 * 0x20 + lVar26) = auVar10;
      auVar8._8_4_ = uVar28;
      auVar8._0_8_ = dVar12;
      auVar8._12_4_ = uVar29;
      *(undefined1 (*) [16])((longlong)(int)local_res10 * 0x20 + 0x10 + lVar26) = auVar8;
      local_res10 = local_res10 + 1;
    } while ((int)local_res10 < (int)uVar4);
  }
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}

// FillCompactPoseMirrorBones @ 1475c7660

void __cdecl
UMirrorDataTable::FillCompactPoseMirrorBones
          (FBoneContainer *param_1,
          TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<FSkeletonPoseBoneIndex,TSizedDefaultAllocator<32>_>_>
          *param_2,TTypedIndexRange<FCompactPoseBoneIndex,TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>_>
                   *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 local_38;
  undefined4 local_34 [3];
  
  uVar2 = (param_1->BoneIndicesArray).ArrayNum;
  uVar8 = (ulonglong)uVar2;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar8);
  }
  puVar1 = &param_3->field_0xc;
  *(undefined4 *)&param_3->field_0x8 = 0;
  if (*(int *)&param_3->field_0xc < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,(ForAnyElementType *)param_3,0,(int *)puVar1);
  }
  if (*(int *)&param_2->field_0x8 < 1) {
    if (0 < (int)uVar2) {
      do {
        local_34[0] = 0xffffffff;
        if (((*(undefined4 **)param_3 <= local_34) &&
            (local_34 < *(undefined4 **)param_3 + *(int *)puVar1)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = *(int *)&param_3->field_0x8;
        if (iVar7 == *(int *)puVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)param_3,(int *)puVar1);
        }
        *(int *)&param_3->field_0x8 = iVar7 + 1;
        *(undefined4 *)(*(longlong *)param_3 + (longlong)iVar7 * 4) = local_34[0];
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    uVar9 = 0;
    if (0 < (int)uVar2) {
      lVar10 = 0;
      do {
        if (((int)uVar9 < 0) || ((param_1->CompactPoseToSkeletonIndex).ArrayNum <= (int)uVar9)) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8192494858347217501>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                             ,0x25d,"CompactPoseToSkeletonIndex.IsValidIndex(BoneIndex.GetInt())");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
LAB_1475c783c:
          local_38 = 0xffffffff;
        }
        else {
          uVar5 = 0;
          if ((int)uVar9 < (param_1->CompactPoseToSkeletonIndex).ArrayNum) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = *(int *)((param_1->CompactPoseToSkeletonIndex).AllocatorInstance.Data + lVar10 * 4
                          );
          if ((iVar7 < 0) || (*(int *)&param_2->field_0x8 <= iVar7)) goto LAB_1475c783c;
          if ((iVar7 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar5 = *(uint *)(*(longlong *)param_2 + (longlong)iVar7 * 4);
          if (((int)uVar5 < 0) || ((param_1->SkeletonToCompactPose).ArrayNum <= (int)uVar5))
          goto LAB_1475c783c;
          uVar6 = 0;
          if ((int)uVar5 < (param_1->SkeletonToCompactPose).ArrayNum) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_38 = *(undefined4 *)
                      ((param_1->SkeletonToCompactPose).AllocatorInstance.Data +
                      (longlong)(int)uVar5 * 4);
        }
        if (((*(undefined4 **)param_3 <= &local_38) &&
            (&local_38 < *(undefined4 **)param_3 + *(int *)puVar1)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = *(int *)&param_3->field_0x8;
        if (iVar7 == *(int *)puVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)param_3,(int *)puVar1);
        }
        uVar9 = uVar9 + 1;
        *(int *)&param_3->field_0x8 = iVar7 + 1;
        lVar10 = lVar10 + 1;
        *(undefined4 *)(*(longlong *)param_3 + (longlong)iVar7 * 4) = local_38;
      } while (lVar10 < (int)uVar2);
    }
  }
  return;
}

// FillMirrorArrays @ 1475c7b80

void __thiscall UMirrorDataTable::FillMirrorArrays(UMirrorDataTable *this)

{
  undefined1 *puVar1;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *pTVar2;
  int iVar3;
  USkeleton *pUVar4;
  bool bVar5;
  UMirrorDataTable *local_res8;
  code *local_18;
  UMirrorDataTable **local_10;
  
  pTVar2 = &this->SyncToMirrorSyncMap;
  bVar5 = 1 < *(int *)&(this->SyncToMirrorSyncMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                    *)pTVar2);
  }
  puVar1 = &(this->SyncToMirrorSyncMap).field_0xc;
  *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->SyncToMirrorSyncMap).field_0x2c;
  *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SyncToMirrorSyncMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x48 = 1;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Rehash((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            *)pTVar2);
  }
  pTVar2 = &this->AnimNotifyToMirrorAnimNotifyMap;
  bVar5 = 1 < *(int *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                    *)pTVar2);
  }
  puVar1 = &(this->AnimNotifyToMirrorAnimNotifyMap).field_0xc;
  *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x2c;
  *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->AnimNotifyToMirrorAnimNotifyMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x48 = 1;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Rehash((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            *)pTVar2);
  }
  pTVar2 = &this->CurveToMirrorCurveMap;
  bVar5 = 1 < *(int *)&(this->CurveToMirrorCurveMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                    *)pTVar2);
  }
  puVar1 = &(this->CurveToMirrorCurveMap).field_0xc;
  *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->CurveToMirrorCurveMap).field_0x2c;
  *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CurveToMirrorCurveMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x48 = 1;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Rehash((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            *)pTVar2);
  }
  pUVar4 = (this->Skeleton).field0_0x0.DebugPtr;
  if (pUVar4 == (USkeleton *)0x0) {
    puVar1 = &(this->BoneToMirrorBoneIndex).field_0xc;
    *(undefined4 *)&(this->BoneToMirrorBoneIndex).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&this->BoneToMirrorBoneIndex,0,(int *)puVar1);
    }
  }
  else {
    FillMirrorBoneIndexes(this,pUVar4,&this->BoneToMirrorBoneIndex);
    local_10 = &local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMirrorDataTable::FillMirrorArrays'::__l2::<lambda_1>,void,FName_const_&,FMirrorTableRow_const_&>
               ::Call;
    local_res8 = this;
    UDataTable::ForeachRow<FMirrorTableRow>
              ((UDataTable *)this,L"UMirrorDataTable::FillMirrorArrays",
               (TFunctionRef<void___cdecl(FName_const_&,FMirrorTableRow_const_&)> *)&local_18);
  }
  return;
}

// FillMirrorBoneIndexes @ 1475c7dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMirrorDataTable::FillMirrorBoneIndexes
          (UMirrorDataTable *this,USkeleton *param_1,
          TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<FSkeletonPoseBoneIndex,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  undefined1 *puVar1;
  void *_Dst;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  TTuple<FName,int> *pTVar8;
  uint *puVar9;
  undefined1 *puVar10;
  FName *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStackY_108 [32];
  longlong local_c8;
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_b8;
  code *local_b0;
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_a8;
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar12 = (param_1->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum;
  puVar1 = &param_2->field_0x8;
  iVar5 = *(int *)puVar1;
  if (iVar5 < (int)uVar12) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar12 - iVar5,(ForAnyElementType *)param_2,(int *)puVar1,
               (int *)&param_2->field_0xc);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar5) {
      uVar13 = iVar5 - uVar12;
      if (((int)(uVar12 | uVar13) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar13 != 0) {
        _Dst = (void *)(*(longlong *)param_2 + (longlong)(int)uVar12 * 4);
        iVar5 = (*(int *)puVar1 - uVar12) - uVar13;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar13 * 4),(longlong)iVar5 << 2);
        }
        *(uint *)puVar1 = *(int *)puVar1 - uVar13;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)param_2,*(int *)puVar1,(int *)&param_2->field_0xc);
      }
    }
  }
  memset(*(void **)param_2,0xff,(ulonglong)(uint)(*(int *)puVar1 << 2));
  local_98._44_4_ = 0x80;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._52_4_ = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_b8 = &local_98;
  local_a8 = &local_b8;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMirrorDataTable::FillMirrorBoneIndexes'::__l2::<lambda_1>,void,FName_const_&,FMirrorTableRow_const_&>
             ::Call;
  local_98._48_4_ = 0xffffffff;
  UDataTable::ForeachRow<FMirrorTableRow>
            ((UDataTable *)this,L"UMirrorDataTable::FillMirrorBoneIndexes",
             (TFunctionRef<void___cdecl(FName_const_&,FMirrorTableRow_const_&)> *)&local_b0);
  if ((this->MirrorAxis).Value != '\0') {
    iVar5 = *(int *)puVar1;
    uVar12 = 0;
    if (0 < iVar5) {
      local_c8 = 0;
      lVar14 = 0;
      do {
        uVar15 = ~uVar12 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar12 < iVar5) {
          uVar13 = uVar15;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)(*(longlong *)param_2 + lVar14) == -1) {
          uVar13 = 0;
          if ((int)uVar12 < (param_1->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum) {
            uVar13 = uVar15;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar13 = 0xffffffff;
          lVar2 = *(longlong *)
                   ((param_1->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.Data + local_c8)
          ;
          uVar6 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
          if (local_98._8_4_ != local_98._52_4_) {
            puVar10 = local_60;
            if (local_58 != (undefined1 *)0x0) {
              puVar10 = local_58;
            }
            iVar5 = *(int *)(puVar10 +
                            (ulonglong)(local_50 - 1U & (int)((ulonglong)lVar2 >> 0x20) + uVar6) * 4
                            );
            while (iVar5 != -1) {
              lVar7 = local_98._0_8_ + (longlong)iVar5 * 0x18;
              if (*(longlong *)(local_98._0_8_ + (longlong)iVar5 * 0x18) == lVar2)
              goto LAB_1475c808f;
              iVar5 = *(int *)(lVar7 + 0x10);
            }
          }
          lVar7 = 0;
LAB_1475c808f:
          pFVar11 = (FName *)(lVar7 + 8);
          if (lVar7 == 0) {
            pFVar11 = (FName *)0x0;
          }
          if (((lVar2 != 0) && (pFVar11 != (FName *)0x0)) && (*pFVar11 != (FName)0x0)) {
            pTVar8 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                     ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                             *)&(param_1->ReferenceSkeleton).FinalNameToIndexMap,*pFVar11);
            puVar9 = (uint *)&pTVar8->field_0x8;
            if (pTVar8 == (TTuple<FName,int> *)0x0) {
              puVar9 = (uint *)0x0;
            }
            if (puVar9 != (uint *)0x0) {
              uVar13 = *puVar9;
            }
          }
          uVar6 = 0;
          if ((int)uVar12 < *(int *)puVar1) {
            uVar6 = uVar15;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(uint *)(*(longlong *)param_2 + lVar14) = uVar13;
          if (uVar13 != 0xffffffff) {
            uVar15 = 0;
            if ((int)uVar13 < *(int *)puVar1) {
              uVar15 = ~uVar13 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(uint *)(*(longlong *)param_2 + (longlong)(int)uVar13 * 4) = uVar12;
          }
        }
        iVar5 = *(int *)puVar1;
        local_c8 = local_c8 + 0xc;
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 4;
      } while ((int)uVar12 < iVar5);
    }
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98);
  return;
}

// FindBestMirroredBone @ 1475c90f0

FName __cdecl
UMirrorDataTable::FindBestMirroredBone
          (FName param_1,FReferenceSkeleton *param_2,Type param_3,float param_4)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TTuple<FName,int> *pTVar6;
  UClass *pUVar7;
  FName FVar8;
  FString *pFVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  wchar_t *pwVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  wchar_t *pwVar17;
  undefined4 in_register_00000084;
  FReferenceSkeleton *this;
  int in_R9D;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  FName local_res10;
  float in_stack_00000028;
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156 [2];
  uint local_154;
  ForAnyElementType local_150;
  uint local_148;
  uint local_144;
  uint local_140;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_138;
  undefined8 local_128;
  double local_120;
  double dStack_118;
  double local_110;
  undefined8 local_108;
  FName local_100;
  FString local_f8;
  FString local_e8;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_d8;
  undefined1 local_c8 [8];
  FString local_c0;
  FString local_b0;
  double local_a0;
  double dStack_98;
  double local_90;
  FString local_88;
  FString local_78;
  FString local_68 [3];
  
  this = (FReferenceSkeleton *)CONCAT44(in_register_00000084,param_3);
  uVar11 = 0;
  local_108 = 0;
  local_140 = 0xffffffff;
  uVar4 = 0xffffffff;
  local_res10 = (FName)param_2;
  if ((((param_2 == (FReferenceSkeleton *)0x0) ||
       (pTVar6 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                         *)&this->FinalNameToIndexMap,(FName)param_2), uVar4 = 0xffffffff,
       pTVar6 == (TTuple<FName,int> *)0x0)) || (&pTVar6->field_0x8 == (undefined1 *)0x0)) ||
     (uVar4 = *(uint *)&pTVar6->field_0x8, uVar4 == 0xffffffff)) {
    local_158 = 0;
    bVar3 = `UMirrorDataTable::FindBestMirroredBone'::__l3::<lambda_1>::operator()(&local_158);
    if (!bVar3) {
      *(undefined8 *)param_1 = 0;
      return param_1;
    }
  }
  FVar8 = local_res10;
  pUVar7 = Z_Construct_UClass_UAnimationSettings_NoRegister();
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  pUVar1 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UObject *)0x0) {
    pFVar9 = GetTypeName<UAnimationSettings>(&local_88);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar14);
  }
  pUVar7 = Z_Construct_UClass_UAnimationSettings_NoRegister();
  iVar18 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)&pUVar1->field_0x10 + 0x38) < iVar18) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar1->field_0x10 + 0x30) + (longlong)iVar18 * 8) !=
      &pUVar7->_padding_)) {
    pFVar9 = GetTypeName<UAnimationSettings>(&local_78);
    pwVar14 = L"";
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar9 = GetFullNameForCastLogError<UObject>(local_68,pUVar1);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar14,pwVar17);
  }
  FVar8 = GetMirrorName((FName)local_c8,
                        (TArray<FMirrorFindReplaceExpression,TSizedDefaultAllocator<32>_> *)FVar8);
  local_128 = 0;
  FVar8 = *(FName *)FVar8;
  if (((FVar8 == (FName)0x0) ||
      (pTVar6 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                        *)&this->FinalNameToIndexMap,FVar8), pTVar6 == (TTuple<FName,int> *)0x0)) ||
     ((&pTVar6->field_0x8 == (undefined1 *)0x0 || (*(int *)&pTVar6->field_0x8 == -1)))) {
    local_d8.DataPtr = (TTransform<double> *)(this->FinalRefBonePose).AllocatorInstance.Data;
    iVar18 = (this->FinalRefBonePose).ArrayNum;
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    if ((iVar18 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar8 = (FName)(*pcVar2)();
      return FVar8;
    }
    local_d8.ArrayNum = iVar18;
    FAnimationRuntime::FillUpComponentSpaceTransforms(this,&local_d8,&local_138);
    uVar10 = 0;
    if ((int)uVar4 < local_138.ArrayNum) {
      uVar10 = ~uVar4 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar8 = (FName)(*pcVar2)();
      return FVar8;
    }
    local_120 = *(double *)(local_138.AllocatorInstance.Data + (longlong)(int)uVar4 * 0x60 + 0x20);
    dStack_118 = *(double *)
                  (local_138.AllocatorInstance.Data + (longlong)(int)uVar4 * 0x60 + 0x20 + 8);
    local_110 = *(double *)(local_138.AllocatorInstance.Data + (longlong)(int)uVar4 * 0x60 + 0x30);
    if (in_R9D == 1) {
      local_120 = local_120 * __real_bff0000000000000;
    }
    else if (in_R9D == 2) {
      dStack_118 = dStack_118 * __real_bff0000000000000;
    }
    else if (in_R9D == 3) {
      local_110 = local_110 * __real_bff0000000000000;
    }
    else {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\MirrorDataTable.cpp"
                         ,0xbd,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar8 = (FName)(*pcVar2)();
        return FVar8;
      }
    }
    iVar18 = local_138.ArrayNum;
    local_150.Data = (FScriptContainerElement *)0x0;
    local_148 = 0;
    pFVar16 = local_138.AllocatorInstance.Data + (longlong)local_138.ArrayNum * 0x60;
    local_144 = 0;
    local_154 = 0;
    FVar13.Data = local_138.AllocatorInstance.Data;
    fVar21 = __real_7f7fffff;
    while( true ) {
      if (local_138.ArrayNum != iVar18) {
        local_157 = 0;
        `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_157);
        uVar11 = local_148;
      }
      if (FVar13.Data == pFVar16) break;
      local_a0 = *(double *)(FVar13.Data + 0x20);
      dStack_98 = *(double *)(FVar13.Data + 0x28);
      local_90 = *(double *)(FVar13.Data + 0x30);
      fVar20 = (float)((dStack_98 - dStack_118) * (dStack_98 - dStack_118) +
                       (local_a0 - local_120) * (local_a0 - local_120) +
                      (local_90 - local_110) * (local_90 - local_110));
      if (fVar20 < fVar21) {
        fVar21 = fVar20;
      }
      if (fVar20 <= in_stack_00000028 * in_stack_00000028) {
        uVar4 = uVar11;
        if (((local_150.Data <= (FScriptContainerElement *)&local_154) &&
            ((FScriptContainerElement *)&local_154 < local_150.Data + (longlong)(int)local_144 * 4))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), uVar4 = local_148, bVar3)) {
          pcVar2 = (code *)swi(3);
          FVar8 = (FName)(*pcVar2)();
          return FVar8;
        }
        if (uVar4 == local_144) {
          uVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_150,(int *)&local_144);
        }
        uVar11 = uVar4 + 1;
        *(uint *)(local_150.Data + (longlong)(int)uVar4 * 4) = local_154;
        local_148 = uVar11;
      }
      local_154 = local_154 + 1;
      FVar13.Data = FVar13.Data + 0x60;
    }
    if ((int)uVar11 < 2) {
      FReferenceSkeleton::GetBoneName(this,param_1.ComparisonIndex.Value.Value);
    }
    else {
      pFVar9 = ::FName::ToString(&local_res10,&local_c0);
      ::FString::ToLower(pFVar9,&local_e8);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      uVar4 = local_148;
      fVar21 = __real_3f800000;
      uVar12 = (ulonglong)(int)local_148;
      fVar20 = 0.0;
      pFVar16 = local_150.Data + uVar12 * 4;
      FVar13.Data = local_150.Data;
      while( true ) {
        if ((uint)uVar12 != uVar4) {
          local_156[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_156);
        }
        if (FVar13.Data == pFVar16) break;
        uVar11 = *(uint *)FVar13.Data;
        uVar10 = 0;
        if ((int)uVar11 < (this->FinalRefBoneInfo).ArrayNum) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          FVar8 = (FName)(*pcVar2)();
          return FVar8;
        }
        local_100 = *(FName *)((this->FinalRefBoneInfo).AllocatorInstance.Data +
                              (longlong)(int)uVar11 * 0xc);
        pFVar9 = ::FName::ToString(&local_100,&local_b0);
        ::FString::ToLower(pFVar9,&local_f8);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.ArrayNum == 0) {
          iVar18 = 0;
        }
        else {
          iVar18 = local_f8.Data.ArrayNum + -1;
        }
        if (local_e8.Data.ArrayNum == 0) {
          iVar15 = 0;
        }
        else {
          iVar15 = local_e8.Data.ArrayNum + -1;
        }
        iVar5 = Algo::LevenshteinDistance<FString,FString>(&local_f8,&local_e8);
        fVar19 = fVar21 - (float)iVar5 / (float)(iVar15 + iVar18);
        if (fVar20 < fVar19) {
          fVar20 = fVar19;
          local_140 = uVar11;
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        uVar12 = (ulonglong)local_148;
        FVar13.Data = FVar13.Data + 4;
      }
      FReferenceSkeleton::GetBoneName(this,param_1.ComparisonIndex.Value.Value);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    if (local_150.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data);
    }
    if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
  }
  else {
    *(FName *)param_1 = FVar8;
  }
  return param_1;
}

// FindReplace @ 1475cadd0

FName __thiscall UMirrorDataTable::FindReplace(UMirrorDataTable *this,FName param_1)

{
  TArray<FMirrorFindReplaceExpression,TSizedDefaultAllocator<32>_> *in_R8;
  
  GetMirrorName(param_1,in_R8);
  return param_1;
}

// GetMirrorName @ 1475d5830

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FName __cdecl
UMirrorDataTable::GetMirrorName
          (FName param_1,TArray<FMirrorFindReplaceExpression,TSizedDefaultAllocator<32>_> *param_2)

{
  FName *pFVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  FName *this;
  ForAnyElementType FVar8;
  int iVar9;
  longlong *in_R8;
  ForAnyElementType FVar10;
  FName local_res8;
  FName local_res10;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FRegexMatcher local_68;
  FRegexPattern local_48;
  FString local_38;
  
  *(undefined8 *)param_1 = 0;
  local_res10 = (FName)param_2;
  ::FName::ToString(&local_res10,&local_38);
  lVar3 = in_R8[1];
  this = (FName *)*in_R8;
  pFVar1 = (FName *)((longlong)this + (longlong)(int)lVar3 * 0x14);
  while( true ) {
    if ((int)in_R8[1] != (int)lVar3) {
      `TCheckedPointerIterator<FMirrorFindReplaceExpression_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (this == pFVar1) goto LAB_1475d5c38;
    ::FName::ToString(this,&local_d8);
    ::FName::ToString(this + 1,&local_e8);
    cVar2 = (char)this[2].ComparisonIndex.Value;
    if (cVar2 == '\0') {
      ::FString::ConcatFC(&local_98,&local_d8,L"([^}]*)");
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      local_d8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      local_d8.Data.ArrayNum = local_98.Data.ArrayNum;
      local_d8.Data.ArrayMax = local_98.Data.ArrayMax;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::FString::ConcatCF(&local_88,L"^",&local_d8);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      local_d8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      local_d8.Data.ArrayNum = local_88.Data.ArrayNum;
      local_d8.Data.ArrayMax = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::FString::ConcatFC(&local_a8,&local_e8,L"$1");
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      local_e8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      local_e8.Data.ArrayNum = local_a8.Data.ArrayNum;
      local_e8.Data.ArrayMax = local_a8.Data.ArrayMax;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else if (cVar2 == '\x01') {
      ::FString::ConcatCF(&local_78,L"([^}]*)",&local_d8);
      ::FString::ConcatFC(&local_b8,&local_78,L"$");
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      local_d8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      local_d8.Data.ArrayNum = local_b8.Data.ArrayNum;
      local_d8.Data.ArrayMax = local_b8.Data.ArrayMax;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      ::FString::ConcatCF(&local_c8,L"$1",&local_e8);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      local_e8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      local_e8.Data.ArrayNum = local_c8.Data.ArrayNum;
      local_e8.Data.ArrayMax = local_c8.Data.ArrayMax;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    FRegexPattern::FRegexPattern(&local_48,&local_d8,None);
    FRegexMatcher::FRegexMatcher(&local_68,&local_48,&local_38);
    bVar4 = FRegexMatcher::FindNext(&local_68);
    if (bVar4) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Implementation.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Pattern.Implementation.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Implementation.SharedReferenceCount.ReferenceController);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    this = (FName *)&this[2].Number;
  }
  do {
    iVar9 = 1;
    do {
      FRegexMatcher::GetCaptureGroup(&local_68,&local_c8,iVar9);
      iVar5 = FRegexMatcher::GetCaptureGroupBeginning(&local_68,iVar9);
      iVar6 = FRegexMatcher::GetCaptureGroupEnding(&local_68,iVar9);
      ::FString::Mid(&local_c8,&local_78,iVar5,iVar6 - iVar5);
      if (local_c8.Data.ArrayNum < 2) {
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        break;
      }
      ::FString::PrintfImpl(&local_b8,L"$%i");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_c8.Data.ArrayNum != 0) {
        FVar8.Data = local_c8.Data.AllocatorInstance.Data;
      }
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar10.Data = local_b8.Data.AllocatorInstance.Data;
      }
      pFVar7 = ::FString::Replace(&local_e8,&local_a8,(wchar_t *)FVar10.Data,(wchar_t *)FVar8.Data,
                                  IgnoreCase);
      if (&local_e8 != pFVar7) {
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        local_e8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.Data.ArrayNum = (pFVar7->Data).ArrayNum;
        local_e8.Data.ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 10);
    bVar4 = FRegexMatcher::FindNext(&local_68);
  } while (bVar4);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar8.Data = local_e8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar8.Data);
  *(FName *)param_1 = local_res8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Implementation.SharedReferenceCount.ReferenceController);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
LAB_1475d5c38:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// GetPrivateStaticClass @ 1475dbba0

UClass * __cdecl UMirrorDataTable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMirrorDataTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UDataTable::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MirrorDataTable",
               &Z_Registration_Info_UClass_UMirrorDataTable.InnerSingleton,
               StaticRegisterNativesUMirrorDataTable,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMirrorDataTable>,
               InternalVTableHelperCtorCaller<UMirrorDataTable>,local_res8,UDataTable::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMirrorDataTable.InnerSingleton;
}

// GetSettingsMirrorName @ 1475ddb50

FName __cdecl UMirrorDataTable::GetSettingsMirrorName(FName param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FName FVar4;
  FString *pFVar5;
  TArray<FMirrorFindReplaceExpression,TSizedDefaultAllocator<32>_> *in_RDX;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined1 local_res18 [16];
  FString local_28;
  FString local_18;
  
  pUVar3 = Z_Construct_UClass_UAnimationSettings_NoRegister();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pUVar2 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UAnimationSettings_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)param_1 = 0;
      FVar4 = GetMirrorName((FName)local_res18,in_RDX);
      *(undefined8 *)param_1 = *(undefined8 *)FVar4;
      return param_1;
    }
    pFVar5 = GetTypeName<UAnimationSettings>(&local_28);
    pwVar6 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UObject>(&local_18,pUVar2);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  pFVar5 = GetTypeName<UAnimationSettings>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// PostLoad @ 1475e9f90

void __thiscall UMirrorDataTable::PostLoad(UMirrorDataTable *this)

{
  UObject::PostLoad((UObject *)this);
  FillMirrorArrays(this);
  return;
}

// StaticRegisterNativesUMirrorDataTable @ 1475feda0

void __cdecl UMirrorDataTable::StaticRegisterNativesUMirrorDataTable(void)

{
  return;
}

// operator() @ 15050cc60

bool __thiscall `UMirrorDataTable::FindBestMirroredBone'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1051562836221755553>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1051562836221755553>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

