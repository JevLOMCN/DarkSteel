// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 23

// <lambda_invoker_cdecl> @ 1496ea5a0

void __cdecl
`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (int param_1,int param_2,int param_3,TVector<float> *param_4,TVector<float> *param_5,
          TVector<float> *param_6)

{
  UE::Geometry::VectorUtil::MakePerpVectors<float>(param_4,param_5,param_6);
  return;
}

// operator() @ 1496fdab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  longlong lVar2;
  FMeshRenderBufferSet *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  code *local_98 [2];
  undefined **local_88;
  FMeshRenderBufferSet *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FMeshRenderBufferSet *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(lVar2 + 0x4f0);
  uVar6 = 0;
  if (param_1 < iVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    local_a8 = (longlong)param_1;
    local_a0 = (longlong)iVar1;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = *(FMeshRenderBufferSet **)(*(longlong *)(lVar2 + 0x4e8) + (longlong)param_1 * 8);
  lpCriticalSection = &pFVar3->BuffersLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (0 < pFVar3->TriangleCount) {
      FMeshRenderBufferSetConversionUtil::RecomputeRenderBufferTriangleIndexSets
                ((FMeshRenderBufferSetConversionUtil *)(*(longlong *)this + 0x290),pFVar3,
                 (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8));
    }
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__FastUpdateAllIndexBuffers_FDynamicMeshSceneProxy__QEAAXXZ_QEBA_H_Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_80 = pFVar3;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<__FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers_::__l2::<lambda_1>::operator()_::__l2::TSTR_FDynamicMeshSceneProxyFastUpdateAllIndexBuffers603>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_58 = local_88;
      pFStack_50 = pFStack_80;
      local_48 = local_78;
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<``FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::TSTR_FDynamicMeshSceneProxyFastUpdateAllIndexBuffers603>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar7);
      uVar9 = (ulonglong)local_38;
      if (2 < uVar9) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          pppuVar8 = (undefined ***)(local_68 + 0x10);
          if (local_40 != (undefined ***)0x0) {
            pppuVar8 = local_40;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      pppuVar8 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar8 = local_70;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator() @ 1496fdcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FDynamicMeshSceneProxy::FastUpdateIndexBuffers'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  FMeshRenderBufferSet *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  uint uVar9;
  undefined ***pppuVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  code *local_98 [2];
  undefined **local_88;
  FMeshRenderBufferSet *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FMeshRenderBufferSet *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  plVar2 = *(longlong **)((longlong)this + 8);
  iVar1 = (int)plVar2[1];
  uVar9 = 0;
  if (param_1 < iVar1) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    local_a8 = (longlong)param_1;
    local_a0 = (longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar9 = *(uint *)(*plVar2 + (longlong)param_1 * 4);
  if ((-1 < (int)uVar9) && (lVar3 = *(longlong *)this, (int)uVar9 < *(int *)(lVar3 + 0x4f0))) {
    uVar7 = 0;
    if ((int)uVar9 < *(int *)(lVar3 + 0x4f0)) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      local_a8 = (longlong)(int)uVar9;
      local_a0 = (longlong)*(int *)(lVar3 + 0x4f0);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = *(FMeshRenderBufferSet **)(*(longlong *)(lVar3 + 0x4e8) + (longlong)(int)uVar9 * 8);
    lpCriticalSection = &pFVar4->BuffersLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (0 < pFVar4->TriangleCount) {
      FMeshRenderBufferSetConversionUtil::RecomputeRenderBufferTriangleIndexSets
                ((FMeshRenderBufferSetConversionUtil *)(*(longlong *)this + 0x290),pFVar4,
                 (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 0x10));
    }
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__FastUpdateIndexBuffers_FDynamicMeshSceneProxy__QEAAXAEBV__TArray_HV__TSizedDefaultAllocator__0CA______Z_QEBA_H_Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FDynamicMeshSceneProxy::FastUpdateIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_80 = pFVar4;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<__FDynamicMeshSceneProxy::FastUpdateIndexBuffers_::__l2::<lambda_1>::operator()_::__l2::TSTR_FDynamicMeshSceneProxyFastUpdateSomeIndexBuffers639>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_58 = local_88;
      pFStack_50 = pFStack_80;
      local_48 = local_78;
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar8 = (FRenderCommandTag *)
               TRenderCommandTag<``FDynamicMeshSceneProxy::FastUpdateIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::TSTR_FDynamicMeshSceneProxyFastUpdateSomeIndexBuffers639>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar8);
      uVar11 = (ulonglong)local_38;
      if (2 < uVar11) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          pppuVar10 = (undefined ***)(local_68 + 0x10);
          if (local_40 != (undefined ***)0x0) {
            pppuVar10 = local_40;
          }
          (*(code *)(*pppuVar10)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      pppuVar10 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar10 = local_70;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// operator() @ 1496fdf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FDynamicMeshSceneProxy::FastUpdateVertices'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  FMeshRenderBufferSet *pFVar5;
  FBaseDynamicMeshSceneProxy *this_00;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar6;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar7;
  TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedDefaultAllocator<32>_>
  *pTVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar15;
  uint uVar16;
  undefined ***pppuVar17;
  ulonglong uVar18;
  undefined1 auStackY_158 [32];
  code *local_e0 [5];
  code *local_b8 [2];
  undefined **local_a8;
  FMeshRenderBufferSet *pFStack_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined ***local_90;
  undefined1 local_88 [16];
  undefined **local_78;
  FMeshRenderBufferSet *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  plVar3 = *(longlong **)this;
  uVar16 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar16 = *(uint *)(*plVar3 + (longlong)param_1 * 4);
  if ((-1 < (int)uVar16) &&
     (lVar4 = *(longlong *)((longlong)this + 8), (int)uVar16 < *(int *)(lVar4 + 0x4f0))) {
    uVar12 = 0;
    if ((int)uVar16 < *(int *)(lVar4 + 0x4f0)) {
      uVar12 = ~uVar16 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar5 = *(FMeshRenderBufferSet **)(*(longlong *)(lVar4 + 0x4e8) + (longlong)(int)uVar16 * 8);
    lpCriticalSection = &pFVar5->BuffersLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (pFVar5->TriangleCount != 0) {
      if ((pFVar5->Triangles).field0_0x0.TypedValue.ArrayMax == -1) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8713842508703989205>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshSceneProxy.h"
                            ,0x22b,"Buffers->Triangles.IsSet()");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      else {
        bVar10 = *(bool *)*(undefined8 *)((longlong)this + 0x10);
        if (((bVar10 != false) || (**(char **)((longlong)this + 0x18) != '\0')) ||
           (**(char **)((longlong)this + 0x20) != '\0')) {
          this_00 = *(FBaseDynamicMeshSceneProxy **)((longlong)this + 8);
          bVar1 = *(bool *)*(undefined8 *)((longlong)this + 0x20);
          bVar2 = *(bool *)*(undefined8 *)((longlong)this + 0x18);
          local_e0[1] = *(code **)((longlong)this + 0x40);
          local_e0[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
                        ::Call;
          pTVar6 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)
                   **(undefined8 **)((longlong)this + 0x38);
          pTVar7 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
                   **(undefined8 **)((longlong)this + 0x30);
          if ((pFVar5->Triangles).field0_0x0.TypedValue.ArrayMax == -1) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               );
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          pTVar13 = TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>::operator->
                              (&pFVar5->Triangles);
          FBaseDynamicMeshSceneProxy::
          UpdateVertexBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>_>
                    (this_00,pFVar5,(FDynamicMesh3 *)**(undefined8 **)((longlong)this + 0x28),
                     pTVar13->ArrayNum,(TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar5->Triangles
                     ,pTVar7,pTVar6,
                     (TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
                      *)local_e0,bVar10,bVar2,bVar1);
        }
        if (**(char **)((longlong)this + 0x48) != '\0') {
          lVar4 = *(longlong *)((longlong)this + 8);
          pTVar8 = *(TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedDefaultAllocator<32>_>
                     **)((longlong)this + 0x50);
          pTVar13 = TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>::GetValue
                              (&pFVar5->Triangles);
          pTVar14 = TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>::operator->
                              (&pFVar5->Triangles);
          FMeshRenderBufferSetConversionUtil::
          UpdateVertexUVBufferFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    ((FMeshRenderBufferSetConversionUtil *)(lVar4 + 0x290),pFVar5,
                     (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 0x28),pTVar14->ArrayNum,
                     pTVar13,pTVar8);
        }
        local_98 = **(undefined1 **)((longlong)this + 0x10);
        uStack_97 = **(undefined1 **)((longlong)this + 0x18);
        uStack_96 = **(undefined1 **)((longlong)this + 0x20);
        uStack_95 = **(undefined1 **)((longlong)this + 0x48);
        local_a8 = &
                   ___7__TFunction_OwnedObject_V<lambda_1>__L____R1_1__FastUpdateVertices_FDynamicMeshSceneProxy__QEAAXAEBV__TArray_HV__TSizedDefaultAllocator__0CA______N111_Z_QEBA_H_Z__00_0A__Function_Private_Core_UE__6B_
        ;
        uStack_94 = local_e0[3]._4_4_;
        local_b8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l2::<lambda_1>::operator()'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
        local_90 = (undefined ***)0x0;
        pFStack_a0 = pFVar5;
        this_01 = FRenderCommandList::GetInstanceTLS();
        if (this_01 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<__FDynamicMeshSceneProxy::FastUpdateVertices_::__l2::<lambda_1>::operator()_::__l11::TSTR_FDynamicMeshSceneProxyFastUpdateVerticesBufferList570>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
        }
        else {
          this_02 = FRenderCommandList::GetRenderThread(this_01);
          local_68._1_1_ = uStack_97;
          local_68._0_1_ = local_98;
          local_68._2_1_ = uStack_96;
          local_68._3_1_ = uStack_95;
          local_68._4_4_ = uStack_94;
          local_88._0_8_ = local_b8[0];
          local_60 = local_90;
          local_78 = local_a8;
          pFStack_70 = pFStack_a0;
          local_b8[0] = (code *)0x0;
          local_58 = 2;
          pFVar15 = (FRenderCommandTag *)
                    TRenderCommandTag<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l2::<lambda_1>::operator()'::__l11::TSTR_FDynamicMeshSceneProxyFastUpdateVerticesBufferList570>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_88,pFVar15);
          uVar18 = (ulonglong)local_58;
          if (2 < uVar18) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L"");
            if (bVar10) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar18] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_88._0_8_ != (code *)0x0) {
              pppuVar17 = (undefined ***)(local_88 + 0x10);
              if (local_60 != (undefined ***)0x0) {
                pppuVar17 = local_60;
              }
              (*(code *)(*pppuVar17)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar18])(local_88);
          }
        }
        if (local_b8[0] != (code *)0x0) {
          pppuVar17 = &local_a8;
          if (local_90 != (undefined ***)0x0) {
            pppuVar17 = local_90;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// operator() @ 1496ff220

void __thiscall
`FDynamicMeshSceneProxy::InitializeByMaterial'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  
  lVar4 = **(longlong **)this;
  if ((-1 < param_1) && (param_1 < *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144))) {
    lVar2 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x148) + lVar2) +
                           (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar3 = *(uint *)(*(longlong *)
                         (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x20) + lVar2) +
                       (ulonglong)(param_1 & 0x1ff) * 4);
      if ((-1 < (int)uVar3) && ((int)uVar3 < **(int **)((longlong)this + 0x10))) {
        plVar5 = *(longlong **)((longlong)this + 0x18);
        uVar8 = 0;
        if ((int)uVar3 < (int)plVar5[1]) {
          uVar8 = ~uVar3 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        LOCK();
        piVar1 = (int *)(*plVar5 + (longlong)(int)uVar3 * 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
    }
  }
  return;
}

