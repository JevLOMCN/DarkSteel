// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 8

// FShaderPipelineCompileJob @ 145e42280

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderPipelineCompileJob * __thiscall
FShaderPipelineCompileJob::FShaderPipelineCompileJob(FShaderPipelineCompileJob *this,int param_1)

{
  int *piVar1;
  TArray<TRefCountPtr<FShaderCompileJob>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FShaderCommonCompileJob *pFVar5;
  bool bVar6;
  int iVar7;
  FShaderCommonCompileJob *this_00;
  FShaderPipelineCompileJob *pFVar8;
  ulonglong uVar9;
  FShaderCommonCompileJob *local_28 [2];
  
  uVar9 = (ulonglong)(uint)param_1;
  FShaderCommonCompileJob::FShaderCommonCompileJob((FShaderCommonCompileJob *)this,Pipeline,0,0,Num)
  ;
  pTVar2 = &this->StageJobs;
  this->_padding_ = (longlong)&___7FShaderPipelineCompileJob__6B_;
  piVar1 = &(this->StageJobs).ArrayMax;
  (this->Key).ShaderPipeline = (FShaderPipelineType *)0x0;
  (this->Key).VFType = (FVertexFactoryType *)0x0;
  (this->Key).PermutationId = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->StageJobs).ArrayNum = 0;
  *piVar1 = 0;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9);
  }
  DestructItems<TRefCountPtr<FShaderCompileJob>,int>((TRefCountPtr<FShaderCompileJob> *)0x0,0);
  (this->StageJobs).ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (0 < param_1) {
    do {
      this_00 = ::operator_new(0x800);
      if (this_00 == (FShaderCommonCompileJob *)0x0) {
        local_28[0] = (FShaderCommonCompileJob *)0x0;
      }
      else {
        FShaderCommonCompileJob::FShaderCommonCompileJob(this_00,Single,0,0,Num);
        this_00->_padding_ = (longlong)&___7FShaderCompileJob__6B_;
        this_00[1]._padding_ = 0;
        this_00[1].NextLink = (FShaderCommonCompileJob *)0x0;
        *(undefined4 *)&this_00[1].PrevLink = 0;
        this_00[1].PendingShaderMap.Reference = (FPendingShaderMapCompileResults *)0x0;
        this_00[1].NumRefs = 0;
        this_00[1].JobIndex = 0;
        FShaderCompilerInput::FShaderCompilerInput((FShaderCompilerInput *)&this_00[1].Hash);
        FShaderPreprocessOutput::FShaderPreprocessOutput
                  ((FShaderPreprocessOutput *)&this_00[7].RequestOwner);
        pFVar5 = this_00 + 8;
        (pFVar5->InputHash).Hash[0x14] = '\0';
        (pFVar5->InputHash).Hash[0x15] = '\0';
        (pFVar5->InputHash).Hash[0x16] = '\0';
        (pFVar5->InputHash).Hash[0x17] = '\0';
        (pFVar5->InputHash).Hash[0x18] = '\0';
        (pFVar5->InputHash).Hash[0x19] = '\0';
        (pFVar5->InputHash).Hash[0x1a] = '\0';
        (pFVar5->InputHash).Hash[0x1b] = '\0';
        FShaderCompilerOutput::FShaderCompilerOutput
                  ((FShaderCompilerOutput *)(this_00[8].InputHash.Hash + 0x1c));
        this_00[0xb].PendingShaderMap.Reference = (FPendingShaderMapCompileResults *)0x0;
        this_00[0xb].NumRefs = 0;
        this_00[0xb].JobIndex = 0;
        this_00[0xb].Hash = 0;
        this_00[0xb].Id = 0;
        *(undefined8 *)&this_00[0xb].field_0x40 = 0;
        pFVar5 = this_00 + 0xb;
        (pFVar5->InputHash).Hash[4] = '\0';
        (pFVar5->InputHash).Hash[5] = '\0';
        (pFVar5->InputHash).Hash[6] = '\0';
        (pFVar5->InputHash).Hash[7] = '\0';
        pFVar5 = this_00 + 0xb;
        (pFVar5->InputHash).Hash[8] = 0x80;
        (pFVar5->InputHash).Hash[9] = '\0';
        (pFVar5->InputHash).Hash[10] = '\0';
        (pFVar5->InputHash).Hash[0xb] = '\0';
        pFVar5 = this_00 + 0xb;
        (pFVar5->InputHash).Hash[0xc] = 0xff;
        (pFVar5->InputHash).Hash[0xd] = 0xff;
        (pFVar5->InputHash).Hash[0xe] = 0xff;
        (pFVar5->InputHash).Hash[0xf] = 0xff;
        pFVar5 = this_00 + 0xb;
        (pFVar5->InputHash).Hash[0x10] = '\0';
        (pFVar5->InputHash).Hash[0x11] = '\0';
        (pFVar5->InputHash).Hash[0x12] = '\0';
        (pFVar5->InputHash).Hash[0x13] = '\0';
        *(undefined8 *)(this_00[0xb].InputHash.Hash + 0x1c) = 0;
        *(undefined4 *)&this_00[0xb].TimeAddedToPendingQueue = 0;
        LOCK();
        (this_00->NumRefs).Counter = (this_00->NumRefs).Counter + 1;
        UNLOCK();
        local_28[0] = this_00;
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FShaderPipelineCompileJob *)(*pcVar4)();
        return pFVar8;
      }
      iVar7 = (this->StageJobs).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->StageJobs).ArrayNum = iVar7 + 1;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar3 + (longlong)iVar7 * 8) = 0;
      *(FShaderCommonCompileJob **)(pFVar3 + (longlong)iVar7 * 8) = local_28[0];
      local_28[0] = (FShaderCommonCompileJob *)0x0;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  iVar7 = (this->StageJobs).ArrayNum;
  if (iVar7 != 0) {
    if ((iVar7 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FShaderPipelineCompileJob *)(*pcVar4)();
      return pFVar8;
    }
    *(undefined1 *)(*(longlong *)(pTVar2->AllocatorInstance).Data + 0x502) = 1;
  }
  return this;
}

