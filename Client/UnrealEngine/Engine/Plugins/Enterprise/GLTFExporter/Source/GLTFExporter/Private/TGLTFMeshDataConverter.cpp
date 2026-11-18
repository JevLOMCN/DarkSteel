// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 8

// TGLTFMeshDataConverter<USkeletalMesh,USkeletalMeshComponent> @ 14e5cf8a0

TGLTFMeshDataConverter<USkeletalMesh,USkeletalMeshComponent> * __thiscall
TGLTFMeshDataConverter<USkeletalMesh,USkeletalMeshComponent>::
TGLTFMeshDataConverter<USkeletalMesh,USkeletalMeshComponent>
          (TGLTFMeshDataConverter<USkeletalMesh,USkeletalMeshComponent> *this,
          FGLTFConvertBuilder *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7__TGLTFMeshDataConverter_VUSkeletalMesh__VUSkeletalMeshComponent____6B_;
  (this->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).ArrayNum = 0;
  (this->Outputs).ArrayMax = 0;
  return this;
}

// TGLTFMeshDataConverter<UStaticMesh,UStaticMeshComponent> @ 14e5cf8f0

TGLTFMeshDataConverter<UStaticMesh,UStaticMeshComponent> * __thiscall
TGLTFMeshDataConverter<UStaticMesh,UStaticMeshComponent>::
TGLTFMeshDataConverter<UStaticMesh,UStaticMeshComponent>
          (TGLTFMeshDataConverter<UStaticMesh,UStaticMeshComponent> *this,
          FGLTFConvertBuilder *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7__TGLTFMeshDataConverter_VUStaticMesh__VUStaticMeshComponent____6B_;
  (this->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).ArrayNum = 0;
  (this->Outputs).ArrayMax = 0;
  return this;
}

// ~TGLTFMeshDataConverter<USkeletalMesh,USkeletalMeshComponent> @ 14e5d46c0

void __thiscall
TGLTFMeshDataConverter<USkeletalMesh,USkeletalMeshComponent>::
~TGLTFMeshDataConverter<USkeletalMesh,USkeletalMeshComponent>
          (TGLTFMeshDataConverter<USkeletalMesh,USkeletalMeshComponent> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFMeshData,TDefaultDelete<FGLTFMeshData>_>,int>
            ((TUniquePtr<FGLTFMeshData,TDefaultDelete<FGLTFMeshData>_> *)
             (this->Outputs).AllocatorInstance.Data,(this->Outputs).ArrayNum);
  pFVar1 = (this->Outputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  return;
}

// ~TGLTFMeshDataConverter<UStaticMesh,UStaticMeshComponent> @ 14e5d4710

void __thiscall
TGLTFMeshDataConverter<UStaticMesh,UStaticMeshComponent>::
~TGLTFMeshDataConverter<UStaticMesh,UStaticMeshComponent>
          (TGLTFMeshDataConverter<UStaticMesh,UStaticMeshComponent> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FGLTFMeshData,TDefaultDelete<FGLTFMeshData>_>,int>
            ((TUniquePtr<FGLTFMeshData,TDefaultDelete<FGLTFMeshData>_> *)
             (this->Outputs).AllocatorInstance.Data,(this->Outputs).ArrayNum);
  pFVar1 = (this->Outputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,FGLTFMeshData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  return;
}

// Convert @ 14e5e4090

FGLTFMeshData * __thiscall
TGLTFMeshDataConverter<USkeletalMesh,USkeletalMeshComponent>::Convert
          (TGLTFMeshDataConverter<USkeletalMesh,USkeletalMeshComponent> *this,USkeletalMesh *param_1
          ,USkeletalMeshComponent *param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFMeshData *pFVar6;
  FGLTFMeshData *local_18 [2];
  
  pFVar6 = ::operator_new(0x20);
  local_18[0] = (FGLTFMeshData *)0x0;
  if (pFVar6 != (FGLTFMeshData *)0x0) {
    local_18[0] = FGLTFMeshData::FGLTFMeshData(pFVar6,param_1,param_2,param_3);
  }
  if (param_2 != (USkeletalMeshComponent *)0x0) {
    pFVar6 = TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
             ::GetOrAdd((TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
                         *)this,param_1,(USkeletalMeshComponent *)0x0,param_3);
    local_18[0]->Parent = pFVar6;
  }
  pFVar2 = (this->Outputs).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Outputs).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGLTFMeshData *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Outputs).ArrayNum;
  piVar1 = &(this->Outputs).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Outputs).AllocatorInstance,piVar1);
  }
  (this->Outputs).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Outputs).AllocatorInstance.Data + (longlong)iVar5 * 8;
  *(FGLTFMeshData **)pFVar2 = local_18[0];
  return *(FGLTFMeshData **)pFVar2;
}

// Convert @ 14e5e41c0

