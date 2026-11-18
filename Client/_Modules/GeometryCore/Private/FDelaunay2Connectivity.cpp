// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 20

// GetFilledTrianglesGeneralizedWinding<float> @ 14334bf90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FDelaunay2Connectivity::GetFilledTrianglesGeneralizedWinding<float>
          (FDelaunay2Connectivity *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Math::TVector2<float>_const_,int> *param_2,
          TArrayView<UE::Geometry::FIndex2i_const_,int> *param_3,EFillMode param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  TArray<bool,TSizedDefaultAllocator<32>_> local_a8;
  TArrayView<std::nullptr_t,int> local_98;
  code *local_88;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> **local_80;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_78;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_68;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_58;
  TArrayView<UE::Math::TVector2<float>_const_,int> *local_50;
  TArrayView<UE::Geometry::FIndex2i_const_,int> *local_48;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_40;
  EFillMode *local_38;
  
  if (param_4 == Solid) {
    if (2 < (byte)LogGeometry._0_1_) {
      Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_UE::Geometry::FDelaunay2Connectivity::GetFilledTrianglesGeneralizedWinding<float>(TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>&___ptr64,TArrayView<UE::Math::TVector2<float>_const_,int>,TArrayView<UE::Geometry::FIndex2i_const_,int>,UE::Geometry::FDelaunay2::EFillMode)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_78.DataPtr = param_3->DataPtr;
    local_78.ArrayNum = param_3->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&param_3->field_0xc;
    GetFilledTriangles(this,param_1,&local_78,param_4);
    return false;
  }
  pTVar7 = GetTriangles(this,&local_68);
  uVar9 = 0;
  if (param_1 != pTVar7) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_1->ArrayNum = pTVar7->ArrayNum;
    param_1->ArrayMax = pTVar7->ArrayMax;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_a8,param_1->ArrayNum,Default)
  ;
  local_40 = &local_a8;
  local_38 = &param_4;
  local_88 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDelaunay2Connectivity::GetFilledTrianglesGeneralizedWinding<float>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_80 = &local_58;
  local_98.DataPtr = (void **)0x0;
  local_98.ArrayNum = 0;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_1->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_88,
             (<lambda_1>)(undefined1)param_4,None,&local_98);
  uVar10 = uVar9;
  uVar11 = uVar9;
  if (0 < param_1->ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar12 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < local_a8.ArrayNum) {
        uVar5 = uVar12;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (local_a8.AllocatorInstance.Data[uVar10] == (FScriptContainerElement)0x0) {
        uVar5 = 0;
        if ((int)uVar8 < local_a8.ArrayNum) {
          uVar5 = uVar12;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar6 = (local_a8.ArrayNum - uVar8) + -1;
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove(local_a8.AllocatorInstance.Data + uVar10,
                  local_a8.AllocatorInstance.Data + (local_a8.ArrayNum - iVar6),(longlong)iVar6);
        }
        local_a8.ArrayNum = local_a8.ArrayNum + -1;
        uVar5 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar5 = uVar12;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        iVar6 = param_1->ArrayNum + ~uVar8;
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove(pFVar1 + uVar11,pFVar1 + (longlong)(param_1->ArrayNum - iVar6) * 0xc,
                  (longlong)iVar6 * 0xc);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        uVar8 = uVar8 - 1;
        uVar10 = uVar10 - 1;
        uVar11 = uVar11 - 0xc;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 1;
      uVar11 = uVar11 + 0xc;
    } while ((int)(uVar8 + 1) < param_1->ArrayNum);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return true;
}

// GetFilledTrianglesGeneralizedWinding<double> @ 14334c2a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FDelaunay2Connectivity::GetFilledTrianglesGeneralizedWinding<double>
          (FDelaunay2Connectivity *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_2,
          TArrayView<UE::Geometry::FIndex2i_const_,int> *param_3,EFillMode param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  TArray<bool,TSizedDefaultAllocator<32>_> local_a8;
  TArrayView<std::nullptr_t,int> local_98;
  code *local_88;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> **local_80;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_78;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_68;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_58;
  TArrayView<UE::Math::TVector2<double>_const_,int> *local_50;
  TArrayView<UE::Geometry::FIndex2i_const_,int> *local_48;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_40;
  EFillMode *local_38;
  
  if (param_4 == Solid) {
    if (2 < (byte)LogGeometry._0_1_) {
      Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_UE::Geometry::FDelaunay2Connectivity::GetFilledTrianglesGeneralizedWinding<double>(TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>&___ptr64,TArrayView<UE::Math::TVector2<double>_const_,int>,TArrayView<UE::Geometry::FIndex2i_const_,int>,UE::Geometry::FDelaunay2::EFillMode)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_78.DataPtr = param_3->DataPtr;
    local_78.ArrayNum = param_3->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&param_3->field_0xc;
    GetFilledTriangles(this,param_1,&local_78,param_4);
    return false;
  }
  pTVar7 = GetTriangles(this,&local_68);
  uVar9 = 0;
  if (param_1 != pTVar7) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_1->ArrayNum = pTVar7->ArrayNum;
    param_1->ArrayMax = pTVar7->ArrayMax;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_a8,param_1->ArrayNum,Default)
  ;
  local_40 = &local_a8;
  local_38 = &param_4;
  local_88 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDelaunay2Connectivity::GetFilledTrianglesGeneralizedWinding<double>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_80 = &local_58;
  local_98.DataPtr = (void **)0x0;
  local_98.ArrayNum = 0;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_1->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_88,
             (<lambda_1>)(undefined1)param_4,None,&local_98);
  uVar10 = uVar9;
  uVar11 = uVar9;
  if (0 < param_1->ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar12 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < local_a8.ArrayNum) {
        uVar5 = uVar12;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (local_a8.AllocatorInstance.Data[uVar10] == (FScriptContainerElement)0x0) {
        uVar5 = 0;
        if ((int)uVar8 < local_a8.ArrayNum) {
          uVar5 = uVar12;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar6 = (local_a8.ArrayNum - uVar8) + -1;
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove(local_a8.AllocatorInstance.Data + uVar10,
                  local_a8.AllocatorInstance.Data + (local_a8.ArrayNum - iVar6),(longlong)iVar6);
        }
        local_a8.ArrayNum = local_a8.ArrayNum + -1;
        uVar5 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar5 = uVar12;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        iVar6 = param_1->ArrayNum + ~uVar8;
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove(pFVar1 + uVar11,pFVar1 + (longlong)(param_1->ArrayNum - iVar6) * 0xc,
                  (longlong)iVar6 * 0xc);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        uVar8 = uVar8 - 1;
        uVar10 = uVar10 - 1;
        uVar11 = uVar11 - 0xc;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 1;
      uVar11 = uVar11 + 0xc;
    } while ((int)(uVar8 + 1) < param_1->ArrayNum);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return true;
}

// ~FDelaunay2Connectivity @ 14336a320

void __thiscall
UE::Geometry::FDelaunay2Connectivity::~FDelaunay2Connectivity(FDelaunay2Connectivity *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->DuplicateVertices).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DuplicateVertices).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DuplicateVertices);
  pFVar2 = (this->VertexAdjCache).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->EdgeToVert).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EdgeToVert).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator() @ 14336c3f0

