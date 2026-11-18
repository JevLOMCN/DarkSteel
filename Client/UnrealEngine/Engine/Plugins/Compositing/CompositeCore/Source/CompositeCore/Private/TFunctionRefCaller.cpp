// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 2

// Call @ 14ea7c9c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget> *pTVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
LAB_14ea77d2a:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  else {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea77d2a;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    lVar1 = *(longlong *)param_1;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x140) != '\0') {
        CompositeCore::FRenderWork::~FRenderWork((FRenderWork *)(lVar1 + 0xa0));
        *(undefined1 *)(lVar1 + 0x140) = 0;
      }
      pTVar2 = (TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget> *)
               ((ForAnyElementType *)(lVar1 + 0x80))->Data;
      if (*(int *)(lVar1 + 0x8c) < 0) {
        DestructItems<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>,int>
                  (pTVar2,*(int *)(lVar1 + 0x88));
        *(undefined4 *)(lVar1 + 0x88) = 0;
        if (*(int *)(lVar1 + 0x8c) != 0) {
          ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)(lVar1 + 0x80),0,(int *)(lVar1 + 0x8c));
        }
      }
      else {
        DestructItems<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>,int>
                  (pTVar2,*(int *)(lVar1 + 0x88));
        *(undefined4 *)(lVar1 + 0x88) = 0;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// Call @ 14ea7c9d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSortedMap<unsigned_int,UE::CompositeCore::FExternalRenderTarget,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
  *this;
  longlong lVar1;
  TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget> *pTVar2;
  longlong lVar3;
  UTexture *this_00;
  IPooledRenderTarget *pIVar4;
  code *pcVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  uint uVar8;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar9;
  FTextureResource *pFVar10;
  IPooledRenderTarget *pIVar11;
  TRefCountPtr<IPooledRenderTarget> TVar12;
  int iVar13;
  FRenderWork *this_01;
  uint uVar14;
  ulonglong uVar15;
  TReferenceControllerBase<1> *pTVar16;
  ulonglong uVar17;
  bool bVar18;
  uint auStackX_8 [2];
  UObject *pUStackX_18;
  longlong *plStackX_20;
  
  pTVar16 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0xa8);
  if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
LAB_14ea77fc0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  else {
    aVar6 = pTVar16->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar16 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea77fc0;
      }
      LOCK();
      aVar7 = pTVar16->SharedReferenceCount;
      bVar18 = aVar6 == aVar7;
      if (bVar18) {
        pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar18);
    lVar1 = *(longlong *)((longlong)param_1 + 0xa0);
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    if (lVar1 != 0) {
      this = (TSortedMap<unsigned_int,UE::CompositeCore::FExternalRenderTarget,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
              *)(lVar1 + 0x80);
      pTVar2 = (TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget> *)
               (this->Pairs).AllocatorInstance.Data;
      if (*(int *)(lVar1 + 0x8c) < 0) {
        DestructItems<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>,int>
                  (pTVar2,*(int *)(lVar1 + 0x88));
        *(undefined4 *)(lVar1 + 0x88) = 0;
        if (*(int *)(lVar1 + 0x8c) != 0) {
          ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)this,0,(int *)(lVar1 + 0x8c));
        }
      }
      else {
        DestructItems<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>,int>
                  (pTVar2,*(int *)(lVar1 + 0x88));
        *(undefined4 *)(lVar1 + 0x88) = 0;
      }
      uVar15 = 0;
      iVar13 = *(int *)((longlong)param_1 + 8);
      uVar17 = uVar15;
      if (0 < iVar13) {
        do {
          uVar14 = (uint)uVar15;
          uVar8 = 0;
          if ((int)uVar14 < iVar13) {
            uVar8 = ~uVar14 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)param_1;
          TVar9 = FWeakObjectPtr::Pin((FWeakObjectPtr *)(lVar3 + uVar17));
          this_00 = *(UTexture **)TVar9.Object;
          *(undefined8 *)TVar9.Object = 0;
          if (pUStackX_18 != (UObject *)0x0) {
            UEStrongObjectPtr_Private::ReleaseUObject(pUStackX_18);
            pUStackX_18 = (UObject *)0x0;
          }
          if (this_00 != (UTexture *)0x0) {
            pFVar10 = UTexture::GetResource(this_00);
            if (pFVar10 != (FTextureResource *)0x0) {
              auStackX_8[0] = uVar14 + 100;
              pIVar11 = (IPooledRenderTarget *)
                        TSortedMap<unsigned_int,UE::CompositeCore::FExternalRenderTarget,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
                        ::Emplace<unsigned_int>(this,auStackX_8);
              TVar12 = CreateRenderTarget((FRHITexture *)&plStackX_20,(wchar_t *)pFVar10->_padding_)
              ;
              if (pIVar11 != TVar12.Reference) {
                pIVar4 = ((TRefCountPtr<IPooledRenderTarget> *)&pIVar11->_padding_)->Reference;
                ((TRefCountPtr<IPooledRenderTarget> *)&pIVar11->_padding_)->Reference =
                     (IPooledRenderTarget *)(TVar12.Reference)->_padding_;
                (TVar12.Reference)->_padding_ = 0;
                if (pIVar4 != (IPooledRenderTarget *)0x0) {
                  (**(code **)(pIVar4->_padding_ + 0x38))();
                }
              }
              if (plStackX_20 != (longlong *)0x0) {
                (**(code **)(*plStackX_20 + 0x38))();
              }
              (pIVar11->RenderTargetItem).TargetableTexture.Reference =
                   (FRHITexture *)((FWeakObjectPtr *)(lVar3 + uVar17))[1];
            }
            UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
          }
          iVar13 = *(int *)((longlong)param_1 + 8);
          uVar15 = (ulonglong)(uVar14 + 1);
          uVar17 = uVar17 + 0x10;
        } while ((int)(uVar14 + 1) < iVar13);
      }
      this_01 = (FRenderWork *)(lVar1 + 0xa0);
      if (param_1 != this_01) {
        if (*(char *)(lVar1 + 0x140) != '\0') {
          CompositeCore::FRenderWork::~FRenderWork(this_01);
        }
        CompositeCore::FRenderWork::FRenderWork(this_01,param_1);
        *(undefined1 *)(lVar1 + 0x140) = 1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        return;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  return;
}

