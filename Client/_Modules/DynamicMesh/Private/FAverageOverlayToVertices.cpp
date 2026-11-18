// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 12

// AverageOverlay<float,1> @ 14c6bec80

/* WARNING: Enum "ETriangleWeight": Some values do not have unique names */

bool __thiscall
UE::Geometry::FAverageOverlayToVertices::AverageOverlay<float,1>
          (FAverageOverlayToVertices *this,TDynamicMeshOverlay<float,1> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3)

{
  ETriangleWeight EVar1;
  bool bVar2;
  bool bVar3;
  <lambda_1> local_res10;
  TArray<double,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  TArray<float,TSizedDefaultAllocator<32>_> **local_30;
  TArray<float,TSizedDefaultAllocator<32>_> *local_28;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_20;
  TArray<double,TSizedDefaultAllocator<32>_> *local_18;
  
  if (param_1 == (TDynamicMeshOverlay<float,1> *)0x0) {
    bVar2 = false;
  }
  else {
    EVar1 = this->TriangleWeight;
    if ((EVar1 == Area) || (EVar1 == AngleArea)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    bVar3 = (EVar1 & ~AngleArea) == Angle;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    if ((this->Selection).ArrayNum == 0) {
      FAverageOverlayToVerticesLocals::AverageFullMesh<float,1>
                (this->Mesh,param_1,bVar2,bVar3,param_2,param_3,&local_58);
    }
    else {
      FAverageOverlayToVerticesLocals::AverageSelection<float,1>
                (this->Mesh,param_1,&this->Selection,bVar2,bVar3,param_2,param_3,&local_58);
    }
    local_18 = &local_58;
    local_48.DataPtr = (void **)0x0;
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FAverageOverlayToVertices::AverageOverlay<float,1>'::__l2::<lambda_1>,void,int>
               ::Call;
    local_30 = &local_28;
    local_48.ArrayNum = 0;
    local_28 = param_2;
    local_20 = param_3;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_38,
               local_res10,(uint)(this->bUseParallel == false),&local_48);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    bVar2 = true;
  }
  return bVar2;
}

// AverageOverlay<float,2> @ 14c6bedd0

/* WARNING: Enum "ETriangleWeight": Some values do not have unique names */

bool __thiscall
UE::Geometry::FAverageOverlayToVertices::AverageOverlay<float,2>
          (FAverageOverlayToVertices *this,TDynamicMeshOverlay<float,2> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3)

{
  ETriangleWeight EVar1;
  bool bVar2;
  bool bVar3;
  <lambda_1> local_res10;
  TArray<double,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  TArray<float,TSizedDefaultAllocator<32>_> **local_30;
  TArray<float,TSizedDefaultAllocator<32>_> *local_28;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_20;
  TArray<double,TSizedDefaultAllocator<32>_> *local_18;
  
  if (param_1 == (TDynamicMeshOverlay<float,2> *)0x0) {
    bVar2 = false;
  }
  else {
    EVar1 = this->TriangleWeight;
    if ((EVar1 == Area) || (EVar1 == AngleArea)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    bVar3 = (EVar1 & ~AngleArea) == Angle;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    if ((this->Selection).ArrayNum == 0) {
      FAverageOverlayToVerticesLocals::AverageFullMesh<float,2>
                (this->Mesh,param_1,bVar2,bVar3,param_2,param_3,&local_58);
    }
    else {
      FAverageOverlayToVerticesLocals::AverageSelection<float,2>
                (this->Mesh,param_1,&this->Selection,bVar2,bVar3,param_2,param_3,&local_58);
    }
    local_18 = &local_58;
    local_48.DataPtr = (void **)0x0;
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FAverageOverlayToVertices::AverageOverlay<float,2>'::__l2::<lambda_1>,void,int>
               ::Call;
    local_30 = &local_28;
    local_48.ArrayNum = 0;
    local_28 = param_2;
    local_20 = param_3;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_38,
               local_res10,(uint)(this->bUseParallel == false),&local_48);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    bVar2 = true;
  }
  return bVar2;
}

// AverageOverlay<float,3> @ 14c6bef20

/* WARNING: Enum "ETriangleWeight": Some values do not have unique names */

