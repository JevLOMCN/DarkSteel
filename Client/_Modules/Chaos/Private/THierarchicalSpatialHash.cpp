// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// Initialize<Chaos::TTriangleMeshBvData<float>_> @ 143ddbb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::THierarchicalSpatialHash<int,float>::Initialize<Chaos::TTriangleMeshBvData<float>_>
          (THierarchicalSpatialHash<int,float> *this,TTriangleMeshBvData<float> *param_1,
          float param_2)

{
  int iVar1;
  float fVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 auStack_f8 [32];
  int local_d8;
  float local_d4;
  undefined1 local_d0 [16];
  TPairInitializer<int_const_&,float_&&> local_c0;
  TTriangleMeshBvData<float> *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  char *local_98;
  _RTL_CRITICAL_SECTION *local_90;
  char local_88 [24];
  _RTL_CRITICAL_SECTION local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::THierarchicalSpatialHash<int,float>::Initialize<Chaos::TTriangleMeshBvData<float>_>(Chaos::TTriangleMeshBvData<float>_const&___ptr64,float)___ptr64'
                ::__l2::__CpuProfilerEventSpecId334,"HierarchicalSpatialHash_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\HierarchicalSpatialHash.h"
               ,0x14e);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::THierarchicalSpatialHash<int,float>::Initialize<Chaos::TTriangleMeshBvData<float>_>(Chaos::TTriangleMeshBvData<float>_const&___ptr64,float)___ptr64'
               ::__l2::__CpuProfilerEventSpecId334);
  }
  TSpatialHashGridBase<int>::Reset((TSpatialHashGridBase<int> *)this);
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
              *)&this->UsedLods);
  TArray<Chaos::THierarchicalSpatialHash<int,float>::FVectorAABB,TSizedDefaultAllocator<32>_>::
  SetNumUninitialized(&this->Bounds,(param_1->TmData->MElements).ArrayNum,Default);
  iVar1 = (param_1->TmData->MElements).ArrayNum;
  TSpatialHashGridBase<int>::FHashMap::PreallocateElementsForConcurrentAdd
            ((FHashMap *)this,iVar1 * 8,iVar1 * 2);
  if (param_2 <= 0.0) {
    local_a8 = -0x80000000;
  }
  else {
    local_a8 = LodForCellSize(param_2);
  }
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = 0;
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  local_98 = local_88;
  local_90 = &local_70;
  local_d0._8_8_ = &local_c0.Value;
  local_d0._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Chaos::THierarchicalSpatialHash<int,float>::Initialize<Chaos::TTriangleMeshBvData<float>_>'::__l2::<lambda_1>,void,int>
       ::Call;
  local_a4 = 10;
  local_a0 = 0xfffffff6;
  local_c0.Value = (float *)this;
  local_b0 = param_1;
  PhysicsParallelFor((param_1->TmData->MElements).ArrayNum,
                     (TFunctionRef<void___cdecl(int)> *)local_d0,false);
  TSpatialHashGridBase<int>::FHashMap::ShrinkElementsAfterConcurrentAdd((FHashMap *)this);
  fVar2 = __real_3f800000;
  local_d8 = -10;
  do {
    if (local_88[local_d8 + 10] != '\0') {
      if (local_d8 < 0) {
        local_d4 = fVar2 / (float)(ulonglong)(1L << (-(byte)local_d8 & 0x3f));
      }
      else {
        uVar3 = 1L << ((byte)local_d8 & 0x3f);
        if ((longlong)uVar3 < 0) {
          local_d4 = (float)uVar3;
        }
        else {
          local_d4 = (float)(longlong)uVar3;
        }
      }
      local_d0._0_8_ = &local_d8;
      local_d0._8_8_ = &local_d4;
      TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,float_&&>_>
                ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                  *)&this->UsedLods,&local_c0,(bool *)local_d0);
    }
    local_d8 = local_d8 + 1;
  } while (local_d8 < 0xb);
  DeleteCriticalSection(&local_70);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Initialize<Chaos::TTriangleMeshBvData<double>_> @ 143ddbdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::THierarchicalSpatialHash<int,double>::Initialize<Chaos::TTriangleMeshBvData<double>_>
          (THierarchicalSpatialHash<int,double> *this,TTriangleMeshBvData<double> *param_1,
          double param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStackY_138 [32];
  int local_f8;
  undefined1 local_f4 [12];
  undefined1 local_e8 [16];
  int *local_d8;
  undefined1 *local_d0;
  THierarchicalSpatialHash<int,double> *local_c8;
  TTriangleMeshBvData<double> *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  char *local_a8;
  _RTL_CRITICAL_SECTION *local_a0;
  char local_98 [24];
  _RTL_CRITICAL_SECTION local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::THierarchicalSpatialHash<int,double>::Initialize<Chaos::TTriangleMeshBvData<double>_>(Chaos::TTriangleMeshBvData<double>_const&___ptr64,double)___ptr64'
                ::__l2::__CpuProfilerEventSpecId334,"HierarchicalSpatialHash_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\HierarchicalSpatialHash.h"
               ,0x14e);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::THierarchicalSpatialHash<int,double>::Initialize<Chaos::TTriangleMeshBvData<double>_>(Chaos::TTriangleMeshBvData<double>_const&___ptr64,double)___ptr64'
               ::__l2::__CpuProfilerEventSpecId334);
  }
  TSpatialHashGridBase<int>::Reset((TSpatialHashGridBase<int> *)this);
  TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>
              *)&this->UsedLods);
  piVar1 = &(this->Bounds).ArrayNum;
  iVar6 = *piVar1;
  uVar2 = (param_1->TmData->MElements).ArrayNum;
  if (iVar6 < (int)uVar2) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,uVar2 - iVar6,&(this->Bounds).AllocatorInstance,piVar1,
               &(this->Bounds).ArrayMax);
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar6) {
      uVar8 = iVar6 - uVar2;
      if (((int)(uVar8 | uVar2) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        _Dst = (this->Bounds).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x40;
        iVar6 = (*piVar1 - uVar2) - uVar8;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 0x40,(longlong)iVar6 << 6);
        }
        *piVar1 = *piVar1 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,&(this->Bounds).AllocatorInstance,*piVar1,&(this->Bounds).ArrayMax);
      }
    }
  }
  iVar6 = (param_1->TmData->MElements).ArrayNum;
  TSpatialHashGridBase<int>::FHashMap::PreallocateElementsForConcurrentAdd
            ((FHashMap *)this,iVar6 * 8,iVar6 * 2);
  if (param_2 <= 0.0) {
    local_b8 = -0x80000000;
  }
  else {
    local_b8 = LodForCellSize(param_2);
  }
  local_98[0x10] = '\0';
  local_98[0x11] = '\0';
  local_98[0x12] = '\0';
  local_98[0x13] = '\0';
  local_98[0x14] = 0;
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  local_98[8] = '\0';
  local_98[9] = '\0';
  local_98[10] = '\0';
  local_98[0xb] = '\0';
  local_98[0xc] = '\0';
  local_98[0xd] = '\0';
  local_98[0xe] = '\0';
  local_98[0xf] = '\0';
  InitializeCriticalSectionAndSpinCount(&local_80,4000);
  local_a8 = local_98;
  local_a0 = &local_80;
  local_e8._8_8_ = &local_c8;
  local_e8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Chaos::THierarchicalSpatialHash<int,double>::Initialize<Chaos::TTriangleMeshBvData<double>_>'::__l2::<lambda_1>,void,int>
       ::Call;
  local_b4 = 10;
  local_b0 = 0xfffffff6;
  local_c8 = this;
  local_c0 = param_1;
  PhysicsParallelFor((param_1->TmData->MElements).ArrayNum,
                     (TFunctionRef<void___cdecl(int)> *)local_e8,false);
  TSpatialHashGridBase<int>::FHashMap::ShrinkElementsAfterConcurrentAdd((FHashMap *)this);
  dVar4 = __real_3ff0000000000000;
  local_f8 = -10;
  do {
    if (local_98[local_f8 + 10] != '\0') {
      if (local_f8 < 0) {
        local_f4._4_8_ = dVar4 / (double)(ulonglong)(1L << (-(byte)local_f8 & 0x3f));
      }
      else {
        uVar7 = 1L << ((byte)local_f8 & 0x3f);
        if ((longlong)uVar7 < 0) {
          local_f4._4_8_ = (undefined8)uVar7;
        }
        else {
          local_f4._4_8_ = (undefined8)(longlong)uVar7;
        }
      }
      local_d8 = &local_f8;
      local_d0 = local_f4 + 4;
      TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,double_&&>_>
                ((TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>
                  *)&this->UsedLods,(TPairInitializer<int_const_&,double_&&> *)local_f4,
                 (bool *)&local_d8);
    }
    local_f8 = local_f8 + 1;
  } while (local_f8 < 0xb);
  DeleteCriticalSection(&local_80);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Initialize<Chaos::FTriangleMeshBvDataWithThickness> @ 143ddc130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::THierarchicalSpatialHash<int,float>::Initialize<Chaos::FTriangleMeshBvDataWithThickness>
          (THierarchicalSpatialHash<int,float> *this,FTriangleMeshBvDataWithThickness *param_1,
          float param_2)

