// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 8

// operator() @ 14d434100

EEventEnumerate __thiscall
`TraceServices::
FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateOrderedByEndTime'::__l2::<lambda_2>::operator()
          (void *this,bool param_1,double param_2,FLoadTimeProfilerCpuEvent *param_3)

{
  double dVar1;
  uint *puVar2;
  longlong lVar3;
  uint *puVar4;
  EEventEnumerate EVar5;
  
  puVar2 = *(uint **)((longlong)this + 0x10);
  if (param_1) {
    *(double *)(*(longlong *)((longlong)this + 8) + (ulonglong)*puVar2 * 8) = param_2;
    **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
  }
  else {
    lVar3 = *(longlong *)((longlong)this + 8);
    *puVar2 = *puVar2 - 1;
    puVar4 = *(uint **)this;
    if ((*(double *)(puVar4 + 6) <= param_2) &&
       (dVar1 = *(double *)(lVar3 + (ulonglong)*puVar2 * 8),
       dVar1 < *(double *)(puVar4 + 8) || dVar1 == *(double *)(puVar4 + 8))) {
      EVar5 = UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,enum_TraceServices::EEventEnumerate___cdecl(double,double,unsigned_int,TraceServices::FLoadTimeProfilerCpuEvent_const_&,unsigned_int)>
              ::operator()(puVar4 + 0x10,dVar1,param_2,**(uint **)((longlong)this + 0x10),param_3,
                           *puVar4);
      return (EEventEnumerate)(EVar5 == Stop);
    }
  }
  return Continue;
}

// operator() @ 14d434180

EEventEnumerate __thiscall
`TraceServices::
FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateOrderedByEndTime'::__l2::<lambda_2>::operator()
          (void *this,bool param_1,double param_2,FTimingProfilerEvent *param_3)

{
  double dVar1;
  uint *puVar2;
  longlong lVar3;
  uint *puVar4;
  EEventEnumerate EVar5;
  
  puVar2 = *(uint **)((longlong)this + 0x10);
  if (param_1) {
    *(double *)(*(longlong *)((longlong)this + 8) + (ulonglong)*puVar2 * 8) = param_2;
    **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
  }
  else {
    lVar3 = *(longlong *)((longlong)this + 8);
    *puVar2 = *puVar2 - 1;
    puVar4 = *(uint **)this;
    if ((*(double *)(puVar4 + 6) <= param_2) &&
       (dVar1 = *(double *)(lVar3 + (ulonglong)*puVar2 * 8),
       dVar1 < *(double *)(puVar4 + 8) || dVar1 == *(double *)(puVar4 + 8))) {
      EVar5 = UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,enum_TraceServices::EEventEnumerate___cdecl(double,double,unsigned_int,TraceServices::FTimingProfilerEvent_const_&,unsigned_int)>
              ::operator()(puVar4 + 0x10,dVar1,param_2,**(uint **)((longlong)this + 0x10),param_3,
                           *puVar4);
      return (EEventEnumerate)(EVar5 == Stop);
    }
  }
  return Continue;
}

// operator() @ 14d434200

