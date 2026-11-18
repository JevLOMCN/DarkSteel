// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// begin @ 1454641f0

TConstPayloadIterator<FUpdateInstanceCommand> * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TPayloadRangeView<FUpdateInstanceCommand>::begin
          (void *this,TConstPayloadIterator<FUpdateInstanceCommand> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TConstPayloadIterator<FUpdateInstanceCommand> *pTVar4;
  
  lVar1 = *(longlong *)this;
  if ((*(longlong *)(lVar1 + 8) != 0) && (*(int *)(*(longlong *)(lVar1 + 8) + 8) != 0x78)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x236,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TConstPayloadIterator<FUpdateInstanceCommand> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Payloads = *(TPayloadArray<FUpdateInstanceCommand> **)(lVar1 + 8);
  __return_storage_ptr__->Commands =
       (TArray<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::FUpdateCommand,TSizedDefaultAllocator<32>_>
        *)(lVar1 + 0x200);
  __return_storage_ptr__->Index = 0;
  TConstPayloadIterator<FUpdateInstanceCommand>::SkipDeleted(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// begin @ 145464270

TConstPayloadIterator<FUpdateTransformCommand> * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TPayloadRangeView<FUpdateTransformCommand>::begin
          (void *this,TConstPayloadIterator<FUpdateTransformCommand> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TConstPayloadIterator<FUpdateTransformCommand> *pTVar4;
  
  plVar1 = *(longlong **)this;
  if ((*plVar1 != 0) && (*(int *)(*plVar1 + 8) != 0x110)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x236,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TConstPayloadIterator<FUpdateTransformCommand> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Payloads = (TPayloadArray<FUpdateTransformCommand> *)*plVar1;
  __return_storage_ptr__->Commands =
       (TArray<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::FUpdateCommand,TSizedDefaultAllocator<32>_>
        *)(plVar1 + 0x40);
  __return_storage_ptr__->Index = 0;
  TConstPayloadIterator<FUpdateTransformCommand>::SkipDeleted(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// end @ 1454642f0

TConstPayloadIterator<FUpdateInstanceCommand> * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TPayloadRangeView<FUpdateInstanceCommand>::end
          (void *this,TConstPayloadIterator<FUpdateInstanceCommand> *__return_storage_ptr__)

{
  longlong lVar1;
  TPayloadArray<FUpdateInstanceCommand> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TConstPayloadIterator<FUpdateInstanceCommand> *pTVar5;
  int iVar6;
  
  lVar1 = *(longlong *)this;
  if ((*(longlong *)(lVar1 + 8) != 0) && (*(int *)(*(longlong *)(lVar1 + 8) + 8) != 0x78)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x236,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TConstPayloadIterator<FUpdateInstanceCommand> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar2 = *(TPayloadArray<FUpdateInstanceCommand> **)(lVar1 + 8);
  if (pTVar2 == (TPayloadArray<FUpdateInstanceCommand> *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (pTVar2->PayloadData).ArrayNum;
  }
  __return_storage_ptr__->Payloads = pTVar2;
  __return_storage_ptr__->Index = iVar6;
  __return_storage_ptr__->Commands =
       (TArray<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::FUpdateCommand,TSizedDefaultAllocator<32>_>
        *)(lVar1 + 0x200);
  TConstPayloadIterator<FUpdateInstanceCommand>::SkipDeleted(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// end @ 145464380

TConstPayloadIterator<FUpdateTransformCommand> * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TPayloadRangeView<FUpdateTransformCommand>::end
          (void *this,TConstPayloadIterator<FUpdateTransformCommand> *__return_storage_ptr__)

{
  longlong *plVar1;
  TPayloadArray<FUpdateTransformCommand> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TConstPayloadIterator<FUpdateTransformCommand> *pTVar5;
  int iVar6;
  
  plVar1 = *(longlong **)this;
  if ((*plVar1 != 0) && (*(int *)(*plVar1 + 8) != 0x110)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x236,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TConstPayloadIterator<FUpdateTransformCommand> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar2 = (TPayloadArray<FUpdateTransformCommand> *)*plVar1;
  if (pTVar2 == (TPayloadArray<FUpdateTransformCommand> *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (pTVar2->PayloadData).ArrayNum;
  }
  __return_storage_ptr__->Payloads = pTVar2;
  __return_storage_ptr__->Index = iVar6;
  __return_storage_ptr__->Commands =
       (TArray<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::FUpdateCommand,TSizedDefaultAllocator<32>_>
        *)(plVar1 + 0x40);
  TConstPayloadIterator<FUpdateTransformCommand>::SkipDeleted(__return_storage_ptr__);
  return __return_storage_ptr__;
}

