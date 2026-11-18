// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 104

// TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> @ 14344e060

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::
TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,FDynamicMesh3 *param_1,
          int param_2)

{
  this->_padding_ = 0;
  (this->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ =
       (longlong)&___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__H_Geometry_UE__6B_;
  (this->AttribValues).ArrayNum = 0;
  (this->AttribValues).ArrayMax = 0;
  this->Parent = param_1;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->AttribValues,param_2,Default);
  return this;
}

// TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> @ 14344e0b0

TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::
TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,FDynamicMesh3 *param_1,
          int param_2,int *param_3)

{
  this->Parent = param_1;
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__H_Geometry_UE__6B_;
  (this->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttribValues).ArrayNum = 0;
  (this->AttribValues).ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&this->AttribValues,param_3,param_2);
  return this;
}

// TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> @ 14344e0f0

TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
           *this,FDynamicMesh3 *param_1,int param_2)

{
  this->_padding_ = 0;
  this->Parent = param_1;
  (this->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttribValues).ArrayNum = 0;
  (this->AttribValues).ArrayMax = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TTransform_N_Math_3__Geometry_UE__6B_
  ;
  Resize(this,param_2);
  return this;
}

// TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> @ 14344e130

TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
           *this,FDynamicMesh3 *param_1,int param_2,TTransform<double> *param_3)

{
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TTransform_N_Math_3__Geometry_UE__6B_
  ;
  this->Parent = param_1;
  (this->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttribValues).ArrayNum = 0;
  (this->AttribValues).ArrayMax = 0;
  Initialize(this,param_2,param_3);
  return this;
}

// TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> @ 14344e180

TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
          FDynamicMesh3 *param_1,int param_2)

{
  this->_padding_ = 0;
  this->Parent = param_1;
  (this->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttribValues).ArrayNum = 0;
  (this->AttribValues).ArrayMax = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TVector4_M_Math_3__Geometry_UE__6B_
  ;
  Resize(this,param_2);
  return this;
}

// TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> @ 14344e1c0

TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
          FDynamicMesh3 *param_1,int param_2,TVector4<float> *param_3)

{
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TVector4_M_Math_3__Geometry_UE__6B_
  ;
  this->Parent = param_1;
  (this->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttribValues).ArrayNum = 0;
  (this->AttribValues).ArrayMax = 0;
  Initialize(this,param_2,param_3);
  return this;
}

// TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> @ 14344e210

TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::
TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,FDynamicMesh3 *param_1
          ,int param_2)

{
  this->_padding_ = 0;
  this->Parent = param_1;
  (this->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttribValues).ArrayNum = 0;
  (this->AttribValues).ArrayMax = 0;
  this->_padding_ =
       (longlong)
       &___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__VFName___Geometry_UE__6B_;
  Resize(this,param_2);
  return this;
}

// TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> @ 14344e250

TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::
TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,FDynamicMesh3 *param_1
          ,int param_2,FName *param_3)

{
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__VFName___Geometry_UE__6B_;
  this->Parent = param_1;
  (this->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttribValues).ArrayNum = 0;
  (this->AttribValues).ArrayMax = 0;
  Initialize(this,param_2,param_3);
  return this;
}

// ~TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> @ 143452cf0

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::
~TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AttribValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// ~TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> @ 143452d20

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
~TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AttribValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// ~TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> @ 143452d50

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
~TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AttribValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// ~TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> @ 143452d80

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::
~TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AttribValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// Append @ 1434668f0

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::Append
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,int *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->AttribValues;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->AttribValues).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->AttribValues).ArrayNum;
  piVar2 = &(this->AttribValues).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->AttribValues).ArrayNum = iVar6 + 1;
  *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4) = *param_1;
  return;
}

// Append @ 1434669a0

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::Append
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FAppendInfo *param_2)

{
  undefined1 local_res20 [8];
  
  `UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::Append'::__l2::
  <lambda_1>::operator()(local_res20);
  return false;
}

// Append @ 1434669c0

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
Append(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this,
      TTransform<double> *param_1)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TTransform<double> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  
  pTVar1 = &this->AttribValues;
  pTVar3 = (TTransform<double> *)(pTVar1->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->AttribValues).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->AttribValues).ArrayNum;
  piVar2 = &(this->AttribValues).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1060,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->AttribValues).ArrayNum = iVar8 + 1;
  dVar6 = (param_1->Rotation).XY.m128d_f64[1];
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  lVar9 = (longlong)iVar8 * 0x60;
  *(double *)(pFVar4 + lVar9) = (param_1->Rotation).XY.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 8) = dVar6;
  dVar6 = (param_1->Rotation).ZW.m128d_f64[1];
  *(double *)(pFVar4 + lVar9 + 0x10) = (param_1->Rotation).ZW.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 0x10 + 8) = dVar6;
  dVar6 = (param_1->Translation).XY.m128d_f64[1];
  *(double *)(pFVar4 + lVar9 + 0x20) = (param_1->Translation).XY.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 0x20 + 8) = dVar6;
  dVar6 = (param_1->Translation).ZW.m128d_f64[1];
  *(double *)(pFVar4 + lVar9 + 0x30) = (param_1->Translation).ZW.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 0x30 + 8) = dVar6;
  dVar6 = (param_1->Scale3D).XY.m128d_f64[1];
  *(double *)(pFVar4 + lVar9 + 0x40) = (param_1->Scale3D).XY.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 0x40 + 8) = dVar6;
  dVar6 = (param_1->Scale3D).ZW.m128d_f64[1];
  *(double *)(pFVar4 + lVar9 + 0x50) = (param_1->Scale3D).ZW.m128d_f64[0];
  *(double *)(pFVar4 + lVar9 + 0x50 + 8) = dVar6;
  return;
}

// Append @ 143466ab0

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
Append(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this,
      TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FAppendInfo *param_2)

{
  undefined1 local_res20 [8];
  
  `UE::Geometry::
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::Append'::
  __l2::<lambda_1>::operator()(local_res20);
  return false;
}

