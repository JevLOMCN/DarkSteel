// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 132

// Empty @ 148378070

void __thiscall
TStaticMeshVertexData<FPositionVertex>::Empty
          (TStaticMeshVertexData<FPositionVertex> *this,uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((longlong)&(this->Data)._padding_ + 4);
    *(undefined4 *)&(this->Data)._padding_ = 0;
    if (*puVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0xc,4,param_1,(ForAnyElementType *)&(this->Data)._padding_,0,(int *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// GetAllowCPUAccess @ 14837e5f0

bool __thiscall
TStaticMeshVertexData<FPositionVertex>::GetAllowCPUAccess
          (TStaticMeshVertexData<FPositionVertex> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014837e5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetDataPointer @ 148380780

uchar * __thiscall
TStaticMeshVertexData<FPositionVertex>::GetDataPointer(TStaticMeshVertexData<FPositionVertex> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetResourceArray @ 1483876d0

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<FPositionVertex>::GetResourceArray
          (TStaticMeshVertexData<FPositionVertex> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceSize @ 1483878e0

ulong64 __thiscall
TStaticMeshVertexData<FPositionVertex>::GetResourceSize
          (TStaticMeshVertexData<FPositionVertex> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) * 0xc;
}

// GetStride @ 148389f10

uint __thiscall
TStaticMeshVertexData<FPositionVertex>::GetStride(TStaticMeshVertexData<FPositionVertex> *this)

{
  return 0xc;
}

// IsValidIndex @ 148393600

bool __thiscall
TStaticMeshVertexData<FPositionVertex>::IsValidIndex
          (TStaticMeshVertexData<FPositionVertex> *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// Num @ 148395510

int __thiscall
TStaticMeshVertexData<FPositionVertex>::Num(TStaticMeshVertexData<FPositionVertex> *this)

{
  return (int)(this->Data)._padding_;
}

// OverrideFreezeSizeAndAlignment @ 1483970d0

void __thiscall
TStaticMeshVertexData<FPositionVertex>::OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<FPositionVertex> *this,long64 *param_1,int *param_2)

{
  *param_1 = 0x28;
  return;
}

// ResizeBuffer @ 1483a18c0

void __thiscall
TStaticMeshVertexData<FPositionVertex>::ResizeBuffer
          (TStaticMeshVertexData<FPositionVertex> *this,uint param_1,EResizeBufferFlags param_2)

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
                  (0xc,4,param_1,(ForAnyElementType *)plVar1,uVar7,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0xc,4,param_1 - (int)(this->Data)._padding_,(ForAnyElementType *)plVar1,(int *)plVar2
               ,(int *)((longlong)&(this->Data)._padding_ + 4));
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
      _Dst = (void *)(uVar6 + (longlong)(int)param_1 * 0xc);
      iVar5 = ((int)*plVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 0xc),(longlong)iVar5 * 0xc);
      }
      iVar5 = (int)*plVar2 - uVar7;
      *(int *)plVar2 = iVar5;
      if ((param_2 & AllowSlackOnReduce) == None) {
        UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (0xc,4,(ForAnyElementType *)plVar1,iVar5,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
  }
  return;
}

// Serialize @ 1483a3970

void __thiscall
TStaticMeshVertexData<FPositionVertex>::Serialize
          (TStaticMeshVertexData<FPositionVertex> *this,FArchive *param_1,bool param_2)

{
  TArray<FPositionVertex,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<FPositionVertex,TMemoryImageAllocator<0>_> *)&(this->Data)._padding_,param_1,
             param_2);
  return;
}

// Empty @ 1483fdf50

void __thiscall
TStaticMeshVertexData<FColor>::Empty(TStaticMeshVertexData<FColor> *this,uint param_1)

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

// GetAllowCPUAccess @ 148405210

bool __thiscall
TStaticMeshVertexData<FColor>::GetAllowCPUAccess(TStaticMeshVertexData<FColor> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148405218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetDataPointer @ 1484065d0

uchar * __thiscall
TStaticMeshVertexData<FColor>::GetDataPointer(TStaticMeshVertexData<FColor> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetResourceArray @ 14840a340

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<FColor>::GetResourceArray(TStaticMeshVertexData<FColor> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceSize @ 14840a8e0

ulong64 __thiscall
TStaticMeshVertexData<FColor>::GetResourceSize(TStaticMeshVertexData<FColor> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) << 2;
}

// GetStride @ 14840b490

uint __thiscall TStaticMeshVertexData<FColor>::GetStride(TStaticMeshVertexData<FColor> *this)

{
  return 4;
}

// IsValidIndex @ 14840feb0

bool __thiscall
TStaticMeshVertexData<FColor>::IsValidIndex(TStaticMeshVertexData<FColor> *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// Num @ 1484130b0

int __thiscall TStaticMeshVertexData<FColor>::Num(TStaticMeshVertexData<FColor> *this)

{
  return (int)(this->Data)._padding_;
}

// OverrideFreezeSizeAndAlignment @ 148417600

void __thiscall
TStaticMeshVertexData<FColor>::OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<FColor> *this,long64 *param_1,int *param_2)

{
  *param_1 = 0x28;
  return;
}

// ResizeBuffer @ 148421cf0

void __thiscall
TStaticMeshVertexData<FColor>::ResizeBuffer
          (TStaticMeshVertexData<FColor> *this,uint param_1,EResizeBufferFlags param_2)

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

// Serialize @ 148422930

void __thiscall
TStaticMeshVertexData<FColor>::Serialize
          (TStaticMeshVertexData<FColor> *this,FArchive *param_1,bool param_2)

{
  TArray<FColor,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<FColor,TMemoryImageAllocator<0>_> *)&(this->Data)._padding_,param_1,param_2);
  return;
}

// Empty @ 148464350

void __thiscall
TStaticMeshVertexData<unsigned_char>::Empty(TStaticMeshVertexData<unsigned_char> *this,uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((longlong)&(this->Data)._padding_ + 4);
    *(undefined4 *)&(this->Data)._padding_ = 0;
    if (*puVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (1,1,param_1,(ForAnyElementType *)&(this->Data)._padding_,0,(int *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// Empty @ 1484643a0

void __thiscall
TStaticMeshVertexData<unsigned_int>::Empty(TStaticMeshVertexData<unsigned_int> *this,uint param_1)

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

// Empty @ 1484643f0

void __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_>::Empty
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_> *this,uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((longlong)&(this->Data)._padding_ + 4);
    *(undefined4 *)&(this->Data)._padding_ = 0;
    if (*puVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x10,1,param_1,(ForAnyElementType *)&(this->Data)._padding_,0,(int *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// Empty @ 148464440

void __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_>::Empty
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_> *this,uint param_1)

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

// Empty @ 148464490

void __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_>::Empty
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_> *this,uint param_1)

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

// Empty @ 1484644e0

void __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_>::Empty
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_> *this,uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((longlong)&(this->Data)._padding_ + 4);
    *(undefined4 *)&(this->Data)._padding_ = 0;
    if (*puVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0xc,2,param_1,(ForAnyElementType *)&(this->Data)._padding_,0,(int *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// Empty @ 148464530

void __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_>::Empty
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_> *this,uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((longlong)&(this->Data)._padding_ + 4);
    *(undefined4 *)&(this->Data)._padding_ = 0;
    if (*puVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,4,param_1,(ForAnyElementType *)&(this->Data)._padding_,0,(int *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// Empty @ 148464580

void __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_>::Empty
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_> *this,uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((longlong)&(this->Data)._padding_ + 4);
    *(undefined4 *)&(this->Data)._padding_ = 0;
    if (*puVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x10,2,param_1,(ForAnyElementType *)&(this->Data)._padding_,0,(int *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// Empty @ 1484645d0

void __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_>::Empty
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_> *this,
          uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((longlong)&(this->Data)._padding_ + 4);
    *(undefined4 *)&(this->Data)._padding_ = 0;
    if (*puVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,4,param_1,(ForAnyElementType *)&(this->Data)._padding_,0,(int *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// Empty @ 148464620

void __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_>::Empty
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_> *this,uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((longlong)&(this->Data)._padding_ + 4);
    *(undefined4 *)&(this->Data)._padding_ = 0;
    if (*puVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,2,param_1,(ForAnyElementType *)&(this->Data)._padding_,0,(int *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// GetAllowCPUAccess @ 148469140

bool __thiscall
TStaticMeshVertexData<unsigned_char>::GetAllowCPUAccess(TStaticMeshVertexData<unsigned_char> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148469148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetAllowCPUAccess @ 148469160

bool __thiscall
TStaticMeshVertexData<unsigned_int>::GetAllowCPUAccess(TStaticMeshVertexData<unsigned_int> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148469168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetAllowCPUAccess @ 148469180

bool __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_>::GetAllowCPUAccess
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148469188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetAllowCPUAccess @ 1484691a0

bool __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_>::GetAllowCPUAccess
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001484691a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetAllowCPUAccess @ 1484691c0

bool __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_>::GetAllowCPUAccess
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001484691c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetAllowCPUAccess @ 1484691e0

bool __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_>::GetAllowCPUAccess
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001484691e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetAllowCPUAccess @ 148469200

bool __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_>::GetAllowCPUAccess
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148469208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetAllowCPUAccess @ 148469220

bool __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_>::GetAllowCPUAccess
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148469228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetAllowCPUAccess @ 148469240

bool __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_>::GetAllowCPUAccess
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148469248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetAllowCPUAccess @ 148469260

bool __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_>::GetAllowCPUAccess
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148469268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetDataPointer @ 14846bd20

uchar * __thiscall
TStaticMeshVertexData<unsigned_char>::GetDataPointer(TStaticMeshVertexData<unsigned_char> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetDataPointer @ 14846bd40

uchar * __thiscall
TStaticMeshVertexData<unsigned_int>::GetDataPointer(TStaticMeshVertexData<unsigned_int> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetDataPointer @ 14846bd60

uchar * __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_>::GetDataPointer
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetDataPointer @ 14846bd80

uchar * __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_>::GetDataPointer
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetDataPointer @ 14846bda0

uchar * __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_>::GetDataPointer
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetDataPointer @ 14846bdc0

uchar * __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_>::GetDataPointer
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetDataPointer @ 14846bde0

uchar * __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_>::GetDataPointer
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetDataPointer @ 14846be00

uchar * __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_>::GetDataPointer
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetDataPointer @ 14846be20

uchar * __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_>::GetDataPointer
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetDataPointer @ 14846be40

uchar * __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_>::GetDataPointer
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetResourceArray @ 14846ddd0

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<unsigned_char>::GetResourceArray(TStaticMeshVertexData<unsigned_char> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceArray @ 14846dde0

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<unsigned_int>::GetResourceArray(TStaticMeshVertexData<unsigned_int> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceArray @ 14846ddf0

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_>::GetResourceArray
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceArray @ 14846de00

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_>::GetResourceArray
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceArray @ 14846de10

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_>::GetResourceArray
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceArray @ 14846de20

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_>::GetResourceArray
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceArray @ 14846de30

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_>::GetResourceArray
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceArray @ 14846de40

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_>::GetResourceArray
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceArray @ 14846de50

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_>::GetResourceArray
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceArray @ 14846de60

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_>::GetResourceArray
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceSize @ 14846ea10

ulong64 __thiscall
TStaticMeshVertexData<unsigned_char>::GetResourceSize(TStaticMeshVertexData<unsigned_char> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4);
}

// GetResourceSize @ 14846ea20

ulong64 __thiscall
TStaticMeshVertexData<unsigned_int>::GetResourceSize(TStaticMeshVertexData<unsigned_int> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) << 2;
}

// GetResourceSize @ 14846ea30

ulong64 __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_>::GetResourceSize
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) << 4;
}

// GetResourceSize @ 14846ea40

ulong64 __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_>::GetResourceSize
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) * 0x18;
}

// GetResourceSize @ 14846ea60

ulong64 __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_>::GetResourceSize
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) << 3;
}

// GetResourceSize @ 14846ea70

ulong64 __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_>::GetResourceSize
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) * 0xc;
}

// GetResourceSize @ 14846ea90

ulong64 __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_>::GetResourceSize
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) << 3;
}

// GetResourceSize @ 14846eaa0

ulong64 __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_>::GetResourceSize
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) << 4;
}

// GetResourceSize @ 14846eab0

ulong64 __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_>::GetResourceSize
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) << 3;
}

// GetResourceSize @ 14846eac0

ulong64 __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_>::GetResourceSize
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) << 2;
}

// GetStride @ 148470410

uint __thiscall
TStaticMeshVertexData<unsigned_char>::GetStride(TStaticMeshVertexData<unsigned_char> *this)

{
  return 1;
}

// GetStride @ 148470420

uint __thiscall
TStaticMeshVertexData<unsigned_int>::GetStride(TStaticMeshVertexData<unsigned_int> *this)

{
  return 4;
}

// GetStride @ 148470430

uint __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_>::GetStride
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_> *this)

{
  return 0x10;
}

// GetStride @ 148470440

uint __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_>::GetStride
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_> *this)

{
  return 0x18;
}

// GetStride @ 148470450

uint __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_>::GetStride
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_> *this)