bool __thiscall
UE::Geometry::FAverageOverlayToVertices::AverageOverlay<float,3>
          (FAverageOverlayToVertices *this,TDynamicMeshOverlay<float,3> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3)

{
  ETriangleWeight EVar1;
  bool bVar2;
  bool bVar3;
  <lambda_1> local_res10;
  TArray<double,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  TArray<float,TSizedDefaultAllocator<32>_> **local_30;
  TArray<float,TSizedDefaultAllocator<32>_> *local_28;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_20;
  TArray<double,TSizedDefaultAllocator<32>_> *local_18;
  
  if (param_1 == (TDynamicMeshOverlay<float,3> *)0x0) {
    bVar2 = false;
  }
  else {
    EVar1 = this->TriangleWeight;
    if ((EVar1 == Area) || (EVar1 == AngleArea)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    bVar3 = (EVar1 & ~AngleArea) == Angle;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    if ((this->Selection).ArrayNum == 0) {
      FAverageOverlayToVerticesLocals::AverageFullMesh<float,3>
                (this->Mesh,param_1,bVar2,bVar3,param_2,param_3,&local_58);
    }
    else {
      FAverageOverlayToVerticesLocals::AverageSelection<float,3>
                (this->Mesh,param_1,&this->Selection,bVar2,bVar3,param_2,param_3,&local_58);
    }
    local_18 = &local_58;
    local_48.DataPtr = (void **)0x0;
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FAverageOverlayToVertices::AverageOverlay<float,3>'::__l2::<lambda_1>,void,int>
               ::Call;
    local_30 = &local_28;
    local_48.ArrayNum = 0;
    local_28 = param_2;
    local_20 = param_3;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_38,
               local_res10,(uint)(this->bUseParallel == false),&local_48);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    bVar2 = true;
  }
  return bVar2;
}

// AverageOverlay<float,4> @ 14c6bf070

/* WARNING: Enum "ETriangleWeight": Some values do not have unique names */

bool __thiscall
UE::Geometry::FAverageOverlayToVertices::AverageOverlay<float,4>
          (FAverageOverlayToVertices *this,TDynamicMeshOverlay<float,4> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3)

{
  ETriangleWeight EVar1;
  bool bVar2;
  bool bVar3;
  <lambda_1> local_res10;
  TArray<double,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  TArray<float,TSizedDefaultAllocator<32>_> **local_30;
  TArray<float,TSizedDefaultAllocator<32>_> *local_28;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_20;
  TArray<double,TSizedDefaultAllocator<32>_> *local_18;
  
  if (param_1 == (TDynamicMeshOverlay<float,4> *)0x0) {
    bVar2 = false;
  }
  else {
    EVar1 = this->TriangleWeight;
    if ((EVar1 == Area) || (EVar1 == AngleArea)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    bVar3 = (EVar1 & ~AngleArea) == Angle;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    if ((this->Selection).ArrayNum == 0) {
      FAverageOverlayToVerticesLocals::AverageFullMesh<float,4>
                (this->Mesh,param_1,bVar2,bVar3,param_2,param_3,&local_58);
    }
    else {
      FAverageOverlayToVerticesLocals::AverageSelection<float,4>
                (this->Mesh,param_1,&this->Selection,bVar2,bVar3,param_2,param_3,&local_58);
    }
    local_18 = &local_58;
    local_48.DataPtr = (void **)0x0;
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FAverageOverlayToVertices::AverageOverlay<float,4>'::__l2::<lambda_1>,void,int>
               ::Call;
    local_30 = &local_28;
    local_48.ArrayNum = 0;
    local_28 = param_2;
    local_20 = param_3;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_38,
               local_res10,(uint)(this->bUseParallel == false),&local_48);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    bVar2 = true;
  }
  return bVar2;
}

// AverageOverlay<double,3> @ 14c6bf1c0

/* WARNING: Enum "ETriangleWeight": Some values do not have unique names */

bool __thiscall
UE::Geometry::FAverageOverlayToVertices::AverageOverlay<double,3>
          (FAverageOverlayToVertices *this,TDynamicMeshOverlay<double,3> *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3)