FGLTFMeshData * __thiscall
TGLTFMeshDataConverter<UStaticMesh,UStaticMeshComponent>::Convert
          (TGLTFMeshDataConverter<UStaticMesh,UStaticMeshComponent> *this,UStaticMesh *param_1,
          UStaticMeshComponent *param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGLTFMeshData *pFVar6;
  FGLTFMeshData *local_18 [2];
  
  pFVar6 = ::operator_new(0x20);
  local_18[0] = (FGLTFMeshData *)0x0;
  if (pFVar6 != (FGLTFMeshData *)0x0) {
    local_18[0] = FGLTFMeshData::FGLTFMeshData(pFVar6,param_1,param_2,param_3);
  }
  if (param_2 != (UStaticMeshComponent *)0x0) {
    pFVar6 = TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>
             ::GetOrAdd((TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>
                         *)this,param_1,(UStaticMeshComponent *)0x0,param_3);
    local_18[0]->Parent = pFVar6;
  }
  pFVar2 = (this->Outputs).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Outputs).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGLTFMeshData *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Outputs).ArrayNum;
  piVar1 = &(this->Outputs).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Outputs).AllocatorInstance,piVar1);
  }
  (this->Outputs).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Outputs).AllocatorInstance.Data + (longlong)iVar5 * 8;
  *(FGLTFMeshData **)pFVar2 = local_18[0];
  return *(FGLTFMeshData **)pFVar2;
}

// Sanitize @ 14e6125f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TGLTFMeshDataConverter<USkeletalMesh,USkeletalMeshComponent>::Sanitize
          (TGLTFMeshDataConverter<USkeletalMesh,USkeletalMeshComponent> *this,
          USkeletalMesh **param_1,USkeletalMeshComponent **param_2,int *param_3)

{
  int iVar1;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *param_3;
  this_00 = *param_2;
  pUVar2 = *param_1;
  if (iVar7 < 1) {
    iVar6 = -1;
    iVar1 = *(int *)(*(longlong *)(this->_padding_ + 0x18) + 0x98);
    if (this_00 == (USkeletalMeshComponent *)0x0) {
LAB_14e61266d:
      if (pUVar2 == (USkeletalMesh *)0x0) {
        iVar7 = -1;
      }
      else {
        piVar5 = (int *)(**(code **)(pUVar2->_padding_ + 0x3a8))(pUVar2);
        iVar7 = *piVar5;
      }
LAB_14e612684:
      if (iVar7 < iVar1) {
        iVar7 = iVar1;
      }
    }
    else {
      iVar3 = USkinnedMeshComponent::GetForcedLOD((USkinnedMeshComponent *)this_00);
      iVar7 = iVar3 + -1;
      if (iVar3 + -1 < 1) {
        if ((*(byte *)((longlong)&this_00->_padding_ + 7) & 8) == 0) goto LAB_14e61266d;
        iVar7 = (int)this_00->_padding_;
        goto LAB_14e612684;
      }
    }
    if (pUVar2 == (USkeletalMesh *)0x0) goto LAB_14e6126ab;
    lVar4 = (**(code **)(pUVar2->_padding_ + 0x398))(pUVar2);
    if (lVar4 == 0) goto LAB_14e6126ab;
LAB_14e6126a6:
    iVar6 = *(int *)(lVar4 + 8) + -1;
  }
  else {
    if (pUVar2 != (USkeletalMesh *)0x0) {
      lVar4 = (**(code **)(pUVar2->_padding_ + 0x398))(pUVar2);
      if (lVar4 != 0) goto LAB_14e6126a6;
    }
    iVar6 = -1;
  }
LAB_14e6126ab:
  if (iVar7 < iVar6) {
    iVar6 = iVar7;
  }
  *param_3 = iVar6;
  return;
}

// Sanitize @ 14e6126d0

void __thiscall
TGLTFMeshDataConverter<UStaticMesh,UStaticMeshComponent>::Sanitize
          (TGLTFMeshDataConverter<UStaticMesh,UStaticMeshComponent> *this,UStaticMesh **param_1,
          UStaticMeshComponent **param_2,int *param_3)

{
  UStaticMeshComponent *pUVar1;
  UStaticMesh *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_3;
  pUVar1 = *param_2;
  this_00 = *param_1;
  if (iVar4 < 1) {
    iVar2 = *(int *)(*(longlong *)(this->_padding_ + 0x18) + 0x98);
    iVar3 = -1;
    if (pUVar1 == (UStaticMeshComponent *)0x0) {
LAB_14e61273f:
      if (this_00 == (UStaticMesh *)0x0) {
        iVar4 = -1;
      }
      else {
        iVar4 = (this_00->MinLOD).Default;
      }
LAB_14e61274e:
      if (iVar4 < iVar2) {
        iVar4 = iVar2;
      }
    }
    else {
      iVar4 = pUVar1->ForcedLodModel + -1;
      if (iVar4 < 1) {
        if (pUVar1->bOverrideMinLOD == '\0') goto LAB_14e61273f;
        iVar4 = pUVar1->MinLOD;
        goto LAB_14e61274e;
      }
    }
    if (this_00 == (UStaticMesh *)0x0) goto LAB_14e61275f;
  }
  else if (this_00 == (UStaticMesh *)0x0) {
    iVar2 = -1;
    if (iVar4 < -1) {
      iVar2 = iVar4;
    }
    *param_3 = iVar2;
    return;
  }
  iVar3 = UStaticMesh::GetNumLODs(this_00);
  iVar3 = iVar3 + -1;
LAB_14e61275f:
  if (iVar4 < iVar3) {
    iVar3 = iVar4;
  }
  *param_3 = iVar3;
  return;
}

