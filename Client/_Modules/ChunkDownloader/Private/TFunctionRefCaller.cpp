// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 5

// Call @ 14f0212f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FChunkDownloader::FMultiCallback::FMultiCallback'::__l2::<lambda_1>,void,bool>::
Call(void *param_1,bool *param_2)

{
  `FChunkDownloader::FMultiCallback::FMultiCallback'::__l2::<lambda_1>::operator()(param_1,*param_2)
  ;
  return;
}

// Call @ 14f021300

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDownload::StartDownload'::__l2::<lambda_1>,void,unsigned___int64>::Call
          (void *param_1,ulong64 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  atomic<int> aVar3;
  ulong64 uVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  uVar4 = *param_2;
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f021326;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar5;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar7);
    lVar2 = *(longlong *)param_1;
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x90) == '\0')) {
      plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x20) + 0x68);
      *plVar1 = *plVar1 - (longlong)*(int *)(lVar2 + 0xa0);
      *(int *)(lVar2 + 0xa0) = (int)uVar4;
      plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x20) + 0x68);
      *plVar1 = *plVar1 + (longlong)(int)uVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return;
    }
  }
LAB_14f021326:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Call @ 14f021370

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FChunkDownloader::MountChunkInternal'::__l65::<lambda_1>,void,bool>::Call
          (void *param_1,bool *param_2)

{
  `FChunkDownloader::MountChunkInternal'::__l65::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14f021380

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDownload::StartDownload'::__l2::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  int iVar1;
  FDownload *this;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  iVar1 = *param_2;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f0213b0;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this = *(FDownload **)param_1;
    if ((this != (FDownload *)0x0) && (this->bHasCompleted == false)) {
      FDownload::OnDownloadComplete
                (this,(FString *)((longlong)param_1 + 0x18),*(int *)((longlong)param_1 + 0x10),iVar1
                );
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_14f0213b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14f0213f0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`PlatformStreamDownload'::__l2::<lambda_3>,void>::
Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0213f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x118))();
  return;
}

