// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 8

// <lambda_invoker_cdecl> @ 14c940ed0

bool __cdecl
UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::<lambda_33_>::<lambda_invoker_cdecl>
          (void)

{
  return false;
}

// ~TImplicitBlend<UE::Geometry::FDynamicMesh3> @ 14c949210

void __thiscall
UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::
~TImplicitBlend<UE::Geometry::FDynamicMesh3>(TImplicitBlend<UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7__TImplicitBlend_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  pFVar1 = (this->SDFMaxDistances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>,int>
            ((TCachingMeshSDF<UE::Geometry::FDynamicMesh3> *)
             (this->ComputedSDFs).AllocatorInstance.Data,(this->ComputedSDFs).ArrayNum);
  pFVar1 = (this->ComputedSDFs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,int>
            ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)
             (this->ComputedSpatials).AllocatorInstance.Data,(this->ComputedSpatials).ArrayNum);
  pFVar1 = (this->ComputedSpatials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMarchingCubes::~FMarchingCubes(&this->MarchingCubes);
  if (*(longlong *)&this->CancelF != 0) {
    plVar2 = *(longlong **)&(this->CancelF).field_0x28;
    plVar3 = (longlong *)&(this->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar1 = (this->SourceBounds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Sources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 14c94bee0

void __thiscall
`UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::ComputeLazySDFs'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = (longlong)param_1;
  uVar7 = (uint)~param_1 >> 0x1f;
  if (*(char *)((longlong)this + 8) != '\0') {
    lVar3 = *(longlong *)this;
    uVar6 = 0;
    if (param_1 < *(int *)(lVar3 + 0x398)) {
      uVar6 = uVar7;
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
    if (*(double *)((longlong)this + 0x10) <= *(double *)(*(longlong *)(lVar3 + 0x390) + lVar8 * 8))
    {
      return;
    }
  }
  lVar3 = *(longlong *)this;
  dVar1 = *(double *)(lVar3 + 0x38);
  uVar6 = 0;
  if (param_1 < *(int *)(lVar3 + 0x388)) {
    uVar6 = uVar7;
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
  lVar9 = lVar8 * 0x100;
  *(float *)(*(longlong *)(lVar3 + 0x380) + 0x30 + lVar9) = (float)dVar1;
  lVar3 = *(longlong *)this;
  dVar2 = *(double *)(lVar3 + 0x40);
  uVar6 = 0;
  if (param_1 < *(int *)(lVar3 + 0x388)) {
    uVar6 = uVar7;
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
  *(float *)(*(longlong *)(lVar3 + 0x380) + 0x10 + lVar9) = (float)dVar2;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar3 + 0x388)) {
    uVar6 = uVar7;
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
  TFunction<bool___cdecl(void)>::operator=
            ((TFunction<bool___cdecl(void)> *)(*(longlong *)(lVar3 + 0x380) + 0x50 + lVar9),
             (TFunction<bool___cdecl(void)> *)(lVar3 + 0x60));
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar3 + 0x388)) {
    uVar6 = uVar7;
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
  UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::Initialize
            ((TCachingMeshSDF<UE::Geometry::FDynamicMesh3> *)(*(longlong *)(lVar3 + 0x380) + lVar9))
  ;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar3 + 0x398)) {
    uVar6 = uVar7;
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
  *(double *)(*(longlong *)(lVar3 + 0x390) + lVar8 * 8) = (double)(float)dVar1;
  return;
}

// operator() @ 14c94c180

void __thiscall
`UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::ComputeSpatials'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong64 uVar6;
  uint uVar7;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this_00;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = (longlong)param_1;
  if (*(char *)((longlong)this + 8) != '\0') {
    lVar1 = *(longlong *)this;
    uVar7 = (uint)~param_1 >> 0x1f;
    uVar5 = 0;
    if (param_1 < *(int *)(lVar1 + 0x378)) {
      uVar5 = uVar7;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *(longlong *)(lVar1 + 0x370);
    lVar9 = lVar8 * 0xc0;
    uVar5 = 0;
    if (param_1 < *(int *)(lVar1 + 0x18)) {
      uVar5 = uVar7;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(longlong *)(lVar2 + 8 + lVar9) == *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8))
    {
      lVar1 = *(longlong *)this;
      uVar5 = 0;
      if (param_1 < *(int *)(lVar1 + 0x378)) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)(lVar1 + 0x370);
      if ((-1 < *(int *)(lVar1 + 0xbc + lVar9)) &&
         (uVar6 = UE::Geometry::FDynamicMesh3::GetChangeStamp
                            (*(FDynamicMesh3 **)(lVar1 + 8 + lVar9)),
         *(ulong64 *)(lVar1 + 0x10 + lVar9) == uVar6)) {
        return;
      }
    }
  }
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0x378)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)
            (lVar8 * 0xc0 + *(longlong *)(lVar1 + 0x370));
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0x18)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00->Mesh = *(FDynamicMesh3 **)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8);
  this_00->MeshChangeStamp = 0;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(this_00,false);
  uVar6 = UE::Geometry::FDynamicMesh3::GetChangeStamp(this_00->Mesh);
  this_00->MeshChangeStamp = uVar6;
  return;
}