{
  return 8;
}

// GetStride @ 148470460

uint __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_>::GetStride
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_> *this)

{
  return 0xc;
}

// GetStride @ 148470470

uint __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_>::GetStride
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_> *this)

{
  return 8;
}

// GetStride @ 148470480

uint __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_>::GetStride
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_> *this)

{
  return 0x10;
}

// GetStride @ 148470490

uint __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_>::GetStride
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_> *this)

{
  return 8;
}

// GetStride @ 1484704a0

uint __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_>::GetStride
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_> *this)

{
  return 4;
}

// IsValidIndex @ 1484789d0

bool __thiscall
TStaticMeshVertexData<unsigned_char>::IsValidIndex
          (TStaticMeshVertexData<unsigned_char> *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// IsValidIndex @ 1484789f0

bool __thiscall
TStaticMeshVertexData<unsigned_int>::IsValidIndex
          (TStaticMeshVertexData<unsigned_int> *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// IsValidIndex @ 148478a10

bool __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_>::IsValidIndex
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_> *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// IsValidIndex @ 148478a30

bool __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_>::IsValidIndex
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_> *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// IsValidIndex @ 148478a50

bool __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_>::IsValidIndex
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_> *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// IsValidIndex @ 148478a70

bool __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_>::IsValidIndex
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_> *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// IsValidIndex @ 148478a90

bool __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_>::IsValidIndex
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_> *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// IsValidIndex @ 148478ab0

bool __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_>::IsValidIndex
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_> *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// IsValidIndex @ 148478ad0

bool __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_>::IsValidIndex
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_> *this,
          uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// IsValidIndex @ 148478af0

bool __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_>::IsValidIndex
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_> *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// Num @ 14847a340

int __thiscall TStaticMeshVertexData<unsigned_char>::Num(TStaticMeshVertexData<unsigned_char> *this)

{
  return (int)(this->Data)._padding_;
}

// Num @ 14847a350

int __thiscall TStaticMeshVertexData<unsigned_int>::Num(TStaticMeshVertexData<unsigned_int> *this)

{
  return (int)(this->Data)._padding_;
}

// Num @ 14847a360

int __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_>::Num
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_> *this)

{
  return (int)(this->Data)._padding_;
}

// Num @ 14847a370

int __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_>::Num
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_> *this)

