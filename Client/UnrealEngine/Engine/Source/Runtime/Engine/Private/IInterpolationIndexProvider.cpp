// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetPerBoneInterpolationIndex @ 147403240

int __thiscall
IInterpolationIndexProvider::GetPerBoneInterpolationIndex
          (IInterpolationIndexProvider *this,int param_1,FBoneContainer *param_2,
          FPerBoneInterpolationData *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined4 local_res10 [2];
  
  pFVar1 = (param_2->BoneIndicesArray).AllocatorInstance.Data;
  pFVar3 = pFVar1;
  do {
    if (pFVar3 == pFVar1 + (longlong)(param_2->BoneIndicesArray).ArrayNum * 2) {
      local_res10[0] = 0xffffffff;
LAB_147403285:
      iVar2 = (**(code **)((longlong)*this + 0x10))(this,local_res10);
      return iVar2;
    }
    if ((uint)*(ushort *)pFVar3 == param_1) {
      local_res10[0] = (undefined4)((longlong)pFVar3 - (longlong)pFVar1 >> 1);
      goto LAB_147403285;
    }
    pFVar3 = pFVar3 + 2;
  } while( true );
}

// GetPerBoneInterpolationData @ 14755de60

TSharedPtr<IInterpolationIndexProvider::FPerBoneInterpolationData,1> * __thiscall
IInterpolationIndexProvider::GetPerBoneInterpolationData
          (IInterpolationIndexProvider *this,
          TSharedPtr<IInterpolationIndexProvider::FPerBoneInterpolationData,1>
          *__return_storage_ptr__,USkeleton *param_1)

{
  __return_storage_ptr__->Object = (FPerBoneInterpolationData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

