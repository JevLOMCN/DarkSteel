// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 5

// ReleaseRHI @ 145f36260

void __thiscall FLandscapeEditReadbackTaskPool::ReleaseRHI(FLandscapeEditReadbackTaskPool *this)

{
  TIndirectArray<TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->Pool).Chunks,0);
  (this->Pool).NumElements = 0;
  return;
}

// operator() @ 145f45160

void __thiscall
`FLandscapeEditReadbackTaskPool::FlushAll'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  FLandscapeEditReadbackTaskImpl *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  uVar6 = 0;
  uVar4 = *(uint *)(*(longlong *)this + 0x30);
  plVar8 = *(longlong **)(*(longlong *)this + 0x20);
  if (uVar4 != 0) {
    uVar7 = (ulonglong)uVar4;
    do {
      pFVar5 = (FLandscapeEditReadbackTaskImpl *)(uVar6 * 0x60 + *plVar8);
      if (((pFVar5->TextureResource != (FTextureResource *)0x0) &&
          (bVar3 = UpdateTask_RenderThread(param_1,pFVar5,true), !bVar3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("bTaskComplete",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                             ,0x134,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = (int)uVar6 + 1;
      uVar6 = 0;
      plVar2 = plVar8 + 1;
      if (uVar4 < 0xaa) {
        uVar6 = (ulonglong)uVar4;
        plVar2 = plVar8;
      }
      plVar8 = plVar2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// operator() @ 145f45400

void __thiscall
`FLandscapeEditReadbackTaskPool::GarbageCollect'::__l34::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  FRHIResource *this_00;
  
  lVar1 = *(longlong *)this;
  if (*(int *)(lVar1 + 0x3c) < 0) {
    DestructItems<TRefCountPtr<FRHITexture>,int>
              (*(TRefCountPtr<FRHITexture> **)(lVar1 + 0x30),*(int *)(lVar1 + 0x38));
    *(undefined4 *)(lVar1 + 0x38) = 0;
    if (*(int *)(lVar1 + 0x3c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(lVar1 + 0x30),0,(int *)(lVar1 + 0x3c));
    }
  }
  else {
    DestructItems<TRefCountPtr<FRHITexture>,int>
              (*(TRefCountPtr<FRHITexture> **)(lVar1 + 0x30),*(int *)(lVar1 + 0x38));
    *(undefined4 *)(lVar1 + 0x38) = 0;
  }
  this_00 = *(FRHIResource **)(*(longlong *)this + 0x40);
  if (this_00 != (FRHIResource *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x40) = 0;
    FRHIResource::Release(this_00);
  }
  return;
}

// Allocate @ 145f499c0

int __thiscall
FLandscapeEditReadbackTaskPool::Allocate
          (FLandscapeEditReadbackTaskPool *this,UTexture2D *param_1,
          TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_>
          *param_2)

