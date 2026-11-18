// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 32

// TConvexHull2<float> @ 143365e00

TConvexHull2<float> * __thiscall
UE::Geometry::TConvexHull2<float>::TConvexHull2<float>(TConvexHull2<float> *this)

{
  this->Dimension = 0;
  this->NumUniquePoints = 0;
  (this->Hull).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Hull).ArrayNum = 0;
  (this->Hull).ArrayMax = 0;
  return this;
}

// TConvexHull2<double> @ 143365e20

TConvexHull2<double> * __thiscall
UE::Geometry::TConvexHull2<double>::TConvexHull2<double>(TConvexHull2<double> *this)

{
  this->Dimension = 0;
  this->NumUniquePoints = 0;
  (this->Hull).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Hull).ArrayNum = 0;
  (this->Hull).ArrayMax = 0;
  return this;
}

// ~TConvexHull2<float> @ 143369360

void __thiscall UE::Geometry::TConvexHull2<float>::~TConvexHull2<float>(TConvexHull2<float> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Hull).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvexHull2<double> @ 143369380

void __thiscall
UE::Geometry::TConvexHull2<double>::~TConvexHull2<double>(TConvexHull2<double> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Hull).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator() @ 143370f90

bool __thiscall
`UE::Geometry::TConvexHull2<float>::Solve'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  float local_res8;
  float local_resc;
  int local_res10 [2];
  float local_res20;
  float local_res24;
  
  local_res10[0] = param_1;
  (*(code *)**(undefined8 **)this)(&local_res8,(*(undefined8 **)this)[1],local_res10);
  local_res10[0] = param_2;
  (*(code *)**(undefined8 **)this)(&local_res20,(*(undefined8 **)this)[1],local_res10);
  if ((local_res20 <= local_res8) && ((local_res8 != local_res20 || (local_res24 <= local_resc)))) {
    return false;
  }
  return true;
}

// operator() @ 143371020

bool __thiscall
`UE::Geometry::TConvexHull2<double>::Solve'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  int local_res10 [6];
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_res10[0] = param_1;
  (*(code *)**(undefined8 **)this)(&local_28,(*(undefined8 **)this)[1],local_res10);
  local_res10[0] = param_2;
  (*(code *)**(undefined8 **)this)(&local_18,(*(undefined8 **)this)[1],local_res10);
  if ((local_18 <= local_28) && ((local_28 != local_18 || (local_10 <= local_20)))) {
    return false;
  }
  return true;
}

// Empty @ 14339bf60

void __thiscall UE::Geometry::TConvexHull2<float>::Empty(TConvexHull2<float> *this)

{
  int *piVar1;
  
  this->Dimension = 0;
  this->NumUniquePoints = 0;
  piVar1 = &(this->Hull).ArrayMax;
  (this->Hull).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Hull).AllocatorInstance,0,piVar1);
  }
  return;
}

// Empty @ 14339bfa0

void __thiscall UE::Geometry::TConvexHull2<double>::Empty(TConvexHull2<double> *this)

{
  int *piVar1;
  
  this->Dimension = 0;
  this->NumUniquePoints = 0;
  piVar1 = &(this->Hull).ArrayMax;
  (this->Hull).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Hull).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetDimension @ 1433a3580

int __thiscall UE::Geometry::TConvexHull2<float>::GetDimension(TConvexHull2<float> *this)

{
  return this->Dimension;
}

// GetDimension @ 1433a3590

int __thiscall UE::Geometry::TConvexHull2<double>::GetDimension(TConvexHull2<double> *this)

{
  return this->Dimension;
}

// GetHull @ 1433a8540

void __thiscall
UE::Geometry::TConvexHull2<float>::GetHull
          (TConvexHull2<float> *this,TFunctionRef<UE::Math::TVector2<float>___cdecl(int)> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int local_res20 [2];
  int local_38;
  int local_34;
  TFunctionRef<UE::Math::TVector2<float>___cdecl(int)> local_30;
  
  piVar1 = param_4;
  local_34 = *param_3;
  param_4._0_4_ = *param_4;
  if (1 < ((int)param_4 - local_34) + 1) {
    local_38 = ((int)param_4 + local_34) / 2;
    local_res20[0] = local_38 + 1;
    local_30._0_8_ = *(undefined8 *)param_1;
    local_30._8_8_ = *(undefined8 *)&param_1->field_0x8;
    GetHull(this,&local_30,param_2,&local_34,&local_38);
    local_30._0_8_ = *(undefined8 *)param_1;
    local_30._8_8_ = *(undefined8 *)&param_1->field_0x8;
    GetHull(this,&local_30,param_2,local_res20,(int *)&param_4);
    local_30._0_8_ = *(undefined8 *)param_1;
    local_30._8_8_ = *(undefined8 *)&param_1->field_0x8;
    Merge(this,&local_30,param_2,local_34,local_38,local_res20[0],(int)param_4,param_3,piVar1);
  }
  return;
}

// GetHull @ 1433a8670

void __thiscall
UE::Geometry::TConvexHull2<double>::GetHull
          (TConvexHull2<double> *this,TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> *param_1
          ,TArray<int,TSizedDefaultAllocator<32>_> *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int local_res20 [2];
  int local_38;
  int local_34;
  TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> local_30;
  
  piVar1 = param_4;
  local_34 = *param_3;
  param_4._0_4_ = *param_4;
  if (1 < ((int)param_4 - local_34) + 1) {
    local_38 = ((int)param_4 + local_34) / 2;
    local_res20[0] = local_38 + 1;
    local_30._0_8_ = *(undefined8 *)param_1;
    local_30._8_8_ = *(undefined8 *)&param_1->field_0x8;
    GetHull(this,&local_30,param_2,&local_34,&local_38);
    local_30._0_8_ = *(undefined8 *)param_1;
    local_30._8_8_ = *(undefined8 *)&param_1->field_0x8;
    GetHull(this,&local_30,param_2,local_res20,(int *)&param_4);
    local_30._0_8_ = *(undefined8 *)param_1;
    local_30._8_8_ = *(undefined8 *)&param_1->field_0x8;
    Merge(this,&local_30,param_2,local_34,local_38,local_res20[0],(int)param_4,param_3,piVar1);
  }
  return;
}

// GetLine @ 1433a8c40

TLine2<float> * __thiscall
UE::Geometry::TConvexHull2<float>::GetLine
          (TConvexHull2<float> *this,TLine2<float> *__return_storage_ptr__,
          TArrayView<UE::Math::TVector2<float>_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TLine2<float> *pTVar3;
  TVector2<float> *pTVar4;
  TVector2<float>_u_0_s_0 *pTVar5;
  TVector2<float>_u_0 TVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_res8;
  
  if (this->Dimension != 1) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2612336754539102079>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\CompGeom\\ConvexHull2.h"
                       ,0x81,"Dimension == 1");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TLine2<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->Hull).ArrayNum < 2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2612336754539102078>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\CompGeom\\ConvexHull2.h"
                       ,0x82,"Hull.Num() > 1");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TLine2<float> *)(*pcVar1)();
      return pTVar3;
    }
    local_res8 = (TVector2<float>_u_0)0x3f800000;
    TVar6 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  }
  else {
    pTVar4 = TArrayView<UE::Math::TVector2<float>_const_,int>::operator[]
                       (param_1,*(int *)((this->Hull).AllocatorInstance.Data + 4));
    if ((this->Hull).ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TLine2<float> *)(*pcVar1)();
        return pTVar3;
      }
    }
    pTVar5 = (TVector2<float>_u_0_s_0 *)
             TArrayView<UE::Math::TVector2<float>_const_,int>::operator[]
                       (param_1,*(int *)(this->Hull).AllocatorInstance.Data);
    fVar7 = (pTVar4->field0_0x0)._s_0.X - pTVar5->X;
    fVar8 = (pTVar4->field0_0x0)._s_0.Y - pTVar5->Y;
    fVar9 = SQRT(fVar8 * fVar8 + fVar7 * fVar7);
    if (fVar9 <= 0.0) {
      local_res8 = (TVector2<float>_u_0)0x0;
    }
    else {
      fVar9 = __real_3f800000 / fVar9;
      local_res8._4_4_ = fVar9 * fVar8;
      local_res8._0_4_ = fVar9 * fVar7;
    }
    TVar6._s_0 = *pTVar5;
  }
  (__return_storage_ptr__->Origin).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar6;
  (__return_storage_ptr__->Direction).field0_0x0 = local_res8;
  return __return_storage_ptr__;
}

// GetLine @ 1433a8dd0

TLine2<double> * __thiscall
UE::Geometry::TConvexHull2<double>::GetLine
          (TConvexHull2<double> *this,TLine2<double> *__return_storage_ptr__,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_1)