// Append @ 143466ad0

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
Append(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
      TVector4<float> *param_1)

{
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  
  pTVar1 = &this->AttribValues;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->AttribValues).ArrayMax * 0x10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->AttribValues).ArrayNum;
  piVar2 = &(this->AttribValues).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1010,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->AttribValues).ArrayNum = iVar7 + 1;
  uVar5 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar3 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)(pFVar3 + 8) = uVar5;
  return;
}

// Append @ 143466b90

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
Append(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
      TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FAppendInfo *param_2)

{
  undefined1 local_res20 [8];
  
  `UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
  Append'::__l2::<lambda_1>::operator()(local_res20);
  return false;
}

// Append @ 143466bb0

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Append
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,FName *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->AttribValues;
  pFVar3 = (FName *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->AttribValues).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->AttribValues).ArrayNum;
  piVar2 = &(this->AttribValues).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->AttribValues).ArrayNum = iVar6 + 1;
  *(FName *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = *param_1;
  return;
}

// Append @ 143466c60

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Append
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FAppendInfo *param_2)

{
  undefined1 local_res20 [8];
  
  `UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Append'::__l2::
  <lambda_1>::operator()(local_res20);
  return false;
}

// AppendDefaulted @ 14346a930

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::AppendDefaulted
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,FAppendInfo *param_1)

{
  return;
}

// AppendDefaulted @ 14346a940

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
AppendDefaulted(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                *this,FAppendInfo *param_1)

{
  return;
}

// AppendDefaulted @ 14346a950

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
AppendDefaulted(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                *this,FAppendInfo *param_1)

{
  return;
}

// AppendDefaulted @ 14346a960

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::AppendDefaulted
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,FAppendInfo *param_1)

{
  return;
}

// CompactInPlace @ 14348c8f0

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::CompactInPlace
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,FCompactMaps *param_1)

{
  return;
}

// CompactInPlace @ 14348c900

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
CompactInPlace(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
               *this,FCompactMaps *param_1)

{
  return;
}

// CompactInPlace @ 14348c910

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
CompactInPlace(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
               *this,FCompactMaps *param_1)

{
  return;
}

// CompactInPlace @ 14348c920

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::CompactInPlace
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,FCompactMaps *param_1)

{
  return;
}

// Copy @ 143498210

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::Copy
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,
          TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *param_1)

{
  this->_padding_ = param_1->_padding_;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->AttribValues,&param_1->AttribValues);
  return;
}

// Copy @ 143498230

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
Copy(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this,
    TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *param_1)

{
  this->_padding_ = param_1->_padding_;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->AttribValues,&param_1->AttribValues);
  return;
}

// Copy @ 143498250

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
Copy(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
    TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *param_1)

{
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->AttribValues;
  this->_padding_ = param_1->_padding_;
  if (pTVar1 != &param_1->AttribValues) {
    iVar3 = (this->AttribValues).ArrayMax;
    piVar2 = &(this->AttribValues).ArrayMax;
    iVar4 = (param_1->AttribValues).ArrayNum;
    _Src = (param_1->AttribValues).AllocatorInstance.Data;
    (this->AttribValues).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
      return;
    }
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
    if (iVar4 != 0) {
      memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 4);
    }
  }
  return;
}

// Copy @ 1434982f0

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Copy
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,
          TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *param_1)

{
  this->_padding_ = param_1->_padding_;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->AttribValues,&param_1->AttribValues);
  return;
}

// CopyIn @ 14349b450

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::CopyIn
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,int param_1,
          void *param_2,int param_3)

{
  return false;
}

// CopyIn @ 14349b460

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
CopyIn(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this,
      int param_1,void *param_2,int param_3)

{
  return false;
}

// CopyIn @ 14349b470

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
CopyIn(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
      int param_1,void *param_2,int param_3)

{
  return false;
}

// CopyIn @ 14349b480

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::CopyIn
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,int param_1,
          void *param_2,int param_3)

{
  return false;
}

// CopyOut @ 14349b5f0

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::CopyOut
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,int param_1,
          void *param_2,int param_3)

{
  return false;
}

// CopyOut @ 14349b600

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
CopyOut(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this,
       int param_1,void *param_2,int param_3)

{
  return false;
}

// CopyOut @ 14349b610

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
CopyOut(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
       int param_1,void *param_2,int param_3)

{
  return false;
}

// CopyOut @ 14349b620

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::CopyOut
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,int param_1,
          void *param_2,int param_3)

{
  return false;
}

// CopyThroughMapping @ 14349b7b0

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::CopyThroughMapping
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FMeshIndexMappings *param_2)

