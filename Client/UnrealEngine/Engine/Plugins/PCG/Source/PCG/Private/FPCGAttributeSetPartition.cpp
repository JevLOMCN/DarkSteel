// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 18

// operator()<int> @ 149b9fb10

bool __thiscall
`FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::operator()<int>
          (void *this,int param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  ulong64 uVar10;
  int *piVar11;
  longlong lVar12;
  undefined4 in_register_00000014;
  int *piVar13;
  int iVar14;
  int *piVar15;
  undefined1 local_res18 [8];
  int local_res20;
  int local_d8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_d0;
  int *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FPCGAttributeSetPartition *local_a8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_98;
  int *piStack_90;
  int local_88;
  undefined4 uStack_84;
  TArrayView<int,int> local_78;
  <lambda_1> local_68;
  
  iVar9 = 0;
  plVar2 = *(longlong **)(*(longlong *)this + 0x20);
  if ((plVar2 != (longlong *)0x0) &&
     (iVar9 = (**(code **)(*plVar2 + 0x10))(plVar2,CONCAT44(in_register_00000014,param_1)),
     iVar9 < 1)) {
    iVar9 = 1;
  }
  piVar11 = (int *)0x0;
  local_res20 = iVar9;
  if ((*(longlong *)(*(longlong *)this + 0x18) != 0) &&
     (piVar11 = (int *)0x0, *(longlong *)(*(longlong *)this + 0x20) != 0)) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (longlong)iVar9;
    uVar10 = SUB168(ZEXT816(4) * auVar6,0);
    if (SUB168(ZEXT816(4) * auVar6,8) != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    piVar11 = operator_new__(uVar10);
    if (piVar11 != (int *)0x0) {
      local_b8 = piVar11;
      iStack_b0 = iVar9;
      if ((iVar9 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      local_78._12_4_ = uStack_ac;
      local_78.ArrayNum = iStack_b0;
      local_78.DataPtr = local_b8;
      bVar7 = IPCGAttributeAccessor::GetRange<int>
                        (*(IPCGAttributeAccessor **)(*(longlong *)this + 0x18),&local_78,0,
                         *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x20),
                         AllowBroadcastAndConstructible);
      if (bVar7) goto LAB_149b9fc15;
      operator_delete__(piVar11);
    }
    return false;
  }
LAB_149b9fc15:
  lVar3 = *(longlong *)(*(longlong *)this + 8);
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  uVar1 = *(uint *)(*(longlong *)this + 0x30);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar1,&local_d0.AllocatorInstance,0,&local_d0.ArrayMax);
  }
  lVar4 = *(longlong *)this;
  iVar9 = *(int *)(lVar4 + 0x30);
  piVar15 = *(int **)(lVar4 + 0x28);
  piVar13 = piVar15 + (longlong)iVar9 * 0xc;
  local_b8 = piVar13;
  do {
    if (*(int *)(lVar4 + 0x30) != iVar9) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FPCGAttributeSetPartition::AttributeSetPartitionEntry>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (piVar15 == piVar13) {
      local_88 = local_res20;
      local_a8 = *(FPCGAttributeSetPartition **)this;
      pTStack_a0 = &local_d0;
      local_98 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
      local_68.Callback._36_4_ = uStack_84;
      local_68.Callback.ConstKeyCount = local_res20;
      piStack_90 = piVar11;
      local_68.Callback.__this = local_a8;
      local_68.Callback.AttributeValues = pTStack_a0;
      local_68.Callback.MatchingPartitionDataIndices = local_98;
      local_68.Callback.ThresholdValuesPtr = piVar11;
      bVar7 = PCGMetadataElementCommon::
              ApplyOnAccessorRange<int,_PCGMetadataElementCommon::ApplyOnAccessor<int,__FPCGAttributeSetPartition::GetMatchingPartitionDataIndices_::__l5::<lambda_1>::operator()<int>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_68,
                         AllowBroadcastAndConstructible,0x100,-1);
      if (piVar11 != (int *)0x0) {
        operator_delete__(piVar11);
      }
      if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
      return bVar7;
    }
    iVar14 = *piVar15;
    if (iVar14 == -1) {
LAB_149b9fd4d:
      iVar14 = *(int *)(lVar3 + 0x98);
    }
    else if (iVar14 < *(int *)(lVar3 + 0x9c)) {
      if (*(FPCGMetadataAttribute<int> **)(lVar3 + 0x68) == (FPCGMetadataAttribute<int> *)0x0)
      goto LAB_149b9fd4d;
      iVar14 = FPCGMetadataAttribute<int>::GetValue
                         (*(FPCGMetadataAttribute<int> **)(lVar3 + 0x68),iVar14);
    }
    else {
      iVar14 = iVar14 - *(int *)(lVar3 + 0x9c);
      AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x80));
      if (iVar14 < *(int *)(lVar3 + 0x90)) {
        if ((iVar14 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        iVar14 = *(int *)(*(longlong *)(lVar3 + 0x88) + (longlong)iVar14 * 4);
      }
      else {
        iVar14 = *(int *)(lVar3 + 0x98);
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x80));
      piVar13 = local_b8;
    }
    local_d8[0] = iVar14;
    if (((local_d0.AllocatorInstance.Data <= (FScriptContainerElement *)local_d8) &&
        ((FScriptContainerElement *)local_d8 <
         local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayMax * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    if (local_d0.ArrayNum == local_d0.ArrayMax) {
      local_d0.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_d0.AllocatorInstance,&local_d0.ArrayMax);
    }
    lVar12 = (longlong)local_d0.ArrayNum;
    piVar15 = piVar15 + 0xc;
    local_d0.ArrayNum = local_d0.ArrayNum + 1;
    *(int *)(local_d0.AllocatorInstance.Data + lVar12 * 4) = local_d8[0];
  } while( true );
}

// operator()<float> @ 149ba0520

bool __thiscall
`FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::operator()<float>
          (void *this,float param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ulong64 uVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  int iVar13;
  int *piVar14;
  float fVar15;
  undefined1 local_res18 [8];
  int local_res20;
  float local_e8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_e0;
  float *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FPCGAttributeSetPartition *local_b8;
  TArray<float,TSizedDefaultAllocator<32>_> *pTStack_b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_a8;
  float *pfStack_a0;
  int local_98;
  undefined4 uStack_94;
  TArrayView<float,int> local_88;
  <lambda_1> local_78;
  
  iVar8 = 0;
  if ((*(longlong **)(*(longlong *)this + 0x20) != (longlong *)0x0) &&
     (iVar8 = (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x10))(), iVar8 < 1)) {
    iVar8 = 1;
  }
  pfVar10 = (float *)0x0;
  local_res20 = iVar8;
  if ((*(longlong *)(*(longlong *)this + 0x18) != 0) &&
     (pfVar10 = (float *)0x0, *(longlong *)(*(longlong *)this + 0x20) != 0)) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)iVar8;
    uVar9 = SUB168(ZEXT816(4) * auVar5,0);
    if (SUB168(ZEXT816(4) * auVar5,8) != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    pfVar10 = operator_new__(uVar9);
    if (pfVar10 != (float *)0x0) {
      local_c8 = pfVar10;
      iStack_c0 = iVar8;
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_88._12_4_ = uStack_bc;
      local_88.ArrayNum = iStack_c0;
      local_88.DataPtr = local_c8;
      bVar6 = IPCGAttributeAccessor::GetRange<float>
                        (*(IPCGAttributeAccessor **)(*(longlong *)this + 0x18),&local_88,0,
                         *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x20),
                         AllowBroadcastAndConstructible);
      if (bVar6) goto LAB_149ba0628;
      operator_delete__(pfVar10);
    }
    return false;
  }
LAB_149ba0628:
  lVar2 = *(longlong *)(*(longlong *)this + 8);
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  uVar1 = *(uint *)(*(longlong *)this + 0x30);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar1,&local_e0.AllocatorInstance,0,&local_e0.ArrayMax);
  }
  lVar3 = *(longlong *)this;
  iVar8 = *(int *)(lVar3 + 0x30);
  piVar14 = *(int **)(lVar3 + 0x28);
  pfVar12 = (float *)(piVar14 + (longlong)iVar8 * 0xc);
  local_c8 = pfVar12;
  do {
    if (*(int *)(lVar3 + 0x30) != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FPCGAttributeSetPartition::AttributeSetPartitionEntry>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((float *)piVar14 == pfVar12) {
      local_98 = local_res20;
      local_b8 = *(FPCGAttributeSetPartition **)this;
      pTStack_b0 = &local_e0;
      local_a8 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
      local_78.Callback._36_4_ = uStack_94;
      local_78.Callback.ConstKeyCount = local_res20;
      pfStack_a0 = pfVar10;
      local_78.Callback.__this = local_b8;
      local_78.Callback.AttributeValues = pTStack_b0;
      local_78.Callback.MatchingPartitionDataIndices = local_a8;
      local_78.Callback.ThresholdValuesPtr = pfVar10;
      bVar6 = PCGMetadataElementCommon::
              ApplyOnAccessorRange<float,_PCGMetadataElementCommon::ApplyOnAccessor<float,__FPCGAttributeSetPartition::GetMatchingPartitionDataIndices_::__l5::<lambda_1>::operator()<float>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_78,
                         AllowBroadcastAndConstructible,0x100,-1);
      if (pfVar10 != (float *)0x0) {
        operator_delete__(pfVar10);
      }
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
      return bVar6;
    }
    iVar13 = *piVar14;
    if (iVar13 == -1) {
LAB_149ba0773:
      fVar15 = *(float *)(lVar2 + 0x98);
    }
    else if (iVar13 < *(int *)(lVar2 + 0x9c)) {
      if (*(FPCGMetadataAttribute<float> **)(lVar2 + 0x68) == (FPCGMetadataAttribute<float> *)0x0)
      goto LAB_149ba0773;
      fVar15 = FPCGMetadataAttribute<float>::GetValue
                         (*(FPCGMetadataAttribute<float> **)(lVar2 + 0x68),iVar13);
    }
    else {
      iVar13 = iVar13 - *(int *)(lVar2 + 0x9c);
      AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x80));
      if (iVar13 < *(int *)(lVar2 + 0x90)) {
        if ((iVar13 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        fVar15 = *(float *)(*(longlong *)(lVar2 + 0x88) + (longlong)iVar13 * 4);
      }
      else {
        fVar15 = *(float *)(lVar2 + 0x98);
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x80));
      pfVar12 = local_c8;
    }
    local_e8[0] = fVar15;
    if (((local_e0.AllocatorInstance.Data <= (FScriptContainerElement *)local_e8) &&
        ((FScriptContainerElement *)local_e8 <
         local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    if (local_e0.ArrayNum == local_e0.ArrayMax) {
      local_e0.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_e0.AllocatorInstance,&local_e0.ArrayMax);
    }
    lVar11 = (longlong)local_e0.ArrayNum;
    piVar14 = piVar14 + 0xc;
    local_e0.ArrayNum = local_e0.ArrayNum + 1;
    *(float *)(local_e0.AllocatorInstance.Data + lVar11 * 4) = local_e8[0];
  } while( true );
}

// operator()<double> @ 149ba0f70

bool __thiscall
`FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::operator()<double>
          (void *this,double param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  ulong64 uVar12;
  double *pdVar13;
  longlong lVar14;
  double *pdVar15;
  int iVar16;
  int *piVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 local_res18 [8];
  int local_res20;
  TArray<double,TSizedDefaultAllocator<32>_> local_e8;
  undefined8 local_d8 [2];
  double *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FPCGAttributeSetPartition *local_b8;
  TArray<double,TSizedDefaultAllocator<32>_> *pTStack_b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_a8;
  double *pdStack_a0;
  int local_98;
  undefined4 uStack_94;
  TArrayView<double,int> local_88;
  <lambda_1> local_78;
  
  iVar11 = 0;
  plVar3 = *(longlong **)(*(longlong *)this + 0x20);
  if ((plVar3 != (longlong *)0x0) &&
     (iVar11 = (**(code **)(*plVar3 + 0x10))(plVar3,SUB84(param_1,0)), iVar11 < 1)) {
    iVar11 = 1;
  }
  pdVar13 = (double *)0x0;
  local_res20 = iVar11;
  if ((*(longlong *)(*(longlong *)this + 0x18) != 0) &&
     (pdVar13 = (double *)0x0, *(longlong *)(*(longlong *)this + 0x20) != 0)) {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (longlong)iVar11;
    uVar12 = SUB168(ZEXT816(8) * auVar7,0);
    if (SUB168(ZEXT816(8) * auVar7,8) != 0) {
      uVar12 = 0xffffffffffffffff;
    }
    pdVar13 = operator_new__(uVar12);
    if (pdVar13 != (double *)0x0) {
      local_c8 = pdVar13;
      iStack_c0 = iVar11;
      if ((iVar11 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      local_88._12_4_ = uStack_bc;
      local_88.ArrayNum = iStack_c0;
      local_88.DataPtr = local_c8;
      bVar9 = IPCGAttributeAccessor::GetRange<double>
                        (*(IPCGAttributeAccessor **)(*(longlong *)this + 0x18),&local_88,0,
                         *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x20),
                         AllowBroadcastAndConstructible);
      if (bVar9) goto LAB_149ba1078;
      operator_delete__(pdVar13);
    }
    return false;
  }
LAB_149ba1078:
  lVar4 = *(longlong *)(*(longlong *)this + 8);
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  uVar2 = *(uint *)(*(longlong *)this + 0x30);
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
  }
  lVar5 = *(longlong *)this;
  iVar11 = *(int *)(lVar5 + 0x30);
  piVar17 = *(int **)(lVar5 + 0x28);
  pdVar15 = (double *)(piVar17 + (longlong)iVar11 * 0xc);
  local_c8 = pdVar15;
  do {
    if (*(int *)(lVar5 + 0x30) != iVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FPCGAttributeSetPartition::AttributeSetPartitionEntry>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((double *)piVar17 == pdVar15) {
      local_98 = local_res20;
      local_b8 = *(FPCGAttributeSetPartition **)this;
      pTStack_b0 = &local_e8;
      local_a8 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
      local_78.Callback._36_4_ = uStack_94;
      local_78.Callback.ConstKeyCount = local_res20;
      pdStack_a0 = pdVar13;
      local_78.Callback.__this = local_b8;
      local_78.Callback.AttributeValues = pTStack_b0;
      local_78.Callback.MatchingPartitionDataIndices = local_a8;
      local_78.Callback.ThresholdValuesPtr = pdVar13;
      bVar9 = PCGMetadataElementCommon::
              ApplyOnAccessorRange<double,_PCGMetadataElementCommon::ApplyOnAccessor<double,__FPCGAttributeSetPartition::GetMatchingPartitionDataIndices_::__l5::<lambda_1>::operator()<double>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_78,
                         AllowBroadcastAndConstructible,0x100,-1);
      if (pdVar13 != (double *)0x0) {
        operator_delete__(pdVar13);
      }
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      return bVar9;
    }
    iVar16 = *piVar17;
    if (iVar16 == -1) {
LAB_149ba11c3:
      uVar18 = (undefined4)*(undefined8 *)(lVar4 + 0x98);
      uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x98) >> 0x20);
    }
    else if (iVar16 < *(int *)(lVar4 + 0xa0)) {
      if (*(FPCGMetadataAttribute<double> **)(lVar4 + 0x68) == (FPCGMetadataAttribute<double> *)0x0)
      goto LAB_149ba11c3;
      dVar8 = FPCGMetadataAttribute<double>::GetValue
                        (*(FPCGMetadataAttribute<double> **)(lVar4 + 0x68),iVar16);
      uVar18 = SUB84(dVar8,0);
      uVar19 = (undefined4)((ulonglong)dVar8 >> 0x20);
    }
    else {
      iVar16 = iVar16 - *(int *)(lVar4 + 0xa0);
      AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x80));
      if (iVar16 < *(int *)(lVar4 + 0x90)) {
        if ((iVar16 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        uVar1 = *(undefined8 *)(*(longlong *)(lVar4 + 0x88) + (longlong)iVar16 * 8);
        uVar18 = (undefined4)uVar1;
        uVar19 = (undefined4)((ulonglong)uVar1 >> 0x20);
      }
      else {
        uVar18 = (undefined4)*(undefined8 *)(lVar4 + 0x98);
        uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x98) >> 0x20);
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x80));
      pdVar15 = local_c8;
    }
    local_d8[0] = CONCAT44(uVar19,uVar18);
    if (((local_e8.AllocatorInstance.Data <= (FScriptContainerElement *)local_d8) &&
        ((FScriptContainerElement *)local_d8 <
         local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    if (local_e8.ArrayNum == local_e8.ArrayMax) {
      local_e8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
    }
    lVar14 = (longlong)local_e8.ArrayNum;
    piVar17 = piVar17 + 0xc;
    local_e8.ArrayNum = local_e8.ArrayNum + 1;
    *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar14 * 8) = local_d8[0];
  } while( true );
}

// operator()<UE::Math::TQuat<double>_> @ 149ba1360

bool __thiscall
`FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
operator()<UE::Math::TQuat<double>_>(void *this,TQuat<double> *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ulong64 uVar9;
  double *pdVar10;
  double *pdVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  undefined1 local_res18 [8];
  int local_res20;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_e8;
  double *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TQuat<double> local_c8;
  FPCGAttributeSetPartition *local_a8;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTStack_a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_98;
  double *pdStack_90;
  int local_88;
  undefined4 uStack_84;
  TArrayView<double,int> local_78;
  <lambda_1> local_68;
  
  iVar8 = 0;
  if ((*(longlong **)(*(longlong *)this + 0x20) != (longlong *)0x0) &&
     (iVar8 = (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x10))(), iVar8 < 1)) {
    iVar8 = 1;
  }
  pdVar10 = (double *)0x0;
  local_res20 = iVar8;
  if ((*(longlong *)(*(longlong *)this + 0x18) != 0) &&
     (pdVar10 = (double *)0x0, *(longlong *)(*(longlong *)this + 0x20) != 0)) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)iVar8;
    uVar9 = SUB168(ZEXT816(8) * auVar5,0);
    if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    pdVar10 = operator_new__(uVar9);
    if (pdVar10 != (double *)0x0) {
      local_d8 = pdVar10;
      iStack_d0 = iVar8;
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_78._12_4_ = uStack_cc;
      local_78.ArrayNum = iStack_d0;
      local_78.DataPtr = local_d8;
      bVar6 = IPCGAttributeAccessor::GetRange<double>
                        (*(IPCGAttributeAccessor **)(*(longlong *)this + 0x18),&local_78,0,
                         *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x20),
                         AllowBroadcastAndConstructible);
      if (bVar6) goto LAB_149ba1468;
      operator_delete__(pdVar10);
    }
    return false;
  }