{
  int iVar1;
  float fVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 auStack_f8 [32];
  int local_d8;
  float local_d4;
  undefined1 local_d0 [16];
  TPairInitializer<int_const_&,float_&&> local_c0;
  FTriangleMeshBvDataWithThickness *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  char *local_98;
  _RTL_CRITICAL_SECTION *local_90;
  char local_88 [24];
  _RTL_CRITICAL_SECTION local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::THierarchicalSpatialHash<int,float>::Initialize<Chaos::FTriangleMeshBvDataWithThickness>(Chaos::FTriangleMeshBvDataWithThickness_const&___ptr64,float)___ptr64'
                ::__l2::__CpuProfilerEventSpecId334,"HierarchicalSpatialHash_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\HierarchicalSpatialHash.h"
               ,0x14e);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::THierarchicalSpatialHash<int,float>::Initialize<Chaos::FTriangleMeshBvDataWithThickness>(Chaos::FTriangleMeshBvDataWithThickness_const&___ptr64,float)___ptr64'
               ::__l2::__CpuProfilerEventSpecId334);
  }
  TSpatialHashGridBase<int>::Reset((TSpatialHashGridBase<int> *)this);
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
              *)&this->UsedLods);
  TArray<Chaos::THierarchicalSpatialHash<int,float>::FVectorAABB,TSizedDefaultAllocator<32>_>::
  SetNumUninitialized(&this->Bounds,(param_1->TmData->MElements).ArrayNum,Default);
  iVar1 = (param_1->TmData->MElements).ArrayNum;
  TSpatialHashGridBase<int>::FHashMap::PreallocateElementsForConcurrentAdd
            ((FHashMap *)this,iVar1 * 8,iVar1 * 2);
  if (param_2 <= 0.0) {
    local_a8 = -0x80000000;
  }
  else {
    local_a8 = LodForCellSize(param_2);
  }
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = 0;
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  local_98 = local_88;
  local_90 = &local_70;
  local_d0._8_8_ = &local_c0.Value;
  local_d0._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Chaos::THierarchicalSpatialHash<int,float>::Initialize<Chaos::FTriangleMeshBvDataWithThickness>'::__l2::<lambda_1>,void,int>
       ::Call;
  local_a4 = 10;
  local_a0 = 0xfffffff6;
  local_c0.Value = (float *)this;
  local_b0 = param_1;
  PhysicsParallelFor((param_1->TmData->MElements).ArrayNum,
                     (TFunctionRef<void___cdecl(int)> *)local_d0,false);
  TSpatialHashGridBase<int>::FHashMap::ShrinkElementsAfterConcurrentAdd((FHashMap *)this);
  fVar2 = __real_3f800000;
  local_d8 = -10;
  do {
    if (local_88[local_d8 + 10] != '\0') {
      if (local_d8 < 0) {
        local_d4 = fVar2 / (float)(ulonglong)(1L << (-(byte)local_d8 & 0x3f));
      }
      else {
        uVar3 = 1L << ((byte)local_d8 & 0x3f);
        if ((longlong)uVar3 < 0) {
          local_d4 = (float)uVar3;
        }
        else {
          local_d4 = (float)(longlong)uVar3;
        }
      }
      local_d0._0_8_ = &local_d8;
      local_d0._8_8_ = &local_d4;
      TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,float_&&>_>
                ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                  *)&this->UsedLods,&local_c0,(bool *)local_d0);
    }
    local_d8 = local_d8 + 1;
  } while (local_d8 < 0xb);
  DeleteCriticalSection(&local_70);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 143e003a0

void __thiscall
`Chaos::THierarchicalSpatialHash<int,float>::Initialize<Chaos::TTriangleMeshBvData<float>_>'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  TArrayView<Chaos::TVector<float,3>_const_,int> *this_00;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  uint uVar7;
  int iVar8;
  TVector<float,3> *pTVar9;
  TVector<float,3> *pTVar10;
  TVector<float,3> *pTVar11;
  longlong lVar12;
  float fVar13;
  float fVar15;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int local_e8 [2];
  float local_e0 [2];
  FPayloadAndBounds local_d8;
  undefined8 local_d0;
  float local_c8;
  TVector<int,3>_u_0 local_c0;
  TVector<int,3>_u_0 local_b0;
  TPairInitializer<int_const_&,float_const_&> local_a0;
  int *local_90;
  float *local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  
  lVar12 = (longlong)param_1;
  plVar1 = (longlong *)**(longlong **)((longlong)this + 8);
  this_00 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)
            (*(longlong **)((longlong)this + 8))[1];
  uVar7 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  local_a0.Value = (float *)this_00;
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *plVar1;
  pTVar9 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (this_00,*(int *)(lVar2 + lVar12 * 0xc));
  pTVar10 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                      (this_00,*(int *)(lVar2 + 4 + lVar12 * 0xc));
  pTVar11 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                      ((TArrayView<Chaos::TVector<float,3>_const_,int> *)local_a0.Value,
                       *(int *)(lVar2 + 8 + lVar12 * 0xc));
  auVar16._12_4_ = 0;
  auVar16._0_12_ = (undefined1  [12])*pTVar9;
  auVar19._12_4_ = 0;
  auVar19._0_12_ = (undefined1  [12])*pTVar9;
  auVar20._12_4_ = 0;
  auVar20._0_12_ = (undefined1  [12])*pTVar10;
  auVar17 = maxps(auVar16,auVar20);
  auVar14._12_4_ = 0;
  auVar14._0_12_ = (undefined1  [12])*pTVar10;
  auVar20 = minps(auVar19,auVar14);
  auVar18._12_4_ = 0;
  auVar18._0_12_ = (undefined1  [12])*pTVar11;
  auVar18 = maxps(auVar17,auVar18);
  auVar17._12_4_ = 0;
  auVar17._0_12_ = (undefined1  [12])*pTVar11;
  auVar17 = minps(auVar20,auVar17);
  fVar13 = auVar18._0_4_ - auVar17._0_4_;
  fVar15 = auVar18._4_4_ - auVar17._4_4_;
  local_d0 = CONCAT44(fVar15,fVar13);
  local_c8 = auVar18._8_4_ - auVar17._8_4_;
  if (((fVar13 <= fVar15) || (fVar13 <= local_c8)) && (fVar13 = fVar15, fVar15 <= local_c8)) {
    fVar13 = local_c8;
  }
  local_78 = auVar17;
  local_68 = auVar18;
  iVar8 = Chaos::THierarchicalSpatialHash<int,float>::LodForCellSize(fVar13);
  if (iVar8 < *(int *)((longlong)this + 0x10)) {
    iVar8 = *(int *)((longlong)this + 0x10);
  }
  local_e8[0] = iVar8;
  local_e0[0] = Chaos::THierarchicalSpatialHash<int,float>::CellSizeForLod(iVar8);
  auVar4._4_4_ = local_e0[0];
  auVar4._0_4_ = local_e0[0];
  auVar4._8_4_ = local_e0[0];
  auVar4._12_4_ = local_e0[0];
  auVar20 = divps(auVar17,auVar4);
  auVar5._4_4_ = local_e0[0];
  auVar5._0_4_ = local_e0[0];
  auVar5._8_4_ = local_e0[0];
  auVar5._12_4_ = local_e0[0];
  auVar14 = divps(auVar18,auVar5);
  local_b0._s_0.X =
       (int)((auVar20._0_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[0]) + auVar20._0_4_) >> 1
  ;
  local_b0._s_0.Y =
       (int)((auVar20._4_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[1]) + auVar20._4_4_) >> 1
  ;
  local_b0._s_0.Z =
       (int)((auVar20._8_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[2]) + auVar20._8_4_) >> 1
  ;
  local_c0._s_0.X =
       (int)((auVar14._0_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[0]) + auVar14._0_4_) >> 1
  ;
  local_c0._s_0.Y =
       (int)((auVar14._4_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[1]) + auVar14._4_4_) >> 1
  ;
  local_c0._s_0.Z =
       (int)((auVar14._8_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[2]) + auVar14._8_4_) >> 1
  ;
  local_d8.Payload = param_1;
  local_d8.BoundsLookupIdx = param_1;
  Chaos::TSpatialHashGridBase<int>::FHashMap::ConcurrentAddElementRange
            (*(FHashMap **)this,(TVector<int,3> *)&local_b0._s_0,(TVector<int,3> *)&local_c0._s_0,
             iVar8,&local_d8);
  lVar2 = *(longlong *)this;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar2 + 0x80)) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x78);
  *(undefined1 (*) [16])(lVar12 * 0x20 + lVar2) = auVar17;
  *(undefined1 (*) [16])(lVar12 * 0x20 + 0x10 + lVar2) = auVar18;
  if (local_e8[0] + 10U < 0x15) {
    *(undefined1 *)((ulonglong)(local_e8[0] + 10U) + *(longlong *)((longlong)this + 0x20)) = 1;
  }
  else {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x28));
    local_90 = local_e8;
    local_88 = local_e0;
    TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,float_const_&>_>
              ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                *)(*(longlong *)this + 0x28),&local_a0,(bool *)&local_90);
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x28));
  }
  return;
}

// operator() @ 143e00670

void __thiscall
`Chaos::THierarchicalSpatialHash<int,double>::Initialize<Chaos::TTriangleMeshBvData<double>_>'::__l2
::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  double dVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int local_128 [2];
  FPayloadAndBounds local_120;
  TVector<int,3>_u_0 local_118;
  TVector<int,3>_u_0 local_108;
  TPairInitializer<int_const_&,double_const_&> local_f8;
  int *local_e8;
  double **local_e0;
  TTriangleMeshBvEntry<double> local_d8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  FVectorAABB local_a8 [2];
  
  local_d8.TmData = (FTriangleMesh *)**(undefined8 **)((longlong)this + 8);
  local_d8.Points =
       (TArrayView<Chaos::TVector<double,3>_const_,int> *)(*(undefined8 **)((longlong)this + 8))[1];
  local_d8.Index = param_1;
  Chaos::TTriangleMeshBvEntry<double>::VectorAABB(&local_d8,local_a8);
  local_c0 = local_a8[0].Max.XY.m128d_f64[0] - local_a8[0].Min.XY.m128d_f64[0];
  dStack_b8 = local_a8[0].Max.XY.m128d_f64[1] - local_a8[0].Min.XY.m128d_f64[1];
  local_b0 = local_a8[0].Max.ZW.m128d_f64[0] - local_a8[0].Min.ZW.m128d_f64[0];
  if (((local_c0 <= dStack_b8) || (dVar9 = local_c0, local_c0 <= local_b0)) &&
     (dVar9 = local_b0, local_b0 <= dStack_b8)) {
    dVar9 = dStack_b8;
  }
  iVar5 = Chaos::THierarchicalSpatialHash<int,double>::LodForCellSize(dVar9);
  if (iVar5 < *(int *)((longlong)this + 0x10)) {
    iVar5 = *(int *)((longlong)this + 0x10);
  }
  local_128[0] = iVar5;
  local_f8.Value = (double *)Chaos::THierarchicalSpatialHash<int,double>::CellSizeForLod(iVar5);
  uVar8 = SUB84(local_f8.Value,0);
  uVar10 = (undefined4)((ulonglong)local_f8.Value >> 0x20);
  auVar11._8_4_ = uVar8;
  auVar11._0_8_ = local_f8.Value;
  auVar11._12_4_ = uVar10;
  auVar11 = divpd((undefined1  [16])local_a8[0].Min.XY.m128d_f64,auVar11);
  auVar12._8_4_ = uVar8;
  auVar12._0_8_ = local_f8.Value;
  auVar12._12_4_ = uVar10;
  auVar12 = divpd((undefined1  [16])local_a8[0].Min.ZW.m128d_f64,auVar12);
  auVar13._8_4_ = uVar8;
  auVar13._0_8_ = local_f8.Value;
  auVar13._12_4_ = uVar10;
  auVar13 = divpd((undefined1  [16])local_a8[0].Max.ZW.m128d_f64,auVar13);
  local_108._s_0.X =
       (int)((auVar11._0_8_ - GlobalVectorConstants::DoubleOneHalf.XY.m128d_f64[0]) + auVar11._0_8_)
       >> 1;
  local_108._s_0.Y =
       (int)((auVar11._8_8_ - GlobalVectorConstants::DoubleOneHalf.XY.m128d_f64[1]) + auVar11._8_8_)
       >> 1;
  local_108._s_0.Z =
       (int)((auVar12._0_8_ - GlobalVectorConstants::DoubleOneHalf.ZW.m128d_f64[0]) + auVar12._0_8_)
       >> 1;
  auVar3._8_4_ = uVar8;
  auVar3._0_8_ = local_f8.Value;
  auVar3._12_4_ = uVar10;
  auVar11 = divpd((undefined1  [16])local_a8[0].Max.XY.m128d_f64,auVar3);
  local_118._s_0.X =
       (int)((auVar11._0_8_ - GlobalVectorConstants::DoubleOneHalf.XY.m128d_f64[0]) + auVar11._0_8_)
       >> 1;
  local_118._s_0.Y =
       (int)((auVar11._8_8_ - GlobalVectorConstants::DoubleOneHalf.XY.m128d_f64[1]) + auVar11._8_8_)
       >> 1;
  local_118._s_0.Z =
       (int)((auVar13._0_8_ - GlobalVectorConstants::DoubleOneHalf.ZW.m128d_f64[0]) + auVar13._0_8_)
       >> 1;
  local_120.Payload = param_1;
  local_120.BoundsLookupIdx = param_1;
  Chaos::TSpatialHashGridBase<int>::FHashMap::ConcurrentAddElementRange
            (*(FHashMap **)this,(TVector<int,3> *)&local_108._s_0,(TVector<int,3> *)&local_118._s_0,
             iVar5,&local_120);
  lVar1 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar1 + 0x80)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)(lVar1 + 0x78);
  lVar7 = (longlong)param_1 * 0x40;
  *(double (*) [2])(lVar7 + lVar1) = local_a8[0].Min.XY.m128d_f64;
  *(double (*) [2])(lVar7 + 0x10 + lVar1) = local_a8[0].Min.ZW.m128d_f64;
  *(double (*) [2])(lVar7 + 0x20 + lVar1) = local_a8[0].Max.XY.m128d_f64;
  *(double (*) [2])(lVar7 + 0x30 + lVar1) = local_a8[0].Max.ZW.m128d_f64;
  if (local_128[0] + 10U < 0x15) {
    *(undefined1 *)((ulonglong)(local_128[0] + 10U) + *(longlong *)((longlong)this + 0x20)) = 1;
  }
  else {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x28));
    local_e8 = local_128;
    local_e0 = &local_f8.Value;
    TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,double_const_&>_>
              ((TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>
                *)(*(longlong *)this + 0x28),&local_f8,(bool *)&local_e8);
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x28));
  }
  return;
}

