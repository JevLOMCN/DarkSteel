// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 17

// Empty @ 14339c590

void __thiscall
TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>::Empty
          (TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int *piVar1;
  FDynamicMesh3 *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    this_00 = *(FDynamicMesh3 **)pFVar4;
    if (this_00 != (FDynamicMesh3 *)0x0) {
      pFVar2 = this_00[1].VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = this_00[1].Vertices.Blocks.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      if ((void *)this_00[1]._padding_ != (void *)0x0) {
        FMemory::Free((void *)this_00[1]._padding_);
      }
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(this_00);
      ::operator_delete(this_00,0x2e0);
    }
    pFVar4 = pFVar4 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ~TIndirectArray<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TSizedDefaultAllocator<32>_> @ 143453ff0

void __thiscall
TIndirectArray<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TSizedDefaultAllocator<32>_>::
~TIndirectArray<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TSizedDefaultAllocator<32>_>
          (TIndirectArray<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = *(undefined8 **)pFVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar3 = pFVar3 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar3 = (this->Array).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ~TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_> @ 143454080

void __thiscall
TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_>
          (TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  TDynamicMeshOverlay<float,2> *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    this_00 = *(TDynamicMeshOverlay<float,2> **)pFVar2;
    if (this_00 != (TDynamicMeshOverlay<float,2> *)0x0) {
      UE::Geometry::TDynamicMeshOverlay<float,2>::~TDynamicMeshOverlay<float,2>(this_00);
      ::operator_delete(this_00,0x88);
    }
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// ~TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_> @ 143454130

void __thiscall
TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
          (TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  TDynamicMeshOverlay<float,3> *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    this_00 = *(TDynamicMeshOverlay<float,3> **)pFVar2;
    if (this_00 != (TDynamicMeshOverlay<float,3> *)0x0) {
      UE::Geometry::TDynamicMeshOverlay<float,3>::~TDynamicMeshOverlay<float,3>(this_00);
      ::operator_delete(this_00,0x88);
    }
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// ~TIndirectArray<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_> @ 1434541e0

void __thiscall
TIndirectArray<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
          (TIndirectArray<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = *(undefined8 **)pFVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar3 = pFVar3 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar3 = (this->Array).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ~TIndirectArray<UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_> @ 143454270

void __thiscall
TIndirectArray<UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
          (TIndirectArray<UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = *(undefined8 **)pFVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar3 = pFVar3 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar3 = (this->Array).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// Empty @ 1434b1e90

void __thiscall
TIndirectArray<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TSizedDefaultAllocator<32>_>::
Empty(TIndirectArray<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TSizedDefaultAllocator<32>_>
      *this,int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = *(undefined8 **)pFVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar3 = pFVar3 + 8;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// Empty @ 1434b1f30

void __thiscall
TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  TDynamicMeshOverlay<float,2> *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    this_00 = *(TDynamicMeshOverlay<float,2> **)pFVar2;
    if (this_00 != (TDynamicMeshOverlay<float,2> *)0x0) {
      UE::Geometry::TDynamicMeshOverlay<float,2>::~TDynamicMeshOverlay<float,2>(this_00);
      ::operator_delete(this_00,0x88);
    }
    pFVar2 = pFVar2 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1434b1fe0

void __thiscall
TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  TDynamicMeshOverlay<float,3> *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    this_00 = *(TDynamicMeshOverlay<float,3> **)pFVar2;
    if (this_00 != (TDynamicMeshOverlay<float,3> *)0x0) {
      UE::Geometry::TDynamicMeshOverlay<float,3>::~TDynamicMeshOverlay<float,3>(this_00);
      ::operator_delete(this_00,0x88);
    }
    pFVar2 = pFVar2 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1434b2090

void __thiscall
TIndirectArray<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = *(undefined8 **)pFVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar3 = pFVar3 + 8;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// RemoveAt @ 143516310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TIndirectArray<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TSizedDefaultAllocator<32>_>::
RemoveAt(TIndirectArray<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TSizedDefaultAllocator<32>_>
         *this,int param_1,int param_2,EAllowShrinking param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  
  if ((param_1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x112,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Array).ArrayNum < param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x113,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Array).ArrayNum < param_1 + param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index + Count <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x114,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
  for (iVar6 = param_2; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar1 = *(undefined8 **)pFVar5;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    pFVar5 = pFVar5 + 8;
  }
  uVar4 = 0;
  if (param_1 + param_2 <= (this->Array).ArrayNum) {
    uVar4 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2 != 0) {
    pFVar5 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
    iVar6 = ((this->Array).ArrayNum - param_1) - param_2;
    if (iVar6 != 0) {
      memmove(pFVar5,pFVar5 + (longlong)param_2 * 8,(longlong)iVar6 << 3);
    }
    iVar6 = (this->Array).ArrayNum - param_2;
    (this->Array).ArrayNum = iVar6;
    if (param_3 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)this,iVar6,&(this->Array).ArrayMax);
    }
  }
  return;
}

// RemoveAt @ 1435164b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_>
::RemoveAt(TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2,EAllowShrinking param_3)

{
  TDynamicMeshOverlay<float,2> *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  
  if ((param_1 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x112,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->Array).ArrayNum < param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x113,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->Array).ArrayNum < param_1 + param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index + Count <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x114,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar4 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
  for (iVar5 = param_2; iVar5 != 0; iVar5 = iVar5 + -1) {
    this_00 = *(TDynamicMeshOverlay<float,2> **)pFVar4;
    if (this_00 != (TDynamicMeshOverlay<float,2> *)0x0) {
      UE::Geometry::TDynamicMeshOverlay<float,2>::~TDynamicMeshOverlay<float,2>(this_00);
      ::operator_delete(this_00,0x88);
    }
    pFVar4 = pFVar4 + 8;
  }
  uVar3 = 0;
  if (param_1 + param_2 <= (this->Array).ArrayNum) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2 != 0) {
    pFVar4 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
    iVar5 = ((this->Array).ArrayNum - param_1) - param_2;
    if (iVar5 != 0) {
      memmove(pFVar4,pFVar4 + (longlong)param_2 * 8,(longlong)iVar5 << 3);
    }
    iVar5 = (this->Array).ArrayNum - param_2;
    (this->Array).ArrayNum = iVar5;
    if (param_3 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)this,iVar5,&(this->Array).ArrayMax);
    }
  }
  return;
}

// RemoveAt @ 143516670

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
::RemoveAt(TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2,EAllowShrinking param_3)

{
  TDynamicMeshOverlay<float,3> *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  
  if ((param_1 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x112,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->Array).ArrayNum < param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x113,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->Array).ArrayNum < param_1 + param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index + Count <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x114,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar4 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
  for (iVar5 = param_2; iVar5 != 0; iVar5 = iVar5 + -1) {
    this_00 = *(TDynamicMeshOverlay<float,3> **)pFVar4;
    if (this_00 != (TDynamicMeshOverlay<float,3> *)0x0) {
      UE::Geometry::TDynamicMeshOverlay<float,3>::~TDynamicMeshOverlay<float,3>(this_00);
      ::operator_delete(this_00,0x88);
    }
    pFVar4 = pFVar4 + 8;
  }
  uVar3 = 0;
  if (param_1 + param_2 <= (this->Array).ArrayNum) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2 != 0) {
    pFVar4 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
    iVar5 = ((this->Array).ArrayNum - param_1) - param_2;
    if (iVar5 != 0) {
      memmove(pFVar4,pFVar4 + (longlong)param_2 * 8,(longlong)iVar5 << 3);
    }
    iVar5 = (this->Array).ArrayNum - param_2;
    (this->Array).ArrayNum = iVar5;
    if (param_3 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)this,iVar5,&(this->Array).ArrayMax);
    }
  }
  return;
}