LAB_149ba1468:
  lVar2 = *(longlong *)(*(longlong *)this + 8);
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  uVar1 = *(uint *)(*(longlong *)this + 0x30);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,uVar1,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
  }
  lVar3 = *(longlong *)this;
  iVar8 = *(int *)(lVar3 + 0x30);
  piVar14 = *(int **)(lVar3 + 0x28);
  pdVar11 = (double *)(piVar14 + (longlong)iVar8 * 0xc);
  local_d8 = pdVar11;
  do {
    if (*(int *)(lVar3 + 0x30) != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FPCGAttributeSetPartition::AttributeSetPartitionEntry>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((double *)piVar14 == pdVar11) {
      local_88 = local_res20;
      local_a8 = *(FPCGAttributeSetPartition **)this;
      pTStack_a0 = &local_e8;
      local_98 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
      local_68.Callback._36_4_ = uStack_84;
      local_68.Callback.ConstKeyCount = local_res20;
      pdStack_90 = pdVar10;
      local_68.Callback.__this = local_a8;
      local_68.Callback.AttributeValues = pTStack_a0;
      local_68.Callback.MatchingPartitionDataIndices = local_98;
      local_68.Callback.ThresholdValuesPtr = pdVar10;
      bVar6 = PCGMetadataElementCommon::
              ApplyOnAccessorRange<UE::Math::TQuat<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TQuat<double>,__FPCGAttributeSetPartition::GetMatchingPartitionDataIndices_::__l5::<lambda_1>::operator()<UE::Math::TQuat<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_68,
                         AllowBroadcastAndConstructible,0x100,-1);
      if (pdVar10 != (double *)0x0) {
        operator_delete__(pdVar10);
      }
      if ((TQuat<double> *)local_e8.AllocatorInstance.Data != (TQuat<double> *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      return bVar6;
    }
    iVar13 = *piVar14;
    if (iVar13 == -1) {
LAB_149ba15c2:
      local_c8.X = *(double *)(lVar2 + 0xa0);
      local_c8.Y = *(double *)(lVar2 + 0xa8);
      local_c8.Z = *(double *)(lVar2 + 0xb0);
      local_c8.W = *(double *)(lVar2 + 0xb8);
    }
    else if (iVar13 < *(int *)(lVar2 + 0xc0)) {
      if (*(FPCGMetadataAttribute<UE::Math::TQuat<double>_> **)(lVar2 + 0x68) ==
          (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) goto LAB_149ba15c2;
      FPCGMetadataAttribute<UE::Math::TQuat<double>_>::GetValue
                (*(FPCGMetadataAttribute<UE::Math::TQuat<double>_> **)(lVar2 + 0x68),&local_c8,
                 iVar13);
    }
    else {
      iVar13 = iVar13 - *(int *)(lVar2 + 0xc0);
      AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x80));
      if (iVar13 < *(int *)(lVar2 + 0x90)) {
        if ((iVar13 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pdVar11 = (double *)((longlong)iVar13 * 0x20 + *(longlong *)(lVar2 + 0x88));
      }
      else {
        pdVar11 = (double *)(lVar2 + 0xa0);
      }
      local_c8.X = *pdVar11;
      local_c8.Y = pdVar11[1];
      local_c8.Z = pdVar11[2];
      local_c8.W = pdVar11[3];
      ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x80));
      pdVar11 = local_d8;
    }
    if (((local_e8.AllocatorInstance.Data <= &local_c8) &&
        (&local_c8 <
         (TQuat<double> *)(local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x20)))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    if (local_e8.ArrayNum == local_e8.ArrayMax) {
      local_e8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x1020,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
    }
    lVar12 = (longlong)local_e8.ArrayNum;
    piVar14 = piVar14 + 0xc;
    local_e8.ArrayNum = local_e8.ArrayNum + 1;
    *(double *)(local_e8.AllocatorInstance.Data + lVar12 * 0x20) = local_c8.X;
    *(double *)(local_e8.AllocatorInstance.Data + lVar12 * 0x20 + 8) = local_c8.Y;
    *(double *)(local_e8.AllocatorInstance.Data + lVar12 * 0x20 + 0x10) = local_c8.Z;
    *(double *)(local_e8.AllocatorInstance.Data + lVar12 * 0x20 + 0x10 + 8) = local_c8.W;
  } while( true );
}

// operator()<UE::Math::TRotator<double>_> @ 149ba1770

bool __thiscall
`FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
operator()<UE::Math::TRotator<double>_>(void *this,TRotator<double> *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ulong64 uVar9;
  double *pdVar10;
  longlong lVar11;
  double *pdVar12;
  int iVar13;
  int *piVar14;
  undefined1 local_res18 [8];
  int local_res20;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_d8;
  double *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TRotator<double> local_b8;
  FPCGAttributeSetPartition *local_a0;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *pTStack_98;
  TArray<int,TSizedDefaultAllocator<32>_> *local_90;
  double *pdStack_88;
  int local_80;
  undefined4 uStack_7c;
  TArrayView<double,int> local_78;
  <lambda_1> local_68;
  
  iVar8 = 0;
  if ((*(longlong **)(*(longlong *)this + 0x20) != (longlong *)0x0) &&
     (iVar8 = (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x10))(), iVar8 < 1)) {
    iVar8 = 1;
  }
  pdVar10 = (double *)0x0;
  local_res20 = iVar8;
  if ((*(longlong *)(*(longlong *)this + 0x18) != 0) &&
     (pdVar10 = (double *)0x0, *(longlong *)(*(longlong *)this + 0x20) != 0)) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)iVar8;
    uVar9 = SUB168(ZEXT816(8) * auVar5,0);
    if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    pdVar10 = operator_new__(uVar9);
    if (pdVar10 != (double *)0x0) {
      local_c8 = pdVar10;
      iStack_c0 = iVar8;
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_78._12_4_ = uStack_bc;
      local_78.ArrayNum = iStack_c0;
      local_78.DataPtr = local_c8;
      bVar6 = IPCGAttributeAccessor::GetRange<double>
                        (*(IPCGAttributeAccessor **)(*(longlong *)this + 0x18),&local_78,0,
                         *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x20),
                         AllowBroadcastAndConstructible);
      if (bVar6) goto LAB_149ba1875;
      operator_delete__(pdVar10);
    }
    return false;
  }
LAB_149ba1875:
  lVar2 = *(longlong *)(*(longlong *)this + 8);
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  uVar1 = *(uint *)(*(longlong *)this + 0x30);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar1,&local_d8.AllocatorInstance,0,&local_d8.ArrayMax);
  }
  lVar3 = *(longlong *)this;
  iVar8 = *(int *)(lVar3 + 0x30);
  piVar14 = *(int **)(lVar3 + 0x28);
  pdVar12 = (double *)(piVar14 + (longlong)iVar8 * 0xc);
  local_c8 = pdVar12;
  do {
    if (*(int *)(lVar3 + 0x30) != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FPCGAttributeSetPartition::AttributeSetPartitionEntry>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((double *)piVar14 == pdVar12) {
      local_80 = local_res20;
      local_a0 = *(FPCGAttributeSetPartition **)this;
      pTStack_98 = &local_d8;
      local_90 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
      local_68.Callback._36_4_ = uStack_7c;
      local_68.Callback.ConstKeyCount = local_res20;
      pdStack_88 = pdVar10;
      local_68.Callback.__this = local_a0;
      local_68.Callback.AttributeValues = pTStack_98;
      local_68.Callback.MatchingPartitionDataIndices = local_90;
      local_68.Callback.ThresholdValuesPtr = pdVar10;
      bVar6 = PCGMetadataElementCommon::
              ApplyOnAccessorRange<UE::Math::TRotator<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TRotator<double>,__FPCGAttributeSetPartition::GetMatchingPartitionDataIndices_::__l5::<lambda_1>::operator()<UE::Math::TRotator<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_68,
                         AllowBroadcastAndConstructible,0x100,-1);
      if (pdVar10 != (double *)0x0) {
        operator_delete__(pdVar10);
      }
      if ((TRotator<double> *)local_d8.AllocatorInstance.Data != (TRotator<double> *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      return bVar6;
    }
    iVar13 = *piVar14;
    if (iVar13 == -1) {
LAB_149ba19ca:
      local_b8.Pitch = *(double *)(lVar2 + 0x98);
      local_b8.Yaw = *(double *)(lVar2 + 0xa0);
      local_b8.Roll = *(double *)(lVar2 + 0xa8);
    }
    else if (iVar13 < *(int *)(lVar2 + 0xb0)) {
      if (*(FPCGMetadataAttribute<UE::Math::TRotator<double>_> **)(lVar2 + 0x68) ==
          (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) goto LAB_149ba19ca;
      FPCGMetadataAttribute<UE::Math::TRotator<double>_>::GetValue
                (*(FPCGMetadataAttribute<UE::Math::TRotator<double>_> **)(lVar2 + 0x68),&local_b8,
                 iVar13);
    }
    else {
      iVar13 = iVar13 - *(int *)(lVar2 + 0xb0);
      AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x80));
      if (iVar13 < *(int *)(lVar2 + 0x90)) {
        if ((iVar13 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pdVar12 = (double *)(*(longlong *)(lVar2 + 0x88) + (longlong)iVar13 * 0x18);
      }
      else {
        pdVar12 = (double *)(lVar2 + 0x98);
      }
      local_b8.Pitch = *pdVar12;
      local_b8.Yaw = pdVar12[1];
      local_b8.Roll = pdVar12[2];
      ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x80));
      pdVar12 = local_c8;
    }
    if (((local_d8.AllocatorInstance.Data <= &local_b8) &&
        (&local_b8 <
         (TRotator<double> *)(local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 0x18))
        ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    if (local_d8.ArrayNum == local_d8.ArrayMax) {
      local_d8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
    }
    lVar11 = (longlong)local_d8.ArrayNum;
    piVar14 = piVar14 + 0xc;
    local_d8.ArrayNum = local_d8.ArrayNum + 1;
    *(double *)(local_d8.AllocatorInstance.Data + lVar11 * 0x18) = local_b8.Pitch;
    *(double *)(local_d8.AllocatorInstance.Data + lVar11 * 0x18 + 8) = local_b8.Yaw;
    *(double *)(local_d8.AllocatorInstance.Data + lVar11 * 0x18 + 0x10) = local_b8.Roll;
  } while( true );
}

// operator()<UE::Math::TTransform<double>_> @ 149ba1b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
operator()<UE::Math::TTransform<double>_>(void *this,TTransform<double> *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  double *pdVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  undefined1 auStackY_168 [32];
  undefined1 local_118 [8];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_110;
  int local_100;
  undefined8 *local_f0;
  FPCGAttributeSetPartition *local_e8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTStack_e0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined4 uStack_c4;
  <lambda_1> local_c0;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_f0 = this;
  if (*(longlong **)(*(longlong *)this + 0x20) == (longlong *)0x0) {
    local_100 = 0;
  }
  else {
    local_100 = (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x10))();
    if (local_100 < 1) {
      local_100 = 1;
    }
  }
  lVar3 = *(longlong *)(*(longlong *)this + 8);
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  uVar1 = *(uint *)(*(longlong *)this + 0x30);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar1,&local_110.AllocatorInstance,0,&local_110.ArrayMax);
  }
  lVar4 = *(longlong *)this;
  iVar2 = *(int *)(lVar4 + 0x30);
  piVar12 = *(int **)(lVar4 + 0x28);
  piVar11 = piVar12 + (longlong)iVar2 * 0xc;
  do {
    if (*(int *)(lVar4 + 0x30) != iVar2) {
      local_118[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FPCGAttributeSetPartition::AttributeSetPartitionEntry>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    if (piVar12 == piVar11) {
      uStack_d0 = 0;
      local_c8 = local_100;
      local_e8 = (FPCGAttributeSetPartition *)*local_f0;
      pTStack_e0 = &local_110;
      local_d8 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_f0[3];
      local_c0.Callback._36_4_ = uStack_c4;
      local_c0.Callback.ConstKeyCount = local_100;
      local_c0.Callback.ThresholdValuesPtr = (void *)0x0;
      local_c0.Callback.__this = local_e8;
      local_c0.Callback.AttributeValues = pTStack_e0;
      local_c0.Callback.MatchingPartitionDataIndices = local_d8;
      bVar6 = PCGMetadataElementCommon::
              ApplyOnAccessorRange<UE::Math::TTransform<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TTransform<double>,__FPCGAttributeSetPartition::GetMatchingPartitionDataIndices_::__l5::<lambda_1>::operator()<UE::Math::TTransform<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        (*(IPCGAttributeAccessorKeys **)local_f0[2],
                         *(IPCGAttributeAccessor **)local_f0[1],&local_c0,
                         AllowBroadcastAndConstructible,0x100,-1);
      if ((TTransform<double> *)local_110.AllocatorInstance.Data != (TTransform<double> *)0x0) {
        FMemory::Free(local_110.AllocatorInstance.Data);
      }
      return bVar6;
    }
    iVar10 = *piVar12;
    if (iVar10 == -1) {
LAB_149ba1d2f:
      local_98.Rotation.XY.m128d_f64[0] = *(double *)(lVar3 + 0xa0);
      local_98.Rotation.XY.m128d_f64[1] = *(double *)(lVar3 + 0xa8);
      local_98.Rotation.ZW.m128d_f64[0] = *(double *)(lVar3 + 0xb0);
      local_98.Rotation.ZW.m128d_f64[1] = *(double *)(lVar3 + 0xb8);
      local_98.Translation.XY.m128d_f64[0] = *(double *)(lVar3 + 0xc0);
      local_98.Translation.XY.m128d_f64[1] = *(double *)(lVar3 + 200);
      local_98.Translation.ZW.m128d_f64[0] = *(double *)(lVar3 + 0xd0);
      local_98.Translation.ZW.m128d_f64[1] = *(double *)(lVar3 + 0xd8);
      local_98.Scale3D.XY.m128d_f64[0] = *(double *)(lVar3 + 0xe0);
      local_98.Scale3D.XY.m128d_f64[1] = *(double *)(lVar3 + 0xe8);
      local_98.Scale3D.ZW.m128d_f64[0] = *(double *)(lVar3 + 0xf0);
      local_98.Scale3D.ZW.m128d_f64[1] = *(double *)(lVar3 + 0xf8);
    }
    else if (iVar10 < *(int *)(lVar3 + 0x100)) {
      if (*(FPCGMetadataAttribute<UE::Math::TTransform<double>_> **)(lVar3 + 0x68) ==
          (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) goto LAB_149ba1d2f;
      FPCGMetadataAttribute<UE::Math::TTransform<double>_>::GetValue
                (*(FPCGMetadataAttribute<UE::Math::TTransform<double>_> **)(lVar3 + 0x68),&local_98,
                 iVar10);
    }
    else {
      iVar10 = iVar10 - *(int *)(lVar3 + 0x100);
      AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x80));
      if (iVar10 < *(int *)(lVar3 + 0x90)) {
        if ((iVar10 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pdVar8 = (double *)((longlong)iVar10 * 0x60 + *(longlong *)(lVar3 + 0x88));
      }
      else {
        pdVar8 = (double *)(lVar3 + 0xa0);
      }
      local_98.Rotation.XY.m128d_f64[0] = *pdVar8;
      local_98.Rotation.XY.m128d_f64[1] = pdVar8[1];
      local_98.Rotation.ZW.m128d_f64[0] = pdVar8[2];
      local_98.Rotation.ZW.m128d_f64[1] = pdVar8[3];
      local_98.Translation.XY.m128d_f64[0] = pdVar8[4];
      local_98.Translation.XY.m128d_f64[1] = pdVar8[5];
      local_98.Translation.ZW.m128d_f64[0] = pdVar8[6];
      local_98.Translation.ZW.m128d_f64[1] = pdVar8[7];
      local_98.Scale3D.XY.m128d_f64[0] = pdVar8[8];
      local_98.Scale3D.XY.m128d_f64[1] = pdVar8[9];
      local_98.Scale3D.ZW.m128d_f64[0] = pdVar8[10];
      local_98.Scale3D.ZW.m128d_f64[1] = pdVar8[0xb];
      ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x80));
    }
    if (((local_110.AllocatorInstance.Data <= &local_98) &&
        (&local_98 <
         (TTransform<double> *)
         (local_110.AllocatorInstance.Data + (longlong)local_110.ArrayMax * 0x60))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if (local_110.ArrayNum == local_110.ArrayMax) {
      local_110.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x1060,&local_110.AllocatorInstance,&local_110.ArrayMax);
    }
    lVar9 = (longlong)local_110.ArrayNum;
    local_110.ArrayNum = local_110.ArrayNum + 1;
    lVar9 = lVar9 * 0x60;
    piVar12 = piVar12 + 0xc;
    *(double *)(local_110.AllocatorInstance.Data + lVar9) = local_98.Rotation.XY.m128d_f64[0];
    *(double *)(local_110.AllocatorInstance.Data + lVar9 + 8) = local_98.Rotation.XY.m128d_f64[1];
    *(double *)(local_110.AllocatorInstance.Data + lVar9 + 0x10) = local_98.Rotation.ZW.m128d_f64[0]
    ;
    *(double *)(local_110.AllocatorInstance.Data + lVar9 + 0x10 + 8) =
         local_98.Rotation.ZW.m128d_f64[1];
    *(double *)(local_110.AllocatorInstance.Data + lVar9 + 0x20) =
         local_98.Translation.XY.m128d_f64[0];
    *(double *)(local_110.AllocatorInstance.Data + lVar9 + 0x20 + 8) =
         local_98.Translation.XY.m128d_f64[1];
    *(double *)(local_110.AllocatorInstance.Data + lVar9 + 0x30) =
         local_98.Translation.ZW.m128d_f64[0];
    *(double *)(local_110.AllocatorInstance.Data + lVar9 + 0x30 + 8) =
         local_98.Translation.ZW.m128d_f64[1];
    *(double *)(local_110.AllocatorInstance.Data + lVar9 + 0x40) = local_98.Scale3D.XY.m128d_f64[0];
    *(double *)(local_110.AllocatorInstance.Data + lVar9 + 0x40 + 8) =
         local_98.Scale3D.XY.m128d_f64[1];
    *(double *)(local_110.AllocatorInstance.Data + lVar9 + 0x50) = local_98.Scale3D.ZW.m128d_f64[0];
    *(double *)(local_110.AllocatorInstance.Data + lVar9 + 0x50 + 8) =
         local_98.Scale3D.ZW.m128d_f64[1];
  } while( true );
}

// operator()<UE::Math::TVector2<double>_> @ 149ba2590

bool __thiscall
`FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
operator()<UE::Math::TVector2<double>_>(void *this,TVector2<double> *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ulong64 uVar9;
  double *pdVar10;
  double *pdVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  undefined1 local_res18 [8];
  int local_res20;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_d8;
  double *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TVector2<double>_u_0 local_b8;
  FPCGAttributeSetPartition *local_a8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTStack_a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_98;
  double *pdStack_90;
  int local_88;
  undefined4 uStack_84;
  TArrayView<double,int> local_78;
  <lambda_1> local_68;
  
  iVar8 = 0;
  if ((*(longlong **)(*(longlong *)this + 0x20) != (longlong *)0x0) &&
     (iVar8 = (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x10))(), iVar8 < 1)) {
    iVar8 = 1;
  }
  pdVar10 = (double *)0x0;
  local_res20 = iVar8;
  if ((*(longlong *)(*(longlong *)this + 0x18) != 0) &&
     (pdVar10 = (double *)0x0, *(longlong *)(*(longlong *)this + 0x20) != 0)) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)iVar8;
    uVar9 = SUB168(ZEXT816(8) * auVar5,0);
    if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    pdVar10 = operator_new__(uVar9);
    if (pdVar10 != (double *)0x0) {
      local_c8 = pdVar10;
      iStack_c0 = iVar8;
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_78._12_4_ = uStack_bc;
      local_78.ArrayNum = iStack_c0;
      local_78.DataPtr = local_c8;
      bVar6 = IPCGAttributeAccessor::GetRange<double>
                        (*(IPCGAttributeAccessor **)(*(longlong *)this + 0x18),&local_78,0,
                         *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x20),
                         AllowBroadcastAndConstructible);
      if (bVar6) goto LAB_149ba2695;
      operator_delete__(pdVar10);
    }
    return false;
  }
