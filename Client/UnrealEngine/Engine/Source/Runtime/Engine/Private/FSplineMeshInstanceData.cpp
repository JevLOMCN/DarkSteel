// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 147994e50

UScriptStruct * __cdecl FSplineMeshInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSplineMeshInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSplineMeshInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplineMeshInstanceData,(UObject *)pUVar1,
                         L"SplineMeshInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FSplineMeshInstanceData.OuterSingleton;
}

// ContainsData @ 147994e90

bool __thiscall FSplineMeshInstanceData::ContainsData(FSplineMeshInstanceData *this)

{
  return true;
}

// ApplyToComponent @ 147994ea0

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
FSplineMeshInstanceData::ApplyToComponent
          (FSplineMeshInstanceData *this,UActorComponent *param_1,ECacheApplyPhase param_2)

{
  byte bVar1;
  int iVar2;
  UActorComponent *pUVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FString local_38;
  FString local_28;
  double local_18;
  
  FPrimitiveComponentInstanceData::ApplyToComponent
            ((FPrimitiveComponentInstanceData *)this,param_1,param_2);
  if (param_2 == PostUserConstructionScript) {
    if (param_1 == (UActorComponent *)0x0) {
      pFVar7 = GetTypeName<UStaticMeshComponent>(&local_38);
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar8);
    }
    pUVar6 = UStaticMeshComponent::StaticClass();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar6->_padding_)) {
      pFVar7 = GetTypeName<UStaticMeshComponent>(&local_38);
      pwVar8 = L"";
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      pFVar7 = GetFullNameForCastLogError<UActorComponent>(&local_28,param_1);
      if ((pFVar7->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar8,pwVar9);
    }
    UStaticMeshComponent::ApplyComponentInstanceData
              ((UStaticMeshComponent *)param_1,(FStaticMeshComponentInstanceData *)this);
  }
  else if (param_1 == (UActorComponent *)0x0) {
    pFVar7 = GetTypeName<USplineMeshComponent>(&local_28);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar8);
  }
  pUVar6 = USplineMeshComponent::StaticClass();
  iVar2 = (int)pUVar6->_padding_;
  if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      == &pUVar6->_padding_)) {
    if ((this != (FSplineMeshInstanceData *)0x0) &&
       (bVar1 = param_1[9].field_0xbd, (bVar1 & 1) != 0)) {
      pUVar3 = (UActorComponent *)(this->StartPos).field0_0x0._s_0.Y;
      param_1[8].PrimaryComponentTick._padding_ = (longlong)(this->StartPos).field0_0x0._s_0.X;
      param_1[8].PrimaryComponentTick.Target = pUVar3;
      param_1[8].ComponentTags.AllocatorInstance.Data =
           (FScriptContainerElement *)(this->StartPos).field0_0x0._s_0.Z;
      dVar4 = (this->EndPos).field0_0x0._s_0.Y;
      param_1[8].WorldPrivate = (UWorld *)(this->EndPos).field0_0x0._s_0.X;
      *(double *)&param_1[8].field_0xb8 = dVar4;
      param_1[9]._padding_ = (longlong)(this->EndPos).field0_0x0._s_0.Z;
      pFVar5 = (FScriptContainerElement *)(this->StartTangent).field0_0x0._s_0.Y;
      *(double *)&param_1[8].ComponentTags.ArrayNum = (this->StartTangent).field0_0x0._s_0.X;
      param_1[8].AssetUserData.AllocatorInstance.Data = pFVar5;
      *(double *)&param_1[8].AssetUserData.ArrayNum = (this->StartTangent).field0_0x0._s_0.Z;
      local_18 = (this->EndTangent).field0_0x0._s_0.Z;
      if (((this->EndTangent).field0_0x0._s_0.X != (double)param_1[9]._padding_) ||
         (((this->EndTangent).field0_0x0._s_0.Y != (double)param_1[9]._padding_ ||
          (local_18 != (double)param_1[9]._padding_)))) {
        dVar4 = (this->EndTangent).field0_0x0._s_0.Y;
        param_1[9]._padding_ = (longlong)(this->EndTangent).field0_0x0._s_0.X;
        param_1[9]._padding_ = (longlong)dVar4;
        param_1[9]._padding_ = (longlong)(this->EndTangent).field0_0x0._s_0.Z;
        param_1[9].field_0xbd = bVar1 | 4;
      }
      USplineMeshComponent::UpdateRenderStateAndCollision_Internal
                ((USplineMeshComponent *)param_1,false);
    }
    return;
  }
  pFVar7 = GetTypeName<USplineMeshComponent>(&local_28);
  pwVar8 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetFullNameForCastLogError<UActorComponent>(&local_38,param_1);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar8,pwVar9);
}

