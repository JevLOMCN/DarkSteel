// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 4

// FMeshExternalLoadTask @ 14aa92f40

FMeshExternalLoadTask * __thiscall
UE::Mutable::Private::FMeshExternalLoadTask::FMeshExternalLoadTask
          (FMeshExternalLoadTask *this,FScheduledOp *param_1,FExternalResourceId *param_2,
          int param_3,int param_4,uint param_5)

{
  USkeletalMesh *pUVar1;
  UTexture *pUVar2;
  int iVar3;
  undefined4 uVar4;
  
  pUVar1 = param_2->MeshParameter;
  this->_padding_ = (longlong)&___7FIssuedTask_CodeRunner_Private_Mutable_UE__6B_;
  this->_padding_ = *(longlong *)param_1;
  iVar3 = param_2->ReferenceResourceId;
  uVar4 = *(undefined4 *)&param_2->field_0x4;
  pUVar2 = param_2->ImageParameter;
  *(undefined4 *)&this->_padding_ = *(undefined4 *)&param_1->ExecutionIndex;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMeshExternalLoadTask_Private_Mutable_UE__6B_;
  (this->Id).ReferenceResourceId = iVar3;
  *(undefined4 *)&(this->Id).field_0x4 = uVar4;
  (this->Id).ImageParameter = pUVar2;
  this->SectionIndex = param_4;
  (this->Id).MeshParameter = pUVar1;
  this->MeshID = param_5;
  this->LODIndex = param_3;
  (this->Result).Object = (FMesh *)0x0;
  (this->Result).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->ExternalCleanUpFunc = 0;
  *(undefined8 *)&(this->ExternalCleanUpFunc).field_0x28 = 0;
  return this;
}

// ~FMeshExternalLoadTask @ 14aa93be0

