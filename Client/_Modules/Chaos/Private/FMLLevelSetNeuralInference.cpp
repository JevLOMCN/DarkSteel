// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// FMLLevelSetNeuralInference @ 143be0590

FMLLevelSetNeuralInference * __thiscall
Chaos::FMLLevelSetNeuralInference::FMLLevelSetNeuralInference
          (FMLLevelSetNeuralInference *this,TSharedPtr<UE::NNE::IModelCPU,1> *param_1)

{
  TSharedPtr<UE::NNE::IModelInstanceCPU,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FMLLevelSetNeuralInference *pFVar5;
  undefined8 *puVar6;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  (this->NNEModel).Object = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  (this->NNEModel).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->ModelInstance;
  pTVar1->Object = (IModelInstanceCPU *)0x0;
  (this->ModelInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModelWeightsShapes).ArrayNum = 0;
  (this->ModelWeightsShapes).ArrayMax = 0;
  if (param_1->Object == (IModelCPU *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FMLLevelSetNeuralInference *)(*pcVar3)();
      return pFVar5;
    }
  }
  puVar6 = (undefined8 *)(**(code **)((longlong)*param_1->Object + 8))(param_1->Object,local_18);
  if (pTVar1 != (TSharedPtr<UE::NNE::IModelInstanceCPU,1> *)puVar6) {
    pTVar1->Object = (IModelInstanceCPU *)*puVar6;
    *puVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ModelInstance).SharedReferenceCount,(FSharedReferencer<1> *)(puVar6 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FMLLevelSetNeuralInference @ 143be0670

FMLLevelSetNeuralInference * __thiscall
Chaos::FMLLevelSetNeuralInference::FMLLevelSetNeuralInference
          (FMLLevelSetNeuralInference *this,FMLLevelSetNeuralInference *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->NNEModel).Object = (param_1->NNEModel).Object;
  pTVar1 = (param_1->NNEModel).SharedReferenceCount.ReferenceController;
  (this->NNEModel).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ModelInstance).Object = (param_1->ModelInstance).Object;
  pTVar1 = (param_1->ModelInstance).SharedReferenceCount.ReferenceController;
  (this->ModelInstance).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModelWeightsShapes).AllocatorInstance.Data =
       (param_1->ModelWeightsShapes).AllocatorInstance.Data;
  (param_1->ModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModelWeightsShapes).ArrayNum = (param_1->ModelWeightsShapes).ArrayNum;
  (this->ModelWeightsShapes).ArrayMax = (param_1->ModelWeightsShapes).ArrayMax;
  (param_1->ModelWeightsShapes).ArrayNum = 0;
  (param_1->ModelWeightsShapes).ArrayMax = 0;
  return this;
}

// FMLLevelSetNeuralInference @ 143be06d0

FMLLevelSetNeuralInference * __thiscall
Chaos::FMLLevelSetNeuralInference::FMLLevelSetNeuralInference
          (FMLLevelSetNeuralInference *this,FMLLevelSetNeuralInference *param_1)

{
  TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar5;
  IModelCPU *pIVar6;
  code *pcVar7;
  bool bVar8;
  FMLLevelSetNeuralInference *pFVar9;
  undefined8 *puVar10;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  (this->NNEModel).Object = (param_1->NNEModel).Object;
  pTVar4 = (param_1->NNEModel).SharedReferenceCount.ReferenceController;
  (this->NNEModel).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->ModelWeightsShapes;
  (this->ModelInstance).Object = (IModelInstanceCPU *)0x0;
  (this->ModelInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  piVar2 = &(this->ModelWeightsShapes).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ModelWeightsShapes).ArrayNum;
  pTVar5 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
           (param_1->ModelWeightsShapes).AllocatorInstance.Data;
  (this->ModelWeightsShapes).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  if ((this->NNEModel).Object == (IModelCPU *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FMLLevelSetNeuralInference *)(*pcVar7)();
      return pFVar9;
    }
  }
  pIVar6 = (this->NNEModel).Object;
  puVar10 = (undefined8 *)(**(code **)((longlong)*pIVar6 + 8))(pIVar6,local_28);
  if (&this->ModelInstance != (TSharedPtr<UE::NNE::IModelInstanceCPU,1> *)puVar10) {
    (this->ModelInstance).Object = (IModelInstanceCPU *)*puVar10;
    *puVar10 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ModelInstance).SharedReferenceCount,(FSharedReferencer<1> *)(puVar10 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return this;
}

