// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Run @ 1487ef3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
_anon_689E48D4::FAutoRTFMTestUSkeletalMeshComponent::Run
          (FAutoRTFMTestUSkeletalMeshComponent *this,UWorld *param_1,UAutoRTFMTestLevel *param_2,
          AAutoRTFMTestActor *param_3,UAutoRTFMTestPrimitiveComponent *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UActorComponent *pUVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  USkeletalMesh *this_00;
  ForAnyElementType *pFVar10;
  FSkeletalMeshLODRenderData *pFVar11;
  FSkeletalMeshLODRenderData *pFVar12;
  UActorComponent *pUVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_298 [32];
  FSkeletalMeshLODRenderData **local_278;
  FScriptContainerElement *local_270;
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  FSkeletalMeshLODRenderData *local_248;
  UActorComponent *local_240;
  undefined1 local_238 [128];
  undefined1 local_1b8 [128];
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_298;
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_USkeleton_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_238,pUVar8);
  local_238._8_8_ = pUVar7;
  pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_238);
  if (local_238._64_8_ != 0) {
    plVar15 = (longlong *)(local_238 + 0x50);
    if ((longlong *)local_238._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_238._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  pUVar9 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar9,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar8);
  local_1b8._8_8_ = pUVar9;
  this_00 = (USkeletalMesh *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar15 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  (**(code **)(this_00->_padding_ + 0x410))(this_00,pUVar7);
  USkeletalMesh::AllocateResourceForRendering(this_00);
  pFVar10 = (ForAnyElementType *)(**(code **)(this_00->_padding_ + 0x398))(this_00);
  pFVar11 = ::operator_new(0x768);
  if (pFVar11 == (FSkeletalMeshLODRenderData *)0x0) {
    pFVar11 = (FSkeletalMeshLODRenderData *)0x0;
  }
  else {
    pFVar12 = FSkeletalMeshLODRenderData::FSkeletalMeshLODRenderData(pFVar11,true);
    pFVar11 = (FSkeletalMeshLODRenderData *)0x0;
    if (pFVar12 != (FSkeletalMeshLODRenderData *)0x0) {
      LOCK();
      *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
      UNLOCK();
      pFVar11 = pFVar12;
    }
  }
  pFVar2 = pFVar10->Data;
  local_248 = pFVar11;
  if ((pFVar2 <= (FScriptContainerElement *)&local_248) &&
     (lVar14 = (longlong)*(int *)((longlong)&pFVar10[1].Data + 4),
     (FScriptContainerElement *)&local_248 < pFVar2 + lVar14 * 8)) {
    local_260 = (longlong)*(int *)&pFVar10[1].Data;
    local_258 = 8;
    local_278 = &local_248;
    local_270 = pFVar2;
    local_268 = lVar14;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar10[1].Data;
  piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar10,piVar1);
  }
  *(int *)&pFVar10[1].Data = iVar6 + 1;
  *(FSkeletalMeshLODRenderData **)(pFVar10->Data + (longlong)iVar6 * 8) = local_248;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_138,pUVar8);
  local_138._8_8_ = param_3;
  local_240 = (UActorComponent *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
  if (local_138._64_8_ != 0) {
    plVar15 = (longlong *)(local_138 + 0x50);
    if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_138._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  (**(code **)(local_240->_padding_ + 0xb48))(local_240,this_00);
  pUVar13 = local_240;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)local_240,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UAnimInstance_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar13;
  pUVar13 = (UActorComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar15 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  pUVar4 = local_240;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UActorComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  pUVar4[0xc].PrimaryComponentTick.Target = pUVar13;
  UActorComponent::RegisterComponent(local_240);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::AbortedByRequest == Result"
             ,false);
  if (pFVar11 != (FSkeletalMeshLODRenderData *)0x0) {
    plVar15 = &pFVar11->_padding_;
    LOCK();
    lVar14 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if (((int)lVar14 == 1) && (plVar15 != (longlong *)0x0)) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  return;
}