{
  code *pcVar1;
  double dVar2;
  TVector2<double>_u_0 TVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  TLine2<double> *pTVar7;
  TVector2<double> *pTVar8;
  TVector2<double> *pTVar9;
  double dVar10;
  undefined1 in_XMM4 [16];
  undefined1 auVar11 [16];
  
  if (this->Dimension != 1) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2612336754539102079>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\CompGeom\\ConvexHull2.h"
                       ,0x81,"Dimension == 1");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TLine2<double> *)(*pcVar1)();
      return pTVar7;
    }
  }
  if ((this->Hull).ArrayNum < 2) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2612336754539102078>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\CompGeom\\ConvexHull2.h"
                       ,0x82,"Hull.Num() > 1");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TLine2<double> *)(*pcVar1)();
      return pTVar7;
    }
    (__return_storage_ptr__->Origin).field0_0x0._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    (__return_storage_ptr__->Direction).field0_0x0._s_0.X = 1.0;
    (__return_storage_ptr__->Direction).field0_0x0._s_0.Y = 0.0;
    return __return_storage_ptr__;
  }
  pTVar8 = TArrayView<UE::Math::TVector2<double>_const_,int>::operator[]
                     (param_1,*(int *)((this->Hull).AllocatorInstance.Data + 4));
  if ((this->Hull).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TLine2<double> *)(*pcVar1)();
      return pTVar7;
    }
  }
  pTVar9 = TArrayView<UE::Math::TVector2<double>_const_,int>::operator[]
                     (param_1,*(int *)(this->Hull).AllocatorInstance.Data);
  dVar4 = (pTVar8->field0_0x0)._s_0.X - (pTVar9->field0_0x0)._s_0.X;
  dVar10 = (pTVar8->field0_0x0)._s_0.Y - (pTVar9->field0_0x0)._s_0.Y;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar10 * dVar10 + dVar4 * dVar4;
  auVar11 = sqrtpd(in_XMM4,auVar11);
  if (auVar11._0_8_ <= 0.0) {
    dVar2 = 0.0;
    dVar10 = 0.0;
  }
  else {
    dVar2 = __real_3ff0000000000000 / auVar11._0_8_;
    dVar10 = dVar2 * dVar10;
    dVar2 = dVar2 * dVar4;
  }
  dVar4 = (pTVar9->field0_0x0)._s_0.X;
  dVar5 = (pTVar9->field0_0x0)._s_0.Y;
  TVar3._8_4_ = SUB84(dVar10,0);
  TVar3._s_0.X = dVar2;
  TVar3._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  (__return_storage_ptr__->Direction).field0_0x0 = TVar3;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar4;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar5;
  return __return_storage_ptr__;
}

// GetNumUniquePoints @ 1433a92e0

int __thiscall UE::Geometry::TConvexHull2<float>::GetNumUniquePoints(TConvexHull2<float> *this)

{
  return this->NumUniquePoints;
}

// GetNumUniquePoints @ 1433a92f0

int __thiscall UE::Geometry::TConvexHull2<double>::GetNumUniquePoints(TConvexHull2<double> *this)

{
  return this->NumUniquePoints;
}

// GetPolygonIndices @ 1433a9320

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TConvexHull2<float>::GetPolygonIndices(TConvexHull2<float> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this->Dimension == 2) {
    return &this->Hull;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2612336754539102086>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\CompGeom\\ConvexHull2.h"
                     ,0x7a,"IsSolutionAvailable()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  return &this->Hull;
}

// GetPolygonIndices @ 1433a9380

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TConvexHull2<double>::GetPolygonIndices(TConvexHull2<double> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this->Dimension == 2) {
    return &this->Hull;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2612336754539102086>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\CompGeom\\ConvexHull2.h"
                     ,0x7a,"IsSolutionAvailable()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  return &this->Hull;
}

// GetTangent @ 1433b1b20