// FMLLevelSetNeuralInference @ 143be07f0

FMLLevelSetNeuralInference * __thiscall
Chaos::FMLLevelSetNeuralInference::FMLLevelSetNeuralInference
          (FMLLevelSetNeuralInference *this,TSharedPtr<UE::NNE::IModelCPU,1> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  FMLLevelSetNeuralInference *pFVar8;
  undefined8 *puVar9;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  (this->NNEModel).Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  (this->NNEModel).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->ModelWeightsShapes;
  (this->ModelInstance).Object = (IModelInstanceCPU *)0x0;
  (this->ModelInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  piVar2 = &(this->ModelWeightsShapes).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_2->ArrayNum;
  pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(param_2->AllocatorInstance).Data;
  (this->ModelWeightsShapes).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  if (param_1->Object == (IModelCPU *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FMLLevelSetNeuralInference *)(*pcVar6)();
      return pFVar8;
    }
  }
  puVar9 = (undefined8 *)(**(code **)((longlong)*param_1->Object + 8))(param_1->Object,local_38);
  if (&this->ModelInstance != (TSharedPtr<UE::NNE::IModelInstanceCPU,1> *)puVar9) {
    (this->ModelInstance).Object = (IModelInstanceCPU *)*puVar9;
    *puVar9 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ModelInstance).SharedReferenceCount,(FSharedReferencer<1> *)(puVar9 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// operator= @ 143be3f30

FMLLevelSetNeuralInference * __thiscall
Chaos::FMLLevelSetNeuralInference::operator=
          (FMLLevelSetNeuralInference *this,FMLLevelSetNeuralInference *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IModelCPU *pIVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FMLLevelSetNeuralInference *pFVar6;
  undefined8 *puVar7;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar1 = (param_1->NNEModel).SharedReferenceCount.ReferenceController;
  pIVar2 = (param_1->NNEModel).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->NNEModel).SharedReferenceCount.ReferenceController;
  (this->NNEModel).Object = pIVar2;
  (this->NNEModel).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ModelWeightsShapes,&param_1->ModelWeightsShapes);
  if ((this->NNEModel).Object == (IModelCPU *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMLLevelSetNeuralInference *)(*pcVar3)();
      return pFVar6;
    }
  }
  pIVar2 = (this->NNEModel).Object;
  puVar7 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_18);
  if (&this->ModelInstance != (TSharedPtr<UE::NNE::IModelInstanceCPU,1> *)puVar7) {
    (this->ModelInstance).Object = (IModelInstanceCPU *)*puVar7;
    *puVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ModelInstance).SharedReferenceCount,(FSharedReferencer<1> *)(puVar7 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return this;
}

// Copy @ 143bfe6b0