{
  return true;
}

// CopyThroughMapping @ 14349b7c0

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
CopyThroughMapping(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                   *this,TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,
                  FMeshIndexMappings *param_2)

{
  return true;
}

// CopyThroughMapping @ 14349b7d0

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
CopyThroughMapping(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *this,TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,
                  FMeshIndexMappings *param_2)

{
  return true;
}

// CopyThroughMapping @ 14349b7e0

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::CopyThroughMapping
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FMeshIndexMappings *param_2)

{
  return true;
}

// GetAttribValues @ 1434bd400

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::GetAttribValues
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this)

{
  return &this->AttribValues;
}

// GetAttribValues @ 1434bd410

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
GetAttribValues(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                *this)

{
  return &this->AttribValues;
}

// GetAttribValues @ 1434bd420

TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
GetAttribValues(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                *this)

{
  return &this->AttribValues;
}

// GetAttribValues @ 1434bd430

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::GetAttribValues
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this)

{
  return &this->AttribValues;
}

// GetByteCount @ 1434bef00

ulong64 __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::GetByteCount
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this)

{
  return (longlong)(this->AttribValues).ArrayMax << 2;
}

// GetByteCount @ 1434bef10

ulong64 __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
GetByteCount(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
             *this)

{
  return (longlong)(this->AttribValues).ArrayMax * 0x60;
}

// GetByteCount @ 1434bef30

ulong64 __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
GetByteCount(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this
            )

{
  return (longlong)(this->AttribValues).ArrayMax << 4;
}

// GetByteCount @ 1434bef40

ulong64 __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::GetByteCount
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this)

{
  return (longlong)(this->AttribValues).ArrayMax << 3;
}

// GetValue @ 1434c91d0

int * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::GetValue
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (param_1 < (this->AttribValues).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
  }
  return (int *)((this->AttribValues).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// GetValue @ 1434c9250

TTransform<double> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
GetValue(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this,
        int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->AttribValues).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TTransform<double> *)
         ((this->AttribValues).AllocatorInstance.Data + (longlong)param_1 * 0x60);
}

// GetValue @ 1434c92d0

TVector4<float> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
GetValue(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
        int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector4<float> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->AttribValues).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector4<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector4<float> *)((this->AttribValues).AllocatorInstance.Data + (longlong)param_1 * 0x10)
  ;
}

// GetValue @ 1434c9350

FName * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::GetValue
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->AttribValues).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FName *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FName *)((this->AttribValues).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// Initialize @ 1434cecc0

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::Initialize
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,int param_1,int *param_2
          )

{
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&this->AttribValues,param_2,param_1);
  return;
}

// Initialize @ 1434cece0

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
Initialize(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
           *this,int param_1,TTransform<double> *param_2)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TTransform<double> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)(uint)param_1;
  pTVar1 = &this->AttribValues;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar10);
  }
  piVar2 = &(this->AttribValues).ArrayMax;
  (this->AttribValues).ArrayNum = 0;
  if (*piVar2 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,param_1,&pTVar1->AllocatorInstance,0,piVar2);
  }
  if (0 < param_1) {
    do {
      pTVar3 = (TTransform<double> *)(pTVar1->AllocatorInstance).Data;
      if ((pTVar3 <= param_2) && (param_2 < pTVar3 + *piVar2)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = (this->AttribValues).ArrayNum;
      if (iVar8 == *piVar2) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1060,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->AttribValues).ArrayNum = iVar8 + 1;
      dVar6 = (param_2->Rotation).XY.m128d_f64[1];
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      lVar9 = (longlong)iVar8 * 0x60;
      *(double *)(pFVar4 + lVar9) = (param_2->Rotation).XY.m128d_f64[0];
      *(double *)(pFVar4 + lVar9 + 8) = dVar6;
      dVar6 = (param_2->Rotation).ZW.m128d_f64[1];
      *(double *)(pFVar4 + lVar9 + 0x10) = (param_2->Rotation).ZW.m128d_f64[0];
      *(double *)(pFVar4 + lVar9 + 0x10 + 8) = dVar6;
      dVar6 = (param_2->Translation).XY.m128d_f64[1];
      *(double *)(pFVar4 + lVar9 + 0x20) = (param_2->Translation).XY.m128d_f64[0];
      *(double *)(pFVar4 + lVar9 + 0x20 + 8) = dVar6;
      dVar6 = (param_2->Translation).ZW.m128d_f64[1];
      *(double *)(pFVar4 + lVar9 + 0x30) = (param_2->Translation).ZW.m128d_f64[0];
      *(double *)(pFVar4 + lVar9 + 0x30 + 8) = dVar6;
      dVar6 = (param_2->Scale3D).XY.m128d_f64[1];
      *(double *)(pFVar4 + lVar9 + 0x40) = (param_2->Scale3D).XY.m128d_f64[0];
      *(double *)(pFVar4 + lVar9 + 0x40 + 8) = dVar6;
      dVar6 = (param_2->Scale3D).ZW.m128d_f64[1];
      *(double *)(pFVar4 + lVar9 + 0x50) = (param_2->Scale3D).ZW.m128d_f64[0];
      *(double *)(pFVar4 + lVar9 + 0x50 + 8) = dVar6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}

// Initialize @ 1434cee30

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
Initialize(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
          int param_1,TVector4<float> *param_2)

{
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)(uint)param_1;
  pTVar1 = &this->AttribValues;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar8);
  }
  piVar2 = &(this->AttribValues).ArrayMax;
  (this->AttribValues).ArrayNum = 0;
  if (*piVar2 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,param_1,&pTVar1->AllocatorInstance,0,piVar2);
  }
  if (0 < param_1) {
    do {
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if ((pFVar3 <= param_2) && (param_2 < pFVar3 + (longlong)*piVar2 * 0x10)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = (this->AttribValues).ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1010,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->AttribValues).ArrayNum = iVar7 + 1;
      uVar5 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
      pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar3 = *(undefined8 *)&param_2->field0_0x0;
      *(undefined8 *)(pFVar3 + 8) = uVar5;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

// Initialize @ 1434cef50

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Initialize
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,int param_1,
          FName *param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)(uint)param_1;
  pTVar1 = &this->AttribValues;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar7);
  }
  piVar2 = &(this->AttribValues).ArrayMax;
  (this->AttribValues).ArrayNum = 0;
  if (*piVar2 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_1,&pTVar1->AllocatorInstance,0,piVar2);
  }
  if (0 < param_1) {
    do {
      pFVar3 = (FName *)(pTVar1->AllocatorInstance).Data;
      if ((pFVar3 <= param_2) && (param_2 < pFVar3 + *piVar2)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = (this->AttribValues).ArrayNum;
      if (iVar6 == *piVar2) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->AttribValues).ArrayNum = iVar6 + 1;
      *(FName *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = *param_2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// IsEmpty @ 1434e6350

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::IsEmpty
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this)

{
  return (this->AttribValues).ArrayNum == 0;
}

// IsEmpty @ 1434e6360

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
IsEmpty(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this)

{
  return (this->AttribValues).ArrayNum == 0;
}

// IsEmpty @ 1434e6370

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
IsEmpty(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this)

{
  return (this->AttribValues).ArrayNum == 0;
}

// IsEmpty @ 1434e6380

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::IsEmpty
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this)

{
  return (this->AttribValues).ArrayNum == 0;
}

// IsSameAs @ 1434e67e0

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::IsSameAs
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,
          TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *param_1)