// operator() @ 1496ff320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FDynamicMeshSceneProxy::InitializeFromDecomposition'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  FMeshRenderBufferSet *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FGroup *pFVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  undefined1 auStackY_108 [32];
  code *local_a8 [2];
  code *local_98 [2];
  undefined **local_88;
  FMeshRenderBufferSet *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FMeshRenderBufferSet *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar6 = FMeshRenderDecomposition::GetGroup
                     ((FMeshRenderDecomposition *)**(undefined8 **)this,param_1);
  if (0 < (pFVar6->Triangles).ArrayNum) {
    lVar1 = *(longlong *)((longlong)this + 8);
    uVar5 = 0;
    if (param_1 < *(int *)(lVar1 + 0x4f0)) {
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
    pFVar2 = *(FMeshRenderBufferSet **)(*(longlong *)(lVar1 + 0x4e8) + (longlong)param_1 * 8);
    TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>::operator=
              (&pFVar2->Triangles,&pFVar6->Triangles);
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
                  ::Call;
    local_a8[1] = *(code **)((longlong)this + 0x30);
    FMeshRenderBufferSetConversionUtil::
    InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ((FMeshRenderBufferSetConversionUtil *)(*(longlong *)((longlong)this + 8) + 0x290),
               pFVar2,(FDynamicMesh3 *)**(undefined8 **)((longlong)this + 0x10),
               (pFVar6->Triangles).ArrayNum,&pFVar6->Triangles,
               *(TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 **)((longlong)this + 0x18),
               (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
               **(undefined8 **)((longlong)this + 0x20),
               (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)
               **(undefined8 **)((longlong)this + 0x28),
               (TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
                *)local_a8,false,false);
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4___R1_1__InitializeFromDecomposition_FDynamicMeshSceneProxy__QEAAXAEAV__TUniquePtr_VFMeshRenderDecomposition__U__TDefaultDelete_VFMeshRenderDecomposition_______Z_QEBA_H_Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FDynamicMeshSceneProxy::InitializeFromDecomposition'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_80 = pFVar2;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<__FDynamicMeshSceneProxy::InitializeFromDecomposition_::__l2::<lambda_1>::operator()_::__l5::TSTR_FDynamicMeshSceneProxyInitializeFromDecomposition179>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_58 = local_88;
      pFStack_50 = pFStack_80;
      local_48 = local_78;
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<``FDynamicMeshSceneProxy::InitializeFromDecomposition'::__l2::<lambda_1>::operator()'::__l5::TSTR_FDynamicMeshSceneProxyInitializeFromDecomposition179>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar7);
      uVar9 = (ulonglong)local_38;
      if (2 < uVar9) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          pppuVar8 = (undefined ***)(local_68 + 0x10);
          if (local_40 != (undefined ***)0x0) {
            pppuVar8 = local_40;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      pppuVar8 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar8 = local_70;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  return;
}

// operator() @ 149700960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FDynamicMeshSceneProxy::FastUpdateVertices'::__l27::<lambda_2>::operator()(void *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  FMeshRenderBufferSet *pFVar4;
  undefined8 uVar5;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar6;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar7;
  TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar13;
  undefined ***pppuVar14;
  ulonglong uVar15;
  undefined1 auStackY_158 [32];
  code *local_d8 [4];
  code *local_b8 [2];
  undefined **local_a8;
  FMeshRenderBufferSet *pFStack_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined ***local_90;
  undefined1 local_88 [16];
  undefined **local_78;
  FMeshRenderBufferSet *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  lVar3 = *(longlong *)this;
  uVar12 = 0;
  if (param_1 < *(int *)(lVar3 + 0x4f0)) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar4 = *(FMeshRenderBufferSet **)(*(longlong *)(lVar3 + 0x4e8) + (longlong)param_1 * 8);
  lpCriticalSection = &pFVar4->BuffersLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (pFVar4->TriangleCount != 0) {
      if ((pFVar4->Triangles).field0_0x0.TypedValue.ArrayMax == -1) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8713842508703989288>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshSceneProxy.h"
                            ,0x1d8,"Buffers->Triangles.IsSet()");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      else {
        bVar10 = *(bool *)*(undefined8 *)((longlong)this + 8);
        if (((bVar10 != false) || (**(char **)((longlong)this + 0x10) != '\0')) ||
           (**(char **)((longlong)this + 0x18) != '\0')) {
          lVar3 = *(longlong *)this;
          bVar1 = *(bool *)*(undefined8 *)((longlong)this + 0x18);
          bVar2 = *(bool *)*(undefined8 *)((longlong)this + 0x10);
          uVar5 = *(undefined8 *)((longlong)this + 0x38);
          pTVar6 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)
                   **(undefined8 **)((longlong)this + 0x30);
          pTVar7 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
                   **(undefined8 **)((longlong)this + 0x28);
          if ((pFVar4->Triangles).field0_0x0.TypedValue.ArrayMax == -1) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               );
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if ((pFVar4->Triangles).field0_0x0.TypedValue.ArrayMax == -1) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               );
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          local_d8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
                        ::Call;
          local_d8[1] = (code *)uVar5;
          FMeshRenderBufferSetConversionUtil::
          UpdateVertexBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>_>
                    ((FMeshRenderBufferSetConversionUtil *)(lVar3 + 0x290),pFVar4,
                     (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 0x20),
                     (pFVar4->Triangles).field0_0x0.TypedValue.ArrayNum,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar4->Triangles,pTVar7,pTVar6,
                     (TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
                      *)local_d8,bVar10,bVar2,bVar1);
        }
        if (**(char **)((longlong)this + 0x40) != '\0') {
          lVar3 = *(longlong *)this;
          pTVar8 = *(TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     **)((longlong)this + 0x48);
          if ((pFVar4->Triangles).field0_0x0.TypedValue.ArrayMax == -1) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               );
            if (bVar10) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if ((pFVar4->Triangles).field0_0x0.TypedValue.ArrayMax == -1) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               );
            if (bVar10) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          FMeshRenderBufferSetConversionUtil::
          UpdateVertexUVBufferFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                    ((FMeshRenderBufferSetConversionUtil *)(lVar3 + 0x290),pFVar4,
                     (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 0x20),
                     (pFVar4->Triangles).field0_0x0.TypedValue.ArrayNum,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar4->Triangles,pTVar8);
        }
        local_98 = **(undefined1 **)((longlong)this + 8);
        uStack_97 = **(undefined1 **)((longlong)this + 0x10);
        uStack_96 = **(undefined1 **)((longlong)this + 0x18);
        uStack_95 = **(undefined1 **)((longlong)this + 0x40);
        local_a8 = &
                   ___7__TFunction_OwnedObject_V<lambda_1>__7___R<lambda_2>__BL___FastUpdateVertices_FDynamicMeshSceneProxy__QEAAX_N000_Z_QEBA_H_Z__00_0A__Function_Private_Core_UE__6B_
        ;
        uStack_94 = local_d8[3]._4_4_;
        local_b8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l27::<lambda_2>::operator()'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
        local_90 = (undefined ***)0x0;
        pFStack_a0 = pFVar4;
        this_00 = FRenderCommandList::GetInstanceTLS();
        if (this_00 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<__FDynamicMeshSceneProxy::FastUpdateVertices_::__l27::<lambda_2>::operator()_::__l8::TSTR_FDynamicMeshSceneProxyFastUpdateVertices487>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
        }
        else {
          this_01 = FRenderCommandList::GetRenderThread(this_00);
          local_68._1_1_ = uStack_97;
          local_68._0_1_ = local_98;
          local_68._2_1_ = uStack_96;
          local_68._3_1_ = uStack_95;
          local_68._4_4_ = uStack_94;
          local_88._0_8_ = local_b8[0];
          local_60 = local_90;
          local_78 = local_a8;
          pFStack_70 = pFStack_a0;
          local_b8[0] = (code *)0x0;
          local_58 = 2;
          pFVar13 = (FRenderCommandTag *)
                    TRenderCommandTag<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l27::<lambda_2>::operator()'::__l8::TSTR_FDynamicMeshSceneProxyFastUpdateVertices487>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_88,pFVar13);
          uVar15 = (ulonglong)local_58;
          if (2 < uVar15) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L"");
            if (bVar10) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar15] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_88._0_8_ != (code *)0x0) {
              pppuVar14 = (undefined ***)(local_88 + 0x10);
              if (local_60 != (undefined ***)0x0) {
                pppuVar14 = local_60;
              }
              (*(code *)(*pppuVar14)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar15])(local_88);
          }
        }
        if (local_b8[0] != (code *)0x0) {
          pppuVar14 = &local_a8;
          if (local_90 != (undefined ***)0x0) {
            pppuVar14 = local_90;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CanBeOccluded @ 149704d60

bool __thiscall FDynamicMeshSceneProxy::CanBeOccluded(FDynamicMeshSceneProxy *this)

{
  return (bool)(~(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 2) & 1);
}

// FastUpdateAllIndexBuffers @ 14970b220

void __thiscall FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers(FDynamicMeshSceneProxy *this)

{
  undefined8 local_res8 [4];
  FDynamicMeshSceneProxy *local_38;
  undefined8 *local_30;
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FDynamicMeshSceneProxy **local_10;
  
  local_res8[0] = (**(code **)(this->ParentComponent->_padding_ + 0xd40))();
  FlushRenderingCommands();
  local_30 = local_res8;
  local_28.DataPtr = (void **)0x0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = &local_38;
  local_28.ArrayNum = 0;
  local_38 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->RenderBufferSets).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,local_res8[0]._0_1_,None,&local_28);
  return;
}