// operator() @ 143e00920

void __thiscall
`Chaos::THierarchicalSpatialHash<int,float>::Initialize<Chaos::FTriangleMeshBvDataWithThickness>'::
__l2::<lambda_1>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float local_d8;
  float local_d4;
  FPayloadAndBounds local_d0;
  undefined8 local_c8;
  float local_c0;
  TVector<int,3>_u_0 local_b8;
  TVector<int,3>_u_0 local_a8;
  TPairInitializer<int_const_&,float_const_&> local_98;
  float *local_88;
  FTriangleMeshBvDataWithThicknessEntry local_80;
  __m128 local_58;
  undefined1 local_48 [16];
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_80.TmData = (FTriangleMesh *)*puVar1;
  local_80.Points = (TArrayView<Chaos::TVector<float,3>_const_,int> *)puVar1[1];
  local_80.PointThicknesses = (FPBDFlatWeightMap *)puVar1[2];
  local_80.ThicknessMapIndexOffset = *(int *)(puVar1 + 3);
  local_80.Index = param_1;
  Chaos::FTriangleMeshBvDataWithThicknessEntry::VectorAABB(&local_80,(FVectorAABB *)&local_58);
  fVar6 = local_48._0_4_ - local_58.m128_f32[0];
  fVar7 = local_48._4_4_ - local_58.m128_f32[1];
  local_c8 = CONCAT44(fVar7,fVar6);
  local_c0 = local_48._8_4_ - local_58.m128_f32[2];
  if (((fVar6 <= fVar7) || (fVar6 <= local_c0)) && (fVar6 = local_c0, local_c0 <= fVar7)) {
    fVar6 = fVar7;
  }
  fVar6 = (float)Chaos::THierarchicalSpatialHash<int,float>::LodForCellSize(fVar6);
  if ((int)fVar6 < *(int *)((longlong)this + 0x10)) {
    fVar6 = *(float *)((longlong)this + 0x10);
  }
  local_d8 = fVar6;
  local_d4 = Chaos::THierarchicalSpatialHash<int,float>::CellSizeForLod((int)fVar6);
  auVar8._4_4_ = local_d4;
  auVar8._0_4_ = local_d4;
  auVar8._8_4_ = local_d4;
  auVar8._12_4_ = local_d4;
  auVar8 = divps((undefined1  [16])local_58,auVar8);
  auVar9._4_4_ = local_d4;
  auVar9._0_4_ = local_d4;
  auVar9._8_4_ = local_d4;
  auVar9._12_4_ = local_d4;
  auVar9 = divps(local_48,auVar9);
  local_a8._s_0.X =
       (int)((auVar8._0_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[0]) + auVar8._0_4_) >> 1;
  local_a8._s_0.Y =
       (int)((auVar8._4_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[1]) + auVar8._4_4_) >> 1;
  local_a8._s_0.Z =
       (int)((auVar8._8_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[2]) + auVar8._8_4_) >> 1;
  local_b8._s_0.X =
       (int)((auVar9._0_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[0]) + auVar9._0_4_) >> 1;
  local_b8._s_0.Y =
       (int)((auVar9._4_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[1]) + auVar9._4_4_) >> 1;
  local_b8._s_0.Z =
       (int)((auVar9._8_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[2]) + auVar9._8_4_) >> 1;
  local_d0.Payload = param_1;
  local_d0.BoundsLookupIdx = param_1;
  Chaos::TSpatialHashGridBase<int>::FHashMap::ConcurrentAddElementRange
            (*(FHashMap **)this,(TVector<int,3> *)&local_a8._s_0,(TVector<int,3> *)&local_b8._s_0,
             (int)fVar6,&local_d0);
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar2 + 0x80)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x78);
                    /* WARNING: Store size is inaccurate */
  *(__m128 *)((__m128 *)((longlong)param_1 * 0x20 + lVar2))->m128_f32 = local_58;
  *(undefined1 (*) [16])((longlong)param_1 * 0x20 + 0x10 + lVar2) = local_48;
  if ((int)local_d8 + 10U < 0x15) {
    *(undefined1 *)((ulonglong)((int)local_d8 + 10U) + *(longlong *)((longlong)this + 0x20)) = 1;
  }
  else {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x28));
    local_98.Value = &local_d8;
    local_88 = &local_d4;
    TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,float_const_&>_>
              ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                *)(*(longlong *)this + 0x28),&local_98,(bool *)&local_98.Value);
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x28));
  }
  return;
}

// CellSizeForLod @ 143e14a10

float __cdecl Chaos::THierarchicalSpatialHash<int,float>::CellSizeForLod(int param_1)

{
  ulonglong uVar1;
  
  if (param_1 < 0) {
    uVar1 = 1L << (-(byte)param_1 & 0x3f);
    if (-1 < (longlong)uVar1) {
      return __real_3f800000 / (float)(longlong)uVar1;
    }
    return __real_3f800000 / (float)uVar1;
  }
  uVar1 = 1L << ((byte)param_1 & 0x3f);
  if (-1 < (longlong)uVar1) {
    return (float)(longlong)uVar1;
  }
  return (float)uVar1;
}

// CellSizeForLod @ 143e14a90

double __cdecl Chaos::THierarchicalSpatialHash<int,double>::CellSizeForLod(int param_1)

{
  ulonglong uVar1;
  
  if (param_1 < 0) {
    uVar1 = 1L << (-(byte)param_1 & 0x3f);
    if (-1 < (longlong)uVar1) {
      return __real_3ff0000000000000 / (double)(longlong)uVar1;
    }
    return __real_3ff0000000000000 / (double)uVar1;
  }
  uVar1 = 1L << ((byte)param_1 & 0x3f);
  if (-1 < (longlong)uVar1) {
    return (double)(longlong)uVar1;
  }
  return (double)uVar1;
}

// FindAllIntersections @ 143e1e660

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::THierarchicalSpatialHash<int,float>::FindAllIntersections
          (THierarchicalSpatialHash<int,float> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FVectorAABB *param_1,
          TFunctionRef<bool___cdecl(int)> *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *pTVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar16;
  undefined1 *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  __m128i _Var30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 local_128 [4];
  int local_124;
  uint local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  undefined4 local_108 [2];
  FVectorAABB *local_100;
  TArray<int,TSizedDefaultAllocator<32>_> *local_f8;
  undefined1 local_f0 [16];
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  int local_ac;
  TFunctionRef<bool___cdecl(int)> *local_a8;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined7 extraout_var;
  
  puVar1 = &(this->UsedLods).field_0x10;
  iStack_d8 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar12 = *(int *)&(this->UsedLods).field_0x28;
  local_e0 = &this->UsedLods;
  uStack_d4 = 1;
  iStack_c4 = 0;
  if (iVar12 != 0) {
    puVar23 = *(uint **)&(this->UsedLods).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar19 = *puVar23;
    while (uVar19 == 0) {
      lVar15 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      iStack_c4 = iVar12;
      if ((int)((iVar12 + -1 >> 0x1f & 0x1fU) + iVar12 + -1) >> 5 < iStack_d8) goto LAB_143e1e72d;
      uVar19 = puVar23[lVar15 + 1];
    }
    uStack_d4 = -uVar19 & uVar19;
    uVar4 = (ulonglong)uStack_d4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_b0 = (int)lVar15;
    iStack_c4 = local_c0 + -1 + local_b0;
    if (iVar12 < iStack_c4) {
      iStack_c4 = iVar12;
    }
  }
LAB_143e1e72d:
  uVar19 = *(uint *)&(this->UsedLods).field_0x28;
  iStack_b8 = *(int *)&(this->UsedLods).field_0x8 - *(int *)&(this->UsedLods).field_0x34;
  uVar24 = uVar19 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uStack_d4,iStack_d8);
  uStack_c8 = 0xffffffff;
  TStack_98.CurrentBitIndex = iStack_c4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar19 >> 5;
  TStack_98._28_4_ = iStack_c4;
  TStack_98.BaseBitIndex = local_c0;
  uStack_78 = CONCAT44(uStack_b4,iStack_b8);
  local_120 = uVar19;
  local_100 = param_1;
  local_f8 = __return_storage_ptr__;
  local_d0 = puVar1;
  iStack_bc = iStack_c4;
  local_a8 = param_2;
  local_a0 = local_e0;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar12 < (int)uVar19)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pTVar16 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
    return pTVar16;
  }
  uVar21 = *(uint *)&(this->UsedLods).field_0x28;
  if (uVar19 != uVar21) {
    puVar17 = *(undefined1 **)&(this->UsedLods).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar18 * 4);
    while (uVar19 == 0) {
      lVar15 = (longlong)iVar18;
      uVar24 = uVar24 + 0x20;
      iVar18 = iVar18 + 1;
      uVar19 = uVar21;
      local_120 = uVar21;
      if ((int)(((int)(uVar21 - 1) >> 0x1f & 0x1fU) + (uVar21 - 1)) >> 5 < iVar18)
      goto LAB_143e1e840;
      uVar19 = *(uint *)(puVar17 + lVar15 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_ac = (int)lVar15;
    uVar19 = local_ac + -1 + uVar24;
    local_120 = uVar19;
    if ((int)uVar21 < (int)uVar19) {
      uVar19 = uVar21;
      local_120 = uVar21;
    }
  }
LAB_143e1e840:
  do {
    pTVar9 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      local_128[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if (((TStack_98.CurrentBitIndex == uVar19) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->UsedLods).field_0x10))
       && (pTVar9 == &this->UsedLods)) {
      return local_f8;
    }
    lVar15 = *(longlong *)pTVar9;
    uVar5 = *(undefined4 *)(lVar15 + 4 + (longlong)TStack_98.CurrentBitIndex * 0x10);
    iVar12 = *(int *)(lVar15 + (longlong)TStack_98.CurrentBitIndex * 0x10);
    auVar28._4_4_ = uVar5;
    auVar28._0_4_ = uVar5;
    auVar28._8_4_ = uVar5;
    auVar28._12_4_ = uVar5;
    auVar28 = divps((undefined1  [16])param_1->Min,auVar28);
    auVar29._4_4_ = uVar5;
    auVar29._0_4_ = uVar5;
    auVar29._8_4_ = uVar5;
    auVar29._12_4_ = uVar5;
    auVar29 = divps((undefined1  [16])param_1->Max,auVar29);
    iVar18 = (int)((auVar28._0_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[0]) + auVar28._0_4_
                  ) >> 1;
    iStack_6c = (int)((auVar28._4_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[1]) +
                     auVar28._4_4_) >> 1;
    iStack_68 = (int)((auVar28._8_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[2]) +
                     auVar28._8_4_) >> 1;
    iStack_64 = (int)((auVar28._12_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[3]) +
                     auVar28._12_4_) >> 1;
    auVar31._0_4_ =
         (int)((auVar29._0_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[0]) + auVar29._0_4_) >>
         1;
    auVar31._4_4_ =
         (int)((auVar29._4_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[1]) + auVar29._4_4_) >>
         1;
    auVar31._8_4_ =
         (int)((auVar29._8_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[2]) + auVar29._8_4_) >>
         1;
    auVar31._12_4_ =
         (int)((auVar29._12_4_ - GlobalVectorConstants::FloatOneHalf.m128_f32[3]) + auVar29._12_4_)
         >> 1;
    local_124 = iVar18;
    local_118 = iVar12;
    local_110 = auVar31._0_4_;
    local_f0 = auVar31;
    local_70 = iVar18;
    if (iVar18 <= auVar31._0_4_) {
      do {
        local_114 = iStack_6c;
        iVar22 = iStack_6c;
        local_124 = iVar18;
        if (iStack_6c <= auVar31._4_4_) {
          do {
            local_11c = iStack_68;
            auVar31._4_4_ = iVar12;
            auVar31._0_4_ = iVar18;
            iVar20 = iVar22;
            iVar14 = iStack_68;
            local_114 = iVar22;
            if (iStack_68 <= auVar31._8_4_) {
              do {
                auVar32._12_4_ = auVar31._4_4_;
                auVar32._8_4_ = iVar14;
                iVar12 = (int)this->_padding_;
                auVar32._4_4_ = iVar20;
                auVar32._0_4_ = auVar31._0_4_;
                auVar28 = pmulld(auVar32,(undefined1  [16])
                                         `public:_unsigned_int___cdecl_Chaos::TSpatialHashGridBase<int>::FHashIndex::GetTypeHash(void)const___ptr64'
                                         ::__l2::Multiplier);
                uVar24 = (auVar28._0_4_ ^ auVar28._4_4_ ^ auVar28._8_4_ ^ auVar28._12_4_) &
                         iVar12 - 1U;
                uVar19 = 0;
                if ((int)uVar24 < iVar12) {
                  uVar19 = ~uVar24 >> 0x1f;
                }
                local_11c = iVar14;
                if ((uVar19 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  pTVar16 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
                  return pTVar16;
                }
                uVar19 = *(uint *)(this->_padding_ + (longlong)(int)uVar24 * 4);
                iVar22 = iVar20;
                _Var30 = GlobalVectorConstants::IntAllMask;
                iVar18 = local_124;
                iVar12 = local_118;
                while (local_124 = iVar18, local_118 = iVar12, uVar19 != 0xffffffff) {
                  uVar21 = ~uVar19 >> 0x1f;
                  uVar24 = 0;
                  if ((int)uVar19 < (int)this->_padding_) {
                    uVar24 = uVar21;
                  }
                  if ((uVar24 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), _Var30 = GlobalVectorConstants::IntAllMask, bVar10)) {
                    pcVar8 = (code *)swi(3);
                    pTVar16 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
                    return pTVar16;
                  }
                  lVar15 = (longlong)(int)uVar19 * 0x20;
                  piVar2 = (int *)(this->_padding_ + lVar15);
                  auVar25._0_4_ = -(uint)(auVar31._0_4_ == *piVar2) ^ _Var30.m128i_u32[0];
                  auVar25._4_4_ = -(uint)(iVar20 == piVar2[1]) ^ _Var30.m128i_u32[1];
                  auVar25._8_4_ = -(uint)(iVar14 == piVar2[2]) ^ _Var30.m128i_u32[2];
                  auVar25._12_4_ = -(uint)(auVar31._4_4_ == piVar2[3]) ^ _Var30.m128i_u32[3];
                  iVar12 = movmskps((int)this->_padding_,auVar25);
                  if (iVar12 == 0) {
                    uVar24 = 0;
                    if ((int)uVar19 < (int)this->_padding_) {
                      uVar24 = uVar21;
                    }
                    if ((uVar24 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar8 = (code *)swi(3);
                      pTVar16 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
                      return pTVar16;
                    }
                    lVar6 = this->_padding_;
                    local_108[0] = *(undefined4 *)(lVar6 + 0x10 + lVar15);
                    cVar11 = (**(code **)local_a8)(*(undefined8 *)&local_a8->field_0x8,local_108);
                    _Var30 = GlobalVectorConstants::IntAllMask;
                    if (cVar11 != '\0') {
                      uVar24 = *(uint *)(lVar6 + 0x14 + lVar15);
                      uVar13 = 0;
                      if ((int)uVar24 < (this->Bounds).ArrayNum) {
                        uVar13 = ~uVar24 >> 0x1f;
                      }
                      if (uVar13 == 0) {
                        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        uVar13 = (uint)CONCAT71(extraout_var,bVar10);
                        if (bVar10) {
                          pcVar8 = (code *)swi(3);
                          pTVar16 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
                          return pTVar16;
                        }
                      }
                      pFVar7 = (this->Bounds).AllocatorInstance.Data;
                      pFVar3 = pFVar7 + (longlong)(int)uVar24 * 0x20;
                      auVar26._4_4_ = -(uint)((local_100->Max).m128_f32[1] < *(float *)(pFVar3 + 4))
                      ;
                      auVar26._0_4_ = -(uint)((local_100->Max).m128_f32[0] < *(float *)pFVar3);
                      auVar26._8_4_ = -(uint)((local_100->Max).m128_f32[2] < *(float *)(pFVar3 + 8))
                      ;
                      auVar26._12_4_ =
                           -(uint)((local_100->Max).m128_f32[3] < *(float *)(pFVar3 + 0xc));
                      iVar12 = movmskps(uVar13,auVar26);
                      _Var30 = GlobalVectorConstants::IntAllMask;
                      if (iVar12 == 0) {
                        pFVar7 = pFVar7 + (longlong)(int)uVar24 * 0x20 + 0x10;
                        auVar27._4_4_ =
                             -(uint)(*(float *)(pFVar7 + 4) < (local_100->Min).m128_f32[1]);
                        auVar27._0_4_ = -(uint)(*(float *)pFVar7 < (local_100->Min).m128_f32[0]);
                        auVar27._8_4_ =
                             -(uint)(*(float *)(pFVar7 + 8) < (local_100->Min).m128_f32[2]);
                        auVar27._12_4_ =
                             -(uint)(*(float *)(pFVar7 + 0xc) < (local_100->Min).m128_f32[3]);
                        iVar12 = movmskps(0,auVar27);
                        if (iVar12 == 0) {
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                    (local_f8,(int *)(lVar6 + 0x10 + lVar15));
                          _Var30 = GlobalVectorConstants::IntAllMask;
                        }
                      }
                    }
                  }
                  uVar24 = 0;
                  if ((int)uVar19 < (int)this->_padding_) {
                    uVar24 = uVar21;
                  }
                  if ((uVar24 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), _Var30 = GlobalVectorConstants::IntAllMask, bVar10)) {
                    pcVar8 = (code *)swi(3);
                    pTVar16 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
                    return pTVar16;
                  }
                  iVar22 = local_114;
                  iVar18 = local_124;
                  iVar12 = local_118;
                  uVar19 = *(uint *)(lVar15 + 0x18 + this->_padding_);
                }
                iVar14 = local_11c + 1;
                auVar31._4_4_ = iVar12;
                auVar31._0_4_ = iVar18;
                auVar31._8_4_ = local_f0._8_4_;
                iVar20 = iVar22;
                local_11c = iVar14;
              } while (iVar14 <= (int)local_f0._8_4_);
            }
            iVar22 = iVar22 + 1;
            auVar31._4_4_ = local_f0._4_4_;
            auVar31._0_4_ = local_110;
            local_114 = iVar22;
          } while (iVar22 <= (int)local_f0._4_4_);
        }
        iVar18 = iVar18 + 1;
        param_1 = local_100;
        uVar19 = local_120;
        local_124 = iVar18;
      } while (iVar18 <= auVar31._0_4_);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