{
  int iVar1;
  
  iVar1 = (this->AttribValues).ArrayNum;
  if (iVar1 != (param_1->AttribValues).ArrayNum) {
    return false;
  }
  if ((iVar1 != 0) &&
     (iVar1 = memcmp((this->AttribValues).AllocatorInstance.Data,
                     (param_1->AttribValues).AllocatorInstance.Data,(longlong)iVar1 << 2),
     iVar1 != 0)) {
    return false;
  }
  return true;
}

// IsSameAs @ 1434e6820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
IsSameAs(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this,
        TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
        *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  uint uVar20;
  undefined7 extraout_var;
  uint uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  dVar16 = __real_3f1a36e2e0000000;
  uVar15 = _UNK_15061cc8c;
  uVar14 = _UNK_15061cc88;
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar19 = (this->AttribValues).ArrayNum;
  if (iVar19 == (param_1->AttribValues).ArrayNum) {
    uVar23 = 0;
    if (0 < iVar19) {
      lVar24 = 0;
      do {
        uVar20 = 0;
        if ((int)uVar23 < (this->AttribValues).ArrayNum) {
          uVar20 = ~uVar23 >> 0x1f;
        }
        if (uVar20 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar3 = (code *)swi(3);
            uVar18 = (*pcVar3)();
            return (bool)uVar18;
          }
        }
        iVar19 = (param_1->AttribValues).ArrayNum;
        pFVar1 = (this->AttribValues).AllocatorInstance.Data;
        uVar20 = 0;
        if ((int)uVar23 < iVar19) {
          uVar20 = ~uVar23 >> 0x1f;
        }
        if (uVar20 == 0) {
          iVar19 = 0x506106c8;
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar20 = (uint)CONCAT71(extraout_var,bVar17);
          if (bVar17) {
            pcVar3 = (code *)swi(3);
            uVar18 = (*pcVar3)();
            return (bool)uVar18;
          }
        }
        pFVar2 = (param_1->AttribValues).AllocatorInstance.Data;
        dVar26 = *(double *)(pFVar1 + lVar24 + 0x30) - *(double *)(pFVar2 + lVar24 + 0x30);
        dVar28 = *(double *)(pFVar1 + lVar24 + 0x30 + 8) - *(double *)(pFVar2 + lVar24 + 0x30 + 8);
        dVar30 = *(double *)(pFVar1 + lVar24 + 0x20) - *(double *)(pFVar2 + lVar24 + 0x20);
        dVar32 = *(double *)(pFVar1 + lVar24 + 0x20 + 8) - *(double *)(pFVar2 + lVar24 + 0x20 + 8);
        lVar25 = -(ulonglong)
                  (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar15,
                                             SUB84(dVar28,0) & uVar14));
        auVar4._8_4_ = (int)lVar25;
        auVar4._0_8_ = -(ulonglong)
                        (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar13,
                                                   SUB84(dVar26,0) & uVar12));
        auVar4._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        uVar21 = movmskpd(iVar19,auVar4);
        lVar25 = -(ulonglong)
                  (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar15,
                                             SUB84(dVar32,0) & uVar14));
        auVar9._8_4_ = (int)lVar25;
        auVar9._0_8_ = -(ulonglong)
                        (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar13,
                                                   SUB84(dVar30,0) & uVar12));
        auVar9._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        iVar19 = movmskpd(uVar20,auVar9);
        if ((uVar21 & 0x3fffffff) != 0 || iVar19 != 0) goto LAB_1434e6a2d;
        dVar26 = *(double *)(pFVar1 + lVar24 + 0x10);
        dVar28 = *(double *)(pFVar1 + lVar24 + 0x10 + 8);
        dVar30 = *(double *)(pFVar1 + lVar24);
        dVar32 = *(double *)(pFVar1 + lVar24 + 8);
        dVar27 = dVar26 - *(double *)(pFVar2 + lVar24 + 0x10);
        dVar29 = dVar28 - *(double *)(pFVar2 + lVar24 + 0x10 + 8);
        dVar26 = dVar26 + *(double *)(pFVar2 + lVar24 + 0x10);
        dVar28 = dVar28 + *(double *)(pFVar2 + lVar24 + 0x10 + 8);
        dVar31 = dVar30 - *(double *)(pFVar2 + lVar24);
        dVar33 = dVar32 - *(double *)(pFVar2 + lVar24 + 8);
        dVar30 = dVar30 + *(double *)(pFVar2 + lVar24);
        dVar32 = dVar32 + *(double *)(pFVar2 + lVar24 + 8);
        lVar25 = -(ulonglong)
                  (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar15,
                                             SUB84(dVar29,0) & uVar14));
        auVar5._8_4_ = (int)lVar25;
        auVar5._0_8_ = -(ulonglong)
                        (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar13,
                                                   SUB84(dVar27,0) & uVar12));
        auVar5._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        iVar22 = movmskpd(0,auVar5);
        lVar25 = -(ulonglong)
                  (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar15,
                                             SUB84(dVar33,0) & uVar14));
        auVar6._8_4_ = (int)lVar25;
        auVar6._0_8_ = -(ulonglong)
                        (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar13,
                                                   SUB84(dVar31,0) & uVar12));
        auVar6._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        uVar20 = movmskpd(iVar19,auVar6);
        uVar21 = iVar22 << 2 | uVar20;
        if (uVar21 != 0) {
          lVar25 = -(ulonglong)
                    (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar15,
                                               SUB84(dVar28,0) & uVar14));
          auVar7._8_4_ = (int)lVar25;
          auVar7._0_8_ = -(ulonglong)
                          (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar13,
                                                     SUB84(dVar26,0) & uVar12));
          auVar7._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
          uVar21 = movmskpd(uVar21,auVar7);
          lVar25 = -(ulonglong)
                    (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar15,
                                               SUB84(dVar32,0) & uVar14));
          auVar10._8_4_ = (int)lVar25;
          auVar10._0_8_ =
               -(ulonglong)
                (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar13,
                                           SUB84(dVar30,0) & uVar12));
          auVar10._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
          uVar20 = movmskpd(uVar20,auVar10);
          if ((uVar21 & 0x3fffffff) != 0 || uVar20 != 0) goto LAB_1434e6a2d;
        }
        dVar26 = *(double *)(pFVar1 + lVar24 + 0x50) - *(double *)(pFVar2 + lVar24 + 0x50);
        dVar28 = *(double *)(pFVar1 + lVar24 + 0x50 + 8) - *(double *)(pFVar2 + lVar24 + 0x50 + 8);
        dVar30 = *(double *)(pFVar1 + lVar24 + 0x40) - *(double *)(pFVar2 + lVar24 + 0x40);
        dVar32 = *(double *)(pFVar1 + lVar24 + 0x40 + 8) - *(double *)(pFVar2 + lVar24 + 0x40 + 8);
        lVar25 = -(ulonglong)
                  (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar15,
                                             SUB84(dVar28,0) & uVar14));
        auVar8._8_4_ = (int)lVar25;
        auVar8._0_8_ = -(ulonglong)
                        (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar13,
                                                   SUB84(dVar26,0) & uVar12));
        auVar8._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        uVar21 = movmskpd(0,auVar8);
        lVar25 = -(ulonglong)
                  (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar15,
                                             SUB84(dVar32,0) & uVar14));
        auVar11._8_4_ = (int)lVar25;
        auVar11._0_8_ =
             -(ulonglong)
              (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar13,
                                         SUB84(dVar30,0) & uVar12));
        auVar11._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        iVar19 = movmskpd(uVar20,auVar11);
        if ((uVar21 & 0x3fffffff) != 0 || iVar19 != 0) goto LAB_1434e6a2d;
        uVar23 = uVar23 + 1;
        lVar24 = lVar24 + 0x60;
      } while ((int)uVar23 < (this->AttribValues).ArrayNum);
    }
    bVar17 = true;
  }
  else {
LAB_1434e6a2d:
    bVar17 = false;
  }
  return bVar17;
}