LAB_149ba2695:
  lVar2 = *(longlong *)(*(longlong *)this + 8);
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  uVar1 = *(uint *)(*(longlong *)this + 0x30);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar1,&local_d8.AllocatorInstance,0,&local_d8.ArrayMax);
  }
  lVar3 = *(longlong *)this;
  iVar8 = *(int *)(lVar3 + 0x30);
  piVar14 = *(int **)(lVar3 + 0x28);
  pdVar11 = (double *)(piVar14 + (longlong)iVar8 * 0xc);
  local_c8 = pdVar11;
  do {
    if (*(int *)(lVar3 + 0x30) != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FPCGAttributeSetPartition::AttributeSetPartitionEntry>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((double *)piVar14 == pdVar11) {
      local_88 = local_res20;
      local_a8 = *(FPCGAttributeSetPartition **)this;
      pTStack_a0 = &local_d8;
      local_98 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
      local_68.Callback._36_4_ = uStack_84;
      local_68.Callback.ConstKeyCount = local_res20;
      pdStack_90 = pdVar10;
      local_68.Callback.__this = local_a8;
      local_68.Callback.AttributeValues = pTStack_a0;
      local_68.Callback.MatchingPartitionDataIndices = local_98;
      local_68.Callback.ThresholdValuesPtr = pdVar10;
      bVar6 = PCGMetadataElementCommon::
              ApplyOnAccessorRange<UE::Math::TVector2<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TVector2<double>,__FPCGAttributeSetPartition::GetMatchingPartitionDataIndices_::__l5::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_68,
                         AllowBroadcastAndConstructible,0x100,-1);
      if (pdVar10 != (double *)0x0) {
        operator_delete__(pdVar10);
      }
      if ((TVector2<double>_u_0 *)local_d8.AllocatorInstance.Data != (TVector2<double>_u_0 *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      return bVar6;
    }
    iVar13 = *piVar14;
    if (iVar13 == -1) {
LAB_149ba27dc:
      local_b8._s_0.X = *(double *)(lVar2 + 0x98);
      local_b8._s_0.Y = *(double *)(lVar2 + 0xa0);
    }
    else if (iVar13 < *(int *)(lVar2 + 0xa8)) {
      if (*(FPCGMetadataAttribute<UE::Math::TVector2<double>_> **)(lVar2 + 0x68) ==
          (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) goto LAB_149ba27dc;
      FPCGMetadataAttribute<UE::Math::TVector2<double>_>::GetValue
                (*(FPCGMetadataAttribute<UE::Math::TVector2<double>_> **)(lVar2 + 0x68),
                 (TVector2<double> *)&local_b8._s_0,iVar13);
    }
    else {
      iVar13 = iVar13 - *(int *)(lVar2 + 0xa8);
      AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x80));
      if (iVar13 < *(int *)(lVar2 + 0x90)) {
        if ((iVar13 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pdVar11 = (double *)((longlong)iVar13 * 0x10 + *(longlong *)(lVar2 + 0x88));
      }
      else {
        pdVar11 = (double *)(lVar2 + 0x98);
      }
      local_b8._s_0.X = *pdVar11;
      local_b8._s_0.Y = pdVar11[1];
      ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x80));
      pdVar11 = local_c8;
    }
    if (((local_d8.AllocatorInstance.Data <= &local_b8) &&
        (&local_b8 <
         (TVector2<double>_u_0 *)
         (local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 0x10))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    if (local_d8.ArrayNum == local_d8.ArrayMax) {
      local_d8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
    }
    lVar12 = (longlong)local_d8.ArrayNum;
    local_d8.ArrayNum = local_d8.ArrayNum + 1;
    piVar14 = piVar14 + 0xc;
    *(double *)(local_d8.AllocatorInstance.Data + lVar12 * 0x10) = local_b8._s_0.X;
    *(double *)(local_d8.AllocatorInstance.Data + lVar12 * 0x10 + 8) = local_b8._s_0.Y;
  } while( true );
}

// operator()<UE::Math::TVector4<double>_> @ 149ba2fc0

bool __thiscall
`FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
operator()<UE::Math::TVector4<double>_>(void *this,TVector4<double> *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ulong64 uVar9;
  double *pdVar10;
  double *pdVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  undefined1 local_res18 [8];
  int local_res20;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_e8;
  double *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TVector4<double>_u_0 local_c8;
  FPCGAttributeSetPartition *local_a8;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTStack_a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_98;
  double *pdStack_90;
  int local_88;
  undefined4 uStack_84;
  TArrayView<double,int> local_78;
  <lambda_1> local_68;
  
  iVar8 = 0;
  if ((*(longlong **)(*(longlong *)this + 0x20) != (longlong *)0x0) &&
     (iVar8 = (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x10))(), iVar8 < 1)) {
    iVar8 = 1;
  }
  pdVar10 = (double *)0x0;
  local_res20 = iVar8;
  if ((*(longlong *)(*(longlong *)this + 0x18) != 0) &&
     (pdVar10 = (double *)0x0, *(longlong *)(*(longlong *)this + 0x20) != 0)) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)iVar8;
    uVar9 = SUB168(ZEXT816(8) * auVar5,0);
    if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    pdVar10 = operator_new__(uVar9);
    if (pdVar10 != (double *)0x0) {
      local_d8 = pdVar10;
      iStack_d0 = iVar8;
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_78._12_4_ = uStack_cc;
      local_78.ArrayNum = iStack_d0;
      local_78.DataPtr = local_d8;
      bVar6 = IPCGAttributeAccessor::GetRange<double>
                        (*(IPCGAttributeAccessor **)(*(longlong *)this + 0x18),&local_78,0,
                         *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x20),
                         AllowBroadcastAndConstructible);
      if (bVar6) goto LAB_149ba30c8;
      operator_delete__(pdVar10);
    }
    return false;
  }
LAB_149ba30c8:
  lVar2 = *(longlong *)(*(longlong *)this + 8);
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  uVar1 = *(uint *)(*(longlong *)this + 0x30);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,uVar1,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
  }
  lVar3 = *(longlong *)this;
  iVar8 = *(int *)(lVar3 + 0x30);
  piVar14 = *(int **)(lVar3 + 0x28);
  pdVar11 = (double *)(piVar14 + (longlong)iVar8 * 0xc);
  local_d8 = pdVar11;
  do {
    if (*(int *)(lVar3 + 0x30) != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FPCGAttributeSetPartition::AttributeSetPartitionEntry>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((double *)piVar14 == pdVar11) {
      local_88 = local_res20;
      local_a8 = *(FPCGAttributeSetPartition **)this;
      pTStack_a0 = &local_e8;
      local_98 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
      local_68.Callback._36_4_ = uStack_84;
      local_68.Callback.ConstKeyCount = local_res20;
      pdStack_90 = pdVar10;
      local_68.Callback.__this = local_a8;
      local_68.Callback.AttributeValues = pTStack_a0;
      local_68.Callback.MatchingPartitionDataIndices = local_98;
      local_68.Callback.ThresholdValuesPtr = pdVar10;
      bVar6 = PCGMetadataElementCommon::
              ApplyOnAccessorRange<UE::Math::TVector4<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TVector4<double>,__FPCGAttributeSetPartition::GetMatchingPartitionDataIndices_::__l5::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_68,
                         AllowBroadcastAndConstructible,0x100,-1);
      if (pdVar10 != (double *)0x0) {
        operator_delete__(pdVar10);
      }
      if ((TVector4<double>_u_0 *)local_e8.AllocatorInstance.Data != (TVector4<double>_u_0 *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      return bVar6;
    }
    iVar13 = *piVar14;
    if (iVar13 == -1) {
LAB_149ba3222:
      local_c8._s_0.X = *(double *)(lVar2 + 0xa0);
      local_c8._s_0.Y = *(double *)(lVar2 + 0xa8);
      local_c8._s_0.Z = *(double *)(lVar2 + 0xb0);
      local_c8._s_0.W = *(double *)(lVar2 + 0xb8);
    }
    else if (iVar13 < *(int *)(lVar2 + 0xc0)) {
      if (*(FPCGMetadataAttribute<UE::Math::TVector4<double>_> **)(lVar2 + 0x68) ==
          (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) goto LAB_149ba3222;
      FPCGMetadataAttribute<UE::Math::TVector4<double>_>::GetValue
                (*(FPCGMetadataAttribute<UE::Math::TVector4<double>_> **)(lVar2 + 0x68),
                 (TVector4<double> *)&local_c8._s_0,iVar13);
    }
    else {
      iVar13 = iVar13 - *(int *)(lVar2 + 0xc0);
      AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x80));
      if (iVar13 < *(int *)(lVar2 + 0x90)) {
        if ((iVar13 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pdVar11 = (double *)((longlong)iVar13 * 0x20 + *(longlong *)(lVar2 + 0x88));
      }
      else {
        pdVar11 = (double *)(lVar2 + 0xa0);
      }
      local_c8._s_0.X = *pdVar11;
      local_c8._s_0.Y = pdVar11[1];
      local_c8._s_0.Z = pdVar11[2];
      local_c8._s_0.W = pdVar11[3];
      ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x80));
      pdVar11 = local_d8;
    }
    if (((local_e8.AllocatorInstance.Data <= &local_c8) &&
        (&local_c8 <
         (TVector4<double>_u_0 *)
         (local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x20))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    if (local_e8.ArrayNum == local_e8.ArrayMax) {
      local_e8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x1020,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
    }
    lVar12 = (longlong)local_e8.ArrayNum;
    piVar14 = piVar14 + 0xc;
    local_e8.ArrayNum = local_e8.ArrayNum + 1;
    *(double *)(local_e8.AllocatorInstance.Data + lVar12 * 0x20) = local_c8._s_0.X;
    *(double *)(local_e8.AllocatorInstance.Data + lVar12 * 0x20 + 8) = local_c8._s_0.Y;
    *(double *)(local_e8.AllocatorInstance.Data + lVar12 * 0x20 + 0x10) = local_c8._s_0.Z;
    *(double *)(local_e8.AllocatorInstance.Data + lVar12 * 0x20 + 0x10 + 8) = local_c8._s_0.W;
  } while( true );
}

// operator()<UE::Math::TVector<double>_> @ 149ba3a30

bool __thiscall
`FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
operator()<UE::Math::TVector<double>_>(void *this,TVector<double> *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ulong64 uVar9;
  double *pdVar10;
  longlong lVar11;
  double *pdVar12;
  int iVar13;
  int *piVar14;
  undefined1 local_res18 [8];
  int local_res20;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_d8;
  double *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TVector<double>_u_0 local_b8;
  FPCGAttributeSetPartition *local_a0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTStack_98;
  TArray<int,TSizedDefaultAllocator<32>_> *local_90;
  double *pdStack_88;
  int local_80;
  undefined4 uStack_7c;
  TArrayView<double,int> local_78;
  <lambda_1> local_68;
  
  iVar8 = 0;
  if ((*(longlong **)(*(longlong *)this + 0x20) != (longlong *)0x0) &&
     (iVar8 = (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x10))(), iVar8 < 1)) {
    iVar8 = 1;
  }
  pdVar10 = (double *)0x0;
  local_res20 = iVar8;
  if ((*(longlong *)(*(longlong *)this + 0x18) != 0) &&
     (pdVar10 = (double *)0x0, *(longlong *)(*(longlong *)this + 0x20) != 0)) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)iVar8;
    uVar9 = SUB168(ZEXT816(8) * auVar5,0);
    if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    pdVar10 = operator_new__(uVar9);
    if (pdVar10 != (double *)0x0) {
      local_c8 = pdVar10;
      iStack_c0 = iVar8;
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_78._12_4_ = uStack_bc;
      local_78.ArrayNum = iStack_c0;
      local_78.DataPtr = local_c8;
      bVar6 = IPCGAttributeAccessor::GetRange<double>
                        (*(IPCGAttributeAccessor **)(*(longlong *)this + 0x18),&local_78,0,
                         *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x20),
                         AllowBroadcastAndConstructible);
      if (bVar6) goto LAB_149ba3b35;
      operator_delete__(pdVar10);
    }
    return false;
  }
