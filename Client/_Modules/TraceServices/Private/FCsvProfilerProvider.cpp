// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 12

// FCsvProfilerProvider @ 14d4210f0

FCsvProfilerProvider * __thiscall
TraceServices::FCsvProfilerProvider::FCsvProfilerProvider
          (FCsvProfilerProvider *this,IAnalysisSession *param_1)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FCsvProfilerProvider_TraceServices__6B_;
  (this->StatSeries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatSeries).ArrayNum = 0;
  (this->StatSeries).ArrayMax = 0;
  *(undefined8 *)&this->Events = 0;
  *(undefined8 *)&(this->Events).field_0x8 = 0;
  *(undefined8 *)&(this->Events).field_0x20 = 0;
  *(undefined4 *)&(this->Events).field_0x28 = 0;
  *(undefined4 *)&(this->Events).field_0x2c = 0x80;
  *(undefined4 *)&(this->Events).field_0x34 = 0;
  *(undefined4 *)&(this->Events).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Events).field_0x40 = 0;
  *(undefined4 *)&(this->Events).field_0x48 = 0;
  *(undefined8 *)&this->Metadata = 0;
  *(undefined8 *)&(this->Metadata).field_0x8 = 0;
  *(undefined8 *)&(this->Metadata).field_0x20 = 0;
  *(undefined4 *)&(this->Metadata).field_0x28 = 0;
  *(undefined4 *)&(this->Metadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->Metadata).field_0x34 = 0;
  *(undefined4 *)&(this->Metadata).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Metadata).field_0x40 = 0;
  *(undefined4 *)&(this->Metadata).field_0x48 = 0;
  (this->Captures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Captures).ArrayNum = 0;
  (this->Captures).ArrayMax = 0;
  this->CurrentCapture = (FCapture *)0x0;
  return this;
}

// ~FCsvProfilerProvider @ 14d42b460

void __thiscall
TraceServices::FCsvProfilerProvider::~FCsvProfilerProvider(FCsvProfilerProvider *this)

{
  int iVar1;
  void *pvVar2;
  FCapture *pFVar3;
  FScriptContainerElement *pFVar4;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FCsvProfilerProvider_TraceServices__6B_;
  pFVar5 = (this->Captures).AllocatorInstance.Data;
  iVar1 = (this->Captures).ArrayNum;
  pFVar4 = pFVar5 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Captures).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::FCsvProfilerProvider::FCapture_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    pvVar2 = *(void **)pFVar5;
    if (pvVar2 != (void *)0x0) {
      *(undefined4 *)((longlong)pvVar2 + 0x90) = 0;
      if (*(void **)((longlong)pvVar2 + 0x88) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar2 + 0x88));
      }
      TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)((longlong)pvVar2 + 0x48));
      if (*(void **)((longlong)pvVar2 + 0x38) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar2 + 0x38));
      }
      ::operator_delete(pvVar2,0x98);
    }
    pFVar5 = pFVar5 + 8;
  }
  pFVar3 = this->CurrentCapture;
  if (pFVar3 != (FCapture *)0x0) {
    *(undefined4 *)&(pFVar3->Metadata).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar3->Metadata).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar3->Metadata);
    pFVar4 = (pFVar3->StatSeries).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar3,0x98);
  }
  pFVar5 = (this->StatSeries).AllocatorInstance.Data;
  iVar1 = (this->StatSeries).ArrayNum;
  pFVar4 = pFVar5 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->StatSeries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::FCsvProfilerProvider::FStatSeries_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    this_00 = *(TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                **)pFVar5;
    if (this_00 !=
        (TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)0x0) {
      *(undefined4 *)&this_00[2].field_0x28 = 0;
      if (*(void **)&this_00[2].field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00[2].field_0x20);
      }
      TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this_00[1].field_0x18);
      *(undefined4 *)&this_00[1].field_0x10 = 0;
      if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00[1].field_0x8);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_00);
      ::operator_delete(this_00,0xb0);
    }
    pFVar5 = pFVar5 + 8;
  }
  pFVar4 = (this->Captures).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->Metadata).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Metadata).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Metadata);
  *(undefined4 *)&(this->Events).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Events).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCsvProfilerProvider::FEvents_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCsvProfilerProvider::FEvents_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCsvProfilerProvider::FEvents_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Events);
  pFVar4 = (this->StatSeries).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
    return;
  }
  return;
}