// IsSameAs @ 1434e6a50

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
IsSameAs(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
        TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (this->AttribValues).ArrayNum;
  if (iVar1 == (param_1->AttribValues).ArrayNum) {
    bVar2 = CompareItems<UE::Math::TVector4<float>,int>
                      ((TVector4<float> *)(this->AttribValues).AllocatorInstance.Data,
                       (TVector4<float> *)(param_1->AttribValues).AllocatorInstance.Data,iVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// IsSameAs @ 1434e6a90

bool __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::IsSameAs
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,
          TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (this->AttribValues).ArrayNum;
  if (iVar1 == (param_1->AttribValues).ArrayNum) {
    bVar2 = CompareItems<FName,int>
                      ((FName *)(this->AttribValues).AllocatorInstance.Data,
                       (FName *)(param_1->AttribValues).AllocatorInstance.Data,iVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// MakeCopy @ 1434f5ef0

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::MakeCopy
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,FDynamicMesh3 *param_1)

{
  undefined4 uVar1;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar2;
  
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar2[1]._padding_ = (longlong)param_1;
    (pTVar2->Name).ComparisonIndex = 0;
    (pTVar2->Name).Number = 0;
    pTVar2->_padding_ =
         (longlong)&___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__H_Geometry_UE__6B_;
    pTVar2[1].Name.ComparisonIndex = 0;
    pTVar2[1].Name.Number = 0;
    pTVar2[2]._padding_ = 0;
  }
  uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (pTVar2->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (pTVar2->Name).Number = uVar1;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)&pTVar2[1].Name,&this->AttribValues);
  return pTVar2;
}

// MakeCopy @ 1434f5f70

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
MakeCopy(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this,
        FDynamicMesh3 *param_1)

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this_00;
  
  this_00 = ::operator_new(0x28);
  if (this_00 !=
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0) {
    this_00->Parent = param_1;
    this_00->_padding_ = 0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TTransform_N_Math_3__Geometry_UE__6B_
    ;
    (this_00->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AttribValues).ArrayNum = 0;
    (this_00->AttribValues).ArrayMax = 0;
    Resize(this_00,0);
  }
  this_00->_padding_ = this->_padding_;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this_00->AttribValues,&this->AttribValues);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_00;
}

