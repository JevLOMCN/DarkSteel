// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// operator() @ 149c4f770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
`FPCGSpawnActorElement::CollapseIntoTargetActor'::__l2::<lambda_1>::operator()
          (void *this,UStaticMeshComponent *param_1)

{
  int *piVar1;
  TSet<TTuple<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  UClass *pUVar10;
  TTransform<double> *pTVar11;
  longlong lVar12;
  longlong lVar13;
  ForAnyElementType *pFVar14;
  int iVar15;
  undefined1 auStackY_3f8 [32];
  int local_3a8 [2];
  FPCGISMComponentBuilderParams *local_3a0;
  FPCGISMComponentBuilderParams local_398;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor(&local_398.Descriptor);
  iVar15 = 0;
  local_398.bAllowDescriptorChanges = true;
  local_398.bTransient = false;
  local_398.NumCustomDataFloats = 0;
  local_398.SettingsCrc.Value = 0;
  local_398.SettingsCrc._4_4_ = local_398.SettingsCrc._4_4_ & 0xffffff00;
  local_398.DataCrc.Value = 0;
  local_398.DataCrc.bValid = false;
  FPCGSoftISMComponentDescriptor::InitFrom(&local_398.Descriptor,param_1,true);
  this_00 = *(TSet<TTuple<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              **)this;
  local_398.SettingsCrc.Value = (uint)*(undefined8 *)((longlong)this + 8);
  local_398.SettingsCrc._4_4_ = SUB84((ulonglong)*(undefined8 *)((longlong)this + 8) >> 0x20,0);
  uVar7 = ::GetTypeHash(&local_398);
  iVar8 = TSet<TTuple<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FPCGISMComponentBuilderParams>(this_00,uVar7,&local_398);
  if ((iVar8 == -1) ||
     (lVar13 = (longlong)iVar8 * 0x2b0 + *(longlong *)&this_00->Elements, lVar13 == 0)) {
    local_3a0 = &local_398;
    TSet<TTuple<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FPCGISMComponentBuilderParams_const_&>_>
              (this_00,(uint)local_3a8,
               (TKeyInitializer<FPCGISMComponentBuilderParams_const_&> *)(ulonglong)uVar7,
               (bool *)&local_3a0);
    lVar13 = (longlong)local_3a8[0] * 0x2b0 + *(longlong *)&this_00->Elements;
  }
  pFVar14 = (ForAnyElementType *)(lVar13 + 0x298);
  if (param_1 != (UStaticMeshComponent *)0x0) {
    pUVar10 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
    iVar8 = (int)pUVar10->_padding_;
    if ((iVar8 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar8 * 8)
        == &pUVar10->_padding_)) {
      iVar8 = UInstancedStaticMeshComponent::GetInstanceCount
                        ((UInstancedStaticMeshComponent *)param_1);
      uVar7 = *(int *)(lVar13 + 0x2a0) + iVar8;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      piVar1 = (int *)(lVar13 + 0x2a4);
      if (*(int *)(lVar13 + 0x2a4) < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,uVar7,pFVar14,*(int *)(lVar13 + 0x2a0),piVar1);
      }
      if (0 < iVar8) {
        do {
          local_f8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_f8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_f8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_f8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_f8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_f8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_f8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_f8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_f8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_f8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          bVar5 = UInstancedStaticMeshComponent::GetInstanceTransform
                            ((UInstancedStaticMeshComponent *)param_1,iVar15,&local_f8,false);
          if (bVar5) {
            if ((((TTransform<double> *)pFVar14->Data <= &local_f8) &&
                (&local_f8 < (TTransform<double> *)pFVar14->Data + *piVar1)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            iVar9 = *(int *)(lVar13 + 0x2a0);
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1060,pFVar14,piVar1);
            }
            *(int *)(lVar13 + 0x2a0) = iVar9 + 1;
            pFVar2 = pFVar14->Data;
            lVar12 = (longlong)iVar9 * 0x60;
            *(double *)(pFVar2 + lVar12) = local_f8.Rotation.XY.m128d_f64[0];
            *(double *)(pFVar2 + lVar12 + 8) = local_f8.Rotation.XY.m128d_f64[1];
            *(double *)(pFVar2 + lVar12 + 0x10) = local_f8.Rotation.ZW.m128d_f64[0];
            *(double *)(pFVar2 + lVar12 + 0x10 + 8) = local_f8.Rotation.ZW.m128d_f64[1];
            *(double *)(pFVar2 + lVar12 + 0x20) = local_f8.Translation.XY.m128d_f64[0];
            *(double *)(pFVar2 + lVar12 + 0x20 + 8) = local_f8.Translation.XY.m128d_f64[1];
            *(double *)(pFVar2 + lVar12 + 0x30) = local_f8.Translation.ZW.m128d_f64[0];
            *(double *)(pFVar2 + lVar12 + 0x30 + 8) = local_f8.Translation.ZW.m128d_f64[1];
            *(double *)(pFVar2 + lVar12 + 0x40) = local_f8.Scale3D.XY.m128d_f64[0];
            *(double *)(pFVar2 + lVar12 + 0x40 + 8) = local_f8.Scale3D.XY.m128d_f64[1];
            *(double *)(pFVar2 + lVar12 + 0x50) = local_f8.Scale3D.ZW.m128d_f64[0];
            *(double *)(pFVar2 + lVar12 + 0x50 + 8) = local_f8.Scale3D.ZW.m128d_f64[1];
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar8);
      }
      goto LAB_149c4fb23;
    }
  }
  pTVar11 = USceneComponent::GetRelativeTransform((USceneComponent *)param_1,&local_98);
  if ((((TTransform<double> *)pFVar14->Data <= pTVar11) &&
      (pTVar11 < (TTransform<double> *)pFVar14->Data + *(int *)(lVar13 + 0x2a4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  iVar8 = *(int *)(lVar13 + 0x2a0);
  if (iVar8 == *(int *)(lVar13 + 0x2a4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1060,pFVar14,(int *)(lVar13 + 0x2a4));
  }
  *(int *)(lVar13 + 0x2a0) = iVar8 + 1;
  dVar4 = (pTVar11->Rotation).XY.m128d_f64[1];
  pFVar2 = pFVar14->Data;
  lVar13 = (longlong)iVar8 * 0x60;
  *(double *)(pFVar2 + lVar13) = (pTVar11->Rotation).XY.m128d_f64[0];
  *(double *)(pFVar2 + lVar13 + 8) = dVar4;
  dVar4 = (pTVar11->Rotation).ZW.m128d_f64[1];
  *(double *)(pFVar2 + lVar13 + 0x10) = (pTVar11->Rotation).ZW.m128d_f64[0];
  *(double *)(pFVar2 + lVar13 + 0x10 + 8) = dVar4;
  dVar4 = (pTVar11->Translation).XY.m128d_f64[1];
  *(double *)(pFVar2 + lVar13 + 0x20) = (pTVar11->Translation).XY.m128d_f64[0];
  *(double *)(pFVar2 + lVar13 + 0x20 + 8) = dVar4;
  dVar4 = (pTVar11->Translation).ZW.m128d_f64[1];
  *(double *)(pFVar2 + lVar13 + 0x30) = (pTVar11->Translation).ZW.m128d_f64[0];
  *(double *)(pFVar2 + lVar13 + 0x30 + 8) = dVar4;
  dVar4 = (pTVar11->Scale3D).XY.m128d_f64[1];
  *(double *)(pFVar2 + lVar13 + 0x40) = (pTVar11->Scale3D).XY.m128d_f64[0];
  *(double *)(pFVar2 + lVar13 + 0x40 + 8) = dVar4;
  dVar4 = (pTVar11->Scale3D).ZW.m128d_f64[1];
  *(double *)(pFVar2 + lVar13 + 0x50) = (pTVar11->Scale3D).ZW.m128d_f64[0];
  *(double *)(pFVar2 + lVar13 + 0x50 + 8) = dVar4;
LAB_149c4fb23:
  if (local_398.Descriptor.AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Descriptor.AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data);
  }
  if (local_398.Descriptor.ComponentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Descriptor.ComponentTags.AllocatorInstance.Data);
  }
  FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor
            ((FSoftISMComponentDescriptor *)&local_398);
  return true;
}

// operator() @ 149c55f30

void __thiscall
`FPCGSpawnActorElement::SpawnAndPrepareSubgraphs'::__l62::<lambda_1>::operator()
          (void *this,UPCGManagedResource *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UPCGManagedResource *local_18 [2];
  
  if (param_1 != (UPCGManagedResource *)0x0) {
    pUVar6 = Z_Construct_UClass_UPCGManagedISMComponent_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar6->_padding_)) && ((param_1->Crc).bValid != false)) &&
       ((*(char *)(**(longlong **)((longlong)this + 8) + 0x11c) != '\0' &&
        ((param_1->Crc).Value == *(uint *)(**(longlong **)((longlong)this + 8) + 0x118))))) {
      pFVar2 = *(ForAnyElementType **)this;
      local_18[0] = param_1;
      if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
         (((FScriptContainerElement *)local_18 <
           pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar5 + 1;
      *(UPCGManagedResource **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
      return;
    }
  }
  return;
}

// operator() @ 149c593d0

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
`FPCGSpawnActorElement::SpawnAndPrepareSubgraphs'::__l76::<lambda_2>::operator()
          (void *this,TSubclassOf<AActor> param_1,AActor *param_2,FPCGTaggedData *param_3,
          UPCGBasePointData *param_4,UPCGBasePointData *param_5)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  FPCGSpawnActorElement *pFVar4;
  bool bVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  byte bVar10;
  UObject *local_res18 [2];
  FString local_38;
  FString local_28;
  
  if (param_2 != (AActor *)0x0) {
    bVar10 = param_2->field_0x5b;
    goto LAB_149c5948c;
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 == 0) {
LAB_149c59438:
    pUVar6 = (UClass *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar6 == (UClass *)0x0) goto LAB_149c59438;
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_149c59438;
    pUVar6 = *(UClass **)param_1.Class.field0_0x0;
  }
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pUVar3 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar3 == (UObject *)0x0) {
    pFVar7 = GetTypeName<AActor>(&local_38);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar8);
  }
  pUVar6 = Z_Construct_UClass_AActor_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar6->_padding_)) {
    pFVar7 = GetTypeName<AActor>(&local_38);
    pwVar8 = L"";
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    pFVar7 = GetFullNameForCastLogError<UObject>(&local_28,pUVar3);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar8,pwVar9);
  }
  bVar10 = pUVar3[2].field_0xb;
LAB_149c5948c:
  if (*(char *)(**(longlong **)((longlong)this + 0x20) + 0xd8) == '\0') {
    local_res18[0] = *(UObject **)param_1.Class.field0_0x0;
    pFVar4 = *(FPCGSpawnActorElement **)this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    FPCGSpawnActorElement::CollapseIntoTargetActor
              (pFVar4,(FPCGSubgraphContext *)**(undefined8 **)((longlong)this + 0x10),
               (AActor *)**(undefined8 **)((longlong)this + 0x18),(TSubclassOf<AActor>)local_res18,
               param_4);
  }
  else if ((*(char *)((longlong)this + 8) != '\0') || ((bVar10 >> 3 & 1) == 0)) {
    local_res18[0] = *(UObject **)param_1.Class.field0_0x0;
    pFVar4 = *(FPCGSpawnActorElement **)this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    FPCGSpawnActorElement::SpawnActors
              (pFVar4,(FPCGSubgraphContext *)**(undefined8 **)((longlong)this + 0x10),
               (AActor *)**(undefined8 **)((longlong)this + 0x18),(TSubclassOf<AActor>)local_res18,
               param_2,param_3,param_4,param_5);
  }
  return;
}

// CanExecuteOnlyOnMainThread @ 149c5d630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGSpawnActorElement::CanExecuteOnlyOnMainThread(FPCGSpawnActorElement *this,FPCGContext *param_1)

{
  return true;
}

// CollapseIntoTargetActor @ 149c5dce0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FPCGSpawnActorElement::CollapseIntoTargetActor
          (FPCGSpawnActorElement *this,FPCGSubgraphContext *param_1,AActor *param_2,
          TSubclassOf<AActor> param_3,UPCGBasePointData *param_4)

{
  ulonglong uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  UPCGSpawnActorSettings *this_00;
  UPCGComponent *pUVar6;
  UClass *pUVar7;
  UPCGManagedISMComponent *this_01;
  UInstancedStaticMeshComponent *pUVar8;
  FText *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  byte bVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  AActor *pAVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  int iVar23;
  FPCGISMComponentBuilderParams *pFVar24;
  bool bVar25;
  undefined1 auStackY_3b8 [32];
  uint local_368;
  undefined1 local_364 [4];
  ForAnyElementType local_360;
  undefined8 local_358;
  int local_350;
  uint local_34c;
  FString local_348;
  char cStack_334;
  AActor *local_330;
  undefined8 local_328;
  FPCGSubgraphContext *local_320;
  int local_318;
  int local_314;
  code **local_310;
  TObjectPtr<UClass>_u_0 local_308;
  FName local_300;
  FName local_2f8;
  FName local_2f0;
  longlong *local_2e8;
  uint uStack_2e0;
  uint uStack_2dc;
  TBitArray<FDefaultBitArrayAllocator> *local_2d8;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  uint local_2c8;
  undefined4 uStack_2c4;
  int iStack_2c0;
  undefined4 uStack_2bc;
  longlong *local_2b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b0;
  undefined8 uStack_290;
  code *local_288;
  undefined8 **local_280;
  code *local_278;
  code ***local_270;
  FString local_268;
  FString local_258;
  undefined8 *local_248 [2];
  FString local_238;
  FString local_228;
  FText local_218;
  FText local_208;
  undefined1 local_1f8 [8];
  void *local_1f0 [2];
  FText local_1e0;
  FText local_1d0;
  FText local_1c0;
  FTextFormat local_1b0 [2];
  undefined4 local_184;
  undefined1 local_178 [32];
  uint *local_158;
  uint local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  void *local_138;
  undefined4 local_130;
  TTransform<double> local_128;
  longlong local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  uVar5 = 0;
  uVar20 = 0;
  local_34c = 0;
  bVar25 = -1 < CpuChannel->Enabled;
  local_330 = param_2;
  local_320 = param_1;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId697,"FPCGSpawnActorElement::ExecuteInternal::CollapseActors"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnActor.cpp"
               ,0x2b9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId697);
  }
  if ((((param_1 == (FPCGSubgraphContext *)0x0) || (param_2 == (AActor *)0x0)) ||
      (param_4 == (UPCGBasePointData *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context && TargetActor && PointData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnActor.cpp"
                         ,0x2ba,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_350 = (**(code **)(param_4->_padding_ + 0x488))(param_4);
  if (local_350 != 0) {
    this_00 = FPCGContext::GetInputSettings<UPCGSpawnActorSettings>((FPCGContext *)param_1);
    if ((this_00 == (UPCGSpawnActorSettings *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Settings",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnActor.cpp"
                           ,0x2c3,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UPCGSettings::GetSettingsCrc((UPCGSettings *)this_00);
    if ((cStack_334 == '\0') &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5241515587674309318>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnActor.cpp"
                           ,0x2c6,"SettingsCrc.IsValid()"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_248[0] = (undefined8 *)local_178;
    local_178._0_8_ = 0;
    local_280 = local_248;
    local_288 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGSpawnActorElement::CollapseIntoTargetActor'::__l2::<lambda_1>,bool,UStaticMeshComponent_const_*>
                ::Call;
    local_310 = &local_288;
    local_270 = &local_310;
    local_278 = UE::Core::Private::Function::
                TFunctionRefCaller<`AActor::ForEachComponentOfActorClassDefault<UStaticMeshComponent,void>'::__l2::<lambda_1>,bool,UActorComponent_const_*>
                ::Call;
    local_178._8_8_ = 0;
    local_158 = (uint *)0x0;
    local_150 = 0;
    local_14c = 0x80;
    local_148 = 0xffffffff;
    local_144 = 0;
    local_138 = (void *)0x0;
    local_130 = 0;
    local_308.DebugPtr = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_308.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_308.DebugPtr);
    }
    AActor::ForEachComponentOfActorClassDefault
              ((TSubclassOf<AActor> *)param_3.Class.field0_0x0,
               (TSubclassOf<UActorComponent> *)&local_308.ObjectPtr,
               (TFunctionRef<bool___cdecl(UActorComponent_const_*)> *)&local_278);
    (**(code **)(param_4->_padding_ + 0x500))(param_4,&local_c8);
    uVar18 = local_150;
    local_2c8 = 0;
    uStack_2dc = 1;
    uStack_2cc = local_2c8;
    if (local_150 != 0) {
      puVar21 = (uint *)(local_178 + 0x10);
      if (local_158 != (uint *)0x0) {
        puVar21 = local_158;
      }
      uVar22 = *puVar21;
      uVar20 = uVar5;
      local_2c8 = uVar5;
      while (uVar22 == 0) {
        uVar20 = uVar20 + 1;
        local_2c8 = local_2c8 + 0x20;
        uStack_2cc = local_150;
        if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
        goto LAB_149c5df90;
        uVar22 = puVar21[(int)uVar20];
      }
      uStack_2dc = ~(uVar22 - 1) & uVar22;
      uVar1 = (ulonglong)uStack_2dc * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_318 = (int)lVar15;
      uStack_2cc = (int)lVar15 + -1 + local_2c8;
      if ((int)local_150 < (int)uStack_2cc) {
        uStack_2cc = local_150;
      }
    }