FMLLevelSetNeuralInference * __thiscall
Chaos::FMLLevelSetNeuralInference::Copy(FMLLevelSetNeuralInference *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IModelCPU *pIVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FMLLevelSetNeuralInference *pFVar6;
  FMLLevelSetNeuralInference *pFVar7;
  undefined8 *puVar8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar6 = ::operator_new(0x30);
  pFVar7 = (FMLLevelSetNeuralInference *)0x0;
  if (pFVar6 != (FMLLevelSetNeuralInference *)0x0) {
    (pFVar6->NNEModel).Object = (IModelCPU *)0x0;
    (pFVar6->NNEModel).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    (pFVar6->ModelInstance).Object = (IModelInstanceCPU *)0x0;
    (pFVar6->ModelInstance).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar6->ModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->ModelWeightsShapes).ArrayNum = 0;
    (pFVar6->ModelWeightsShapes).ArrayMax = 0;
    pFVar7 = pFVar6;
  }
  pTVar1 = (this->NNEModel).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->NNEModel).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar7->NNEModel).SharedReferenceCount.ReferenceController;
  (pFVar7->NNEModel).Object = pIVar2;
  (pFVar7->NNEModel).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar7->ModelWeightsShapes,&this->ModelWeightsShapes);
  if (((this->NNEModel).Object == (IModelCPU *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMLLevelSetNeuralInference *)(*pcVar3)();
    return pFVar7;
  }
  pIVar2 = (this->NNEModel).Object;
  puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_18);
  if (&pFVar7->ModelInstance != (TSharedPtr<UE::NNE::IModelInstanceCPU,1> *)puVar8) {
    (pFVar7->ModelInstance).Object = (IModelInstanceCPU *)*puVar8;
    *puVar8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar7->ModelInstance).SharedReferenceCount,(FSharedReferencer<1> *)(puVar8 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return pFVar7;
}

