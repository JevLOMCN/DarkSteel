// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 3

// ~IInterchangeMeshPayloadInterface @ 14e691c80

void __thiscall
IInterchangeMeshPayloadInterface::~IInterchangeMeshPayloadInterface
          (IInterchangeMeshPayloadInterface *this)

{
  *this = (IInterchangeMeshPayloadInterface)&___7IInterchangeMeshPayloadInterface__6B_;
  return;
}

// GetMeshPayloadData @ 14e69e500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::Interchange::FMeshPayloadData> * __thiscall
IInterchangeMeshPayloadInterface::GetMeshPayloadData
          (IInterchangeMeshPayloadInterface *this,
          TOptional<UE::Interchange::FMeshPayloadData> *__return_storage_ptr__,
          FInterchangeMeshPayLoadKey *param_1,TTransform<double> *param_2)

{
  ForAnyElementType _Src;
  int iVar1;
  undefined1 auStackY_148 [32];
  FAttributeKey local_108;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  ForAnyElementType local_a8;
  long64 lStack_a0;
  long64 local_98;
  ulong64 local_90;
  undefined8 local_88;
  _RTL_CRITICAL_SECTION local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_cc = 0x80;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c4 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  lStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_c8 = 0xffffffff;
  local_88._0_4_ = 0.1;
  local_88._4_4_ = 0;
  InitializeCriticalSectionAndSpinCount(&local_80,4000);
  _Src = UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.AllocatorInstance;
  local_108.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Key.Data.ArrayMax = 0;
  iVar1 = UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.ArrayNum;
  local_108.Key.Data.ArrayNum = iVar1;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_108,iVar1,&local_108.Key.Data.ArrayMax);
    memcpy(local_108.Key.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar1 * 2);
  }
  UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TTransform<double>,void>
            ((FAttributeStorage *)local_f8,&local_108,param_2,None);
  if (local_108.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Key.Data.AllocatorInstance.Data);
  }
  (**(code **)((longlong)*this + 0x10))(this,__return_storage_ptr__,param_1,local_f8);
  DeleteCriticalSection(&local_80);
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_f8,0,local_f8._8_4_);
  iVar1 = SUB84(local_f8._8_8_,4);
  local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
  }
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_d0 = 0;
  if (0x80 < local_cc) {
    local_cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  return __return_storage_ptr__;
}

// _getUObject @ 14e6aac80

UObject * __thiscall
IInterchangeMeshPayloadInterface::_getUObject(IInterchangeMeshPayloadInterface *this)

{
  return (UObject *)0x0;
}