// FindAllIntersections @ 143e1ec50

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::THierarchicalSpatialHash<int,double>::FindAllIntersections
          (THierarchicalSpatialHash<int,double> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FVectorAABB *param_1,
          TFunctionRef<bool___cdecl(int)> *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  TMap<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_> *pTVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  undefined1 *puVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  __m128i _Var33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 local_128 [4];
  int local_124;
  uint local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  undefined4 local_108 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_100;
  undefined1 local_f8 [16];
  TMap<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_> *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  int local_b4;
  TFunctionRef<bool___cdecl(int)> *local_b0;
  FVectorAABB *local_a8;
  TMap<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_> *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  undefined7 extraout_var;
  
  puVar1 = &(this->UsedLods).field_0x10;
  iStack_e0 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar11 = *(int *)&(this->UsedLods).field_0x28;
  local_e8 = &this->UsedLods;
  uStack_dc = 1;
  iStack_cc = 0;
  if (iVar11 != 0) {
    puVar23 = *(uint **)&(this->UsedLods).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar19 = *puVar23;
    while (uVar19 == 0) {
      lVar14 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar11;
      if ((int)((iVar11 + -1 >> 0x1f & 0x1fU) + iVar11 + -1) >> 5 < iStack_e0) goto LAB_143e1ed1d;
      uVar19 = puVar23[lVar14 + 1];
    }
    uStack_dc = -uVar19 & uVar19;
    uVar3 = (ulonglong)uStack_dc * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_b8 = (int)lVar14;
    iStack_cc = local_c8 + -1 + local_b8;
    if (iVar11 < iStack_cc) {
      iStack_cc = iVar11;
    }
  }
LAB_143e1ed1d:
  uVar19 = *(uint *)&(this->UsedLods).field_0x28;
  iStack_c0 = *(int *)&(this->UsedLods).field_0x8 - *(int *)&(this->UsedLods).field_0x34;
  uVar24 = uVar19 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uStack_dc,iStack_e0);
  uStack_d0 = 0xffffffff;
  TStack_98.CurrentBitIndex = iStack_cc;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  auVar30._0_4_ = (int)uVar19 >> 5;
  TStack_98._28_4_ = iStack_cc;
  TStack_98.BaseBitIndex = local_c8;
  uStack_78 = CONCAT44(uStack_bc,iStack_c0);
  local_120 = uVar19;
  local_100 = __return_storage_ptr__;
  local_d8 = puVar1;
  iStack_c4 = iStack_cc;
  local_b0 = param_2;
  local_a8 = param_1;
  local_a0 = local_e8;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar11 < (int)uVar19)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar15 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar15;
  }
  uVar21 = *(uint *)&(this->UsedLods).field_0x28;
  if (uVar19 != uVar21) {
    puVar17 = *(undefined1 **)&(this->UsedLods).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar17 + (longlong)auVar30._0_4_ * 4);
    while (uVar19 == 0) {
      lVar14 = (longlong)auVar30._0_4_;
      uVar24 = uVar24 + 0x20;
      auVar30._0_4_ = auVar30._0_4_ + 1;
      uVar19 = uVar21;
      local_120 = uVar21;
      if ((int)(((int)(uVar21 - 1) >> 0x1f & 0x1fU) + (uVar21 - 1)) >> 5 < auVar30._0_4_)
      goto LAB_143e1ee30;
      uVar19 = *(uint *)(puVar17 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_b4 = (int)lVar14;
    uVar19 = local_b4 + -1 + uVar24;
    local_120 = uVar19;
    if ((int)uVar21 < (int)uVar19) {
      uVar19 = uVar21;
      local_120 = uVar21;
    }
  }
LAB_143e1ee30:
  do {
    pTVar8 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      local_128[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if (((TStack_98.CurrentBitIndex == uVar19) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->UsedLods).field_0x10))
       && (pTVar8 == &this->UsedLods)) {
      return local_100;
    }
    lVar14 = *(longlong *)pTVar8;
    uVar4 = *(undefined8 *)(lVar14 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18);
    iVar11 = *(int *)(lVar14 + (longlong)TStack_98.CurrentBitIndex * 0x18);
    uVar37 = (undefined4)uVar4;
    uVar38 = (undefined4)((ulonglong)uVar4 >> 0x20);
    auVar28._8_4_ = uVar37;
    auVar28._0_8_ = uVar4;
    auVar28._12_4_ = uVar38;
    auVar28 = divpd(*(undefined1 (*) [16])(param_1->Min).XY.m128d_f64,auVar28);
    auVar29._8_4_ = uVar37;
    auVar29._0_8_ = uVar4;
    auVar29._12_4_ = uVar38;
    auVar34 = divpd(*(undefined1 (*) [16])(param_1->Min).ZW.m128d_f64,auVar29);
    auVar35._8_4_ = uVar37;
    auVar35._0_8_ = uVar4;
    auVar35._12_4_ = uVar38;
    auVar29 = divpd(*(undefined1 (*) [16])(param_1->Max).XY.m128d_f64,auVar35);
    auVar7._8_4_ = uVar37;
    auVar7._0_8_ = uVar4;
    auVar7._12_4_ = uVar38;
    auVar35 = divpd(*(undefined1 (*) [16])(param_1->Max).ZW.m128d_f64,auVar7);
    auVar30._0_4_ =
         (int)((auVar28._0_8_ - GlobalVectorConstants::DoubleOneHalf.XY.m128d_f64[0]) +
              auVar28._0_8_) >> 1;
    auVar30._4_4_ =
         (int)((auVar28._8_8_ - GlobalVectorConstants::DoubleOneHalf.XY.m128d_f64[1]) +
              auVar28._8_8_) >> 1;
    auVar30._8_4_ =
         (int)((auVar34._0_8_ - GlobalVectorConstants::DoubleOneHalf.ZW.m128d_f64[0]) +
              auVar34._0_8_) >> 1;
    auVar30._12_4_ =
         (int)((auVar34._8_8_ - GlobalVectorConstants::DoubleOneHalf.ZW.m128d_f64[1]) +
              auVar34._8_8_) >> 1;
    auVar34._0_4_ =
         (int)((auVar29._0_8_ - GlobalVectorConstants::DoubleOneHalf.XY.m128d_f64[0]) +
              auVar29._0_8_) >> 1;
    auVar34._4_4_ =
         (int)((auVar29._8_8_ - GlobalVectorConstants::DoubleOneHalf.XY.m128d_f64[1]) +
              auVar29._8_8_) >> 1;
    auVar34._8_4_ =
         (int)((auVar35._0_8_ - GlobalVectorConstants::DoubleOneHalf.ZW.m128d_f64[0]) +
              auVar35._0_8_) >> 1;
    auVar34._12_4_ =
         (int)((auVar35._8_8_ - GlobalVectorConstants::DoubleOneHalf.ZW.m128d_f64[1]) +
              auVar35._8_8_) >> 1;
    local_124 = auVar30._0_4_;
    local_118 = iVar11;
    local_110 = auVar34._0_4_;
    local_f8 = auVar34;
    local_70 = auVar30;
    if (auVar30._0_4_ <= auVar34._0_4_) {
      do {
        local_114 = local_70._4_4_;
        iVar22 = local_70._4_4_;
        local_124 = auVar30._0_4_;
        if ((int)local_70._4_4_ <= auVar34._4_4_) {
          do {
            local_11c = local_70._8_4_;
            auVar34._4_4_ = iVar11;
            auVar34._0_4_ = auVar30._0_4_;
            iVar20 = iVar22;
            iVar13 = local_70._8_4_;
            local_114 = iVar22;
            if ((int)local_70._8_4_ <= auVar34._8_4_) {
              do {
                auVar36._12_4_ = auVar34._4_4_;
                auVar36._8_4_ = iVar13;
                iVar11 = (int)this->_padding_;
                auVar36._4_4_ = iVar20;
                auVar36._0_4_ = auVar34._0_4_;
                auVar30 = pmulld(auVar36,(undefined1  [16])
                                         `public:_unsigned_int___cdecl_Chaos::TSpatialHashGridBase<int>::FHashIndex::GetTypeHash(void)const___ptr64'
                                         ::__l2::Multiplier);
                uVar24 = (auVar30._0_4_ ^ auVar30._4_4_ ^ auVar30._8_4_ ^ auVar30._12_4_) &
                         iVar11 - 1U;
                uVar19 = 0;
                if ((int)uVar24 < iVar11) {
                  uVar19 = ~uVar24 >> 0x1f;
                }
                local_11c = iVar13;
                if ((uVar19 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  pTVar15 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                  return pTVar15;
                }
                uVar19 = *(uint *)(this->_padding_ + (longlong)(int)uVar24 * 4);
                iVar22 = iVar20;
                _Var33 = GlobalVectorConstants::IntAllMask;
                auVar30._0_4_ = local_124;
                iVar11 = local_118;
                while (local_124 = auVar30._0_4_, local_118 = iVar11, uVar19 != 0xffffffff) {
                  uVar21 = ~uVar19 >> 0x1f;
                  uVar24 = 0;
                  if ((int)uVar19 < (int)this->_padding_) {
                    uVar24 = uVar21;
                  }
                  if ((uVar24 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), _Var33 = GlobalVectorConstants::IntAllMask, bVar9)) {
                    pcVar6 = (code *)swi(3);
                    pTVar15 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                    return pTVar15;
                  }
                  lVar14 = (longlong)(int)uVar19 * 0x20;
                  piVar2 = (int *)(lVar14 + this->_padding_);
                  auVar25._0_4_ = -(uint)(auVar34._0_4_ == *piVar2) ^ _Var33.m128i_u32[0];
                  auVar25._4_4_ = -(uint)(iVar20 == piVar2[1]) ^ _Var33.m128i_u32[1];
                  auVar25._8_4_ = -(uint)(iVar13 == piVar2[2]) ^ _Var33.m128i_u32[2];
                  auVar25._12_4_ = -(uint)(auVar34._4_4_ == piVar2[3]) ^ _Var33.m128i_u32[3];
                  iVar11 = movmskps((int)this->_padding_,auVar25);
                  if (iVar11 == 0) {
                    uVar24 = 0;
                    if ((int)uVar19 < (int)this->_padding_) {
                      uVar24 = uVar21;
                    }
                    if ((uVar24 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar6 = (code *)swi(3);
                      pTVar15 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                      return pTVar15;
                    }
                    lVar5 = this->_padding_;
                    local_108[0] = *(undefined4 *)(lVar5 + 0x10 + lVar14);
                    cVar10 = (**(code **)local_b0)(*(undefined8 *)&local_b0->field_0x8,local_108);
                    _Var33 = GlobalVectorConstants::IntAllMask;
                    if (cVar10 != '\0') {
                      uVar24 = *(uint *)(lVar5 + 0x14 + lVar14);
                      uVar16 = ~uVar24 >> 0x1f;
                      uVar12 = 0;
                      if ((int)uVar24 < (this->Bounds).ArrayNum) {
                        uVar12 = uVar16;
                      }
                      if (uVar12 == 0) {
                        uVar16 = 0x506106c8;
                        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        uVar12 = (uint)CONCAT71(extraout_var,bVar9);
                        if (bVar9) {
                          pcVar6 = (code *)swi(3);
                          pTVar15 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                          return pTVar15;
                        }
                      }
                      param_1 = local_a8;
                      pFVar18 = (this->Bounds).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x40
                      ;
                      auVar26._8_8_ =
                           -(ulonglong)
                            ((local_a8->Max).ZW.m128d_f64[1] < *(double *)(pFVar18 + 0x18));
                      auVar26._0_8_ =
                           -(ulonglong)
                            ((local_a8->Max).ZW.m128d_f64[0] < *(double *)(pFVar18 + 0x10));
                      auVar31._8_8_ =
                           -(ulonglong)((local_a8->Max).XY.m128d_f64[1] < *(double *)(pFVar18 + 8));
                      auVar31._0_8_ =
                           -(ulonglong)((local_a8->Max).XY.m128d_f64[0] < *(double *)pFVar18);
                      uVar24 = movmskpd(uVar16,auVar26);
                      iVar11 = movmskpd(uVar12,auVar31);
                      _Var33 = GlobalVectorConstants::IntAllMask;
                      if ((uVar24 & 0x3fffffff) == 0 && iVar11 == 0) {
                        auVar27._8_8_ =
                             -(ulonglong)
                              (*(double *)(pFVar18 + 0x38) < (local_a8->Min).ZW.m128d_f64[1]);
                        auVar27._0_8_ =
                             -(ulonglong)
                              (*(double *)(pFVar18 + 0x30) < (local_a8->Min).ZW.m128d_f64[0]);
                        auVar32._8_8_ =
                             -(ulonglong)
                              (*(double *)(pFVar18 + 0x28) < (local_a8->Min).XY.m128d_f64[1]);
                        auVar32._0_8_ =
                             -(ulonglong)
                              (*(double *)(pFVar18 + 0x20) < (local_a8->Min).XY.m128d_f64[0]);
                        uVar24 = movmskpd(0,auVar27);
                        iVar11 = movmskpd(iVar11,auVar32);
                        if ((uVar24 & 0x3fffffff) == 0 && iVar11 == 0) {
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                    (local_100,(int *)(lVar5 + 0x10 + lVar14));
                          _Var33 = GlobalVectorConstants::IntAllMask;
                        }
                      }
                    }
                  }
                  uVar24 = 0;
                  if ((int)uVar19 < (int)this->_padding_) {
                    uVar24 = uVar21;
                  }
                  if ((uVar24 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), _Var33 = GlobalVectorConstants::IntAllMask, bVar9)) {
                    pcVar6 = (code *)swi(3);
                    pTVar15 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                    return pTVar15;
                  }
                  iVar22 = local_114;
                  auVar30._0_4_ = local_124;
                  iVar11 = local_118;
                  uVar19 = *(uint *)(lVar14 + 0x18 + this->_padding_);
                }
                iVar13 = local_11c + 1;
                auVar34._4_4_ = iVar11;
                auVar34._0_4_ = auVar30._0_4_;
                auVar34._8_4_ = local_f8._8_4_;
                iVar20 = iVar22;
                local_11c = iVar13;
              } while (iVar13 <= (int)local_f8._8_4_);
            }
            iVar22 = iVar22 + 1;
            auVar34._4_4_ = local_f8._4_4_;
            auVar34._0_4_ = local_110;
            local_114 = iVar22;
          } while (iVar22 <= (int)local_f8._4_4_);
        }
        auVar30._0_4_ = auVar30._0_4_ + 1;
        uVar19 = local_120;
        local_124 = auVar30._0_4_;
      } while (auVar30._0_4_ <= auVar34._0_4_);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

// LodForCellSize @ 143e34f20

int __cdecl Chaos::THierarchicalSpatialHash<int,float>::LodForCellSize(float param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 <= __real_3f000000) {
    uVar3 = (int)ROUND(__real_40000000 / param_1 - __real_3f000000) >> 1;
    iVar4 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    iVar5 = 0;
    if (uVar3 != 0) {
      iVar5 = iVar4;
    }
    return -iVar5;
  }
  iVar5 = -((int)ROUND(__real_bf000000 - (param_1 + param_1)) >> 1);
  iVar4 = 1;
  if (iVar5 != 0) {
    iVar4 = iVar5;
  }
  uVar1 = (ulonglong)(iVar4 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return (int)lVar2;
}

// LodForCellSize @ 143e34f90

int __cdecl Chaos::THierarchicalSpatialHash<int,double>::LodForCellSize(double param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 <= __real_3fe0000000000000) {
    uVar3 = (int)ROUND(__real_4000000000000000 / param_1 - __real_3fe0000000000000) >> 1;
    iVar4 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    iVar5 = 0;
    if (uVar3 != 0) {
      iVar5 = iVar4;
    }
    return -iVar5;
  }
  iVar5 = -((int)ROUND(__real_bfe0000000000000 - (param_1 + param_1)) >> 1);
  iVar4 = 1;
  if (iVar5 != 0) {
    iVar4 = iVar5;
  }
  uVar1 = (ulonglong)(iVar4 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return (int)lVar2;
}

// Initialize<TArray<Chaos::FWeightedLatticeBvEntry,TSizedDefaultAllocator<32>_>_> @ 143e9c0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::THierarchicalSpatialHash<int,double>::
Initialize<TArray<Chaos::FWeightedLatticeBvEntry,TSizedDefaultAllocator<32>_>_>
          (THierarchicalSpatialHash<int,double> *this,
          TArray<Chaos::FWeightedLatticeBvEntry,TSizedDefaultAllocator<32>_> *param_1,double param_2
          )

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *_Dst;
  void *_Dst_00;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStackY_148 [32];
  int local_108;
  undefined1 local_104 [20];
  double local_f0;
  code *local_e8;
  THierarchicalSpatialHash<int,double> **local_e0;
  int *local_d8;
  double *local_d0;
  THierarchicalSpatialHash<int,double> *local_c8;
  TArray<Chaos::FWeightedLatticeBvEntry,TSizedDefaultAllocator<32>_> *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  char *local_a8;
  _RTL_CRITICAL_SECTION *local_a0;
  char local_98 [24];
  _RTL_CRITICAL_SECTION local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  bVar12 = -1 < CpuChannel->Enabled;
  local_104._4_8_ = param_1;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::THierarchicalSpatialHash<int,double>::Initialize<TArray<Chaos::FWeightedLatticeBvEntry,TSizedDefaultAllocator<32>_>_>(TArray<Chaos::FWeightedLatticeBvEntry,TSizedDefaultAllocator<32>_>_const&___ptr64,double)___ptr64'
                ::__l2::__CpuProfilerEventSpecId334,"HierarchicalSpatialHash_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\HierarchicalSpatialHash.h"
               ,0x14e);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::THierarchicalSpatialHash<int,double>::Initialize<TArray<Chaos::FWeightedLatticeBvEntry,TSizedDefaultAllocator<32>_>_>(TArray<Chaos::FWeightedLatticeBvEntry,TSizedDefaultAllocator<32>_>_const&___ptr64,double)___ptr64'
               ::__l2::__CpuProfilerEventSpecId334);
  }
  iVar9 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,(int *)((longlong)&this->_padding_ + 4));
  }
  plVar1 = &this->_padding_;
  iVar9 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  plVar2 = &this->_padding_;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,(ForAnyElementType *)plVar1,0,(int *)((longlong)&this->_padding_ + 4));
  }
  local_104._12_8_ = &this->UsedLods;
  TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>
              *)local_104._12_8_);
  uVar4 = param_1->ArrayNum;
  iVar9 = (this->Bounds).ArrayNum;
  piVar3 = &(this->Bounds).ArrayNum;
  if (iVar9 < (int)uVar4) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,uVar4 - iVar9,&(this->Bounds).AllocatorInstance,piVar3,
               &(this->Bounds).ArrayMax);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar9) {
      uVar11 = iVar9 - uVar4;
      if (((int)(uVar11 | uVar4) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar11 != 0) {
        _Dst = (this->Bounds).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x40;
        iVar9 = (*piVar3 - uVar4) - uVar11;
        if (iVar9 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar11 * 0x40,(longlong)iVar9 << 6);
        }
        *piVar3 = *piVar3 - uVar11;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,&(this->Bounds).AllocatorInstance,*piVar3,&(this->Bounds).ArrayMax);
      }
    }
  }
  uVar7 = local_104._4_8_;
  TSpatialHashGridBase<int>::FHashMap::PreallocateElementsForConcurrentAdd
            ((FHashMap *)this,*(int *)(local_104._4_8_ + 8) * 8,*(int *)(local_104._4_8_ + 8) * 2);
  if (param_2 <= 0.0) {
    local_b8 = -0x80000000;
  }
  else {
    local_b8 = LodForCellSize(param_2);
  }
  local_98[0x10] = '\0';
  local_98[0x11] = '\0';
  local_98[0x12] = '\0';
  local_98[0x13] = '\0';
  local_98[0x14] = 0;
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  local_98[8] = '\0';
  local_98[9] = '\0';
  local_98[10] = '\0';
  local_98[0xb] = '\0';
  local_98[0xc] = '\0';
  local_98[0xd] = '\0';
  local_98[0xe] = '\0';
  local_98[0xf] = '\0';
  InitializeCriticalSectionAndSpinCount(&local_80,4000);
  local_a8 = local_98;
  local_a0 = &local_80;
  local_e0 = &local_c8;
  local_c0 = (TArray<Chaos::FWeightedLatticeBvEntry,TSizedDefaultAllocator<32>_> *)uVar7;
  local_e8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::THierarchicalSpatialHash<int,double>::Initialize<TArray<Chaos::FWeightedLatticeBvEntry,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_b4 = 10;
  local_b0 = 0xfffffff6;
  local_c8 = this;
  PhysicsParallelFor(*(int *)(uVar7 + 8),(TFunctionRef<void___cdecl(int)> *)&local_e8,false);
  uVar4 = (uint)this->_padding_;
  iVar9 = (int)*plVar2;
  if (iVar9 < (int)uVar4) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,uVar4 - iVar9,(ForAnyElementType *)plVar1,(int *)plVar2,
               (int *)((longlong)&this->_padding_ + 4));
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar9) {
      uVar11 = iVar9 - uVar4;
      if (((int)(uVar11 | uVar4) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar11 != 0) {
        _Dst_00 = (void *)(*plVar1 + (longlong)(int)uVar4 * 0x20);
        iVar9 = ((int)*plVar2 - uVar11) - uVar4;
        if (iVar9 != 0) {
          memmove(_Dst_00,(void *)((longlong)_Dst_00 + (longlong)(int)uVar11 * 0x20),
                  (longlong)iVar9 << 5);
        }
        *(uint *)plVar2 = (int)*plVar2 - uVar11;
      }
    }
  }
  uVar7 = local_104._12_8_;
  dVar6 = __real_3ff0000000000000;
  local_108 = -10;
  do {
    if (local_98[local_108 + 10] != '\0') {
      if (local_108 < 0) {
        local_f0 = dVar6 / (double)(ulonglong)(1L << (-(byte)local_108 & 0x3f));
      }
      else {
        uVar10 = 1L << ((byte)local_108 & 0x3f);
        if ((longlong)uVar10 < 0) {
          local_f0 = (double)uVar10;
        }
        else {
          local_f0 = (double)(longlong)uVar10;
        }
      }
      local_d8 = &local_108;
      local_d0 = &local_f0;
      TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,double_&&>_>
                ((TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>
                  *)uVar7,(TPairInitializer<int_const_&,double_&&> *)local_104,(bool *)&local_d8);
    }
    local_108 = local_108 + 1;
  } while (local_108 < 0xb);
  DeleteCriticalSection(&local_80);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 143eb2ae0

void __thiscall
`Chaos::THierarchicalSpatialHash<int,double>::
Initialize<TArray<Chaos::FWeightedLatticeBvEntry,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  FWeightedLatticeBvEntry *this_00;
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  double dVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int local_138 [2];
  FPayloadAndBounds local_130;
  TVector<int,3>_u_0 local_128;
  TVector<int,3>_u_0 local_118;
  TPairInitializer<int_const_&,double_const_&> local_108;
  int *local_f8;
  double **local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  FVectorAABB local_c8 [2];
  
  plVar1 = *(longlong **)((longlong)this + 8);
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (FWeightedLatticeBvEntry *)(*plVar1 + (longlong)param_1 * 0x18);
  Chaos::FWeightedLatticeBvEntry::VectorAABB(this_00,local_c8);
  local_e8 = local_c8[0].Max.XY.m128d_f64[0] - local_c8[0].Min.XY.m128d_f64[0];
  dStack_e0 = local_c8[0].Max.XY.m128d_f64[1] - local_c8[0].Min.XY.m128d_f64[1];
  local_d8 = local_c8[0].Max.ZW.m128d_f64[0] - local_c8[0].Min.ZW.m128d_f64[0];
  if (((local_e8 <= dStack_e0) || (dVar10 = local_e8, local_e8 <= local_d8)) &&
     (dVar10 = local_d8, local_d8 <= dStack_e0)) {
    dVar10 = dStack_e0;
  }
  iVar7 = Chaos::THierarchicalSpatialHash<int,double>::LodForCellSize(dVar10);
  if (iVar7 < *(int *)((longlong)this + 0x10)) {
    iVar7 = *(int *)((longlong)this + 0x10);
  }
  local_138[0] = iVar7;
  local_108.Value = (double *)Chaos::THierarchicalSpatialHash<int,double>::CellSizeForLod(iVar7);
  uVar9 = SUB84(local_108.Value,0);
  uVar11 = (undefined4)((ulonglong)local_108.Value >> 0x20);
  auVar12._8_4_ = uVar9;
  auVar12._0_8_ = local_108.Value;
  auVar12._12_4_ = uVar11;
  auVar12 = divpd((undefined1  [16])local_c8[0].Min.XY.m128d_f64,auVar12);
  local_130.Payload =
       (*(int *)&(this_00->Lattice->Grid).field_0x34 * (this_00->CellIndex).field0_0x0._s_0.X +
       (this_00->CellIndex).field0_0x0._s_0.Y) * *(int *)&(this_00->Lattice->Grid).field_0x38 +
       (this_00->CellIndex).field0_0x0._s_0.Z;
  auVar13._8_4_ = uVar9;
  auVar13._0_8_ = local_108.Value;
  auVar13._12_4_ = uVar11;
  auVar13 = divpd((undefined1  [16])local_c8[0].Min.ZW.m128d_f64,auVar13);
  auVar14._8_4_ = uVar9;
  auVar14._0_8_ = local_108.Value;
  auVar14._12_4_ = uVar11;
  auVar14 = divpd((undefined1  [16])local_c8[0].Max.ZW.m128d_f64,auVar14);
  local_118._s_0.X =
       (int)((auVar12._0_8_ - GlobalVectorConstants::DoubleOneHalf.XY.m128d_f64[0]) + auVar12._0_8_)
       >> 1;
  local_118._s_0.Y =
       (int)((auVar12._8_8_ - GlobalVectorConstants::DoubleOneHalf.XY.m128d_f64[1]) + auVar12._8_8_)
       >> 1;
  local_118._s_0.Z =
       (int)((auVar13._0_8_ - GlobalVectorConstants::DoubleOneHalf.ZW.m128d_f64[0]) + auVar13._0_8_)
       >> 1;
  auVar4._8_4_ = uVar9;
  auVar4._0_8_ = local_108.Value;
  auVar4._12_4_ = uVar11;
  auVar12 = divpd((undefined1  [16])local_c8[0].Max.XY.m128d_f64,auVar4);
  local_128._s_0.X =
       (int)((auVar12._0_8_ - GlobalVectorConstants::DoubleOneHalf.XY.m128d_f64[0]) + auVar12._0_8_)
       >> 1;
  local_128._s_0.Y =
       (int)((auVar12._8_8_ - GlobalVectorConstants::DoubleOneHalf.XY.m128d_f64[1]) + auVar12._8_8_)
       >> 1;
  local_128._s_0.Z =
       (int)((auVar14._0_8_ - GlobalVectorConstants::DoubleOneHalf.ZW.m128d_f64[0]) + auVar14._0_8_)
       >> 1;
  local_130.BoundsLookupIdx = param_1;
  Chaos::TSpatialHashGridBase<int>::FHashMap::ConcurrentAddElementRange
            (*(FHashMap **)this,(TVector<int,3> *)&local_118._s_0,(TVector<int,3> *)&local_128._s_0,
             iVar7,&local_130);
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar2 + 0x80)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)(lVar2 + 0x78);
  lVar8 = (longlong)param_1 * 0x40;
  *(double (*) [2])(lVar8 + lVar2) = local_c8[0].Min.XY.m128d_f64;
  *(double (*) [2])(lVar8 + 0x10 + lVar2) = local_c8[0].Min.ZW.m128d_f64;
  *(double (*) [2])(lVar8 + 0x20 + lVar2) = local_c8[0].Max.XY.m128d_f64;
  *(double (*) [2])(lVar8 + 0x30 + lVar2) = local_c8[0].Max.ZW.m128d_f64;
  if (local_138[0] + 10U < 0x15) {
    *(undefined1 *)((ulonglong)(local_138[0] + 10U) + *(longlong *)((longlong)this + 0x20)) = 1;
  }
  else {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x28));
    local_f8 = local_138;
    local_f0 = &local_108.Value;
    TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,double_const_&>_>
              ((TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>
                *)(*(longlong *)this + 0x28),&local_108,(bool *)&local_f8);
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x28));
  }
  return;
}

// FindAllIntersections @ 143ebd9a0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::THierarchicalSpatialHash<int,double>::FindAllIntersections
          (THierarchicalSpatialHash<int,double> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,TVector<double,3> *param_1
          )

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  TMap<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_> *pTVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  undefined7 extraout_var;
  uint uVar13;
  undefined1 *puVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  __m128i _Var28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int iVar31;
  int iVar32;
  int iVar33;
  undefined1 local_e8 [4];
  uint local_e4;
  TMap<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_> *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  TMap<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_> *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  
  puVar1 = &(this->UsedLods).field_0x10;
  auVar6 = *(undefined1 (*) [16])param_1;
  local_e0 = &this->UsedLods;
  dVar4 = *(double *)&param_1->field_0x10;
  uStack_d4 = 1;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iStack_d8 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar10 = *(int *)&(this->UsedLods).field_0x28;
  local_c0 = 0;
  iStack_c4 = iStack_d8;
  if (iVar10 != 0) {
    puVar19 = *(uint **)&(this->UsedLods).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar18 = *puVar19;
    local_c0 = 0;
    iStack_d8 = 0;
    while (uVar18 == 0) {
      lVar11 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      iStack_c4 = iVar10;
      if ((int)((iVar10 + -1 >> 0x1f & 0x1fU) + iVar10 + -1) >> 5 < iStack_d8) goto LAB_143ebda6d;
      uVar18 = puVar19[lVar11 + 1];
    }
    uStack_d4 = -uVar18 & uVar18;
    uVar3 = (ulonglong)uStack_d4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_b0 = (int)lVar11;
    iStack_c4 = local_c0 + -1 + local_b0;
    if (iVar10 < iStack_c4) {
      iStack_c4 = iVar10;
    }
  }
LAB_143ebda6d:
  uVar18 = *(uint *)&(this->UsedLods).field_0x28;
  iStack_b8 = *(int *)&(this->UsedLods).field_0x8 - *(int *)&(this->UsedLods).field_0x34;
  uVar20 = uVar18 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uStack_d4,iStack_d8);
  uStack_c8 = 0xffffffff;
  TStack_98.CurrentBitIndex = iStack_c4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_98._28_4_ = iStack_c4;
  TStack_98.BaseBitIndex = local_c0;
  uStack_78 = CONCAT44(uStack_b4,iStack_b8);
  local_e4 = uVar18;
  local_d0 = puVar1;
  iStack_bc = iStack_c4;
  local_a0 = local_e0;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar10 < (int)uVar18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
    return pTVar12;
  }
  uVar17 = *(uint *)&(this->UsedLods).field_0x28;
  if (uVar18 != uVar17) {
    puVar14 = *(undefined1 **)&(this->UsedLods).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      lVar11 = (longlong)iVar16;
      uVar20 = uVar20 + 0x20;
      iVar16 = iVar16 + 1;
      uVar18 = uVar17;
      local_e4 = uVar17;
      if ((int)(((int)(uVar17 - 1) >> 0x1f & 0x1fU) + (uVar17 - 1)) >> 5 < iVar16)
      goto LAB_143ebdb80;
      uVar18 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_ac = (int)lVar11;
    uVar18 = local_ac + -1 + uVar20;
    local_e4 = uVar18;
    if ((int)uVar17 < (int)uVar18) {
      uVar18 = uVar17;
      local_e4 = uVar17;
    }
  }