// RunInference @ 143c12d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FMLLevelSetNeuralInference::RunInference
          (FMLLevelSetNeuralInference *this,TArray<float,TAlignedHeapAllocator<64>_> *param_1,
          TArray<float,TAlignedHeapAllocator<64>_> *param_2,uint param_3,uint param_4,
          TArray<TArray<float,TAlignedHeapAllocator<64>_>,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  IModelInstanceCPU *pIVar2;
  code *pcVar3;
  TArray<float,TAlignedHeapAllocator<64>_> *pTVar4;
  TArray<TArray<float,TAlignedHeapAllocator<64>_>,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FTensorShape *pFVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStackY_268 [32];
  ForAnyElementType local_220;
  int local_218 [2];
  TArray<UE::NNE::FTensorBindingCPU,TSizedDefaultAllocator<32>_> local_210;
  TArray<UE::NNE::FTensorBindingCPU,TSizedDefaultAllocator<32>_> local_200;
  uint local_1f0;
  uint uStack_1ec;
  TArray<float,TAlignedHeapAllocator<64>_> *local_1e8;
  ForAnyElementType local_1e0;
  int local_1d8;
  int local_1d4;
  ForAnyElementType local_1d0;
  int local_1c8;
  int local_1c4;
  ForAnyElementType local_1c0;
  int local_1b8;
  int local_1b4;
  uint local_1b0;
  uint uStack_1ac;
  TArray<TArray<float,TAlignedHeapAllocator<64>_>,TSizedDefaultAllocator<32>_> *local_1a8;
  TArray<float,TAlignedHeapAllocator<64>_> *local_198;
  FScriptContainerElement *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  uint *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  int iStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  int iStack_130;
  undefined4 uStack_12c;
  TArrayView<unsigned_int_const_,int> local_128;
  TArrayView<unsigned_int_const_,int> local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  TArrayView<unsigned_int_const_,int> local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  FTensorShape local_c8;
  FTensorShape local_98;
  FTensorShape local_68;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1a8 = param_5;
  bVar16 = -1 < CpuChannel->Enabled;
  local_1e8 = param_1;
  local_198 = param_2;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId53,"FMLLevelSetNeuralInference_RunInference",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\MLLevelSetNeuralInference.cpp"
               ,0x35);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId53);
  }
  if ((this->ModelInstance).Object == (IModelInstanceCPU *)0x0) {
    if (1 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  else {
    bVar17 = -1 < CpuChannel->Enabled;
    if (bVar17) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId57,"FMLLevelSetNeuralInference_RunInference_Run",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\MLLevelSetNeuralInference.cpp"
                 ,0x39);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId57);
    }
    local_1f0 = (uint)param_1->ArrayNum / param_3;
    local_1c0.Data = (FScriptContainerElement *)0x0;
    local_1b8 = 2;
    uStack_1ec = param_3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,2,0,&local_1c0,2,&local_1b4);
    *(ulonglong *)local_1c0.Data = CONCAT44(uStack_1ec,local_1f0);
    uVar10 = (this->ModelWeightsShapes).ArrayNum + 1;
    local_220.Data = (FScriptContainerElement *)0x0;
    local_218[0] = 0;
    local_218[1] = 0;
    if ((int)uVar10 < 1) {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
    }
    else {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,uVar10,&local_220,local_218,local_218 + 1);
      DefaultConstructItems<UE::NNE::FTensorShape,int>
                (local_220.Data + (longlong)iVar8 * 0x30,uVar10);
    }
    iVar8 = local_1b8;
    local_188 = local_1c0.Data;
    if ((local_1b8 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iStack_180 = iVar8;
    local_128._12_4_ = uStack_17c;
    local_128.ArrayNum = iVar8;
    local_128.DataPtr = (uint *)local_188;
    pFVar9 = UE::NNE::FTensorShape::Make(&local_98,&local_128);
    if ((local_218[0] < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UE::NNE::FTensorShape::operator=((FTensorShape *)local_220.Data,pFVar9);
    if (local_98.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_98.Data.AllocatorInstance.SecondaryData);
    }
    uVar10 = 0;
    if (0 < (this->ModelWeightsShapes).ArrayNum) {
      lVar15 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar10 < (this->ModelWeightsShapes).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->ModelWeightsShapes).AllocatorInstance.Data;
        local_178 = *(uint **)(pFVar1 + lVar15);
        iVar8 = *(int *)(pFVar1 + lVar15 + 8);
        if ((iVar8 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_118._12_4_ = uStack_16c;
        local_118.ArrayNum = iVar8;
        local_118.DataPtr = local_178;
        iStack_170 = iVar8;
        pFVar9 = UE::NNE::FTensorShape::Make(&local_68,&local_118);
        uVar10 = uVar10 + 1;
        uVar11 = 0;
        if ((int)uVar10 < local_218[0]) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UE::NNE::FTensorShape::operator=
                  ((FTensorShape *)(local_220.Data + (longlong)(int)uVar10 * 0x30),pFVar9);
        if (local_68.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_68.Data.AllocatorInstance.SecondaryData);
        }
        lVar15 = lVar15 + 0x10;
        param_5 = local_1a8;
      } while ((int)uVar10 < (this->ModelWeightsShapes).ArrayNum);
    }
    if (((this->ModelInstance).Object == (IModelInstanceCPU *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = (this->ModelInstance).Object;
    iVar8 = local_218[0];
    pcVar3 = *(code **)((longlong)*pIVar2 + 0x28);
    local_168 = local_220.Data;
    if ((local_218[0] < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iStack_160 = iVar8;
    local_108 = (undefined4)local_168;
    uStack_104 = local_168._4_4_;
    iStack_100 = iVar8;
    uStack_fc = uStack_15c;
    (*pcVar3)(pIVar2,&local_108);
    local_1b0 = local_1f0;
    uVar12 = 0;
    uStack_1ac = param_4;
    local_1d0.Data = (FScriptContainerElement *)0x0;
    local_1c8 = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,2,0,&local_1d0,2,&local_1c4);
    iStack_150 = local_1c8;
    *(ulonglong *)local_1d0.Data = CONCAT44(uStack_1ac,local_1b0);
    local_158 = local_1d0.Data;
    if ((local_1c8 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_f8._12_4_ = uStack_14c;
    local_f8.ArrayNum = iStack_150;
    local_f8.DataPtr = (uint *)local_158;
    UE::NNE::FTensorShape::Make(&local_c8,&local_f8);
    local_1e0.Data = (FScriptContainerElement *)0x0;
    local_1d8 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,1,0,&local_1e0,1,&local_1d4);
    ConstructItems<UE::NNE::FTensorShape,UE::NNE::FTensorShape,int>(local_1e0.Data,&local_c8,1);
    if (local_c8.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c8.Data.AllocatorInstance.SecondaryData);
    }
    local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_210.ArrayNum = 0;
    local_210.ArrayMax = 0;
    local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_200.ArrayNum = 0;
    local_200.ArrayMax = 0;
    TArray<UE::NNE::FTensorBindingCPU,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&local_210,param_5->ArrayNum + 1,Default);
    pTVar4 = local_1e8;
    pFVar1 = (local_1e8->AllocatorInstance).Data;
    if ((local_210.ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(FScriptContainerElement **)local_210.AllocatorInstance.Data = pFVar1;
    iVar8 = pTVar4->ArrayNum;
    if ((local_210.ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar5 = local_1a8;
    *(longlong *)(local_210.AllocatorInstance.Data + 8) = (longlong)iVar8 << 2;
    iVar8 = param_5->ArrayNum;
    uVar13 = uVar12;
    if (0 < iVar8) {
      do {
        uVar11 = (uint)uVar12;
        uVar10 = 0;
        if ((int)uVar11 < iVar8) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar14 = uVar11 + 1;
        local_1e8 = *(TArray<float,TAlignedHeapAllocator<64>_> **)
                     ((pTVar5->AllocatorInstance).Data + uVar13);
        uVar10 = 0;
        if ((int)uVar14 < local_210.ArrayNum) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(TArray<float,TAlignedHeapAllocator<64>_> **)
         (local_210.AllocatorInstance.Data + uVar13 + 0x10) = local_1e8;
        uVar10 = 0;
        if ((int)uVar11 < pTVar5->ArrayNum) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = *(int *)((pTVar5->AllocatorInstance).Data + uVar13 + 8);
        uVar10 = 0;
        if ((int)uVar14 < local_210.ArrayNum) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(longlong *)(local_210.AllocatorInstance.Data + uVar13 + 0x18) = (longlong)iVar8 << 2;
        iVar8 = pTVar5->ArrayNum;
        uVar12 = (ulonglong)uVar14;
        uVar13 = uVar13 + 0x10;
      } while ((int)uVar14 < iVar8);
    }
    TArray<UE::NNE::FTensorBindingCPU,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&local_200,1,Default);
    pTVar4 = local_198;
    pFVar1 = (local_198->AllocatorInstance).Data;
    if ((local_200.ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(FScriptContainerElement **)local_200.AllocatorInstance.Data = pFVar1;
    iVar8 = pTVar4->ArrayNum;
    if ((local_200.ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(longlong *)(local_200.AllocatorInstance.Data + 8) = (longlong)iVar8 << 2;
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId88,
                 "FMLLevelSetNeuralInference_RunInference_ModelInstanceRunSync",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\MLLevelSetNeuralInference.cpp"
                 ,0x58);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId88);
    }
    if (((this->ModelInstance).Object == (IModelInstanceCPU *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = (this->ModelInstance).Object;
    iVar8 = local_200.ArrayNum;
    pcVar3 = *(code **)((longlong)*pIVar2 + 0x30);
    local_148 = local_200.AllocatorInstance.Data;
    if ((local_200.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iStack_140 = iVar8;
    iVar8 = local_210.ArrayNum;
    local_138 = local_210.AllocatorInstance.Data;
    if ((local_210.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iStack_130 = iVar8;
    local_d8 = (undefined4)local_138;
    uStack_d4 = local_138._4_4_;
    iStack_d0 = iVar8;
    uStack_cc = uStack_12c;
    local_e8 = (undefined4)local_148;
    uStack_e4 = local_148._4_4_;
    iStack_e0 = iStack_140;
    uStack_dc = uStack_13c;
    (*pcVar3)(pIVar2,&local_d8,&local_e8);
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.AllocatorInstance.Data);
    }
    if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.AllocatorInstance.Data);
    }
    DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)local_1e0.Data,local_1d8);
    if (local_1e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data);
    }
    if (local_1d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data);
    }
    DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)local_220.Data,local_218[0]);
    if (local_220.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data);
    }
    if (local_1c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data);
    }
    if (bVar17) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Serialize @ 143c14e90

bool __thiscall
Chaos::FMLLevelSetNeuralInference::Serialize(FMLLevelSetNeuralInference *this,FArchive *param_1)

{
  TArrayPrivateFriend::
  Serialize<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,&this->ModelWeightsShapes);
  return true;
}