LAB_149c5df90:
    uStack_2c4 = local_184;
    uVar22 = local_150 & 0xffffffe0;
    local_2e8 = (longlong *)local_178;
    local_2d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
    iStack_2c0 = local_178._8_4_ - local_144;
    uStack_2d0 = 0xffffffff;
    uStack_2e0 = uVar20;
    iVar17 = (int)local_150 >> 5;
    local_2b8 = (longlong *)local_178;
    TStack_2b0._padding_ = CONCAT44(uStack_2dc,uVar20);
    bVar14 = (byte)local_150;
    local_368 = local_150;
    TStack_2b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
    TStack_2b0.UnvisitedBitMask = 0xffffffff;
    TStack_2b0.CurrentBitIndex = uStack_2cc;
    TStack_2b0.BaseBitIndex = local_2c8;
    TStack_2b0._28_4_ = local_184;
    uStack_290 = CONCAT44(uStack_2bc,local_178._8_4_ - local_144);
    if (((int)local_150 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar20 = 0;
    if (uVar18 != local_150) {
      puVar21 = (uint *)(local_178 + 0x10);
      if (local_158 != (uint *)0x0) {
        puVar21 = local_158;
      }
      uVar18 = -1 << (bVar14 & 0x1f) & puVar21[iVar17];
      while (uVar18 == 0) {
        iVar17 = iVar17 + 1;
        uVar22 = uVar22 + 0x20;
        if ((int)(((int)(local_150 - 1) >> 0x1f & 0x1fU) + (local_150 - 1)) >> 5 < iVar17) {
          local_368 = local_150;
          uVar18 = local_150;
          goto LAB_149c5e0c7;
        }
        uVar18 = puVar21[iVar17];
      }
      uVar1 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_314 = (int)lVar15;
      local_368 = local_314 + -1 + uVar22;
      uVar20 = uVar5;
      uVar18 = local_368;
      if ((int)local_150 < (int)local_368) {
        local_368 = local_150;
        uVar18 = local_150;
      }
    }
LAB_149c5e0c7:
    while( true ) {
      plVar3 = local_2b8;
      if ((int)local_2b8[1] - *(int *)((longlong)local_2b8 + 0x34) != (int)uStack_290) {
        local_364[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_364);
      }
      if (((TStack_2b0.CurrentBitIndex == uVar18) &&
          (TStack_2b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10))) &&
         (plVar3 == (longlong *)local_178)) break;
      pFVar24 = (FPCGISMComponentBuilderParams *)
                ((longlong)TStack_2b0.CurrentBitIndex * 0x2b0 + *plVar3);
      if (((param_1->_padding_ != 0) &&
          (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->_padding_), bVar4)) &&
         (((longlong *)param_1->_padding_ != (longlong *)0x0 &&
          (pUVar6 = (UPCGComponent *)(**(code **)(*(longlong *)param_1->_padding_ + 8))(),
          pUVar6 != (UPCGComponent *)0x0)))) {
        pUVar7 = Z_Construct_UClass_UPCGComponent_NoRegister();
        pAVar19 = local_330;
        iVar17 = (int)pUVar7->_padding_;
        if (((iVar17 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
             &pUVar7->_padding_)) &&
           (this_01 = UPCGActorHelpers::GetOrCreateManagedISMC
                                (local_330,pUVar6,pFVar24,(FPCGContext *)param_1),
           uVar18 = local_368, this_01 != (UPCGManagedISMComponent *)0x0)) {
          this_01->_padding_ = param_1->_padding_;
          pUVar8 = UPCGManagedISMComponent::GetComponent(this_01);
          if ((pUVar8 == (UInstancedStaticMeshComponent *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ISMC",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnActor.cpp"
                                 ,0x2fe,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar17 = local_350;
          uVar5 = local_350 * (int)pFVar24[1].Descriptor._padding_;
          local_360.Data = (FScriptContainerElement *)0x0;
          local_358 = 0;
          if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
          }
          if (0 < (int)uVar5) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,uVar5,&local_360,0,(int *)((longlong)&local_358 + 4));
          }
          iVar23 = 0;
          if (0 < iVar17) {
            do {
              iVar16 = (int)pFVar24[1].Descriptor._padding_;
              uVar20 = 0;
              if (0 < iVar16) {
                do {
                  uVar5 = 0;
                  if ((int)uVar20 < iVar16) {
                    uVar5 = ~uVar20 >> 0x1f;
                  }
                  if ((uVar5 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  lVar15 = pFVar24[1].Descriptor._padding_;
                  if ((local_b8 <= iVar23) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < NumElements)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                         ,0x8b,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  local_128.Rotation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                  local_128.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_128.Rotation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20
                            );
                  local_128.Rotation.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                  local_128.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_128.Rotation.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20
                            );
                  local_128.Translation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                  local_128.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_128.Translation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20
                            );
                  local_128.Translation.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
                  local_128.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_128.Translation.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20
                            );
                  local_128.Scale3D.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                  local_128.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_128.Scale3D.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20
                            );
                  local_128.Scale3D.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                  local_128.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_128.Scale3D.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20
                            );
                  UE::Math::TTransform<double>::Multiply
                            (&local_128,
                             (TTransform<double> *)((longlong)(int)uVar20 * 0x60 + lVar15),
                             (TTransform<double> *)
                             ((longlong)(iVar23 % local_bc) * (longlong)local_c0 + local_c8));
                  if (((local_360.Data <= &local_128) &&
                      (&local_128 <
                       (TTransform<double> *)(local_360.Data + (longlong)local_358._4_4_ * 0x60)))
                     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  iVar17 = (int)local_358;
                  if ((int)local_358 == local_358._4_4_) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x1060,&local_360,(int *)((longlong)&local_358 + 4));
                  }
                  local_358 = CONCAT44(local_358._4_4_,iVar17 + 1);
                  uVar20 = uVar20 + 1;
                  lVar15 = (longlong)iVar17 * 0x60;
                  *(double *)(local_360.Data + lVar15) = local_128.Rotation.XY.m128d_f64[0];
                  *(double *)(local_360.Data + lVar15 + 8) = local_128.Rotation.XY.m128d_f64[1];
                  *(double *)(local_360.Data + lVar15 + 0x10) = local_128.Rotation.ZW.m128d_f64[0];
                  *(double *)(local_360.Data + lVar15 + 0x10 + 8) =
                       local_128.Rotation.ZW.m128d_f64[1];
                  *(double *)(local_360.Data + lVar15 + 0x20) =
                       local_128.Translation.XY.m128d_f64[0];
                  *(double *)(local_360.Data + lVar15 + 0x20 + 8) =
                       local_128.Translation.XY.m128d_f64[1];
                  *(double *)(local_360.Data + lVar15 + 0x30) =
                       local_128.Translation.ZW.m128d_f64[0];
                  *(double *)(local_360.Data + lVar15 + 0x30 + 8) =
                       local_128.Translation.ZW.m128d_f64[1];
                  *(double *)(local_360.Data + lVar15 + 0x40) = local_128.Scale3D.XY.m128d_f64[0];
                  *(double *)(local_360.Data + lVar15 + 0x40 + 8) =
                       local_128.Scale3D.XY.m128d_f64[1];
                  *(double *)(local_360.Data + lVar15 + 0x50) = local_128.Scale3D.ZW.m128d_f64[0];
                  *(double *)(local_360.Data + lVar15 + 0x50 + 8) =
                       local_128.Scale3D.ZW.m128d_f64[1];
                  iVar16 = (int)pFVar24[1].Descriptor._padding_;
                  iVar17 = local_350;
                } while ((int)uVar20 < iVar16);
              }
              iVar23 = iVar23 + 1;
              pAVar19 = local_330;
              uVar20 = local_34c;
            } while (iVar23 < iVar17);
          }
          (**(code **)(pUVar8->_padding_ + 3000))(pUVar8,local_1f0,&local_360);
          if (local_1f0[0] != (void *)0x0) {
            FMemory::Free(local_1f0[0]);
          }
          (**(code **)(pUVar8->_padding_ + 0x5b0))(pUVar8);
          param_1 = local_320;
          if (5 < (byte)LogPCG._0_1_) {
            if ((pAVar19->ActorLabel).Data.ArrayNum < 2) {
              local_300 = (FName)pAVar19->_padding_;
              ::FName::ToString(&local_300,&local_348);
            }
            else {
              local_348.Data.ArrayNum = (pAVar19->ActorLabel).Data.ArrayNum;
              lVar15 = (longlong)local_348.Data.ArrayNum;
              _Src = (pAVar19->ActorLabel).Data.AllocatorInstance.Data;
              local_348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_348.Data.ArrayNum == 0) {
                local_348.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_348.Data.ArrayNum,0,(ForAnyElementType *)&local_348,
                           local_348.Data.ArrayNum,&local_348.Data.ArrayMax);
                memcpy(local_348.Data.AllocatorInstance.Data,_Src,lVar15 * 2);
              }
            }
            pFVar9 = FText::FromString(&local_1e0,&local_348);
            local_2f8 = (FName)pUVar8->_padding_;
            ::FName::ToString(&local_2f8,&local_258);
            pFVar10 = FText::FromString(&local_1d0,&local_258);
            if ((UObject *)pUVar8->_padding_ == (UObject *)0x0) {
              local_328 = 0;
              local_2f0 = (FName)&local_328;
            }
            else {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar8->_padding_);
              }
              local_2f0 = UE::CoreUObject::Private::GetFName((UObject *)local_1f8);
            }
            local_2f0 = *(FName *)local_2f0;
            ::FName::ToString(&local_2f0,&local_268);
            pFVar11 = FText::FromString(&local_1c0,&local_268);
            iVar17 = (int)local_358;
            pFVar12 = FText::AsLocalizable_Advanced_LocText
                                (&local_208,L"PCGSpawnActorElement",L"InstanceCreationInfo",
                                 L"Added {0} instances of mesh \'{1}\' to ISMC \'{2}\' on actor \'{3}\'"
                                );
            pFVar13 = FTextFormat::FTextFormat(local_1b0,pFVar12,Default);
            pFVar9 = FText::Format<int,FText,FText,FText>
                               (&local_218,pFVar13,iVar17,pFVar11,pFVar10,pFVar9);
            FText::ToString(pFVar9);
            param_1 = local_320;
            FPCGContext::GetTaskName((FPCGContext *)local_320,&local_228);
            FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_238);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238.Data.AllocatorInstance.Data);
            }
            uVar20 = uVar20 & 0xfffffffc;
            local_34c = uVar20;
            if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_228.Data.AllocatorInstance.Data);
            }
            if (local_218.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
            }
            if (local_208.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
            }
            if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_268.Data.AllocatorInstance.Data);
            }
            if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_258.Data.AllocatorInstance.Data);
            }
            if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_348.Data.AllocatorInstance.Data);
            }
          }
          if ((TTransform<double> *)local_360.Data != (TTransform<double> *)0x0) {
            FMemory::Free(local_360.Data);
          }
        }
      }
      TStack_2b0.UnvisitedBitMask = TStack_2b0.UnvisitedBitMask & ~TStack_2b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b0);
    }
    local_130 = 0;
    if (local_138 != (void *)0x0) {
      FMemory::Free(local_138);
    }
    TSparseArray<TSparseSetElement<TTuple<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_178);
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteInternal @ 149c671d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGSpawnActorElement::ExecuteInternal(FPCGSpawnActorElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPCGSpawnActorSettings *pUVar4;
  
  pUVar4 = FPCGContext::GetInputSettings<UPCGSpawnActorSettings>(param_1);
  if (pUVar4 == (UPCGSpawnActorSettings *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnActor.cpp"
                       ,0x1bb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((char)param_1[1].InputData.TaggedData.ArrayNum == '\0') {
    bVar2 = SpawnAndPrepareSubgraphs(this,(FPCGSubgraphContext *)param_1,pUVar4);
    return bVar2;
  }
  return param_1->bIsPaused == false;
}

// GetNewActorTags @ 149c77870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FPCGSpawnActorElement::GetNewActorTags
          (FPCGSpawnActorElement *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FPCGContext *param_1,
          AActor *param_2,bool param_3,TArray<FName,TSizedDefaultAllocator<32>_> *param_4)

{
  FName *pFVar1;
  int iVar2;
  IPCGGraphExecutionSource *pIVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UPCGComponent *pUVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  FName *pFVar9;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (!param_3) goto LAB_149c7799a;
  if (param_2 != (AActor *)0x0) {
    pUVar6 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar6->_padding_)) {
      if (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
         (((bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar5 ||
           (pIVar3 = (param_1->ExecutionSource).InterfaceInstance,
           pIVar3 == (IPCGGraphExecutionSource *)0x0)) ||
          (pUVar7 = (UPCGComponent *)(**(code **)((longlong)*pIVar3 + 8))(),
          pUVar7 == (UPCGComponent *)0x0)))) goto LAB_149c7799a;
      pUVar6 = Z_Construct_UClass_UPCGComponent_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if (((*(int *)(pUVar7->_padding_ + 0x38) < iVar2) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
           &pUVar6->_padding_)) ||
         (pUVar7 = APCGPartitionActor::GetOriginalComponent((APCGPartitionActor *)param_2,pUVar7),
         pUVar7 == (UPCGComponent *)0x0)) goto LAB_149c7799a;
      if ((pUVar7->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("OriginalComponent->GetOwner()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnActor.cpp"
                             ,0x45c,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      param_2 = (AActor *)pUVar7->_padding_;
    }
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(__return_storage_ptr__,&param_2->Tags);
LAB_149c7799a:
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            (__return_storage_ptr__,&PCGHelpers::DefaultPCGActorTag);
  pTVar8 = param_4;
  pFVar9 = (FName *)(param_4->AllocatorInstance).Data;
  iVar2 = param_4->ArrayNum;
  pFVar1 = pFVar9 + iVar2;
  while( true ) {
    if (pTVar8->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_3);
    }
    if (pFVar9 == pFVar1) break;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
              (__return_storage_ptr__,pFVar9);
    pFVar9 = pFVar9 + 1;
  }
  return __return_storage_ptr__;
}

// IsCacheable @ 149c80650

bool __thiscall
FPCGSpawnActorElement::IsCacheable(FPCGSpawnActorElement *this,UPCGSettings *param_1)

{
  return false;
}

// IsPassthrough @ 149c80be0

bool __thiscall
FPCGSpawnActorElement::IsPassthrough(FPCGSpawnActorElement *this,UPCGSettings *param_1)

{
  return param_1 == (UPCGSettings *)0x0;
}

// SpawnActors @ 149c8cad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FPCGSpawnActorElement::SpawnActors
          (FPCGSpawnActorElement *this,FPCGSubgraphContext *param_1,AActor *param_2,
          TSubclassOf<AActor> param_3,AActor *param_4,FPCGTaggedData *param_5,
          UPCGBasePointData *param_6,UPCGBasePointData *param_7)

{
  int *piVar1;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FPCGCrc FVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TConsoleVariableData<bool> *pTVar9;
  FPCGSubgraphContext *pFVar10;
  EPCGSpawnActorGenerationTrigger EVar11;
  UPCGSpawnActorSettings *pUVar12;
  UPCGGraphInterface *pUVar13;
  UPCGSubsystem *this_01;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  UPCGMetadata *this_02;
  FPCGMetadataDomain *this_03;
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar21;
  UPackage *pUVar22;
  UClass *pUVar23;
  UPCGComponent *pUVar24;
  UWorld *pUVar25;
  UClass *pUVar26;
  ForElementType<FSetElementId> *pFVar27;
  long64 *plVar28;
  AActor *pAVar29;
  UPCGManagedResource *pUVar30;
  UFunction *pUVar31;
  undefined8 *puVar32;
  FText *pFVar33;
  FTextFormat *pFVar34;
  FPCGPoint *pFVar35;
  UClass *pUVar36;
  FPCGDataPtrWrapper *this_04;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong uVar39;
  longlong *plVar40;
  uint uVar41;
  UPCGBasePointData *pUVar42;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar43;
  byte bVar44;
  uint uVar45;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar46;
  double *pdVar47;
  ForAnyElementType FVar48;
  FPCGObjectSingleOverride *pFVar49;
  bool bVar50;
  undefined1 auStackY_ae8 [32];
  byte local_a98;
  FPCGSubgraphContext *local_a90;
  undefined1 local_a88;
  undefined1 local_a87;
  undefined1 local_a86;
  EPCGSpawnActorGenerationTrigger local_a85;
  undefined1 local_a84;
  char local_a83;
  ForAnyElementType local_a80;
  undefined8 local_a78;
  uint local_a70;
  uint local_a6c;
  AActor *local_a68;
  UPCGSpawnActorSettings *local_a60;
  UPCGBasePointData *local_a58;
  AActor *local_a50;
  uint local_a48;
  uint uStack_a44;
  UPCGBasePointData *local_a40;
  UPCGComponent *local_a38;
  ulong64 local_a30;
  AActor *local_a28;
  FPCGMetadataAttribute<FSoftObjectPath> *local_a20;
  longlong *local_a18;
  UFunction *local_a10;
  TArray<UFunction_const_*,TSizedDefaultAllocator<32>_> local_a08;
  FPCGDataCollection local_9f8;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  UPCGGraphInterface *local_9b0;
  UPCGManagedResource *local_9a8;
  UPCGSubsystem *local_9a0;
  FName local_998;
  FString local_990;
  TObjectPtr<USceneComponent>_u_0 local_980;
  int local_978;
  TArray<UFunction_*,TSizedDefaultAllocator<32>_> local_970;
  TVector<double>_u_0 local_960;
  undefined8 local_948;
  FSoftObjectPath local_940;
  undefined1 local_920 [24];
  FUtf8String local_908;
  undefined1 local_8f8 [24];
  undefined1 local_8e0;
  AActor *local_8d8;
  ForAnyElementType local_8d0;
  ulonglong local_8c8;
  bool local_8c0;
  UObject *local_8b8;
  UObject *local_8b0;
  UFunction *local_8a8;
  AActor *local_8a0;
  UClass *local_898;
  UClass *local_890;
  undefined4 local_888;
  undefined4 uStack_884;
  int iStack_880;
  int iStack_87c;
  int local_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  wchar_t *local_868;
  int iStack_860;
  undefined4 uStack_85c;
  code *local_858;
  longlong ***local_850;
  longlong **local_848;
  uint *local_840;
  FPCGSubgraphContext **local_838;
  undefined4 local_830;
  undefined1 local_82c;
  UFunction *local_828;
  UFunction *pUStack_820;
  FName local_818;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_810;
  FPCGDataCollection *local_7f8;
  UPCGSpawnActorSettings *local_7f0;
  longlong local_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined4 local_7d0;
  ForElementType<FSetElementId> local_7c0;
  undefined8 uStack_7b8;
  undefined4 local_7b0;
  FText local_7a0;
  FString local_790;
  FString local_780;
  FText local_770;
  FString local_760;
  FString local_750;
  FText local_740;
  FText local_730;
  TVector<double>_u_0 local_718;
  FString local_6f8;
  FText local_6e8;
  TStringView<wchar_t> local_6d8;
  FString local_6c8;
  undefined1 local_6b8 [16];
  ForElementType<FSetElementId> local_6a8;
  ForElementType<FSetElementId> FStack_6a0;
  double local_698;
  double dStack_690;
  double local_688;
  FTextFormat local_680;
  FTextFormat local_670;
  undefined1 local_660 [32];
  undefined1 local_640 [40];
  undefined1 local_618 [112];
  undefined1 local_5a8 [216];
  longlong *local_4d0;
  AActor *local_4c8;
  undefined2 local_4c0;
  undefined1 local_4b8 [128];
  undefined1 local_438 [128];
  undefined8 local_3b8;
  undefined8 *local_3b0;
  int local_3a8;
  undefined4 local_3a4;
  FConstPCGPointValueRanges local_398;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined8 local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  longlong lStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  float local_148;
  int iStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  FPCGPoint local_128;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_ae8;
  local_a40 = param_6;
  local_a58 = param_7;
  bVar7 = false;
  bVar16 = false;
  bVar50 = -1 < CpuChannel->Enabled;
  local_a90 = param_1;
  local_a28 = param_2;
  if (bVar50) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId792,"FPCGSpawnActorElement::ExecuteInternal::SpawnActors",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnActor.cpp"
               ,0x318);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId792);
  }
  if ((((local_a90 == (FPCGSubgraphContext *)0x0) || (local_a28 == (AActor *)0x0)) ||
      (param_6 == (UPCGBasePointData *)0x0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context && TargetActor && PointData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnActor.cpp"
                          ,0x319,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar14 = IsInGameThread();
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnActor.cpp"
                          ,0x31a,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar18 = (**(code **)(param_6->_padding_ + 0x488))(param_6);
  if (iVar18 == 0) goto LAB_149c8e645;
  local_a70 = 0;
  local_a20 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
  if (param_7 != (UPCGBasePointData *)0x0) {
    local_a70 = (**(code **)(param_7->_padding_ + 0x488))(param_7);
    pcVar4 = *(code **)(param_7->_padding_ + 0x490);
    iVar18 = (**(code **)(param_6->_padding_ + 0x488))(param_6);
    (*pcVar4)(local_a58,iVar18 + local_a70,1);
    lVar38 = param_6->_padding_;
    (**(code **)(lVar38 + 0x488))(param_6);
    (**(code **)(lVar38 + 0x638))(param_6,local_a58,0);
    this_02 = (UPCGMetadata *)(**(code **)(local_a58->_padding_ + 0x328))();
    local_940.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_940.AssetPath.PackageName.Number = 0;
    local_940.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_940.AssetPath.AssetName.Number = 0;
    local_940.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_940.SubPathString.Data.ArrayNum = 0;
    local_940.SubPathString.Data.ArrayMax = 0;
    local_818 = PCGPointDataConstants::ActorReferenceAttribute;
    local_810 = (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>)PCGMetadataDomainID::Default;
    this_03 = UPCGMetadata::FindOrCreateMetadataDomain(this_02,(FPCGMetadataDomainID *)&local_810);
    pFVar21 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
    FVar48.Data = (FScriptContainerElement *)0x0;
    if (this_03 != (FPCGMetadataDomain *)0x0) {
      pFVar21 = FPCGMetadataDomain::FindOrCreateAttribute<FSoftObjectPath>
                          (this_03,local_818,&local_940,false,false,false);
      FVar48.Data = local_940.SubPathString.Data.AllocatorInstance.Data;
    }
    local_a20 = pFVar21;
    if (FVar48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar48.Data);
    }
  }
  local_a60 = FPCGContext::GetInputSettings<UPCGSpawnActorSettings>((FPCGContext *)local_a90);
  if (((local_a60 == (UPCGSpawnActorSettings *)0x0) || (local_a60->Option == CollapseActors)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings && Settings->Option != EPCGSpawnActorOption::CollapseActors",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnActor.cpp"
                          ,0x32d,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_a83 = local_a60->bForceDisableActorParsing;
  iVar18 = (local_a60->SpawnedActorPropertyOverrideDescriptions).ArrayNum;
  if (param_4 == (AActor *)0x0) {
    if (iVar18 == 0) {
      pUVar23 = TSubclassOf<AActor>::operator*((TSubclassOf<AActor> *)param_3.Class.field0_0x0);
      if ((pUVar23->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar23);
      }
      param_4 = Cast<AActor,UObject>((pUVar23->ClassDefaultObject).field0_0x0.DebugPtr);
    }
    else {
      local_9c8 = 0;
      pUVar23 = TSubclassOf<AActor>::operator*((TSubclassOf<AActor> *)param_3.Class.field0_0x0);
      pUVar22 = GetTransientPackage();
      local_9c0 = 0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar22,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar26 = Z_Construct_UClass_AActor_NoRegister();
      CheckIsClassChildOf_Internal(pUVar26,pUVar23);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_4b8,pUVar23);
      local_4b8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_4b8._56_8_ = (UPackage *)0x0;
      local_4b8._16_4_ = 0;
      local_4b8._20_4_ = 0;
      local_4b8._24_4_ = RF_ArchetypeObject;
      local_4b8._40_8_ = (UObject *)0x0;
      local_4b8[0x20] = false;
      local_4b8._8_8_ = pUVar22;
      param_4 = (AActor *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_4b8);
      if (local_4b8._64_8_ != 0) {
        plVar40 = (longlong *)(local_4b8 + 0x50);
        if ((longlong *)local_4b8._104_8_ != (longlong *)0x0) {
          plVar40 = (longlong *)local_4b8._104_8_;
        }
        (**(code **)(*plVar40 + 0x10))();
      }
    }
LAB_149c8ce86:
    if ((param_4 == (AActor *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("TemplateActor",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnActor.cpp"
                            ,0x349,L""), bVar14)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (iVar18 != 0) {
    local_998.ComparisonIndex.Value = 0;
    local_998.Number = 0;
    pUVar22 = GetTransientPackage();
    pUVar23 = Z_Construct_UClass_AActor_NoRegister();
    param_4 = (AActor *)
              DuplicateObject_Internal(pUVar23,(UObject *)param_4,(UObject *)pUVar22,local_998);
    goto LAB_149c8ce86;
  }
  local_8f8._16_8_ = &___7__FPCGAttributeAccessorKeysSingleObjectPtr_VAActor__X__6B_;
  local_8f8._8_8_ = (UObject *)0x0;
  local_8e0 = 0;
  local_8d0.Data = (FScriptContainerElement *)0x0;
  local_8c8 = 0;
  local_8c0 = false;
  local_8f8[0] = false;
  local_8d8 = param_4;
  FPCGObjectOverrides<AActor>::Initialize
            ((FPCGObjectOverrides<AActor> *)local_8f8,
             &local_a60->SpawnedActorPropertyOverrideDescriptions,param_4,(UPCGData *)param_6,
             (FPCGContext *)local_a90,false);
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_618);
  pAVar29 = local_a28;
  local_618[0x30] = AlwaysSpawn;
  local_618._8_8_ = param_4;
  local_618._32_8_ = AActor::GetLevel(local_a28);
  pFVar10 = local_a90;
  if ((((local_a90->_padding_ == 0) ||
       (bVar14 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_a90->_padding_), !bVar14)) ||
      ((longlong *)pFVar10->_padding_ == (longlong *)0x0)) ||
     (pUVar24 = (UPCGComponent *)(**(code **)(*(longlong *)pFVar10->_padding_ + 8))(),
     pUVar24 == (UPCGComponent *)0x0)) {
LAB_149c8cf9b:
    pUVar24 = (UPCGComponent *)0x0;
    local_a38 = (UPCGComponent *)0x0;
  }
  else {
    local_a38 = pUVar24;
    pUVar23 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar18 = (int)pUVar23->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar23->_padding_)) goto LAB_149c8cf9b;
  }
  pUVar23 = *(UClass **)param_3.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar23);
  }
  local_5a8._0_8_ = AActor::GetWorld(pAVar29);
  local_5a8._8_8_ = pUVar23;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar23);
  }
  local_5a8._112_8_ = local_618._0_8_;
  local_5a8._120_8_ = local_618._8_8_;
  local_5a8._128_8_ = local_618._16_8_;
  local_5a8._136_8_ = local_618._24_8_;
  local_5a8._144_8_ = local_618._32_8_;
  local_5a8._152_8_ = local_618._40_8_;
  local_5a8[0xa0] = local_618[0x30];
  local_5a8[0xa1] = local_618[0x31];
  local_5a8._16_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_5a8._24_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_5a8[0xa3] = local_618[0x33];
  local_5a8._32_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_5a8._40_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_5a8._164_4_ = local_618._52_4_;
  local_5a8._48_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_5a8._56_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_5a8._64_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_5a8._72_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_5a8._80_8_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_5a8._88_8_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_5a8._96_8_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_5a8._104_8_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  local_5a8[0xa2] = local_5a8[0xa2] & 0xe0 | local_618[0x32] & 0x1f;
  local_5a8._176_8_ = local_618._64_8_;
  local_4d0 = (longlong *)0x0;
  if (local_618._64_8_ != 0) {
    plVar40 = (longlong *)(local_618 + 0x50);
    if ((longlong *)local_618._104_8_ != (longlong *)0x0) {
      plVar40 = (longlong *)local_618._104_8_;
    }
    (**(code **)*plVar40)
              (UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_,local_5a8 + 0xc0
              );
  }
  local_4c8 = (AActor *)0x0;
  local_4c0._0_1_ = false;
  local_4c0._1_1_ = false;
  local_a85 = local_a60->GenerationTrigger;
  if ((local_a85 == Default) || (bVar14 = false, local_a85 == DoNotGenerateInEditor)) {
    bVar14 = true;
  }
  pUVar25 = (UWorld *)pUVar24->_padding_;
  if ((pUVar25 == (UWorld *)0x0) &&
     (pUVar25 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar24),
     pUVar25 == (UWorld *)0x0)) {
    local_9a0 = (UPCGSubsystem *)0x0;
  }
  else {
    pUVar23 = Z_Construct_UClass_UPCGSubsystem_NoRegister();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar23 != (UClass *)0x0) goto LAB_149c8d18e;
