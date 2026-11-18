// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 17

// NodeIsLeaf @ 143a874e0

bool __thiscall Chaos::Private::FImplicitBVH::NodeIsLeaf(FImplicitBVH *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return *(int *)((this->Nodes).AllocatorInstance.Data + (longlong)param_1 * 0x28 + 0x20) == -1;
}

// FImplicitBVH @ 143b56590

FImplicitBVH * __thiscall
Chaos::Private::FImplicitBVH::FImplicitBVH
          (FImplicitBVH *this,
          TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  (this->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Objects).ArrayNum = 0;
  (this->Objects).ArrayMax = 0;
  (this->NodeObjectIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeObjectIndices).ArrayNum = 0;
  (this->NodeObjectIndices).ArrayMax = 0;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  this->TreeDepth = 0;
  if (this != (FImplicitBVH *)param_1) {
    (this->Objects).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Objects).ArrayNum = param_1->ArrayNum;
    (this->Objects).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  BuildTree(this,param_2,1);
  return this;
}

// FImplicitBVH @ 143b56600

FImplicitBVH * __thiscall Chaos::Private::FImplicitBVH::FImplicitBVH(FImplicitBVH *this)

{
  (this->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Objects).ArrayNum = 0;
  (this->Objects).ArrayMax = 0;
  (this->NodeObjectIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeObjectIndices).ArrayNum = 0;
  (this->NodeObjectIndices).ArrayMax = 0;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  this->TreeDepth = 0;
  return this;
}

// ~FImplicitBVH @ 143b57fe0

