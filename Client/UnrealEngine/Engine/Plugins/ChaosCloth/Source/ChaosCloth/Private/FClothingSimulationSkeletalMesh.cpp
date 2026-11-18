// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 32

// FClothingSimulationSkeletalMesh @ 14db8fa60

FClothingSimulationSkeletalMesh * __thiscall
Chaos::FClothingSimulationSkeletalMesh::FClothingSimulationSkeletalMesh
          (FClothingSimulationSkeletalMesh *this,UClothingAssetCommon *param_1,
          USkeletalMeshComponent *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  USkeletalMesh *pUVar6;
  longlong lVar7;
  FClothingSimulationSkeletalMesh *pFVar8;
  FString *pFVar9;
  int iVar10;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  lVar7 = param_2->_padding_;
  if (lVar7 == 0) {
    local_res18 = (FName)param_2->_padding_;
    ::FName::ToString(&local_res18,&local_98);
    pFVar9 = &local_98;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    bVar5 = true;
  }
  else {
    if (*(int *)(lVar7 + 0x1f0) < 2) {
      local_res8 = *(FName *)(lVar7 + 0x18);
      ::FName::ToString(&local_res8,&local_a8);
    }
    else {
      ::FString::FString(&local_a8,(FString *)(lVar7 + 0x1e8));
    }
    FStringFormatArg::FStringFormatArg(&local_68,&local_a8);
    local_res10 = (FName)param_2->_padding_;
    ::FName::ToString(&local_res10,&local_78);
    FStringFormatArg::FStringFormatArg(&local_48,&local_78);
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_b8.AllocatorInstance,2,&local_b8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_b8.AllocatorInstance.Data,&local_68,2);
    ::FString::FormatImpl(&local_88,L"{0}|{1}",&local_b8);
    pFVar9 = &local_88;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = false;
  }
  this->_padding_ = (longlong)&___7FClothingSimulationMesh_Chaos__6B_;
  ::FString::FString((FString *)&this->_padding_,pFVar9);
  this->_padding_ = 0;
  if (bVar5) {
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if (bVar2) {
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (bVar3) {
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  if (bVar4) {
    if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
    }
  }
  this->Asset = param_1;
  this->_padding_ = (longlong)&___7FClothingSimulationSkeletalMesh_Chaos__6B_;
  this->SkeletalMeshComponent = param_2;
  pUVar6 = CastChecked<USkeletalMesh,UObject>((UObject *)param_1->_padding_);
  lVar7 = (**(code **)(pUVar6->_padding_ + 800))(pUVar6);
  if (this->Asset == (UClothingAssetCommon *)0x0) {
    iVar10 = -1;
  }
  else {
    iVar10 = this->Asset->ReferenceBoneIndex;
  }
  if (((lVar7 != 0) && (-1 < iVar10)) && (iVar10 < *(int *)(lVar7 + 0x28))) {
    if (iVar10 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FClothingSimulationSkeletalMesh *)(*pcVar1)();
        return pFVar8;
      }
    }
    this->_padding_ = *(longlong *)(*(longlong *)(lVar7 + 0x20) + (longlong)iVar10 * 0xc);
  }
  return this;
}

// ~FClothingSimulationSkeletalMesh @ 14db9f750