LAB_149c8d1bc:
      pUVar23 = (UClass *)0x0;
    }
    else {
      if (pUVar23 == (UClass *)0x0) goto LAB_149c8d1bc;
      UE::GC::MarkAsReachable((UObject *)pUVar23);
LAB_149c8d18e:
      pUVar26 = Z_Construct_UClass_UPCGSubsystem_NoRegister();
      if (pUVar26 == (UClass *)0x0) goto LAB_149c8d1bc;
      iVar18 = (int)pUVar26->_padding_;
      if (((int)pUVar23->_padding_ < iVar18) ||
         ((longlong *)*(undefined1 **)(pUVar23->_padding_ + (longlong)iVar18 * 8) !=
          &pUVar26->_padding_)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if (!bVar15) goto LAB_149c8d1bc;
    }
    local_9a0 = (UPCGSubsystem *)
                FSubsystemCollectionBase::GetSubsystemInternal
                          ((FSubsystemCollectionBase *)&pUVar25->SubsystemCollection,pUVar23);
  }
  pTVar9 = CVarAllowActorReuse.Ref;
  local_a18 = (longlong *)0x0;
  local_a48 = 0;
  uStack_a44 = uStack_a44 & 0xffffff00;
  bVar15 = IsInParallelGameThread();
  if (bVar15) {
LAB_149c8d1fe:
    lVar38 = 0;
  }
  else {
    bVar15 = IsInGameThread();
    lVar38 = 1;
    if (bVar15) goto LAB_149c8d1fe;
  }
  if (pTVar9->ShadowedValue[lVar38] != false) {
    local_9f8.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9f8.TaggedData.ArrayNum = 0;
    local_9f8.TaggedData.ArrayMax = 0;
    local_9f8.bCancelExecutionOnEmpty = false;
    local_9f8.bCancelExecution = false;
    local_9f8.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9f8.DataCrcs.ArrayNum = 0;
    local_9f8.DataCrcs.ArrayMax = 0;
    local_9f8.InactiveOutputPinBitmask = 0;
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,(ForAnyElementType *)&local_9f8,&local_9f8.TaggedData.ArrayMax);
    local_9f8.TaggedData.ArrayNum = iVar18 + 1;
    this_04 = (FPCGDataPtrWrapper *)
              (local_9f8.TaggedData.AllocatorInstance.Data + (longlong)iVar18 * 0x78);
    this_04[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_04[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_04[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_04[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_04[6].WeakData.WeakPtr.ObjectIndex = 0x100;
    (this_04->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
    (this_04->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
    this_04[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_04[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_04[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_04[3].WeakData.WeakPtr.ObjectIndex = 0;
    this_04[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)&this_04[4].Data.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this_04[4].Data.field0_0x0 + 4) = 0;
    this_04[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_04[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    *(undefined8 *)&this_04[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined4 *)((longlong)&this_04[7].Data.field0_0x0 + 4) = 0xffffffff;
    FPCGDataPtrWrapper::operator=(this_04,(UPCGData *)param_6);
    FPCGDataCollection::ComputeCrcs(&local_9f8,true);
    pFVar10 = local_a90;
    pcVar4 = *(code **)((longlong)*this + 0x40);
    if ((local_a90->_padding_ == 0) ||
       (bVar15 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_a90->_padding_), !bVar15)) {
      local_7e8 = 0;
    }
    else {
      local_7e8 = pFVar10->_padding_;
    }
    local_7f8 = &local_9f8;
    local_7f0 = local_a60;
    (*pcVar4)(this,&local_7f8,&local_a48);
    if ((char)uStack_a44 != '\0') {
      bVar15 = local_4c0._1_1_;
      local_830 = (**(code **)(param_6->_padding_ + 0x488))(param_6);
      local_848 = &local_a18;
      local_82c = bVar15;
      local_840 = &local_a48;
      local_850 = &local_848;
      local_838 = &local_a90;
      local_858 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPCGSpawnActorElement::SpawnActors'::__l57::<lambda_1>,void,UPCGManagedResource_*>
                  ::Call;
      UPCGComponent::ForEachManagedResource
                (pUVar24,(TFunctionRef<void___cdecl(UPCGManagedResource_*)> *)&local_858);
    }
    if (local_9f8.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9f8.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_9f8.TaggedData.AllocatorInstance.Data,
               local_9f8.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)local_9f8.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_9f8.TaggedData.AllocatorInstance.Data);
    }
  }
  uVar45 = 0;
  local_8b0 = *(UObject **)param_3.Class.field0_0x0;
  local_a80.Data = (FScriptContainerElement *)0x0;
  local_a78 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_8b0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_8b0);
  }
  local_9b0 = UPCGSpawnActorSettings::GetGraphInterfaceFromActorSubclass
                        ((TSubclassOf<AActor>)&local_8b0);
  pUVar12 = local_a60;
  if (local_a18 == (longlong *)0x0) {
    GetNewActorTags(this,(TArray<FName,TSizedDefaultAllocator<32>_> *)&local_980.ObjectPtr,
                    (FPCGContext *)local_a90,local_a28,local_a60->bInheritActorTags,
                    &local_a60->TagsToAddOnActors);
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar24,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar23 = Z_Construct_UClass_UPCGManagedActors_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_438,pUVar23);
    local_438._8_8_ = pUVar24;
    pUVar30 = (UPCGManagedResource *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_438);
    local_9a8 = pUVar30;
    if (local_438._64_8_ != 0) {
      plVar40 = (longlong *)(local_438 + 0x50);
      if ((longlong *)local_438._104_8_ != (longlong *)0x0) {
        plVar40 = (longlong *)local_438._104_8_;
      }
      (**(code **)(*plVar40 + 0x10))();
    }
    FVar5._4_4_ = uStack_a44;
    FVar5.Value = local_a48;
    pUVar30->Crc = FVar5;
    bVar8 = false;
    bVar15 = false;
    *(bool *)&pUVar30[1]._padding_ = pUVar12->bDeleteActorsBeforeGeneration == false;
    local_990.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_990.Data.ArrayNum = 0;
    local_990.Data.ArrayMax = 0;
    pUVar31 = UPCGFunctionPrototypes::GetPrototypeWithNoParams();
    iStack_860 = 0x1d;
    local_868 = L"PrototypeWithPointAndMetadata";
    local_8a8 = pUVar31;
    pUVar23 = Z_Construct_UClass_UPCGFunctionPrototypes_NoRegister();
    pUVar26 = Z_Construct_UClass_UFunction_NoRegister();
    local_6d8._12_4_ = uStack_85c;
    local_6d8.Size = iStack_860;
    local_6d8.DataPtr = local_868;
    local_a10 = (UFunction *)StaticFindObject(pUVar26,(UObject *)pUVar23,&local_6d8,None);
    pFVar10 = local_a90;
    local_a08.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a08.ArrayNum = 2;
    local_828 = pUVar31;
    pUStack_820 = local_a10;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,2,0,&local_a08.AllocatorInstance,2,&local_a08.ArrayMax);
    *(UFunction **)local_a08.AllocatorInstance.Data = local_828;
    *(UFunction **)(local_a08.AllocatorInstance.Data + 8) = pUStack_820;
    local_8b8 = *(UObject **)param_3.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_8b8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_8b8);
    }
    PCGHelpers::FindUserFunctions
              (&local_970,(TSubclassOf<UObject>)&local_8b8,&local_a60->PostSpawnFunctionNames,
               &local_a08,(FPCGContext *)pFVar10);
    if (local_a08.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a08.AllocatorInstance.Data);
    }
    local_a98 = 1;
    FConstPCGPointValueRanges::FConstPCGPointValueRanges(&local_398,param_6);
    if (local_a58 == (UPCGBasePointData *)0x0) {
      puVar32 = &local_7e0;
      local_7e0 = 0;
      uStack_7d8 = 0;
      local_7d0 = 0;
    }
    else {
      puVar32 = (undefined8 *)(**(code **)(local_a58->_padding_ + 0x4f8))(local_a58,local_640,1);
    }
    pUVar42 = local_a40;
    uVar45 = 0;
    local_888 = *(undefined4 *)puVar32;
    uStack_884 = *(undefined4 *)((longlong)puVar32 + 4);
    iStack_880 = *(int *)(puVar32 + 1);
    iStack_87c = *(int *)((longlong)puVar32 + 0xc);
    local_878 = *(int *)(puVar32 + 2);
    uStack_874 = *(undefined4 *)((longlong)puVar32 + 0x14);
    uStack_870 = *(undefined4 *)(puVar32 + 3);
    uStack_86c = *(undefined4 *)((longlong)puVar32 + 0x1c);
    iVar18 = (**(code **)(local_a40->_padding_ + 0x488))(local_a40);
    if (0 < iVar18) {
      local_a6c = local_a70;
      iVar18 = local_398.TransformRange.NumElements;
      do {
        iVar20 = (int)local_8c8;
        uVar37 = (ulonglong)(int)local_8c8;
        bVar44 = 1;
        pFVar49 = (FPCGObjectSingleOverride *)(local_8d0.Data + uVar37 * 0x68);
        FVar48.Data = local_8d0.Data;
        while( true ) {
          if ((int)uVar37 != iVar20) {
            local_a88 = 0;
            `TCheckedPointerIterator<FPCGObjectSingleOverride,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_a88);
          }
          if ((FPCGObjectSingleOverride *)FVar48.Data == pFVar49) break;
          bVar17 = FPCGObjectSingleOverride::Apply
                             ((FPCGObjectSingleOverride *)FVar48.Data,uVar45,
                              (IPCGAttributeAccessorKeys *)(local_8f8 + 0x10));
          uVar37 = local_8c8 & 0xffffffff;
          bVar44 = bVar44 & bVar17;
          FVar48.Data = FVar48.Data + 0x68;
        }
        local_a98 = local_a98 & bVar44;
        uVar19 = 0;
        if ((int)uVar45 < iVar18) {
          uVar19 = ~uVar45 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar38 = (longlong)((int)uVar45 % local_398.TransformRange.ElementView.NumElements) *
                 (longlong)local_398.TransformRange.ElementView.BytesBetweenElements;
        local_5a8._16_16_ =
             *(undefined1 (*) [16])
              ((longlong)
               ((local_398.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.m128d_f64 +
              lVar38);
        local_5a8._32_16_ =
             *(undefined1 (*) [16])
              ((longlong)
               ((local_398.TransformRange.ElementView.FirstElementPtr)->Rotation).ZW.m128d_f64 +
              lVar38);
        local_5a8._48_16_ =
             *(undefined1 (*) [16])
              ((longlong)
               ((local_398.TransformRange.ElementView.FirstElementPtr)->Translation).XY.m128d_f64 +
              lVar38);
        local_5a8._64_16_ =
             *(undefined1 (*) [16])
              ((longlong)
               ((local_398.TransformRange.ElementView.FirstElementPtr)->Translation).ZW.m128d_f64 +
              lVar38);
        local_5a8._80_16_ =
             *(undefined1 (*) [16])
              ((longlong)
               ((local_398.TransformRange.ElementView.FirstElementPtr)->Scale3D).XY.m128d_f64 +
              lVar38);
        local_5a8._96_16_ =
             *(undefined1 (*) [16])
              ((longlong)
               ((local_398.TransformRange.ElementView.FirstElementPtr)->Scale3D).ZW.m128d_f64 +
              lVar38);
        local_a68 = UPCGActorHelpers::SpawnDefaultActor((FSpawnDefaultActorParams *)local_5a8);
        if (local_a68 == (AActor *)0x0) {
          if (1 < (byte)LogPCG._0_1_) {
            pFVar33 = FText::AsLocalizable_Advanced_LocText
                                (&local_7a0,L"PCGSpawnActorElement",L"ActorSpawnFailed",
                                 L"Failed to spawn actor on point with index {0}");
            pFVar34 = FTextFormat::FTextFormat(&local_680,pFVar33,Default);
            pFVar33 = FText::Format<int>(&local_6e8,pFVar34,uVar45);
            FText::ToString(pFVar33);
            if (local_a90 != (FPCGSubgraphContext *)0x0) {
              bVar7 = true;
              FPCGContext::GetTaskName((FPCGContext *)local_a90,&local_6f8);
              bVar16 = bVar15;
              bVar8 = bVar7;
              if (local_a90 != (FPCGSubgraphContext *)0x0) {
                bVar7 = true;
                bVar16 = true;
                bVar8 = true;
                bVar15 = true;
                FPCGContext::GetExecutionSourceName((FPCGContext *)local_a90,&local_6c8);
              }
            }
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if ((bVar15) &&
               (bVar15 = false, bVar16 = bVar15, bVar7 = bVar8,
               local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
            }
            if ((bVar8) &&
               (bVar8 = false, bVar16 = bVar15, bVar7 = bVar8,
               local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
            }
            if (local_6e8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_6e8.TextData.Reference + 0x10))();
            }
            if (local_7a0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_7a0.TextData.Reference + 0x10))();
            }
          }
        }
        else {
          uVar19 = 0;
          if ((int)uVar45 < iVar18) {
            uVar19 = ~uVar45 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar38 = (longlong)((int)uVar45 % local_398.TransformRange.ElementView.NumElements) *
                   (longlong)local_398.TransformRange.ElementView.BytesBetweenElements;
          pdVar47 = (double *)
                    ((longlong)
                     ((local_398.TransformRange.ElementView.FirstElementPtr)->Scale3D).XY.m128d_f64
                    + lVar38);
          local_718._s_0.X = *pdVar47;
          local_718._s_0.Y = pdVar47[1];
          local_718._s_0.Z =
               *(double *)
                ((longlong)
                 ((local_398.TransformRange.ElementView.FirstElementPtr)->Scale3D).ZW.m128d_f64 +
                lVar38);
          local_698 = local_718._s_0.X;
          dStack_690 = local_718._s_0.Y;
          local_688 = local_718._s_0.Z;
          AActor::SetActorRelativeScale3D(local_a68,(TVector<double> *)&local_718._s_0);
          pAVar29 = local_a68;
          pTVar46 = &local_a68->Tags;
          if (((TObjectPtr<USceneComponent>_u_0 *)pTVar46 == &local_980) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x96e,L""), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar38 = (longlong)local_978;
          if (local_978 != 0) {
            iVar18 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,4,local_978,&pTVar46->AllocatorInstance,&(pAVar29->Tags).ArrayNum,
                                &(pAVar29->Tags).ArrayMax);
            memcpy((pTVar46->AllocatorInstance).Data + (longlong)iVar18 * 8,local_980.DebugPtr,
                   lVar38 << 3);
          }
          PCGHelpers::AttachToParent
                    (local_a68,local_a28,local_a60->AttachOptions,(FPCGContext *)local_a90,
                     &local_990);
          iVar18 = local_970.ArrayNum;
          pUVar42 = local_a40;
          uVar37 = (ulonglong)local_970.ArrayNum;
          pFVar3 = local_970.AllocatorInstance.Data + uVar37 * 8;
          FVar48.Data = local_970.AllocatorInstance.Data;
          while( true ) {
            if ((uint)uVar37 != iVar18) {
              local_a87 = 0;
              `TCheckedPointerIterator<UFunction_*_const,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_a87);
            }
            pUVar30 = local_9a8;
            pAVar29 = local_a68;
            if (FVar48.Data == pFVar3) break;
            pUVar31 = *(UFunction **)FVar48.Data;
            bVar15 = UFunction::IsSignatureCompatibleWith(pUVar31,local_8a8);
            if (bVar15) {
              pdVar47 = (double *)0x0;
LAB_149c8dd87:
              (**(code **)(local_a68->_padding_ + 0x260))(local_a68,pUVar31,pdVar47);
            }
            else {
              bVar15 = UFunction::IsSignatureCompatibleWith(pUVar31,local_a10);
              if (bVar15) {
                pFVar35 = FConstPCGPointValueRanges::GetPoint(&local_398,&local_128,uVar45);
                local_138 = (**(code **)(pUVar42->_padding_ + 800))(pUVar42);
                local_208 = (pFVar35->Transform).Rotation.XY.m128d_f64[0];
                dStack_200 = (pFVar35->Transform).Rotation.XY.m128d_f64[1];
                pdVar47 = &local_208;
                local_1f8 = (pFVar35->Transform).Rotation.ZW.m128d_f64[0];
                dStack_1f0 = (pFVar35->Transform).Rotation.ZW.m128d_f64[1];
                local_1e8 = (pFVar35->Transform).Translation.XY.m128d_f64[0];
                dStack_1e0 = (pFVar35->Transform).Translation.XY.m128d_f64[1];
                local_1d8 = (pFVar35->Transform).Translation.ZW.m128d_f64[0];
                dStack_1d0 = (pFVar35->Transform).Translation.ZW.m128d_f64[1];
                local_1c8 = (pFVar35->Transform).Scale3D.XY.m128d_f64[0];
                dStack_1c0 = (pFVar35->Transform).Scale3D.XY.m128d_f64[1];
                local_1b8 = (pFVar35->Transform).Scale3D.ZW.m128d_f64[0];
                dStack_1b0 = (pFVar35->Transform).Scale3D.ZW.m128d_f64[1];
                local_1a8 = *(undefined8 *)&pFVar35->Density;
                dStack_1a0 = (pFVar35->BoundsMin).field0_0x0._s_0.X;
                local_198 = (pFVar35->BoundsMin).field0_0x0._s_0.Y;
                dStack_190 = (pFVar35->BoundsMin).field0_0x0._s_0.Z;
                local_188 = (pFVar35->BoundsMax).field0_0x0._s_0.X;
                dStack_180 = (pFVar35->BoundsMax).field0_0x0._s_0.Y;
                local_178 = (pFVar35->BoundsMax).field0_0x0._s_0.Z;
                lStack_170 = pFVar35->_padding_;
                local_168 = (pFVar35->Color).field0_0x0._s_0.X;
                dStack_160 = (pFVar35->Color).field0_0x0._s_0.Y;
                local_158 = (pFVar35->Color).field0_0x0._s_0.Z;
                dStack_150 = (pFVar35->Color).field0_0x0._s_0.W;
                local_148 = pFVar35->Steepness;
                iStack_144 = pFVar35->Seed;
                uStack_140 = (undefined4)pFVar35->MetadataEntry;
                uStack_13c = *(undefined4 *)((longlong)&pFVar35->MetadataEntry + 4);
                goto LAB_149c8dd87;
              }
            }
            uVar37 = (ulonglong)(uint)local_970.ArrayNum;
            FVar48.Data = FVar48.Data + 8;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a68 != (AActor *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)local_a68);
          }
          local_908.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_920._16_8_ = 0;
          local_920._8_8_ = 0;
          local_908.Data.ArrayNum = 0;
          local_908.Data.ArrayMax = 0;
          local_920._0_8_ = 0;
          local_9b8 = 0;
          FUtf8String::Reset(&local_908,0);
          local_8a0 = pAVar29;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar29 != (AActor *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pAVar29);
          }
          FSoftObjectPtr::operator=((FSoftObjectPtr *)local_920,(FObjectPtr)&local_8a0);
          TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TSoftObjectPtr<AActor>_>
                    ((TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)
                     &pUVar30[2]._padding_,(TSoftObjectPtr<AActor> *)local_920);
          if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_908.Data.AllocatorInstance.Data);
          }
          if (local_9b0 != (UPCGGraphInterface *)0x0) {
            if (((local_a80.Data <= (FScriptContainerElement *)&local_a68) &&
                ((FScriptContainerElement *)&local_a68 <
                 local_a80.Data + (longlong)local_a78._4_4_ * 8)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar18 = (uint)local_a78;
            if ((uint)local_a78 == local_a78._4_4_) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_a80,(int *)((longlong)&local_a78 + 4));
            }
            local_a78 = CONCAT44(local_a78._4_4_,iVar18 + 1);
            *(AActor **)(local_a80.Data + (longlong)iVar18 * 8) = local_a68;
          }
          pFVar21 = local_a20;
          iVar18 = local_398.TransformRange.NumElements;
          bVar15 = bVar16;
          bVar8 = bVar7;
          if ((local_a58 != (UPCGBasePointData *)0x0) &&
             (local_a20 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0)) {
            uVar41 = local_a70 + uVar45;
            uVar19 = 0;
            if ((int)local_a6c < local_878) {
              uVar19 = ~uVar41 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar17)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (uVar41 == (int)uVar41 % iStack_87c) {
              plVar28 = (long64 *)
                        ((longlong)iStack_880 * (longlong)((int)uVar41 % iStack_87c) +
                        CONCAT44(uStack_884,local_888));
            }
            else {
              plVar28 = (long64 *)&uStack_870;
            }
            UPCGMetadata::InitializeOnSet
                      ((UPCGMetadata *)local_a58->_padding_,plVar28,-1,(UPCGMetadata *)0x0,-1,
                       (UPCGMetadata *)0x0);
            local_960._s_0.X = 0.0;
            local_960._s_0.Y = 0.0;
            local_960._s_0.Z = 0.0;
            local_948 = 0;
            FSoftObjectPath::SetPath((FSoftObjectPath *)&local_960._s_0,(UObject *)local_a68);
            FPCGMetadataAttribute<FSoftObjectPath>::SetValue
                      (pFVar21,*plVar28,(FSoftObjectPath *)&local_960._s_0);
            iVar18 = local_398.TransformRange.NumElements;
            if ((void *)local_960._s_0.Z != (void *)0x0) {
              FMemory::Free((void *)local_960._s_0.Z);
              iVar18 = local_398.TransformRange.NumElements;
            }
          }
        }
        pUVar42 = local_a40;
        bVar6 = false;
        bVar17 = false;
        uVar45 = uVar45 + 1;
        local_a6c = local_a6c + 1;
        iVar20 = (**(code **)(local_a40->_padding_ + 0x488))(local_a40);
      } while ((int)uVar45 < iVar20);
      if ((local_a98 == 0) && (1 < (byte)LogPCG._0_1_)) {
        pFVar33 = FText::AsLocalizable_Advanced_LocText
                            (&local_770,L"PCGSpawnActorElement",L"ActorOverridesFailed",
                             L"At least one actor property override failed.");
        FText::ToString(pFVar33);
        if (local_a90 != (FPCGSubgraphContext *)0x0) {
          bVar6 = true;
          FPCGContext::GetTaskName((FPCGContext *)local_a90,&local_780);
          if (local_a90 != (FPCGSubgraphContext *)0x0) {
            bVar6 = true;
            bVar17 = true;
            FPCGContext::GetExecutionSourceName((FPCGContext *)local_a90,&local_790);
          }
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((bVar17) && (local_790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_790.Data.AllocatorInstance.Data);
        }
        if ((bVar6) && (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_780.Data.AllocatorInstance.Data);
        }
        pUVar42 = local_a40;
        if (local_770.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_770.TextData.Reference + 0x10))();
          pUVar42 = local_a40;
        }
      }
    }
    bVar7 = false;
    bVar16 = false;
    UPCGComponent::AddToManagedResources(local_a38,local_9a8);
    if (5 < (byte)LogPCG._0_1_) {
      iVar18 = (**(code **)(pUVar42->_padding_ + 0x488))(pUVar42);
      pFVar33 = FText::AsLocalizable_Advanced_LocText
                          (&local_730,L"PCGSpawnActorElement",L"GenerationInfo",
                           L"Generated {0} actors");
      pFVar34 = FTextFormat::FTextFormat(&local_670,pFVar33,Default);
      pFVar33 = FText::Format<int>(&local_740,pFVar34,iVar18);
      FText::ToString(pFVar33);
      if (local_a90 != (FPCGSubgraphContext *)0x0) {
        bVar7 = true;
        FPCGContext::GetTaskName((FPCGContext *)local_a90,&local_750);
        if (local_a90 != (FPCGSubgraphContext *)0x0) {
          bVar7 = true;
          bVar16 = true;
          FPCGContext::GetExecutionSourceName((FPCGContext *)local_a90,&local_760);
        }
      }
      UE::Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)&PTR_u___s____s____s_151fa5e00,(FLogCategoryBase *)&LogPCG
                );
      if ((bVar16) && (local_760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_760.Data.AllocatorInstance.Data);
      }
      if ((bVar7) && (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_750.Data.AllocatorInstance.Data);
      }
      if (local_740.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_740.TextData.Reference + 0x10))();
      }
      if (local_730.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_730.TextData.Reference + 0x10))();
      }
    }
    if (local_970.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_970.AllocatorInstance.Data);
    }
    if (local_990.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_990.Data.AllocatorInstance.Data);
    }
    if (local_980.DebugPtr != (USceneComponent *)0x0) {
      FMemory::Free(local_980.DebugPtr);
    }
  }
  else {
    (**(code **)(*local_a18 + 0x2e0))();
    pUVar42 = local_a58;
    if (local_a60->Option == NoMerging) {
      if (local_a58 == (UPCGBasePointData *)0x0) {
        local_7c0 = (ForElementType<FSetElementId>)0x0;
        pFVar27 = &local_7c0;
        uStack_7b8 = 0;
        local_7b0 = 0;
      }
      else {
        pFVar27 = (ForElementType<FSetElementId> *)
                  (**(code **)(local_a58->_padding_ + 0x4f8))(local_a58,local_660,1);
      }
      pUVar13 = local_9b0;
      plVar40 = local_a18;
      pFVar21 = local_a20;
      local_6b8._0_8_ = *pFVar27;
      local_6b8._8_8_ = pFVar27[1];
      local_6a8 = pFVar27[2];
      FStack_6a0 = pFVar27[3];
      iVar18 = (int)local_a18[0x13];
      if (0 < iVar18) {
        do {
          uVar19 = 0;
          if ((int)uVar45 < iVar18) {
            uVar19 = ~uVar45 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)
                    (plVar40[0x12] + (longlong)(int)uVar45 * 0x28);
          if ((pUVar42 != (UPCGBasePointData *)0x0) &&
             (pFVar21 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0)) {
            plVar28 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                                ((TPCGValueRange<__int64,TStridedView<__int64,int>_> *)local_6b8,
                                 local_a70 + uVar45);
            UPCGMetadata::InitializeOnSet
                      ((UPCGMetadata *)pUVar42->_padding_,plVar28,-1,(UPCGMetadata *)0x0,-1,
                       (UPCGMetadata *)0x0);
            FPCGMetadataAttribute<FSoftObjectPath>::SetValue(pFVar21,*plVar28,&this_00->ObjectID);
          }
          if (pUVar13 != (UPCGGraphInterface *)0x0) {
            pAVar29 = (AActor *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
            if (pAVar29 != (AActor *)0x0) {
              pUVar23 = Z_Construct_UClass_AActor_NoRegister();
              iVar18 = (int)pUVar23->_padding_;
              if ((iVar18 <= *(int *)(pAVar29->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pAVar29->_padding_ + 0x30) + (longlong)iVar18 * 8)
                  == &pUVar23->_padding_)) {
                local_a50 = pAVar29;
                if ((local_a80.Data <= (FScriptContainerElement *)&local_a50) &&
                   (((FScriptContainerElement *)&local_a50 <
                     local_a80.Data + (longlong)local_a78._4_4_ * 8 &&
                    (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar16)))) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar18 = (uint)local_a78;
                if ((uint)local_a78 == local_a78._4_4_) {
                  iVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_a80,(int *)((longlong)&local_a78 + 4));
                }
                local_a78 = CONCAT44(local_a78._4_4_,iVar18 + 1);
                *(AActor **)(local_a80.Data + (longlong)iVar18 * 8) = local_a50;
                goto LAB_149c8d62d;
              }
            }
            local_a50 = (AActor *)0x0;
          }
LAB_149c8d62d:
          iVar18 = (int)plVar40[0x13];
          uVar45 = uVar45 + 1;
        } while ((int)uVar45 < iVar18);
      }
    }
  }
  uVar39 = (ulonglong)(int)(uint)local_a78;
  local_a6c = (uint)local_a78;
  pUVar31 = (UFunction *)(local_a80.Data + uVar39 * 8);
  FVar48.Data = local_a80.Data;
  uVar37 = uVar39;
  local_a10 = pUVar31;
  while( true ) {
    pUVar23 = (UClass *)0x0;
    local_a38 = (UPCGComponent *)FVar48.Data;
    if ((int)uVar39 != (int)uVar37) {
      local_a86 = 0;
      `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_a86);
    }
    if ((UFunction *)FVar48.Data == pUVar31) break;
    pAVar29 = *(AActor **)FVar48.Data;
    local_3b0 = (undefined8 *)0x0;
    local_3a4 = 1;
    local_3a8 = 0;
    pUVar26 = Z_Construct_UClass_UPCGComponent_NoRegister();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar26 != (UClass *)0x0) goto LAB_149c8e379;
    }
    else if (pUVar26 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar26);
LAB_149c8e379:
      pUVar36 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (pUVar36 != (UClass *)0x0) {
        iVar18 = (int)pUVar36->_padding_;
        if (((int)pUVar26->_padding_ < iVar18) ||
           ((longlong *)*(undefined1 **)(pUVar26->_padding_ + (longlong)iVar18 * 8) !=
            &pUVar36->_padding_)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        if (bVar16) {
          pUVar23 = pUVar26;
        }
      }
    }
    pUVar36 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar23 == pUVar36) {
      local_898 = pUVar26;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar26 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar26);
      }
      AActor::
      ForEachComponent_Internal<UPCGComponent,1,0,_AActor::GetComponents<UPCGComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                (pAVar29,(TSubclassOf<UActorComponent>)&local_898,
                 (TArray<UPCGComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *
                 )&local_3b8);
    }
    else {
      local_890 = pUVar26;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar26 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar26);
      }
      AActor::
      ForEachComponent_Internal<UPCGComponent,0,0,_AActor::GetComponents<UPCGComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                (pAVar29,(TSubclassOf<UActorComponent>)&local_890,
                 (TArray<UPCGComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *
                 )&local_3b8);
    }
    iVar18 = local_3a8;
    this_01 = local_9a0;
    pUVar12 = local_a60;
    EVar11 = local_a85;
    puVar32 = &local_3b8;
    if (local_3b0 != (undefined8 *)0x0) {
      puVar32 = local_3b0;
    }
    puVar2 = puVar32 + local_3a8;
    while( true ) {
      if (local_3a8 != iVar18) {
        local_a84 = 0;
        `TCheckedPointerIterator<UPCGComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_a84);
      }
      pUVar31 = local_a10;
      pUVar24 = local_a38;
      if (puVar32 == puVar2) break;
      pUVar24 = (UPCGComponent *)*puVar32;
      if (pUVar12->Option == NoMerging) {
        if (local_a83 != '\0') {
          pUVar24->bParseActorComponents = false;
        }
        if ((EVar11 != ForceGenerate) &&
           ((!bVar14 || (pUVar24->GenerationTrigger != GenerateOnLoad)))) goto LAB_149c8e58e;
        if (this_01 != (UPCGSubsystem *)0x0) {
          UPCGSubsystem::RegisterOrUpdatePCGComponent(this_01,pUVar24,true);
        }
        local_a30 = UPCGComponent::GenerateLocalGetTaskId(pUVar24,true);
        pFVar10 = local_a90;
        if (local_a30 == 0xffffffffffffffff) goto LAB_149c8e58e;
        pTVar43 = &local_a90->SubgraphTaskIds;
        pFVar3 = (pTVar43->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_a30) &&
            ((FScriptContainerElement *)&local_a30 <
             pFVar3 + (longlong)(local_a90->SubgraphTaskIds).ArrayMax * 8)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar20 = (pFVar10->SubgraphTaskIds).ArrayNum;
        piVar1 = &(pFVar10->SubgraphTaskIds).ArrayMax;
        if (iVar20 == *piVar1) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar43->AllocatorInstance,piVar1);
        }
        (pFVar10->SubgraphTaskIds).ArrayNum = iVar20 + 1;
        puVar32 = puVar32 + 1;
        *(ulong64 *)((pTVar43->AllocatorInstance).Data + (longlong)iVar20 * 8) = local_a30;
      }
      else {
        pUVar24->bActivated = false;
LAB_149c8e58e:
        puVar32 = puVar32 + 1;
      }
    }
    uVar37 = (ulonglong)local_a6c;
    if (local_3b0 != (undefined8 *)0x0) {
      FMemory::Free(local_3b0);
    }
    uVar39 = local_a78 & 0xffffffff;
    FVar48.Data = (FScriptContainerElement *)((longlong)pUVar24 + 8);
  }
  if (local_a80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a80.Data);
  }
  if (local_5a8._176_8_ != 0) {
    plVar40 = (longlong *)(local_5a8 + 0xc0);
    if (local_4d0 != (longlong *)0x0) {
      plVar40 = local_4d0;
    }
    (**(code **)(*plVar40 + 0x10))();
  }
  if (local_618._64_8_ != 0) {
    plVar40 = (longlong *)(local_618 + 0x50);
    if ((longlong *)local_618._104_8_ != (longlong *)0x0) {
      plVar40 = (longlong *)local_618._104_8_;
    }
    (**(code **)(*plVar40 + 0x10))();
  }
  DestructItems<FPCGObjectSingleOverride,int>
            ((FPCGObjectSingleOverride *)local_8d0.Data,(int)local_8c8);
  if ((FPCGObjectSingleOverride *)local_8d0.Data != (FPCGObjectSingleOverride *)0x0) {
    FMemory::Free(local_8d0.Data);
  }