// AddEvent @ 14d43a870

void __thiscall
TraceServices::FCsvProfilerProvider::AddEvent
          (FCsvProfilerProvider *this,uint param_1,wchar_t *param_2)

{
  longlong lVar1;
  IAnalysisSession *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FString *pFVar7;
  undefined1 *puVar8;
  ForAnyElementType FVar9;
  TPairInitializer<unsigned_int_const_&,TraceServices::FCsvProfilerProvider::FEvents_*_const_&>
  local_res8;
  FScriptContainerElement *local_res18;
  FScriptContainerElement *local_res20;
  FString local_78;
  FEvents ***local_68;
  FScriptContainerElement **local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res8.Value._0_4_ = param_1;
  local_res18 = (FScriptContainerElement *)param_2;
  (**(code **)((longlong)*this->Session + 0xb0))();
  local_res20 = (FScriptContainerElement *)0x0;
  if (*(int *)&(this->Events).field_0x8 != *(int *)&(this->Events).field_0x34) {
    puVar8 = *(undefined1 **)&(this->Events).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Events).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->Events).field_0x48 - 1U & (uint)local_res8.Value) * 4
                    );
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&this->Events + (longlong)iVar5 * 0x18;
        if (*(uint *)(*(longlong *)&this->Events + (longlong)iVar5 * 0x18) == (uint)local_res8.Value
           ) {
          pFVar6 = (FScriptContainerElement *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar6 = local_res20;
          }
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            local_res20 = *(FScriptContainerElement **)&pFVar6->field_0x0;
            goto LAB_14d43a94c;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  pFVar6 = ::operator_new(0x18);
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    *(FScriptContainerElement **)&pFVar6->field_0x0 = (FScriptContainerElement *)0x0;
    *(FScriptContainerElement **)&pFVar6[8].field_0x0 = (FScriptContainerElement *)0x0;
    *(FScriptContainerElement **)&pFVar6[0x10].field_0x0 = (FScriptContainerElement *)0x0;
    local_res20 = pFVar6;
  }
  local_68 = &local_res8.Value;
  local_60 = &local_res20;
  TSet<TTuple<unsigned_int,TraceServices::FCsvProfilerProvider::FEvents_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerProvider::FEvents_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::FCsvProfilerProvider::FEvents_*_const_&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::FCsvProfilerProvider::FEvents_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerProvider::FEvents_*,0>,FDefaultSetAllocator>
              *)&this->Events,&local_res8,(bool *)&local_68);
LAB_14d43a94c:
  pFVar6 = local_res18;
  if (*(int *)&((ForAnyElementType *)(local_res20 + 8))->Data == 0) {
    ((ForAnyElementType *)(local_res20 + 0x10))->Data = local_res18;
  }
  else {
    pIVar2 = this->Session;
    pcVar3 = *(code **)((longlong)*pIVar2 + 0xd0);
    ::FString::FString(&local_48,";");
    pFVar7 = ::FString::FString(&local_38,
                                (wchar_t *)*(FScriptContainerElement **)&local_res20[0x10].field_0x0
                               );
    ::FString::ConcatFF(&local_58,pFVar7,&local_48);
    ::FString::ConcatFC(&local_78,&local_58,(wchar_t *)pFVar6);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar9.Data = local_78.Data.AllocatorInstance.Data;
    }
    pFVar6 = (FScriptContainerElement *)(*pcVar3)(pIVar2,FVar9.Data);
    *(FScriptContainerElement **)&local_res20[0x10].field_0x0 = pFVar6;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = local_res20;
  if (((*(FScriptContainerElement **)&local_res20->field_0x0 <=
        (FScriptContainerElement *)&local_res18) &&
      ((FScriptContainerElement *)&local_res18 <
       *(FScriptContainerElement **)&local_res20->field_0x0 +
       (longlong)*(int *)(local_res20 + 0xc) * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)&pFVar6[8].field_0x0;
  if (iVar5 == *(int *)(pFVar6 + 0xc)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar6,(int *)(pFVar6 + 0xc));
  }
  *(int *)&pFVar6[8].field_0x0 = iVar5 + 1;
  *(FScriptContainerElement **)
   (*(FScriptContainerElement **)&pFVar6->field_0x0 + (longlong)iVar5 * 8) = local_res18;
  return;
}