void __thiscall Chaos::Private::FImplicitBVH::~FImplicitBVH(FImplicitBVH *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NodeObjectIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Objects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 143b588c0

void __thiscall
`Chaos::Private::FImplicitBVH::CollectLeafObjects'::__l4::<lambda_1>::operator()
          (void *this,FImplicitObject *param_1,TRigidTransform<double,3> *param_2,int param_3,
          int param_4,int param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ForAnyElementType *pFVar7;
  FScriptContainerElement *pFVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  double *pdVar14;
  longlong lVar15;
  undefined1 local_80 [104];
  
  pFVar7 = *(ForAnyElementType **)((longlong)this + 8);
  uVar5 = *(undefined4 *)this;
  uVar6 = *(undefined4 *)&pFVar7[1].Data;
  pdVar14 = (double *)(**(code **)(param_1->_padding_ + 0x98))(param_1,local_80);
  dVar2 = *(double *)&param_2->field_0x30;
  piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
  dVar3 = *(double *)param_2;
  dVar4 = *(double *)&param_2->field_0x8;
  iVar13 = *(int *)&pFVar7[1].Data;
  dVar9 = *(double *)&param_2->field_0x10;
  dVar10 = *(double *)&param_2->field_0x18;
  dVar11 = *(double *)&param_2->field_0x20;
  dVar12 = *(double *)&param_2->field_0x28;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x848,pFVar7,piVar1);
  }
  *(int *)&pFVar7[1].Data = iVar13 + 1;
  lVar15 = (longlong)iVar13;
  pFVar8 = pFVar7->Data;
  *(float *)(pFVar8 + lVar15 * 0x48) = (float)dVar3;
  *(float *)(pFVar8 + lVar15 * 0x48 + 4) = (float)dVar4;
  *(float *)(pFVar8 + lVar15 * 0x48 + 8) = (float)dVar9;
  *(float *)(pFVar8 + lVar15 * 0x48 + 0xc) = (float)dVar10;
  *(float *)(pFVar8 + lVar15 * 0x48 + 0x18) = (float)dVar2;
  *(float *)(pFVar8 + lVar15 * 0x48 + 0x10) = (float)dVar11;
  *(float *)(pFVar8 + lVar15 * 0x48 + 0x14) = (float)dVar12;
  dVar2 = pdVar14[1];
  dVar3 = *pdVar14;
  *(float *)(pFVar8 + lVar15 * 0x48 + 0x24) = (float)pdVar14[2];
  *(float *)(pFVar8 + lVar15 * 0x48 + 0x20) = (float)dVar2;
  *(float *)(pFVar8 + lVar15 * 0x48 + 0x1c) = (float)dVar3;
  dVar2 = pdVar14[5];
  dVar3 = pdVar14[4];
  dVar4 = pdVar14[3];
  *(undefined4 *)(pFVar8 + lVar15 * 0x48 + 0x34) = uVar5;
  *(float *)(pFVar8 + lVar15 * 0x48 + 0x30) = (float)dVar2;
  *(float *)(pFVar8 + lVar15 * 0x48 + 0x2c) = (float)dVar3;
  *(float *)(pFVar8 + lVar15 * 0x48 + 0x28) = (float)dVar4;
  *(FImplicitObject **)(pFVar8 + lVar15 * 0x48 + 0x38) = param_1;
  *(undefined4 *)(pFVar8 + lVar15 * 0x48 + 0x40) = uVar6;
  return;
}

// AddNodeRecursive @ 143b5d3c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
Chaos::Private::FImplicitBVH::AddNodeRecursive
          (FImplicitBVH *this,TAABB<float,3> *param_1,int param_2,int param_3,int param_4,
          int param_5,int param_6,FWorkData *param_7)

{
  TArray<Chaos::Private::FImplicitBVHNode,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  TAABB<float,3> local_68;
  TAABB<float,3> local_50;
  
  uVar7 = (this->Nodes).ArrayNum;
  pTVar1 = &this->Nodes;
  piVar2 = &(this->Nodes).ArrayMax;
  if (uVar7 == *piVar2) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x428,&pTVar1->AllocatorInstance,piVar2);
  }
  iVar5 = param_5;
  lVar11 = (longlong)(int)uVar7;
  (this->Nodes).ArrayNum = uVar7 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar11 * 0x28) = *(undefined8 *)&param_1->MMin;
  *(undefined4 *)(pFVar3 + lVar11 * 0x28 + 8) = *(undefined4 *)&(param_1->MMin).field_0x8;
  *(undefined8 *)(pFVar3 + lVar11 * 0x28 + 0xc) = *(undefined8 *)&param_1->MMax;
  *(undefined4 *)(pFVar3 + lVar11 * 0x28 + 0x14) = *(undefined4 *)&(param_1->MMax).field_0x8;
  *(int *)(pFVar3 + lVar11 * 0x28 + 0x18) = param_2;
  *(int *)(pFVar3 + lVar11 * 0x28 + 0x1c) = param_3;
  *(undefined8 *)(pFVar3 + lVar11 * 0x28 + 0x20) = 0xffffffffffffffff;
  iVar10 = param_4 + 1;
  iVar8 = this->TreeDepth;
  if (this->TreeDepth < iVar10) {
    iVar8 = iVar10;
  }
  this->TreeDepth = iVar8;
  if (param_6 < param_3 - param_2) {
    if (param_4 < param_5 + -1) {
      local_68.MMax._4_4_ = 0xff7fffff;
      local_68.MMax._8_4_ = 0xff7fffff;
      local_68.MMin._0_8_ = ___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
      local_68.MMin._8_4_ = _UNK_150a9e6b8;
      local_68.MMax._0_4_ = _UNK_150a9e6bc;
      local_50.MMax._4_4_ = 0xff7fffff;
      local_50.MMin._0_8_ = ___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
      local_50.MMin._8_4_ = _UNK_150a9e6b8;
      local_50.MMax._0_4_ = _UNK_150a9e6bc;
      local_50.MMax._8_4_ = 0xff7fffff;
      bVar6 = Partition(this,param_1,param_2,param_3,&local_68,&local_50,&param_4,param_7);
      iVar8 = param_4;
      if (bVar6) {
        iVar9 = AddNodeRecursive(this,&local_68,param_2,param_4,iVar10,iVar5,param_6,param_7);
        uVar12 = 0;
        if ((int)uVar7 < (this->Nodes).ArrayNum) {
          uVar12 = ~uVar7 >> 0x1f;
        }
        if (uVar12 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            iVar10 = (*pcVar4)();
            return iVar10;
          }
        }
        *(int *)((pTVar1->AllocatorInstance).Data + lVar11 * 0x28 + 0x20) = iVar9;
        iVar10 = AddNodeRecursive(this,&local_50,iVar8,param_3,iVar10,iVar5,param_6,param_7);
        uVar12 = 0;
        if ((int)uVar7 < (this->Nodes).ArrayNum) {
          uVar12 = ~uVar7 >> 0x1f;
        }
        if (uVar12 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            iVar10 = (*pcVar4)();
            return iVar10;
          }
        }
        *(int *)((pTVar1->AllocatorInstance).Data + lVar11 * 0x28 + 0x24) = iVar10;
      }
    }
    return uVar7;
  }
  return uVar7;
}

// BuildTree @ 143b5f260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Chaos::Private::FImplicitBVH::BuildTree(FImplicitBVH *this,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_private:_void___cdecl_Chaos::Private::FImplicitBVH::BuildTree(int,int)_::_2_::FStat_Chaos_FImplicitBVH_BuildTree>
  FVar16;
  FName FVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  FColor_u_0 local_res20 [2];
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  FWorkData local_f0;
  FName local_c0;
  FName local_b8;
  FScriptContainerElement *local_a8;
  FName local_a0;
  FName local_98 [11];
  
  uVar20 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_Chaos_FImplicitBVH_BuildTree ==
        (FThreadSafeStaticStat<_private:_void___cdecl_Chaos::Private::FImplicitBVH::BuildTree(int,int)_::_2_::FStat_Chaos_FImplicitBVH_BuildTree>
         )0x0) {
      pFVar15 = ::FName::FName(&local_a0,"Chaos_FImplicitBVH_BuildTree");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_Chaos_FImplicitBVH_BuildTree,*pFVar15,
                 L"Chaos_FImplicitBVH_BuildTree","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_Chaos_FImplicitBVH_BuildTree;
  if (StatPtr_Chaos_FImplicitBVH_BuildTree ==
      (FThreadSafeStaticStat<_private:_void___cdecl_Chaos::Private::FImplicitBVH::BuildTree(int,int)_::_2_::FStat_Chaos_FImplicitBVH_BuildTree>
       )0x0) {
    pFVar15 = ::FName::FName(local_98,"Chaos_FImplicitBVH_BuildTree");
    FVar16 = (FThreadSafeStaticStat<_private:_void___cdecl_Chaos::Private::FImplicitBVH::BuildTree(int,int)_::_2_::FStat_Chaos_FImplicitBVH_BuildTree>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_Chaos_FImplicitBVH_BuildTree,
                          *pFVar15,L"Chaos_FImplicitBVH_BuildTree","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar16;
  bVar10 = false;
  bVar9 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar13 = false;
  bVar12 = false;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar13 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c0.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_c0.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObjectBVH.cpp"
                   ,0x9c);
        bVar10 = true;
        bVar9 = true;
        bVar13 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar12 = true;
      goto LAB_143b5f3d9;
    }
  }
  bVar10 = bVar13;
  bVar9 = bVar12;
  bVar12 = false;
  FVar17 = local_b8;
LAB_143b5f3d9:
  (this->Nodes).ArrayNum = 0;
  if ((this->Nodes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,&(this->Nodes).AllocatorInstance,0,&(this->Nodes).ArrayMax);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->NodeObjectIndices,(this->Objects).ArrayNum,Default);
  local_108 = (undefined1  [8])___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
  fStack_100 = (float)_UNK_150a9e6b8;
  fStack_fc = (float)_UNK_150a9e6bc;
  local_f8 = -3.4028235e+38;
  local_f4 = -3.4028235e+38;
  local_f0.ObjectCenters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ObjectCenters.ArrayNum = 0;
  local_f0.ObjectCenters.ArrayMax = 0;
  local_f0.NodeObjectIndices0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.NodeObjectIndices0.ArrayNum = 0;
  local_f0.NodeObjectIndices0.ArrayMax = 0;
  local_f0.NodeObjectIndices1.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.NodeObjectIndices1.ArrayNum = 0;
  local_f0.NodeObjectIndices1.ArrayMax = 0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_f0.ObjectCenters,(this->Objects).ArrayNum,Default);
  uVar14 = (this->Objects).ArrayNum;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (local_f0.NodeObjectIndices0.ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,&local_f0.NodeObjectIndices0.AllocatorInstance,
               local_f0.NodeObjectIndices0.ArrayNum,&local_f0.NodeObjectIndices0.ArrayMax);
  }
  uVar14 = (this->Objects).ArrayNum;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (local_f0.NodeObjectIndices1.ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,&local_f0.NodeObjectIndices1.AllocatorInstance,
               local_f0.NodeObjectIndices1.ArrayNum,&local_f0.NodeObjectIndices1.ArrayMax);
  }
  fVar11 = __real_3f000000;
  iVar21 = (this->Objects).ArrayNum;
  uVar22 = uVar20;
  uVar23 = uVar20;
  uVar24 = uVar20;
  if (0 < iVar21) {
    do {
      uVar19 = (uint)uVar20;
      uVar18 = ~uVar19 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar19 < iVar21) {
        uVar14 = uVar18;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_a8 = (this->Objects).AllocatorInstance.Data;
      uVar14 = 0;
      if ((int)uVar19 < (this->NodeObjectIndices).ArrayNum) {
        uVar14 = uVar18;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(uint *)((this->NodeObjectIndices).AllocatorInstance.Data + uVar23 * 4) = uVar19;
      fVar1 = *(float *)(local_a8 + uVar22 + 0x1c);
      fVar2 = *(float *)(local_a8 + uVar22 + 0x24);
      fVar26 = fVar1;
      if ((float)local_108._0_4_ <= fVar1) {
        fVar26 = (float)local_108._0_4_;
      }
      fVar3 = *(float *)(local_a8 + uVar22 + 0x20);
      fVar4 = *(float *)(local_a8 + uVar22 + 0x28);
      fVar25 = fVar3;
      if ((float)local_108._4_4_ <= fVar3) {
        fVar25 = (float)local_108._4_4_;
      }
      fVar5 = *(float *)(local_a8 + uVar22 + 0x30);
      fVar6 = *(float *)(local_a8 + uVar22 + 0x2c);
      fVar7 = fVar2;
      if (fStack_100 <= fVar2) {
        fVar7 = fStack_100;
      }
      local_108._4_4_ = fVar25;
      local_108._0_4_ = fVar26;
      fVar26 = *(float *)(local_a8 + uVar22 + 0x2c);
      if (*(float *)(local_a8 + uVar22 + 0x2c) <= local_f8) {
        fVar26 = local_f8;
      }
      if (fStack_fc <= fVar4) {
        fStack_fc = fVar4;
      }
      fStack_100 = fVar7;
      fVar25 = *(float *)(local_a8 + uVar22 + 0x30);
      if (*(float *)(local_a8 + uVar22 + 0x30) <= local_f4) {
        fVar25 = local_f4;
      }
      uVar14 = 0;
      if ((int)uVar19 < local_f0.ObjectCenters.ArrayNum) {
        uVar14 = uVar18;
      }
      local_f8 = fVar26;
      local_f4 = fVar25;
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar20 = (ulonglong)(uVar19 + 1);
      *(float *)(local_f0.ObjectCenters.AllocatorInstance.Data + uVar24) =
           (fVar4 - fVar1) * fVar11 + fVar1;
      *(float *)(local_f0.ObjectCenters.AllocatorInstance.Data + uVar24 + 4) =
           (fVar6 - fVar3) * fVar11 + fVar3;
      *(float *)(local_f0.ObjectCenters.AllocatorInstance.Data + uVar24 + 8) =
           (fVar5 - fVar2) * fVar11 + fVar2;
      iVar21 = (this->Objects).ArrayNum;
      uVar22 = uVar22 + 0x48;
      uVar23 = uVar23 + 1;
      uVar24 = uVar24 + 0xc;
    } while ((int)(uVar19 + 1) < iVar21);
  }
  AddNodeRecursive(this,(TAABB<float,3> *)local_108,0,iVar21,0,param_1,param_2,&local_f0);
  if (local_f0.NodeObjectIndices1.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.NodeObjectIndices1.AllocatorInstance.Data);
  }
  if (local_f0.NodeObjectIndices0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.NodeObjectIndices0.AllocatorInstance.Data);
  }
  if (local_f0.ObjectCenters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.ObjectCenters.AllocatorInstance.Data);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

// CollectLeafObject @ 143b5ff70

void __cdecl
Chaos::Private::FImplicitBVH::CollectLeafObject
          (FImplicitObject *param_1,TRigidTransform<double,3> *param_2,int param_3,
          TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_> *param_4,
          int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  double *pdVar10;
  longlong lVar11;
  undefined1 local_70 [104];
  
  pdVar10 = (double *)(**(code **)(param_1->_padding_ + 0x98))(param_1,local_70,param_2);
  dVar1 = *(double *)&param_2->field_0x30;
  dVar2 = *(double *)param_2;
  dVar3 = *(double *)&param_2->field_0x8;
  iVar9 = param_4->ArrayNum;
  dVar5 = *(double *)&param_2->field_0x10;
  dVar6 = *(double *)&param_2->field_0x18;
  dVar7 = *(double *)&param_2->field_0x20;
  dVar8 = *(double *)&param_2->field_0x28;
  if (iVar9 == param_4->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar9 + 1;
  pFVar4 = (param_4->AllocatorInstance).Data;
  lVar11 = (longlong)iVar9;
  *(float *)(pFVar4 + lVar11 * 0x48) = (float)dVar2;
  *(float *)(pFVar4 + lVar11 * 0x48 + 4) = (float)dVar3;
  *(float *)(pFVar4 + lVar11 * 0x48 + 8) = (float)dVar5;
  *(float *)(pFVar4 + lVar11 * 0x48 + 0xc) = (float)dVar6;
  *(float *)(pFVar4 + lVar11 * 0x48 + 0x10) = (float)dVar7;
  *(float *)(pFVar4 + lVar11 * 0x48 + 0x18) = (float)dVar1;
  *(float *)(pFVar4 + lVar11 * 0x48 + 0x14) = (float)dVar8;
  dVar1 = pdVar10[1];
  dVar2 = *pdVar10;
  *(float *)(pFVar4 + lVar11 * 0x48 + 0x24) = (float)pdVar10[2];
  *(float *)(pFVar4 + lVar11 * 0x48 + 0x20) = (float)dVar1;
  *(float *)(pFVar4 + lVar11 * 0x48 + 0x1c) = (float)dVar2;
  dVar1 = pdVar10[5];
  dVar2 = pdVar10[4];
  dVar3 = pdVar10[3];
  *(int *)(pFVar4 + lVar11 * 0x48 + 0x34) = param_3;
  *(float *)(pFVar4 + lVar11 * 0x48 + 0x30) = (float)dVar1;
  *(float *)(pFVar4 + lVar11 * 0x48 + 0x2c) = (float)dVar2;
  *(float *)(pFVar4 + lVar11 * 0x48 + 0x28) = (float)dVar3;
  *(FImplicitObject **)(pFVar4 + lVar11 * 0x48 + 0x38) = param_1;
  *(int *)(pFVar4 + lVar11 * 0x48 + 0x40) = param_5;
  return;
}

// CollectLeafObjects @ 143b60110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_> * __cdecl
Chaos::Private::FImplicitBVH::CollectLeafObjects
          (TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStackY_f8 [32];
  undefined4 local_c4;
  uint local_c0 [2];
  TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_> *local_b8;
  code *local_b0;
  uint *local_a8;
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar9 = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar5 = CountLeafObjects(param_1);
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (*piVar1 < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar5,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
  }
  iVar7 = param_1->ArrayNum;
  uVar10 = uVar9;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar6;
      }
      plVar2 = *(longlong **)((longlong)&param_1->DataPtr->Reference + uVar10);
      local_a8 = local_c0;
      local_98[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      local_98[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      local_88[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      local_88[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      local_b0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::Private::FImplicitBVH::CollectLeafObjects'::__l4::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
                 ::Call;
      local_78[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      local_78[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      local_68[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      local_68[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      local_c4 = 0;
      local_58[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      local_58[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      local_48[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      local_48[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      local_c0[0] = uVar8;
      local_b8 = __return_storage_ptr__;
      (**(code **)(*plVar2 + 0x140))(plVar2,local_98,0xffffffff,&local_c4);
      iVar7 = param_1->ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 8;
    } while ((int)(uVar8 + 1) < iVar7);
  }
  return __return_storage_ptr__;
}

// CountLeafObjects @ 143b61100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int __cdecl
Chaos::Private::FImplicitBVH::CountLeafObjects
          (TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *param_1)

{
  TRefCountPtr<Chaos::FImplicitObject> *pTVar1;
  int iVar2;
  TRefCountPtr<Chaos::FImplicitObject> *pTVar3;
  undefined1 auStack_d8 [32];
  int *local_b8;
  code **local_b0;
  int local_a8 [4];
  int *local_98;
  code *local_90;
  int **local_88;
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pTVar3 = param_1->DataPtr;
  local_a8[0] = 0;
  pTVar1 = pTVar3 + param_1->ArrayNum;
  if (CVars::bChaosImplicitBVHOptimizedCountLeafObjects) {
    if (pTVar3 != pTVar1) {
      do {
        iVar2 = (**(code **)(pTVar3->Reference->_padding_ + 0x130))();
        pTVar3 = pTVar3 + 1;
        local_a8[0] = local_a8[0] + iVar2;
      } while (pTVar3 != pTVar1);
      return local_a8[0];
    }
  }
  else if (pTVar3 != pTVar1) {
    do {
      local_98 = local_a8;
      local_b0 = &local_90;
      local_b8 = local_a8 + 1;
      local_78[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      local_78[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      local_88 = &local_98;
      local_68[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      local_68[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      local_90 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::Private::FImplicitBVH::CountLeafObjects'::__l15::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
                 ::Call;
      local_58[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      local_58[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      local_48[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      local_48[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      local_a8[1] = 0;
      local_a8[2] = 0;
      local_38[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      local_38[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      local_28[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      local_28[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      (**(code **)(pTVar3->Reference->_padding_ + 0x140))
                (pTVar3->Reference,local_78,0xffffffff,local_a8 + 2);
      pTVar3 = pTVar3 + 1;
    } while (pTVar3 != pTVar1);
    return local_a8[0];
  }
  return 0;
}

// Init @ 143b69b40

void __thiscall
Chaos::Private::FImplicitBVH::Init
          (FImplicitBVH *this,
          TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  
  if (this != (FImplicitBVH *)param_1) {
    pFVar1 = (this->Objects).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Objects).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Objects).ArrayNum = param_1->ArrayNum;
    (this->Objects).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  BuildTree(this,param_2,param_3);
  return;
}

// IsOverlappingBoundsStack @ 143b69d10

bool __thiscall
Chaos::Private::FImplicitBVH::IsOverlappingBoundsStack(FImplicitBVH *this,TAABB<float,3> *param_1)

{
  TVector<float,3> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  TVector<float,3> *pTVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  undefined1 local_res8 [8];
  ForElementType<int> local_78;
  uint local_70;
  int local_6c;
  code *local_68;
  undefined1 *local_60;
  FMemMark local_58;
  
  if ((this->Nodes).ArrayNum == 0) {
    return false;
  }
  puVar7 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_60 = local_res8;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar8 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,puVar7);
  uVar15 = 0;
  local_78.Data = (int *)0x0;
  local_70 = 0;
  local_58.Mem = (FMemStackBase *)(pFVar8 + 2);
  local_6c = 0;
  local_58.Top = (local_58.Mem)->Top;
  local_58.SavedChunk = *(FTaggedMemory **)(pFVar8 + 4);
  local_58.bPopped = false;
  local_58.NextTopmostMark = *(FMemMark **)(pFVar8 + 5);
  pFVar8[5] = (FTlsAutoCleanup)&local_58;
  *(int *)(pFVar8 + 6) = *(int *)(pFVar8 + 6) + 1;
  uVar13 = this->TreeDepth;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  uVar10 = uVar15;
  if (0 < (int)uVar13) {
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<int>_>
              (4,4,uVar13,&local_78,0,&local_6c);
    uVar10 = (ulonglong)local_70;
  }
  pTVar1 = &param_1->MMax;
  uVar12 = uVar15;
LAB_143b69e00:
  do {
    iVar6 = (int)uVar10;
    uVar11 = (uint)uVar12;
    uVar13 = 0;
    if ((int)uVar11 < (this->Nodes).ArrayNum) {
      uVar13 = ~uVar11 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar14 = (this->Nodes).AllocatorInstance.Data;
    pTVar9 = pTVar1;
    uVar10 = uVar15;
    do {
      if ((*(float *)pTVar9 <=
           *(float *)(pFVar14 + ((longlong)(int)uVar11 * 0x28 - (longlong)pTVar1) + (longlong)pTVar9
                     ) &&
           *(float *)(pFVar14 + ((longlong)(int)uVar11 * 0x28 - (longlong)pTVar1) + (longlong)pTVar9
                     ) != *(float *)pTVar9) ||
         (*(float *)(pFVar14 + ((longlong)(int)uVar11 * 0x28 - (longlong)pTVar1) + 0xc +
                    (longlong)pTVar9) < *(float *)&((TAABB<float,3> *)(pTVar9 + -1))->MMin)) {
        if (iVar6 == 0) {
          bVar3 = false;
          goto LAB_143b69fe8;
        }
        if (iVar6 < 1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        uVar13 = iVar6 - 1;
        uVar12 = (ulonglong)*(uint *)(local_78.Data + (int)uVar13);
        iVar6 = (iVar6 - uVar13) + -1;
        if (iVar6 != 0) {
          memmove((FScriptContainerElement *)(local_78.Data + (int)uVar13),
                  (FScriptContainerElement *)(local_78.Data + (int)uVar13) + 4,(longlong)iVar6 << 2)
          ;
        }
        uVar10 = (ulonglong)uVar13;
        local_70 = uVar13;
        goto LAB_143b69e00;
      }
      uVar10 = uVar10 + 1;
      pTVar9 = (TVector<float,3> *)&pTVar9->field_0x4;
    } while ((longlong)uVar10 < 3);
    if (*(int *)(pFVar14 + (longlong)(int)uVar11 * 0x28 + 0x20) == -1) {
      bVar3 = true;
LAB_143b69fe8:
      if (local_58.bPopped == false) {
        if ((local_58.Mem)->TopMark != &local_58) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mem.TopMark == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                             ,0x215,L"");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        local_58.bPopped = true;
        (local_58.Mem)->NumMarks = (local_58.Mem)->NumMarks + -1;
        if (local_58.SavedChunk != (local_58.Mem)->TopChunk) {
          FMemStackBase::FreeChunks(local_58.Mem,local_58.SavedChunk);
        }
        (local_58.Mem)->Top = local_58.Top;
        (local_58.Mem)->TopMark = local_58.NextTopmostMark;
      }
      return bVar3;
    }
    if (this->TreeDepth <= iVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeStack.Num() < GetDepth()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectBVH.h"
                         ,0x19a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar12 = (ulonglong)*(uint *)(pFVar14 + (longlong)(int)uVar11 * 0x28 + 0x20);
    pFVar14 = pFVar14 + (longlong)(int)uVar11 * 0x28 + 0x24;
    if ((local_78.Data <= pFVar14) &&
       (pFVar14 < (FScriptContainerElement *)(local_78.Data + local_6c))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (iVar6 == local_6c) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<int>_>
                        (0x404,&local_78,&local_6c);
    }
    uVar10 = (ulonglong)(iVar6 + 1U);
    *(undefined4 *)(local_78.Data + iVar6) = *(undefined4 *)pFVar14;
    local_70 = iVar6 + 1U;
  } while( true );
}

// MakeEmpty @ 143b6a870

TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_> __cdecl
Chaos::Private::FImplicitBVH::MakeEmpty(void)

{
  FScriptContainerElement *pFVar1;
  FImplicitBVH *in_RCX;
  
  pFVar1 = ::operator_new(0x38);
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)pFVar1 = 0;
    *(undefined8 *)(pFVar1 + 8) = 0;
    *(undefined8 *)(pFVar1 + 0x10) = 0;
    *(undefined8 *)(pFVar1 + 0x18) = 0;
    *(undefined8 *)(pFVar1 + 0x20) = 0;
    *(undefined8 *)(pFVar1 + 0x28) = 0;
    *(undefined4 *)(pFVar1 + 0x30) = 0;
    (in_RCX->Objects).AllocatorInstance.Data = pFVar1;
    return (TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_>)
           in_RCX;
  }
  (in_RCX->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  return (TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_>)
         in_RCX;
}

// Partition @ 143b6aec0

bool __thiscall
Chaos::Private::FImplicitBVH::Partition
          (FImplicitBVH *this,TAABB<float,3> *param_1,int param_2,int param_3,
          TAABB<float,3> *param_4,TAABB<float,3> *param_5,int *param_6,FWorkData *param_7)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  TAABB<float,3> *pTVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar21;
  int iVar22;
  longlong lVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint local_c8;
  undefined1 local_c4;
  undefined1 local_c3 [3];
  uint local_c0;
  int local_bc;
  float local_b8 [4];
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  
  uVar1 = __real_ff7fffff;
  uVar24 = CONCAT44(__real_ff7fffff,__real_ff7fffff);
  uVar18 = (ulonglong)param_2;
  *(undefined4 *)&param_4->MMin = 0x7f7fffff;
  *(undefined4 *)&(param_4->MMin).field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(param_4->MMin).field_0x8 = 0x7f7fffff;
  *(undefined8 *)&param_4->MMax = uVar24;
  *(undefined4 *)&(param_4->MMax).field_0x8 = uVar1;
  local_84 = 0xff7fffff;
  uStack_80 = 0xff7fffff;
  local_7c = 0xff7fffff;
  *(undefined4 *)&param_5->MMin = 0x7f7fffff;
  *(undefined4 *)&(param_5->MMin).field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(param_5->MMin).field_0x8 = 0x7f7fffff;
  *(undefined8 *)&param_5->MMax = 0xff7fffffff7fffff;
  *(undefined4 *)&(param_5->MMax).field_0x8 = 0xff7fffff;
  local_c0 = param_3 - param_2;
  *param_6 = -1;
  if ((int)local_c0 < 1) {
LAB_143b6b831:
    bVar4 = false;
  }
  else {
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar29 = 0.0;
    uVar19 = uVar18;
    if (param_2 < param_3) {
      lVar23 = uVar18 * 4;
      fVar29 = fVar26;
      fVar25 = 0.0;
      fVar26 = 0.0;
      uVar14 = param_2;
      do {
        uVar10 = 0;
        if ((int)uVar14 < (this->NodeObjectIndices).ArrayNum) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar10 = *(uint *)((this->NodeObjectIndices).AllocatorInstance.Data + lVar23);
        uVar6 = 0;
        if ((int)uVar10 < (param_7->ObjectCenters).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar2 = (param_7->ObjectCenters).AllocatorInstance.Data;
        uVar14 = uVar14 + 1;
        lVar23 = lVar23 + 4;
        uVar24 = *(undefined8 *)(pFVar2 + (longlong)(int)uVar10 * 0xc);
        fVar29 = fVar29 + (float)uVar24;
        fVar25 = fVar25 + (float)((ulonglong)uVar24 >> 0x20);
        fVar26 = fVar26 + *(float *)(pFVar2 + (longlong)(int)uVar10 * 0xc + 8);
      } while ((int)uVar14 < param_3);
      uVar19 = (ulonglong)(uint)param_2;
    }
    iVar17 = 0;
    iVar9 = 0;
    iVar13 = 0;
    local_bc = 0;
    iVar20 = 0;
    local_a0 = (int *)((ulonglong)local_a0._4_4_ << 0x20);
    iVar22 = 0;
    local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
    uVar15 = uVar19 & 0xffffffff;
    fVar27 = __real_3f800000 / (float)(int)local_c0;
    fVar28 = fVar27 * fVar26 + CVars::ChaosUnionBVHSplitBias;
    fVar26 = fVar27 * fVar29 + CVars::ChaosUnionBVHSplitBias;
    fVar29 = fVar27 * fVar25 + CVars::ChaosUnionBVHSplitBias;
    local_b8[2] = fVar28;
    local_b8[0] = fVar26;
    local_b8[1] = fVar29;
    if ((int)uVar19 < param_3) {
      lVar23 = uVar18 * 4;
      do {
        uVar10 = (uint)uVar15;
        uVar14 = 0;
        if ((int)uVar10 < (this->NodeObjectIndices).ArrayNum) {
          uVar14 = ~uVar10 >> 0x1f;
        }
        local_98 = lVar23;
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar14 = *(uint *)((this->NodeObjectIndices).AllocatorInstance.Data + lVar23);
        lVar23 = (longlong)(int)uVar14;
        uVar6 = 0;
        if ((int)uVar14 < (this->Objects).ArrayNum) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar2 = (this->Objects).AllocatorInstance.Data;
        if (*(float *)(pFVar2 + lVar23 * 0x48 + 0x28) <= fVar26 &&
            fVar26 != *(float *)(pFVar2 + lVar23 * 0x48 + 0x28)) {
          local_bc = local_bc + 1;
        }
        if (fVar26 < *(float *)(pFVar2 + lVar23 * 0x48 + 0x1c)) {
          iVar13 = iVar13 + 1;
        }
        iVar17 = (int)local_a0;
        if (*(float *)(pFVar2 + lVar23 * 0x48 + 0x2c) <= fVar29 &&
            fVar29 != *(float *)(pFVar2 + lVar23 * 0x48 + 0x2c)) {
          iVar17 = (int)local_a0 + 1;
          local_a0 = (int *)CONCAT44(local_a0._4_4_,iVar17);
        }
        if (fVar29 < *(float *)(pFVar2 + lVar23 * 0x48 + 0x20)) {
          iVar20 = iVar20 + 1;
        }
        iVar9 = (int)local_a8;
        if (*(float *)(pFVar2 + lVar23 * 0x48 + 0x30) <= fVar28 &&
            fVar28 != *(float *)(pFVar2 + lVar23 * 0x48 + 0x30)) {
          iVar9 = (int)local_a8 + 1;
          local_a8 = CONCAT44(local_a8._4_4_,iVar9);
        }
        if (fVar28 < *(float *)(pFVar2 + lVar23 * 0x48 + 0x24)) {
          iVar22 = iVar22 + 1;
        }
        uVar15 = (ulonglong)(uVar10 + 1);
        lVar23 = local_98 + 4;
        local_98 = lVar23;
      } while ((int)(uVar10 + 1) < param_3);
    }
    if (local_bc < iVar13) {
      iVar13 = local_bc;
    }
    iVar7 = 0;
    if (0 < iVar13) {
      iVar7 = iVar13;
    }
    uVar14 = (0 < iVar13) - 1;
    if (iVar17 < iVar20) {
      iVar20 = iVar17;
    }
    if (iVar7 < iVar20) {
      uVar14 = 1;
      iVar7 = iVar20;
    }
    if (iVar9 < iVar22) {
      iVar22 = iVar9;
    }
    if (iVar7 < iVar22) {
      uVar14 = 2;
    }
    else if (uVar14 == 0xffffffff) goto LAB_143b6b831;
    local_a0 = &(param_7->NodeObjectIndices0).ArrayMax;
    (param_7->NodeObjectIndices0).ArrayNum = 0;
    if ((param_7->NodeObjectIndices0).ArrayMax < (int)local_c0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_c0,&(param_7->NodeObjectIndices0).AllocatorInstance,0,local_a0);
    }
    (param_7->NodeObjectIndices1).ArrayNum = 0;
    if ((param_7->NodeObjectIndices1).ArrayMax < (int)local_c0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_c0,&(param_7->NodeObjectIndices1).AllocatorInstance,0,
                 &(param_7->NodeObjectIndices1).ArrayMax);
    }
    pTVar21 = &param_7->NodeObjectIndices0;
    lVar23 = (longlong)param_2;
    local_c0 = param_2;
    if (param_2 < param_3) {
      lVar12 = lVar23 * 4;
      do {
        uVar10 = 0;
        if ((int)local_c0 < (this->NodeObjectIndices).ArrayNum) {
          uVar10 = ~local_c0 >> 0x1f;
        }
        local_a8 = lVar12;
        local_98 = lVar23;
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        local_c8 = *(uint *)((this->NodeObjectIndices).AllocatorInstance.Data + lVar12);
        lVar11 = (longlong)(int)local_c8;
        uVar10 = 0;
        if ((int)local_c8 < (this->Objects).ArrayNum) {
          uVar10 = ~local_c8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar2 = (this->Objects).AllocatorInstance.Data;
        lVar23 = (longlong)(int)local_c8;
        uVar10 = 0;
        if ((int)local_c8 < (param_7->ObjectCenters).ArrayNum) {
          uVar10 = ~local_c8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar16 = (param_7->ObjectCenters).AllocatorInstance.Data;
        if ((2 < uVar14) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                               ,0x7ab,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        fVar29 = local_b8[(int)uVar14];
        if ((2 < uVar14) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                               ,0x7a2,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar16 = pFVar16 + (longlong)(int)uVar14 * 4 + lVar23 * 0xc;
        if (fVar29 < *(float *)pFVar16 || fVar29 == *(float *)pFVar16) {
          pFVar16 = (param_7->NodeObjectIndices1).AllocatorInstance.Data;
          if (((pFVar16 <= (FScriptContainerElement *)&local_c8) &&
              ((FScriptContainerElement *)&local_c8 <
               pFVar16 + (longlong)(param_7->NodeObjectIndices1).ArrayMax * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar13 = (param_7->NodeObjectIndices1).ArrayNum;
          if (iVar13 == (param_7->NodeObjectIndices1).ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(param_7->NodeObjectIndices1).AllocatorInstance,
                                &(param_7->NodeObjectIndices1).ArrayMax);
          }
          (param_7->NodeObjectIndices1).ArrayNum = iVar13 + 1;
          *(uint *)((param_7->NodeObjectIndices1).AllocatorInstance.Data + (longlong)iVar13 * 4) =
               local_c8;
          pTVar8 = param_5;
          fVar29 = *(float *)(pFVar2 + lVar11 * 0x48 + 0x1c);
          if (*(float *)&param_5->MMin <= *(float *)(pFVar2 + lVar11 * 0x48 + 0x1c)) {
            fVar29 = *(float *)&param_5->MMin;
          }
        }
        else {
          pFVar16 = (pTVar21->AllocatorInstance).Data;
          if (((pFVar16 <= (FScriptContainerElement *)&local_c8) &&
              ((FScriptContainerElement *)&local_c8 <
               pFVar16 + (longlong)(param_7->NodeObjectIndices0).ArrayMax * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar13 = (param_7->NodeObjectIndices0).ArrayNum;
          if (iVar13 == (param_7->NodeObjectIndices0).ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar21->AllocatorInstance,local_a0);
            (param_7->NodeObjectIndices0).ArrayNum = iVar13;
          }
          (param_7->NodeObjectIndices0).ArrayNum = iVar13 + 1;
          *(uint *)((pTVar21->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_c8;
          pTVar8 = param_4;
          fVar29 = *(float *)&param_4->MMin;
          if (*(float *)(pFVar2 + lVar11 * 0x48 + 0x1c) <= *(float *)&param_4->MMin) {
            fVar29 = *(float *)(pFVar2 + lVar11 * 0x48 + 0x1c);
          }
        }
        fVar25 = *(float *)&(pTVar8->MMin).field_0x4;
        fVar26 = *(float *)(pFVar2 + lVar11 * 0x48 + 0x20);
        if (fVar25 <= *(float *)(pFVar2 + lVar11 * 0x48 + 0x20)) {
          fVar26 = fVar25;
        }
        fVar25 = *(float *)&(pTVar8->MMin).field_0x8;
        fVar27 = *(float *)(pFVar2 + lVar11 * 0x48 + 0x24);
        if (fVar25 <= *(float *)(pFVar2 + lVar11 * 0x48 + 0x24)) {
          fVar27 = fVar25;
        }
        local_c0 = local_c0 + 1;
        lVar23 = local_98 + 1;
        *(float *)&pTVar8->MMin = fVar29;
        lVar12 = local_a8 + 4;
        *(float *)&(pTVar8->MMin).field_0x4 = fVar26;
        *(float *)&(pTVar8->MMin).field_0x8 = fVar27;
        fVar29 = *(float *)(pFVar2 + lVar11 * 0x48 + 0x28);
        if (*(float *)(pFVar2 + lVar11 * 0x48 + 0x28) <= *(float *)&pTVar8->MMax) {
          fVar29 = *(float *)&pTVar8->MMax;
        }
        fVar25 = *(float *)&(pTVar8->MMax).field_0x4;
        fVar26 = *(float *)(pFVar2 + lVar11 * 0x48 + 0x2c);
        if (*(float *)(pFVar2 + lVar11 * 0x48 + 0x2c) <= fVar25) {
          fVar26 = fVar25;
        }
        fVar25 = *(float *)&(pTVar8->MMax).field_0x8;
        fVar27 = *(float *)(pFVar2 + lVar11 * 0x48 + 0x30);
        if (*(float *)(pFVar2 + lVar11 * 0x48 + 0x30) <= fVar25) {
          fVar27 = fVar25;
        }
        *(float *)&pTVar8->MMax = fVar29;
        *(float *)&(pTVar8->MMax).field_0x4 = fVar26;
        *(float *)&(pTVar8->MMax).field_0x8 = fVar27;
        local_a8 = lVar12;
        local_98 = lVar23;
      } while ((int)local_c0 < param_3);
    }
    uVar14 = (param_7->NodeObjectIndices0).ArrayNum;
    uVar18 = (ulonglong)(int)uVar14;
    pFVar16 = (param_7->NodeObjectIndices0).AllocatorInstance.Data;
    lVar12 = (longlong)param_2;
    pFVar2 = pFVar16 + uVar18 * 4;
    lVar23 = lVar12 * 4;
    uVar10 = param_2;
    while( true ) {
      if ((param_7->NodeObjectIndices0).ArrayNum != (int)uVar18) {
        local_c4 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_c4);
      }
      if (pFVar16 == pFVar2) break;
      uVar1 = *(undefined4 *)pFVar16;
      uVar6 = 0;
      if ((int)uVar10 < (this->NodeObjectIndices).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar10 = uVar10 + 1;
      uVar18 = (ulonglong)uVar14;
      lVar12 = lVar12 + 1;
      pFVar16 = pFVar16 + 4;
      *(undefined4 *)((this->NodeObjectIndices).AllocatorInstance.Data + lVar23) = uVar1;
      lVar23 = lVar23 + 4;
    }
    lVar12 = lVar12 * 4;
    pFVar16 = (param_7->NodeObjectIndices1).AllocatorInstance.Data;
    iVar13 = (param_7->NodeObjectIndices1).ArrayNum;
    pFVar2 = pFVar16 + (longlong)iVar13 * 4;
    while( true ) {
      if ((param_7->NodeObjectIndices1).ArrayNum != iVar13) {
        local_c3[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_c3);
      }
      if (pFVar16 == pFVar2) break;
      uVar1 = *(undefined4 *)pFVar16;
      uVar14 = 0;
      if ((int)uVar10 < (this->NodeObjectIndices).ArrayNum) {
        uVar14 = ~uVar10 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar10 = uVar10 + 1;
      *(undefined4 *)((this->NodeObjectIndices).AllocatorInstance.Data + lVar12) = uVar1;
      lVar12 = lVar12 + 4;
      pFVar16 = pFVar16 + 4;
    }
    if ((uVar10 != param_3) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextNodeObjectIndex == ObjectEndIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ImplicitObjectBVH.cpp"
                           ,0x12f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar13 = param_2 + (param_7->NodeObjectIndices0).ArrayNum;
    bVar4 = iVar13 != -1;
    *param_6 = iVar13;
  }
  return bVar4;
}

// Serialize @ 143b76bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FChaosArchive * __thiscall
Chaos::Private::FImplicitBVH::Serialize(FImplicitBVH *this,FChaosArchive *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [40];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  TBitArray<FDefaultBitArrayAllocator> local_c0;
  undefined8 uStack_a0;
  void *local_90;
  undefined4 local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  int local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  _RTL_CRITICAL_SECTION local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  operator<<<Chaos::Private::FImplicitBVHObject_TSizedDefaultAllocator<32>_>(param_1,&this->Objects)
  ;
  local_f8._12_2_ = 0x401;
  local_f8._8_4_ = 0;
  local_f8._16_8_ = (TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_> *)0x0;
  local_f8._24_8_ = (FScriptContainerElement *)0x0;
  local_c0.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_c0.MaxBits = _UNK_150631d94;
  uStack_a0 = _UNK_150631d98;
  local_f8._0_8_ =
       &
       ___7__TBoundingVolumeHierarchy_V__TArray_VFImplicitBVHObject_Private_Chaos__V__TSizedDefaultAllocator__0CA_____V__TArray_HV__TSizedDefaultAllocator__0CA_____N_02_Chaos__6B_
  ;
  local_f8._32_4_ = 0;
  local_f8._36_4_ = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  local_c0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  local_70 = 0xc;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60._0_4_ = 0;
  local_60._4_4_ = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  InitializeCriticalSectionAndSpinCount(&local_48,4000);
  TBoundingVolumeHierarchy<TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::Serialize((TBoundingVolumeHierarchy<TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
               *)local_f8,(FArchive *)param_1);
  DeleteCriticalSection(&local_48);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_58.Data,(int)local_50);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_58.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_58.Data);
  }
  DestructItems<Chaos::TBVHNode<double,3>,int>((TBVHNode<double,3> *)local_68.Data,(int)local_60);
  if ((TBVHNode<double,3> *)local_68.Data != (TBVHNode<double,3> *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  uVar1 = local_c8 >> 0x20;
  local_c8 = local_c8 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&local_d0,0,(int *)((longlong)&local_c8 + 4));
  }
  iVar2 = local_c0.MaxBits;
  uStack_a0 = 0xffffffff;
  local_c0._24_8_ = (ulonglong)(uint)local_c0.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    local_c0.NumBits = 0;
    local_c0.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c0,0);
  }
  if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c0.AllocatorInstance.SecondaryData);
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  if ((FScriptContainerElement *)local_f8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._24_8_);
  }
  return param_1;
}

// TryMake @ 143b7cdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_> __cdecl
Chaos::Private::FImplicitBVH::TryMake
          (TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *param_1,int param_2,
          int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_> TVar5;
  FImplicitBVH *pFVar6;
  int iVar7;
  undefined4 in_register_00000014;
  TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *pTVar8;
  uint uVar9;
  FImplicitBVH *pFVar10;
  int in_R9D;
  FImplicitBVH *pFVar11;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [32];
  uint local_c8 [2];
  undefined1 *local_c0;
  code *local_b8;
  uint *local_b0;
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  ulonglong local_48;
  
  pTVar8 = (TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *)
           CONCAT44(in_register_00000014,param_2);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar10 = (FImplicitBVH *)0x0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_4_ = 0;
  local_e8._12_4_ = 0;
  local_e8._24_8_ = param_1;
  uVar4 = CountLeafObjects(pTVar8);
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((int)local_e8._12_4_ < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar4,(ForAnyElementType *)local_e8,local_e8._8_4_,(int *)(local_e8 + 0xc));
  }
  iVar7 = pTVar8->ArrayNum;
  pFVar6 = pFVar10;
  pFVar11 = pFVar10;
  if (0 < iVar7) {
    do {
      uVar9 = (uint)pFVar6;
      uVar4 = 0;
      if ((int)uVar9 < iVar7) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (FImplicitBVH *)(*pcVar2)();
        return (TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_>
                )TVar5.Ptr;
      }
      plVar1 = *(longlong **)
                ((longlong)&pTVar8->DataPtr->Reference +
                (longlong)&(pFVar11->Objects).AllocatorInstance);
      local_c0 = local_e8;
      local_b0 = local_c8;
      local_a8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      local_a8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      local_98[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      local_98[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      local_b8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::Private::FImplicitBVH::CollectLeafObjects'::__l4::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
                 ::Call;
      local_88[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      local_88[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      local_78[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      local_78[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      local_e8._16_4_ = 0;
      local_e8._20_4_ = 0;
      local_68[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      local_68[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      local_58[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      local_58[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      local_c8[0] = uVar9;
      (**(code **)(*plVar1 + 0x140))(plVar1,local_a8,0xffffffff,local_e8 + 0x14);
      iVar7 = pTVar8->ArrayNum;
      pFVar6 = (FImplicitBVH *)(ulonglong)(uVar9 + 1);
      param_1 = (TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> *)local_e8._24_8_;
      pFVar11 = (FImplicitBVH *)&(pFVar11->Objects).ArrayNum;
    } while ((int)(uVar9 + 1) < iVar7);
  }
  if ((param_3 < (int)local_e8._8_4_) &&
     (pFVar6 = ::operator_new(0x38), pFVar6 != (FImplicitBVH *)0x0)) {
    (pFVar6->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Objects).ArrayNum = 0;
    (pFVar6->Objects).ArrayMax = 0;
    (pFVar6->NodeObjectIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->NodeObjectIndices).ArrayNum = 0;
    (pFVar6->NodeObjectIndices).ArrayMax = 0;
    (pFVar6->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Nodes).ArrayNum = 0;
    (pFVar6->Nodes).ArrayMax = 0;
    pFVar6->TreeDepth = 0;
    if (pFVar6 != (FImplicitBVH *)local_e8) {
      (pFVar6->Objects).AllocatorInstance.Data = (FScriptContainerElement *)local_e8._0_8_;
      local_e8._0_8_ = (FScriptContainerElement *)0x0;
      (pFVar6->Objects).ArrayNum = local_e8._8_4_;
      (pFVar6->Objects).ArrayMax = local_e8._12_4_;
      local_e8._8_4_ = 0;
      local_e8._12_4_ = 0;
    }
    BuildTree(pFVar6,in_R9D,1);
    pFVar10 = pFVar6;
  }
  (((FImplicitBVH *)param_1)->Objects).AllocatorInstance.Data = (FScriptContainerElement *)pFVar10;
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  return (TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_>)
         (FImplicitBVH *)param_1;
}

// TryMakeFromLeaves @ 143b7d060

TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_> __cdecl
Chaos::Private::FImplicitBVH::TryMakeFromLeaves
          (TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,int param_3)

{
  FImplicitBVH *this;
  undefined4 in_register_00000014;
  FImplicitBVH *pFVar1;
  int in_R9D;
  
  pFVar1 = (FImplicitBVH *)CONCAT44(in_register_00000014,param_2);
  if ((pFVar1->Objects).ArrayNum <= param_3) {
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    return (TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_>)
           (FImplicitBVH *)param_1;
  }
  this = ::operator_new(0x38);
  if (this != (FImplicitBVH *)0x0) {
    (this->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Objects).ArrayNum = 0;
    (this->Objects).ArrayMax = 0;
    (this->NodeObjectIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NodeObjectIndices).ArrayNum = 0;
    (this->NodeObjectIndices).ArrayMax = 0;
    (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Nodes).ArrayNum = 0;
    (this->Nodes).ArrayMax = 0;
    this->TreeDepth = 0;
    if (this != pFVar1) {
      (this->Objects).AllocatorInstance.Data = (pFVar1->Objects).AllocatorInstance.Data;
      (pFVar1->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Objects).ArrayNum = (pFVar1->Objects).ArrayNum;
      (this->Objects).ArrayMax = (pFVar1->Objects).ArrayMax;
      (pFVar1->Objects).ArrayNum = 0;
      (pFVar1->Objects).ArrayMax = 0;
    }
    BuildTree(this,in_R9D,1);
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)this;
    return (TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_>)
           (FImplicitBVH *)param_1;
  }
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  return (TUniquePtr<Chaos::Private::FImplicitBVH,TDefaultDelete<Chaos::Private::FImplicitBVH>_>)
         (FImplicitBVH *)param_1;
}

