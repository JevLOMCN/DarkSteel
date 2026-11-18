// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 26

// ~FVertexAttributeGenerator<float,1> @ 14c7b5d80

void __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,1>::~FVertexAttributeGenerator<float,1>
          (FVertexAttributeGenerator<float,1> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7__FVertexAttributeGenerator_M_00_UniformTessellateLocals__6B_;
  if (*(longlong *)&this->DataFunction != 0) {
    plVar1 = *(longlong **)&(this->DataFunction).field_0x28;
    plVar2 = (longlong *)&(this->DataFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7__FElementsGenerator_M_00_UniformTessellateLocals__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FBaseGenerator_UniformTessellateLocals__6B_;
  return;
}

// ~FVertexAttributeGenerator<float,2> @ 14c7b5df0

void __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,2>::~FVertexAttributeGenerator<float,2>
          (FVertexAttributeGenerator<float,2> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7__FVertexAttributeGenerator_M_01_UniformTessellateLocals__6B_;
  if (*(longlong *)&this->DataFunction != 0) {
    plVar1 = *(longlong **)&(this->DataFunction).field_0x28;
    plVar2 = (longlong *)&(this->DataFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7__FElementsGenerator_M_01_UniformTessellateLocals__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FBaseGenerator_UniformTessellateLocals__6B_;
  return;
}

// ~FVertexAttributeGenerator<float,3> @ 14c7b5e60

void __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,3>::~FVertexAttributeGenerator<float,3>
          (FVertexAttributeGenerator<float,3> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7__FVertexAttributeGenerator_M_02_UniformTessellateLocals__6B_;
  if (*(longlong *)&this->DataFunction != 0) {
    plVar1 = *(longlong **)&(this->DataFunction).field_0x28;
    plVar2 = (longlong *)&(this->DataFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7__FElementsGenerator_M_02_UniformTessellateLocals__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FBaseGenerator_UniformTessellateLocals__6B_;
  return;
}

// ~FVertexAttributeGenerator<float,4> @ 14c7b5ed0

void __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,4>::~FVertexAttributeGenerator<float,4>
          (FVertexAttributeGenerator<float,4> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7__FVertexAttributeGenerator_M_03_UniformTessellateLocals__6B_;
  if (*(longlong *)&this->DataFunction != 0) {
    plVar1 = *(longlong **)&(this->DataFunction).field_0x28;
    plVar2 = (longlong *)&(this->DataFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7__FElementsGenerator_M_03_UniformTessellateLocals__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FBaseGenerator_UniformTessellateLocals__6B_;
  return;
}

// operator() @ 14c7bc920

void __thiscall
`UniformTessellateLocals::FVertexAttributeGenerator<float,4>::CreateFromPerVertexColors'::__l2::
<lambda_1>::operator()(void *this,int param_1,float *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  float fStack_14;
  
  if (*(char *)(*(longlong *)this + 0x90) == '\0') {
    fStack_14 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
    uVar3 = (ulonglong)(uint)UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
    uVar2 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)this + 0x80) + (ulonglong)((uint)param_1 >> 9) * 8);
    uVar3 = *(ulonglong *)(lVar1 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    uVar2 = *(float *)(lVar1 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    fStack_14 = (float)(uVar3 >> 0x20);
  }
  *param_2 = (float)uVar3;
  param_2[1] = fStack_14;
  param_2[2] = (float)uVar2;
  param_2[3] = 1.0;
  return;
}

// CopyToAttribute @ 14c7fb750

void __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,3>::CopyToAttribute
          (FVertexAttributeGenerator<float,3> *this,
          TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_68;
  
  uVar5 = 0;
  if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
    lVar4 = 8;
    lVar7 = 0;
    uVar6 = 0;
    uVar8 = local_68;
    uVar9 = local_68;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (int)this->_padding_) {
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
      if (*(char *)(lVar7 + this->_padding_) != '\0') {
        uVar3 = 0;
        if ((int)uVar6 < (int)this->_padding_) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar9 = *(undefined4 *)(this->_padding_ + -8 + lVar4);
        uVar3 = 0;
        if ((int)(uVar6 + 1) < (int)this->_padding_) {
          uVar3 = ~(uVar6 + 1) >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar8 = *(undefined4 *)(this->_padding_ + -4 + lVar4);
        uVar3 = 0;
        if ((int)(uVar6 + 2) < (int)this->_padding_) {
          uVar3 = ~(uVar6 + 2) >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_68 = *(undefined4 *)(this->_padding_ + lVar4);
      }
      uVar3 = uVar5 * 3;
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 1;
      lVar4 = lVar4 + 0xc;
      uVar6 = uVar6 + 3;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8) +
       (ulonglong)(uVar3 & 0x1ff) * 4) = uVar9;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 + 1 >> 9) * 8) +
       (ulonglong)(uVar3 + 1 & 0x1ff) * 4) = uVar8;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 + 2 >> 9) * 8) +
       (ulonglong)(uVar3 + 2 & 0x1ff) * 4) = local_68;
    } while ((int)uVar5 < *(int *)((longlong)&this->_padding_ + 4));
  }
  return;
}

// Generate @ 14c80a510

bool __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,1>::Generate
          (FVertexAttributeGenerator<float,1> *this)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = this->_padding_;
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) * 0x200 + *(int *)(lVar1 + 0x3c) == 0)) &&
      (*(int *)(lVar1 + 0x1e8) * 0x200 + *(int *)(lVar1 + 0x1ec) == 0)) &&
     ((*(int *)(lVar1 + 0x158) * 0x200 + *(int *)(lVar1 + 0x15c) == 0 && (-1 < (int)this->_padding_)
      ))) {
    (**(code **)(this->_padding_ + 0x20))();
    cVar2 = (**(code **)(this->_padding_ + 0x58))(this);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(this->_padding_ + 0x60))(this);
      return cVar2 != '\0';
    }
  }
  return false;
}

// Generate @ 14c80a590

bool __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,2>::Generate
          (FVertexAttributeGenerator<float,2> *this)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = this->_padding_;
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) * 0x200 + *(int *)(lVar1 + 0x3c) == 0)) &&
      (*(int *)(lVar1 + 0x1e8) * 0x200 + *(int *)(lVar1 + 0x1ec) == 0)) &&
     ((*(int *)(lVar1 + 0x158) * 0x200 + *(int *)(lVar1 + 0x15c) == 0 && (-1 < (int)this->_padding_)
      ))) {
    (**(code **)(this->_padding_ + 0x20))();
    cVar2 = (**(code **)(this->_padding_ + 0x58))(this);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(this->_padding_ + 0x60))(this);
      return cVar2 != '\0';
    }
  }
  return false;
}

// Generate @ 14c80a610

bool __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,3>::Generate
          (FVertexAttributeGenerator<float,3> *this)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = this->_padding_;
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) * 0x200 + *(int *)(lVar1 + 0x3c) == 0)) &&
      (*(int *)(lVar1 + 0x1e8) * 0x200 + *(int *)(lVar1 + 0x1ec) == 0)) &&
     ((*(int *)(lVar1 + 0x158) * 0x200 + *(int *)(lVar1 + 0x15c) == 0 && (-1 < (int)this->_padding_)
      ))) {
    (**(code **)(this->_padding_ + 0x20))();
    cVar2 = (**(code **)(this->_padding_ + 0x58))(this);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(this->_padding_ + 0x60))(this);
      return cVar2 != '\0';
    }
  }
  return false;
}

// Generate @ 14c80a690

bool __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,4>::Generate
          (FVertexAttributeGenerator<float,4> *this)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = this->_padding_;
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) * 0x200 + *(int *)(lVar1 + 0x3c) == 0)) &&
      (*(int *)(lVar1 + 0x1e8) * 0x200 + *(int *)(lVar1 + 0x1ec) == 0)) &&
     ((*(int *)(lVar1 + 0x158) * 0x200 + *(int *)(lVar1 + 0x15c) == 0 && (-1 < (int)this->_padding_)
      ))) {
    (**(code **)(this->_padding_ + 0x20))();
    cVar2 = (**(code **)(this->_padding_ + 0x58))(this);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(this->_padding_ + 0x60))(this);
      return cVar2 != '\0';
    }
  }
  return false;
}

// GetElementIDOnEdge @ 14c80ff50

int __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,1>::GetElementIDOnEdge
          (FVertexAttributeGenerator<float,1> *this,int param_1,int param_2,int param_3)

{
  return param_3 + param_1 * (int)this->_padding_ + (int)this->_padding_;
}

// GetElementIDOnEdge @ 14c80ff70

int __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,2>::GetElementIDOnEdge
          (FVertexAttributeGenerator<float,2> *this,int param_1,int param_2,int param_3)

{
  return param_3 + param_1 * (int)this->_padding_ + (int)this->_padding_;
}

// GetElementIDOnEdge @ 14c80ff90

int __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,3>::GetElementIDOnEdge
          (FVertexAttributeGenerator<float,3> *this,int param_1,int param_2,int param_3)

{
  return param_3 + param_1 * (int)this->_padding_ + (int)this->_padding_;
}

// GetElementIDOnEdge @ 14c80ffb0

int __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,4>::GetElementIDOnEdge
          (FVertexAttributeGenerator<float,4> *this,int param_1,int param_2,int param_3)

{
  return param_3 + param_1 * (int)this->_padding_ + (int)this->_padding_;
}

// GetInputMeshElementID @ 14c810230

int __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,1>::GetInputMeshElementID
          (FVertexAttributeGenerator<float,1> *this,int param_1,int param_2)

{
  return param_2;
}

// GetInputMeshElementID @ 14c810240

int __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,2>::GetInputMeshElementID
          (FVertexAttributeGenerator<float,2> *this,int param_1,int param_2)

{
  return param_2;
}

// GetInputMeshElementID @ 14c810250

int __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,3>::GetInputMeshElementID
          (FVertexAttributeGenerator<float,3> *this,int param_1,int param_2)

{
  return param_2;
}

// GetInputMeshElementID @ 14c810260

int __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,4>::GetInputMeshElementID
          (FVertexAttributeGenerator<float,4> *this,int param_1,int param_2)

{
  return param_2;
}

// GetInputMeshElementValue @ 14c810490

void __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,1>::GetInputMeshElementValue
          (FVertexAttributeGenerator<float,1> *this,int param_1,int param_2,float *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float *local_res8;
  int local_res18 [4];
  
  local_res8 = param_3;
  local_res18[0] = param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->DataFunction);
  pcVar1 = *(code **)&this->DataFunction;
  plVar2 = *(longlong **)&(this->DataFunction).field_0x28;
  plVar4 = (longlong *)&(this->DataFunction).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,local_res18,&local_res8);
  return;
}

// GetInputMeshElementValue @ 14c8104f0

void __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,2>::GetInputMeshElementValue
          (FVertexAttributeGenerator<float,2> *this,int param_1,int param_2,float *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float *local_res8;
  int local_res18 [4];
  
  local_res8 = param_3;
  local_res18[0] = param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->DataFunction);
  pcVar1 = *(code **)&this->DataFunction;
  plVar2 = *(longlong **)&(this->DataFunction).field_0x28;
  plVar4 = (longlong *)&(this->DataFunction).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,local_res18,&local_res8);
  return;
}

// GetInputMeshElementValue @ 14c810550

void __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,3>::GetInputMeshElementValue
          (FVertexAttributeGenerator<float,3> *this,int param_1,int param_2,float *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float *local_res8;
  int local_res18 [4];
  
  local_res8 = param_3;
  local_res18[0] = param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->DataFunction);
  pcVar1 = *(code **)&this->DataFunction;
  plVar2 = *(longlong **)&(this->DataFunction).field_0x28;
  plVar4 = (longlong *)&(this->DataFunction).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,local_res18,&local_res8);
  return;
}

// GetInputMeshElementValue @ 14c8105b0

void __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,4>::GetInputMeshElementValue
          (FVertexAttributeGenerator<float,4> *this,int param_1,int param_2,float *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float *local_res8;
  int local_res18 [4];
  
  local_res8 = param_3;
  local_res18[0] = param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->DataFunction);
  pcVar1 = *(code **)&this->DataFunction;
  plVar2 = *(longlong **)&(this->DataFunction).field_0x28;
  plVar4 = (longlong *)&(this->DataFunction).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,local_res18,&local_res8);
  return;
}

// Initialize @ 14c815bc0

void __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,1>::Initialize
          (FVertexAttributeGenerator<float,1> *this)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 *local_res18 [2];
  
  iVar7 = (int)this->_padding_;
  lVar13 = this->_padding_;
  iVar1 = *(int *)(lVar13 + 0x50);
  *(int *)&this->_padding_ = iVar1;
  iVar12 = iVar7 * *(int *)(lVar13 + 0x200);
  *(int *)&this->_padding_ = iVar12;
  iVar7 = ((iVar7 + 3) * (iVar7 + 2)) / 2 + (iVar7 + 2) * -3 + 3;
  *(int *)((longlong)&this->_padding_ + 4) = iVar7;
  lVar2 = this->_padding_;
  *(int *)((longlong)&this->_padding_ + 4) = iVar12 + iVar7 * *(int *)(lVar13 + 0x170) + iVar1;
  (**(code **)(lVar2 + 0x18))(this);
  uVar11 = 0;
  if (0 < *(int *)(this->_padding_ + 0x50)) {
    lVar13 = 0;
    do {
      local_res18[0] = local_res10;
      local_res8[0] = uVar11;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->DataFunction);
      plVar3 = *(longlong **)&(this->DataFunction).field_0x28;
      pcVar4 = *(code **)&this->DataFunction;
      plVar10 = (longlong *)&(this->DataFunction).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar10 = plVar3;
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      (*pcVar4)(uVar9,local_res8,local_res18);
      uVar8 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar5 = local_res10[0];
      *(undefined1 *)(lVar13 + this->_padding_) = 1;
      uVar8 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = uVar11 + 1;
      *(undefined4 *)(this->_padding_ + lVar13 * 4) = uVar5;
      lVar13 = lVar13 + 1;
    } while ((int)uVar11 < *(int *)(this->_padding_ + 0x50));
  }
  return;
}

// Initialize @ 14c815d70

void __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,2>::Initialize
          (FVertexAttributeGenerator<float,2> *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 *local_res18 [2];
  
  iVar7 = (int)this->_padding_;
  lVar14 = this->_padding_;
  iVar1 = *(int *)(lVar14 + 0x50);
  *(int *)&this->_padding_ = iVar1;
  iVar13 = iVar7 * *(int *)(lVar14 + 0x200);
  *(int *)&this->_padding_ = iVar13;
  iVar7 = ((iVar7 + 3) * (iVar7 + 2)) / 2 + (iVar7 + 2) * -3 + 3;
  *(int *)((longlong)&this->_padding_ + 4) = iVar7;
  lVar15 = this->_padding_;
  *(int *)((longlong)&this->_padding_ + 4) = iVar13 + iVar7 * *(int *)(lVar14 + 0x170) + iVar1;
  (**(code **)(lVar15 + 0x18))(this);
  uVar11 = 0;
  if (0 < *(int *)(this->_padding_ + 0x50)) {
    uVar12 = 0;
    lVar15 = 0;
    lVar14 = 0;
    do {
      local_res18[0] = &local_res10;
      local_res8[0] = uVar11;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->DataFunction);
      plVar2 = *(longlong **)&(this->DataFunction).field_0x28;
      pcVar3 = *(code **)&this->DataFunction;
      plVar10 = (longlong *)&(this->DataFunction).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar10 = plVar2;
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      (*pcVar3)(uVar9,local_res8,local_res18);
      uVar8 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar4 = local_res10;
      *(undefined1 *)(lVar15 + this->_padding_) = 1;
      uVar8 = 0;
      if ((int)uVar12 < (int)this->_padding_) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = local_res14;
      *(undefined4 *)(lVar14 + this->_padding_) = uVar4;
      uVar8 = 0;
      if ((int)(uVar12 + 1) < (int)this->_padding_) {
        uVar8 = ~(uVar12 + 1) >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = uVar11 + 1;
      uVar12 = uVar12 + 2;
      lVar15 = lVar15 + 1;
      *(undefined4 *)(lVar14 + 4 + this->_padding_) = uVar5;
      lVar14 = lVar14 + 8;
    } while ((int)uVar11 < *(int *)(this->_padding_ + 0x50));
  }
  return;
}

// Initialize @ 14c815fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,3>::Initialize
          (FVertexAttributeGenerator<float,3> *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  uint local_68 [2];
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  iVar7 = (int)this->_padding_;
  lVar11 = this->_padding_;
  iVar1 = *(int *)(lVar11 + 0x50);
  *(int *)&this->_padding_ = iVar1;
  iVar13 = iVar7 * *(int *)(lVar11 + 0x200);
  *(int *)&this->_padding_ = iVar13;
  iVar7 = ((iVar7 + 3) * (iVar7 + 2)) / 2 + (iVar7 + 2) * -3 + 3;
  *(int *)((longlong)&this->_padding_ + 4) = iVar7;
  lVar15 = this->_padding_;
  *(int *)((longlong)&this->_padding_ + 4) = iVar13 + iVar7 * *(int *)(lVar11 + 0x170) + iVar1;
  (**(code **)(lVar15 + 0x18))(this);
  uVar14 = 0;
  if (0 < *(int *)(this->_padding_ + 0x50)) {
    lVar11 = 8;
    uVar12 = 2;
    lVar15 = 0;
    do {
      local_60 = &local_58;
      local_68[0] = uVar14;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->DataFunction);
      plVar2 = *(longlong **)&(this->DataFunction).field_0x28;
      pcVar3 = *(code **)&this->DataFunction;
      plVar10 = (longlong *)&(this->DataFunction).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar10 = plVar2;
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      (*pcVar3)(uVar9,local_68,&local_60);
      iVar7 = (int)this->_padding_;
      uVar8 = 0;
      if ((int)uVar14 < iVar7) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_78 = (longlong)(int)uVar14;
        local_70 = (longlong)iVar7;
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
      uVar4 = local_58;
      *(undefined1 *)(lVar15 + this->_padding_) = 1;
      iVar7 = (int)this->_padding_;
      uVar8 = 0;
      if ((int)(uVar12 - 2) < iVar7) {
        uVar8 = ~(uVar12 - 2) >> 0x1f;
      }
      if (uVar8 == 0) {
        local_78 = (longlong)(int)(uVar12 - 2);
        local_70 = (longlong)iVar7;
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
      uVar5 = local_54;
      *(undefined4 *)(this->_padding_ + -8 + lVar11) = uVar4;
      iVar7 = (int)this->_padding_;
      uVar8 = 0;
      if ((int)(uVar12 - 1) < iVar7) {
        uVar8 = ~(uVar12 - 1) >> 0x1f;
      }
      if (uVar8 == 0) {
        local_78 = (longlong)(int)(uVar12 - 1);
        local_70 = (longlong)iVar7;
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
      uVar4 = local_50;
      *(undefined4 *)(this->_padding_ + -4 + lVar11) = uVar5;
      iVar7 = (int)this->_padding_;
      uVar8 = 0;
      if ((int)uVar12 < iVar7) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_78 = (longlong)(int)uVar12;
        local_70 = (longlong)iVar7;
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
      uVar14 = uVar14 + 1;
      uVar12 = uVar12 + 3;
      lVar15 = lVar15 + 1;
      *(undefined4 *)(this->_padding_ + lVar11) = uVar4;
      lVar11 = lVar11 + 0xc;
    } while ((int)uVar14 < *(int *)(this->_padding_ + 0x50));
  }
  return;
}

// Initialize @ 14c816280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UniformTessellateLocals::FVertexAttributeGenerator<float,4>::Initialize
          (FVertexAttributeGenerator<float,4> *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  uint local_68 [2];
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  iVar7 = (int)this->_padding_;
  lVar12 = this->_padding_;
  iVar1 = *(int *)(lVar12 + 0x50);
  *(int *)&this->_padding_ = iVar1;
  iVar14 = iVar7 * *(int *)(lVar12 + 0x200);
  *(int *)&this->_padding_ = iVar14;
  iVar7 = ((iVar7 + 3) * (iVar7 + 2)) / 2 + (iVar7 + 2) * -3 + 3;
  *(int *)((longlong)&this->_padding_ + 4) = iVar7;
  lVar16 = this->_padding_;
  *(int *)((longlong)&this->_padding_ + 4) = iVar14 + iVar7 * *(int *)(lVar12 + 0x170) + iVar1;
  (**(code **)(lVar16 + 0x18))(this);
  uVar15 = 0;
  if (0 < *(int *)(this->_padding_ + 0x50)) {
    lVar12 = 8;
    uVar13 = 2;
    lVar16 = 0;
    do {
      local_60 = &local_58;
      local_68[0] = uVar15;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->DataFunction);
      plVar2 = *(longlong **)&(this->DataFunction).field_0x28;
      pcVar3 = *(code **)&this->DataFunction;
      plVar11 = (longlong *)&(this->DataFunction).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar11 = plVar2;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      (*pcVar3)(uVar10,local_68,&local_60);
      iVar7 = (int)this->_padding_;
      uVar8 = 0;
      if ((int)uVar15 < iVar7) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_78 = (longlong)(int)uVar15;
        local_70 = (longlong)iVar7;
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
      uVar4 = local_58;
      *(undefined1 *)(lVar16 + this->_padding_) = 1;
      iVar7 = (int)this->_padding_;
      uVar8 = 0;
      if ((int)(uVar13 - 2) < iVar7) {
        uVar8 = ~(uVar13 - 2) >> 0x1f;
      }
      if (uVar8 == 0) {
        local_78 = (longlong)(int)(uVar13 - 2);
        local_70 = (longlong)iVar7;
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
      uVar5 = local_54;
      *(undefined4 *)(this->_padding_ + -8 + lVar12) = uVar4;
      iVar7 = (int)this->_padding_;
      uVar8 = 0;
      if ((int)(uVar13 - 1) < iVar7) {
        uVar8 = ~(uVar13 - 1) >> 0x1f;
      }
      if (uVar8 == 0) {
        local_78 = (longlong)(int)(uVar13 - 1);
        local_70 = (longlong)iVar7;
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
      uVar4 = local_50;
      *(undefined4 *)(this->_padding_ + -4 + lVar12) = uVar5;
      iVar7 = (int)this->_padding_;
      uVar8 = 0;
      if ((int)uVar13 < iVar7) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_78 = (longlong)(int)uVar13;
        local_70 = (longlong)iVar7;
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
      uVar5 = local_4c;
      uVar8 = uVar13 + 1;
      *(undefined4 *)(this->_padding_ + lVar12) = uVar4;
      iVar7 = (int)this->_padding_;
      uVar9 = 0;
      if ((int)uVar8 < iVar7) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_78 = (longlong)(int)uVar8;
        local_70 = (longlong)iVar7;
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
      uVar15 = uVar15 + 1;
      uVar13 = uVar13 + 4;
      lVar16 = lVar16 + 1;
      *(undefined4 *)(this->_padding_ + 4 + lVar12) = uVar5;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar15 < *(int *)(this->_padding_ + 0x50));
  }
  return;
}