void __thiscall
UE::Mutable::Private::FMeshExternalLoadTask::~FMeshExternalLoadTask(FMeshExternalLoadTask *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  if (*(longlong *)&this->ExternalCleanUpFunc != 0) {
    plVar3 = *(longlong **)&(this->ExternalCleanUpFunc).field_0x28;
    plVar5 = (longlong *)&(this->ExternalCleanUpFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Result).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FIssuedTask_CodeRunner_Private_Mutable_UE__6B_;
  puVar4 = (undefined8 *)this->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014aa93c3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}

// Complete @ 14aac0960

bool __thiscall
UE::Mutable::Private::FMeshExternalLoadTask::Complete
          (FMeshExternalLoadTask *this,CodeRunner *param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  Private *pPVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  atomic<int> *paVar10;
  FCacheAddress local_res8;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> local_18;
  
  if (*(void **)&this->ExternalCleanUpFunc != (void *)0x0) {
    Core::Private::Function::CheckCallable(*(void **)&this->ExternalCleanUpFunc);
    pcVar2 = *(code **)&this->ExternalCleanUpFunc;
    plVar3 = *(longlong **)&(this->ExternalCleanUpFunc).field_0x28;
    plVar9 = (longlong *)&(this->ExternalCleanUpFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar9 = plVar3;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar2)(uVar8);
  }
  uVar1 = this->MeshID;
  if ((this->Result).Object == (FMesh *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  ((this->Result).Object)->MeshIDPrefix = uVar1;
  pTVar4 = (this->Result).SharedReferenceCount.ReferenceController;
  local_18.Object = (this->Result).Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar10 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar10 = &pTVar4->SharedReferenceCount;
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  local_res8.At = (uint)this->_padding_;
  local_res8.ExecutionIndex = (ushort)this->_padding_;
  local_res8.ExecutionOptions = *(uchar *)((longlong)&this->_padding_ + 2);
  local_res8.Type = *(byte *)((longlong)&this->_padding_ + 3) >> 7;
  pPVar5 = param_1->System;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  FWorkingMemoryManager::StoreMesh(&pPVar5->WorkingMemoryManager,&local_res8,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return true;
}

// Prepare @ 14aae5f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Mutable::Private::FMeshExternalLoadTask::Prepare
          (FMeshExternalLoadTask *this,CodeRunner *param_1,bool *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> *pTVar18;
  longlong *plVar19;
  undefined ***pppuVar20;
  bool bVar21;
  undefined1 auStackY_e8 [32];
  FExternalResourceId local_b8;
  code *local_98 [2];
  undefined **local_88;
  FMeshExternalLoadTask *local_80;
  undefined ***local_70;
  undefined8 *local_68 [2];
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2480,"Mutable_FMeshExternalLoadTask_Prepare",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x9b0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2480);
  }
  *param_2 = false;
  local_b8.ReferenceResourceId = (this->Id).ReferenceResourceId;
  local_b8._4_4_ = *(undefined4 *)&(this->Id).field_0x4;
  local_b8.ImageParameter = (this->Id).ImageParameter;
  local_b8.MeshParameter = (this->Id).MeshParameter;
  local_88 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Mutable::Private::FMeshExternalLoadTask::Prepare'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_70 = (undefined ***)0x0;
  local_98[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Mutable::Private::FMeshExternalLoadTask::Prepare'::__l2::<lambda_1>,void,TSharedPtr<UE::Mutable::Private::FMesh,1>_>
                ::Call;
  local_80 = this;
  pTVar18 = CodeRunner::LoadExternalMeshAsync
                      (param_1,(TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_>
                                *)local_68,&local_b8,this->LODIndex,this->SectionIndex,
                       (TFunction<void___cdecl(TSharedPtr<UE::Mutable::Private::FMesh,1>)> *)
                       local_98);
  plVar19 = &this->_padding_;
  if ((TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> *)plVar19 != pTVar18)
  {
    puVar3 = (undefined8 *)*plVar19;
    *plVar19 = *(longlong *)pTVar18;
    *(undefined8 *)pTVar18 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  uVar15 = *(undefined8 *)&pTVar18->field_0x18;
  uVar4 = *(undefined4 *)&this->ExternalCleanUpFunc;
  uVar5 = *(undefined4 *)&(this->ExternalCleanUpFunc).field_0x4;
  uVar6 = *(undefined4 *)&(this->ExternalCleanUpFunc).field_0x8;
  uVar7 = *(undefined4 *)&(this->ExternalCleanUpFunc).field_0xc;
  uVar8 = *(undefined4 *)&(this->ExternalCleanUpFunc).field_0x10;
  uVar9 = *(undefined4 *)&(this->ExternalCleanUpFunc).field_0x14;
  uVar10 = *(undefined4 *)&(this->ExternalCleanUpFunc).field_0x18;
  uVar11 = *(undefined4 *)&(this->ExternalCleanUpFunc).field_0x1c;
  uVar16 = *(undefined8 *)&(this->ExternalCleanUpFunc).field_0x20;
  uVar17 = *(undefined8 *)&(this->ExternalCleanUpFunc).field_0x28;
  *(undefined8 *)&this->ExternalCleanUpFunc = *(undefined8 *)&pTVar18->field_0x10;
  *(undefined8 *)&(this->ExternalCleanUpFunc).field_0x8 = uVar15;
  uVar12 = *(undefined4 *)&pTVar18->field_0x24;
  uVar13 = *(undefined4 *)&pTVar18->field_0x28;
  uVar14 = *(undefined4 *)&pTVar18->field_0x2c;
  *(undefined4 *)&(this->ExternalCleanUpFunc).field_0x10 = *(undefined4 *)&pTVar18->field_0x20;
  *(undefined4 *)&(this->ExternalCleanUpFunc).field_0x14 = uVar12;
  *(undefined4 *)&(this->ExternalCleanUpFunc).field_0x18 = uVar13;
  *(undefined4 *)&(this->ExternalCleanUpFunc).field_0x1c = uVar14;
  uVar12 = *(undefined4 *)&pTVar18->field_0x34;
  uVar13 = *(undefined4 *)&pTVar18->field_0x38;
  uVar14 = *(undefined4 *)&pTVar18->field_0x3c;
  *(undefined4 *)&(this->ExternalCleanUpFunc).field_0x20 = *(undefined4 *)&pTVar18->field_0x30;
  *(undefined4 *)&(this->ExternalCleanUpFunc).field_0x24 = uVar12;
  *(undefined4 *)&(this->ExternalCleanUpFunc).field_0x28 = uVar13;
  *(undefined4 *)&(this->ExternalCleanUpFunc).field_0x2c = uVar14;
  *(undefined4 *)&pTVar18->field_0x10 = uVar4;
  *(undefined4 *)&pTVar18->field_0x14 = uVar5;
  *(undefined4 *)&pTVar18->field_0x18 = uVar6;
  *(undefined4 *)&pTVar18->field_0x1c = uVar7;
  *(undefined4 *)&pTVar18->field_0x20 = uVar8;
  *(undefined4 *)&pTVar18->field_0x24 = uVar9;
  *(undefined4 *)&pTVar18->field_0x28 = uVar10;
  *(undefined4 *)&pTVar18->field_0x2c = uVar11;
  *(undefined8 *)&pTVar18->field_0x30 = uVar16;
  *(undefined8 *)&pTVar18->field_0x38 = uVar17;
  if (local_58 != 0) {
    plVar19 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar19 = local_30;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (local_68[0] != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_68[0] + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_68[0])(local_68[0],1);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar20 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar20 = local_70;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return false;
}