{
  return (int)(this->Data)._padding_;
}

// Num @ 14847a380

int __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_>::Num
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_> *this)

{
  return (int)(this->Data)._padding_;
}

// Num @ 14847a390

int __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_>::Num
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_> *this)

{
  return (int)(this->Data)._padding_;
}

// Num @ 14847a3a0

int __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_>::Num
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_> *this)

{
  return (int)(this->Data)._padding_;
}

// Num @ 14847a3b0

int __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_>::Num
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_> *this)

{
  return (int)(this->Data)._padding_;
}

// Num @ 14847a3c0

int __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_>::Num
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_> *this)

{
  return (int)(this->Data)._padding_;
}

// Num @ 14847a3d0

int __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_>::Num
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_> *this)

{
  return (int)(this->Data)._padding_;
}

// OverrideFreezeSizeAndAlignment @ 14847af00

void __thiscall
TStaticMeshVertexData<unsigned_char>::OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<unsigned_char> *this,long64 *param_1,int *param_2)

{
  *param_1 = 0x28;
  return;
}

// OverrideFreezeSizeAndAlignment @ 14847af10

void __thiscall
TStaticMeshVertexData<unsigned_int>::OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<unsigned_int> *this,long64 *param_1,int *param_2)

{
  *param_1 = 0x28;
  return;
}