// ComputeLazySDFs @ 14c97a570

void __thiscall
UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::ComputeLazySDFs
          (TImplicitBlend<UE::Geometry::FDynamicMesh3> *this,bool param_1)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong local_res18;
  longlong local_res20;
  undefined8 local_88;
  TArrayView<std::nullptr_t,int> local_80;
  code *local_70;
  TImplicitBlend<UE::Geometry::FDynamicMesh3> **local_68;
  TImplicitBlend<UE::Geometry::FDynamicMesh3> *local_60;
  undefined1 local_58;
  double local_50;
  
  ComputeSpatials(this,param_1);
  if ((!param_1) || (iVar8 = (this->Sources).ArrayNum, (this->ComputedSDFs).ArrayNum != iVar8)) {
    uVar9 = (this->Sources).ArrayNum;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((this->ComputedSDFs).ArrayMax < (int)uVar9) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x100,0x10,uVar9,&(this->ComputedSDFs).AllocatorInstance,
                 (this->ComputedSDFs).ArrayNum,&(this->ComputedSDFs).ArrayMax);
    }
    uVar9 = (this->Sources).ArrayNum;
    pTVar1 = &this->SDFMaxDistances;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    piVar2 = &(this->SDFMaxDistances).ArrayMax;
    if ((this->SDFMaxDistances).ArrayMax < (int)uVar9) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar9,&pTVar1->AllocatorInstance,(this->SDFMaxDistances).ArrayNum,piVar2);
    }
    iVar8 = (this->Sources).ArrayNum;
    uVar9 = 0;
    if (0 < iVar8) {
      local_res18 = 0;
      local_res20 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->ComputedSpatials).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->ComputedSpatials).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar9 < (this->Sources).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->ComputedSDFs).ArrayNum;
        pFVar4 = (this->Sources).AllocatorInstance.Data;
        if (iVar8 == (this->ComputedSDFs).ArrayMax) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x100,0x10,&(this->ComputedSDFs).AllocatorInstance,
                             &(this->ComputedSDFs).ArrayMax);
          (this->ComputedSDFs).ArrayNum = iVar8;
        }
        (this->ComputedSDFs).ArrayNum = iVar8 + 1;
        TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>
                  ((TCachingMeshSDF<UE::Geometry::FDynamicMesh3> *)
                   ((this->ComputedSDFs).AllocatorInstance.Data + (longlong)iVar8 * 0x100),
                   *(FDynamicMesh3 **)(pFVar4 + local_res18 * 8),(float)this->GridCellSize,
                   (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(pFVar3 + local_res20),false);
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        local_88 = 0;
        if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar3 + (longlong)*piVar2 * 8)) &&
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
        iVar8 = (this->SDFMaxDistances).ArrayNum;
        if (iVar8 == *piVar2) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar2);
          (this->SDFMaxDistances).ArrayNum = iVar8;
        }
        local_res18 = local_res18 + 1;
        local_res20 = local_res20 + 0xc0;
        uVar9 = uVar9 + 1;
        (this->SDFMaxDistances).ArrayNum = iVar8 + 1;
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_88;
        iVar8 = (this->Sources).ArrayNum;
      } while ((int)uVar9 < iVar8);
    }
  }
  local_50 = this->BlendFalloff;
  local_70 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::ComputeLazySDFs'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68 = &local_60;
  local_80.DataPtr = (void **)0x0;
  local_80.ArrayNum = 0;
  local_60 = this;
  local_58 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar8,1,(TFunctionRef<void___cdecl(int)> *)&local_70,
             (<lambda_1>)param_1,None,&local_80);
  return;
}