EEventEnumerate __thiscall
`TraceServices::
FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateOrderedByStartTime'::__l2::<lambda_2>::operator()
          (void *this,bool param_1,double param_2,FLoadTimeProfilerCpuEvent *param_3)

{
  int *piVar1;
  uint *puVar2;
  double dVar3;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  FPackageExportInfo *pFVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  double *pdVar16;
  double *pdVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  double local_48;
  double local_40 [3];
  
  if (param_1) {
    *(longlong *)
     (*(longlong *)((longlong)this + 8) + (ulonglong)**(uint **)((longlong)this + 0x18) * 8) =
         (longlong)*(int *)(*(longlong *)((longlong)this + 0x10) + 8);
    pFVar4 = *(ForAnyElementType **)((longlong)this + 0x10);
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    iVar11 = *(int *)&pFVar4[1].Data;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,pFVar4,piVar1);
    }
    *(int *)&pFVar4[1].Data = iVar11 + 1;
    pFVar15 = pFVar4->Data + (longlong)iVar11 * 0x30;
    DefaultConstructItems<_TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByStartTime_::__l2::FOutputEvent,int>
              (pFVar15,1);
    auVar9._8_4_ = SUB84(param_2,0);
    auVar9._0_8_ = param_2;
    auVar9._12_4_ = (int)((ulonglong)param_2 >> 0x20);
    *(undefined1 (*) [16])pFVar15 = auVar9;
    *(undefined4 *)(pFVar15 + 0x10) = **(undefined4 **)((longlong)this + 0x18);
    pFVar10 = param_3->Export;
    *(FPackageInfo **)(pFVar15 + 0x18) = param_3->Package;
    *(FPackageExportInfo **)(pFVar15 + 0x20) = pFVar10;
    *(undefined8 *)(pFVar15 + 0x28) = *(undefined8 *)&param_3->EventType;
    **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  }
  else {
    lVar5 = *(longlong *)((longlong)this + 8);
    uVar18 = **(uint **)((longlong)this + 0x18) - 1;
    **(uint **)((longlong)this + 0x18) = uVar18;
    if (**(uint **)((longlong)this + 0x20) <= **(uint **)((longlong)this + 0x18)) {
      *(double *)
       (**(longlong **)((longlong)this + 0x10) + 8 +
       *(longlong *)(lVar5 + (ulonglong)uVar18 * 8) * 0x30) = param_2;
    }
    if (**(uint **)((longlong)this + 0x18) <= **(uint **)((longlong)this + 0x20)) {
      **(uint **)((longlong)this + 0x20) = **(uint **)((longlong)this + 0x18);
      puVar6 = *(undefined8 **)((longlong)this + 0x10);
      iVar11 = *(int *)(puVar6 + 1);
      pdVar17 = (double *)*puVar6;
      pdVar16 = pdVar17 + (longlong)iVar11 * 6;
      while( true ) {
        if (*(int *)(puVar6 + 1) != iVar11) {
          `TCheckedPointerIterator<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByStartTime'::__l2::FOutputEvent,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pdVar17 == pdVar16) break;
        puVar7 = *(undefined4 **)this;
        if ((*(double *)(puVar7 + 6) <= pdVar17[1]) &&
           (dVar3 = *pdVar17, dVar3 < *(double *)(puVar7 + 8) || dVar3 == *(double *)(puVar7 + 8)))
        {
          local_58[0] = *puVar7;
          local_50[0] = *(undefined4 *)(pdVar17 + 2);
          local_48 = pdVar17[1];
          local_40[0] = dVar3;
          UE::Core::Private::Function::CheckCallable(*(void **)(puVar7 + 0x10));
          pcVar8 = *(code **)(puVar7 + 0x10);
          plVar14 = (longlong *)(puVar7 + 0x14);
          if (*(longlong **)(puVar7 + 0x1a) != (longlong *)0x0) {
            plVar14 = *(longlong **)(puVar7 + 0x1a);
          }
          uVar13 = (**(code **)(*plVar14 + 8))();
          iVar12 = (*pcVar8)(uVar13,local_40,&local_48,local_50,pdVar17 + 3,local_58);
          if (iVar12 == 1) {
            return Stop;
          }
        }
        pdVar17 = pdVar17 + 6;
      }
      pFVar4 = *(ForAnyElementType **)((longlong)this + 0x10);
      uVar18 = *(uint *)&pFVar4[1].Data;
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      puVar2 = (uint *)((longlong)&pFVar4[1].Data + 4);
      *(undefined4 *)&pFVar4[1].Data = 0;
      if (*puVar2 != uVar18) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,uVar18,pFVar4,0,(int *)puVar2);
      }
    }
  }
  return Continue;
}

// operator() @ 14d434420

