// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// FGLTFMaterialConverter @ 14e5d23b0

FGLTFMaterialConverter * __thiscall
FGLTFMaterialConverter::FGLTFMaterialConverter
          (FGLTFMaterialConverter *this,FGLTFConvertBuilder *param_1)

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
  this->_padding_ = (longlong)&___7FGLTFMaterialConverter__6B_;
  *(undefined8 *)&(this->UVOverlapChecker).field_0x8 = 0;
  *(undefined8 *)&(this->UVOverlapChecker).field_0x10 = 0;
  *(undefined8 *)&(this->UVOverlapChecker).field_0x28 = 0;
  *(undefined4 *)&(this->UVOverlapChecker).field_0x30 = 0;
  *(undefined4 *)&(this->UVOverlapChecker).field_0x34 = 0x80;
  *(undefined4 *)&(this->UVOverlapChecker).field_0x38 = 0xffffffff;
  *(undefined4 *)&(this->UVOverlapChecker).field_0x3c = 0;
  *(undefined8 *)&(this->UVOverlapChecker).field_0x48 = 0;
  *(undefined4 *)&(this->UVOverlapChecker).field_0x50 = 0;
  *(undefined ***)&this->UVOverlapChecker = &___7FGLTFUVOverlapChecker__6B_;
  *(undefined8 *)&(this->UVBoundsCalculator).field_0x8 = 0;
  *(undefined8 *)&(this->UVBoundsCalculator).field_0x10 = 0;
  *(undefined8 *)&(this->UVBoundsCalculator).field_0x28 = 0;
  *(undefined4 *)&(this->UVBoundsCalculator).field_0x30 = 0;
  *(undefined4 *)&(this->UVBoundsCalculator).field_0x34 = 0x80;
  *(undefined4 *)&(this->UVBoundsCalculator).field_0x38 = 0xffffffff;
  *(undefined4 *)&(this->UVBoundsCalculator).field_0x3c = 0;
  *(undefined8 *)&(this->UVBoundsCalculator).field_0x48 = 0;
  *(undefined4 *)&(this->UVBoundsCalculator).field_0x50 = 0;
  *(undefined ***)&this->UVBoundsCalculator = &___7FGLTFUVBoundsCalculator__6B_;
  *(undefined8 *)&(this->UVDegenerateChecker).field_0x8 = 0;
  *(undefined8 *)&(this->UVDegenerateChecker).field_0x10 = 0;
  *(undefined8 *)&(this->UVDegenerateChecker).field_0x28 = 0;
  *(undefined4 *)&(this->UVDegenerateChecker).field_0x30 = 0;
  *(undefined4 *)&(this->UVDegenerateChecker).field_0x34 = 0x80;
  *(undefined4 *)&(this->UVDegenerateChecker).field_0x38 = 0xffffffff;
  *(undefined4 *)&(this->UVDegenerateChecker).field_0x3c = 0;
  *(undefined8 *)&(this->UVDegenerateChecker).field_0x48 = 0;
  *(undefined4 *)&(this->UVDegenerateChecker).field_0x50 = 0;
  *(undefined ***)&this->UVDegenerateChecker = &___7FGLTFUVDegenerateChecker__6B_;
  return this;
}

// Convert @ 14e5e7cd0

FGLTFJsonMaterial * __thiscall
FGLTFMaterialConverter::Convert
          (FGLTFMaterialConverter *this,UMaterialInterface *param_1,FGLTFMeshData *param_2,
          FMeshAttributesArray<int> *param_3)

{
  longlong lVar1;
  FGLTFTaskBuilder *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FGLTFJsonMaterial *pFVar5;
  ForAnyElementType *pFVar6;
  undefined8 *local_res10;
  FGLTFJsonMaterial *local_38 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      DefaultMaterial = FGLTFProxyMaterialUtilities::GetBaseMaterial(Default);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((UMaterial *)param_1 != DefaultMaterial) {
    lVar1 = this->_padding_;
    pFVar5 = ::operator_new(0x638);
    if (pFVar5 == (FGLTFJsonMaterial *)0x0) {
      pFVar5 = (FGLTFJsonMaterial *)0x0;
    }
    else {
      pFVar5 = FGLTFJsonMaterial::FGLTFJsonMaterial(pFVar5,*(int *)(lVar1 + 0x288));
    }
    pFVar6 = (ForAnyElementType *)(lVar1 + 0x280);
    local_38[0] = pFVar5;
    if ((pFVar6->Data <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar6->Data + (longlong)*(int *)(lVar1 + 0x28c) * 8))
    {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGLTFJsonMaterial *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar4 = *(int *)(lVar1 + 0x288);
    if (iVar4 == *(int *)(lVar1 + 0x28c)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar6,(int *)(lVar1 + 0x28c));
    }
    *(int *)(lVar1 + 0x288) = iVar4 + 1;
    *(FGLTFJsonMaterial **)(pFVar6->Data + (longlong)iVar4 * 8) = local_38[0];
    this_00 = (FGLTFTaskBuilder *)this->_padding_;
    local_res10 = ::operator_new(0x50);
    if (local_res10 == (undefined8 *)0x0) {
      local_res10 = (undefined8 *)0x0;
    }
    else {
      *(undefined1 *)(local_res10 + 1) = 2;
      local_res10[3] = &this->UVOverlapChecker;
      *local_res10 = &___7FGLTFDelayedMaterialTask__6B_;
      local_res10[4] = &this->UVBoundsCalculator;
      local_res10[2] = this_00;
      local_res10[5] = param_1;
      local_res10[6] = param_2;
      FMeshAttributesArray<int>::FMeshAttributesArray<int>
                ((FMeshAttributesArray<int> *)(local_res10 + 7),param_3);
      local_res10[9] = pFVar5;
    }
    FGLTFTaskBuilder::ScheduleSlowTask(this_00,(FGLTFDelayedTask *)&local_res10);
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    return pFVar5;
  }
  if (*(void **)param_3 != (void *)0x0) {
    FMemory::Free(*(void **)param_3);
  }
  return (FGLTFJsonMaterial *)0x0;
}

// Sanitize @ 14e6127c0

void __thiscall
FGLTFMaterialConverter::Sanitize
          (FGLTFMaterialConverter *this,UMaterialInterface **param_1,FGLTFMeshData **param_2,
          FMeshAttributesArray<int> *param_3)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = *param_1;
  if (*(char *)(*(longlong *)(this->_padding_ + 0x18) + 0x2f) != '\0') {
    pUVar1 = UGLTFMaterialExportOptions::ResolveProxy(pUVar1);
  }
  *param_1 = pUVar1;
  *param_2 = (FGLTFMeshData *)0x0;
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)param_3,(int *)0x0,0,
             *(int *)&param_3->field_0xc);
  return;
}

