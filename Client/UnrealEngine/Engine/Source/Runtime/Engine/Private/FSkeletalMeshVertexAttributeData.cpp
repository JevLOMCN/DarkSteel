// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// GetDataPointer @ 14846be60

uchar * __thiscall
FSkeletalMeshVertexAttributeData::GetDataPointer(FSkeletalMeshVertexAttributeData *this)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)this->_padding_;
  if (((ulonglong)puVar1 & 1) != 0) {
    puVar1 = (uchar *)((longlong)&this->_padding_ + ((longlong)puVar1 >> 0x18));
  }
  return puVar1;
}

// GetNumVertices @ 14846cb60

uint __thiscall
FSkeletalMeshVertexAttributeData::GetNumVertices(FSkeletalMeshVertexAttributeData *this)

{
  return (int)this->_padding_ / this->Stride;
}

// GetResourceArray @ 14846de70

FResourceArrayInterface * __thiscall
FSkeletalMeshVertexAttributeData::GetResourceArray(FSkeletalMeshVertexAttributeData *this)

{
  FResourceArrayInterface *pFVar1;
  
  pFVar1 = (FResourceArrayInterface *)&this->_padding_;
  if (this == (FSkeletalMeshVertexAttributeData *)0x0) {
    pFVar1 = (FResourceArrayInterface *)0x0;
  }
  return pFVar1;
}

// GetStride @ 1484704b0

uint __thiscall FSkeletalMeshVertexAttributeData::GetStride(FSkeletalMeshVertexAttributeData *this)

{
  return this->Stride;
}

// ResizeBuffer @ 14848bac0

void __thiscall
FSkeletalMeshVertexAttributeData::ResizeBuffer(FSkeletalMeshVertexAttributeData *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  plVar1 = &this->_padding_;
  uVar8 = param_1 * this->Stride;
  plVar2 = &this->_padding_;
  iVar6 = (int)*plVar2;
  if (iVar6 < (int)uVar8) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    piVar3 = (int *)((longlong)&this->_padding_ + 4);
    if (*(int *)((longlong)&this->_padding_ + 4) < (int)uVar8) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (1,1,uVar8,(ForAnyElementType *)plVar1,iVar6,piVar3);
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (1,1,uVar8 - (int)this->_padding_,(ForAnyElementType *)plVar1,(int *)plVar2,piVar3);
  }
  else if ((int)uVar8 < iVar6) {
    uVar9 = iVar6 - uVar8;
    if ((int)(uVar9 | uVar8) < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (uVar9 != 0) {
      uVar7 = *plVar1;
      if ((uVar7 & 1) != 0) {
        uVar7 = (longlong)plVar1 + ((longlong)uVar7 >> 0x18);
      }
      iVar6 = ((int)*plVar2 - uVar9) - uVar8;
      if (iVar6 != 0) {
        memmove((void *)((longlong)(int)uVar8 + uVar7),
                (void *)((longlong)(int)uVar9 + (longlong)((longlong)(int)uVar8 + uVar7)),
                (longlong)iVar6);
      }
      *(uint *)plVar2 = (int)*plVar2 - uVar9;
      UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (1,1,(ForAnyElementType *)plVar1,(int)*plVar2,
                 (int *)((longlong)&this->_padding_ + 4));
    }
  }
  return;
}

// Serialize @ 148491290

void __thiscall
FSkeletalMeshVertexAttributeData::Serialize
          (FSkeletalMeshVertexAttributeData *this,FArchive *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->Stride);
    }
  }
  else {
    this->Stride = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArray<unsigned_char,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<unsigned_char,TMemoryImageAllocator<0>_> *)&this->_padding_,param_1,false);
  return;
}

