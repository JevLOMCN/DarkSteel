// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 12

// StaticClass @ 148ee5930

UClass * __cdecl UMovieSceneNiagaraSystemTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraSystemTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"MovieSceneNiagaraSystemTrack",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraSystemTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraSystemTrack,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNiagaraSystemTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraSystemTrack>,local_res8,
               UMovieSceneNiagaraTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraSystemTrack.InnerSingleton;
}

// UMovieSceneNiagaraSystemTrack @ 148f80a00

UMovieSceneNiagaraSystemTrack * __thiscall
UMovieSceneNiagaraSystemTrack::UMovieSceneNiagaraSystemTrack
          (UMovieSceneNiagaraSystemTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x128 = &___7UMovieSceneNiagaraSystemTrack__6B_;
  return this;
}

// UMovieSceneNiagaraSystemTrack @ 148f80a50

UMovieSceneNiagaraSystemTrack * __thiscall
UMovieSceneNiagaraSystemTrack::UMovieSceneNiagaraSystemTrack
          (UMovieSceneNiagaraSystemTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x128 = &___7UMovieSceneNiagaraSystemTrack__6B_;
  return this;
}

// ~UMovieSceneNiagaraSystemTrack @ 148f81ff0

void __thiscall
UMovieSceneNiagaraSystemTrack::~UMovieSceneNiagaraSystemTrack(UMovieSceneNiagaraSystemTrack *this)

{
  *(undefined ***)&this->field_0x128 = &___7IMovieSceneTrackTemplateProducer__6B_;
  *(undefined ***)this =
       &UMovieSceneNiagaraTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieSceneNiagaraTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x118 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x118);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// CreateNewSection @ 148fa7220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneNiagaraSystemTrack::CreateNewSection(UMovieSceneNiagaraSystemTrack *this)