// MakeCopy @ 1434f5ff0

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
MakeCopy(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
        FDynamicMesh3 *param_1)

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this_00;
  
  this_00 = ::operator_new(0x28);
  if (this_00 !=
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0) {
    this_00->Parent = param_1;
    this_00->_padding_ = 0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TVector4_M_Math_3__Geometry_UE__6B_
    ;
    (this_00->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AttribValues).ArrayNum = 0;
    (this_00->AttribValues).ArrayMax = 0;
    Resize(this_00,0);
  }
  Copy(this_00,this);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_00;
}

// MakeCopy @ 1434f6070

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::MakeCopy
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,FDynamicMesh3 *param_1
          )

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this_00;
  
  this_00 = ::operator_new(0x28);
  if (this_00 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    this_00->Parent = param_1;
    this_00->_padding_ = 0;
    this_00->_padding_ =
         (longlong)
         &___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__VFName___Geometry_UE__6B_;
    (this_00->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AttribValues).ArrayNum = 0;
    (this_00->AttribValues).ArrayMax = 0;
    Resize(this_00,0);
  }
  this_00->_padding_ = this->_padding_;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this_00->AttribValues,&this->AttribValues);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_00;
}

// MakeNew @ 1434f68b0

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::MakeNew
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,FDynamicMesh3 *param_1)

{
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar1;
  
  pTVar1 = ::operator_new(0x28);
  if (pTVar1 != (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)0x0) {
    (pTVar1->Name).ComparisonIndex = 0;
    (pTVar1->Name).Number = 0;
    pTVar1->_padding_ =
         (longlong)&___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__H_Geometry_UE__6B_;
    pTVar1[1]._padding_ = (longlong)param_1;
    pTVar1[1].Name.ComparisonIndex = 0;
    pTVar1[1].Name.Number = 0;
    pTVar1[2]._padding_ = 0;
    return pTVar1;
  }
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)0x0;
}

// MakeNew @ 1434f6900

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
MakeNew(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this,
       FDynamicMesh3 *param_1)

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this_00;
  
  this_00 = ::operator_new(0x28);
  if (this_00 !=
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0) {
    this_00->Parent = param_1;
    this_00->_padding_ = 0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TTransform_N_Math_3__Geometry_UE__6B_
    ;
    (this_00->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AttribValues).ArrayNum = 0;
    (this_00->AttribValues).ArrayMax = 0;
    Resize(this_00,0);
    return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_00;
  }
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)0x0;
}

// MakeNew @ 1434f6970

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
MakeNew(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
       FDynamicMesh3 *param_1)

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this_00;
  
  this_00 = ::operator_new(0x28);
  if (this_00 !=
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0) {
    this_00->Parent = param_1;
    this_00->_padding_ = 0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TVector4_M_Math_3__Geometry_UE__6B_
    ;
    (this_00->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AttribValues).ArrayNum = 0;
    (this_00->AttribValues).ArrayMax = 0;
    Resize(this_00,0);
    return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_00;
  }
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)0x0;
}

// MakeNew @ 1434f69e0

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::MakeNew
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,FDynamicMesh3 *param_1
          )

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this_00;
  
  this_00 = ::operator_new(0x28);
  if (this_00 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    this_00->Parent = param_1;
    this_00->_padding_ = 0;
    this_00->_padding_ =
         (longlong)
         &___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__VFName___Geometry_UE__6B_;
    (this_00->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AttribValues).ArrayNum = 0;
    (this_00->AttribValues).ArrayMax = 0;
    Resize(this_00,0);
    return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_00;
  }
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)0x0;
}

