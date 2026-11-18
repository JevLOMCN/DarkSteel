// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 7

// ~FMeshVerticesGenerator<double> @ 14c7b59f0

void __thiscall
UniformTessellateLocals::FMeshVerticesGenerator<double>::~FMeshVerticesGenerator<double>
          (FMeshVerticesGenerator<double> *this)

{
  this->_padding_ = (longlong)&___7__FTrianglesGenerator_N_02_UniformTessellateLocals__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7__FElementsGenerator_N_02_UniformTessellateLocals__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FBaseGenerator_UniformTessellateLocals__6B_;
  return;
}

// ComputeTopologyMappings @ 14c7f35e0

bool __thiscall
UniformTessellateLocals::FMeshVerticesGenerator<double>::ComputeTopologyMappings
          (FMeshVerticesGenerator<double> *this)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_res8 [16];
  FIndex2i *local_res18;
  TPairInitializer<int_const_&,UE::Geometry::FIndex2i_const_&> *local_28;
  FIndex2i **local_20;
  
  if (this->VertexEdgeMap !=
      (TMap<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
       *)0x0) {
    lVar2 = this->_padding_;
    uVar3 = 0;
    if (0 < *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4)) {
      iVar6 = (int)this->_padding_;
      do {
        iVar5 = 0;
        local_res18 = *(FIndex2i **)
                       (*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + (uVar3 >> 9) * 8) + 8 +
                       (ulonglong)((uint)uVar3 & 0x1ff) * 0x10);
        if (0 < iVar6) {
          local_28 = (TPairInitializer<int_const_&,UE::Geometry::FIndex2i_const_&> *)local_res8;
          local_20 = &local_res18;
          do {
            local_res8._0_4_ = (**(code **)(this->_padding_ + 0x28))(this,uVar3,local_res18,iVar5);
            TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FIndex2i_const_&>_>
                      ((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                        *)this->VertexEdgeMap,
                       (TPairInitializer<int_const_&,UE::Geometry::FIndex2i_const_&> *)
                       (local_res8 + 8),(bool *)&local_28);
            iVar6 = (int)this->_padding_;
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar6);
        }
        lVar2 = this->_padding_;
        uVar4 = (uint)uVar3 + 1;
        uVar3 = (ulonglong)uVar4;
      } while ((int)uVar4 < *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4));
    }
  }
  cVar1 = (**(code **)(this->_padding_ + 8))(this);
  if (cVar1 == '\0') {
    if ((this->VertexTriangleMap !=
         (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)0x0) &&
       (local_res8._0_4_ = 0,
       0 < *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144))) {
      do {
        iVar5 = 0;
        uVar4 = 1;
        iVar6 = local_res8._0_4_;
        if (1 < (int)this->_padding_) {
          do {
            if (0 < (int)uVar4) {
              local_28 = (TPairInitializer<int_const_&,UE::Geometry::FIndex2i_const_&> *)
                         (local_res8 + 8);
              uVar3 = (ulonglong)uVar4;
              local_20 = (FIndex2i **)local_res8;
              do {
                local_res8._8_4_ = (**(code **)(this->_padding_ + 0x38))(this,iVar6,iVar5);
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Emplace<TPairInitializer<int_const_&,int_const_&>_>
                          ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            *)this->VertexTriangleMap,
                           (TPairInitializer<int_const_&,int_const_&> *)&local_res18,
                           (bool *)&local_28);
                iVar5 = iVar5 + 1;
                uVar3 = uVar3 - 1;
                iVar6 = local_res8._0_4_;
              } while (uVar3 != 0);
            }
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < (int)this->_padding_);
        }
        local_res8._0_4_ = iVar6 + 1;
      } while ((int)local_res8._0_4_ <
               *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144));
    }
    return true;
  }
  return false;
}

// Generate @ 14c809e80

bool __thiscall
UniformTessellateLocals::FMeshVerticesGenerator<double>::Generate
          (FMeshVerticesGenerator<double> *this)

{
  longlong lVar1;
  <lambda_1> <Var2;
  char cVar3;
  bool bVar4;
  FMeshVerticesGenerator<double> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FMeshVerticesGenerator<double> **local_10;
  
  lVar1 = this->_padding_;
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) * 0x200 + *(int *)(lVar1 + 0x3c) == 0)) &&
      (*(int *)(lVar1 + 0x1e8) * 0x200 + *(int *)(lVar1 + 0x1ec) == 0)) &&
     ((*(int *)(lVar1 + 0x158) * 0x200 + *(int *)(lVar1 + 0x15c) == 0 && (-1 < (int)this->_padding_)
      ))) {
    (**(code **)(this->_padding_ + 0x20))(this);
    cVar3 = (**(code **)(this->_padding_ + 0x58))(this);
    if ((cVar3 != '\0') && (cVar3 = (**(code **)(this->_padding_ + 0x60))(), cVar3 != '\0')) {
      if ((int)this->_padding_ != 0) {
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UniformTessellateLocals::FTrianglesGenerator<double,3>::GenerateTriangles'::__l2::<lambda_1>,void,int>
                   ::Call;
        local_10 = local_res8;
        local_28.DataPtr = (void **)0x0;
        local_28.ArrayNum = 0;
        local_res8[0]._0_1_ = SUB81(this,0);
        <Var2 = local_res8[0]._0_1_;
        local_res8[0] = this;
        ParallelForImpl::
        ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                  (L"ParallelFor Task",
                   *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144),1,
                   (TFunctionRef<void___cdecl(int)> *)&local_18,<Var2,
                   (uint)((char)this->_padding_ == '\0'),&local_28);
        cVar3 = (**(code **)(this->_padding_ + 8))(this);
        if (cVar3 != '\0') {
          return false;
        }
      }
      bVar4 = ComputeTopologyMappings(this);
      return bVar4;
    }
  }
  return false;
}

