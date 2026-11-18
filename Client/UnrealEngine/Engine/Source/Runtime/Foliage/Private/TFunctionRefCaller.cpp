// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 6

// Call @ 145edf0f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGrassInstancedStaticMeshComponent::BuildComponentInstanceData'::__l2::<lambda_1>,void,FISMInstanceUpdateChangeSet_&>
::Call(void *param_1,FISMInstanceUpdateChangeSet *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_28 [32];
  
  iVar5 = (int)param_2->_padding_;
  if ((((char)param_2->_padding_ == '\0') && (*(char *)((longlong)&param_2->_padding_ + 6) == '\0'))
     && (iVar4 = *(int *)((longlong)&param_2->_padding_ + 4) + (int)param_2->_padding_,
        iVar4 != iVar5)) {
    iVar5 = iVar4;
  }
  if ((iVar5 != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChangeSet.GetTransformDelta().IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                         ,0x80,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((int)param_2->_padding_ != 0) && ((param_2->_padding_ & 0x20000) != 0)) {
    iVar5 = (int)param_2->_padding_;
    if (((char)param_2->_padding_ == '\0') &&
       (iVar4 = (int)param_2->_padding_ + (int)param_2->_padding_, iVar4 != iVar5)) {
      iVar5 = iVar4;
    }
    if ((iVar5 != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ChangeSet.GetCustomDataDelta().IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                           ,0x81,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UInstancedStaticMeshComponent::BuildInstanceDataDeltaChangeSetCommon
            (*(UInstancedStaticMeshComponent **)param_1,param_2);
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)param_1 + 0xc58))(*(longlong **)param_1,auStack_28);
  uVar6 = (uint)*puVar3 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar7 = (uint)((ulonglong)*puVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
         (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000) ||
       (uVar6 = (uint)puVar3[1] & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar7 = (uint)((ulonglong)puVar3[1] >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
       (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000)) ||
      (uVar6 = (uint)puVar3[2] & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar7 = (uint)((ulonglong)puVar3[2] >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
      (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetTranslatedInstanceSpaceOrigin().IsNearlyZero()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                         ,0x84,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(int *)(*(longlong *)param_1 + 0x660) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PerInstanceSMData.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                         ,0x85,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(int *)(*(longlong *)param_1 + 0x670) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PerInstancePrevTransform.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                         ,0x86,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(int *)(*(longlong *)param_1 + 0x728) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceReorderTable.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                         ,0x88,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_2->LegacyInstanceReorderTable).ArrayNum != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChangeSet.LegacyInstanceReorderTable.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedGrass.cpp"
                         ,0x89,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Call @ 145edf100

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TAsyncRunnable<UProceduralFoliageTile_*>::Run'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145edf132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}

// Call @ 145edf150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInteractiveFoliageSceneProxy::UpdateParameters_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x10);
  *(undefined8 *)(lVar1 + 0xb88) = *(undefined8 *)((longlong)param_1 + 8);
  *(undefined8 *)(lVar1 + 0xb90) = uVar2;
  *(undefined8 *)(lVar1 + 0xb98) = *(undefined8 *)((longlong)param_1 + 0x18);
  lVar1 = *(longlong *)param_1;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x28);
  *(undefined8 *)(lVar1 + 0xba0) = *(undefined8 *)((longlong)param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0xba8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)(lVar1 + 0xbb0) = *(undefined8 *)((longlong)param_1 + 0x30);
  *(undefined8 *)(lVar1 + 3000) = uVar2;
  return;
}

// Call @ 145edf190

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`TAsyncRunnable<UProceduralFoliageTile_*>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 145edf1b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UProceduralFoliageSpawner::Simulate'::__l4::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<UProceduralFoliageTile_*,TUniqueFunction<UProceduralFoliageTile_*___cdecl(void)>_&>
            ((TPromise<UProceduralFoliageTile_*> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 145edf1d0

UProceduralFoliageTile * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UProceduralFoliageSpawner::Simulate'::__l4::<lambda_1>,UProceduralFoliageTile_*>
::Call(void *param_1)

{
  int iVar1;
  int iVar2;
  UProceduralFoliageTile *this;
  UProceduralFoliageSpawner *pUVar3;
  
  this = *(UProceduralFoliageTile **)((longlong)param_1 + 8);
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  iVar2 = *(int *)((longlong)param_1 + 0x10);
  pUVar3 = *(UProceduralFoliageSpawner **)param_1;
  this->LastCancel = *(int *)((longlong)param_1 + 0x18);
  UProceduralFoliageTile::InitSimulation(this,pUVar3,iVar2);
  UProceduralFoliageTile::RunSimulation(this,iVar1,false);
  UProceduralFoliageTile::RunSimulation(this,iVar1,true);
  return *(UProceduralFoliageTile **)((longlong)param_1 + 8);
}

