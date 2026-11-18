// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 55

// Empty @ 145f50870

void __thiscall TStaticMeshVertexData<float>::Empty(TStaticMeshVertexData<float> *this,uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((longlong)&(this->Data)._padding_ + 4);
    *(undefined4 *)&(this->Data)._padding_ = 0;
    if (*puVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,param_1,(ForAnyElementType *)&(this->Data)._padding_,0,(int *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// Empty @ 145f508c0

void __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_>::Empty
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_> *this,
          uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((longlong)&(this->Data)._padding_ + 4);
    *(undefined4 *)&(this->Data)._padding_ = 0;
    if (*puVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x30,4,param_1,(ForAnyElementType *)&(this->Data)._padding_,0,(int *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// Empty @ 145f50910

void __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_>::Empty
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_> *this
          ,uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((longlong)&(this->Data)._padding_ + 4);
    *(undefined4 *)&(this->Data)._padding_ = 0;
    if (*puVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x18,2,param_1,(ForAnyElementType *)&(this->Data)._padding_,0,(int *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// Empty @ 145f50960

void __thiscall
TStaticMeshVertexData<UE::Math::TVector4<float>_>::Empty
          (TStaticMeshVertexData<UE::Math::TVector4<float>_> *this,uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((longlong)&(this->Data)._padding_ + 4);
    *(undefined4 *)&(this->Data)._padding_ = 0;
    if (*puVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x10,0x10,param_1,(ForAnyElementType *)&(this->Data)._padding_,0,(int *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// Empty @ 145f509b0

void __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector>::Empty
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector> *this,
          uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((longlong)&(this->Data)._padding_ + 4);
    *(undefined4 *)&(this->Data)._padding_ = 0;
    if (*puVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,2,param_1,(ForAnyElementType *)&(this->Data)._padding_,0,(int *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// GetAllowCPUAccess @ 145f53490

bool __thiscall TStaticMeshVertexData<float>::GetAllowCPUAccess(TStaticMeshVertexData<float> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145f53498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetAllowCPUAccess @ 145f534b0

bool __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_>::GetAllowCPUAccess
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145f534b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetAllowCPUAccess @ 145f534d0

bool __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_>::
GetAllowCPUAccess(TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_>
                  *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145f534d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetAllowCPUAccess @ 145f534f0

bool __thiscall
TStaticMeshVertexData<UE::Math::TVector4<float>_>::GetAllowCPUAccess
          (TStaticMeshVertexData<UE::Math::TVector4<float>_> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145f534f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetAllowCPUAccess @ 145f53510

bool __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector>::GetAllowCPUAccess
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145f53518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetDataPointer @ 145f53730

uchar * __thiscall TStaticMeshVertexData<float>::GetDataPointer(TStaticMeshVertexData<float> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetDataPointer @ 145f53750

uchar * __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_>::GetDataPointer
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetDataPointer @ 145f53770

uchar * __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_>::GetDataPointer
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_> *this
          )

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetDataPointer @ 145f53790

uchar * __thiscall
TStaticMeshVertexData<UE::Math::TVector4<float>_>::GetDataPointer
          (TStaticMeshVertexData<UE::Math::TVector4<float>_> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetDataPointer @ 145f537b0

uchar * __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector>::GetDataPointer
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetResourceArray @ 145f54810

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<float>::GetResourceArray(TStaticMeshVertexData<float> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceArray @ 145f54820

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_>::GetResourceArray
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceArray @ 145f54830

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_>::
GetResourceArray(TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_>
                 *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceArray @ 145f54840

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<UE::Math::TVector4<float>_>::GetResourceArray
          (TStaticMeshVertexData<UE::Math::TVector4<float>_> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceArray @ 145f54850

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector>::GetResourceArray
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceSize @ 145f54b80

ulong64 __thiscall TStaticMeshVertexData<float>::GetResourceSize(TStaticMeshVertexData<float> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) << 2;
}

// GetResourceSize @ 145f54b90

ulong64 __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_>::GetResourceSize
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) * 0x30;
}

// GetResourceSize @ 145f54bb0

ulong64 __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_>::GetResourceSize
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_> *this
          )

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) * 0x18;
}

// GetResourceSize @ 145f54bd0

ulong64 __thiscall
TStaticMeshVertexData<UE::Math::TVector4<float>_>::GetResourceSize
          (TStaticMeshVertexData<UE::Math::TVector4<float>_> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) << 4;
}

// GetResourceSize @ 145f54be0

ulong64 __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector>::GetResourceSize
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) << 3;
}

// GetStride @ 145f55b50

uint __thiscall TStaticMeshVertexData<float>::GetStride(TStaticMeshVertexData<float> *this)

{
  return 4;
}

// GetStride @ 145f55b60

uint __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_>::GetStride
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_> *this)

{
  return 0x30;
}

// GetStride @ 145f55b70

uint __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_>::GetStride
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_> *this
          )

{
  return 0x18;
}

// GetStride @ 145f55b80

uint __thiscall
TStaticMeshVertexData<UE::Math::TVector4<float>_>::GetStride
          (TStaticMeshVertexData<UE::Math::TVector4<float>_> *this)

{
  return 0x10;
}

// GetStride @ 145f55b90

uint __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector>::GetStride
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector> *this)

{
  return 8;
}

// IsValidIndex @ 145f59000

bool __thiscall
TStaticMeshVertexData<float>::IsValidIndex(TStaticMeshVertexData<float> *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// IsValidIndex @ 145f59020

bool __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_>::IsValidIndex
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_> *this,
          uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// IsValidIndex @ 145f59040

bool __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_>::IsValidIndex
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_> *this
          ,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// IsValidIndex @ 145f59060

bool __thiscall
TStaticMeshVertexData<UE::Math::TVector4<float>_>::IsValidIndex
          (TStaticMeshVertexData<UE::Math::TVector4<float>_> *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// IsValidIndex @ 145f59080

bool __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector>::IsValidIndex
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector> *this,
          uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// Num @ 145f59990

int __thiscall TStaticMeshVertexData<float>::Num(TStaticMeshVertexData<float> *this)

{
  return (int)(this->Data)._padding_;
}

// Num @ 145f599a0

int __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_>::Num
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_> *this)

{
  return (int)(this->Data)._padding_;
}

// Num @ 145f599b0

int __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_>::Num
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_> *this
          )

{
  return (int)(this->Data)._padding_;
}

// Num @ 145f599c0

int __thiscall
TStaticMeshVertexData<UE::Math::TVector4<float>_>::Num
          (TStaticMeshVertexData<UE::Math::TVector4<float>_> *this)

{
  return (int)(this->Data)._padding_;
}

// Num @ 145f599d0

int __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector>::Num
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector> *this)

{
  return (int)(this->Data)._padding_;
}

// OverrideFreezeSizeAndAlignment @ 145f59f60

void __thiscall
TStaticMeshVertexData<float>::OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<float> *this,long64 *param_1,int *param_2)

{
  *param_1 = 0x28;
  return;
}

// OverrideFreezeSizeAndAlignment @ 145f59f70

void __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_>::
OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_> *this,
          long64 *param_1,int *param_2)

{
  *param_1 = 0x28;
  return;
}

// OverrideFreezeSizeAndAlignment @ 145f59f80

void __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_>::
OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_> *this
          ,long64 *param_1,int *param_2)

{
  *param_1 = 0x28;
  return;
}

// OverrideFreezeSizeAndAlignment @ 145f59f90

void __thiscall
TStaticMeshVertexData<UE::Math::TVector4<float>_>::OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<UE::Math::TVector4<float>_> *this,long64 *param_1,int *param_2)

{
  *param_1 = 0x28;
  return;
}

// OverrideFreezeSizeAndAlignment @ 145f59fa0

void __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector>::
OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector> *this,
          long64 *param_1,int *param_2)

{
  *param_1 = 0x28;
  return;
}

// ResizeBuffer @ 145f5d4c0

void __thiscall
TStaticMeshVertexData<float>::ResizeBuffer
          (TStaticMeshVertexData<float> *this,uint param_1,EResizeBufferFlags param_2)

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
                  (4,4,param_1,(ForAnyElementType *)plVar1,uVar7,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,param_1 - (int)(this->Data)._padding_,(ForAnyElementType *)plVar1,(int *)plVar2,
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
      _Dst = (void *)(uVar6 + (longlong)(int)param_1 * 4);
      iVar5 = ((int)*plVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 4),(longlong)iVar5 << 2);
      }
      iVar5 = (int)*plVar2 - uVar7;
      *(int *)plVar2 = iVar5;
      if ((param_2 & AllowSlackOnReduce) == None) {
        UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)plVar1,iVar5,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
  }
  return;
}