{
  TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  char cVar2;
  code *pcVar3;
  TIntPoint<int>_u_0 TVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  EPixelFormat EVar7;
  EPixelFormat EVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  FLandscapeEditReadbackTaskImpl *pFVar14;
  FTextureResource *pFVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  short sVar22;
  FScriptContainerElement *pFVar23;
  
  uVar20 = 0;
  uVar19 = 0xffffffff;
  iVar9 = UTexture2D::GetSizeY(param_1);
  iVar10 = UTexture2D::GetSizeX(param_1);
  uVar12 = (this->Pool).NumElements;
  uVar21 = 0;
  pFVar23 = (this->Pool).Chunks.Array.AllocatorInstance.Data;
  if (uVar12 != 0) {
    do {
      plVar18 = (longlong *)(uVar21 * 0x60 + *(longlong *)pFVar23);
      if ((*plVar18 == 0) && (uVar19 = uVar20, (int)plVar18[7] != 0)) {
        if (((int)plVar18[7] < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          iVar9 = (*pcVar3)();
          return iVar9;
        }
        if (*(longlong *)plVar18[6] != 0) {
          if (((int)plVar18[7] < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            iVar9 = (*pcVar3)();
            return iVar9;
          }
          lVar13 = (**(code **)(**(longlong **)plVar18[6] + 0x20))();
          cVar2 = *(char *)(lVar13 + 0x32);
          if (cVar2 == '\0') {
LAB_145f49b23:
            sVar22 = 1;
LAB_145f49b29:
            iVar17 = *(int *)(lVar13 + 0x28);
            iVar11 = *(int *)(lVar13 + 0x24);
          }
          else {
            if (cVar2 == '\x01') {
LAB_145f49b15:
              sVar22 = *(short *)(lVar13 + 0x2e);
              goto LAB_145f49b29;
            }
            if (cVar2 == '\x02') {
              sVar22 = *(short *)(lVar13 + 0x2c);
              goto LAB_145f49b29;
            }
            if (cVar2 == '\x03') goto LAB_145f49b23;
            if (cVar2 == '\x04') goto LAB_145f49b15;
            iVar17 = 0;
            sVar22 = 0;
            iVar11 = 0;
          }
          if ((((iVar11 == iVar10) && (iVar17 == iVar9)) && (sVar22 == 1)) &&
             (EVar8 = *(EPixelFormat *)(plVar18 + 5), EVar7 = UTexture2D::GetPixelFormat(param_1,0),
             EVar8 == EVar7)) break;
        }
      }
      uVar16 = (int)uVar21 + 1;
      uVar20 = uVar20 + 1;
      uVar21 = 0;
      pFVar5 = pFVar23 + 8;
      if (uVar16 < 0xaa) {
        uVar21 = (ulonglong)uVar16;
        pFVar5 = pFVar23;
      }
      pFVar23 = pFVar5;
    } while (uVar20 < uVar12);
    if (uVar19 != 0xffffffff) goto LAB_145f49ba2;
  }
  TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::Add
            (&this->Pool,1);
  uVar19 = (this->Pool).NumElements - 1;
LAB_145f49ba2:
  uVar12 = this->FrameCount;
  pFVar14 = TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::
            operator[](&this->Pool,uVar19);
  pFVar15 = UTexture::GetResource((UTexture *)param_1);
  pTVar1 = &pFVar14->ReadbackContext;
  pFVar14->TextureResource = pFVar15;
  if (pTVar1 != param_2) {
    pFVar23 = (pTVar1->AllocatorInstance).Data;
    if (pFVar23 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar23);
    }
    (pTVar1->AllocatorInstance).Data = (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar14->ReadbackContext).ArrayNum = param_2->ArrayNum;
    (pFVar14->ReadbackContext).ArrayMax = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
  }
  pFVar14->InitFrameId = uVar12;
  iVar9 = UTexture2D::GetSizeY(param_1);
  iVar10 = UTexture2D::GetSizeX(param_1);
  TVar4._s_0.Y = iVar9;
  TVar4._s_0.X = iVar10;
  (pFVar14->Size).field0_0x0 = TVar4;
  uVar12 = UTexture2D::GetNumMips(param_1);
  pFVar14->NumMips = uVar12;
  EVar8 = UTexture2D::GetPixelFormat(param_1,0);
  pFVar14->Format = EVar8;
  pFVar14->CompletionState = None;
  this->AllocCount = this->AllocCount + 1;
  return uVar19;
}

// GarbageCollect @ 145f525f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLandscapeEditReadbackTaskPool::GarbageCollect(FLandscapeEditReadbackTaskPool *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  FLandscapeEditReadbackTaskImpl *pFVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  undefined ***pppuVar9;
  ulonglong uVar10;
  undefined1 auStackY_c8 [32];
  code *local_98 [2];
  undefined **local_88;
  FLandscapeEditReadbackTaskImpl *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FLandscapeEditReadbackTaskImpl *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  uVar2 = (this->Pool).NumElements;
  if ((uVar2 != 0) &&
     (pFVar7 = TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::
               operator[](&this->Pool,this->FrameCount % uVar2),
     pFVar7->InitFrameId + 100 < this->FrameCount)) {
    if (pFVar7->TextureResource == (FTextureResource *)0x0) {
      piVar1 = &(pFVar7->ReadbackContext).ArrayMax;
      (pFVar7->ReadbackContext).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x2c,4,0,&(pFVar7->ReadbackContext).AllocatorInstance,0,piVar1);
      }
      DestructItems<TArray<FColor,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FColor,TSizedDefaultAllocator<32>_> *)
                 (pFVar7->Result).AllocatorInstance.Data,(pFVar7->Result).ArrayNum);
      piVar1 = &(pFVar7->Result).ArrayMax;
      (pFVar7->Result).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(pFVar7->Result).AllocatorInstance,0,piVar1);
      }
      pTVar4 = UE::Landscape::Private::CVarReadbackPoolSizeMB.Ref;
      bVar5 = IsInParallelGameThread();
      if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((((pFVar7->StagingTextures).ArrayNum != 0) ||
          ((pFVar7->ReadbackFence).Reference != (FRHIGPUFence *)0x0)) &&
         (iVar6 = UE::Landscape::Private::TotalStagingTexturesAllocatedSize -
                  pFVar7->StagingTexturesAllocatedSize, pTVar4->ShadowedValue[0] << 0x14 < iVar6)) {
        UE::Landscape::Private::TotalStagingTexturesAllocatedSize = iVar6;
        if ((iVar6 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TotalStagingTexturesAllocatedSize >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                               ,0x118,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_70 = (undefined ***)0x0;
        local_88 = &
                   ___7__TFunction_OwnedObject_V<lambda_1>__CC___GarbageCollect_FLandscapeEditReadbackTaskPool__QEAAXXZ__00_0A__Function_Private_Core_UE__6B_
        ;
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FLandscapeEditReadbackTaskPool::GarbageCollect'::__l34::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
        pFStack_80 = pFVar7;
        this_00 = FRenderCommandList::GetInstanceTLS();
        if (this_00 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FLandscapeEditReadbackTaskPool::GarbageCollect_::__l34::TSTR_FLandscapeEditLayerReadback_Release283>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
                   TRenderCommandTag<`FLandscapeEditReadbackTaskPool::GarbageCollect'::__l34::TSTR_FLandscapeEditLayerReadback_Release283>
                   ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_68,pFVar8);
          uVar10 = (ulonglong)local_38;
          if ((2 < uVar10) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar10] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_68._0_8_ != (code *)0x0) {
              pppuVar9 = (undefined ***)(local_68 + 0x10);
              if (local_40 != (undefined ***)0x0) {
                pppuVar9 = local_40;
              }
              (*(code *)(*pppuVar9)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar10])(local_68);
          }
        }
        if (local_98[0] != (code *)0x0) {
          pppuVar9 = &local_88;
          if (local_70 != (undefined ***)0x0) {
            pppuVar9 = local_70;
          }
          (*(code *)(*pppuVar9)[2])();
        }
      }
    }
    else if (2 < (byte)LogLandscape._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_void___cdecl_FLandscapeEditReadbackTaskPool::GarbageCollect(void)___ptr64'
                  ::__l12::LOG_Static,(FLogCategoryBase *)&LogLandscape);
    }
  }
  this->FrameCount = this->FrameCount + 1;
  return;
}