// RemoveAt @ 143516830

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TIndirectArray<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
::RemoveAt(TIndirectArray<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2,EAllowShrinking param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  
  if ((param_1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x112,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Array).ArrayNum < param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x113,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Array).ArrayNum < param_1 + param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index + Count <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x114,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
  for (iVar6 = param_2; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar1 = *(undefined8 **)pFVar5;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    pFVar5 = pFVar5 + 8;
  }
  uVar4 = 0;
  if (param_1 + param_2 <= (this->Array).ArrayNum) {
    uVar4 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2 != 0) {
    pFVar5 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
    iVar6 = ((this->Array).ArrayNum - param_1) - param_2;
    if (iVar6 != 0) {
      memmove(pFVar5,pFVar5 + (longlong)param_2 * 8,(longlong)iVar6 << 3);
    }
    iVar6 = (this->Array).ArrayNum - param_2;
    (this->Array).ArrayNum = iVar6;
    if (param_3 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)this,iVar6,&(this->Array).ArrayMax);
    }
  }
  return;
}

// RemoveAt @ 1435169d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TIndirectArray<UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
::RemoveAt(TIndirectArray<UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2,EAllowShrinking param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  
  if ((param_1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x112,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Array).ArrayNum < param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x113,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Array).ArrayNum < param_1 + param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index + Count <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x114,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
  for (iVar6 = param_2; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar1 = *(undefined8 **)pFVar5;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    pFVar5 = pFVar5 + 8;
  }
  uVar4 = 0;
  if (param_1 + param_2 <= (this->Array).ArrayNum) {
    uVar4 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2 != 0) {
    pFVar5 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
    iVar6 = ((this->Array).ArrayNum - param_1) - param_2;
    if (iVar6 != 0) {
      memmove(pFVar5,pFVar5 + (longlong)param_2 * 8,(longlong)iVar6 << 3);
    }
    iVar6 = (this->Array).ArrayNum - param_2;
    (this->Array).ArrayNum = iVar6;
    if (param_3 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)this,iVar6,&(this->Array).ArrayMax);
    }
  }
  return;
}

// ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_> @ 1435687d0

void __thiscall
TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
          (TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = *(undefined8 **)pFVar3;
    if (puVar2 != (undefined8 *)0x0) {
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
      ::operator_delete(puVar2,0x10);
    }
    pFVar3 = pFVar3 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar3 = (this->Array).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// Reset @ 1436185b0

void __thiscall
TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
Reset(TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
      *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar2 = (this->Array).ArrayNum; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = *(undefined8 **)pFVar3;
    if (puVar1 != (undefined8 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      ::operator_delete(puVar1,0x10);
    }
    pFVar3 = pFVar3 + 8;
  }
  if (-1 < param_1) {
    (this->Array).ArrayNum = 0;
    if ((this->Array).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,&(this->Array).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

