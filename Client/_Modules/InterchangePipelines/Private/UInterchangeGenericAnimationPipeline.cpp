// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 20

// StaticClass @ 14e72dbf0

UClass * __cdecl UInterchangeGenericAnimationPipeline::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericAnimationPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericAnimationPipeline,0x198,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericAnimationPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericAnimationPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.InnerSingleton;
}

// UInterchangeGenericAnimationPipeline @ 14e766860

UInterchangeGenericAnimationPipeline * __thiscall
UInterchangeGenericAnimationPipeline::UInterchangeGenericAnimationPipeline
          (UInterchangeGenericAnimationPipeline *this,FVTableHelper *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  FString local_18;
  
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bImportAnimations = true;
  this->bImportBoneTracks = true;
  this->AnimationRange = Timeline;
  this->_padding_ = (longlong)&___7UInterchangeGenericAnimationPipeline__6B_;
  (this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CommonMeshesProperties).WeakPtr = (FWeakObjectPtr)0x0;
  pTVar1 = &this->MaterialCurveSuffixes;
  this->FrameImportRange = (FInt32Interval)0x0;
  this->bUse30HzToBakeBoneAnimation = false;
  this->CustomBoneAnimationSampleRate = 0;
  this->bSnapToClosestFrameBoundary = false;
  this->bImportCustomAttribute = true;
  this->bAddCurveMetadataToSkeleton_DEPRECATED = true;
  this->bSetMaterialDriveParameterOnCustomAttribute = false;
  ::FString::FString(&local_18,L"_mat");
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MaterialCurveSuffixes).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&pTVar1->AllocatorInstance,1,&(this->MaterialCurveSuffixes).ArrayMax);
  ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->bRemoveCurveRedundantKeys = false;
  this->bDoNotImportCurveWithZero = false;
  this->bDeleteExistingNonCurveCustomAttributes = false;
  this->bDeleteExistingCustomAttributeCurves = false;
  this->bDeleteExistingMorphTargetCurves = false;
  (this->SourceAnimationName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceAnimationName).Data.ArrayNum = 0;
  (this->SourceAnimationName).Data.ArrayMax = 0;
  this->bSceneImport = false;
  this->BaseNodeContainer = (UInterchangeBaseNodeContainer *)0x0;
  (this->SourceDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceDatas).ArrayNum = 0;
  (this->SourceDatas).ArrayMax = 0;
  return this;
}

// UInterchangeGenericAnimationPipeline @ 14e766990

UInterchangeGenericAnimationPipeline * __thiscall
UInterchangeGenericAnimationPipeline::UInterchangeGenericAnimationPipeline
          (UInterchangeGenericAnimationPipeline *this,FObjectInitializer *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  FString local_18;
  
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bImportAnimations = true;
  this->bImportBoneTracks = true;
  this->AnimationRange = Timeline;
  this->_padding_ = (longlong)&___7UInterchangeGenericAnimationPipeline__6B_;
  (this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CommonMeshesProperties).WeakPtr = (FWeakObjectPtr)0x0;
  pTVar1 = &this->MaterialCurveSuffixes;
  this->FrameImportRange = (FInt32Interval)0x0;
  this->bUse30HzToBakeBoneAnimation = false;
  this->CustomBoneAnimationSampleRate = 0;
  this->bSnapToClosestFrameBoundary = false;
  this->bImportCustomAttribute = true;
  this->bAddCurveMetadataToSkeleton_DEPRECATED = true;
  this->bSetMaterialDriveParameterOnCustomAttribute = false;
  ::FString::FString(&local_18,L"_mat");
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MaterialCurveSuffixes).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&pTVar1->AllocatorInstance,1,&(this->MaterialCurveSuffixes).ArrayMax);
  ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->bRemoveCurveRedundantKeys = false;
  this->bDoNotImportCurveWithZero = false;
  this->bDeleteExistingNonCurveCustomAttributes = false;
  this->bDeleteExistingCustomAttributeCurves = false;
  this->bDeleteExistingMorphTargetCurves = false;
  (this->SourceAnimationName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceAnimationName).Data.ArrayNum = 0;
  (this->SourceAnimationName).Data.ArrayMax = 0;
  this->bSceneImport = false;
  this->BaseNodeContainer = (UInterchangeBaseNodeContainer *)0x0;
  (this->SourceDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceDatas).ArrayNum = 0;
  (this->SourceDatas).ArrayMax = 0;
  return this;
}

// ~UInterchangeGenericAnimationPipeline @ 14e76bea0

void __thiscall
UInterchangeGenericAnimationPipeline::~UInterchangeGenericAnimationPipeline
          (UInterchangeGenericAnimationPipeline *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeGenericAnimationPipeline__6B_;
  pFVar1 = (this->SourceDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceAnimationName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->MaterialCurveSuffixes).AllocatorInstance.Data,
             (this->MaterialCurveSuffixes).ArrayNum);
  pFVar1 = (this->MaterialCurveSuffixes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  return;
}

// operator() @ 14e76e670