LAB_149ba3b35:
  lVar2 = *(longlong *)(*(longlong *)this + 8);
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  uVar1 = *(uint *)(*(longlong *)this + 0x30);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar1,&local_d8.AllocatorInstance,0,&local_d8.ArrayMax);
  }
  lVar3 = *(longlong *)this;
  iVar8 = *(int *)(lVar3 + 0x30);
  piVar14 = *(int **)(lVar3 + 0x28);
  pdVar12 = (double *)(piVar14 + (longlong)iVar8 * 0xc);
  local_c8 = pdVar12;
  do {
    if (*(int *)(lVar3 + 0x30) != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FPCGAttributeSetPartition::AttributeSetPartitionEntry>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((double *)piVar14 == pdVar12) {
      local_80 = local_res20;
      local_a0 = *(FPCGAttributeSetPartition **)this;
      pTStack_98 = &local_d8;
      local_90 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
      local_68.Callback._36_4_ = uStack_7c;
      local_68.Callback.ConstKeyCount = local_res20;
      pdStack_88 = pdVar10;
      local_68.Callback.__this = local_a0;
      local_68.Callback.AttributeValues = pTStack_98;
      local_68.Callback.MatchingPartitionDataIndices = local_90;
      local_68.Callback.ThresholdValuesPtr = pdVar10;
      bVar6 = PCGMetadataElementCommon::
              ApplyOnAccessorRange<UE::Math::TVector<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TVector<double>,__FPCGAttributeSetPartition::GetMatchingPartitionDataIndices_::__l5::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_68,
                         AllowBroadcastAndConstructible,0x100,-1);
      if (pdVar10 != (double *)0x0) {
        operator_delete__(pdVar10);
      }
      if ((TVector<double>_u_0 *)local_d8.AllocatorInstance.Data != (TVector<double>_u_0 *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      return bVar6;
    }
    iVar13 = *piVar14;
    if (iVar13 == -1) {
LAB_149ba3c8a:
      local_b8._s_0.X = *(double *)(lVar2 + 0x98);
      local_b8._s_0.Y = *(double *)(lVar2 + 0xa0);
      local_b8._s_0.Z = *(double *)(lVar2 + 0xa8);
    }
    else if (iVar13 < *(int *)(lVar2 + 0xb0)) {
      if (*(FPCGMetadataAttribute<UE::Math::TVector<double>_> **)(lVar2 + 0x68) ==
          (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) goto LAB_149ba3c8a;
      FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
                (*(FPCGMetadataAttribute<UE::Math::TVector<double>_> **)(lVar2 + 0x68),
                 (TVector<double> *)&local_b8._s_0,iVar13);
    }
    else {
      iVar13 = iVar13 - *(int *)(lVar2 + 0xb0);
      AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x80));
      if (iVar13 < *(int *)(lVar2 + 0x90)) {
        if ((iVar13 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pdVar12 = (double *)(*(longlong *)(lVar2 + 0x88) + (longlong)iVar13 * 0x18);
      }
      else {
        pdVar12 = (double *)(lVar2 + 0x98);
      }
      local_b8._s_0.X = *pdVar12;
      local_b8._s_0.Y = pdVar12[1];
      local_b8._s_0.Z = pdVar12[2];
      ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x80));
      pdVar12 = local_c8;
    }
    if (((local_d8.AllocatorInstance.Data <= &local_b8) &&
        (&local_b8 <
         (TVector<double>_u_0 *)
         (local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 0x18))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    if (local_d8.ArrayNum == local_d8.ArrayMax) {
      local_d8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
    }
    lVar11 = (longlong)local_d8.ArrayNum;
    piVar14 = piVar14 + 0xc;
    local_d8.ArrayNum = local_d8.ArrayNum + 1;
    *(double *)(local_d8.AllocatorInstance.Data + lVar11 * 0x18) = local_b8._s_0.X;
    *(double *)(local_d8.AllocatorInstance.Data + lVar11 * 0x18 + 8) = local_b8._s_0.Y;
    *(double *)(local_d8.AllocatorInstance.Data + lVar11 * 0x18 + 0x10) = local_b8._s_0.Z;
  } while( true );
}

// operator()<FSoftClassPath> @ 149ba4510

/* WARNING: Removing unreachable block (ram,0x000149ba4737) */

bool __thiscall
`FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
operator()<FSoftClassPath>(void *this,FSoftClassPath *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  undefined1 local_res18 [8];
  int local_res20;
  TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> local_d8;
  undefined1 local_c8 [16];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  int *local_a8;
  FPCGAttributeSetPartition *local_a0;
  TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *pTStack_98;
  TArray<int,TSizedDefaultAllocator<32>_> *local_90;
  undefined8 uStack_88;
  int local_80;
  undefined4 uStack_7c;
  <lambda_1> local_78;
  
  if (*(longlong **)(*(longlong *)this + 0x20) == (longlong *)0x0) {
    local_res20 = 0;
  }
  else {
    local_res20 = (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x10))();
    if (local_res20 < 1) {
      local_res20 = 1;
    }
  }
  lVar3 = *(longlong *)(*(longlong *)this + 8);
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  uVar1 = *(uint *)(*(longlong *)this + 0x30);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar1,&local_d8.AllocatorInstance,0,&local_d8.ArrayMax);
  }
  lVar4 = *(longlong *)this;
  iVar2 = *(int *)(lVar4 + 0x30);
  piVar14 = *(int **)(lVar4 + 0x28);
  piVar12 = piVar14 + (longlong)iVar2 * 0xc;
  local_a8 = piVar12;
  do {
    if (*(int *)(lVar4 + 0x30) != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FPCGAttributeSetPartition::AttributeSetPartitionEntry>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (piVar14 == piVar12) {
      uStack_88 = 0;
      local_80 = local_res20;
      local_a0 = *(FPCGAttributeSetPartition **)this;
      pTStack_98 = &local_d8;
      local_90 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
      local_78.Callback._36_4_ = uStack_7c;
      local_78.Callback.ConstKeyCount = local_res20;
      local_78.Callback.ThresholdValuesPtr = (void *)0x0;
      local_78.Callback.__this = local_a0;
      local_78.Callback.AttributeValues = pTStack_98;
      local_78.Callback.MatchingPartitionDataIndices = local_90;
      bVar7 = PCGMetadataElementCommon::
              ApplyOnAccessorRange<FSoftClassPath,_PCGMetadataElementCommon::ApplyOnAccessor<FSoftClassPath,__FPCGAttributeSetPartition::GetMatchingPartitionDataIndices_::__l5::<lambda_1>::operator()<FSoftClassPath>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_78,
                         AllowBroadcastAndConstructible,0x100,-1);
      DestructItems<FSoftClassPath,int>
                ((FSoftClassPath *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      if ((FSoftClassPath *)local_d8.AllocatorInstance.Data != (FSoftClassPath *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      if (*(void **)&param_1->field_0x10 != (void *)0x0) {
        FMemory::Free(*(void **)&param_1->field_0x10);
      }
      return bVar7;
    }
    iVar13 = *piVar14;
    if (iVar13 == -1) {
      iVar13 = *(int *)(lVar3 + 0xb0);
      pvVar5 = *(void **)(lVar3 + 0xa8);
      local_c8._0_8_ = *(undefined8 *)(lVar3 + 0x98);
      local_c8._8_8_ = *(undefined8 *)(lVar3 + 0xa0);
joined_r0x000149ba487f:
      local_b0._0_4_ = iVar13;
      if (iVar13 == 0) {
        local_b8.Data = (FScriptContainerElement *)0x0;
        local_b0 = 0;
        piVar12 = local_a8;
      }
      else {
        local_b8.Data = (FScriptContainerElement *)0x0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar13,0,&local_b8,iVar13,(int *)((longlong)&local_b0 + 4));
        memcpy(local_b8.Data,pvVar5,(longlong)iVar13);
        piVar12 = local_a8;
      }
    }
    else if (iVar13 < *(int *)(lVar3 + 0xb8)) {
      if (*(FPCGMetadataAttribute<FSoftClassPath> **)(lVar3 + 0x68) ==
          (FPCGMetadataAttribute<FSoftClassPath> *)0x0) {
        iVar13 = *(int *)(lVar3 + 0xb0);
        pvVar5 = *(void **)(lVar3 + 0xa8);
        local_c8._0_8_ = *(undefined8 *)(lVar3 + 0x98);
        local_c8._8_8_ = *(undefined8 *)(lVar3 + 0xa0);
        goto joined_r0x000149ba487f;
      }
      FPCGMetadataAttribute<FSoftClassPath>::GetValue
                (*(FPCGMetadataAttribute<FSoftClassPath> **)(lVar3 + 0x68),
                 (FSoftClassPath *)local_c8,iVar13);
    }
    else {
      iVar13 = iVar13 - *(int *)(lVar3 + 0xb8);
      AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x80));
      if (iVar13 < *(int *)(lVar3 + 0x90)) {
        if ((iVar13 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        puVar9 = (undefined8 *)((longlong)iVar13 * 0x20 + *(longlong *)(lVar3 + 0x88));
      }
      else {
        puVar9 = (undefined8 *)(lVar3 + 0x98);
      }
      local_c8._0_8_ = *puVar9;
      local_c8._8_8_ = puVar9[1];
      local_b8.Data = (FScriptContainerElement *)0x0;
      iVar13 = *(int *)(puVar9 + 3);
      pvVar5 = (void *)puVar9[2];
      local_b0._0_4_ = iVar13;
      if (iVar13 == 0) {
        local_b0 = 0;
        ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x80));
        piVar12 = local_a8;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar13,0,&local_b8,iVar13,(int *)((longlong)&local_b0 + 4));
        memcpy(local_b8.Data,pvVar5,(longlong)iVar13);
        ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x80));
        piVar12 = local_a8;
      }
    }
    if (((local_d8.AllocatorInstance.Data <= (FSoftClassPath *)local_c8) &&
        ((FScriptContainerElement *)local_c8 <
         local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    if (local_d8.ArrayNum == local_d8.ArrayMax) {
      local_d8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
    }
    lVar10 = (longlong)local_d8.ArrayNum;
    local_d8.ArrayNum = local_d8.ArrayNum + 1;
    pFVar11 = local_d8.AllocatorInstance.Data + lVar10 * 0x20;
    *(undefined8 *)pFVar11 = local_c8._0_8_;
    *(undefined8 *)(pFVar11 + 8) = local_c8._8_8_;
    *(undefined8 *)(pFVar11 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar11 + 0x10) = local_b8.Data;
    local_b8.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar11 + 0x18) = (undefined4)local_b0;
    *(undefined4 *)(pFVar11 + 0x1c) = local_b0._4_4_;
    local_b0 = 0;
    piVar14 = piVar14 + 0xc;
  } while( true );
}

// operator()<FSoftObjectPath> @ 149ba5060

/* WARNING: Removing unreachable block (ram,0x000149ba53a7) */

bool __thiscall
`FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
operator()<FSoftObjectPath>(void *this,FSoftObjectPath *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  FName _Src_00;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined1 local_res18 [8];
  int local_res20;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_d8;
  FSoftObjectPath local_c8;
  int *local_a8;
  FPCGAttributeSetPartition *local_a0;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTStack_98;
  TArray<int,TSizedDefaultAllocator<32>_> *local_90;
  undefined8 uStack_88;
  int local_80;
  undefined4 uStack_7c;
  <lambda_1> local_78;
  
  if (*(longlong **)(*(longlong *)this + 0x20) == (longlong *)0x0) {
    local_res20 = 0;
  }
  else {
    local_res20 = (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x10))();
    if (local_res20 < 1) {
      local_res20 = 1;
    }
  }
  lVar3 = *(longlong *)(*(longlong *)this + 8);
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  uVar1 = *(uint *)(*(longlong *)this + 0x30);
  if (-1 < (int)uVar1) {
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar1,&local_d8.AllocatorInstance,0,&local_d8.ArrayMax);
    }
    lVar4 = *(longlong *)this;
    iVar2 = *(int *)(lVar4 + 0x30);
    piVar13 = *(int **)(lVar4 + 0x28);
    piVar11 = piVar13 + (longlong)iVar2 * 0xc;
    local_a8 = piVar11;
    while( true ) {
      if (*(int *)(lVar4 + 0x30) != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TTuple<int,FPCGAttributeSetPartition::AttributeSetPartitionEntry>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (piVar13 == piVar11) {
        uStack_88 = 0;
        local_80 = local_res20;
        local_a0 = *(FPCGAttributeSetPartition **)this;
        pTStack_98 = &local_d8;
        local_90 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
        local_78.Callback._36_4_ = uStack_7c;
        local_78.Callback.ConstKeyCount = local_res20;
        local_78.Callback.ThresholdValuesPtr = (void *)0x0;
        local_78.Callback.__this = local_a0;
        local_78.Callback.AttributeValues = pTStack_98;
        local_78.Callback.MatchingPartitionDataIndices = local_90;
        bVar6 = PCGMetadataElementCommon::
                ApplyOnAccessorRange<FSoftObjectPath,_PCGMetadataElementCommon::ApplyOnAccessor<FSoftObjectPath,__FPCGAttributeSetPartition::GetMatchingPartitionDataIndices_::__l5::<lambda_1>::operator()<FSoftObjectPath>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                          ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                           (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_78,
                           AllowBroadcastAndConstructible,0x100,-1);
        DestructItems<FSoftObjectPath,int>
                  ((FSoftObjectPath *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
        if ((FSoftObjectPath *)local_d8.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
          FMemory::Free(local_d8.AllocatorInstance.Data);
        }
        pFVar10 = (param_1->SubPathString).Data.AllocatorInstance.Data;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
        return bVar6;
      }
      iVar12 = *piVar13;
      if (iVar12 == -1) {
        iVar12 = *(int *)(lVar3 + 0xb0);
        _Src = *(void **)(lVar3 + 0xa8);
        local_c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.SubPathString.Data.ArrayNum = iVar12;
        local_c8.AssetPath.PackageName = *(FName *)(lVar3 + 0x98);
        local_c8.AssetPath.AssetName = *(FName *)(lVar3 + 0xa0);
        if (iVar12 == 0) {
          local_c8.SubPathString.Data.ArrayNum = 0;
          local_c8.SubPathString.Data.ArrayMax = 0;
          piVar11 = local_a8;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar12,0,(ForAnyElementType *)&local_c8.SubPathString,iVar12,
                     &local_c8.SubPathString.Data.ArrayMax);
          memcpy(local_c8.SubPathString.Data.AllocatorInstance.Data,_Src,(longlong)iVar12);
          piVar11 = local_a8;
        }
      }
      else if (iVar12 < *(int *)(lVar3 + 0xb8)) {
        if (*(FPCGMetadataAttribute<FSoftObjectPath> **)(lVar3 + 0x68) ==
            (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
          FSoftObjectPath::FSoftObjectPath(&local_c8,(FSoftObjectPath *)(lVar3 + 0x98));
        }
        else {
          FPCGMetadataAttribute<FSoftObjectPath>::GetValue
                    (*(FPCGMetadataAttribute<FSoftObjectPath> **)(lVar3 + 0x68),&local_c8,iVar12);
        }
      }
      else {
        iVar12 = iVar12 - *(int *)(lVar3 + 0xb8);
        AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x80));
        if (iVar12 < *(int *)(lVar3 + 0x90)) {
          if ((iVar12 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pFVar8 = (FName *)((longlong)iVar12 * 0x20 + *(longlong *)(lVar3 + 0x88));
        }
        else {
          pFVar8 = (FName *)(lVar3 + 0x98);
        }
        local_c8.AssetPath.PackageName = *pFVar8;
        local_c8.AssetPath.AssetName = pFVar8[1];
        local_c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar1 = pFVar8[3].ComparisonIndex.Value;
        _Src_00 = pFVar8[2];
        local_c8.SubPathString.Data.ArrayNum = uVar1;
        if (uVar1 == 0) {
          local_c8.SubPathString.Data.ArrayNum = 0;
          local_c8.SubPathString.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar1,0,(ForAnyElementType *)&local_c8.SubPathString,uVar1,
                     &local_c8.SubPathString.Data.ArrayMax);
          memcpy(local_c8.SubPathString.Data.AllocatorInstance.Data,(void *)_Src_00,
                 (longlong)(int)uVar1);
        }
        ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x80));
        piVar11 = local_a8;
      }
      if (((local_d8.AllocatorInstance.Data <= &local_c8) &&
          (&local_c8 <
           (FSoftObjectPath *)(local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 0x20)
          )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) break;
      if (local_d8.ArrayNum == local_d8.ArrayMax) {
        local_d8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
      }
      lVar9 = (longlong)local_d8.ArrayNum;
      local_d8.ArrayNum = local_d8.ArrayNum + 1;
      pFVar10 = local_d8.AllocatorInstance.Data + lVar9 * 0x20;
      *(FName *)&pFVar10->field_0x0 = local_c8.AssetPath.PackageName;
      *(FName *)(pFVar10 + 8) = local_c8.AssetPath.AssetName;
      *(undefined8 *)(pFVar10 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar10 + 0x10) =
           local_c8.SubPathString.Data.AllocatorInstance.Data;
      local_c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar10 + 0x18) = local_c8.SubPathString.Data.ArrayNum;
      *(int *)(pFVar10 + 0x1c) = local_c8.SubPathString.Data.ArrayMax;
      local_c8.SubPathString.Data.ArrayNum = 0;
      local_c8.SubPathString.Data.ArrayMax = 0;
      piVar13 = piVar13 + 0xc;
    }
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// operator()<FName> @ 149ba6c70

bool __thiscall
`FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::operator()<FName>
          (void *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  undefined1 local_res18 [8];
  int local_res20;
  undefined8 local_a8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_a0;
  FPCGAttributeSetPartition *local_90;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTStack_88;
  TArray<int,TSizedDefaultAllocator<32>_> *local_80;
  undefined8 uStack_78;
  int local_70;
  undefined4 uStack_6c;
  <lambda_1> local_68;
  
  if (*(longlong **)(*(longlong *)this + 0x20) == (longlong *)0x0) {
    local_res20 = 0;
  }
  else {
    local_res20 = (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x10))();
    if (local_res20 < 1) {
      local_res20 = 1;
    }
  }
  lVar3 = *(longlong *)(*(longlong *)this + 8);
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  uVar1 = *(uint *)(*(longlong *)this + 0x30);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar1,&local_a0.AllocatorInstance,0,&local_a0.ArrayMax);
  }
  lVar4 = *(longlong *)this;
  iVar2 = *(int *)(lVar4 + 0x30);
  piVar12 = *(int **)(lVar4 + 0x28);
  piVar11 = piVar12 + (longlong)iVar2 * 0xc;
  do {
    if (*(int *)(lVar4 + 0x30) != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FPCGAttributeSetPartition::AttributeSetPartitionEntry>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (piVar12 == piVar11) {
      uStack_78 = 0;
      local_70 = local_res20;
      local_90 = *(FPCGAttributeSetPartition **)this;
      pTStack_88 = &local_a0;
      local_80 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
      local_68.Callback._36_4_ = uStack_6c;
      local_68.Callback.ConstKeyCount = local_res20;
      local_68.Callback.ThresholdValuesPtr = (void *)0x0;
      local_68.Callback.__this = local_90;
      local_68.Callback.AttributeValues = pTStack_88;
      local_68.Callback.MatchingPartitionDataIndices = local_80;
      bVar6 = PCGMetadataElementCommon::
              ApplyOnAccessorRange<FName,_PCGMetadataElementCommon::ApplyOnAccessor<FName,__FPCGAttributeSetPartition::GetMatchingPartitionDataIndices_::__l5::<lambda_1>::operator()<FName>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_68,
                         AllowBroadcastAndConstructible,0x100,-1);
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      return bVar6;
    }
    iVar10 = *piVar12;
    if (iVar10 == -1) {
LAB_149ba6e01:
      local_a8 = *(undefined8 *)(lVar3 + 0x98);
    }
    else if (iVar10 < *(int *)(lVar3 + 0xa0)) {
      if (*(FPCGMetadataAttribute<FName> **)(lVar3 + 0x68) == (FPCGMetadataAttribute<FName> *)0x0)
      goto LAB_149ba6e01;
      FPCGMetadataAttribute<FName>::GetValue
                (*(FPCGMetadataAttribute<FName> **)(lVar3 + 0x68),(int)&local_a8);
    }
    else {
      iVar10 = iVar10 - *(int *)(lVar3 + 0xa0);
      AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x80));
      if (iVar10 < *(int *)(lVar3 + 0x90)) {
        if ((iVar10 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x88) + (longlong)iVar10 * 8);
      }
      else {
        puVar8 = (undefined8 *)(lVar3 + 0x98);
      }
      local_a8 = *puVar8;
      ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x80));
    }
    if (((local_a0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 <
         local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if (local_a0.ArrayNum == local_a0.ArrayMax) {
      local_a0.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
    }
    lVar9 = (longlong)local_a0.ArrayNum;
    piVar12 = piVar12 + 0xc;
    local_a0.ArrayNum = local_a0.ArrayNum + 1;
    *(undefined8 *)(local_a0.AllocatorInstance.Data + lVar9 * 8) = local_a8;
  } while( true );
}

// operator()<FString> @ 149ba7660

/* WARNING: Removing unreachable block (ram,0x000149ba7996) */

bool __thiscall
`FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::operator()<FString>
          (void *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  undefined1 local_res18 [8];
  int local_res20;
  FString local_c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  int *local_a8;
  FPCGAttributeSetPartition *local_a0;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTStack_98;
  TArray<int,TSizedDefaultAllocator<32>_> *local_90;
  undefined8 uStack_88;
  int local_80;
  undefined4 uStack_7c;
  <lambda_1> local_78;
  
  if (*(longlong **)(*(longlong *)this + 0x20) == (longlong *)0x0) {
    local_res20 = 0;
  }
  else {
    local_res20 = (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x10))();
    if (local_res20 < 1) {
      local_res20 = 1;
    }
  }
  lVar3 = *(longlong *)(*(longlong *)this + 8);
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  uVar1 = *(uint *)(*(longlong *)this + 0x30);
  if (-1 < (int)uVar1) {
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar1,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
    lVar4 = *(longlong *)this;
    iVar2 = *(int *)(lVar4 + 0x30);
    piVar14 = *(int **)(lVar4 + 0x28);
    piVar12 = piVar14 + (longlong)iVar2 * 0xc;
    local_a8 = piVar12;
    while( true ) {
      if (*(int *)(lVar4 + 0x30) != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TTuple<int,FPCGAttributeSetPartition::AttributeSetPartitionEntry>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (piVar14 == piVar12) {
        uStack_88 = 0;
        local_80 = local_res20;
        local_a0 = *(FPCGAttributeSetPartition **)this;
        pTStack_98 = &local_b8;
        local_90 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
        local_78.Callback._36_4_ = uStack_7c;
        local_78.Callback.ConstKeyCount = local_res20;
        local_78.Callback.ThresholdValuesPtr = (void *)0x0;
        local_78.Callback.__this = local_a0;
        local_78.Callback.AttributeValues = pTStack_98;
        local_78.Callback.MatchingPartitionDataIndices = local_90;
        bVar7 = PCGMetadataElementCommon::
                ApplyOnAccessorRange<FString,_PCGMetadataElementCommon::ApplyOnAccessor<FString,__FPCGAttributeSetPartition::GetMatchingPartitionDataIndices_::__l5::<lambda_1>::operator()<FString>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                          ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                           (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_78,
                           AllowBroadcastAndConstructible,0x100,-1);
        DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
        if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.AllocatorInstance.Data);
        }
        pFVar11 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar11 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar11);
        }
        return bVar7;
      }
      iVar13 = *piVar14;
      if (iVar13 == -1) {
        iVar13 = *(int *)(lVar3 + 0xa0);
        pvVar5 = *(void **)(lVar3 + 0x98);
        local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Data.ArrayNum = iVar13;
        if (iVar13 == 0) {
          local_c8.Data.ArrayNum = 0;
          local_c8.Data.ArrayMax = 0;
          piVar12 = local_a8;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar13,0,(ForAnyElementType *)&local_c8,iVar13,&local_c8.Data.ArrayMax);
          memcpy(local_c8.Data.AllocatorInstance.Data,pvVar5,(longlong)iVar13 * 2);
          piVar12 = local_a8;
        }
      }
      else if (iVar13 < *(int *)(lVar3 + 0xa8)) {
        if (*(FPCGMetadataAttribute<FString> **)(lVar3 + 0x68) ==
            (FPCGMetadataAttribute<FString> *)0x0) {
          ::FString::FString(&local_c8,(FString *)(lVar3 + 0x98));
        }
        else {
          FPCGMetadataAttribute<FString>::GetValue
                    (*(FPCGMetadataAttribute<FString> **)(lVar3 + 0x68),&local_c8,iVar13);
        }
      }
      else {
        iVar13 = iVar13 - *(int *)(lVar3 + 0xa8);
        AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x80));
        if (iVar13 < *(int *)(lVar3 + 0x90)) {
          if ((iVar13 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          puVar9 = (undefined8 *)((longlong)iVar13 * 0x10 + *(longlong *)(lVar3 + 0x88));
        }
        else {
          puVar9 = (undefined8 *)(lVar3 + 0x98);
        }
        local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar13 = *(int *)(puVar9 + 1);
        pvVar5 = (void *)*puVar9;
        local_c8.Data.ArrayNum = iVar13;
        if (iVar13 == 0) {
          local_c8.Data.ArrayNum = 0;
          local_c8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar13,0,(ForAnyElementType *)&local_c8,iVar13,&local_c8.Data.ArrayMax);
          memcpy(local_c8.Data.AllocatorInstance.Data,pvVar5,(longlong)iVar13 * 2);
        }
        ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x80));
        piVar12 = local_a8;
      }
      if (((local_b8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 <
           local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) break;
      if (local_b8.ArrayNum == local_b8.ArrayMax) {
        local_b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
      }
      lVar10 = (longlong)local_b8.ArrayNum;
      local_b8.ArrayNum = local_b8.ArrayNum + 1;
      pFVar11 = local_b8.AllocatorInstance.Data + lVar10 * 0x10;
      *(undefined8 *)pFVar11 = 0;
      *(FScriptContainerElement **)pFVar11 = local_c8.Data.AllocatorInstance.Data;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar11 + 8) = local_c8.Data.ArrayNum;
      *(int *)(pFVar11 + 0xc) = local_c8.Data.ArrayMax;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      piVar14 = piVar14 + 0xc;
    }
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// operator()<__int64> @ 149ba80e0

