// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 148e42cf0

UClass * __cdecl UNiagaraDataInterfaceDynamicMeshSimCacheData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceDynamicMeshSimCacheData",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData.
                InnerSingleton,StaticRegisterNativesUNiagaraDataInterfaceDynamicMeshSimCacheData,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceDynamicMeshSimCacheData>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDynamicMeshSimCacheData>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData.InnerSingleton;
}

// UNiagaraDataInterfaceDynamicMeshSimCacheData @ 148e55480

UNiagaraDataInterfaceDynamicMeshSimCacheData * __thiscall
UNiagaraDataInterfaceDynamicMeshSimCacheData::UNiagaraDataInterfaceDynamicMeshSimCacheData
          (UNiagaraDataInterfaceDynamicMeshSimCacheData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceDynamicMeshSimCacheData__6B_;
  (this->UniqueFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueFrames).ArrayNum = 0;
  (this->UniqueFrames).ArrayMax = 0;
  (this->CpuFrameIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CpuFrameIndices).ArrayNum = 0;
  (this->CpuFrameIndices).ArrayMax = 0;
  (this->GpuFrameIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GpuFrameIndices).ArrayNum = 0;
  (this->GpuFrameIndices).ArrayMax = 0;
  return this;
}

// UNiagaraDataInterfaceDynamicMeshSimCacheData @ 148e554d0

UNiagaraDataInterfaceDynamicMeshSimCacheData * __thiscall
UNiagaraDataInterfaceDynamicMeshSimCacheData::UNiagaraDataInterfaceDynamicMeshSimCacheData
          (UNiagaraDataInterfaceDynamicMeshSimCacheData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceDynamicMeshSimCacheData__6B_;
  (this->UniqueFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueFrames).ArrayNum = 0;
  (this->UniqueFrames).ArrayMax = 0;
  (this->CpuFrameIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CpuFrameIndices).ArrayNum = 0;
  (this->CpuFrameIndices).ArrayMax = 0;
  (this->GpuFrameIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GpuFrameIndices).ArrayNum = 0;
  (this->GpuFrameIndices).ArrayMax = 0;
  return this;
}

// ~UNiagaraDataInterfaceDynamicMeshSimCacheData @ 148e569d0