void __thiscall
`UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,UInterchangeAnimationTrackSetNode *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UInterchangeAnimationTrackSetNode *local_res18 [2];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res18[0] = param_2;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(UInterchangeAnimationTrackSetNode **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res18[0];
  return;
}

// operator() @ 14e771250

void __thiscall
`UInterchangeGenericAnimationPipeline::CreateAnimSequenceFactoryNode'::__l8::<lambda_1>::operator()
          (void *this,FString *param_1,UInterchangeSceneNode *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString *pFVar3;
  UObject *pUVar4;
  FName *pFVar5;
  int *piVar6;
  wchar_t *pwVar7;
  int iVar8;
  FName local_res8;
  FString local_38;
  int local_28;
  FString local_20;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x10));
  if (bVar2) {
    pFVar3 = UE::Interchange::FSceneNodeStaticData::GetJointSpecializeTypeString();
    bVar2 = UInterchangeSceneNode::IsSpecializedTypeContains(param_2,pFVar3);
    if ((bVar2) || (*(char *)((longlong)this + 0x18) != '\0')) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x10));
      pFVar3 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_2,&local_38);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar5 = ::FName::FName(&local_res8,pwVar7);
      iVar8 = -1;
      if (*pFVar5 != (FName)0x0) {
        piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                 ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         *)&pUVar4[5].field_0x10,*pFVar5);
        if (piVar6 != (int *)0x0) {
          iVar8 = *piVar6;
        }
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if ((iVar8 != -1) && ((**(int **)this == -1 || (iVar8 < **(int **)this)))) {
        local_28 = iVar8;
        ::FString::FString(&local_20,param_1);
        piVar6 = *(int **)this;
        *piVar6 = local_28;
        pFVar3 = (FString *)(piVar6 + 2);
        if (pFVar3 != &local_20) {
          pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (pFVar3->Data).AllocatorInstance.Data = local_20.Data.AllocatorInstance.Data;
          local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          piVar6[4] = local_20.Data.ArrayNum;
          piVar6[5] = local_20.Data.ArrayMax;
          local_20.Data.ArrayNum = 0;
          local_20.Data.ArrayMax = 0;
        }
        if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// operator() @ 14e773930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l30::<lambda_2>::operator()
          (void *this,FString *param_1,UInterchangeSceneNode *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 auStackY_178 [32];
  undefined1 local_128 [8];
  UInterchangeSceneNode *local_120;
  longlong *local_118;
  uint uStack_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  int local_e4;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (uint *)0x0;
  uVar11 = 0;
  local_80 = 0;
  local_74 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_120 = param_2;
  UInterchangeSceneNode::GetMorphTargetCurveWeights
            (param_2,(TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_>
                      *)local_a8);
  uVar10 = local_80;
  uStack_10c = 1;
  local_f8 = 0;
  uStack_fc = uVar11;
  if (local_80 != 0) {
    puVar12 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar12 = local_88;
    }
    uVar13 = *puVar12;
    local_f8 = 0;
    uVar11 = 0;
    while (uVar13 == 0) {
      lVar8 = (longlong)(int)uVar11;
      local_f8 = local_f8 + 0x20;
      uVar11 = uVar11 + 1;
      uStack_fc = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
      goto LAB_14e773a20;
      uVar13 = (puVar12 + 1)[lVar8];
    }
    uStack_10c = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_10c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_e8 = (int)lVar8;
    uStack_fc = local_e8 + -1 + local_f8;
    if ((int)local_80 < (int)uStack_fc) {
      uStack_fc = local_80;
    }
  }
LAB_14e773a20:
  local_118 = (longlong *)local_a8;
  local_108 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uVar13 = local_80 & 0xffffffe0;
  iStack_f0 = local_a8._8_4_ - local_74;
  uStack_100 = 0xffffffff;
  TStack_d8.CurrentBitIndex = uStack_fc;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  TStack_d8._padding_ = CONCAT44(uStack_10c,uVar11);
  iVar9 = (int)local_80 >> 5;
  TStack_d8._28_4_ = uStack_fc;
  TStack_d8.BaseBitIndex = local_f8;
  uStack_b8 = CONCAT44(uStack_ec,iStack_f0);
  bVar7 = (byte)local_80;
  uStack_110 = uVar11;
  uStack_f4 = uStack_fc;
  local_e0 = local_118;
  TStack_d8.Array = local_108;
  if (((int)local_80 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar10 != local_80) {
    puVar12 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar12 = local_88;
    }
    uVar11 = -1 << (bVar7 & 0x1f) & puVar12[iVar9];
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar13 = uVar13 + 0x20;
      iVar9 = iVar9 + 1;
      uVar10 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_14e773b24;
      uVar11 = (puVar12 + 1)[lVar8];
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_e4 = (int)lVar8;
    uVar10 = local_e4 + -1 + uVar13;
    if ((int)local_80 < (int)uVar10) {
      uVar10 = local_80;
    }
  }
LAB_14e773b24:
  while( true ) {
    plVar5 = local_e0;
    if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
      local_128[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if (((TStack_d8.CurrentBitIndex == uVar10) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar5 == (longlong *)local_a8)) goto LAB_14e773c37;
    if (*(float *)((longlong)TStack_d8.CurrentBitIndex * 0x20 + 0x10 + *plVar5) != 0.0) break;
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  pFVar3 = *(ForAnyElementType **)this;
  if (((pFVar3->Data <= (FScriptContainerElement *)&local_120) &&
      ((FScriptContainerElement *)&local_120 <
       pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar9 + 1;
  *(UInterchangeSceneNode **)(pFVar3->Data + (longlong)iVar9 * 8) = local_120;
LAB_14e773c37:
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a8,0,local_a8._8_4_);
  iVar9 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar9 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (uint *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  return;
}

// operator() @ 14e7742c0

void __thiscall
`UInterchangeGenericAnimationPipeline::CreateAnimSequenceFactoryNode'::__l81::<lambda_2>::operator()
          (void *this,UInterchangeBaseNode *param_1)

{
  int iVar1;
  EAttributeTypes EVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UAnimationSettings *pUVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  FInterchangeUserDefinedAttributeInfo *pFVar14;
  bool bVar15;
  bool bVar16;
  EInterchangeAnimationPayLoadType local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  if (param_1 != (UInterchangeBaseNode *)0x0) {
    pUVar6 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      UInterchangeBaseNode::GetDisplayLabel(param_1,&local_48);
      pUVar7 = UAnimationSettings::Get();
      pFVar9 = (pUVar7->BoneNamesWithCustomAttributes).AllocatorInstance.Data;
      pFVar12 = pFVar9 + (longlong)(pUVar7->BoneNamesWithCustomAttributes).ArrayNum * 0x10;
      iVar5 = local_48.Data.ArrayNum;
      for (; pFVar9 != pFVar12; pFVar9 = pFVar9 + 0x10) {
        iVar1 = *(int *)(pFVar9 + 8);
        if (iVar1 == iVar5) {
          if (1 < iVar1) {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)pFVar9,(wchar_t *)local_48.Data.AllocatorInstance.Data);
            bVar15 = iVar5 == 0;
            iVar5 = local_48.Data.ArrayNum;
            goto LAB_14e77437a;
          }
LAB_14e77440d:
          bVar15 = true;
          goto LAB_14e774391;
        }
        bVar15 = iVar1 + iVar5 == 1;
LAB_14e77437a:
        if (bVar15) goto LAB_14e77440d;
      }
      bVar15 = false;
LAB_14e774391:
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttributeInfos(param_1,&local_58);
      uVar8 = (ulonglong)local_58.ArrayNum;
      local_res20 = local_58.ArrayNum;
      pFVar14 = (FInterchangeUserDefinedAttributeInfo *)
                (local_58.AllocatorInstance.Data + uVar8 * 0x30);
      FVar13.Data = local_58.AllocatorInstance.Data;
      while( true ) {
        if (local_58.ArrayNum != (int)uVar8) {
          `TCheckedPointerIterator<FInterchangeUserDefinedAttributeInfo,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if ((FInterchangeUserDefinedAttributeInfo *)FVar13.Data == pFVar14) break;
        if (*(int *)((longlong)
                     &(((FInterchangeUserDefinedAttributeInfo *)FVar13.Data)->PayloadKey).field0_0x0
                    + 0xc) == -1) {
LAB_14e7744fb:
          uVar8 = (ulonglong)local_res20;
          FVar13.Data = FVar13.Data + 0x30;
        }
        else {
          EVar2 = ((FInterchangeUserDefinedAttributeInfo *)FVar13.Data)->Type;
          if (((EVar2 == Float) || (EVar2 == Float16)) || (EVar2 == Double)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          puVar10 = (undefined8 *)**(longlong **)((longlong)this + 8);
          puVar11 = puVar10 + (longlong)(int)(*(longlong **)((longlong)this + 8))[1] * 2;
          for (; puVar10 != puVar11; puVar10 = puVar10 + 2) {
            iVar5 = *(int *)(puVar10 + 1);
            iVar1 = (((FInterchangeUserDefinedAttributeInfo *)FVar13.Data)->Name).Data.ArrayNum;
            if (iVar5 == iVar1) {
              if (1 < iVar5) {
                iVar5 = FGenericPlatformStricmp::Stricmp
                                  ((wchar_t *)*puVar10,
                                   (wchar_t *)
                                   (((FInterchangeUserDefinedAttributeInfo *)FVar13.Data)->Name).
                                   Data.AllocatorInstance.Data);
                bVar16 = iVar5 == 0;
                goto LAB_14e774453;
              }
LAB_14e7744ae:
              bVar16 = true;
              goto LAB_14e774465;
            }
            bVar16 = iVar5 + iVar1 == 1;
LAB_14e774453:
            if (bVar16) goto LAB_14e7744ae;
          }
          bVar16 = false;
LAB_14e774465:
          local_res10[0] = NONE;
          bVar4 = UInterchangeSceneNode::GetAnimationCurveTypeForCurveName
                            ((UInterchangeSceneNode *)param_1,(FString *)FVar13.Data,local_res10);
          if (bVar4) {
            if (local_res10[0] != CURVE) {
              if (local_res10[0] == STEPCURVE) goto LAB_14e7744ed;
              goto LAB_14e7744fb;
            }
            UInterchangeAnimSequenceFactoryNode::SetAnimatedAttributeCurveName
                      ((UInterchangeAnimSequenceFactoryNode *)**(undefined8 **)this,
                       (FString *)FVar13.Data);
            uVar8 = (ulonglong)local_res20;
            FVar13.Data = FVar13.Data + 0x30;
          }
          else {
            if ((bVar15) || (!bVar3)) {
              if ((!bVar16) && (!bVar15)) goto LAB_14e7744fb;
LAB_14e7744ed:
              UInterchangeAnimSequenceFactoryNode::SetAnimatedAttributeStepCurveName
                        ((UInterchangeAnimSequenceFactoryNode *)**(undefined8 **)this,
                         (FString *)FVar13.Data);
              goto LAB_14e7744fb;
            }
            if (bVar16) goto LAB_14e7744ed;
            UInterchangeAnimSequenceFactoryNode::SetAnimatedAttributeCurveName
                      ((UInterchangeAnimSequenceFactoryNode *)**(undefined8 **)this,
                       (FString *)FVar13.Data);
            uVar8 = (ulonglong)local_res20;
            FVar13.Data = FVar13.Data + 0x30;
          }
        }
      }
      DestructItems<FInterchangeUserDefinedAttributeInfo,int>
                ((FInterchangeUserDefinedAttributeInfo *)local_58.AllocatorInstance.Data,
                 local_58.ArrayNum);
      if ((FInterchangeUserDefinedAttributeInfo *)local_58.AllocatorInstance.Data !=
          (FInterchangeUserDefinedAttributeInfo *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 14e775d40

void __thiscall
`UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l41::<lambda_3>::operator()
          (void *this,FString *param_1,UInterchangeSkeletalAnimationTrackNode *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  undefined8 local_res18 [2];
  FString local_38;
  code *local_28;
  undefined8 *local_20;
  
  if (param_2 != (UInterchangeSkeletalAnimationTrackNode *)0x0) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    bVar4 = UInterchangeSkeletalAnimationTrackNode::GetCustomSkeletonNodeUid(param_2,&local_38);
    if (bVar4) {
      pFVar2 = *(ForAnyElementType **)this;
      if (((pFVar2->Data <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) &&
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
      iVar5 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar2,piVar1);
      }
      _Src.Data = local_38.Data.AllocatorInstance.Data;
      *(int *)&pFVar2[1].Data = iVar5 + 1;
      pFVar6 = pFVar2->Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar6 = 0;
      lVar7 = (longlong)local_38.Data.ArrayNum;
      *(int *)(pFVar6 + 8) = local_38.Data.ArrayNum;
      if (local_38.Data.ArrayNum == 0) {
        *(int *)(pFVar6 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)pFVar6,local_38.Data.ArrayNum,
                   (int *)(pFVar6 + 0xc));
        memcpy(*(void **)pFVar6,_Src.Data,lVar7 * 2);
      }
      local_res18[0] = *(undefined8 *)this;
      local_20 = local_res18;
      local_28 = UE::Core::Private::Function::
                 TFunctionRefCaller<``UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l41::<lambda_3>::operator()'::__l8::<lambda_1>,void,UInterchangeBaseNode_const_*>
                 ::Call;
      UInterchangeBaseNodeContainer::IterateNodeChildren
                (*(UInterchangeBaseNodeContainer **)(*(longlong *)((longlong)this + 8) + 0x180),
                 &local_38,(TFunctionRef<void___cdecl(UInterchangeBaseNode_const_*)> *)&local_28);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14e776210

void __thiscall
`UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l2::<lambda_5>::operator()
          (void *this,FString *param_1,UInterchangeSkeletalAnimationTrackNode *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UInterchangeSkeletalAnimationTrackNode *local_res18 [2];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res18[0] = param_2;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(UInterchangeSkeletalAnimationTrackNode **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res18[0];
  return;
}

// AdjustSettingsForContext @ 14e780740

void __thiscall
UInterchangeGenericAnimationPipeline::AdjustSettingsForContext
          (UInterchangeGenericAnimationPipeline *this,FInterchangePipelineContextParams *param_1)

{
  EInterchangePipelineContext EVar1;
  
  FInterchangePipelineContextParams::operator=
            ((FInterchangePipelineContextParams *)&this->_padding_,param_1);
  TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
  ::operator=((TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
               *)&this->_padding_,
              (TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
               *)&this->_padding_);
  EVar1 = param_1->ContextType;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(bool *)&this->_padding_ = EVar1 == None;
  EVar1 = param_1->ContextType;
  if ((EVar1 == AssetReimport) ||
     (((EVar1 - SceneReimport & 0xf9) == 0 && (EVar1 != AssetCustomMorphTargetReImport)))) {
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  }
  return;
}

// CanExecuteOnAnyThread @ 14e7826e0

bool __thiscall
UInterchangeGenericAnimationPipeline::CanExecuteOnAnyThread
          (UInterchangeGenericAnimationPipeline *this,EInterchangePipelineTask param_1)

{
  return true;
}

// CreateLevelSequenceFactoryNode @ 14e797df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UInterchangeGenericAnimationPipeline::CreateLevelSequenceFactoryNode
          (UInterchangeGenericAnimationPipeline *this,UInterchangeAnimationTrackSetNode *param_1)

{
  int iVar1;
  UInterchangeBaseNodeContainer *pUVar2;
  int iVar3;
  bool bVar4;
  FString *pFVar5;
  UClass *pUVar6;
  UInterchangeLevelSequenceFactoryNode *this_00;
  ulonglong uVar7;
  UInterchangeAnimationTrackNode *this_01;
  longlong *plVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [8];
  FString local_130;
  FString local_120;
  TArray<FString,TSizedDefaultAllocator<32>_> local_110;
  FString local_100;
  float local_f0 [2];
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_120);
  UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_d8,pFVar5);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  pUVar2 = this->BaseNodeContainer;
  local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar6);
  local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_c8._56_8_ = (UPackage *)0x0;
  local_c8._16_4_ = 0;
  local_c8._20_4_ = 0;
  local_c8._24_4_ = RF_NoFlags;
  local_c8._40_8_ = (UObject *)0x0;
  local_c8[0x20] = false;
  local_c8._8_8_ = pUVar2;
  this_00 = (UInterchangeLevelSequenceFactoryNode *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar8 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pUVar2 = this->BaseNodeContainer;
  ::FString::FString(&local_130,L"");
  pFVar5 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_120);
  UInterchangeBaseNodeContainer::SetupNode
            (pUVar2,(UInterchangeBaseNode *)this_00,&local_d8,pFVar5,FactoryData,&local_130);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)this_00,true);
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  UInterchangeAnimationTrackSetNode::GetCustomAnimationTrackUids(param_1,&local_110);
  iVar3 = local_110.ArrayNum;
  uVar7 = (ulonglong)local_110.ArrayNum;
  pFVar11 = local_110.AllocatorInstance.Data + uVar7 * 0x10;
  FVar10.Data = local_110.AllocatorInstance.Data;
  do {
    if ((int)uVar7 != iVar3) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_138);
    }
    if (FVar10.Data == pFVar11) {
      bVar4 = UInterchangeAnimationTrackSetNode::GetCustomFrameRate(param_1,local_f0);
      if (bVar4) {
        UInterchangeLevelSequenceFactoryNode::SetCustomFrameRate(this_00,local_f0);
      }
      UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
                ((UInterchangeBaseNode *)param_1,(UInterchangeBaseNode *)this_00,false);
      pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_120);
      UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_00,pFVar5);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_00,&local_120);
      UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)param_1,pFVar5);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_110.AllocatorInstance.Data,local_110.ArrayNum);
      if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      return;
    }
    UInterchangeLevelSequenceFactoryNode::AddCustomAnimationTrackUid(this_00,(FString *)FVar10.Data)
    ;
    this_01 = (UInterchangeAnimationTrackNode *)
              UInterchangeBaseNodeContainer::GetNode(this->BaseNodeContainer,(FString *)FVar10.Data)
    ;
    if (this_01 != (UInterchangeAnimationTrackNode *)0x0) {
      pUVar6 = Z_Construct_UClass_UInterchangeAnimationTrackBaseNode_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        pUVar6 = Z_Construct_UClass_UInterchangeAnimationTrackNode_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          pUVar6 = Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_NoRegister();
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar6->_padding_)) goto LAB_14e7980b5;
          local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_100.Data.ArrayNum = 0;
          local_100.Data.ArrayMax = 0;
          bVar4 = UInterchangeAnimationTrackSetInstanceNode::GetCustomTrackSetDependencyUid
                            ((UInterchangeAnimationTrackSetInstanceNode *)this_01,&local_100);
          FVar9.Data = local_100.Data.AllocatorInstance.Data;
          if (bVar4) {
            UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_120,&local_100);
            UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                      ((UInterchangeFactoryBaseNode *)this_00,&local_120);
            FVar9.Data = local_100.Data.AllocatorInstance.Data;
            if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_120.Data.AllocatorInstance.Data);
              FVar9.Data = local_100.Data.AllocatorInstance.Data;
            }
          }
        }
        else {
          local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_130.Data.ArrayNum = 0;
          local_130.Data.ArrayMax = 0;
          bVar4 = UInterchangeAnimationTrackNode::GetCustomActorDependencyUid(this_01,&local_130);
          FVar9.Data = local_130.Data.AllocatorInstance.Data;
          if (bVar4) {
            UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_e8,&local_130);
            UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                      ((UInterchangeFactoryBaseNode *)this_00,&local_e8);
            FVar9.Data = local_130.Data.AllocatorInstance.Data;
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              FVar9.Data = local_130.Data.AllocatorInstance.Data;
            }
          }
        }
        if (FVar9.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar9.Data);
        }
      }
    }