// ResizeBuffer @ 145f5d620

void __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_>::ResizeBuffer
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_> *this,
          uint param_1,EResizeBufferFlags param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  void *_Dst;
  
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
                  (0x30,4,param_1,(ForAnyElementType *)plVar1,uVar7,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x30,4,param_1 - (int)(this->Data)._padding_,(ForAnyElementType *)plVar1,
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
      _Dst = (void *)((longlong)(int)param_1 * 0x30 + uVar6);
      iVar5 = ((int)*plVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(_Dst,(void *)((longlong)(int)uVar7 * 0x30 + (longlong)_Dst),(longlong)iVar5 * 0x30);
      }
      iVar5 = (int)*plVar2 - uVar7;
      *(int *)plVar2 = iVar5;
      if ((param_2 & AllowSlackOnReduce) == None) {
        UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (0x30,4,(ForAnyElementType *)plVar1,iVar5,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
  }
  return;
}

// ResizeBuffer @ 145f5d7a0

void __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_>::ResizeBuffer
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_> *this
          ,uint param_1,EResizeBufferFlags param_2)

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
                  (0x18,2,param_1,(ForAnyElementType *)plVar1,uVar7,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x18,2,param_1 - (int)(this->Data)._padding_,(ForAnyElementType *)plVar1,
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
                  (0x18,2,(ForAnyElementType *)plVar1,iVar5,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
  }
  return;
}

