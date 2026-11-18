// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// Remove @ 143ca6f90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::
TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
::Remove(TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
         *this,TGeometryParticleHandleImp<double,3,1> *param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int> *pTVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  TGeometryParticleHandleImp<double,3,1> *local_res8;
  
  pTVar3 = TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
                   *)this,param_1);
  puVar6 = (uint *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int> *)0x0) {
    puVar6 = (uint *)0x0;
  }
  if (puVar6 != (uint *)0x0) {
    uVar4 = *puVar6;
    uVar5 = 0;
    if ((int)(uVar4 + 1) <= (this->DenseVals).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TArray<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAtSwapImpl(&this->DenseVals,uVar4,1);
    if (param_2 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1a0,0x10,&(this->DenseVals).AllocatorInstance,(this->DenseVals).ArrayNum,
                 &(this->DenseVals).ArrayMax);
    }
    uVar4 = *puVar6;
    if ((int)uVar4 < (this->DenseVals).ArrayNum) {
      if ((int)uVar4 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar5 = *puVar6;
      pTVar3 = TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
                       *)this,*(TGeometryParticleHandleImp<double,3,1> **)
                               ((this->DenseVals).AllocatorInstance.Data +
                               (longlong)(int)uVar4 * 0x1a0 + 0x180));
      if (pTVar3 == (TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *(uint *)&pTVar3->field_0x8 = uVar5;
    }
    if (*(int *)&(this->KeyToIdx).field_0x8 != *(int *)&(this->KeyToIdx).field_0x34) {
      uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      local_res8 = param_1;
      TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
      ::RemoveImpl<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*>
                ((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
                  *)this,uVar4 >> 0x10 ^ uVar4,&local_res8);
    }
  }
  return;
}

// Remove @ 1440a06e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::
TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
::Remove(TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
         *this,FPBDJointConstraintHandle *param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<Chaos::FPBDJointConstraintHandle_const_*,int> *pTVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  FPBDJointConstraintHandle *local_res8;
  
  pTVar3 = TSet<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FPBDJointConstraintHandle_const_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FPBDJointConstraintHandle_const_*,int,0>,FDefaultSetAllocator>
                   *)this,param_1);
  puVar6 = (uint *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<Chaos::FPBDJointConstraintHandle_const_*,int> *)0x0) {
    puVar6 = (uint *)0x0;
  }
  if (puVar6 != (uint *)0x0) {
    uVar4 = *puVar6;
    uVar5 = 0;
    if ((int)(uVar4 + 1) <= (this->DenseVals).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TArray<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>,TSizedDefaultAllocator<32>_>
    ::RemoveAtSwapImpl(&this->DenseVals,uVar4,1);
    if (param_2 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,&(this->DenseVals).AllocatorInstance,(this->DenseVals).ArrayNum,
                 &(this->DenseVals).ArrayMax);
    }
    uVar4 = *puVar6;
    if ((int)uVar4 < (this->DenseVals).ArrayNum) {
      if ((int)uVar4 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar5 = *puVar6;
      pTVar3 = TSet<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FPBDJointConstraintHandle_const_*,int,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FPBDJointConstraintHandle_const_*,int,0>,FDefaultSetAllocator>
                       *)this,*(FPBDJointConstraintHandle **)
                               ((this->DenseVals).AllocatorInstance.Data +
                               (longlong)(int)uVar4 * 0x60 + 0x40));
      if (pTVar3 == (TTuple<Chaos::FPBDJointConstraintHandle_const_*,int> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *(uint *)&pTVar3->field_0x8 = uVar5;
    }
    if (*(int *)&(this->KeyToIdx).field_0x8 != *(int *)&(this->KeyToIdx).field_0x34) {
      uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      local_res8 = param_1;
      TSet<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FPBDJointConstraintHandle_const_*,int,0>,FDefaultSetAllocator>
      ::RemoveImpl<Chaos::FPBDJointConstraintHandle_const_*>
                ((TSet<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FPBDJointConstraintHandle_const_*,int,0>,FDefaultSetAllocator>
                  *)this,uVar4 >> 0x10 ^ uVar4,&local_res8);
    }
  }
  return;
}

// Add @ 1440d17f0

TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_> *
__thiscall
Chaos::
TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
::Add(TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
      *this,TGeometryParticleHandleImp<double,3,1> *param_1,
     TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
     *param_2)

