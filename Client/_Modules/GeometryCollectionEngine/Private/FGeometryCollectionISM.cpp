// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 3

// AddInstanceGroup @ 1463a9540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FGeometryCollectionISM::AddInstanceGroup
          (FGeometryCollectionISM *this,int param_1,TArrayView<float_const_,int> *param_2)

{
  TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  undefined4 uVar4;
  UInstancedStaticMeshComponent *pUVar5;
  float *pfVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStackY_178 [32];
  FPrimitiveInstanceId local_130 [2];
  uint local_128;
  TArrayView<float_const_,int> *local_120;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_118;
  longlong local_108;
  FGeometryCollectionISM *local_100;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> local_e8;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_d8;
  TArrayView<FPrimitiveInstanceId_const_,int> local_c8;
  TArrayView<float_const_,int> local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_120 = param_2;
  local_100 = this;
  local_128 = FInstanceGroups::AddGroup(&this->InstanceGroups,param_1);
  lVar15 = 0;
  lVar14 = (longlong)(int)local_128;
  uVar13 = 0;
  if ((int)local_128 < (this->InstanceGroups).GroupRanges.ArrayNum) {
    uVar13 = ~local_128 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  pTVar1 = &this->InstanceIds;
  iVar9 = (this->InstanceIds).ArrayNum;
  piVar3 = &(this->InstanceIds).ArrayNum;
  uVar13 = (this->InstanceGroups).TotalInstanceCount;
  local_f8 = (this->InstanceGroups).GroupRanges.AllocatorInstance.Data + lVar14 * 8;
  if (iVar9 < (int)uVar13) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uVar13 - iVar9,&pTVar1->AllocatorInstance,piVar3,
                        &(this->InstanceIds).ArrayMax);
    DefaultConstructItems<FPrimitiveInstanceId,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 4,uVar13 - iVar9);
  }
  else {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if ((int)uVar13 < iVar9) {
      uVar12 = iVar9 - uVar13;
      if (((int)(uVar12 | uVar13) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
      if (uVar12 != 0) {
        pFVar2 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar13 * 4;
        iVar9 = (*piVar3 - uVar13) - uVar12;
        if (iVar9 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)(int)uVar12 * 4,(longlong)iVar9 << 2);
        }
        *piVar3 = *piVar3 - uVar12;
      }
    }
  }
  local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
  local_a8.Scale3D.XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
  local_a8.Scale3D.ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
  local_a8.Scale3D.ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Init
            (&local_118,&local_a8,param_1);
  pUVar5 = (this->ISMComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar5->_padding_ + 0xbe8))(pUVar5,param_1);
  local_d8.ArrayNum = local_118.ArrayNum;
  pUVar5 = (this->ISMComponent).field0_0x0.DebugPtr;
  local_d8.DataPtr = (TTransform<double> *)local_118.AllocatorInstance.Data;
  if ((local_118.ArrayNum < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  UInstancedStaticMeshComponent::AddInstancesById(pUVar5,&local_e8,&local_d8,true,true);
  pFVar2 = local_f8;
  uVar13 = 0;
  local_108 = (longlong)param_1;
  if (0 < param_1) {
    do {
      uVar12 = 0;
      if ((int)uVar13 < local_e8.ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
      uVar11 = *(int *)pFVar2 + uVar13;
      uVar4 = *(undefined4 *)(local_e8.AllocatorInstance.Data + lVar15 * 4);
      uVar12 = 0;
      if ((int)uVar11 < *piVar3) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 1;
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar11 * 4) = uVar4;
      this = local_100;
    } while (lVar15 < local_108);
  }
  lVar14 = local_108;
  if (local_120->ArrayNum != 0) {
    iVar9 = ((this->ISMComponent).field0_0x0.DebugPtr)->NumCustomDataFloats;
    if (param_1 * iVar9 == local_120->ArrayNum) {
      uVar13 = 0;
      if (0 < local_108) {
        lVar15 = 0;
        uStack_ec = local_b8._12_4_;
        iVar10 = 0;
        iStack_f0 = iVar9;
        do {
          pUVar5 = (this->ISMComponent).field0_0x0.DebugPtr;
          if ((iVar10 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x15b,L"Invalid index (%lld)"), bVar8)) {
            pcVar7 = (code *)swi(3);
            iVar9 = (*pcVar7)();
            return iVar9;
          }
          if ((iVar9 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x15c,L"Invalid count (%lld)"), bVar8)) {
            pcVar7 = (code *)swi(3);
            iVar9 = (*pcVar7)();
            return iVar9;
          }
          if ((local_120->ArrayNum < iVar10 + iVar9) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index + InNum <= ArrayNum",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x15d,
                                 L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            iVar9 = (*pcVar7)();
            return iVar9;
          }
          pfVar6 = local_120->DataPtr;
          if ((iVar9 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            iVar9 = (*pcVar7)();
            return iVar9;
          }
          uVar12 = 0;
          if ((int)uVar13 < local_e8.ArrayNum) {
            uVar12 = ~uVar13 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            iVar9 = (*pcVar7)();
            return iVar9;
          }
          local_b8._12_4_ = uStack_ec;
          local_b8.ArrayNum = iStack_f0;
          local_c8.ArrayNum = 1;
          local_130[0].Id = *(int *)(local_e8.AllocatorInstance.Data + lVar15 * 4);
          local_c8.DataPtr = local_130;
          local_f8 = (FScriptContainerElement *)(pfVar6 + iVar10);
          local_b8.DataPtr = pfVar6 + iVar10;
          UInstancedStaticMeshComponent::SetCustomDataById(pUVar5,&local_c8,&local_b8);
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 1;
          this = local_100;
          iVar10 = iVar10 + iVar9;
        } while (lVar15 < lVar14);
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6430729192270200578>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionISMPoolComponent.cpp"
                         ,0xfe,"NumCustomDataFloats * InstanceCount == CustomDataFloats.Num()");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return local_128;
}

// CreateISM @ 1463af0e0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FGeometryCollectionISM::CreateISM(FGeometryCollectionISM *this,USceneComponent *param_1)

{
  USceneComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UInstancedStaticMeshComponent *pUVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((param_1 == (USceneComponent *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOwningComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionISMPoolComponent.cpp"
                         ,0x6d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_b8 = 0;
  pUVar1 = *(USceneComponent **)(param_1->_padding_ + 0x1b8);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_DuplicateTransient|RF_Transient;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = param_1;
  pUVar5 = (UInstancedStaticMeshComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UInstancedStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->ISMComponent).field0_0x0.DebugPtr = pUVar5;
  pUVar5->bSupportRemoveAtSwap = '\x01';
  UActorComponent::SetCanEverAffectNavigation
            ((UActorComponent *)(this->ISMComponent).field0_0x0.DebugPtr,false);
  pUVar5 = (this->ISMComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar5->_padding_ + 0x780))(pUVar5,0);
  local_b0 = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)(this->ISMComponent).field0_0x0.DebugPtr,pUVar1,(FName)0x0);
  UActorComponent::RegisterComponent((UActorComponent *)(this->ISMComponent).field0_0x0.DebugPtr);
  return;
}

// InitISM @ 1463ba1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall
FGeometryCollectionISM::InitISM
          (FGeometryCollectionISM *this,FGeometryCollectionStaticMeshInstance *param_1,bool param_2,
          bool param_3)

{
  TArray<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  byte *pbVar3;
  double dVar4;
  byte bVar5;
  undefined1 uVar6;
  FScriptContainerElement *_Src;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  bool bVar26;
  int iVar27;
  UObject *pUVar28;
  UObject *pUVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  TTransform<double> *pTVar33;
  UInstancedStaticMeshComponent *pUVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  byte bVar38;
  longlong lVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar46;
  undefined1 auVar43 [16];
  double dVar47;
  undefined1 auVar44 [16];
  double dVar48;
  undefined1 auVar45 [16];
  undefined4 uVar49;
  undefined1 auStackY_1f8 [32];
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar35 = 0;
  (this->MeshInstance).StaticMesh.WeakPtr = (param_1->StaticMesh).WeakPtr;
  pTVar1 = &(this->MeshInstance).MaterialsOverrides;
  if (pTVar1 != &param_1->MaterialsOverrides) {
    iVar27 = (param_1->MaterialsOverrides).ArrayNum;
    piVar2 = &(this->MeshInstance).MaterialsOverrides.ArrayMax;
    _Src = (param_1->MaterialsOverrides).AllocatorInstance.Data;
    iVar31 = *piVar2;
    (this->MeshInstance).MaterialsOverrides.ArrayNum = iVar27;
    if ((iVar27 == 0) && (iVar31 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar27,iVar31,&pTVar1->AllocatorInstance,iVar27,piVar2);
      if (iVar27 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar27 << 3);
      }
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&(this->MeshInstance).CustomPrimitiveData,&param_1->CustomPrimitiveData);
  (this->MeshInstance).Desc.Flags = (param_1->Desc).Flags;
  (this->MeshInstance).Desc.NumCustomDataFloats = (param_1->Desc).NumCustomDataFloats;
  dVar4 = (param_1->Desc).Position.field0_0x0._s_0.Y;
  (this->MeshInstance).Desc.Position.field0_0x0._s_0.X = (param_1->Desc).Position.field0_0x0._s_0.X;
  (this->MeshInstance).Desc.Position.field0_0x0._s_0.Y = dVar4;
  (this->MeshInstance).Desc.Position.field0_0x0._s_0.Z = (param_1->Desc).Position.field0_0x0._s_0.Z;
  (this->MeshInstance).Desc.StartCullDistance = (param_1->Desc).StartCullDistance;
  (this->MeshInstance).Desc.EndCullDistance = (param_1->Desc).EndCullDistance;
  (this->MeshInstance).Desc.MinLod = (param_1->Desc).MinLod;
  (this->MeshInstance).Desc.GroupHash = (param_1->Desc).GroupHash;
  (this->MeshInstance).Desc.LodScale = (param_1->Desc).LodScale;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->MeshInstance).Desc.Tags,&(param_1->Desc).Tags);
  (this->MeshInstance).Desc.StatsCategory = (param_1->Desc).StatsCategory;
  if (((this->ISMComponent).field0_0x0.DebugPtr == (UInstancedStaticMeshComponent *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("ISMComponent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionISMPoolComponent.cpp"
                          ,0x87,L""), bVar26)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar28 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if ((pUVar28 == (UObject *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("StaticMesh != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionISMPoolComponent.cpp"
                          ,0x8b,L""), bVar26)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar34 = (this->ISMComponent).field0_0x0.DebugPtr;
  *(byte *)((longlong)&pUVar34->_padding_ + 1) =
       param_3 << 5 | *(byte *)((longlong)&pUVar34->_padding_ + 1) & 0xdf;
  USceneComponent::SetAbsolute
            ((USceneComponent *)(this->ISMComponent).field0_0x0.DebugPtr,param_3,param_3,param_3);
  bVar38 = 0;
  UMeshComponent::EmptyOverrideMaterials((UMeshComponent *)(this->ISMComponent).field0_0x0.DebugPtr)
  ;
  uVar36 = uVar35;
  if (0 < (this->MeshInstance).MaterialsOverrides.ArrayNum) {
    do {
      uVar32 = (uint)uVar36;
      uVar30 = 0;
      if ((int)uVar32 < (this->MeshInstance).MaterialsOverrides.ArrayNum) {
        uVar30 = ~uVar32 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pUVar29 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar32 * 8));
      if ((pUVar29 == (UObject *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Material != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionISMPoolComponent.cpp"
                              ,0x9d,L""), bVar26)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pUVar34 = (this->ISMComponent).field0_0x0.DebugPtr;
      (**(code **)(pUVar34->_padding_ + 0x6b8))(pUVar34,uVar36);
      iVar27 = (**(code **)(*(longlong *)pUVar29 + 0x460))(pUVar29);
      bVar38 = bVar38 | iVar27 == 2;
      uVar36 = (ulonglong)(uVar32 + 1);
    } while ((int)(uVar32 + 1) < (this->MeshInstance).MaterialsOverrides.ArrayNum);
  }
  pUVar34 = (this->ISMComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar34->_padding_ + 0xb28))(pUVar34,pUVar28);
  (**(code **)(((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 0x5f8))();
  ((this->ISMComponent).field0_0x0.DebugPtr)->NumCustomDataFloats =
       (this->MeshInstance).Desc.NumCustomDataFloats;
  uVar36 = uVar35;
  uVar37 = uVar35;
  if (0 < (this->MeshInstance).CustomPrimitiveData.ArrayNum) {
    do {
      uVar32 = (uint)uVar37;
      pUVar34 = (this->ISMComponent).field0_0x0.DebugPtr;
      uVar30 = 0;
      if ((int)uVar32 < (this->MeshInstance).CustomPrimitiveData.ArrayNum) {
        uVar30 = ~uVar32 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      UPrimitiveComponent::SetDefaultCustomPrimitiveDataFloat
                ((UPrimitiveComponent *)pUVar34,uVar32,
                 *(float *)((this->MeshInstance).CustomPrimitiveData.AllocatorInstance.Data + uVar36
                           ));
      uVar36 = uVar36 + 4;
      uVar37 = (ulonglong)(uVar32 + 1);
    } while ((int)(uVar32 + 1) < (this->MeshInstance).CustomPrimitiveData.ArrayNum);
  }
  dVar24 = UE::Math::TQuat<double>::Identity.W;
  dVar48 = UE::Math::TQuat<double>::Identity.Z;
  dVar42 = UE::Math::TQuat<double>::Identity.Y;
  dVar14 = UE::Math::TQuat<double>::Identity.X;
  dVar23 = _UNK_150689518;
  dVar22 = ___xmm_00000000000000003ff0000000000000;
  dVar4 = __real_3ff0000000000000;
  uVar49 = SUB84(__real_3ff0000000000000,0);
  uVar36 = (ulonglong)__real_3ff0000000000000 >> 0x20;
  dVar21 = __real_3ff0000000000000;
  if (((this->MeshInstance).Desc.Flags & 8) != 0) {
    dVar21 = __real_bff0000000000000;
  }
  if (param_3) {
    pUVar34 = (this->ISMComponent).field0_0x0.DebugPtr;
    if (pUVar34->_padding_ == 0) {
      pTVar33 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar33 = (TTransform<double> *)(pUVar34->_padding_ + 0x1f0);
    }
    dVar4 = (pTVar33->Scale3D).XY.m128d_f64[0];
    dVar22 = (pTVar33->Scale3D).XY.m128d_f64[1];
    dVar23 = (pTVar33->Scale3D).ZW.m128d_f64[0];
    dVar14 = (pTVar33->Rotation).XY.m128d_f64[0];
    dVar42 = (pTVar33->Rotation).XY.m128d_f64[1];
    dVar48 = (pTVar33->Rotation).ZW.m128d_f64[0];
    dVar24 = (pTVar33->Rotation).ZW.m128d_f64[1];
    dVar40 = (pTVar33->Translation).XY.m128d_f64[0];
    dVar13 = (pTVar33->Translation).XY.m128d_f64[1];
    dVar15 = (pTVar33->Translation).ZW.m128d_f64[0];
    dVar46 = (pTVar33->Translation).ZW.m128d_f64[1];
    *(byte *)&pUVar34->_padding_ = (byte)pUVar34->_padding_ | 1;
    pUVar34->_padding_ = (longlong)dVar14;
    pUVar34->_padding_ = (longlong)dVar42;
    pUVar34->_padding_ = (longlong)dVar48;
    pUVar34->_padding_ = (longlong)dVar24;
    pUVar34->_padding_ = (longlong)dVar40;
    pUVar34->_padding_ = (longlong)dVar13;
    pUVar34->_padding_ = (longlong)dVar15;
    pUVar34->_padding_ = (longlong)dVar46;
    pUVar34->_padding_ = (longlong)(dVar21 * dVar4);
    pUVar34->_padding_ = (longlong)dVar22;
    pUVar34->_padding_ = (longlong)dVar23;
    pUVar34->_padding_ = 0;
    UInstancedStaticMeshComponent::UpdateComponentTransform
              ((this->ISMComponent).field0_0x0.DebugPtr,None,None);
    UActorComponent::MarkRenderTransformDirty
              ((UActorComponent *)(this->ISMComponent).field0_0x0.DebugPtr);
    goto LAB_1463ba7e1;
  }
  pUVar34 = (this->ISMComponent).field0_0x0.DebugPtr;
  dVar40 = (this->MeshInstance).Desc.Position.field0_0x0._s_0.Z;
  dVar13 = (this->MeshInstance).Desc.Position.field0_0x0._s_0.X;
  dVar15 = (this->MeshInstance).Desc.Position.field0_0x0._s_0.Y;
  pTVar33 = USceneComponent::GetRelativeTransform((USceneComponent *)pUVar34,&local_108);
  dVar40 = (pTVar33->Translation).ZW.m128d_f64[0] - dVar40;
  dVar46 = (pTVar33->Translation).ZW.m128d_f64[1] - 0.0;
  dVar13 = (pTVar33->Translation).XY.m128d_f64[0] - dVar13;
  dVar15 = (pTVar33->Translation).XY.m128d_f64[1] - dVar15;
  auVar43._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar40,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar43._8_4_ = SUB84(dVar46,0) & _UNK_15061cc88;
  auVar43._12_4_ = (uint)((ulonglong)dVar46 >> 0x20) & _UNK_15061cc8c;
  lVar39 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar43._8_8_);
  auVar8._8_4_ = (int)lVar39;
  auVar8._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar43._0_8_);
  auVar8._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
  uVar30 = movmskpd((int)pUVar34,auVar8);
  lVar39 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar15,0) & _UNK_15061cc88));
  auVar16._8_4_ = (int)lVar39;
  auVar16._0_8_ =
       -(ulonglong)
        (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar16._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
  iVar27 = movmskpd((int)pTVar33,auVar16);
  if ((uVar30 & 0x3fffffff) == 0 && iVar27 == 0) {
    dVar19 = (pTVar33->Rotation).ZW.m128d_f64[0];
    dVar20 = (pTVar33->Rotation).ZW.m128d_f64[1];
    dVar15 = (pTVar33->Rotation).XY.m128d_f64[0];
    dVar46 = (pTVar33->Rotation).XY.m128d_f64[1];
    dVar41 = dVar19 - dVar48;
    dVar47 = dVar20 - dVar24;
    dVar40 = dVar15 - dVar14;
    dVar13 = dVar46 - dVar42;
    auVar44._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar41,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar44._8_4_ = SUB84(dVar47,0) & _UNK_15061cc88;
    auVar44._12_4_ = (uint)((ulonglong)dVar47 >> 0x20) & _UNK_15061cc8c;
    lVar39 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar44._8_8_);
    auVar9._8_4_ = (int)lVar39;
    auVar9._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar44._0_8_);
    auVar9._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
    iVar31 = movmskpd(0,auVar9);
    lVar39 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar13,0) & _UNK_15061cc88));
    dVar15 = dVar15 + dVar14;
    dVar46 = dVar46 + dVar42;
    dVar19 = dVar19 + dVar48;
    dVar20 = dVar20 + dVar24;
    auVar10._8_4_ = (int)lVar39;
    auVar10._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar40,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar10._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
    uVar30 = movmskpd(iVar27,auVar10);
    uVar32 = iVar31 << 2 | uVar30;
    if (uVar32 != 0) {
      lVar39 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar20,0) & _UNK_15061cc88));
      auVar11._8_4_ = (int)lVar39;
      auVar11._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar11._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
      uVar32 = movmskpd(uVar32,auVar11);
      lVar39 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar46,0) & _UNK_15061cc88));
      auVar17._8_4_ = (int)lVar39;
      auVar17._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar17._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
      uVar30 = movmskpd(uVar30,auVar17);
      if ((uVar32 & 0x3fffffff) != 0 || uVar30 != 0) goto LAB_1463ba74f;
    }
    dVar42 = (pTVar33->Scale3D).ZW.m128d_f64[0] - dVar22;
    dVar48 = (pTVar33->Scale3D).ZW.m128d_f64[1] - dVar23;
    dVar14 = (pTVar33->Scale3D).XY.m128d_f64[0] - dVar21;
    dVar4 = (pTVar33->Scale3D).XY.m128d_f64[1] - dVar4;
    auVar45._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar42,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar45._8_4_ = SUB84(dVar48,0) & _UNK_15061cc88;
    auVar45._12_4_ = (uint)((ulonglong)dVar48 >> 0x20) & _UNK_15061cc8c;
    lVar39 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar45._8_8_);
    auVar12._8_4_ = (int)lVar39;
    auVar12._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar45._0_8_);
    auVar12._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
    uVar32 = movmskpd(0,auVar12);
    lVar39 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar4,0) & _UNK_15061cc88));
    auVar18._8_4_ = (int)lVar39;
    auVar18._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar18._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
    iVar27 = movmskpd(uVar30,auVar18);
    if ((uVar32 & 0x3fffffff) == 0 && iVar27 == 0) goto LAB_1463ba7e1;
  }
