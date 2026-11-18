// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 12

// operator() @ 1495040b0

TVector<float> * __thiscall
`UE::Geometry::TMinVolumeBox3<float>::SolveSubsample'::__l2::<lambda_1>::operator()
          (void *this,TVector<float> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<float> *pTVar7;
  
  plVar2 = *(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<float> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *plVar2;
  fVar1 = *(float *)(lVar3 + 8 + (longlong)param_1 * 0xc);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)(lVar3 + (longlong)param_1 * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// operator() @ 149504140

TVector<double> * __thiscall
`UE::Geometry::TMinVolumeBox3<double>::SolveSubsample'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  
  plVar3 = *(longlong **)this;
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar5)();
      return pTVar9;
    }
  }
  lVar4 = *plVar3;
  pdVar1 = (double *)(lVar4 + (longlong)param_1 * 0x18);
  dVar6 = pdVar1[1];
  dVar2 = *(double *)(lVar4 + 0x10 + (longlong)param_1 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetResult @ 14951ab80

void __thiscall
UE::Geometry::TMinVolumeBox3<float>::GetResult
          (TMinVolumeBox3<float> *this,TOrientedBox3<float> *param_1)

{
  TMinVolumeBox3Internal<float> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  
  pTVar1 = (this->Internal).Ptr;
  if ((pTVar1 == (TMinVolumeBox3Internal<float> *)0x0) || (pTVar1->bSolutionOK == false)) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1784604292112449654>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\MinVolumeBox3.cpp"
                       ,0x76,"IsSolutionAvailable()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = (this->Internal).Ptr;
  uVar3 = *(undefined8 *)((longlong)&(pTVar1->Result).Frame.Origin.field0_0x0 + 8);
  *(undefined8 *)&(param_1->Frame).Origin.field0_0x0 =
       *(undefined8 *)&(pTVar1->Result).Frame.Origin.field0_0x0;
  *(undefined8 *)((longlong)&(param_1->Frame).Origin.field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)((longlong)&(pTVar1->Result).Frame.Rotation.field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(param_1->Frame).Rotation.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(pTVar1->Result).Frame.Rotation.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(param_1->Frame).Rotation.field0_0x0 + 0xc) = uVar3;
  *(undefined8 *)((longlong)&(param_1->Extents).field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(pTVar1->Result).Extents.field0_0x0 + 4);
  return;
}

// GetResult @ 14951ac00

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Geometry::TMinVolumeBox3<double>::GetResult
          (TMinVolumeBox3<double> *this,TOrientedBox3<double> *param_1)

{
  TMinVolumeBox3Internal<double> *pTVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  
  pTVar1 = (this->Internal).Ptr;
  if ((pTVar1 == (TMinVolumeBox3Internal<double> *)0x0) || (pTVar1->bSolutionOK == false)) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1784604292112449654>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\MinVolumeBox3.cpp"
                       ,0x76,"IsSolutionAvailable()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = (this->Internal).Ptr;
  dVar3 = (pTVar1->Result).Frame.Origin.field0_0x0._s_0.Y;
  (param_1->Frame).Origin.field0_0x0._s_0.X = (pTVar1->Result).Frame.Origin.field0_0x0._s_0.X;
  (param_1->Frame).Origin.field0_0x0._s_0.Y = dVar3;
  dVar3 = (pTVar1->Result).Frame.Rotation.field0_0x0._s_0.X;
  (param_1->Frame).Origin.field0_0x0._s_0.Z = (pTVar1->Result).Frame.Origin.field0_0x0._s_0.Z;
  (param_1->Frame).Rotation.field0_0x0._s_0.X = dVar3;
  dVar3 = (pTVar1->Result).Frame.Rotation.field0_0x0._s_0.Z;
  (param_1->Frame).Rotation.field0_0x0._s_0.Y = (pTVar1->Result).Frame.Rotation.field0_0x0._s_0.Y;
  (param_1->Frame).Rotation.field0_0x0._s_0.Z = dVar3;
  dVar3 = (pTVar1->Result).Extents.field0_0x0._s_0.X;
  (param_1->Frame).Rotation.field0_0x0._s_0.W = (pTVar1->Result).Frame.Rotation.field0_0x0._s_0.W;
  (param_1->Extents).field0_0x0._s_0.X = dVar3;
  dVar3 = (pTVar1->Result).Extents.field0_0x0._s_0.Z;
  (param_1->Extents).field0_0x0._s_0.Y = (pTVar1->Result).Extents.field0_0x0._s_0.Y;
  (param_1->Extents).field0_0x0._s_0.Z = dVar3;
  return;
}

// Initialize @ 14951b9c0

void __thiscall
UE::Geometry::TMinVolumeBox3<float>::Initialize(TMinVolumeBox3<float> *this,bool param_1)

{
  TMinVolumeBox3Internal<float> *pTVar1;
  int *piVar2;
  TMinVolumeBox3Internal<float> *pTVar3;
  int *piVar4;
  TMinVolumeBox3<float> local_18 [2];
  
  piVar2 = ::operator_new(0x50);
  piVar4 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    *(undefined8 *)(piVar2 + 2) = 0;
    *(code **)piVar2 =
         Core::Private::PimplPtr::DeleterFunc<UE::Geometry::TMinVolumeBox3Internal<float>_>;
    *(undefined2 *)((longlong)piVar2 + 0x39) = 0;
    *(undefined1 *)((longlong)piVar2 + 0x3b) = 0;
    *(undefined2 *)((longlong)piVar2 + 0x49) = 0;
    *(undefined1 *)((longlong)piVar2 + 0x4b) = 0;
    *(undefined8 *)(piVar2 + 4) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    piVar2[6] = (int)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(piVar2 + 7) = 0;
    piVar2[9] = 0;
    piVar2[10] = 0x3f800000;
    piVar2[0xb] = 0x3f800000;
    piVar2[0xc] = 0x3f800000;
    piVar2[0xd] = 0x3f800000;
    *(undefined1 *)(piVar2 + 0xe) = 0;
    piVar2[0xf] = 0x3c23d70a;
    piVar2[0x10] = 10;
    piVar2[0x11] = 3;
    *(undefined1 *)(piVar2 + 0x12) = 0;
    piVar2[0x13] = 0;
    piVar4 = piVar2;
  }
  pTVar3 = (TMinVolumeBox3Internal<float> *)(piVar4 + 4);
  if (local_18 == this) {
    if (pTVar3 != (TMinVolumeBox3Internal<float> *)0x0) goto LAB_14951ba80;
  }
  else {
    pTVar1 = (this->Internal).Ptr;
    (this->Internal).Ptr = pTVar3;
    if (pTVar1 == (TMinVolumeBox3Internal<float> *)0x0) goto LAB_14951ba88;
    piVar4 = &pTVar1[-1].OptimizeIterations;
LAB_14951ba80:
    (**(code **)piVar4)();
  }
  pTVar3 = (this->Internal).Ptr;
LAB_14951ba88:
  pTVar3->bMostAccurateFit = param_1;
  return;
}