void __thiscall
`UE::Geometry::FDelaunay2Connectivity::GetFilledTrianglesGeneralizedWinding<float>'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TVector2<float> *pTVar9;
  TVector2<float> *pTVar10;
  uint uVar11;
  undefined1 uVar12;
  uint *puVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_88;
  int iStack_84;
  
  plVar4 = *(longlong **)this;
  lVar14 = (longlong)param_1;
  uVar11 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar5 = *plVar4;
  uVar2 = *(undefined8 *)(lVar5 + lVar14 * 0xc);
  iVar3 = *(int *)(lVar5 + 8 + lVar14 * 0xc);
  local_88 = (int)uVar2;
  pTVar9 = TArrayView<UE::Math::TVector2<float>_const_,int>::operator[]
                     (*(TArrayView<UE::Math::TVector2<float>_const_,int> **)((longlong)this + 8),
                      local_88);
  iStack_84 = (int)((ulonglong)uVar2 >> 0x20);
  pTVar10 = TArrayView<UE::Math::TVector2<float>_const_,int>::operator[]
                      (*(TArrayView<UE::Math::TVector2<float>_const_,int> **)((longlong)this + 8),
                       iStack_84);
  fVar20 = (pTVar10->field0_0x0)._s_0.X;
  fVar21 = (pTVar10->field0_0x0)._s_0.Y;
  fVar17 = (pTVar9->field0_0x0)._s_0.X;
  fVar18 = (pTVar9->field0_0x0)._s_0.Y;
  pTVar9 = TArrayView<UE::Math::TVector2<float>_const_,int>::operator[]
                     (*(TArrayView<UE::Math::TVector2<float>_const_,int> **)((longlong)this + 8),
                      iVar3);
  fVar19 = 0.0;
  fVar20 = (fVar20 + fVar17 + (pTVar9->field0_0x0)._s_0.X) * __real_3eaaaaab;
  puVar13 = (uint *)**(undefined8 **)((longlong)this + 0x10);
  fVar21 = (fVar21 + fVar18 + (pTVar9->field0_0x0)._s_0.Y) * __real_3eaaaaab;
  puVar1 = puVar13 + (longlong)*(int *)(*(undefined8 **)((longlong)this + 0x10) + 1) * 2;
  for (; puVar13 != puVar1; puVar13 = puVar13 + 2) {
    uVar11 = *puVar13;
    plVar4 = *(longlong **)((longlong)this + 8);
    uVar8 = 0;
    if ((int)uVar11 < (int)plVar4[1]) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *plVar4;
    plVar4 = *(longlong **)((longlong)this + 8);
    fVar17 = *(float *)(lVar5 + (longlong)(int)uVar11 * 8) - fVar20;
    uVar8 = puVar13[1];
    fVar18 = *(float *)(lVar5 + 4 + (longlong)(int)uVar11 * 8) - fVar21;
    uVar11 = 0;
    if ((int)uVar8 < (int)plVar4[1]) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *plVar4;
    fVar16 = *(float *)(lVar5 + (longlong)(int)uVar8 * 8) - fVar20;
    fVar15 = *(float *)(lVar5 + 4 + (longlong)(int)uVar8 * 8) - fVar21;
    fVar17 = atan2f(fVar15 * fVar17 - fVar16 * fVar18,fVar15 * fVar18 + fVar16 * fVar17);
    fVar19 = fVar19 + fVar17;
  }
  iVar3 = **(int **)((longlong)this + 0x20);
  uVar11 = (int)ROUND(fVar19 * __real_3ea2f983 + __real_3f000000) >> 1;
  if (iVar3 == 3) {
    if (-1 < (int)uVar11) goto LAB_14336c676;
LAB_14336c71b:
    uVar12 = 1;
  }
  else {
    if (iVar3 == 2) {
joined_r0x00014336c715:
      if (uVar11 != 0) goto LAB_14336c71b;
    }
    else if (iVar3 == 1) {
      if (0 < (int)uVar11) goto LAB_14336c71b;
    }
    else if (iVar3 == 4) {
      uVar11 = uVar11 & 1;
      goto joined_r0x00014336c715;
    }
LAB_14336c676:
    uVar12 = 0;
  }
  plVar4 = *(longlong **)((longlong)this + 0x18);
  uVar11 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(undefined1 *)(lVar14 + *plVar4) = uVar12;
  return;
}

// operator() @ 14336c730

void __thiscall
`UE::Geometry::FDelaunay2Connectivity::GetFilledTrianglesGeneralizedWinding<double>'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  TVector2<double> *pTVar13;
  TVector2<double> *pTVar14;
  uint uVar15;
  undefined1 uVar16;
  uint *puVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  int local_88;
  int iStack_84;
  
  plVar7 = *(longlong **)this;
  lVar18 = (longlong)param_1;
  uVar15 = 0;
  if (param_1 < (int)plVar7[1]) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar8 = *plVar7;
  uVar2 = *(undefined8 *)(lVar8 + lVar18 * 0xc);
  iVar6 = *(int *)(lVar8 + 8 + lVar18 * 0xc);
  local_88 = (int)uVar2;
  pTVar13 = TArrayView<UE::Math::TVector2<double>_const_,int>::operator[]
                      (*(TArrayView<UE::Math::TVector2<double>_const_,int> **)((longlong)this + 8),
                       local_88);
  iStack_84 = (int)((ulonglong)uVar2 >> 0x20);
  pTVar14 = TArrayView<UE::Math::TVector2<double>_const_,int>::operator[]
                      (*(TArrayView<UE::Math::TVector2<double>_const_,int> **)((longlong)this + 8),
                       iStack_84);
  dVar3 = (pTVar14->field0_0x0)._s_0.X;
  dVar4 = (pTVar14->field0_0x0)._s_0.Y;
  dVar19 = (pTVar13->field0_0x0)._s_0.X;
  dVar5 = (pTVar13->field0_0x0)._s_0.Y;
  pTVar13 = TArrayView<UE::Math::TVector2<double>_const_,int>::operator[]
                      (*(TArrayView<UE::Math::TVector2<double>_const_,int> **)((longlong)this + 8),
                       iVar6);
  dVar10 = 0.0;
  dVar3 = (dVar3 + dVar19 + (pTVar13->field0_0x0)._s_0.X) * __real_3fd5555555555555;
  puVar17 = (uint *)**(undefined8 **)((longlong)this + 0x10);
  dVar4 = (dVar4 + dVar5 + (pTVar13->field0_0x0)._s_0.Y) * __real_3fd5555555555555;
  puVar1 = puVar17 + (longlong)*(int *)(*(undefined8 **)((longlong)this + 0x10) + 1) * 2;
  for (; puVar17 != puVar1; puVar17 = puVar17 + 2) {
    uVar15 = *puVar17;
    plVar7 = *(longlong **)((longlong)this + 8);
    uVar12 = 0;
    if ((int)uVar15 < (int)plVar7[1]) {
      uVar12 = ~uVar15 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar8 = *plVar7;
    uVar12 = puVar17[1];
    plVar7 = *(longlong **)((longlong)this + 8);
    dVar19 = *(double *)(lVar8 + (longlong)(int)uVar15 * 0x10) - dVar3;
    dVar5 = *(double *)(lVar8 + 8 + (longlong)(int)uVar15 * 0x10) - dVar4;
    uVar15 = 0;
    if ((int)uVar12 < (int)plVar7[1]) {
      uVar15 = ~uVar12 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar8 = *plVar7;
    dVar21 = *(double *)(lVar8 + (longlong)(int)uVar12 * 0x10) - dVar3;
    dVar20 = *(double *)(lVar8 + 8 + (longlong)(int)uVar12 * 0x10) - dVar4;
    dVar19 = atan2(dVar20 * dVar19 - dVar21 * dVar5,dVar20 * dVar5 + dVar21 * dVar19);
    dVar10 = dVar10 + dVar19;
  }
  iVar6 = **(int **)((longlong)this + 0x20);
  uVar15 = (int)ROUND(dVar10 * __real_3fd45f306dc9c883 + __real_3fe0000000000000) >> 1;
  if (iVar6 == 3) {
    if (-1 < (int)uVar15) goto LAB_14336c9c2;
LAB_14336ca67:
    uVar16 = 1;
  }
  else {
    if (iVar6 == 2) {
joined_r0x00014336ca61:
      if (uVar15 != 0) goto LAB_14336ca67;
    }
    else if (iVar6 == 1) {
      if (0 < (int)uVar15) goto LAB_14336ca67;
    }
    else if (iVar6 == 4) {
      uVar15 = uVar15 & 1;
      goto joined_r0x00014336ca61;
    }
LAB_14336c9c2:
    uVar16 = 0;
  }
  plVar7 = *(longlong **)((longlong)this + 0x18);
  uVar15 = 0;
  if (param_1 < (int)plVar7[1]) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  *(undefined1 *)(lVar18 + *plVar7) = uVar16;
  return;
}

// operator() @ 143370540

void __thiscall
`UE::Geometry::FDelaunay2Connectivity::GetFilledTriangles'::__l2::<lambda_1>::operator()
          (void *this,TArrayView<UE::Geometry::FIndex2i_const_,int> *param_1,
          TSet<UE::Geometry::FIndex2i,DefaultKeyFuncs<UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
          *param_2)

{
  FIndex2i_u_0 *pFVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  FIndex2i_u_0 *pFVar7;
  undefined4 uVar8;
  longlong lVar9;
  FIndex2i local_res10 [2];
  FIndex2i_u_0 local_res20;
  
  pFVar7 = &param_1->DataPtr->field0_0x0;
  pFVar1 = pFVar7 + param_1->ArrayNum;
  if (pFVar7 != pFVar1) {
    do {
      lVar2 = *(longlong *)this;
      local_res20 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar7->_s_0;
      uVar8 = local_res20._s_0.A;
      uVar6 = local_res20._s_0.B;
      if (*(char *)(lVar2 + 0x62) != '\0') {
        if (*(int *)(lVar2 + 0x70) != *(int *)(lVar2 + 0x9c)) {
          lVar9 = lVar2 + 0xa0;
          if (*(longlong *)(lVar2 + 0xa8) != 0) {
            lVar9 = *(longlong *)(lVar2 + 0xa8);
          }
          uVar5 = *(uint *)(lVar9 + ((ulonglong)(*(int *)(lVar2 + 0xb0) - 1) &
                                    (ulonglong)local_res20 & 0xffffffff) * 4);
          if (uVar5 != 0xffffffff) {
            do {
              puVar3 = (uint *)((longlong)(int)uVar5 * 0x10 + *(longlong *)(lVar2 + 0x68));
              if (*puVar3 == local_res20._s_0.A) {
                if (uVar5 != 0xffffffff) {
                  puVar4 = puVar3 + 1;
                  if (puVar3 == (uint *)0x0) {
                    puVar4 = (uint *)0x0;
                  }
                  if (puVar4 != (uint *)0x0) {
                    local_res20._s_0.A = *puVar4;
                    uVar8 = *puVar4;
                  }
                  goto LAB_1433705fa;
                }
                break;
              }
              uVar5 = puVar3[2];
            } while (uVar5 != 0xffffffff);
          }
        }
        if (*(int *)(lVar2 + 0x70) != *(int *)(lVar2 + 0x9c)) {
LAB_1433705fa:
          lVar9 = lVar2 + 0xa0;
          if (*(longlong *)(lVar2 + 0xa8) != 0) {
            lVar9 = *(longlong *)(lVar2 + 0xa8);
          }
          uVar5 = *(uint *)(lVar9 + (ulonglong)(*(int *)(lVar2 + 0xb0) - 1U & local_res20._s_0.B) *
                                    4);
          uVar6 = local_res20._s_0.B;
          if (uVar5 != 0xffffffff) {
            do {
              puVar3 = (uint *)((longlong)(int)uVar5 * 0x10 + *(longlong *)(lVar2 + 0x68));
              if (*puVar3 == local_res20._s_0.B) {
                puVar4 = puVar3 + 1;
                if (puVar3 == (uint *)0x0) {
                  puVar4 = (uint *)0x0;
                }
                if (puVar4 != (uint *)0x0) {
                  local_res20._s_0.B = *puVar4;
                  uVar6 = *puVar4;
                }
                break;
              }
              uVar5 = puVar3[2];
            } while (uVar5 != 0xffffffff);
          }
        }
      }
      if ((int)uVar6 < (int)uVar8) {
        local_res20._s_0.B = uVar8;
        local_res20._s_0.A = uVar6;
      }
      TSet<UE::Geometry::FIndex2i,DefaultKeyFuncs<UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>::
      Emplace<UE::Geometry::FIndex2i_const_&>(param_2,local_res10,(bool *)&local_res20);
      pFVar7 = pFVar7 + 1;
    } while (pFVar7 != pFVar1);
  }
  return;
}

// operator() @ 143374ce0

void __thiscall
`UE::Geometry::FDelaunay2Connectivity::GetFilledTriangles'::__l2::<lambda_2>::operator()
          (void *this,FIndex2i *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  TTuple<UE::Geometry::FIndex2i,int> *pTVar10;
  int *piVar11;
  int iVar12;
  longlong *plVar13;
  FIndex2i_u_0 local_res8;
  FIndex2i_u_0 local_res20;
  int local_48;
  int iStack_44;
  undefined4 local_40;
  int local_3c;
  int iStack_38;
  int local_34;
  
  if (*(int *)this != 0) {
    local_res20._s_0 = (param_1->field0_0x0)._s_0;
    iVar12 = local_res20._s_0.B;
    iVar8 = local_res20._s_0.A;
    if (iVar12 < iVar8) {
      local_res20._s_0.B = iVar8;
      local_res20._s_0.A = iVar12;
    }
    pTVar10 = TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
                      *)**(undefined8 **)((longlong)this + 0x18),(FIndex2i *)&local_res20._s_0);
    piVar11 = (int *)&pTVar10->field_0x8;
    if (pTVar10 == (TTuple<UE::Geometry::FIndex2i,int> *)0x0) {
      piVar11 = (int *)0x0;
    }
    local_34 = 0;
    if (piVar11 != (int *)0x0) {
      local_34 = *piVar11;
      if (iVar8 <= iVar12) {
        local_34 = -*piVar11;
      }
    }
    local_3c = (param_1->field0_0x0)._s_0.B;
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
    iStack_38 = (param_1->field0_0x0)._s_0.A;
    local_34 = local_34 + param_2;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_3c) &&
        ((FScriptContainerElement *)&local_3c <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0xc)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = *(int *)&pFVar3[1].Data;
    piVar11 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar8 == *piVar11) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,pFVar3,piVar11);
    }
    *(int *)&pFVar3[1].Data = iVar8 + 1;
    pFVar4 = pFVar3->Data;
    *(ulonglong *)(pFVar4 + (longlong)iVar8 * 0xc) = CONCAT44(iStack_38,local_3c);
    *(int *)(pFVar4 + (longlong)iVar8 * 0xc + 8) = local_34;
    return;
  }
  local_res8._s_0 = (param_1->field0_0x0)._s_0;
  iVar8 = local_res8._s_0.B;
  if (iVar8 < local_res8._s_0.A) {
    local_res8._s_0.B = local_res8._s_0.A;
    local_res8._s_0.A = iVar8;
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  uVar7 = FCrc::MemCrc_DEPRECATED(&local_res8,8,0);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar13 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar13 = plVar1 + 7;
    }
    iVar8 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar1[9] - 1U & uVar7) * 4);
    if (iVar8 != -1) {
      lVar2 = *plVar1;
      do {
        lVar9 = (longlong)iVar8;
        if ((*(int *)(lVar2 + lVar9 * 0x14) == local_res8._s_0.A) &&
           (*(int *)(lVar2 + 4 + lVar9 * 0x14) == local_res8._s_0.B)) {
          if (iVar8 != -1) {
            return;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0xc + lVar9 * 0x14);
      } while (iVar8 != -1);
    }
  }
  local_48 = (param_1->field0_0x0)._s_0.B;
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
  iStack_44 = (param_1->field0_0x0)._s_0.A;
  local_40 = 1;
  if (((pFVar3->Data <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0xc)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)&pFVar3[1].Data;
  piVar11 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar8 == *piVar11) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,pFVar3,piVar11);
  }
  *(int *)&pFVar3[1].Data = iVar8 + 1;
  pFVar4 = pFVar3->Data;
  *(ulonglong *)(pFVar4 + (longlong)iVar8 * 0xc) = CONCAT44(iStack_44,local_48);
  *(undefined4 *)(pFVar4 + (longlong)iVar8 * 0xc + 8) = local_40;
  return;
}

// operator() @ 14337a1b0

