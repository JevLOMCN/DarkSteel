// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 17

// StaticStruct @ 14a65aa50

UScriptStruct * __cdecl FRigUnit_RigLogic_Data::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic_Data.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic_Data.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RigLogic_Data,(UObject *)pUVar1,
                         L"RigUnit_RigLogic_Data");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_RigLogic_Data.OuterSingleton;
}

// FRigUnit_RigLogic_Data @ 14a6603a0

FRigUnit_RigLogic_Data * __thiscall
FRigUnit_RigLogic_Data::FRigUnit_RigLogic_Data
          (FRigUnit_RigLogic_Data *this,FRigUnit_RigLogic_Data *param_1)

{
  (this->SkelMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->LocalRigRuntimeContext).Object = (FSharedRigRuntimeContext *)0x0;
  (this->LocalRigRuntimeContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RigInstance).Ptr = (FRigInstance *)0x0;
  (this->InputCurveIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputCurveIndices).ArrayNum = 0;
  (this->InputCurveIndices).ArrayMax = 0;
  (this->NeuralNetMaskCurveIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NeuralNetMaskCurveIndices).ArrayNum = 0;
  (this->NeuralNetMaskCurveIndices).ArrayMax = 0;
  (this->HierarchyBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HierarchyBoneIndices).ArrayNum = 0;
  (this->HierarchyBoneIndices).ArrayMax = 0;
  (this->DriverJointsToControlAttributesMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DriverJointsToControlAttributesMap).ArrayNum = 0;
  (this->DriverJointsToControlAttributesMap).ArrayMax = 0;
  (this->MorphTargetCurveIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MorphTargetCurveIndices).ArrayNum = 0;
  (this->MorphTargetCurveIndices).ArrayMax = 0;
  (this->BlendShapeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendShapeIndices).ArrayNum = 0;
  (this->BlendShapeIndices).ArrayMax = 0;
  (this->CurveElementIndicesForAnimMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveElementIndicesForAnimMaps).ArrayNum = 0;
  (this->CurveElementIndicesForAnimMaps).ArrayMax = 0;
  (this->RigLogicIndicesForAnimMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RigLogicIndicesForAnimMaps).ArrayNum = 0;
  (this->RigLogicIndicesForAnimMaps).ArrayMax = 0;
  operator=(this,param_1);
  return this;
}

// FRigUnit_RigLogic_Data @ 14a660420

FRigUnit_RigLogic_Data * __thiscall
FRigUnit_RigLogic_Data::FRigUnit_RigLogic_Data(FRigUnit_RigLogic_Data *this)

{
  undefined8 local_res8;
  
  (this->SkelMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->LocalRigRuntimeContext).Object = (FSharedRigRuntimeContext *)0x0;
  (this->LocalRigRuntimeContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RigInstance).Ptr = (FRigInstance *)0x0;
  (this->InputCurveIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputCurveIndices).ArrayNum = 0;
  (this->InputCurveIndices).ArrayMax = 0;
  (this->NeuralNetMaskCurveIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NeuralNetMaskCurveIndices).ArrayNum = 0;
  (this->NeuralNetMaskCurveIndices).ArrayMax = 0;
  (this->HierarchyBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HierarchyBoneIndices).ArrayNum = 0;
  (this->HierarchyBoneIndices).ArrayMax = 0;
  (this->DriverJointsToControlAttributesMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DriverJointsToControlAttributesMap).ArrayNum = 0;
  (this->DriverJointsToControlAttributesMap).ArrayMax = 0;
  (this->MorphTargetCurveIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MorphTargetCurveIndices).ArrayNum = 0;
  (this->MorphTargetCurveIndices).ArrayMax = 0;
  (this->BlendShapeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendShapeIndices).ArrayNum = 0;
  (this->BlendShapeIndices).ArrayMax = 0;
  (this->CurveElementIndicesForAnimMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveElementIndicesForAnimMaps).ArrayNum = 0;
  (this->CurveElementIndicesForAnimMaps).ArrayMax = 0;
  (this->RigLogicIndicesForAnimMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RigLogicIndicesForAnimMaps).ArrayNum = 0;
  (this->RigLogicIndicesForAnimMaps).ArrayMax = 0;
  this->CurrentLOD = 0;
  return this;
}

// ~FRigUnit_RigLogic_Data @ 14a661150

void __thiscall FRigUnit_RigLogic_Data::~FRigUnit_RigLogic_Data(FRigUnit_RigLogic_Data *this)

{
  FScriptContainerElement *pFVar1;
  FRigInstance *pFVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LocalRigRuntimeContext != (TSharedPtr<FSharedRigRuntimeContext,1> *)&local_18) {
    (this->LocalRigRuntimeContext).Object = (FSharedRigRuntimeContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LocalRigRuntimeContext).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  DestructItems<FRigUnit_RigLogic_IntArray,int>
            ((FRigUnit_RigLogic_IntArray *)(this->RigLogicIndicesForAnimMaps).AllocatorInstance.Data
             ,(this->RigLogicIndicesForAnimMaps).ArrayNum);
  pFVar1 = (this->RigLogicIndicesForAnimMaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigUnit_RigLogic_IntArray,int>
            ((FRigUnit_RigLogic_IntArray *)
             (this->CurveElementIndicesForAnimMaps).AllocatorInstance.Data,
             (this->CurveElementIndicesForAnimMaps).ArrayNum);
  pFVar1 = (this->CurveElementIndicesForAnimMaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigUnit_RigLogic_IntArray,int>
            ((FRigUnit_RigLogic_IntArray *)(this->BlendShapeIndices).AllocatorInstance.Data,
             (this->BlendShapeIndices).ArrayNum);
  pFVar1 = (this->BlendShapeIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigUnit_RigLogic_IntArray,int>
            ((FRigUnit_RigLogic_IntArray *)(this->MorphTargetCurveIndices).AllocatorInstance.Data,
             (this->MorphTargetCurveIndices).ArrayNum);
  pFVar1 = (this->MorphTargetCurveIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DriverJointsToControlAttributesMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HierarchyBoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NeuralNetMaskCurveIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputCurveIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->RigInstance).Ptr;
  if (pFVar2 != (FRigInstance *)0x0) {
    rl4::RigInstance::destroy((pFVar2->RigInstance).Ptr);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar2->MemoryResource).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar2,0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LocalRigRuntimeContext).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 14a661710

FRigUnit_RigLogic_Data * __thiscall
FRigUnit_RigLogic_Data::operator=(FRigUnit_RigLogic_Data *this,FRigUnit_RigLogic_Data *param_1)

{
  FRigInstance *pFVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  (this->SkelMeshComponent).WeakPtr = (param_1->SkelMeshComponent).WeakPtr;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LocalRigRuntimeContext != (TSharedPtr<FSharedRigRuntimeContext,1> *)&local_18) {
    (this->LocalRigRuntimeContext).Object = (FSharedRigRuntimeContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LocalRigRuntimeContext).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  pFVar1 = (this->RigInstance).Ptr;
  (this->RigInstance).Ptr = (FRigInstance *)0x0;
  if (pFVar1 != (FRigInstance *)0x0) {
    rl4::RigInstance::destroy((pFVar1->RigInstance).Ptr);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->MemoryResource).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0x18);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->InputCurveIndices,&param_1->InputCurveIndices);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->NeuralNetMaskCurveIndices,&param_1->NeuralNetMaskCurveIndices);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->HierarchyBoneIndices,&param_1->HierarchyBoneIndices);
  TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_>::operator=
            (&this->MorphTargetCurveIndices,&param_1->MorphTargetCurveIndices);
  TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_>::operator=
            (&this->BlendShapeIndices,&param_1->BlendShapeIndices);
  TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurveElementIndicesForAnimMaps,&param_1->CurveElementIndicesForAnimMaps);
  TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_>::operator=
            (&this->RigLogicIndicesForAnimMaps,&param_1->RigLogicIndicesForAnimMaps);
  this->CurrentLOD = param_1->CurrentLOD;
  return this;
}

// CalculateRigLogic @ 14a668340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic_Data::CalculateRigLogic
          (FRigUnit_RigLogic_Data *this,URigHierarchy *param_1,TArrayView<float_const_,int> *param_2
          )