// FShaderPipelineCompileJob @ 145e42550

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderPipelineCompileJob * __thiscall
FShaderPipelineCompileJob::FShaderPipelineCompileJob
          (FShaderPipelineCompileJob *this,uint param_1,uint param_2,
          EShaderCompileJobPriority param_3,FShaderPipelineCompileJobKey *param_4)

{
  int *piVar1;
  TArray<TRefCountPtr<FShaderCompileJob>,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FShaderCommonCompileJob *pFVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FVertexFactoryType *pFVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  bool bVar11;
  int iVar12;
  FShaderCommonCompileJob *this_00;
  FShaderPipelineCompileJob *pFVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong *puVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  FShaderCommonCompileJob *local_70;
  longlong local_68;
  ulonglong *local_60;
  ulonglong local_58;
  FShaderCommonCompileJob *pFStack_50;
  uint local_48;
  undefined4 uStack_44;
  
  FShaderCommonCompileJob::FShaderCommonCompileJob
            ((FShaderCommonCompileJob *)this,Pipeline,param_1,param_2,param_3);
  plVar9 = (longlong *)CONCAT71(param_4._1_7_,param_4._0_1_);
  pTVar2 = &this->StageJobs;
  this->_padding_ = (longlong)&___7FShaderPipelineCompileJob__6B_;
  piVar1 = &(this->StageJobs).ArrayMax;
  pFVar8 = (FVertexFactoryType *)plVar9[1];
  (this->Key).ShaderPipeline = (FShaderPipelineType *)*plVar9;
  (this->Key).VFType = pFVar8;
  *(longlong *)&(this->Key).PermutationId = plVar9[2];
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->StageJobs).ArrayNum = 0;
  *piVar1 = 0;
  lVar20 = *plVar9;
  uVar3 = *(uint *)(lVar20 + 0x28);
  local_68 = lVar20;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  DestructItems<TRefCountPtr<FShaderCompileJob>,int>((TRefCountPtr<FShaderCompileJob> *)0x0,0);
  (this->StageJobs).ArrayNum = 0;
  if (*piVar1 != uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar3 = *(uint *)(lVar20 + 0x28);
  uVar16 = (ulonglong)(int)uVar3;
  puVar19 = *(ulonglong **)(lVar20 + 0x20);
  local_60 = puVar19 + uVar16;
  while( true ) {
    puVar10 = local_60;
    if (*(int *)(lVar20 + 0x28) != (int)uVar16) {
      param_4._0_1_ = 0;
      `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_4);
    }
    if (puVar19 == puVar10) break;
    uVar16 = *puVar19;
    pFVar4 = (FShaderCommonCompileJob *)plVar9[1];
    uVar15 = *(uint *)(plVar9 + 2);
    local_58 = uVar16;
    pFStack_50 = pFVar4;
    local_48 = uVar15;
    this_00 = ::operator_new(0x800);
    if (this_00 == (FShaderCommonCompileJob *)0x0) {
      local_70 = (FShaderCommonCompileJob *)0x0;
    }
    else {
      uVar17 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      uVar17 = uVar17 >> 0x10 ^ uVar17;
      if (pFVar4 == (FShaderCommonCompileJob *)0x0) {
        uVar21 = 0;
      }
      else {
        uVar5._0_1_ = pFVar4->Type;
        uVar5._1_1_ = pFVar4->Priority;
        uVar5._2_1_ = pFVar4->PendingPriority;
        uVar5._3_1_ = pFVar4->CurrentWorker;
        uVar5._4_4_ = *(undefined4 *)&pFVar4->field_0x34;
        uVar21 = uVar5._4_4_ * 0x17 + (int)uVar5;
      }
      uVar18 = param_2 - uVar21 ^ uVar21 >> 0xd;
      uVar14 = (-0x61c88647 - uVar18) - uVar21 ^ uVar18 << 8;
      uVar22 = (uVar21 - uVar14) - uVar18 ^ uVar14 >> 0xd;
      uVar18 = (uVar18 - uVar22) - uVar14 ^ uVar22 >> 0xc;
      uVar21 = (uVar14 - uVar18) - uVar22 ^ uVar18 << 0x10;
      uVar22 = (uVar22 - uVar21) - uVar18 ^ uVar21 >> 5;
      uVar14 = (uVar18 - uVar22) - uVar21 ^ uVar22 >> 3;
      uVar21 = (uVar21 - uVar14) - uVar22 ^ uVar14 << 10;
      uVar18 = ((uVar22 - uVar21) - uVar14 ^ uVar21 >> 0xf) - uVar17 ^ uVar17 >> 0xd;
      uVar21 = (-0x61c88647 - uVar18) - uVar17 ^ uVar18 << 8;
      uVar14 = (uVar17 - uVar21) - uVar18 ^ uVar21 >> 0xd;
      uVar18 = (uVar18 - uVar14) - uVar21 ^ uVar14 >> 0xc;
      uVar17 = (uVar21 - uVar18) - uVar14 ^ uVar18 << 0x10;
      uVar21 = (uVar14 - uVar17) - uVar18 ^ uVar17 >> 5;
      uVar14 = (uVar18 - uVar21) - uVar17 ^ uVar21 >> 3;
      uVar17 = (uVar17 - uVar14) - uVar21 ^ uVar14 << 10;
      uVar21 = ((uVar21 - uVar17) - uVar14 ^ uVar17 >> 0xf) - uVar15 ^ uVar15 >> 0xd;
      uVar17 = (-0x61c88647 - uVar21) - uVar15 ^ uVar21 << 8;
      uVar14 = (uVar15 - uVar21) - uVar17 ^ uVar17 >> 0xd;
      uVar21 = (uVar21 - uVar14) - uVar17 ^ uVar14 >> 0xc;
      uVar15 = (uVar17 - uVar21) - uVar14 ^ uVar21 << 0x10;
      uVar14 = (uVar14 - uVar15) - uVar21 ^ uVar15 >> 5;
      uVar17 = (uVar21 - uVar14) - uVar15 ^ uVar14 >> 3;
      uVar15 = (uVar15 - uVar17) - uVar14 ^ uVar17 << 10;
      FShaderCommonCompileJob::FShaderCommonCompileJob
                (this_00,Single,(uVar14 - uVar15) - uVar17 ^ uVar15 >> 0xf,param_2,param_3);
      this_00[1]._padding_ = local_58;
      this_00[1].NextLink = pFStack_50;
      this_00->_padding_ = (longlong)&___7FShaderCompileJob__6B_;
      this_00[1].PrevLink = (FShaderCommonCompileJob **)CONCAT44(uStack_44,local_48);
      this_00[1].PendingShaderMap.Reference = (FPendingShaderMapCompileResults *)0x0;
      this_00[1].NumRefs = 0;
      this_00[1].JobIndex = 0;
      FShaderCompilerInput::FShaderCompilerInput((FShaderCompilerInput *)&this_00[1].Hash);
      FShaderPreprocessOutput::FShaderPreprocessOutput
                ((FShaderPreprocessOutput *)&this_00[7].RequestOwner);
      pFVar4 = this_00 + 8;
      (pFVar4->InputHash).Hash[0x14] = '\0';
      (pFVar4->InputHash).Hash[0x15] = '\0';
      (pFVar4->InputHash).Hash[0x16] = '\0';
      (pFVar4->InputHash).Hash[0x17] = '\0';
      (pFVar4->InputHash).Hash[0x18] = '\0';
      (pFVar4->InputHash).Hash[0x19] = '\0';
      (pFVar4->InputHash).Hash[0x1a] = '\0';
      (pFVar4->InputHash).Hash[0x1b] = '\0';
      FShaderCompilerOutput::FShaderCompilerOutput
                ((FShaderCompilerOutput *)(this_00[8].InputHash.Hash + 0x1c));
      this_00[0xb].PendingShaderMap.Reference = (FPendingShaderMapCompileResults *)0x0;
      this_00[0xb].NumRefs = 0;
      this_00[0xb].JobIndex = 0;
      this_00[0xb].Hash = 0;
      this_00[0xb].Id = 0;
      *(undefined8 *)&this_00[0xb].field_0x40 = 0;
      pFVar4 = this_00 + 0xb;
      (pFVar4->InputHash).Hash[4] = '\0';
      (pFVar4->InputHash).Hash[5] = '\0';
      (pFVar4->InputHash).Hash[6] = '\0';
      (pFVar4->InputHash).Hash[7] = '\0';
      pFVar4 = this_00 + 0xb;
      (pFVar4->InputHash).Hash[8] = 0x80;
      (pFVar4->InputHash).Hash[9] = '\0';
      (pFVar4->InputHash).Hash[10] = '\0';
      (pFVar4->InputHash).Hash[0xb] = '\0';
      pFVar4 = this_00 + 0xb;
      (pFVar4->InputHash).Hash[0xc] = 0xff;
      (pFVar4->InputHash).Hash[0xd] = 0xff;
      (pFVar4->InputHash).Hash[0xe] = 0xff;
      (pFVar4->InputHash).Hash[0xf] = 0xff;
      pFVar4 = this_00 + 0xb;
      (pFVar4->InputHash).Hash[0x10] = '\0';
      (pFVar4->InputHash).Hash[0x11] = '\0';
      (pFVar4->InputHash).Hash[0x12] = '\0';
      (pFVar4->InputHash).Hash[0x13] = '\0';
      *(undefined8 *)(this_00[0xb].InputHash.Hash + 0x1c) = 0;
      *(undefined4 *)&this_00[0xb].TimeAddedToPendingQueue = 0;
      LOCK();
      (this_00->NumRefs).Counter = (this_00->NumRefs).Counter + 1;
      UNLOCK();
      local_70 = this_00;
    }
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_70) &&
       ((FScriptContainerElement *)&local_70 < pFVar6 + (longlong)*piVar1 * 8)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FShaderPipelineCompileJob *)(*pcVar7)();
        return pFVar13;
      }
    }
    iVar12 = (this->StageJobs).ArrayNum;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    puVar19 = puVar19 + 1;
    (this->StageJobs).ArrayNum = iVar12 + 1;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    *(undefined8 *)(pFVar6 + (longlong)iVar12 * 8) = 0;
    uVar16 = (ulonglong)uVar3;
    *(FShaderCommonCompileJob **)(pFVar6 + (longlong)iVar12 * 8) = local_70;
    local_70 = (FShaderCommonCompileJob *)0x0;
    lVar20 = local_68;
  }
  iVar12 = (this->StageJobs).ArrayNum;
  if (iVar12 != 0) {
    if (iVar12 < 1) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FShaderPipelineCompileJob *)(*pcVar7)();
        return pFVar13;
      }
    }
    *(undefined1 *)(*(longlong *)(pTVar2->AllocatorInstance).Data + 0x502) = 1;
  }
  return this;
}

// AppendDebugName @ 145e4be80

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderPipelineCompileJob::AppendDebugName
          (FShaderPipelineCompileJob *this,TStringBuilderBase<wchar_t> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  TStringBuilderBase<wchar_t> *this_00;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  if (param_1->End < param_1->CurPos + 0xd) {
    TStringBuilderBase<wchar_t>::Extend(param_1,0xd);
  }
  pwVar5 = FGenericPlatformString::Convert<char,wchar_t>(param_1->CurPos,0xd,"Pipeline Job\n",0xd);
  param_1->CurPos = pwVar5;
  uVar7 = 0;
  lVar8 = (longlong)(this->StageJobs).ArrayNum;
  if (0 < lVar8) {
    lVar6 = 0;
    do {
      if (param_1->End < param_1->CurPos + 10) {
        TStringBuilderBase<wchar_t>::Extend(param_1,10);
      }
      pwVar5 = FGenericPlatformString::Convert<char,wchar_t>(param_1->CurPos,10,"    Stage ",10);
      param_1->CurPos = pwVar5;
      this_00 = TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%d");
      if (this_00->End < this_00->CurPos + 2) {
        TStringBuilderBase<wchar_t>::Extend(this_00,2);
      }
      pwVar5 = FGenericPlatformString::Convert<char,wchar_t>(this_00->CurPos,2,": ",2);
      this_00->CurPos = pwVar5;
      uVar4 = 0;
      if ((int)uVar7 < (this->StageJobs).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->StageJobs).AllocatorInstance.Data + lVar6 * 8);
      (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"\n",1);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar8);
  }
  return;
}

// AppendDiagnostics @ 145e4c0f0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderPipelineCompileJob::AppendDiagnostics
          (FShaderPipelineCompileJob *this,FString *param_1,int param_2,int param_3,wchar_t *param_4
          )

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  FString local_48;
  FString local_38;
  
  if (param_4 == (wchar_t *)0x0) {
    param_4 = L"";
  }
  ::FString::FString(&local_48,param_4);
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::AppendChar(param_1,L'\n');
  }
  ::FString::AppendfImpl(param_1,L"%sPipeline Job [%d/%d] (PermutationId=%d):");
  ::FString::AppendChars(&local_48,L"  ",2);
  uVar5 = 0;
  if (0 < (this->StageJobs).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->StageJobs).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->StageJobs).AllocatorInstance.Data + lVar6);
      if (1 < (param_1->Data).ArrayNum) {
        ::FString::AppendChar(param_1,L'\n');
      }
      FShaderCompilerInput::GenerateShaderName((FShaderCompilerInput *)(lVar1 + 0xd8),&local_38);
      uVar5 = uVar5 + 1;
      ::FString::AppendfImpl(param_1,L"%sJob [%d/%d]: %s (PermutationId=%d)");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->StageJobs).ArrayNum);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// GetInputHash @ 145e593a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FBlake3Hash * __thiscall
FShaderPipelineCompileJob::GetInputHash
          (FShaderPipelineCompileJob *this,FBlake3Hash *__return_storage_ptr__)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  FBlake3Hash *pFVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((this->_padding_ & 0x10) == 0) {
    uVar8 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uVar12 = uVar8;
    if (0 < (this->StageJobs).ArrayNum) {
      do {
        iVar1 = (this->StageJobs).ArrayNum;
        uVar11 = (uint)uVar8;
        uVar6 = 0;
        if ((int)uVar11 < iVar1) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_88 = (longlong)(int)uVar11;
          local_80 = (longlong)iVar1;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FBlake3Hash *)(*pcVar3)();
            return pFVar7;
          }
        }
        if (*(longlong *)((this->StageJobs).AllocatorInstance.Data + uVar12) != 0) {
          iVar1 = (this->StageJobs).ArrayNum;
          uVar6 = 0;
          if ((int)uVar11 < iVar1) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if (uVar6 == 0) {
            local_88 = (longlong)(int)uVar11;
            local_80 = (longlong)iVar1;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              pFVar7 = (FBlake3Hash *)(*pcVar3)();
              return pFVar7;
            }
          }
          puVar2 = *(undefined8 **)((this->StageJobs).AllocatorInstance.Data + uVar12);
          (**(code **)*puVar2)(puVar2,&local_58);
          uVar10 = (local_58 & 0xffffffff) + (local_78 & 0xffffffff);
          uVar8 = (local_58 >> 0x20) + (uVar10 >> 0x20) + (local_78 >> 0x20);
          local_78 = CONCAT44((int)uVar8,(int)uVar10);
          uVar10 = (local_50 & 0xffffffff) + (uVar8 >> 0x20) + (uStack_70 & 0xffffffff);
          uVar8 = (local_50 >> 0x20) + (uVar10 >> 0x20) + (uStack_70 >> 0x20);
          uStack_70 = CONCAT44((int)uVar8,(int)uVar10);
          uVar8 = (uVar8 >> 0x20) + (local_48 & 0xffffffff) + (local_68 & 0xffffffff);
          uVar10 = (uVar8 >> 0x20) + (local_48 >> 0x20) + (local_68 >> 0x20);
          local_68 = CONCAT44((int)uVar10,(int)uVar8);
          lVar9 = (uVar10 >> 0x20) + (local_40 & 0xffffffff) + (uStack_60 & 0xffffffff);
          uStack_60 = CONCAT44((int)(local_40 >> 0x20) + uStack_60._4_4_ +
                               (int)((ulonglong)lVar9 >> 0x20),(int)lVar9);
        }
        uVar8 = (ulonglong)(uVar11 + 1);
        uVar12 = uVar12 + 8;
      } while ((int)(uVar11 + 1) < (this->StageJobs).ArrayNum);
    }
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x10;
    *(ulonglong *)((longlong)&this->_padding_ + 4) = local_78;
    *(ulonglong *)((longlong)&this->_padding_ + 4) = uStack_70;
    *(ulonglong *)((longlong)&this->_padding_ + 4) = local_68;
    *(ulonglong *)((longlong)&this->_padding_ + 4) = uStack_60;
    *(ulonglong *)__return_storage_ptr__->Hash = local_78;
    *(ulonglong *)(__return_storage_ptr__->Hash + 8) = uStack_70;
    *(ulonglong *)(__return_storage_ptr__->Hash + 0x10) = local_68;
    *(ulonglong *)(__return_storage_ptr__->Hash + 0x18) = uStack_60;
  }
  else {
    uVar4 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar4;
    uVar4 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)(__return_storage_ptr__->Hash + 0x10) =
         *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)(__return_storage_ptr__->Hash + 0x18) = uVar4;
  }
  return __return_storage_ptr__;
}

// OnComplete @ 145e63720

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderPipelineCompileJob::OnComplete
          (FShaderPipelineCompileJob *this,FShaderDebugDataContext *param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  longlong *plVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_88;
  ForAnyElementType local_80;
  int local_78;
  int iStack_74;
  FString local_70;
  FString local_60 [2];
  
  uVar18 = 0;
  param_1->bIsPipeline = true;
  lVar14 = (longlong)(this->StageJobs).ArrayNum;
  uVar9 = uVar18;
  uVar16 = uVar18;
  if (0 < lVar14) {
    do {
      uVar11 = (uint)uVar9;
      uVar19 = 0;
      if ((int)uVar11 < (this->StageJobs).ArrayNum) {
        uVar19 = ~uVar11 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)((this->StageJobs).AllocatorInstance.Data + uVar16 * 8);
      (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
      uVar16 = uVar16 + 1;
      uVar9 = (ulonglong)(uVar11 + 1);
    } while ((longlong)uVar16 < lVar14);
  }
  pTVar5 = CVarDumpDebugInfoForCacheHits.Ref;
  if ((param_1->DebugSourceFiles).ArrayNum == 0) {
    return;
  }
  bVar7 = IsInParallelGameThread();
  if (bVar7) {
LAB_145e637f4:
    uVar9 = uVar18;
  }
  else {
    bVar7 = IsInGameThread();
    uVar9 = 1;
    if (bVar7) goto LAB_145e637f4;
  }
  if (pTVar5->ShadowedValue[uVar9] == false) {
    if ((this->_padding_ == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    cVar2 = *(char *)(this->_padding_ + 8);
    if (*(char *)(this->_padding_ + 9) != '\0') {
      return;
    }
    if (cVar2 == '\x02') {
      return;
    }
    if ((byte)(cVar2 - 9U) < 2) {
      return;
    }
  }
  local_res20 = (longlong)(this->StageJobs).ArrayNum;
  uVar19 = 0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  iStack_74 = 0;
  if (0 < local_res20) {
    lVar14 = (longlong)(param_1->DebugSourceFiles).ArrayNum;
    local_res18 = 0;
    local_res10 = lVar14;
    uVar11 = uVar19;
    do {
      lVar10 = local_res18;
      uVar15 = 0;
      if ((int)uVar19 < (this->StageJobs).ArrayNum) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_88 = *(longlong *)((this->StageJobs).AllocatorInstance.Data + uVar18 * 8);
      uVar15 = uVar11;
      if (lVar10 < lVar14) {
        uVar15 = 0;
        if ((int)uVar11 < (param_1->DebugSourceFiles).ArrayNum) {
          uVar15 = ~uVar11 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar14 = local_res10;
        uVar15 = uVar11 + 1;
        lVar12 = lVar10 + 1;
        local_res18 = lVar12;
        if ((param_1->DebugSourceFiles).AllocatorInstance.Data[lVar10 * 0x18] !=
            (FScriptContainerElement)(*(byte *)(local_88 + 0xd8) & 0xf)) goto LAB_145e63a11;
        if (*(longlong *)(local_88 + 0x5d8) != 0) {
          if (lVar12 < local_res10) {
            uVar8 = 0;
            if ((int)uVar15 < (param_1->DebugSourceFiles).ArrayNum) {
              uVar8 = ~uVar15 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_res18 = lVar10 + 2;
            uVar15 = uVar11 + 2;
            if ((param_1->DebugSourceFiles).AllocatorInstance.Data[lVar12 * 0x18] ==
                (FScriptContainerElement)(*(byte *)(local_88 + 0xd8) & 0xf)) goto LAB_145e63ab0;
          }
          goto LAB_145e63a11;
        }
      }
      else {
LAB_145e63a11:
        if (((local_80.Data <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < local_80.Data + (longlong)iStack_74 * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_78 == iStack_74) {
          local_78 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_80,&iStack_74);
        }
        lVar10 = (longlong)local_78;
        local_78 = local_78 + 1;
        *(longlong *)(local_80.Data + lVar10 * 8) = local_88;
      }
LAB_145e63ab0:
      uVar11 = uVar15;
      iVar6 = local_78;
      uVar19 = uVar19 + 1;
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 < local_res20);
    if (local_78 != 0) {
      bVar7 = true;
      local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.Data.ArrayNum = 0;
      local_70.Data.ArrayMax = 0;
      pFVar1 = local_80.Data + (longlong)local_78 * 8;
      FVar13.Data = local_80.Data;
      while( true ) {
        if (local_78 != iVar6) {
          `TCheckedPointerIterator<FShaderCompileJob_const_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (FVar13.Data == pFVar1) break;
        if (bVar7) {
          bVar7 = false;
        }
        else {
          ::FString::AppendChars(&local_70,L"\n",1);
        }
        FShaderCompilerInput::DumpDebugInfoEnabled
                  ((FShaderCompilerInput *)(*(longlong *)FVar13.Data + 0xd8));
        ::FString::PrintfImpl(local_60,L"%s (debug info %s)");
        iVar17 = (int)local_60[0].Data._8_8_ + -1;
        if ((int)local_60[0].Data._8_8_ == 0) {
          iVar17 = 0;
        }
        ::FString::AppendChars(&local_70,(wchar_t *)local_60[0].Data.AllocatorInstance.Data,iVar17);
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
        FVar13.Data = FVar13.Data + 8;
      }
      if (2 < (byte)LogShaders._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      goto LAB_145e63bed;
    }
  }
  FShaderCompileWorkerUtil::DumpDebugCompileInput((FShaderCommonCompileJob *)this,param_1);
LAB_145e63bed:
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  return;
}

