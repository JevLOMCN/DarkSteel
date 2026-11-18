// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 8

// DereferenceIfNecessary<TraceServices::FAnalysisSession,TraceServices::FAnalysisSession_*_&> @ 14d3c2f90

FAnalysisSession * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TraceServices::FAnalysisSession,TraceServices::FAnalysisSession_*_&>
          (FAnalysisSession **param_1)

{
  return *param_1;
}

// MakeEventRef<unsigned_char> @ 14d3c9f70

TEventRef<unsigned_char> __cdecl UE::Trace::MakeEventRef<unsigned_char>(uchar param_1,uint param_2)

{
  TEventRef<unsigned_char> TVar1;
  undefined7 in_register_00000009;
  undefined4 in_R8D;
  
  *(char *)CONCAT71(in_register_00000009,param_1) = (char)param_2;
  TVar1._1_7_ = in_register_00000009;
  TVar1.Id = param_1;
  *(undefined4 *)(CONCAT71(in_register_00000009,param_1) + 4) = in_R8D;
  return TVar1;
}

// MakeEventRef<unsigned_short> @ 14d3c9f80

TEventRef<unsigned_short> __cdecl
UE::Trace::MakeEventRef<unsigned_short>(ushort param_1,uint param_2)

{
  TEventRef<unsigned_short> TVar1;
  undefined6 in_register_0000000a;
  undefined4 in_R8D;
  
  *(short *)CONCAT62(in_register_0000000a,param_1) = (short)param_2;
  TVar1._2_6_ = in_register_0000000a;
  TVar1.Id = param_1;
  *(undefined4 *)(CONCAT62(in_register_0000000a,param_1) + 4) = in_R8D;
  return TVar1;
}

// Launch<TraceServices::FTableImportTask> @ 14d41b810

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<TraceServices::FTableImportTask>
          (wchar_t *param_1,FTableImportTask *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  TExecutableTaskBase<TraceServices::FTableImportTask,void,void> *this;
  undefined7 in_register_00000081;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = FMemory::Malloc(0x180,0x40);
  if (this == (TExecutableTaskBase<TraceServices::FTableImportTask,void,void> *)0x0) {
    this = (TExecutableTaskBase<TraceServices::FTableImportTask,void,void> *)0x0;
  }
  else {
    Private::TExecutableTaskBase<TraceServices::FTableImportTask,void,void>::
    TExecutableTaskBase<TraceServices::FTableImportTask,void,void>
              (this,(wchar_t *)param_2,(FTableImportTask *)CONCAT71(in_register_00000081,param_3),
               param_4,(undefined1)param_5,in_stack_00000030);
    this->_padding_ =
         (longlong)&___7__TExecutableTask_VFTableImportTask_TraceServices___Private_Tasks_UE__6B_;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(TExecutableTaskBase<TraceServices::FTableImportTask,void,void> **)param_1 = this;
  Private::FTaskBase::TryLaunch((FTaskBase *)this,0x180);
  return (TTask<void>)param_1;
}

// Launch<TraceServices::FTableMergeTask> @ 14d41bae0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<TraceServices::FTableMergeTask>
          (wchar_t *param_1,FTableMergeTask *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  undefined7 in_register_00000081;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  Private::FTaskHandle::Launch<TraceServices::FTableMergeTask>
            ((FTaskHandle *)param_1,(wchar_t *)param_2,
             (FTableMergeTask *)CONCAT71(in_register_00000081,param_3),param_4,(undefined1)param_5,
             in_stack_00000030);
  return (TTask<void>)param_1;
}

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TraceServices::FNetProfilerGameInstanceInternal>_> @ 14d41c4a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TraceServices::FNetProfilerGameInstanceInternal>_>
          (uint param_1,uint param_2,
          ForElementType<TraceServices::FNetProfilerGameInstanceInternal> *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_4;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TraceServices::FNetProfilerGameInstanceInternal>::ResizeAllocation
              (param_3,uVar2,(int)uVar6,uVar7);
    *param_4 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>_> @ 14d41c560

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>_>
          (ushort param_1,ForElementType<TraceServices::FSymslibResolver::FQueuedAddress> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x800;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x800 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x801) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>_> @ 14d41c7d0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TraceServices::FSymslibResolver::FQueuedAddress> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x801) {
      iVar1 = 0x800;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TraceServices::FSymslibResolver::FQueuedAddress>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