void __thiscall
Chaos::FClothingSimulationSkeletalMesh::~FClothingSimulationSkeletalMesh
          (FClothingSimulationSkeletalMesh *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FClothingSimulationMesh_Chaos__6B_;
  pvVar1 = (void *)this->_padding_;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// GetBoneData @ 14dbf7d00

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<FClothVertBoneData_const_,int> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetBoneData
          (FClothingSimulationSkeletalMesh *this,
          TArrayView<FClothVertBoneData_const_,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  UClothingAssetCommon *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<FClothVertBoneData_const_,int> *pTVar6;
  uint uVar7;
  
  pUVar2 = this->Asset;
  if (((pUVar2 != (UClothingAssetCommon *)0x0) && (-1 < param_1)) &&
     (param_1 < (pUVar2->LodData).ArrayNum)) {
    uVar7 = 0;
    if (param_1 < (pUVar2->LodData).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TArrayView<FClothVertBoneData_const_,int> *)(*pcVar4)();
        return pTVar6;
      }
    }
    pFVar3 = (pUVar2->LodData).AllocatorInstance.Data;
    if ((2 < (byte)LogChaosCloth._0_1_) &&
       (0xc < *(int *)(pFVar3 + (longlong)param_1 * 0x158 + 0x110))) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
    }
    iVar1 = *(int *)(pFVar3 + (longlong)param_1 * 0x158 + 0x98);
    __return_storage_ptr__->DataPtr =
         *(FClothVertBoneData **)(pFVar3 + (longlong)param_1 * 0x158 + 0x90);
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TArrayView<FClothVertBoneData_const_,int> *)(*pcVar4)();
        return pTVar6;
      }
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (FClothVertBoneData *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetBoneMap @ 14dbf7e30

TArrayView<int_const_,int> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetBoneMap
          (FClothingSimulationSkeletalMesh *this,TArrayView<int_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  UClothingAssetCommon *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<int_const_,int> *pTVar6;
  undefined4 uStack_1c;
  uint uStack_c;
  
  pUVar2 = this->Asset;
  if (pUVar2 == (UClothingAssetCommon *)0x0) {
    __return_storage_ptr__->DataPtr = (int *)0x0;
    *(ulonglong *)&__return_storage_ptr__->ArrayNum = (ulonglong)uStack_c << 0x20;
    return __return_storage_ptr__;
  }
  pFVar3 = (pUVar2->UsedBoneIndices).AllocatorInstance.Data;
  iVar1 = (pUVar2->UsedBoneIndices).ArrayNum;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<int_const_,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->DataPtr = (int *)pFVar3;
  *(ulonglong *)&__return_storage_ptr__->ArrayNum = CONCAT44(uStack_1c,iVar1);
  return __return_storage_ptr__;
}

// GetBoneTransforms @ 14dbf7ed0

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetBoneTransforms(FClothingSimulationSkeletalMesh *this)

{
  FClothingSimulationContextCommon *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Chaos::FClothingSimulationSkeletalMesh::GetBoneTransforms'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1 = GetContext(this);
  if (pFVar1 != (FClothingSimulationContextCommon *)0x0) {
    pFVar1 = GetContext(this);
    return &pFVar1->BoneTransforms;
  }
  return &::EmptyArray;
}

// GetComponentToWorldTransform @ 14dbfa900

TTransform<double> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetComponentToWorldTransform
          (FClothingSimulationSkeletalMesh *this)

{
  FClothingSimulationContextCommon *pFVar1;
  
  pFVar1 = GetContext(this);
  if (pFVar1 != (FClothingSimulationContextCommon *)0x0) {
    pFVar1 = GetContext(this);
    return &pFVar1->ComponentToWorld;
  }
  return &UE::Math::TTransform<double>::Identity;
}

// GetContext @ 14dbfb820

FClothingSimulationContextCommon * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetContext(FClothingSimulationSkeletalMesh *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USkeletalMeshComponent *pUVar3;
  longlong *plVar4;
  char cVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pUVar3 = this->SkeletalMeshComponent;
  if (pUVar3 != (USkeletalMeshComponent *)0x0) {
    iVar2 = (pUVar3->ClothingSimulationInstances).ArrayNum;
    pFVar6 = (pUVar3->ClothingSimulationInstances).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar2 * 0x28;
    while( true ) {
      if ((pUVar3->ClothingSimulationInstances).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FClothingSimulationInstance_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      plVar4 = *(longlong **)(pFVar6 + 0x18);
      if ((plVar4 != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*plVar4 + 0x2d8))(plVar4,this->Asset), cVar5 != '\0')) {
        return *(FClothingSimulationContextCommon **)(pFVar6 + 8);
      }
      pFVar6 = pFVar6 + 0x28;
    }
  }
  return (FClothingSimulationContextCommon *)0x0;
}

// GetFaceIntMaps @ 14dbfbe50

TMap<FString,TArrayView<int_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>_>
* __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetFaceIntMaps
          (FClothingSimulationSkeletalMesh *this,
          TMap<FString,TArrayView<int_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>_>
          *__return_storage_ptr__,int param_1)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  return __return_storage_ptr__;
}

// GetFaceSets @ 14dbfbe90

TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
* __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetFaceSets
          (FClothingSimulationSkeletalMesh *this,
          TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
          *__return_storage_ptr__,int param_1)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  return __return_storage_ptr__;
}

// GetIndices @ 14dbfc3e0