LAB_14e7980b5:
    uVar7 = local_110._8_8_ & 0xffffffff;
    FVar10.Data = FVar10.Data + 0x10;
  } while( true );
}

// ExecutePipeline @ 14e7a3970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInterchangeGenericAnimationPipeline::ExecutePipeline
          (UInterchangeGenericAnimationPipeline *this,UInterchangeBaseNodeContainer *param_1,
          TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  int *piVar1;
  TArray<UInterchangeSourceData_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UInterchangeBaseNodeContainer *pUVar4;
  UInterchangeAnimationTrackSetNode *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  UInterchangeGenericAnimationPipeline *pUVar10;
  TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong *plVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  UObject *pUVar16;
  UInterchangeSkeletalAnimationTrackNode *pUVar17;
  FString *pFVar18;
  UInterchangeSourceNode *this_01;
  UInterchangeAnimationTrackNode *pUVar19;
  UClass *pUVar20;
  UInterchangeBaseNode *this_02;
  UInterchangeSceneNode *pUVar21;
  byte bVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ForAnyElementType FVar25;
  wchar_t *pwVar26;
  int iVar27;
  undefined8 *puVar28;
  FString *pFVar29;
  longlong lVar30;
  undefined8 *puVar31;
  uint uVar32;
  ForAnyElementType FVar33;
  FScriptContainerElement *pFVar34;
  uint uVar35;
  uint *puVar36;
  FScriptContainerElement *pFVar37;
  uint uVar38;
  undefined1 auStackY_438 [32];
  bool local_3e8;
  bool local_3e7 [3];
  EInterchangeAnimationPayLoadType local_3e4 [8];
  float local_3dc;
  uint local_3d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3d0;
  undefined8 *local_3c0;
  FString local_3b8;
  undefined8 *local_3a8;
  undefined8 local_3a0;
  UInterchangeGenericAnimationPipeline *local_398;
  undefined8 local_390;
  undefined8 *local_388;
  FString local_380;
  FString local_370;
  FString *local_360;
  undefined8 local_358;
  undefined8 *local_350;
  ulonglong local_348;
  FString local_340;
  FString local_330;
  undefined8 *local_320;
  undefined8 local_318;
  double local_310;
  double local_308;
  double local_300;
  TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *local_2f8;
  undefined8 **local_2f0;
  double local_2e8;
  int local_2e0;
  int local_2dc;
  undefined8 **local_2d8;
  undefined8 **local_2d0;
  double local_2c8;
  double local_2c0;
  FString local_2b8;
  FInterchangeAnimationPayLoadKey local_2a8;
  longlong *local_290;
  uint uStack_288;
  uint uStack_284;
  TBitArray<FDefaultBitArrayAllocator> *local_280;
  undefined4 uStack_278;
  uint uStack_274;
  uint local_270;
  undefined4 uStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  longlong *local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  undefined8 uStack_238;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString **local_1f0;
  UInterchangeGenericAnimationPipeline *local_1e8;
  code *local_1e0;
  FString ***local_1d8;
  FString local_1d0;
  FString local_1c0;
  code *local_1b0;
  undefined8 ***local_1a8;
  code *local_1a0;
  undefined8 ***local_198;
  code *local_190;
  undefined8 ***local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100 [2];
  undefined4 local_d4;
  undefined1 local_c8 [32];
  uint *local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  void *local_88;
  undefined4 local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_438;
  local_398 = this;
  local_2f8 = param_2;
  if (param_1 == (UInterchangeBaseNodeContainer *)0x0) {
    if ((byte)LogInterchangePipeline._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangePipeline);
    return;
  }
  this->BaseNodeContainer = param_1;
  pUVar16 = FWeakObjectPtr::Get(&(this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr);
  if (pUVar16[7].field_0x10 != '\0') {
    this->bImportAnimations = true;
  }
  if (this->bImportAnimations == false) {
    return;
  }
  local_2d8 = &local_3a8;
  local_198 = &local_2d8;
  local_1a0 = UE::Core::Private::Function::
              TFunctionRefCaller<`UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l2::<lambda_1>,void,FString_const_&,UInterchangeAnimationTrackSetNode_*>
              ::Call;
  local_3a8 = (undefined8 *)0x0;
  local_3a0 = 0;
  UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeAnimationTrackSetNode>
            (this->BaseNodeContainer,
             (TFunctionRef<void___cdecl(FString_const_&,UInterchangeAnimationTrackSetNode_*)> *)
             &local_1a0);
  local_2d0 = &local_350;
  local_188 = &local_2d0;
  local_350 = (undefined8 *)0x0;
  local_190 = UE::Core::Private::Function::
              TFunctionRefCaller<`UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l30::<lambda_2>,void,FString_const_&,UInterchangeSceneNode_*>
              ::Call;
  local_348 = 0;
  UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeSceneNode>
            (this->BaseNodeContainer,
             (TFunctionRef<void___cdecl(FString_const_&,UInterchangeSceneNode_*)> *)&local_190);
  dVar9 = __real_3fa1111111111111;
  dVar7 = __real_403e000000000000;
  uVar23 = (ulonglong)(int)(uint)local_348;
  local_3d8 = (uint)local_348;
  local_388 = local_350 + uVar23;
  uVar24 = uVar23;
  puVar28 = local_350;
  while( true ) {
    puVar31 = local_388;
    local_3c0 = puVar28;
    if ((int)uVar23 != (int)uVar24) {
      local_3e7[1] = false;
      `TCheckedPointerIterator<UInterchangeSceneNode_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_3e7 + 1);
    }
    pUVar10 = local_398;
    if (puVar28 == puVar31) break;
    pUVar21 = (UInterchangeSceneNode *)*puVar28;
    pUVar17 = NewObject<UInterchangeSkeletalAnimationTrackNode>
                        ((UObject *)local_398->BaseNodeContainer);
    pFVar18 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)pUVar21,&local_180);
    ::FString::ConcatFF(&local_2b8,
                        &UE::Interchange::Private::ConvertedFromRigidAnimationPrefixIdentifier,
                        pFVar18);
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    pUVar4 = pUVar10->BaseNodeContainer;
    ::FString::FString(&local_230,L"");
    pFVar18 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)pUVar21,&local_170);
    UInterchangeBaseNodeContainer::SetupNode
              (pUVar4,(UInterchangeBaseNode *)pUVar17,&local_2b8,pFVar18,TranslatedAsset,&local_230)
    ;
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data.AllocatorInstance.Data);
    }
    local_2c8 = dVar7;
    UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationSampleRate(pUVar17,&local_2c8);
    local_2c0 = 0.0;
    UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationStartTime(pUVar17,&local_2c0);
    local_310 = dVar9;
    UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationStopTime(pUVar17,&local_310);
    pFVar18 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)pUVar21,&local_160);
    UInterchangeSkeletalAnimationTrackNode::SetCustomSkeletonNodeUid(pUVar17,pFVar18);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    local_c8._0_8_ = 0;
    local_c8._8_8_ = 0;
    local_a8 = (uint *)0x0;
    uVar35 = 0;
    local_a0 = 0;
    local_9c = 0x80;
    local_98 = 0xffffffff;
    local_94 = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    UInterchangeSceneNode::GetMorphTargetCurveWeights
              (pUVar21,(TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_>
                        *)local_c8);
    uVar38 = local_a0;
    uStack_284 = 1;
    uStack_274 = uVar35;
    local_270 = uVar35;
    if (local_a0 != 0) {
      puVar36 = (uint *)(local_c8 + 0x10);
      if (local_a8 != (uint *)0x0) {
        puVar36 = local_a8;
      }
      uVar32 = *puVar36;
      uVar35 = 0;
      local_270 = 0;
      while (uVar32 == 0) {
        uVar35 = uVar35 + 1;
        local_270 = local_270 + 0x20;
        uStack_274 = local_a0;
        if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar35)
        goto LAB_14e7a3cff;
        uVar32 = puVar36[(int)uVar35];
      }
      uStack_284 = -uVar32 & uVar32;
      uVar24 = (ulonglong)uStack_284 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      local_2e0 = (int)lVar30;
      uStack_274 = (local_270 - 1) + local_2e0;
      if ((int)local_a0 < (int)uStack_274) {
        uStack_274 = local_a0;
      }
    }
LAB_14e7a3cff:
    local_290 = (longlong *)local_c8;
    uStack_26c = local_d4;
    local_280 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
    uVar32 = local_a0 & 0xffffffe0;
    iStack_268 = local_c8._8_4_ - local_94;
    TStack_258._padding_ = CONCAT44(uStack_284,uVar35);
    uStack_278 = 0xffffffff;
    TStack_258.CurrentBitIndex = uStack_274;
    TStack_258.UnvisitedBitMask = 0xffffffff;
    iVar27 = (int)local_a0 >> 5;
    TStack_258._28_4_ = local_d4;
    TStack_258.BaseBitIndex = local_270;
    uStack_238 = CONCAT44(uStack_264,iStack_268);
    bVar22 = (byte)local_a0;
    uStack_288 = uVar35;
    local_260 = local_290;
    TStack_258.Array = local_280;
    if (((int)local_a0 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar38 != local_a0) {
      puVar36 = (uint *)(local_c8 + 0x10);
      if (local_a8 != (uint *)0x0) {
        puVar36 = local_a8;
      }
      uVar35 = -1 << (bVar22 & 0x1f) & puVar36[iVar27];
      while (uVar35 == 0) {
        iVar27 = iVar27 + 1;
        uVar32 = uVar32 + 0x20;
        uVar38 = local_a0;
        if ((int)(((int)(local_a0 - 1) >> 0x1f & 0x1fU) + (local_a0 - 1)) >> 5 < iVar27)
        goto LAB_14e7a3e40;
        uVar35 = puVar36[iVar27];
      }
      uVar24 = (ulonglong)(-uVar35 & uVar35) * 2 + 1;
      lVar30 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      local_2dc = (int)lVar30;
      uVar38 = local_2dc + -1 + uVar32;
      if ((int)local_a0 < (int)uVar38) {
        uVar38 = local_a0;
      }
    }
LAB_14e7a3e40:
    while( true ) {
      plVar12 = local_260;
      if ((int)local_260[1] - *(int *)((longlong)local_260 + 0x34) != (int)uStack_238) {
        local_3e7[2] = false;
        `TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3e7 + 2);
      }
      if (((TStack_258.CurrentBitIndex == uVar38) &&
          (TStack_258.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10))) &&
         (plVar12 == (longlong *)local_c8)) break;
      pFVar18 = (FString *)(*plVar12 + (longlong)TStack_258.CurrentBitIndex * 0x20);
      ::FString::PrintfImpl(&local_210,L"%f");
      ::FString::ConcatFC(&local_220,pFVar18,L":");
      ::FString::ConcatFF(&local_200,&local_220,&local_210);
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
      local_3e4[0] = MORPHTARGETCURVEWEIGHTINSTANCE;
      UInterchangeSkeletalAnimationTrackNode::SetAnimationPayloadKeyForMorphTargetNodeUid
                (pUVar17,pFVar18,&local_200,local_3e4);
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      TStack_258.UnvisitedBitMask = TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
    }
    UInterchangeSceneNode::SetCustomAnimationAssetUidToPlay(pUVar21,&local_2b8);
    local_80 = 0;
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_c8);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    uVar23 = local_348 & 0xffffffff;
    puVar28 = local_3c0 + 1;
    uVar24 = (ulonglong)local_3d8;
  }
  if (local_350 != (undefined8 *)0x0) {
    FMemory::Free(local_350);
  }
  pUVar10 = local_398;
  if (local_398->bSceneImport == false) {
    local_1f0 = &local_360;
    local_1d8 = &local_1f0;
    local_360 = (FString *)0x0;
    local_1e0 = UE::Core::Private::Function::
                TFunctionRefCaller<`UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l41::<lambda_3>,void,FString_const_&,UInterchangeSkeletalAnimationTrackNode_*>
                ::Call;
    local_358 = 0;
    local_1e8 = local_398;
    UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeSkeletalAnimationTrackNode>
              (local_398->BaseNodeContainer,
               (TFunctionRef<void___cdecl(FString_const_&,UInterchangeSkeletalAnimationTrackNode_*)>
                *)&local_1e0);
    local_3e8 = true;
    this_01 = UInterchangeSourceNode::GetUniqueInstance(pUVar10->BaseNodeContainer);
    if (this_01 != (UInterchangeSourceNode *)0x0) {
      UInterchangeSourceNode::GetCustomAllowSceneRootAsJoint(this_01,&local_3e8);
    }
    fVar8 = __real_41f00000;
    dVar7 = __real_3ff0000000000000;
    uVar24 = (ulonglong)(int)local_3a0;
    local_398 = (UInterchangeGenericAnimationPipeline *)CONCAT44(local_398._4_4_,(int)local_3a0);
    puVar28 = local_3a8 + uVar24;
    puVar31 = local_3a8;
    local_3c0 = puVar28;
    while( true ) {
      local_388 = puVar31;
      if ((int)local_3a0 != (int)uVar24) {
        local_3e4[1] = 0;
        `TCheckedPointerIterator<UInterchangeAnimationTrackSetNode_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_3e4 + 1);
      }
      if (puVar31 == puVar28) break;
      this_00 = (UInterchangeAnimationTrackSetNode *)*puVar31;
      if (this_00 != (UInterchangeAnimationTrackSetNode *)0x0) {
        local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3d0.ArrayNum = 0;
        local_3d0.ArrayMax = 0;
        UInterchangeAnimationTrackSetNode::GetCustomAnimationTrackUids(this_00,&local_3d0);
        iVar27 = local_3d0.ArrayNum;
        uVar24 = (ulonglong)local_3d0.ArrayNum;
        pFVar37 = local_3d0.AllocatorInstance.Data + uVar24 * 0x10;
        FVar33.Data = local_3d0.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar24 != iVar27) {
            local_3e4[2] = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_3e4 + 2);
          }
          if (FVar33.Data == pFVar37) break;
          pUVar19 = (UInterchangeAnimationTrackNode *)
                    UInterchangeBaseNodeContainer::GetNode
                              (pUVar10->BaseNodeContainer,(FString *)FVar33.Data);
          if (pUVar19 != (UInterchangeAnimationTrackNode *)0x0) {
            pUVar20 = Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_NoRegister();
            iVar15 = (int)pUVar20->_padding_;
            if ((iVar15 <= *(int *)(pUVar19->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
                &pUVar20->_padding_)) {
              local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_370.Data.ArrayNum = 0;
              local_370.Data.ArrayMax = 0;
              bVar13 = UInterchangeAnimationTrackNode::GetCustomActorDependencyUid
                                 (pUVar19,&local_370);
              if (bVar13) {
                pFVar18 = local_360 + (int)local_358;
                if (local_360 != pFVar18) {
                  pFVar29 = local_360;
                  iVar15 = local_370.Data.ArrayNum;
                  do {
                    iVar3 = (pFVar29->Data).ArrayNum;
                    if (iVar3 == iVar15) {
                      FVar25.Data = local_370.Data.AllocatorInstance.Data;
                      if (iVar3 < 2) goto LAB_14e7a4702;
                      iVar15 = FGenericPlatformStricmp::Stricmp
                                         ((wchar_t *)(pFVar29->Data).AllocatorInstance.Data,
                                          (wchar_t *)local_370.Data.AllocatorInstance.Data);
                      bVar13 = iVar15 == 0;
                      iVar15 = local_370.Data.ArrayNum;
                    }
                    else {
                      bVar13 = iVar3 + iVar15 == 1;
                    }
                    FVar25.Data = local_370.Data.AllocatorInstance.Data;
                    if (bVar13) goto LAB_14e7a4702;
                    pFVar29 = pFVar29 + 1;
                  } while (pFVar29 != pFVar18);
                }
              }
              if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_370.Data.AllocatorInstance.Data);
              }
            }
          }
          uVar24 = local_3d0._8_8_ & 0xffffffff;
          FVar33.Data = FVar33.Data + 0x10;
        }
        pUVar17 = NewObject<UInterchangeSkeletalAnimationTrackNode>
                            ((UObject *)pUVar10->BaseNodeContainer);
        pFVar18 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_00,&local_150);
        ::FString::ConcatFF(&local_1c0,
                            &UE::Interchange::Private::ConvertedFromRigidAnimationPrefixIdentifier,
                            pFVar18);
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        pUVar4 = pUVar10->BaseNodeContainer;
        ::FString::FString(&local_1d0,L"");
        pFVar18 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)this_00,&local_140);
        UInterchangeBaseNodeContainer::SetupNode
                  (pUVar4,(UInterchangeBaseNode *)pUVar17,&local_1c0,pFVar18,TranslatedAsset,
                   &local_1d0);
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
        bVar13 = false;
        bVar14 = UInterchangeAnimationTrackSetNode::GetCustomFrameRate(this_00,&local_3dc);
        if (!bVar14) {
          local_3dc = fVar8;
        }
        local_2e8 = (double)local_3dc;
        UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationSampleRate(pUVar17,&local_2e8);
        local_308 = 0.0;
        UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationStartTime(pUVar17,&local_308);
        local_300 = dVar7 / (double)local_3dc;
        UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationStopTime(pUVar17,&local_300);
        uVar24 = (ulonglong)local_3d0.ArrayNum;
        pFVar37 = local_3d0.AllocatorInstance.Data + uVar24 * 0x10;
        local_3d8 = local_3d0.ArrayNum;
        FVar33.Data = local_3d0.AllocatorInstance.Data;
        while( true ) {
          if (local_3d0.ArrayNum != (int)uVar24) {
            local_3e4[3] = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_3e4 + 3);
          }
          if (FVar33.Data == pFVar37) break;
          pUVar19 = (UInterchangeAnimationTrackNode *)
                    UInterchangeBaseNodeContainer::GetNode
                              (pUVar10->BaseNodeContainer,(FString *)FVar33.Data);
          if (pUVar19 != (UInterchangeAnimationTrackNode *)0x0) {
            pUVar20 = Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_NoRegister();
            iVar27 = (int)pUVar20->_padding_;
            if ((iVar27 <= *(int *)(pUVar19->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar27 * 8) ==
                &pUVar20->_padding_)) {
              local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_330.Data.ArrayNum = 0;
              local_330.Data.ArrayMax = 0;
              bVar14 = UInterchangeAnimationTrackNode::GetCustomActorDependencyUid
                                 (pUVar19,&local_330);
              if (bVar14) {
                this_02 = UInterchangeBaseNodeContainer::GetNode
                                    (pUVar10->BaseNodeContainer,&local_330);
                if (this_02 == (UInterchangeBaseNode *)0x0) {
LAB_14e7a43bd:
                  this_02 = (UInterchangeBaseNode *)0x0;
                }
                else {
                  pUVar20 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
                  iVar27 = (int)pUVar20->_padding_;
                  if ((*(int *)(this_02->_padding_ + 0x38) < iVar27) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar27 * 8) !=
                      &pUVar20->_padding_)) goto LAB_14e7a43bd;
                }
                if (this_02 != (UInterchangeBaseNode *)0x0) {
                  ::FString::FString(&local_2a8.UniqueId,"");
                  local_2a8.Type = NONE;
                  bVar14 = UInterchangeAnimationTrackNode::GetCustomAnimationPayloadKey
                                     (pUVar19,&local_2a8);
                  FVar25.Data = local_330.Data.AllocatorInstance.Data;
                  if (bVar14) {
                    if (!bVar13) {
                      lVar30 = (longlong)local_330.Data.ArrayNum;
                      local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_340.Data.ArrayNum = 0;
                      local_340.Data.ArrayMax = 0;
                      local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_380.Data.ArrayNum = local_330.Data.ArrayNum;
                      if (local_330.Data.ArrayNum == 0) {
                        local_380.Data.ArrayMax = 0;
                      }
                      else {
                        UE::Core::Private::
                        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (2,2,local_330.Data.ArrayNum,0,(ForAnyElementType *)&local_380,
                                   local_330.Data.ArrayNum,&local_380.Data.ArrayMax);
                        memcpy(local_380.Data.AllocatorInstance.Data,FVar25.Data,lVar30 * 2);
                      }
                      UInterchangeBaseNode::GetParentUid(this_02,&local_3b8);
                      while( true ) {
                        pFVar18 = UInterchangeBaseNode::InvalidNodeUid(&local_130);
                        iVar27 = (pFVar18->Data).ArrayNum;
                        if (local_3b8.Data.ArrayNum == iVar27) {
                          if (local_3b8.Data.ArrayNum < 2) {
                            bVar13 = false;
                          }
                          else {
                            iVar27 = wcscmp((wchar_t *)local_3b8.Data.AllocatorInstance.Data,
                                            (wchar_t *)(pFVar18->Data).AllocatorInstance.Data);
                            bVar13 = iVar27 != 0;
                          }
                        }
                        else {
                          bVar13 = local_3b8.Data.ArrayNum + iVar27 != 1;
                        }
                        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_130.Data.AllocatorInstance.Data);
                        }
                        iVar27 = 0;
                        if ((!bVar13) ||
                           (pUVar21 = (UInterchangeSceneNode *)
                                      UInterchangeBaseNodeContainer::GetNode
                                                (pUVar10->BaseNodeContainer,&local_3b8),
                           pUVar21 == (UInterchangeSceneNode *)0x0)) break;
                        pUVar20 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
                        iVar15 = (int)pUVar20->_padding_;
                        if ((*(int *)(pUVar21->_padding_ + 0x38) < iVar15) ||
                           ((longlong *)
                            *(undefined1 **)
                             (*(longlong *)(pUVar21->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
                            &pUVar20->_padding_)) break;
                        local_3e7[0] = false;
                        UInterchangeSceneNode::GetCustomIsSceneRoot(pUVar21,local_3e7);
                        if ((local_3e8 == false) && (local_3e7[0] != false)) break;
                        pFVar18 = UE::Interchange::FSceneNodeStaticData::
                                  GetJointSpecializeTypeString();
                        bVar13 = UInterchangeSceneNode::IsSpecializedTypeContains(pUVar21,pFVar18);
                        if (bVar13) {
                          iVar15 = local_3b8.Data.ArrayNum + -1;
                          if (local_3b8.Data.ArrayNum == 0) {
                            iVar15 = iVar27;
                          }
                          ::FString::AssignRange
                                    (&local_340,(wchar_t *)local_3b8.Data.AllocatorInstance.Data,
                                     iVar15);
                        }
                        iVar15 = local_3b8.Data.ArrayNum + -1;
                        if (local_3b8.Data.ArrayNum == 0) {
                          iVar15 = iVar27;
                        }
                        ::FString::AssignRange
                                  (&local_380,(wchar_t *)local_3b8.Data.AllocatorInstance.Data,
                                   iVar15);
                        pFVar18 = UInterchangeBaseNode::GetParentUid
                                            ((UInterchangeBaseNode *)pUVar21,&local_120);
                        if (&local_3b8 != pFVar18) {
                          if (local_3b8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
                          }
                          local_3b8.Data.AllocatorInstance.Data =
                               (pFVar18->Data).AllocatorInstance.Data;
                          (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_3b8.Data.ArrayNum = (pFVar18->Data).ArrayNum;
                          local_3b8.Data.ArrayMax = (pFVar18->Data).ArrayMax;
                          (pFVar18->Data).ArrayNum = 0;
                          (pFVar18->Data).ArrayMax = 0;
                        }
                        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_120.Data.AllocatorInstance.Data);
                        }
                      }
                      if (local_340.Data.ArrayNum < 2) {
                        iVar15 = local_380.Data.ArrayNum + -1;
                        if (local_380.Data.ArrayNum == 0) {
                          iVar15 = iVar27;
                        }
                        ::FString::AssignRange
                                  (&local_340,(wchar_t *)local_380.Data.AllocatorInstance.Data,
                                   iVar15);
                      }
                      if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
                      }
                      UInterchangeSkeletalAnimationTrackNode::SetCustomSkeletonNodeUid
                                (pUVar17,&local_340);
                      bVar13 = true;
                      if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_380.Data.AllocatorInstance.Data);
                      }
                      if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_340.Data.AllocatorInstance.Data);
                      }
                    }
                    pFVar18 = UInterchangeBaseNode::GetUniqueID(this_02,&local_110);
                    UInterchangeSkeletalAnimationTrackNode::SetAnimationPayloadKeyForSceneNodeUid
                              (pUVar17,pFVar18,&local_2a8.UniqueId,&local_2a8.Type);
                    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_110.Data.AllocatorInstance.Data);
                    }
                  }
                  if (local_2a8.UniqueId.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2a8.UniqueId.Data.AllocatorInstance.Data);
                  }
                }
              }
              if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_330.Data.AllocatorInstance.Data);
              }
            }
          }
          uVar24 = (ulonglong)local_3d8;
          FVar33.Data = FVar33.Data + 0x10;
        }
        FVar25.Data = local_1c0.Data.AllocatorInstance.Data;
        if (!bVar13) {
          pUVar4 = pUVar10->BaseNodeContainer;
          pFVar18 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)pUVar17,local_100);
          if (*(int *)&(pUVar4->Nodes).field_0x8 != *(int *)&(pUVar4->Nodes).field_0x34) {
            iVar27 = (pFVar18->Data).ArrayNum;
            if (iVar27 == 0) {
              pwVar26 = L"";
              iVar27 = 0;
            }
            else {
              pwVar26 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
              iVar27 = iVar27 + -1;
            }
            uVar35 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar27,pwVar26);
            TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)&pUVar4->Nodes,uVar35,pFVar18);
          }
          FVar25.Data = local_1c0.Data.AllocatorInstance.Data;
          if (local_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100[0].Data.AllocatorInstance.Data);
            FVar25.Data = local_1c0.Data.AllocatorInstance.Data;
          }
        }