void __thiscall
UE::Geometry::TConvexHull2<float>::GetTangent
          (TConvexHull2<float> *this,TFunctionRef<UE::Math::TVector2<float>___cdecl(int)> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4,int param_5,
          int param_6,int *param_7,int *param_8)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  undefined8 local_d8;
  int local_d0;
  undefined8 local_c8;
  float local_c0 [4];
  undefined4 local_b0 [2];
  undefined4 local_a8 [2];
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [3];
  
  iVar10 = 0;
  local_a0 = (param_4 - param_3) + 1;
  local_d0 = (param_6 - param_5) + 1;
  if (0 < local_d0 + local_a0) {
    do {
      iVar4 = local_a0;
      uVar9 = *param_7;
      uVar7 = 0;
      if ((int)uVar9 < (this->Hull).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_c0[0] = *(float *)((this->Hull).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
      (**(code **)param_1)(&local_90,*(undefined8 *)&param_1->field_0x8,local_c0);
      uVar9 = *param_8;
      local_c8 = local_90;
      uVar7 = 0;
      if ((int)uVar9 < (this->Hull).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_c0[2] = *(float *)((this->Hull).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
      (**(code **)param_1)(&local_88,*(undefined8 *)&param_1->field_0x8,local_c0 + 2);
      uVar5 = local_88;
      local_d8 = local_88;
      if (iVar4 < 2) {
LAB_1433b1d5e:
        if (local_d0 < 2) {
          return;
        }
        uVar9 = param_5;
        if (*param_8 < param_6) {
          uVar9 = *param_8 + 1;
        }
        uVar7 = 0;
        if ((int)uVar9 < (this->Hull).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_a8[0] = *(undefined4 *)
                       ((this->Hull).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
        (**(code **)param_1)(&local_60,*(undefined8 *)&param_1->field_0x8,local_a8);
        local_48 = local_c8;
        local_40[0] = local_60;
        local_50 = uVar5;
        local_58 = local_60;
        fVar11 = ShewchukExactPredicatesFloat::orient2d
                           ((float *)&local_48,(float *)&local_50,(float *)&local_58);
        if (0.0 < fVar11) {
          return;
        }
        if (0.0 <= fVar11) {
          uVar8 = (ulonglong)((float)local_c8 == (float)local_d8);
          fVar11 = local_c0[uVar8 - 2];
          fVar1 = *(float *)((longlong)&local_d8 + uVar8 * 4);
          fVar2 = *(float *)((longlong)local_40 + uVar8 * 4);
          if (fVar1 < fVar11 != fVar2 < fVar11) {
            return;
          }
          if (fVar1 < fVar2 == fVar1 < fVar11) {
            return;
          }
        }
        *param_8 = uVar9;
      }
      else {
        uVar9 = param_4;
        if (param_3 < *param_7) {
          uVar9 = *param_7 - 1;
        }
        uVar7 = 0;
        if ((int)uVar9 < (this->Hull).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_b0[0] = *(undefined4 *)
                       ((this->Hull).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
        (**(code **)param_1)(&local_80,*(undefined8 *)&param_1->field_0x8,local_b0);
        local_98 = local_80;
        local_70 = local_80;
        local_78 = local_c8;
        local_68 = uVar5;
        fVar11 = ShewchukExactPredicatesFloat::orient2d
                           ((float *)&local_68,(float *)&local_70,(float *)&local_78);
        if (0.0 < fVar11) goto LAB_1433b1d5e;
        if (0.0 <= fVar11) {
          uVar8 = (ulonglong)((float)local_d8 == (float)local_98);
          fVar11 = *(float *)((longlong)&local_d8 + uVar8 * 4);
          fVar1 = *(float *)((longlong)&local_98 + uVar8 * 4);
          if ((fVar1 < fVar11 != local_c0[uVar8 - 2] < fVar11) ||
             (fVar1 < local_c0[uVar8 - 2] != fVar1 < fVar11)) goto LAB_1433b1d5e;
        }
        *param_7 = uVar9;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < local_d0 + local_a0);
  }
  return;
}

// GetTangent @ 1433b1eb0

void __thiscall
UE::Geometry::TConvexHull2<double>::GetTangent
          (TConvexHull2<double> *this,TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> *param_1
          ,TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4,int param_5,
          int param_6,int *param_7,int *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 local_188 [2];
  undefined4 local_180 [2];
  int local_178;
  undefined4 local_170 [2];
  int local_168;
  undefined4 local_160 [2];
  double local_158 [4];
  double local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  double local_d8 [4];
  double local_b8;
  undefined8 uStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  double local_98;
  undefined8 uStack_90;
  double local_88 [12];
  
  iVar13 = 0;
  local_178 = (param_4 - param_3) + 1;
  local_168 = (param_6 - param_5) + 1;
  iVar12 = local_168 + local_178;
  if (0 < iVar12) {
    do {
      uVar11 = *param_7;
      uVar9 = 0;
      if ((int)uVar11 < (this->Hull).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_188[0] = *(undefined4 *)
                      ((this->Hull).AllocatorInstance.Data + (longlong)(int)uVar11 * 4);
      (**(code **)param_1)(local_158 + 4,*(undefined8 *)&param_1->field_0x8,local_188);
      uVar6 = uStack_130;
      dVar2 = local_138;
      uVar11 = *param_8;
      local_158[0] = local_138;
      local_158[1] = (double)uStack_130;
      uVar9 = 0;
      if ((int)uVar11 < (this->Hull).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_180[0] = *(undefined4 *)
                      ((this->Hull).AllocatorInstance.Data + (longlong)(int)uVar11 * 4);
      (**(code **)param_1)(&local_128,*(undefined8 *)&param_1->field_0x8,local_180);
      uVar7 = uStack_120;
      dVar3 = local_128;
      local_158[2] = local_128;
      local_158[3] = (double)uStack_120;
      if (local_178 < 2) {
LAB_1433b213c:
        if (local_168 < 2) {
          return;
        }
        uVar11 = param_5;
        if (*param_8 < param_6) {
          uVar11 = *param_8 + 1;
        }
        uVar9 = 0;
        if ((int)uVar11 < (this->Hull).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_160[0] = *(undefined4 *)
                        ((this->Hull).AllocatorInstance.Data + (longlong)(int)uVar11 * 4);
        (**(code **)param_1)(local_d8 + 2,*(undefined8 *)&param_1->field_0x8,local_160);
        local_88[0] = local_d8[2];
        local_88[1] = local_d8[3];
        local_b8 = local_d8[2];
        uStack_b0 = local_d8[3];
        local_98 = dVar2;
        uStack_90 = uVar6;
        local_a8 = dVar3;
        uStack_a0 = uVar7;
        dVar5 = ShewchukExactPredicates::orient2d(&local_98,&local_a8,&local_b8);
        if (0.0 < dVar5) {
          return;
        }
        if (0.0 <= dVar5) {
          uVar10 = (ulonglong)(dVar2 == dVar3);
          dVar2 = local_158[uVar10];
          dVar3 = local_158[uVar10 + 2];
          if (dVar3 < dVar2 != local_88[uVar10] < dVar2) {
            return;
          }
          if (dVar3 < local_88[uVar10] == dVar3 < dVar2) {
            return;
          }
        }
        *param_8 = uVar11;
      }
      else {
        uVar11 = param_4;
        if (param_3 < *param_7) {
          uVar11 = *param_7 - 1;
        }
        uVar9 = 0;
        if ((int)uVar11 < (this->Hull).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_170[0] = *(undefined4 *)
                        ((this->Hull).AllocatorInstance.Data + (longlong)(int)uVar11 * 4);
        (**(code **)param_1)(&local_118,*(undefined8 *)&param_1->field_0x8,local_170);
        dVar1 = local_118;
        local_d8[0] = local_118;
        local_d8[1] = (double)uStack_110;
        local_f8 = local_118;
        uStack_f0 = uStack_110;
        local_e8 = dVar3;
        uStack_e0 = uVar7;
        local_108 = dVar2;
        uStack_100 = uVar6;
        dVar5 = ShewchukExactPredicates::orient2d(&local_e8,&local_f8,&local_108);
        if (0.0 < dVar5) goto LAB_1433b213c;
        if (0.0 <= dVar5) {
          uVar10 = (ulonglong)(dVar3 == dVar1);
          dVar5 = local_158[uVar10 + 2];
          dVar1 = local_d8[uVar10];
          if ((dVar1 < dVar5 != local_158[uVar10] < dVar5) ||
             (dVar1 < local_158[uVar10] != dVar1 < dVar5)) goto LAB_1433b213c;
        }
        *param_7 = uVar11;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar12);
  }
  return;
}

// IsSolutionAvailable @ 1433bc600

bool __thiscall UE::Geometry::TConvexHull2<float>::IsSolutionAvailable(TConvexHull2<float> *this)

{
  return this->Dimension == 2;
}

// IsSolutionAvailable @ 1433bc610

bool __thiscall UE::Geometry::TConvexHull2<double>::IsSolutionAvailable(TConvexHull2<double> *this)

{
  return this->Dimension == 2;
}

// Merge @ 1433bccb0

void __thiscall
UE::Geometry::TConvexHull2<float>::Merge
          (TConvexHull2<float> *this,TFunctionRef<UE::Math::TVector2<float>___cdecl(int)> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4,int param_5,
          int param_6,int *param_7,int *param_8)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  uint local_res8;
  uint local_res10 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  uint local_res20;
  uint local_d8;
  int local_d4;
  uint local_d0;
  uint local_cc;
  int local_c8;
  undefined8 local_c0;
  undefined4 local_b8 [2];
  undefined4 local_b0 [2];
  undefined4 local_a8 [2];
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  TFunctionRef<UE::Math::TVector2<float>___cdecl(int)> local_70;
  TFunctionRef<UE::Math::TVector2<float>___cdecl(int)> local_60 [2];
  
  local_d4 = (param_4 - param_3) + 1;
  local_c8 = (param_6 - param_5) + 1;
  uVar7 = 0;
  if (param_3 < (this->Hull).ArrayNum) {
    uVar7 = (uint)~param_3 >> 0x1f;
  }
  local_res18 = param_2;
  local_res20 = param_3;
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_b8[0] = *(undefined4 *)((this->Hull).AllocatorInstance.Data + (longlong)param_3 * 4);
  local_78 = (longlong)param_3;
  (**(code **)param_1)(&local_98,*(undefined8 *)&param_1->field_0x8,local_b8);
  uVar7 = param_3 + 1;
  local_res8 = param_3;
  if ((int)uVar7 <= param_4) {
    lVar11 = (longlong)(int)uVar7 * 4;
    do {
      uVar8 = 0;
      if ((int)uVar7 < (this->Hull).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_b0[0] = *(undefined4 *)((this->Hull).AllocatorInstance.Data + lVar11);
      (**(code **)param_1)(&local_88,*(undefined8 *)&param_1->field_0x8,local_b0);
      local_c0 = local_88;
      uVar3 = local_c0;
      local_c0._0_4_ = (float)local_88;
      if ((float)local_98 < (float)local_c0) {
LAB_1433bce08:
        local_98 = local_88;
        local_res8 = uVar7;
      }
      else if ((float)local_98 == (float)local_c0) {
        local_c0._4_4_ = (float)((ulonglong)local_88 >> 0x20);
        if (local_98._4_4_ < local_c0._4_4_) goto LAB_1433bce08;
      }
      uVar7 = uVar7 + 1;
      lVar11 = lVar11 + 4;
      local_c0 = uVar3;
    } while ((int)uVar7 <= param_4);
  }
  uVar7 = 0;
  if (param_5 < (this->Hull).ArrayNum) {
    uVar7 = (uint)~param_5 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_a8[0] = *(undefined4 *)((this->Hull).AllocatorInstance.Data + (longlong)param_5 * 4);
  (**(code **)param_1)(&local_90,*(undefined8 *)&param_1->field_0x8,local_a8);
  uVar8 = param_5 + 1;
  uVar7 = param_5;
  if ((int)uVar8 <= param_6) {
    lVar11 = (longlong)(int)uVar8 * 4;
    do {
      uVar9 = 0;
      if ((int)uVar8 < (this->Hull).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_a0[0] = *(undefined4 *)((this->Hull).AllocatorInstance.Data + lVar11);
      (**(code **)param_1)(&local_80,*(undefined8 *)&param_1->field_0x8,local_a0);
      local_c0 = local_80;
      uVar3 = local_c0;
      local_c0._0_4_ = (float)local_80;
      if ((float)local_c0 < (float)local_90) {
LAB_1433bcf38:
        local_90 = local_80;
        uVar7 = uVar8;
      }
      else if ((float)local_c0 == (float)local_90) {
        local_c0._4_4_ = (float)((ulonglong)local_80 >> 0x20);
        if (local_c0._4_4_ < local_90._4_4_) goto LAB_1433bcf38;
      }
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 4;
      local_c0 = uVar3;
    } while ((int)uVar8 <= param_6);
  }
  local_70._0_8_ = *(undefined8 *)param_1;
  local_70._8_8_ = *(undefined8 *)&param_1->field_0x8;
  local_d8 = local_res8;
  local_d0 = uVar7;
  GetTangent(this,&local_70,local_res18,local_res20,param_4,param_5,param_6,(int *)&local_d8,
             (int *)&local_d0);
  local_60[0]._0_8_ = *(undefined8 *)param_1;
  local_60[0]._8_8_ = *(undefined8 *)&param_1->field_0x8;
  local_res10[0] = local_res8;
  local_cc = uVar7;
  GetTangent(this,local_60,local_res18,param_5,param_6,local_res20,param_4,(int *)&local_cc,
             (int *)local_res10);
  uVar10 = (ulonglong)(int)local_res10[0];
  uVar7 = 0;
  iVar14 = 0;
  if (0 < local_d4) {
    lVar11 = 0;
    uVar12 = uVar10;
    do {
      uVar9 = (uint)uVar10;
      uVar8 = 0;
      if ((int)uVar9 < (this->Hull).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(undefined4 *)((this->Hull).AllocatorInstance.Data + uVar12 * 4);
      uVar8 = 0;
      if ((int)uVar7 < local_res18->ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar7 + 1;
      *(undefined4 *)((local_res18->AllocatorInstance).Data + lVar11) = uVar1;
      lVar11 = lVar11 + 4;
      if (uVar9 == local_d8) break;
      uVar8 = local_res20;
      if ((int)uVar9 < param_4) {
        uVar8 = uVar9 + 1;
      }
      uVar10 = (ulonglong)uVar8;
      iVar14 = iVar14 + 1;
      uVar12 = uVar12 + 1;
      if (param_4 <= (int)uVar9) {
        uVar12 = local_78;
      }
    } while (iVar14 < local_d4);
  }
  uVar10 = (ulonglong)(int)local_d0;
  iVar14 = 0;
  if (0 < local_c8) {
    lVar11 = (longlong)(int)uVar7 * 4;
    uVar12 = uVar10;
    do {
      uVar9 = (uint)uVar10;
      uVar8 = 0;
      if ((int)uVar9 < (this->Hull).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(undefined4 *)((this->Hull).AllocatorInstance.Data + uVar12 * 4);
      uVar8 = 0;
      if ((int)uVar7 < local_res18->ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar7 + 1;
      *(undefined4 *)((local_res18->AllocatorInstance).Data + lVar11) = uVar1;
      lVar11 = lVar11 + 4;
      if (uVar9 == local_cc) break;
      uVar8 = param_5;
      if ((int)uVar9 < param_6) {
        uVar8 = uVar9 + 1;
      }
      uVar10 = (ulonglong)uVar8;
      iVar14 = iVar14 + 1;
      uVar12 = uVar12 + 1;
      if (param_6 <= (int)uVar9) {
        uVar12 = (longlong)param_5;
      }
    } while (iVar14 < local_c8);
  }
  uVar8 = local_res20;
  lVar11 = (longlong)(int)local_res20;
  uVar9 = local_res20;
  if (0 < (int)uVar7) {
    lVar13 = 0;
    do {
      uVar6 = uVar9 - uVar8;
      uVar5 = 0;
      if ((int)uVar6 < local_res18->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(undefined4 *)((local_res18->AllocatorInstance).Data + lVar13 * 4);
      uVar5 = 0;
      if ((int)uVar9 < (this->Hull).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = uVar9 + 1;
      *(undefined4 *)((this->Hull).AllocatorInstance.Data + lVar13 * 4 + lVar11 * 4) = uVar1;
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)uVar7);
  }
  *param_7 = uVar8;
  *param_8 = uVar9 - 1;
  return;
}

// Merge @ 1433bd310

void __thiscall
UE::Geometry::TConvexHull2<double>::Merge
          (TConvexHull2<double> *this,TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> *param_1
          ,TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4,int param_5,
          int param_6,int *param_7,int *param_8)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint local_res8;
  uint local_res10 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  uint local_res20;
  uint local_e8;
  int local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  undefined4 local_d0 [2];
  undefined4 local_c8 [2];
  undefined4 local_c0 [2];
  undefined4 local_b8 [2];
  ulonglong local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> local_68;
  TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> local_58;
  
  local_e4 = (param_4 - param_3) + 1;
  local_d8 = (param_6 - param_5) + 1;
  uVar6 = 0;
  if (param_3 < (this->Hull).ArrayNum) {
    uVar6 = (uint)~param_3 >> 0x1f;
  }
  local_res18 = param_2;
  local_res20 = param_3;
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_d0[0] = *(undefined4 *)((this->Hull).AllocatorInstance.Data + (longlong)param_3 * 4);
  local_b0 = (longlong)param_3;
  (**(code **)param_1)(&local_98,*(undefined8 *)&param_1->field_0x8,local_d0);
  uVar6 = param_3 + 1;
  local_res8 = param_3;
  if ((int)uVar6 <= param_4) {
    lVar10 = (longlong)(int)uVar6 * 4;
    do {
      uVar7 = 0;
      if ((int)uVar6 < (this->Hull).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_c8[0] = *(undefined4 *)((this->Hull).AllocatorInstance.Data + lVar10);
      (**(code **)param_1)(&local_a8,*(undefined8 *)&param_1->field_0x8,local_c8);
      if ((local_98 < local_a8) || ((local_98 == local_a8 && (dStack_90 < dStack_a0)))) {
        local_98 = local_a8;
        dStack_90 = dStack_a0;
        local_res8 = uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar10 = lVar10 + 4;
    } while ((int)uVar6 <= param_4);
  }
  uVar6 = 0;
  if (param_5 < (this->Hull).ArrayNum) {
    uVar6 = (uint)~param_5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_c0[0] = *(undefined4 *)((this->Hull).AllocatorInstance.Data + (longlong)param_5 * 4);
  (**(code **)param_1)(&local_78,*(undefined8 *)&param_1->field_0x8,local_c0);
  uVar7 = param_5 + 1;
  uVar6 = param_5;
  if ((int)uVar7 <= param_6) {
    lVar10 = (longlong)(int)uVar7 * 4;
    do {
      uVar8 = 0;
      if ((int)uVar7 < (this->Hull).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_b8[0] = *(undefined4 *)((this->Hull).AllocatorInstance.Data + lVar10);
      (**(code **)param_1)(&local_88,*(undefined8 *)&param_1->field_0x8,local_b8);
      if ((local_88 < local_78) || ((local_88 == local_78 && (dStack_80 < dStack_70)))) {
        local_78 = local_88;
        dStack_70 = dStack_80;
        uVar6 = uVar7;
      }
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 4;
    } while ((int)uVar7 <= param_6);
  }
  local_68._0_8_ = *(undefined8 *)param_1;
  local_68._8_8_ = *(undefined8 *)&param_1->field_0x8;
  local_e8 = local_res8;
  local_e0 = uVar6;
  GetTangent(this,&local_68,local_res18,local_res20,param_4,param_5,param_6,(int *)&local_e8,
             (int *)&local_e0);
  local_58._0_8_ = *(undefined8 *)param_1;
  local_58._8_8_ = *(undefined8 *)&param_1->field_0x8;
  local_res10[0] = local_res8;
  local_dc = uVar6;
  GetTangent(this,&local_58,local_res18,param_5,param_6,local_res20,param_4,(int *)&local_dc,
             (int *)local_res10);
  uVar9 = (ulonglong)(int)local_res10[0];
  uVar6 = 0;
  iVar13 = 0;
  if (0 < local_e4) {
    lVar10 = 0;
    uVar11 = uVar9;
    do {
      uVar8 = (uint)uVar9;
      uVar7 = 0;
      if ((int)uVar8 < (this->Hull).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(undefined4 *)((this->Hull).AllocatorInstance.Data + uVar11 * 4);
      uVar7 = 0;
      if ((int)uVar6 < local_res18->ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = uVar6 + 1;
      *(undefined4 *)((local_res18->AllocatorInstance).Data + lVar10) = uVar1;
      lVar10 = lVar10 + 4;
      if (uVar8 == local_e8) break;
      uVar7 = local_res20;
      if ((int)uVar8 < param_4) {
        uVar7 = uVar8 + 1;
      }
      uVar9 = (ulonglong)uVar7;
      iVar13 = iVar13 + 1;
      uVar11 = uVar11 + 1;
      if (param_4 <= (int)uVar8) {
        uVar11 = local_b0;
      }
    } while (iVar13 < local_e4);
  }
  uVar9 = (ulonglong)(int)local_e0;
  iVar13 = 0;
  if (0 < local_d8) {
    lVar10 = (longlong)(int)uVar6 * 4;
    uVar11 = uVar9;
    do {
      uVar8 = (uint)uVar9;
      uVar7 = 0;
      if ((int)uVar8 < (this->Hull).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(undefined4 *)((this->Hull).AllocatorInstance.Data + uVar11 * 4);
      uVar7 = 0;
      if ((int)uVar6 < local_res18->ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = uVar6 + 1;
      *(undefined4 *)((local_res18->AllocatorInstance).Data + lVar10) = uVar1;
      lVar10 = lVar10 + 4;
      if (uVar8 == local_dc) break;
      uVar7 = param_5;
      if ((int)uVar8 < param_6) {
        uVar7 = uVar8 + 1;
      }
      uVar9 = (ulonglong)uVar7;
      iVar13 = iVar13 + 1;
      uVar11 = uVar11 + 1;
      if (param_6 <= (int)uVar8) {
        uVar11 = (longlong)param_5;
      }
    } while (iVar13 < local_d8);
  }
  uVar7 = local_res20;
  lVar10 = (longlong)(int)local_res20;
  uVar8 = local_res20;
  if (0 < (int)uVar6) {
    lVar12 = 0;
    do {
      uVar5 = uVar8 - uVar7;
      uVar4 = 0;
      if ((int)uVar5 < local_res18->ArrayNum) {
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
      uVar1 = *(undefined4 *)((local_res18->AllocatorInstance).Data + lVar12 * 4);
      uVar4 = 0;
      if ((int)uVar8 < (this->Hull).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
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
      uVar8 = uVar8 + 1;
      *(undefined4 *)((this->Hull).AllocatorInstance.Data + lVar12 * 4 + lVar10 * 4) = uVar1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)uVar6);
  }
  *param_7 = uVar7;
  *param_8 = uVar8 - 1;
  return;
}

// Solve @ 1433ceb10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::TConvexHull2<float>::Solve
          (TConvexHull2<float> *this,int param_1,
          TFunctionRef<UE::Math::TVector2<float>___cdecl(int)> *param_2,
          TFunctionRef<bool___cdecl(int)> *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  float fVar18;
  int local_res8 [2];
  int local_res10 [2];
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_110;
  int local_100 [2];
  undefined4 local_f8 [2];
  undefined4 local_f0 [2];
  undefined4 local_e8 [2];
  undefined4 local_e0 [2];
  undefined4 local_d8 [2];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  undefined4 local_a4;
  TFunctionRef<UE::Math::TVector2<float>___cdecl(int)> *local_a0;
  FScriptContainerElement *local_98;
  undefined8 local_90;
  undefined8 local_88;
  TFunctionRef<UE::Math::TVector2<float>___cdecl(int)> local_80;
  TFunctionRef<UE::Math::TVector2<float>___cdecl(int)> local_70;
  TFunctionRef<UE::Math::TVector2<float>___cdecl(int)> local_60 [2];
  
  pTVar17 = &this->Hull;
  piVar1 = &(this->Hull).ArrayMax;
  (this->Hull).ArrayNum = 0;
  if ((this->Hull).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar17->AllocatorInstance,0,piVar1);
  }
  this->Dimension = 0;
  this->NumUniquePoints = 0;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (*piVar1 < param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1,&pTVar17->AllocatorInstance,(this->Hull).ArrayNum,piVar1);
  }
  local_128 = 0;
  if (0 < param_1) {
    do {
      local_100[0] = local_128;
      cVar8 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_100);
      if (cVar8 != '\0') {
        pFVar3 = (pTVar17->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_128) &&
            ((FScriptContainerElement *)&local_128 < pFVar3 + (longlong)*piVar1 * 4)) &&
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
        iVar11 = (this->Hull).ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar17->AllocatorInstance,piVar1);
        }
        (this->Hull).ArrayNum = iVar11 + 1;
        *(int *)((pTVar17->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_128;
      }
      local_128 = local_128 + 1;
    } while (local_128 < param_1);
  }
  local_a0 = param_2;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UE::Geometry::TConvexHull2<float>::Solve_::__l2::<lambda_1>_>_>
            ((int *)(pTVar17->AllocatorInstance).Data,(this->Hull).ArrayNum,local_res10[0]._0_1_,
             (<lambda_1> *)&local_a0);
  iVar11 = (this->Hull).ArrayNum;
  local_98 = (pTVar17->AllocatorInstance).Data;
  if (1 < iVar11) {
    pFVar3 = local_98 + (longlong)iVar11 * 4;
    pFVar15 = local_98;
    pFVar7 = local_98;
    while (pFVar7 = pFVar7 + 4, pFVar7 != pFVar3) {
      local_f8[0] = *(undefined4 *)pFVar15;
      uVar2 = *(undefined4 *)pFVar7;
      (**(code **)param_2)(&local_d0,*(undefined8 *)&param_2->field_0x8,local_f8);
      local_f0[0] = uVar2;
      (**(code **)param_2)(&local_c8,*(undefined8 *)&param_2->field_0x8,local_f0);
      if (((local_d0 != local_c8) || (local_cc != local_c4)) &&
         (pFVar15 = pFVar15 + 4, pFVar15 != pFVar7)) {
        *(undefined4 *)pFVar15 = *(undefined4 *)pFVar7;
      }
    }
    iVar11 = (int)((longlong)(pFVar15 + (4 - (longlong)local_98)) >> 2);
  }
  pTVar17 = &this->Hull;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(pTVar17,iVar11,Default);
  iVar11 = (this->Hull).ArrayNum;
  this->NumUniquePoints = iVar11;
  if (iVar11 < 3) {
    iVar12 = iVar11 + -1;
    if (iVar11 + -1 < 0) {
      iVar12 = 0;
    }
    this->Dimension = iVar12;
  }
  else {
    local_e8[0] = *(undefined4 *)(pTVar17->AllocatorInstance).Data;
    (**(code **)param_2)(&local_b0,*(undefined8 *)&param_2->field_0x8,local_e8);
    if (((this->Hull).ArrayNum < 2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    local_e0[0] = *(undefined4 *)((this->Hull).AllocatorInstance.Data + 4);
    (**(code **)param_2)(&local_a8,*(undefined8 *)&param_2->field_0x8,local_e0);
    uVar14 = 2;
    if (2 < (this->Hull).ArrayNum) {
      lVar16 = 8;
      do {
        uVar13 = 0;
        if ((int)uVar14 < (this->Hull).ArrayNum) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        local_d8[0] = *(undefined4 *)((this->Hull).AllocatorInstance.Data + lVar16);
        (**(code **)param_2)(&local_90,*(undefined8 *)&param_2->field_0x8,local_d8);
        local_b8 = local_b0;
        local_b4 = local_ac;
        local_c0 = local_a8;
        local_bc = local_a4;
        local_88 = local_90;
        fVar18 = ShewchukExactPredicatesFloat::orient2d(&local_b8,&local_c0,(float *)&local_88);
        if (fVar18 != 0.0) {
          uVar14 = this->NumUniquePoints;
          this->Dimension = 2;
          local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_110.ArrayNum = 0;
          local_110.ArrayMax = 0;
          if ((int)uVar14 < 1) {
            if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
            }
          }
          else {
            iVar11 = Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,uVar14,&local_110.AllocatorInstance,&local_110.ArrayNum,
                                &local_110.ArrayMax);
            memset(local_110.AllocatorInstance.Data + (longlong)iVar11 * 4,0,
                   (longlong)(int)uVar14 << 2);
          }
          uVar4 = *(undefined8 *)param_2;
          uVar5 = *(undefined8 *)&param_2->field_0x8;
          local_11c = 0;
          local_118[0] = this->NumUniquePoints + -1;
          if (1 < this->NumUniquePoints) {
            local_120 = 0;
            local_124 = local_118[0] / 2;
            local_res8[0] = local_124 + 1;
            local_res10[0] = local_118[0];
            local_80._0_8_ = uVar4;
            local_80._8_8_ = uVar5;
            GetHull(this,&local_80,&local_110,&local_120,&local_124);
            local_70._0_8_ = uVar4;
            local_70._8_8_ = uVar5;
            GetHull(this,&local_70,&local_110,local_res8,local_res10);
            local_60[0]._0_8_ = uVar4;
            local_60[0]._8_8_ = uVar5;
            Merge(this,local_60,&local_110,local_120,local_124,local_res8[0],local_res10[0],
                  &local_11c,local_118);
          }
          TArray<int,TSizedDefaultAllocator<32>_>::SetNum
                    (pTVar17,(local_118[0] - local_11c) + 1,Default);
          if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.AllocatorInstance.Data);
          }
          return true;
        }
        uVar14 = uVar14 + 1;
        lVar16 = lVar16 + 4;
      } while ((int)uVar14 < (this->Hull).ArrayNum);
    }
    this->Dimension = 1;
  }
  return false;
}

// Solve @ 1433cf070

bool __thiscall
UE::Geometry::TConvexHull2<float>::Solve
          (TConvexHull2<float> *this,TArrayView<UE::Math::TVector2<float>_const_,int> *param_1)

{
  bool bVar1;
  undefined1 local_res10 [8];
  TArrayView<UE::Math::TVector2<float>_const_,int> *local_res18 [2];
  code *local_28;
  undefined1 *local_20;
  code *local_18;
  TArrayView<UE::Math::TVector2<float>_const_,int> **local_10;
  
  local_20 = local_res10;
  local_28 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TConvexHull2<float>::Solve'::__l2::<lambda_2>,bool,int>
             ::Call;
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TConvexHull2<float>::Solve'::__l2::<lambda_1>,UE::Math::TVector2<float>,int>
             ::Call;
  local_res18[0] = param_1;
  bVar1 = Solve(this,param_1->ArrayNum,
                (TFunctionRef<UE::Math::TVector2<float>___cdecl(int)> *)&local_18,
                (TFunctionRef<bool___cdecl(int)> *)&local_28);
  return bVar1;
}

// Solve @ 1433cf0c0

bool __thiscall
UE::Geometry::TConvexHull2<float>::Solve
          (TConvexHull2<float> *this,TArrayView<UE::Math::TVector2<float>_const_,int> *param_1,
          TFunctionRef<bool___cdecl(int)> *param_2)

{
  bool bVar1;
  TArrayView<UE::Math::TVector2<float>_const_,int> *local_res10 [3];
  TFunctionRef<bool___cdecl(int)> local_28;
  code *local_18;
  TArrayView<UE::Math::TVector2<float>_const_,int> **local_10;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_10 = local_res10;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TConvexHull2<float>::Solve'::__l2::<lambda_1>,UE::Math::TVector2<float>,int>
             ::Call;
  local_res10[0] = param_1;
  bVar1 = Solve(this,param_1->ArrayNum,
                (TFunctionRef<UE::Math::TVector2<float>___cdecl(int)> *)&local_18,&local_28);
  return bVar1;
}

// Solve @ 1433cf110

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::TConvexHull2<double>::Solve
          (TConvexHull2<double> *this,int param_1,
          TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> *param_2,
          TFunctionRef<bool___cdecl(int)> *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  double dVar7;
  FScriptContainerElement *pFVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  int local_res8 [2];
  int local_res10 [2];
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_150;
  int local_140 [2];
  undefined4 local_138 [2];
  undefined4 local_130 [2];
  undefined4 local_128 [2];
  undefined4 local_120 [2];
  undefined4 local_118 [2];
  TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> *local_110;
  FScriptContainerElement *local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 uStack_d8;
  double local_d0;
  undefined8 uStack_c8;
  TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> local_c0;
  TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> local_b0;
  TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> local_a0;
  double local_90;
  undefined8 uStack_88;
  double local_80;
  undefined8 uStack_78;
  double local_68;
  undefined8 uStack_60;
  double local_58;
  undefined8 uStack_50;
  
  pTVar18 = &this->Hull;
  piVar1 = &(this->Hull).ArrayMax;
  (this->Hull).ArrayNum = 0;
  if ((this->Hull).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar18->AllocatorInstance,0,piVar1);
  }
  this->Dimension = 0;
  this->NumUniquePoints = 0;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (*piVar1 < param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1,&pTVar18->AllocatorInstance,(this->Hull).ArrayNum,piVar1);
  }
  local_168 = 0;
  if (0 < param_1) {
    do {
      local_140[0] = local_168;
      cVar9 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_140);
      if (cVar9 != '\0') {
        pFVar3 = (pTVar18->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_168) &&
            ((FScriptContainerElement *)&local_168 < pFVar3 + (longlong)*piVar1 * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        iVar12 = (this->Hull).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar18->AllocatorInstance,piVar1);
        }
        (this->Hull).ArrayNum = iVar12 + 1;
        *(int *)((pTVar18->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_168;
      }
      local_168 = local_168 + 1;
    } while (local_168 < param_1);
  }
  local_110 = param_2;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UE::Geometry::TConvexHull2<double>::Solve_::__l2::<lambda_1>_>_>
            ((int *)(pTVar18->AllocatorInstance).Data,(this->Hull).ArrayNum,local_res10[0]._0_1_,
             (<lambda_1> *)&local_110);
  iVar12 = (this->Hull).ArrayNum;
  local_108 = (pTVar18->AllocatorInstance).Data;
  if (1 < iVar12) {
    pFVar3 = local_108 + (longlong)iVar12 * 4;
    pFVar16 = local_108;
    pFVar8 = local_108;
    while (pFVar8 = pFVar8 + 4, pFVar8 != pFVar3) {
      local_138[0] = *(undefined4 *)pFVar16;
      uVar2 = *(undefined4 *)pFVar8;
      (**(code **)param_2)(&local_100,*(undefined8 *)&param_2->field_0x8,local_138);
      local_130[0] = uVar2;
      (**(code **)param_2)(&local_f0,*(undefined8 *)&param_2->field_0x8,local_130);
      if (((local_100 != local_f0) || (local_f8 != local_e8)) &&
         (pFVar16 = pFVar16 + 4, pFVar16 != pFVar8)) {
        *(undefined4 *)pFVar16 = *(undefined4 *)pFVar8;
      }
    }
    iVar12 = (int)((longlong)(pFVar16 + (4 - (longlong)local_108)) >> 2);
  }
  pTVar18 = &this->Hull;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(pTVar18,iVar12,Default);
  iVar12 = (this->Hull).ArrayNum;
  this->NumUniquePoints = iVar12;
  if (iVar12 < 3) {
    iVar13 = iVar12 + -1;
    if (iVar12 + -1 < 0) {
      iVar13 = 0;
    }
    this->Dimension = iVar13;
  }
  else {
    local_128[0] = *(undefined4 *)(pTVar18->AllocatorInstance).Data;
    (**(code **)param_2)(&local_90,*(undefined8 *)&param_2->field_0x8,local_128);
    if (((this->Hull).ArrayNum < 2) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return (bool)uVar11;
    }
    local_120[0] = *(undefined4 *)((this->Hull).AllocatorInstance.Data + 4);
    (**(code **)param_2)(&local_80,*(undefined8 *)&param_2->field_0x8,local_120);
    uVar15 = 2;
    if (2 < (this->Hull).ArrayNum) {
      lVar17 = 8;
      do {
        uVar14 = 0;
        if ((int)uVar15 < (this->Hull).ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        local_118[0] = *(undefined4 *)((this->Hull).AllocatorInstance.Data + lVar17);
        (**(code **)param_2)(&local_68,*(undefined8 *)&param_2->field_0x8,local_118);
        local_d0 = local_90;
        uStack_c8 = uStack_88;
        local_e0 = local_80;
        uStack_d8 = uStack_78;
        local_58 = local_68;
        uStack_50 = uStack_60;
        dVar7 = ShewchukExactPredicates::orient2d(&local_d0,&local_e0,&local_58);
        if (dVar7 != 0.0) {
          uVar15 = this->NumUniquePoints;
          this->Dimension = 2;
          local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_150.ArrayNum = 0;
          local_150.ArrayMax = 0;
          if ((int)uVar15 < 1) {
            if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
            }
          }
          else {
            iVar12 = Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,uVar15,&local_150.AllocatorInstance,&local_150.ArrayNum,
                                &local_150.ArrayMax);
            memset(local_150.AllocatorInstance.Data + (longlong)iVar12 * 4,0,
                   (longlong)(int)uVar15 << 2);
          }
          uVar4 = *(undefined8 *)param_2;
          uVar5 = *(undefined8 *)&param_2->field_0x8;
          local_15c = 0;
          local_158[0] = this->NumUniquePoints + -1;
          if (1 < this->NumUniquePoints) {
            local_160 = 0;
            local_164 = local_158[0] / 2;
            local_res8[0] = local_164 + 1;
            local_res10[0] = local_158[0];
            local_c0._0_8_ = uVar4;
            local_c0._8_8_ = uVar5;
            GetHull(this,&local_c0,&local_150,&local_160,&local_164);
            local_b0._0_8_ = uVar4;
            local_b0._8_8_ = uVar5;
            GetHull(this,&local_b0,&local_150,local_res8,local_res10);
            local_a0._0_8_ = uVar4;
            local_a0._8_8_ = uVar5;
            Merge(this,&local_a0,&local_150,local_160,local_164,local_res8[0],local_res10[0],
                  &local_15c,local_158);
          }
          TArray<int,TSizedDefaultAllocator<32>_>::SetNum
                    (pTVar18,(local_158[0] - local_15c) + 1,Default);
          if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.AllocatorInstance.Data);
          }
          return true;
        }
        uVar15 = uVar15 + 1;
        lVar17 = lVar17 + 4;
      } while ((int)uVar15 < (this->Hull).ArrayNum);
    }
    this->Dimension = 1;
  }
  return false;
}

// Solve @ 1433cf660

bool __thiscall
UE::Geometry::TConvexHull2<double>::Solve
          (TConvexHull2<double> *this,TArrayView<UE::Math::TVector2<double>_const_,int> *param_1)

{
  bool bVar1;
  undefined1 local_res10 [8];
  TArrayView<UE::Math::TVector2<double>_const_,int> *local_res18 [2];
  code *local_28;
  undefined1 *local_20;
  code *local_18;
  TArrayView<UE::Math::TVector2<double>_const_,int> **local_10;
  
  local_20 = local_res10;
  local_28 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TConvexHull2<double>::Solve'::__l2::<lambda_2>,bool,int>
             ::Call;
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TConvexHull2<double>::Solve'::__l2::<lambda_1>,UE::Math::TVector2<double>,int>
             ::Call;
  local_res18[0] = param_1;
  bVar1 = Solve(this,param_1->ArrayNum,
                (TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> *)&local_18,
                (TFunctionRef<bool___cdecl(int)> *)&local_28);
  return bVar1;
}

// Solve @ 1433cf6b0

bool __thiscall
UE::Geometry::TConvexHull2<double>::Solve
          (TConvexHull2<double> *this,TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,
          TFunctionRef<bool___cdecl(int)> *param_2)

{
  bool bVar1;
  TArrayView<UE::Math::TVector2<double>_const_,int> *local_res10 [3];
  TFunctionRef<bool___cdecl(int)> local_28;
  code *local_18;
  TArrayView<UE::Math::TVector2<double>_const_,int> **local_10;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_10 = local_res10;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TConvexHull2<double>::Solve'::__l2::<lambda_1>,UE::Math::TVector2<double>,int>
             ::Call;
  local_res10[0] = param_1;
  bVar1 = Solve(this,param_1->ArrayNum,
                (TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> *)&local_18,&local_28);
  return bVar1;
}

// SolveSimplePolygon @ 1433d0fb0

bool __thiscall
UE::Geometry::TConvexHull2<float>::SolveSimplePolygon
          (TConvexHull2<float> *this,int param_1,
          TFunctionRef<UE::Math::TVector2<float>___cdecl(int)> *param_2,bool param_3)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  undefined8 local_res8;
  uint local_108;
  uint local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8 [2];
  int local_e0 [2];
  uint local_d8 [2];
  uint local_d0 [2];
  uint local_c8 [2];
  undefined4 local_c0 [2];
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  float local_90 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [7];
  
  uVar10 = 0;
  iVar15 = 0;
  this->Dimension = 0;
  this->NumUniquePoints = 0;
  if (param_1 == 0) {
    piVar16 = &(this->Hull).ArrayMax;
    (this->Hull).ArrayNum = 0;
    if (*piVar16 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->Hull).AllocatorInstance,0,piVar16);
    }
    bVar5 = false;
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    (this->Hull).ArrayNum = 0;
    if ((this->Hull).ArrayMax < param_1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->Hull).AllocatorInstance,0,&(this->Hull).ArrayMax);
    }
    local_104 = 0;
    local_e8[0] = 0;
    (**(code **)param_2)(&local_f8,*(undefined8 *)&param_2->field_0x8,local_e8);
    uVar4 = local_f8;
    fVar18 = __real_3f800000;
    if (param_3) {
      fVar17 = 0.0;
    }
    else {
      local_e0[0] = param_1 + -1;
      (**(code **)param_2)(&local_a8,*(undefined8 *)&param_2->field_0x8,local_e0);
      local_res8._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
      local_res8._0_4_ = (float)uVar4;
      local_100 = local_a8;
      uVar4 = local_100;
      local_100._0_4_ = (float)local_a8;
      local_100._4_4_ = (float)((ulonglong)local_a8 >> 0x20);
      fVar17 = local_res8._4_4_ * (float)local_100 - (float)local_res8 * local_100._4_4_;
      local_100 = uVar4;
    }
    uVar11 = 1;
    local_res8 = local_f8;
    if (1 < param_1) {
      do {
        local_d8[0] = uVar11;
        (**(code **)param_2)(&local_b8,*(undefined8 *)&param_2->field_0x8,local_d8);
        uVar4 = CONCAT44(fStack_b4,local_b8);
        if ((local_b8 < (float)local_f8) ||
           ((bVar5 = local_b8 == (float)local_f8, bVar5 &&
            (bVar5 = fStack_b4 < local_f8._4_4_, bVar5)))) {
          local_104 = uVar11;
          local_f8 = uVar4;
        }
        if (!param_3) {
          fVar17 = fVar17 + ((float)local_res8 * fStack_b4 - local_res8._4_4_ * local_b8);
          local_res8 = uVar4;
          local_100 = uVar4;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < param_1);
    }
    piVar16 = &(this->Hull).ArrayMax;
    if ((!param_3) && (fVar17 < 0.0)) {
      fVar18 = __real_bf800000;
    }
    pFVar2 = (this->Hull).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_104) &&
        ((FScriptContainerElement *)&local_104 < pFVar2 + (longlong)*piVar16 * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar7 = (this->Hull).ArrayNum;
    if (iVar7 == *piVar16) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Hull).AllocatorInstance,piVar16);
    }
    uVar11 = local_104;
    (this->Hull).ArrayNum = iVar7 + 1;
    *(uint *)((this->Hull).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_104;
    local_108 = 0;
    if ((int)(local_104 + 1) < param_1) {
      local_108 = local_104 + 1;
    }
    local_d0[0] = local_108;
    (**(code **)param_2)(&local_f0,*(undefined8 *)&param_2->field_0x8,local_d0);
    uVar13 = uVar10;
    uVar12 = local_108;
    if ((int)(local_108 + 1) < param_1) {
      uVar13 = (ulonglong)(local_108 + 1);
    }
    while (uVar12 != uVar11) {
      uVar12 = (uint)uVar13;
      local_100._4_4_ = (float)((ulonglong)local_100 >> 0x20);
      local_100 = CONCAT44(local_100._4_4_,uVar12);
      local_c8[0] = uVar12;
      (**(code **)param_2)(&local_b0,*(undefined8 *)&param_2->field_0x8,local_c8);
      local_98 = local_f0;
      local_a0 = local_b0;
      fVar17 = ShewchukExactPredicatesFloat::orient2d
                         (local_90,(float *)&local_98,(float *)&local_a0);
      if (0.0 < fVar17 * fVar18) {
LAB_1433d13f0:
        pFVar2 = (this->Hull).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_108) &&
            ((FScriptContainerElement *)&local_108 < pFVar2 + (longlong)*piVar16 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar7 = (this->Hull).ArrayNum;
        if (iVar7 == *piVar16) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->Hull).AllocatorInstance,piVar16);
        }
        (this->Hull).ArrayNum = iVar7 + 1;
        *(uint *)((this->Hull).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_108;
      }
      else {
        iVar7 = (this->Hull).ArrayNum;
        local_f0 = local_f8;
        while (1 < iVar7) {
          if (((this->Hull).ArrayNum < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar7 = (this->Hull).ArrayNum;
          local_108 = *(uint *)((this->Hull).AllocatorInstance.Data + (longlong)iVar7 * 4 + -4);
          (this->Hull).ArrayNum = iVar7 + -1;
          uVar8 = 0;
          if ((int)(iVar7 - 2U) < iVar7 + -1) {
            uVar8 = ~(iVar7 - 2U) >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          local_c0[0] = *(undefined4 *)
                         ((this->Hull).AllocatorInstance.Data +
                         (longlong)(this->Hull).ArrayNum * 4 + -4);
          (**(code **)param_2)(&local_88,*(undefined8 *)&param_2->field_0x8,local_c0);
          uVar4 = local_88;
          local_78 = local_f0;
          local_80 = local_b0;
          local_70[0] = local_88;
          fVar17 = ShewchukExactPredicatesFloat::orient2d
                             ((float *)local_70,(float *)&local_78,(float *)&local_80);
          if (0.0 < fVar17 * fVar18) goto LAB_1433d13f0;
          local_f0 = uVar4;
          iVar7 = (this->Hull).ArrayNum;
        }
      }
      uVar13 = uVar10;
      if ((int)(uVar12 + 1) < param_1) {
        uVar13 = (ulonglong)(uVar12 + 1);
      }
      local_108 = uVar12;
      local_f8 = local_f0;
      local_f0 = local_b0;
      uVar12 = (uint)(float)local_100;
    }
    if (fVar18 < 0.0) {
      iVar7 = (this->Hull).ArrayNum;
      pFVar2 = (this->Hull).AllocatorInstance.Data;
      iVar9 = iVar7 / 2;
      if (0 < iVar9) {
        pFVar14 = pFVar2 + (longlong)(iVar7 + -1) * 4;
        do {
          uVar1 = *(undefined4 *)(pFVar2 + uVar10 * 4);
          *(undefined4 *)(pFVar2 + uVar10 * 4) = *(undefined4 *)pFVar14;
          uVar10 = uVar10 + 1;
          *(undefined4 *)pFVar14 = uVar1;
          pFVar14 = pFVar14 + -4;
        } while ((longlong)uVar10 < (longlong)iVar9);
      }
    }
    iVar7 = (this->Hull).ArrayNum;
    if (2 < iVar7) {
      iVar15 = 2;
    }
    bVar5 = 2 < iVar7;
    this->Dimension = iVar15;
  }
  return bVar5;
}

// SolveSimplePolygon @ 1433d1560

bool __thiscall
UE::Geometry::TConvexHull2<double>::SolveSimplePolygon
          (TConvexHull2<double> *this,int param_1,
          TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  int *piVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint local_188;
  uint local_184;
  undefined4 local_180 [2];
  int local_178 [2];
  uint local_170 [2];
  uint local_168 [2];
  uint local_160 [2];
  undefined4 local_158 [4];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double dStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8 [2];
  double local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8 [2];
  double local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  uVar15 = 0;
  iVar16 = 0;
  this->Dimension = 0;
  this->NumUniquePoints = 0;
  if (param_1 == 0) {
    piVar21 = &(this->Hull).ArrayMax;
    (this->Hull).ArrayNum = 0;
    if (*piVar21 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->Hull).AllocatorInstance,0,piVar21);
    }
    bVar10 = false;
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    (this->Hull).ArrayNum = 0;
    if ((this->Hull).ArrayMax < param_1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->Hull).AllocatorInstance,0,&(this->Hull).ArrayMax);
    }
    local_184 = 0;
    local_180[0] = 0;
    (**(code **)param_2)(&local_148,*(undefined8 *)&param_2->field_0x8,local_180);
    dVar3 = uStack_140;
    dVar5 = local_148;
    uVar22 = (undefined4)__real_3ff0000000000000;
    uVar23 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    if (param_3) {
      dVar5 = 0.0;
    }
    else {
      local_178[0] = param_1 + -1;
      (**(code **)param_2)(&local_108,*(undefined8 *)&param_2->field_0x8,local_178);
      dVar5 = dVar3 * local_108 - local_100 * dVar5;
    }
    uVar17 = 1;
    local_128 = local_148;
    dStack_120 = uStack_140;
    if (1 < param_1) {
      do {
        local_170[0] = uVar17;
        (**(code **)param_2)(&local_f8,*(undefined8 *)&param_2->field_0x8,local_170);
        if ((local_f8 < local_148) || ((local_f8 == local_148 && (dStack_f0 < uStack_140)))) {
          local_148 = local_f8;
          uStack_140 = dStack_f0;
          local_184 = uVar17;
        }
        if (!param_3) {
          dVar4 = local_128 * dStack_f0;
          dVar3 = dStack_120 * local_f8;
          local_128 = local_f8;
          dStack_120 = dStack_f0;
          dVar5 = dVar5 + (dVar4 - dVar3);
        }
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < param_1);
    }
    piVar21 = &(this->Hull).ArrayMax;
    if ((!param_3) && (dVar5 < 0.0)) {
      uVar22 = (undefined4)__real_bff0000000000000;
      uVar23 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    }
    pFVar1 = (this->Hull).AllocatorInstance.Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_184) &&
        ((FScriptContainerElement *)&local_184 < pFVar1 + (longlong)*piVar21 * 4)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar2 = (code *)swi(3);
      uVar11 = (*pcVar2)();
      return (bool)uVar11;
    }
    iVar12 = (this->Hull).ArrayNum;
    if (iVar12 == *piVar21) {
      iVar12 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&(this->Hull).AllocatorInstance,piVar21);
    }
    uVar17 = local_184;
    (this->Hull).ArrayNum = iVar12 + 1;
    *(uint *)((this->Hull).AllocatorInstance.Data + (longlong)iVar12 * 4) = local_184;
    uVar6 = (undefined4)local_148;
    uVar7 = local_148._4_4_;
    uVar8 = (undefined4)uStack_140;
    uVar9 = uStack_140._4_4_;
    local_188 = 0;
    if ((int)(local_184 + 1) < param_1) {
      local_188 = local_184 + 1;
    }
    local_168[0] = local_188;
    (**(code **)param_2)(&local_138,*(undefined8 *)&param_2->field_0x8,local_168);
    uVar19 = uVar15;
    if ((int)(local_188 + 1) < param_1) {
      uVar19 = (ulonglong)(local_188 + 1);
    }
    while (local_188 != uVar17) {
      uVar18 = (uint)uVar19;
      local_160[0] = uVar18;
      (**(code **)param_2)(&local_118,*(undefined8 *)&param_2->field_0x8,local_160);
      local_c8 = uVar6;
      uStack_c4 = uVar7;
      uStack_c0 = uVar8;
      uStack_bc = uVar9;
      dVar5 = ShewchukExactPredicates::orient2d((double *)&local_c8,local_d8,local_e8);
      if (0.0 < dVar5 * (double)CONCAT44(uVar23,uVar22)) {
LAB_1433d19a4:
        pFVar1 = (this->Hull).AllocatorInstance.Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_188) &&
            ((FScriptContainerElement *)&local_188 < pFVar1 + (longlong)*piVar21 * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar2 = (code *)swi(3);
          uVar11 = (*pcVar2)();
          return (bool)uVar11;
        }
        iVar12 = (this->Hull).ArrayNum;
        if (iVar12 == *piVar21) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->Hull).AllocatorInstance,piVar21);
        }
        (this->Hull).ArrayNum = iVar12 + 1;
        *(uint *)((this->Hull).AllocatorInstance.Data + (longlong)iVar12 * 4) = local_188;
      }
      else {
        iVar12 = (this->Hull).ArrayNum;
        local_138 = uVar6;
        uStack_134 = uVar7;
        uStack_130 = uVar8;
        uStack_12c = uVar9;
        while (1 < iVar12) {
          if (((this->Hull).ArrayNum < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar2 = (code *)swi(3);
            uVar11 = (*pcVar2)();
            return (bool)uVar11;
          }
          iVar12 = (this->Hull).ArrayNum;
          local_188 = *(uint *)((this->Hull).AllocatorInstance.Data + (longlong)iVar12 * 4 + -4);
          (this->Hull).ArrayNum = iVar12 + -1;
          uVar13 = 0;
          if ((int)(iVar12 - 2U) < iVar12 + -1) {
            uVar13 = ~(iVar12 - 2U) >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar2 = (code *)swi(3);
            uVar11 = (*pcVar2)();
            return (bool)uVar11;
          }
          local_158[0] = *(undefined4 *)
                          ((this->Hull).AllocatorInstance.Data +
                          (longlong)(this->Hull).ArrayNum * 4 + -4);
          (**(code **)param_2)(&local_b8,*(undefined8 *)&param_2->field_0x8,local_158);
          uVar9 = uStack_ac;
          uVar8 = uStack_b0;
          uVar7 = uStack_b4;
          uVar6 = local_b8;
          local_98 = (double)CONCAT44(uStack_134,local_138);
          uStack_90 = CONCAT44(uStack_12c,uStack_130);
          local_88 = local_b8;
          uStack_84 = uStack_b4;
          uStack_80 = uStack_b0;
          uStack_7c = uStack_ac;
          dVar5 = ShewchukExactPredicates::orient2d((double *)&local_88,&local_98,local_a8);
          if (0.0 < dVar5 * (double)CONCAT44(uVar23,uVar22)) goto LAB_1433d19a4;
          local_138 = uVar6;
          uStack_134 = uVar7;
          uStack_130 = uVar8;
          uStack_12c = uVar9;
          iVar12 = (this->Hull).ArrayNum;
        }
      }
      uVar19 = uVar15;
      uVar6 = local_138;
      uVar7 = uStack_134;
      uVar8 = uStack_130;
      uVar9 = uStack_12c;
      local_188 = uVar18;
      local_138 = local_118;
      uStack_134 = uStack_114;
      uStack_130 = uStack_110;
      uStack_12c = uStack_10c;
      if ((int)(uVar18 + 1) < param_1) {
        uVar19 = (ulonglong)(uVar18 + 1);
        local_138 = local_118;
        uStack_134 = uStack_114;
        uStack_130 = uStack_110;
        uStack_12c = uStack_10c;
      }
    }
    if ((double)CONCAT44(uVar23,uVar22) < 0.0) {
      iVar12 = (this->Hull).ArrayNum;
      pFVar1 = (this->Hull).AllocatorInstance.Data;
      iVar14 = iVar12 / 2;
      if (0 < iVar14) {
        pFVar20 = pFVar1 + (longlong)(iVar12 + -1) * 4;
        do {
          uVar22 = *(undefined4 *)(pFVar1 + uVar15 * 4);
          *(undefined4 *)(pFVar1 + uVar15 * 4) = *(undefined4 *)pFVar20;
          uVar15 = uVar15 + 1;
          *(undefined4 *)pFVar20 = uVar22;
          pFVar20 = pFVar20 + -4;
        } while ((longlong)uVar15 < (longlong)iVar14);
      }
    }
    iVar12 = (this->Hull).ArrayNum;
    if (2 < iVar12) {
      iVar16 = 2;
    }
    bVar10 = 2 < iVar12;
    this->Dimension = iVar16;
  }
  return bVar10;
}