LAB_149c8e645:
  if (bVar50) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SpawnAndPrepareSubgraphs @ 149c8e680

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
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGSpawnActorElement::SpawnAndPrepareSubgraphs
          (FPCGSpawnActorElement *this,FPCGSubgraphContext *param_1,UPCGSpawnActorSettings *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  TConsoleVariableData<bool> *pTVar22;
  FPCGSubgraphContext *pFVar23;
  UPCGSpawnActorSettings *pUVar24;
  UPCGSpawnActorSettings *pUVar25;
  FObjectPtr_u_0 this_00;
  bool bVar26;
  undefined1 uVar27;
  bool bVar28;
  bool bVar29;
  int iVar30;
  UClass *pUVar31;
  UClass *pUVar32;
  FTextFormat *pFVar33;
  UPCGComponent *this_01;
  UClass *pUVar34;
  FText *pFVar35;
  UClass *pUVar36;
  UObject *pUVar37;
  AActor *pAVar38;
  FString *pFVar39;
  UPCGBasePointData *pUVar40;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar41;
  longlong lVar42;
  UPCGGraphInterface *pUVar43;
  FPCGStack *pFVar44;
  UPCGGraph *pUVar45;
  AActor *pAVar46;
  AActor *pAVar47;
  ulonglong uVar48;
  TRefCountPtr<ITextData> TVar49;
  char cVar50;
  AActor *pAVar51;
  longlong *plVar52;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar53;
  FPCGDataPtrWrapper *this_02;
  IPCGElement *pIVar54;
  ForAnyElementType FVar55;
  char cVar56;
  char cVar57;
  IPCGElement *pIVar58;
  FObjectPtr_u_0 *pFVar59;
  bool bVar60;
  undefined1 auStackY_778 [32];
  FPCGSubgraphContext *local_720;
  char local_718;
  undefined1 local_717;
  char local_716;
  UPCGSpawnActorSettings *local_710;
  undefined1 local_708;
  undefined1 local_707;
  undefined1 local_706 [2];
  uint local_704;
  ulong64 local_700;
  longlong *local_6f8;
  undefined8 local_6f0;
  int local_6e8;
  int local_6e4;
  uint local_6e0;
  FObjectPtr_u_0 local_6d8;
  AActor *local_6d0;
  FObjectPtr_u_0 *local_6c8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_6c0;
  FPCGDataCollection local_6b0;
  TBitArray<FDefaultBitArrayAllocator> *local_680;
  FName local_678;
  FPCGSpawnActorElement *local_670;
  FObjectPtr_u_0 *local_668;
  FText local_660;
  FPCGStack local_650;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_638;
  longlong *local_618;
  FObjectPtr_u_0 *local_610;
  undefined1 local_608 [4];
  FName local_604;
  AActor *local_5f8;
  UObject *local_5f0;
  UObject *local_5e8;
  UClass *local_5e0;
  longlong *local_5d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5d0;
  undefined8 uStack_5b0;
  FPCGStack local_5a8;
  FScriptContainerElement *local_588;
  int iStack_580;
  undefined4 uStack_57c;
  FText local_578;
  longlong **local_568;
  FPCGSubgraphContext **local_560;
  FPCGScheduleGraphParams local_558;
  code *local_508;
  longlong ***local_500;
  FPCGSpawnActorElement *local_4f8;
  undefined1 local_4f0;
  FPCGSubgraphContext **local_4e8;
  AActor **local_4e0;
  UPCGSpawnActorSettings **local_4d8;
  longlong *local_4d0;
  UPCGSpawnActorSettings *local_4c8;
  UClass *local_4c0;
  undefined1 local_4b8 [40];
  int local_490;
  undefined4 uStack_48c;
  FPCGStack local_488;
  FText local_470;
  FString local_460;
  FString local_450;
  FText local_440;
  FString local_430;
  FString local_420;
  FText local_410;
  FString local_400;
  FString local_3f0;
  FText local_3e0;
  TArrayView<unsigned___int64_const_,int> local_3c8;
  FString local_3b8;
  FString local_3a8;
  FText local_398;
  FString local_388;
  FText local_378;
  FString local_368;
  FString local_358;
  FText local_348;
  FText local_338;
  FText local_328;
  FText local_318;
  FString local_308;
  FString local_2f8;
  FPCGInitializeFromDataParams local_2e8;
  longlong local_2a0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_298;
  uint local_290;
  int iStack_28c;
  int iStack_288;
  undefined4 uStack_284;
  FTextFormat local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [32];
  void *local_238;
  undefined4 local_230;
  uint local_22c;
  undefined4 local_228;
  undefined4 local_224;
  ForElementType<FSetElementId> local_218;
  int local_210;
  FObjectPtr_u_0 local_208;
  bool local_200;
  bool local_1ff;
  FWeakObjectPtr local_1fc;
  int local_1f4;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [32];
  void *local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  ForElementType<FSetElementId> local_198;
  int local_190;
  FObjectPtr_u_0 local_188;
  bool local_180;
  bool local_17f;
  FWeakObjectPtr local_17c;
  int local_174;
  undefined1 local_168 [24];
  undefined8 uStack_150;
  undefined8 local_148;
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  int local_134;
  undefined8 local_130;
  void *local_128;
  ulonglong local_120;
  undefined8 *local_118;
  undefined8 *puStack_110;
  FName local_108;
  FPCGSubgraphContext *local_100;
  FPCGDataPtrWrapper local_f8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_e8;
  FObjectPtr_u_0 local_98;
  undefined1 local_90;
  undefined1 local_8f;
  FWeakObjectPtr local_8c;
  int local_84;
  TVector<double>_u_0 local_78;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_778;
  pUVar36 = (UClass *)0x0;
  cVar56 = '\0';
  bVar21 = false;
  bVar29 = false;
  bVar17 = false;
  bVar16 = false;
  bVar14 = false;
  bVar12 = false;
  bVar10 = false;
  bVar7 = false;
  bVar26 = false;
  bVar60 = CpuChannel->Enabled < 0;
  local_720 = param_1;
  local_710 = param_2;
  local_670 = this;
  if (bVar60) {
    local_716 = '\0';
  }
  else {
    local_716 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId463,"FPCSpawnActorElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnActor.cpp"
               ,0x1cf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId463);
  }
  pUVar24 = local_710;
  cVar50 = !bVar60;
  if (local_710->bSpawnByAttribute == false) {
    pUVar34 = (local_710->TemplateActorClass).Class.field0_0x0.DebugPtr;
    if ((pUVar34 != (UClass *)0x0) &&
       (pUVar31 = Z_Construct_UClass_AActor_NoRegister(), pUVar25 = local_710,
       pUVar31 != (UClass *)0x0)) {
      iVar30 = (int)pUVar31->_padding_;
      if (((int)pUVar34->_padding_ < iVar30) ||
         ((longlong *)*(undefined1 **)(pUVar34->_padding_ + (longlong)iVar30 * 8) !=
          &pUVar31->_padding_)) {
        bVar60 = false;
      }
      else {
        bVar60 = true;
      }
      if ((bVar60) && ((pUVar24->TemplateActorClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
        pUVar34 = (local_710->TemplateActorClass).Class.field0_0x0.DebugPtr;
        pUVar31 = pUVar36;
        if ((pUVar34 != (UClass *)0x0) &&
           (pUVar32 = Z_Construct_UClass_AActor_NoRegister(), pUVar32 != (UClass *)0x0)) {
          iVar30 = (int)pUVar32->_padding_;
          if (((int)pUVar34->_padding_ < iVar30) ||
             ((longlong *)*(undefined1 **)(pUVar34->_padding_ + (longlong)iVar30 * 8) !=
              &pUVar32->_padding_)) {
            bVar60 = false;
          }
          else {
            bVar60 = true;
          }
          if (bVar60) {
            pUVar31 = (pUVar25->TemplateActorClass).Class.field0_0x0.DebugPtr;
          }
        }
        if ((pUVar31->ClassFlags & CLASS_Abstract) == CLASS_None) {
          pAVar51 = (local_710->TemplateActor).field0_0x0.DebugPtr;
          if (pAVar51 == (AActor *)0x0) goto LAB_149c8eb44;
          pUVar34 = (local_710->TemplateActorClass).Class.field0_0x0.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar34 != (UClass *)0x0) goto LAB_149c8e81a;
LAB_149c8e848:
            pUVar34 = pUVar36;
          }
          else {
            if (pUVar34 == (UClass *)0x0) goto LAB_149c8e848;
            UE::GC::MarkAsReachable((UObject *)pUVar34);
LAB_149c8e81a:
            pUVar31 = Z_Construct_UClass_AActor_NoRegister();
            if (pUVar31 == (UClass *)0x0) goto LAB_149c8e848;
            iVar30 = (int)pUVar31->_padding_;
            if (((int)pUVar34->_padding_ < iVar30) ||
               ((longlong *)*(undefined1 **)(pUVar34->_padding_ + (longlong)iVar30 * 8) !=
                &pUVar31->_padding_)) {
              bVar60 = false;
            }
            else {
              bVar60 = true;
            }
            if (!bVar60) goto LAB_149c8e848;
          }
          lVar42 = pAVar51->_padding_;
          iVar30 = (int)pUVar34->_padding_;
          if ((iVar30 <= *(int *)(lVar42 + 0x38)) &&
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar42 + 0x30) + (longlong)iVar30 * 8) ==
              &pUVar34->_padding_)) goto LAB_149c8eb44;
          bVar26 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5241515587674309083>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnActor.cpp"
                              ,0x1db,
                              "!Settings->TemplateActor || Settings->TemplateActor->IsA(Settings->TemplateActorClass)"
                             );
          if (bVar26) {
            pcVar6 = (code *)swi(3);
            uVar27 = (*pcVar6)();
            return (bool)uVar27;
          }
          goto LAB_149c90369;
        }
      }
    }
    pUVar24 = local_710;
    pUVar34 = (local_710->TemplateActorClass).Class.field0_0x0.DebugPtr;
    if ((pUVar34 == (UClass *)0x0) ||
       (pUVar31 = Z_Construct_UClass_AActor_NoRegister(), pUVar25 = local_710,
       pUVar31 == (UClass *)0x0)) {
LAB_149c8e9a1:
      local_678.ComparisonIndex.Value = 0;
      local_678.Number = 0;
      pFVar35 = FText::FromName(&local_378,&local_678);
      FText::FText(&local_660,pFVar35);
      if (local_378.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_378.TextData.Reference + 0x10))();
      }
    }
    else {
      iVar30 = (int)pUVar31->_padding_;
      if (((int)pUVar34->_padding_ < iVar30) ||
         ((longlong *)*(undefined1 **)(pUVar34->_padding_ + (longlong)iVar30 * 8) !=
          &pUVar31->_padding_)) {
        bVar26 = false;
      }
      else {
        bVar26 = true;
      }
      if ((!bVar26) || ((pUVar24->TemplateActorClass).Class.field0_0x0.DebugPtr == (UClass *)0x0))
      goto LAB_149c8e9a1;
      pUVar34 = (local_710->TemplateActorClass).Class.field0_0x0.DebugPtr;
      if ((pUVar34 != (UClass *)0x0) &&
         (pUVar31 = Z_Construct_UClass_AActor_NoRegister(), pUVar31 != (UClass *)0x0)) {
        iVar30 = (int)pUVar31->_padding_;
        if (((int)pUVar34->_padding_ < iVar30) ||
           ((longlong *)*(undefined1 **)(pUVar34->_padding_ + (longlong)iVar30 * 8) !=
            &pUVar31->_padding_)) {
          bVar26 = false;
        }
        else {
          bVar26 = true;
        }
        if (bVar26) {
          pUVar36 = (pUVar25->TemplateActorClass).Class.field0_0x0.DebugPtr;
        }
      }
      local_604 = (FName)pUVar36->_padding_;
      pFVar39 = ::FName::ToString(&local_604,&local_388);
      pFVar35 = FText::FromString(&local_398,pFVar39);
      FText::FText(&local_660,pFVar35);
      if (local_398.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_398.TextData.Reference + 0x10))();
      }
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
    }
    bVar26 = false;
    local_318.TextData.Reference = local_660.TextData.Reference;
    if (1 < (byte)LogPCG._0_1_) {
      local_578.TextData.Reference = local_660.TextData.Reference;
      if (local_660.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_660.TextData.Reference + 8))
                  (local_660.TextData.Reference,local_608);
      }
      local_578.Flags = local_660.Flags;
      pFVar35 = FText::AsLocalizable_Advanced_LocText
                          (&local_338,L"PCGSpawnActorElement",L"InvalidTemplateActorClass",
                           L"Invalid template actor class \'{0}\'");
      pFVar33 = FTextFormat::FTextFormat(&local_278,pFVar35,Default);
      pFVar35 = FText::Format<FText>(&local_348,pFVar33,&local_578);
      FText::ToString(pFVar35);
      if (local_720 == (FPCGSubgraphContext *)0x0) {
LAB_149c8eac0:
        bVar7 = false;
      }
      else {
        bVar26 = true;
        FPCGContext::GetTaskName((FPCGContext *)local_720,&local_358);
        if (local_720 == (FPCGSubgraphContext *)0x0) goto LAB_149c8eac0;
        bVar26 = true;
        bVar7 = true;
        FPCGContext::GetExecutionSourceName((FPCGContext *)local_720,&local_368);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar7) && (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_368.Data.AllocatorInstance.Data);
      }
      if ((bVar26) && (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_358.Data.AllocatorInstance.Data);
      }
      if (local_348.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_348.TextData.Reference + 0x10))();
      }
      local_318.TextData.Reference = local_660.TextData.Reference;
      if (local_338.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_338.TextData.Reference + 0x10))();
        local_318.TextData.Reference = local_660.TextData.Reference;
      }
    }