// AddSeries @ 14d43cd50

ulong64 __thiscall
TraceServices::FCsvProfilerProvider::AddSeries
          (FCsvProfilerProvider *this,wchar_t *param_1,ECsvStatSeriesType param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined8 *local_18 [2];
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  puVar7 = ::operator_new(0xb0);
  local_18[0] = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[7] = 0;
    puVar7[9] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0x11] = 0;
    puVar7[0x13] = 0;
    puVar7[0x15] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[4] = 0;
    *(undefined4 *)(puVar7 + 5) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = 0x80;
    *(undefined4 *)(puVar7 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar7 + 0x34) = 0;
    puVar7[8] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xe] = 0;
    *(undefined4 *)(puVar7 + 0xf) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x7c) = 0x80;
    *(undefined4 *)(puVar7 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar7 + 0x84) = 0;
    puVar7[0x12] = 0;
    local_18[0] = puVar7;
  }
  local_18[0][0x14] = param_1;
  *(ECsvStatSeriesType *)(local_18[0] + 0x15) = param_2;
  pFVar3 = (this->StatSeries).AllocatorInstance.Data;
  iVar2 = (this->StatSeries).ArrayNum;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->StatSeries).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return uVar8;
  }
  iVar6 = (this->StatSeries).ArrayNum;
  piVar1 = &(this->StatSeries).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->StatSeries).AllocatorInstance,piVar1);
  }
  (this->StatSeries).ArrayNum = iVar6 + 1;
  *(undefined8 **)((this->StatSeries).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
  return (longlong)iVar2;
}

// EndCapture @ 14d4510e0

void __thiscall
TraceServices::FCsvProfilerProvider::EndCapture(FCsvProfilerProvider *this,uint param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int *piVar2;
  FCapture **ppFVar3;
  TArray<TraceServices::FCsvProfilerProvider::FCapture_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FCapture *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TMap<wchar_t_const_*,wchar_t_const_*,FDefaultSetAllocator,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,wchar_t_const_*,0>_>
  *this_01;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  ppFVar3 = &this->CurrentCapture;
  if ((*ppFVar3 == (FCapture *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCapture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\CsvProfilerProvider.cpp"
                         ,0xaa,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (*ppFVar3)->EndFrame = param_1;
  if (((*ppFVar3)->EndFrame < (*ppFVar3)->StartFrame) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCapture->EndFrame >= CurrentCapture->StartFrame",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\CsvProfilerProvider.cpp"
                         ,0xad,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = *ppFVar3;
  this_01 = &pFVar5->Metadata;
  if (this_01 != &this->Metadata) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(pFVar5->Metadata).field_0x38,
               (int *)&(pFVar5->Metadata).field_0x48,
               (ForElementType<FSetElementId> *)&(this->Metadata).field_0x38,
               *(int *)&(this->Metadata).field_0x48);
    iVar9 = *(int *)&(this->Metadata).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,iVar9);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar9,(ForAnyElementType *)this_01,(int *)&(pFVar5->Metadata).field_0x8,
               (int *)&(pFVar5->Metadata).field_0xc);
    puVar1 = &(this->Metadata).field_0x10;
    this_00 = &(pFVar5->Metadata).field_0x10;
    *(undefined4 *)&(pFVar5->Metadata).field_0x30 = *(undefined4 *)&(this->Metadata).field_0x30;
    *(undefined4 *)&(pFVar5->Metadata).field_0x34 = *(undefined4 *)&(this->Metadata).field_0x34;
    if (this_00 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar9 != 0) {
      memcpy(*(void **)this_01,*(void **)&this->Metadata,(longlong)iVar9 * 0x18);
    }
  }
  pTVar4 = &this->Captures;
  pFVar6 = (pTVar4->AllocatorInstance).Data;
  if (((pFVar6 <= ppFVar3) && (ppFVar3 < pFVar6 + (longlong)(this->Captures).ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = (this->Captures).ArrayNum;
  piVar2 = &(this->Captures).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar4->AllocatorInstance,piVar2);
  }
  (this->Captures).ArrayNum = iVar9 + 1;
  *(FCapture **)((pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 8) = *ppFVar3;
  *ppFVar3 = (FCapture *)0x0;
  return;
}

// EnumerateCaptures @ 14d451e10

void __thiscall
TraceServices::FCsvProfilerProvider::EnumerateCaptures
          (FCsvProfilerProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FCaptureInfo_const_&)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  longlong local_38;
  undefined8 local_30;
  int local_28;
  int local_24;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  pFVar4 = (this->Captures).AllocatorInstance.Data;
  iVar2 = (this->Captures).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  iVar5 = 0;
  while( true ) {
    if ((this->Captures).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::FCsvProfilerProvider::FCapture_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = *(longlong *)pFVar4;
    local_38 = lVar3 + 0x48;
    local_30 = *(undefined8 *)(lVar3 + 0x28);
    local_24 = *(int *)(lVar3 + 0x34) - *(int *)(lVar3 + 0x30);
    local_28 = iVar5;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_38);
    pFVar4 = pFVar4 + 8;
    iVar5 = iVar5 + 1;
  }
  return;
}

// GetTable @ 14d46ddb0

IUntypedTable * __thiscall
TraceServices::FCsvProfilerProvider::GetTable(FCsvProfilerProvider *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IUntypedTable *pIVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->Captures).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IUntypedTable *)(*pcVar1)();
      return pIVar4;
    }
  }
  return *(IUntypedTable **)((this->Captures).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
}