EEventEnumerate __thiscall
`TraceServices::
FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateOrderedByStartTime'::__l2::<lambda_2>::operator()
          (void *this,bool param_1,double param_2,FTimingProfilerEvent *param_3)

{
  int *piVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  double *pdVar4;
  double dVar5;
  ForAnyElementType *pFVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  longlong *plVar15;
  double *pdVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  double local_48;
  double local_40 [3];
  
  if (param_1) {
    *(longlong *)
     (*(longlong *)((longlong)this + 8) + (ulonglong)**(uint **)((longlong)this + 0x18) * 8) =
         (longlong)*(int *)(*(longlong *)((longlong)this + 0x10) + 8);
    pFVar6 = *(ForAnyElementType **)((longlong)this + 0x10);
    piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
    iVar12 = *(int *)&pFVar6[1].Data;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,pFVar6,piVar1);
    }
    *(int *)&pFVar6[1].Data = iVar12 + 1;
    pFVar3 = pFVar6->Data + (longlong)iVar12 * 0x18;
    DefaultConstructItems<_TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByStartTime_::__l2::FOutputEvent,int>
              (pFVar3,1);
    auVar11._8_4_ = SUB84(param_2,0);
    auVar11._0_8_ = param_2;
    auVar11._12_4_ = (int)((ulonglong)param_2 >> 0x20);
    *(undefined1 (*) [16])pFVar3 = auVar11;
    *(undefined4 *)(pFVar3 + 0x10) = **(undefined4 **)((longlong)this + 0x18);
    *(uint *)(pFVar3 + 0x14) = param_3->TimerIndex;
    **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
  }
  else {
    lVar7 = *(longlong *)((longlong)this + 8);
    uVar17 = **(uint **)((longlong)this + 0x18) - 1;
    **(uint **)((longlong)this + 0x18) = uVar17;
    if (**(uint **)((longlong)this + 0x20) <= **(uint **)((longlong)this + 0x18)) {
      *(double *)
       (**(longlong **)((longlong)this + 0x10) + 8 +
       *(longlong *)(lVar7 + (ulonglong)uVar17 * 8) * 0x18) = param_2;
    }
    if (**(uint **)((longlong)this + 0x18) <= **(uint **)((longlong)this + 0x20)) {
      **(uint **)((longlong)this + 0x20) = **(uint **)((longlong)this + 0x18);
      puVar8 = *(undefined8 **)((longlong)this + 0x10);
      iVar12 = *(int *)(puVar8 + 1);
      pdVar16 = (double *)*puVar8;
      pdVar4 = pdVar16 + (longlong)iVar12 * 3;
      while( true ) {
        if (*(int *)(puVar8 + 1) != iVar12) {
          `TCheckedPointerIterator<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByStartTime'::__l2::FOutputEvent,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pdVar16 == pdVar4) break;
        puVar9 = *(undefined4 **)this;
        if ((*(double *)(puVar9 + 6) <= pdVar16[1]) &&
           (dVar5 = *pdVar16, dVar5 < *(double *)(puVar9 + 8) || dVar5 == *(double *)(puVar9 + 8)))
        {
          local_58[0] = *puVar9;
          local_50[0] = *(undefined4 *)(pdVar16 + 2);
          local_48 = pdVar16[1];
          local_40[0] = dVar5;
          UE::Core::Private::Function::CheckCallable(*(void **)(puVar9 + 0x10));
          pcVar10 = *(code **)(puVar9 + 0x10);
          plVar15 = (longlong *)(puVar9 + 0x14);
          if (*(longlong **)(puVar9 + 0x1a) != (longlong *)0x0) {
            plVar15 = *(longlong **)(puVar9 + 0x1a);
          }
          uVar14 = (**(code **)(*plVar15 + 8))();
          iVar13 = (*pcVar10)(uVar14,local_40,&local_48,local_50,(longlong)pdVar16 + 0x14,local_58);
          if (iVar13 == 1) {
            return Stop;
          }
        }
        pdVar16 = pdVar16 + 3;
      }
      pFVar6 = *(ForAnyElementType **)((longlong)this + 0x10);
      uVar17 = *(uint *)&pFVar6[1].Data;
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      puVar2 = (uint *)((longlong)&pFVar6[1].Data + 4);
      *(undefined4 *)&pFVar6[1].Data = 0;
      if (*puVar2 != uVar17) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar17,pFVar6,0,(int *)puVar2);
      }
    }
  }
  return Continue;
}

// EnumerateOrderedByEndTime @ 14d45ae30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::
FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateOrderedByEndTime
          (FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this)

{
  undefined1 auStack_2088 [32];
  undefined4 local_2068 [2];
  undefined4 *local_2060;
  code *local_2058;
  FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  **local_2050;
  code *local_2048;
  undefined4 **local_2040;
  FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *local_2038;
  undefined1 *local_2030;
  undefined4 *local_2028;
  undefined1 local_2018 [8192];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14d45ae3a;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2088;
  local_2030 = local_2018;
  local_2068[0] = 0;
  local_2028 = local_2068;
  local_2050 = &local_2038;
  local_2058 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByEndTime'::__l2::<lambda_2>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
               ::Call;
  local_2060 = local_2068;
  local_2040 = &local_2060;
  local_2048 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByEndTime'::__l2::<lambda_1>,void,int>
               ::Call;
  local_2038 = this;
  EnumerateAsyncAlgoritm<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  ::EnumerateEventsDownSampled
            (&this->Data,(TFunctionRef<void___cdecl(int)> *)&local_2048,
             (TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&)>
              *)&local_2058);
  return;
}

// EnumerateOrderedByEndTime @ 14d45aee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::
FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateOrderedByEndTime
          (FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this)