LAB_149c9035e:
    if (local_318.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
    }
  }
  else {
LAB_149c8eb44:
    pFVar23 = local_720;
    if ((local_720->_padding_ != 0) &&
       (((bVar60 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_720->_padding_), bVar60 &&
         ((longlong *)pFVar23->_padding_ != (longlong *)0x0)) &&
        (this_01 = (UPCGComponent *)(**(code **)(*(longlong *)pFVar23->_padding_ + 8))(),
        this_01 != (UPCGComponent *)0x0)))) {
      pUVar34 = Z_Construct_UClass_UPCGComponent_NoRegister();
      pTVar22 = CVarAllowActorReuse.Ref;
      iVar30 = (int)pUVar34->_padding_;
      if ((iVar30 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar30 * 8) ==
          &pUVar34->_padding_)) {
        local_704 = local_704 & 0xffffff00;
        bVar60 = IsInParallelGameThread();
        if (bVar60) {
LAB_149c8ebd9:
          pUVar34 = pUVar36;
        }
        else {
          bVar60 = IsInGameThread();
          pUVar34 = (UClass *)0x1;
          if (bVar60) goto LAB_149c8ebd9;
        }
        pFVar23 = local_720;
        if (pTVar22->ShadowedValue[(longlong)pUVar34] != false) {
          if (*(char *)((longlong)&local_720->_padding_ + 4) == '\0') {
            plVar2 = &local_720->_padding_;
            pcVar6 = *(code **)((longlong)*this + 0x40);
            if ((local_720->_padding_ != 0) &&
               (bVar60 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_720->_padding_), bVar60))
            {
              pUVar36 = (UClass *)pFVar23->_padding_;
            }
            local_4d0 = &local_720->_padding_;
            local_4c8 = local_710;
            local_4c0 = pUVar36;
            if ((local_4d0 == (longlong *)0x0) &&
               (bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InputData",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGElement.h"
                                    ,0x7c,L""), bVar60)) {
              pcVar6 = (code *)swi(3);
              uVar27 = (*pcVar6)();
              return (bool)uVar27;
            }
            (*pcVar6)(local_670,&local_4d0,plVar2);
          }
          if ((*(char *)((longlong)&local_720->_padding_ + 4) != '\0') &&
             (local_710->Option == CollapseActors)) {
            local_568 = &local_6f8;
            local_6f8 = (longlong *)0x0;
            local_560 = &local_720;
            local_6f0 = 0;
            local_500 = &local_568;
            local_508 = UE::Core::Private::Function::
                        TFunctionRefCaller<`FPCGSpawnActorElement::SpawnAndPrepareSubgraphs'::__l62::<lambda_1>,void,UPCGManagedResource_*>
                        ::Call;
            UPCGComponent::ForEachManagedResource
                      (this_01,(TFunctionRef<void___cdecl(UPCGManagedResource_*)> *)&local_508);
            iVar30 = (int)local_6f0;
            plVar2 = local_6f8 + (int)local_6f0;
            plVar52 = local_6f8;
            while( true ) {
              if ((int)local_6f0 != iVar30) {
                local_708 = 0;
                `TCheckedPointerIterator<UPCGManagedISMComponent_*,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_708);
              }
              pFVar23 = local_720;
              if (plVar52 == plVar2) break;
              plVar3 = (longlong *)*plVar52;
              if (((char)plVar3[6] == '\0') && (local_710->bWarnOnIdenticalSpawn != false)) {
                pFVar35 = FText::AsLocalizable_Advanced_LocText
                                    (&local_328,L"PCGSpawnActorElement",L"IdenticalISMCSpawn",
                                     L"Identical ISM Component spawn occurred. It may be beneficial to re-check graph logic for identical spawn conditions (same actor at same location, etc) or repeated nodes."
                                    );
                PCGLog::LogWarningOnGraph(pFVar35,(FPCGContext *)pFVar23);
                if (local_328.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_328.TextData.Reference + 0x10))();
                }
              }
              (**(code **)(*plVar3 + 0x2e0))(plVar3);
              plVar52 = plVar52 + 1;
            }
            local_704 = local_704 & 0xff;
            if ((int)local_6f0 != 0) {
              local_704 = 1;
            }
            if (local_6f8 != (longlong *)0x0) {
              FMemory::Free(local_6f8);
            }
          }
        }
        cVar50 = '\0';
        bVar20 = false;
        bVar19 = false;
        bVar18 = false;
        bVar15 = false;
        bVar13 = false;
        bVar11 = false;
        bVar9 = false;
        bVar8 = false;
        bVar60 = false;
        local_618 = &local_720->_padding_;
        if (((local_710->Option == CollapseActors) ||
            ((UPCGNode *)local_720->_padding_ == (UPCGNode *)0x0)) ||
           (bVar28 = UPCGNode::IsOutputPinConnected
                               ((UPCGNode *)local_720->_padding_,
                                &PCGPinConstants::DefaultOutputLabel), !bVar28)) {
          cVar57 = '\0';
        }
        else {
          cVar57 = '\x01';
        }
        if ((this_01->_padding_ == 0) || (*(char *)(this_01->_padding_ + 0x168) != '\x03')) {
          uVar27 = 0;
        }
        else {
          uVar27 = 1;
        }
        local_718 = cVar57;
        local_717 = uVar27;
        FPCGDataCollection::GetInputsByPin
                  ((FPCGDataCollection *)&local_720->_padding_,&local_6c0,
                   &PCGPinConstants::DefaultInputLabel);
        uVar48 = (ulonglong)local_6c0.ArrayNum;
        local_6e0 = local_6c0.ArrayNum;
        local_610 = (FObjectPtr_u_0 *)(local_6c0.AllocatorInstance.Data + uVar48 * 0x78);
        pAVar51 = (AActor *)0x0;
        FVar55.Data = local_6c0.AllocatorInstance.Data;
        while( true ) {
          pFVar59 = local_610;
          local_6c8 = (FObjectPtr_u_0 *)FVar55.Data;
          if (local_6c0.ArrayNum != (uint)uVar48) {
            local_707 = 0;
            `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_707);
          }
          if ((FObjectPtr_u_0 *)FVar55.Data == pFVar59) break;
          local_6d8 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar55.Data;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c8ee91:
            if ((UPCGSpatialData *)local_6d8.Handle == (UPCGSpatialData *)0x0) goto LAB_149c90054;
            pUVar36 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
            bVar28 = FObjectPtr::IsA((FObjectPtr *)&local_6d8,pUVar36);
            this_00 = local_6d8;
            if ((!bVar28) || ((UPCGSpatialData *)local_6d8.Handle == (UPCGSpatialData *)0x0))
            goto LAB_149c90054;
            pUVar37 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                ((TPersistentObjectPtr<FSoftObjectPath> *)&local_710->RootActor);
            if (pUVar37 == (UObject *)0x0) {
LAB_149c8ef3d:
              local_5f8 = FPCGContext::GetTargetActor
                                    ((FPCGContext *)local_720,(UPCGSpatialData *)0x0);
            }
            else {
              pUVar36 = Z_Construct_UClass_AActor_NoRegister();
              iVar30 = (int)pUVar36->_padding_;
              if ((*(int *)(*(longlong *)&pUVar37->field_0x10 + 0x38) < iVar30) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar37->field_0x10 + 0x30) + (longlong)iVar30 * 8)
                  != &pUVar36->_padding_)) goto LAB_149c8ef3d;
              pAVar38 = (AActor *)
                        TPersistentObjectPtr<FSoftObjectPath>::Get
                                  ((TPersistentObjectPtr<FSoftObjectPath> *)&local_710->RootActor);
              if (pAVar38 == (AActor *)0x0) {
LAB_149c8ef38:
                local_5f8 = pAVar51;
              }
              else {
                pUVar36 = Z_Construct_UClass_AActor_NoRegister();
                iVar30 = (int)pUVar36->_padding_;
                if ((*(int *)(pAVar38->_padding_ + 0x38) < iVar30) ||
                   (local_5f8 = pAVar38,
                   (longlong *)
                   *(undefined1 **)(*(longlong *)(pAVar38->_padding_ + 0x30) + (longlong)iVar30 * 8)
                   != &pUVar36->_padding_)) goto LAB_149c8ef38;
              }
            }
            if (local_5f8 == (AActor *)0x0) {
              if ((byte)LogPCG._0_1_ < 2) goto LAB_149c90177;
              pFVar35 = FText::AsLocalizable_Advanced_LocText
                                  (&local_470,L"PCGSpawnActorElement",L"InvalidTargetActor",
                                   L"Invalid target actor. Ensure TargetActor member is initialized when creating SpatialData."
                                  );
              FText::ToString(pFVar35);
              if (local_720 != (FPCGSubgraphContext *)0x0) {
                bVar7 = true;
                FPCGContext::GetTaskName((FPCGContext *)local_720,&local_2f8);
                bVar26 = bVar60;
                bVar8 = bVar7;
                bVar10 = bVar9;
                bVar12 = bVar11;
                bVar14 = bVar13;
                bVar16 = bVar15;
                bVar17 = bVar18;
                bVar29 = bVar19;
                bVar21 = bVar20;
                cVar56 = cVar50;
                if (local_720 != (FPCGSubgraphContext *)0x0) {
                  bVar7 = true;
                  bVar26 = true;
                  bVar8 = true;
                  bVar60 = true;
                  pFVar39 = FPCGContext::GetExecutionSourceName((FPCGContext *)local_720,&local_308)
                  ;
                  if ((pFVar39->Data).ArrayNum != 0) {
                    bVar60 = bVar26;
                    bVar8 = bVar7;
                  }
                }
              }
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (bVar60) {
                bVar26 = false;
                bVar60 = false;
                bVar7 = bVar8;
                bVar10 = bVar9;
                bVar12 = bVar11;
                bVar14 = bVar13;
                bVar16 = bVar15;
                bVar17 = bVar18;
                bVar29 = bVar19;
                bVar21 = bVar20;
                cVar56 = cVar50;
                if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_308.Data.AllocatorInstance.Data);
                }
              }
              TVar49.Reference = local_470.TextData.Reference;
              if (bVar8) {
                bVar8 = false;
                bVar26 = bVar60;
                bVar7 = false;
                bVar10 = bVar9;
                bVar12 = bVar11;
                bVar14 = bVar13;
                bVar16 = bVar15;
                bVar17 = bVar18;
                bVar29 = bVar19;
                bVar21 = bVar20;
                cVar56 = cVar50;
                if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
                  TVar49.Reference = local_470.TextData.Reference;
                }
              }
              goto LAB_149c9016c;
            }
            local_48 = 0;
            local_47 = 0;
            local_43 = 0;
            local_41 = 0;
            local_78._s_0.X = 0.0;
            local_78._s_0.Y = 0.0;
            local_78._s_0.Z = 0.0;
            uStack_60 = 0;
            local_58 = 0;
            uStack_50 = 0;
            pUVar40 = UPCGSpatialData::ToBasePointData
                                ((UPCGSpatialData *)this_00.Handle,(FPCGContext *)local_720,
                                 (TBox<double> *)&local_78._s_0);
            if (pUVar40 == (UPCGBasePointData *)0x0) {
              if (1 < (byte)LogPCG._0_1_) {
                pFVar35 = FText::AsLocalizable_Advanced_LocText
                                    (&local_440,L"PCGSpawnActorElement",L"NoPointDataInInput",
                                     L"Unable to get point data from input");
                FText::ToString(pFVar35);
                if (local_720 != (FPCGSubgraphContext *)0x0) {
                  bVar12 = true;
                  FPCGContext::GetTaskName((FPCGContext *)local_720,&local_450);
                  bVar26 = bVar60;
                  bVar7 = bVar8;
                  bVar10 = bVar9;
                  bVar11 = bVar12;
                  bVar14 = bVar13;
                  bVar16 = bVar15;
                  bVar17 = bVar18;
                  bVar29 = bVar19;
                  bVar21 = bVar20;
                  cVar56 = cVar50;
                  if (local_720 != (FPCGSubgraphContext *)0x0) {
                    bVar12 = true;
                    bVar10 = true;
                    bVar11 = true;
                    bVar9 = true;
                    pFVar39 = FPCGContext::GetExecutionSourceName
                                        ((FPCGContext *)local_720,&local_460);
                    if ((pFVar39->Data).ArrayNum != 0) {
                      bVar9 = bVar10;
                      bVar11 = bVar12;
                    }
                  }
                }
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                if (bVar9) {
                  bVar10 = false;
                  bVar9 = false;
                  bVar26 = bVar60;
                  bVar7 = bVar8;
                  bVar12 = bVar11;
                  bVar14 = bVar13;
                  bVar16 = bVar15;
                  bVar17 = bVar18;
                  bVar29 = bVar19;
                  bVar21 = bVar20;
                  cVar56 = cVar50;
                  if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_460.Data.AllocatorInstance.Data);
                  }
                }
                TVar49.Reference = local_440.TextData.Reference;
                if (bVar11) {
                  bVar11 = false;
                  bVar26 = bVar60;
                  bVar7 = bVar8;
                  bVar10 = bVar9;
                  bVar12 = false;
                  bVar14 = bVar13;
                  bVar16 = bVar15;
                  bVar17 = bVar18;
                  bVar29 = bVar19;
                  bVar21 = bVar20;
                  cVar56 = cVar50;
                  if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_450.Data.AllocatorInstance.Data);
                    TVar49.Reference = local_440.TextData.Reference;
                  }
                }
                goto LAB_149c9016c;
              }
            }
            else {
              iVar30 = (**(code **)(pUVar40->_padding_ + 0x488))(pUVar40);
              if (iVar30 == 0) {
                if (5 < (byte)LogPCG._0_1_) {
                  pFVar35 = FText::AsLocalizable_Advanced_LocText
                                      (&local_410,L"PCGSpawnActorElement",L"SkippedNoPoints",
                                       L"Skipped - no points");
                  FText::ToString(pFVar35);
                  if (local_720 != (FPCGSubgraphContext *)0x0) {
                    bVar16 = true;
                    FPCGContext::GetTaskName((FPCGContext *)local_720,&local_420);
                    bVar26 = bVar60;
                    bVar7 = bVar8;
                    bVar10 = bVar9;
                    bVar12 = bVar11;
                    bVar14 = bVar13;
                    bVar15 = bVar16;
                    bVar17 = bVar18;
                    bVar29 = bVar19;
                    bVar21 = bVar20;
                    cVar56 = cVar50;
                    if (local_720 != (FPCGSubgraphContext *)0x0) {
                      bVar16 = true;
                      bVar14 = true;
                      bVar15 = true;
                      bVar13 = true;
                      pFVar39 = FPCGContext::GetExecutionSourceName
                                          ((FPCGContext *)local_720,&local_430);
                      if ((pFVar39->Data).ArrayNum != 0) {
                        bVar13 = bVar14;
                        bVar15 = bVar16;
                      }
                    }
                  }
                  UE::Logging::Private::BasicLog<6>
                            ((FStaticBasicLogRecord *)&PTR_u___s____s____s_151fa59a8,
                             (FLogCategoryBase *)&LogPCG);
                  if (bVar13) {
                    bVar14 = false;
                    bVar13 = false;
                    bVar26 = bVar60;
                    bVar7 = bVar8;
                    bVar10 = bVar9;
                    bVar12 = bVar11;
                    bVar16 = bVar15;
                    bVar17 = bVar18;
                    bVar29 = bVar19;
                    bVar21 = bVar20;
                    cVar56 = cVar50;
                    if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_430.Data.AllocatorInstance.Data);
                    }
                  }
                  TVar49.Reference = local_410.TextData.Reference;
                  if (bVar15) {
                    bVar15 = false;
                    bVar26 = bVar60;
                    bVar7 = bVar8;
                    bVar10 = bVar9;
                    bVar12 = bVar11;
                    bVar14 = bVar13;
                    bVar16 = false;
                    bVar17 = bVar18;
                    bVar29 = bVar19;
                    bVar21 = bVar20;
                    cVar56 = cVar50;
                    if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_420.Data.AllocatorInstance.Data);
                      TVar49.Reference = local_410.TextData.Reference;
                    }
                  }
                  goto LAB_149c9016c;
                }
              }
              else {
                local_4f8 = local_670;
                local_4e8 = &local_720;
                local_4e0 = &local_5f8;
                local_4d8 = &local_710;
                local_6d0 = (AActor *)0x0;
                pAVar38 = pAVar51;
                local_4f0 = uVar27;
                if (cVar57 != '\0') {
                  pAVar38 = (AActor *)FPCGContext::NewPointData_AnyThread((FPCGContext *)local_720);
                  local_6d0 = pAVar38;
                  FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                            (&local_2e8,(UPCGSpatialData *)pUVar40);
                  local_2e8.bInheritSpatialData = false;
                  UPCGSpatialData::InitializeFromDataWithParams
                            ((UPCGSpatialData *)pAVar38,&local_2e8);
                  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                            ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                             local_2e8.MetadataInitializeParams.DomainInitializeParams.
                             AllocatorInstance.Data,
                             local_2e8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
                  if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                      local_2e8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                      Data != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0
                     ) {
                    FMemory::Free(local_2e8.MetadataInitializeParams.DomainInitializeParams.
                                  AllocatorInstance.Data);
                  }
                  if (local_2e8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2e8.MetadataInitializeParams.DomainMapping.AllocatorInstance
                                  .Data);
                  }
                }
                FPCGDataPtrWrapper::FPCGDataPtrWrapper(&local_f8,(FPCGDataPtrWrapper *)FVar55.Data);
                pFVar59 = (FObjectPtr_u_0 *)((longlong)FVar55.Data + 0x10);
                local_e8.Elements._0_8_ = 0;
                local_e8.Elements._8_8_ = 0;
                local_e8.Elements._32_8_ = 0;
                local_e8.Elements._40_4_ = 0;
                local_e8.Elements._44_4_ = 0x80;
                local_e8.Elements._48_4_ = 0xffffffff;
                local_e8.Elements._52_4_ = 0;
                local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
                local_e8.HashSize = 0;
                local_668 = pFVar59;
                TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                          (&local_e8,
                           (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)pFVar59)
                ;
                local_98 = *(FObjectPtr_u_0 *)((longlong)FVar55.Data + 0x60);
                local_90 = *(undefined1 *)((longlong)FVar55.Data + 0x68);
                local_8f = *(bool *)((longlong)FVar55.Data + 0x69);
                local_8c = *(FWeakObjectPtr *)((longlong)FVar55.Data + 0x6c);
                local_84 = *(int *)((longlong)FVar55.Data + 0x74);
                cVar57 = (char)local_704;
                if ((local_710->bSpawnByAttribute == false) ||
                   ((cVar57 != '\0' && (local_718 == '\0')))) {
                  if (cVar57 == '\0') {
                    FPCGDataPtrWrapper::FPCGDataPtrWrapper
                              ((FPCGDataPtrWrapper *)local_1e8,(FPCGDataPtrWrapper *)FVar55.Data);
                    local_1d8._0_8_ = (FScriptContainerElement *)0x0;
                    local_1d8._8_8_ = 0;
                    local_1b8 = (void *)0x0;
                    local_1b0 = 0;
                    local_1ac = 0x80;
                    local_1a8 = 0xffffffff;
                    local_1a4 = 0;
                    local_198 = (ForElementType<FSetElementId>)0x0;
                    local_190 = 0;
                    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                               local_1d8,
                               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                               pFVar59);
                    local_188 = *(FObjectPtr_u_0 *)((longlong)FVar55.Data + 0x60);
                    local_180 = *(bool *)((longlong)FVar55.Data + 0x68);
                    local_17f = *(bool *)((longlong)FVar55.Data + 0x69);
                    local_17c = *(FWeakObjectPtr *)((longlong)FVar55.Data + 0x6c);
                    local_174 = *(int *)((longlong)FVar55.Data + 0x74);
                    pAVar46 = (local_710->TemplateActor).field0_0x0.DebugPtr;
                    local_5e0 = (local_710->TemplateActorClass).Class.field0_0x0.DebugPtr;
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (local_5e0 != (UClass *)0x0)) {
                      UE::GC::MarkAsReachable((UObject *)local_5e0);
                    }
                    `FPCGSpawnActorElement::SpawnAndPrepareSubgraphs'::__l76::<lambda_2>::operator()
                              (&local_4f8,(TSubclassOf<AActor>)&local_5e0,pAVar46,
                               (FPCGTaggedData *)local_1e8,pUVar40,(UPCGBasePointData *)pAVar38);
                    local_190 = 0;
                    if (local_198 != (ForElementType<FSetElementId>)0x0) {
                      FMemory::Free((void *)local_198);
                    }
                    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                       *)local_1d8,0,local_1d8._8_4_);
                    iVar30 = SUB84(local_1d8._8_8_,4);
                    local_1d8._8_8_ = local_1d8._8_8_ & 0xffffffff00000000;
                    if (iVar30 != 0) {
                      UE::Core::Private::
                      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x18,8,0,(ForAnyElementType *)local_1d8,0,(int *)(local_1d8 + 0xc))
                      ;
                    }
                    local_1a8 = 0xffffffff;
                    local_1a4 = 0;
                    local_1b0 = 0;
                    if (0x80 < local_1ac) {
                      local_1ac = 0x80;
                      TBitArray<FDefaultBitArrayAllocator>::Realloc
                                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),0);
                    }
                    if (local_1b8 != (void *)0x0) {
                      FMemory::Free(local_1b8);
                    }
                    if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0
                       ) {
                      FMemory::Free((void *)local_1d8._0_8_);
                    }
                    FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)local_1e8);
                  }
                }
                else {
                  local_108 = local_710->SpawnAttribute;
                  local_100 = local_720;
                  local_168._16_8_ = 0;
                  uStack_150 = 0;
                  local_130 = 0;
                  local_120 = 0;
                  local_168._0_8_ = 0;
                  local_168._8_8_ = 0;
                  local_148 = 0;
                  local_140 = 0;
                  local_13c = 0x80;
                  local_138 = 0xffffffff;
                  local_134 = 0;
                  local_128 = (void *)0x0;
                  local_118 = (undefined8 *)0x0;
                  puStack_110 = (undefined8 *)0x0;
                  local_6e8 = 0;
                  iVar30 = (**(code **)(pUVar40->_padding_ + 0x488))(pUVar40);
                  FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::
                  SelectMultiple((FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>
                                  *)local_168,(FPCGContext *)local_720,(UPCGData *)pUVar40,
                                 &local_6e8,iVar30,(UPCGData *)pAVar38);
                  if (cVar57 == '\0') {
                    local_638.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10);
                    local_638._padding_._0_4_ = 0;
                    local_638._padding_._4_4_ = 1;
                    local_638.UnvisitedBitMask = 0xffffffff;
                    local_638.CurrentBitIndex = 0;
                    local_638.BaseBitIndex = 0;
                    if (local_140 != 0) {
                      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_638);
                    }
                    TStack_5d0._padding_ =
                         CONCAT44(local_638._padding_._4_4_,(undefined4)local_638._padding_);
                    local_5d8 = (longlong *)local_168;
                    TStack_5d0.CurrentBitIndex = local_638.CurrentBitIndex;
                    TStack_5d0.UnvisitedBitMask = local_638.UnvisitedBitMask;
                    TStack_5d0._28_4_ = local_638._28_4_;
                    TStack_5d0.BaseBitIndex = local_638.BaseBitIndex;
                    local_490 = local_168._8_4_ - local_134;
                    local_4b8._16_8_ = local_638.Array;
                    uStack_5b0 = CONCAT44(uStack_48c,local_490);
                    TStack_5d0.Array = local_638.Array;
                    local_4b8._0_8_ = local_5d8;
                    local_4b8._8_8_ = TStack_5d0._padding_;
                    local_4b8._24_8_ = TStack_5d0._16_8_;
                    local_4b8._32_8_ = TStack_5d0._24_8_;
                    pTVar41 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                              TConstSetBitIterator<FDefaultBitArrayAllocator>
                                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)
                                         local_4b8,
                                         (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),
                                         local_140);
                    local_2a0 = pTVar41->_padding_;
                    local_680 = pTVar41->Array;
                    local_290 = pTVar41->UnvisitedBitMask;
                    local_6e4 = pTVar41->CurrentBitIndex;
                    iStack_288 = pTVar41->BaseBitIndex;
                    uStack_284 = *(undefined4 *)&pTVar41->field_0x1c;
                    pTStack_298 = local_680;
                    iStack_28c = local_6e4;
                    while( true ) {
                      plVar2 = local_5d8;
                      iVar30 = local_6e4;
                      if ((int)local_5d8[1] - *(int *)((longlong)local_5d8 + 0x34) !=
                          (int)uStack_5b0) {
                        local_706[0] = 0;
                        `TSparseArray<TSparseSetElement<TTuple<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_706);
                      }
                      lVar42 = (longlong)TStack_5d0.CurrentBitIndex;
                      if (((TStack_5d0.CurrentBitIndex == iVar30) && (TStack_5d0.Array == local_680)
                          ) && (bVar60 = bVar26, bVar8 = bVar7, bVar9 = bVar10, bVar11 = bVar12,
                               bVar13 = bVar14, bVar15 = bVar16, bVar18 = bVar17, bVar19 = bVar29,
                               bVar20 = bVar21, cVar50 = cVar56, plVar2 == (longlong *)local_168))
                      break;
                      lVar4 = *plVar2;
                      FPCGDataPtrWrapper::FPCGDataPtrWrapper
                                ((FPCGDataPtrWrapper *)local_268,(FPCGDataPtrWrapper *)FVar55.Data);
                      local_258._0_8_ = (FScriptContainerElement *)0x0;
                      local_258._8_8_ = 0;
                      local_238 = (void *)0x0;
                      local_230 = 0;
                      local_22c = 0x80;
                      local_228 = 0xffffffff;
                      local_224 = 0;
                      local_218 = (ForElementType<FSetElementId>)0x0;
                      local_210 = 0;
                      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                                 local_258,
                                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                                 pFVar59);
                      local_208 = *(FObjectPtr_u_0 *)((longlong)FVar55.Data + 0x60);
                      local_200 = *(bool *)((longlong)FVar55.Data + 0x68);
                      local_1ff = *(bool *)((longlong)FVar55.Data + 0x69);
                      local_1fc = *(FWeakObjectPtr *)((longlong)FVar55.Data + 0x6c);
                      local_1f4 = *(int *)((longlong)FVar55.Data + 0x74);
                      FPCGDataPtrWrapper::operator=
                                ((FPCGDataPtrWrapper *)local_268,
                                 *(UPCGData **)(lVar4 + 0x18 + lVar42 * 0x28));
                      pAVar46 = *(AActor **)(lVar4 + 0x18 + lVar42 * 0x28);
                      if (pAVar46 == (AActor *)0x0) {
LAB_149c8f747:
                        pAVar46 = pAVar51;
                      }
                      else {
                        pUVar36 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
                        iVar30 = (int)pUVar36->_padding_;
                        if ((*(int *)(pAVar46->_padding_ + 0x38) < iVar30) ||
                           ((longlong *)
                            *(undefined1 **)
                             (*(longlong *)(pAVar46->_padding_ + 0x30) + (longlong)iVar30 * 8) !=
                            &pUVar36->_padding_)) goto LAB_149c8f747;
                      }
                      local_5f0 = *(UObject **)(lVar4 + lVar42 * 0x28);
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (local_5f0 != (UObject *)0x0)) {
                        UE::GC::MarkAsReachable(local_5f0);
                      }
                      `FPCGSpawnActorElement::SpawnAndPrepareSubgraphs'::__l76::<lambda_2>::
                      operator()(&local_4f8,(TSubclassOf<AActor>)&local_5f0,(AActor *)0x0,
                                 (FPCGTaggedData *)local_268,(UPCGBasePointData *)pAVar46,
                                 (UPCGBasePointData *)pAVar38);
                      if (local_710->Option != NoMerging) {
                        local_5e8 = *(UObject **)(lVar4 + lVar42 * 0x28);
                        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                           (local_5e8 != (UObject *)0x0)) {
                          UE::GC::MarkAsReachable(local_5e8);
                        }
                        pUVar43 = UPCGSpawnActorSettings::GetGraphInterfaceFromActorSubclass
                                            ((TSubclassOf<AActor>)&local_5e8);
                        if (pUVar43 != (UPCGGraphInterface *)0x0) {
                          local_6b0.TaggedData.AllocatorInstance.Data =
                               (FScriptContainerElement *)0x0;
                          local_6b0.TaggedData.ArrayNum = 0;
                          local_6b0.TaggedData.ArrayMax = 0;
                          local_6b0.bCancelExecutionOnEmpty = false;
                          local_6b0.bCancelExecution = false;
                          local_6b0.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                          ;
                          local_6b0.DataCrcs.ArrayNum = 0;
                          local_6b0.DataCrcs.ArrayMax = 0;
                          local_6b0.InactiveOutputPinBitmask = 0;
                          iVar30 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x878,(ForAnyElementType *)&local_6b0,
                                              &local_6b0.TaggedData.ArrayMax);
                          local_6b0.TaggedData.ArrayNum = iVar30 + 1;
                          FPCGTaggedData::FPCGTaggedData
                                    ((FPCGTaggedData *)
                                     (local_6b0.TaggedData.AllocatorInstance.Data +
                                     (longlong)iVar30 * 0x78),(FPCGTaggedData *)local_268);
                          FPCGSubgraphContext::AddToReferencedObjects(local_720,&local_6b0);
                          pFVar44 = FPCGStackHandle::GetStack
                                              ((FPCGStackHandle *)&local_720->_padding_);
                          if (pFVar44 == (FPCGStack *)0x0) {
                            bVar29 = UE::Assert::Private::ExecCheckImplInternal
                                               (&bGEnsureHasExecuted<5241515587674309246>,false,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnActor.cpp"
                                                ,0x27e,"Stack");
                            if (bVar29) {
                              pcVar6 = (code *)swi(3);
                              uVar27 = (*pcVar6)();
                              return (bool)uVar27;
                            }
                            pFVar44 = &local_650;
                            bVar29 = true;
                            local_650.GraphExecutionTaskId = 0xffffffffffffffff;
                            local_650.StackFrames.AllocatorInstance.Data =
                                 (FScriptContainerElement *)0x0;
                            local_650.StackFrames.ArrayNum = 0;
                            local_650.StackFrames.ArrayMax = 0;
                          }
                          else {
                            bVar17 = true;
                            pFVar44 = FPCGStack::FPCGStack(&local_488,pFVar44);
                          }
                          FPCGStack::FPCGStack(&local_5a8,pFVar44);
                          if (bVar17) {
                            bVar17 = false;
                            DestructItems<FPCGStackFrame,int>
                                      ((FPCGStackFrame *)
                                       local_488.StackFrames.AllocatorInstance.Data,
                                       local_488.StackFrames.ArrayNum);
                            if ((FPCGStackFrame *)local_488.StackFrames.AllocatorInstance.Data !=
                                (FPCGStackFrame *)0x0) {
                              FMemory::Free(local_488.StackFrames.AllocatorInstance.Data);
                            }
                          }
                          FVar55.Data = local_650.StackFrames.AllocatorInstance.Data;
                          if (bVar29) {
                            bVar29 = false;
                            DestructItems<FPCGStackFrame,int>
                                      ((FPCGStackFrame *)
                                       local_650.StackFrames.AllocatorInstance.Data,
                                       local_650.StackFrames.ArrayNum);
                            if ((FPCGStackFrame *)FVar55.Data != (FPCGStackFrame *)0x0) {
                              FMemory::Free(FVar55.Data);
                            }
                          }
                          pUVar45 = (UPCGGraph *)
                                    (**(code **)(*(longlong *)pUVar43 + 0x2b8))(pUVar43);
                          pAVar38 = ::operator_new(0x48);
                          if (pAVar38 == (AActor *)0x0) {
                            pIVar54 = (IPCGElement *)&DAT_00000010;
                            pAVar38 = pAVar51;
                          }
                          else {
                            *(undefined4 *)&pAVar38->_padding_ = 1;
                            *(undefined4 *)((longlong)&pAVar38->_padding_ + 4) = 1;
                            pAVar38->_padding_ =
                                 (longlong)
                                 &
                                 ___7__TIntrusiveReferenceController_VFPCGInputForwardingElement___00_SharedPointerInternals__6B_
                            ;
                            FPCGInputForwardingElement::FPCGInputForwardingElement
                                      ((FPCGInputForwardingElement *)&pAVar38->_padding_,&local_6b0)
                            ;
                            pIVar54 = (IPCGElement *)&pAVar38->_padding_;
                            if ((pIVar54 == (IPCGElement *)0x0) &&
                               (bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("InObject != nullptr",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x246,L""), bVar60)) {
                              pcVar6 = (code *)swi(3);
                              uVar27 = (*pcVar6)();
                              return (bool)uVar27;
                            }
                            LOCK();
                            *(int *)&pAVar38->_padding_ = (int)pAVar38->_padding_ + 1;
                            UNLOCK();
                          }
                          pAVar46 = ::operator_new(0x18);
                          if (pAVar46 == (AActor *)0x0) {
                            pIVar58 = (IPCGElement *)&DAT_00000010;
                            pAVar46 = pAVar51;
                          }
                          else {
                            *(undefined4 *)&pAVar46->_padding_ = 1;
                            pIVar58 = (IPCGElement *)&pAVar46->_padding_;
                            *(undefined4 *)((longlong)&pAVar46->_padding_ + 4) = 1;
                            pAVar46->_padding_ =
                                 (longlong)
                                 &
                                 ___7__TIntrusiveReferenceController_VFPCGTrivialElement___00_SharedPointerInternals__6B_
                            ;
                            pAVar46->_padding_ = (longlong)&___7FPCGTrivialElement__6B_;
                            if ((pIVar58 == (IPCGElement *)0x0) &&
                               (bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("InObject != nullptr",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x246,L""), bVar60)) {
                              pcVar6 = (code *)swi(3);
                              uVar27 = (*pcVar6)();
                              return (bool)uVar27;
                            }
                            LOCK();
                            *(int *)&pAVar46->_padding_ = (int)pAVar46->_padding_ + 1;
                            UNLOCK();
                          }
                          pFVar23 = local_720;
                          pAVar47 = pAVar51;
                          if ((local_720->_padding_ != 0) &&
                             (bVar60 = FWeakObjectPtr::IsValid
                                                 ((FWeakObjectPtr *)&local_720->_padding_), bVar60))
                          {
                            pAVar47 = (AActor *)pFVar23->_padding_;
                          }
                          if (pAVar46 != (AActor *)0x0) {
                            LOCK();
                            *(int *)&pAVar46->_padding_ = (int)pAVar46->_padding_ + 1;
                            UNLOCK();
                          }
                          if (pAVar38 != (AActor *)0x0) {
                            LOCK();
                            *(int *)&pAVar38->_padding_ = (int)pAVar38->_padding_ + 1;
                            UNLOCK();
                          }
                          local_558.FromStack = &local_5a8;
                          local_558.ExternalDependencies.AllocatorInstance.Data =
                               (FScriptContainerElement *)0x0;
                          local_558.ExternalDependencies.ArrayNum = 0;
                          local_558.ExternalDependencies.ArrayMax = 0;
                          local_558.bAllowHierarchicalGeneration = false;
                          local_558.Graph = pUVar45;
                          local_558.ExecutionSource = (IPCGGraphExecutionSource *)pAVar47;
                          local_558.PreGraphElement.Object = pIVar58;
                          local_558.PreGraphElement.SharedReferenceCount.ReferenceController =
                               (TReferenceControllerBase<1> *)pAVar46;
                          local_558.InputElement.Object = pIVar54;
                          local_558.InputElement.SharedReferenceCount.ReferenceController =
                               (TReferenceControllerBase<1> *)pAVar38;
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)pAVar46);
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)pAVar38);
                          local_700 = FPCGContext::ScheduleGraph
                                                ((FPCGContext *)local_720,&local_558);
                          if (local_558.ExternalDependencies.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_558.ExternalDependencies.AllocatorInstance.Data);
                          }
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline
                                    (local_558.InputElement.SharedReferenceCount.ReferenceController
                                    );
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline
                                    (local_558.PreGraphElement.SharedReferenceCount.
                                     ReferenceController);
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)pAVar46);
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)pAVar38);
                          pFVar23 = local_720;
                          if (local_700 != 0xffffffffffffffff) {
                            pTVar53 = &local_720->SubgraphTaskIds;
                            pFVar5 = (pTVar53->AllocatorInstance).Data;
                            if (((pFVar5 <= (FScriptContainerElement *)&local_700) &&
                                ((FScriptContainerElement *)&local_700 <
                                 pFVar5 + (longlong)(local_720->SubgraphTaskIds).ArrayMax * 8)) &&
                               (bVar60 = ::FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar60)) {
                              pcVar6 = (code *)swi(3);
                              uVar27 = (*pcVar6)();
                              return (bool)uVar27;
                            }
                            iVar30 = (pFVar23->SubgraphTaskIds).ArrayNum;
                            piVar1 = &(pFVar23->SubgraphTaskIds).ArrayMax;
                            if (iVar30 == *piVar1) {
                              iVar30 = UE::Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                 (0x808,&pTVar53->AllocatorInstance,piVar1);
                            }
                            (pFVar23->SubgraphTaskIds).ArrayNum = iVar30 + 1;
                            *(ulong64 *)((pTVar53->AllocatorInstance).Data + (longlong)iVar30 * 8) =
                                 local_700;
                          }
                          DestructItems<FPCGStackFrame,int>
                                    ((FPCGStackFrame *)local_5a8.StackFrames.AllocatorInstance.Data,
                                     local_5a8.StackFrames.ArrayNum);
                          if ((FPCGStackFrame *)local_5a8.StackFrames.AllocatorInstance.Data !=
                              (FPCGStackFrame *)0x0) {
                            FMemory::Free(local_5a8.StackFrames.AllocatorInstance.Data);
                          }
                          if (local_6b0.DataCrcs.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_6b0.DataCrcs.AllocatorInstance.Data);
                          }
                          DestructItems<FPCGTaggedData,int>
                                    ((FPCGTaggedData *)local_6b0.TaggedData.AllocatorInstance.Data,
                                     local_6b0.TaggedData.ArrayNum);
                          pAVar38 = local_6d0;
                          FVar55.Data = (FScriptContainerElement *)local_6c8;
                          pFVar59 = local_668;
                          if ((FPCGTaggedData *)local_6b0.TaggedData.AllocatorInstance.Data !=
                              (FPCGTaggedData *)0x0) {
                            FMemory::Free(local_6b0.TaggedData.AllocatorInstance.Data);
                            pAVar38 = local_6d0;
                            FVar55.Data = (FScriptContainerElement *)local_6c8;
                            pFVar59 = local_668;
                          }
                        }
                      }
                      local_210 = 0;
                      if (local_218 != (ForElementType<FSetElementId>)0x0) {
                        FMemory::Free((void *)local_218);
                      }
                      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                         *)local_258,0,local_258._8_4_);
                      iVar30 = SUB84(local_258._8_8_,4);
                      local_258._8_8_ = local_258._8_8_ & 0xffffffff00000000;
                      if (iVar30 != 0) {
                        UE::Core::Private::
                        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x18,8,0,(ForAnyElementType *)local_258,0,
                                   (int *)(local_258 + 0xc));
                      }
                      local_228 = 0xffffffff;
                      local_224 = 0;
                      local_230 = 0;
                      if (0x80 < local_22c) {
                        local_22c = 0x80;
                        TBitArray<FDefaultBitArrayAllocator>::Realloc
                                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10),0);
                      }
                      if (local_238 != (void *)0x0) {
                        FMemory::Free(local_238);
                      }
                      if ((FScriptContainerElement *)local_258._0_8_ !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free((void *)local_258._0_8_);
                      }
                      FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)local_268);
                      TStack_5d0.UnvisitedBitMask =
                           TStack_5d0.UnvisitedBitMask & ~TStack_5d0._padding_._4_4_;
                      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5d0);
                    }
                  }
                  if (puStack_110 != (undefined8 *)0x0) {
                    (**(code **)*puStack_110)(puStack_110,1);
                  }
                  if (local_118 != (undefined8 *)0x0) {
                    (**(code **)*local_118)(local_118,1);
                  }
                  local_120 = local_120 & 0xffffffff00000000;
                  if (local_128 != (void *)0x0) {
                    FMemory::Free(local_128);
                  }
                  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::
                  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_168);
                }
                if (pAVar38 != (AActor *)0x0) {
                  FPCGDataPtrWrapper::operator=(&local_f8,(UPCGData *)pAVar38);
                }
                plVar2 = local_618;
                if ((((FPCGDataPtrWrapper *)*local_618 <= &local_f8) &&
                    (&local_f8 <
                     (FPCGDataPtrWrapper *)
                     (*local_618 + (longlong)*(int *)((longlong)local_618 + 0xc) * 0x78))) &&
                   (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar28)) {
                  pcVar6 = (code *)swi(3);
                  uVar27 = (*pcVar6)();
                  return (bool)uVar27;
                }
                iVar30 = (int)plVar2[1];
                if (iVar30 == *(int *)((longlong)plVar2 + 0xc)) {
                  iVar30 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x878,(ForAnyElementType *)plVar2,
                                      (int *)((longlong)plVar2 + 0xc));
                }
                *(int *)(plVar2 + 1) = iVar30 + 1;
                this_02 = (FPCGDataPtrWrapper *)((longlong)iVar30 * 0x78 + *plVar2);
                FPCGDataPtrWrapper::FPCGDataPtrWrapper(this_02,&local_f8);
                *(undefined8 *)
                 &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_02 + 1))->
                  Elements = 0;
                this_02[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
                this_02[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                this_02[3].WeakData.WeakPtr.ObjectIndex = 0;
                this_02[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
                *(undefined4 *)&this_02[4].Data.field0_0x0 = 0xffffffff;
                *(undefined4 *)((longlong)&this_02[4].Data.field0_0x0 + 4) = 0;
                this_02[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
                this_02[5].WeakData.WeakPtr.ObjectIndex = 0;
                TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                          ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                           (this_02 + 1),&local_e8);
                *(FObjectPtr_u_0 *)(this_02 + 6) = local_98;
                *(undefined1 *)&this_02[6].WeakData.WeakPtr.ObjectIndex = local_90;
                *(undefined1 *)((longlong)&this_02[6].WeakData.WeakPtr.ObjectIndex + 1) = local_8f;
                *(FWeakObjectPtr *)&this_02[6].WeakData.WeakPtr.ObjectSerialNumber = local_8c;
                *(int *)((longlong)&this_02[7].Data.field0_0x0 + 4) = local_84;
                local_e8.HashSize = 0;
                if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_e8.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_e8.Elements);
                FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_f8);
              }
            }
          }
          else {
            if ((UPCGSpatialData *)local_6d8.Handle != (UPCGSpatialData *)0x0) {
              UE::GC::MarkAsReachable(local_6d8.Handle);
              goto LAB_149c8ee91;
            }
LAB_149c90054:
            if (1 < (byte)LogPCG._0_1_) {
              pFVar35 = FText::AsLocalizable_Advanced_LocText
                                  (&local_3e0,L"PCGSpawnActorElement",L"InvalidInputData",
                                   L"Invalid input data");
              FText::ToString(pFVar35);
              if (local_720 != (FPCGSubgraphContext *)0x0) {
                cVar56 = -0x80;
                FPCGContext::GetTaskName((FPCGContext *)local_720,&local_3f0);
                bVar26 = bVar60;
                bVar7 = bVar8;
                bVar10 = bVar9;
                bVar12 = bVar11;
                bVar14 = bVar13;
                bVar16 = bVar15;
                bVar17 = bVar18;
                bVar29 = bVar19;
                bVar21 = bVar20;
                cVar50 = cVar56;
                if (local_720 != (FPCGSubgraphContext *)0x0) {
                  cVar56 = -0x80;
                  bVar21 = true;
                  bVar20 = true;
                  pFVar39 = FPCGContext::GetExecutionSourceName((FPCGContext *)local_720,&local_400)
                  ;
                  cVar50 = cVar56;
                  if ((pFVar39->Data).ArrayNum != 0) {
                    bVar20 = bVar21;
                  }
                }
              }
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (bVar20) {
                bVar21 = false;
                bVar20 = false;
                bVar26 = bVar60;
                bVar7 = bVar8;
                bVar10 = bVar9;
                bVar12 = bVar11;
                bVar14 = bVar13;
                bVar16 = bVar15;
                bVar17 = bVar18;
                bVar29 = bVar19;
                cVar56 = cVar50;
                if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_400.Data.AllocatorInstance.Data);
                }
              }
              TVar49.Reference = local_3e0.TextData.Reference;
              if ((cVar50 < '\0') &&
                 (cVar56 = '\0', bVar26 = bVar60, bVar7 = bVar8, bVar10 = bVar9, bVar12 = bVar11,
                 bVar14 = bVar13, bVar16 = bVar15, bVar17 = bVar18, bVar29 = bVar19, bVar21 = bVar20
                 , cVar50 = cVar56,
                 local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
                TVar49.Reference = local_3e0.TextData.Reference;
              }
LAB_149c9016c:
              if (TVar49.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*TVar49.Reference + 0x10))();
              }
            }
          }
