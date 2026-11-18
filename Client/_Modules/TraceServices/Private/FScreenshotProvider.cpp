// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 5

// ~FScreenshotProvider @ 14d3d1220

void __thiscall TraceServices::FScreenshotProvider::~FScreenshotProvider(FScreenshotProvider *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FScreenshotProvider_TraceServices__6B_;
  *(undefined4 *)&(this->Screenshots).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Screenshots).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<TraceServices::FScreenshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<TraceServices::FScreenshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<TraceServices::FScreenshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Screenshots);
  return;
}

// FScreenshotProvider @ 14d425e30

FScreenshotProvider * __thiscall
TraceServices::FScreenshotProvider::FScreenshotProvider
          (FScreenshotProvider *this,IAnalysisSession *param_1)

{
  this->_padding_ = (longlong)&___7FScreenshotProvider_TraceServices__6B_;
  *(undefined8 *)&this->Screenshots = 0;
  *(undefined8 *)&(this->Screenshots).field_0x8 = 0;
  *(undefined8 *)&(this->Screenshots).field_0x20 = 0;
  *(undefined4 *)&(this->Screenshots).field_0x28 = 0;
  *(undefined4 *)&(this->Screenshots).field_0x2c = 0x80;
  *(undefined4 *)&(this->Screenshots).field_0x34 = 0;
  *(undefined4 *)&(this->Screenshots).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Screenshots).field_0x40 = 0;
  *(undefined4 *)&(this->Screenshots).field_0x48 = 0;
  this->Session = param_1;
  return this;
}

// AddScreenshot @ 14d43ca60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<TraceServices::FScreenshot,1> * __thiscall
TraceServices::FScreenshotProvider::AddScreenshot
          (FScreenshotProvider *this,
          TSharedPtr<TraceServices::FScreenshot,1> *__return_storage_ptr__,uint param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<TraceServices::FScreenshot,1> *pTVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  int local_res8;
  uint local_res18 [2];
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  uint *local_28;
  TReferenceControllerBase<1> **local_20;
  
  local_res18[0] = param_1;
  pTStack_30 = ::operator_new(0x50);
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if (pTStack_30 == (TReferenceControllerBase<1> *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    pTStack_30 = _UNK_150651568;
  }
  else {
    pTStack_30->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_30->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_30->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFScreenshot_TraceServices___00_SharedPointerInternals__6B_
    ;
    pTStack_30[1]._padding_ = 0;
    pTStack_30[2].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_30[2].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_30[3]._padding_ = 0;
    pTStack_30[3].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_30[3].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_30[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_30[1].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_30[2]._padding_ = 0;
    pTStack_30[4]._padding_ = 0;
    pTStack_30[4].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_30[4].WeakReferenceCount = (atomic<int>)0x0;
    if (pTStack_30 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TSharedPtr<TraceServices::FScreenshot,1> *)(*pcVar2)();
        return pTVar4;
      }
    }
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTStack_30;
    local_38 = pTStack_30 + 1;
  }
  local_28 = local_res18;
  local_20 = &local_38;
  TSet<TTuple<unsigned_int,TSharedPtr<TraceServices::FScreenshot,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<TraceServices::FScreenshot,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,TSharedPtr<TraceServices::FScreenshot,1>_&&>_>
            ((TSet<TTuple<unsigned_int,TSharedPtr<TraceServices::FScreenshot,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<TraceServices::FScreenshot,1>,0>,FDefaultSetAllocator>
              *)&this->Screenshots,
             (TPairInitializer<unsigned_int_const_&,TSharedPtr<TraceServices::FScreenshot,1>_&&> *)
             &local_res8,(bool *)&local_28);
  lVar5 = (longlong)local_res8 * 0x20 + *(longlong *)&(this->Screenshots).field_0x0;
  __return_storage_ptr__->Object = *(FScreenshot **)(lVar5 + 8);
  pTVar1 = *(TReferenceControllerBase<1> **)(lVar5 + 0x10);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// AddScreenshotChunk @ 14d43cba0

void __thiscall
TraceServices::FScreenshotProvider::AddScreenshotChunk
          (FScreenshotProvider *this,uint param_1,uint param_2,ushort param_3,
          TArrayView<unsigned_char_const_,int> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  uchar *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  undefined1 *puVar9;
  
  if (*(int *)&(this->Screenshots).field_0x8 != *(int *)&(this->Screenshots).field_0x34) {
    puVar9 = *(undefined1 **)&(this->Screenshots).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Screenshots).field_0x38;
    }
    uVar5 = *(uint *)(puVar9 + (ulonglong)(*(int *)&(this->Screenshots).field_0x48 - 1U & param_1) *
                               4);
    if (uVar5 != 0xffffffff) {
      while (puVar8 = (uint *)((longlong)(int)uVar5 * 0x20 + *(longlong *)&this->Screenshots),
            *puVar8 != param_1) {
        uVar5 = puVar8[6];
        if (uVar5 == 0xffffffff) {
          return;
        }
      }
      puVar7 = puVar8 + 2;
      if (puVar8 == (uint *)0x0) {
        puVar7 = (uint *)0x0;
      }
      if (puVar7 != (uint *)0x0) {
        pTVar1 = *(TReferenceControllerBase<1> **)(puVar7 + 2);
        lVar2 = *(longlong *)puVar7;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (lVar2 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (*(int *)(lVar2 + 0x38) != param_2 * 0xffff) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Screenshot->Data.Num() == ChunkNum * ChunkSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\ScreenshotProvider.cpp"
                             ,0x23,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        _Src = param_4->DataPtr;
        if ((_Src == (uchar *)0x0) && (param_3 != 0)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,(uint)param_3,(ForAnyElementType *)(lVar2 + 0x30),
                           (int *)(lVar2 + 0x38),(int *)(lVar2 + 0x3c));
        if (param_3 != 0) {
          memcpy((void *)((longlong)iVar6 + *(longlong *)(lVar2 + 0x30)),_Src,(ulonglong)param_3);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      }
    }
  }
  return;
}

// GetScreenshot @ 14d46c860

TSharedPtr<TraceServices::FScreenshot_const_,1> * __thiscall
TraceServices::FScreenshotProvider::GetScreenshot
          (FScreenshotProvider *this,
          TSharedPtr<TraceServices::FScreenshot_const_,1> *__return_storage_ptr__,uint param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->Screenshots).field_0x8 != *(int *)&(this->Screenshots).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Screenshots).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Screenshots).field_0x38;
    }
    uVar2 = *(uint *)(puVar5 + (ulonglong)(*(int *)&(this->Screenshots).field_0x48 - 1U & param_1) *
                               4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar2 * 0x20 + *(longlong *)&this->Screenshots);
        if (*puVar3 == param_1) {
          puVar4 = puVar3 + 2;
          if (puVar3 == (uint *)0x0) {
            puVar4 = (uint *)0x0;
          }
          if (puVar4 != (uint *)0x0) {
            __return_storage_ptr__->Object = *(FScreenshot **)puVar4;
            pTVar1 = *(TReferenceControllerBase<1> **)(puVar4 + 2);
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
            if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
              return __return_storage_ptr__;
            }
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
            return __return_storage_ptr__;
          }
          break;
        }
        uVar2 = puVar3[6];
      } while (uVar2 != 0xffffffff);
    }
  }
  __return_storage_ptr__->Object = (FScreenshot *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