{
  undefined1 auStack_2088 [32];
  undefined4 local_2068 [2];
  undefined4 *local_2060;
  code *local_2058;
  FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  **local_2050;
  code *local_2048;
  undefined4 **local_2040;
  FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *local_2038;
  undefined1 *local_2030;
  undefined4 *local_2028;
  undefined1 local_2018 [8192];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14d45aeea;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2088;
  local_2030 = local_2018;
  local_2068[0] = 0;
  local_2028 = local_2068;
  local_2050 = &local_2038;
  local_2058 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByEndTime'::__l2::<lambda_2>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
               ::Call;
  local_2060 = local_2068;
  local_2040 = &local_2060;
  local_2048 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByEndTime'::__l2::<lambda_1>,void,int>
               ::Call;
  local_2038 = this;
  EnumerateAsyncAlgoritm<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  ::EnumerateEventsDownSampled
            (&this->Data,(TFunctionRef<void___cdecl(int)> *)&local_2048,
             (TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FTimingProfilerEvent_const_&)>
              *)&local_2058);
  return;
}

// EnumerateOrderedByStartTime @ 14d45af90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::
FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateOrderedByStartTime
          (FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_20a8 [32];
  undefined4 local_2088;
  undefined4 local_2084;
  void *local_2080;
  undefined8 local_2078;
  undefined4 *local_2070;
  undefined4 *local_2068;
  code *local_2060;
  FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  **local_2058;
  code *local_2050;
  undefined4 **local_2048;
  FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *local_2040;
  undefined1 *local_2038;
  void **local_2030;
  undefined4 *local_2028;
  undefined4 *local_2020;
  undefined1 local_2018 [8192];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14d45afa4;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_20a8;
  local_2088 = 0;
  local_2084 = 0;
  local_2080 = (void *)0x0;
  local_2078 = 0;
  local_2038 = local_2018;
  local_2030 = &local_2080;
  local_2028 = &local_2088;
  local_2020 = &local_2084;
  local_2058 = &local_2040;
  local_2060 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByStartTime'::__l2::<lambda_2>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
               ::Call;
  local_2070 = &local_2088;
  local_2068 = &local_2084;
  local_2048 = &local_2070;
  local_2050 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByStartTime'::__l2::<lambda_1>,void,int>
               ::Call;
  local_2040 = this;
  EnumerateAsyncAlgoritm<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  ::EnumerateEventsDownSampled
            (&this->Data,(TFunctionRef<void___cdecl(int)> *)&local_2050,
             (TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&)>
              *)&local_2060);
  if ((int)local_2078 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputEvents.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\AsyncEnumerateTask.h"
                       ,0x10f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_2080 != (void *)0x0) {
    FMemory::Free(local_2080);
  }
  return;
}

// EnumerateOrderedByStartTime @ 14d45b0a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::
FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateOrderedByStartTime
          (FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_20a8 [32];
  undefined4 local_2088;
  undefined4 local_2084;
  void *local_2080;
  undefined8 local_2078;
  undefined4 *local_2070;
  undefined4 *local_2068;
  code *local_2060;
  FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  **local_2058;
  code *local_2050;
  undefined4 **local_2048;
  FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *local_2040;
  undefined1 *local_2038;
  void **local_2030;
  undefined4 *local_2028;
  undefined4 *local_2020;
  undefined1 local_2018 [8192];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14d45b0b4;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_20a8;
  local_2088 = 0;
  local_2084 = 0;
  local_2080 = (void *)0x0;
  local_2078 = 0;
  local_2038 = local_2018;
  local_2030 = &local_2080;
  local_2028 = &local_2088;
  local_2020 = &local_2084;
  local_2058 = &local_2040;
  local_2060 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByStartTime'::__l2::<lambda_2>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
               ::Call;
  local_2070 = &local_2088;
  local_2068 = &local_2084;
  local_2048 = &local_2070;
  local_2050 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateOrderedByStartTime'::__l2::<lambda_1>,void,int>
               ::Call;
  local_2040 = this;
  EnumerateAsyncAlgoritm<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  ::EnumerateEventsDownSampled
            (&this->Data,(TFunctionRef<void___cdecl(int)> *)&local_2050,
             (TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FTimingProfilerEvent_const_&)>
              *)&local_2060);
  if ((int)local_2078 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputEvents.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\AsyncEnumerateTask.h"
                       ,0x10f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_2080 != (void *)0x0) {
    FMemory::Free(local_2080);
  }
  return;
}