{
  TArray<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int> *pTVar5;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *pTVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint local_res8 [2];
  TGeometryParticleHandleImp<double,3,1> *local_res10 [3];
  TGeometryParticleHandleImp<double,3,1> **local_38;
  uint *local_30;
  
  local_res10[0] = param_1;
  pTVar5 = TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
                   *)this,param_1);
  puVar7 = (uint *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int> *)0x0) {
    puVar7 = (uint *)0x0;
  }
  if (puVar7 != (uint *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4501203830188279313>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\RewindData.h"
                       ,0x611,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
                *)(*pcVar3)();
      return pTVar6;
    }
    uVar9 = *puVar7;
    uVar8 = 0;
    if ((int)uVar9 < (this->DenseVals).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  *)(*pcVar3)();
        return pTVar6;
      }
    }
    return (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
            *)((this->DenseVals).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x1a0);
  }
  pTVar1 = &this->DenseVals;
  local_res8[0] = (this->DenseVals).ArrayNum;
  piVar2 = &(this->DenseVals).ArrayMax;
  if (local_res8[0] == *piVar2) {
    local_res8[0] =
         UE::Core::Private::
         ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1a0,0x10,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->DenseVals).ArrayNum = local_res8[0] + 1;
  FRewindData::
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  ::
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
            ((TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
              *)((pTVar1->AllocatorInstance).Data + (longlong)(int)local_res8[0] * 0x1a0),param_2);
  local_38 = local_res10;
  local_30 = local_res8;
  TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_const_&,int_const_&>_>
            ((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_const_&,int_const_&>
                      *)(local_res10 + 2),(bool *)&local_38);
  lVar10 = (longlong)(int)local_res8[0];
  uVar9 = 0;
  if ((int)local_res8[0] < (this->DenseVals).ArrayNum) {
    uVar9 = ~local_res8[0] >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
          *)((pTVar1->AllocatorInstance).Data + lVar10 * 0x1a0);
}

// Add @ 1440d1990

TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> * __thiscall
Chaos::
TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
::Add(TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
      *this,FPBDJointConstraintHandle *param_1,
     TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *param_2)