bool __thiscall
`UE::Geometry::FDelaunay2Connectivity::GetFilledTriangles'::__l2::<lambda_4>::operator()
          (void *this,FIndex2i *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  longlong *plVar12;
  int local_18;
  int iStack_14;
  int local_10;
  
  iStack_14 = (param_1->field0_0x0)._s_0.A;
  plVar3 = *(longlong **)this;
  local_10 = (param_1->field0_0x0)._s_0.B;
  local_18 = param_2;
  uVar9 = FCrc::MemCrc_DEPRECATED(&local_18,0xc,0);
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar12 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar12 = plVar3 + 7;
    }
    iVar10 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar3[9] - 1U & uVar9) * 4);
    if (iVar10 != -1) {
      while (((lVar2 = *plVar3 + (longlong)iVar10 * 0x18,
              *(int *)(*plVar3 + (longlong)iVar10 * 0x18) != local_18 ||
              (*(int *)(lVar2 + 4) != iStack_14)) || (*(int *)(lVar2 + 8) != local_10))) {
        iVar10 = *(int *)(lVar2 + 0x10);
        if (iVar10 == -1) {
          return true;
        }
      }
      if (iVar10 != -1) {
        pcVar11 = (char *)(lVar2 + 0xc);
        if (lVar2 == 0) {
          pcVar11 = (char *)0x0;
        }
        if ((pcVar11 != (char *)0x0) && (*pcVar11 != '\0')) {
          pFVar4 = *(ForAnyElementType **)((longlong)this + 8);
          if ((pFVar4->Data <= (FScriptContainerElement *)&local_18) &&
             ((FScriptContainerElement *)&local_18 <
              pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 0xc)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
          }
          iVar10 = *(int *)&pFVar4[1].Data;
          piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,pFVar4,piVar1);
          }
          *(int *)&pFVar4[1].Data = iVar10 + 1;
          pFVar5 = pFVar4->Data;
          *(ulonglong *)(pFVar5 + (longlong)iVar10 * 0xc) = CONCAT44(iStack_14,local_18);
          *(int *)(pFVar5 + (longlong)iVar10 * 0xc + 8) = local_10;
        }
      }
    }
  }
  return true;
}

// AddTriangle @ 143380e80

void __thiscall
UE::Geometry::FDelaunay2Connectivity::AddTriangle(FDelaunay2Connectivity *this,FIndex3i *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FIndex2i_u_0 local_res8;
  FIndex2i_u_0 local_res10;
  FIndex2i_u_0 local_res18;
  
  local_res8._s_0.A = (param_1->field0_0x0)._s_0.A;
  local_res8._s_0.B = (param_1->field0_0x0)._s_0.B;
  TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
  ::Emplace<UE::Geometry::FIndex2i,int_const_&>
            ((TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
              *)this,(FIndex2i *)&local_res8._s_0,&(param_1->field0_0x0)._s_0.C);
  local_res10._s_0.A = (param_1->field0_0x0)._s_0.B;
  local_res10._s_0.B = (param_1->field0_0x0)._s_0.C;
  TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
  ::Emplace<UE::Geometry::FIndex2i,int_const_&>
            ((TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
              *)this,(FIndex2i *)&local_res10._s_0,(int *)param_1);
  local_res18._s_0.A = (param_1->field0_0x0)._s_0.C;
  local_res18._s_0.B = (param_1->field0_0x0)._s_0.A;
  TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
  ::Emplace<UE::Geometry::FIndex2i,int_const_&>
            ((TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
              *)this,(FIndex2i *)&local_res18._s_0,&(param_1->field0_0x0)._s_0.B);
  if (this->bUseAdjCache != false) {
    uVar4 = (param_1->field0_0x0)._s_0.B + 1;
    uVar6 = (param_1->field0_0x0)._s_0.A + 1;
    uVar5 = (param_1->field0_0x0)._s_0.C + 1;
    uVar3 = 0;
    if ((int)uVar6 < (this->VertexAdjCache).ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
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
    *(uint *)((this->VertexAdjCache).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = uVar4;
    uVar3 = 0;
    if ((int)uVar4 < (this->VertexAdjCache).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
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
    *(uint *)((this->VertexAdjCache).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) = uVar5;
    uVar3 = 0;
    if ((int)uVar5 < (this->VertexAdjCache).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
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
    *(uint *)((this->VertexAdjCache).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = uVar6;
  }
  return;
}

// DeleteTriangle @ 143395e90

void __thiscall
UE::Geometry::FDelaunay2Connectivity::DeleteTriangle(FDelaunay2Connectivity *this,FIndex3i *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FIndex2i_u_0 local_res8;
  FIndex2i_u_0 local_res10;
  FIndex2i_u_0 local_res18 [2];
  
  local_res8._s_0.A = (param_1->field0_0x0)._s_0.A;
  local_res8._s_0.B = (param_1->field0_0x0)._s_0.B;
  if (*(int *)&(this->EdgeToVert).field_0x8 != *(int *)&(this->EdgeToVert).field_0x34) {
    uVar3 = FCrc::MemCrc_DEPRECATED(&local_res8,8,0);
    TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::Geometry::FIndex2i>
              ((TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
                *)this,uVar3,(FIndex2i *)&local_res8._s_0);
  }
  local_res10._s_0.A = (param_1->field0_0x0)._s_0.B;
  local_res10._s_0.B = (param_1->field0_0x0)._s_0.C;
  if (*(int *)&(this->EdgeToVert).field_0x8 != *(int *)&(this->EdgeToVert).field_0x34) {
    uVar3 = FCrc::MemCrc_DEPRECATED(&local_res10,8,0);
    TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::Geometry::FIndex2i>
              ((TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
                *)this,uVar3,(FIndex2i *)&local_res10._s_0);
  }
  local_res18[0]._0_4_ = (param_1->field0_0x0)._s_0.C;
  local_res18[0]._4_4_ = (param_1->field0_0x0)._s_0.A;
  if (*(int *)&(this->EdgeToVert).field_0x8 != *(int *)&(this->EdgeToVert).field_0x34) {
    uVar3 = FCrc::MemCrc_DEPRECATED(local_res18,8,0);
    TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::Geometry::FIndex2i>
              ((TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
                *)this,uVar3,(FIndex2i *)&local_res18[0]._s_0);
  }
  if (this->bUseAdjCache != false) {
    uVar4 = (param_1->field0_0x0)._s_0.B + 1;
    uVar5 = (param_1->field0_0x0)._s_0.A + 1;
    uVar6 = (param_1->field0_0x0)._s_0.C + 1;
    uVar3 = 0;
    if ((int)uVar5 < (this->VertexAdjCache).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(uint *)((this->VertexAdjCache).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) == uVar4
       ) {
      uVar3 = 0;
      if ((int)uVar5 < (this->VertexAdjCache).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)((this->VertexAdjCache).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) =
           0xffffffff;
    }
    uVar3 = 0;
    if ((int)uVar4 < (this->VertexAdjCache).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(uint *)((this->VertexAdjCache).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) == uVar6
       ) {
      uVar3 = 0;
      if ((int)uVar4 < (this->VertexAdjCache).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)((this->VertexAdjCache).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) =
           0xffffffff;
    }
    uVar3 = 0;
    if ((int)uVar6 < (this->VertexAdjCache).ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(uint *)((this->VertexAdjCache).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) == uVar5
       ) {
      uVar3 = 0;
      if ((int)uVar6 < (this->VertexAdjCache).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)((this->VertexAdjCache).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) =
           0xffffffff;
    }
  }
  return;
}

// EnableVertexAdjacency @ 14339c8d0

void __thiscall
UE::Geometry::FDelaunay2Connectivity::EnableVertexAdjacency
          (FDelaunay2Connectivity *this,int param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res18 [2];
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if ((this->bUseAdjCache == false) || ((this->VertexAdjCache).ArrayNum < param_1 + 1)) {
    this->bUseAdjCache = true;
    local_res18[0] = -1;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(&this->VertexAdjCache,local_res18,param_1 + 1);
    iVar9 = *(int *)&(this->EdgeToVert).field_0x28;
    puVar1 = &(this->EdgeToVert).field_0x10;
    iVar12 = 0;
    iVar14 = 0;
    uVar6 = 1;
    iVar7 = 0;
    if (iVar9 != 0) {
      puVar15 = *(uint **)&(this->EdgeToVert).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar8 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar7 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14339c9bd;
        uVar11 = puVar15[lVar8 + 1];
      }
      uVar6 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res20 = (int)lVar8;
      iVar7 = local_res20 + -1 + iVar14;
      if (iVar9 < iVar7) {
        iVar7 = iVar9;
      }
    }
LAB_14339c9bd:
    uVar11 = *(uint *)&(this->EdgeToVert).field_0x28;
    uVar10 = uVar11 & 0xffffffe0;
    TStack_68._padding_ = CONCAT44(uVar6,iVar12);
    TStack_68.CurrentBitIndex = iVar7;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    iVar9 = (int)uVar11 >> 5;
    TStack_68._28_4_ = iVar7;
    TStack_68.BaseBitIndex = iVar14;
    uStack_48 = CONCAT44(uStack_74,
                         *(int *)&(this->EdgeToVert).field_0x8 -
                         *(int *)&(this->EdgeToVert).field_0x34);
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (((int)uVar11 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *(uint *)&(this->EdgeToVert).field_0x28;
    if (uVar11 != uVar6) {
      puVar13 = *(undefined1 **)&(this->EdgeToVert).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar9 * 4);
      while (uVar11 == 0) {
        lVar8 = (longlong)iVar9;
        uVar10 = uVar10 + 0x20;
        iVar9 = iVar9 + 1;
        uVar11 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_14339cac0;
        uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar11 = (int)lVar8 + -1 + uVar10;
      if ((int)uVar6 < (int)uVar11) {
        uVar11 = uVar6;
      }
    }
LAB_14339cac0:
    while( true ) {
      if (*(int *)&(this->EdgeToVert).field_0x8 - *(int *)&(this->EdgeToVert).field_0x34 !=
          (int)uStack_48) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_68.CurrentBitIndex == uVar11) &&
         (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      uVar3 = *(undefined8 *)
               (*(longlong *)&this->EdgeToVert + (longlong)TStack_68.CurrentBitIndex * 0x14);
      iVar9 = (int)uVar3;
      uVar10 = iVar9 + 1;
      uVar6 = 0;
      if ((int)uVar10 < (this->VertexAdjCache).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(int *)((this->VertexAdjCache).AllocatorInstance.Data + (longlong)iVar9 * 4 + 4) =
           (int)((ulonglong)uVar3 >> 0x20) + 1;
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
  }
  return;
}

// FixDuplicatesOnEdge @ 1433a1410

void __thiscall
UE::Geometry::FDelaunay2Connectivity::FixDuplicatesOnEdge
          (FDelaunay2Connectivity *this,FIndex2i *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  puVar5 = &(this->DuplicateVertices).field_0x40;
  uVar1 = (param_1->field0_0x0)._s_0.A;
  if (*(int *)&(this->DuplicateVertices).field_0x8 != *(int *)&(this->DuplicateVertices).field_0x34)
  {
    puVar4 = *(undefined1 **)puVar5;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->DuplicateVertices).field_0x38;
    }
    uVar6 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->DuplicateVertices).field_0x48 - 1U & uVar1) * 4);
    if (uVar6 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar6 * 0x10 + *(longlong *)&this->DuplicateVertices);
        if (*puVar3 == uVar1) {
          if (uVar6 != 0xffffffff) {
            puVar2 = puVar3 + 1;
            if (puVar3 == (uint *)0x0) {
              puVar2 = (uint *)0x0;
            }
            if (puVar2 != (uint *)0x0) {
              (param_1->field0_0x0)._s_0.A = *puVar2;
            }
          }
          break;
        }
        uVar6 = puVar3[2];
      } while (uVar6 != 0xffffffff);
    }
  }
  uVar1 = (param_1->field0_0x0)._s_0.B;
  if (*(int *)&(this->DuplicateVertices).field_0x8 != *(int *)&(this->DuplicateVertices).field_0x34)
  {
    puVar5 = *(undefined1 **)puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->DuplicateVertices).field_0x38;
    }
    uVar6 = *(uint *)(puVar5 + (ulonglong)
                               (*(int *)&(this->DuplicateVertices).field_0x48 - 1U & uVar1) * 4);
    if (uVar6 != 0xffffffff) {
      while (puVar3 = (uint *)((longlong)(int)uVar6 * 0x10 + *(longlong *)&this->DuplicateVertices),
            *puVar3 != uVar1) {
        uVar6 = puVar3[2];
        if (uVar6 == 0xffffffff) {
          return;
        }
      }
      puVar2 = puVar3 + 1;
      if (puVar3 == (uint *)0x0) {
        puVar2 = (uint *)0x0;
      }
      if (puVar2 != (uint *)0x0) {
        (param_1->field0_0x0)._s_0.B = *puVar2;
      }
    }
  }
  return;
}

// GetCachedAdjVertex @ 1433a2d70

int __thiscall
UE::Geometry::FDelaunay2Connectivity::GetCachedAdjVertex
          (FDelaunay2Connectivity *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2
          )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_2 + 1;
  uVar3 = 0;
  if ((int)uVar5 < param_1->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 4) + -1;
}

// GetEdge @ 1433a35c0

FIndex2i __thiscall
UE::Geometry::FDelaunay2Connectivity::GetEdge(FDelaunay2Connectivity *this,int param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  FDelaunay2Connectivity *pFVar5;
  bool bVar6;
  int iVar7;
  TTuple<UE::Geometry::FIndex2i,int> *pTVar8;
  FIndex2i FVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  FIndex2i_u_0 FVar13;
  int iVar14;
  uint uVar15;
  int in_R8D;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  FIndex2i local_a4;
  FDelaunay2Connectivity *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FDelaunay2Connectivity *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  FVar13._s_0.B = in_register_00000014;
  FVar13._s_0.A = param_1;
  if ((this->bUseAdjCache == false) ||
     (iVar7 = GetCachedAdjVertex(this,&this->VertexAdjCache,in_R8D), iVar7 == -2)) {
    iVar7 = *(int *)&(this->EdgeToVert).field_0x28;
    iStack_90 = 0;
    puVar1 = &(this->EdgeToVert).field_0x10;
    uStack_8c = 1;
    iStack_7c = iStack_90;
    local_78 = iStack_90;
    if (iVar7 != 0) {
      puVar17 = *(uint **)&(this->EdgeToVert).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar15 = *puVar17;
      while (uVar15 == 0) {
        lVar11 = (longlong)iStack_90;
        local_78 = local_78 + 0x20;
        iStack_90 = iStack_90 + 1;
        iStack_7c = iVar7;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1433a36bd;
        uVar15 = puVar17[lVar11 + 1];
      }
      uStack_8c = -uVar15 & uVar15;
      uVar2 = (ulonglong)uStack_8c * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iStack_7c = local_78 + -1 + (int)lVar11;
      if (iVar7 < iStack_7c) {
        iStack_7c = iVar7;
      }
    }
LAB_1433a36bd:
    uVar15 = *(uint *)&(this->EdgeToVert).field_0x28;
    uVar18 = uVar15 & 0xffffffe0;
    iStack_70 = *(int *)&(this->EdgeToVert).field_0x8 - *(int *)&(this->EdgeToVert).field_0x34;
    uStack_80 = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
    TStack_60.CurrentBitIndex = iStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar15 >> 5;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    local_98 = this;
    local_88 = puVar1;
    iStack_74 = iStack_7c;
    local_68 = this;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar15 < 0) || (iVar7 < (int)uVar15)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      FVar9.field0_0x0 = (FIndex2i_u_0)(*pcVar4)();
      return (FIndex2i)FVar9.field0_0x0;
    }
    uVar12 = *(uint *)&(this->EdgeToVert).field_0x28;
    if (uVar15 != uVar12) {
      puVar16 = *(undefined1 **)&(this->EdgeToVert).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
      while (uVar15 == 0) {
        lVar11 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar15 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_1433a37c0;
        uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar15 = (int)lVar11 + -1 + uVar18;
      if ((int)uVar12 < (int)uVar15) {
        uVar15 = uVar12;
      }
    }
LAB_1433a37c0:
    do {
      pFVar5 = local_68;
      if (*(int *)&(local_68->EdgeToVert).field_0x8 - *(int *)&(local_68->EdgeToVert).field_0x34 !=
          (int)uStack_40) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_60.CurrentBitIndex == uVar15) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar5 == this))
      {
        iVar14 = -2;
        *(int *)FVar13 = -2;
        goto LAB_1433a38b2;
      }
      piVar10 = (int *)(*(longlong *)&pFVar5->EdgeToVert +
                       (longlong)TStack_60.CurrentBitIndex * 0x14);
      if (this->bUseAdjCache != false) {
        uVar3 = *(undefined8 *)piVar10;
        iVar7 = (int)uVar3;
        uVar12 = iVar7 + 1;
        uVar18 = 0;
        if ((int)uVar12 < (this->VertexAdjCache).ArrayNum) {
          uVar18 = ~uVar12 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          FVar9.field0_0x0 = (FIndex2i_u_0)(*pcVar4)();
          return (FIndex2i)FVar9.field0_0x0;
        }
        *(int *)((this->VertexAdjCache).AllocatorInstance.Data + (longlong)iVar7 * 4 + 4) =
             (int)((ulonglong)uVar3 >> 0x20) + 1;
      }
      if (in_R8D == *piVar10) goto LAB_1433a3891;
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while( true );
  }
  local_a4.field0_0x0._s_0.B = iVar7;
  pTVar8 = TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
                   *)this,&local_a4);
  iVar14 = -2;
  piVar10 = (int *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<UE::Geometry::FIndex2i,int> *)0x0) {
    piVar10 = (int *)0x0;
  }
  if (piVar10 != (int *)0x0) {
    iVar14 = *piVar10;
  }
  *(int *)FVar13 = iVar7;
LAB_1433a38b2:
  *(int *)((longlong)FVar13 + 4) = iVar14;
  return (FIndex2i)FVar13;
LAB_1433a3891:
  *(int *)FVar13 = piVar10[1];
  iVar14 = piVar10[2];
  goto LAB_1433a38b2;
}

// GetFilledTriangles @ 1433a5b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FDelaunay2Connectivity::GetFilledTriangles
          (FDelaunay2Connectivity *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Geometry::FIndex2i_const_,int> *param_2,
          TArrayView<UE::Geometry::FIndex2i_const_,int> *param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  FIndex2i *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  code *pcVar8;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar9;
  TArrayView<UE::Geometry::FIndex2i_const_,int> *pTVar10;
  FDelaunay2Connectivity *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  FIndex2i *pFVar19;
  ForAnyElementType FVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  ForElementType<FSetElementId> FVar26;
  uint *puVar27;
  undefined1 auStackY_368 [32];
  ForAnyElementType local_318;
  int local_310;
  int iStack_30c;
  ForAnyElementType local_308;
  undefined8 local_300;
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6 [6];
  int local_2f0;
  int local_2ec;
  int local_2e8;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  int local_2d0;
  int iStack_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  int local_2b8;
  int iStack_2b4;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  TArrayView<UE::Geometry::FIndex2i_const_,int> *local_278;
  undefined8 local_270;
  FDelaunay2Connectivity *local_268;
  ulonglong local_260;
  int local_258;
  int iStack_254;
  undefined8 local_250;
  int local_248;
  int iStack_244;
  undefined8 local_240;
  int local_238;
  int iStack_234;
  undefined8 local_230;
  int local_228;
  int iStack_224;
  undefined8 local_220;
  FDelaunay2Connectivity *local_218;
  int iStack_210;
  uint uStack_20c;
  undefined1 *local_208;
  undefined4 uStack_200;
  int iStack_1fc;
  int local_1f8;
  int iStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_1e8;
  undefined1 local_1e0 [8];
  int local_1d8;
  int local_1d4;
  FDelaunay2Connectivity *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  int *local_1a0;
  undefined1 *local_198;
  int *local_190;
  undefined1 *local_188;
  <lambda_4> local_178;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_168;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_158;
  TSet<TTuple<UE::Geometry::FIndex3i,bool>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,bool,0>,FDefaultSetAllocator>
  local_148;
  TSet<UE::Geometry::FIndex2i,DefaultKeyFuncs<UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
  local_f8;
  TSet<UE::Geometry::FIndex2i,DefaultKeyFuncs<UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_168.DataPtr = param_2->DataPtr;
  local_168.ArrayNum = param_2->ArrayNum;
  local_168._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  local_f8.Elements._0_8_ = 0;
  local_f8.Elements._8_8_ = 0;
  local_f8.Elements._32_8_ = 0;
  local_f8.Elements._40_4_ = 0;
  local_f8.Elements._44_4_ = 0x80;
  local_f8.Elements._48_4_ = 0xffffffff;
  local_f8.Elements._52_4_ = 0;
  local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_f8.HashSize = 0;
  local_278 = param_3;
  local_268 = this;
  local_1e8 = param_1;
  `UE::Geometry::FDelaunay2Connectivity::GetFilledTriangles'::__l2::<lambda_1>::operator()
            (&local_268,&local_168,&local_a8);
  local_158.DataPtr = param_3->DataPtr;
  local_158.ArrayNum = param_3->ArrayNum;
  local_158._12_4_ = *(undefined4 *)&param_3->field_0xc;
  `UE::Geometry::FDelaunay2Connectivity::GetFilledTriangles'::__l2::<lambda_1>::operator()
            (&local_268,&local_158,&local_f8);
  puVar7 = &(this->EdgeToVert).field_0x10;
  local_148.Elements._0_8_ = 0;
  local_148.Elements._8_8_ = 0;
  local_148.Elements._32_8_ = 0;
  uStack_20c = 1;
  local_148.Elements._40_4_ = 0;
  local_148.Elements._44_4_ = 0x80;
  local_1f8 = 0;
  local_148.Elements._48_4_ = 0xffffffff;
  local_148.Elements._52_4_ = 0;
  local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_148.HashSize = 0;
  local_308.Data = (FScriptContainerElement *)0x0;
  local_300 = 0;
  local_318.Data = (FScriptContainerElement *)0x0;
  local_310 = 0;
  iStack_30c = 0;
  iVar14 = *(int *)&(this->EdgeToVert).field_0x28;
  iStack_1fc = 0;
  iStack_210 = 0;
  if (iVar14 != 0) {
    puVar27 = *(uint **)&(this->EdgeToVert).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar7;
    }
    uVar25 = *puVar27;
    local_1f8 = 0;
    while (uVar25 == 0) {
      lVar18 = (longlong)iStack_210;
      local_1f8 = local_1f8 + 0x20;
      iStack_210 = iStack_210 + 1;
      iStack_1fc = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_210) goto LAB_1433a5d30;
      uVar25 = puVar27[lVar18 + 1];
    }
    uStack_20c = -uVar25 & uVar25;
    uVar21 = (ulonglong)uStack_20c * 2 + 1;
    lVar18 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1d4 = (int)lVar18;
    iStack_1fc = local_1d4 + -1 + local_1f8;
    if (iVar14 < iStack_1fc) {
      iStack_1fc = iVar14;
    }
  }
LAB_1433a5d30:
  uVar25 = *(uint *)&(this->EdgeToVert).field_0x28;
  uVar24 = uVar25 & 0xffffffe0;
  iStack_1f0 = *(int *)&(this->EdgeToVert).field_0x8 - *(int *)&(this->EdgeToVert).field_0x34;
  uStack_200 = 0xffffffff;
  TStack_1c8._padding_ = CONCAT44(uStack_20c,iStack_210);
  TStack_1c8.CurrentBitIndex = iStack_1fc;
  TStack_1c8.UnvisitedBitMask = 0xffffffff;
  iVar23 = (int)uVar25 >> 5;
  TStack_1c8._28_4_ = iStack_1fc;
  TStack_1c8.BaseBitIndex = local_1f8;
  uStack_1a8 = CONCAT44(uStack_1ec,iStack_1f0);
  local_218 = this;
  local_208 = puVar7;
  iStack_1f4 = iStack_1fc;
  local_1d0 = this;
  TStack_1c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar7;
  if ((((int)uVar25 < 0) || (iVar14 < (int)uVar25)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  uVar6 = *(uint *)&(this->EdgeToVert).field_0x28;
  if (uVar25 != uVar6) {
    puVar22 = *(undefined1 **)&(this->EdgeToVert).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar7;
    }
    uVar25 = -1 << ((byte)uVar25 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar23 * 4);
    while (uVar25 == 0) {
      lVar18 = (longlong)iVar23;
      uVar24 = uVar24 + 0x20;
      iVar23 = iVar23 + 1;
      uVar25 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23) goto LAB_1433a5e32;
      uVar25 = *(uint *)(puVar22 + lVar18 * 4 + 4);
    }
    uVar21 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1d8 = (int)lVar18;
    uVar25 = local_1d8 + -1 + uVar24;
    if ((int)uVar6 < (int)uVar25) {
      uVar25 = uVar6;
    }
  }
LAB_1433a5e32:
  do {
    pFVar11 = local_1d0;
    if (*(int *)&(local_1d0->EdgeToVert).field_0x8 - *(int *)&(local_1d0->EdgeToVert).field_0x34 !=
        (int)uStack_1a8) {
      local_2f8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2f8);
    }
    if (((TStack_1c8.CurrentBitIndex == uVar25) &&
        (TStack_1c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar7)) && (pFVar11 == this))
    {
      lVar18 = 0;
      do {
        pTVar9 = local_1e8;
        if ((int)local_300 == 0) {
joined_r0x0001433a65ff:
          do {
            do {
              local_1e8 = pTVar9;
              if (local_310 == 0) {
                piVar1 = &pTVar9->ArrayMax;
                pTVar9->ArrayNum = 0;
                if (pTVar9->ArrayMax < 0) {
                  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,0,&pTVar9->AllocatorInstance,0,piVar1);
                }
                uVar25 = local_148.Elements._8_4_ - local_148.Elements._52_4_;
                if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
                  Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
                }
                if (*piVar1 < (int)uVar25) {
                  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,uVar25,&pTVar9->AllocatorInstance,pTVar9->ArrayNum,piVar1);
                }
                local_178.InBoundary =
                     (TMap<UE::Geometry::FIndex3i,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,bool,0>_>
                      *)&local_148;
                local_178.TrianglesOut = pTVar9;
                EnumerateTriangles<_UE::Geometry::FDelaunay2Connectivity::GetFilledTriangles_::__l2::<lambda_4>_>
                          (this,&local_178,true);
                if (local_318.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_318.Data);
                }
                if (local_308.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_308.Data);
                }
                local_148.HashSize = 0;
                if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_148.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex3i,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex3i,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_148.Elements);
                local_f8.HashSize = 0;
                if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_f8.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<UE::Geometry::FIndex2i>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<UE::Geometry::FIndex2i>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_f8.Elements);
                local_a8.HashSize = 0;
                if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_a8.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<UE::Geometry::FIndex2i>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<UE::Geometry::FIndex2i>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_a8.Elements);
                return true;
              }
              if ((local_310 < 1) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar8 = (code *)swi(3);
                uVar13 = (*pcVar8)();
                return (bool)uVar13;
              }
              pFVar4 = local_318.Data + (longlong)(local_310 + -1) * 8;
              local_2c0 = *(undefined8 *)pFVar4;
              iVar14 = (local_310 - (local_310 + -1)) + -1;
              if (iVar14 != 0) {
                memmove(pFVar4,pFVar4 + 8,(longlong)iVar14 << 3);
              }
              local_310 = local_310 + -1;
              uVar25 = FCrc::MemCrc_DEPRECATED(&local_2c0,8,0);
              lVar5 = lVar18;
              if (*(int *)&(this->EdgeToVert).field_0x8 != *(int *)&(this->EdgeToVert).field_0x34) {
                puVar7 = *(undefined1 **)&(this->EdgeToVert).field_0x40;
                puVar22 = &(this->EdgeToVert).field_0x38;
                if (puVar7 != (undefined1 *)0x0) {
                  puVar22 = puVar7;
                }
                iVar14 = *(int *)(puVar22 +
                                 (ulonglong)(*(int *)&(this->EdgeToVert).field_0x48 - 1U & uVar25) *
                                 4);
                if (iVar14 != -1) {
                  iVar23 = (int)local_2c0;
                  do {
                    lVar17 = *(longlong *)&this->EdgeToVert + (longlong)iVar14 * 0x14;
                    if ((*(int *)(*(longlong *)&this->EdgeToVert + (longlong)iVar14 * 0x14) ==
                         iVar23) && (*(int *)(lVar17 + 4) == local_2c0._4_4_)) {
                      if ((iVar14 != -1) && (lVar5 = lVar17, lVar17 != 0)) goto LAB_1433a6726;
                      break;
                    }
                    iVar14 = *(int *)(lVar17 + 0xc);
                  } while (iVar14 != -1);
                }
              }
              lVar17 = lVar5;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x27b,L"");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                uVar13 = (*pcVar8)();
                return (bool)uVar13;
              }
              iVar23 = (int)local_2c0;
LAB_1433a6726:
              iVar14 = *(int *)(lVar17 + 8);
              if (iVar23 < local_2c0._4_4_) {
                local_2f0 = iVar23;
                local_2ec = local_2c0._4_4_;
                local_2e8 = iVar14;
                if (iVar14 < iVar23) {
                  local_2f0 = iVar14;
                  local_2ec = iVar23;
                  local_2e8 = local_2c0._4_4_;
                }
              }
              else {
                local_2f0 = local_2c0._4_4_;
                local_2ec = iVar14;
                local_2e8 = iVar23;
                if (iVar14 < local_2c0._4_4_) {
                  local_2f0 = iVar14;
                  local_2ec = iVar23;
                  local_2e8 = local_2c0._4_4_;
                }
              }
              pTVar9 = local_1e8;
            } while (local_2f0 < 0);
            uVar25 = FCrc::MemCrc_DEPRECATED(&local_2f0,0xc,0);
            if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
              FVar26 = (ForElementType<FSetElementId>)&local_148.Hash;
              if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar26 = local_148.Hash.SecondaryData;
              }
              iVar23 = *(int *)((longlong)FVar26 + (ulonglong)(local_148.HashSize - 1U & uVar25) * 4
                               );
              while (iVar23 != -1) {
                lVar5 = local_148.Elements._0_8_ + (longlong)iVar23 * 0x18;
                if (((*(int *)(local_148.Elements._0_8_ + (longlong)iVar23 * 0x18) == local_2f0) &&
                    (*(int *)(lVar5 + 4) == local_2ec)) && (*(int *)(lVar5 + 8) == local_2e8)) {
                  if (iVar23 != -1) {
                    lVar17 = lVar5 + 0xc;
                    if (lVar5 == 0) {
                      lVar17 = lVar18;
                    }
                    pTVar9 = local_1e8;
                    if (lVar17 != 0) goto joined_r0x0001433a65ff;
                  }
                  break;
                }
                iVar23 = *(int *)(lVar5 + 0x10);
              }
            }
            local_190 = &local_2f0;
            local_2f6[0] = 1;
            local_188 = local_2f6;
            TSet<TTuple<UE::Geometry::FIndex3i,bool>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,bool,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<UE::Geometry::FIndex3i_const_&,bool_&&>_>
                      (&local_148,
                       (TPairInitializer<UE::Geometry::FIndex3i_const_&,bool_&&> *)(local_1e0 + 4),
                       (bool *)&local_190);
            local_238 = local_2c0._4_4_;
            local_230 = CONCAT44(iVar14,local_2c0._4_4_);
            iVar23 = iVar14;
            iVar15 = local_2c0._4_4_;
            if (iVar14 < local_2c0._4_4_) {
              iVar23 = local_2c0._4_4_;
              iVar15 = iVar14;
            }
            pFVar19 = local_278->DataPtr;
            pFVar3 = pFVar19 + local_278->ArrayNum;
            for (; iStack_234 = iVar14, pFVar19 != pFVar3; pFVar19 = pFVar19 + 1) {
              if (((pFVar19->field0_0x0)._s_0.A == iVar15) &&
                 ((pFVar19->field0_0x0)._s_0.B == iVar23)) goto LAB_1433a6a3b;
            }
            iStack_2b4 = local_2c0._4_4_;
            local_280 = CONCAT44(local_2c0._4_4_,iVar14);
            local_2b8 = iVar14;
            if (((local_318.Data <= (FScriptContainerElement *)&local_280) &&
                ((FScriptContainerElement *)&local_280 < local_318.Data + (longlong)iStack_30c * 8))
               && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar12)) {
              pcVar8 = (code *)swi(3);
              uVar13 = (*pcVar8)();
              return (bool)uVar13;
            }
            if (local_310 == iStack_30c) {
              local_310 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x408,&local_318,&iStack_30c);
            }
            *(undefined8 *)(local_318.Data + (longlong)local_310 * 8) = local_280;
            local_310 = local_310 + 1;
LAB_1433a6a3b:
            iStack_224 = (int)local_2c0;
            local_220 = CONCAT44(iStack_224,iVar14);
            iVar23 = iStack_224;
            iVar15 = iVar14;
            if (iStack_224 < iVar14) {
              iVar23 = iVar14;
              iVar15 = iStack_224;
            }
            pFVar19 = local_278->DataPtr;
            pFVar3 = pFVar19 + local_278->ArrayNum;
            for (; local_228 = iVar14, pFVar19 != pFVar3; pFVar19 = pFVar19 + 1) {
              if (((pFVar19->field0_0x0)._s_0.A == iVar15) &&
                 (pTVar9 = local_1e8, (pFVar19->field0_0x0)._s_0.B == iVar23))
              goto joined_r0x0001433a65ff;
            }
            local_270 = CONCAT44(iVar14,iStack_224);
            local_2d0 = iStack_224;
            iStack_2cc = iVar14;
            if (((local_318.Data <= (FScriptContainerElement *)&local_270) &&
                ((FScriptContainerElement *)&local_270 < local_318.Data + (longlong)iStack_30c * 8))
               && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar12)) {
              pcVar8 = (code *)swi(3);
              uVar13 = (*pcVar8)();
              return (bool)uVar13;
            }
            if (local_310 == iStack_30c) {
              local_310 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x408,&local_318,&iStack_30c);
            }
            *(undefined8 *)(local_318.Data + (longlong)local_310 * 8) = local_270;
            pTVar9 = local_1e8;
            local_310 = local_310 + 1;
          } while( true );
        }
        if (((int)local_300 < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        pFVar4 = local_308.Data + (longlong)((int)local_300 + -1) * 8;
        local_2c8 = *(undefined8 *)pFVar4;
        iVar14 = ((int)local_300 - ((int)local_300 + -1)) + -1;
        if (iVar14 != 0) {
          memmove(pFVar4,pFVar4 + 8,(longlong)iVar14 << 3);
        }
        local_300 = CONCAT44(local_300._4_4_,(int)local_300 + -1);
        uVar25 = FCrc::MemCrc_DEPRECATED(&local_2c8,8,0);
        lVar5 = lVar18;
        if (*(int *)&(this->EdgeToVert).field_0x8 != *(int *)&(this->EdgeToVert).field_0x34) {
          puVar7 = *(undefined1 **)&(this->EdgeToVert).field_0x40;
          puVar22 = &(this->EdgeToVert).field_0x38;
          if (puVar7 != (undefined1 *)0x0) {
            puVar22 = puVar7;
          }
          iVar14 = *(int *)(puVar22 +
                           (ulonglong)(*(int *)&(this->EdgeToVert).field_0x48 - 1U & uVar25) * 4);
          if (iVar14 != -1) {
            iVar23 = (int)local_2c8;
            do {
              lVar17 = *(longlong *)&this->EdgeToVert + (longlong)iVar14 * 0x14;
              if ((*(int *)(*(longlong *)&this->EdgeToVert + (longlong)iVar14 * 0x14) == iVar23) &&
                 (*(int *)(lVar17 + 4) == local_2c8._4_4_)) {
                if ((iVar14 != -1) && (lVar5 = lVar17, lVar17 != 0)) goto LAB_1433a61a2;
                break;
              }
              iVar14 = *(int *)(lVar17 + 0xc);
            } while (iVar14 != -1);
          }
        }
        lVar17 = lVar5;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x27b,L"");
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        iVar23 = (int)local_2c8;
LAB_1433a61a2:
        iVar14 = *(int *)(lVar17 + 8);
        if (iVar23 < local_2c8._4_4_) {
          local_2e0 = iVar14;
          local_2dc = iVar23;
          local_2d8 = local_2c8._4_4_;
          if (iVar23 <= iVar14) {
            local_2e0 = iVar23;
            local_2dc = local_2c8._4_4_;
            local_2d8 = iVar14;
          }
        }
        else {
          local_2e0 = local_2c8._4_4_;
          local_2dc = iVar14;
          local_2d8 = iVar23;
          if (iVar14 < local_2c8._4_4_) {
            local_2e0 = iVar14;
            local_2dc = iVar23;
            local_2d8 = local_2c8._4_4_;
          }
        }
        if (-1 < local_2e0) {
          uVar25 = FCrc::MemCrc_DEPRECATED(&local_2e0,0xc,0);
          if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
            FVar26 = (ForElementType<FSetElementId>)&local_148.Hash;
            if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar26 = local_148.Hash.SecondaryData;
            }
            iVar23 = *(int *)((longlong)FVar26 + (ulonglong)(local_148.HashSize - 1U & uVar25) * 4);
            while (iVar23 != -1) {
              lVar5 = local_148.Elements._0_8_ + (longlong)iVar23 * 0x18;
              if (((*(int *)(local_148.Elements._0_8_ + (longlong)iVar23 * 0x18) == local_2e0) &&
                  (*(int *)(lVar5 + 4) == local_2dc)) && (*(int *)(lVar5 + 8) == local_2d8)) {
                if (iVar23 != -1) {
                  lVar17 = lVar5 + 0xc;
                  if (lVar5 == 0) {
                    lVar17 = lVar18;
                  }
                  if (lVar17 != 0) goto LAB_1433a65f0;
                }
                break;
              }
              iVar23 = *(int *)(lVar5 + 0x10);
            }
          }
          local_1a0 = &local_2e0;
          local_2f7 = 0;
          local_198 = &local_2f7;
          TSet<TTuple<UE::Geometry::FIndex3i,bool>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,bool,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UE::Geometry::FIndex3i_const_&,bool_&&>_>
                    (&local_148,
                     (TPairInitializer<UE::Geometry::FIndex3i_const_&,bool_&&> *)local_1e0,
                     (bool *)&local_1a0);
          pTVar10 = local_278;
          local_258 = local_2c8._4_4_;
          local_250 = CONCAT44(iVar14,local_2c8._4_4_);
          iVar23 = iVar14;
          iVar15 = local_2c8._4_4_;
          if (iVar14 < local_2c8._4_4_) {
            iVar23 = local_2c8._4_4_;
            iVar15 = iVar14;
          }
          pFVar19 = local_278->DataPtr;
          pFVar3 = pFVar19 + local_278->ArrayNum;
          for (; iStack_254 = iVar14, pFVar19 != pFVar3; pFVar19 = pFVar19 + 1) {
            if (((pFVar19->field0_0x0)._s_0.A == iVar15) && ((pFVar19->field0_0x0)._s_0.B == iVar23)
               ) goto LAB_1433a6408;
          }
          pFVar19 = param_2->DataPtr;
          iStack_2cc = local_2c8._4_4_;
          pFVar3 = pFVar19 + param_2->ArrayNum;
          for (; local_2d0 = iVar14, pFVar19 != pFVar3; pFVar19 = pFVar19 + 1) {
            if (((pFVar19->field0_0x0)._s_0.A == iVar15) && ((pFVar19->field0_0x0)._s_0.B == iVar23)
               ) {
              local_2a0 = CONCAT44(local_2c8._4_4_,iVar14);
              if ((local_318.Data <= (FScriptContainerElement *)&local_2a0) &&
                 (((FScriptContainerElement *)&local_2a0 < local_318.Data + (longlong)iStack_30c * 8
                  && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar12)))) {
                pcVar8 = (code *)swi(3);
                uVar13 = (*pcVar8)();
                return (bool)uVar13;
              }
              iVar23 = local_310;
              if (local_310 == iStack_30c) {
                iVar23 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&local_318,&iStack_30c);
              }
              local_310 = iVar23 + 1;
              uVar16 = local_2a0;
              FVar20.Data = local_318.Data;
              goto LAB_1433a6404;
            }
          }
          local_298 = CONCAT44(local_2c8._4_4_,iVar14);
          if (((local_308.Data <= (FScriptContainerElement *)&local_298) &&
              ((FScriptContainerElement *)&local_298 <
               local_308.Data + (longlong)local_300._4_4_ * 8)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar8 = (code *)swi(3);
            uVar13 = (*pcVar8)();
            return (bool)uVar13;
          }
          iVar23 = (int)local_300;
          if ((int)local_300 == local_300._4_4_) {
            iVar23 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_308,(int *)((longlong)&local_300 + 4));
          }
          local_300 = CONCAT44(local_300._4_4_,iVar23 + 1);
          uVar16 = local_298;
          FVar20.Data = local_308.Data;
LAB_1433a6404:
          *(undefined8 *)(FVar20.Data + (longlong)iVar23 * 8) = uVar16;
LAB_1433a6408:
          iStack_244 = (int)local_2c8;
          local_240 = CONCAT44(iStack_244,iVar14);
          iVar23 = iStack_244;
          iVar15 = iVar14;
          if (iStack_244 < iVar14) {
            iVar23 = iVar14;
            iVar15 = iStack_244;
          }
          pFVar19 = pTVar10->DataPtr;
          pFVar3 = pFVar19 + pTVar10->ArrayNum;
          for (; local_248 = iVar14, pFVar19 != pFVar3; pFVar19 = pFVar19 + 1) {
            if (((pFVar19->field0_0x0)._s_0.A == iVar15) && ((pFVar19->field0_0x0)._s_0.B == iVar23)
               ) goto LAB_1433a65f0;
          }
          pFVar19 = param_2->DataPtr;
          pFVar3 = pFVar19 + param_2->ArrayNum;
          for (; local_2b8 = iStack_244, iStack_2b4 = iVar14, pFVar19 != pFVar3;
              pFVar19 = pFVar19 + 1) {
            if (((pFVar19->field0_0x0)._s_0.A == iVar15) && ((pFVar19->field0_0x0)._s_0.B == iVar23)
               ) {
              local_290 = CONCAT44(iVar14,iStack_244);
              if ((local_318.Data <= (FScriptContainerElement *)&local_290) &&
                 (((FScriptContainerElement *)&local_290 < local_318.Data + (longlong)iStack_30c * 8
                  && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar12)))) {
                pcVar8 = (code *)swi(3);
                uVar13 = (*pcVar8)();
                return (bool)uVar13;
              }
              iVar14 = local_310;
              if (local_310 == iStack_30c) {
                iVar14 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&local_318,&iStack_30c);
              }
              local_310 = iVar14 + 1;
              uVar16 = local_290;
              FVar20.Data = local_318.Data;
              goto LAB_1433a65ec;
            }
          }
          local_288 = CONCAT44(iVar14,iStack_244);
          if (((local_308.Data <= (FScriptContainerElement *)&local_288) &&
              ((FScriptContainerElement *)&local_288 <
               local_308.Data + (longlong)local_300._4_4_ * 8)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar8 = (code *)swi(3);
            uVar13 = (*pcVar8)();
            return (bool)uVar13;
          }
          iVar14 = (int)local_300;
          if ((int)local_300 == local_300._4_4_) {
            iVar14 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_308,(int *)((longlong)&local_300 + 4));
          }
          local_300 = CONCAT44(local_300._4_4_,iVar14 + 1);
          uVar16 = local_288;
          FVar20.Data = local_308.Data;
LAB_1433a65ec:
          *(undefined8 *)(FVar20.Data + (longlong)iVar14 * 8) = uVar16;
        }
LAB_1433a65f0:
      } while( true );
    }
    lVar18 = *(longlong *)&pFVar11->EdgeToVert;
    puVar2 = (ulonglong *)(lVar18 + (longlong)TStack_1c8.CurrentBitIndex * 0x14);
    if (*(int *)(lVar18 + 8 + (longlong)TStack_1c8.CurrentBitIndex * 0x14) == -1) {
      local_260 = *puVar2;
      uVar24 = (uint)(local_260 >> 0x20);
      uVar21 = local_260;
      if ((int)(uint)local_260 <= (int)uVar24) {
        uVar21 = (ulonglong)uVar24;
        uVar24 = (uint)local_260;
      }
      pFVar19 = local_278->DataPtr;
      pFVar3 = pFVar19 + local_278->ArrayNum;
      for (; pFVar19 != pFVar3; pFVar19 = pFVar19 + 1) {
        if (((pFVar19->field0_0x0)._s_0.A == uVar24) &&
           ((pFVar19->field0_0x0)._s_0.B == (int)uVar21)) goto LAB_1433a5fb0;
      }
      local_2d0 = *(int *)((longlong)puVar2 + 4);
      pFVar19 = param_2->DataPtr;
      iStack_2cc = (int)*puVar2;
      pFVar3 = pFVar19 + param_2->ArrayNum;
      for (; pFVar19 != pFVar3; pFVar19 = pFVar19 + 1) {
        if (((pFVar19->field0_0x0)._s_0.A == uVar24) &&
           ((pFVar19->field0_0x0)._s_0.B == (int)uVar21)) {
          local_2a8 = CONCAT44(iStack_2cc,local_2d0);
          if ((local_318.Data <= (FScriptContainerElement *)&local_2a8) &&
             (((FScriptContainerElement *)&local_2a8 < local_318.Data + (longlong)iStack_30c * 8 &&
              (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)))) {
            pcVar8 = (code *)swi(3);
            uVar13 = (*pcVar8)();
            return (bool)uVar13;
          }
          iVar14 = local_310;
          if (local_310 == iStack_30c) {
            iVar14 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_318,&iStack_30c);
          }
          local_310 = iVar14 + 1;
          uVar16 = local_2a8;
          FVar20.Data = local_318.Data;
          goto LAB_1433a5fac;
        }
      }
      local_2b0 = CONCAT44(iStack_2cc,local_2d0);
      if (((local_308.Data <= (FScriptContainerElement *)&local_2b0) &&
          ((FScriptContainerElement *)&local_2b0 < local_308.Data + (longlong)local_300._4_4_ * 8))
         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      iVar14 = (int)local_300;
      if ((int)local_300 == local_300._4_4_) {
        iVar14 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&local_308,(int *)((longlong)&local_300 + 4));
      }
      local_300 = CONCAT44(local_300._4_4_,iVar14 + 1);
      uVar16 = local_2b0;
      FVar20.Data = local_308.Data;
LAB_1433a5fac:
      *(undefined8 *)(FVar20.Data + (longlong)iVar14 * 8) = uVar16;
    }
LAB_1433a5fb0:
    TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
  } while( true );
}

// GetFilledTriangles @ 1433a6c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FDelaunay2Connectivity::GetFilledTriangles
          (FDelaunay2Connectivity *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Geometry::FIndex2i_const_,int> *param_2,EFillMode param_3)

{
  FIndex2i *pFVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar8;
  FDelaunay2Connectivity *pFVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  byte bVar16;
  int *piVar17;
  uint *puVar18;
  longlong lVar19;
  int *piVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined1 *puVar23;
  ForElementType<FSetElementId> FVar24;
  int iVar25;
  int *piVar26;
  uint uVar27;
  int *piVar28;
  FIndex2i_u_0 *pFVar29;
  undefined4 uVar30;
  undefined1 *puVar31;
  int iVar32;
  undefined1 auStackY_2d8 [32];
  bool local_288;
  undefined1 local_287;
  undefined1 local_286 [6];
  FIndex2i_u_0 local_280;
  FIndex3i_u_0 local_278;
  undefined8 local_268;
  int local_260 [2];
  int local_258;
  void *local_250;
  undefined8 local_248;
  EFillMode local_240;
  int local_23c;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_238;
  FIndex2i_u_0 local_230;
  FIndex2i_u_0 local_228;
  undefined8 local_220;
  FDelaunay2Connectivity *local_218;
  int iStack_210;
  uint uStack_20c;
  undefined1 *local_208;
  undefined4 uStack_200;
  int iStack_1fc;
  int local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
  *local_1d8;
  longlong *local_1d0;
  uint uStack_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *local_1c0;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  uint local_1b0;
  int iStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  FDelaunay2Connectivity *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  longlong *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  EFillMode local_140 [2];
  TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
  *local_138;
  void **local_130;
  TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
  **local_128;
  <lambda_3> local_118 [2];
  undefined4 local_ec;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  iVar32 = param_2->ArrayNum;
  pFVar29 = &param_2->DataPtr->field0_0x0;
  local_288 = true;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_240 = param_3;
  local_238 = param_1;
  TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
  ::Reserve(&local_98,iVar32);
  pFVar1 = (FIndex2i *)(pFVar29 + iVar32);
  local_220 = 1;
  for (; pFVar29 != (FIndex2i_u_0 *)pFVar1; pFVar29 = pFVar29 + 1) {
    local_280 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar29->_s_0;
    uVar30 = local_280._s_0.A;
    uVar21 = local_280._s_0.B;
    if (this->bTrackDuplicateVertices != false) {
      iVar32 = *(int *)&(this->DuplicateVertices).field_0x8;
      iVar25 = *(int *)&(this->DuplicateVertices).field_0x34;
      if (iVar32 != iVar25) {
        puVar4 = *(undefined1 **)&(this->DuplicateVertices).field_0x40;
        puVar23 = &(this->DuplicateVertices).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar23 = puVar4;
        }
        iVar13 = *(int *)(puVar23 +
                         ((ulonglong)(*(int *)&(this->DuplicateVertices).field_0x48 - 1) &
                         (ulonglong)local_280 & 0xffffffff) * 4);
        if (iVar13 != -1) {
          do {
            piVar17 = (int *)((longlong)iVar13 * 0x10 + *(longlong *)&this->DuplicateVertices);
            if (*piVar17 == local_280._s_0.A) {
              piVar28 = piVar17 + 1;
              if (piVar17 == (int *)0x0) {
                piVar28 = (int *)0x0;
              }
              if (piVar28 != (int *)0x0) {
                local_280._s_0.A = *piVar28;
                uVar30 = *piVar28;
              }
              goto LAB_1433a6ddd;
            }
            iVar13 = piVar17[2];
          } while (iVar13 != -1);
        }
      }
      if (iVar32 != iVar25) {
LAB_1433a6ddd:
        puVar4 = *(undefined1 **)&(this->DuplicateVertices).field_0x40;
        puVar23 = &(this->DuplicateVertices).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar23 = puVar4;
        }
        uVar14 = *(uint *)(puVar23 +
                          (ulonglong)
                          (*(int *)&(this->DuplicateVertices).field_0x48 - 1U & local_280._s_0.B) *
                          4);
        uVar21 = local_280._s_0.B;
        if (uVar14 != 0xffffffff) {
          do {
            puVar18 = (uint *)((longlong)(int)uVar14 * 0x10 + *(longlong *)&this->DuplicateVertices)
            ;
            if (*puVar18 == local_280._s_0.B) {
              puVar15 = puVar18 + 1;
              if (puVar18 == (uint *)0x0) {
                puVar15 = (uint *)0x0;
              }
              if (puVar15 != (uint *)0x0) {
                local_280._s_0.B = *puVar15;
                uVar21 = *puVar15;
              }
              break;
            }
            uVar14 = puVar18[2];
          } while (uVar14 != 0xffffffff);
        }
      }
    }
    iVar32 = 1;
    if ((int)uVar21 < (int)uVar30) {
      local_280._s_0.B = uVar30;
      local_280._s_0.A = uVar21;
      iVar32 = 1;
      if (param_3 != Solid) {
        iVar32 = -1;
      }
    }
    local_23c = 0;
    uVar14 = FCrc::MemCrc_DEPRECATED(&local_280,8,0);
    if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
      FVar24 = (ForElementType<FSetElementId>)&local_98.Hash;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar24 = local_98.Hash.SecondaryData;
      }
      iVar25 = *(int *)((longlong)FVar24 + (ulonglong)(local_98.HashSize - 1U & uVar14) * 4);
      if (iVar25 != -1) {
        do {
          lVar19 = local_98.Elements._0_8_ + (longlong)iVar25 * 0x14;
          if ((*(int *)(local_98.Elements._0_8_ + (longlong)iVar25 * 0x14) == local_280._s_0.A) &&
             (*(int *)(lVar19 + 4) == local_280._s_0.B)) {
            if ((iVar25 != -1) && (lVar19 != 0)) {
              piVar17 = (int *)(lVar19 + 8);
              goto LAB_1433a6f2b;
            }
            break;
          }
          iVar25 = *(int *)(lVar19 + 0xc);
        } while (iVar25 != -1);
      }
    }
    piVar17 = TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
              ::EmplaceByHash<UE::Geometry::FIndex2i_const_&,int>
                        ((TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
                          *)&local_98,uVar14,(FIndex2i *)&local_280._s_0,&local_23c);
LAB_1433a6f2b:
    *piVar17 = *piVar17 + iVar32;
  }
  iStack_210 = 0;
  local_bc = 0x80;
  local_1d8 = &local_98;
  local_e8._0_8_ = 0;
  local_138 = &local_98;
  local_e8._8_8_ = 0;
  puVar4 = &(this->EdgeToVert).field_0x10;
  local_130 = &local_250;
  local_c8 = (uint *)0x0;
  local_1f8 = 0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_250 = (void *)0x0;
  local_248 = 0;
  iVar32 = *(int *)&(this->EdgeToVert).field_0x28;
  local_258 = 0;
  uStack_20c = 1;
  iStack_1fc = local_1f8;
  if (iVar32 != 0) {
    puVar18 = *(uint **)&(this->EdgeToVert).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar4;
    }
    uStack_20c = *puVar18;
    local_1f8 = 0;
    while (uStack_20c == 0) {
      lVar19 = (longlong)iStack_210;
      local_1f8 = local_1f8 + 0x20;
      iStack_210 = iStack_210 + 1;
      uStack_20c = 1;
      iStack_1fc = iVar32;
      if ((int)(iVar32 + -1 + (iVar32 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_210) goto LAB_1433a703d;
      uStack_20c = puVar18[lVar19 + 1];
    }
    uStack_20c = -uStack_20c & uStack_20c;
    uVar3 = (ulonglong)uStack_20c * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1e8 = (int)lVar19;
    iStack_1fc = local_1e8 + -1 + local_1f8;
    if (iVar32 < iStack_1fc) {
      iStack_1fc = iVar32;
    }
  }
LAB_1433a703d:
  uVar14 = *(uint *)&(this->EdgeToVert).field_0x28;
  uVar27 = uVar14 & 0xffffffe0;
  iStack_1f0 = *(int *)&(this->EdgeToVert).field_0x8 - *(int *)&(this->EdgeToVert).field_0x34;
  TStack_198._padding_ = CONCAT44(uStack_20c,iStack_210);
  uStack_200 = 0xffffffff;
  TStack_198.CurrentBitIndex = iStack_1fc;
  TStack_198.UnvisitedBitMask = 0xffffffff;
  iVar25 = (int)uVar14 >> 5;
  TStack_198._28_4_ = local_ec;
  TStack_198.BaseBitIndex = local_1f8;
  uStack_178 = CONCAT44(uStack_1ec,iStack_1f0);
  local_218 = this;
  local_208 = puVar4;
  local_1a0 = this;
  TStack_198.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  local_140[0] = param_3;
  local_128 = &local_1d8;
  if ((((int)uVar14 < 0) || (iVar32 < (int)uVar14)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  uVar22 = *(uint *)&(this->EdgeToVert).field_0x28;
  iVar32 = local_258;
  if (uVar14 != uVar22) {
    puVar23 = *(undefined1 **)&(this->EdgeToVert).field_0x20;
    puVar31 = puVar4;
    if (puVar23 != (undefined1 *)0x0) {
      puVar31 = puVar23;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar25 * 4);
    while (uVar14 == 0) {
      lVar19 = (longlong)iVar25;
      uVar27 = uVar27 + 0x20;
      iVar25 = iVar25 + 1;
      uVar14 = uVar22;
      if ((int)(((int)(uVar22 - 1) >> 0x1f & 0x1fU) + (uVar22 - 1)) >> 5 < iVar25)
      goto LAB_1433a7151;
      uVar14 = *(uint *)(puVar31 + lVar19 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1e4 = (int)lVar19;
    uVar14 = (uVar27 - 1) + local_1e4;
    if ((int)uVar22 < (int)uVar14) {
      uVar14 = uVar22;
    }
  }
LAB_1433a7151:
  while( true ) {
    pFVar9 = local_1a0;
    if (*(int *)&(local_1a0->EdgeToVert).field_0x8 - *(int *)&(local_1a0->EdgeToVert).field_0x34 !=
        (int)uStack_178) {
      local_287 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_287);
    }
    if (((TStack_198.CurrentBitIndex == uVar14) &&
        (TStack_198.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pFVar9 == this))
    break;
    lVar19 = *(longlong *)&pFVar9->EdgeToVert;
    if (*(int *)(lVar19 + 8 + (longlong)TStack_198.CurrentBitIndex * 0x14) == -1) {
      `UE::Geometry::FDelaunay2Connectivity::GetFilledTriangles'::__l2::<lambda_2>::operator()
                (local_140,(FIndex2i *)(lVar19 + (longlong)TStack_198.CurrentBitIndex * 0x14),0);
      iVar32 = iVar32 + 1;
    }
    TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
  }
  piVar17 = (int *)0x0;
  uVar14 = (uint)local_220;
  local_258 = iVar32;
  if ((int)local_248 != 0) {
    local_288 = true;
    piVar28 = piVar17;
    do {
      uVar22 = ((int)piVar28 + 1) % (int)local_248;
      piVar28 = (int *)(longlong)(int)uVar22;
      uVar27 = 0;
      if ((int)uVar22 < (int)local_248) {
        uVar27 = ~uVar22 >> 0x1f;
      }
      iVar32 = (int)local_248;
      if (uVar27 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        iVar32 = (int)local_248;
      }
      lVar19 = (longlong)piVar28 * 0xc;
      local_268 = *(undefined8 *)(lVar19 + (longlong)local_250);
      local_260[0] = *(int *)(lVar19 + 8 + (longlong)local_250);
      uVar27 = 0;
      if ((int)uVar22 < iVar32) {
        uVar27 = ~uVar22 >> 0x1f;
      }
      if (uVar27 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        iVar32 = (int)local_248;
      }
      uVar27 = (iVar32 - uVar22) - 1;
      if (1 < (int)uVar27) {
        uVar27 = uVar14;
      }
      if (uVar27 != 0) {
        memmove((void *)(lVar19 + (longlong)local_250),
                (void *)((longlong)local_250 + (longlong)(int)(iVar32 - uVar27) * 0xc),
                (longlong)(int)uVar27 * 0xc);
        iVar32 = (int)local_248;
      }
      local_248 = CONCAT44(local_248._4_4_,iVar32 + -1);
      uVar27 = FCrc::MemCrc_DEPRECATED(&local_268,8,0);
      piVar20 = piVar17;
      if (*(int *)&(this->EdgeToVert).field_0x8 != *(int *)&(this->EdgeToVert).field_0x34) {
        puVar4 = *(undefined1 **)&(this->EdgeToVert).field_0x40;
        puVar23 = &(this->EdgeToVert).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar23 = puVar4;
        }
        iVar32 = *(int *)(puVar23 +
                         (ulonglong)(*(int *)&(this->EdgeToVert).field_0x48 - 1U & uVar27) * 4);
        if (iVar32 != -1) {
          do {
            piVar26 = (int *)(*(longlong *)&this->EdgeToVert + (longlong)iVar32 * 0x14);
            if ((*(int *)(*(longlong *)&this->EdgeToVert + (longlong)iVar32 * 0x14) ==
                 (int)local_268) && (piVar26[1] == local_268._4_4_)) {
              if ((iVar32 != -1) && (piVar20 = piVar26, piVar26 != (int *)0x0)) goto LAB_1433a73a2;
              break;
            }
            iVar32 = piVar26[3];
          } while (iVar32 != -1);
        }
      }
      piVar26 = piVar20;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x27b,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
LAB_1433a73a2:
      iVar32 = piVar26[2];
      if ((int)local_268 < local_268._4_4_) {
        local_278._s_0.A = (int)local_268;
        local_278._s_0.B = local_268._4_4_;
        local_278._s_0.C = iVar32;
        if (iVar32 < (int)local_268) {
          local_278._s_0.A = iVar32;
          local_278._s_0.B = (int)local_268;
          local_278._s_0.C = local_268._4_4_;
        }
      }
      else {
        local_278._s_0.A = local_268._4_4_;
        local_278._s_0.B = iVar32;
        local_278._s_0.C = (int)local_268;
        if (iVar32 < local_268._4_4_) {
          local_278._s_0.A = iVar32;
          local_278._s_0.B = (int)local_268;
          local_278._s_0.C = local_268._4_4_;
        }
      }
      if (-1 < local_278._s_0.A) {
        uVar27 = FCrc::MemCrc_DEPRECATED(&local_278,0xc,0);
        if (local_e8._8_4_ != local_b4) {
          FVar24 = (ForElementType<FSetElementId>)local_b0;
          if (local_a8 != (ForElementType<FSetElementId>)0x0) {
            FVar24 = local_a8;
          }
          iVar25 = *(int *)((longlong)FVar24 + (ulonglong)(local_a0 - 1U & uVar27) * 4);
          while (iVar25 != -1) {
            lVar19 = local_e8._0_8_ + (longlong)iVar25 * 0x18;
            if (((*(int *)(local_e8._0_8_ + (longlong)iVar25 * 0x18) == local_278._s_0.A) &&
                (*(int *)(lVar19 + 4) == local_278._s_0.B)) &&
               (*(int *)(lVar19 + 8) == local_278._s_0.C)) {
              if (iVar25 != -1) {
                piVar20 = (int *)(lVar19 + 0xc);
                if (lVar19 == 0) {
                  piVar20 = piVar17;
                }
                if (piVar20 != (int *)0x0) {
                  if ((local_288 == false) || (*piVar20 != local_260[0])) {
                    local_288 = false;
                  }
                  else {
                    local_288 = true;
                  }
                  goto LAB_1433a74ee;
                }
              }
              break;
            }
            iVar25 = *(int *)(lVar19 + 0x10);
          }
        }
        TMapBase<UE::Geometry::FIndex3i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>_>
        ::Emplace<UE::Geometry::FIndex3i_const_&,int_const_&>
                  ((TMapBase<UE::Geometry::FIndex3i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>_>
                    *)local_e8,(FIndex3i *)&local_278._s_0,local_260);
        local_230._s_0.A = local_268._4_4_;
        local_230._s_0.B = iVar32;
        `UE::Geometry::FDelaunay2Connectivity::GetFilledTriangles'::__l2::<lambda_2>::operator()
                  (local_140,(FIndex2i *)&local_230._s_0,local_260[0]);
        local_228._s_0.B = (int)local_268;
        local_228._s_0.A = iVar32;
        `UE::Geometry::FDelaunay2Connectivity::GetFilledTriangles'::__l2::<lambda_2>::operator()
                  (local_140,(FIndex2i *)&local_228._s_0,local_260[0]);
      }
LAB_1433a74ee:
    } while ((int)local_248 != 0);
  }
  pTVar7 = local_238;
  piVar28 = &local_238->ArrayMax;
  local_238->ArrayNum = 0;
  if (local_238->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_238->AllocatorInstance,0,piVar28);
  }
  pTVar8 = local_238;
  if (local_240 == Solid) {
    uVar14 = (((*(int *)&(this->EdgeToVert).field_0x8 - *(int *)&(this->EdgeToVert).field_0x34) / 3
              - local_e8._8_4_) - local_258) + local_b4;
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if (*piVar28 < (int)uVar14) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar14,&pTVar7->AllocatorInstance,pTVar7->ArrayNum,piVar28);
    }
    local_118[0].Windings =
         (TMap<UE::Geometry::FIndex3i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>_>
          *)local_e8;
    local_118[0].TrianglesOut = pTVar7;
    EnumerateTriangles<_UE::Geometry::FDelaunay2Connectivity::GetFilledTriangles_::__l33::<lambda_3>_>
              (this,local_118,true);
  }
  else {
    uVar27 = local_e8._8_4_ - local_b4;
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
    }
    if (*piVar28 < (int)uVar27) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar27,&local_238->AllocatorInstance,local_238->ArrayNum,piVar28);
    }
    uVar27 = local_c0;
    uStack_1c8 = 0;
    uStack_1b4 = uStack_1c8;
    local_1b0 = uStack_1c8;
    if (local_c0 != 0) {
      puVar18 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar18 = local_c8;
      }
      uVar22 = *puVar18;
      piVar20 = piVar17;
      local_1b0 = 0;
      uStack_1c8 = 0;
      while (uVar22 == 0) {
        iVar32 = (int)piVar17;
        local_1b0 = (int)piVar20 + 0x20;
        piVar20 = (int *)(ulonglong)local_1b0;
        uStack_1c8 = iVar32 + 1;
        piVar17 = (int *)(ulonglong)uStack_1c8;
        uStack_1b4 = local_c0;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1c8)
        goto LAB_1433a76d1;
        uVar22 = puVar18[(longlong)iVar32 + 1];
      }
      uVar14 = -uVar22 & uVar22;
      uVar3 = (ulonglong)uVar14 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_1e0 = (int)lVar19;
      uStack_1b4 = (local_1b0 - 1) + local_1e0;
      if ((int)local_c0 < (int)uStack_1b4) {
        uStack_1b4 = local_c0;
      }
    }