// ResizeBuffer @ 145f5d920

void __thiscall
TStaticMeshVertexData<UE::Math::TVector4<float>_>::ResizeBuffer
          (TStaticMeshVertexData<UE::Math::TVector4<float>_> *this,uint param_1,
          EResizeBufferFlags param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  void *_Dst;
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
                  (0x10,0x10,param_1,(ForAnyElementType *)plVar1,uVar7,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x10,0x10,param_1 - (int)(this->Data)._padding_,(ForAnyElementType *)plVar1,
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
      _Dst = (void *)((longlong)(int)param_1 * 0x10 + uVar6);
      iVar5 = ((int)*plVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(_Dst,(void *)((longlong)(int)uVar7 * 0x10 + (longlong)_Dst),(longlong)iVar5 << 4);
      }
      iVar5 = (int)*plVar2 - uVar7;
      *(int *)plVar2 = iVar5;
      if ((param_2 & AllowSlackOnReduce) == None) {
        UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (0x10,0x10,(ForAnyElementType *)plVar1,iVar5,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
  }
  return;
}

// ResizeBuffer @ 145f5da90

void __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector>::ResizeBuffer
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector> *this,
          uint param_1,EResizeBufferFlags param_2)

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
                  (8,2,param_1,(ForAnyElementType *)plVar1,uVar7,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (8,2,param_1 - (int)(this->Data)._padding_,(ForAnyElementType *)plVar1,(int *)plVar2,
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
                  (8,2,(ForAnyElementType *)plVar1,iVar5,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
  }
  return;
}

// Serialize @ 145f5dc00

void __thiscall
TStaticMeshVertexData<float>::Serialize
          (TStaticMeshVertexData<float> *this,FArchive *param_1,bool param_2)

{
  TArray<float,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<float,TMemoryImageAllocator<0>_> *)&(this->Data)._padding_,param_1,param_2);
  return;
}

// Serialize @ 145f5dc10

void __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_>::Serialize
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_> *this,
          FArchive *param_1,bool param_2)

{
  TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>::
  BulkSerialize((TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>
                 *)&(this->Data)._padding_,param_1,param_2);
  return;
}

// Serialize @ 145f5dc20

void __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_>::Serialize
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_> *this
          ,FArchive *param_1,bool param_2)

{
  TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>::
  BulkSerialize((TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>
                 *)&(this->Data)._padding_,param_1,param_2);
  return;
}

// Serialize @ 145f5dc30

void __thiscall
TStaticMeshVertexData<UE::Math::TVector4<float>_>::Serialize
          (TStaticMeshVertexData<UE::Math::TVector4<float>_> *this,FArchive *param_1,bool param_2)

{
  TArray<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_> *)&(this->Data)._padding_,
             param_1,param_2);
  return;
}

// Serialize @ 145f5dc40

void __thiscall
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector>::Serialize
          (TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector> *this,
          FArchive *param_1,bool param_2)

{
  TArray<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_> *)
             &(this->Data)._padding_,param_1,param_2);
  return;
}