{
  TArray<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<Chaos::FPBDJointConstraintHandle_const_*,int> *pTVar4;
  TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *pTVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  FScriptContainerElement *pFVar10;
  uint local_res8 [2];
  FPBDJointConstraintHandle *local_res10;
  FPBDJointConstraintHandle **local_28;
  uint *local_20;
  
  local_res10 = param_1;
  pTVar4 = TSet<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FPBDJointConstraintHandle_const_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FPBDJointConstraintHandle_const_*,int,0>,FDefaultSetAllocator>
                   *)this,param_1);
  puVar9 = (uint *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<Chaos::FPBDJointConstraintHandle_const_*,int> *)0x0) {
    puVar9 = (uint *)0x0;
  }
  if (puVar9 != (uint *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4501203830188279313>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\RewindData.h"
                       ,0x611,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)
               (*pcVar2)();
      return pTVar5;
    }
    uVar7 = *puVar9;
    uVar6 = 0;
    if ((int)uVar7 < (this->DenseVals).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)
                 (*pcVar2)();
        return pTVar5;
      }
    }
    return (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)
           ((this->DenseVals).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x60);
  }
  local_res8[0] = (this->DenseVals).ArrayNum;
  pTVar1 = &this->DenseVals;
  if (local_res8[0] == (this->DenseVals).ArrayMax) {
    local_res8[0] =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x860,&pTVar1->AllocatorInstance,&(this->DenseVals).ArrayMax);
  }
  (this->DenseVals).ArrayNum = local_res8[0] + 1;
  pFVar10 = (pTVar1->AllocatorInstance).Data + (longlong)(int)local_res8[0] * 0x60;
  *(int *)pFVar10 = (param_2->History).JointSettings.Next;
  *(int *)(pFVar10 + 4) = (param_2->History).JointSettings.NumValid;
  *(int *)(pFVar10 + 8) = (param_2->History).JointSettings.Capacity;
  *(undefined8 *)(pFVar10 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar10 + 0x10) =
       (param_2->History).JointSettings.Buffer.AllocatorInstance.Data;
  (param_2->History).JointSettings.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar10 + 0x18) = (param_2->History).JointSettings.Buffer.ArrayNum;
  *(int *)(pFVar10 + 0x1c) = (param_2->History).JointSettings.Buffer.ArrayMax;
  (param_2->History).JointSettings.Buffer.ArrayNum = 0;
  (param_2->History).JointSettings.Buffer.ArrayMax = 0;
  (param_2->History).JointSettings.Next = 0;
  (param_2->History).JointSettings.NumValid = 0;
  *(int *)(pFVar10 + 0x20) = (param_2->History).JointProxies.Next;
  *(int *)(pFVar10 + 0x24) = (param_2->History).JointProxies.NumValid;
  *(int *)(pFVar10 + 0x28) = (param_2->History).JointProxies.Capacity;
  *(undefined8 *)(pFVar10 + 0x30) = 0;
  *(FScriptContainerElement **)(pFVar10 + 0x30) =
       (param_2->History).JointProxies.Buffer.AllocatorInstance.Data;
  (param_2->History).JointProxies.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar10 + 0x38) = (param_2->History).JointProxies.Buffer.ArrayNum;
  *(int *)(pFVar10 + 0x3c) = (param_2->History).JointProxies.Buffer.ArrayMax;
  (param_2->History).JointProxies.Buffer.ArrayNum = 0;
  (param_2->History).JointProxies.Buffer.ArrayMax = 0;
  (param_2->History).JointProxies.Next = 0;
  (param_2->History).JointProxies.NumValid = 0;
  *(FPBDJointConstraintHandle **)(pFVar10 + 0x40) = param_2->ObjPtr;
  *(FDirtyPropertiesPool **)(pFVar10 + 0x48) = param_2->PropertiesPool;
  *(undefined4 *)(pFVar10 + 0x50) = 0xffffffff;
  *(int *)(pFVar10 + 0x54) = param_2->LastDirtyFrame;
  *(int *)(pFVar10 + 0x58) = param_2->InitializedOnStep;
  pFVar10[0x5c] = (FScriptContainerElement)param_2->bResimAsFollower;
  pFVar10[0x5d] = (FScriptContainerElement)param_2->bNeedsResim;
  local_28 = &local_res10;
  local_20 = local_res8;
  param_2->PropertiesPool = (FDirtyPropertiesPool *)0x0;
  TSet<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FPBDJointConstraintHandle_const_*,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<Chaos::FPBDJointConstraintHandle_const_*_const_&,int_const_&>_>
            ((TSet<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FPBDJointConstraintHandle_const_*,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<Chaos::FPBDJointConstraintHandle_const_*_const_&,int_const_&>
                      *)&stack0x00000020,(bool *)&local_28);
  lVar8 = (longlong)(int)local_res8[0];
  uVar7 = 0;
  if ((int)local_res8[0] < (this->DenseVals).ArrayNum) {
    uVar7 = ~local_res8[0] >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  return (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)
         ((pTVar1->AllocatorInstance).Data + lVar8 * 0x60);
}

// Add @ 1440d1be0

FDirtyParticleErrorInfo * __thiscall
Chaos::TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo>::Add
          (TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo> *this,
          TGeometryParticleHandleImp<double,3,1> *param_1,FDirtyParticleErrorInfo *param_2)

