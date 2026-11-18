// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 1

// FCommandParameters @ 1446e9190

FCommandParameters * __thiscall
`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::FCommandParameters::FCommandParameters
          (void *this,FCommandParameters *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->Filename).Data.ArrayNum;
  _Src = (param_1->Filename).Data.AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 * 2);
  }
  *(EDesiredImageFormat *)((longlong)this + 0x10) = param_1->Format;
  *(int *)((longlong)this + 0x14) = param_1->CompressionQuality;
  *(bool *)((longlong)this + 0x18) = param_1->bOverwriteFile;
  *(bool *)((longlong)this + 0x19) = param_1->bAsync;
  lVar2 = *(longlong *)&param_1->OnComplete;
  *(longlong *)((longlong)this + 0x20) = lVar2;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)&(param_1->OnComplete).field_0x28;
    puVar5 = (undefined8 *)&(param_1->OnComplete).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar5 = puVar3;
    }
    (**(code **)*puVar5)();
  }
  *(IImageWriteQueue **)((longlong)this + 0x50) = param_1->ImageWriteQueue;
  *(TPromise<void> **)((longlong)this + 0x58) = (param_1->SharedPromise).Object;
  pTVar4 = (param_1->SharedPromise).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x60) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