LAB_1433a76d1:
    iStack_1a8 = local_e8._8_4_ - local_b4;
    local_1d0 = (longlong *)local_e8;
    local_1c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    uVar22 = local_c0 & 0xffffffe0;
    uStack_1b8 = 0xffffffff;
    TStack_168.CurrentBitIndex = uStack_1b4;
    TStack_168.UnvisitedBitMask = 0xffffffff;
    TStack_168._padding_ = CONCAT44(uVar14,uStack_1c8);
    iStack_1ac = iStack_1fc;
    iVar32 = (int)local_c0 >> 5;
    TStack_168._28_4_ = iStack_1fc;
    TStack_168.BaseBitIndex = local_1b0;
    uStack_148 = CONCAT44(uStack_1a4,iStack_1a8);
    bVar16 = (byte)local_c0;
    uStack_1c4 = uVar14;
    local_170 = local_1d0;
    TStack_168.Array = local_1c0;
    if (((int)local_c0 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
    if (uVar27 != local_c0) {
      puVar18 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar18 = local_c8;
      }
      uVar14 = -1 << (bVar16 & 0x1f) & puVar18[iVar32];
      while (uVar14 == 0) {
        lVar19 = (longlong)iVar32;
        uVar22 = uVar22 + 0x20;
        iVar32 = iVar32 + 1;
        uVar27 = local_c0;
        if ((int)(((int)(local_c0 - 1) >> 0x1f & 0x1fU) + (local_c0 - 1)) >> 5 < iVar32)
        goto LAB_1433a77e3;
        uVar14 = puVar18[lVar19 + 1];
      }
      uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_1dc = (int)lVar19;
      uVar27 = (uVar22 - 1) + local_1dc;
      if ((int)local_c0 < (int)uVar27) {
        uVar27 = local_c0;
      }
    }
LAB_1433a77e3:
    while( true ) {
      plVar10 = local_170;
      if ((int)local_170[1] - *(int *)((longlong)local_170 + 0x34) != (int)uStack_148) {
        local_286[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_286);
      }
      if (((TStack_168.CurrentBitIndex == uVar27) &&
          (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
         (plVar10 == (longlong *)local_e8)) break;
      pFVar2 = (FScriptContainerElement *)(*plVar10 + (longlong)TStack_168.CurrentBitIndex * 0x18);
      if (local_240 == NegativeWinding) {
        if (*(int *)(pFVar2 + 0xc) < 0) goto LAB_1433a7891;
      }
      else if (local_240 == NonZeroWinding) {
        if (*(int *)(pFVar2 + 0xc) != 0) goto LAB_1433a7891;
      }
      else if (local_240 == PositiveWinding) {
        if (0 < *(int *)(pFVar2 + 0xc)) {
LAB_1433a7891:
          pFVar5 = (pTVar8->AllocatorInstance).Data;
          if (((pFVar5 <= pFVar2) && (pFVar2 < pFVar5 + (longlong)*piVar28 * 0xc)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
          iVar32 = pTVar8->ArrayNum;
          if (iVar32 == *piVar28) {
            iVar32 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&pTVar8->AllocatorInstance,piVar28);
          }
          pTVar8->ArrayNum = iVar32 + 1;
          pFVar5 = (pTVar8->AllocatorInstance).Data;
          *(undefined8 *)(pFVar5 + (longlong)iVar32 * 0xc) = *(undefined8 *)pFVar2;
          *(undefined4 *)(pFVar5 + (longlong)iVar32 * 0xc + 8) = *(undefined4 *)(pFVar2 + 8);
        }
      }
      else if ((local_240 == OddWinding) && (((byte)pFVar2[0xc] & 1) != 0)) goto LAB_1433a7891;
      TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
    }
  }
  if (local_250 != (void *)0x0) {
    FMemory::Free(local_250);
  }
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return local_288;
}

// GetTriangles @ 1433b2e10

TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FDelaunay2Connectivity::GetTriangles
          (FDelaunay2Connectivity *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar16 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  iVar13 = *(int *)&(this->EdgeToVert).field_0x8 - *(int *)&(this->EdgeToVert).field_0x34;
  uVar15 = iVar13 / 3 + (iVar13 >> 0x1f) +
           (int)(((longlong)iVar13 / 3 + ((longlong)iVar13 >> 0x3f) & 0xffffffffU) >> 0x1f);
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (0 < (int)uVar15) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar15,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar13 = *(int *)&(this->EdgeToVert).field_0x28;
  puVar2 = &(this->EdgeToVert).field_0x10;
  uVar15 = 1;
  iVar18 = 0;
  iVar11 = iVar16;
  if (iVar13 != 0) {
    puVar20 = *(uint **)&(this->EdgeToVert).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar17 = *puVar20;
    iVar18 = 0;
    iVar16 = 0;
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar11 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1433b2eff;
      uVar17 = puVar20[lVar14 + 1];
    }
    uVar15 = -uVar17 & uVar17;
    uVar5 = (ulonglong)uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    iVar11 = iVar18 + -1 + local_res18;
    if (iVar13 < iVar11) {
      iVar11 = iVar13;
    }
  }
LAB_1433b2eff:
  uVar17 = *(uint *)&(this->EdgeToVert).field_0x28;
  TStack_60._padding_ = CONCAT44(uVar15,iVar16);
  uVar15 = uVar17 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iVar11;
  TStack_60.BaseBitIndex = iVar18;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->EdgeToVert).field_0x8 -
                       *(int *)&(this->EdgeToVert).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar17 < 0) || (iVar13 < (int)uVar17)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    pTVar12 = (TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
    return pTVar12;
  }
  uVar6 = *(uint *)&(this->EdgeToVert).field_0x28;
  if (uVar17 != uVar6) {
    puVar19 = *(undefined1 **)&(this->EdgeToVert).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar2;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar16 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar16;
      uVar15 = uVar15 + 0x20;
      iVar16 = iVar16 + 1;
      uVar17 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1433b3000;
      uVar17 = *(uint *)(puVar19 + lVar14 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar17 = (int)lVar14 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar17) {
      uVar17 = uVar6;
    }
  }