{
  UClass *pUVar1;
  UMovieSceneSection *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieSceneNiagaraSystemSpawnSection::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar2 = (UMovieSceneSection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// CreateTemplateForSection @ 148fa7a80

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneNiagaraSystemTrack::CreateTemplateForSection
          (UMovieSceneNiagaraSystemTrack *this,FMovieSceneEvalTemplatePtr *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
  __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 | 2;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148fb6780

UClass * __cdecl UMovieSceneNiagaraSystemTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraSystemTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"MovieSceneNiagaraSystemTrack",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraSystemTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneNiagaraSystemTrack,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneNiagaraSystemTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraSystemTrack>,local_res8,
               UMovieSceneNiagaraTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraSystemTrack.InnerSingleton;
}

// PopulateEvaluationTree @ 148fc6f30

bool __thiscall
UMovieSceneNiagaraSystemTrack::PopulateEvaluationTree
          (UMovieSceneNiagaraSystemTrack *this,
          TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *param_1)

{
  FMovieSceneTrackEvaluationData *pFVar1;
  uint local_res8;
  uint local_res10;
  TRange<FFrameNumber> local_58;
  FMovieSceneTrackEvaluationData local_48;
  IMovieSceneEvaluationTreeNodeOperator local_30;
  TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> *local_28;
  FWeakObjectPtr local_20;
  FWeakObjectPtr FStack_18;
  undefined8 local_10;
  
  pFVar1 = FMovieSceneTrackEvaluationData::FromTrack(&local_48,(UMovieSceneTrack *)this);
  local_res8 = CONCAT31(local_res8._1_3_,2);
  local_20 = (pFVar1->Track).WeakPtr;
  FStack_18 = (pFVar1->Section).WeakPtr;
  local_30 = (IMovieSceneEvaluationTreeNodeOperator)
             &___7FAddOperator___TMovieSceneEvaluationTree_UFMovieSceneTrackEvaluationData____6B_;
  local_10._0_4_ = pFVar1->ForcedTime;
  local_10._4_2_ = pFVar1->SortOrder;
  local_10._6_1_ = pFVar1->Flags;
  local_10._7_1_ = pFVar1->field_0x17;
  local_58.LowerBound.Value.Value = 0;
  local_58.LowerBound._0_4_ = local_res8;
  local_res10 = CONCAT31(local_res10._1_3_,2);
  local_58.UpperBound.Value.Value = 0;
  local_58.UpperBound._0_4_ = local_res10;
  local_28 = param_1;
  FMovieSceneEvaluationTree::AddTimeRange
            ((FMovieSceneEvaluationTree *)param_1,&local_58,&local_30,
             (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
             (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
  return true;
}

// PostCompile @ 148fc6fe0

void __thiscall
UMovieSceneNiagaraSystemTrack::PostCompile
          (UMovieSceneNiagaraSystemTrack *this,FMovieSceneEvaluationTrack *param_1,
          FMovieSceneTrackCompilerArgs *param_2)

{
  FObjectPtr_u_0 *pFVar1;
  ENiagaraSystemSpawnSectionStartBehavior EVar2;
  ENiagaraSystemSpawnSectionEndBehavior EVar3;
  ENiagaraSystemSpawnSectionEvaluateBehavior EVar4;
  undefined1 uVar5;
  ENiagaraAgeUpdateMode EVar6;
  UObject *pUVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  FString *pFVar13;
  int iVar14;
  FObjectPtr_u_0 *this_00;
  int iVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  FString local_88;
  FString local_78;
  FString local_68;
  FMovieSceneNiagaraSystemTrackImplementation local_58;
  
  this_00 = *(FObjectPtr_u_0 **)&this[-1].field_0x120;
  pFVar1 = this_00 + *(int *)&this[-1].field_0x128;
  while( true ) {
    if (this_00 == pFVar1) {
      return;
    }
    pUVar12 = *(UClass **)((longlong)this_00->Handle + 0x10);
    pUVar11 = UMovieSceneNiagaraSystemSpawnSection::StaticClass();
    if (pUVar12 == pUVar11) break;
    this_00 = this_00 + 1;
  }
  if (this_00->Handle != (UObject *)0x0) {
    pUVar12 = UMovieSceneNiagaraSystemSpawnSection::StaticClass();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar12);
    if ((!bVar9) || (pUVar7 = this_00->Handle, pUVar7 == (UObject *)0x0)) {
      pFVar13 = GetTypeName<UMovieSceneNiagaraSystemSpawnSection>(&local_88);
      pwVar17 = L"";
      if ((pFVar13->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      }
      pFVar13 = GetFullNameForCastLogError<UMovieSceneSection>
                          (&local_78,(UMovieSceneSection *)this_00->Handle);
      if ((pFVar13->Data).ArrayNum != 0) {
        pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar17,pwVar16);
    }
    EVar2 = pUVar7[6].field_0x20;
    EVar3 = pUVar7[6].field_0x22;
    EVar4 = pUVar7[6].field_0x21;
    uVar5 = pUVar7[6].field_0x24;
    EVar6 = pUVar7[6].field_0x23;
    iVar15 = (int)((ulonglong)*(undefined8 *)&pUVar7[4].field_0x18 >> 0x20);
    cVar10 = (char)*(undefined8 *)&pUVar7[4].field_0x18;
    if (cVar10 == '\x01') {
      iVar15 = iVar15 + 1;
    }
    else if ((cVar10 == '\x02') &&
            (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar14 = (int)((ulonglong)*(undefined8 *)&pUVar7[4].field_0x10 >> 0x20);
    cVar10 = (char)*(undefined8 *)&pUVar7[4].field_0x10;
    if (cVar10 != '\x01') {
      if ((cVar10 == '\x02') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = iVar14 + 1;
    }
    local_58._padding_ = (longlong)&___7FMovieSceneNiagaraSystemTrackImplementation__6B_;
    local_58._padding_._0_1_ = 0;
    local_58.SpawnSectionStartFrame.Value = iVar14;
    local_58.SpawnSectionEndFrame.Value = iVar15;
    local_58.SpawnSectionStartBehavior = EVar2;
    local_58.SpawnSectionEvaluateBehavior = EVar4;
    local_58.SpawnSectionEndBehavior = EVar3;
    local_58.AgeUpdateMode = EVar6;
    local_58.bAllowScalability = (bool)uVar5;
    FMovieSceneEvaluationTrack::SetTrackImplementation<FMovieSceneNiagaraSystemTrackImplementation>
              (param_1,&local_58);
    return;
  }
  pFVar13 = GetTypeName<UMovieSceneNiagaraSystemSpawnSection>(&local_68);
  if ((pFVar13->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar17);
}

// StaticRegisterNativesUMovieSceneNiagaraSystemTrack @ 148fcdcd0

void __cdecl UMovieSceneNiagaraSystemTrack::StaticRegisterNativesUMovieSceneNiagaraSystemTrack(void)

{
  return;
}

// SupportsType @ 148fcdf60

bool __thiscall
UMovieSceneNiagaraSystemTrack::SupportsType
          (UMovieSceneNiagaraSystemTrack *this,TSubclassOf<UMovieSceneSection> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_148fcdfaa;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_148fcdfaa:
  pUVar5 = UMovieSceneNiagaraSystemSpawnSection::StaticClass();
  return pUVar4 == pUVar5;
}

// _getUObject @ 148fdaf80

UObject * __thiscall UMovieSceneNiagaraSystemTrack::_getUObject(UMovieSceneNiagaraSystemTrack *this)

{
  return (UObject *)&this[-1].field_0x8;
}