LAB_14e7a4702:
        if (FVar25.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar25.Data);
        }
        DestructItems<FString,int>((FString *)local_3d0.AllocatorInstance.Data,local_3d0.ArrayNum);
        puVar28 = local_3c0;
        if (local_3d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.AllocatorInstance.Data);
          puVar28 = local_3c0;
        }
      }
      uVar24 = (ulonglong)local_398 & 0xffffffff;
      puVar31 = local_388 + 1;
    }
    DestructItems<FString,int>(local_360,(int)local_358);
    if (local_360 != (FString *)0x0) {
      FMemory::Free(local_360);
    }
  }
  else {
    iVar27 = (int)local_3a0;
    puVar28 = local_3a8 + (int)local_3a0;
    puVar31 = local_3a8;
    while( true ) {
      if ((int)local_3a0 != iVar27) {
        local_3e4[4] = 0;
        `TCheckedPointerIterator<UInterchangeAnimationTrackSetNode_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_3e4 + 4);
      }
      if (puVar31 == puVar28) break;
      if ((UInterchangeAnimationTrackSetNode *)*puVar31 != (UInterchangeAnimationTrackSetNode *)0x0)
      {
        CreateLevelSequenceFactoryNode(pUVar10,(UInterchangeAnimationTrackSetNode *)*puVar31);
      }
      puVar31 = puVar31 + 1;
    }
  }
  bVar13 = FWeakObjectPtr::IsValid(&(pUVar10->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr);
  if (bVar13) {
    pUVar16 = FWeakObjectPtr::Get(&(pUVar10->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr);
    if (pUVar16[7].field_0x10 != '\0') {
      pUVar16 = FWeakObjectPtr::Get(&(pUVar10->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr)
      ;
      bVar13 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar16[7].field_0x14);
      if (!bVar13) {
        if (2 < (byte)LogInterchangePipeline._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogInterchangePipeline);
        }
        goto LAB_14e7a49b8;
      }
    }
    pTVar11 = local_2f8;
    pTVar2 = &pUVar10->SourceDatas;
    uVar35 = local_2f8->ArrayNum;
    if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
    }
    piVar1 = &(pUVar10->SourceDatas).ArrayMax;
    (pUVar10->SourceDatas).ArrayNum = 0;
    if (*piVar1 != uVar35) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar35,&pTVar2->AllocatorInstance,0,piVar1);
    }
    pFVar34 = (pTVar11->AllocatorInstance).Data;
    iVar27 = pTVar11->ArrayNum;
    pFVar37 = pFVar34 + (longlong)iVar27 * 8;
    while( true ) {
      if (pTVar11->ArrayNum != iVar27) {
        local_3e4[5] = 0;
        `TCheckedPointerIterator<UInterchangeSourceData_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_3e4 + 5);
      }
      if (pFVar34 == pFVar37) break;
      local_390 = *(undefined8 *)pFVar34;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_390) &&
          ((FScriptContainerElement *)&local_390 <
           pFVar5 + (longlong)(pUVar10->SourceDatas).ArrayMax * 8)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar15 = (pUVar10->SourceDatas).ArrayNum;
      if (iVar15 == (pUVar10->SourceDatas).ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,&(pUVar10->SourceDatas).ArrayMax);
      }
      pFVar34 = pFVar34 + 8;
      (pUVar10->SourceDatas).ArrayNum = iVar15 + 1;
      *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_390;
    }
    local_320 = (undefined8 *)0x0;
    local_318 = 0;
    local_2f0 = &local_320;
    local_1a8 = &local_2f0;
    local_1b0 = UE::Core::Private::Function::
                TFunctionRefCaller<`UInterchangeGenericAnimationPipeline::ExecutePipeline'::__l2::<lambda_5>,void,FString_const_&,UInterchangeSkeletalAnimationTrackNode_*>
                ::Call;
    UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeSkeletalAnimationTrackNode>
              (pUVar10->BaseNodeContainer,
               (TFunctionRef<void___cdecl(FString_const_&,UInterchangeSkeletalAnimationTrackNode_*)>
                *)&local_1b0);
    iVar27 = (int)local_318;
    puVar28 = local_320 + (int)local_318;
    puVar31 = local_320;
    while( true ) {
      if ((int)local_318 != iVar27) {
        `TCheckedPointerIterator<UInterchangeSkeletalAnimationTrackNode_*,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_3e4 + 6);
      }
      if (puVar31 == puVar28) break;
      if ((UInterchangeSkeletalAnimationTrackNode *)*puVar31 !=
          (UInterchangeSkeletalAnimationTrackNode *)0x0) {
        CreateAnimSequenceFactoryNode(pUVar10,(UInterchangeSkeletalAnimationTrackNode *)*puVar31);
      }
      puVar31 = puVar31 + 1;
    }
    if (local_320 != (undefined8 *)0x0) {
      FMemory::Free(local_320);
    }
  }
