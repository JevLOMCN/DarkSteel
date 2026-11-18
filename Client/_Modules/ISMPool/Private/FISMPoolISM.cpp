// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ISMPool
// Functions: 4

// AddInstanceGroup @ 14633baf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FISMPoolISM::AddInstanceGroup(FISMPoolISM *this,int param_1,TArrayView<float_const_,int> *param_2)

{
  int *piVar1;
  TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  UInstancedStaticMeshComponent *pUVar5;
  float *pfVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStackY_188 [32];
  ForAnyElementType local_138;
  int local_130;
  int local_12c;
  int local_128;
  FPrimitiveInstanceId local_120 [2];
  uint local_118;
  TArrayView<float_const_,int> *local_110;
  longlong local_108;
  FISMPoolISM *local_100;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> local_e8;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_d8;
  TArrayView<FPrimitiveInstanceId_const_,int> local_c8;
  TArrayView<float_const_,int> local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_128 = param_1;
  local_110 = param_2;
  local_100 = this;
  local_118 = FISMPoolInstanceGroups::AddGroup(&this->InstanceGroups,param_1);
  uVar15 = 0;
  lVar14 = (longlong)(int)local_118;
  uVar16 = 0;
  if ((int)local_118 < (this->InstanceGroups).GroupRanges.ArrayNum) {
    uVar16 = ~local_118 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  pTVar2 = &this->InstanceIds;
  iVar9 = (this->InstanceIds).ArrayNum;
  piVar1 = &(this->InstanceIds).ArrayNum;
  uVar16 = (this->InstanceGroups).TotalInstanceCount;
  local_f8 = (this->InstanceGroups).GroupRanges.AllocatorInstance.Data + lVar14 * 8;
  if (iVar9 < (int)uVar16) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uVar16 - iVar9,&pTVar2->AllocatorInstance,piVar1,
                        &(this->InstanceIds).ArrayMax);
    DefaultConstructItems<FPrimitiveInstanceId,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 4,uVar16 - iVar9);
  }
  else {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if ((int)uVar16 < iVar9) {
      uVar13 = iVar9 - uVar16;
      if (((int)(uVar16 | uVar13) < 0) &&
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
      if (uVar13 != 0) {
        pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar16 * 4;
        iVar9 = (*piVar1 - uVar16) - uVar13;
        if (iVar9 != 0) {
          memmove(pFVar3,pFVar3 + (longlong)(int)uVar13 * 4,(longlong)iVar9 << 2);
        }
        *piVar1 = *piVar1 - uVar13;
      }
    }
  }
  local_138.Data = (FScriptContainerElement *)0x0;
  local_12c = 0;
  local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
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
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  local_130 = 0;
  if ((param_1 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,param_1,&local_138,0,&local_12c), 0 < param_1)) {
    uVar11 = (ulonglong)(uint)param_1;
    do {
      if (((local_138.Data <= &local_a8) &&
          (&local_a8 < (TTransform<double> *)(local_138.Data + (longlong)local_12c * 0x60))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
      if (local_130 == local_12c) {
        local_130 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1060,&local_138,&local_12c);
      }
      iVar9 = local_130 + 1;
      lVar14 = (longlong)local_130 * 0x60;
      *(double *)&local_138.Data[lVar14].field_0x0 = local_a8.Rotation.XY.m128d_f64[0];
      *(double *)(local_138.Data + lVar14 + 8) = local_a8.Rotation.XY.m128d_f64[1];
      *(double *)(local_138.Data + lVar14 + 0x10) = local_a8.Rotation.ZW.m128d_f64[0];
      *(double *)(local_138.Data + lVar14 + 0x10 + 8) = local_a8.Rotation.ZW.m128d_f64[1];
      *(double *)(local_138.Data + lVar14 + 0x20) = local_a8.Translation.XY.m128d_f64[0];
      *(double *)(local_138.Data + lVar14 + 0x20 + 8) = local_a8.Translation.XY.m128d_f64[1];
      *(double *)(local_138.Data + lVar14 + 0x30) = local_a8.Translation.ZW.m128d_f64[0];
      *(double *)(local_138.Data + lVar14 + 0x30 + 8) = local_a8.Translation.ZW.m128d_f64[1];
      *(double *)(local_138.Data + lVar14 + 0x40) = local_a8.Scale3D.XY.m128d_f64[0];
      *(double *)(local_138.Data + lVar14 + 0x40 + 8) = local_a8.Scale3D.XY.m128d_f64[1];
      *(double *)(local_138.Data + lVar14 + 0x50) = local_a8.Scale3D.ZW.m128d_f64[0];
      *(double *)(local_138.Data + lVar14 + 0x50 + 8) = local_a8.Scale3D.ZW.m128d_f64[1];
      uVar11 = uVar11 - 1;
      local_130 = iVar9;
    } while (uVar11 != 0);
  }
  pUVar5 = (this->ISMComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar5->_padding_ + 0xbe8))(pUVar5,param_1);
  local_d8.ArrayNum = local_130;
  pUVar5 = (this->ISMComponent).field0_0x0.DebugPtr;
  local_d8.DataPtr = (TTransform<double> *)local_138.Data;
  if ((local_130 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  UInstancedStaticMeshComponent::AddInstancesById(pUVar5,&local_e8,&local_d8,true,true);
  pFVar3 = local_f8;
  uVar11 = uVar15;
  local_108 = (longlong)param_1;
  if (param_1 != 0) {
    do {
      uVar13 = (uint)uVar15;
      uVar16 = 0;
      if ((int)uVar13 < local_e8.ArrayNum) {
        uVar16 = ~uVar13 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
      uVar12 = *(int *)pFVar3 + uVar13;
      uVar4 = *(undefined4 *)(local_e8.AllocatorInstance.Data + uVar11 * 4);
      uVar16 = 0;
      if ((int)uVar12 < *piVar1) {
        uVar16 = ~uVar12 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
      uVar15 = (ulonglong)(uVar13 + 1);
      uVar11 = uVar11 + 1;
      *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar12 * 4) = uVar4;
      this = local_100;
      param_1 = local_128;
    } while ((longlong)uVar11 < local_108);
  }
  lVar14 = local_108;
  uVar16 = 0;
  if (local_110->ArrayNum != 0) {
    iVar9 = ((this->ISMComponent).field0_0x0.DebugPtr)->NumCustomDataFloats;
    if (param_1 * iVar9 == local_110->ArrayNum) {
      if (local_108 != 0) {
        lVar17 = 0;
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
          if ((local_110->ArrayNum < iVar10 + iVar9) &&
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
          pfVar6 = local_110->DataPtr;
          if ((iVar9 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            iVar9 = (*pcVar7)();
            return iVar9;
          }
          uVar13 = 0;
          if ((int)uVar16 < local_e8.ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
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
          local_120[0].Id = *(int *)(local_e8.AllocatorInstance.Data + lVar17 * 4);
          local_c8.DataPtr = local_120;
          local_f8 = (FScriptContainerElement *)(pfVar6 + iVar10);
          local_b8.DataPtr = pfVar6 + iVar10;
          UInstancedStaticMeshComponent::SetCustomDataById(pUVar5,&local_c8,&local_b8);
          uVar16 = uVar16 + 1;
          lVar17 = lVar17 + 1;
          this = local_100;
          iVar10 = iVar10 + iVar9;
        } while (lVar17 < lVar14);
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<523652750714601733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ISMPool\\Private\\ISMPool\\ISMPoolComponent.cpp"
                         ,0x105,"NumCustomDataFloats * InstanceCount == CustomDataFloats.Num()");
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
  if ((TTransform<double> *)local_138.Data != (TTransform<double> *)0x0) {
    FMemory::Free(local_138.Data);
  }
  return local_118;
}

// CreateISM @ 14633ddd0

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

void __thiscall FISMPoolISM::CreateISM(FISMPoolISM *this,USceneComponent *param_1)

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
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ISMPool\\Private\\ISMPool\\ISMPoolComponent.cpp"
                         ,0x73,L""), bVar3)) {
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

// InitISM @ 146340840

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
FISMPoolISM::InitISM
          (FISMPoolISM *this,FISMPoolStaticMeshInstance *param_1,bool param_2,bool param_3)

{
  TArray<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  byte *pbVar4;
  double dVar5;
  byte bVar6;
  undefined1 uVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  bool bVar28;
  int iVar29;
  UObject *pUVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  TTransform<double> *pTVar34;
  UInstancedStaticMeshComponent *pUVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  byte bVar39;
  longlong lVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar47;
  undefined1 auVar44 [16];
  double dVar48;
  undefined1 auVar45 [16];
  double dVar49;
  undefined1 auVar46 [16];
  undefined4 uVar50;
  undefined1 auStackY_208 [32];
  undefined1 local_1c8 [8];
  UObject *local_1c0;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar36 = 0;
  (this->MeshInstance).StaticMesh.WeakPtr = (param_1->StaticMesh).WeakPtr;
  pTVar1 = &(this->MeshInstance).MaterialsOverrides;
  if (pTVar1 != &param_1->MaterialsOverrides) {
    iVar29 = (param_1->MaterialsOverrides).ArrayNum;
    piVar2 = &(this->MeshInstance).MaterialsOverrides.ArrayMax;
    pFVar8 = (param_1->MaterialsOverrides).AllocatorInstance.Data;
    iVar32 = *piVar2;
    (this->MeshInstance).MaterialsOverrides.ArrayNum = iVar29;
    if ((iVar29 == 0) && (iVar32 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar29,iVar32,&pTVar1->AllocatorInstance,iVar29,piVar2);
      if (iVar29 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar8,(longlong)iVar29 << 3);
      }
    }
  }
  pTVar3 = &(this->MeshInstance).CustomPrimitiveData;
  if (pTVar3 != &param_1->CustomPrimitiveData) {
    iVar29 = (param_1->CustomPrimitiveData).ArrayNum;
    piVar2 = &(this->MeshInstance).CustomPrimitiveData.ArrayMax;
    pFVar8 = (param_1->CustomPrimitiveData).AllocatorInstance.Data;
    iVar32 = *piVar2;
    (this->MeshInstance).CustomPrimitiveData.ArrayNum = iVar29;
    if ((iVar29 == 0) && (iVar32 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar29,iVar32,&pTVar3->AllocatorInstance,iVar29,piVar2);
      if (iVar29 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar29 << 2);
      }
    }
  }
  (this->MeshInstance).Desc.Flags = (param_1->Desc).Flags;
  (this->MeshInstance).Desc.NumCustomDataFloats = (param_1->Desc).NumCustomDataFloats;
  dVar5 = (param_1->Desc).Position.field0_0x0._s_0.Y;
  (this->MeshInstance).Desc.Position.field0_0x0._s_0.X = (param_1->Desc).Position.field0_0x0._s_0.X;
  (this->MeshInstance).Desc.Position.field0_0x0._s_0.Y = dVar5;
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
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("ISMComponent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ISMPool\\Private\\ISMPool\\ISMPoolComponent.cpp"
                          ,0x8d,L""), bVar28)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_1c0 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (local_1c0 == (UObject *)0x0) {
    local_1c8[0] = 0;
    `FISMPoolISM::InitISM'::__l2::<lambda_1>::operator()(local_1c8);
  }
  pUVar35 = (this->ISMComponent).field0_0x0.DebugPtr;
  *(byte *)((longlong)&pUVar35->_padding_ + 1) =
       param_3 << 5 | *(byte *)((longlong)&pUVar35->_padding_ + 1) & 0xdf;
  USceneComponent::SetAbsolute
            ((USceneComponent *)(this->ISMComponent).field0_0x0.DebugPtr,param_3,param_3,param_3);
  bVar39 = 0;
  UMeshComponent::EmptyOverrideMaterials((UMeshComponent *)(this->ISMComponent).field0_0x0.DebugPtr)
  ;
  uVar37 = uVar36;
  if (0 < (this->MeshInstance).MaterialsOverrides.ArrayNum) {
    do {
      uVar33 = (uint)uVar37;
      uVar31 = 0;
      if ((int)uVar33 < (this->MeshInstance).MaterialsOverrides.ArrayNum) {
        uVar31 = ~uVar33 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pUVar30 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar33 * 8));
      if ((pUVar30 == (UObject *)0x0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("Material != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ISMPool\\Private\\ISMPool\\ISMPoolComponent.cpp"
                              ,0xa4,L""), bVar28)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pUVar35 = (this->ISMComponent).field0_0x0.DebugPtr;
      (**(code **)(pUVar35->_padding_ + 0x6b8))(pUVar35,uVar37);
      iVar29 = (**(code **)(*(longlong *)pUVar30 + 0x460))(pUVar30);
      bVar39 = bVar39 | iVar29 == 2;
      uVar37 = (ulonglong)(uVar33 + 1);
    } while ((int)(uVar33 + 1) < (this->MeshInstance).MaterialsOverrides.ArrayNum);
  }
  pUVar35 = (this->ISMComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar35->_padding_ + 0xb28))(pUVar35,local_1c0);
  (**(code **)(((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 0x5f8))();
  ((this->ISMComponent).field0_0x0.DebugPtr)->NumCustomDataFloats =
       (this->MeshInstance).Desc.NumCustomDataFloats;
  uVar37 = uVar36;
  uVar38 = uVar36;
  if (0 < (this->MeshInstance).CustomPrimitiveData.ArrayNum) {
    do {
      uVar33 = (uint)uVar38;
      pUVar35 = (this->ISMComponent).field0_0x0.DebugPtr;
      uVar31 = 0;
      if ((int)uVar33 < (this->MeshInstance).CustomPrimitiveData.ArrayNum) {
        uVar31 = ~uVar33 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      UPrimitiveComponent::SetDefaultCustomPrimitiveDataFloat
                ((UPrimitiveComponent *)pUVar35,uVar33,
                 *(float *)((pTVar3->AllocatorInstance).Data + uVar37));
      uVar37 = uVar37 + 4;
      uVar38 = (ulonglong)(uVar33 + 1);
    } while ((int)(uVar33 + 1) < (this->MeshInstance).CustomPrimitiveData.ArrayNum);
  }
  dVar26 = UE::Math::TQuat<double>::Identity.W;
  dVar49 = UE::Math::TQuat<double>::Identity.Z;
  dVar43 = UE::Math::TQuat<double>::Identity.Y;
  dVar16 = UE::Math::TQuat<double>::Identity.X;
  dVar25 = _UNK_150689518;
  dVar24 = ___xmm_00000000000000003ff0000000000000;
  dVar5 = __real_3ff0000000000000;
  uVar50 = SUB84(__real_3ff0000000000000,0);
  uVar37 = (ulonglong)__real_3ff0000000000000 >> 0x20;
  dVar23 = __real_3ff0000000000000;
  if (((this->MeshInstance).Desc.Flags & 8) != 0) {
    dVar23 = __real_bff0000000000000;
  }
  if (param_3) {
    pUVar35 = (this->ISMComponent).field0_0x0.DebugPtr;
    if (pUVar35->_padding_ == 0) {
      pTVar34 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar34 = (TTransform<double> *)(pUVar35->_padding_ + 0x1f0);
    }
    dVar5 = (pTVar34->Scale3D).XY.m128d_f64[0];
    dVar24 = (pTVar34->Scale3D).XY.m128d_f64[1];
    dVar25 = (pTVar34->Scale3D).ZW.m128d_f64[0];
    dVar16 = (pTVar34->Rotation).XY.m128d_f64[0];
    dVar43 = (pTVar34->Rotation).XY.m128d_f64[1];
    dVar49 = (pTVar34->Rotation).ZW.m128d_f64[0];
    dVar26 = (pTVar34->Rotation).ZW.m128d_f64[1];
    dVar41 = (pTVar34->Translation).XY.m128d_f64[0];
    dVar15 = (pTVar34->Translation).XY.m128d_f64[1];
    dVar17 = (pTVar34->Translation).ZW.m128d_f64[0];
    dVar47 = (pTVar34->Translation).ZW.m128d_f64[1];
    *(byte *)&pUVar35->_padding_ = (byte)pUVar35->_padding_ | 1;
    pUVar35->_padding_ = (longlong)dVar16;
    pUVar35->_padding_ = (longlong)dVar43;
    pUVar35->_padding_ = (longlong)dVar49;
    pUVar35->_padding_ = (longlong)dVar26;
    pUVar35->_padding_ = (longlong)dVar41;
    pUVar35->_padding_ = (longlong)dVar15;
    pUVar35->_padding_ = (longlong)dVar17;
    pUVar35->_padding_ = (longlong)dVar47;
    pUVar35->_padding_ = (longlong)(dVar23 * dVar5);
    pUVar35->_padding_ = (longlong)dVar24;
    pUVar35->_padding_ = (longlong)dVar25;
    pUVar35->_padding_ = 0;
    UInstancedStaticMeshComponent::UpdateComponentTransform
              ((this->ISMComponent).field0_0x0.DebugPtr,None,None);
    UActorComponent::MarkRenderTransformDirty
              ((UActorComponent *)(this->ISMComponent).field0_0x0.DebugPtr);
    goto LAB_146340e90;
  }
  pUVar35 = (this->ISMComponent).field0_0x0.DebugPtr;
  dVar41 = (this->MeshInstance).Desc.Position.field0_0x0._s_0.Z;
  dVar15 = (this->MeshInstance).Desc.Position.field0_0x0._s_0.X;
  dVar17 = (this->MeshInstance).Desc.Position.field0_0x0._s_0.Y;
  pTVar34 = USceneComponent::GetRelativeTransform((USceneComponent *)pUVar35,&local_108);
  dVar41 = (pTVar34->Translation).ZW.m128d_f64[0] - dVar41;
  dVar47 = (pTVar34->Translation).ZW.m128d_f64[1] - 0.0;
  dVar15 = (pTVar34->Translation).XY.m128d_f64[0] - dVar15;
  dVar17 = (pTVar34->Translation).XY.m128d_f64[1] - dVar17;
  auVar44._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar41,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar44._8_4_ = SUB84(dVar47,0) & _UNK_15061cc88;
  auVar44._12_4_ = (uint)((ulonglong)dVar47 >> 0x20) & _UNK_15061cc8c;
  lVar40 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar44._8_8_);
  auVar10._8_4_ = (int)lVar40;
  auVar10._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar44._0_8_);
  auVar10._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
  uVar31 = movmskpd((int)pUVar35,auVar10);
  lVar40 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar17,0) & _UNK_15061cc88));
  auVar18._8_4_ = (int)lVar40;
  auVar18._0_8_ =
       -(ulonglong)
        (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar18._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
  iVar29 = movmskpd((int)pTVar34,auVar18);
  if ((uVar31 & 0x3fffffff) == 0 && iVar29 == 0) {
    dVar21 = (pTVar34->Rotation).ZW.m128d_f64[0];
    dVar22 = (pTVar34->Rotation).ZW.m128d_f64[1];
    dVar17 = (pTVar34->Rotation).XY.m128d_f64[0];
    dVar47 = (pTVar34->Rotation).XY.m128d_f64[1];
    dVar42 = dVar21 - dVar49;
    dVar48 = dVar22 - dVar26;
    dVar41 = dVar17 - dVar16;
    dVar15 = dVar47 - dVar43;
    auVar45._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar42,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar45._8_4_ = SUB84(dVar48,0) & _UNK_15061cc88;
    auVar45._12_4_ = (uint)((ulonglong)dVar48 >> 0x20) & _UNK_15061cc8c;
    lVar40 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar45._8_8_);
    auVar11._8_4_ = (int)lVar40;
    auVar11._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar45._0_8_);
    auVar11._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
    iVar32 = movmskpd(0,auVar11);
    lVar40 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar15,0) & _UNK_15061cc88));
    dVar17 = dVar17 + dVar16;
    dVar47 = dVar47 + dVar43;
    dVar21 = dVar21 + dVar49;
    dVar22 = dVar22 + dVar26;
    auVar12._8_4_ = (int)lVar40;
    auVar12._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar41,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar12._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
    uVar31 = movmskpd(iVar29,auVar12);
    uVar33 = iVar32 << 2 | uVar31;
    if (uVar33 != 0) {
      lVar40 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar22,0) & _UNK_15061cc88));
      auVar13._8_4_ = (int)lVar40;
      auVar13._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar13._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      uVar33 = movmskpd(uVar33,auVar13);
      lVar40 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar47,0) & _UNK_15061cc88));
      auVar19._8_4_ = (int)lVar40;
      auVar19._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar19._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      uVar31 = movmskpd(uVar31,auVar19);
      if ((uVar33 & 0x3fffffff) != 0 || uVar31 != 0) goto LAB_146340dfe;
    }
    dVar43 = (pTVar34->Scale3D).ZW.m128d_f64[0] - dVar24;
    dVar49 = (pTVar34->Scale3D).ZW.m128d_f64[1] - dVar25;
    dVar16 = (pTVar34->Scale3D).XY.m128d_f64[0] - dVar23;
    dVar5 = (pTVar34->Scale3D).XY.m128d_f64[1] - dVar5;
    auVar46._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar43 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar43,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar46._8_4_ = SUB84(dVar49,0) & _UNK_15061cc88;
    auVar46._12_4_ = (uint)((ulonglong)dVar49 >> 0x20) & _UNK_15061cc8c;
    lVar40 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar46._8_8_);
    auVar14._8_4_ = (int)lVar40;
    auVar14._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar46._0_8_);
    auVar14._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
    uVar33 = movmskpd(0,auVar14);
    lVar40 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar5,0) & _UNK_15061cc88));
    auVar20._8_4_ = (int)lVar40;
    auVar20._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar20._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
    iVar29 = movmskpd(uVar31,auVar20);
    if ((uVar33 & 0x3fffffff) == 0 && iVar29 == 0) goto LAB_146340e90;
  }
LAB_146340dfe:
  local_168.Translation.XY.m128d_f64[0] = (this->MeshInstance).Desc.Position.field0_0x0._s_0.X;
  local_168.Translation.XY.m128d_f64[1] = (this->MeshInstance).Desc.Position.field0_0x0._s_0.Y;
  local_168.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
  local_168.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
  local_168.Translation.ZW.m128d_f64[0] = (this->MeshInstance).Desc.Position.field0_0x0._s_0.Z;
  local_168.Translation.ZW.m128d_f64[1] = 0.0;
  local_168.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
  local_168.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
  local_168.Scale3D.XY.m128d_f64[1]._0_4_ = uVar50;
  local_168.Scale3D.XY.m128d_f64[0] = dVar23;
  local_168.Scale3D.XY.m128d_f64[1]._4_4_ = (int)uVar37;
  local_168.Scale3D.ZW.m128d_f64[0] = dVar24;
  local_168.Scale3D.ZW.m128d_f64[1] = dVar25;
  USceneComponent::SetRelativeTransform
            ((USceneComponent *)(this->ISMComponent).field0_0x0.DebugPtr,&local_168,false,
             (FHitResult *)0x0,None);
LAB_146340e90:
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
  pUVar35 = (this->ISMComponent).field0_0x0.DebugPtr;
  bVar6 = *(byte *)((longlong)&pUVar35->_padding_ + 6);
  *(byte *)((longlong)&pUVar35->_padding_ + 6) =
       ((char)((this->MeshInstance).Desc.Flags >> 9) << 2 ^ bVar6) & 4 ^ bVar6;
  pUVar35 = (this->ISMComponent).field0_0x0.DebugPtr;
  bVar6 = *(byte *)((longlong)&pUVar35->_padding_ + 6);
  *(byte *)((longlong)&pUVar35->_padding_ + 6) =
       ((char)((this->MeshInstance).Desc.Flags >> 8) << 4 ^ bVar6) & 0x10 ^ bVar6;
  pUVar35 = (this->ISMComponent).field0_0x0.DebugPtr;
  bVar6 = *(byte *)((longlong)&pUVar35->_padding_ + 7);
  *(byte *)((longlong)&pUVar35->_padding_ + 7) =
       ((char)((this->MeshInstance).Desc.Flags >> 10) << 2 ^ bVar6) & 4 ^ bVar6;
  pUVar35 = (this->ISMComponent).field0_0x0.DebugPtr;
  bVar6 = *(byte *)((longlong)&pUVar35->_padding_ + 4);
  *(byte *)((longlong)&pUVar35->_padding_ + 4) =
       ((char)((this->MeshInstance).Desc.Flags >> 5) << 4 ^ bVar6) & 0x10 ^ bVar6;
  pUVar35 = (this->ISMComponent).field0_0x0.DebugPtr;
  bVar6 = *(byte *)((longlong)&pUVar35->_padding_ + 4);
  *(byte *)((longlong)&pUVar35->_padding_ + 4) =
       ((char)((this->MeshInstance).Desc.Flags >> 6) << 3 ^ bVar6) & 8 ^ bVar6;
  pUVar35 = (this->ISMComponent).field0_0x0.DebugPtr;
  uVar7 = pUVar35->field_0x718;
  pUVar35->field_0x718 =
       ((byte)((this->MeshInstance).Desc.Flags >> 2) ^ pUVar35->bUseGpuLodSelection) & 1 ^ uVar7;
  pUVar35 = (this->ISMComponent).field0_0x0.DebugPtr;
  if (0 < (this->MeshInstance).Desc.MinLod) {
    uVar36 = 8;
  }
  *(byte *)((longlong)&pUVar35->_padding_ + 5) =
       (byte)uVar36 | *(byte *)((longlong)&pUVar35->_padding_ + 5) & 0xf7;
  *(int *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 4) =
       (this->MeshInstance).Desc.MinLod;
  UInstancedStaticMeshComponent::SetLODDistanceScale
            ((this->ISMComponent).field0_0x0.DebugPtr,(this->MeshInstance).Desc.LodScale);
  pUVar35 = (this->ISMComponent).field0_0x0.DebugPtr;
  pUVar35->bUseConservativeBounds = '\x01';
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (pUVar35->CachedConservativeInstanceBounds).Max.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (pUVar35->CachedConservativeInstanceBounds).Max.field0_0x0._s_0.Y = (double)uVar27;
  (pUVar35->CachedConservativeInstanceBounds).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar23 = (pUVar35->CachedConservativeInstanceBounds).Max.field0_0x0._s_0.X;
  dVar24 = (pUVar35->CachedConservativeInstanceBounds).Max.field0_0x0._s_0.Y;
  (pUVar35->CachedConservativeInstanceBounds).IsValid = '\0';
  dVar5 = (pUVar35->CachedConservativeInstanceBounds).Max.field0_0x0._s_0.Z;
  (pUVar35->CachedConservativeInstanceBounds).Min.field0_0x0._s_0.X = dVar23;
  (pUVar35->CachedConservativeInstanceBounds).Min.field0_0x0._s_0.Y = dVar24;
  (pUVar35->CachedConservativeInstanceBounds).Min.field0_0x0._s_0.Z = dVar5;
  pbVar4 = (byte *)((longlong)&((this->ISMComponent).field0_0x0.DebugPtr)->_padding_ + 1);
  *pbVar4 = *pbVar4 | 0x40;
  pUVar35 = (this->ISMComponent).field0_0x0.DebugPtr;
  bVar6 = *(byte *)((longlong)&pUVar35->_padding_ + 4);
  *(byte *)((longlong)&pUVar35->_padding_ + 4) = (bVar39 * '\x02' ^ bVar6) & 2 ^ bVar6;
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

// operator() @ 1504ea220

bool __thiscall `FISMPoolISM::InitISM'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<523652750714601617>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<523652750714601617>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