LAB_149c90177:
          FVar55.Data = FVar55.Data + 0x78;
          uVar48 = (ulonglong)local_6e0;
          cVar57 = local_718;
          uVar27 = local_717;
        }
        if ((local_720->SubgraphTaskIds).ArrayNum == 0) {
          bVar26 = true;
        }
        else {
          local_720->bScheduledSubgraph = true;
          *(undefined1 *)&local_720->_padding_ = 1;
          local_588 = (local_720->SubgraphTaskIds).AllocatorInstance.Data;
          plVar2 = &local_720->_padding_;
          iVar30 = (local_720->SubgraphTaskIds).ArrayNum;
          if ((iVar30 < 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar26)) {
            pcVar6 = (code *)swi(3);
            uVar27 = (*pcVar6)();
            return (bool)uVar27;
          }
          local_3c8._12_4_ = uStack_57c;
          local_3c8.ArrayNum = iVar30;
          local_3c8.DataPtr = (ulong64 *)local_588;
          iStack_580 = iVar30;
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Append
                    ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                      *)plVar2,&local_3c8);
          bVar26 = false;
        }
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_6c0.AllocatorInstance.Data,local_6c0.ArrayNum);
        cVar50 = local_716;
        if ((FPCGTaggedData *)local_6c0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_6c0.AllocatorInstance.Data);
        }
        goto LAB_149c9036c;
      }
    }
    if (1 < (byte)LogPCG._0_1_) {
      pFVar35 = FText::AsLocalizable_Advanced_LocText
                          (&local_318,L"PCGSpawnActorElement",L"InvalidSourceComponent",
                           L"Invalid SourceComponent.");
      FText::ToString(pFVar35);
      if (local_720 != (FPCGSubgraphContext *)0x0) {
        pUVar36 = (UClass *)0x20;
        FPCGContext::GetTaskName((FPCGContext *)local_720,&local_3a8);
        if (local_720 != (FPCGSubgraphContext *)0x0) {
          pUVar36 = (UClass *)0x60;
          FPCGContext::GetExecutionSourceName((FPCGContext *)local_720,&local_3b8);
        }
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pUVar36 & 0x40) != 0) &&
         (pUVar36 = (UClass *)(ulonglong)((uint)pUVar36 & 0xffffffbf),
         local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pUVar36 & 0x20) != 0) &&
         (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
      }
      goto LAB_149c9035e;
    }
  }
LAB_149c90369:
  bVar26 = true;
LAB_149c9036c:
  if (cVar50 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar26;
}

// SupportsBasePointDataInputs @ 149c928d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGSpawnActorElement::SupportsBasePointDataInputs(FPCGSpawnActorElement *this,FPCGContext *param_1)

{
  return true;
}