{
  float fVar1;
  RigInstance *pRVar2;
  FRigCurveElement *pFVar3;
  FSharedRigRuntimeContext *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  ushort uVar15;
  uint uVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::CalculateRigLogic(URigHierarchy_const_*,TArrayView<float_const_,int>)_::_2_::FStat_STAT_RigUnit_RigLogic_Calculate>
  FVar18;
  longlong lVar19;
  UScriptStruct *pUVar20;
  FName FVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStackY_1f8 [32];
  FColor_u_0 local_188 [2];
  FRigLogic *local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_158;
  FName local_150;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_180 = (FRigLogic *)param_2;
  FStatsHierarchical::BeginMeasurement("FRigUnit_RigLogic_Data::CalculateRigLogic");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RigUnit_RigLogic_Calculate ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::CalculateRigLogic(URigHierarchy_const_*,TArrayView<float_const_,int>)_::_2_::FStat_STAT_RigUnit_RigLogic_Calculate>
         )0x0) {
      pFVar17 = ::FName::FName(&local_158,"STAT_RigUnit_RigLogic_Calculate");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigUnit_RigLogic_Calculate,*pFVar17,
                 L"STAT_RigUnit_RigLogic_Calculate","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar18 = StatPtr_STAT_RigUnit_RigLogic_Calculate;
  if (StatPtr_STAT_RigUnit_RigLogic_Calculate ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::CalculateRigLogic(URigHierarchy_const_*,TArrayView<float_const_,int>)_::_2_::FStat_STAT_RigUnit_RigLogic_Calculate>
       )0x0) {
    pFVar17 = ::FName::FName(&local_150,"STAT_RigUnit_RigLogic_Calculate");
    FVar18 = (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::CalculateRigLogic(URigHierarchy_const_*,TArrayView<float_const_,int>)_::_2_::FStat_STAT_RigUnit_RigLogic_Calculate>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigUnit_RigLogic_Calculate,
                          *pFVar17,L"STAT_RigUnit_RigLogic_Calculate","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar18;
  bVar8 = false;
  bVar9 = false;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  bVar13 = false;
  bVar14 = false;
  if ((FVar21.ComparisonIndex.Value.Value != 0) || (FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_188[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_188[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_178.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigUnit_RigLogic.cpp"
                   ,0x162);
        bVar8 = true;
        bVar9 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_170 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar13 = true;
      goto LAB_14a668519;
    }
  }
  bVar9 = bVar14;
  bVar8 = bVar13;
  bVar13 = false;
  local_170 = local_168;
  FVar21 = local_168;
LAB_14a668519:
  pRVar2 = (((this->RigInstance).Ptr)->RigInstance).Ptr;
  (**(code **)((longlong)*pRVar2 + 0xd8))(pRVar2,(short)this->CurrentLOD);
  uVar15 = (**(code **)((longlong)*(((this->RigInstance).Ptr)->RigInstance).Ptr + 0xd0))();
  this->CurrentLOD = (uint)uVar15;
  uVar15 = (**(code **)((longlong)*(((this->RigInstance).Ptr)->RigInstance).Ptr + 0x30))();
  dVar10 = __real_3ff0000000000000;
  uVar24 = 0;
  if (uVar15 != 0) {
    lVar26 = 0;
    do {
      uVar25 = 0;
      if ((int)uVar24 < (this->InputCurveIndices).ArrayNum) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar25 = *(uint *)((this->InputCurveIndices).AllocatorInstance.Data + lVar26 * 4);
      if (((int)uVar25 < 0) || ((param_1->Elements).ArrayNum <= (int)uVar25)) {
LAB_14a6686a7:
        fVar27 = 0.0;
      }
      else {
        uVar16 = 0;
        if ((int)uVar25 < (param_1->Elements).ArrayNum) {
          uVar16 = ~uVar25 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = *(FRigCurveElement **)
                  ((param_1->Elements).AllocatorInstance.Data + (longlong)(int)uVar25 * 8);
        if (pFVar3 == (FRigCurveElement *)0x0) goto LAB_14a6686a7;
        lVar19 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
        pUVar20 = FRigCurveElement::StaticStruct();
        if (pUVar20 == (UScriptStruct *)0x0) goto LAB_14a6686a7;
        iVar7 = (int)pUVar20->_padding_;
        if ((*(int *)(lVar19 + 0x38) < iVar7) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar20->_padding_)) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
        if (!bVar14) goto LAB_14a6686a7;
        fVar27 = URigHierarchy::GetCurveValue(param_1,pFVar3);
      }
      pRVar2 = (((this->RigInstance).Ptr)->RigInstance).Ptr;
      dVar29 = (double)fVar27;
      if (dVar10 <= (double)fVar27) {
        dVar29 = dVar10;
      }
      if (dVar29 <= 0.0) {
        dVar29 = 0.0;
      }
      (**(code **)((longlong)*pRVar2 + 0x40))(pRVar2,uVar24 & 0xffff,(float)dVar29);
      uVar24 = uVar24 + 1;
      lVar26 = lVar26 + 1;
      param_2 = (TArrayView<float_const_,int> *)local_180;
    } while ((int)uVar24 < (int)(uint)uVar15);
  }
  if (((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (this->LocalRigRuntimeContext).Object;
  if (((pFVar4->RigLogic).Object == (FRigLogic *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar24 = __xmm_80000000800000008000000080000000;
  fVar27 = __real_3f800000;
  local_180 = (pFVar4->RigLogic).Object;
  if ((((local_180->Configuration).LoadRBFBehavior != false) ||
      ((local_180->Configuration).LoadTwistSwingBehavior != false)) &&
     (uVar25 = 0, 0 < (this->DriverJointsToControlAttributesMap).ArrayNum)) {
    lVar26 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar25 < (this->DriverJointsToControlAttributesMap).ArrayNum) {
        uVar16 = ~uVar25 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->DriverJointsToControlAttributesMap).AllocatorInstance.Data;
      URigHierarchy::GetLocalTransformByIndex(param_1,&local_148,*(int *)(pFVar5 + lVar26),false);
      dVar12 = local_148.Rotation.ZW.m128d_f64[1];
      dVar11 = local_148.Rotation.ZW.m128d_f64[0];
      dVar29 = local_148.Rotation.XY.m128d_f64[1];
      dVar10 = local_148.Rotation.XY.m128d_f64[0];
      iVar7 = *(int *)(pFVar5 + lVar26 + 4) * 10;
      uVar16 = iVar7 + 3;
      uVar22 = 0;
      if ((int)uVar16 < param_2->ArrayNum) {
        uVar22 = ~uVar16 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar22 = iVar7 + 4;
      fVar35 = param_2->DataPtr[(int)uVar16];
      uVar16 = 0;
      if ((int)uVar22 < param_2->ArrayNum) {
        uVar16 = ~uVar22 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar23 = iVar7 + 5;
      fVar36 = param_2->DataPtr[(int)uVar22];
      uVar16 = 0;
      if ((int)uVar23 < param_2->ArrayNum) {
        uVar16 = ~uVar23 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar22 = iVar7 + 6;
      fVar1 = param_2->DataPtr[(int)uVar23];
      uVar16 = 0;
      if ((int)uVar22 < param_2->ArrayNum) {
        uVar16 = ~uVar22 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar34 = param_2->DataPtr[(int)uVar22];
      fVar31 = (float)dVar10;
      fVar32 = (float)dVar29;
      fVar33 = (float)dVar11;
      fVar30 = (float)dVar12;
      fVar28 = fVar27 / (fVar34 * fVar34 + fVar1 * fVar1 + fVar36 * fVar36 + fVar35 * fVar35);
      fVar34 = fVar34 * fVar28;
      fVar37 = (float)((uint)(fVar35 * fVar28) ^ uVar24);
      fVar36 = (float)((uint)(fVar36 * fVar28) ^ uVar24);
      fVar35 = (float)((uint)(fVar1 * fVar28) ^ uVar24);
      if (*(int *)(pFVar5 + lVar26 + 8) != -1) {
        pRVar2 = (((this->RigInstance).Ptr)->RigInstance).Ptr;
        (**(code **)((longlong)*pRVar2 + 0x40))
                  (pRVar2,*(int *)(pFVar5 + lVar26 + 8),
                   (fVar34 * fVar31 + fVar30 * fVar37 + fVar33 * fVar36) - fVar32 * fVar35);
      }
      if (*(int *)(pFVar5 + lVar26 + 0xc) != -1) {
        pRVar2 = (((this->RigInstance).Ptr)->RigInstance).Ptr;
        (**(code **)((longlong)*pRVar2 + 0x40))
                  (pRVar2,*(int *)(pFVar5 + lVar26 + 0xc),
                   (fVar34 * fVar32 + fVar30 * fVar36 + fVar31 * fVar35) - fVar33 * fVar37);
      }
      if (*(int *)(pFVar5 + lVar26 + 0x10) != -1) {
        pRVar2 = (((this->RigInstance).Ptr)->RigInstance).Ptr;
        (**(code **)((longlong)*pRVar2 + 0x40))
                  (pRVar2,*(int *)(pFVar5 + lVar26 + 0x10),
                   (fVar34 * fVar33 + fVar30 * fVar35 + fVar37 * fVar32) - fVar31 * fVar36);
      }
      if (*(int *)(pFVar5 + lVar26 + 0x14) != -1) {
        pRVar2 = (((this->RigInstance).Ptr)->RigInstance).Ptr;
        (**(code **)((longlong)*pRVar2 + 0x40))
                  (pRVar2,*(int *)(pFVar5 + lVar26 + 0x14),
                   ((fVar34 * fVar30 - fVar37 * fVar31) - fVar32 * fVar36) - fVar33 * fVar35);
      }
      uVar25 = uVar25 + 1;
      lVar26 = lVar26 + 0x18;
    } while ((int)uVar25 < (this->DriverJointsToControlAttributesMap).ArrayNum);
  }
  if ((local_180->Configuration).LoadMachineLearnedBehavior != false) {
    uVar15 = (**(code **)((longlong)*(((this->RigInstance).Ptr)->RigInstance).Ptr + 0x88))();
    uVar24 = 0;
    if (uVar15 != 0) {
      lVar26 = 0;
      do {
        uVar25 = 0;
        if ((int)uVar24 < (this->NeuralNetMaskCurveIndices).ArrayNum) {
          uVar25 = ~uVar24 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar25 = *(uint *)((this->NeuralNetMaskCurveIndices).AllocatorInstance.Data + lVar26 * 4);
        if ((-1 < (int)uVar25) && ((int)uVar25 < (param_1->Elements).ArrayNum)) {
          uVar16 = 0;
          if ((int)uVar25 < (param_1->Elements).ArrayNum) {
            uVar16 = ~uVar25 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar3 = *(FRigCurveElement **)
                    ((param_1->Elements).AllocatorInstance.Data + (longlong)(int)uVar25 * 8);
          if (pFVar3 != (FRigCurveElement *)0x0) {
            lVar19 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
            pUVar20 = FRigCurveElement::StaticStruct();
            if (pUVar20 != (UScriptStruct *)0x0) {
              iVar7 = (int)pUVar20->_padding_;
              if ((*(int *)(lVar19 + 0x38) < iVar7) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar7 * 8)
                  != &pUVar20->_padding_)) {
                bVar14 = false;
              }
              else {
                bVar14 = true;
              }
              if ((bVar14) && (bVar14 = URigHierarchy::IsCurveValueSet(param_1,pFVar3), bVar14)) {
                if ((int)uVar25 < (param_1->Elements).ArrayNum) {
                  uVar16 = 0;
                  if ((int)uVar25 < (param_1->Elements).ArrayNum) {
                    uVar16 = ~uVar25 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pFVar3 = *(FRigCurveElement **)
                            ((param_1->Elements).AllocatorInstance.Data + (longlong)(int)uVar25 * 8)
                  ;
                  if (pFVar3 == (FRigCurveElement *)0x0) goto LAB_14a668db4;
                  lVar19 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
                  pUVar20 = FRigCurveElement::StaticStruct();
                  if (pUVar20 == (UScriptStruct *)0x0) goto LAB_14a668db4;
                  iVar7 = (int)pUVar20->_padding_;
                  if ((*(int *)(lVar19 + 0x38) < iVar7) ||
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar7 * 8) !=
                      &pUVar20->_padding_)) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = true;
                  }
                  if (!bVar14) goto LAB_14a668db4;
                  fVar27 = URigHierarchy::GetCurveValue(param_1,pFVar3);
                }
                else {
LAB_14a668db4:
                  fVar27 = 0.0;
                }
                pRVar2 = (((this->RigInstance).Ptr)->RigInstance).Ptr;
                (**(code **)((longlong)*pRVar2 + 0x98))(pRVar2,uVar24 & 0xffff,fVar27);
              }
            }
          }
        }
        uVar24 = uVar24 + 1;
        lVar26 = lVar26 + 1;
        FVar21 = local_170;
      } while ((int)uVar24 < (int)(uint)uVar15);
    }
  }
  if (((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (this->LocalRigRuntimeContext).Object;
  if (((pFVar4->RigLogic).Object == (FRigLogic *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FRigLogic::Calculate((pFVar4->RigLogic).Object,(this->RigInstance).Ptr);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeRigLogic @ 14a67b140

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic_Data::InitializeRigLogic
          (FRigUnit_RigLogic_Data *this,URigHierarchy *param_1,
          TSharedPtr<FSharedRigRuntimeContext,1> *param_2)

{
  int *piVar1;
  TUniquePtr<FRigInstance,TDefaultDelete<FRigInstance>_> *pTVar2;
  int iVar3;
  FSharedRigRuntimeContext *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FRigLogic *pFVar6;
  FRigInstance *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ushort uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::InitializeRigLogic(URigHierarchy_const_*,TSharedPtr<FSharedRigRuntimeContext,1>)_::_2_::FStat_STAT_RigUnit_RigLogic_InitializeRigLogic>
  FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar16;
  FRigInstance *pFVar17;
  RigInstance *pRVar18;
  uint uVar19;
  FNameEntryId FVar20;
  FName FVar21;
  FColor_u_0 local_res18 [2];
  uint local_res20;
  uint uStackX_24;
  FName local_a8;
  FName local_a0;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  FStatMessage local_70;
  FName local_60;
  FName local_58;
  longlong local_50;
  FSharedRigRuntimeContext *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  FStatsHierarchical::BeginMeasurement("FRigUnit_RigLogic_Data::InitializeRigLogic");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RigUnit_RigLogic_InitializeRigLogic ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::InitializeRigLogic(URigHierarchy_const_*,TSharedPtr<FSharedRigRuntimeContext,1>)_::_2_::FStat_STAT_RigUnit_RigLogic_InitializeRigLogic>
         )0x0) {
      pFVar14 = ::FName::FName(&local_60,"STAT_RigUnit_RigLogic_InitializeRigLogic");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigUnit_RigLogic_InitializeRigLogic,
                 *pFVar14,L"STAT_RigUnit_RigLogic_InitializeRigLogic","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_RigUnit_RigLogic_InitializeRigLogic;
  if (StatPtr_STAT_RigUnit_RigLogic_InitializeRigLogic ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::InitializeRigLogic(URigHierarchy_const_*,TSharedPtr<FSharedRigRuntimeContext,1>)_::_2_::FStat_STAT_RigUnit_RigLogic_InitializeRigLogic>
       )0x0) {
    pFVar14 = ::FName::FName(&local_58,"STAT_RigUnit_RigLogic_InitializeRigLogic");
    FVar15 = (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::InitializeRigLogic(URigHierarchy_const_*,TSharedPtr<FSharedRigRuntimeContext,1>)_::_2_::FStat_STAT_RigUnit_RigLogic_InitializeRigLogic>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RigUnit_RigLogic_InitializeRigLogic,*pFVar14,
                          L"STAT_RigUnit_RigLogic_InitializeRigLogic","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar15;
  bVar9 = false;
  bVar11 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  FVar20 = FVar21.ComparisonIndex.Value;
  uVar19 = FVar21.Number;
  if ((FVar20.Value == 0) && (uVar19 == 0)) {
LAB_14a67b2c3:
    bVar10 = false;
    FVar21 = local_a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar20.Value;
        local_a8.Number = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigUnit_RigLogic.cpp"
                   ,0x5a);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14a67b2c3;
    local_res20 = FVar20.Value;
    uStackX_24 = uVar19;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar10 = true;
  }
  pFVar4 = param_2->Object;
  if (pFVar4 == (FSharedRigRuntimeContext *)0x0) {
    if (2 < (byte)LogRigLogicUnit._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRigLogicUnit);
    }
    if (bVar11) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((!bVar10) || (FVar21 == (FName)0x0)) ||
       ((FThreadStats::bPrimaryDisableForever != false || (FThreadStats::TlsSlot == 0xffffffff))))
    goto LAB_14a67b6cd;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) goto LAB_14a67b6cd;
    local_80.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
    local_80.NameAndInfo.Index.Value = FVar21.ComparisonIndex.Value.Value;
    QueryPerformanceCounter(&local_90);
    local_80.StatData.Pad[4] = '\0';
    local_80.StatData.Pad[5] = '\0';
    local_80.StatData.Pad[6] = '\0';
    local_80.StatData.Pad[7] = '\0';
    local_80.StatData.Pad[0] = local_90.s.LowPart._0_1_;
    local_80.StatData.Pad[1] = local_90.s.LowPart._1_1_;
    local_80.StatData.Pad[2] = local_90.s.LowPart._2_1_;
    local_80.StatData.Pad[3] = local_90.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(this_00,&local_80);
    piVar1 = &this_00->ScopeCount;
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
  }
  else {
    if ((this->LocalRigRuntimeContext).Object != pFVar4) {
      pTVar5 = (param_2->SharedReferenceCount).ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = (this->LocalRigRuntimeContext).Object;
      pTStack_40 = (this->LocalRigRuntimeContext).SharedReferenceCount.ReferenceController;
      (this->LocalRigRuntimeContext).Object = pFVar4;
      (this->LocalRigRuntimeContext).SharedReferenceCount.ReferenceController = pTVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      pFVar17 = (this->RigInstance).Ptr;
      (this->RigInstance).Ptr = (FRigInstance *)0x0;
      if (pFVar17 != (FRigInstance *)0x0) {
        rl4::RigInstance::destroy((pFVar17->RigInstance).Ptr);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar17->MemoryResource).SharedReferenceCount.ReferenceController);
        ::operator_delete(pFVar17,0x18);
      }
    }
    pTVar2 = &this->RigInstance;
    if ((this->RigInstance).Ptr == (FRigInstance *)0x0) {
      if (((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (((this->LocalRigRuntimeContext).Object)->RigLogic).Object;
      pFVar17 = ::operator_new(0x18);
      if (pFVar17 == (FRigInstance *)0x0) {
        pFVar17 = (FRigInstance *)0x0;
      }
      else {
        FMemoryResource::SharedInstance(&pFVar17->MemoryResource);
        pRVar18 = rl4::RigInstance::create
                            ((pFVar6->RigLogic).Ptr,
                             (MemoryResource *)(pFVar17->MemoryResource).Object);
        (pFVar17->RigInstance).Ptr = pRVar18;
      }
      if (pTVar2 == (TUniquePtr<FRigInstance,TDefaultDelete<FRigInstance>_> *)&local_50) {
        if (pFVar17 != (FRigInstance *)0x0) {
          rl4::RigInstance::destroy((pFVar17->RigInstance).Ptr);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar17->MemoryResource).SharedReferenceCount.ReferenceController);
          goto LAB_14a67b4e0;
        }
      }
      else {
        pFVar7 = pTVar2->Ptr;
        pTVar2->Ptr = pFVar17;
        if (pFVar7 != (FRigInstance *)0x0) {
          rl4::RigInstance::destroy((pFVar7->RigInstance).Ptr);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar7->MemoryResource).SharedReferenceCount.ReferenceController);
          pFVar17 = pFVar7;
LAB_14a67b4e0:
          ::operator_delete(pFVar17,0x18);
        }
      }
      pRVar18 = (pTVar2->Ptr->RigInstance).Ptr;
      (**(code **)((longlong)*pRVar18 + 0xd8))(pRVar18,(short)this->CurrentLOD);
      uVar13 = (**(code **)((longlong)*(pTVar2->Ptr->RigInstance).Ptr + 0xd0))();
      this->CurrentLOD = (uint)uVar13;
      if (((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar4 = (this->LocalRigRuntimeContext).Object;
      if (((pFVar4->RigLogic).Object == (FRigLogic *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (pFVar4->RigLogic).Object;
      if ((pFVar6->Configuration).LoadJoints != false) {
        MapJoints(this,param_1);
      }
      if (((pFVar6->Configuration).LoadTwistSwingBehavior != false) ||
         ((pFVar6->Configuration).LoadRBFBehavior != false)) {
        MapDriverJoints(this,param_1);
      }
      MapInputCurveIndices(this,param_1);
      if ((pFVar6->Configuration).LoadMachineLearnedBehavior != false) {
        MapNeuralNetMaskCurveIndices(this,param_1);
      }
      if ((pFVar6->Configuration).LoadBlendShapes != false) {
        MapMorphTargets(this,param_1);
      }
      if ((pFVar6->Configuration).LoadAnimatedMaps != false) {
        MapMaskMultipliers(this,param_1);
      }
    }
    if (bVar11) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) || (FVar21 == (FName)0x0)) || (FThreadStats::bPrimaryDisableForever != false))
       || (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_14a67b6cd;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) goto LAB_14a67b6cd;
    local_70.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
    local_70.NameAndInfo.Index.Value = FVar21.ComparisonIndex.Value.Value;
    QueryPerformanceCounter(&local_88);
    local_70.StatData.Pad[4] = '\0';
    local_70.StatData.Pad[5] = '\0';
    local_70.StatData.Pad[6] = '\0';
    local_70.StatData.Pad[7] = '\0';
    local_70.StatData.Pad[0] = local_88.s.LowPart._0_1_;
    local_70.StatData.Pad[1] = local_88.s.LowPart._1_1_;
    local_70.StatData.Pad[2] = local_88.s.LowPart._2_1_;
    local_70.StatData.Pad[3] = local_88.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(this_00,&local_70);
    piVar1 = &this_00->ScopeCount;
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
  }
  if (iVar3 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
LAB_14a67b6cd:
  FStatsHierarchical::EndMeasurement();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// IsRigLogicInitialized @ 14a67c3d0

bool __thiscall FRigUnit_RigLogic_Data::IsRigLogicInitialized(FRigUnit_RigLogic_Data *this)

{
  FSharedRigRuntimeContext *pFVar1;
  
  pFVar1 = (this->LocalRigRuntimeContext).Object;
  if (((pFVar1 != (FSharedRigRuntimeContext *)0x0) &&
      ((pFVar1->RigLogic).Object != (FRigLogic *)0x0)) &&
     ((this->RigInstance).Ptr != (FRigInstance *)0x0)) {
    return true;
  }
  return false;
}

// MapDriverJoints @ 14a67ccb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic_Data::MapDriverJoints(FRigUnit_RigLogic_Data *this,URigHierarchy *param_1)

{
  TArray<FBoneIndexControlAttributeMapping,TSizedDefaultAllocator<32>_> *this_00;
  IDNAReader *pIVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  ushort uVar11;
  ushort uVar12;
  int iVar13;
  <lambda_2> <Var14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapDriverJoints(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapDriverJoints>
  FVar17;
  int iVar18;
  ForAnyElementType FVar19;
  FName FVar20;
  ushort uVar21;
  uint uVar23;
  int *piVar24;
  undefined1 auStackY_168 [32];
  FString local_f8;
  FColor_u_0 local_e8 [2];
  FString local_e0;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  wchar_t *local_b0 [2];
  FName local_a0;
  URigHierarchy *local_98;
  FRigElementKey local_90;
  FName local_84;
  FName local_7c;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  ulonglong local_58;
  uint uVar22;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_98 = param_1;
  FStatsHierarchical::BeginMeasurement("FRigUnit_RigLogic_Data::MapDriverJoints");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RigUnit_RigLogic_MapDriverJoints ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapDriverJoints(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapDriverJoints>
         )0x0) {
      pFVar16 = ::FName::FName(&local_84,"STAT_RigUnit_RigLogic_MapDriverJoints");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigUnit_RigLogic_MapDriverJoints,
                 *pFVar16,L"STAT_RigUnit_RigLogic_MapDriverJoints","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_RigUnit_RigLogic_MapDriverJoints;
  if (StatPtr_STAT_RigUnit_RigLogic_MapDriverJoints ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapDriverJoints(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapDriverJoints>
       )0x0) {
    pFVar16 = ::FName::FName(&local_7c,"STAT_RigUnit_RigLogic_MapDriverJoints");
    FVar17 = (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapDriverJoints(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapDriverJoints>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RigUnit_RigLogic_MapDriverJoints,*pFVar16,
                          L"STAT_RigUnit_RigLogic_MapDriverJoints","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar17;
  bVar5 = false;
  bVar6 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  bVar9 = false;
  bVar10 = false;
  if ((FVar20.ComparisonIndex.Value.Value != 0) || (FVar20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_d0.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigUnit_RigLogic.cpp"
                   ,0xd1);
        bVar5 = true;
        bVar6 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c8 = FVar20;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar9 = true;
      goto LAB_14a67ce5b;
    }
  }
  bVar6 = bVar10;
  bVar5 = bVar9;
  bVar9 = false;
  local_c8 = local_c0;
  FVar20 = local_c0;
LAB_14a67ce5b:
  if (((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar1 = (((this->LocalRigRuntimeContext).Object)->BehaviorReader).Object;
  uVar11 = (**(code **)(*(longlong *)
                         (&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 4)) + 0xa8
                       ))();
  this_00 = &this->DriverJointsToControlAttributesMap;
  piVar24 = &(this->DriverJointsToControlAttributesMap).ArrayMax;
  (this->DriverJointsToControlAttributesMap).ArrayNum = 0;
  if (*piVar24 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&this_00->AllocatorInstance,0,piVar24);
  }
  if (*piVar24 < (int)(uint)(uVar11 >> 2)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,(uint)(uVar11 >> 2),&this_00->AllocatorInstance,
               (this->DriverJointsToControlAttributesMap).ArrayNum,piVar24);
  }
  uVar8 = _UNK_15060db28;
  uVar7 = ___xmm_ffffffffffffffffffffffffffffffff;
  uVar23 = 0;
  if (uVar11 != 0) {
    do {
      piVar24 = &(this->DriverJointsToControlAttributesMap).ArrayMax;
      (**(code **)(*(longlong *)(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 4))
                  + 0xb0))
                (&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 4),&local_f8);
      iVar18 = local_f8.Data.ArrayNum;
      iVar13 = iVar18 + -1;
      if (iVar18 == 0) {
        iVar13 = 0;
      }
      if (iVar13 < 2) {
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      else {
        iVar13 = iVar18 + -3;
        if (iVar18 == 0) {
          iVar13 = -2;
        }
        ::FString::Mid(&local_f8,&local_e0,0,iVar13);
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_e0.Data.ArrayNum != 0) {
          FVar19.Data = local_e0.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_a0,(wchar_t *)FVar19.Data);
        local_90.Name = local_a0;
        local_90.Type = Bone;
        <Var14.BoneIndex = URigHierarchy::GetIndex(local_98,&local_90,true);
        if (<Var14.BoneIndex == -1) {
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
        }
        else {
          uVar15 = TArray<FBoneIndexControlAttributeMapping,TSizedDefaultAllocator<32>_>::
                   FindLastByPredicate<_FRigUnit_RigLogic_Data::MapDriverJoints_::__l4::<lambda_2>_>
                             (this_00,<Var14,(this->DriverJointsToControlAttributesMap).ArrayNum);
          if (uVar15 == 0xffffffff) {
            pFVar2 = (this_00->AllocatorInstance).Data;
            uStack_6c = (undefined4)uVar7;
            uStack_68 = (undefined4)((ulonglong)uVar7 >> 0x20);
            uStack_64 = (undefined4)uVar8;
            uStack_60 = (undefined4)((ulonglong)uVar8 >> 0x20);
            local_70 = <Var14.BoneIndex;
            uStack_5c = uVar15;
            if (((pFVar2 <= (FScriptContainerElement *)&local_70) &&
                ((FScriptContainerElement *)&local_70 < pFVar2 + (longlong)*piVar24 * 0x18)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar15 = (this->DriverJointsToControlAttributesMap).ArrayNum;
            if (uVar15 == *piVar24) {
              uVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x418,&this_00->AllocatorInstance,piVar24);
            }
            (this->DriverJointsToControlAttributesMap).ArrayNum = uVar15 + 1;
            pFVar3 = (this_00->AllocatorInstance).Data;
            pFVar2 = pFVar3 + (longlong)(int)uVar15 * 0x18;
            *(ulonglong *)pFVar2 = CONCAT44(uStack_6c,local_70);
            *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_64,uStack_68);
            *(ulonglong *)(pFVar3 + (longlong)(int)uVar15 * 0x18 + 0x10) =
                 CONCAT44(uStack_5c,uStack_60);
          }
          uVar22 = 0;
          if ((int)uVar15 < (this->DriverJointsToControlAttributesMap).ArrayNum) {
            uVar22 = ~uVar15 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar2 = (this_00->AllocatorInstance).Data;
          uVar12 = (**(code **)(*(longlong *)
                                 (&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 4)
                                 ) + 0xb8))();
          uVar22 = 0;
          if (uVar12 != 0) {
            do {
              (**(code **)(*(longlong *)
                            (&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 4)) +
                          0xc0))(&pIVar1->field_0x8 + *(int *)(*(longlong *)&pIVar1->field_0x8 + 4),
                                 local_b0,uVar22);
              iVar13 = (int)local_b0[1];
              if (iVar13 == local_e0.Data.ArrayNum) {
                if (1 < iVar13) {
                  iVar13 = FGenericPlatformStricmp::Stricmp
                                     (local_b0[0],(wchar_t *)local_e0.Data.AllocatorInstance.Data);
                  bVar10 = iVar13 == 0;
                  goto LAB_14a67d19b;
                }
LAB_14a67d1ee:
                if (local_b0[0] != (wchar_t *)0x0) {
                  FMemory::Free(local_b0[0]);
                }
                goto LAB_14a67d1bd;
              }
              bVar10 = iVar13 + local_e0.Data.ArrayNum == 1;
LAB_14a67d19b:
              if (bVar10) goto LAB_14a67d1ee;
              if (local_b0[0] != (wchar_t *)0x0) {
                FMemory::Free(local_b0[0]);
              }
              uVar21 = (short)uVar22 + 1;
              uVar22 = (uint)uVar21;
            } while (uVar21 < uVar12);
          }
          uVar22 = 0xffff;
LAB_14a67d1bd:
          *(uint *)(pFVar2 + (longlong)(int)uVar15 * 0x18 + 4) = uVar22;
          bVar10 = ::FString::EndsWith(&local_f8,L".x",2,IgnoreCase);
          if (bVar10) {
            *(uint *)(pFVar2 + (longlong)(int)uVar15 * 0x18 + 8) = uVar23;
          }
          else {
            bVar10 = ::FString::EndsWith(&local_f8,L".y",2,IgnoreCase);
            if (bVar10) {
              *(uint *)(pFVar2 + (longlong)(int)uVar15 * 0x18 + 0xc) = uVar23;
            }
            else {
              bVar10 = ::FString::EndsWith(&local_f8,L".z",2,IgnoreCase);
              if (bVar10) {
                *(uint *)(pFVar2 + (longlong)(int)uVar15 * 0x18 + 0x10) = uVar23;
              }
              else {
                bVar10 = ::FString::EndsWith(&local_f8,L".w",2,IgnoreCase);
                if (bVar10) {
                  *(uint *)(pFVar2 + (longlong)(int)uVar15 * 0x18 + 0x14) = uVar23;
                }
              }
            }
          }
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
        }
      }
      uVar23 = uVar23 + 1;
      FVar20 = local_c8;
    } while (uVar23 < uVar11);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// MapInputCurveIndices @ 14a67d6a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic_Data::MapInputCurveIndices(FRigUnit_RigLogic_Data *this,URigHierarchy *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapInputCurveIndices(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapInputCurveIndices>
  FVar12;
  ForAnyElementType FVar13;
  FName FVar14;
  uint uVar15;
  uint uVar16;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  FName local_res20;
  int local_a8 [2];
  FString local_a0;
  FName local_90;
  FName local_80;
  FRigElementKey local_78;
  FString local_68;
  FString local_58;
  FName local_48;
  FName local_40;
  
  FStatsHierarchical::BeginMeasurement("FRigUnit_RigLogic_Data::MapInputCurveIndices");
  uVar15 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RigUnit_RigLogic_MapInputCurveIndices ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapInputCurveIndices(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapInputCurveIndices>
         )0x0) {
      pFVar11 = ::FName::FName(&local_48,"STAT_RigUnit_RigLogic_MapInputCurveIndices");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigUnit_RigLogic_MapInputCurveIndices,
                 *pFVar11,L"STAT_RigUnit_RigLogic_MapInputCurveIndices","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_RigUnit_RigLogic_MapInputCurveIndices;
  if (StatPtr_STAT_RigUnit_RigLogic_MapInputCurveIndices ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapInputCurveIndices(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapInputCurveIndices>
       )0x0) {
    pFVar11 = ::FName::FName(&local_40,"STAT_RigUnit_RigLogic_MapInputCurveIndices");
    FVar12 = (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapInputCurveIndices(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapInputCurveIndices>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RigUnit_RigLogic_MapInputCurveIndices,*pFVar11,
                          L"STAT_RigUnit_RigLogic_MapInputCurveIndices","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  if ((FVar14.ComparisonIndex.Value.Value != 0) || (FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_res18.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigUnit_RigLogic.cpp"
                   ,0x8e);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_14a67d810;
    }
  }
  bVar6 = false;
  FVar14 = local_90;
LAB_14a67d810:
  if (((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res20 = (FName)(((this->LocalRigRuntimeContext).Object)->BehaviorReader).Object;
  uVar9 = (**(code **)(*(longlong *)
                        (&((IDNAReader *)local_res20)->field_0x8 +
                        *(int *)(*(longlong *)&((IDNAReader *)local_res20)->field_0x8 + 4)) + 0xa8))
                    ();
  pTVar1 = &this->InputCurveIndices;
  piVar2 = &(this->InputCurveIndices).ArrayMax;
  (this->InputCurveIndices).ArrayNum = 0;
  uVar16 = (uint)uVar9;
  if ((this->InputCurveIndices).ArrayMax < (int)(uint)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&pTVar1->AllocatorInstance,0,piVar2);
  }
  if (uVar16 != 0) {
    do {
      (**(code **)(*(longlong *)
                    ((undefined1 *)((longlong)local_res20 + 8) +
                    *(int *)(*(longlong *)((longlong)local_res20 + 8) + 4)) + 0xb0))
                ((undefined1 *)((longlong)local_res20 + 8) +
                 *(int *)(*(longlong *)((longlong)local_res20 + 8) + 4),&local_68,uVar15 & 0xffff);
      ::FString::FString(&local_58,L"<obj>_<attr>");
      ConstructCurveName(&local_a0,&local_68,&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_a0.Data.ArrayNum != 0) {
        FVar13.Data = local_a0.Data.AllocatorInstance.Data;
      }
      iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"");
      if (iVar10 == 0) {
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        break;
      }
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_a0.Data.ArrayNum != 0) {
        FVar13.Data = local_a0.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_80,(wchar_t *)FVar13.Data);
      if (param_1 == (URigHierarchy *)0x0) {
        local_a8[0] = -1;
      }
      else {
        local_78.Name = local_80;
        local_78.Type = Curve;
        local_a8[0] = URigHierarchy::GetIndex(param_1,&local_78,true);
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_a8) &&
          ((FScriptContainerElement *)local_a8 < pFVar3 + (longlong)*piVar2 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = (this->InputCurveIndices).ArrayNum;
      if (iVar10 == *piVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->InputCurveIndices).ArrayNum = iVar10 + 1;
      *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_a8[0];
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar16);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// MapJoints @ 14a67ddb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic_Data::MapJoints(FRigUnit_RigLogic_Data *this,URigHierarchy *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  IDNAReader *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ushort uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapJoints(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapJoints>
  FVar13;
  uint uVar14;
  wchar_t *pwVar15;
  FNameEntryId FVar16;
  FName FVar17;
  ushort uVar18;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  FName local_res20;
  int local_88;
  FName local_84;
  FName local_7c;
  FName local_70;
  FRigElementKey local_60;
  wchar_t *local_50;
  int local_48;
  
  FStatsHierarchical::BeginMeasurement("FRigUnit_RigLogic_Data::MapJoints");
  uVar18 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RigUnit_RigLogic_MapJoints ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapJoints(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapJoints>
         )0x0) {
      pFVar12 = ::FName::FName(&local_84,"STAT_RigUnit_RigLogic_MapJoints");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigUnit_RigLogic_MapJoints,*pFVar12,
                 L"STAT_RigUnit_RigLogic_MapJoints","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_RigUnit_RigLogic_MapJoints;
  if (StatPtr_STAT_RigUnit_RigLogic_MapJoints ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapJoints(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapJoints>
       )0x0) {
    pFVar12 = ::FName::FName(&local_7c,"STAT_RigUnit_RigLogic_MapJoints");
    FVar13 = (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapJoints(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapJoints>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigUnit_RigLogic_MapJoints,
                          *pFVar12,L"STAT_RigUnit_RigLogic_MapJoints","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar14 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar16.Value;
        local_res18.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigUnit_RigLogic.cpp"
                   ,0xc0);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.ComparisonIndex.Value = FVar16.Value;
      local_res20.Number = uVar14;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar7 = true;
      goto LAB_14a67df3b;
    }
  }
  bVar7 = false;
  FVar17 = local_70;
LAB_14a67df3b:
  if (((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar3 = (((this->LocalRigRuntimeContext).Object)->BehaviorReader).Object;
  uVar10 = (**(code **)(*(longlong *)
                         (&pIVar3->field_0x8 + *(int *)(*(longlong *)&pIVar3->field_0x8 + 4)) + 0xb8
                       ))();
  pTVar1 = &this->HierarchyBoneIndices;
  uVar14 = (this->HierarchyBoneIndices).ArrayMax;
  piVar2 = &(this->HierarchyBoneIndices).ArrayMax;
  (this->HierarchyBoneIndices).ArrayNum = 0;
  if (uVar10 != uVar14 && (int)uVar14 <= (int)(uint)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(uint)uVar10,&pTVar1->AllocatorInstance,0,piVar2);
  }
  if (uVar10 != 0) {
    do {
      (**(code **)(*(longlong *)(&pIVar3->field_0x8 + *(int *)(*(longlong *)&pIVar3->field_0x8 + 4))
                  + 0xc0))
                (&pIVar3->field_0x8 + *(int *)(*(longlong *)&pIVar3->field_0x8 + 4),&local_50,uVar18
                );
      pwVar15 = L"";
      if (local_48 != 0) {
        pwVar15 = local_50;
      }
      ::FName::FName(&local_res20,pwVar15);
      local_60.Name.Number = local_res20.Number;
      local_60.Name.ComparisonIndex.Value = local_res20.ComparisonIndex.Value;
      local_60.Type = Bone;
      local_88 = URigHierarchy::GetIndex(param_1,&local_60,true);
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar4 + (longlong)*piVar2 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (this->HierarchyBoneIndices).ArrayNum;
      if (iVar11 == *piVar2) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->HierarchyBoneIndices).ArrayNum = iVar11 + 1;
      *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_88;
      if (local_50 != (wchar_t *)0x0) {
        FMemory::Free(local_50);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar10);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// MapMaskMultipliers @ 14a67e6a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic_Data::MapMaskMultipliers(FRigUnit_RigLogic_Data *this,URigHierarchy *param_1)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapMaskMultipliers(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapMaskMultipliers>
  FVar12;
  ForAnyElementType FVar13;
  FName FVar14;
  TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *pTVar15;
  ushort *puVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  IDNAReader *pIVar20;
  TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *pTVar21;
  ushort uVar22;
  int local_108;
  uint local_104;
  FColor_u_0 local_100 [2];
  TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *local_f8;
  ushort *local_f0;
  ulonglong local_e8;
  FString local_e0;
  FName local_d0;
  TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *local_c8;
  IDNAReader *local_c0;
  FName local_b8;
  FName local_a8;
  int *local_a0;
  int *local_98;
  ushort *local_90;
  FRigElementKey local_88;
  FString local_78;
  FString local_68;
  FName local_58;
  FName local_50 [2];
  
  FStatsHierarchical::BeginMeasurement("FRigUnit_RigLogic_Data::MapMaskMultipliers");
  uVar22 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RigUnit_RigLogic_MapMaskMultipliers ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapMaskMultipliers(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapMaskMultipliers>
         )0x0) {
      pFVar11 = ::FName::FName(&local_58,"STAT_RigUnit_RigLogic_MapMaskMultipliers");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigUnit_RigLogic_MapMaskMultipliers,
                 *pFVar11,L"STAT_RigUnit_RigLogic_MapMaskMultipliers","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_RigUnit_RigLogic_MapMaskMultipliers;
  if (StatPtr_STAT_RigUnit_RigLogic_MapMaskMultipliers ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapMaskMultipliers(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapMaskMultipliers>
       )0x0) {
    pFVar11 = ::FName::FName(local_50,"STAT_RigUnit_RigLogic_MapMaskMultipliers");
    FVar12 = (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapMaskMultipliers(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapMaskMultipliers>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RigUnit_RigLogic_MapMaskMultipliers,*pFVar11,
                          L"STAT_RigUnit_RigLogic_MapMaskMultipliers","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar12;
  bVar6 = false;
  bVar5 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar8 = false;
  bVar7 = false;
  if ((FVar14.ComparisonIndex.Value.Value != 0) || (FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_100[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_100[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_d0.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigUnit_RigLogic.cpp"
                   ,0x141);
        bVar6 = true;
        bVar5 = true;
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar7 = true;
      goto LAB_14a67e821;
    }
  }
  bVar6 = bVar8;
  bVar5 = bVar7;
  bVar7 = false;
  FVar14 = local_b8;
LAB_14a67e821:
  if (((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar20 = (((this->LocalRigRuntimeContext).Object)->BehaviorReader).Object;
  local_c0 = pIVar20;
  uVar9 = (**(code **)(*(longlong *)
                        (&pIVar20->field_0x8 + *(int *)(*(longlong *)&pIVar20->field_0x8 + 4)) +
                      0x78))();
  pTVar15 = &this->CurveElementIndicesForAnimMaps;
  piVar1 = &(this->CurveElementIndicesForAnimMaps).ArrayNum;
  pFVar18 = (pTVar15->AllocatorInstance).Data;
  piVar2 = &(this->CurveElementIndicesForAnimMaps).ArrayMax;
  local_f8 = pTVar15;
  local_a0 = piVar1;
  if (*piVar2 < 0) {
    DestructItems<FRigUnit_RigLogic_IntArray,int>((FRigUnit_RigLogic_IntArray *)pFVar18,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar15->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FRigUnit_RigLogic_IntArray,int>((FRigUnit_RigLogic_IntArray *)pFVar18,*piVar1);
    *piVar1 = 0;
  }
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,(uint)uVar9,&pTVar15->AllocatorInstance,
                      &(this->CurveElementIndicesForAnimMaps).ArrayNum,piVar2);
  DefaultConstructItems<FRigUnit_RigLogic_IntArray,int>
            ((pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 0x10,(uint)uVar9);
  pTVar15 = &this->RigLogicIndicesForAnimMaps;
  piVar1 = &(this->RigLogicIndicesForAnimMaps).ArrayNum;
  piVar2 = &(this->RigLogicIndicesForAnimMaps).ArrayMax;
  pFVar18 = (pTVar15->AllocatorInstance).Data;
  local_c8 = pTVar15;
  local_98 = piVar1;
  if (*piVar2 < 0) {
    DestructItems<FRigUnit_RigLogic_IntArray,int>((FRigUnit_RigLogic_IntArray *)pFVar18,*piVar1);
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar15->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FRigUnit_RigLogic_IntArray,int>((FRigUnit_RigLogic_IntArray *)pFVar18,*piVar1);
    *piVar1 = 0;
  }
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,(uint)uVar9,&pTVar15->AllocatorInstance,piVar1,piVar2);
  DefaultConstructItems<FRigUnit_RigLogic_IntArray,int>
            ((pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 0x10,(uint)uVar9);
  pTVar21 = local_f8;
  if (uVar9 != 0) {
    do {
      (**(code **)(*(longlong *)
                    (&pIVar20->field_0x8 + *(int *)(*(longlong *)&pIVar20->field_0x8 + 4)) + 0x118))
                (&pIVar20->field_0x8 + *(int *)(*(longlong *)&pIVar20->field_0x8 + 4),&local_f0,
                 uVar22);
      uVar17 = (uint)uVar22;
      if ((pTVar21->ArrayNum <= (int)uVar17) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = (int)local_e8;
      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_e8 & 0xffffffff);
      }
      lVar19 = (ulonglong)uVar22 * 0x10;
      pFVar18 = (pTVar21->AllocatorInstance).Data + lVar19;
      if (*(int *)(pFVar18 + 0xc) < iVar10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar10,(ForAnyElementType *)pFVar18,*(int *)(pFVar18 + 8),
                   (int *)(pFVar18 + 0xc));
      }
      if ((pTVar15->ArrayNum <= (int)uVar17) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = (int)local_e8;
      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_e8 & 0xffffffff);
      }
      pFVar18 = (pTVar15->AllocatorInstance).Data + lVar19;
      if (*(int *)(pFVar18 + 0xc) < iVar10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar10,(ForAnyElementType *)pFVar18,*(int *)&pFVar18[8].field_0x0,
                   (int *)(pFVar18 + 0xc));
        iVar10 = (int)local_e8;
      }
      local_90 = local_f0 + iVar10;
      puVar16 = local_f0;
      if (local_f0 != local_90) {
        do {
          uVar3 = *puVar16;
          (**(code **)(*(longlong *)
                        (&local_c0->field_0x8 + *(int *)(*(longlong *)&local_c0->field_0x8 + 4)) +
                      0x108))(&local_c0->field_0x8 + *(int *)(*(longlong *)&local_c0->field_0x8 + 4)
                              ,&local_78,uVar3);
          ::FString::FString(&local_68,L"<obj>_<attr>");
          ConstructCurveName(&local_e0,&local_78,&local_68);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_e0.Data.ArrayNum != 0) {
            FVar13.Data = local_e0.Data.AllocatorInstance.Data;
          }
          iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,"");
          if (iVar10 == 0) {
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            goto LAB_14a67edd2;
          }
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_e0.Data.ArrayNum != 0) {
            FVar13.Data = local_e0.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_a8,(wchar_t *)FVar13.Data);
          local_88.Name = local_a8;
          local_88.Type = Curve;
          local_108 = URigHierarchy::GetIndex(param_1,&local_88,true);
          if ((*local_a0 <= (int)(uint)uVar22) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar18 = (local_f8->AllocatorInstance).Data + lVar19;
          if (((*(int **)pFVar18 <= &local_108) &&
              (&local_108 < *(int **)pFVar18 + *(int *)(pFVar18 + 0xc))) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar10 = *(int *)(pFVar18 + 8);
          if (iVar10 == *(int *)(pFVar18 + 0xc)) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar18,(int *)(pFVar18 + 0xc));
          }
          *(int *)(pFVar18 + 8) = iVar10 + 1;
          *(int *)(*(longlong *)pFVar18 + (longlong)iVar10 * 4) = local_108;
          if ((*local_98 <= (int)uVar17) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_104 = (uint)uVar3;
          pFVar18 = (local_c8->AllocatorInstance).Data + lVar19;
          if (((*(uint **)&pFVar18->field_0x0 <= &local_104) &&
              (&local_104 < *(uint **)&pFVar18->field_0x0 + *(int *)(pFVar18 + 0xc))) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar10 = *(int *)&pFVar18[8].field_0x0;
          if (iVar10 == *(int *)(pFVar18 + 0xc)) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar18,(int *)(pFVar18 + 0xc));
          }
          *(int *)&pFVar18[8].field_0x0 = iVar10 + 1;
          *(uint *)(*(longlong *)&pFVar18->field_0x0 + (longlong)iVar10 * 4) = local_104;
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          puVar16 = puVar16 + 1;
          pTVar21 = local_f8;
        } while (puVar16 != local_90);
      }
      uVar22 = uVar22 + 1;
      pTVar15 = local_c8;
      pIVar20 = local_c0;
    } while (uVar22 < uVar9);
  }
LAB_14a67edd2:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// MapMorphTargets @ 14a67f3f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic_Data::MapMorphTargets(FRigUnit_RigLogic_Data *this,URigHierarchy *param_1)

{
  undefined2 *puVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  undefined2 uVar8;
  TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  bool bVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapMorphTargets(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapMorphTargets>
  FVar16;
  ForAnyElementType FVar17;
  FName FVar18;
  TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *pTVar19;
  undefined2 *puVar20;
  TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *pTVar21;
  FScriptContainerElement *pFVar22;
  IDNAReader *pIVar23;
  longlong lVar24;
  ushort uVar25;
  int local_128 [2];
  undefined2 local_120 [2];
  undefined4 local_11c;
  IDNAReader *local_118;
  FColor_u_0 local_110 [2];
  TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *local_108;
  undefined2 *local_100;
  ulonglong local_f8;
  FName local_f0;
  FName local_e8;
  TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *local_e0;
  FName local_d8;
  FName local_c0;
  int *local_b8;
  FRigElementKey local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FName local_60;
  FName local_58 [3];
  ulonglong uVar26;
  
  FStatsHierarchical::BeginMeasurement("FRigUnit_RigLogic_Data::MapMorphTargets");
  uVar26 = 0;
  uVar25 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RigUnit_RigLogic_MapMorphTargets ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapMorphTargets(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapMorphTargets>
         )0x0) {
      pFVar15 = ::FName::FName(&local_60,"STAT_RigUnit_RigLogic_MapMorphTargets");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigUnit_RigLogic_MapMorphTargets,
                 *pFVar15,L"STAT_RigUnit_RigLogic_MapMorphTargets","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_RigUnit_RigLogic_MapMorphTargets;
  if (StatPtr_STAT_RigUnit_RigLogic_MapMorphTargets ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapMorphTargets(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapMorphTargets>
       )0x0) {
    pFVar15 = ::FName::FName(local_58,"STAT_RigUnit_RigLogic_MapMorphTargets");
    FVar16 = (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapMorphTargets(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapMorphTargets>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RigUnit_RigLogic_MapMorphTargets,*pFVar15,
                          L"STAT_RigUnit_RigLogic_MapMorphTargets","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar16;
  bVar6 = false;
  bVar5 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  bVar11 = false;
  bVar10 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_110[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_110[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f0.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_f0.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigUnit_RigLogic.cpp"
                   ,0x11e);
        bVar6 = true;
        bVar5 = true;
        bVar11 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e8 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar10 = true;
      goto LAB_14a67f595;
    }
  }
  bVar6 = bVar11;
  bVar5 = bVar10;
  bVar10 = false;
  local_e8 = local_d8;
  FVar18 = local_d8;
LAB_14a67f595:
  if (((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar23 = (((this->LocalRigRuntimeContext).Object)->BehaviorReader).Object;
  local_118 = pIVar23;
  uVar12 = (**(code **)(*(longlong *)
                         (&pIVar23->field_0x8 + *(int *)(*(longlong *)&pIVar23->field_0x8 + 4)) +
                       0x78))();
  pFVar22 = (this->MorphTargetCurveIndices).AllocatorInstance.Data;
  pTVar19 = &this->MorphTargetCurveIndices;
  piVar2 = &(this->MorphTargetCurveIndices).ArrayNum;
  piVar3 = &(this->MorphTargetCurveIndices).ArrayMax;
  local_108 = pTVar19;
  local_b8 = piVar2;
  if (*piVar3 < 0) {
    DestructItems<FRigUnit_RigLogic_IntArray,int>((FRigUnit_RigLogic_IntArray *)pFVar22,*piVar2);
    *piVar2 = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar19->AllocatorInstance,0,piVar3);
    }
  }
  else {
    DestructItems<FRigUnit_RigLogic_IntArray,int>((FRigUnit_RigLogic_IntArray *)pFVar22,*piVar2);
    *piVar2 = 0;
  }
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,(uint)uVar12,&pTVar19->AllocatorInstance,
                      &(this->MorphTargetCurveIndices).ArrayNum,piVar3);
  DefaultConstructItems<FRigUnit_RigLogic_IntArray,int>
            ((pTVar19->AllocatorInstance).Data + (longlong)iVar13 * 0x10,(uint)uVar12);
  pFVar22 = (this->BlendShapeIndices).AllocatorInstance.Data;
  pTVar19 = &this->BlendShapeIndices;
  piVar2 = &(this->BlendShapeIndices).ArrayNum;
  piVar3 = &(this->BlendShapeIndices).ArrayMax;
  local_e0 = pTVar19;
  if ((this->BlendShapeIndices).ArrayMax < 0) {
    DestructItems<FRigUnit_RigLogic_IntArray,int>((FRigUnit_RigLogic_IntArray *)pFVar22,*piVar2);
    *piVar2 = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar19->AllocatorInstance,0,piVar3);
    }
  }
  else {
    DestructItems<FRigUnit_RigLogic_IntArray,int>((FRigUnit_RigLogic_IntArray *)pFVar22,*piVar2);
    *piVar2 = 0;
  }
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,(uint)uVar12,&pTVar19->AllocatorInstance,piVar2,piVar3);
  DefaultConstructItems<FRigUnit_RigLogic_IntArray,int>
            ((pTVar19->AllocatorInstance).Data + (longlong)iVar13 * 0x10,(uint)uVar12);
  pTVar21 = local_108;
  if (uVar12 != 0) {
    do {
      (**(code **)(*(longlong *)
                    (&pIVar23->field_0x8 + *(int *)(*(longlong *)&pIVar23->field_0x8 + 4)) + 0x150))
                (&pIVar23->field_0x8 + *(int *)(*(longlong *)&pIVar23->field_0x8 + 4),&local_100,
                 uVar26);
      iVar13 = (int)uVar26;
      if ((pTVar21->ArrayNum <= iVar13) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar14 = (int)local_f8;
      if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_f8 & 0xffffffff);
      }
      lVar24 = uVar26 * 0x10;
      pFVar22 = (pTVar21->AllocatorInstance).Data + lVar24;
      if (*(int *)(pFVar22 + 0xc) < iVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar14,(ForAnyElementType *)pFVar22,*(int *)(pFVar22 + 8),
                   (int *)(pFVar22 + 0xc));
      }
      if ((pTVar19->ArrayNum <= iVar13) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar14 = (int)local_f8;
      if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_f8 & 0xffffffff);
      }
      pFVar22 = (pTVar19->AllocatorInstance).Data + lVar24;
      if (*(int *)(pFVar22 + 0xc) < iVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar14,(ForAnyElementType *)pFVar22,*(int *)&pFVar22[8].field_0x0,
                   (int *)(pFVar22 + 0xc));
        iVar14 = (int)local_f8;
      }
      pTVar9 = local_e0;
      puVar1 = local_100 + iVar14;
      pIVar23 = local_118;
      pTVar19 = local_e0;
      uVar7 = (ushort)uVar26;
      for (puVar20 = local_100; local_118 = pIVar23, local_e0 = pTVar19, puVar20 != puVar1;
          puVar20 = puVar20 + 1) {
        (**(code **)(*(longlong *)
                      (&pIVar23->field_0x8 + *(int *)(*(longlong *)&pIVar23->field_0x8 + 4)) + 0x148
                    ))(&pIVar23->field_0x8 + *(int *)(*(longlong *)&pIVar23->field_0x8 + 4),
                       local_120,*puVar20);
        uVar8 = local_120[0];
        (**(code **)(*(longlong *)
                      (&local_118->field_0x8 + *(int *)(*(longlong *)&local_118->field_0x8 + 4)) +
                    0xe8))(&local_118->field_0x8 + *(int *)(*(longlong *)&local_118->field_0x8 + 4),
                           &local_70,(undefined2)local_11c);
        (**(code **)(*(longlong *)
                      (&local_118->field_0x8 + *(int *)(*(longlong *)&local_118->field_0x8 + 4)) +
                    0x128))(&local_118->field_0x8 + *(int *)(*(longlong *)&local_118->field_0x8 + 4)
                            ,&local_80,uVar8);
        ::FString::ConcatFC(&local_90,&local_80,L"__");
        ::FString::ConcatFF(&local_a0,&local_90,&local_70);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_a0.Data.ArrayNum != 0) {
          FVar17.Data = local_a0.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_c0,(wchar_t *)FVar17.Data);
        local_b0.Name = local_c0;
        local_b0.Type = Curve;
        local_128[0] = URigHierarchy::GetIndex(param_1,&local_b0,true);
        if ((*local_b8 <= iVar13) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar22 = (local_108->AllocatorInstance).Data + lVar24;
        if (((*(int **)pFVar22 <= local_128) &&
            (local_128 < *(int **)pFVar22 + *(int *)(pFVar22 + 0xc))) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar14 = *(int *)(pFVar22 + 8);
        if (iVar14 == *(int *)(pFVar22 + 0xc)) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar22,(int *)(pFVar22 + 0xc));
        }
        *(int *)(pFVar22 + 8) = iVar14 + 1;
        *(int *)(*(longlong *)pFVar22 + (longlong)iVar14 * 4) = local_128[0];
        if ((pTVar9->ArrayNum <= iVar13) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar22 = (pTVar9->AllocatorInstance).Data + lVar24;
        if (((*(undefined4 **)&pFVar22->field_0x0 <= &local_11c) &&
            (&local_11c < *(undefined4 **)&pFVar22->field_0x0 + *(int *)(pFVar22 + 0xc))) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar14 = *(int *)&pFVar22[8].field_0x0;
        if (iVar14 == *(int *)(pFVar22 + 0xc)) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar22,(int *)(pFVar22 + 0xc));
        }
        *(int *)&pFVar22[8].field_0x0 = iVar14 + 1;
        *(undefined4 *)(*(longlong *)&pFVar22->field_0x0 + (longlong)iVar14 * 4) = local_11c;
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        FVar18 = local_e8;
        pTVar21 = local_108;
        pIVar23 = local_118;
        pTVar19 = local_e0;
        uVar7 = uVar25;
      }
      uVar25 = uVar7 + 1;
      uVar26 = (ulonglong)uVar25;
    } while (uVar25 < uVar12);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// MapNeuralNetMaskCurveIndices @ 14a67fc50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic_Data::MapNeuralNetMaskCurveIndices
          (FRigUnit_RigLogic_Data *this,URigHierarchy *param_1)

{
  FScriptContainerElement *_Dst;
  ushort *puVar1;
  int *piVar2;
  ushort uVar3;
  IDNAReader *pIVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapNeuralNetMaskCurveIndices(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapInputCurveIndices>
  FVar15;
  ForAnyElementType FVar16;
  FName FVar17;
  uint uVar18;
  ushort *puVar19;
  longlong *plVar20;
  ushort uVar21;
  ushort local_res18;
  FColor_u_0 local_d4;
  FName local_d0;
  longlong *local_c8;
  FName local_c0;
  FName local_b8;
  FName local_a8;
  FRigElementKey local_a0;
  FString local_90;
  ushort *local_80;
  int local_78;
  FString local_70;
  FName local_60;
  FName local_58 [3];
  
  FStatsHierarchical::BeginMeasurement("FRigUnit_RigLogic_Data::MapNeuralNetMaskCurveIndices");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RigUnit_RigLogic_MapInputCurveIndices ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapNeuralNetMaskCurveIndices(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapInputCurveIndices>
         )0x0) {
      pFVar14 = ::FName::FName(&local_60,"STAT_RigUnit_RigLogic_MapInputCurveIndices");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigUnit_RigLogic_MapInputCurveIndices,
                 *pFVar14,L"STAT_RigUnit_RigLogic_MapInputCurveIndices","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_RigUnit_RigLogic_MapInputCurveIndices;
  if (StatPtr_STAT_RigUnit_RigLogic_MapInputCurveIndices ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapNeuralNetMaskCurveIndices(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapInputCurveIndices>
       )0x0) {
    pFVar14 = ::FName::FName(local_58,"STAT_RigUnit_RigLogic_MapInputCurveIndices");
    FVar15 = (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::MapNeuralNetMaskCurveIndices(URigHierarchy_const_*)_::_2_::FStat_STAT_RigUnit_RigLogic_MapInputCurveIndices>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RigUnit_RigLogic_MapInputCurveIndices,*pFVar14,
                          L"STAT_RigUnit_RigLogic_MapInputCurveIndices","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar15;
  bVar7 = false;
  bVar6 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((FVar17.ComparisonIndex.Value.Value == 0) && (FVar17.Number == 0)) {
LAB_14a67fdf7:
    bVar7 = bVar9;
    bVar6 = bVar8;
    bVar8 = false;
    local_c0 = local_b8;
    FVar17 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d4._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_d0.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigUnit_RigLogic.cpp"
                   ,0xa4);
        bVar7 = true;
        bVar6 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14a67fdf7;
    local_c0 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar8 = true;
  }
  if (((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar4 = (((this->LocalRigRuntimeContext).Object)->BehaviorReader).Object;
  local_c8 = (longlong *)&pIVar4->field_0x20;
  uVar10 = (**(code **)(*(longlong *)&pIVar4->field_0x20 + 0x10))(local_c8);
  piVar2 = &(this->NeuralNetMaskCurveIndices).ArrayNum;
  iVar13 = *piVar2;
  uVar18 = (uint)uVar10;
  if (iVar13 < (int)(uint)uVar10) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uVar18 - iVar13,&(this->NeuralNetMaskCurveIndices).AllocatorInstance,
                        piVar2,&(this->NeuralNetMaskCurveIndices).ArrayMax);
    memset((this->NeuralNetMaskCurveIndices).AllocatorInstance.Data + (longlong)iVar12 * 4,0,
           (longlong)(int)(uVar18 - iVar13) << 2);
  }
  else if ((int)(uint)uVar10 < iVar13) {
    iVar13 = iVar13 - uVar18;
    if (iVar13 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else if (iVar13 == 0) goto LAB_14a67ff37;
    _Dst = (this->NeuralNetMaskCurveIndices).AllocatorInstance.Data + (ulonglong)uVar10 * 4;
    iVar12 = (*piVar2 - iVar13) - uVar18;
    if (iVar12 != 0) {
      memmove(_Dst,_Dst + (longlong)iVar13 * 4,(longlong)iVar12 << 2);
    }
    *piVar2 = *piVar2 - iVar13;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->NeuralNetMaskCurveIndices).AllocatorInstance,*piVar2,
               &(this->NeuralNetMaskCurveIndices).ArrayMax);
  }
LAB_14a67ff37:
  plVar20 = (longlong *)&pIVar4->field_0x20;
  uVar10 = (**(code **)(*(longlong *)
                         (&pIVar4->field_0x8 + *(int *)(*(longlong *)&pIVar4->field_0x8 + 4)) +
                       0x120))();
  local_res18 = 0;
  if (uVar10 != 0) {
    do {
      uVar21 = 0;
      uVar11 = (**(code **)(*plVar20 + 0x28))(plVar20,local_res18);
      if (uVar11 != 0) {
        do {
          (**(code **)(*plVar20 + 0x30))(plVar20,&local_70,local_res18,uVar21);
          (**(code **)(*plVar20 + 0x38))(plVar20,&local_80,local_res18,uVar21);
          ::FString::ConcatCF(&local_90,L"CTRL_ML_",&local_70);
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_90.Data.ArrayNum != 0) {
            FVar16.Data = local_90.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_a8,(wchar_t *)FVar16.Data);
          if (param_1 == (URigHierarchy *)0x0) {
            iVar13 = -1;
          }
          else {
            local_a0.Name = local_a8;
            local_a0.Type = Curve;
            iVar13 = URigHierarchy::GetIndex(param_1,&local_a0,true);
          }
          puVar1 = local_80 + local_78;
          for (puVar19 = local_80; puVar19 != puVar1; puVar19 = puVar19 + 1) {
            uVar3 = *puVar19;
            if ((*piVar2 <= (int)(uint)uVar3) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(int *)((this->NeuralNetMaskCurveIndices).AllocatorInstance.Data + (ulonglong)uVar3 * 4
                    ) = iVar13;
          }
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          uVar21 = uVar21 + 1;
          plVar20 = local_c8;
        } while (uVar21 < uVar11);
      }
      local_res18 = local_res18 + 1;
      FVar17 = local_c0;
    } while (local_res18 < uVar10);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateAnimMapCurves @ 14a683d60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic_Data::UpdateAnimMapCurves
          (FRigUnit_RigLogic_Data *this,URigHierarchy *param_1,TArrayView<float_const_,int> *param_2
          )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::UpdateAnimMapCurves(URigHierarchy_*,TArrayView<float_const_,int>)_::_2_::FStat_STAT_RigUnit_RigLogic_UpdateAnimMapCurves>
  FVar16;
  float *pfVar17;
  FName FVar18;
  uint uVar19;
  FColor_u_0 local_res20 [2];
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  
  FStatsHierarchical::BeginMeasurement("FRigUnit_RigLogic_Data::UpdateAnimMapCurves");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RigUnit_RigLogic_UpdateAnimMapCurves ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::UpdateAnimMapCurves(URigHierarchy_*,TArrayView<float_const_,int>)_::_2_::FStat_STAT_RigUnit_RigLogic_UpdateAnimMapCurves>
         )0x0) {
      pFVar15 = ::FName::FName(&local_70,"STAT_RigUnit_RigLogic_UpdateAnimMapCurves");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigUnit_RigLogic_UpdateAnimMapCurves,
                 *pFVar15,L"STAT_RigUnit_RigLogic_UpdateAnimMapCurves","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_RigUnit_RigLogic_UpdateAnimMapCurves;
  if (StatPtr_STAT_RigUnit_RigLogic_UpdateAnimMapCurves ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::UpdateAnimMapCurves(URigHierarchy_*,TArrayView<float_const_,int>)_::_2_::FStat_STAT_RigUnit_RigLogic_UpdateAnimMapCurves>
       )0x0) {
    pFVar15 = ::FName::FName(&local_68,"STAT_RigUnit_RigLogic_UpdateAnimMapCurves");
    FVar16 = (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::UpdateAnimMapCurves(URigHierarchy_*,TArrayView<float_const_,int>)_::_2_::FStat_STAT_RigUnit_RigLogic_UpdateAnimMapCurves>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RigUnit_RigLogic_UpdateAnimMapCurves,*pFVar15,
                          L"STAT_RigUnit_RigLogic_UpdateAnimMapCurves","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar16;
  bVar7 = false;
  bVar10 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar12 = false;
  bVar8 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) ||
     (bVar6 = bVar7, bVar9 = bVar10, FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar7 = false;
      bVar10 = true;
      bVar12 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_80.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigUnit_RigLogic.cpp"
                   ,0x1dd);
        bVar7 = true;
        bVar10 = true;
        bVar12 = true;
        bVar8 = true;
      }
    }
    bVar6 = bVar7;
    bVar9 = bVar10;
    if (FThreadStats::bPrimaryEnable != false) {
      local_78 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar12 = true;
      bVar8 = true;
      goto LAB_14a683f25;
    }
  }
  bVar10 = bVar8;
  bVar7 = bVar12;
  bVar12 = false;
  bVar8 = false;
  local_78 = local_60;
  FVar18 = local_60;
LAB_14a683f25:
  uVar1 = this->CurrentLOD;
  if ((((int)uVar1 < 0) || ((this->RigLogicIndicesForAnimMaps).ArrayNum <= (int)uVar1)) ||
     ((this->CurveElementIndicesForAnimMaps).ArrayNum <= (int)uVar1)) {
    if (2 < (byte)LogRigLogicUnit._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRigLogicUnit);
    }
  }
  else {
    uVar19 = 0;
    if ((int)uVar1 < (this->RigLogicIndicesForAnimMaps).ArrayNum) {
      uVar19 = ~uVar1 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar19 = 0;
    uVar1 = *(uint *)((this->RigLogicIndicesForAnimMaps).AllocatorInstance.Data +
                     (longlong)(int)uVar1 * 0x10 + 8);
    if (uVar1 != 0) {
      do {
        uVar14 = this->CurrentLOD;
        uVar13 = 0;
        if ((int)uVar14 < (this->RigLogicIndicesForAnimMaps).ArrayNum) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->RigLogicIndicesForAnimMaps).AllocatorInstance.Data;
        uVar13 = 0;
        if ((int)uVar19 < *(int *)(pFVar4 + (longlong)(int)uVar14 * 0x10 + 8)) {
          uVar13 = ~uVar19 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar13 = this->CurrentLOD;
        iVar2 = *(int *)(*(longlong *)(pFVar4 + (longlong)(int)uVar14 * 0x10) +
                        (longlong)(int)uVar19 * 4);
        uVar14 = 0;
        if ((int)uVar13 < (this->CurveElementIndicesForAnimMaps).ArrayNum) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->CurveElementIndicesForAnimMaps).AllocatorInstance.Data;
        uVar14 = 0;
        if ((int)uVar19 < *(int *)(pFVar4 + (longlong)(int)uVar13 * 0x10 + 8)) {
          uVar14 = ~uVar19 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar3 = *(int *)(*(longlong *)(pFVar4 + (longlong)(int)uVar13 * 0x10) +
                        (longlong)(int)uVar19 * 4);
        if (iVar3 != -1) {
          pfVar17 = TArrayView<float_const_,int>::operator[](param_2,iVar2);
          URigHierarchy::SetCurveValue(param_1,iVar3,*pfVar17,false);
        }
        uVar19 = uVar19 + 1;
        FVar18 = local_78;
        bVar6 = bVar7;
        bVar12 = bVar8;
        bVar9 = bVar10;
      } while (uVar19 < uVar1);
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateBlendShapeCurves @ 14a684720

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic_Data::UpdateBlendShapeCurves
          (FRigUnit_RigLogic_Data *this,URigHierarchy *param_1,TArrayView<float_const_,int> *param_2
          )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::UpdateBlendShapeCurves(URigHierarchy_*,TArrayView<float_const_,int>)_::_2_::FStat_STAT_RigUnit_RigLogic_UpdateBlendShapeCurves>
  FVar16;
  float *pfVar17;
  FName FVar18;
  uint uVar19;
  FColor_u_0 local_res20 [2];
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  
  FStatsHierarchical::BeginMeasurement("FRigUnit_RigLogic_Data::UpdateBlendShapeCurves");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RigUnit_RigLogic_UpdateBlendShapeCurves ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::UpdateBlendShapeCurves(URigHierarchy_*,TArrayView<float_const_,int>)_::_2_::FStat_STAT_RigUnit_RigLogic_UpdateBlendShapeCurves>
         )0x0) {
      pFVar15 = ::FName::FName(&local_70,"STAT_RigUnit_RigLogic_UpdateBlendShapeCurves");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigUnit_RigLogic_UpdateBlendShapeCurves,
                 *pFVar15,L"STAT_RigUnit_RigLogic_UpdateBlendShapeCurves","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_RigUnit_RigLogic_UpdateBlendShapeCurves;
  if (StatPtr_STAT_RigUnit_RigLogic_UpdateBlendShapeCurves ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::UpdateBlendShapeCurves(URigHierarchy_*,TArrayView<float_const_,int>)_::_2_::FStat_STAT_RigUnit_RigLogic_UpdateBlendShapeCurves>
       )0x0) {
    pFVar15 = ::FName::FName(&local_68,"STAT_RigUnit_RigLogic_UpdateBlendShapeCurves");
    FVar16 = (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::UpdateBlendShapeCurves(URigHierarchy_*,TArrayView<float_const_,int>)_::_2_::FStat_STAT_RigUnit_RigLogic_UpdateBlendShapeCurves>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RigUnit_RigLogic_UpdateBlendShapeCurves,*pFVar15,
                          L"STAT_RigUnit_RigLogic_UpdateBlendShapeCurves","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar16;
  bVar11 = false;
  bVar9 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar12 = false;
  bVar7 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) ||
     (bVar6 = bVar11, bVar8 = bVar9, FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar11 = false;
      bVar9 = true;
      bVar12 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_80.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigUnit_RigLogic.cpp"
                   ,0x1bf);
        bVar11 = true;
        bVar9 = true;
        bVar12 = true;
        bVar7 = true;
      }
    }
    bVar6 = bVar11;
    bVar8 = bVar9;
    if (FThreadStats::bPrimaryEnable != false) {
      local_78 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar12 = true;
      bVar7 = true;
      goto LAB_14a6848e5;
    }
  }
  bVar9 = bVar7;
  bVar11 = bVar12;
  bVar12 = false;
  bVar7 = false;
  local_78 = local_60;
  FVar18 = local_60;
LAB_14a6848e5:
  uVar1 = this->CurrentLOD;
  if ((((int)uVar1 < 0) || ((this->BlendShapeIndices).ArrayNum <= (int)uVar1)) ||
     ((this->MorphTargetCurveIndices).ArrayNum <= (int)uVar1)) {
    if (2 < (byte)LogRigLogicUnit._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRigLogicUnit);
    }
  }
  else {
    uVar19 = 0;
    if ((int)uVar1 < (this->BlendShapeIndices).ArrayNum) {
      uVar19 = ~uVar1 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar19 = this->CurrentLOD;
    uVar1 = *(uint *)((this->BlendShapeIndices).AllocatorInstance.Data +
                     (longlong)(int)uVar1 * 0x10 + 8);
    uVar13 = 0;
    if ((int)uVar19 < (this->MorphTargetCurveIndices).ArrayNum) {
      uVar13 = ~uVar19 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar1 == *(uint *)((this->MorphTargetCurveIndices).AllocatorInstance.Data +
                          (longlong)(int)uVar19 * 0x10 + 8)) {
      uVar19 = 0;
      if (uVar1 != 0) {
        do {
          uVar13 = this->CurrentLOD;
          uVar14 = 0;
          if ((int)uVar13 < (this->BlendShapeIndices).ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->BlendShapeIndices).AllocatorInstance.Data;
          uVar14 = 0;
          if ((int)uVar19 < *(int *)(pFVar4 + (longlong)(int)uVar13 * 0x10 + 8)) {
            uVar14 = ~uVar19 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = this->CurrentLOD;
          iVar2 = *(int *)(*(longlong *)(pFVar4 + (longlong)(int)uVar13 * 0x10) +
                          (longlong)(int)uVar19 * 4);
          uVar13 = 0;
          if ((int)uVar14 < (this->MorphTargetCurveIndices).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->MorphTargetCurveIndices).AllocatorInstance.Data;
          uVar13 = 0;
          if ((int)uVar19 < *(int *)(pFVar4 + (longlong)(int)uVar14 * 0x10 + 8)) {
            uVar13 = ~uVar19 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar3 = *(int *)(*(longlong *)(pFVar4 + (longlong)(int)uVar14 * 0x10) +
                          (longlong)(int)uVar19 * 4);
          if (iVar3 != -1) {
            pfVar17 = TArrayView<float_const_,int>::operator[](param_2,iVar2);
            URigHierarchy::SetCurveValue(param_1,iVar3,*pfVar17,false);
          }
          uVar19 = uVar19 + 1;
          FVar18 = local_78;
          bVar6 = bVar11;
          bVar12 = bVar7;
          bVar8 = bVar9;
        } while (uVar19 < uVar1);
      }
    }
    else {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8262070884706025926>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigUnit_RigLogic.cpp"
                          ,0x1c6,
                          "BlendShapePerLODCount == MorphTargetCurveIndices[CurrentLOD].Values.Num()"
                         );
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateJoints @ 14a685fa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigUnit_RigLogic_Data::UpdateJoints
          (FRigUnit_RigLogic_Data *this,URigHierarchy *param_1,TArrayView<float_const_,int> *param_2
          ,TArrayView<float_const_,int> *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  FName FVar6;
  FSharedRigRuntimeContext *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  bool bVar18;
  float *pfVar19;
  bool bVar20;
  bool bVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::UpdateJoints(URigHierarchy_*,TArrayView<float_const_,int>,TArrayView<float_const_,int>)_::_2_::FStat_STAT_RigUnit_RigLogic_UpdateJoints>
  FVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  ushort *puVar27;
  double dVar28;
  double dVar29;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_168;
  FName local_160;
  FName local_158;
  float *local_148;
  float *local_140;
  FName local_138;
  FName local_130;
  TTransform<double> local_128 [2];
  
  FStatsHierarchical::BeginMeasurement("FRigUnit_RigLogic_Data::UpdateJoints");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_RigUnit_RigLogic_UpdateJoints ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::UpdateJoints(URigHierarchy_*,TArrayView<float_const_,int>,TArrayView<float_const_,int>)_::_2_::FStat_STAT_RigUnit_RigLogic_UpdateJoints>
           )0x0) {
        pFVar22 = ::FName::FName(&local_138,"STAT_RigUnit_RigLogic_UpdateJoints");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigUnit_RigLogic_UpdateJoints,*pFVar22
                   ,L"STAT_RigUnit_RigLogic_UpdateJoints","STATGROUP_Quick","STATCAT_Advanced",
                   L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar23 = StatPtr_STAT_RigUnit_RigLogic_UpdateJoints;
  if (StatPtr_STAT_RigUnit_RigLogic_UpdateJoints ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::UpdateJoints(URigHierarchy_*,TArrayView<float_const_,int>,TArrayView<float_const_,int>)_::_2_::FStat_STAT_RigUnit_RigLogic_UpdateJoints>
       )0x0) {
    pFVar22 = ::FName::FName(&local_130,"STAT_RigUnit_RigLogic_UpdateJoints");
    FVar23 = (FThreadSafeStaticStat<_public:_void___cdecl_FRigUnit_RigLogic_Data::UpdateJoints(URigHierarchy_*,TArrayView<float_const_,int>,TArrayView<float_const_,int>)_::_2_::FStat_STAT_RigUnit_RigLogic_UpdateJoints>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigUnit_RigLogic_UpdateJoints,
                          *pFVar22,L"STAT_RigUnit_RigLogic_UpdateJoints","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar6 = *(FName *)FVar23;
  bVar18 = false;
  bVar17 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  bVar21 = false;
  bVar20 = false;
  if ((FVar6.ComparisonIndex.Value.Value != 0) || (FVar6.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar18 = false;
      bVar17 = true;
      bVar21 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_168.ComparisonIndex.Value = FVar6.ComparisonIndex.Value.Value;
        local_168.Number = FVar6.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_168,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigUnit_RigLogic.cpp"
                   ,0x1a6);
        bVar18 = true;
        bVar17 = true;
        bVar21 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_160 = FVar6;
      FThreadStats::AddMessage(FVar6,CycleScopeStart);
      bVar20 = true;
      goto LAB_14a68616e;
    }
  }
  bVar18 = bVar21;
  bVar17 = bVar20;
  bVar20 = false;
  local_160 = local_158;
LAB_14a68616e:
  local_148 = param_2->DataPtr;
  local_140 = param_3->DataPtr;
  if ((this->LocalRigRuntimeContext).Object == (FSharedRigRuntimeContext *)0x0) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar21) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar3 = this->CurrentLOD;
  lVar25 = (longlong)(int)uVar3;
  pFVar7 = (this->LocalRigRuntimeContext).Object;
  uVar26 = 0;
  if ((int)uVar3 < (pFVar7->VariableJointIndicesPerLOD).ArrayNum) {
    uVar26 = ~uVar3 >> 0x1f;
  }
  if (uVar26 == 0) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar19 = local_148;
  pFVar8 = (pFVar7->VariableJointIndicesPerLOD).AllocatorInstance.Data;
  puVar27 = *(ushort **)(pFVar8 + lVar25 * 0x10);
  iVar4 = *(int *)(pFVar8 + lVar25 * 0x10 + 8);
  puVar1 = puVar27 + iVar4;
  while( true ) {
    if (*(int *)(pFVar8 + lVar25 * 0x10 + 8) != iVar4) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<unsigned_short,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    FVar6 = local_160;
    if (puVar27 == puVar1) break;
    uVar2 = *puVar27;
    if ((this->HierarchyBoneIndices).ArrayNum <= (int)(uint)uVar2) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar21) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar5 = *(int *)((this->HierarchyBoneIndices).AllocatorInstance.Data + (ulonglong)uVar2 * 4);
    if (iVar5 != -1) {
      uVar24 = (ulonglong)(ushort)(uVar2 * 10);
      dVar28 = (double)pfVar19[uVar24 + 6];
      dVar14 = (double)local_140[uVar24 + 5];
      dVar11 = (double)local_140[uVar24 + 4];
      dVar16 = (double)pfVar19[uVar24 + 5];
      dVar15 = (double)local_140[uVar24 + 3];
      dVar29 = (double)local_140[uVar24 + 6];
      dVar13 = (double)pfVar19[uVar24 + 3];
      dVar12 = (double)pfVar19[uVar24 + 4];
      dVar10 = dVar13 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               dVar11 * dVar28 +
               dVar29 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               dVar16 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      local_128[0].Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
      local_128[0].Rotation.XY.m128d_f64[0] =
           dVar13 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar15 * dVar28 +
           dVar14 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar16 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_128[0].Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_128[0].Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)(local_140[uVar24 + 1] + pfVar19[uVar24 + 1]),0);
      local_128[0].Translation.XY.m128d_f64[0] = (double)(local_140[uVar24] + pfVar19[uVar24]);
      local_128[0].Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)(local_140[uVar24 + 1] + pfVar19[uVar24 + 1]) >> 0x20);
      local_128[0].Translation.ZW.m128d_f64[0] =
           (double)(local_140[uVar24 + 2] + pfVar19[uVar24 + 2]);
      local_128[0].Translation.ZW.m128d_f64[1] = 0.0;
      dVar10 = dVar13 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar29 * dVar28 +
               dVar11 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar16 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_128[0].Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
      local_128[0].Rotation.ZW.m128d_f64[0] =
           dVar13 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar14 * dVar28 +
           dVar15 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar16 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_128[0].Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_128[0].Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)(local_140[uVar24 + 8] + pfVar19[uVar24 + 8]),0);
      local_128[0].Scale3D.XY.m128d_f64[0] = (double)(local_140[uVar24 + 7] + pfVar19[uVar24 + 7]);
      local_128[0].Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)(local_140[uVar24 + 8] + pfVar19[uVar24 + 8]) >> 0x20);
      local_128[0].Scale3D.ZW.m128d_f64[0] = (double)(local_140[uVar24 + 9] + pfVar19[uVar24 + 9]);
      local_128[0].Scale3D.ZW.m128d_f64[1] = 0.0;
      URigHierarchy::SetLocalTransformByIndex(param_1,iVar5,local_128,false,true,false,false);
    }
    puVar27 = puVar27 + 1;
  }
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar20) {
    FThreadStats::AddMessage(FVar6,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