LAB_1463ba74f:
  local_168.Translation.XY.m128d_f64[0] = (this->MeshInstance).Desc.Position.field0_0x0._s_0.X;
  local_168.Translation.XY.m128d_f64[1] = (this->MeshInstance).Desc.Position.field0_0x0._s_0.Y;
  local_168.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
  local_168.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
  local_168.Translation.ZW.m128d_f64[0] = (this->MeshInstance).Desc.Position.field0_0x0._s_0.Z;
  local_168.Translation.ZW.m128d_f64[1] = 0.0;
  local_168.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
  local_168.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
  local_168.Scale3D.XY.m128d_f64[1]._0_4_ = uVar49;
  local_168.Scale3D.XY.m128d_f64[0] = dVar21;
  local_168.Scale3D.XY.m128d_f64[1]._4_4_ = (int)uVar36;
  local_168.Scale3D.ZW.m128d_f64[0] = dVar22;
  local_168.Scale3D.ZW.m128d_f64[1] = dVar23;
  USceneComponent::SetRelativeTransform
            ((USceneComponent *)(this->ISMComponent).field0_0x0.DebugPtr,&local_168,false,
             (FHitResult *)0x0,None);
LAB_1463ba7e1:
  if (((this->MeshInstance).Desc.Flags & 0x800) != 0) {
    UPrimitiveComponent::SetCachedMaxDrawDistance
              ((UPrimitiveComponent *)(this->ISMComponent).field0_0x0.DebugPtr,
               (float)(this->MeshInstance).Desc.EndCullDistance);
  }
  UInstancedStaticMeshComponent::SetCullDistances
            ((this->ISMComponent).field0_0x0.DebugPtr,(this->MeshInstance).Desc.StartCullDistance,
             (this->MeshInstance).Desc.EndCullDistance);
  UPrimitiveComponent::SetCastShadow
            ((UPrimitiveComponent *)(this->ISMComponent).field0_0x0.DebugPtr,
             (bool)((byte)((this->MeshInstance).Desc.Flags >> 7) & 1));
  pUVar34 = (this->ISMComponent).field0_0x0.DebugPtr;
  bVar5 = *(byte *)((longlong)&pUVar34->_padding_ + 6);
  *(byte *)((longlong)&pUVar34->_padding_ + 6) =
       ((char)((this->MeshInstance).Desc.Flags >> 9) << 2 ^ bVar5) & 4 ^ bVar5;
  pUVar34 = (this->ISMComponent).field0_0x0.DebugPtr;
  bVar5 = *(byte *)((longlong)&pUVar34->_padding_ + 6);
  *(byte *)((longlong)&pUVar34->_padding_ + 6) =
       ((char)((this->MeshInstance).Desc.Flags >> 8) << 4 ^ bVar5) & 0x10 ^ bVar5;
  pUVar34 = (this->ISMComponent).field0_0x0.DebugPtr;
  bVar5 = *(byte *)((longlong)&pUVar34->_padding_ + 7);
  *(byte *)((longlong)&pUVar34->_padding_ + 7) =
       ((char)((this->MeshInstance).Desc.Flags >> 10) << 2 ^ bVar5) & 4 ^ bVar5;
  pUVar34 = (this->ISMComponent).field0_0x0.DebugPtr;
  bVar5 = *(byte *)((longlong)&pUVar34->_padding_ + 4);
  *(byte *)((longlong)&pUVar34->_padding_ + 4) =
       ((char)((this->MeshInstance).Desc.Flags >> 5) << 4 ^ bVar5) & 0x10 ^ bVar5;
  pUVar34 = (this->ISMComponent).field0_0x0.DebugPtr;
  bVar5 = *(byte *)((longlong)&pUVar34->_padding_ + 4);
  *(byte *)((longlong)&pUVar34->_padding_ + 4) =
       ((char)((this->MeshInstance).Desc.Flags >> 6) << 3 ^ bVar5) & 8 ^ bVar5;
  pUVar34 = (this->ISMComponent).field0_0x0.DebugPtr;
  uVar6 = pUVar34->field_0x718;
  pUVar34->field_0x718 =
       ((byte)((this->MeshInstance).Desc.Flags >> 2) ^ pUVar34->bUseGpuLodSelection) & 1 ^ uVar6;
  pUVar34 = (this->ISMComponent).field0_0x0.DebugPtr;
  if (0 < (this->MeshInstance).Desc.MinLod) {
    uVar35 = 8;
  }
  *(byte *)((longlong)&pUVar34->_padding_ + 5) =
       (byte)uVar35 | *(byte *)((longlong)&pUVar34->_padding_ + 5) & 0xf7;
  *(int *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 4) =
       (this->MeshInstance).Desc.MinLod;
  UInstancedStaticMeshComponent::SetLODDistanceScale
            ((this->ISMComponent).field0_0x0.DebugPtr,(this->MeshInstance).Desc.LodScale);
  pUVar34 = (this->ISMComponent).field0_0x0.DebugPtr;
  pUVar34->bUseConservativeBounds = '\x01';
  uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (pUVar34->CachedConservativeInstanceBounds).Max.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (pUVar34->CachedConservativeInstanceBounds).Max.field0_0x0._s_0.Y = (double)uVar25;
  (pUVar34->CachedConservativeInstanceBounds).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar21 = (pUVar34->CachedConservativeInstanceBounds).Max.field0_0x0._s_0.X;
  dVar22 = (pUVar34->CachedConservativeInstanceBounds).Max.field0_0x0._s_0.Y;
  (pUVar34->CachedConservativeInstanceBounds).IsValid = '\0';
  dVar4 = (pUVar34->CachedConservativeInstanceBounds).Max.field0_0x0._s_0.Z;
  (pUVar34->CachedConservativeInstanceBounds).Min.field0_0x0._s_0.X = dVar21;
  (pUVar34->CachedConservativeInstanceBounds).Min.field0_0x0._s_0.Y = dVar22;
  (pUVar34->CachedConservativeInstanceBounds).Min.field0_0x0._s_0.Z = dVar4;
  pbVar3 = (byte *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 1);
  *pbVar3 = *pbVar3 | 0x40;
  pUVar34 = (this->ISMComponent).field0_0x0.DebugPtr;
  bVar5 = *(byte *)((longlong)&pUVar34->_padding_ + 4);
  *(byte *)((longlong)&pUVar34->_padding_ + 4) = (bVar38 * '\x02' ^ bVar5) & 2 ^ bVar5;
  UPrimitiveComponent::SetMeshDrawCommandStatsCategory
            ((UPrimitiveComponent *)(this->ISMComponent).field0_0x0.DebugPtr,
             (this->MeshInstance).Desc.StatsCategory);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)
             &((this->ISMComponent).field0_0x0.DebugPtr)->_padding_,&(this->MeshInstance).Desc.Tags)
  ;
  ((this->ISMComponent).field0_0x0.DebugPtr)->InstancingRandomSeed = 1;
  return;
}

