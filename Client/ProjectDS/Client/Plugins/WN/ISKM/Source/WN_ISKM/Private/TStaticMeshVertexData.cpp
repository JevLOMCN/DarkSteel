// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 22

// Empty @ 14a847f80

void __thiscall
TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights>::Empty
          (TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights> *this,uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((longlong)&(this->Data)._padding_ + 4);
    *(undefined4 *)&(this->Data)._padding_ = 0;
    if (*puVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,1,param_1,(ForAnyElementType *)&(this->Data)._padding_,0,(int *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// Empty @ 14a847fd0

void __thiscall
TStaticMeshVertexData<FWN_Matrix3x4H>::Empty
          (TStaticMeshVertexData<FWN_Matrix3x4H> *this,uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((longlong)&(this->Data)._padding_ + 4);
    *(undefined4 *)&(this->Data)._padding_ = 0;
    if (*puVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x18,8,param_1,(ForAnyElementType *)&(this->Data)._padding_,0,(int *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// GetAllowCPUAccess @ 14a84a030

bool __thiscall
TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights>::GetAllowCPUAccess
          (TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a84a038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetAllowCPUAccess @ 14a84a050

bool __thiscall
TStaticMeshVertexData<FWN_Matrix3x4H>::GetAllowCPUAccess
          (TStaticMeshVertexData<FWN_Matrix3x4H> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a84a058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetDataPointer @ 14a84a200

uchar * __thiscall
TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights>::GetDataPointer
          (TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetDataPointer @ 14a84a220

uchar * __thiscall
TStaticMeshVertexData<FWN_Matrix3x4H>::GetDataPointer(TStaticMeshVertexData<FWN_Matrix3x4H> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetResourceArray @ 14a84b500

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights>::GetResourceArray
          (TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceArray @ 14a84b510

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<FWN_Matrix3x4H>::GetResourceArray(TStaticMeshVertexData<FWN_Matrix3x4H> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceSize @ 14a84b660

ulong64 __thiscall
TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights>::GetResourceSize
          (TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) << 3;
}

// GetResourceSize @ 14a84b670

ulong64 __thiscall
TStaticMeshVertexData<FWN_Matrix3x4H>::GetResourceSize(TStaticMeshVertexData<FWN_Matrix3x4H> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) * 0x18;
}

// GetStride @ 14a84b7f0

uint __thiscall
TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights>::GetStride
          (TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights> *this)

{
  return 8;
}

// GetStride @ 14a84b800

uint __thiscall
TStaticMeshVertexData<FWN_Matrix3x4H>::GetStride(TStaticMeshVertexData<FWN_Matrix3x4H> *this)

{
  return 0x18;
}

// IsValidIndex @ 14a850200

bool __thiscall
TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights>::IsValidIndex
          (TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights> *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// IsValidIndex @ 14a850220

bool __thiscall
TStaticMeshVertexData<FWN_Matrix3x4H>::IsValidIndex
          (TStaticMeshVertexData<FWN_Matrix3x4H> *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// Num @ 14a8505b0

int __thiscall
TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights>::Num
          (TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights> *this)

{
  return (int)(this->Data)._padding_;
}

// Num @ 14a8505c0

int __thiscall
TStaticMeshVertexData<FWN_Matrix3x4H>::Num(TStaticMeshVertexData<FWN_Matrix3x4H> *this)

{
  return (int)(this->Data)._padding_;
}

// OverrideFreezeSizeAndAlignment @ 14a850780

void __thiscall
TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights>::OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights> *this,long64 *param_1,
          int *param_2)

{
  *param_1 = 0x28;
  return;
}

// OverrideFreezeSizeAndAlignment @ 14a850790

void __thiscall
TStaticMeshVertexData<FWN_Matrix3x4H>::OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<FWN_Matrix3x4H> *this,long64 *param_1,int *param_2)

{
  *param_1 = 0x28;
  return;
}

// ResizeBuffer @ 14a853330

void __thiscall
TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights>::ResizeBuffer
          (TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights> *this,uint param_1,
          EResizeBufferFlags param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  plVar1 = &(this->Data)._padding_;
  uVar7 = (uint)(this->Data)._padding_;
  plVar2 = &(this->Data)._padding_;
  if (uVar7 < param_1) {
    if ((param_2 & AllowSlackOnGrow) == None) {
      if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
      }
      if (*(int *)((longlong)&(this->Data)._padding_ + 4) < (int)param_1) {
        UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (8,1,param_1,(ForAnyElementType *)plVar1,uVar7,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (8,1,param_1 - (int)(this->Data)._padding_,(ForAnyElementType *)plVar1,(int *)plVar2,
               (int *)((longlong)&(this->Data)._padding_ + 4));
  }
  else if (param_1 < uVar7) {
    uVar7 = uVar7 - param_1;
    if ((int)(uVar7 | param_1) < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (uVar7 != 0) {
      uVar6 = *plVar1;
      if ((uVar6 & 1) != 0) {
        uVar6 = (longlong)plVar1 + ((longlong)uVar6 >> 0x18);
      }
      _Dst = (void *)(uVar6 + (longlong)(int)param_1 * 8);
      iVar5 = ((int)*plVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar5 << 3);
      }
      iVar5 = (int)*plVar2 - uVar7;
      *(int *)plVar2 = iVar5;
      if ((param_2 & AllowSlackOnReduce) == None) {
        UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (8,1,(ForAnyElementType *)plVar1,iVar5,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
  }
  return;
}

// ResizeBuffer @ 14a8534a0

void __thiscall
TStaticMeshVertexData<FWN_Matrix3x4H>::ResizeBuffer
          (TStaticMeshVertexData<FWN_Matrix3x4H> *this,uint param_1,EResizeBufferFlags param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  plVar1 = &(this->Data)._padding_;
  uVar7 = (uint)(this->Data)._padding_;
  plVar2 = &(this->Data)._padding_;
  if (uVar7 < param_1) {
    if ((param_2 & AllowSlackOnGrow) == None) {
      if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
      }
      if (*(int *)((longlong)&(this->Data)._padding_ + 4) < (int)param_1) {
        UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (0x18,8,param_1,(ForAnyElementType *)plVar1,uVar7,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x18,8,param_1 - (int)(this->Data)._padding_,(ForAnyElementType *)plVar1,
               (int *)plVar2,(int *)((longlong)&(this->Data)._padding_ + 4));
  }
  else if (param_1 < uVar7) {
    uVar7 = uVar7 - param_1;
    if ((int)(uVar7 | param_1) < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (uVar7 != 0) {
      uVar6 = *plVar1;
      if ((uVar6 & 1) != 0) {
        uVar6 = (longlong)plVar1 + ((longlong)uVar6 >> 0x18);
      }
      _Dst = (void *)(uVar6 + (longlong)(int)param_1 * 0x18);
      iVar5 = ((int)*plVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 0x18),(longlong)iVar5 * 0x18);
      }
      iVar5 = (int)*plVar2 - uVar7;
      *(int *)plVar2 = iVar5;
      if ((param_2 & AllowSlackOnReduce) == None) {
        UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (0x18,8,(ForAnyElementType *)plVar1,iVar5,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
  }
  return;
}

// Serialize @ 14a8539d0

void __thiscall
TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights>::Serialize
          (TStaticMeshVertexData<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights> *this,
          FArchive *param_1,bool param_2)

{
  TArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_> *)
             &(this->Data)._padding_,param_1,param_2);
  return;
}

// Serialize @ 14a8539e0

void __thiscall
TStaticMeshVertexData<FWN_Matrix3x4H>::Serialize
          (TStaticMeshVertexData<FWN_Matrix3x4H> *this,FArchive *param_1,bool param_2)

{
  TArray<FWN_Matrix3x4H,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<FWN_Matrix3x4H,TMemoryImageAllocator<0>_> *)&(this->Data)._padding_,param_1,
             param_2);
  return;
}