// OverrideFreezeSizeAndAlignment @ 14847af20

void __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_>::OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_> *this,long64 *param_1,
          int *param_2)

{
  *param_1 = 0x28;
  return;
}

// OverrideFreezeSizeAndAlignment @ 14847af30

void __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_>::OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_> *this,long64 *param_1,
          int *param_2)

{
  *param_1 = 0x28;
  return;
}

// OverrideFreezeSizeAndAlignment @ 14847af40

void __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_>::OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_> *this,long64 *param_1,
          int *param_2)

{
  *param_1 = 0x28;
  return;
}

// OverrideFreezeSizeAndAlignment @ 14847af50

void __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_>::OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_> *this,long64 *param_1,
          int *param_2)

{
  *param_1 = 0x28;
  return;
}

// OverrideFreezeSizeAndAlignment @ 14847af60

void __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_>::OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_> *this,
          long64 *param_1,int *param_2)

{
  *param_1 = 0x28;
  return;
}

// OverrideFreezeSizeAndAlignment @ 14847af70

void __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_>::
OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_> *this,
          long64 *param_1,int *param_2)

{
  *param_1 = 0x28;
  return;
}

// OverrideFreezeSizeAndAlignment @ 14847af80

void __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_>::
OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_> *this,
          long64 *param_1,int *param_2)