LAB_143ebdb80:
  do {
    pTVar8 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      local_e8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_e8);
    }
    if (((TStack_98.CurrentBitIndex == uVar18) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->UsedLods).field_0x10))
       && (pTVar8 == &this->UsedLods)) {
      return __return_storage_ptr__;
    }
    iVar10 = (int)this->_padding_;
    lVar11 = *(longlong *)pTVar8;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = dVar4;
    uVar5 = *(undefined8 *)(lVar11 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18);
    auVar30._8_8_ = uVar5;
    auVar30._0_8_ = uVar5;
    auVar25 = divpd(auVar6,auVar30);
    auVar30 = divpd(auVar29,auVar30);
    iVar16 = *(int *)(lVar11 + (longlong)TStack_98.CurrentBitIndex * 0x18);
    iVar31 = (int)((auVar25._0_8_ - GlobalVectorConstants::DoubleOneHalf.XY.m128d_f64[0]) +
                  auVar25._0_8_) >> 1;
    iVar32 = (int)((auVar25._8_8_ - GlobalVectorConstants::DoubleOneHalf.XY.m128d_f64[1]) +
                  auVar25._8_8_) >> 1;
    iVar33 = (int)((auVar30._0_8_ - GlobalVectorConstants::DoubleOneHalf.ZW.m128d_f64[0]) +
                  auVar30._0_8_) >> 1;
    auVar25._12_4_ = iVar16;
    auVar25._8_4_ = iVar33;
    auVar25._4_4_ = iVar32;
    auVar25._0_4_ = iVar31;
    auVar30 = pmulld(auVar25,(undefined1  [16])
                             `public:_unsigned_int___cdecl_Chaos::TSpatialHashGridBase<int>::FHashIndex::GetTypeHash(void)const___ptr64'
                             ::__l2::Multiplier);
    uVar17 = (auVar30._0_4_ ^ auVar30._4_4_ ^ auVar30._8_4_ ^ auVar30._12_4_) & iVar10 - 1U;
    uVar20 = 0;
    if ((int)uVar17 < iVar10) {
      uVar20 = ~uVar17 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
      return pTVar12;
    }
    uVar20 = *(uint *)(this->_padding_ + (longlong)(int)uVar17 * 4);
    _Var28 = GlobalVectorConstants::IntAllMask;
    while (uVar20 != 0xffffffff) {
      uVar17 = ~uVar20 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar20 < (int)this->_padding_) {
        uVar18 = uVar17;
      }
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         _Var28 = GlobalVectorConstants::IntAllMask, bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar12;
      }
      lVar11 = (longlong)(int)uVar20 * 0x20;
      piVar2 = (int *)(this->_padding_ + lVar11);
      auVar22._0_4_ = -(uint)(iVar31 == *piVar2) ^ _Var28.m128i_u32[0];
      auVar22._4_4_ = -(uint)(iVar32 == piVar2[1]) ^ _Var28.m128i_u32[1];
      auVar22._8_4_ = -(uint)(iVar33 == piVar2[2]) ^ _Var28.m128i_u32[2];
      auVar22._12_4_ = -(uint)(iVar16 == piVar2[3]) ^ _Var28.m128i_u32[3];
      iVar10 = movmskps((int)this->_padding_,auVar22);
      if (iVar10 == 0) {
        uVar18 = 0;
        if ((int)uVar20 < (int)this->_padding_) {
          uVar18 = uVar17;
        }
        if ((uVar18 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , _Var28 = GlobalVectorConstants::IntAllMask, bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar12;
        }
        local_a8 = *(undefined8 *)(lVar11 + 0x10 + this->_padding_);
        uVar21 = (uint)((ulonglong)local_a8 >> 0x20);
        uVar13 = ~uVar21 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar21 < (this->Bounds).ArrayNum) {
          uVar18 = uVar13;
        }
        if (uVar18 == 0) {
          uVar13 = 0x506106c8;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar18 = (uint)CONCAT71(extraout_var,bVar9);
          _Var28 = GlobalVectorConstants::IntAllMask;
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar12;
          }
        }
        pFVar15 = (this->Bounds).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x40;
        auVar23._8_8_ = -(ulonglong)(0.0 < *(double *)(pFVar15 + 0x18));
        auVar23._0_8_ = -(ulonglong)(dVar4 < *(double *)(pFVar15 + 0x10));
        auVar26._8_8_ = -(ulonglong)(auVar6._8_8_ < *(double *)(pFVar15 + 8));
        auVar26._0_8_ = -(ulonglong)(auVar6._0_8_ < *(double *)pFVar15);
        uVar13 = movmskpd(uVar13,auVar23);
        iVar10 = movmskpd(uVar18,auVar26);
        if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
          auVar24._8_8_ = -(ulonglong)(*(double *)(pFVar15 + 0x38) < 0.0);
          auVar24._0_8_ = -(ulonglong)(*(double *)(pFVar15 + 0x30) < dVar4);
          uVar18 = movmskpd(0,auVar24);
          auVar27._8_8_ = -(ulonglong)(*(double *)(pFVar15 + 0x28) < auVar6._8_8_);
          auVar27._0_8_ = -(ulonglong)(*(double *)(pFVar15 + 0x20) < auVar6._0_8_);
          iVar10 = movmskpd(iVar10,auVar27);
          if ((uVar18 & 0x3fffffff) == 0 && iVar10 == 0) {
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (__return_storage_ptr__,(int *)&local_a8);
            _Var28 = GlobalVectorConstants::IntAllMask;
          }
        }
      }
      uVar18 = 0;
      if ((int)uVar20 < (int)this->_padding_) {
        uVar18 = uVar17;
      }
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         _Var28 = GlobalVectorConstants::IntAllMask, bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar12;
      }
      uVar18 = local_e4;
      uVar20 = *(uint *)(lVar11 + 0x18 + this->_padding_);
    }
    TStack_98._padding_._4_4_ = (uint)((ulonglong)TStack_98._padding_ >> 0x20);
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