LAB_1433b3000:
  while( true ) {
    if (*(int *)&(this->EdgeToVert).field_0x8 - *(int *)&(this->EdgeToVert).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar17) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    iVar16 = *(int *)(*(longlong *)&this->EdgeToVert + (longlong)TStack_60.CurrentBitIndex * 0x14);
    puVar3 = (undefined4 *)
             (*(longlong *)&this->EdgeToVert + (longlong)TStack_60.CurrentBitIndex * 0x14);
    if (((iVar16 != -1) && (puVar3[1] != -1)) &&
       ((iVar13 = puVar3[2], iVar13 != -1 && ((iVar13 < iVar16 && (iVar13 < (int)puVar3[1])))))) {
      iVar16 = __return_storage_ptr__->ArrayNum;
      if (iVar16 == *piVar1) {
        iVar16 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar16 + 1;
      uVar7 = puVar3[2];
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar16 * 0xc;
      uVar8 = puVar3[1];
      *(undefined4 *)pFVar4 = *puVar3;
      *(undefined4 *)(pFVar4 + 4) = uVar8;
      *(undefined4 *)(pFVar4 + 8) = uVar7;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return __return_storage_ptr__;
}

// GetTrianglesAndAdjacency @ 1433b3110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDelaunay2Connectivity::GetTrianglesAndAdjacency
          (FDelaunay2Connectivity *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  FDelaunay2Connectivity *pFVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar19;
  uint *puVar20;
  undefined1 *puVar21;
  ForElementType<FSetElementId> FVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [4];
  uint local_164;
  FIndex2i_u_0 local_160;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_158;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_150;
  FIndex2i_u_0 local_148;
  FIndex3i_u_0 local_140;
  int local_134;
  int local_130;
  FScriptContainerElement *local_128;
  FDelaunay2Connectivity *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  FDelaunay2Connectivity *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  undefined4 local_a4;
  TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  iVar13 = *(int *)&(this->EdgeToVert).field_0x8 - *(int *)&(this->EdgeToVert).field_0x34;
  uVar15 = iVar13 / 3 + (iVar13 >> 0x1f) +
           (int)(((longlong)iVar13 / 3 + ((longlong)iVar13 >> 0x3f) & 0xffffffffU) >> 0x1f);
  local_158 = param_2;
  local_150 = param_1;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < (int)uVar15) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar15,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar13 = *(int *)&(this->EdgeToVert).field_0x28;
  puVar5 = &(this->EdgeToVert).field_0x10;
  iStack_118 = 0;
  uStack_114 = 1;
  local_100 = 0;
  iStack_104 = 0;
  if (iVar13 != 0) {
    puVar20 = *(uint **)&(this->EdgeToVert).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar5;
    }
    uVar15 = *puVar20;
    iStack_118 = 0;
    local_100 = 0;
    while (uVar15 == 0) {
      lVar14 = (longlong)iStack_118;
      local_100 = local_100 + 0x20;
      iStack_118 = iStack_118 + 1;
      iStack_104 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118) goto LAB_1433b321f;
      uVar15 = puVar20[lVar14 + 1];
    }
    uStack_114 = -uVar15 & uVar15;
    uVar4 = (ulonglong)uStack_114 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_134 = (int)lVar14;
    iStack_104 = local_100 + -1 + local_134;
    if (iVar13 < iStack_104) {
      iStack_104 = iVar13;
    }
  }