// NewBlankChange @ 1434fb670

TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
 __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::NewBlankChange
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this)

{
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> TVar1;
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *in_RDX;
  
  TVar1 = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)::operator_new(8);
  if (TVar1 != (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0) {
    *in_RDX = TVar1;
    *(undefined ***)TVar1 =
         &___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
            )in_RDX;
  }
  *in_RDX = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0;
  return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
          )in_RDX;
}

// NewBlankChange @ 1434fb6c0

TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
 __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
NewBlankChange(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
               *this)

{
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> TVar1;
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *in_RDX;
  
  TVar1 = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)::operator_new(8);
  if (TVar1 != (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0) {
    *in_RDX = TVar1;
    *(undefined ***)TVar1 =
         &___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
            )in_RDX;
  }
  *in_RDX = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0;
  return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
          )in_RDX;
}

// NewBlankChange @ 1434fb710

TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
 __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
NewBlankChange(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
               *this)

{
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> TVar1;
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *in_RDX;
  
  TVar1 = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)::operator_new(8);
  if (TVar1 != (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0) {
    *in_RDX = TVar1;
    *(undefined ***)TVar1 =
         &___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
            )in_RDX;
  }
  *in_RDX = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0;
  return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
          )in_RDX;
}

// NewBlankChange @ 1434fb760

TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
 __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::NewBlankChange
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this)

{
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> TVar1;
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *in_RDX;
  
  TVar1 = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)::operator_new(8);
  if (TVar1 != (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0) {
    *in_RDX = TVar1;
    *(undefined ***)TVar1 =
         &___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
            )in_RDX;
  }
  *in_RDX = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0;
  return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
          )in_RDX;
}

// Num @ 1434fb930

int __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::Num
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this)

{
  return (this->AttribValues).ArrayNum;
}

// Num @ 1434fb940

int __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
Num(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this)

{
  return (this->AttribValues).ArrayNum;
}

// Num @ 1434fb950

int __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::Num
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this)

{
  return (this->AttribValues).ArrayNum;
}

// Num @ 1434fb960

int __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Num
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this)

{
  return (this->AttribValues).ArrayNum;
}

// Reparent @ 143518020

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::Reparent
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,FDynamicMesh3 *param_1)

{
  this->Parent = param_1;
  return;
}

// Reparent @ 143518030

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
Reparent(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this,
        FDynamicMesh3 *param_1)

{
  this->Parent = param_1;
  return;
}

// Reparent @ 143518040

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
Reparent(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
        FDynamicMesh3 *param_1)

{
  this->Parent = param_1;
  return;
}

// Reparent @ 143518050

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Reparent
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,FDynamicMesh3 *param_1
          )

{
  this->Parent = param_1;
  return;
}

// Resize @ 143518ef0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::Resize
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,int param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->AttribValues,param_1,Default);
  return;
}

// Resize @ 143518f10

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
Resize(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this,
      int param_1)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  pTVar1 = &this->AttribValues;
  iVar5 = (this->AttribValues).ArrayNum;
  piVar2 = &(this->AttribValues).ArrayNum;
  if (iVar5 < param_1) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,param_1 - iVar5,&pTVar1->AllocatorInstance,piVar2,
               &(this->AttribValues).ArrayMax);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar5) {
    uVar6 = iVar5 - param_1;
    if (((int)(uVar6 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar6 != 0) {
      _Dst = (pTVar1->AllocatorInstance).Data + (longlong)param_1 * 0x60;
      iVar5 = (*piVar2 - uVar6) - param_1;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x60,(longlong)iVar5 * 0x60);
      }
      *piVar2 = *piVar2 - uVar6;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,&pTVar1->AllocatorInstance,*piVar2,&(this->AttribValues).ArrayMax);
    }
  }
  return;
}

// Resize @ 143519040

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
Resize(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
      int param_1)

{
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  pTVar1 = &this->AttribValues;
  iVar5 = (this->AttribValues).ArrayNum;
  piVar2 = &(this->AttribValues).ArrayNum;
  if (iVar5 < param_1) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,param_1 - iVar5,&pTVar1->AllocatorInstance,piVar2,
               &(this->AttribValues).ArrayMax);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar5) {
    uVar6 = iVar5 - param_1;
    if (((int)(uVar6 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar6 != 0) {
      _Dst = (pTVar1->AllocatorInstance).Data + (longlong)param_1 * 0x10;
      iVar5 = (*piVar2 - uVar6) - param_1;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
      }
      *piVar2 = *piVar2 - uVar6;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,&pTVar1->AllocatorInstance,*piVar2,&(this->AttribValues).ArrayMax);
    }
  }
  return;
}

// Resize @ 143519160

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Resize
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,int param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  pTVar1 = &this->AttribValues;
  iVar5 = (this->AttribValues).ArrayNum;
  piVar2 = &(this->AttribValues).ArrayNum;
  if (iVar5 < param_1) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_1 - iVar5,&pTVar1->AllocatorInstance,piVar2,&(this->AttribValues).ArrayMax)
    ;
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar5) {
    uVar6 = iVar5 - param_1;
    if (((int)(uVar6 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar6 != 0) {
      _Dst = (pTVar1->AllocatorInstance).Data + (longlong)param_1 * 8;
      iVar5 = (*piVar2 - uVar6) - param_1;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
      }
      *piVar2 = *piVar2 - uVar6;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&pTVar1->AllocatorInstance,*piVar2,&(this->AttribValues).ArrayMax);
    }
  }
  return;
}