void __thiscall
UNiagaraDataInterfaceDynamicMeshSimCacheData::~UNiagaraDataInterfaceDynamicMeshSimCacheData
          (UNiagaraDataInterfaceDynamicMeshSimCacheData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceDynamicMeshSimCacheData__6B_;
  pFVar1 = (this->GpuFrameIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CpuFrameIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNDIDynamicMeshSimCacheFrame,int>
            ((FNDIDynamicMeshSimCacheFrame *)(this->UniqueFrames).AllocatorInstance.Data,
             (this->UniqueFrames).ArrayNum);
  pFVar1 = (this->UniqueFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148e6e5a0

UClass * __cdecl UNiagaraDataInterfaceDynamicMeshSimCacheData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceDynamicMeshSimCacheData",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData.
                InnerSingleton,StaticRegisterNativesUNiagaraDataInterfaceDynamicMeshSimCacheData,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceDynamicMeshSimCacheData>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDynamicMeshSimCacheData>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData.InnerSingleton;
}

// StaticRegisterNativesUNiagaraDataInterfaceDynamicMeshSimCacheData @ 148e81670

void __cdecl
UNiagaraDataInterfaceDynamicMeshSimCacheData::
StaticRegisterNativesUNiagaraDataInterfaceDynamicMeshSimCacheData(void)

{
  return;
}

// FindOrCreateMesh @ 148eb8d90

int __thiscall
UNiagaraDataInterfaceDynamicMeshSimCacheData::FindOrCreateMesh
          (UNiagaraDataInterfaceDynamicMeshSimCacheData *this,FNDIDynamicMeshSimCacheFrame *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3)

{
  TArray<FNDIDynamicMeshSimCacheFrame,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FNDIDynamicMeshSimCacheFrame *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  TArrayView<unsigned_char_const_,int> local_48;
  TArrayView<unsigned_char_const_,int> local_38;
  
  if (((param_1->VertexBufferSize == 0) || (param_2->ArrayNum == 0)) || (param_3->ArrayNum == 0)) {
    return -1;
  }
  iVar7 = (this->UniqueFrames).ArrayNum;
  pTVar1 = &this->UniqueFrames;
  if (0 < iVar7) {
    uVar8 = 0;
    if ((int)(iVar7 - 1U) < iVar7) {
      uVar8 = ~(iVar7 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
    local_48.DataPtr = param_3->DataPtr;
    local_48.ArrayNum = param_3->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&param_3->field_0xc;
    local_38.DataPtr = param_2->DataPtr;
    local_38.ArrayNum = param_2->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
    iVar7 = (this->UniqueFrames).ArrayNum + -1;
    bVar6 = FNDIDynamicMeshSimCacheFrame::Equals
                      ((FNDIDynamicMeshSimCacheFrame *)
                       ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x90),param_1,&local_38
                       ,&local_48);
    if (bVar6) {
      return iVar7;
    }
  }
  pFVar3 = (FNDIDynamicMeshSimCacheFrame *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->UniqueFrames).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  uVar8 = (this->UniqueFrames).ArrayNum;
  piVar2 = &(this->UniqueFrames).ArrayMax;
  if (uVar8 == *piVar2) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x890,&pTVar1->AllocatorInstance,piVar2);
    (this->UniqueFrames).ArrayNum = uVar8;
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  (this->UniqueFrames).ArrayNum = uVar8 + 1;
  lVar10 = (longlong)(int)uVar8 * 0x90;
  FNDIDynamicMeshSimCacheFrame::FNDIDynamicMeshSimCacheFrame
            ((FNDIDynamicMeshSimCacheFrame *)(pFVar4 + lVar10),param_1);
  uVar9 = 0;
  if ((int)uVar8 < (this->UniqueFrames).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             ((pTVar1->AllocatorInstance).Data + lVar10 + 0x60),param_2);
  uVar9 = 0;
  if ((int)uVar8 < (this->UniqueFrames).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char_const_,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             ((pTVar1->AllocatorInstance).Data + lVar10 + 0x70),param_3);
  return uVar8;
}

// GetFrameData @ 148ebd180

FNDIDynamicMeshSimCacheFrame * __thiscall
UNiagaraDataInterfaceDynamicMeshSimCacheData::GetFrameData
          (UNiagaraDataInterfaceDynamicMeshSimCacheData *this,int param_1,ENiagaraSimTarget param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FNDIDynamicMeshSimCacheFrame *pFVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (param_2 == CPUSim) {
    if ((param_1 < 0) || ((this->CpuFrameIndices).ArrayNum <= param_1)) {
      uVar3 = 0xffffffff;
      goto LAB_148ebd260;
    }
    uVar3 = uVar6;
    if (param_1 < (this->CpuFrameIndices).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FNDIDynamicMeshSimCacheFrame *)(*pcVar1)();
      return pFVar4;
    }
    pFVar5 = (this->CpuFrameIndices).AllocatorInstance.Data;
  }
  else {
    if (param_2 != GPUComputeSim) {
      return (FNDIDynamicMeshSimCacheFrame *)0x0;
    }
    if (param_1 < 0) {
      return (FNDIDynamicMeshSimCacheFrame *)0x0;
    }
    if ((this->GpuFrameIndices).ArrayNum <= param_1) {
      return (FNDIDynamicMeshSimCacheFrame *)0x0;
    }
    uVar3 = uVar6;
    if (param_1 < (this->GpuFrameIndices).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FNDIDynamicMeshSimCacheFrame *)(*pcVar1)();
      return pFVar4;
    }
    pFVar5 = (this->GpuFrameIndices).AllocatorInstance.Data;
  }
  uVar3 = *(uint *)(pFVar5 + (longlong)param_1 * 4);
LAB_148ebd260:
  if (((int)uVar3 < 0) || ((this->UniqueFrames).ArrayNum <= (int)uVar3)) {
    return (FNDIDynamicMeshSimCacheFrame *)0x0;
  }
  if ((int)uVar3 < (this->UniqueFrames).ArrayNum) {
    uVar6 = ~uVar3 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNDIDynamicMeshSimCacheFrame *)(*pcVar1)();
    return pFVar4;
  }
  return (FNDIDynamicMeshSimCacheFrame *)
         ((this->UniqueFrames).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x90);
}

// ResizeFrames @ 148ecf670

void __thiscall
UNiagaraDataInterfaceDynamicMeshSimCacheData::ResizeFrames
          (UNiagaraDataInterfaceDynamicMeshSimCacheData *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  iVar4 = (this->CpuFrameIndices).ArrayNum;
  while( true ) {
    if (param_1 < iVar4) {
      iVar4 = (this->GpuFrameIndices).ArrayNum;
      while( true ) {
        if (param_1 < iVar4) {
          return;
        }
        pFVar1 = (this->GpuFrameIndices).AllocatorInstance.Data;
        local_14[0] = 0xffffffff;
        if (((pFVar1 <= (FScriptContainerElement *)local_14) &&
            ((FScriptContainerElement *)local_14 <
             pFVar1 + (longlong)(this->GpuFrameIndices).ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) break;
        iVar4 = (this->GpuFrameIndices).ArrayNum;
        if (iVar4 == (this->GpuFrameIndices).ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->GpuFrameIndices).AllocatorInstance,
                             &(this->GpuFrameIndices).ArrayMax);
        }
        (this->GpuFrameIndices).ArrayNum = iVar4 + 1;
        *(undefined4 *)((this->GpuFrameIndices).AllocatorInstance.Data + (longlong)iVar4 * 4) =
             local_14[0];
        iVar4 = (this->GpuFrameIndices).ArrayNum;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->CpuFrameIndices).AllocatorInstance.Data;
    local_18 = 0xffffffff;
    if (((pFVar1 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 <
         pFVar1 + (longlong)(this->CpuFrameIndices).ArrayMax * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = (this->CpuFrameIndices).ArrayNum;
    if (iVar4 == (this->CpuFrameIndices).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->CpuFrameIndices).AllocatorInstance,
                         &(this->CpuFrameIndices).ArrayMax);
    }
    (this->CpuFrameIndices).ArrayNum = iVar4 + 1;
    *(undefined4 *)((this->CpuFrameIndices).AllocatorInstance.Data + (longlong)iVar4 * 4) = local_18
    ;
    iVar4 = (this->CpuFrameIndices).ArrayNum;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