{
  *param_1 = 0x28;
  return;
}

// OverrideFreezeSizeAndAlignment @ 14847af90

void __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_>::OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_> *this,long64 *param_1,
          int *param_2)

{
  *param_1 = 0x28;
  return;
}

// ResizeBuffer @ 14848ac60

void __thiscall
TStaticMeshVertexData<unsigned_char>::ResizeBuffer
          (TStaticMeshVertexData<unsigned_char> *this,uint param_1,EResizeBufferFlags param_2)

{
  longlong *plVar1;
  longlong *plVar2;
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
                  (1,1,param_1,(ForAnyElementType *)plVar1,uVar7,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (1,1,param_1 - (int)(this->Data)._padding_,(ForAnyElementType *)plVar1,(int *)plVar2,
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
      iVar5 = ((int)*plVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove((void *)(uVar6 + (longlong)(int)param_1),
                (void *)((longlong)(int)uVar7 + (longlong)(uVar6 + (longlong)(int)param_1)),
                (longlong)iVar5);
      }
      iVar5 = (int)*plVar2 - uVar7;
      *(int *)plVar2 = iVar5;
      if ((param_2 & AllowSlackOnReduce) == None) {
        UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (1,1,(ForAnyElementType *)plVar1,iVar5,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
  }
  return;
}

// ResizeBuffer @ 14848adc0

void __thiscall
TStaticMeshVertexData<unsigned_int>::ResizeBuffer
          (TStaticMeshVertexData<unsigned_int> *this,uint param_1,EResizeBufferFlags param_2)

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

// ResizeBuffer @ 14848af20

void __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_>::ResizeBuffer
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_> *this,uint param_1,
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
                  (0x10,1,param_1,(ForAnyElementType *)plVar1,uVar7,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x10,1,param_1 - (int)(this->Data)._padding_,(ForAnyElementType *)plVar1,
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
                  (0x10,1,(ForAnyElementType *)plVar1,iVar5,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
  }
  return;
}

// ResizeBuffer @ 14848b090

void __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_>::ResizeBuffer
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_> *this,uint param_1,
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

// ResizeBuffer @ 14848b210

void __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_>::ResizeBuffer
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_> *this,uint param_1,
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

// ResizeBuffer @ 14848b380

void __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_>::ResizeBuffer
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_> *this,uint param_1,
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
                  (0xc,2,param_1,(ForAnyElementType *)plVar1,uVar7,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0xc,2,param_1 - (int)(this->Data)._padding_,(ForAnyElementType *)plVar1,(int *)plVar2
               ,(int *)((longlong)&(this->Data)._padding_ + 4));
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
      _Dst = (void *)(uVar6 + (longlong)(int)param_1 * 0xc);
      iVar5 = ((int)*plVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 0xc),(longlong)iVar5 * 0xc);
      }
      iVar5 = (int)*plVar2 - uVar7;
      *(int *)plVar2 = iVar5;
      if ((param_2 & AllowSlackOnReduce) == None) {
        UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (0xc,2,(ForAnyElementType *)plVar1,iVar5,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
  }
  return;
}

// ResizeBuffer @ 14848b500

void __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_>::ResizeBuffer
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_> *this,uint param_1,
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
                  (8,4,param_1,(ForAnyElementType *)plVar1,uVar7,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (8,4,param_1 - (int)(this->Data)._padding_,(ForAnyElementType *)plVar1,(int *)plVar2,
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
                  (8,4,(ForAnyElementType *)plVar1,iVar5,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
  }
  return;
}

// ResizeBuffer @ 14848b670

void __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_>::ResizeBuffer
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_> *this,uint param_1,
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
                  (0x10,2,param_1,(ForAnyElementType *)plVar1,uVar7,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x10,2,param_1 - (int)(this->Data)._padding_,(ForAnyElementType *)plVar1,
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
                  (0x10,2,(ForAnyElementType *)plVar1,iVar5,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
  }
  return;
}

// ResizeBuffer @ 14848b7e0

void __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_>::ResizeBuffer
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_> *this,
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
                  (8,4,param_1,(ForAnyElementType *)plVar1,uVar7,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (8,4,param_1 - (int)(this->Data)._padding_,(ForAnyElementType *)plVar1,(int *)plVar2,
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
                  (8,4,(ForAnyElementType *)plVar1,iVar5,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
  }
  return;
}

// ResizeBuffer @ 14848b950

void __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_>::ResizeBuffer
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_> *this,uint param_1,
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
                  (4,2,param_1,(ForAnyElementType *)plVar1,uVar7,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,2,param_1 - (int)(this->Data)._padding_,(ForAnyElementType *)plVar1,(int *)plVar2,
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
                  (4,2,(ForAnyElementType *)plVar1,iVar5,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
  }
  return;
}

// Serialize @ 1484900b0

void __thiscall
TStaticMeshVertexData<unsigned_char>::Serialize
          (TStaticMeshVertexData<unsigned_char> *this,FArchive *param_1,bool param_2)

{
  TArray<unsigned_char,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<unsigned_char,TMemoryImageAllocator<0>_> *)&(this->Data)._padding_,param_1,
             param_2);
  return;
}

// Serialize @ 1484900c0

void __thiscall
TStaticMeshVertexData<unsigned_int>::Serialize
          (TStaticMeshVertexData<unsigned_int> *this,FArchive *param_1,bool param_2)

{
  TArray<unsigned_int,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<unsigned_int,TMemoryImageAllocator<0>_> *)&(this->Data)._padding_,param_1,
             param_2);
  return;
}