// Serialize @ 14351f0e0

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::Serialize
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&this->AttribValues);
  return;
}

// Serialize @ 14351f100

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
Serialize(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this
         ,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
            (param_1,&this->AttribValues);
  return;
}

// Serialize @ 14351f120

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
Serialize(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
         FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>
            (param_1,&this->AttribValues);
  return;
}

// Serialize @ 14351f140

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Serialize
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&this->AttribValues);
  return;
}

// SetValue @ 143531e00

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::SetValue
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,int param_1,int *param_2
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = *param_2;
  uVar4 = 0;
  if (param_1 < (this->AttribValues).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(int *)((this->AttribValues).AllocatorInstance.Data + (longlong)param_1 * 4) = iVar1;
  return;
}

// SetValue @ 143531e80

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
SetValue(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *this,
        int param_1,TTransform<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  longlong lVar20;
  
  uVar4 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
  uVar5 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
  uVar6 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
  uVar7 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
  dVar8 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar9 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar10 = (param_2->Translation).XY.m128d_f64[0];
  dVar11 = (param_2->Translation).XY.m128d_f64[1];
  dVar12 = (param_2->Translation).ZW.m128d_f64[0];
  dVar13 = (param_2->Translation).ZW.m128d_f64[1];
  dVar14 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar15 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar16 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar17 = (param_2->Scale3D).ZW.m128d_f64[1];
  uVar19 = 0;
  if (param_1 < (this->AttribValues).ArrayNum) {
    uVar19 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->AttribValues).AllocatorInstance.Data;
  lVar20 = (longlong)param_1 * 0x60;
  pFVar1 = pFVar2 + lVar20;
  *(undefined4 *)pFVar1 = uVar4;
  *(undefined4 *)(pFVar1 + 4) = uVar5;
  *(undefined4 *)(pFVar1 + 8) = uVar6;
  *(undefined4 *)(pFVar1 + 0xc) = uVar7;
  *(double *)(pFVar2 + lVar20 + 0x10) = dVar8;
  *(double *)(pFVar2 + lVar20 + 0x10 + 8) = dVar9;
  *(double *)(pFVar2 + lVar20 + 0x20) = dVar10;
  *(double *)(pFVar2 + lVar20 + 0x20 + 8) = dVar11;
  *(double *)(pFVar2 + lVar20 + 0x30) = dVar12;
  *(double *)(pFVar2 + lVar20 + 0x30 + 8) = dVar13;
  *(double *)(pFVar2 + lVar20 + 0x40) = dVar14;
  *(double *)(pFVar2 + lVar20 + 0x40 + 8) = dVar15;
  *(double *)(pFVar2 + lVar20 + 0x50) = dVar16;
  *(double *)(pFVar2 + lVar20 + 0x50 + 8) = dVar17;
  return;
}

// SetValue @ 143531f80

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
SetValue(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
        int param_1,TVector4<float> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  
  fVar3 = (param_2->field0_0x0)._s_0.X;
  fVar4 = (param_2->field0_0x0)._s_0.Y;
  fVar5 = (param_2->field0_0x0)._s_0.Z;
  fVar6 = (param_2->field0_0x0)._s_0.W;
  uVar8 = 0;
  if (param_1 < (this->AttribValues).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->AttribValues).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  *(float *)pFVar1 = fVar3;
  *(float *)(pFVar1 + 4) = fVar4;
  *(float *)(pFVar1 + 8) = fVar5;
  *(float *)(pFVar1 + 0xc) = fVar6;
  return;
}

// SetValue @ 143532010

void __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::SetValue
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,int param_1,
          FName *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  FVar1 = *param_2;
  uVar4 = 0;
  if (param_1 < (this->AttribValues).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(FName *)((this->AttribValues).AllocatorInstance.Data + (longlong)param_1 * 8) = FVar1;
  return;
}

// operator() @ 15049f360

bool __thiscall
`UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::Append'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3186236735671500929>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3186236735671500929>,
                       &`public:___cdecl_`public:_virtual_bool___cdecl_UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::Append(UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_const&___ptr64,UE::Geometry::FDynamicMesh3::FAppendInfo_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f3a0

bool __thiscall
`UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
::Append'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3186236735671500929>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3186236735671500929>,
                       &`public:___cdecl_`public:_virtual_bool___cdecl_UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::Append(UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_const&___ptr64,UE::Geometry::FDynamicMesh3::FAppendInfo_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f3e0

bool __thiscall
`UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
Append'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3186236735671500929>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3186236735671500929>,
                       &`public:___cdecl_`public:_virtual_bool___cdecl_UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::Append(UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_const&___ptr64,UE::Geometry::FDynamicMesh3::FAppendInfo_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f420

bool __thiscall
`UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Append'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3186236735671500929>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3186236735671500929>,
                       &`public:___cdecl_`public:_virtual_bool___cdecl_UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Append(UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_const&___ptr64,UE::Geometry::FDynamicMesh3::FAppendInfo_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