// FastUpdateIndexBuffers @ 14970b2c0

void __thiscall
FDynamicMeshSceneProxy::FastUpdateIndexBuffers
          (FDynamicMeshSceneProxy *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 local_res8;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  FDynamicMeshSceneProxy **local_30;
  FDynamicMeshSceneProxy *local_28;
  TArray<int,TSizedDefaultAllocator<32>_> *local_20;
  undefined8 *local_18;
  
  local_res8 = (**(code **)(this->ParentComponent->_padding_ + 0xd40))();
  FlushRenderingCommands();
  local_18 = &local_res8;
  local_48.DataPtr = (void **)0x0;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FDynamicMeshSceneProxy::FastUpdateIndexBuffers'::__l2::<lambda_1>,void,int>
             ::Call;
  local_30 = &local_28;
  local_48.ArrayNum = 0;
  local_28 = this;
  local_20 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_1->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_38,
             local_res8._0_1_,None,&local_48);
  return;
}

// FastUpdateVertices @ 14970b380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDynamicMeshSceneProxy::FastUpdateVertices
          (FDynamicMeshSceneProxy *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2,bool param_3,bool param_4,bool param_5)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  bool bVar13;
  char local_res18 [8];
  char local_res20 [8];
  undefined1 auStackY_178 [32];
  ForAnyElementType local_138;
  undefined8 local_130;
  <lambda_1> local_128;
  longlong local_120;
  TArray<int,TSizedDefaultAllocator<32>_> *local_118;
  ulonglong local_110;
  undefined8 local_108;
  TArrayView<std::nullptr_t,int> local_100;
  code *local_f0;
  TArray<int,TSizedDefaultAllocator<32>_> **local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_e0;
  FDynamicMeshSceneProxy *local_d8;
  char *local_d0;
  char *local_c8;
  bool *local_c0;
  longlong *local_b8;
  ulonglong *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  bool *local_98;
  ForAnyElementType *local_90;
  undefined1 local_88 [48];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar13 = -1 < CpuChannel->Enabled;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  local_118 = param_1;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FDynamicMeshSceneProxy::FastUpdateVertices(TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,bool,bool,bool,bool)___ptr64'
                ::__l2::__CpuProfilerEventSpecId504,"DynamicMeshProxy_FastUpdateVertices",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshSceneProxy.h"
               ,0x1f8);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FDynamicMeshSceneProxy::FastUpdateVertices(TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,bool,bool,bool,bool)___ptr64'
               ::__l2::__CpuProfilerEventSpecId504);
  }
  if ((((local_res18[0] == '\0') && (local_res20[0] == '\0')) && (param_4 == false)) &&
     (param_5 == false)) goto LAB_14970b834;
  local_120 = (**(code **)(this->ParentComponent->_padding_ + 0xd40))();
  uVar10 = 0;
  local_110 = 0;
  if (local_res20[0] != '\0') {
    lVar1 = *(longlong *)(local_120 + 0x208);
    if (lVar1 == 0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8713842508703989241>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshSceneProxy.h"
                         ,0x207,"Mesh->HasAttributes()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_110 = uVar10;
      if (0 < *(int *)(lVar1 + 0x38)) {
        local_110 = **(ulonglong **)(lVar1 + 0x30);
      }
    }
  }
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = 0;
  if (param_5 != false) {
    plVar6 = *(longlong **)(local_120 + 0x208);
    if (plVar6 == (longlong *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8713842508703989236>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshSceneProxy.h"
                         ,0x20c,"Mesh->HasAttributes()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      uVar4 = (**(code **)(*plVar6 + 0xa8))(plVar6);
      uVar7 = (ulonglong)(int)local_130;
      if ((int)local_130 < (int)uVar4) {
        iVar9 = uVar4 - (int)local_130;
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar9,&local_138,(int *)&local_130,(int *)((longlong)&local_130 + 4))
        ;
        memset(local_138.Data + (longlong)iVar5 * 8,0,(longlong)iVar9 << 3);
LAB_14970b619:
        uVar7 = local_130 & 0xffffffff;
      }
      else {
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
        }
        if ((int)uVar4 < (int)local_130) {
          uVar8 = (int)local_130 - uVar4;
          if ((int)(uVar4 | uVar8) < 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar7 = local_130 & 0xffffffff;
          }
          if (uVar8 != 0) {
            iVar9 = ((int)uVar7 - uVar8) - uVar4;
            iVar5 = (int)uVar7;
            if (iVar9 != 0) {
              memmove(local_138.Data + (longlong)(int)uVar4 * 8,
                      local_138.Data + (longlong)(int)uVar4 * 8 + (longlong)(int)uVar8 * 8,
                      (longlong)iVar9 << 3);
              iVar5 = (int)local_130;
            }
            local_130 = CONCAT44(local_130._4_4_,iVar5 - uVar8);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&local_138,iVar5 - uVar8,(int *)((longlong)&local_130 + 4));
            goto LAB_14970b619;
          }
        }
      }
      param_1 = local_118;
      uVar11 = uVar10;
      if (0 < (int)uVar7) {
        do {
          uVar12 = 0;
          iVar5 = (int)uVar7;
          uVar4 = (uint)uVar10;
          if (((int)uVar4 < (int)plVar6[5]) && (-1 < (int)uVar4)) {
            if ((int)uVar4 < 0) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar5 = (int)local_130;
            }
            uVar12 = *(undefined8 *)(uVar11 + plVar6[4]);
          }
          uVar8 = 0;
          if ((int)uVar4 < iVar5) {
            uVar8 = ~uVar4 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar10 = (ulonglong)(uVar4 + 1);
          *(undefined8 *)(local_138.Data + uVar11) = uVar12;
          uVar7 = local_130 & 0xffffffff;
          param_1 = local_118;
          uVar11 = uVar11 + 8;
        } while ((int)(uVar4 + 1) < (int)local_130);
      }
    }
  }
  local_108 = 0;
  if (param_4 != false) {
    if (*(longlong *)(local_120 + 0x208) == 0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8713842508703989226>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshSceneProxy.h"
                         ,0x216,"Mesh->HasAttributes()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_108 = *(undefined8 *)(*(longlong *)(local_120 + 0x208) + 0x40);
    }
  }
  MakeTangentsFunc(this,(TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
                         *)local_88,true);
  local_d0 = local_res18;
  local_c8 = local_res20;
  local_c0 = &param_4;
  local_b8 = &local_120;
  local_100.DataPtr = (void **)0x0;
  local_b0 = &local_110;
  local_a8 = &local_108;
  local_a0 = local_88;
  local_98 = &param_5;
  local_90 = &local_138;
  local_f0 = UE::Core::Private::Function::
             TFunctionRefCaller<`FDynamicMeshSceneProxy::FastUpdateVertices'::__l2::<lambda_1>,void,int>
             ::Call;
  local_e8 = &local_e0;
  local_100.ArrayNum = 0;
  local_e0 = param_1;
  local_d8 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_1->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_f0,
             local_128,None,&local_100);
  if (local_88._0_8_ != 0) {
    plVar6 = (longlong *)(local_88 + 0x10);
    if ((longlong *)local_88._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_88._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
LAB_14970b834:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FastUpdateVertices @ 14970b890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDynamicMeshSceneProxy::FastUpdateVertices
          (FDynamicMeshSceneProxy *this,bool param_1,bool param_2,bool param_3,bool param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FDynamicMeshAttributeSet *pFVar1;
  FMeshRenderBufferSet *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
  FVar8;
  undefined ***pppuVar9;
  longlong *plVar10;
  uint uVar11;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar12;
  ulonglong uVar13;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar14;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar15;
  bool local_res10 [8];
  bool local_res18 [8];
  bool local_res20 [8];
  undefined1 auStackY_268 [32];
  <lambda_1> local_208;
  FDynamicMesh3 *local_200;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_1f8;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *local_1f0;
  IndexEnumerable local_1e8;
  IndexEnumerable local_1e0;
  code *local_1d8;
  undefined1 *local_1d0;
  TArrayView<std::nullptr_t,int> local_1c8;
  code *local_1b8;
  FDynamicMeshSceneProxy **local_1b0;
  FDynamicMeshSceneProxy *local_1a8;
  bool *local_1a0;
  bool *local_198;
  bool *local_190;
  FDynamicMesh3 **local_188;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **local_180;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> **local_178;
  undefined1 *local_170;
  bool *local_168;
  TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *local_160;
  undefined4 local_14c;
  code *local_148 [2];
  undefined **local_138;
  FMeshRenderBufferSet *pFStack_130;
  undefined1 local_128;
  char cStack_127;
  char cStack_126;
  undefined1 uStack_125;
  undefined4 uStack_124;
  undefined ***local_120;
  undefined1 local_118 [16];
  undefined **local_108;
  FMeshRenderBufferSet *pFStack_100;
  undefined8 local_f8;
  undefined ***local_f0;
  byte local_e8;
  TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_d8;
  undefined1 local_88 [48];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  local_200 = (FDynamicMesh3 *)(**(code **)(this->ParentComponent->_padding_ + 0xd40))();
  pTVar14 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  local_1f8 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  if (local_res18[0] != false) {
    pFVar1 = (local_200->AttributeSet).Ptr;
    if (pFVar1 == (FDynamicMeshAttributeSet *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8713842508703989348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshSceneProxy.h"
                         ,0x19c,"Mesh->HasAttributes()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      local_1f8 = pTVar14;
      if (0 < (pFVar1->NormalLayers).Array.ArrayNum) {
        local_1f8 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                     (pFVar1->NormalLayers).Array.AllocatorInstance.Data;
      }
    }
  }
  local_d8.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
        )0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 8;
  if (param_4 != false) {
    pFVar1 = (local_200->AttributeSet).Ptr;
    if (pFVar1 == (FDynamicMeshAttributeSet *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8713842508703989343>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshSceneProxy.h"
                         ,0x1a1,"Mesh->HasAttributes()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      iVar5 = (**(code **)(pFVar1->_padding_ + 0xa8))(pFVar1);
      TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
      ::SetNum(&local_d8,iVar5,Default);
      pTVar12 = pTVar14;
      pTVar15 = pTVar14;
      if (0 < local_d8.ArrayNum) {
        do {
          uVar11 = (uint)pTVar12;
          pTVar12 = pTVar14;
          if (((int)uVar11 < (pFVar1->UVLayers).Array.ArrayNum) && (-1 < (int)uVar11)) {
            if (((int)uVar11 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pTVar12 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                       (&pTVar15->field_0x0 +
                       (longlong)(pFVar1->UVLayers).Array.AllocatorInstance.Data);
          }
          uVar6 = 0;
          if ((int)uVar11 < local_d8.ArrayNum) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar8 = (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                   )&local_d8;
          if (local_d8.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
               )0x0) {
            FVar8 = local_d8.AllocatorInstance.SecondaryData;
          }
          *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
           (&pTVar15->field_0x0 + (longlong)FVar8) = pTVar12;
          pTVar12 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
                    (ulonglong)(uVar11 + 1);
          pTVar15 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
                    &pTVar15->field_0x8;
        } while ((int)(uVar11 + 1) < local_d8.ArrayNum);
      }
    }
  }
  local_1f0 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
  if (local_res20[0] != false) {
    pFVar1 = (local_200->AttributeSet).Ptr;
    if (pFVar1 == (FDynamicMeshAttributeSet *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8713842508703989333>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshSceneProxy.h"
                         ,0x1ab,"Mesh->HasAttributes()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      local_1f0 = (pFVar1->ColorLayer).Ptr;
    }
  }
  MakeTangentsFunc(this,(TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
                         *)local_88,true);
  iVar5 = (this->RenderBufferSets).ArrayNum;
  if (this->bIsSingleBuffer == false) {
    local_1a0 = local_res10;
    local_198 = local_res18;
    local_1c8.DataPtr = (void **)0x0;
    local_190 = local_res20;
    local_1c8.ArrayNum = 0;
    local_188 = &local_200;
    local_180 = &local_1f8;
    local_178 = &local_1f0;
    local_170 = local_88;
    local_168 = &param_4;
    local_160 = &local_d8;
    local_1b8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FDynamicMeshSceneProxy::FastUpdateVertices'::__l27::<lambda_2>,void,int>
                ::Call;
    local_1b0 = &local_1a8;
    local_1a8 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_1b8,local_208,
               None,&local_1c8);
  }
  else if (iVar5 == 1) {
    pFVar2 = *(FMeshRenderBufferSet **)(this->RenderBufferSets).AllocatorInstance.Data;
    lpCriticalSection = &pFVar2->BuffersLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((local_res10[0] != false) || (local_res18[0] != false)) || (local_res20[0] != false)) {
      local_1e8.Vector = &local_200->TriangleRefCounts;
      local_1d8 = UE::Core::Private::Function::
                  TFunctionRefCaller<TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
                  ::Call;
      local_1d0 = local_88;
      FMeshRenderBufferSetConversionUtil::
      UpdateVertexBuffersFromOverlays<UE::Geometry::FRefCountVector::IndexEnumerable>
                ((FMeshRenderBufferSetConversionUtil *)&this->field_0x290,pFVar2,local_200,
                 (local_200->TriangleRefCounts).UsedCount,&local_1e8,local_1f8,local_1f0,
                 (TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
                  *)&local_1d8,local_res10[0],local_res18[0],local_res20[0]);
    }
    if (param_4 != false) {
      local_1e0.Vector = &local_200->TriangleRefCounts;
      FMeshRenderBufferSetConversionUtil::
      UpdateVertexUVBufferFromOverlays<UE::Geometry::FRefCountVector::IndexEnumerable,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                ((FMeshRenderBufferSetConversionUtil *)&this->field_0x290,pFVar2,local_200,
                 (local_200->TriangleRefCounts).UsedCount,&local_1e0,&local_d8);
    }
    uStack_125 = param_4;
    uStack_124 = local_14c;
    local_148[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FDynamicMeshSceneProxy::FastUpdateVertices'::__l19::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
    local_120 = (undefined ***)0x0;
    local_138 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__BD___FastUpdateVertices_FDynamicMeshSceneProxy__QEAAX_N000_Z__00_0A__Function_Private_Core_UE__6B_
    ;
    pFStack_130 = pFVar2;
    local_128 = local_res10[0];
    cStack_127 = local_res18[0];
    cStack_126 = local_res20[0];
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FDynamicMeshSceneProxy::FastUpdateVertices_::__l19::TSTR_FDynamicMeshSceneProxyFastUpdateVertices455>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_148);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_f8._1_1_ = cStack_127;
      local_f8._0_1_ = local_128;
      local_f8._2_1_ = cStack_126;
      local_f8._3_1_ = uStack_125;
      local_f8._4_4_ = uStack_124;
      local_118._0_8_ = local_148[0];
      local_f0 = local_120;
      local_108 = local_138;
      pFStack_100 = pFStack_130;
      local_148[0] = (code *)0x0;
      local_e8 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`FDynamicMeshSceneProxy::FastUpdateVertices'::__l19::TSTR_FDynamicMeshSceneProxyFastUpdateVertices455>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_118,pFVar7);
      uVar13 = (ulonglong)local_e8;
      if ((2 < uVar13) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_118._0_8_ != (code *)0x0) {
          pppuVar9 = (undefined ***)(local_118 + 0x10);
          if (local_f0 != (undefined ***)0x0) {
            pppuVar9 = local_f0;
          }
          (*(code *)(*pppuVar9)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])(local_118);
      }
    }
    if (local_148[0] != (code *)0x0) {
      pppuVar9 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar9 = local_120;
      }
      (*(code *)(*pppuVar9)[2])();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8713842508703989323>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshSceneProxy.h"
                       ,0x1b5,"RenderBufferSets.Num() == 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_88._0_8_ != 0) {
    plVar10 = (longlong *)(local_88 + 0x10);
    if ((longlong *)local_88._40_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_88._40_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (local_d8.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
       )0x0) {
    FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
  }
  return;
}