// GetValueRef @ 14d4718f0

FStatSeriesValue * __thiscall
TraceServices::FCsvProfilerProvider::GetValueRef
          (FCsvProfilerProvider *this,ulong64 param_1,uint param_2)

{
  int *piVar1;
  FCapture *pFVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FStatSeriesValue *pFVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  TMapBase<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue,0>_>
  *local_18 [2];
  
  uVar10 = (uint)param_1;
  uVar7 = 0;
  if ((int)uVar10 < (this->StatSeries).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  local_res18[0] = param_2;
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FStatSeriesValue *)(*pcVar5)();
      return pFVar9;
    }
  }
  pFVar2 = this->CurrentCapture;
  local_18[0] = *(TMapBase<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue,0>_>
                  **)((this->StatSeries).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  if (pFVar2 != (FCapture *)0x0) {
    uVar7 = (this->Captures).ArrayNum;
    if (*(int *)&local_18[0][1].Pairs.Elements.field_0x8 !=
        *(int *)&local_18[0][1].Pairs.Elements.field_0x34) {
      FVar11 = local_18[0][1].Pairs.Hash.SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&local_18[0][1].Pairs.Hash;
      }
      iVar8 = *(int *)((longlong)FVar11 +
                      (ulonglong)(local_18[0][1].Pairs.HashSize - 1U & uVar7) * 4);
      if (iVar8 != -1) {
        lVar3 = *(longlong *)&local_18[0][1].Pairs.Elements;
        do {
          if (*(uint *)(lVar3 + (longlong)iVar8 * 0xc) == uVar7) goto LAB_14d471a9f;
          iVar8 = *(int *)(lVar3 + 4 + (longlong)iVar8 * 0xc);
        } while (iVar8 != -1);
      }
    }
    pFVar4 = (pFVar2->StatSeries).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar4 + (longlong)(pFVar2->StatSeries).ArrayMax * 8))
    {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FStatSeriesValue *)(*pcVar5)();
        return pFVar9;
      }
    }
    iVar8 = (pFVar2->StatSeries).ArrayNum;
    piVar1 = &(pFVar2->StatSeries).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pFVar2->StatSeries).AllocatorInstance,piVar1);
    }
    (pFVar2->StatSeries).ArrayNum = iVar8 + 1;
    *(TMapBase<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue,0>_>
      **)((pFVar2->StatSeries).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_18[0];
    local_res8[0] = (this->Captures).ArrayNum;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
              ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
               (local_18[0] + 1),local_res10,(bool *)local_res8);
  }