// FSplineMeshInstanceData @ 1479a4690

FSplineMeshInstanceData * __thiscall
FSplineMeshInstanceData::FSplineMeshInstanceData
          (FSplineMeshInstanceData *this,USplineMeshComponent *param_1)

{
  double dVar1;
  undefined8 uVar2;
  
  FStaticMeshComponentInstanceData::FStaticMeshComponentInstanceData
            ((FStaticMeshComponentInstanceData *)this,(UStaticMeshComponent *)param_1);
  *(undefined ***)this = &___7FSplineMeshInstanceData__6B_;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartPos).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartPos).field0_0x0._s_0.Y = (double)uVar2;
  (this->StartPos).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EndPos).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EndPos).field0_0x0._s_0.Y = (double)uVar2;
  (this->EndPos).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartTangent).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartTangent).field0_0x0._s_0.Y = (double)uVar2;
  (this->StartTangent).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EndTangent).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EndTangent).field0_0x0._s_0.Y = (double)uVar2;
  (this->EndTangent).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar1 = (param_1->SplineParams).StartPos.field0_0x0._s_0.Y;
  (this->StartPos).field0_0x0._s_0.X = (param_1->SplineParams).StartPos.field0_0x0._s_0.X;
  (this->StartPos).field0_0x0._s_0.Y = dVar1;
  (this->StartPos).field0_0x0._s_0.Z = (param_1->SplineParams).StartPos.field0_0x0._s_0.Z;
  dVar1 = (param_1->SplineParams).EndPos.field0_0x0._s_0.Y;
  (this->EndPos).field0_0x0._s_0.X = (param_1->SplineParams).EndPos.field0_0x0._s_0.X;
  (this->EndPos).field0_0x0._s_0.Y = dVar1;
  (this->EndPos).field0_0x0._s_0.Z = (param_1->SplineParams).EndPos.field0_0x0._s_0.Z;
  dVar1 = (param_1->SplineParams).StartTangent.field0_0x0._s_0.Y;
  (this->StartTangent).field0_0x0._s_0.X = (param_1->SplineParams).StartTangent.field0_0x0._s_0.X;
  (this->StartTangent).field0_0x0._s_0.Y = dVar1;
  (this->StartTangent).field0_0x0._s_0.Z = (param_1->SplineParams).StartTangent.field0_0x0._s_0.Z;
  dVar1 = (param_1->SplineParams).EndTangent.field0_0x0._s_0.Y;
  (this->EndTangent).field0_0x0._s_0.X = (param_1->SplineParams).EndTangent.field0_0x0._s_0.X;
  (this->EndTangent).field0_0x0._s_0.Y = dVar1;
  (this->EndTangent).field0_0x0._s_0.Z = (param_1->SplineParams).EndTangent.field0_0x0._s_0.Z;
  return this;
}

// FSplineMeshInstanceData @ 1479a47c0

FSplineMeshInstanceData * __thiscall
FSplineMeshInstanceData::FSplineMeshInstanceData(FSplineMeshInstanceData *this)

{
  undefined8 uVar1;
  
  FStaticMeshComponentInstanceData::FStaticMeshComponentInstanceData
            ((FStaticMeshComponentInstanceData *)this);
  *(undefined ***)this = &___7FSplineMeshInstanceData__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartPos).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartPos).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartPos).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EndPos).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EndPos).field0_0x0._s_0.Y = (double)uVar1;
  (this->EndPos).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartTangent).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartTangent).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartTangent).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EndTangent).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EndTangent).field0_0x0._s_0.Y = (double)uVar1;
  (this->EndTangent).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~FSplineMeshInstanceData @ 1479a8f90

void __thiscall FSplineMeshInstanceData::~FSplineMeshInstanceData(FSplineMeshInstanceData *this)

{
  if (*(void **)&this->field_0x158 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x158);
  }
  if (*(void **)&this->field_0x148 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x148);
  }
  DestructItems<FStaticMeshVertexColorLODData,int>
            (*(FStaticMeshVertexColorLODData **)&this->field_0x138,*(int *)&this->field_0x140);
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  FSceneComponentInstanceData::~FSceneComponentInstanceData((FSceneComponentInstanceData *)this);
  return;
}