bool __thiscall
`FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::operator()<__int64>
          (void *this,long64 param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ulong64 uVar9;
  long64 *plVar10;
  long64 lVar11;
  longlong lVar12;
  long64 *plVar13;
  int iVar14;
  int *piVar15;
  undefined1 local_res18 [8];
  int local_res20;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_d8;
  long64 local_c8 [2];
  long64 *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FPCGAttributeSetPartition *local_a8;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTStack_a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_98;
  long64 *plStack_90;
  int local_88;
  undefined4 uStack_84;
  TArrayView<__int64,int> local_78;
  <lambda_1> local_68;
  
  iVar8 = 0;
  if ((*(longlong **)(*(longlong *)this + 0x20) != (longlong *)0x0) &&
     (iVar8 = (**(code **)(**(longlong **)(*(longlong *)this + 0x20) + 0x10))(), iVar8 < 1)) {
    iVar8 = 1;
  }
  plVar10 = (long64 *)0x0;
  local_res20 = iVar8;
  if ((*(longlong *)(*(longlong *)this + 0x18) != 0) &&
     (plVar10 = (long64 *)0x0, *(longlong *)(*(longlong *)this + 0x20) != 0)) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)iVar8;
    uVar9 = SUB168(ZEXT816(8) * auVar5,0);
    if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    plVar10 = operator_new__(uVar9);
    if (plVar10 != (long64 *)0x0) {
      local_b8 = plVar10;
      iStack_b0 = iVar8;
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_78._12_4_ = uStack_ac;
      local_78.ArrayNum = iStack_b0;
      local_78.DataPtr = local_b8;
      bVar6 = IPCGAttributeAccessor::GetRange<__int64>
                        (*(IPCGAttributeAccessor **)(*(longlong *)this + 0x18),&local_78,0,
                         *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x20),
                         AllowBroadcastAndConstructible);
      if (bVar6) goto LAB_149ba81e5;
      operator_delete__(plVar10);
    }
    return false;
  }
LAB_149ba81e5:
  lVar2 = *(longlong *)(*(longlong *)this + 8);
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  uVar1 = *(uint *)(*(longlong *)this + 0x30);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar1,&local_d8.AllocatorInstance,0,&local_d8.ArrayMax);
  }
  lVar3 = *(longlong *)this;
  iVar8 = *(int *)(lVar3 + 0x30);
  piVar15 = *(int **)(lVar3 + 0x28);
  plVar13 = (long64 *)(piVar15 + (longlong)iVar8 * 0xc);
  local_b8 = plVar13;
  do {
    if (*(int *)(lVar3 + 0x30) != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FPCGAttributeSetPartition::AttributeSetPartitionEntry>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((long64 *)piVar15 == plVar13) {
      local_88 = local_res20;
      local_a8 = *(FPCGAttributeSetPartition **)this;
      pTStack_a0 = &local_d8;
      local_98 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
      local_68.Callback._36_4_ = uStack_84;
      local_68.Callback.ConstKeyCount = local_res20;
      plStack_90 = plVar10;
      local_68.Callback.__this = local_a8;
      local_68.Callback.AttributeValues = pTStack_a0;
      local_68.Callback.MatchingPartitionDataIndices = local_98;
      local_68.Callback.ThresholdValuesPtr = plVar10;
      bVar6 = PCGMetadataElementCommon::
              ApplyOnAccessorRange<__int64,_PCGMetadataElementCommon::ApplyOnAccessor<__int64,__FPCGAttributeSetPartition::GetMatchingPartitionDataIndices_::__l5::<lambda_1>::operator()<__int64>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_68,
                         AllowBroadcastAndConstructible,0x100,-1);
      if (plVar10 != (long64 *)0x0) {
        operator_delete__(plVar10);
      }
      if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      return bVar6;
    }
    iVar14 = *piVar15;
    if (iVar14 == -1) {
LAB_149ba8320:
      lVar11 = *(long64 *)(lVar2 + 0x98);
    }
    else if (iVar14 < *(int *)(lVar2 + 0xa0)) {
      if (*(FPCGMetadataAttribute<__int64> **)(lVar2 + 0x68) ==
          (FPCGMetadataAttribute<__int64> *)0x0) goto LAB_149ba8320;
      lVar11 = FPCGMetadataAttribute<__int64>::GetValue
                         (*(FPCGMetadataAttribute<__int64> **)(lVar2 + 0x68),iVar14);
    }
    else {
      iVar14 = iVar14 - *(int *)(lVar2 + 0xa0);
      AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x80));
      if (iVar14 < *(int *)(lVar2 + 0x90)) {
        if ((iVar14 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        lVar11 = *(long64 *)(*(longlong *)(lVar2 + 0x88) + (longlong)iVar14 * 8);
      }
      else {
        lVar11 = *(long64 *)(lVar2 + 0x98);
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x80));
      plVar13 = local_b8;
    }
    local_c8[0] = lVar11;
    if (((local_d8.AllocatorInstance.Data <= (FScriptContainerElement *)local_c8) &&
        ((FScriptContainerElement *)local_c8 <
         local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    if (local_d8.ArrayNum == local_d8.ArrayMax) {
      local_d8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
    }
    lVar12 = (longlong)local_d8.ArrayNum;
    piVar15 = piVar15 + 0xc;
    local_d8.ArrayNum = local_d8.ArrayNum + 1;
    *(long64 *)(local_d8.AllocatorInstance.Data + lVar12 * 8) = local_c8[0];
  } while( true );
}

// operator()<bool> @ 149ba8b00

bool __thiscall
`FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::operator()<bool>
          (void *this,bool param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  FScriptContainerElement FVar9;
  longlong lVar10;
  undefined7 in_register_00000011;
  int iVar11;
  int *piVar12;
  int *piVar13;
  undefined1 local_res18 [8];
  int local_res20;
  FScriptContainerElement local_a8 [8];
  TArray<bool,TSizedDefaultAllocator<32>_> local_a0;
  FPCGAttributeSetPartition *local_90;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTStack_88;
  TArray<int,TSizedDefaultAllocator<32>_> *local_80;
  undefined8 uStack_78;
  int local_70;
  undefined4 uStack_6c;
  <lambda_1> local_68;
  
  plVar3 = *(longlong **)(*(longlong *)this + 0x20);
  if (plVar3 == (longlong *)0x0) {
    local_res20 = 0;
  }
  else {
    local_res20 = (**(code **)(*plVar3 + 0x10))(plVar3,CONCAT71(in_register_00000011,param_1));
    if (local_res20 < 1) {
      local_res20 = 1;
    }
  }
  lVar4 = *(longlong *)(*(longlong *)this + 8);
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  uVar1 = *(uint *)(*(longlong *)this + 0x30);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar1,&local_a0.AllocatorInstance,0,&local_a0.ArrayMax);
  }
  lVar5 = *(longlong *)this;
  iVar2 = *(int *)(lVar5 + 0x30);
  piVar13 = *(int **)(lVar5 + 0x28);
  piVar12 = piVar13 + (longlong)iVar2 * 0xc;
  do {
    if (*(int *)(lVar5 + 0x30) != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FPCGAttributeSetPartition::AttributeSetPartitionEntry>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (piVar13 == piVar12) {
      uStack_78 = 0;
      local_70 = local_res20;
      local_90 = *(FPCGAttributeSetPartition **)this;
      pTStack_88 = &local_a0;
      local_80 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
      local_68.Callback._36_4_ = uStack_6c;
      local_68.Callback.ConstKeyCount = local_res20;
      local_68.Callback.ThresholdValuesPtr = (void *)0x0;
      local_68.Callback.__this = local_90;
      local_68.Callback.AttributeValues = pTStack_88;
      local_68.Callback.MatchingPartitionDataIndices = local_80;
      bVar7 = PCGMetadataElementCommon::
              ApplyOnAccessorRange<bool,_PCGMetadataElementCommon::ApplyOnAccessor<bool,__FPCGAttributeSetPartition::GetMatchingPartitionDataIndices_::__l5::<lambda_1>::operator()<bool>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_68,
                         AllowBroadcastAndConstructible,0x100,-1);
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      return bVar7;
    }
    iVar11 = *piVar13;
    if (iVar11 == -1) {
LAB_149ba8c85:
      FVar9 = *(FScriptContainerElement *)(lVar4 + 0x98);
    }
    else if (iVar11 < *(int *)(lVar4 + 0x9c)) {
      if (*(FPCGMetadataAttribute<bool> **)(lVar4 + 0x68) == (FPCGMetadataAttribute<bool> *)0x0)
      goto LAB_149ba8c85;
      FVar9 = (FScriptContainerElement)
              FPCGMetadataAttribute<bool>::GetValue
                        (*(FPCGMetadataAttribute<bool> **)(lVar4 + 0x68),iVar11);
    }
    else {
      iVar11 = iVar11 - *(int *)(lVar4 + 0x9c);
      AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x80));
      if (iVar11 < *(int *)(lVar4 + 0x90)) {
        if ((iVar11 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        FVar9 = *(FScriptContainerElement *)((longlong)iVar11 + *(longlong *)(lVar4 + 0x88));
        ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x80));
      }
      else {
        FVar9 = *(FScriptContainerElement *)(lVar4 + 0x98);
        ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x80));
      }
    }
    local_a8[0] = FVar9;
    if (((local_a0.AllocatorInstance.Data <= local_a8) &&
        (local_a8 < local_a0.AllocatorInstance.Data + local_a0.ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    if (local_a0.ArrayNum == local_a0.ArrayMax) {
      local_a0.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x101,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
    }
    lVar10 = (longlong)local_a0.ArrayNum;
    piVar13 = piVar13 + 0xc;
    local_a0.ArrayNum = local_a0.ArrayNum + 1;
    local_a0.AllocatorInstance.Data[lVar10] = local_a8[0];
  } while( true );
}

// GetMatchingPartitionDataIndices @ 149c24890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FPCGAttributeSetPartition::GetMatchingPartitionDataIndices
          (FPCGAttributeSetPartition *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
          *param_1,TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
                   *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  int local_res10 [2];
  int local_res18 [4];
  FPCGAttributeSetPartition *local_1c8;
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> *local_1c0;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  *local_1b8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1b0;
  int local_1a8 [2];
  FString local_1a0;
  FSoftObjectPath local_190;
  FSoftClassPath local_170;
  TVector2<double>_u_0 local_148;
  TVector<double>_u_0 local_138;
  TRotator<double> local_118;
  TVector4<double>_u_0 local_f8;
  TQuat<double> local_d8;
  undefined8 local_a8;
  undefined8 local_90;
  TTransform<double> local_88;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((param_1->Ptr == (IPCGAttributeAccessor *)0x0) ||
     (this->Attribute == (FPCGMetadataAttributeBase *)0x0)) {
    if ((this->PartitionData).ArrayNum == 0) {
      local_1a8[0] = -1;
      piVar5 = local_1a8;
    }
    else {
      local_res18[0] = 0;
      piVar5 = local_res18;
    }
    goto LAB_149c24b71;
  }
  if (((param_2->Ptr == (IPCGAttributeAccessorKeys *)0x0) ||
      (iVar3 = (**(code **)(param_2->Ptr->_padding_ + 0x10))(), iVar3 != param_3)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputKeys.IsValid() && InputKeys->GetNum() == PointsNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMatchAndSetAttributes.cpp"
                         ,0x18a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  local_1c8 = this;
  local_1c0 = param_1;
  local_1b8 = param_2;
  local_1b0 = __return_storage_ptr__;
  switch(this->Attribute->TypeId) {
  case 0:
    bVar2 = `FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
            operator()<float>(&local_1c8,0.0);
    break;
  case 1:
    bVar2 = `FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
            operator()<double>(&local_1c8,0.0);
    break;
  case 2:
    bVar2 = `FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
            operator()<int>(&local_1c8,0);
    break;
  case 3:
    bVar2 = `FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
            operator()<__int64>(&local_1c8,0);
    break;
  case 4:
    local_148._s_0.X = 0.0;
    local_148._s_0.Y = 0.0;
    bVar2 = `FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
            operator()<UE::Math::TVector2<double>_>(&local_1c8,(TVector2<double> *)&local_148._s_0);
    break;
  case 5:
    local_138._s_0.X = 0.0;
    local_138._s_0.Y = 0.0;
    local_a8 = 0;
    local_138._s_0.Z = 0.0;
    bVar2 = `FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
            operator()<UE::Math::TVector<double>_>(&local_1c8,(TVector<double> *)&local_138._s_0);
    break;
  case 6:
    local_f8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_f8._s_0.W = _UNK_15061cbc8;
    local_f8._s_0.X = 0.0;
    local_f8._s_0.Y = 0.0;
    bVar2 = `FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
            operator()<UE::Math::TVector4<double>_>(&local_1c8,(TVector4<double> *)&local_f8._s_0);
    break;
  case 7:
    local_d8.X = 0.0;
    local_d8.Y = 0.0;
    local_d8.Z = 0.0;
    local_d8.W = 0.0;
    bVar2 = `FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
            operator()<UE::Math::TQuat<double>_>(&local_1c8,&local_d8);
    break;
  case 8:
    local_88.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_88.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_88.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_88.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_88.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_88.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar2 = `FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
            operator()<UE::Math::TTransform<double>_>(&local_1c8,&local_88);
    break;
  case 9:
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
    bVar2 = `FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
            operator()<FString>(&local_1c8,&local_1a0);
    break;
  case 10:
    bVar2 = `FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
            operator()<bool>(&local_1c8,false);
    break;
  case 0xb:
    local_118.Pitch = 0.0;
    local_118.Yaw = 0.0;
    local_90 = 0;
    local_118.Roll = 0.0;
    bVar2 = `FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
            operator()<UE::Math::TRotator<double>_>(&local_1c8,&local_118);
    break;
  case 0xc:
    bVar2 = `FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
            operator()<FName>(&local_1c8,(FName)0x0);
    break;
  case 0xd:
    local_190.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_190.AssetPath.PackageName.Number = 0;
    local_190.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_190.AssetPath.AssetName.Number = 0;
    local_190.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.SubPathString.Data.ArrayNum = 0;
    local_190.SubPathString.Data.ArrayMax = 0;
    bVar2 = `FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
            operator()<FSoftObjectPath>(&local_1c8,&local_190);
    break;
  case 0xe:
    local_170._0_8_ = 0;
    local_170._8_8_ = 0;
    local_170._16_8_ = 0;
    local_170._24_8_ = 0;
    bVar2 = `FPCGAttributeSetPartition::GetMatchingPartitionDataIndices'::__l5::<lambda_1>::
            operator()<FSoftClassPath>(&local_1c8,&local_170);
    break;
  default:
    goto switchD_149c24946_default;
  }
  if (bVar2 != false) {
    return __return_storage_ptr__;
  }
switchD_149c24946_default:
  param_3 = (**(code **)(param_2->Ptr->_padding_ + 0x10))();
  local_res10[0] = -1;
  piVar5 = local_res10;
LAB_149c24b71:
  TArray<int,TSizedDefaultAllocator<32>_>::Init(__return_storage_ptr__,piVar5,param_3);
  return __return_storage_ptr__;
}

// Initialize @ 149c274c0

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGAttributeSetPartition::Initialize
          (FPCGAttributeSetPartition *this,FPCGContext *param_1,UPCGParamData *param_2,bool param_3,
          FName param_4,bool param_5,FName param_6,bool param_7,EPCGMatchMaxDistanceMode param_8,
          FPCGMetadataTypesConstantStruct *param_9)

{
  int *piVar1;
  double *pdVar2;
  ushort uVar3;
  code *pcVar4;
  double dVar5;
  FPCGMetadataAttribute<double> *this_00;
  FPCGMetadataDomainID FVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  UPCGMetadata *this_01;
  FPCGMetadataAttributeBase *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FString *pFVar16;
  long64 lVar17;
  long64 lVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  double *pdVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  wchar_t *pwVar24;
  float fVar25;
  double dVar26;
  undefined1 auStack_428 [32];
  FScriptContainerElement *local_408;
  FScriptContainerElement *local_400;
  longlong local_3f8;
  longlong local_3f0;
  undefined8 local_3e8;
  undefined1 local_3d8;
  undefined1 local_3d7 [7];
  longlong local_3d0;
  FPCGMetadataAttribute<double> *local_3c8;
  longlong local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  FText local_350;
  FString local_340;
  FString local_330;
  FText local_320;
  FText local_310;
  FString local_300;
  FString local_2f0;
  FText local_2e0;
  FText local_2d0;
  FString local_2c0;
  FString local_2b0;
  FText local_2a0;
  FString local_290;
  FString local_280;
  FText local_270;
  FText local_260;
  FName local_250;
  FPCGMetadataDomainID FStack_248;
  FPCGAttributeIdentifier local_238;
  FString local_218;
  FPCGAttributeIdentifier local_208;
  FName local_1e8;
  FPCGMetadataDomainID FStack_1e0;
  FString local_1d0;
  FText local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  FText local_150;
  FTextFormat local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  FText local_120;
  FTextFormat local_110;
  FText local_100;
  FTextFormat local_f0;
  FText local_e0;
  FTextFormat local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_428;
  pFVar23 = (FScriptContainerElement *)0x0;
  this->bFindNearest = param_7;
  this->MaxDistanceMode = param_8;
  local_3c8 = (FPCGMetadataAttribute<double> *)((ulonglong)local_3c8 & 0xffffffff00000000);
  this->ParamData = param_2;
  if (param_2 == (UPCGParamData *)0x0) {
    return false;
  }
  if (param_2->_padding_ == 0) {
    return false;
  }
  this_01 = (UPCGMetadata *)(**(code **)(param_2->_padding_ + 800))(param_2);
  if (param_3) {
    local_250 = param_4;
    FStack_248 = PCGMetadataDomainID::Default;
    FVar6 = FStack_248;
    FStack_248._0_8_ = PCGMetadataDomainID::Default._0_8_;
    local_238.Name = param_4;
    local_238.MetadataDomain.Flag = FStack_248.Flag;
    local_238.MetadataDomain._1_3_ = FStack_248._1_3_;
    local_238.MetadataDomain.CustomFlag = FStack_248.CustomFlag;
    local_238.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
    FStack_248 = FVar6;
    pFVar12 = UPCGMetadata::GetConstAttribute(this_01,&local_238);
    this->Attribute = pFVar12;
    if (pFVar12 == (FPCGMetadataAttributeBase *)0x0) {
      if ((byte)LogPCG._0_1_ < 2) {
        return false;
      }
      pFVar13 = FText::FromName(&local_120,&param_4);
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_350,L"PCGMatchAndSetAttributes",L"CannotFindAttribute",
                           L"Cannot find attribute \'{0}\' in the source Attribute Set.");
      pFVar15 = FTextFormat::FTextFormat(&local_110,pFVar14,Default);
      pFVar13 = FText::Format<FText>(&local_1c0,pFVar15,pFVar13);
      pFVar16 = FText::ToString(pFVar13);
      if ((pFVar16->Data).ArrayNum == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      if (param_1 != (FPCGContext *)0x0) {
        FPCGContext::GetTaskName(param_1,&local_1d0);
        pFVar23 = (FScriptContainerElement *)&DAT_00000003;
        FPCGContext::GetExecutionSourceName(param_1,&local_218);
      }
      local_408 = (FScriptContainerElement *)pwVar24;
      UE::Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_FPCGAttributeSetPartition::Initialize(FPCGContext*___ptr64,UPCGParamData_const*___ptr64,bool,FName,bool,FName,bool,EPCGMatchMaxDistanceMode,FPCGMetadataTypesConstantStruct_const*___ptr64)___ptr64'
                  ::__l12::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pFVar23 & 2) != 0) &&
         (pFVar23 = (FScriptContainerElement *)(ulonglong)((uint)pFVar23 & 0xfffffffd),
         local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pFVar23 & 1) != 0) &&
         (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if (local_1c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
      }
      goto LAB_149c276c9;
    }
  }
  local_3c8 = (FPCGMetadataAttribute<double> *)0x0;
  if (param_5) {
    local_1e8 = param_6;
    FStack_1e0 = PCGMetadataDomainID::Default;
    FVar6 = FStack_1e0;
    FStack_1e0._0_8_ = PCGMetadataDomainID::Default._0_8_;
    local_208.Name = param_6;
    local_208.MetadataDomain.Flag = FStack_1e0.Flag;
    local_208.MetadataDomain._1_3_ = FStack_1e0._1_3_;
    local_208.MetadataDomain.CustomFlag = FStack_1e0.CustomFlag;
    local_208.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
    FStack_1e0 = FVar6;
    local_3c8 = (FPCGMetadataAttribute<double> *)UPCGMetadata::GetConstAttribute(this_01,&local_208)
    ;
    if (local_3c8 == (FPCGMetadataAttribute<double> *)0x0) {
      if ((byte)LogPCG._0_1_ < 2) {
        return false;
      }
      pFVar13 = FText::FromName(&local_100,&param_6);
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_310,L"PCGMatchAndSetAttributes",L"CannotFindWeightAttribute",
                           L"Cannot find weight attribute \'{0}\' in the source Attribute Set.");
      pFVar15 = FTextFormat::FTextFormat(&local_f0,pFVar14,Default);
      pFVar13 = FText::Format<FText>(&local_320,pFVar15,pFVar13);
      pFVar16 = FText::ToString(pFVar13);
      if ((pFVar16->Data).ArrayNum == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      if (param_1 != (FPCGContext *)0x0) {
        FPCGContext::GetTaskName(param_1,&local_330);
        pFVar23 = (FScriptContainerElement *)&DAT_0000000c;
        FPCGContext::GetExecutionSourceName(param_1,&local_340);
      }
      local_408 = (FScriptContainerElement *)pwVar24;
      UE::Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_FPCGAttributeSetPartition::Initialize(FPCGContext*___ptr64,UPCGParamData_const*___ptr64,bool,FName,bool,FName,bool,EPCGMatchMaxDistanceMode,FPCGMetadataTypesConstantStruct_const*___ptr64)___ptr64'
                  ::__l36::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pFVar23 & 8) != 0) &&
         (pFVar23 = (FScriptContainerElement *)(ulonglong)((uint)pFVar23 & 0xfffffff7),
         local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_340.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pFVar23 & 4) != 0) &&
         (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_330.Data.AllocatorInstance.Data);
      }
      local_350.TextData.Reference = local_310.TextData.Reference;
      if (local_320.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_320.TextData.Reference + 0x10))();
        local_350.TextData.Reference = local_310.TextData.Reference;
      }
      goto LAB_149c276c9;
    }
    uVar3 = (ushort)local_3c8->_padding_;
    if ((0xfe < uVar3) || (3 < uVar3)) {
      if ((byte)LogPCG._0_1_ < 2) {
        return false;
      }
      pFVar13 = FText::FromName(&local_e0,&param_6);
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_2d0,L"PCGMatchAndSetAttributes",L"InvalidWeightAttributeType",
                           L"Weight attribute \'{0}\' does not have the proper type (int32, int64, float or double)."
                          );
      pFVar15 = FTextFormat::FTextFormat(&local_d0,pFVar14,Default);
      pFVar13 = FText::Format<FText>(&local_2e0,pFVar15,pFVar13);
      pFVar16 = FText::ToString(pFVar13);
      if ((pFVar16->Data).ArrayNum == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      if (param_1 != (FPCGContext *)0x0) {
        FPCGContext::GetTaskName(param_1,&local_2f0);
        pFVar23 = (FScriptContainerElement *)&DAT_00000030;
        FPCGContext::GetExecutionSourceName(param_1,&local_300);
      }
      local_408 = (FScriptContainerElement *)pwVar24;
      UE::Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_FPCGAttributeSetPartition::Initialize(FPCGContext*___ptr64,UPCGParamData_const*___ptr64,bool,FName,bool,FName,bool,EPCGMatchMaxDistanceMode,FPCGMetadataTypesConstantStruct_const*___ptr64)___ptr64'
                  ::__l57::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pFVar23 & 0x20) != 0) &&
         (pFVar23 = (FScriptContainerElement *)(ulonglong)((uint)pFVar23 & 0xffffffdf),
         local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_300.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pFVar23 & 0x10) != 0) &&
         (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
      }
      local_350.TextData.Reference = local_2d0.TextData.Reference;
      if (local_2e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2e0.TextData.Reference + 0x10))();
        local_350.TextData.Reference = local_2d0.TextData.Reference;
      }
      goto LAB_149c276c9;
    }
  }
  pFVar12 = this->Attribute;
  if ((pFVar12 != (FPCGMetadataAttributeBase *)0x0) &&
     (this->MaxDistanceMode == UseConstantMaxDistance)) {
    switch(pFVar12->TypeId) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 6:
      break;
    case 4:
      local_c0 = 0;
      uStack_b8 = 0;
      break;
    case 5:
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1a0 = 0;
      break;
    case 7:
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      break;
    default:
      if ((byte)LogPCG._0_1_ < 2) {
        return false;
      }
      pFVar13 = FText::FromName(&local_150,&pFVar12->Name);
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_260,L"PCGMatchAndSetAttributes",L"AttributeDoesNotSupportDistance"
                           ,L"Attribute \'{0}\' does not support distance computation.");
      pFVar15 = FTextFormat::FTextFormat(&local_140,pFVar14,Default);
      pFVar13 = FText::Format<FText>(&local_270,pFVar15,pFVar13);
      pFVar16 = FText::ToString(pFVar13);
      if ((pFVar16->Data).ArrayNum == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      if (param_1 != (FPCGContext *)0x0) {
        FPCGContext::GetTaskName(param_1,&local_280);
        pFVar23 = (FScriptContainerElement *)&DAT_000000c0;
        FPCGContext::GetExecutionSourceName(param_1,&local_290);
      }
      local_408 = (FScriptContainerElement *)pwVar24;
      UE::Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_FPCGAttributeSetPartition::Initialize(FPCGContext*___ptr64,UPCGParamData_const*___ptr64,bool,FName,bool,FName,bool,EPCGMatchMaxDistanceMode,FPCGMetadataTypesConstantStruct_const*___ptr64)___ptr64'
                  ::__l81::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (((char)pFVar23 < '\0') &&
         (pFVar23 = (FScriptContainerElement *)(ulonglong)((uint)pFVar23 & 0xffffff7f),
         local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pFVar23 & 0x40) != 0) &&
         (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
      local_350.TextData.Reference = local_260.TextData.Reference;
      if (local_270.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_270.TextData.Reference + 0x10))();
        local_350.TextData.Reference = local_260.TextData.Reference;
      }
      goto LAB_149c276c9;
    case 0xb:
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
    }
    if ((param_9 != (FPCGMetadataTypesConstantStruct *)0x0) &&
       ((FPCGMetadataTypesConstantStruct::
         Dispatcher<_FPCGAttributeSetPartition::Initialize_::__l101::<lambda_2>_>
                   (param_9,(<lambda_2>)this),
        (this->ConstantThreshold).Ptr == (IPCGAttributeAccessor *)0x0 ||
        ((this->ConstantKey).Ptr == (IPCGAttributeAccessorKeys *)0x0)))) {
      if ((byte)LogPCG._0_1_ < 2) {
        return false;
      }
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_2a0,L"PCGMatchAndSetAttributes",
                           L"InvalidConstantThresholdAttribute",L"Distance threshold is invalid.");
      pFVar16 = FText::ToString(pFVar13);
      if ((pFVar16->Data).ArrayNum == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      bVar8 = param_1 != (FPCGContext *)0x0;
      if (bVar8) {
        FPCGContext::GetTaskName(param_1,&local_2b0);
        FPCGContext::GetExecutionSourceName(param_1,&local_2c0);
      }
      local_408 = (FScriptContainerElement *)pwVar24;
      UE::Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_FPCGAttributeSetPartition::Initialize(FPCGContext*___ptr64,UPCGParamData_const*___ptr64,bool,FName,bool,FName,bool,EPCGMatchMaxDistanceMode,FPCGMetadataTypesConstantStruct_const*___ptr64)___ptr64'
                  ::__l105::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar8) && (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
      }
      local_350.TextData.Reference = local_2a0.TextData.Reference;
      if ((bVar8) && (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
        local_350.TextData.Reference = local_2a0.TextData.Reference;
      }
LAB_149c276c9:
      if (local_350.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_350.TextData.Reference + 0x10))();
      }
      return false;
    }
  }
  lVar17 = UPCGMetadata::GetItemKeyCountForParent(this_01);
  lVar18 = UPCGMetadata::GetLocalItemCount(this_01);
  dVar5 = __real_3ff0000000000000;
  local_3c0 = lVar18 + lVar17;
  if (lVar17 < local_3c0) {
    do {
      iVar10 = -1;
      if (this->Attribute != (FPCGMetadataAttributeBase *)0x0) {
        iVar10 = FPCGMetadataAttributeBase::GetValueKey(this->Attribute,lVar17);
      }
      this_00 = local_3c8;
      dVar26 = dVar5;
      if (local_3c8 != (FPCGMetadataAttribute<double> *)0x0) {
        switch((short)local_3c8->_padding_) {
        case 0:
          iVar11 = FPCGMetadataAttributeBase::GetValueKey
                             ((FPCGMetadataAttributeBase *)local_3c8,lVar17);
          fVar25 = FPCGMetadataAttribute<float>::GetValue
                             ((FPCGMetadataAttribute<float> *)this_00,iVar11);
          dVar26 = (double)fVar25;
          break;
        case 1:
          iVar11 = FPCGMetadataAttributeBase::GetValueKey
                             ((FPCGMetadataAttributeBase *)local_3c8,lVar17);
          dVar26 = FPCGMetadataAttribute<double>::GetValue(this_00,iVar11);
          break;
        case 2:
          iVar11 = FPCGMetadataAttributeBase::GetValueKey
                             ((FPCGMetadataAttributeBase *)local_3c8,lVar17);
          iVar11 = FPCGMetadataAttribute<int>::GetValue
                             ((FPCGMetadataAttribute<int> *)this_00,iVar11);
          dVar26 = (double)iVar11;
          break;
        case 3:
          iVar11 = FPCGMetadataAttributeBase::GetValueKey
                             ((FPCGMetadataAttributeBase *)local_3c8,lVar17);
          lVar18 = FPCGMetadataAttribute<__int64>::GetValue
                             ((FPCGMetadataAttribute<__int64> *)this_00,iVar11);
          dVar26 = (double)lVar18;
          break;
        case 4:
          local_130 = 0;
          uStack_128 = 0;
        case 6:
        case 8:
        case 9:
        case 10:
        case 0xc:
          break;
        case 5:
          local_180 = 0;
          uStack_178 = 0;
          local_170 = 0;
          break;
        case 7:
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          break;
        case 0xb:
          local_168 = 0;
          uStack_160 = 0;
          local_158 = 0;
          break;
        case 0xd:
          local_3b8 = 0;
          local_3b0 = 0;
          local_3a8 = 0;
          local_3a0 = 0;
          break;
        case 0xe:
          local_398 = 0;
          local_390 = 0;
          local_388 = 0;
          local_380 = 0;
          break;
        default:
          dVar26 = 0.0;
        }
      }
      iVar11 = (this->PartitionData).ArrayNum;
      if (this->Attribute == (FPCGMetadataAttributeBase *)0x0) {
        if (iVar11 != 0) {
          if (iVar11 < 1) {
            local_408 = (FScriptContainerElement *)0x0;
            local_400 = (FScriptContainerElement *)(longlong)iVar11;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
          }
          pFVar20 = (this->PartitionData).AllocatorInstance.Data;
          goto LAB_149c27ebe;
        }
LAB_149c27ec3:
        iVar11 = (this->PartitionData).ArrayNum;
        piVar1 = &(this->PartitionData).ArrayMax;
        local_378 = 0;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&(this->PartitionData).AllocatorInstance,piVar1);
        }
        local_370 = 0;
        (this->PartitionData).ArrayNum = iVar11 + 1;
        local_368 = 0;
        local_360 = 0;
        local_358 = 0;
        pFVar20 = (this->PartitionData).AllocatorInstance.Data + (longlong)iVar11 * 0x30;
        *(int *)pFVar20 = iVar10;
        *(undefined8 *)(pFVar20 + 0x10) = 0;
        *(undefined8 *)(pFVar20 + 8) = 0;
        *(undefined8 *)(pFVar20 + 0x18) = 0;
        *(undefined8 *)(pFVar20 + 0x20) = 0;
        *(undefined8 *)(pFVar20 + 0x28) = 0;
      }
      else {
        pFVar19 = (this->PartitionData).AllocatorInstance.Data;
        pFVar22 = pFVar19 + (longlong)iVar11 * 0x30;
        while ((pFVar20 = pFVar23, pFVar19 != pFVar22 &&
               (cVar7 = (**(code **)(this->Attribute->_padding_ + 0x98))
                                  (this->Attribute,*(int *)pFVar19,iVar10), pFVar20 = pFVar19,
               cVar7 == '\0'))) {
          pFVar19 = pFVar19 + 0x30;
        }
LAB_149c27ebe:
        if (pFVar20 == (FScriptContainerElement *)0x0) goto LAB_149c27ec3;
      }
      pFVar19 = pFVar20 + 8;
      local_3d0 = lVar17;
      if (0.0 < dVar26) {
        pFVar22 = *(FScriptContainerElement **)(pFVar20 + 0x10);
        if ((pFVar22 <= (FScriptContainerElement *)&local_3d0) &&
           ((FScriptContainerElement *)&local_3d0 < pFVar22 + (longlong)*(int *)(pFVar20 + 0x1c) * 8
           )) {
          local_3f0 = (longlong)*(int *)(pFVar20 + 0x18);
          local_3e8 = 8;
          local_408 = (FScriptContainerElement *)&local_3d0;
          local_400 = pFVar22;
          local_3f8 = (longlong)*(int *)(pFVar20 + 0x1c);
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
        }
        iVar10 = *(int *)(pFVar20 + 0x18);
        if (iVar10 == *(int *)(pFVar20 + 0x1c)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)(pFVar20 + 0x10),(int *)(pFVar20 + 0x1c));
        }
        *(int *)(pFVar20 + 0x18) = iVar10 + 1;
        *(longlong *)(*(longlong *)(pFVar20 + 0x10) + (longlong)iVar10 * 8) = local_3d0;
        *(double *)pFVar19 = dVar26 + *(double *)pFVar19;
        pFVar22 = *(FScriptContainerElement **)(pFVar20 + 0x20);
        if ((pFVar22 <= pFVar19) && (pFVar19 < pFVar22 + (longlong)*(int *)(pFVar20 + 0x2c) * 8)) {
          local_3f0 = (longlong)*(int *)(pFVar20 + 0x28);
          local_3e8 = 8;
          local_408 = pFVar19;
          local_400 = pFVar22;
          local_3f8 = (longlong)*(int *)(pFVar20 + 0x2c);
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
        }
        iVar10 = *(int *)(pFVar20 + 0x28);
        if (iVar10 == *(int *)(pFVar20 + 0x2c)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)(pFVar20 + 0x20),(int *)(pFVar20 + 0x2c));
        }
        *(int *)(pFVar20 + 0x28) = iVar10 + 1;
        *(double *)(*(longlong *)(pFVar20 + 0x20) + (longlong)iVar10 * 8) = *(double *)pFVar19;
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < local_3c0);
  }
  iVar10 = (this->PartitionData).ArrayNum;
  pFVar23 = (this->PartitionData).AllocatorInstance.Data;
  pFVar20 = pFVar23 + (longlong)iVar10 * 0x30;
  while( true ) {
    if ((this->PartitionData).ArrayNum != iVar10) {
      `TCheckedPointerIterator<TTuple<int,FPCGAttributeSetPartition::AttributeSetPartitionEntry>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_3d8);
    }
    if (pFVar23 == pFVar20) break;
    if (0.0 < *(double *)(pFVar23 + 8)) {
      pdVar21 = *(double **)(pFVar23 + 0x20);
      iVar11 = *(int *)(pFVar23 + 0x28);
      pdVar2 = pdVar21 + iVar11;
      while( true ) {
        if (*(int *)(pFVar23 + 0x28) != iVar11) {
          `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_3d7);
        }
        if (pdVar21 == pdVar2) break;
        *pdVar21 = *pdVar21 / *(double *)(pFVar23 + 8);
        pdVar21 = pdVar21 + 1;
      }
      *(undefined8 *)(pFVar23 + 8) = 0x3ff0000000000000;
    }
    pFVar23 = pFVar23 + 0x30;
  }
  this->bIsValid = true;
  return true;
}

// InitializeForData @ 149c293f0

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGAttributeSetPartition::InitializeForData
          (FPCGAttributeSetPartition *this,FPCGContext *param_1,UPCGData *param_2,
          FPCGAttributePropertyInputSelector *param_3)

{
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> *pTVar1;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  *pTVar2;
  ushort uVar3;
  IPCGAttributeAccessor *pIVar4;
  IPCGAttributeAccessorKeys *pIVar5;
  FPCGMetadataAttributeBase *pFVar6;
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> TVar7;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  TVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  FString *pFVar12;
  uint uVar13;
  wchar_t *pwVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  FScriptContainerElement *local_a8;
  undefined1 local_98 [24];
  FText local_80;
  FText local_70;
  TObjectPtr<UPCGMetadata>_u_0 local_60 [2];
  FText local_50;
  FText local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar13 = 0;
  local_98._0_8_ = local_98._0_8_ & 0xffffffff00000000;
  if ((this->Attribute != (FPCGMetadataAttributeBase *)0x0) &&
     (this->MaxDistanceMode == AttributeMaxDistance)) {
    pTVar1 = &this->ConstantThreshold;
    pIVar4 = (this->ConstantThreshold).Ptr;
    if (pIVar4 != (IPCGAttributeAccessor *)0x0) {
      pTVar1->Ptr = (IPCGAttributeAccessor *)0x0;
      (**(code **)pIVar4->_padding_)(pIVar4,1);
    }
    pIVar5 = (this->ConstantKey).Ptr;
    pTVar2 = &this->ConstantKey;
    if (pIVar5 != (IPCGAttributeAccessorKeys *)0x0) {
      pTVar2->Ptr = (IPCGAttributeAccessorKeys *)0x0;
      (**(code **)pIVar5->_padding_)(pIVar5,1);
    }
    if (param_2 == (UPCGData *)0x0) {
      return false;
    }
    if (param_3 == (FPCGAttributePropertyInputSelector *)0x0) {
      return false;
    }
    TVar7 = PCGAttributeAccessorHelpers::CreateConstAccessor
                      ((UPCGData *)local_98,(FPCGAttributePropertySelector *)param_2,
                       SUB81(param_3,0));
    if ((IPCGAttributeAccessor *)pTVar1 != TVar7.Ptr) {
      pIVar4 = pTVar1->Ptr;
      pTVar1->Ptr = (IPCGAttributeAccessor *)(TVar7.Ptr)->_padding_;
      (TVar7.Ptr)->_padding_ = 0;
      if (pIVar4 != (IPCGAttributeAccessor *)0x0) {
        (**(code **)pIVar4->_padding_)(pIVar4,1);
      }
    }
    if ((FName)local_98._0_8_ != (FName)0x0) {
      (*(code *)**(undefined8 **)local_98._0_8_)(local_98._0_8_,1);
    }
    TVar8 = PCGAttributeAccessorHelpers::CreateConstKeys
                      ((UPCGData *)local_98,(FPCGAttributePropertySelector *)param_2);
    if ((IPCGAttributeAccessorKeys *)pTVar2 != TVar8.Ptr) {
      pIVar5 = pTVar2->Ptr;
      pTVar2->Ptr = (IPCGAttributeAccessorKeys *)(TVar8.Ptr)->_padding_;
      (TVar8.Ptr)->_padding_ = 0;
      if (pIVar5 != (IPCGAttributeAccessorKeys *)0x0) {
        (**(code **)pIVar5->_padding_)(pIVar5,1);
      }
    }
    if ((FName)local_98._0_8_ != (FName)0x0) {
      (*(code *)**(undefined8 **)local_98._0_8_)(local_98._0_8_,1);
    }
    if ((pTVar1->Ptr == (IPCGAttributeAccessor *)0x0) ||
       (pTVar2->Ptr == (IPCGAttributeAccessorKeys *)0x0)) {
      if ((byte)LogPCG._0_1_ < 2) {
        return false;
      }
      local_98._0_4_ = *(uint *)&param_3->field_0x14;
      local_98._4_4_ = *(uint *)&param_3->field_0x18;
      pFVar9 = FText::FromName(&local_50,(FName *)local_98);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          ((FText *)&local_60[0].ObjectPtr,L"PCGMatchAndSetAttributes",
                           L"InvalidThresholdAttribute",
                           L"Attribute \'{0}\' used for max distance is invalid.");
      pFVar11 = FTextFormat::FTextFormat((FTextFormat *)&local_40,pFVar10,Default);
      pFVar9 = FText::Format<FText>(&local_70,pFVar11,pFVar9);
      pFVar12 = FText::ToString(pFVar9);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      bVar15 = param_1 != (FPCGContext *)0x0;
      if (bVar15) {
        FPCGContext::GetTaskName(param_1,(FString *)&local_80);
        FPCGContext::GetExecutionSourceName(param_1,(FString *)(local_98 + 8));
      }
      local_a8 = (FScriptContainerElement *)pwVar14;
      UE::Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_FPCGAttributeSetPartition::InitializeForData(FPCGContext*___ptr64,UPCGData_const*___ptr64,FPCGAttributePropertyInputSelector_const*___ptr64)___ptr64'
                  ::__l12::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar15) && ((UPCGMetadata *)local_98._8_8_ != (UPCGMetadata *)0x0)) {
        FMemory::Free((void *)local_98._8_8_);
      }
      if ((bVar15) && (local_80.TextData.Reference != (ITextData *)0x0)) {
        FMemory::Free(local_80.TextData.Reference);
      }
      local_98._8_8_ = local_60[0];
      if (local_70.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
        local_98._8_8_ = local_60[0];
      }
      goto LAB_149c298b1;
    }
  }
  pFVar6 = this->Attribute;
  if ((pFVar6 != (FPCGMetadataAttributeBase *)0x0) &&
     ((pIVar4 = (this->ConstantThreshold).Ptr, pIVar4 != (IPCGAttributeAccessor *)0x0 &&
      ((this->ConstantKey).Ptr != (IPCGAttributeAccessorKeys *)0x0)))) {
    uVar3 = pFVar6->TypeId;
    bVar15 = PCG::Private::IsBroadcastableOrConstructible(pIVar4->UnderlyingType,uVar3);
    if (bVar15) {
      switch(uVar3) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 0xb:
        goto switchD_149c29796_caseD_0;
      default:
        if ((byte)LogPCG._0_1_ < 2) {
          return false;
        }
        pFVar9 = FText::FromName(&local_40,&pFVar6->Name);
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            ((FText *)(local_98 + 8),L"PCGMatchAndSetAttributes",
                             L"AttributeDoesNotSupportMaxDistance",
                             L"The selected attribute \'{0}\' does not support computing distances."
                            );
        pFVar11 = FTextFormat::FTextFormat((FTextFormat *)&local_50,pFVar10,Default);
        pFVar9 = FText::Format<FText>(&local_80,pFVar11,pFVar9);
        pFVar12 = FText::ToString(pFVar9);
        if ((pFVar12->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        if (param_1 != (FPCGContext *)0x0) {
          FPCGContext::GetTaskName(param_1,(FString *)&local_70);
          uVar13 = 0x30;
          FPCGContext::GetExecutionSourceName(param_1,(FString *)&local_60[0].ObjectPtr);
        }
        local_a8 = (FScriptContainerElement *)pwVar14;
        UE::Logging::Private::BasicLog<2>
                  (&`public:_bool___cdecl_FPCGAttributeSetPartition::InitializeForData(FPCGContext*___ptr64,UPCGData_const*___ptr64,FPCGAttributePropertyInputSelector_const*___ptr64)___ptr64'
                    ::__l59::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((param_1 != (FPCGContext *)0x0) &&
           (uVar13 = uVar13 & 0xffffffdf, local_60[0].DebugPtr != (UPCGMetadata *)0x0)) {
          FMemory::Free(local_60[0].DebugPtr);
        }
        uVar13 = uVar13 & 0x10;
      }
    }
    else {
      if ((byte)LogPCG._0_1_ < 2) {
        return false;
      }
      pFVar9 = FText::FromName(&local_40,&pFVar6->Name);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          ((FText *)(local_98 + 8),L"PCGMatchAndSetAttributes",
                           L"InvalidThresholdAttributeType",
                           L"Distance threshold type is not compatible with attribute \'{0}\'.");
      pFVar11 = FTextFormat::FTextFormat((FTextFormat *)&local_50,pFVar10,Default);
      pFVar9 = FText::Format<FText>(&local_80,pFVar11,pFVar9);
      pFVar12 = FText::ToString(pFVar9);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      if (param_1 != (FPCGContext *)0x0) {
        FPCGContext::GetTaskName(param_1,(FString *)&local_70);
        uVar13 = 0xc;
        FPCGContext::GetExecutionSourceName(param_1,(FString *)&local_60[0].ObjectPtr);
      }
      local_a8 = (FScriptContainerElement *)pwVar14;
      UE::Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_FPCGAttributeSetPartition::InitializeForData(FPCGContext*___ptr64,UPCGData_const*___ptr64,FPCGAttributePropertyInputSelector_const*___ptr64)___ptr64'
                  ::__l38::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((param_1 != (FPCGContext *)0x0) &&
         (uVar13 = uVar13 & 0xfffffff7, local_60[0].DebugPtr != (UPCGMetadata *)0x0)) {
        FMemory::Free(local_60[0].DebugPtr);
      }
      uVar13 = uVar13 & 4;
    }
    if ((uVar13 != 0) && (local_70.TextData.Reference != (ITextData *)0x0)) {
      FMemory::Free(local_70.TextData.Reference);
    }
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
LAB_149c298b1:
    if ((UPCGMetadata *)local_98._8_8_ != (UPCGMetadata *)0x0) {
      (**(code **)(((UPCGMetadata *)local_98._8_8_)->_padding_ + 0x10))();
    }
    return false;
  }
switchD_149c29796_caseD_0:
  return true;
}