LAB_14d471a9f:
  pFVar9 = TMapBase<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue,0>_>
           ::FindOrAddImpl<unsigned_int_const_&>(local_18[0],local_res18[0],local_res18);
  return pFVar9;
}

// SetMetadata @ 14d489f20

void __thiscall
TraceServices::FCsvProfilerProvider::SetMetadata
          (FCsvProfilerProvider *this,wchar_t *param_1,wchar_t *param_2)

{
  TPairInitializer<wchar_t_const_*_const_&,wchar_t_const_*_const_&> local_res8;
  wchar_t *local_res18 [2];
  wchar_t ***local_18;
  wchar_t **local_10;
  
  local_res8.Value = (wchar_t **)param_1;
  local_res18[0] = param_2;
  (**(code **)((longlong)*this->Session + 0xb0))();
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  TSet<TTuple<wchar_t_const_*,wchar_t_const_*>,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,wchar_t_const_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<wchar_t_const_*_const_&,wchar_t_const_*_const_&>_>
            ((TSet<TTuple<wchar_t_const_*,wchar_t_const_*>,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,wchar_t_const_*,0>,FDefaultSetAllocator>
              *)&this->Metadata,&local_res8,(bool *)&local_18);
  return;
}

// SetValue @ 14d48bcb0

void __thiscall
TraceServices::FCsvProfilerProvider::SetValue
          (FCsvProfilerProvider *this,ulong64 param_1,uint param_2,double param_3)

{
  FStatSeriesValue *pFVar1;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  pFVar1 = GetValueRef(this,param_1,param_2);
  (pFVar1->Value).AsDouble = param_3;
  return;
}

// SetValue @ 14d48bd10

void __thiscall
TraceServices::FCsvProfilerProvider::SetValue
          (FCsvProfilerProvider *this,ulong64 param_1,uint param_2,long64 param_3)

{
  FStatSeriesValue *pFVar1;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  pFVar1 = GetValueRef(this,param_1,param_2);
  (pFVar1->Value).AsInt = param_3;
  return;
}

// StartCapture @ 14d48c290

void __thiscall
TraceServices::FCsvProfilerProvider::StartCapture
          (FCsvProfilerProvider *this,wchar_t *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FCapture *pFVar3;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  if (this->CurrentCapture != (FCapture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CurrentCapture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\CsvProfilerProvider.cpp"
                       ,0x9f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = ::operator_new(0x98);
  if (pFVar3 == (FCapture *)0x0) {
    pFVar3 = (FCapture *)0x0;
  }
  else {
    (pFVar3->Table).Capture = pFVar3;
    (pFVar3->Table).Layout.StatSeries = &pFVar3->StatSeries;
    (pFVar3->Table)._padding_ = (longlong)&___7FTable_FCsvProfilerProvider_TraceServices__6B_;
    (pFVar3->Table).Layout._padding_ =
         (longlong)&___7FTableLayout_FCsvProfilerProvider_TraceServices__6B_;
    (pFVar3->Table).Events = &this->Events;
    pFVar3->EndFrame = 0;
    (pFVar3->StatSeries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->StatSeries).ArrayNum = 0;
    (pFVar3->StatSeries).ArrayMax = 0;
    *(undefined8 *)&pFVar3->Metadata = 0;
    *(undefined8 *)&(pFVar3->Metadata).field_0x8 = 0;
    *(undefined8 *)&(pFVar3->Metadata).field_0x20 = 0;
    *(undefined4 *)&(pFVar3->Metadata).field_0x28 = 0;
    *(undefined4 *)&(pFVar3->Metadata).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar3->Metadata).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar3->Metadata).field_0x34 = 0;
    *(undefined8 *)&(pFVar3->Metadata).field_0x40 = 0;
    *(undefined4 *)&(pFVar3->Metadata).field_0x48 = 0;
  }
  this->CurrentCapture = pFVar3;
  pFVar3->StartFrame = param_2;
  this->CurrentCapture->EndFrame = param_2;
  this->CurrentCapture->Filename = param_1;
  return;
}