{
  ETriangleWeight EVar1;
  bool bVar2;
  bool bVar3;
  <lambda_1> local_res10;
  TArray<double,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  TArray<double,TSizedDefaultAllocator<32>_> **local_30;
  TArray<double,TSizedDefaultAllocator<32>_> *local_28;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_20;
  TArray<double,TSizedDefaultAllocator<32>_> *local_18;
  
  if (param_1 == (TDynamicMeshOverlay<double,3> *)0x0) {
    bVar2 = false;
  }
  else {
    EVar1 = this->TriangleWeight;
    if ((EVar1 == Area) || (EVar1 == AngleArea)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    bVar3 = (EVar1 & ~AngleArea) == Angle;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    if ((this->Selection).ArrayNum == 0) {
      FAverageOverlayToVerticesLocals::AverageFullMesh<double,3>
                (this->Mesh,param_1,bVar2,bVar3,param_2,param_3,&local_58);
    }
    else {
      FAverageOverlayToVerticesLocals::AverageSelection<double,3>
                (this->Mesh,param_1,&this->Selection,bVar2,bVar3,param_2,param_3,&local_58);
    }
    local_18 = &local_58;
    local_48.DataPtr = (void **)0x0;
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FAverageOverlayToVertices::AverageOverlay<double,3>'::__l2::<lambda_1>,void,int>
               ::Call;
    local_30 = &local_28;
    local_48.ArrayNum = 0;
    local_28 = param_2;
    local_20 = param_3;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_38,
               local_res10,(uint)(this->bUseParallel == false),&local_48);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    bVar2 = true;
  }
  return bVar2;
}

// FAverageOverlayToVertices @ 14c6dd4c0

/* WARNING: Enum "ETriangleWeight": Some values do not have unique names */

FAverageOverlayToVertices * __thiscall
UE::Geometry::FAverageOverlayToVertices::FAverageOverlayToVertices
          (FAverageOverlayToVertices *this,FDynamicMesh3 *param_1)

{
  this->bUseParallel = true;
  this->_padding_ = (longlong)&___7FAverageOverlayToVertices_Geometry_UE__6B_;
  (this->Selection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Selection).ArrayNum = 0;
  (this->Selection).ArrayMax = 0;
  this->TriangleWeight = AngleArea;
  this->Mesh = param_1;
  return this;
}

// ~FAverageOverlayToVertices @ 14c6e10e0

/* WARNING: Enum "ETriangleWeight": Some values do not have unique names */

void __thiscall
UE::Geometry::FAverageOverlayToVertices::~FAverageOverlayToVertices(FAverageOverlayToVertices *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Selection).AllocatorInstance.Data;
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

// operator() @ 14c6e22c0

void __thiscall
`UE::Geometry::FAverageOverlayToVertices::AverageOverlay<float,1>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  lVar10 = (longlong)param_1;
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = uVar9;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar6 = __real_3ff0000000000000;
  if (*(char *)(lVar10 + *plVar3) != '\0') {
    plVar3 = *(longlong **)((longlong)this + 0x10);
    uVar8 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar8 = uVar9;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar2 = *(undefined8 *)(*plVar3 + lVar10 * 8);
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      plVar3 = *(longlong **)((longlong)this + 0x10);
      uVar8 = 0;
      if (param_1 < (int)plVar3[1]) {
        uVar8 = uVar9;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      dVar6 = dVar6 / *(double *)(*plVar3 + lVar10 * 8);
    }
    plVar3 = *(longlong **)this;
    uVar8 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar8 = uVar9;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)this;
    fVar1 = *(float *)(*plVar3 + lVar10 * 4);
    uVar8 = 0;
    if (param_1 < (int)plVar4[1]) {
      uVar8 = uVar9;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(float *)(*plVar4 + lVar10 * 4) = (float)((double)fVar1 * dVar6);
  }
  return;
}

// operator() @ 14c6e24c0

void __thiscall
`UE::Geometry::FAverageOverlayToVertices::AverageOverlay<float,2>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  lVar9 = (longlong)param_1;
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = uVar10;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar6 = __real_3ff0000000000000;
  if (*(char *)(lVar9 + *plVar3) != '\0') {
    plVar3 = *(longlong **)((longlong)this + 0x10);
    uVar8 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar8 = uVar10;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar2 = *(undefined8 *)(*plVar3 + lVar9 * 8);
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      plVar3 = *(longlong **)((longlong)this + 0x10);
      uVar8 = 0;
      if (param_1 < (int)plVar3[1]) {
        uVar8 = uVar10;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      dVar6 = dVar6 / *(double *)(*plVar3 + lVar9 * 8);
    }
    plVar3 = *(longlong **)this;
    uVar8 = param_1 * 2;
    uVar10 = 0;
    if ((int)uVar8 < (int)plVar3[1]) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)this;
    fVar1 = *(float *)(*plVar3 + (longlong)(int)uVar8 * 4);
    uVar10 = 0;
    if ((int)uVar8 < (int)plVar4[1]) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar3 = *(longlong **)this;
    *(float *)(*plVar4 + (longlong)(int)uVar8 * 4) = (float)((double)fVar1 * dVar6);
    uVar8 = uVar8 + 1;
    uVar10 = 0;
    if ((int)uVar8 < (int)plVar3[1]) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)this;
    fVar1 = *(float *)(*plVar3 + (longlong)(int)uVar8 * 4);
    uVar10 = 0;
    if ((int)uVar8 < (int)plVar4[1]) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(float *)(*plVar4 + (longlong)(int)uVar8 * 4) = (float)((double)fVar1 * dVar6);
  }
  return;
}