// OnComplete @ 145e63c20

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderPipelineCompileJob::OnComplete(FShaderPipelineCompileJob *this)

{
  return;
}

// SerializeOutput @ 145e6c6e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderPipelineCompileJob::SerializeOutput
          (FShaderPipelineCompileJob *this,FShaderCacheSerializeContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  bVar3 = true;
  (**(code **)(param_1->_padding_ + 0x18))(param_1,(this->StageJobs).ArrayNum);
  lVar6 = (longlong)(this->StageJobs).ArrayNum;
  uVar5 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->StageJobs).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FShaderCompileJob::SerializeOutput
                (*(FShaderCompileJob **)((this->StageJobs).AllocatorInstance.Data + lVar7 * 8),
                 param_1,uVar5);
      if (bVar3) {
        uVar4 = 0;
        if ((int)uVar5 < (this->StageJobs).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((*(byte *)(*(longlong *)((this->StageJobs).AllocatorInstance.Data + lVar7 * 8) + 0x40) &
            2) == 0) goto LAB_145e6c7f8;
        bVar3 = true;
      }
      else {
LAB_145e6c7f8:
        bVar3 = false;
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Internal\\ShaderSerialization.h"
                         ,0x38,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(byte *)(param_1->_padding_ + 0x28) & 1) != 0) {
    *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfd | bVar3 * '\x02' | 1;
  }
  return;
}