// ComputeSpatials @ 14c97b570

void __thiscall
UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::ComputeSpatials
          (TImplicitBlend<UE::Geometry::FDynamicMesh3> *this,bool param_1)

{
  int *piVar1;
  TArray<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
  *this_00;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  <lambda_1> local_res8;
  TImplicitBlend<UE::Geometry::FDynamicMesh3> *local_48;
  undefined1 local_40;
  TArrayView<std::nullptr_t,int> local_38;
  code *local_28;
  TImplicitBlend<UE::Geometry::FDynamicMesh3> **local_20;
  
  uVar2 = (this->Sources).ArrayNum;
  this_00 = &this->ComputedSpatials;
  iVar3 = (this->ComputedSpatials).ArrayNum;
  piVar1 = &(this->ComputedSpatials).ArrayNum;
  if (iVar3 < (int)uVar2) {
    iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc0,0x10,uVar2 - iVar3,&this_00->AllocatorInstance,piVar1,
                       &(this->ComputedSpatials).ArrayMax);
    DefaultConstructItems<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0xc0,uVar2 - iVar3);
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar3) {
      uVar7 = iVar3 - uVar2;
      if (((int)(uVar7 | uVar2) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar7 != 0) {
        TArray<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,uVar2,uVar7);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc0,0x10,&this_00->AllocatorInstance,*piVar1,&(this->ComputedSpatials).ArrayMax)
        ;
      }
    }
  }
  local_28 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::ComputeSpatials'::__l2::<lambda_1>,void,int>
             ::Call;
  local_20 = &local_48;
  local_38.DataPtr = (void **)0x0;
  local_38.ArrayNum = 0;
  local_48 = this;
  local_40 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->Sources).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_28,local_res8,None,&local_38);
  return;
}

// Generate @ 14c97ccb0

FMeshShapeGenerator * __thiscall
UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::Generate
          (TImplicitBlend<UE::Geometry::FDynamicMesh3> *this,bool param_1)

{
  code *pcVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FMeshShapeGenerator *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 local_res8 [8];
  
  FMeshShapeGenerator::Reset((FMeshShapeGenerator *)&this->MarchingCubes);
  iVar7 = (this->Sources).ArrayNum;
  if ((iVar7 < 1) || (iVar7 != (this->SourceBounds).ArrayNum)) {
    bVar5 = false;
    bVar4 = false;
    if (0 < iVar7) goto LAB_14c97ccf7;
  }
  else {
    bVar4 = true;
LAB_14c97ccf7:
    bVar5 = bVar4;
    uVar11 = 0;
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar11 < (this->Sources).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar8 = (FMeshShapeGenerator *)(*pcVar1)();
          return pFVar8;
        }
      }
      if (*(longlong *)((this->Sources).AllocatorInstance.Data + lVar9) == 0) goto LAB_14c97cec4;
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar11 < (this->Sources).ArrayNum);
  }
  if ((((0.0 < this->BlendPower) && (0.0 < this->BlendFalloff)) && (0.0 < this->GridCellSize)) &&
     (0.0 < this->MeshCellSize)) {
    iVar7 = _finite(this->GridCellSize);
    if (iVar7 != 0) {
      iVar7 = _finite(this->MeshCellSize);
      if (iVar7 != 0) {
        bVar4 = true;
        goto LAB_14c97cda5;
      }
    }
  }
  bVar4 = false;