// operator() @ 14c6e2790

void __thiscall
`UE::Geometry::FAverageOverlayToVertices::AverageOverlay<float,3>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  lVar10 = (longlong)param_1;
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = uVar11;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar6 = __real_3ff0000000000000;
  if (*(char *)(lVar10 + *plVar3) != '\0') {
    plVar3 = *(longlong **)((longlong)this + 0x10);
    uVar8 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar8 = uVar11;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar2 = *(undefined8 *)(*plVar3 + lVar10 * 8);
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      plVar3 = *(longlong **)((longlong)this + 0x10);
      uVar8 = 0;
      if (param_1 < (int)plVar3[1]) {
        uVar8 = uVar11;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      dVar6 = dVar6 / *(double *)(*plVar3 + lVar10 * 8);
    }
    plVar3 = *(longlong **)this;
    uVar8 = param_1 * 3;
    uVar11 = 0;
    if ((int)uVar8 < (int)plVar3[1]) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)this;
    fVar1 = *(float *)(*plVar3 + (longlong)(int)uVar8 * 4);
    uVar11 = 0;
    if ((int)uVar8 < (int)plVar4[1]) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar11 = uVar8 + 1;
    plVar3 = *(longlong **)this;
    *(float *)(*plVar4 + (longlong)(int)uVar8 * 4) = (float)((double)fVar1 * dVar6);
    uVar9 = 0;
    if ((int)uVar11 < (int)plVar3[1]) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)this;
    fVar1 = *(float *)(*plVar3 + (longlong)(int)uVar11 * 4);
    uVar9 = 0;
    if ((int)uVar11 < (int)plVar4[1]) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar8 = uVar8 + 2;
    plVar3 = *(longlong **)this;
    *(float *)(*plVar4 + (longlong)(int)uVar11 * 4) = (float)((double)fVar1 * dVar6);
    uVar11 = 0;
    if ((int)uVar8 < (int)plVar3[1]) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)this;
    fVar1 = *(float *)(*plVar3 + (longlong)(int)uVar8 * 4);
    uVar11 = 0;
    if ((int)uVar8 < (int)plVar4[1]) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(float *)(*plVar4 + (longlong)(int)uVar8 * 4) = (float)((double)fVar1 * dVar6);
  }
  return;
}

// operator() @ 14c6e2b20

void __thiscall
`UE::Geometry::FAverageOverlayToVertices::AverageOverlay<float,4>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  lVar9 = (longlong)param_1;
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar11 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar11 = uVar10;
  }
  if (uVar11 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar6 = __real_3ff0000000000000;
  if (*(char *)(lVar9 + *plVar3) != '\0') {
    plVar3 = *(longlong **)((longlong)this + 0x10);
    uVar11 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar11 = uVar10;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar2 = *(undefined8 *)(*plVar3 + lVar9 * 8);
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      plVar3 = *(longlong **)((longlong)this + 0x10);
      uVar11 = 0;
      if (param_1 < (int)plVar3[1]) {
        uVar11 = uVar10;
      }
      if (uVar11 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      dVar6 = dVar6 / *(double *)(*plVar3 + lVar9 * 8);
    }
    plVar3 = *(longlong **)this;
    uVar11 = param_1 * 4;
    uVar10 = 0;
    if ((int)uVar11 < (int)plVar3[1]) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)this;
    fVar1 = *(float *)(*plVar3 + (longlong)(int)uVar11 * 4);
    uVar10 = 0;
    if ((int)uVar11 < (int)plVar4[1]) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar10 = uVar11 + 1;
    plVar3 = *(longlong **)this;
    *(float *)(*plVar4 + (longlong)(int)uVar11 * 4) = (float)((double)fVar1 * dVar6);
    uVar8 = 0;
    if ((int)uVar10 < (int)plVar3[1]) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)this;
    fVar1 = *(float *)(*plVar3 + (longlong)(int)uVar10 * 4);
    uVar8 = 0;
    if ((int)uVar10 < (int)plVar4[1]) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar8 = uVar11 + 2;
    plVar3 = *(longlong **)this;
    *(float *)(*plVar4 + (longlong)(int)uVar10 * 4) = (float)((double)fVar1 * dVar6);
    uVar10 = 0;
    if ((int)uVar8 < (int)plVar3[1]) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)this;
    fVar1 = *(float *)(*plVar3 + (longlong)(int)uVar8 * 4);
    uVar10 = 0;
    if ((int)uVar8 < (int)plVar4[1]) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar11 = uVar11 + 3;
    plVar3 = *(longlong **)this;
    *(float *)(*plVar4 + (longlong)(int)uVar8 * 4) = (float)((double)fVar1 * dVar6);
    uVar10 = 0;
    if ((int)uVar11 < (int)plVar3[1]) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)this;
    fVar1 = *(float *)(*plVar3 + (longlong)(int)uVar11 * 4);
    uVar10 = 0;
    if ((int)uVar11 < (int)plVar4[1]) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(float *)(*plVar4 + (longlong)(int)uVar11 * 4) = (float)((double)fVar1 * dVar6);
  }
  return;
}

