// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticStruct @ 1485e4e90

UScriptStruct * __cdecl FSkeletalMeshSourceModel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshSourceModel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshSourceModel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSourceModel,(UObject *)pUVar1,
                         L"SkeletalMeshSourceModel");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshSourceModel.OuterSingleton;
}

// FSkeletalMeshSourceModel @ 148623850

FSkeletalMeshSourceModel * __thiscall
FSkeletalMeshSourceModel::FSkeletalMeshSourceModel
          (FSkeletalMeshSourceModel *this,FSkeletalMeshSourceModel *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  
  FSkeletalMeshLODInfo::FSkeletalMeshLODInfo((FSkeletalMeshLODInfo *)this);
  pTVar1 = &this->CachedSkinWeightProfileNames;
  this->TriangleCount = 0;
  this->VertexCount = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CachedSkinWeightProfileNames).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&pTVar1->AllocatorInstance,1,&(this->CachedSkinWeightProfileNames).ArrayMax);
  pTVar2 = &this->CachedMorphTargetNames;
  *(undefined8 *)(pTVar1->AllocatorInstance).Data = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CachedMorphTargetNames).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&pTVar2->AllocatorInstance,1,&(this->CachedMorphTargetNames).ArrayMax);
  *(undefined8 *)(pTVar2->AllocatorInstance).Data = 0;
  (this->CachedHasVertexColors).bIsSet = false;
  (this->CachedVertexColorGuid).A = 0;
  (this->CachedVertexColorGuid).B = 0;
  (this->CachedVertexColorGuid).C = 0;
  (this->CachedVertexColorGuid).D = 0;
  return this;
}

// FSkeletalMeshSourceModel @ 148623940

FSkeletalMeshSourceModel * __thiscall
FSkeletalMeshSourceModel::FSkeletalMeshSourceModel(FSkeletalMeshSourceModel *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  
  FSkeletalMeshLODInfo::FSkeletalMeshLODInfo((FSkeletalMeshLODInfo *)this);
  pTVar1 = &this->CachedSkinWeightProfileNames;
  this->TriangleCount = 0;
  this->VertexCount = 0;
  (this->Bounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).SphereRadius = 0.0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CachedSkinWeightProfileNames).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&pTVar1->AllocatorInstance,1,&(this->CachedSkinWeightProfileNames).ArrayMax);
  pTVar2 = &this->CachedMorphTargetNames;
  *(undefined8 *)(pTVar1->AllocatorInstance).Data = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CachedMorphTargetNames).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&pTVar2->AllocatorInstance,1,&(this->CachedMorphTargetNames).ArrayMax);
  *(undefined8 *)(pTVar2->AllocatorInstance).Data = 0;
  (this->CachedHasVertexColors).bIsSet = false;
  (this->CachedVertexColorGuid).A = 0;
  (this->CachedVertexColorGuid).B = 0;
  (this->CachedVertexColorGuid).C = 0;
  (this->CachedVertexColorGuid).D = 0;
  return this;
}

// operator= @ 148626b90

FSkeletalMeshSourceModel * __thiscall
FSkeletalMeshSourceModel::operator=
          (FSkeletalMeshSourceModel *this,FSkeletalMeshSourceModel *param_1)

{
  return this;
}

// GetMorphTargetNames @ 14864bf10

TArrayView<FName_const_,int> * __thiscall
FSkeletalMeshSourceModel::GetMorphTargetNames
          (FSkeletalMeshSourceModel *this,TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FName_const_,int> *pTVar3;
  int iVar4;
  
  if (((this->CachedMorphTargetNames).ArrayNum == 1) &&
     (*(longlong *)(this->CachedMorphTargetNames).AllocatorInstance.Data == 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`FSkeletalMeshSourceModel::GetMorphTargetNames'::__l5::
               _dynamic_atexit_destructor_for__EmptyArray__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    iVar4 = ::EmptyArray.ArrayNum;
    __return_storage_ptr__->DataPtr = (FName *)::EmptyArray.AllocatorInstance.Data;
  }
  else {
    iVar4 = (this->CachedMorphTargetNames).ArrayNum;
    __return_storage_ptr__->DataPtr = (FName *)(this->CachedMorphTargetNames).AllocatorInstance.Data
    ;
  }
  if (iVar4 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FName_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar4;
  return __return_storage_ptr__;
}

// GetSkinWeightProfileNames @ 14864eb50

TArrayView<FName_const_,int> * __thiscall
FSkeletalMeshSourceModel::GetSkinWeightProfileNames
          (FSkeletalMeshSourceModel *this,TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FName_const_,int> *pTVar3;
  int iVar4;
  
  if (((this->CachedSkinWeightProfileNames).ArrayNum == 1) &&
     (*(longlong *)(this->CachedSkinWeightProfileNames).AllocatorInstance.Data == 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`FSkeletalMeshSourceModel::GetSkinWeightProfileNames'::__l5::
               _dynamic_atexit_destructor_for__EmptyArray__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    iVar4 = ::EmptyArray.ArrayNum;
    __return_storage_ptr__->DataPtr = (FName *)::EmptyArray.AllocatorInstance.Data;
  }
  else {
    iVar4 = (this->CachedSkinWeightProfileNames).ArrayNum;
    __return_storage_ptr__->DataPtr =
         (FName *)(this->CachedSkinWeightProfileNames).AllocatorInstance.Data;
  }
  if (iVar4 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FName_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar4;
  return __return_storage_ptr__;
}

// GetVertexColorGuid @ 148650e60

TOptional<FGuid> * __thiscall
FSkeletalMeshSourceModel::GetVertexColorGuid
          (FSkeletalMeshSourceModel *this,TOptional<FGuid> *__return_storage_ptr__)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((this->CachedHasVertexColors).bIsSet == false) {
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    bVar1 = (this->CachedHasVertexColors).TypedValue;
    __return_storage_ptr__->bIsSet = false;
    if (bVar1 != false) {
      uVar2 = (this->CachedVertexColorGuid).A;
      uVar3 = (this->CachedVertexColorGuid).B;
      uVar4 = (this->CachedVertexColorGuid).C;
      uVar5 = (this->CachedVertexColorGuid).D;
      __return_storage_ptr__->bIsSet = true;
      (__return_storage_ptr__->TypedValue).A = uVar2;
      (__return_storage_ptr__->TypedValue).B = uVar3;
      (__return_storage_ptr__->TypedValue).C = uVar4;
      (__return_storage_ptr__->TypedValue).D = uVar5;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// Initialize @ 148658480

void __thiscall
FSkeletalMeshSourceModel::Initialize(FSkeletalMeshSourceModel *this,USkeletalMesh *param_1)

{
  return;
}