// Initialize @ 14951baa0

void __thiscall
UE::Geometry::TMinVolumeBox3<double>::Initialize(TMinVolumeBox3<double> *this,bool param_1)

{
  TMinVolumeBox3Internal<double> *pTVar1;
  undefined8 uVar2;
  int *piVar3;
  TMinVolumeBox3Internal<double> *pTVar4;
  TMinVolumeBox3<double> local_18 [2];
  
  piVar3 = ::operator_new(0x80);
  if (piVar3 != (int *)0x0) {
    *(code **)piVar3 =
         Core::Private::PimplPtr::DeleterFunc<UE::Geometry::TMinVolumeBox3Internal<double>_>;
    *(undefined8 *)(piVar3 + 2) = 0;
    *(undefined4 *)((longlong)piVar3 + 0x61) = 0;
    *(undefined2 *)((longlong)piVar3 + 0x65) = 0;
    *(undefined1 *)((longlong)piVar3 + 0x67) = 0;
    *(undefined2 *)((longlong)piVar3 + 0x79) = 0;
    *(undefined1 *)((longlong)piVar3 + 0x7b) = 0;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(piVar3 + 4) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(piVar3 + 6) = uVar2;
    *(double *)(piVar3 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(piVar3 + 10) = 0;
    *(undefined8 *)(piVar3 + 0xc) = 0;
    *(undefined8 *)(piVar3 + 0xe) = 0;
    *(undefined8 *)(piVar3 + 0x10) = 0x3ff0000000000000;
    *(undefined8 *)(piVar3 + 0x12) = 0x3ff0000000000000;
    *(undefined8 *)(piVar3 + 0x14) = 0x3ff0000000000000;
    *(undefined8 *)(piVar3 + 0x16) = 0x3ff0000000000000;
    *(undefined8 *)(piVar3 + 0x1a) = 0x3f847ae147ae147b;
    *(undefined1 *)(piVar3 + 0x18) = 0;
    piVar3[0x1c] = 10;
    piVar3[0x1d] = 3;
    *(undefined1 *)(piVar3 + 0x1e) = 0;
    piVar3[0x1f] = 0;
  }
  pTVar4 = (TMinVolumeBox3Internal<double> *)(piVar3 + 4);
  if (local_18 == this) {
    if (pTVar4 != (TMinVolumeBox3Internal<double> *)0x0) goto LAB_14951bb75;
  }
  else {
    pTVar1 = (this->Internal).Ptr;
    (this->Internal).Ptr = pTVar4;
    if (pTVar1 == (TMinVolumeBox3Internal<double> *)0x0) goto LAB_14951bb7d;
    piVar3 = &pTVar1[-1].OptimizeIterations;
LAB_14951bb75:
    (**(code **)piVar3)();
  }
  pTVar4 = (this->Internal).Ptr;
LAB_14951bb7d:
  pTVar4->bMostAccurateFit = param_1;
  return;
}

// IsSolutionAvailable @ 14951e400

bool __thiscall
UE::Geometry::TMinVolumeBox3<float>::IsSolutionAvailable(TMinVolumeBox3<float> *this)

{
  TMinVolumeBox3Internal<float> *pTVar1;
  
  pTVar1 = (this->Internal).Ptr;
  if ((pTVar1 != (TMinVolumeBox3Internal<float> *)0x0) && (pTVar1->bSolutionOK != false)) {
    return true;
  }
  return false;
}

// IsSolutionAvailable @ 14951e420

bool __thiscall
UE::Geometry::TMinVolumeBox3<double>::IsSolutionAvailable(TMinVolumeBox3<double> *this)

{
  TMinVolumeBox3Internal<double> *pTVar1;
  
  pTVar1 = (this->Internal).Ptr;
  if ((pTVar1 != (TMinVolumeBox3Internal<double> *)0x0) && (pTVar1->bSolutionOK != false)) {
    return true;
  }
  return false;
}

// Solve @ 149525f00

bool __thiscall
UE::Geometry::TMinVolumeBox3<float>::Solve
          (TMinVolumeBox3<float> *this,int param_1,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_2,bool param_3,
          FProgressCancel *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> local_18;
  
  Initialize(this,param_3);
  if ((this->Internal).Ptr == (TMinVolumeBox3Internal<float> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Internal",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\MinVolumeBox3.cpp"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  bVar2 = TMinVolumeBox3Internal<float>::ComputeResult
                    ((this->Internal).Ptr,param_1,&local_18,param_4);
  return bVar2;
}

// Solve @ 149525f90

bool __thiscall
UE::Geometry::TMinVolumeBox3<double>::Solve
          (TMinVolumeBox3<double> *this,int param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2,bool param_3,
          FProgressCancel *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_18;
  
  Initialize(this,param_3);
  if ((this->Internal).Ptr == (TMinVolumeBox3Internal<double> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Internal",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\MinVolumeBox3.cpp"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  bVar2 = TMinVolumeBox3Internal<double>::ComputeResult
                    ((this->Internal).Ptr,param_1,&local_18,param_4);
  return bVar2;
}

// SolveSubsample @ 149526670

bool __thiscall
UE::Geometry::TMinVolumeBox3<float>::SolveSubsample
          (TMinVolumeBox3<float> *this,int param_1,int param_2,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_3,bool param_4,
          FProgressCancel *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 local_res10 [2];
  ForAnyElementType *local_80;
  undefined8 local_78;
  undefined4 local_70;
  ForAnyElementType local_68;
  int local_60;
  int iStack_5c;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> local_58;
  code *local_48;
  ForAnyElementType **local_40;
  
  uVar7 = (ulonglong)(uint)param_1;
  if (param_1 <= param_2) {
    uVar1 = *(undefined8 *)param_3;
    uVar2 = *(undefined8 *)&param_3->field_0x8;
    Initialize(this,param_4);
    if (((this->Internal).Ptr == (TMinVolumeBox3Internal<float> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Internal",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\MinVolumeBox3.cpp"
                           ,0x4e,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_58._0_8_ = uVar1;
    local_58._8_8_ = uVar2;
    bVar4 = TMinVolumeBox3Internal<float>::ComputeResult
                      ((this->Internal).Ptr,param_1,&local_58,param_5);
    return bVar4;
  }
  Initialize(this,param_4);
  if (((this->Internal).Ptr == (TMinVolumeBox3Internal<float> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Internal",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\MinVolumeBox3.cpp"
                         ,0x5d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar8 = 0;
  uVar6 = uVar7;
  if (uVar7 == 0) {
    uVar6 = 1;
  }
  if ((0xbf400000 < uVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModuloPrime > MaxIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IteratorUtil.h"
                         ,0x1bc,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  iStack_5c = 0;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar7);
  }
  uVar9 = uVar8;
  if (0 < param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,param_1,&local_68,0,&iStack_5c);
  }
  while( true ) {
    if ((uVar9 == uVar7) || (param_2 < 1)) {
      local_80 = &local_68;
      local_40 = &local_80;
      local_48 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::TMinVolumeBox3<float>::SolveSubsample'::__l2::<lambda_1>,UE::Math::TVector<float>,int>
                 ::Call;
      bVar4 = TMinVolumeBox3Internal<float>::ComputeResult
                        ((this->Internal).Ptr,local_60,
                         (TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *)&local_48,param_5);
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      return bVar4;
    }
    local_res10[0] = (undefined4)uVar8;
    (**(code **)param_3)(&local_78,*(undefined8 *)&param_3->field_0x8,local_res10);
    if (((local_68.Data <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 < local_68.Data + (longlong)iStack_5c * 0xc)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    if (local_60 == iStack_5c) {
      local_60 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_68,&iStack_5c);
    }
    *(undefined8 *)(local_68.Data + (longlong)local_60 * 0xc) = local_78;
    *(undefined4 *)(local_68.Data + (longlong)local_60 * 0xc + 8) = local_70;
    uVar8 = (uVar8 + 0xbf400001) % uVar6;
    uVar9 = uVar9 + 1;
    local_60 = local_60 + 1;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// SolveSubsample @ 149526930

bool __thiscall
UE::Geometry::TMinVolumeBox3<double>::SolveSubsample
          (TMinVolumeBox3<double> *this,int param_1,int param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_3,bool param_4,
          FProgressCancel *param_5)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 local_res10 [2];
  ForAnyElementType *local_90;
  ForAnyElementType local_88;
  int local_80;
  int iStack_7c;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_78;
  code *local_68;
  ForAnyElementType **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  uVar8 = (ulonglong)(uint)param_1;
  if (param_1 <= param_2) {
    uVar2 = *(undefined8 *)param_3;
    uVar3 = *(undefined8 *)&param_3->field_0x8;
    Initialize(this,param_4);
    if (((this->Internal).Ptr == (TMinVolumeBox3Internal<double> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Internal",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\MinVolumeBox3.cpp"
                           ,0x4e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_78._0_8_ = uVar2;
    local_78._8_8_ = uVar3;
    bVar5 = TMinVolumeBox3Internal<double>::ComputeResult
                      ((this->Internal).Ptr,param_1,&local_78,param_5);
    return bVar5;
  }
  Initialize(this,param_4);
  if (((this->Internal).Ptr == (TMinVolumeBox3Internal<double> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Internal",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\MinVolumeBox3.cpp"
                         ,0x5d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar9 = 0;
  uVar7 = uVar8;
  if (uVar8 == 0) {
    uVar7 = 1;
  }
  if ((0xbf400000 < uVar8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModuloPrime > MaxIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IteratorUtil.h"
                         ,0x1bc,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  iStack_7c = 0;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar8);
  }
  uVar10 = uVar9;
  if (0 < param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,param_1,&local_88,0,&iStack_7c);
  }
  while( true ) {
    if ((uVar10 == uVar8) || (param_2 < 1)) {
      local_90 = &local_88;
      local_60 = &local_90;
      local_68 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::TMinVolumeBox3<double>::SolveSubsample'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                 ::Call;
      bVar5 = TMinVolumeBox3Internal<double>::ComputeResult
                        ((this->Internal).Ptr,local_80,
                         (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_68,param_5);
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      return bVar5;
    }
    local_res10[0] = (undefined4)uVar9;
    (**(code **)param_3)(&local_58,*(undefined8 *)&param_3->field_0x8,local_res10);
    if (((local_88.Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < local_88.Data + (longlong)iStack_7c * 0x18)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    if (local_80 == iStack_7c) {
      local_80 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_88,&iStack_7c);
    }
    pFVar1 = local_88.Data + (longlong)local_80 * 0x18;
    *(undefined4 *)pFVar1 = local_58;
    *(undefined4 *)(pFVar1 + 4) = uStack_54;
    *(undefined4 *)(pFVar1 + 8) = uStack_50;
    *(undefined4 *)(pFVar1 + 0xc) = uStack_4c;
    *(undefined8 *)(local_88.Data + (longlong)local_80 * 0x18 + 0x10) = local_48;
    uVar9 = (uVar9 + 0xbf400001) % uVar7;
    uVar10 = uVar10 + 1;
    local_80 = local_80 + 1;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