LAB_1433b321f:
  uVar15 = *(uint *)&(this->EdgeToVert).field_0x28;
  uStack_fc = local_a4;
  uVar18 = uVar15 & 0xffffffe0;
  iStack_f8 = *(int *)&(this->EdgeToVert).field_0x8 - *(int *)&(this->EdgeToVert).field_0x34;
  uStack_108 = 0xffffffff;
  TStack_e8._padding_ = CONCAT44(uStack_114,iStack_118);
  TStack_e8.CurrentBitIndex = iStack_104;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_e8._28_4_ = local_a4;
  TStack_e8.BaseBitIndex = local_100;
  uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
  local_120 = this;
  local_110 = puVar5;
  local_f0 = this;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar5;
  if ((((int)uVar15 < 0) || (iVar13 < (int)uVar15)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar11 = *(uint *)&(this->EdgeToVert).field_0x28;
  if (uVar15 != uVar11) {
    puVar21 = *(undefined1 **)&(this->EdgeToVert).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar5;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar14 = (longlong)iVar16;
      uVar18 = uVar18 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_1433b3320;
      uVar15 = *(uint *)(puVar21 + lVar14 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_130 = (int)lVar14;
    uVar15 = local_130 + -1 + uVar18;
    if ((int)uVar11 < (int)uVar15) {
      uVar15 = uVar11;
    }
  }
LAB_1433b3320:
  while( true ) {
    pFVar9 = local_f0;
    if (*(int *)&(local_f0->EdgeToVert).field_0x8 - *(int *)&(local_f0->EdgeToVert).field_0x34 !=
        (int)uStack_c8) {
      local_168[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
    }
    pTVar19 = local_150;
    if (((TStack_e8.CurrentBitIndex == uVar15) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar5)) && (pFVar9 == this))
    break;
    lVar14 = *(longlong *)&pFVar9->EdgeToVert;
    iVar13 = *(int *)(lVar14 + (longlong)TStack_e8.CurrentBitIndex * 0x14);
    puVar2 = (undefined4 *)(lVar14 + (longlong)TStack_e8.CurrentBitIndex * 0x14);
    if ((((iVar13 != -1) && (puVar2[1] != -1)) && (iVar16 = puVar2[2], iVar16 != -1)) &&
       ((iVar16 < iVar13 && (iVar16 < (int)puVar2[1])))) {
      iVar13 = local_150->ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_150->AllocatorInstance,piVar1);
      }
      pTVar19->ArrayNum = iVar13 + 1;
      uVar6 = puVar2[2];
      pFVar3 = (pTVar19->AllocatorInstance).Data + (longlong)iVar13 * 0xc;
      uVar7 = puVar2[1];
      *(undefined4 *)pFVar3 = *puVar2;
      *(undefined4 *)(pFVar3 + 4) = uVar7;
      *(undefined4 *)(pFVar3 + 8) = uVar6;
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  local_140._0_8_ = 0xffffffffffffffff;
  local_140._s_0.C = -1;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::Init
            (local_158,(FIndex3i *)&local_140._s_0,local_150->ArrayNum);
  iVar13 = pTVar19->ArrayNum;
  local_98.Elements._0_8_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.HashSize = 0;
  local_164 = 0;
  if (0 < iVar13) {
    do {
      uVar15 = local_164;
      uVar18 = 0;
      if ((int)local_164 < iVar13) {
        uVar18 = ~local_164 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar23 = 3;
      local_128 = (pTVar19->AllocatorInstance).Data + (longlong)(int)uVar15 * 0xc;
      lVar14 = 2;
      lVar24 = 0;
      do {
        local_160._s_0.A = *(undefined4 *)(local_128 + lVar24 * 4);
        local_160._s_0.B = *(undefined4 *)(local_128 + lVar14 * 4);
        uVar15 = FCrc::MemCrc_DEPRECATED(&local_160,8,0);
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar22 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar22 = local_98.Hash.SecondaryData;
          }
          iVar13 = *(int *)((longlong)FVar22 + (ulonglong)(local_98.HashSize - 1U & uVar15) * 4);
          while (iVar13 != -1) {
            lVar17 = local_98.Elements._0_8_ + (longlong)iVar13 * 0x14;
            if ((*(int *)(local_98.Elements._0_8_ + (longlong)iVar13 * 0x14) == local_160._s_0.A) &&
               (*(int *)(lVar17 + 4) == local_160._s_0.B)) {
              if (iVar13 != -1) {
                puVar20 = (uint *)(lVar17 + 8);
                if (lVar17 == 0) {
                  puVar20 = (uint *)0x0;
                }
                if (puVar20 != (uint *)0x0) {
                  uVar15 = FCrc::MemCrc_DEPRECATED(&local_160,8,0);
                  TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
                  ::RemoveImpl<UE::Geometry::FIndex2i>(&local_98,uVar15,(FIndex2i *)&local_160._s_0)
                  ;
                  uVar15 = *puVar20;
                  lVar17 = (longlong)(int)uVar15;
                  uVar11 = 0;
                  uVar18 = uVar11;
                  if ((int)uVar15 < pTVar19->ArrayNum) {
                    uVar18 = ~uVar15 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar15 = local_164;
                  pFVar3 = (pTVar19->AllocatorInstance).Data;
                  if (*(int *)(pFVar3 + lVar17 * 0xc) != local_160._s_0.A) {
                    if (*(int *)(pFVar3 + lVar17 * 0xc + 4) == local_160._s_0.A) {
                      uVar11 = 1;
                    }
                    else {
                      uVar11 = 0xffffffff;
                      if (*(int *)(pFVar3 + lVar17 * 0xc + 8) == local_160._s_0.A) {
                        uVar11 = 2;
                      }
                    }
                  }
                  uVar18 = *puVar20;
                  uVar12 = 0;
                  if ((int)uVar18 < local_158->ArrayNum) {
                    uVar12 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar12 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pTVar19 = local_158;
                  *(uint *)((local_158->AllocatorInstance).Data +
                           ((longlong)(int)uVar18 * 3 + (longlong)(int)uVar11) * 4) = uVar15;
                  lVar17 = (longlong)(int)local_164;
                  uVar15 = *puVar20;
                  uVar18 = 0;
                  if ((int)local_164 < local_158->ArrayNum) {
                    uVar18 = ~local_164 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  *(uint *)((pTVar19->AllocatorInstance).Data + (lVar14 + lVar17 * 3) * 4) = uVar15;
                  pTVar19 = local_150;
                  goto LAB_1433b3562;
                }
              }
              break;
            }
            iVar13 = *(int *)(lVar17 + 0xc);
          }
        }
        local_148._s_0.A = local_160._s_0.B;
        local_148._s_0.B = local_160._s_0.A;
        TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
        ::Emplace<UE::Geometry::FIndex2i,int_const_&>
                  ((TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
                    *)&local_98,(FIndex2i *)&local_148._s_0,(int *)&local_164);
LAB_1433b3562:
        lVar23 = lVar23 + -1;
        lVar14 = lVar24;
        lVar24 = lVar24 + 1;
      } while (lVar23 != 0);
      iVar13 = pTVar19->ArrayNum;
      local_164 = local_164 + 1;
    } while ((int)local_164 < iVar13);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// HasEdge @ 1433b4150

bool __thiscall
UE::Geometry::FDelaunay2Connectivity::HasEdge(FDelaunay2Connectivity *this,FIndex2i *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  
  uVar2 = FCrc::MemCrc_DEPRECATED(param_1,8,0);
  if (*(int *)&(this->EdgeToVert).field_0x8 != *(int *)&(this->EdgeToVert).field_0x34) {
    puVar5 = *(undefined1 **)&(this->EdgeToVert).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->EdgeToVert).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->EdgeToVert).field_0x48 - 1U & uVar2) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->EdgeToVert;
      do {
        lVar4 = (longlong)iVar3;
        if ((*(int *)(lVar1 + lVar4 * 0x14) == (param_1->field0_0x0)._s_0.A) &&
           (*(int *)(lVar1 + 4 + lVar4 * 0x14) == (param_1->field0_0x0)._s_0.B)) goto LAB_1433b41c8;
        iVar3 = *(int *)(lVar1 + 0xc + lVar4 * 0x14);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1433b41c8:
  return iVar3 != -1;
}

// MakeVertexAdjacency @ 1433bca20

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FDelaunay2Connectivity::MakeVertexAdjacency
          (FDelaunay2Connectivity *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  int local_res8 [2];
  int local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_res8[0] = -1;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(__return_storage_ptr__,local_res8,param_1 + 1);
  iVar3 = *(int *)&(this->EdgeToVert).field_0x28;
  puVar2 = &(this->EdgeToVert).field_0x10;
  iVar12 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = iVar12;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->EdgeToVert).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar2;
    }
    uVar11 = *puVar15;
    iVar14 = 0;
    iVar12 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1433bcadd;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = iVar14 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1433bcadd:
  uVar11 = *(uint *)&(this->EdgeToVert).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar12);
  TStack_70.CurrentBitIndex = iVar7;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_70._28_4_ = iVar7;
  TStack_70.BaseBitIndex = iVar14;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->EdgeToVert).field_0x8 -
                       *(int *)&(this->EdgeToVert).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  uVar6 = *(uint *)&(this->EdgeToVert).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->EdgeToVert).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1433bcbe0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    uVar11 = local_res20 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_1433bcbe0:
  while( true ) {
    if (*(int *)&(this->EdgeToVert).field_0x8 - *(int *)&(this->EdgeToVert).field_0x34 !=
        (int)uStack_50) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_70.CurrentBitIndex == uVar11) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) {
      return __return_storage_ptr__;
    }
    iVar3 = *(int *)(*(longlong *)&this->EdgeToVert + (longlong)TStack_70.CurrentBitIndex * 0x14 + 4
                    );
    uVar10 = *(int *)(*(longlong *)&this->EdgeToVert + (longlong)TStack_70.CurrentBitIndex * 0x14) +
             1;
    uVar6 = 0;
    if ((int)uVar10 < __return_storage_ptr__->ArrayNum) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar10 * 4) =
         iVar3 + 1;
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  pcVar4 = (code *)swi(3);
  pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
  return pTVar8;
}