// Serialize @ 1484900d0

void __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_>::Serialize
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_char>_> *this,FArchive *param_1,
          bool param_2)

{
  TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<TLegacySkinWeightInfo<1,unsigned_char>,TMemoryImageAllocator<0>_> *)
             &(this->Data)._padding_,param_1,param_2);
  return;
}

// Serialize @ 1484900e0

void __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_>::Serialize
          (TStaticMeshVertexData<TLegacySkinWeightInfo<1,unsigned_short>_> *this,FArchive *param_1,
          bool param_2)

{
  TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<TLegacySkinWeightInfo<1,unsigned_short>,TMemoryImageAllocator<0>_> *)
             &(this->Data)._padding_,param_1,param_2);
  return;
}

// Serialize @ 1484900f0

void __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_>::Serialize
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_char>_> *this,FArchive *param_1,
          bool param_2)

{
  TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<TLegacySkinWeightInfo<0,unsigned_char>,TMemoryImageAllocator<0>_> *)
             &(this->Data)._padding_,param_1,param_2);
  return;
}

// Serialize @ 148490100

void __thiscall
TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_>::Serialize
          (TStaticMeshVertexData<TLegacySkinWeightInfo<0,unsigned_short>_> *this,FArchive *param_1,
          bool param_2)

{
  TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<TLegacySkinWeightInfo<0,unsigned_short>,TMemoryImageAllocator<0>_> *)
             &(this->Data)._padding_,param_1,param_2);
  return;
}

// Serialize @ 148490110

void __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_>::Serialize
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedNormal>_> *this,
          FArchive *param_1,bool param_2)

{
  TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<TStaticMeshVertexTangentDatum<FPackedNormal>,TMemoryImageAllocator<0>_> *)
             &(this->Data)._padding_,param_1,param_2);
  return;
}

// Serialize @ 148490120

void __thiscall
TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_>::Serialize
          (TStaticMeshVertexData<TStaticMeshVertexTangentDatum<FPackedRGBA16N>_> *this,
          FArchive *param_1,bool param_2)

{
  TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<TStaticMeshVertexTangentDatum<FPackedRGBA16N>,TMemoryImageAllocator<0>_> *)
             &(this->Data)._padding_,param_1,param_2);
  return;
}

// Serialize @ 148490130

void __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_>::Serialize
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>_> *this,
          FArchive *param_1,bool param_2)

{
  TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>::
  BulkSerialize((TArray<TStaticMeshVertexUVsDatum<UE::Math::TVector2<float>_>,TMemoryImageAllocator<0>_>
                 *)&(this->Data)._padding_,param_1,param_2);
  return;
}

// Serialize @ 148490140

void __thiscall
TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_>::Serialize
          (TStaticMeshVertexData<TStaticMeshVertexUVsDatum<FVector2DHalf>_> *this,FArchive *param_1,
          bool param_2)

{
  TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<TStaticMeshVertexUVsDatum<FVector2DHalf>,TMemoryImageAllocator<0>_> *)
             &(this->Data)._padding_,param_1,param_2);
  return;
}