// GetActiveRenderBufferSets @ 14970e5b0

void __thiscall
FDynamicMeshSceneProxy::GetActiveRenderBufferSets
          (FDynamicMeshSceneProxy *this,
          TArray<FMeshRenderBufferSet_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (param_1 != &this->RenderBufferSets) {
    _Src = (this->RenderBufferSets).AllocatorInstance.Data;
    iVar1 = (this->RenderBufferSets).ArrayNum;
    param_1->ArrayNum = iVar1;
    if ((iVar1 == 0) && (param_1->ArrayMax == 0)) {
      param_1->ArrayMax = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,param_1->ArrayMax,&param_1->AllocatorInstance,iVar1,&param_1->ArrayMax);
    if (iVar1 != 0) {
      memcpy((param_1->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}

// GetLightRelevance @ 149710670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FDynamicMeshSceneProxy::GetLightRelevance
          (FDynamicMeshSceneProxy *this,FLightSceneProxy *param_1,bool *param_2,bool *param_3,
          bool *param_4,bool *param_5)

{
  *param_2 = true;
  *param_3 = true;
  *param_4 = false;
  *param_5 = false;
  return;
}

// GetMemoryFootprint @ 149710c30

uint __thiscall FDynamicMeshSceneProxy::GetMemoryFootprint(FDynamicMeshSceneProxy *this)

{
  return *(int *)&this->field_0x104 * 4 + 0x510;
}

// GetTypeHash @ 149711940

ulong64 __thiscall FDynamicMeshSceneProxy::GetTypeHash(FDynamicMeshSceneProxy *this)

{
  return 0x155285368;
}

// GetViewRelevance @ 149711c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FDynamicMeshSceneProxy::GetViewRelevance
          (FDynamicMeshSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  FSceneViewFamily *pFVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  bool local_res8 [8];
  bool local_res10 [8];
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar4 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 2;
  bVar4 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 3;
  if (this->field_0x3cb != '\0') {
    bVar4 = AllowDebugViewmodes();
    if (!bVar4) {
LAB_149711d4c:
      uVar7 = 1;
      goto LAB_149711d55;
    }
    pFVar3 = param_1->Family;
    cVar5 = (**(code **)(**(longlong **)&this->field_0x280 + 0xb78))();
    if (((pFVar3->EngineShowFlags).Wireframe == 0) && (cVar5 == '\0')) {
      local_res8[0] = false;
      bVar4 = FBaseDynamicMeshSceneProxy::IsCollisionView
                        ((FBaseDynamicMeshSceneProxy *)this,&pFVar3->EngineShowFlags,local_res8,
                         local_res10);
      if ((((pFVar3->EngineShowFlags).Collision == 0) || ((this->field_0x7b & 0x20) == 0)) &&
         ((((local_res8[0] == false && (!bVar4)) &&
           (((this->field_0x79 & 6) == 0 || ((pFVar3->EngineShowFlags).VertexColors == 0)))) &&
          (*(char *)(*(longlong *)&this->field_0x280 + 0x5c4) == '\0')))) goto LAB_149711d4c;
    }
  }
  uVar7 = 0;
LAB_149711d55:
  puVar2 = &__return_storage_ptr__->field_0x8;
  uVar6 = (uVar7 ^ 1) * 2 | *(uint *)&__return_storage_ptr__->field_0x8 & 0xfffffffd;
  uVar6 = (uVar6 ^ uVar7) & 1 ^ uVar6;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar6;
  uVar6 = ((uint)(byte)this->field_0x7b << 4 ^ uVar6) & 0x80 ^ uVar6;
  *(uint *)puVar2 = uVar6;
  uVar7 = 0;
  if (this->field_0x89 != '\x01') {
    uVar7 = 0x2000;
  }
  uVar7 = uVar7 | uVar6 & 0xffffdfff;
  *(uint *)puVar2 = uVar7;
  *(uint *)puVar2 = ((uint)(byte)this->field_0x7f << 0xe ^ uVar7) & 0x4000 ^ uVar7;
  bVar4 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)puVar2 = *(uint *)puVar2 | (uint)bVar4 << 5;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  if (((((this->field_0x68 == '\x02') || (this->field_0x68 == '\x01')) ||
       ((this->field_0x86 & 1) != 0)) ||
      (((char)this->field_0x82 < '\0' || (uVar7 = 0, (this->field_0x82 & 0x72) != 0)))) &&
     ((uVar7 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar7 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = uVar7 >> 4;
  return __return_storage_ptr__;
}

// Initialize @ 149712750

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FDynamicMeshSceneProxy::Initialize(FDynamicMeshSceneProxy *this)

{
  TArray<FMeshRenderBufferSet_*,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMeshRenderBufferSet *pFVar5;
  UMaterial *pUVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  this_00 = &this->RenderBufferSets;
  if (((this->RenderBufferSets).ArrayNum != 0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8713842508703989702>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshSceneProxy.h"
                         ,0x3a,"RenderBufferSets.Num() == 0"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (**(code **)(**(longlong **)&this->field_0x280 + 0x810))();
  if (iVar4 == 0) {
    TArray<FMeshRenderBufferSet_*,TSizedDefaultAllocator<32>_>::SetNum(this_00,1,Default);
    pFVar5 = FBaseDynamicMeshSceneProxy::AllocateNewRenderBufferSet
                       ((FBaseDynamicMeshSceneProxy *)this);
    if (((this->RenderBufferSets).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(FMeshRenderBufferSet **)(this_00->AllocatorInstance).Data = pFVar5;
    pUVar6 = UMaterial::GetDefaultMaterial(MD_Surface);
    if (((this->RenderBufferSets).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(UMaterial **)(*(longlong *)(this_00->AllocatorInstance).Data + 0x3d8) = pUVar6;
  }
  else {
    TArray<FMeshRenderBufferSet_*,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar4,Default);
    uVar9 = 0;
    if (0 < iVar4) {
      lVar7 = 0;
      do {
        pFVar5 = FBaseDynamicMeshSceneProxy::AllocateNewRenderBufferSet
                           ((FBaseDynamicMeshSceneProxy *)this);
        uVar8 = 0;
        if ((int)uVar9 < (this->RenderBufferSets).ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(FMeshRenderBufferSet **)((this_00->AllocatorInstance).Data + lVar7 * 8) = pFVar5;
        pUVar6 = (UMaterial *)
                 (**(code **)(**(longlong **)&this->field_0x280 + 0x690))
                           (*(longlong **)&this->field_0x280,uVar9);
        if (pUVar6 == (UMaterial *)0x0) {
          pUVar6 = UMaterial::GetDefaultMaterial(MD_Surface);
        }
        uVar8 = 0;
        if ((int)uVar9 < (this->RenderBufferSets).ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar9 = uVar9 + 1;
        lVar1 = lVar7 * 8;
        lVar7 = lVar7 + 1;
        *(UMaterial **)(*(longlong *)((this_00->AllocatorInstance).Data + lVar1) + 0x3d8) = pUVar6;
      } while (lVar7 < iVar4);
    }
  }
  lVar7 = (**(code **)(this->ParentComponent->_padding_ + 0xd40))();
  if (((*(longlong *)(lVar7 + 0x208) != 0) &&
      (*(longlong *)(*(longlong *)(lVar7 + 0x208) + 0x48) != 0)) && (1 < iVar4)) {
    this->bIsSingleBuffer = false;
    InitializeByMaterial(this,this_00);
    FBaseDynamicMeshSceneProxy::UpdateLumenCardsFromBounds((FBaseDynamicMeshSceneProxy *)this);
    return;
  }
  this->bIsSingleBuffer = true;
  if (((this->RenderBufferSets).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  InitializeSingleBufferSet(this,*(FMeshRenderBufferSet **)(this_00->AllocatorInstance).Data);
  FBaseDynamicMeshSceneProxy::UpdateLumenCardsFromBounds((FBaseDynamicMeshSceneProxy *)this);
  return;
}

// InitializeByMaterial @ 149712a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDynamicMeshSceneProxy::InitializeByMaterial
          (FDynamicMeshSceneProxy *this,
          TArray<FMeshRenderBufferSet_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  short sVar4;
  FDynamicMeshAttributeSet *pFVar5;
  FMeshRenderBufferSet *pFVar6;
  code *pcVar7;
  longlong lVar8;
  FDynamicMesh3 *pFVar9;
  bool bVar10;
  int iVar11;
  FDynamicMeshAttributeSet *pFVar12;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar13;
  ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
  FVar14;
  undefined ***pppuVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  FDynamicMeshAttributeSet *pFVar19;
  ulong64 uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  FDynamicMeshAttributeSet *pFVar23;
  uint uVar24;
  ForAnyElementType FVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  undefined1 auStackY_248 [32];
  <lambda_1> local_1e8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_1e0;
  uint local_1d0;
  uint local_1cc;
  ForAnyElementType local_1c8;
  uint local_1c0;
  int local_1bc;
  FDynamicMesh3 *local_1b8;
  TDynamicMeshScalarTriangleAttribute<int> *local_1b0;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_1a8;
  TArray<FMeshRenderBufferSet_*,TSizedDefaultAllocator<32>_> *local_1a0;
  FDynamicMeshSceneProxy *local_198;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *local_190;
  TArrayView<std::nullptr_t,int> local_188;
  code *local_178;
  FDynamicMesh3 ***local_170;
  code *local_168;
  undefined1 *local_160;
  FDynamicMesh3 **local_158;
  TDynamicMeshScalarTriangleAttribute<int> **local_150;
  uint *local_148;
  ForAnyElementType *local_140;
  code *local_138 [2];
  undefined **local_128;
  FMeshRenderBufferSet *pFStack_120;
  undefined8 local_118;
  undefined ***local_110;
  undefined1 local_108 [16];
  undefined **local_f8;
  FMeshRenderBufferSet *pFStack_f0;
  undefined8 local_e8;
  undefined ***local_e0;
  byte local_d8;
  TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_c8;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1a0 = param_1;
  local_198 = this;
  local_1b8 = (FDynamicMesh3 *)(**(code **)(this->ParentComponent->_padding_ + 0xd40))();
  pFVar5 = (local_1b8->AttributeSet).Ptr;
  if ((pFVar5 == (FDynamicMeshAttributeSet *)0x0) ||
     ((pFVar5->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8713842508703989519>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshSceneProxy.h"
                        ,0xf1,"Mesh->HasAttributes() && Mesh->Attributes()->HasMaterialID()");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    local_1b0 = (pFVar5->MaterialIDAttrib).Ptr;
    pFVar23 = (local_1b8->AttributeSet).Ptr;
    pFVar19 = (FDynamicMeshAttributeSet *)0x0;
    pFVar12 = pFVar19;
    if (pFVar23 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar12 = pFVar23;
    }
    if ((pFVar12->NormalLayers).Array.ArrayNum < 1) {
      local_1a8 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    }
    else {
      local_1a8 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                   (pFVar12->NormalLayers).Array.AllocatorInstance.Data;
    }
    pFVar12 = pFVar19;
    if (pFVar23 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar12 = pFVar23;
    }
    local_190 = (pFVar12->ColorLayer).Ptr;
    local_c8.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
          )0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 8;
    iVar11 = (**(code **)(pFVar5->_padding_ + 0xa8))(pFVar5);
    TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
    ::SetNum(&local_c8,iVar11,Default);
    pFVar23 = pFVar19;
    if (0 < local_c8.ArrayNum) {
      do {
        uVar28 = 0;
        uVar24 = (uint)pFVar19;
        if (((int)uVar24 < (pFVar5->UVLayers).Array.ArrayNum) && (-1 < (int)uVar24)) {
          if (((int)uVar24 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar28 = *(undefined8 *)
                    ((longlong)&pFVar23->_padding_ +
                    (longlong)(pFVar5->UVLayers).Array.AllocatorInstance.Data);
        }
        uVar17 = 0;
        if ((int)uVar24 < local_c8.ArrayNum) {
          uVar17 = ~uVar24 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar14 = (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                  )&local_c8;
        if (local_c8.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
             )0x0) {
          FVar14 = local_c8.AllocatorInstance.SecondaryData;
        }
        pFVar19 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar24 + 1);
        *(undefined8 *)((longlong)&pFVar23->_padding_ + (longlong)FVar14) = uVar28;
        pFVar23 = (FDynamicMeshAttributeSet *)&pFVar23->_padding_;
      } while ((int)(uVar24 + 1) < local_c8.ArrayNum);
    }
    uVar20 = 0;
    MakeTangentsFunc(this,(TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
                           *)local_78,false);
    uVar24 = param_1->ArrayNum;
    local_1c0 = 0;
    local_1c8.Data = (FScriptContainerElement *)0x0;
    local_1bc = 0;
    local_1d0 = uVar24;
    if ((int)uVar24 < 1) {
      uVar27 = uVar20;
      if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
      }
    }
    else {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar24,&local_1c8,(int *)&local_1c0,&local_1bc);
      DefaultConstructItems<FThreadSafeCounter,int>(local_1c8.Data + (longlong)iVar11 * 4,uVar24);
      uVar27 = (ulonglong)local_1c0;
    }
    uVar22 = uVar20;
    if (0 < (int)local_1d0) {
      while( true ) {
        uVar17 = (uint)uVar22;
        uVar24 = 0;
        if ((int)uVar17 < (int)uVar27) {
          uVar24 = ~uVar17 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        LOCK();
        *(undefined4 *)(local_1c8.Data + (longlong)(int)uVar17 * 4) = 0;
        UNLOCK();
        if ((int)local_1d0 <= (int)(uVar17 + 1)) break;
        uVar27 = (ulonglong)local_1c0;
        uVar22 = (ulonglong)(uVar17 + 1);
      }
    }
    local_158 = &local_1b8;
    local_188.DataPtr = (void **)0x0;
    local_178 = UE::Core::Private::Function::
                TFunctionRefCaller<`FDynamicMeshSceneProxy::InitializeByMaterial'::__l2::<lambda_1>,void,int>
                ::Call;
    local_150 = &local_1b0;
    local_170 = &local_158;
    local_148 = &local_1d0;
    local_140 = &local_1c8;
    local_188.ArrayNum = 0;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               (local_1b8->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (local_1b8->TriangleRefCounts).RefCounts.CurBlockUsed,1,
               (TFunctionRef<void___cdecl(int)> *)&local_178,local_1e8[0],None,&local_188);
    uVar24 = local_1c0;
    pFVar3 = local_1c8.Data + (longlong)(int)local_1c0 * 4;
    FVar25.Data = local_1c8.Data;
    while( true ) {
      if (local_1c0 != uVar24) {
        local_1e8[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<FThreadSafeCounter,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1e8);
      }
      iVar11 = (int)uVar20;
      if (FVar25.Data == pFVar3) break;
      if (iVar11 < (int)*(uint *)FVar25.Data) {
        uVar20 = (ulong64)*(uint *)FVar25.Data;
      }
      FVar25.Data = FVar25.Data + 4;
    }
    uVar27 = 0;
    local_1e0.ArrayNum = 0;
    local_1e0.ArrayMax = 0;
    local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar20);
    }
    if (0 < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar11,&local_1e0.AllocatorInstance,0,&local_1e0.ArrayMax);
    }
    uVar22 = uVar27;
    if (0 < (int)local_1d0) {
      do {
        uVar17 = (uint)uVar22;
        uVar24 = 0;
        if ((int)uVar17 < (int)local_1c0) {
          uVar24 = ~uVar17 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (0 < *(int *)(local_1c8.Data + uVar27 * 4)) {
          uVar24 = 0;
          if ((int)uVar17 < param_1->ArrayNum) {
            uVar24 = ~uVar17 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar10 = (longlong)local_1e0._8_8_ < 0;
          pFVar6 = *(FMeshRenderBufferSet **)((param_1->AllocatorInstance).Data + uVar27 * 8);
          local_1e0._8_8_ = local_1e0._8_8_ & 0xffffffff00000000;
          uVar22 = 0;
          if (bVar10) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_1e0.AllocatorInstance,0,&local_1e0.ArrayMax);
            uVar22 = local_1e0._8_8_ & 0xffffffff;
          }
          pFVar9 = local_1b8;
          iVar11 = (int)uVar22;
          uVar24 = (local_1b8->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (local_1b8->TriangleRefCounts).RefCounts.CurBlockUsed;
          uVar21 = 0;
          if ((uVar24 == 0) ||
             (pFVar3 = (local_1b8->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
             uVar21 = 0, (ushort)(**(short **)pFVar3 - 1U) < 0xfffe)) {
LAB_149712f67:
            uVar18 = (uint)uVar21;
          }
          else {
            uVar21 = 1;
            uVar18 = 1;
            if (1 < (int)uVar24) {
              do {
                sVar4 = *(short *)(*(longlong *)(pFVar3 + (uVar21 >> 9) * 8) +
                                  (ulonglong)((uint)uVar21 & 0x1ff) * 2);
                if ((sVar4 != 0) && (sVar4 != -1)) break;
                uVar18 = (uint)uVar21 + 1;
                uVar21 = (ulonglong)uVar18;
              } while ((int)uVar18 < (int)uVar24);
              goto LAB_149712f67;
            }
          }
joined_r0x000149712f69:
          if (uVar18 != uVar24) {
            while( true ) {
              uVar18 = (uint)uVar21;
              local_1cc = uVar18;
              if (*(uint *)(*(longlong *)(*(longlong *)&local_1b0->field_0x20 + (uVar21 >> 9) * 8) +
                           (ulonglong)(uVar18 & 0x1ff) * 4) == uVar17) {
                iVar11 = (int)uVar22;
                if ((local_1e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1cc) &&
                   ((FScriptContainerElement *)&local_1cc <
                    local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 4)) {
                  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar10) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar11 = local_1e0.ArrayNum;
                }
                if (iVar11 == local_1e0.ArrayMax) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
                }
                local_1e0.ArrayNum = iVar11 + 1U;
                *(uint *)(local_1e0.AllocatorInstance.Data + (longlong)iVar11 * 4) = local_1cc;
                uVar22 = (ulonglong)(iVar11 + 1U);
              }
              iVar11 = (int)uVar22;
              uVar18 = uVar18 + 1;
              uVar21 = (ulonglong)uVar18;
              if ((int)uVar24 <= (int)uVar18) break;
              while( true ) {
                lVar8 = (ulonglong)((uint)uVar21 & 0x1ff) * 2;
                lVar26 = *(longlong *)
                          ((pFVar9->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                          (uVar21 >> 9) * 8);
                if ((*(short *)(lVar8 + lVar26) != 0) && (*(short *)(lVar8 + lVar26) != -1)) break;
                uVar18 = (uint)uVar21 + 1;
                uVar21 = (ulonglong)uVar18;
                if ((int)uVar24 <= (int)uVar18) goto joined_r0x000149712f69;
              }
            }
            goto joined_r0x000149712f69;
          }
          local_168 = UE::Core::Private::Function::
                      TFunctionRefCaller<TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
                      ::Call;
          local_160 = local_78;
          FMeshRenderBufferSetConversionUtil::
          InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                    ((FMeshRenderBufferSetConversionUtil *)&local_198->field_0x290,pFVar6,local_1b8,
                     iVar11,&local_1e0,&local_c8,local_1a8,local_190,
                     (TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
                      *)&local_168,false,true);
          pTVar2 = &pFVar6->Triangles;
          if (&local_1e0 != (TArray<int,TSizedDefaultAllocator<32>_> *)pTVar2) {
            pFVar3 = (pTVar2->field0_0x0).TypedValue.AllocatorInstance.Data;
            if (pFVar3 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar3);
            }
            FVar25.Data = local_1e0.AllocatorInstance.Data;
            (pTVar2->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            piVar1 = &(pFVar6->Triangles).field0_0x0.TypedValue.ArrayMax;
            lVar26 = (longlong)local_1e0.ArrayNum;
            (pFVar6->Triangles).field0_0x0.TypedValue.ArrayNum = local_1e0.ArrayNum;
            if (local_1e0.ArrayNum == 0) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_1e0.ArrayNum,0,(ForAnyElementType *)pTVar2,local_1e0.ArrayNum,
                         piVar1);
              memcpy((pTVar2->field0_0x0).TypedValue.AllocatorInstance.Data,FVar25.Data,lVar26 << 2)
              ;
            }
            if ((*piVar1 == -1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x171,
                                    L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                   ), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          local_128 = &
                      ___7__TFunction_OwnedObject_V<lambda_2>__BC___InitializeByMaterial_FDynamicMeshSceneProxy__QEAAXAEAV__TArray_PEAVFMeshRenderBufferSet__V__TSizedDefaultAllocator__0CA______Z__00_0A__Function_Private_Core_UE__6B_
          ;
          local_110 = (undefined ***)0x0;
          local_138[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FDynamicMeshSceneProxy::InitializeByMaterial'::__l18::<lambda_2>,void,FRHICommandListImmediate_&>
                         ::Call;
          pFStack_120 = pFVar6;
          this_00 = FRenderCommandList::GetInstanceTLS();
          if (this_00 == (FRenderCommandList *)0x0) {
            FRenderThreadCommandPipe::
            Enqueue<TRenderCommandTag<_FDynamicMeshSceneProxy::InitializeByMaterial_::__l18::TSTR_FDynamicMeshSceneProxyInitializeByMaterial321>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_138);
          }
          else {
            this_01 = FRenderCommandList::GetRenderThread(this_00);
            local_108._0_8_ = local_138[0];
            local_e0 = local_110;
            local_110 = (undefined ***)0x0;
            local_f8 = local_128;
            pFStack_f0 = pFStack_120;
            local_e8 = local_118;
            local_138[0] = (code *)0x0;
            local_d8 = 2;
            pFVar13 = (FRenderCommandTag *)
                      TRenderCommandTag<`FDynamicMeshSceneProxy::InitializeByMaterial'::__l18::TSTR_FDynamicMeshSceneProxyInitializeByMaterial321>
                      ::Get();
            UE::RenderCommandPipe::FCommandList::Enqueue
                      (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                *)local_108,pFVar13);
            uVar22 = (ulonglong)local_d8;
            if ((2 < uVar22) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                    ,0xd4,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar22] ==
                UE::Core::Private::
                TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                Destruct) {
              if ((code *)local_108._0_8_ != (code *)0x0) {
                pppuVar15 = (undefined ***)(local_108 + 0x10);
                if (local_e0 != (undefined ***)0x0) {
                  pppuVar15 = local_e0;
                }
                (*(code *)(*pppuVar15)[2])();
              }
            }
            else {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar22])(local_108);
            }
          }
          param_1 = local_1a0;
          if (local_138[0] != (code *)0x0) {
            pppuVar15 = &local_128;
            if (local_110 != (undefined ***)0x0) {
              pppuVar15 = local_110;
            }
            (*(code *)(*pppuVar15)[2])();
            param_1 = local_1a0;
          }
        }
        uVar27 = uVar27 + 1;
        uVar22 = (ulonglong)(uVar17 + 1);
      } while ((int)(uVar17 + 1) < (int)local_1d0);
    }
    if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.AllocatorInstance.Data);
    }
    if (local_1c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
    if (local_78._0_8_ != 0) {
      plVar16 = (longlong *)(local_78 + 0x10);
      if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_78._40_8_;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (local_c8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
         )0x0) {
      FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// InitializeFromDecomposition @ 1497133f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDynamicMeshSceneProxy::InitializeFromDecomposition
          (FDynamicMeshSceneProxy *this,
          TUniquePtr<FMeshRenderDecomposition,TDefaultDelete<FMeshRenderDecomposition>_> *param_1)

{
  TArray<FMeshRenderBufferSet_*,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FMeshRenderDecomposition *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMeshRenderBufferSet *pFVar7;
  UMaterial *pUVar8;
  uint uVar9;
  ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
  FVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined1 auStackY_198 [32];
  <lambda_1> local_158;
  longlong local_140;
  longlong *local_138;
  longlong local_130;
  TArrayView<std::nullptr_t,int> local_128;
  code *local_118;
  TUniquePtr<FMeshRenderDecomposition,TDefaultDelete<FMeshRenderDecomposition>_> **local_110;
  TUniquePtr<FMeshRenderDecomposition,TDefaultDelete<FMeshRenderDecomposition>_> *local_108;
  FDynamicMeshSceneProxy *local_100;
  longlong *local_f8;
  TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *local_f0;
  longlong **local_e8;
  longlong *local_e0;
  undefined1 *local_d8;
  TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_d0;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this_00 = &this->RenderBufferSets;
  if (((this->RenderBufferSets).ArrayNum != 0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8713842508703989623>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshSceneProxy.h"
                         ,0x89,"RenderBufferSets.Num() == 0"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = (param_1->Ptr->Groups).ArrayNum;
  TArray<FMeshRenderBufferSet_*,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar1,Default);
  uVar12 = 0;
  if (0 < iVar1) {
    lVar17 = 0;
    lVar16 = 0;
    do {
      pFVar7 = FBaseDynamicMeshSceneProxy::AllocateNewRenderBufferSet
                         ((FBaseDynamicMeshSceneProxy *)this);
      uVar13 = ~uVar12 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar12 < (this->RenderBufferSets).ArrayNum) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(FMeshRenderBufferSet **)((this_00->AllocatorInstance).Data + lVar16) = pFVar7;
      pFVar2 = param_1->Ptr;
      uVar9 = 0;
      if ((int)uVar12 < (pFVar2->Groups).ArrayNum) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar3 = *(undefined8 *)
               (*(longlong *)((pFVar2->Groups).AllocatorInstance.Data + lVar17 * 8) + 0x10);
      uVar9 = 0;
      if ((int)uVar12 < (this->RenderBufferSets).ArrayNum) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(*(longlong *)((this_00->AllocatorInstance).Data + lVar17 * 8) + 0x3d8) = uVar3
      ;
      uVar9 = 0;
      if ((int)uVar12 < (this->RenderBufferSets).ArrayNum) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)(*(longlong *)((this_00->AllocatorInstance).Data + lVar17 * 8) + 0x3d8) == 0)
      {
        pUVar8 = UMaterial::GetDefaultMaterial(MD_Surface);
        uVar9 = 0;
        if ((int)uVar12 < (this->RenderBufferSets).ArrayNum) {
          uVar9 = uVar13;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(UMaterial **)(*(longlong *)((this_00->AllocatorInstance).Data + lVar17 * 8) + 0x3d8) =
             pUVar8;
      }
      uVar12 = uVar12 + 1;
      lVar17 = lVar17 + 1;
      lVar16 = lVar16 + 8;
    } while (lVar17 < iVar1);
  }
  this->bIsSingleBuffer = false;
  local_140 = (**(code **)(this->ParentComponent->_padding_ + 0xd40))();
  plVar11 = (longlong *)0x0;
  local_d0.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
        )0x0;
  local_d0.ArrayNum = 0;
  plVar18 = plVar11;
  if (*(longlong **)(local_140 + 0x208) != (longlong *)0x0) {
    plVar18 = *(longlong **)(local_140 + 0x208);
  }
  local_d0.ArrayMax = 8;
  iVar6 = (**(code **)(*plVar18 + 0xa8))(plVar18);
  TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::SetNum(&local_d0,iVar6,Default);
  plVar14 = plVar11;
  plVar15 = plVar11;
  if (0 < local_d0.ArrayNum) {
    do {
      uVar12 = (uint)plVar15;
      plVar15 = plVar11;
      if (((int)uVar12 < (int)plVar18[5]) && (-1 < (int)uVar12)) {
        if (((int)uVar12 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar15 = *(longlong **)((longlong)plVar14 + plVar18[4]);
      }
      uVar9 = 0;
      if ((int)uVar12 < local_d0.ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar10 = (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                )&local_d0;
      if (local_d0.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
           )0x0) {
        FVar10 = local_d0.AllocatorInstance.SecondaryData;
      }
      *(longlong **)((longlong)plVar14 + (longlong)FVar10) = plVar15;
      plVar14 = plVar14 + 1;
      plVar15 = (longlong *)(ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < local_d0.ArrayNum);
  }
  if (0 < (int)plVar18[7]) {
    plVar11 = *(longlong **)plVar18[6];
  }
  local_130 = plVar18[8];
  local_138 = plVar11;
  MakeTangentsFunc(this,(TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
                         *)local_78,false);
  local_f8 = &local_140;
  local_f0 = &local_d0;
  local_e8 = &local_138;
  local_e0 = &local_130;
  local_128.DataPtr = (void **)0x0;
  local_d8 = local_78;
  local_118 = UE::Core::Private::Function::
              TFunctionRefCaller<`FDynamicMeshSceneProxy::InitializeFromDecomposition'::__l2::<lambda_1>,void,int>
              ::Call;
  local_110 = &local_108;
  local_128.ArrayNum = 0;
  local_108 = param_1;
  local_100 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_118,local_158,
             None,&local_128);
  if (local_78._0_8_ != 0) {
    plVar11 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_d0.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
       )0x0) {
    FMemory::Free((void *)local_d0.AllocatorInstance.SecondaryData);
  }
  return;
}

// InitializeSingleBufferSet @ 1497139f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDynamicMeshSceneProxy::InitializeSingleBufferSet
          (FDynamicMeshSceneProxy *this,FMeshRenderBufferSet *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FDynamicMesh3 *pFVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
  FVar8;
  undefined ***pppuVar9;
  longlong *plVar10;
  uint uVar11;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar12;
  ulonglong uVar13;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar14;
  undefined8 uVar15;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar16;
  undefined1 auStackY_1c8 [32];
  IndexEnumerable local_158;
  code *local_150;
  undefined1 *local_148;
  code *local_138 [2];
  undefined **local_128;
  FMeshRenderBufferSet *pFStack_120;
  undefined8 local_118;
  undefined ***local_110;
  undefined1 local_108 [16];
  undefined **local_f8;
  FMeshRenderBufferSet *pFStack_f0;
  undefined8 local_e8;
  undefined ***local_e0;
  byte local_d8;
  undefined1 local_c8 [64];
  ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
  local_88;
  int local_80;
  int local_7c;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar6 = (FDynamicMesh3 *)(**(code **)(this->ParentComponent->_padding_ + 0xd40))();
  pTVar12 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
  local_7c = 8;
  local_88 = (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
              )0x0;
  local_80 = 0;
  pFVar1 = (pFVar6->AttributeSet).Ptr;
  pTVar14 = pTVar12;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    if (0 < (pFVar1->NormalLayers).Array.ArrayNum) {
      pTVar14 = *(TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> **)
                 (pFVar1->NormalLayers).Array.AllocatorInstance.Data;
    }
    iVar4 = (**(code **)(pFVar1->_padding_ + 0xa8))(pFVar1);
    TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
    ::SetNum((TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)local_c8,iVar4,Default);
    pTVar16 = pTVar12;
    if (0 < local_80) {
      do {
        uVar11 = (uint)pTVar12;
        if (((int)uVar11 < (pFVar1->UVLayers).Array.ArrayNum) && (-1 < (int)uVar11)) {
          if (((int)uVar11 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar15 = *(undefined8 *)
                    (&pTVar16->field_0x0 + (longlong)(pFVar1->UVLayers).Array.AllocatorInstance.Data
                    );
        }
        else {
          uVar15 = 0;
        }
        uVar5 = 0;
        if ((int)uVar11 < local_80) {
          uVar5 = ~uVar11 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar8 = (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
                 )local_c8;
        if (local_88 !=
            (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
             )0x0) {
          FVar8 = local_88;
        }
        pTVar12 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)
                  (ulonglong)(uVar11 + 1);
        *(undefined8 *)(&pTVar16->field_0x0 + (longlong)FVar8) = uVar15;
        pTVar16 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)
                  &pTVar16->field_0x8;
      } while ((int)(uVar11 + 1) < local_80);
    }
    pTVar12 = (pFVar1->ColorLayer).Ptr;
  }
  MakeTangentsFunc(this,(TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
                         *)local_78,false);
  local_158.Vector = &pFVar6->TriangleRefCounts;
  local_150 = UE::Core::Private::Function::
              TFunctionRefCaller<TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
              ::Call;
  local_148 = local_78;
  FMeshRenderBufferSetConversionUtil::
  InitializeBuffersFromOverlays<UE::Geometry::FRefCountVector::IndexEnumerable,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ((FMeshRenderBufferSetConversionUtil *)&this->field_0x290,param_1,pFVar6,
             (pFVar6->TriangleRefCounts).UsedCount,&local_158,
             (TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)local_c8,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pTVar14,
             pTVar12,(TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
                      *)&local_150,false,true);
  local_110 = (undefined ***)0x0;
  local_128 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1__InitializeSingleBufferSet_FDynamicMeshSceneProxy__QEAAXPEAVFMeshRenderBufferSet___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  local_138[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FDynamicMeshSceneProxy::InitializeSingleBufferSet'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                 ::Call;
  pFStack_120 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FDynamicMeshSceneProxy::InitializeSingleBufferSet_::__l2::TSTR_FDynamicMeshSceneProxyInitializeSingle226>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_138);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_108._0_8_ = local_138[0];
    local_e0 = local_110;
    local_f8 = local_128;
    pFStack_f0 = pFStack_120;
    local_e8 = local_118;
    local_138[0] = (code *)0x0;
    local_d8 = 2;
    pFVar7 = (FRenderCommandTag *)
             TRenderCommandTag<`FDynamicMeshSceneProxy::InitializeSingleBufferSet'::__l2::TSTR_FDynamicMeshSceneProxyInitializeSingle226>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_108,pFVar7);
    uVar13 = (ulonglong)local_d8;
    if ((2 < uVar13) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_108._0_8_ != (code *)0x0) {
        pppuVar9 = (undefined ***)(local_108 + 0x10);
        if (local_e0 != (undefined ***)0x0) {
          pppuVar9 = local_e0;
        }
        (*(code *)(*pppuVar9)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(local_108);
    }
  }
  if (local_138[0] != (code *)0x0) {
    pppuVar9 = &local_128;
    if (local_110 != (undefined ***)0x0) {
      pppuVar9 = local_110;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  if (local_78._0_8_ != 0) {
    plVar10 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (local_88 !=
      (ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
       )0x0) {
    FMemory::Free((void *)local_88);
  }
  return;
}

// MakeTangentsFunc @ 1497142b0

TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
* __thiscall
FDynamicMeshSceneProxy::MakeTangentsFunc
          (FDynamicMeshSceneProxy *this,
          TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
          *__return_storage_ptr__,bool param_1)

{
  EDynamicMeshComponentTangentsMode EVar1;
  int iVar2;
  UDynamicMeshComponent *this_00;
  FDynamicMeshAttributeSet *pFVar3;
  FScriptContainerElement *pFVar4;
  TMeshTangents<float> *pTVar5;
  FDynamicMesh3 *pFVar6;
  undefined8 *puVar7;
  FDynamicMeshTangents local_28;
  
  this_00 = this->ParentComponent;
  EVar1 = this_00->TangentsType;
  if ((EVar1 == Default) || (EVar1 == ExternallyProvided)) {
    pFVar6 = (FDynamicMesh3 *)(**(code **)(this_00->_padding_ + 0xd40))();
    if (((pFVar6 != (FDynamicMesh3 *)0x0) &&
        ((((pFVar3 = (pFVar6->AttributeSet).Ptr, pFVar3 != (FDynamicMeshAttributeSet *)0x0 &&
           (iVar2 = (pFVar3->NormalLayers).Array.ArrayNum, 0 < iVar2)) &&
          (pFVar4 = (pFVar3->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar4 != 0))
         && ((1 < iVar2 && (*(longlong *)(pFVar4 + 8) != 0)))))) &&
       ((2 < iVar2 && (*(longlong *)(pFVar4 + 0x10) != 0)))) {
      UE::Geometry::FDynamicMeshTangents::FDynamicMeshTangents(&local_28,pFVar6);
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
      puVar7 = FMemory::Malloc(0x28,8);
      *(undefined8 **)&__return_storage_ptr__->field_0x28 = puVar7;
      *puVar7 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__7__MakeTangentsFunc_FDynamicMeshSceneProxy__QEAA_AV__TUniqueFunction___A6AXHHHAEBU__TVector_M_Math_UE__AEAU123_1_Z___N_Z__00_00_Function_Private_Core_UE__6B_
      ;
      puVar7[1] = local_28.Mesh;
      puVar7[2] = local_28.Normals;
      puVar7[3] = local_28.Tangents;
      puVar7[4] = local_28.Bitangents;
      if (puVar7 + 1 == (undefined8 *)0x0) {
        return __return_storage_ptr__;
      }
      *(code **)__return_storage_ptr__ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l8::<lambda_1>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
           ::Call;
      return __return_storage_ptr__;
    }
  }
  else if (((EVar1 == AutoCalculated) && (!param_1)) &&
          (pTVar5 = UDynamicMeshComponent::GetAutoCalculatedTangents(this_00),
          pTVar5 != (TMeshTangents<float> *)0x0)) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    *(undefined ***)&__return_storage_ptr__->field_0x10 =
         &
         ___7__TFunction_OwnedObject_V<lambda_2>__P___MakeTangentsFunc_FDynamicMeshSceneProxy__QEAA_AV__TUniqueFunction___A6AXHHHAEBU__TVector_M_Math_UE__AEAU123_1_Z___N_Z__00_0A__Function_Private_Core_UE__6B_
    ;
    *(TMeshTangents<float> **)&__return_storage_ptr__->field_0x18 = pTVar5;
    if (&__return_storage_ptr__->field_0x18 == (undefined1 *)0x0) {
      return __return_storage_ptr__;
    }
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l15::<lambda_2>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
         ::Call;
    return __return_storage_ptr__;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6AXHHHAEBU__TVector_M_Math_UE__AEAU123_1_Z_00_0A__Function_Private_Core_UE__6B_
  ;
  *(code **)&__return_storage_ptr__->field_0x18 =
       `FDynamicMeshSceneProxy::MakeTangentsFunc'::__l2::<lambda_3>::<lambda_invoker_cdecl>;
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
         ::Call;
  }
  return __return_storage_ptr__;
}

// UpdatedReferencedMaterials @ 14971d020

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FDynamicMeshSceneProxy::UpdatedReferencedMaterials(FDynamicMeshSceneProxy *this)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  EShaderPlatform EVar3;
  FMaterialRelevance_u_0 *pFVar4;
  undefined1 local_res8 [8];
  
  pUVar1 = this->ParentComponent;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0xaa8);
  EVar3 = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
  pFVar4 = (FMaterialRelevance_u_0 *)(*pcVar2)(pUVar1,local_res8,EVar3);
  (this->MaterialRelevance).field0_0x0 = *pFVar4;
  return;
}