LAB_14c97cda5:
  if ((bVar5) && (bVar4)) {
    (this->CombinedBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
    (this->CombinedBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
    (this->CombinedBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
    (this->CombinedBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
    (this->CombinedBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
    (this->CombinedBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
    iVar7 = (this->SourceBounds).ArrayNum;
    pFVar12 = (this->SourceBounds).AllocatorInstance.Data;
    pFVar10 = pFVar12 + (longlong)iVar7 * 0x30;
    while( true ) {
      if ((this->SourceBounds).ArrayNum != iVar7) {
        `TCheckedPointerIterator<UE::Geometry::TAxisAlignedBox3<double>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar12 == pFVar10) break;
      dVar2 = *(double *)pFVar12;
      pFVar3 = pFVar12 + 8;
      dVar14 = *(double *)(pFVar12 + 0x10);
      dVar17 = *(double *)(pFVar12 + 0x18);
      dVar15 = *(double *)(pFVar12 + 0x20);
      dVar18 = *(double *)(pFVar12 + 0x28);
      pFVar12 = pFVar12 + 0x30;
      dVar13 = (this->CombinedBounds).Min.field0_0x0._s_0.X;
      dVar16 = (this->CombinedBounds).Min.field0_0x0._s_0.Y;
      if (dVar2 <= dVar13) {
        dVar13 = dVar2;
      }
      if (*(double *)pFVar3 <= dVar16) {
        dVar16 = *(double *)pFVar3;
      }
      (this->CombinedBounds).Min.field0_0x0._s_0.X = dVar13;
      dVar13 = (this->CombinedBounds).Min.field0_0x0._s_0.Z;
      if (dVar13 <= dVar14) {
        dVar14 = dVar13;
      }
      dVar13 = (this->CombinedBounds).Max.field0_0x0._s_0.X;
      if (dVar17 <= dVar13) {
        dVar17 = dVar13;
      }
      (this->CombinedBounds).Min.field0_0x0._s_0.Y = dVar16;
      (this->CombinedBounds).Min.field0_0x0._s_0.Z = dVar14;
      dVar13 = (this->CombinedBounds).Max.field0_0x0._s_0.Y;
      if (dVar15 <= dVar13) {
        dVar15 = dVar13;
      }
      dVar13 = (this->CombinedBounds).Max.field0_0x0._s_0.Z;
      if (dVar18 <= dVar13) {
        dVar18 = dVar13;
      }
      (this->CombinedBounds).Max.field0_0x0._s_0.X = dVar17;
      (this->CombinedBounds).Max.field0_0x0._s_0.Y = dVar15;
      (this->CombinedBounds).Max.field0_0x0._s_0.Z = dVar18;
    }
    GenerateBlendAnalytic(this,param_1);
  }
  else {
LAB_14c97cec4:
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_512565112251350939>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\Blend.h"
                       ,0x65,"Validate()");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FMeshShapeGenerator *)(*pcVar1)();
      return pFVar8;
    }
  }
  return (FMeshShapeGenerator *)&this->MarchingCubes;
}

// GenerateBlendAnalytic @ 14c97d8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::GenerateBlendAnalytic
          (TImplicitBlend<UE::Geometry::FDynamicMesh3> *this,bool param_1)

{
  TFunction<bool___cdecl(void)> *pTVar1;
  TVector<double> *pTVar2;
  double *pdVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  code *pcVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  ulonglong uVar15;
  char cVar16;
  bool bVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  FScriptContainerElement *pFVar32;
  FScriptContainerElement *pFVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168 [8];
  ForAnyElementType local_160;
  int local_158;
  int iStack_154;
  ForAnyElementType local_150;
  int local_148;
  int local_144;
  ForAnyElementType local_140;
  undefined8 local_138;
  ulonglong local_130;
  FScriptContainerElement *local_128;
  ForAnyElementType local_120;
  undefined8 local_118;
  double local_110;
  undefined1 local_108;
  undefined1 local_100 [16];
  double local_f0;
  FScriptContainerElement *local_e8;
  undefined1 auStack_e0 [16];
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<UE::Math::TVector<double>_const_,int> local_98;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pTVar1 = &this->CancelF;
  Core::Private::Function::CheckCallable(*(void **)pTVar1);
  plVar23 = *(longlong **)&(this->CancelF).field_0x28;
  plVar22 = (longlong *)&(this->CancelF).field_0x10;
  pcVar6 = *(code **)pTVar1;
  plVar21 = plVar22;
  if (plVar23 != (longlong *)0x0) {
    plVar21 = plVar23;
  }
  uVar19 = (**(code **)(*plVar21 + 8))();
  cVar16 = (*pcVar6)(uVar19);
  if (cVar16 == '\0') {
    ComputeSpatials(this,param_1);
    Core::Private::Function::CheckCallable(*(void **)pTVar1);
    plVar23 = *(longlong **)&(this->CancelF).field_0x28;
    pcVar6 = *(code **)pTVar1;
    plVar21 = plVar22;
    if (plVar23 != (longlong *)0x0) {
      plVar21 = plVar23;
    }
    uVar19 = (**(code **)(*plVar21 + 8))();
    cVar16 = (*pcVar6)(uVar19);
    if (cVar16 == '\0') {
      ComputeLazySDFs(this,param_1);
      Core::Private::Function::CheckCallable(*(void **)pTVar1);
      plVar23 = *(longlong **)&(this->CancelF).field_0x28;
      pcVar6 = *(code **)pTVar1;
      if (plVar23 != (longlong *)0x0) {
        plVar22 = plVar23;
      }
      uVar19 = (**(code **)(*plVar22 + 8))(plVar22);
      cVar16 = (*pcVar6)(uVar19);
      if (cVar16 == '\0') {
        uVar28 = (this->Sources).ArrayNum;
        uVar30 = 0;
        local_110 = this->BlendPower;
        local_108 = this->bSubtract;
        local_120.Data = (FScriptContainerElement *)0x0;
        local_118 = 0;
        if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
        }
        if (0 < (int)uVar28) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar28,&local_120,0,(int *)((longlong)&local_118 + 4));
        }
        uVar28 = (this->Sources).ArrayNum;
        local_160.Data = (FScriptContainerElement *)0x0;
        local_158 = 0;
        iStack_154 = 0;
        if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
        }
        if (0 < (int)uVar28) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,uVar28,&local_160,0,&iStack_154);
        }
        uVar28 = (this->Sources).ArrayNum;
        local_140.Data = (FScriptContainerElement *)0x0;
        local_138 = 0;
        if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
        }
        if (0 < (int)uVar28) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,uVar28,&local_140,0,(int *)((longlong)&local_138 + 4));
        }
        uVar19 = __real_47efffffe0000000;
        if (0 < (this->Sources).ArrayNum) {
          local_130 = 0;
          uVar29 = uVar30;
          uVar31 = uVar30;
          do {
            uVar15 = local_130;
            uVar27 = (uint)uVar30;
            uVar26 = ~uVar27 >> 0x1f;
            uVar28 = 0;
            if ((int)uVar27 < (this->ComputedSDFs).ArrayNum) {
              uVar28 = uVar26;
            }
            if ((uVar28 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_e8 = (this->ComputedSDFs).AllocatorInstance.Data + uVar15;
            local_b8 = *(undefined4 *)(local_e8 + 0xa8);
            dStack_c0 = *(double *)(local_e8 + 0xa0);
            local_c8 = (double)*(float *)(local_e8 + 0x10);
            uStack_b0 = uVar19;
            dStack_d0 = (double)*(float *)(local_e8 + 0x88);
            dVar8 = (double)(float)((ulonglong)*(undefined8 *)(local_e8 + 0x80) >> 0x20);
            auStack_e0._8_4_ = SUB84(dVar8,0);
            auStack_e0._0_8_ = (double)(float)*(undefined8 *)(local_e8 + 0x80);
            auStack_e0._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            if (((local_160.Data <= (FScriptContainerElement *)&local_e8) &&
                ((FScriptContainerElement *)&local_e8 < local_160.Data + (longlong)iStack_154 * 0x40
                )) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (local_158 == iStack_154) {
              local_158 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x840,&local_160,&iStack_154);
            }
            lVar25 = (longlong)local_158 * 0x40;
            local_158 = local_158 + 1;
            *(FScriptContainerElement **)(local_160.Data + lVar25) = local_e8;
            *(undefined8 *)(local_160.Data + lVar25 + 8) = auStack_e0._0_8_;
            *(undefined8 *)(local_160.Data + lVar25 + 0x10) = auStack_e0._8_8_;
            *(double *)(local_160.Data + lVar25 + 0x10 + 8) = dStack_d0;
            *(double *)(local_160.Data + lVar25 + 0x20) = local_c8;
            *(double *)(local_160.Data + lVar25 + 0x20 + 8) = dStack_c0;
            *(ulonglong *)(local_160.Data + lVar25 + 0x30) = CONCAT44(uStack_b4,local_b8);
            *(undefined8 *)(local_160.Data + lVar25 + 0x30 + 8) = uStack_b0;
            uVar28 = 0;
            if ((int)uVar27 < local_158) {
              uVar28 = uVar26;
            }
            if ((uVar28 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar32 = local_160.Data + uVar31;
            iVar18 = (int)local_138;
            if ((int)local_138 == local_138._4_4_) {
              iVar18 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_140,(int *)((longlong)&local_138 + 4));
            }
            local_138 = CONCAT44(local_138._4_4_,iVar18 + 1);
            *(double *)(local_140.Data + (longlong)iVar18 * 0x10 + 8) = this->BlendFalloff;
            *(FScriptContainerElement **)(local_140.Data + (longlong)iVar18 * 0x10) = pFVar32;
            uVar28 = 0;
            if ((int)uVar27 < iVar18 + 1) {
              uVar28 = uVar26;
            }
            if ((uVar28 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_128 = local_140.Data + uVar29;
            if (((local_120.Data <= (FScriptContainerElement *)&local_128) &&
                ((FScriptContainerElement *)&local_128 <
                 local_120.Data + (longlong)local_118._4_4_ * 8)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar18 = (int)local_118;
            if ((int)local_118 == local_118._4_4_) {
              iVar18 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_120,(int *)((longlong)&local_118 + 4));
            }
            local_118 = CONCAT44(local_118._4_4_,iVar18 + 1);
            local_130 = local_130 + 0x100;
            uVar30 = (ulonglong)(uVar27 + 1);
            uVar31 = uVar31 + 0x40;
            uVar29 = uVar29 + 0x10;
            *(FScriptContainerElement **)(local_120.Data + (longlong)iVar18 * 8) = local_128;
          } while ((int)(uVar27 + 1) < (this->Sources).ArrayNum);
        }
        iVar18 = 0;
        TFunction<bool___cdecl(void)>::operator=(&(this->MarchingCubes).CancelF,&this->CancelF);
        dVar5 = (this->CombinedBounds).Min.field0_0x0._s_0.X;
        dVar11 = (this->CombinedBounds).Min.field0_0x0._s_0.Y;
        dVar12 = (this->CombinedBounds).Min.field0_0x0._s_0.Z;
        dVar14 = (this->CombinedBounds).Max.field0_0x0._s_0.X;
        (this->MarchingCubes).CubeSize = this->MeshCellSize;
        dVar8 = this->BlendFalloff;
        (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.X = dVar5;
        (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Y = dVar11;
        (this->MarchingCubes).IsoValue = 0.421875;
        dVar5 = (this->CombinedBounds).Max.field0_0x0._s_0.Y;
        dVar11 = (this->CombinedBounds).Max.field0_0x0._s_0.Z;
        (this->MarchingCubes).RootMode = LerpSteps;
        (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Z = dVar12;
        (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.X = dVar14;
        (this->MarchingCubes).RootModeSteps = 3;
        (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Y = dVar5;
        (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Z = dVar11;
        dVar11 = (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Z + dVar8;
        dVar5 = (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.X;
        auVar9._8_4_ = SUB84(dVar11,0);
        auVar9._0_8_ = (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Y + dVar8;
        auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        *(undefined1 (*) [16])((longlong)&(this->MarchingCubes).Bounds.Max.field0_0x0 + 8) = auVar9;
        dVar12 = (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.X;
        dVar11 = (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Y;
        (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.X = dVar8 + dVar5;
        dVar11 = dVar11 - dVar8;
        auVar10._8_4_ = SUB84(dVar11,0);
        auVar10._0_8_ = dVar12 - dVar8;
        auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        *(undefined1 (*) [16])&(this->MarchingCubes).Bounds.Min.field0_0x0 = auVar10;
        (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Z =
             (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Z - dVar8;
        Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
        pcVar6 = *(code **)&this->CancelF;
        plVar22 = *(longlong **)&(this->CancelF).field_0x28;
        plVar23 = (longlong *)&(this->CancelF).field_0x10;
        if (plVar22 != (longlong *)0x0) {
          plVar23 = plVar22;
        }
        uVar19 = (**(code **)(*plVar23 + 8))();
        cVar16 = (*pcVar6)(uVar19);
        if (cVar16 == '\0') {
          iVar20 = (this->Sources).ArrayNum;
          uVar30 = (ulonglong)iVar20;
          pFVar33 = (this->Sources).AllocatorInstance.Data;
          local_150.Data = (FScriptContainerElement *)0x0;
          local_148 = 0;
          local_144 = 0;
          pFVar32 = pFVar33 + uVar30 * 8;
          local_130 = CONCAT44(local_130._4_4_,iVar20);
          while( true ) {
            if ((this->Sources).ArrayNum != (int)uVar30) {
              local_168[0] = 0;
              `TCheckedPointerIterator<UE::Geometry::FDynamicMesh3_const_*,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(local_168);
              iVar18 = local_148;
            }
            if (pFVar33 == pFVar32) break;
            lVar25 = *(longlong *)pFVar33;
            uVar29 = 0;
            iVar20 = *(int *)(lVar25 + 0x20);
            iVar24 = *(int *)(lVar25 + 0x24);
            if (0 < iVar20 * 0x200 + iVar24) {
              do {
                uVar28 = (uint)uVar29;
                if ((-1 < (int)uVar28) && ((int)uVar28 < iVar20 * 0x200 + iVar24)) {
                  uVar30 = (ulonglong)(uVar28 & 0x1ff);
                  if ((ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar25 + 0x28) + (uVar29 >> 9) * 8) +
                                         uVar30 * 2) - 1U) < 0xfffe) {
                    lVar7 = *(longlong *)(*(longlong *)(lVar25 + 0x10) + (uVar29 >> 9) * 8);
                    local_100 = *(undefined1 (*) [16])(lVar7 + uVar30 * 0x18);
                    dVar8 = local_100._0_8_;
                    local_f0 = *(double *)(lVar7 + 0x10 + uVar30 * 0x18);
                    if ((((((this->MarchingCubes).Bounds.Min.field0_0x0._s_0.X <= dVar8) &&
                          (dVar5 = local_100._8_8_,
                          (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Y <= dVar5)) &&
                         ((this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Z <= local_f0)) &&
                        ((pTVar2 = &(this->MarchingCubes).Bounds.Max,
                         dVar8 < (pTVar2->field0_0x0)._s_0.X || dVar8 == (pTVar2->field0_0x0)._s_0.X
                         && (pdVar3 = &(this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Y,
                            dVar5 < *pdVar3 || dVar5 == *pdVar3)))) &&
                       (pdVar3 = &(this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Z,
                       local_f0 < *pdVar3 || local_f0 == *pdVar3)) {
                      if ((local_150.Data <= (FScriptContainerElement *)local_100) &&
                         ((FScriptContainerElement *)local_100 <
                          local_150.Data + (longlong)local_144 * 0x18)) {
                        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           );
                        if (bVar17) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        iVar18 = local_148;
                      }
                      uVar34 = local_100._0_4_;
                      uVar35 = local_100._4_4_;
                      uVar36 = local_100._8_4_;
                      uVar37 = local_100._12_4_;
                      if (iVar18 == local_144) {
                        iVar18 = Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x818,&local_150,&local_144);
                        uVar34 = local_100._0_4_;
                        uVar35 = local_100._4_4_;
                        uVar36 = local_100._8_4_;
                        uVar37 = local_100._12_4_;
                      }
                      local_148 = iVar18 + 1;
                      pFVar4 = local_150.Data + (longlong)iVar18 * 0x18;
                      *(undefined4 *)pFVar4 = uVar34;
                      *(undefined4 *)(pFVar4 + 4) = uVar35;
                      *(undefined4 *)(pFVar4 + 8) = uVar36;
                      *(undefined4 *)(pFVar4 + 0xc) = uVar37;
                      *(double *)(local_150.Data + (longlong)iVar18 * 0x18 + 0x10) = local_f0;
                      iVar18 = local_148;
                    }
                  }
                }
                iVar20 = *(int *)(lVar25 + 0x20);
                uVar29 = (ulonglong)(uVar28 + 1);
                iVar24 = *(int *)(lVar25 + 0x24);
              } while ((int)(uVar28 + 1) < iVar20 * 0x200 + iVar24);
              uVar30 = local_130 & 0xffffffff;
            }
            pFVar33 = pFVar33 + 8;
          }
          local_88 = *(longlong *)&(this->MarchingCubes).Implicit;
          uVar13 = *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x8;
          local_78 = *(longlong *)&(this->MarchingCubes).Implicit.field_0x10;
          uStack_70 = *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x18;
          uVar19 = *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x20;
          plStack_60 = *(longlong **)&(this->MarchingCubes).Implicit.field_0x28;
          *(code **)&(this->MarchingCubes).Implicit =
               Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::GenerateBlendAnalytic'::__l2::<lambda_1>,double,UE::Math::TVector<double>_>
               ::Call;
          *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x8 = uStack_80;
          *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x10 = 0x528d8a10;
          *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x14 = 1;
          *(ForAnyElementType **)&(this->MarchingCubes).Implicit.field_0x18 = &local_120;
          *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x20 = (undefined4)local_68;
          *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x24 = local_68._4_4_;
          *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x28 = 0;
          *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x2c = 0;
          local_68 = uVar19;
          iStack_a0 = iVar18;
          uStack_80 = uVar13;
          if (local_88 != 0) {
            plVar22 = &local_78;
            if (plStack_60 != (longlong *)0x0) {
              plVar22 = plStack_60;
            }
            (**(code **)(*plVar22 + 0x10))();
            iStack_a0 = local_148;
          }
          local_a8 = local_150.Data;
          if ((iStack_a0 < 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_98._12_4_ = uStack_9c;
          local_98.ArrayNum = iStack_a0;
          local_98.DataPtr = (TVector<double> *)local_a8;
          FMarchingCubes::GenerateContinuation(&this->MarchingCubes,&local_98);
          if ((0 < local_148) && ((int)(this->MarchingCubes)._padding_ == 0)) {
            (**(code **)((this->MarchingCubes)._padding_ + 8))(&this->MarchingCubes);
          }
          if (*(longlong *)&(this->MarchingCubes).Implicit != 0) {
            plVar22 = *(longlong **)&(this->MarchingCubes).Implicit.field_0x28;
            plVar23 = (longlong *)&(this->MarchingCubes).Implicit.field_0x10;
            if (plVar22 != (longlong *)0x0) {
              plVar23 = plVar22;
            }
            (**(code **)(*plVar23 + 0x10))();
            *(undefined8 *)&(this->MarchingCubes).Implicit = 0;
          }
          if (local_150.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data);
          }
        }
        if (local_140.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data);
        }
        if (local_160.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data);
        }
        if (local_120.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data);
        }
      }
    }
  }
  return;
}