// operator() @ 14c6e2f70

void __thiscall
`UE::Geometry::FAverageOverlayToVertices::AverageOverlay<double,3>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 uVar1;
  double dVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  lVar10 = (longlong)param_1;
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = uVar11;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar6 = __real_3ff0000000000000;
  if (*(char *)(lVar10 + *plVar3) != '\0') {
    plVar3 = *(longlong **)((longlong)this + 0x10);
    uVar8 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar8 = uVar11;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar1 = *(undefined8 *)(*plVar3 + lVar10 * 8);
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      plVar3 = *(longlong **)((longlong)this + 0x10);
      uVar8 = 0;
      if (param_1 < (int)plVar3[1]) {
        uVar8 = uVar11;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      dVar6 = dVar6 / *(double *)(*plVar3 + lVar10 * 8);
    }
    plVar3 = *(longlong **)this;
    uVar8 = param_1 * 3;
    uVar11 = 0;
    if ((int)uVar8 < (int)plVar3[1]) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)this;
    dVar2 = *(double *)(*plVar3 + (longlong)(int)uVar8 * 8);
    uVar11 = 0;
    if ((int)uVar8 < (int)plVar4[1]) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar11 = uVar8 + 1;
    plVar3 = *(longlong **)this;
    *(double *)(*plVar4 + (longlong)(int)uVar8 * 8) = dVar6 * dVar2;
    uVar9 = 0;
    if ((int)uVar11 < (int)plVar3[1]) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)this;
    dVar2 = *(double *)(*plVar3 + (longlong)(int)uVar11 * 8);
    uVar9 = 0;
    if ((int)uVar11 < (int)plVar4[1]) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar8 = uVar8 + 2;
    plVar3 = *(longlong **)this;
    *(double *)(*plVar4 + (longlong)(int)uVar11 * 8) = dVar6 * dVar2;
    uVar11 = 0;
    if ((int)uVar8 < (int)plVar3[1]) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)this;
    dVar2 = *(double *)(*plVar3 + (longlong)(int)uVar8 * 8);
    uVar11 = 0;
    if ((int)uVar8 < (int)plVar4[1]) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(double *)(*plVar4 + (longlong)(int)uVar8 * 8) = dVar6 * dVar2;
  }
  return;
}