TArrayView<unsigned_int_const_,int> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetIndices
          (FClothingSimulationSkeletalMesh *this,
          TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  UClothingAssetCommon *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<unsigned_int_const_,int> *pTVar6;
  uint uVar7;
  
  pUVar2 = this->Asset;
  if (((pUVar2 != (UClothingAssetCommon *)0x0) && (-1 < param_1)) &&
     (param_1 < (pUVar2->LodData).ArrayNum)) {
    uVar7 = 0;
    if (param_1 < (pUVar2->LodData).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TArrayView<unsigned_int_const_,int> *)(*pcVar4)();
        return pTVar6;
      }
    }
    pFVar3 = (pUVar2->LodData).AllocatorInstance.Data;
    __return_storage_ptr__->DataPtr = *(uint **)(pFVar3 + (longlong)param_1 * 0x158 + 0x20);
    iVar1 = *(int *)(pFVar3 + (longlong)param_1 * 0x158 + 0x28);
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TArrayView<unsigned_int_const_,int> *)(*pcVar4)();
        return pTVar6;
      }
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (uint *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetLODIndex @ 14dbfc5e0

int __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetLODIndex(FClothingSimulationSkeletalMesh *this)

{
  uint uVar1;
  int iVar2;
  UClothingAssetCommon *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = -1;
  if (this->SkeletalMeshComponent != (USkeletalMeshComponent *)0x0) {
    uVar1 = *(uint *)((longlong)&this->SkeletalMeshComponent->_padding_ + 4);
    pUVar3 = this->Asset;
    if (((pUVar3 != (UClothingAssetCommon *)0x0) && (-1 < (int)uVar1)) &&
       ((int)uVar1 < (pUVar3->LodMap).ArrayNum)) {
      uVar6 = 0;
      if ((int)uVar1 < (pUVar3->LodMap).ArrayNum) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      iVar2 = *(int *)((pUVar3->LodMap).AllocatorInstance.Data + (longlong)(int)uVar1 * 4);
      if ((-1 < iVar2) && (iVar7 = -1, iVar2 < (this->Asset->LodData).ArrayNum)) {
        iVar7 = iVar2;
      }
    }
  }
  return iVar7;
}

// GetLODIndexFromOwnerLODIndex @ 14dbfc6e0

int __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetLODIndexFromOwnerLODIndex
          (FClothingSimulationSkeletalMesh *this,int param_1)

{
  int iVar1;
  UClothingAssetCommon *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  pUVar2 = this->Asset;
  iVar6 = -1;
  if (((pUVar2 != (UClothingAssetCommon *)0x0) && (-1 < param_1)) &&
     (param_1 < (pUVar2->LodMap).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (pUVar2->LodMap).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar1 = *(int *)((pUVar2->LodMap).AllocatorInstance.Data + (longlong)param_1 * 4);
    if ((-1 < iVar1) && (iVar6 = -1, iVar1 < (this->Asset->LodData).ArrayNum)) {
      iVar6 = iVar1;
    }
  }
  return iVar6;
}

// GetNormals @ 14dbfcb10

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetNormals
          (FClothingSimulationSkeletalMesh *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,int param_1)

{
  UClothingAssetCommon *pUVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar4;
  uint uVar5;
  
  pUVar1 = this->Asset;
  if (((pUVar1 != (UClothingAssetCommon *)0x0) && (-1 < param_1)) &&
     (param_1 < (pUVar1->LodData).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (pUVar1->LodData).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
        return pTVar4;
      }
    }
    TArrayView<UE::Math::TVector<float>_const_,int>::
    TArrayView<UE::Math::TVector<float>_const_,int><TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
              (__return_storage_ptr__,
               (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((pUVar1->LodData).AllocatorInstance.Data + (longlong)param_1 * 0x158 + 0x10));
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetNumLODs @ 14dbfce40

int __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetNumLODs(FClothingSimulationSkeletalMesh *this)

{
  if (this->Asset != (UClothingAssetCommon *)0x0) {
    return (this->Asset->LodData).ArrayNum;
  }
  return 0;
}

// GetNumPatternPoints @ 14dbfd0b0

int __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetNumPatternPoints
          (FClothingSimulationSkeletalMesh *this,int param_1)

{
  return 0;
}

// GetNumPoints @ 14dbfd0e0

int __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetNumPoints
          (FClothingSimulationSkeletalMesh *this,int param_1)

{
  UClothingAssetCommon *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  pUVar1 = this->Asset;
  if (((pUVar1 != (UClothingAssetCommon *)0x0) && (-1 < param_1)) &&
     (param_1 < (pUVar1->LodData).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (pUVar1->LodData).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    return *(int *)((pUVar1->LodData).AllocatorInstance.Data + (longlong)param_1 * 0x158 + 8);
  }
  return 0;
}

// GetOwnerLODIndex @ 14dbfd970

/* WARNING: Removing unreachable block (ram,0x00014dbfd9a9) */

int __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetOwnerLODIndex
          (FClothingSimulationSkeletalMesh *this,int param_1)

{
  UClothingAssetCommon *pUVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  
  pUVar1 = this->Asset;
  if (pUVar1 != (UClothingAssetCommon *)0x0) {
    pFVar2 = (pUVar1->LodMap).AllocatorInstance.Data;
    for (pFVar4 = pFVar2; pFVar4 != pFVar2 + (longlong)(pUVar1->LodMap).ArrayNum * 4;
        pFVar4 = pFVar4 + 4) {
      if (*(int *)pFVar4 == param_1) {
        iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar2 >> 2);
        iVar5 = 0;
        if (iVar3 != -1) {
          iVar5 = iVar3;
        }
        return iVar5;
      }
    }
  }
  return 0;
}

// GetPatternIndices @ 14dbfeb40

TArrayView<unsigned_int_const_,int> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetPatternIndices
          (FClothingSimulationSkeletalMesh *this,
          TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,int param_1)

{
  __return_storage_ptr__->DataPtr = (uint *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetPatternPositions @ 14dbfeb90

TArrayView<UE::Math::TVector2<float>_const_,int> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetPatternPositions
          (FClothingSimulationSkeletalMesh *this,
          TArrayView<UE::Math::TVector2<float>_const_,int> *__return_storage_ptr__,int param_1)

{
  __return_storage_ptr__->DataPtr = (TVector2<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetPatternToWeldedIndices @ 14dbfebb0

TArrayView<unsigned_int_const_,int> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetPatternToWeldedIndices
          (FClothingSimulationSkeletalMesh *this,
          TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,int param_1)

{
  __return_storage_ptr__->DataPtr = (uint *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetPositions @ 14dbfec00

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetPositions
          (FClothingSimulationSkeletalMesh *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,int param_1)

{
  UClothingAssetCommon *pUVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar4;
  uint uVar5;
  
  pUVar1 = this->Asset;
  if (((pUVar1 != (UClothingAssetCommon *)0x0) && (-1 < param_1)) &&
     (param_1 < (pUVar1->LodData).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (pUVar1->LodData).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
        return pTVar4;
      }
    }
    TArrayView<UE::Math::TVector<float>_const_,int>::
    TArrayView<UE::Math::TVector<float>_const_,int><TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
              (__return_storage_ptr__,
               (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((pUVar1->LodData).AllocatorInstance.Data + (longlong)param_1 * 0x158));
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRefToLocalMatrices @ 14dbff6c0

TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetRefToLocalMatrices(FClothingSimulationSkeletalMesh *this)

{
  FClothingSimulationContextCommon *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Chaos::FClothingSimulationSkeletalMesh::GetRefToLocalMatrices'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1 = GetContext(this);
  if (pFVar1 != (FClothingSimulationContextCommon *)0x0) {
    pFVar1 = GetContext(this);
    return &pFVar1->RefToLocals;
  }
  return &::EmptyArray;
}

// GetReferenceBoneIndex @ 14dbff770

int __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetReferenceBoneIndex(FClothingSimulationSkeletalMesh *this)

{
  if (this->Asset != (UClothingAssetCommon *)0x0) {
    return this->Asset->ReferenceBoneIndex;
  }
  return -1;
}

// GetReferenceBoneTransform @ 14dbff790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetReferenceBoneTransform
          (FClothingSimulationSkeletalMesh *this,TTransform<double> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  FClothingSimulationContextCommon *pFVar8;
  TTransform<double> *pTVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar8 = GetContext(this);
  if (pFVar8 == (FClothingSimulationContextCommon *)0x0) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    uVar11 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar12 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar13 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar14 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  else {
    if (this->Asset == (UClothingAssetCommon *)0x0) {
      iVar10 = -1;
    }
    else {
      iVar10 = this->Asset->ReferenceBoneIndex;
    }
    if ((iVar10 < 0) || (iVar1 = (pFVar8->BoneTransforms).ArrayNum, iVar1 <= iVar10)) {
      local_d8.Rotation.XY.m128d_f64[0] = (pFVar8->ComponentToWorld).Rotation.XY.m128d_f64[0];
      local_d8.Rotation.XY.m128d_f64[1] = (pFVar8->ComponentToWorld).Rotation.XY.m128d_f64[1];
      local_d8.Rotation.ZW.m128d_f64[0] = (pFVar8->ComponentToWorld).Rotation.ZW.m128d_f64[0];
      local_d8.Rotation.ZW.m128d_f64[1] = (pFVar8->ComponentToWorld).Rotation.ZW.m128d_f64[1];
      local_d8.Translation.XY.m128d_f64[0] = (pFVar8->ComponentToWorld).Translation.XY.m128d_f64[0];
      local_d8.Translation.XY.m128d_f64[1] = (pFVar8->ComponentToWorld).Translation.XY.m128d_f64[1];
      local_d8.Translation.ZW.m128d_f64[0] = (pFVar8->ComponentToWorld).Translation.ZW.m128d_f64[0];
      local_d8.Translation.ZW.m128d_f64[1] = (pFVar8->ComponentToWorld).Translation.ZW.m128d_f64[1];
      pTVar9 = &local_d8;
      local_d8.Scale3D.XY.m128d_f64[0] = (pFVar8->ComponentToWorld).Scale3D.XY.m128d_f64[0];
      local_d8.Scale3D.XY.m128d_f64[1] = (pFVar8->ComponentToWorld).Scale3D.XY.m128d_f64[1];
      local_d8.Scale3D.ZW.m128d_f64[0] = (pFVar8->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
      local_d8.Scale3D.ZW.m128d_f64[1] = (pFVar8->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
    }
    else {
      if (iVar10 < 0) {
        local_e8 = (longlong)iVar10;
        local_e0 = (longlong)iVar1;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TTransform<double> *)(*pcVar2)();
          return pTVar9;
        }
      }
      local_78.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_78.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_78.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_78.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_78.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_78.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_78.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_78.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_78,
                 (TTransform<double> *)
                 ((pFVar8->BoneTransforms).AllocatorInstance.Data + (longlong)iVar10 * 0x60),
                 &pFVar8->ComponentToWorld);
      pTVar9 = &local_78;
    }
    dVar3 = (pTVar9->Rotation).XY.m128d_f64[1];
    dVar4 = (pTVar9->Rotation).ZW.m128d_f64[0];
    dVar5 = (pTVar9->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar9->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar3;
    dVar3 = (pTVar9->Translation).XY.m128d_f64[0];
    dVar6 = (pTVar9->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar4;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar5;
    dVar4 = (pTVar9->Translation).ZW.m128d_f64[0];
    dVar5 = (pTVar9->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar3;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar6;
    dVar3 = (pTVar9->Scale3D).XY.m128d_f64[0];
    dVar6 = (pTVar9->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar4;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar5;
    uVar11 = *(undefined4 *)(pTVar9->Scale3D).ZW.m128d_f64;
    uVar12 = *(undefined4 *)((longlong)(pTVar9->Scale3D).ZW.m128d_f64 + 4);
    uVar13 = *(undefined4 *)((pTVar9->Scale3D).ZW.m128d_f64 + 1);
    uVar14 = *(undefined4 *)((longlong)(pTVar9->Scale3D).ZW.m128d_f64 + 0xc);
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar3;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar6;
  }
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = uVar11;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uVar12;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uVar13;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uVar14;
  return __return_storage_ptr__;
}

// GetTethers @ 14dc00390

TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetTethers
          (FClothingSimulationSkeletalMesh *this,
          TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UClothingAssetCommon *pUVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  undefined4 uStack_1c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  pUVar4 = this->Asset;
  if (((pUVar4 != (UClothingAssetCommon *)0x0) && (-1 < param_1)) &&
     (param_1 < (pUVar4->LodData).ArrayNum)) {
    uVar10 = 0;
    if (param_1 < (pUVar4->LodData).ArrayNum) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> *)
               (*pcVar6)();
      return pTVar9;
    }
    pFVar13 = (pUVar4->LodData).AllocatorInstance.Data +
              ((ulonglong)param_2 + 0xf) * 0x10 + (longlong)param_1 * 0x158;
    uVar10 = *(uint *)(pFVar13 + 8);
    lVar12 = (longlong)(int)uVar10;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if (*piVar1 < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar10,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    uVar11 = 0;
    if (0 < (int)uVar10) {
      lVar14 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar11 < *(int *)(pFVar13 + 8)) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_>
                    *)(*pcVar6)();
          return pTVar9;
        }
        uVar5 = *(undefined8 *)(*(longlong *)pFVar13 + lVar14);
        iVar3 = *(int *)(*(longlong *)pFVar13 + 8 + lVar14);
        if ((iVar3 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar9 = (TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_>
                    *)(*pcVar6)();
          return pTVar9;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        uVar11 = uVar11 + 1;
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        lVar14 = lVar14 + 0x10;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar2 = uVar5;
        *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_1c,iVar3);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  return __return_storage_ptr__;
}

// GetTransitionDownSkinData @ 14dc005a0

TArrayView<FMeshToMeshVertData_const_,int> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetTransitionDownSkinData
          (FClothingSimulationSkeletalMesh *this,
          TArrayView<FMeshToMeshVertData_const_,int> *__return_storage_ptr__,int param_1)

{
  UClothingAssetCommon *pUVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMeshToMeshVertData_const_,int> *pTVar4;
  uint uVar5;
  
  pUVar1 = this->Asset;
  if (((pUVar1 != (UClothingAssetCommon *)0x0) && (-1 < param_1)) &&
     (param_1 < (pUVar1->LodData).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (pUVar1->LodData).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArrayView<FMeshToMeshVertData_const_,int> *)(*pcVar2)();
        return pTVar4;
      }
    }
    TArrayView<FMeshToMeshVertData_const_,int>::
    TArrayView<FMeshToMeshVertData_const_,int><TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>_const_&,TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>_>
              (__return_storage_ptr__,
               (TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
               ((pUVar1->LodData).AllocatorInstance.Data + (longlong)param_1 * 0x158 + 0x148));
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (FMeshToMeshVertData *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetTransitionUpSkinData @ 14dc00670

TArrayView<FMeshToMeshVertData_const_,int> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetTransitionUpSkinData
          (FClothingSimulationSkeletalMesh *this,
          TArrayView<FMeshToMeshVertData_const_,int> *__return_storage_ptr__,int param_1)

{
  UClothingAssetCommon *pUVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMeshToMeshVertData_const_,int> *pTVar4;
  uint uVar5;
  
  pUVar1 = this->Asset;
  if (((pUVar1 != (UClothingAssetCommon *)0x0) && (-1 < param_1)) &&
     (param_1 < (pUVar1->LodData).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (pUVar1->LodData).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArrayView<FMeshToMeshVertData_const_,int> *)(*pcVar2)();
        return pTVar4;
      }
    }
    TArrayView<FMeshToMeshVertData_const_,int>::
    TArrayView<FMeshToMeshVertData_const_,int><TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>_const_&,TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>_>
              (__return_storage_ptr__,
               (TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
               ((pUVar1->LodData).AllocatorInstance.Data + (longlong)param_1 * 0x158 + 0x138));
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (FMeshToMeshVertData *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetVertexSets @ 14dc00ba0

TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
* __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetVertexSets
          (FClothingSimulationSkeletalMesh *this,
          TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
          *__return_storage_ptr__,int param_1)

{
  UClothingAssetCommon *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
  *pTVar5;
  uint uVar6;
  TPairInitializer<FString_const_&,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*_&&>
  local_res8;
  FString *local_18;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> ***local_10;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  pUVar1 = this->Asset;
  if (((pUVar1 != (UClothingAssetCommon *)0x0) && (-1 < param_1)) &&
     (param_1 < (pUVar1->LodData).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (pUVar1->LodData).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
                  *)(*pcVar3)();
        return pTVar5;
      }
    }
    pFVar2 = (pUVar1->LodData).AllocatorInstance.Data;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FString::FString(&SelfCollisionSphereSetName,L"SelfCollisionSphereSetName");
        atexit(`Chaos::FClothingSimulationSkeletalMesh::GetVertexSets'::__l5::
               _dynamic_atexit_destructor_for__SelfCollisionSphereSetName__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_res8.Value =
         (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
         (pFVar2 + (longlong)param_1 * 0x158 + 0xa0);
    local_18 = &SelfCollisionSphereSetName;
    local_10 = &local_res8.Value;
    TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_const_&,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*_&&>_>
              ((TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__,&local_res8,(bool *)&local_18);
  }
  return __return_storage_ptr__;
}

// GetWeightMapIndices @ 14dc010f0

TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetWeightMapIndices
          (FClothingSimulationSkeletalMesh *this,
          TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar5;
  int iVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulong64 uVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint local_res10 [2];
  uint local_a8;
  uint uStack_a4;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  TArray<FName,TSizedDefaultAllocator<32>_> local_88;
  int local_78;
  undefined1 local_74 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_68;
  FString *local_48;
  uint *local_40;
  FString local_38;
  
  uVar13 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  GetWeightMapNames(this,&local_88,param_1);
  iVar6 = local_88.ArrayNum;
  uVar14 = (ulong64)local_88.ArrayNum;
  if ((uint)local_88.ArrayNum <=
      (uint)(*(int *)&__return_storage_ptr__->field_0x8 -
            *(int *)&__return_storage_ptr__->field_0x34)) goto LAB_14dc0137f;
  if (local_88.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar14);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,local_88.ArrayNum);
  uVar10 = 1;
  if (3 < (uint)iVar6) {
    uVar8 = (ulonglong)(((uint)iVar6 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 == 0) ||
     (*(int *)&__return_storage_ptr__->field_0x48 < (int)uVar10)) {
    *(uint *)&__return_storage_ptr__->field_0x48 = uVar10;
    if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
    }
    if (uVar10 != 0) {
      uVar11 = uVar10;
      if (uVar10 < 2) {
        if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
          uVar11 = 0;
          goto LAB_14dc011cf;
        }
      }
      else {
LAB_14dc011cf:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar11,4);
      }
      if (0 < (int)uVar10) {
        uVar15 = (ulonglong)uVar10;
        uVar8 = uVar13;
        do {
          puVar7 = &__return_storage_ptr__->field_0x38;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
            puVar7 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
          }
          uVar4 = uVar8 & (longlong)(int)uVar10 - 1U;
          uVar8 = uVar8 + 1;
          *(undefined4 *)(puVar7 + uVar4 * 4) = 0xffffffff;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
    }
    if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
      uVar10 = *(uint *)&__return_storage_ptr__->field_0x28;
      local_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10;
      uStack_a4 = 1;
      local_a8 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uVar8 = uVar13;
      if (uVar10 != 0) {
        puVar16 = *(uint **)&__return_storage_ptr__->field_0x20;
        if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
          puVar16 = (uint *)local_68.Array;
        }
        uVar11 = *puVar16;
        uVar15 = uVar13;
        while (uVar11 == 0) {
          uStack_90 = (int)uVar15 + 0x20;
          uVar15 = (ulonglong)uStack_90;
          iVar6 = (int)uVar8;
          local_a8 = iVar6 + 1;
          uVar8 = (ulonglong)local_a8;
          if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_a8)
          goto LAB_14dc012bc;
          uVar11 = puVar16[(longlong)iVar6 + 1];
        }
        uStack_a4 = -uVar11 & uVar11;
        uVar8 = (ulonglong)uStack_a4 * 2 + 1;
        lVar1 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        local_78 = (int)lVar1;
        uStack_94 = local_78 + -1 + uStack_90;
        uVar8 = (ulonglong)uStack_94;
        if ((int)uVar10 < (int)uStack_94) {
LAB_14dc012bc:
          uVar8 = (ulonglong)uVar10;
          uStack_94 = uVar10;
        }
      }
      local_68._padding_ = CONCAT44(uStack_a4,local_a8);
      local_68.CurrentBitIndex = uStack_94;
      local_68.UnvisitedBitMask = 0xffffffff;
      local_68._28_4_ = uStack_8c;
      local_68.BaseBitIndex = uStack_90;
      local_74._4_8_ = __return_storage_ptr__;
      if ((int)uVar8 < (int)uVar10) {
        do {
          puVar12 = (undefined8 *)((longlong)(int)uVar8 * 0x20 + *(longlong *)local_74._4_8_);
          if (*(int *)(puVar12 + 1) == 0) {
            pwVar9 = L"";
            uVar10 = 0;
          }
          else {
            pwVar9 = (wchar_t *)*puVar12;
            uVar10 = *(int *)(puVar12 + 1) - 1;
          }
          uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar10,pwVar9);
          uVar10 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar10;
          *(uint *)((longlong)puVar12 + 0x1c) = uVar10;
          puVar7 = &__return_storage_ptr__->field_0x38;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
            puVar7 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
          }
          uVar15 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                   (longlong)(int)uVar10;
          *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(puVar7 + uVar15 * 4);
          *(int *)(puVar7 + uVar15 * 4) = (int)uVar8;
          local_68.UnvisitedBitMask = local_68.UnvisitedBitMask & ~local_68._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_68);
          uVar8 = (ulonglong)(uint)local_68.CurrentBitIndex;
        } while (local_68.CurrentBitIndex < (local_68.Array)->NumBits);
      }
    }
  }
  uVar14 = (ulong64)(uint)local_88.ArrayNum;
LAB_14dc0137f:
  local_res10[0] = 0;
  if (0 < (int)uVar14) {
    do {
      uVar11 = (uint)uVar13;
      uVar10 = 0;
      if ((int)uVar11 < (int)uVar14) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                  *)(*pcVar2)();
        return pTVar5;
      }
      local_48 = ::FName::ToString((FName *)(local_88.AllocatorInstance.Data +
                                            (longlong)(int)uVar11 * 8),&local_38);
      local_40 = local_res10;
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_&&,int_&>_>
                ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,(TPairInitializer<FString_&&,int_&> *)local_74,
                 (bool *)&local_48);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      uVar14 = (ulong64)(uint)local_88.ArrayNum;
      local_res10[0] = local_res10[0] + 1;
      uVar13 = (ulonglong)local_res10[0];
    } while ((int)local_res10[0] < local_88.ArrayNum);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetWeightMapNames @ 14dc01470

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetWeightMapNames
          (FClothingSimulationSkeletalMesh *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  UClothingAssetCommon *pUVar6;
  FScriptContainerElement *pFVar7;
  FName *pFVar8;
  code *pcVar9;
  UEnum *this_00;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar12;
  UPackage *pUVar13;
  FString *pFVar14;
  FName *pFVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  int local_res10;
  FName local_e8;
  UEnum *local_e0;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  int iStack_c8;
  uint uStack_c4;
  TBitArray<FDefaultBitArrayAllocator> *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  FScriptContainerElement *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  FName local_70;
  FString local_68 [2];
  undefined4 local_3c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  pUVar6 = this->Asset;
  if (((pUVar6 != (UClothingAssetCommon *)0x0) && (-1 < param_1)) &&
     (param_1 < (pUVar6->LodData).ArrayNum)) {
    uVar18 = 0;
    if (param_1 < (pUVar6->LodData).ArrayNum) {
      uVar18 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
    pFVar7 = (pUVar6->LodData).AllocatorInstance.Data;
    uVar18 = *(int *)(pFVar7 + (longlong)param_1 * 0x158 + 0x38) -
             *(int *)(pFVar7 + (longlong)param_1 * 0x158 + 100);
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if (*piVar1 < (int)uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar18,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    local_e0 = Z_Registration_Info_UEnum_EChaosWeightMapTarget.OuterSingleton;
    if (Z_Registration_Info_UEnum_EChaosWeightMapTarget.OuterSingleton == (UEnum *)0x0) {
      pUVar13 = Z_Construct_UPackage__Script_ChaosCloth();
      Z_Registration_Info_UEnum_EChaosWeightMapTarget.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget,(UObject *)pUVar13,
                         L"EChaosWeightMapTarget");
    }
    uVar18 = *(uint *)(pFVar7 + (longlong)param_1 * 0x158 + 0x58);
    pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar7 + (longlong)param_1 * 0x158 + 0x40);
    local_d8 = pFVar7 + (longlong)param_1 * 0x158 + 0x30;
    iStack_c8 = 0;
    uStack_c4 = 1;
    local_b0 = 0;
    uStack_b4 = 0;
    if (uVar18 != 0) {
      pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)
                 (pFVar7 + (longlong)param_1 * 0x158 + 0x50);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar7 + (longlong)param_1 * 0x158 + 0x50) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = pTVar2;
      }
      uVar20 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
      iStack_c8 = 0;
      while (uVar20 == 0) {
        lVar16 = (longlong)iStack_c8;
        local_b0 = local_b0 + 0x20;
        iStack_c8 = iStack_c8 + 1;
        uStack_b4 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_c8)
        goto LAB_14dc0161f;
        uVar20 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar16 * 4 + 4);
      }
      uStack_c4 = -uVar20 & uVar20;
      uVar3 = (ulonglong)uStack_c4 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_res10 = (int)lVar16;
      uStack_b4 = local_b0 + -1 + local_res10;
      if ((int)uVar18 < (int)uStack_b4) {
        uStack_b4 = uVar18;
      }
    }
LAB_14dc0161f:
    uStack_ac = local_3c;
    iStack_a8 = *(int *)(pFVar7 + (longlong)param_1 * 0x158 + 0x38) -
                *(int *)(pFVar7 + (longlong)param_1 * 0x158 + 100);
    uVar18 = *(uint *)(pFVar7 + (longlong)param_1 * 0x158 + 0x58);
    uStack_b8 = 0xffffffff;
    TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
    uVar20 = uVar18 & 0xffffffe0;
    TStack_98.CurrentBitIndex = uStack_b4;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar18 >> 5;
    TStack_98._28_4_ = local_3c;
    TStack_98.BaseBitIndex = local_b0;
    uStack_78 = CONCAT44(uStack_a4,iStack_a8);
    local_e0 = Z_Registration_Info_UEnum_EChaosWeightMapTarget.OuterSingleton;
    local_d0 = local_d8;
    local_c0 = pTVar2;
    local_a0 = local_d8;
    TStack_98.Array = pTVar2;
    if (((int)uVar18 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
    pFVar10 = local_d8;
    this_00 = local_e0;
    uVar4 = *(uint *)(pFVar7 + (longlong)param_1 * 0x158 + 0x58);
    if (uVar18 != uVar4) {
      pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)
                 (pFVar7 + (longlong)param_1 * 0x158 + 0x50);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar7 + (longlong)param_1 * 0x158 + 0x50) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = pTVar2;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) &
               *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
      while (uVar18 == 0) {
        lVar16 = (longlong)iVar17;
        uVar20 = uVar20 + 0x20;
        iVar17 = iVar17 + 1;
        uVar18 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_14dc01730;
        uVar18 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar16 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar18 = (int)lVar16 + -1 + uVar20;
      if ((int)uVar4 < (int)uVar18) {
        uVar18 = uVar4;
      }
    }
LAB_14dc01730:
    while( true ) {
      pFVar7 = local_a0;
      if (*(int *)(local_a0 + 8) - *(int *)(local_a0 + 0x34) != (int)uStack_78) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_98.CurrentBitIndex == uVar18) && (TStack_98.Array == pTVar2)) &&
         (pFVar7 == pFVar10)) break;
      pFVar14 = UEnum::GetNameStringByValue
                          (this_00,local_68,
                           (ulonglong)
                           *(uint *)((longlong)TStack_98.CurrentBitIndex * 0x20 +
                                    *(longlong *)pFVar7));
      iVar5 = (pFVar14->Data).ArrayNum;
      iVar17 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar17 = 0;
      }
      pFVar15 = ::FName::FName(&local_70,iVar17,(wchar_t *)(pFVar14->Data).AllocatorInstance.Data,
                               FNAME_Add);
      pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
      local_e8 = *pFVar15;
      if (((pFVar8 <= &local_e8) && (&local_e8 < pFVar8 + *piVar1)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar12;
      }
      iVar17 = __return_storage_ptr__->ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar17 + 1;
      *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar17 * 8) = local_e8
      ;
      if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
  }
  return __return_storage_ptr__;
}

// GetWeightMaps @ 14dc018e0

TArray<TArrayView<float_const_,int>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FClothingSimulationSkeletalMesh::GetWeightMaps
          (FClothingSimulationSkeletalMesh *this,
          TArray<TArrayView<float_const_,int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ulonglong uVar3;
  UClothingAssetCommon *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  TArray<TArrayView<float_const_,int>,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  uint uStack_b8;
  uint uStack_b4;
  TBitArray<FDefaultBitArrayAllocator> *local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  FScriptContainerElement *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  uVar11 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  pUVar4 = this->Asset;
  if (((pUVar4 != (UClothingAssetCommon *)0x0) && (-1 < param_1)) &&
     (param_1 < (pUVar4->LodData).ArrayNum)) {
    uVar13 = uVar11;
    if (param_1 < (pUVar4->LodData).ArrayNum) {
      uVar13 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TArray<TArrayView<float_const_,int>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar9;
    }
    pFVar5 = (pUVar4->LodData).AllocatorInstance.Data;
    uVar13 = *(int *)(pFVar5 + (longlong)param_1 * 0x158 + 0x38) -
             *(int *)(pFVar5 + (longlong)param_1 * 0x158 + 100);
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if (*piVar1 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar13,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    uVar13 = *(uint *)(pFVar5 + (longlong)param_1 * 0x158 + 0x58);
    pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar5 + (longlong)param_1 * 0x158 + 0x40);
    local_c8 = pFVar5 + (longlong)param_1 * 0x158 + 0x30;
    uStack_b4 = 1;
    local_a0 = 0;
    uStack_a4 = local_a0;
    if (uVar13 != 0) {
      pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)
                 (pFVar5 + (longlong)param_1 * 0x158 + 0x50);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar5 + (longlong)param_1 * 0x158 + 0x50) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar14 = pTVar2;
      }
      uVar15 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
      local_a0 = 0;
      uVar11 = 0;
      while (uVar15 == 0) {
        lVar10 = (longlong)(int)uVar11;
        local_a0 = local_a0 + 0x20;
        uVar11 = uVar11 + 1;
        uStack_a4 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
        goto LAB_14dc01a4d;
        uVar15 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar10 * 4 + 4);
      }
      uStack_b4 = -uVar15 & uVar15;
      uVar3 = (ulonglong)uStack_b4 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res10 = (int)lVar10;
      uStack_a4 = (local_a0 - 1) + local_res10;
      if ((int)uVar13 < (int)uStack_a4) {
        uStack_a4 = uVar13;
      }
    }
LAB_14dc01a4d:
    uStack_9c = local_44;
    iStack_98 = *(int *)(pFVar5 + (longlong)param_1 * 0x158 + 0x38) -
                *(int *)(pFVar5 + (longlong)param_1 * 0x158 + 100);
    uVar13 = *(uint *)(pFVar5 + (longlong)param_1 * 0x158 + 0x58);
    TStack_88._padding_ = CONCAT44(uStack_b4,uVar11);
    uStack_a8 = 0xffffffff;
    uVar15 = uVar13 & 0xffffffe0;
    TStack_88.CurrentBitIndex = uStack_a4;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar13 >> 5;
    TStack_88._28_4_ = local_44;
    TStack_88.BaseBitIndex = local_a0;
    uStack_68 = CONCAT44(uStack_94,iStack_98);
    local_c0 = local_c8;
    uStack_b8 = uVar11;
    local_b0 = pTVar2;
    local_90 = local_c8;
    TStack_88.Array = pTVar2;
    if (((int)uVar13 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TArray<TArrayView<float_const_,int>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar9;
    }
    pFVar7 = local_c8;
    uVar11 = *(uint *)(pFVar5 + (longlong)param_1 * 0x158 + 0x58);
    if (uVar13 != uVar11) {
      pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)
                 (pFVar5 + (longlong)param_1 * 0x158 + 0x50);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar5 + (longlong)param_1 * 0x158 + 0x50) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar14 = pTVar2;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) &
               *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar12;
        uVar15 = uVar15 + 0x20;
        iVar12 = iVar12 + 1;
        uVar13 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14dc01b50;
        uVar13 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar10 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar13 = (int)lVar10 + -1 + uVar15;
      if ((int)uVar11 < (int)uVar13) {
        uVar13 = uVar11;
      }
    }
LAB_14dc01b50:
    while( true ) {
      pFVar5 = local_90;
      if (*(int *)(local_90 + 8) - *(int *)(local_90 + 0x34) != (int)uStack_68) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_88.CurrentBitIndex == uVar13) && (TStack_88.Array == pTVar2)) &&
         (pFVar5 == pFVar7)) break;
      lVar10 = (longlong)TStack_88.CurrentBitIndex * 0x20 + *(longlong *)pFVar5;
      local_d8 = *(undefined8 *)(lVar10 + 8);
      iVar12 = *(int *)(lVar10 + 0x10);
      if ((iVar12 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TArray<TArrayView<float_const_,int>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar9;
      }
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      iStack_d0 = iVar12;
      if (((pFVar5 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 < pFVar5 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TArray<TArrayView<float_const_,int>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar9;
      }
      iVar12 = __return_storage_ptr__->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar12 + 1;
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
      *(undefined8 *)pFVar5 = local_d8;
      *(ulonglong *)(pFVar5 + 8) = CONCAT44(uStack_cc,iStack_d0);
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  return __return_storage_ptr__;
}

// IsValidLODIndex @ 14dc04d20

bool __thiscall
Chaos::FClothingSimulationSkeletalMesh::IsValidLODIndex
          (FClothingSimulationSkeletalMesh *this,int param_1)

{
  if (((this->Asset != (UClothingAssetCommon *)0x0) && (-1 < param_1)) &&
     (param_1 < (this->Asset->LodData).ArrayNum)) {
    return true;
  }
  return false;
}