{
  TArray<Chaos::FRewindData::FDirtyParticleErrorInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  double dVar5;
  bool bVar6;
  TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int> *pTVar7;
  FDirtyParticleErrorInfo *pFVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint local_res8 [2];
  TGeometryParticleHandleImp<double,3,1> *local_res10;
  TGeometryParticleHandleImp<double,3,1> **local_28;
  uint *local_20;
  
  local_res10 = param_1;
  pTVar7 = TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
                   *)this,param_1);
  puVar10 = (uint *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int> *)0x0) {
    puVar10 = (uint *)0x0;
  }
  if (puVar10 != (uint *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4501203830188279313>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\RewindData.h"
                       ,0x611,"false");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FDirtyParticleErrorInfo *)(*pcVar3)();
      return pFVar8;
    }
    uVar12 = *puVar10;
    uVar11 = 0;
    if ((int)uVar12 < (this->DenseVals).ArrayNum) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FDirtyParticleErrorInfo *)(*pcVar3)();
        return pFVar8;
      }
    }
    return (FDirtyParticleErrorInfo *)
           ((this->DenseVals).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x40);
  }
  local_res8[0] = (this->DenseVals).ArrayNum;
  pTVar1 = &this->DenseVals;
  if (local_res8[0] == (this->DenseVals).ArrayMax) {
    local_res8[0] =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1040,&pTVar1->AllocatorInstance,&(this->DenseVals).ArrayMax);
  }
  (this->DenseVals).ArrayNum = local_res8[0] + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  uVar4 = *(undefined8 *)&param_2->ErrorX;
  lVar9 = (longlong)(int)local_res8[0] * 0x40;
  *(TGeometryParticleHandleImp<double,3,1> **)(pFVar2 + lVar9) = param_2->HandlePtr;
  *(undefined8 *)(pFVar2 + lVar9 + 8) = uVar4;
  uVar4 = *(undefined8 *)&(param_2->ErrorX).field_0x10;
  *(undefined8 *)(pFVar2 + lVar9 + 0x10) = *(undefined8 *)&(param_2->ErrorX).field_0x8;
  *(undefined8 *)(pFVar2 + lVar9 + 0x10 + 8) = uVar4;
  dVar5 = (param_2->ErrorR).Y;
  *(double *)(pFVar2 + lVar9 + 0x20) = (param_2->ErrorR).X;
  *(double *)(pFVar2 + lVar9 + 0x20 + 8) = dVar5;
  dVar5 = (param_2->ErrorR).W;
  *(double *)(pFVar2 + lVar9 + 0x30) = (param_2->ErrorR).Z;
  *(double *)(pFVar2 + lVar9 + 0x30 + 8) = dVar5;
  local_28 = &local_res10;
  local_20 = local_res8;
  TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_const_&,int_const_&>_>
            ((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_const_&,int_const_&>
                      *)&stack0x00000020,(bool *)&local_28);
  lVar9 = (longlong)(int)local_res8[0];
  uVar12 = 0;
  if ((int)local_res8[0] < (this->DenseVals).ArrayNum) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FDirtyParticleErrorInfo *)(*pcVar3)();
      return pFVar8;
    }
  }
  return (FDirtyParticleErrorInfo *)((pTVar1->AllocatorInstance).Data + lVar9 * 0x40);
}

// Find @ 1440e1140

TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_> *
__thiscall
Chaos::
TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
::Find(TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
       *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int> *pTVar4;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *pTVar5;
  uint uVar6;
  uint *puVar7;
  
  pTVar4 = TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
                   *)this,param_1);
  puVar7 = (uint *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int> *)0x0) {
    puVar7 = (uint *)0x0;
  }
  if (puVar7 != (uint *)0x0) {
    uVar1 = *puVar7;
    uVar6 = 0;
    if ((int)uVar1 < (this->DenseVals).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  *)(*pcVar2)();
        return pTVar5;
      }
    }
    return (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
            *)((this->DenseVals).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x1a0);
  }
  return (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
          *)0x0;
}

// Find @ 1440e11e0

TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> * __thiscall
Chaos::
TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
::Find(TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
       *this,FPBDJointConstraintHandle *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<Chaos::FPBDJointConstraintHandle_const_*,int> *pTVar4;
  TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *pTVar5;
  uint uVar6;
  uint *puVar7;
  
  pTVar4 = TSet<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FPBDJointConstraintHandle_const_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FPBDJointConstraintHandle_const_*,int,0>,FDefaultSetAllocator>
                   *)this,param_1);
  puVar7 = (uint *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<Chaos::FPBDJointConstraintHandle_const_*,int> *)0x0) {
    puVar7 = (uint *)0x0;
  }
  if (puVar7 != (uint *)0x0) {
    uVar1 = *puVar7;
    uVar6 = 0;
    if ((int)uVar1 < (this->DenseVals).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)
                 (*pcVar2)();
        return pTVar5;
      }
    }
    return (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)
           ((this->DenseVals).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x60);
  }
  return (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)0x0;
}

// Find @ 1440e1280

FDirtyParticleErrorInfo * __thiscall
Chaos::TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo>::Find
          (TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo> *this,
          TGeometryParticleHandleImp<double,3,1> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int> *pTVar4;
  FDirtyParticleErrorInfo *pFVar5;
  uint uVar6;
  uint *puVar7;
  
  pTVar4 = TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
                   *)this,param_1);
  puVar7 = (uint *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int> *)0x0) {
    puVar7 = (uint *)0x0;
  }
  if (puVar7 != (uint *)0x0) {
    uVar1 = *puVar7;
    uVar6 = 0;
    if ((int)uVar1 < (this->DenseVals).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FDirtyParticleErrorInfo *)(*pcVar2)();
        return pFVar5;
      }
    }
    return (FDirtyParticleErrorInfo *)
           ((this->DenseVals).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x40);
  }
  return (FDirtyParticleErrorInfo *)0x0;
}

