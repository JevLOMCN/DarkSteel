// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 11

// Empty @ 1463b0c10

void __thiscall
TStaticMeshVertexData<unsigned_short>::Empty
          (TStaticMeshVertexData<unsigned_short> *this,uint param_1)

{
  uint *puVar1;
  
  if (-1 < (int)param_1) {
    puVar1 = (uint *)((longlong)&(this->Data)._padding_ + 4);
    *(undefined4 *)&(this->Data)._padding_ = 0;
    if (*puVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (2,2,param_1,(ForAnyElementType *)&(this->Data)._padding_,0,(int *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// GetAllowCPUAccess @ 1463b2d00

bool __thiscall
TStaticMeshVertexData<unsigned_short>::GetAllowCPUAccess
          (TStaticMeshVertexData<unsigned_short> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001463b2d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Data)._padding_ + 0x30))(&this->Data);
  return (bool)uVar1;
}

// GetDataPointer @ 1463b31f0

uchar * __thiscall
TStaticMeshVertexData<unsigned_short>::GetDataPointer(TStaticMeshVertexData<unsigned_short> *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)(this->Data)._padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&(this->Data)._padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetResourceArray @ 1463b7a70

FResourceArrayInterface * __thiscall
TStaticMeshVertexData<unsigned_short>::GetResourceArray(TStaticMeshVertexData<unsigned_short> *this)

{
  return (FResourceArrayInterface *)&this->Data;
}

// GetResourceSize @ 1463b7be0

ulong64 __thiscall
TStaticMeshVertexData<unsigned_short>::GetResourceSize(TStaticMeshVertexData<unsigned_short> *this)

{
  return (longlong)*(int *)((longlong)&(this->Data)._padding_ + 4) * 2;
}

// GetStride @ 1463b89d0

uint __thiscall
TStaticMeshVertexData<unsigned_short>::GetStride(TStaticMeshVertexData<unsigned_short> *this)

{
  return 2;
}

// IsValidIndex @ 1463bccf0

bool __thiscall
TStaticMeshVertexData<unsigned_short>::IsValidIndex
          (TStaticMeshVertexData<unsigned_short> *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(this->Data)._padding_)) {
    return true;
  }
  return false;
}

// Num @ 1463bd320

int __thiscall
TStaticMeshVertexData<unsigned_short>::Num(TStaticMeshVertexData<unsigned_short> *this)

{
  return (int)(this->Data)._padding_;
}

// OverrideFreezeSizeAndAlignment @ 1463bd660

void __thiscall
TStaticMeshVertexData<unsigned_short>::OverrideFreezeSizeAndAlignment
          (TStaticMeshVertexData<unsigned_short> *this,long64 *param_1,int *param_2)

{
  *param_1 = 0x28;
  return;
}

// ResizeBuffer @ 1463c4650

void __thiscall
TStaticMeshVertexData<unsigned_short>::ResizeBuffer
          (TStaticMeshVertexData<unsigned_short> *this,uint param_1,EResizeBufferFlags param_2)

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
                  (2,2,param_1,(ForAnyElementType *)plVar1,uVar7,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (2,2,param_1 - (int)(this->Data)._padding_,(ForAnyElementType *)plVar1,(int *)plVar2,
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
      _Dst = (void *)(uVar6 + (longlong)(int)param_1 * 2);
      iVar5 = ((int)*plVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 2),(longlong)iVar5 * 2);
      }
      iVar5 = (int)*plVar2 - uVar7;
      *(int *)plVar2 = iVar5;
      if ((param_2 & AllowSlackOnReduce) == None) {
        UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (2,2,(ForAnyElementType *)plVar1,iVar5,
                   (int *)((longlong)&(this->Data)._padding_ + 4));
      }
    }
  }
  return;
}

// Serialize @ 1463c4800

void __thiscall
TStaticMeshVertexData<unsigned_short>::Serialize
          (TStaticMeshVertexData<unsigned_short> *this,FArchive *param_1,bool param_2)

{
  TArray<unsigned_short,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<unsigned_short,TMemoryImageAllocator<0>_> *)&(this->Data)._padding_,param_1,
             param_2);
  return;
}