LAB_14e7a49b8:
  if (local_3a8 != (undefined8 *)0x0) {
    FMemory::Free(local_3a8);
  }
  return;
}

// GetPipelineCategory @ 14e7b9140

FString * __cdecl
UInterchangeGenericAnimationPipeline::GetPipelineCategory
          (FString *__return_storage_ptr__,UClass *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"Animations");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e7b9500

UClass * __cdecl UInterchangeGenericAnimationPipeline::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericAnimationPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericAnimationPipeline,0x198,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericAnimationPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericAnimationPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.InnerSingleton;
}

// ImplementUseSourceNameForAssetOptionAnimSequence @ 14e7c5890

void __thiscall
UInterchangeGenericAnimationPipeline::ImplementUseSourceNameForAssetOptionAnimSequence
          (UInterchangeGenericAnimationPipeline *this,bool param_1,FString *param_2)

{
  int iVar1;
  void *_Src;
  FScriptContainerElement *_Src_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FString *pFVar6;
  longlong lVar7;
  longlong lVar8;
  ForAnyElementType *local_res20;
  FString local_78;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  code *local_58;
  ForAnyElementType **local_50;
  FString local_48;
  FString local_38;
  
  if ((param_1) || (1 < (param_2->Data).ArrayNum)) {
    iVar1 = (this->SourceDatas).ArrayNum;
    if (iVar1 != 0) {
      if ((param_2->Data).ArrayNum < 2) {
        if (iVar1 < 1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        lVar8 = *(longlong *)(this->SourceDatas).AllocatorInstance.Data;
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = *(int *)(lVar8 + 0x30);
        lVar7 = (longlong)local_78.Data.ArrayNum;
        _Src = *(void **)(lVar8 + 0x28);
        if (local_78.Data.ArrayNum == 0) {
          local_78.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                     local_78.Data.ArrayNum,&local_78.Data.ArrayMax);
          memcpy(local_78.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
        }
        pFVar6 = FPaths::GetBaseFilename(&local_38,&local_78,true);
        bVar4 = true;
        bVar3 = true;
        bVar5 = false;
      }
      else {
        pFVar6 = ::FString::FString(&local_48,param_2);
        bVar4 = false;
        bVar3 = false;
        bVar5 = true;
      }
      local_68.Data = (FScriptContainerElement *)0x0;
      local_60 = (pFVar6->Data).ArrayNum;
      lVar8 = (longlong)local_60;
      _Src_00 = (pFVar6->Data).AllocatorInstance.Data;
      if (local_60 == 0) {
        local_5c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_60,0,&local_68,local_60,&local_5c);
        memcpy(local_68.Data,_Src_00,lVar8 * 2);
      }
      if (bVar5) {
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      if (bVar3) {
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      if ((bVar4) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_res20 = &local_68;
      local_50 = &local_res20;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UInterchangeGenericAnimationPipeline::ImplementUseSourceNameForAssetOptionAnimSequence'::__l5::<lambda_1>,void,FString_const_&,UInterchangeAnimSequenceFactoryNode_*>
                 ::Call;
      UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeAnimSequenceFactoryNode>
                (this->BaseNodeContainer,
                 (TFunctionRef<void___cdecl(FString_const_&,UInterchangeAnimSequenceFactoryNode_*)>
                  *)&local_58);
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
    }
  }
  return;
}

// Serialize @ 14e7dedf0

void __thiscall
UInterchangeGenericAnimationPipeline::Serialize
          (UInterchangeGenericAnimationPipeline *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&FFortniteMainInterchangePipelineObjectVersion::GUID);
  UInterchangePipelineBase::Serialize((UInterchangePipelineBase *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar3 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,
                         &FFortniteMainInterchangePipelineObjectVersion::GUID), iVar3 < 1)) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr);
    if (bVar2) {
      bVar2 = this->bAddCurveMetadataToSkeleton_DEPRECATED;
      pUVar4 = FWeakObjectPtr::Get(&(this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr);
      pUVar4[7].field_0x1e = bVar2;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1372038276348641438>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAnimationPipeline.cpp"
                         ,0x9e,"CommonSkeletalMeshesAndAnimationsProperties.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// Serialize @ 14e7deec0

void __thiscall
UInterchangeGenericAnimationPipeline::Serialize
          (UInterchangeGenericAnimationPipeline *this,FStructuredArchiveRecord param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FArchiveState *this_00;
  UObject *pUVar4;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))
            (this_00,&FFortniteMainInterchangePipelineObjectVersion::GUID);
  UInterchangePipelineBase::Serialize((UInterchangePipelineBase *)this,(FArchive *)this_00);
  if (this_00->ArIsLoading != 0) {
    iVar3 = FArchiveState::CustomVer(this_00,&FFortniteMainInterchangePipelineObjectVersion::GUID);
    if (iVar3 < 1) {
      bVar2 = FWeakObjectPtr::IsValid(&(this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr);
      if (bVar2) {
        bVar2 = this->bAddCurveMetadataToSkeleton_DEPRECATED;
        pUVar4 = FWeakObjectPtr::Get(&(this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr);
        pUVar4[7].field_0x1e = bVar2;
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1372038276348641438>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAnimationPipeline.cpp"
                           ,0x9e,"CommonSkeletalMeshesAndAnimationsProperties.IsValid()");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  return;
}

// StaticRegisterNativesUInterchangeGenericAnimationPipeline @ 14e7e45b0

void __cdecl
UInterchangeGenericAnimationPipeline::StaticRegisterNativesUInterchangeGenericAnimationPipeline
          (void)

{
  return;
}