// GetElementIDOnEdge @ 14c80fba0

int __thiscall
UniformTessellateLocals::FMeshVerticesGenerator<double>::GetElementIDOnEdge
          (FMeshVerticesGenerator<double> *this,int param_1,int param_2,int param_3)

{
  return param_3 + param_1 * (int)this->_padding_ + (int)this->_padding_;
}

// GetInputMeshElementID @ 14c8101c0

int __thiscall
UniformTessellateLocals::FMeshVerticesGenerator<double>::GetInputMeshElementID
          (FMeshVerticesGenerator<double> *this,int param_1,int param_2)

{
  return param_2;
}

// GetInputMeshElementValue @ 14c810270

void __thiscall
UniformTessellateLocals::FMeshVerticesGenerator<double>::GetInputMeshElementValue
          (FMeshVerticesGenerator<double> *this,int param_1,int param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  
  lVar3 = *(longlong *)(*(longlong *)(this->_padding_ + 0x10) + (ulonglong)((uint)param_2 >> 9) * 8)
  ;
  pdVar1 = (double *)(lVar3 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  dVar4 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  *param_3 = *pdVar1;
  param_3[1] = dVar4;
  param_3[2] = dVar2;
  return;
}

// Initialize @ 14c814740

void __thiscall
UniformTessellateLocals::FMeshVerticesGenerator<double>::Initialize
          (FMeshVerticesGenerator<double> *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  
  iVar8 = (int)this->_padding_;
  lVar10 = this->_padding_;
  iVar3 = *(int *)(lVar10 + 0x50);
  *(int *)&this->_padding_ = iVar3;
  iVar14 = iVar8 * *(int *)(lVar10 + 0x200);
  lVar15 = this->_padding_;
  *(int *)&this->_padding_ = iVar14;
  iVar8 = ((iVar8 + 3) * (iVar8 + 2)) / 2 + (iVar8 + 2) * -3 + 3;
  *(int *)((longlong)&this->_padding_ + 4) = iVar8;
  lVar12 = this->_padding_;
  *(int *)((longlong)&this->_padding_ + 4) = iVar14 + iVar8 * *(int *)(lVar10 + 0x170) + iVar3;
  (**(code **)(lVar12 + 0x70))(this,(int)lVar15);
  lVar10 = this->_padding_;
  uVar11 = 0;
  if (0 < *(int *)(lVar10 + 0x50)) {
    lVar12 = 0x10;
    uVar13 = 2;
    lVar15 = 0;
    do {
      lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
      puVar1 = (undefined8 *)(lVar10 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar2 = *(undefined8 *)(lVar10 + 0x10 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
      uVar9 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined1 *)(lVar15 + this->_padding_) = 1;
      uVar9 = 0;
      if ((int)(uVar13 - 2) < (int)this->_padding_) {
        uVar9 = ~(uVar13 - 2) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(lVar12 + -0x10 + this->_padding_) = uVar5;
      uVar9 = 0;
      if ((int)(uVar13 - 1) < (int)this->_padding_) {
        uVar9 = ~(uVar13 - 1) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(lVar12 + -8 + this->_padding_) = uVar6;
      uVar9 = 0;
      if ((int)uVar13 < (int)this->_padding_) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = uVar11 + 1;
      uVar13 = uVar13 + 3;
      lVar15 = lVar15 + 1;
      *(undefined8 *)(lVar12 + this->_padding_) = uVar2;
      lVar12 = lVar12 + 0x18;
      lVar10 = this->_padding_;
    } while ((int)uVar11 < *(int *)(lVar10 + 0x50));
  }
  if ((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
       *)this->VertexEdgeMap !=
      (TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
       *)0x0) {
    TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
               *)this->VertexEdgeMap,(int)this->_padding_);
  }
  if ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
      this->VertexTriangleMap ==
      (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)0x0) {
    return;
  }
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             this->VertexTriangleMap,
             *(int *)(this->_padding_ + 0x170) * *(int *)((longlong)&this->_padding_ + 4));
  return;
}

